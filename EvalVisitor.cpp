#include "EvalVisitor.h"
#include "MYHParser.h"
#include <numeric>
#include <stdexcept>

EvalVisitor::VariableInfo *EvalVisitor::findVariable(const std::string &name)
{
    auto itLocal = localMemory.find(name);
    if (itLocal != localMemory.end())
        return &itLocal->second;

    auto itGlobal = globalMemory.find(name);
    if (itGlobal != globalMemory.end())
        return &itGlobal->second;

    return nullptr;
}

int EvalVisitor::getVariableValue(const std::string &name)
{
    auto *var = findVariable(name);
    return var ? var->value : 0;
}

void EvalVisitor::setVariableValue(const std::string &name, int value)
{
    auto *var = findVariable(name);
    if (var)
    {
        var->value = value;
        return;
    }

    // If not declared, create it in the current scope.
    if (callDepth > 0)
        localMemory[name].value = value;
    else
        globalMemory[name].value = value;
}

int EvalVisitor::computeLinearIndex(const VariableInfo &var, const std::vector<int> &indices) const
{
    if (indices.empty())
        return 0;

    if (var.arrayDimensions.empty())
        return indices[0];

    int idx = 0;
    for (size_t i = 0; i < indices.size() && i < var.arrayDimensions.size(); i++)
    {
        int stride = 1;
        for (size_t j = i + 1; j < var.arrayDimensions.size(); j++)
            stride *= var.arrayDimensions[j];
        idx += indices[i] * stride;
    }
    return idx;
}

int EvalVisitor::evalInitializer(MYHParser::InitializerContext *ctx)
{
    if (!ctx)
        return 0;

    if (auto *e = ctx->expr())
        return evalExpr(e);

    return 0;
}

void EvalVisitor::collectInitializerValues(MYHParser::InitializerContext *ctx, std::vector<int> &values)
{
    if (!ctx)
        return;

    if (auto *e = ctx->expr())
    {
        values.push_back(evalExpr(e));
        return;
    }

    if (auto *list = ctx->initializerList())
    {
        for (auto *item : list->initializer())
            collectInitializerValues(item, values);
    }
}

int EvalVisitor::evalExpr(MYHParser::ExprContext *ctx)
{
    if (!ctx)
        return 0;

    if (ctx->INT())
        return std::stoi(ctx->INT()->getText(), nullptr, 10);
    if (ctx->HEX())
        return std::stoi(ctx->HEX()->getText(), nullptr, 16);
    if (ctx->OCT())
        return std::stoi(ctx->OCT()->getText(), nullptr, 8);
    if (ctx->functionCall())
        return std::any_cast<int>(visitFunctionCall(ctx->functionCall()));
    if (ctx->arrayAccess())
        return std::any_cast<int>(visitArrayAccess(ctx->arrayAccess()));
    if (ctx->ID())
        return getVariableValue(ctx->ID()->getText());

    auto sub = ctx->expr();
    if (sub.size() == 1)
    {
        // unary: '!' expr | '-' expr | '(' expr ')'
        if (ctx->children.size() == 3 && ctx->children[0]->getText() == "(")
            return evalExpr(sub[0]);

        if (ctx->children.size() == 2)
        {
            auto op = ctx->children[0]->getText();
            int v = evalExpr(sub[0]);
            if (op == "!")
                return v == 0 ? 1 : 0;
            if (op == "-")
                return -v;
        }

        return evalExpr(sub[0]);
    }

    if (sub.size() == 2 && ctx->op)
    {
        const std::string op = ctx->op->getText();

        if (op == "&&")
        {
            int left = evalExpr(sub[0]);
            if (left == 0)
                return 0;
            int right = evalExpr(sub[1]);
            return (right != 0) ? 1 : 0;
        }
        if (op == "||")
        {
            int left = evalExpr(sub[0]);
            if (left != 0)
                return 1;
            int right = evalExpr(sub[1]);
            return (right != 0) ? 1 : 0;
        }

        int left = evalExpr(sub[0]);
        int right = evalExpr(sub[1]);

        if (op == "+")
            return left + right;
        if (op == "-")
            return left - right;
        if (op == "*")
            return left * right;
        if (op == "/")
            return right == 0 ? 0 : left / right;
        if (op == "%")
            return right == 0 ? 0 : left % right;

        if (op == "<")
            return left < right ? 1 : 0;
        if (op == ">")
            return left > right ? 1 : 0;
        if (op == "<=")
            return left <= right ? 1 : 0;
        if (op == ">=")
            return left >= right ? 1 : 0;
        if (op == "==")
            return left == right ? 1 : 0;
        if (op == "!=")
            return left != right ? 1 : 0;
    }

    return 0;
}

std::any EvalVisitor::visitProgram(MYHParser::ProgramContext *ctx)
{
    // One pass through children keeps source order.
    if (!ctx)
        return 0;

    int lastValue = 0;
    for (auto *child : ctx->children)
    {
        if (!child)
            continue;
        if (child->getText() == "<EOF>")
            break;

        std::any result = visit(child);
        if (result.has_value())
        {
            // best-effort: treat any int result as "last"
            try
            {
                lastValue = std::any_cast<int>(result);
            }
            catch (const std::bad_any_cast &)
            {
            }
        }

        if (returnFlag)
            break;
    }

    // Convenience: if a main() function exists, run it last.
    auto it = functions.find("main");
    if (it != functions.end() && it->second.ctx && it->second.ctx->block())
    {
        // Reuse the same mechanics as a normal call (no args).
        auto oldLocal = localMemory;
        bool oldReturnFlag = returnFlag;
        int oldReturnValue = returnValue;

        localMemory.clear();
        callDepth++;
        returnFlag = false;
        returnValue = 0;

        visitBlock(it->second.ctx->block());
        lastValue = returnValue;

        callDepth--;
        localMemory = oldLocal;
        returnFlag = oldReturnFlag;
        returnValue = oldReturnValue;
    }
    return lastValue;
}

std::any EvalVisitor::visitFunction(MYHParser::FunctionContext *ctx)
{
    if (!ctx || !ctx->ID())
        return 0;

    FunctionInfo info;
    info.ctx = ctx;

    if (auto *ps = ctx->params())
    {
        for (auto *p : ps->param())
        {
            if (p && p->ID())
                info.params.push_back(p->ID()->getText());
        }
    }

    functions[ctx->ID()->getText()] = info;
    return 0;
}

std::any EvalVisitor::visitBlock(MYHParser::BlockContext *ctx)
{
    if (!ctx)
        return 0;

    int lastValue = 0;
    for (auto *st : ctx->statement())
    {
        if (returnFlag)
            break;
        std::any r = visitStatement(st);
        if (r.has_value())
        {
            try
            {
                lastValue = std::any_cast<int>(r);
            }
            catch (const std::bad_any_cast &)
            {
            }
        }
    }
    return lastValue;
}

std::any EvalVisitor::visitStatement(MYHParser::StatementContext *ctx)
{
    if (!ctx || returnFlag)
        return 0;

    if (ctx->declaration())
        return visitDeclaration(ctx->declaration());
    if (ctx->assignment())
        return visitAssignment(ctx->assignment());
    if (ctx->ifStmt())
        return visitIfStmt(ctx->ifStmt());
    if (ctx->whileStmt())
        return visitWhileStmt(ctx->whileStmt());
    if (ctx->returnStmt())
        return visitReturnStmt(ctx->returnStmt());
    if (ctx->block())
        return visitBlock(ctx->block());
    if (ctx->expr())
        return visitExpr(ctx->expr());

    return 0;
}

std::any EvalVisitor::visitIfStmt(MYHParser::IfStmtContext *ctx)
{
    if (!ctx || returnFlag)
        return 0;

    int cond = evalExpr(ctx->expr());
    if (cond != 0)
        visitStatement(ctx->statement(0));
    else if (ctx->statement().size() > 1)
        visitStatement(ctx->statement(1));
    return 0;
}

std::any EvalVisitor::visitWhileStmt(MYHParser::WhileStmtContext *ctx)
{
    if (!ctx || returnFlag)
        return 0;

    int lastValue = 0;
    int guard = 0;
    while (!returnFlag && evalExpr(ctx->expr()) != 0)
    {
        std::any r = visitStatement(ctx->statement());
        if (r.has_value())
        {
            try
            {
                lastValue = std::any_cast<int>(r);
            }
            catch (const std::bad_any_cast &)
            {
            }
        }

        guard++;
        if (guard > 1000000)
            throw std::runtime_error("while loop exceeded 1,000,000 iterations");
    }
    return lastValue;
}

std::any EvalVisitor::visitDeclaration(MYHParser::DeclarationContext *ctx)
{
    if (!ctx || returnFlag)
        return 0;

    for (auto *d : ctx->initDeclarator())
        visitInitDeclarator(d);
    return 0;
}

std::any EvalVisitor::visitInitDeclarator(MYHParser::InitDeclaratorContext *ctx)
{
    if (!ctx || !ctx->ID())
        return 0;

    const std::string name = ctx->ID()->getText();
    auto &mem = (callDepth > 0) ? localMemory : globalMemory;
    mem[name];

    // Optional array allocation.
    if (auto *arr = ctx->arraySuffix())
    {
        auto &var = ((callDepth > 0) ? localMemory : globalMemory)[name];
        var.arrayDimensions.clear();
        for (auto *dimExpr : arr->expr())
        {
            int dim = dimExpr ? evalExpr(dimExpr) : 0;
            if (dim < 0)
                dim = 0;
            var.arrayDimensions.push_back(dim);
        }

        int total = 1;
        for (int d : var.arrayDimensions)
            total *= (d > 0 ? d : 0);
        if (total < 0)
            total = 0;
        var.arrayValues.assign(static_cast<size_t>(total), 0);
    }

    // Optional scalar init.
    if (auto *init = ctx->initializer())
    {
        auto &var = ((callDepth > 0) ? localMemory : globalMemory)[name];
        if (var.arrayDimensions.empty())
        {
            int value = evalInitializer(init);
            ((callDepth > 0) ? localMemory : globalMemory)[name].value = value;
        }
        else
        {
            std::vector<int> values;
            collectInitializerValues(init, values);
            auto &arrayVar = ((callDepth > 0) ? localMemory : globalMemory)[name];
            for (size_t i = 0; i < values.size() && i < arrayVar.arrayValues.size(); i++)
            {
                arrayVar.arrayValues[i] = values[i];
            }
        }
    }

    return 0;
}

std::any EvalVisitor::visitAssignment(MYHParser::AssignmentContext *ctx)
{
    if (!ctx || !ctx->ID() || returnFlag)
        return 0;

    const std::string name = ctx->ID()->getText();
    auto exprs = ctx->expr();
    if (exprs.empty())
        return 0;

    int rhs = evalExpr(exprs.back());
    std::vector<int> indices;
    for (size_t i = 0; i + 1 < exprs.size(); i++)
        indices.push_back(evalExpr(exprs[i]));

    auto *var = findVariable(name);
    if (!var)
    {
        // Create on first assignment.
        setVariableValue(name, rhs);
        return rhs;
    }

    if (indices.empty() || var->arrayDimensions.empty())
    {
        var->value = rhs;
        return rhs;
    }

    int idx = computeLinearIndex(*var, indices);
    if (idx >= 0 && static_cast<size_t>(idx) < var->arrayValues.size())
        var->arrayValues[static_cast<size_t>(idx)] = rhs;
    return rhs;
}

std::any EvalVisitor::visitReturnStmt(MYHParser::ReturnStmtContext *ctx)
{
    if (!ctx)
        return 0;

    returnValue = evalExpr(ctx->expr());
    returnFlag = true;
    return returnValue;
}

std::any EvalVisitor::visitExpr(MYHParser::ExprContext *ctx)
{
    return evalExpr(ctx);
}

std::any EvalVisitor::visitArgs(MYHParser::ArgsContext *ctx)
{
    // Not directly used; functionCall pulls expr() list itself.
    return ctx ? 0 : 0;
}

std::any EvalVisitor::visitFunctionCall(MYHParser::FunctionCallContext *ctx)
{
    if (!ctx || !ctx->ID())
        return 0;

    const std::string name = ctx->ID()->getText();
    auto it = functions.find(name);
    if (it == functions.end() || !it->second.ctx)
        return 0;

    const FunctionInfo &fn = it->second;

    std::vector<int> argVals;
    if (auto *a = ctx->args())
    {
        for (auto *e : a->expr())
            argVals.push_back(evalExpr(e));
    }

    auto oldLocal = localMemory;
    bool oldReturnFlag = returnFlag;
    int oldReturnValue = returnValue;

    localMemory.clear();
    callDepth++;
    returnFlag = false;
    returnValue = 0;

    for (size_t i = 0; i < fn.params.size(); i++)
    {
        int v = (i < argVals.size()) ? argVals[i] : 0;
        localMemory[fn.params[i]].value = v;
    }

    visitBlock(fn.ctx->block());

    int result = returnValue;

    callDepth--;
    localMemory = oldLocal;
    returnFlag = oldReturnFlag;
    returnValue = oldReturnValue;

    return result;
}

std::any EvalVisitor::visitArrayAccess(MYHParser::ArrayAccessContext *ctx)
{
    if (!ctx || !ctx->ID())
        return 0;

    auto *var = findVariable(ctx->ID()->getText());
    if (!var)
        return 0;

    std::vector<int> indices;
    for (auto *e : ctx->expr())
        indices.push_back(evalExpr(e));

    if (var->arrayDimensions.empty())
        return var->value;

    int idx = computeLinearIndex(*var, indices);
    if (idx >= 0 && static_cast<size_t>(idx) < var->arrayValues.size())
        return var->arrayValues[static_cast<size_t>(idx)];
    return 0;
}

std::any EvalVisitor::visitType(MYHParser::TypeContext *ctx)
{
    return ctx ? 0 : 0;
}

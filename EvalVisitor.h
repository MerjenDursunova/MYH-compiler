#pragma once

#include "MYHBaseVisitor.h"
#include <any>
#include <map>
#include <vector>
#include <string>

class EvalVisitor : public MYHBaseVisitor
{
public:
    struct VariableInfo
    {
        int value = 0;
        std::vector<int> arrayValues;
        std::vector<int> arrayDimensions;
    };

    struct FunctionInfo
    {
        std::vector<std::string> params;
        MYHParser::FunctionContext *ctx = nullptr;
    };

    std::map<std::string, VariableInfo> globalMemory;
    std::map<std::string, VariableInfo> localMemory;
    std::map<std::string, FunctionInfo> functions;

    bool returnFlag = false;
    int returnValue = 0;

    std::any visitProgram(MYHParser::ProgramContext *ctx) override;
    std::any visitFunction(MYHParser::FunctionContext *ctx) override;
    std::any visitBlock(MYHParser::BlockContext *ctx) override;
    std::any visitStatement(MYHParser::StatementContext *ctx) override;
    std::any visitIfStmt(MYHParser::IfStmtContext *ctx) override;
    std::any visitWhileStmt(MYHParser::WhileStmtContext *ctx) override;
    std::any visitDeclaration(MYHParser::DeclarationContext *ctx) override;
    std::any visitInitDeclarator(MYHParser::InitDeclaratorContext *ctx) override;
    std::any visitAssignment(MYHParser::AssignmentContext *ctx) override;
    std::any visitReturnStmt(MYHParser::ReturnStmtContext *ctx) override;
    std::any visitExpr(MYHParser::ExprContext *ctx) override;
    std::any visitFunctionCall(MYHParser::FunctionCallContext *ctx) override;
    std::any visitArgs(MYHParser::ArgsContext *ctx) override;
    std::any visitArrayAccess(MYHParser::ArrayAccessContext *ctx) override;
    std::any visitType(MYHParser::TypeContext *ctx) override;

    int getVariableValue(const std::string &name);
    void setVariableValue(const std::string &name, int value);

private:
    int callDepth = 0;
    VariableInfo *findVariable(const std::string &name);
    int evalExpr(MYHParser::ExprContext *ctx);
    int evalInitializer(MYHParser::InitializerContext *ctx);
    void collectInitializerValues(MYHParser::InitializerContext *ctx, std::vector<int> &values);
    int computeLinearIndex(const VariableInfo &var, const std::vector<int> &indices) const;
};

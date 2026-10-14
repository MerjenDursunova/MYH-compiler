
// Generated from MYH.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "MYHParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by MYHParser.
 */
class  MYHVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by MYHParser.
   */
    virtual std::any visitProgram(MYHParser::ProgramContext *context) = 0;

    virtual std::any visitFunction(MYHParser::FunctionContext *context) = 0;

    virtual std::any visitParams(MYHParser::ParamsContext *context) = 0;

    virtual std::any visitParam(MYHParser::ParamContext *context) = 0;

    virtual std::any visitBlock(MYHParser::BlockContext *context) = 0;

    virtual std::any visitStatement(MYHParser::StatementContext *context) = 0;

    virtual std::any visitIfStmt(MYHParser::IfStmtContext *context) = 0;

    virtual std::any visitWhileStmt(MYHParser::WhileStmtContext *context) = 0;

    virtual std::any visitDeclaration(MYHParser::DeclarationContext *context) = 0;

    virtual std::any visitInitDeclarator(MYHParser::InitDeclaratorContext *context) = 0;

    virtual std::any visitArraySuffix(MYHParser::ArraySuffixContext *context) = 0;

    virtual std::any visitInitializer(MYHParser::InitializerContext *context) = 0;

    virtual std::any visitInitializerList(MYHParser::InitializerListContext *context) = 0;

    virtual std::any visitAssignment(MYHParser::AssignmentContext *context) = 0;

    virtual std::any visitReturnStmt(MYHParser::ReturnStmtContext *context) = 0;

    virtual std::any visitExpr(MYHParser::ExprContext *context) = 0;

    virtual std::any visitFunctionCall(MYHParser::FunctionCallContext *context) = 0;

    virtual std::any visitArgs(MYHParser::ArgsContext *context) = 0;

    virtual std::any visitArrayAccess(MYHParser::ArrayAccessContext *context) = 0;

    virtual std::any visitType(MYHParser::TypeContext *context) = 0;


};


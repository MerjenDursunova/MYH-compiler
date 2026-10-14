
// Generated from MYH.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "MYHParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by MYHParser.
 */
class  MYHListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(MYHParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(MYHParser::ProgramContext *ctx) = 0;

  virtual void enterFunction(MYHParser::FunctionContext *ctx) = 0;
  virtual void exitFunction(MYHParser::FunctionContext *ctx) = 0;

  virtual void enterParams(MYHParser::ParamsContext *ctx) = 0;
  virtual void exitParams(MYHParser::ParamsContext *ctx) = 0;

  virtual void enterParam(MYHParser::ParamContext *ctx) = 0;
  virtual void exitParam(MYHParser::ParamContext *ctx) = 0;

  virtual void enterBlock(MYHParser::BlockContext *ctx) = 0;
  virtual void exitBlock(MYHParser::BlockContext *ctx) = 0;

  virtual void enterStatement(MYHParser::StatementContext *ctx) = 0;
  virtual void exitStatement(MYHParser::StatementContext *ctx) = 0;

  virtual void enterIfStmt(MYHParser::IfStmtContext *ctx) = 0;
  virtual void exitIfStmt(MYHParser::IfStmtContext *ctx) = 0;

  virtual void enterWhileStmt(MYHParser::WhileStmtContext *ctx) = 0;
  virtual void exitWhileStmt(MYHParser::WhileStmtContext *ctx) = 0;

  virtual void enterForStmt(MYHParser::ForStmtContext *ctx) = 0;
  virtual void exitForStmt(MYHParser::ForStmtContext *ctx) = 0;

  virtual void enterForInit(MYHParser::ForInitContext *ctx) = 0;
  virtual void exitForInit(MYHParser::ForInitContext *ctx) = 0;

  virtual void enterForCond(MYHParser::ForCondContext *ctx) = 0;
  virtual void exitForCond(MYHParser::ForCondContext *ctx) = 0;

  virtual void enterForUpdate(MYHParser::ForUpdateContext *ctx) = 0;
  virtual void exitForUpdate(MYHParser::ForUpdateContext *ctx) = 0;

  virtual void enterDeclaration(MYHParser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(MYHParser::DeclarationContext *ctx) = 0;

  virtual void enterInitDeclarator(MYHParser::InitDeclaratorContext *ctx) = 0;
  virtual void exitInitDeclarator(MYHParser::InitDeclaratorContext *ctx) = 0;

  virtual void enterArraySuffix(MYHParser::ArraySuffixContext *ctx) = 0;
  virtual void exitArraySuffix(MYHParser::ArraySuffixContext *ctx) = 0;

  virtual void enterInitializer(MYHParser::InitializerContext *ctx) = 0;
  virtual void exitInitializer(MYHParser::InitializerContext *ctx) = 0;

  virtual void enterInitializerList(MYHParser::InitializerListContext *ctx) = 0;
  virtual void exitInitializerList(MYHParser::InitializerListContext *ctx) = 0;

  virtual void enterAssignment(MYHParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(MYHParser::AssignmentContext *ctx) = 0;

  virtual void enterReturnStmt(MYHParser::ReturnStmtContext *ctx) = 0;
  virtual void exitReturnStmt(MYHParser::ReturnStmtContext *ctx) = 0;

  virtual void enterExpr(MYHParser::ExprContext *ctx) = 0;
  virtual void exitExpr(MYHParser::ExprContext *ctx) = 0;

  virtual void enterFunctionCall(MYHParser::FunctionCallContext *ctx) = 0;
  virtual void exitFunctionCall(MYHParser::FunctionCallContext *ctx) = 0;

  virtual void enterArgs(MYHParser::ArgsContext *ctx) = 0;
  virtual void exitArgs(MYHParser::ArgsContext *ctx) = 0;

  virtual void enterArrayAccess(MYHParser::ArrayAccessContext *ctx) = 0;
  virtual void exitArrayAccess(MYHParser::ArrayAccessContext *ctx) = 0;

  virtual void enterType(MYHParser::TypeContext *ctx) = 0;
  virtual void exitType(MYHParser::TypeContext *ctx) = 0;


};



// Generated from MYH.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "MYHListener.h"


/**
 * This class provides an empty implementation of MYHListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  MYHBaseListener : public MYHListener {
public:

  virtual void enterProgram(MYHParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(MYHParser::ProgramContext * /*ctx*/) override { }

  virtual void enterFunction(MYHParser::FunctionContext * /*ctx*/) override { }
  virtual void exitFunction(MYHParser::FunctionContext * /*ctx*/) override { }

  virtual void enterParams(MYHParser::ParamsContext * /*ctx*/) override { }
  virtual void exitParams(MYHParser::ParamsContext * /*ctx*/) override { }

  virtual void enterParam(MYHParser::ParamContext * /*ctx*/) override { }
  virtual void exitParam(MYHParser::ParamContext * /*ctx*/) override { }

  virtual void enterBlock(MYHParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(MYHParser::BlockContext * /*ctx*/) override { }

  virtual void enterStatement(MYHParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(MYHParser::StatementContext * /*ctx*/) override { }

  virtual void enterIfStmt(MYHParser::IfStmtContext * /*ctx*/) override { }
  virtual void exitIfStmt(MYHParser::IfStmtContext * /*ctx*/) override { }

  virtual void enterWhileStmt(MYHParser::WhileStmtContext * /*ctx*/) override { }
  virtual void exitWhileStmt(MYHParser::WhileStmtContext * /*ctx*/) override { }

  virtual void enterForStmt(MYHParser::ForStmtContext * /*ctx*/) override { }
  virtual void exitForStmt(MYHParser::ForStmtContext * /*ctx*/) override { }

  virtual void enterForInit(MYHParser::ForInitContext * /*ctx*/) override { }
  virtual void exitForInit(MYHParser::ForInitContext * /*ctx*/) override { }

  virtual void enterForCond(MYHParser::ForCondContext * /*ctx*/) override { }
  virtual void exitForCond(MYHParser::ForCondContext * /*ctx*/) override { }

  virtual void enterForUpdate(MYHParser::ForUpdateContext * /*ctx*/) override { }
  virtual void exitForUpdate(MYHParser::ForUpdateContext * /*ctx*/) override { }

  virtual void enterDeclaration(MYHParser::DeclarationContext * /*ctx*/) override { }
  virtual void exitDeclaration(MYHParser::DeclarationContext * /*ctx*/) override { }

  virtual void enterInitDeclarator(MYHParser::InitDeclaratorContext * /*ctx*/) override { }
  virtual void exitInitDeclarator(MYHParser::InitDeclaratorContext * /*ctx*/) override { }

  virtual void enterArraySuffix(MYHParser::ArraySuffixContext * /*ctx*/) override { }
  virtual void exitArraySuffix(MYHParser::ArraySuffixContext * /*ctx*/) override { }

  virtual void enterInitializer(MYHParser::InitializerContext * /*ctx*/) override { }
  virtual void exitInitializer(MYHParser::InitializerContext * /*ctx*/) override { }

  virtual void enterInitializerList(MYHParser::InitializerListContext * /*ctx*/) override { }
  virtual void exitInitializerList(MYHParser::InitializerListContext * /*ctx*/) override { }

  virtual void enterAssignment(MYHParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(MYHParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterReturnStmt(MYHParser::ReturnStmtContext * /*ctx*/) override { }
  virtual void exitReturnStmt(MYHParser::ReturnStmtContext * /*ctx*/) override { }

  virtual void enterExpr(MYHParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(MYHParser::ExprContext * /*ctx*/) override { }

  virtual void enterFunctionCall(MYHParser::FunctionCallContext * /*ctx*/) override { }
  virtual void exitFunctionCall(MYHParser::FunctionCallContext * /*ctx*/) override { }

  virtual void enterArgs(MYHParser::ArgsContext * /*ctx*/) override { }
  virtual void exitArgs(MYHParser::ArgsContext * /*ctx*/) override { }

  virtual void enterArrayAccess(MYHParser::ArrayAccessContext * /*ctx*/) override { }
  virtual void exitArrayAccess(MYHParser::ArrayAccessContext * /*ctx*/) override { }

  virtual void enterType(MYHParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(MYHParser::TypeContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};


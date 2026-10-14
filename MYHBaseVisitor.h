
// Generated from MYH.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "MYHVisitor.h"


/**
 * This class provides an empty implementation of MYHVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  MYHBaseVisitor : public MYHVisitor {
public:

  virtual std::any visitProgram(MYHParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction(MYHParser::FunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParams(MYHParser::ParamsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParam(MYHParser::ParamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(MYHParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(MYHParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfStmt(MYHParser::IfStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhileStmt(MYHParser::WhileStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclaration(MYHParser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInitDeclarator(MYHParser::InitDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArraySuffix(MYHParser::ArraySuffixContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInitializer(MYHParser::InitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInitializerList(MYHParser::InitializerListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment(MYHParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturnStmt(MYHParser::ReturnStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr(MYHParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionCall(MYHParser::FunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArgs(MYHParser::ArgsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrayAccess(MYHParser::ArrayAccessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType(MYHParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }


};


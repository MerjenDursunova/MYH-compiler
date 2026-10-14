
// Generated from Test.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "TestListener.h"


/**
 * This class provides an empty implementation of TestListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  TestBaseListener : public TestListener {
public:

  virtual void enterR(TestParser::RContext * /*ctx*/) override { }
  virtual void exitR(TestParser::RContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};


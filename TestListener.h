
// Generated from Test.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "TestParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by TestParser.
 */
class  TestListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterR(TestParser::RContext *ctx) = 0;
  virtual void exitR(TestParser::RContext *ctx) = 0;


};



// Generated from Math.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "MathParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by MathParser.
 */
class  MathListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterCompileUnit(MathParser::CompileUnitContext *ctx) = 0;
  virtual void exitCompileUnit(MathParser::CompileUnitContext *ctx) = 0;

  virtual void enterUnaryExpr(MathParser::UnaryExprContext *ctx) = 0;
  virtual void exitUnaryExpr(MathParser::UnaryExprContext *ctx) = 0;

  virtual void enterFuncExpr(MathParser::FuncExprContext *ctx) = 0;
  virtual void exitFuncExpr(MathParser::FuncExprContext *ctx) = 0;

  virtual void enterAddSubExpr(MathParser::AddSubExprContext *ctx) = 0;
  virtual void exitAddSubExpr(MathParser::AddSubExprContext *ctx) = 0;

  virtual void enterMulDivExpr(MathParser::MulDivExprContext *ctx) = 0;
  virtual void exitMulDivExpr(MathParser::MulDivExprContext *ctx) = 0;

  virtual void enterParenExpr(MathParser::ParenExprContext *ctx) = 0;
  virtual void exitParenExpr(MathParser::ParenExprContext *ctx) = 0;

  virtual void enterNumExpr(MathParser::NumExprContext *ctx) = 0;
  virtual void exitNumExpr(MathParser::NumExprContext *ctx) = 0;


};


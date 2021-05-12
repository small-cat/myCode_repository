
// Generated from Math.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "MathListener.h"


/**
 * This class provides an empty implementation of MathListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  MathBaseListener : public MathListener {
public:

  virtual void enterCompileUnit(MathParser::CompileUnitContext * /*ctx*/) override { }
  virtual void exitCompileUnit(MathParser::CompileUnitContext * /*ctx*/) override { }

  virtual void enterTestSubExpr(MathParser::TestSubExprContext * /*ctx*/) override { }
  virtual void exitTestSubExpr(MathParser::TestSubExprContext * /*ctx*/) override { }

  virtual void enterUnaryExpr(MathParser::UnaryExprContext * /*ctx*/) override { }
  virtual void exitUnaryExpr(MathParser::UnaryExprContext * /*ctx*/) override { }

  virtual void enterFuncExpr(MathParser::FuncExprContext * /*ctx*/) override { }
  virtual void exitFuncExpr(MathParser::FuncExprContext * /*ctx*/) override { }

  virtual void enterAddSubExpr(MathParser::AddSubExprContext * /*ctx*/) override { }
  virtual void exitAddSubExpr(MathParser::AddSubExprContext * /*ctx*/) override { }

  virtual void enterMulDivExpr(MathParser::MulDivExprContext * /*ctx*/) override { }
  virtual void exitMulDivExpr(MathParser::MulDivExprContext * /*ctx*/) override { }

  virtual void enterParenExpr(MathParser::ParenExprContext * /*ctx*/) override { }
  virtual void exitParenExpr(MathParser::ParenExprContext * /*ctx*/) override { }

  virtual void enterNumExpr(MathParser::NumExprContext * /*ctx*/) override { }
  virtual void exitNumExpr(MathParser::NumExprContext * /*ctx*/) override { }

  virtual void enterOpt(MathParser::OptContext * /*ctx*/) override { }
  virtual void exitOpt(MathParser::OptContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};



// Generated from Expr.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "ExprListener.h"


/**
 * This class provides an empty implementation of ExprListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  ExprBaseListener : public ExprListener {
public:

  virtual void enterProg(ExprParser::ProgContext * /*ctx*/) override { }
  virtual void exitProg(ExprParser::ProgContext * /*ctx*/) override { }

  virtual void enterStat(ExprParser::StatContext * /*ctx*/) override { }
  virtual void exitStat(ExprParser::StatContext * /*ctx*/) override { }

  virtual void enterSub_expr(ExprParser::Sub_exprContext * /*ctx*/) override { }
  virtual void exitSub_expr(ExprParser::Sub_exprContext * /*ctx*/) override { }

  virtual void enterAdd_expr(ExprParser::Add_exprContext * /*ctx*/) override { }
  virtual void exitAdd_expr(ExprParser::Add_exprContext * /*ctx*/) override { }

  virtual void enterAtom_expr(ExprParser::Atom_exprContext * /*ctx*/) override { }
  virtual void exitAtom_expr(ExprParser::Atom_exprContext * /*ctx*/) override { }

  virtual void enterDiv_expr(ExprParser::Div_exprContext * /*ctx*/) override { }
  virtual void exitDiv_expr(ExprParser::Div_exprContext * /*ctx*/) override { }

  virtual void enterMul_expr(ExprParser::Mul_exprContext * /*ctx*/) override { }
  virtual void exitMul_expr(ExprParser::Mul_exprContext * /*ctx*/) override { }

  virtual void enterAtom(ExprParser::AtomContext * /*ctx*/) override { }
  virtual void exitAtom(ExprParser::AtomContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};


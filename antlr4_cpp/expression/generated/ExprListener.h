
// Generated from /home/jona/myGit/myCode_repository/antlr4_cpp/expression/Expr.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "ExprParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by ExprParser.
 */
class  ExprListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProg(ExprParser::ProgContext *ctx) = 0;
  virtual void exitProg(ExprParser::ProgContext *ctx) = 0;

  virtual void enterStat(ExprParser::StatContext *ctx) = 0;
  virtual void exitStat(ExprParser::StatContext *ctx) = 0;

  virtual void enterSub_expr(ExprParser::Sub_exprContext *ctx) = 0;
  virtual void exitSub_expr(ExprParser::Sub_exprContext *ctx) = 0;

  virtual void enterAdd_expr(ExprParser::Add_exprContext *ctx) = 0;
  virtual void exitAdd_expr(ExprParser::Add_exprContext *ctx) = 0;

  virtual void enterAtom_expr(ExprParser::Atom_exprContext *ctx) = 0;
  virtual void exitAtom_expr(ExprParser::Atom_exprContext *ctx) = 0;

  virtual void enterDiv_expr(ExprParser::Div_exprContext *ctx) = 0;
  virtual void exitDiv_expr(ExprParser::Div_exprContext *ctx) = 0;

  virtual void enterMul_expr(ExprParser::Mul_exprContext *ctx) = 0;
  virtual void exitMul_expr(ExprParser::Mul_exprContext *ctx) = 0;

  virtual void enterAtom(ExprParser::AtomContext *ctx) = 0;
  virtual void exitAtom(ExprParser::AtomContext *ctx) = 0;


};


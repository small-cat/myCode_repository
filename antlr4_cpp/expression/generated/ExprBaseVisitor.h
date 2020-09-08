
// Generated from /home/jona/myGit/myCode_repository/antlr4_cpp/expression/Expr.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "ExprVisitor.h"


/**
 * This class provides an empty implementation of ExprVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ExprBaseVisitor : public ExprVisitor {
public:

  virtual antlrcpp::Any visitProg(ExprParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStat(ExprParser::StatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSub_expr(ExprParser::Sub_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdd_expr(ExprParser::Add_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAtom_expr(ExprParser::Atom_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDiv_expr(ExprParser::Div_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMul_expr(ExprParser::Mul_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAtom(ExprParser::AtomContext *ctx) override {
    return visitChildren(ctx);
  }


};


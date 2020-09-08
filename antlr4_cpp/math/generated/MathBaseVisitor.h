
// Generated from Math.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "MathVisitor.h"


/**
 * This class provides an empty implementation of MathVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  MathBaseVisitor : public MathVisitor {
public:

  virtual antlrcpp::Any visitCompileUnit(MathParser::CompileUnitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnaryExpr(MathParser::UnaryExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuncExpr(MathParser::FuncExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddSubExpr(MathParser::AddSubExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMulDivExpr(MathParser::MulDivExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParenExpr(MathParser::ParenExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumExpr(MathParser::NumExprContext *ctx) override {
    return visitChildren(ctx);
  }


};


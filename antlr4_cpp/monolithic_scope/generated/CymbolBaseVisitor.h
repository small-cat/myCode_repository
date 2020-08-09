
// Generated from Cymbol.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "CymbolVisitor.h"


/**
 * This class provides an empty implementation of CymbolVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  CymbolBaseVisitor : public CymbolVisitor {
public:

  virtual antlrcpp::Any visitCompilationUnit(CymbolParser::CompilationUnitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType(CymbolParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVar_declaration(CymbolParser::Var_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(CymbolParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }


};


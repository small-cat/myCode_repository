
// Generated from Cymbol.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "CymbolParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by CymbolParser.
 */
class  CymbolListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterCompilationUnit(CymbolParser::CompilationUnitContext *ctx) = 0;
  virtual void exitCompilationUnit(CymbolParser::CompilationUnitContext *ctx) = 0;

  virtual void enterType(CymbolParser::TypeContext *ctx) = 0;
  virtual void exitType(CymbolParser::TypeContext *ctx) = 0;

  virtual void enterVar_declaration(CymbolParser::Var_declarationContext *ctx) = 0;
  virtual void exitVar_declaration(CymbolParser::Var_declarationContext *ctx) = 0;

  virtual void enterExpression(CymbolParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(CymbolParser::ExpressionContext *ctx) = 0;


};


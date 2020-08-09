
// Generated from Cymbol.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "CymbolListener.h"


/**
 * This class provides an empty implementation of CymbolListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  CymbolBaseListener : public CymbolListener {
public:

  virtual void enterCompilationUnit(CymbolParser::CompilationUnitContext * /*ctx*/) override { }
  virtual void exitCompilationUnit(CymbolParser::CompilationUnitContext * /*ctx*/) override { }

  virtual void enterType(CymbolParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(CymbolParser::TypeContext * /*ctx*/) override { }

  virtual void enterVar_declaration(CymbolParser::Var_declarationContext * /*ctx*/) override { }
  virtual void exitVar_declaration(CymbolParser::Var_declarationContext * /*ctx*/) override { }

  virtual void enterExpression(CymbolParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(CymbolParser::ExpressionContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};


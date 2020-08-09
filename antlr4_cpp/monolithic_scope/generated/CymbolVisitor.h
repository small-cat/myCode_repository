
// Generated from Cymbol.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "CymbolParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by CymbolParser.
 */
class  CymbolVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by CymbolParser.
   */
    virtual antlrcpp::Any visitCompilationUnit(CymbolParser::CompilationUnitContext *context) = 0;

    virtual antlrcpp::Any visitType(CymbolParser::TypeContext *context) = 0;

    virtual antlrcpp::Any visitVar_declaration(CymbolParser::Var_declarationContext *context) = 0;

    virtual antlrcpp::Any visitExpression(CymbolParser::ExpressionContext *context) = 0;


};


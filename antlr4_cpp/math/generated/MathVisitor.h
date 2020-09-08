
// Generated from Math.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "MathParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by MathParser.
 */
class  MathVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by MathParser.
   */
    virtual antlrcpp::Any visitCompileUnit(MathParser::CompileUnitContext *context) = 0;

    virtual antlrcpp::Any visitUnaryExpr(MathParser::UnaryExprContext *context) = 0;

    virtual antlrcpp::Any visitFuncExpr(MathParser::FuncExprContext *context) = 0;

    virtual antlrcpp::Any visitAddSubExpr(MathParser::AddSubExprContext *context) = 0;

    virtual antlrcpp::Any visitMulDivExpr(MathParser::MulDivExprContext *context) = 0;

    virtual antlrcpp::Any visitParenExpr(MathParser::ParenExprContext *context) = 0;

    virtual antlrcpp::Any visitNumExpr(MathParser::NumExprContext *context) = 0;


};



// Generated from /home/jona/myGit/myCode_repository/antlr4_cpp/expression/Expr.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "ExprParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ExprParser.
 */
class  ExprVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ExprParser.
   */
    virtual antlrcpp::Any visitProg(ExprParser::ProgContext *context) = 0;

    virtual antlrcpp::Any visitStat(ExprParser::StatContext *context) = 0;

    virtual antlrcpp::Any visitSub_expr(ExprParser::Sub_exprContext *context) = 0;

    virtual antlrcpp::Any visitAdd_expr(ExprParser::Add_exprContext *context) = 0;

    virtual antlrcpp::Any visitAtom_expr(ExprParser::Atom_exprContext *context) = 0;

    virtual antlrcpp::Any visitDiv_expr(ExprParser::Div_exprContext *context) = 0;

    virtual antlrcpp::Any visitMul_expr(ExprParser::Mul_exprContext *context) = 0;

    virtual antlrcpp::Any visitAtom(ExprParser::AtomContext *context) = 0;


};


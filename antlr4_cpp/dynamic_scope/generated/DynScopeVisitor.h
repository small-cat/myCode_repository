
// Generated from /home/jona/myGit/myCode_repository/antlr4_cpp/dynamic_scope/DynScope.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "DynScopeParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by DynScopeParser.
 */
class  DynScopeVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by DynScopeParser.
   */
    virtual antlrcpp::Any visitProg(DynScopeParser::ProgContext *context) = 0;

    virtual antlrcpp::Any visitBlock(DynScopeParser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitDecl(DynScopeParser::DeclContext *context) = 0;

    virtual antlrcpp::Any visitStat(DynScopeParser::StatContext *context) = 0;


};


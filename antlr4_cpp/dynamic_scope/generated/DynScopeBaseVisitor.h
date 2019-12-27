
// Generated from /home/jona/myGit/myCode_repository/antlr4_cpp/dynamic_scope/DynScope.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "DynScopeVisitor.h"


/**
 * This class provides an empty implementation of DynScopeVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  DynScopeBaseVisitor : public DynScopeVisitor {
public:

  virtual antlrcpp::Any visitProg(DynScopeParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(DynScopeParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDecl(DynScopeParser::DeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStat(DynScopeParser::StatContext *ctx) override {
    return visitChildren(ctx);
  }


};



// Generated from /home/jona/myGit/myCode_repository/antlr4_cpp/dynamic_scope/DynScope.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "DynScopeParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by DynScopeParser.
 */
class  DynScopeListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProg(DynScopeParser::ProgContext *ctx) = 0;
  virtual void exitProg(DynScopeParser::ProgContext *ctx) = 0;

  virtual void enterBlock(DynScopeParser::BlockContext *ctx) = 0;
  virtual void exitBlock(DynScopeParser::BlockContext *ctx) = 0;

  virtual void enterDecl(DynScopeParser::DeclContext *ctx) = 0;
  virtual void exitDecl(DynScopeParser::DeclContext *ctx) = 0;

  virtual void enterStat(DynScopeParser::StatContext *ctx) = 0;
  virtual void exitStat(DynScopeParser::StatContext *ctx) = 0;


};


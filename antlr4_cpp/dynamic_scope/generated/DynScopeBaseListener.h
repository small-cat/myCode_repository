
// Generated from /home/jona/myGit/myCode_repository/antlr4_cpp/dynamic_scope/DynScope.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "DynScopeListener.h"


/**
 * This class provides an empty implementation of DynScopeListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  DynScopeBaseListener : public DynScopeListener {
public:

  virtual void enterProg(DynScopeParser::ProgContext * /*ctx*/) override { }
  virtual void exitProg(DynScopeParser::ProgContext * /*ctx*/) override { }

  virtual void enterBlock(DynScopeParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(DynScopeParser::BlockContext * /*ctx*/) override { }

  virtual void enterDecl(DynScopeParser::DeclContext * /*ctx*/) override { }
  virtual void exitDecl(DynScopeParser::DeclContext * /*ctx*/) override { }

  virtual void enterStat(DynScopeParser::StatContext * /*ctx*/) override { }
  virtual void exitStat(DynScopeParser::StatContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};


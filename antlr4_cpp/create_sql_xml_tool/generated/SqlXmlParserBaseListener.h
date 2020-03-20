
// Generated from /home/jona/myGit/myCode_repository/antlr4_cpp/create_sql_xml_tool/SqlXmlParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "SqlXmlParserListener.h"


/**
 * This class provides an empty implementation of SqlXmlParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  SqlXmlParserBaseListener : public SqlXmlParserListener {
public:

  virtual void enterStmts(SqlXmlParser::StmtsContext * /*ctx*/) override { }
  virtual void exitStmts(SqlXmlParser::StmtsContext * /*ctx*/) override { }

  virtual void enterStmt(SqlXmlParser::StmtContext * /*ctx*/) override { }
  virtual void exitStmt(SqlXmlParser::StmtContext * /*ctx*/) override { }

  virtual void enterFunc_name(SqlXmlParser::Func_nameContext * /*ctx*/) override { }
  virtual void exitFunc_name(SqlXmlParser::Func_nameContext * /*ctx*/) override { }

  virtual void enterSomething_else(SqlXmlParser::Something_elseContext * /*ctx*/) override { }
  virtual void exitSomething_else(SqlXmlParser::Something_elseContext * /*ctx*/) override { }

  virtual void enterIdentifier(SqlXmlParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(SqlXmlParser::IdentifierContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};


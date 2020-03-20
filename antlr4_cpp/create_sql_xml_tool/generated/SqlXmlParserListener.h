
// Generated from /home/jona/myGit/myCode_repository/antlr4_cpp/create_sql_xml_tool/SqlXmlParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "SqlXmlParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by SqlXmlParser.
 */
class  SqlXmlParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterStmts(SqlXmlParser::StmtsContext *ctx) = 0;
  virtual void exitStmts(SqlXmlParser::StmtsContext *ctx) = 0;

  virtual void enterStmt(SqlXmlParser::StmtContext *ctx) = 0;
  virtual void exitStmt(SqlXmlParser::StmtContext *ctx) = 0;

  virtual void enterFunc_name(SqlXmlParser::Func_nameContext *ctx) = 0;
  virtual void exitFunc_name(SqlXmlParser::Func_nameContext *ctx) = 0;

  virtual void enterSomething_else(SqlXmlParser::Something_elseContext *ctx) = 0;
  virtual void exitSomething_else(SqlXmlParser::Something_elseContext *ctx) = 0;

  virtual void enterIdentifier(SqlXmlParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(SqlXmlParser::IdentifierContext *ctx) = 0;


};


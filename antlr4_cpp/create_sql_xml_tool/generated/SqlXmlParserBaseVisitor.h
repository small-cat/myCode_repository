
// Generated from /home/jona/myGit/myCode_repository/antlr4_cpp/create_sql_xml_tool/SqlXmlParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "SqlXmlParserVisitor.h"


/**
 * This class provides an empty implementation of SqlXmlParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  SqlXmlParserBaseVisitor : public SqlXmlParserVisitor {
public:

  virtual antlrcpp::Any visitStmts(SqlXmlParser::StmtsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmt(SqlXmlParser::StmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc_name(SqlXmlParser::Func_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSomething_else(SqlXmlParser::Something_elseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifier(SqlXmlParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }


};


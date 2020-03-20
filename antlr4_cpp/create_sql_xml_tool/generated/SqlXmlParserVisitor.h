
// Generated from /home/jona/myGit/myCode_repository/antlr4_cpp/create_sql_xml_tool/SqlXmlParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "SqlXmlParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by SqlXmlParser.
 */
class  SqlXmlParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by SqlXmlParser.
   */
    virtual antlrcpp::Any visitStmts(SqlXmlParser::StmtsContext *context) = 0;

    virtual antlrcpp::Any visitStmt(SqlXmlParser::StmtContext *context) = 0;

    virtual antlrcpp::Any visitFunc_name(SqlXmlParser::Func_nameContext *context) = 0;

    virtual antlrcpp::Any visitSomething_else(SqlXmlParser::Something_elseContext *context) = 0;

    virtual antlrcpp::Any visitIdentifier(SqlXmlParser::IdentifierContext *context) = 0;


};


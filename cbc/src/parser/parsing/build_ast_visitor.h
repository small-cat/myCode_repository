/**
 * @copyright (c) Copyright 2020 . All Rights Reserved.
 * @license
 * @file  : build_ast_visitor.h
 * @author: Jona 
 * @email : wuzhenyu@secsmart.net
 * @date  : 2020-09-24
 * @brief : build ast from antlr4 cst by visitor
*/

#ifndef __BUILD_AST_VISITOR_H__
#define __BUILD_AST_VISITOR_H__

#include "SesameParser.h"
#include "SesameLexer.h"
#include "SesameParserBaseVisitor.h"

namespace parser {
class BuildAstVistor : public SesameParserBaseVisitor {
public:
  BuildAstVistor(SesameParser* parser, LibraryLoader* loader, const std::string& sname, ErrorHandler* handler);
  virtual ~BuildAstVistor();

  antlrcpp::Any visitCompilation_unit(SesameParser::Compilation_unitContext *context) = 0;

  antlrcpp::Any visitDeclaration_file(SesameParser::Declaration_fileContext *context) = 0;

  antlrcpp::Any visitImport_stmt(SesameParser::Import_stmtContext *context) = 0;

  antlrcpp::Any visitName(SesameParser::NameContext *context) = 0;

  antlrcpp::Any visitTop_def(SesameParser::Top_defContext *context) = 0;

  antlrcpp::Any visitDef_func(SesameParser::Def_funcContext *context) = 0;

  antlrcpp::Any visitStorage(SesameParser::StorageContext *context) = 0;

  antlrcpp::Any visitParams(SesameParser::ParamsContext *context) = 0;

  antlrcpp::Any visitFixed_params(SesameParser::Fixed_paramsContext *context) = 0;

  antlrcpp::Any visitParam(SesameParser::ParamContext *context) = 0;

  antlrcpp::Any visitBlock(SesameParser::BlockContext *context) = 0;

  antlrcpp::Any visitDef_vars(SesameParser::Def_varsContext *context) = 0;

  antlrcpp::Any visitAssign_expr(SesameParser::Assign_exprContext *context) = 0;

  antlrcpp::Any visitDef_const(SesameParser::Def_constContext *context) = 0;

  antlrcpp::Any visitDef_struct(SesameParser::Def_structContext *context) = 0;

  antlrcpp::Any visitDef_union(SesameParser::Def_unionContext *context) = 0;

  antlrcpp::Any visitMember_list(SesameParser::Member_listContext *context) = 0;

  antlrcpp::Any visitSlot(SesameParser::SlotContext *context) = 0;

  antlrcpp::Any visitS_typedef(SesameParser::S_typedefContext *context) = 0;

  antlrcpp::Any visitType(SesameParser::TypeContext *context) = 0;

  antlrcpp::Any visitTyperef(SesameParser::TyperefContext *context) = 0;

  antlrcpp::Any visitTyperef_base(SesameParser::Typeref_baseContext *context) = 0;

  antlrcpp::Any visitParam_typerefs(SesameParser::Param_typerefsContext *context) = 0;

  antlrcpp::Any visitFixed_param_typerefs(SesameParser::Fixed_param_typerefsContext *context) = 0;

  antlrcpp::Any visitStmts(SesameParser::StmtsContext *context) = 0;

  antlrcpp::Any visitStmt(SesameParser::StmtContext *context) = 0;

  antlrcpp::Any visitLabeled_stmt(SesameParser::Labeled_stmtContext *context) = 0;

  antlrcpp::Any visitIf_stmt(SesameParser::If_stmtContext *context) = 0;

  antlrcpp::Any visitWhile_stmt(SesameParser::While_stmtContext *context) = 0;

  antlrcpp::Any visitDo_while_stmt(SesameParser::Do_while_stmtContext *context) = 0;

  antlrcpp::Any visitFor_stmt(SesameParser::For_stmtContext *context) = 0;

  antlrcpp::Any visitSwitch_stmt(SesameParser::Switch_stmtContext *context) = 0;

  antlrcpp::Any visitCase_clauses(SesameParser::Case_clausesContext *context) = 0;

  antlrcpp::Any visitCase_clause(SesameParser::Case_clauseContext *context) = 0;

  antlrcpp::Any visitCases(SesameParser::CasesContext *context) = 0;

  antlrcpp::Any visitDefault_clause(SesameParser::Default_clauseContext *context) = 0;

  antlrcpp::Any visitCase_body(SesameParser::Case_bodyContext *context) = 0;

  antlrcpp::Any visitBreak_stmt(SesameParser::Break_stmtContext *context) = 0;

  antlrcpp::Any visitContinue_stmt(SesameParser::Continue_stmtContext *context) = 0;

  antlrcpp::Any visitGoto_stmt(SesameParser::Goto_stmtContext *context) = 0;

  antlrcpp::Any visitReturn_stmt(SesameParser::Return_stmtContext *context) = 0;

  antlrcpp::Any visitExpr(SesameParser::ExprContext *context) = 0;

  antlrcpp::Any visitOpassign_op(SesameParser::Opassign_opContext *context) = 0;

  antlrcpp::Any visitExpr10(SesameParser::Expr10Context *context) = 0;

  antlrcpp::Any visitExpr8(SesameParser::Expr8Context *context) = 0;

  antlrcpp::Any visitExpr7(SesameParser::Expr7Context *context) = 0;

  antlrcpp::Any visitLogical_op(SesameParser::Logical_opContext *context) = 0;

  antlrcpp::Any visitExpr6(SesameParser::Expr6Context *context) = 0;

  antlrcpp::Any visitExpr5(SesameParser::Expr5Context *context) = 0;

  antlrcpp::Any visitExpr4(SesameParser::Expr4Context *context) = 0;

  antlrcpp::Any visitExpr3(SesameParser::Expr3Context *context) = 0;

  antlrcpp::Any visitExpr2(SesameParser::Expr2Context *context) = 0;

  antlrcpp::Any visitExpr1(SesameParser::Expr1Context *context) = 0;

  antlrcpp::Any visitTerm(SesameParser::TermContext *context) = 0;

  antlrcpp::Any visitUnary(SesameParser::UnaryContext *context) = 0;

  antlrcpp::Any visitPostfix(SesameParser::PostfixContext *context) = 0;

  antlrcpp::Any visitArgs(SesameParser::ArgsContext *context) = 0;

  antlrcpp::Any visitPrimary(SesameParser::PrimaryContext *context) = 0;

  void AddKnownTypedefs(std::vector<ast::TypedefNode*> typedefs);
private:
  SesameParser* parser_;
  antlr4::TokenStream* tokens_;

  LibraryLoader* loader_;
  std::string source_name_;
  ErrorHandler* err_handler_;
  std::vector<std::string> known_typedefs_;
};
} /* end parser */

#endif /* __BUILD_AST_VISITOR_H__ */

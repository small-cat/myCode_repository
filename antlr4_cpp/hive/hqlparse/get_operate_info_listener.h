/*****************************************************************************
 * @file  : get_operate_info_listener.h - 
 * @brief : (c) Copyright 2019 . All Rights Reserved.
 * @author:  
 * @email : 
 * @date  : 2019-11-18
*****************************************************************************/
#ifndef __GET_OPERATE_INFO_LISTENER_H__
#define __GET_OPERATE_INFO_LISTENER_H__

#include <string.h>

#include "HqlsqlParser.h"
#include "HqlsqlParserBaseListener.h"

#include "IParser.h"
#include "item.h"
#include "get_operate_info_from_dag.h"

namespace antlr4_hive_parser {

class GetOperateInfoListener : public HqlsqlParserBaseListener {
public:
  GetOperateInfoListener(HqlsqlParser* parser);
  virtual ~GetOperateInfoListener();

  std::vector<parser::OperateInfo> operate_info_list();

  // create stmt
  void enterCreate_database_stmt(HqlsqlParser::Create_database_stmtContext* ctx);
  void enterCreate_table_stmt(HqlsqlParser::Create_table_stmtContext* ctx);

  // drop stmt
  void enterDrop_db_schema_stmt(HqlsqlParser::Drop_db_schema_stmtContext *ctx);
  void enterDrop_table_view_role_index_stmt(HqlsqlParser::Drop_table_view_role_index_stmtContext* ctx);
  void enterDrop_macro_func_stmt(HqlsqlParser::Drop_macro_func_stmtContext* ctx);

  // use stmt
  void enterUse_stmt(HqlsqlParser::Use_stmtContext* ctx);

  // alter_stmt
  void enterAlter_table_stmt(HqlsqlParser::Alter_table_stmtContext* ctx);
  void enterAlter_db_schema_view(HqlsqlParser::Alter_db_schema_viewContext* ctx);
  void enterAlter_materialized_view(HqlsqlParser::Alter_materialized_viewContext* ctx);
  void enterAlter_index(HqlsqlParser::Alter_indexContext* ctx);
  void enterAlter_view_as_select(HqlsqlParser::Alter_view_as_selectContext* ctx);

  // allocate_cursor_stmt 
  // associate_locator_stmt
  // begin_transaction_stmt
  // abort_transactions_stmt
  // break_stmt
  // call_stmt
  // collect_stats_stmt
  // close_stmt
  // cmp_stmt
  // copy_from_local_stmt
  // copy_stmt
  // commit_stmt
  // create_function_stmt 
  void enterCreate_temporary_function(HqlsqlParser::Create_temporary_functionContext* ctx);
  void enterCreate_permanent_function(HqlsqlParser::Create_permanent_functionContext* ctx);
  //void enterCreate_function_procedure(HqlsqlParser::Create_function_procedureContext* ctx);

  // create_index_stmt
  void enterCreate_index_stmt(HqlsqlParser::Create_index_stmtContext* ctx);

  // create_view_stmt 
  void enterCreate_view_stmt(HqlsqlParser::Create_view_stmtContext* ctx);

  // create_macro_stmt
  void enterCreate_macro_stmt(HqlsqlParser::Create_macro_stmtContext* ctx);

  // reload_function 
  void enterReload_function(HqlsqlParser::Reload_functionContext* ctx);

  // create_role_stmt
  void enterCreate_role_stmt(HqlsqlParser::Create_role_stmtContext* ctx);

  // grant_revoke_role_stmt
  void enterGrant_revoke_role_stmt(HqlsqlParser::Grant_revoke_role_stmtContext* ctx);

  // grant_revoke_privilege_stmt
  // TODO: NOT IMPLEMENTS

  // DML
  // load_file_stmt
  void enterLoad_file_stmt(HqlsqlParser::Load_file_stmtContext* ctx);

  // insert_stmt
  void enterInsert_into_table_from_sql(HqlsqlParser::Insert_into_table_from_sqlContext* ctx);
  void enterInsert_tables_overwrite_into(HqlsqlParser::Insert_tables_overwrite_intoContext* ctx);
  void enterInsert_directory_stmt(HqlsqlParser::Insert_directory_stmtContext* ctx);

  // update_stmt
  void enterUpdate_stmt(HqlsqlParser::Update_stmtContext* ctx);
  void exitUpdate_stmt(HqlsqlParser::Update_stmtContext* ctx);

  // delete_stmt
  void enterDelete_stmt(HqlsqlParser::Delete_stmtContext* ctx);

  // merge_stmt
  void enterMerge_stmt(HqlsqlParser::Merge_stmtContext* ctx);

  // analyze_table_stmt
  void enterAnalyze_table_stmt(HqlsqlParser::Analyze_table_stmtContext* ctx);

  // show_stmt
  // TODO: NOT IMPLEMENTS
  
  // describe_stmt
  void enterDesc_db_schema(HqlsqlParser::Desc_db_schemaContext* ctx);
  void enterDesc_table_view_column(HqlsqlParser::Desc_table_view_columnContext* ctx);

  // import_stmt
  void enterImport_stmt(HqlsqlParser::Import_stmtContext* ctx);
  
  // export_stmt
  void enterExport_stmt(HqlsqlParser::Export_stmtContext* ctx);
   
  // explain_stmt, ignore this sentence
  // assignment_stmt
  void enterAssignment_stmt(HqlsqlParser::Assignment_stmtContext* ctx);
  void exitAssignment_stmt(HqlsqlParser::Assignment_stmtContext* ctx);
  void enterAssignment_stmt_single_item(HqlsqlParser::Assignment_stmt_single_itemContext* ctx);

  // select_stmt
  void enterCommon_table_expression(HqlsqlParser::Common_table_expressionContext* ctx);
  void exitSubselect_stmt(HqlsqlParser::Subselect_stmtContext* ctx);

  void enterFrom_clause(HqlsqlParser::From_clauseContext* ctx);
  void enterFrom_table_name_clause(HqlsqlParser::From_table_name_clauseContext* ctx);
  void exitFrom_table_name_clause(HqlsqlParser::From_table_name_clauseContext* ctx);
  void enterFrom_alias_clause(HqlsqlParser::From_alias_clauseContext* ctx);
  void enterFrom_subselect_clause(HqlsqlParser::From_subselect_clauseContext* ctx);

  void enterSelect_list(HqlsqlParser::Select_listContext* ctx);
  void enterSelect_list_item_normal(HqlsqlParser::Select_list_item_normalContext* ctx);
  void enterSelect_list_item_asterisk(HqlsqlParser::Select_list_item_asteriskContext* ctx);
  void enterFullselect_set_clause(HqlsqlParser::Fullselect_set_clauseContext* ctx);

  sqlparse::ColumnDAG column_dag();

private:
  std::string StringToUpper(std::string str);
  std::string StringTrim(std::string src, const std::string delim);
  parser::OperateObject GetOperateObject(std::string objectName);
  void AddOperateObject(parser::OperateObject &obj);
  void SetOperateInfo(parser::OperateInfo &op_info, const std::string &operate, const std::string &objectType);

private:
  HqlsqlParser* parser_;
  parser::OperateObject operate_object_;
  parser::OperateInfo operate_info_;
  std::vector<parser::OperateInfo> operate_info_list_;

  bool in_set_assignment_stmt_;
  bool in_update_stmt_;

  // for column_dag 
  sqlparse::ColumnDAG column_dag_;
  std::vector<std::string> subquery_namev_;
  
  sqlparse::ColumnItemList column_list_;
  std::vector<sqlparse::ColumnItemList> column_list_restore_;

  sqlparse::TableItemList table_list_;
  sqlparse::TableItem table_item_;
  std::vector<sqlparse::TableItemList> table_list_restore_;

  int count_for_name_;
};
} // antlr4_hive_parser

#endif /* __GET_OPERATE_INFO_LISTENER_H__ */

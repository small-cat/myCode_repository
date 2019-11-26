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

namespace antlr4_hive_parser {

class GetOperateInfoListener : public HqlsqlParserBaseListener {
public:
  GetOperateInfoListener(HqlsqlParser* parser);
  virtual ~GetOperateInfoListener();

  std::vector<parser::OperateInfo> operate_info_list();

  void enterSemicolon_stmt(HqlsqlParser::Semicolon_stmtContext* ctx);

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
  void enterCreate_function_procedure(HqlsqlParser::Create_function_procedureContext* ctx);

  // create_index_stmt
  void enterCreate_index_stmt(HqlsqlParser::Create_index_stmtContext* ctx);

  // create_local_temp_table_stmt
  // create_package_stmt
  // create_package_body_stmt
  // create_procedure_stmt
  // declare_stmt
  // end_transaction_stmt
  // exec_stmt 
  // exit_stmt
  // fetch_stmt
  // for_cursor_stmt
  // for_range_stmt
  // if_stmt     
  // include_stmt
  // get_diag_stmt
  // leave_stmt
  // map_object_stmt
  // open_stmt
  // print_stmt
  // quit_stmt
  // raise_stmt
  // resignal_stmt
  // return_stmt
  // rollback_stmt
  // signal_stmt
  // summary_stmt
  // truncate_table_stmt 
  // values_into_stmt
  // while_stmt
  // label    
  // hive    
  // host 
  // 
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

  // delete_stmt
  void enterDelete_stmt(HqlsqlParser::Delete_stmtContext* ctx);

  // merge_stmt
  void enterMerge_stmt(HqlsqlParser::Merge_stmtContext* ctx);

  // analyze_table_stmt
  void enterAnalyze_table_stmt(HqlsqlParser::Analyze_table_stmtContext* ctx);

  // select_stmt
  // TODO: NOT IMPLEMENTS

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

private:
  std::string StringToUpper(std::string str);
  parser::OperateObject GetOperateObject(std::string objectName);
  void AddOperateObject(parser::OperateObject &obj);
  void SetOperateInfo(parser::OperateInfo &op_info, const std::string &operate, const std::string &objectType);
private:
  HqlsqlParser* parser_;
  parser::OperateObject operate_object_;
  parser::OperateInfo operate_info_;
  std::vector<parser::OperateInfo> operate_info_list_;
};
} // antlr4_hive_parser

#endif /* __GET_OPERATE_INFO_LISTENER_H__ */

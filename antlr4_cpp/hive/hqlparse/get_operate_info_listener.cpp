/*****************************************************************************
 * @file  : get_operate_info_listener.cpp - 
 * @brief : (c) Copyright 2019 . All Rights Reserved.
 * @author:  
 * @email : 
 * @date  : 2019-11-18
*****************************************************************************/
#include "get_operate_info_listener.h"
#include "IParser.h"

namespace antlr4_hive_parser { 
GetOperateInfoListener::GetOperateInfoListener(HqlsqlParser *parser) 
  : parser_(parser) {}

GetOperateInfoListener::~GetOperateInfoListener() {}

std::vector<parser::OperateInfo> GetOperateInfoListener::operate_info_list() {
  return operate_info_list_;
}

void GetOperateInfoListener::enterCreate_database_stmt(HqlsqlParser::Create_database_stmtContext* ctx) {
  if (nullptr == ctx) {
    return;
  }

  auto db_ctx = ctx->T_DATABASE();
  auto schema_ctx = ctx->T_SCHEMA();
  auto ident_ctx = ctx->ident();

  if (db_ctx) {
    SetOperateInfo(operate_info_, "CREATE", "DATABASE");
  } else if (schema_ctx) {
    SetOperateInfo(operate_info_, "CREATE", "SCHEMA");
  }

  parser::OperateObject obj = GetOperateObject(ident_ctx->getText());
  AddOperateObject(obj);
}

/***********************************************************
 * every time, when travel here, show the end of current sql.
 * clear operate_info_ for the next sql if exists.
 * sqls are separated by semicolon, or '@' or '#' or '/'
 * @author Jona
 * @param 
 * @date 19/11/2019 
***********************************************************/ 
void GetOperateInfoListener::enterSemicolon_stmt(HqlsqlParser::Semicolon_stmtContext* ctx) {
  if (nullptr == ctx) {
    return;
  }
  
  operate_info_.clear();
}

void GetOperateInfoListener::enterDrop_db_schema_stmt(HqlsqlParser::Drop_db_schema_stmtContext *ctx) {
  if (nullptr == ctx) {
    return;
  }

  auto database_ctx = ctx->T_DATABASE();
  auto schema_ctx   = ctx->T_SCHEMA();
  auto ident_ctx = ctx->ident();
  if (database_ctx) {
    SetOperateInfo(operate_info_, "DROP", "DATABASE");
  } else if (schema_ctx) {
    SetOperateInfo(operate_info_, "DROP", "SCHEMA");
  }

  parser::OperateObject obj = GetOperateObject(ident_ctx->getText());
  AddOperateObject(obj);
}

void GetOperateInfoListener::enterDrop_table_view_role_index_stmt(HqlsqlParser::Drop_table_view_role_index_stmtContext* ctx) {
  auto tk_type = ctx->tk;   // token
  auto ident_ctx = ctx->ident();

  operate_info_.objectType = StringToUpper(tk_type->getText());
  SetOperateInfo(operate_info_, "DROP", StringToUpper(tk_type->getText()));
  parser::OperateObject obj = GetOperateObject(ident_ctx->getText());
  AddOperateObject(obj);
}

void GetOperateInfoListener::enterDrop_macro_func_stmt(HqlsqlParser::Drop_macro_func_stmtContext* ctx) {
  auto tk_type = ctx->tk;
  auto ident_ctx = ctx->ident();

  SetOperateInfo(operate_info_, "DROP", StringToUpper(tk_type->getText()));
  parser::OperateObject obj = GetOperateObject(ident_ctx->getText());
  AddOperateObject(obj);
}

void GetOperateInfoListener::enterUse_stmt(HqlsqlParser::Use_stmtContext *ctx) {
  if (nullptr == ctx) {
    return;
  }

  auto expr_ctx = ctx->expr();

  SetOperateInfo(operate_info_, "USE", "DATABASE");
  parser::OperateObject obj = GetOperateObject(expr_ctx->getText());
  AddOperateObject(obj);
}

void GetOperateInfoListener::enterCreate_table_stmt(HqlsqlParser::Create_table_stmtContext *ctx) {
  if (nullptr == ctx) {
    return;
  }

  auto tb_name_ctx = ctx->table_name();

  SetOperateInfo(operate_info_, "CREATE", "TABLE");
  parser::OperateObject obj = GetOperateObject(tb_name_ctx->getText());
  AddOperateObject(obj);
}

/********************** ATLER STATEMENT ***************************************/
void GetOperateInfoListener::enterAlter_table_stmt(HqlsqlParser::Alter_table_stmtContext* ctx) {
  auto table_name_ctx = ctx->table_name();

  SetOperateInfo(operate_info_, "ALTER", "TABLE");
  parser::OperateObject obj = GetOperateObject(table_name_ctx->getText());
  AddOperateObject(obj);
}

void GetOperateInfoListener::enterAlter_db_schema_view(HqlsqlParser::Alter_db_schema_viewContext* ctx) {
  auto token_type = ctx->tk;
  auto name_ctx = ctx->ident();

  SetOperateInfo(operate_info_, "ALTER", StringToUpper(token_type->getText()));

  parser::OperateObject obj = GetOperateObject(name_ctx->getText());
  AddOperateObject(obj);
}

void GetOperateInfoListener::enterAlter_materialized_view(HqlsqlParser::Alter_materialized_viewContext* ctx) {
  SetOperateInfo(operate_info_, "ALTER", "MATERIALIZED VIEW");

  auto view_name_ctx = ctx->view_name();
  parser::OperateObject obj = GetOperateObject(view_name_ctx->getText());
  AddOperateObject(obj);
}

void GetOperateInfoListener::enterAlter_index(HqlsqlParser::Alter_indexContext* ctx) {
  SetOperateInfo(operate_info_, "ALTER", "INDEX");

  auto index_name_ctx = ctx->ident();
  parser::OperateObject obj = GetOperateObject(index_name_ctx->getText());
  AddOperateObject(obj);
}

void GetOperateInfoListener::enterCreate_temporary_function(HqlsqlParser::Create_temporary_functionContext* ctx) {
  auto ident_ctx = ctx->ident();

  SetOperateInfo(operate_info_, "CREATE", "TEMPORARY FUNCTION");

  parser::OperateObject obj = GetOperateObject(ident_ctx->getText());
  AddOperateObject(obj);
}

void GetOperateInfoListener::enterCreate_permanent_function(HqlsqlParser::Create_permanent_functionContext* ctx) {
  auto ident_ctx = ctx->ident();

  SetOperateInfo(operate_info_, "CREATE", "FUNCTION");

  parser::OperateObject obj = GetOperateObject(ident_ctx->getText());
  AddOperateObject(obj);
}

void GetOperateInfoListener::enterCreate_index_stmt(HqlsqlParser::Create_index_stmtContext* ctx) {
  SetOperateInfo(operate_info_, "CREATE", "INDEX");

  auto index_name_ctx = ctx->ident();
  parser::OperateObject obj = GetOperateObject(index_name_ctx->getText());
  AddOperateObject(obj);
}

void GetOperateInfoListener::enterCreate_view_stmt(HqlsqlParser::Create_view_stmtContext* ctx) {
  SetOperateInfo(operate_info_, "CREATE", "VIEW");

  auto view_name_ctx = ctx->view_name();
  parser::OperateObject obj = GetOperateObject(view_name_ctx->getText());
  AddOperateObject(obj);
}

void GetOperateInfoListener::enterCreate_macro_stmt(HqlsqlParser::Create_macro_stmtContext* ctx) {
  SetOperateInfo(operate_info_, "CREATE", "MACRO");

  auto macro_name_ctx = ctx->ident();
  parser::OperateObject obj = GetOperateObject(macro_name_ctx->getText());
  AddOperateObject(obj);
}

void GetOperateInfoListener::enterReload_function(HqlsqlParser::Reload_functionContext* ctx) {
  SetOperateInfo(operate_info_, "RELOAD", "FUNCTION");
  operate_info_list_.push_back(operate_info_);
}

void GetOperateInfoListener::enterCreate_role_stmt(HqlsqlParser::Create_role_stmtContext* ctx) {
  SetOperateInfo(operate_info_, "CREATE", "ROLE");

  auto role_name_ctx = ctx->role_name();
  parser::OperateObject obj = GetOperateObject(role_name_ctx->getText());
  AddOperateObject(obj);
}

void GetOperateInfoListener::enterGrant_revoke_role_stmt(HqlsqlParser::Grant_revoke_role_stmtContext* ctx) {
  auto grant_ctx = ctx->T_GRANT();
  auto revoke_ctx= ctx->T_REVOKE();
  auto role_name_ctx = ctx->role_names();

  if (grant_ctx) {
    SetOperateInfo(operate_info_, "GRANT", "ROLE");
  } else if (revoke_ctx) {
    SetOperateInfo(operate_info_, "REVOKE", "ROLE");
  }

  parser::OperateObject obj = GetOperateObject(role_name_ctx->getText());
  AddOperateObject(obj);
}

// Load File into table_name
void GetOperateInfoListener::enterLoad_file_stmt(HqlsqlParser::Load_file_stmtContext* ctx) {
  SetOperateInfo(operate_info_, "LOAD", "FILE");

  auto table_name_ctx = ctx->table_name();
  parser::OperateObject obj = GetOperateObject(table_name_ctx->getText());
  AddOperateObject(obj);
}

void GetOperateInfoListener::enterInsert_into_table_from_sql(HqlsqlParser::Insert_into_table_from_sqlContext* ctx) {
  auto table_name_ctx = ctx->table_name();

  SetOperateInfo(operate_info_, "INSERT", "TABLE");
  parser::OperateObject obj = GetOperateObject(table_name_ctx->getText());
  AddOperateObject(obj);
}

void GetOperateInfoListener::enterInsert_tables_overwrite_into(HqlsqlParser::Insert_tables_overwrite_intoContext* ctx) {
  auto table_name_ctx = ctx->table_name();

  SetOperateInfo(operate_info_, "INSERT", "TABLE");
  parser::OperateObject obj = GetOperateObject(table_name_ctx->getText());
  AddOperateObject(obj);
}

void GetOperateInfoListener::enterInsert_directory_stmt(HqlsqlParser::Insert_directory_stmtContext* ctx) {
  SetOperateInfo(operate_info_, "INSERT", "DIRECTORY");
  
  auto file_name_ctx = ctx->expr_file();
  parser::OperateObject obj = GetOperateObject(file_name_ctx->getText());
  AddOperateObject(obj);
}

void GetOperateInfoListener::enterUpdate_stmt(HqlsqlParser::Update_stmtContext* ctx) {
  auto table_name_ctx = ctx->table_name();
  SetOperateInfo(operate_info_, "UPDATE", "TABLE");

  parser::OperateObject obj = GetOperateObject(table_name_ctx->getText());
  AddOperateObject(obj);
}

void GetOperateInfoListener::enterDelete_stmt(HqlsqlParser::Delete_stmtContext* ctx) {
  auto table_name_ctx = ctx->table_name();
  SetOperateInfo(operate_info_, "DELETE", "TABLE");

  parser::OperateObject obj = GetOperateObject(table_name_ctx->getText());
  AddOperateObject(obj);
}

void GetOperateInfoListener::enterMerge_stmt(HqlsqlParser::Merge_stmtContext* ctx) {
  auto table_name_ctx = ctx->merge_table();

  SetOperateInfo(operate_info_, "MERGE", "TABLE");
  if (table_name_ctx) {
    parser::OperateObject obj = GetOperateObject(table_name_ctx->getText());
    operate_info_.objects.push_back(obj);
  }
  operate_info_list_.push_back(operate_info_);
}

void GetOperateInfoListener::enterAnalyze_table_stmt(HqlsqlParser::Analyze_table_stmtContext* ctx) {
  auto table_name_ctx = ctx->table_name();
  SetOperateInfo(operate_info_, "ANALYZE", "TABLE");

  parser::OperateObject obj = GetOperateObject(table_name_ctx->getText());
  AddOperateObject(obj);
}

void GetOperateInfoListener::enterDesc_db_schema(HqlsqlParser::Desc_db_schemaContext* ctx) {
  auto db_name_ctx = ctx->db_name();
  auto token_type = ctx->tk;
  
  SetOperateInfo(operate_info_, "DESCRIBE", StringToUpper(token_type->getText()));
  parser::OperateObject obj = GetOperateObject(db_name_ctx->getText());
  AddOperateObject(obj);
}

void GetOperateInfoListener::enterDesc_table_view_column(HqlsqlParser::Desc_table_view_columnContext* ctx) {
  // TODO: [FIXME]
  // I don't understand the syntax in documentation
}

void GetOperateInfoListener::enterImport_stmt(HqlsqlParser::Import_stmtContext* ctx) {
  auto table_name_ctx = ctx->table_name();

  SetOperateInfo(operate_info_, "IMPORT", "TABLE");

  if (table_name_ctx) {
    parser::OperateObject obj = GetOperateObject(table_name_ctx->getText());
    operate_info_.objects.push_back(obj);
  }

  operate_info_list_.push_back(operate_info_);
}

void GetOperateInfoListener::enterExport_stmt(HqlsqlParser::Export_stmtContext* ctx) {
  auto table_name_ctx = ctx->table_name();

  SetOperateInfo(operate_info_, "IMPORT", "TABLE");
  parser::OperateObject obj = GetOperateObject(table_name_ctx->getText());
  AddOperateObject(obj);
}

parser::OperateObject GetOperateInfoListener::GetOperateObject(std::string objectName) {
  parser::OperateObject obj;
  obj.objectName = objectName;

  return obj;
}

std::string GetOperateInfoListener::StringToUpper(std::string str) {
  std::transform(str.begin(), str.end(), str.begin(), 
      [](unsigned char c) -> unsigned char { return std::toupper(c); });

  return str;
}

void GetOperateInfoListener::AddOperateObject(parser::OperateObject &obj) {
  operate_info_.objects.push_back(obj);
  operate_info_list_.push_back(operate_info_);
}

void GetOperateInfoListener::SetOperateInfo(parser::OperateInfo &op_info, 
    const std::string &operate, const std::string &objectType) {
  op_info.clear();
  op_info.operate = operate;
  op_info.objectType = objectType;
}

} // {{{ namespace antlr4_hive_parser

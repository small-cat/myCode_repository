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
GetOperateInfoListener::GetOperateInfoListener(HqlsqlParser *parser) :
  parser_(parser), 
  in_set_assignment_stmt_(false), 
  in_update_stmt_(false) {}

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
  auto materialized_ctx = ctx->T_MATERIALIZED();

  if (materialized_ctx) {
    SetOperateInfo(operate_info_, "DROP", "MATERIALIZED VIEW");
  } else {
    SetOperateInfo(operate_info_, "DROP", StringToUpper(tk_type->getText()));
  }

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
  auto materialized_ctx = ctx->T_MATERIALIZED();

  if (materialized_ctx) {
    SetOperateInfo(operate_info_, "CREATE", "MATERIALIZED VIEW");
  } else {
    SetOperateInfo(operate_info_, "CREATE", "VIEW");
  }

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
  in_update_stmt_ = true;

  auto table_name_ctx = ctx->table_name();
  SetOperateInfo(operate_info_, "UPDATE", "TABLE");

  operate_object_.objectName = StringTrim(table_name_ctx->getText(), "`");
}

void GetOperateInfoListener::exitUpdate_stmt(HqlsqlParser::Update_stmtContext* ctx) {
  operate_info_.objects.push_back(operate_object_);
  operate_info_list_.push_back(operate_info_);

  in_update_stmt_ = false;
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

// we can not identify which is to describe, table, view or column
void GetOperateInfoListener::enterDesc_table_view_column(HqlsqlParser::Desc_table_view_columnContext* ctx) {
  auto ident_ctx = ctx->ident();
  auto column_ctx = ctx->column_name();

  SetOperateInfo(operate_info_, "DESCRIBE", "TABLE/VIEW/COLUMN");
  parser::OperateObject obj = GetOperateObject(ident_ctx->getText());

  if (column_ctx) {
    obj.subObjectName.push_back(column_ctx->getText());
  }

  AddOperateObject(obj);
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

  SetOperateInfo(operate_info_, "EXPORT", "TABLE");
  parser::OperateObject obj = GetOperateObject(table_name_ctx->getText());
  AddOperateObject(obj);
}

// save all the variables
void GetOperateInfoListener::enterAssignment_stmt(HqlsqlParser::Assignment_stmtContext* ctx) {
  in_set_assignment_stmt_ = true;

  auto token_type = ctx->tk;

  if (token_type) {
    SetOperateInfo(operate_info_, StringToUpper(token_type->getText()), "VARIABLES");
  } else
    SetOperateInfo(operate_info_, "SET", "VARIABLES");

  operate_object_.clear();
  operate_object_.objectName = "VARIABLES";
}

void GetOperateInfoListener::exitAssignment_stmt(HqlsqlParser::Assignment_stmtContext* ctx) {
  operate_info_.objects.push_back(operate_object_);
  operate_info_list_.push_back(operate_info_);
  in_set_assignment_stmt_ = false;
}

void GetOperateInfoListener::enterAssignment_stmt_single_item(HqlsqlParser::Assignment_stmt_single_itemContext* ctx) {
  if (nullptr == ctx) {
    return;
  }

  if (!in_set_assignment_stmt_ && !in_update_stmt_) {
    return;
  }

  auto assign_expr_ctx = ctx->assignment_expr(0);
  operate_object_.subObjectName.push_back(assign_expr_ctx->getText());
}

void GetOperateInfoListener::enterAlter_view_as_select(HqlsqlParser::Alter_view_as_selectContext* ctx) {
  SetOperateInfo(operate_info_, "ALTER", "VIEW");

  auto view_name_ctx = ctx->view_name();
  parser::OperateObject obj = GetOperateObject(view_name_ctx->getText());
  AddOperateObject(obj);
}

parser::OperateObject GetOperateInfoListener::GetOperateObject(std::string objectName) {
  parser::OperateObject obj;
  obj.objectName = StringTrim(objectName, "`");

  return obj;
}

std::string GetOperateInfoListener::StringToUpper(std::string str) {
  std::transform(str.begin(), str.end(), str.begin(), 
      [](unsigned char c) -> unsigned char { return std::toupper(c); });

  return str;
}

std::string GetOperateInfoListener::StringTrim(std::string src, const std::string delim) {
  if (delim.empty()) {
    return src;
  }

  if (src.empty()) {
    return "";
  }

  size_t n = 0;
  while ((n = src.find(delim)) != std::string::npos) {
    // delete delim from src
    src.erase(n, delim.length());
  }

  return src;
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

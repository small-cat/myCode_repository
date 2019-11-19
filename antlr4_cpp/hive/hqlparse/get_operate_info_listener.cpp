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
GetOperateInfoListener::GetOperateInfoListener(HplsqlParser *parser) 
  : parser_(parser) {}

GetOperateInfoListener::~GetOperateInfoListener() {}

std::vector<parser::OperateInfo> GetOperateInfoListener::operate_info_list() {
  return operate_info_list_;
}

void GetOperateInfoListener::enterCreate_database_stmt(HplsqlParser::Create_database_stmtContext* ctx) {
  if (nullptr == ctx) {
    return;
  }

  operate_info_.clear();
  operate_info_.operate = "CREATE";

  auto db_ctx = ctx->T_DATABASE();
  auto schema_ctx = ctx->T_SCHEMA();

  if (db_ctx) {
    operate_info_.objectType = "DATABASE";
  } else if (schema_ctx) {
    operate_info_.objectType = "SCHEMA";
  }

  operate_info_.objects.clear();  // no objects
  operate_info_list_.push_back(operate_info_);
}

void enterCreate_function_stmt(HplsqlParser::Create_function_stmtContext* ctx) {
  if (nullptr == ctx) {
    return;
  }

  operate_info_.clear();
  operate_info_.objectType = "FUNCTION";

  auto alter_ctx = ctx->T_ALTER();
  auto create_ctx = ctx->T_CREATE();
  auto rep_ctx = ctx->T_REPLACE();

  if (alter_ctx) {
    operate_info_.operate = "ALTER";
  } else if (create_ctx) {
    operate_info_.operate = "CREATE";
  } else if (!create_ctx && rep_ctx) {
    operate_info_.operate = "REPLACE";
  }

  operate_info_.objects.clear();
  operate_info_list_.push_back();
}
}

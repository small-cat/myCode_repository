/*****************************************************************************
 * @file  : hive_get_column_dag.cpp - 
 * @brief : (c) Copyright 2019 . All Rights Reserved.
 * @author: Jona 
 * @email : mblrwuzy@gmail.com
 * @date  : 2019-11-27
*****************************************************************************/
#include "hive_get_column_dag.h"

namespace antlr4_hive_parser {
HiveGetColumnDagListener::HiveGetColumnDagListener(HqlsqlParser* parser) :
  parser_(parser), 
  count_for_name_(0) {}

HiveGetColumnDagListener::~HiveGetColumnDagListener() {}

// build relation in withclause
// with A (name, phone) as (select name, phone from student) ...
void HiveGetColumnDagListener::enterCommon_table_expression(HqlsqlParser::Common_table_expressionContext* ctx) {
  if (nullptr == ctx) {
    return;
  }

  auto cte_name_ctx = ctx->ident();
  std::string table_name = cte_name_ctx->getText();

  // give a name for withclause
  std::string next_subquery_name = table_name + SUBQUERY_NAMES_PART[SUBQUERY_SUFFIX];
  subquery_namev_.push_back(next_subquery_name);

  sqlparse::Table2Subquery tb2subquery;
  tb2subquery.table_name = table_name;
  tb2subquery.subquery_name = next_subquery_name;
  column_dag_.table_to_subquery_list.push_back(tb2subquery);
}

void HiveGetColumnDagListener::exitCommon_table_expression(HqlsqlParser::Common_table_expressionContext* ctx) {
  auto cte_name_ctx = ctx->ident();
  std::string table_name = cte_name_ctx->getText();
  sqlparse::TableItem table_item;
  sqlparse::TableItemList table_list;

  table_item.table = table_name;
  table_list.push_back(table_item);

  // build relationships
  sqlparse::Tables2Columns tb2column;
  tb2column.subquery_name = table_name + SUBQUERY_NAMES_PART[SUBQUERY_WITHCLAUSE];
  tb2column.from = table_list;
  tb2column.to = column_list_;
  column_dag_.table_to_column_list.push_back(tb2column);
}

void HiveGetColumnDagListener::enterCte_select_cols(HqlsqlParser::Cte_select_colsContext* ctx) {
  column_list_.clear();
}

void HiveGetColumnDagListener::enterCte_select_col(HqlsqlParser::Cte_select_colContext* ctx) {
  if (nullptr == ctx) {
    return;
  }

  sqlparse::ColumnItem col_item;
  col_item = sqlparse::GetColumn(ctx->getText());
  column_list_.push_back(col_item);
}

/***********************************************************
 * if table_list_ is not empty, it shows that current ctx is
 * a subquery, and table_list_ stores its parent's table info.
 * so, restore it first and then clear to prepare for saving 
 * current ctx's table info
 * @author Jona
 * @param 
 * @date 27/11/2019 
***********************************************************/ 
void enterFrom_clause(HqlsqlParser::From_clauseContext* ctx) {
  if (table_list_.size()) {
    table_list_restore_.push_back(table_list_);
  }

  table_list_.clear();
}

void HiveGetColumnDagListener::enterFrom_table_name_clause(HqlsqlParser::From_table_name_clauseContext* ctx) {
  auto table_name_ctx = ctx->table_name();

  table_item_.clear();
  table_item_.table = table_name_ctx->getText();
}

void HiveGetColumnDagListener::exitFrom_table_name_clause(HqlsqlParser::From_table_name_clauseContext* ctx) {
  table_list_.push_back(table_item_);
}

void HiveGetColumnDagListener::enterFrom_alias_clause(HqlsqlParser::From_alias_clauseContext* ctx) {
  auto alias_ctx = ctx->expr();

  table_item_.alias = alias_ctx->getText();
}

void HiveGetColumnDagListener::enterFrom_subselect_clause(HqlsqlParser::From_subselect_clauseContext* ctx) {
  auto alias_ctx = ctx->expr();
  std::string table_alias;

  table_item_.clear();
  if (alias_ctx) {
    table_alias = alias_ctx->getText();
    table_item_.alias = table_alias;
  } else {
    table_alias = SUBQUERY_NAMES_PART[SUBQUERY_TABLE_PREFIX] + std::to_string(count_for_name_);
    count_for_name_++;
  }

  Table2Subquery tb2subquery;
  tb2subquery.table_name = table_alias;
  tb2subquery.subquery_name = table_alias + SUBQUERY_NAMES_PART[SUBQUERY_SUFFIX];
  subquery_namev_.push_back(tb2subquery.subquery_name);   // push current subquery_name

  column_dag_.table_to_subquery_list.push_back(tb2subquery);

  table_item_.table = table_alias;
  table_list_.push_back(table_item_);
}

void HiveGetColumnDagListener::enterSelect_list(HqlsqlParser::Select_listContext* ctx) {
  // if column_list_ is not empty, save it first and then reset for current subquery
  if (!column_list_.empty()) {
    column_list_restore_.push_back(column_list_);
  }

  column_list_.clear();
}

void HiveGetColumnDagListener::enterSelect_list_item_normal(HqlsqlParser::Select_list_item_normalContext* ctx) {
  auto expr_ctx = ctx->bool_expr();   // col is an expression
  auto col_ctx = ctx->ident();        // col is normal
  auto alias_ctx = ctx->expr();

  antlr4::TokenStream* tokens = parser_->getTokenStream();

  sqlparse::ColumnItem col_item;
  if (col_ctx) {
    col_item = sqlparse::GetColumn(tokens->getText(col_ctx));
  } else if (expr_ctx) {
    col_item.column = tokens->getText(expr_ctx);
  }

  if (alias_ctx) {
    col_item.alias = tokens->getText(alias_ctx);
  }

  column_list_.push_back(col_item);
}

} /* end antlr4_hive_parser */

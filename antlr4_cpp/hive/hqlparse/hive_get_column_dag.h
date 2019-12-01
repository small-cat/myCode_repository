/*****************************************************************************
 * @file  : hive_get_column_dag.h - 
 * @brief : (c) Copyright 2019 . All Rights Reserved.
 * @author: Jona 
 * @email : mblrwuzy@gmail.com
 * @date  : 2019-11-27
*****************************************************************************/
#ifndef __HIVE_GET_COLUMN_DAG_H__
#define __HIVE_GET_COLUMN_DAG_H__

#include <string.h>
#include <vector>

#include "HqlsqlParser.h"
#include "HqlsqlParserBaseListener.h"
#include "column_relation_dag.h"

namespace antlr4_hive_parser {
class HiveGetColumnDagListener : public HqlsqlParserBaseListener {
public:
  HiveGetColumnDagListener(HqlsqlParser* parser);
  virtual ~HiveGetColumnDagListener();

  void enterCommon_table_expression(HqlsqlParser::Common_table_expressionContext* ctx);
  void exitCommon_table_expression(HqlsqlParser::Common_table_expressionContext* ctx);
  void enterCte_select_cols(HqlsqlParser::Cte_select_colsContext* ctx);
  void enterCte_select_col(HqlsqlParser::Cte_select_colContext* ctx);

  void enterFrom_clause(HqlsqlParser::From_clauseContext* ctx);
  void enterFrom_table_name_clause(HqlsqlParser::From_table_name_clauseContext* ctx);
  void exitFrom_table_name_clause(HqlsqlParser::From_table_name_clauseContext* ctx);
  void enterFrom_alias_clause(HqlsqlParser::From_alias_clauseContext* ctx);
  void enterFrom_subselect_clause(HqlsqlParser::From_subselect_clauseContext* ctx);

  void enterSelect_list(HqlsqlParser::Select_listContext* ctx);
  void enterSelect_list_item_normal(HqlsqlParser::Select_list_item_normalContext* ctx);
  void enterSelect_list_item_asterisk(HqlsqlParser::Select_list_item_asteriskContext* ctx);
  void enterFullselect_set_clause(HqlsqlParser::Fullselect_set_clauseContext* ctx);

  // other places select_stmt appeared

private:
  HqlsqlParser* parser_;

  // for building dag
  sqlparse::ColumnDAG column_dag_;
  std::vector<std::string> subquery_namev_;
  
  sqlparse::ColumnItemList column_list_;
  std::vector<sqlparse::ColumnItemList> column_list_restore_;

  sqlparse::TableItemList table_list_;
  sqlparse::TableItem table_item_;
  std::vector<sqlparse::TableItemList> table_list_restore_;

  count_for_name_;
};
} /* end antlr4_hive_parser */

#endif /* __HIVE_GET_COLUMN_DAG_H__ */

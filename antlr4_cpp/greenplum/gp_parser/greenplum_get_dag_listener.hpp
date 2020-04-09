/*****************************************************************************
 * @file  : greenplum_get_dag_listener.hpp - 
 * @brief : (c) Copyright 2020 . All Rights Reserved.
 * @author: Jona 
 * @email : mblrwuzy@gmail.com
 * @date  : 2020-02-14
*****************************************************************************/
#ifndef __GREENPLUM_GET_DAG_LISTENER_H__
#define __GREENPLUM_GET_DAG_LISTENER_H__

#include <string>

#include "column_relation_dag.h"
#include "item.h"
#include "GreenPlumLexer.h"
#include "GreenPlumParser.h"
#include "GreenPlumParserBaseListener.h"

class GreenPlumGetColumnDAG : public GreenPlumParserBaseListener {
public:
  GreenPlumGetColumnDAG(GreenPlumParser* parser) 
    : parser_(parser), 
      alias_name_list_(false), 
      join_on_part_(false),
      count_for_name_(0) {}

  virtual ~GreenPlumGetColumnDAG() {}

  void enterCommon_table_expr(GreenPlumParser::Common_table_exprContext* ctx) {
    std::string next_subquery_name {""};
    std::string table_name {""};

    // build relation: table to subquery
    auto cte_name_ctx = ctx->cte_name();
    if (cte_name_ctx) {
      table_name = cte_name_ctx->getText();
      next_subquery_name = table_name + SUBQUERY_SUFFIX;
    }
    subquery_namev_.push_back(next_subquery_name);

    Table2Subquery tb2subquery;
    tb2subquery.table_name = table_name;
    tb2subquery.subquery_name = next_subquery_name;
    column_dag_.table_to_subquery_list.push_back(tb2subquery);
  }

  void exitCommon_table_expr(GreenPlumParser::Common_table_exprContext* ctx) {
    auto cte_name_ctx = ctx->cte_name();

    TableItemList table_list;
    TableItem table_item;

    if (cte_name_ctx) {
      table_item.table = cte_name_ctx->getText();
    }
    table_list.push_back(table_item);

    // build relation: tables to columns for query
    Tables2Columns tb2column;
    tb2column.subquery_name = table_item.table + SUBQUERY_WITHCLAUSE;
    tb2column.from = table_list;
    tb2column.to = column_list_;
    column_dag_.table_to_column_list.push_back(tb2column);
  }

  void enterParen_column_list(GreenPlumParser::Paren_name_listContext* ctx) {
    column_list_.clear();
  }

  void enterName(GreenPlumParser::NameContext* ctx) {
    ColumnItem column_item;

    // push_back column into column_list_
    column_item = GetColumn(ctx->getText());
    column_item.token_start = ctx->start;
    column_item.token_stop  = ctx->stop;
    column_list_.push_back(column_item);
  }

  void exitSimple_select(GreenPlumParser::Simple_selectContext* ctx) {
    // get selected_list - column_list_
    // get table list - table_list_
    Tables2Columns tb2column;
    tb2column.from = table_list_;
    tb2column.to = column_list_;

    if (subquery_namev_.empty()) {
      tb2column.subquery_name = "";
    } else {
      tb2column.subquery_name = subquery_namev_.back();
      subquery_namev_.pop_back();
    }
    column_dag_.table_to_column_list.push_back(tb2column);

    // restore table_list_
    table_list_.clear();
    if (!table_list_restore_.empty()) {
      table_list_ = table_list_restore_.back(); 
      table_list_restore_.pop_back();
    }

    // restore column_list_
    column_list_.clear();
    if (!column_list_restore_.empty()) {
      column_list_ = column_list_restore_.back();
      column_list_restore_.pop_back();
    }
  }

  void enterTarget_list(GreenPlumParser::Target_listContext* ctx) {
    if (!column_list_.empty()) {
      column_list_restore_.push_back(column_list_);
    }

    column_list_.clear();
  }

  void enterTarget_el_asterisk(GreenPlumParser::Target_el_asteriskContext* ctx) {
    ColumnItem col_item;
    col_item.column = ctx->getText();
    col_item.token_start = ctx->start;
    col_item.token_stop  = ctx->stop;
    column_list_.push_back(col_item);
  }

  void enterTarget_el_normal(GreenPlumParser::Target_el_normalContext* ctx) {
    auto columnref_ctx = ctx->columnref();
    auto expr_ctx = ctx->a_expr();
    auto as_ctx = ctx->AS();
    auto alias_ctx = ctx->col_label();
    antlr4::TokenStream* tokens = parser_->getTokenStream();

    ColumnItem col_item;

    if (as_ctx) {
      col_item.hasAs = true;
    }

    if (alias_ctx) {
      col_item.alias = tokens->getText(alias_ctx);
    }

    if (expr_ctx) {
      col_item.column = tokens->getText(expr_ctx);
      col_item.token_start = expr_ctx->start;
      col_item.token_stop = expr_ctx->stop;
    } else if (columnref_ctx) {
      std::string column_ref_str = tokens->getText(columnref_ctx);
      col_item = GetColumn(column_ref_str);
      col_item.token_start = columnref_ctx->start;
      col_item.token_stop = columnref_ctx->stop;
    }

    column_list_.push_back(col_item);
  }

  void enterFrom_list(GreenPlumParser::From_listContext* ctx) {
    if (table_list_.size()) {
      table_list_restore_.push_back(table_list_);
    }

    table_list_.clear();
  }

  void enterTable_ref_normal(GreenPlumParser::Table_ref_normalContext* ctx) {
    auto table_name_ctx = ctx->relation_expr();
    auto alias_ctx = ctx->colid();
    auto alias_name_list_ctx = ctx->paren_name_list();
    antlr4::TokenStream *tokens = parser_->getTokenStream();

    if (alias_name_list_ctx) {
      alias_name_list_ = true;
    }

    table_item_.clear();
    std::string tb_alias_name {""};
    if (alias_ctx) {
      tb_alias_name = tokens->getText(alias_ctx);
      table_item_.alias = tb_alias_name;
    }

    std::string table_name = tokens->getText(table_name_ctx);

    std::vector<std::string> sv;
    Split(table_name, sv, '.');
    switch (sv.size()) {
      case 1:
        table_item_.table = sv[0];
        break;
      case 2:
        table_item_.schema = sv[0];
        table_item_.table  = sv[1];
        break;
      default:
        // error
        return;
    }

    table_item_.token_start = table_name_ctx->start;
    table_item_.token_stop  = table_name_ctx->stop;
    table_list_.push_back(table_item_);
  }

  void exitTable_ref_normal(GreenPlumParser::Table_ref_normalContext* ctx) {
    alias_name_list_ = false;
  }

  void enterTable_ref_subquery(GreenPlumParser::Table_ref_subqueryContext* ctx) {
    auto alias_ctx = ctx->colid();
    antlr4::TokenStream *tokens = parser_->getTokenStream();

    table_item_.clear();
    std::string tb_alias;
    if (alias_ctx) {
      tb_alias = tokens->getText(alias_ctx);
      table_item_.alias = tb_alias;
    } else {
      tb_alias = "TABLE_REF_" + std::to_string(count_for_name_);
      count_for_name_++;
    }

    Table2Subquery tb2subquery;
    tb2subquery.table_name = tb_alias;
    tb2subquery.subquery_name = tb_alias + SUBQUERY_SUFFIX;
    subquery_namev_.push_back(tb2subquery.subquery_name);
    column_dag_.table_to_subquery_list.push_back(tb2subquery);

    table_item_.table = tb_alias;
    table_list_.push_back(table_item_);
  }

  void enterJoin_qual(GreenPlumParser::Join_qualContext* ctx) {
    auto on_ctx = ctx->ON();
    if (on_ctx) {
      join_on_part_ = true;
    }
  }

  void enterRelational_expr(GreenPlumParser::Relational_exprContext* ctx) {
    if (!join_on_part_) {
      return;
    }

    antlr4::TokenStream* tokens = parser_->getTokenStream();
    auto oper_ctx  = ctx->relational_op();
    if (oper_ctx) {
      if (strcasecmp(oper_ctx->getText().c_str(), "=") != 0) {
        return;
      }
    } else
      return;
    
    auto expr0_ctx = ctx->relational_expr(0);
    auto expr1_ctx = ctx->relational_expr(1);
    EquivalentCond equ_cond;
    equ_cond.from = GetColumn(tokens->getText(expr0_ctx));
    equ_cond.to = GetColumn(tokens->getText(expr1_ctx));
    column_dag_.equivalent_cond_list.push_back(equ_cond);

    // prevent entering A and B 
    join_on_part_ = false;
  }

  void enterSubquery_operation_part(GreenPlumParser::Subquery_operation_partContext *ctx) {
    std::string cur_subquery_name {""};
    if (!column_dag_.table_to_column_list.empty()) {
      cur_subquery_name = column_dag_.table_to_column_list.back().subquery_name;
      subquery_namev_.push_back(cur_subquery_name);
    }
  }

  ColumnDAG column_dag() {
    return column_dag_;
  }

private:
  std::vector<std::string> subquery_namev_;
  ColumnDAG column_dag_;
  GreenPlumParser* parser_;

  ColumnItemList column_list_;
  std::vector<ColumnItemList> column_list_restore_; // restore

  TableItemList  table_list_;
  TableItem table_item_;
  std::vector<TableItemList> table_list_restore_;  // restore table_list

  bool alias_name_list_;
  bool join_on_part_;
  int count_for_name_;
};

#endif /* __GREENPLUM_GET_DAG_LISTENER_H__ */

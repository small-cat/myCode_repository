/*****************************************************************************
 * @file  : kingbase_get_selected_list_listener.hpp - 
 * @brief : (c) Copyright 2019 . All Rights Reserved.
 * @author: Jona 
 * @email : mblrwuzy@gmail.com
 * @date  : 2019-10-08
*****************************************************************************/
#ifndef __KINGBASE_GET_SELECTED_LIST_LISTENER_H__
#define __KINGBASE_GET_SELECTED_LIST_LISTENER_H__

#include "column_item.h"

#include <string>
#include <KingbaseSqlParser.h>
#include <KingbaseSqlParserBaseListener.h>

class KingbaseGetSelectedListListener : public KingbaseSqlParserBaseListener {
public:
  KingbaseGetSelectedListListener (KingbaseSqlParser *parser) : parser_(parser) {
    column_list_.clear();
    selected_list_ = false;
    column_item_.clear();
  }
  ~KingbaseGetSelectedListListener () {}

  void enterSelected_list(KingbaseSqlParser::Selected_listContext *ctx) {
    selected_list_ = true;
  }
  void exitSelected_list(KingbaseSqlParser::Selected_listContext *ctx) {
    selected_list_ = false;
  }
  void enterSelected_list_element(KingbaseSqlParser::Selected_list_elementContext* ctx) {
    if (nullptr == ctx)
      return;

    if (!selected_list_)
      return;
    
    column_item_.clear();
    Column col;
    auto tableview_name_ctx = ctx->tableview_name();
    if (tableview_name_ctx) {
      // tablename.*
      col.regular_column = get_regular_column(tableview_name_ctx->getText()); 
      col.column_type = ColumnType::REGULAR;
      column_item_.expr_list.push_back(col);
      column_list_.push_back(column_item_);
      return;
    }

    // enter another branch
    auto column_alias_ctx = ctx->column_alias();
    auto column_name_ctx = ctx->column_name();
    auto expr_ctx = ctx->expression();

    if (column_alias_ctx) {
      column_item_.alias_name = column_alias_ctx->getText();
    }

    if (column_name_ctx) {
      col.regular_column = get_regular_column(column_name_ctx->getText());
      col.column_type = ColumnType::REGULAR;
      column_item_.expr_list.push_back(col);
    } 
    // get expr in other function
  }
  void exitSelected_list_element(KingbaseSqlParser::Selected_list_elementContext* ctx) {
    if (nullptr == ctx)
      return;
    
    if (!selected_list_)
      return;

    column_list_.push_back(column_item_);
  }

  /*
   * expression in Selected_list_element 
   * 1. builtin function or customized function 
   * 2. operations + - * /
   * 3. concat by ||
   * 4. others
   *
   * fix all the thoughts on rule:concatenation
   * */

  // for example, expr like 'name || id + 1'
  // antlr will first enter the whole node concatenation 'name || id + 1', 
  // then enter node concatenation 'name' and then '||', and then enter node
  // concatenation 'id + 1', enter concatenation 'id', then '+', then node
  // concatenation '1', that's the process of travelling by antlr4.

  // we can get operator sign here

  void enterConcat_mul_div(KingbaseSqlParser::Concat_mul_divContext *ctx) {
    if (nullptr == ctx)
      return;

    if (!selected_list_) {
      // if not in selected_list, skip
      return;
    }

    // get operator sign
    // op in ctx is Token*
    auto op = ctx->op;
    column_item_.operator_list.push_back(op->getText());
  }
  void exitConcat_mul_div(KingbaseSqlParser::Concat_mul_divContext *ctx) {}

  void enterConcat_plus_minus(KingbaseSqlParser::Concat_plus_minusContext* ctx) {
    if (nullptr == ctx)
      return;

    if (!selected_list_) {
      return;
    }

    column_item_.operator_list.push_back(ctx->op->getText());
  }
  void exitConcat_plus_minus(KingbaseSqlParser::Concat_plus_minusContext* ctx) {}

  void enterConcat_bar_bar(KingbaseSqlParser::Concat_bar_barContext* ctx) {
    if (nullptr == ctx)
      return;

    if (!selected_list_) {
      return;
    }

    column_item_.operator_list.push_back("||");
  }
  void exitConcat_bar_bar(KingbaseSqlParser::Concat_bar_barContext* ctx) {}

  void enterUnary_expression(KingbaseSqlParser::Unary_expressionContext* ctx) {
    if (nullptr == ctx)
      return;

    if (!selected_list_) {
      return;
    }

    auto op = ctx->op;
    if (nullptr != op) {
      column_item_.operator_list.push_back(op->getText());
      return;
    }

    Column col;
    auto std_func = ctx->standard_function();
    if (std_func) {
      col.column_type = ColumnType::FUNCTION;
      col.regular_column = std_func->getText();
      column_item_.expr_list.push_back(col);
    }
  }
  void exitUnary_expression(KingbaseSqlParser::Unary_expressionContext* ctx) {}

private:
  KingbaseSqlParser *parser_;
  ColumnItemList column_list_;
  ColumnItem column_item_;

  selected_list_;
};

#endif /* __KINGBASE_GET_SELECTED_LIST_LISTENER_H__ */

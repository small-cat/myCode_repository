/*************************************************************************
 * @file kingbase_mask_listener.h
 * @brief This file describes the listener to replace column with mask functions.
 * if query_name is empty, is "root" query block. Use this method to find "root"
 * query block.
 * @author Jona
 * @date 25/08/2019
 *************************************************************************/

#ifndef __ORACLE_MASK_LISTENER_H__
#define __ORACLE_MASK_LISTENER_H__

#include <string>

#include <string.h>

#include "PlSqlParserBaseListener.h"
#include "PlSqlParser.h"
#include "column_relation_dag.h"
#include "item.h"

class OracleMaskListener : public PlSqlParserBaseListener {
  public:
    OracleMaskListener(PlSqlParser *parser, 
        antlr4::TokenStream *tokens, 
        ColumnDAG column_dag, 
        std::map<ColumnItem, ColumnItemList> map_columns, 
        MaskItemList mask_item_list) 
      : parser_(parser), 
        rewriter_(tokens), 
        column_dag_(column_dag), 
        column_relation_map_(map_columns), 
        mask_item_list_(mask_item_list) {

        subquery_namev_.clear();
        subquery_name_save_.clear();
        root_query_blockv_.clear();
        is_root_query_block_ = false;
        in_selected_list_element_ = false;
      }
    ~OracleMaskListener() {}

    void enterFactoring_element(PlSqlParser::Factoring_elementContext *ctx) {
      if (nullptr == ctx) {
        return;
      }

      std::string next_subquery_name;
      antlr4::TokenStream *tokens = parser_->getTokenStream();

      auto query_name_ctx = ctx->query_name();
      if (query_name_ctx) {
        next_subquery_name = tokens->getText(query_name_ctx) + SUBQUERY_NAMES_PART[SUBQUERY_SUFFIX];
      }

      subquery_namev_.push_back(next_subquery_name);
    }

    void exitFactoring_element(PlSqlParser::Factoring_elementContext *ctx) {
      if (nullptr == ctx) {
        return;
      }

      auto query_name_ctx = ctx->query_name();
      if (query_name_ctx) {
        subquery_name_save_.push_back(query_name_ctx->getText());
      }
    }

    void enterQuery_block(PlSqlParser::Query_blockContext *ctx) {
      if (nullptr == ctx)
        return;

      std::string cur_subquery_name {""};

      // save parent's is_root_query_block_ first before setting
      // it is "root" query block if subquery_name is empty, others are not
      root_query_blockv_.push_back(is_root_query_block_);
      if (subquery_namev_.empty()) {
        is_root_query_block_ = true;
      } else {
        cur_subquery_name = subquery_namev_.back();
        if (cur_subquery_name.empty()) {
          is_root_query_block_ = true;
        } else
          is_root_query_block_ = false;
      }
    }
    void exitQuery_block(PlSqlParser::Query_blockContext *ctx) {
      std::string cur_subquery_name {""};
      if (!subquery_namev_.empty()) {
        cur_subquery_name = subquery_namev_.back();
        subquery_namev_.pop_back();
      }
      subquery_name_save_.push_back(cur_subquery_name);

      // restore parent's is_root_query_block_
      if (root_query_blockv_.empty())
        is_root_query_block_ = false;
      else {
        is_root_query_block_ = root_query_blockv_.back();
        root_query_blockv_.pop_back();
      }
    }

    /***********************************************************
     * UNION/MINUS/INTERSECT
     * we can get the paralleled sqls in subquery_name_save_.back(), all the
     * paralleled sqls' subquery_name should be the same
     * @author Jona
     * @param 
     * @date 20/09/2019 
     ***********************************************************/ 
    void enterSubquery_operation_part(PlSqlParser::Subquery_operation_partContext *ctx) {
      std::string cur_subquery_name {""};
      if (!subquery_name_save_.empty()) {
        cur_subquery_name = subquery_name_save_.back();
        subquery_namev_.push_back(cur_subquery_name);
      }
    }
    void exitSubquery_operation_part(PlSqlParser::Subquery_operation_partContext *ctx) {
    }

    void enterSelected_list_element(PlSqlParser::Selected_list_elementContext *ctx) {
      if (nullptr == ctx)
        return;

      if (!is_root_query_block_)
        return;

      if (nullptr != ctx->tableview_name()) {
        return;
      }

      column_item_.clear();
      in_selected_list_element_ = true;
    }

    void exitSelected_list_element(PlSqlParser::Selected_list_elementContext *ctx) {
      if (nullptr == ctx) {
        return;
      }

      if (!is_root_query_block_) {
        return;
      }

      if (nullptr != ctx->tableview_name()) {
        return;
      }

      antlr4::TokenStream *tokens = parser_->getTokenStream();

      auto expr_ctx   = ctx->expression();
      auto as_ctx     = ctx->AS();
      auto column_alias_ctx = ctx->column_alias();
      std::string select_ele;

      if (as_ctx) {
        column_item_.hasAs = true;
      }

      if (column_item_.column.empty()) {
        // expression
        return;
      }
      
      ReplaceColumnWithMaskFunction(column_item_, ctx->start, ctx->stop);
      in_selected_list_element_ = false;
    }

    void enterGeneral_element_part(PlSqlParser::General_element_partContext* ctx) {
      if (nullptr == ctx) {
        return;
      }

      if (!is_root_query_block_) {
        return;
      }

      if (!in_selected_list_element_) {
        return;
      }

      column_item_ = get_column(ctx->getText());
    }

    void enterTable_ref_aux(PlSqlParser::Table_ref_auxContext *ctx) {
      if (nullptr == ctx)
        return;

      auto table_ref_aux_internal_ctx = ctx->table_ref_aux_internal();
      auto table_alias_ctx = ctx->table_alias();
      std::string table_ref_aux_internal_string {""};
      std::string table_alias_string {""};

      antlr4::TokenStream *tokens = parser_->getTokenStream();

      if (table_alias_ctx)
        table_alias_string = tokens->getText(table_alias_ctx);
      else {
        table_alias_string = "TABLE_REF";
      }

      if (table_ref_aux_internal_ctx)
        table_ref_aux_internal_string = tokens->getText(table_ref_aux_internal_ctx);

      if (table_ref_aux_internal_string.find("SELECT") != std::string::npos) {
        // table is a subquery, we regard table alias name as table name, and
        // also as the subquery_name
        subquery_namev_.push_back(table_alias_string);
      }
    }

    void enterIn_elements(PlSqlParser::In_elementsContext *ctx) {
      if (nullptr == ctx)
        return;

      // if subquery_ctx is not nullptr, here we must give it a name for the 
      // subquery, otherwise, the subquery_name is empty and program will 
      // regard it as "root" subquery block.
      auto subquery_ctx = ctx->subquery();
      std::string next_subquery_name {""};
      if (subquery_ctx) {
        next_subquery_name = SUBQUERY_NAMES_PART[SUBQUERY_IN_ELEMENTS_PREFIX];
        subquery_namev_.push_back(next_subquery_name);
      }
    }

    std::string GetResult() {
      return rewriter_.getText();
    }
  private:
    bool StrCaseCmp(const std::string &s1, const std::string &s2) {
      return strcasecmp(s1.c_str(), s2.c_str()) == 0;
    }

    void ReplaceColumnWithMaskFunction(ColumnItem column_item, 
        antlr4::Token* from, antlr4::Token* to) {
      // check columns is mask or not
      bool matched = false;
      std::string replace_col_string;

      // if col_item is tableA.*, all the columns' table name should be tableA
      std::string table_prefix;
       
      MaskItem mask_item_save;
      for (auto mask_item : mask_item_list_) {
        if ((matched = IsMaskColumn(column_dag_, column_relation_map_, mask_item, column_item))) {
          mask_item_save = mask_item;
          break;
        }
      }

      table_prefix = (column_item.schema.empty()? "" : column_item.schema + ".")
        + (column_item.table.empty()? "" : column_item.table + ".");

      if (matched) {
        // replace col_tmp with mask_function
        replace_col_string += mask_item_save.mask_function + "(" + 
          (table_prefix.empty() ? "" : table_prefix) + column_item.column +
          ")" + (column_item.hasAs ? " AS " : " ") + 
          (column_item.alias.empty() ? column_item.column : column_item.alias);
      } else
        return;

      if (!replace_col_string.empty()) {
        rewriter_.replace(from, to, replace_col_string);
      }
    }

  private:
    antlr4::TokenStreamRewriter rewriter_;
    PlSqlParser *parser_;

    // for finding "root" query block
    std::vector<std::string> subquery_namev_;
    std::vector<bool> root_query_blockv_;
    std::vector<std::string> subquery_name_save_;
    bool is_root_query_block_;

    ColumnDAG column_dag_;
    ColumnItem column_item_;
    std::map<ColumnItem, ColumnItemList> column_relation_map_;
    MaskItemList mask_item_list_;

    bool in_selected_list_element_;
};

#endif

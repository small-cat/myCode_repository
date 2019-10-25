/*************************************************************************
 * @file kingbase_mask_listener.h
 * @brief This file describes the listener to replace column with mask functions.
 * if query_name is empty, is "root" query block. Use this method to find "root"
 * query block.
 * @author Jona
 * @date 25/08/2019
 *************************************************************************/

#ifndef __KINGBASE_MASK_LISTENER_H__
#define __KINGBASE_MASK_LISTENER_H__

#include <string>

#include <string.h>

#include "KingbaseSqlParserBaseListener.h"
#include "KingbaseSqlParser.h"
#include "column_relation_dag.h"
#include "item.h"

class KingbaseMaskListener : public KingbaseSqlParserBaseListener {
  public:
    KingbaseMaskListener(KingbaseSqlParser *parser, 
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
      }
    ~KingbaseMaskListener() {}

    void enterWith_query(KingbaseSqlParser::With_queryContext *ctx) {
      if (nullptr == ctx)
        return;

      std::string next_subquery_name {""};
      auto with_query_name_ctx = ctx->with_query_name();
      if (with_query_name_ctx) {
        next_subquery_name = with_query_name_ctx->getText();
      }
      subquery_namev_.push_back(next_subquery_name);
    }
    void exitWith_query(KingbaseSqlParser::With_queryContext *ctx) {
      auto with_query_name_ctx = ctx->with_query_name();
      if (with_query_name_ctx) {
        // save subquery_name, it will be used for minus/intersect/union
        subquery_name_save_.push_back(with_query_name_ctx->getText());
      }
    }

    void enterQuery_block(KingbaseSqlParser::Query_blockContext *ctx) {
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
    void exitQuery_block(KingbaseSqlParser::Query_blockContext *ctx) {
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
    void enterSubquery_operation_part(KingbaseSqlParser::Subquery_operation_partContext *ctx) {
      std::string cur_subquery_name {""};
      if (!subquery_name_save_.empty()) {
        cur_subquery_name = subquery_name_save_.back();
        subquery_namev_.push_back(cur_subquery_name);
      }
    }
    void exitSubquery_operation_part(KingbaseSqlParser::Subquery_operation_partContext *ctx) {
    }

    void enterSelected_list(KingbaseSqlParser::Selected_listContext *ctx) {}
    void exitSelected_list(KingbaseSqlParser::Selected_listContext *ctx) {
    }

    void enterSelected_list_element_column(KingbaseSqlParser::Selected_list_element_columnContext *ctx) {
      if (nullptr == ctx)
        return;

      if (!is_root_query_block_)
        return;

      antlr4::TokenStream *tokens = parser_->getTokenStream();

      auto expr_ctx   = ctx->expression();
      auto column_ctx = ctx->column_name();
      auto as_ctx     = ctx->AS();
      auto column_alias_ctx = ctx->column_alias();
      std::string select_ele;

      if (expr_ctx)
        // we don't support expr so far
        return;
      else if (column_ctx)
        select_ele = tokens->getText(column_ctx);
      else
        return;

      // split
      ColumnItem column_item = get_column(select_ele);
      if (column_alias_ctx) {
        column_item.alias = tokens->getText(column_alias_ctx);
      }

      if (as_ctx) {
        column_item.hasAs = true;
      }

      // if column_item.column == '*'
      ColumnItemList columns_replace;
      columns_replace.push_back(column_item);
      ReplaceColumnWithMaskFunction(columns_replace, ctx->start, ctx->stop, 
          column_item, false);
    }

    void enterSelected_list_element_asterisk(KingbaseSqlParser::Selected_list_element_asteriskContext *ctx) {
      if (nullptr == ctx)
        return;

      if (!is_root_query_block_)
        return;

      antlr4::TokenStream *tokens = parser_->getTokenStream();

      auto tableview_name_ctx = ctx->tableview_name();
      ColumnItem col_item;
      if (tableview_name_ctx) {
        col_item.table = tokens->getText(tableview_name_ctx);
      }
      col_item.column = ctx->ASTERISK()->getText();

      ColumnItemList columns_replace_star = 
        GetAllColumnsInsteadOfStar(column_dag_, col_item);

      ReplaceColumnWithMaskFunction(columns_replace_star, ctx->start, ctx->stop, 
          col_item, true);
    }

    void enterTable_ref_aux(KingbaseSqlParser::Table_ref_auxContext *ctx) {
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

    void enterIn_elements(KingbaseSqlParser::In_elementsContext *ctx) {
      if (nullptr == ctx)
        return;

      // if subquery_ctx is not nullptr, here we must give it a name for the 
      // subquery, otherwise, the subquery_name is empty and program will 
      // regard it as "root" subquery block.
      auto subquery_ctx = ctx->subquery();
      std::string next_subquery_name {""};
      if (subquery_ctx) {
        next_subquery_name = "IN_ELEMENTS_SUBQUERY_SHANJIE";
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

    void ReplaceColumnWithMaskFunction(ColumnItemList &columns_replace_star, 
        antlr4::Token* from, antlr4::Token* to, ColumnItem col_item, bool is_star) {
      // check columns is mask or not
      bool matched = false;
      std::string replace_col_string;
      decltype(columns_replace_star.size()) num = 0;

      // if col_item is tableA.*, all the columns' table name should be tableA
      std::string table_prefix;
       
      for (auto col_tmp : columns_replace_star) {
        num++;
        MaskItem mask_item_save;
        for (auto mask_item : mask_item_list_) {
          if ((matched = IsMaskColumn(column_dag_, column_relation_map_, mask_item, col_tmp))) {
            mask_item_save = mask_item;
            break;
          }
        }

        if (StrCaseCmp(col_item.column, "*") && !col_item.table.empty()) {
          table_prefix = col_item.table;
        } else {
          table_prefix = col_tmp.table;
        }

        if (matched) {
          // replace col_tmp with mask_function
          replace_col_string += mask_item_save.mask_function + "(" + 
            (table_prefix.empty() ? "" : table_prefix + ".") + col_tmp.column +
            ")" + (col_tmp.hasAs ? " AS " : " ") + 
            (col_tmp.alias.empty() ? col_tmp.column : col_tmp.alias);
        } else {

          if (!is_star) {
            // if not star
            return;
          }

          replace_col_string += (table_prefix.empty() ? "" : table_prefix + ".")
            + col_tmp.column + (col_tmp.hasAs ? " AS " : " ") +
            (col_tmp.alias.empty()? "" : col_tmp.alias);
        }

        if (num < (columns_replace_star.size())) {
          replace_col_string += ", ";
        }
      }

      if (!replace_col_string.empty()) {
        rewriter_.replace(from, to, replace_col_string);
      }
    }

  private:
    antlr4::TokenStreamRewriter rewriter_;
    KingbaseSqlParser *parser_;

    // for finding "root" query block
    std::vector<std::string> subquery_namev_;
    std::vector<bool> root_query_blockv_;
    std::vector<std::string> subquery_name_save_;
    bool is_root_query_block_;

    ColumnDAG column_dag_;
    std::map<ColumnItem, ColumnItemList> column_relation_map_;
    MaskItemList mask_item_list_;
};

#endif

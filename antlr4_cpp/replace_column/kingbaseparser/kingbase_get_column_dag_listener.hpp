/*************************************************************************
 * @file kingbase_get_column_dag_listener.hpp
 * @brief get map of tables and columns
 * NOTE: in ParseTree, antlr travel tree depth first, when enter tree node,
 * visit all the children, and then exit tree node, so we can get all 
 * the current tree node info when exit tree node.
 *
 * Here I use a vector to store subquery_name, before enter subquery, give
 * a name for it and push_back into vector, when enter the subquery, use
 * back() from vector, and if the subquery has another subquery, do as the
 * same recursively. subquery_name will be pop_back in exitXXXX functions
 *
 * join_on_part:
 * antlr4 travel parseTree depth first recursively, in Join_on_partContext, 
 * antlr4 will visit Relational_expressionContext several times, but we
 * just pay attention to the first time when enter Join_on_partContext, ignore
 * other times.
 *
 * subquery_name:
 * Every time before enter subquery(query_block), we will give a name for it.
 * Specially, in with clause, we will give it a name called "with_subquery",
 * to distinct the "root" query_block which subquery_name is empty.
 * So, we can check query_block is "root" or not by checking subquery_name is
 * empty or not in Tables2Columns structure. 
 *
 * NOTE: Mask action only takes effect on columns in "root" query_block
 * @author Jona
 * @date 10/09/2019
 *************************************************************************/
#ifndef __KINGBASE_GET_COLUMN_DAG_LISTENER_HPP__ 
#define __KINGBASE_GET_COLUMN_DAG_LISTENER_HPP__ 

#include <string>

#include "item.h"
#include "column_relation_dag.h"
#include "KingbaseSqlParserBaseListener.h"
#include "KingbaseSqlParser.h"

class KingbaseGetColumnDAG : public KingbaseSqlParserBaseListener {
  public:
    KingbaseGetColumnDAG(KingbaseSqlParser *parser) : parser_(parser) {
      subquery_namev_.clear();
      column_dag_.clear();
      column_list_.clear();
      table_list_.clear();
      column_list_restore_.clear();
      table_list_restore_.clear();

      join_on_part_ = false;
      column_or_expression_visited_ = false;
      in_for_update_clause_ = false;
      count_for_name_ = 0;
    }
    ~KingbaseGetColumnDAG() {}

    /***********************************************************
     * with_query:
     *  wity_query_name column_list AS subquery
     * we can get table2columnlist, table2subquery from it 
     * columnlist in with clause has no column alias name
     * @author Jona
     * @param 
     * @date 10/09/2019 
     ***********************************************************/ 
    void enterWith_query(KingbaseSqlParser::With_queryContext *ctx) {
      // get subquery_name
      std::string next_subquery_name {""};
      std::string table_name {""};

      auto with_query_name_ctx = ctx->with_query_name();
      if (with_query_name_ctx) {
        table_name = with_query_name_ctx->getText();

        // give a name for next subquery
        next_subquery_name = table_name + SUBQUERY_SUFFIX;      // give a name for next subquery_name
      }
      subquery_namev_.push_back(next_subquery_name);

      // build relation: table_name to subquery_name
      Table2Subquery tb2subquery;
      tb2subquery.table_name = table_name;
      tb2subquery.subquery_name = next_subquery_name;
      column_dag_.table_to_subquery_list.push_back(tb2subquery);
    }
    void exitWith_query(KingbaseSqlParser::With_queryContext *ctx) {
      if (nullptr == ctx)
        return;

      std::string table_name {""};
      TableItemList table_list;
      TableItem table_item;

      // if subquery_name is not empty, it must be in subquery clause
      auto with_query_name_ctx = ctx->with_query_name();

      table_item.clear();
      if (with_query_name_ctx) {
        table_name = with_query_name_ctx->getText();
        table_item.table = table_name;
      }

      table_list.push_back(table_item);

      // build relation
      Tables2Columns tb2column;
      // in with clause, we give the table_name as its subquery_name
      tb2column.subquery_name = table_item.table + SUBQUERY_WITHCLAUSE;
      tb2column.from = table_list;
      tb2column.to = column_list_;
      column_dag_.table_to_column_list.push_back(tb2column);

    }

    void enterParen_column_list(KingbaseSqlParser::Paren_column_listContext *ctx) {
      column_list_.clear();
    }
    void exitParen_column_list(KingbaseSqlParser::Paren_column_listContext *ctx) {
      // get all the columns from Column_listContext
    }

    void enterColumn_name(KingbaseSqlParser::Column_nameContext *ctx) {
      if (nullptr == ctx)
        return;

      if (column_or_expression_visited_) {
        // this is in the subtree of Selected_listContext, Column_nameContext
        // has visited in Selected_list_elementContext, return directly
        return;
      }

      if (in_for_update_clause_) {
        // here in for update clause, ignore column_item
        return;
      }

      ColumnItem column_item;
      column_item.clear();

      // push_back column into column_list_
      column_item = get_column(ctx->getText());
      column_list_.push_back(column_item);
    }

    /***********************************************************
     * query_block defines select syntax  
     * if subquery_name is empty, it is the top select statement, of course, 
     * depth should be 9
     * we get tables2columns here.
     * @author Jona
     * @param 
     * @date 10/09/2019 
     ***********************************************************/ 
    void enterQuery_block(KingbaseSqlParser::Query_blockContext *ctx) {
    }
    void exitQuery_block(KingbaseSqlParser::Query_blockContext *ctx) {
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

    /***********************************************************
     * subquery_operation_part  
     *      : (UNION ALL? | INTERSECT | MINUS) subquery_basic_elements
     * for example:
     * select c1, c2 from table1
     * union all 
     * select c3, c4 from table2;
     * Here, the two subquery should have same subquery_name, but when enterQuery_block,
     * we get subquery_name, and clear current when exitQuery_block. Instead, we
     * save the current subquery info in column_dag_.tables_to_columns.
     *
     * In other words, when we enterSubquery_operation_part, we can always find
     * the paralleled subquery from column_dag_.table_to_column_list.back()
     * @author Jona
     * @param 
     * @date 11/09/2019 
     ***********************************************************/ 
    void enterSubquery_operation_part(KingbaseSqlParser::Subquery_operation_partContext *ctx) {
      std::string cur_subquery_name {""};
      if (!column_dag_.table_to_column_list.empty()) {
        cur_subquery_name = column_dag_.table_to_column_list.back().subquery_name;
        subquery_namev_.push_back(cur_subquery_name);
      }
    }
    void exitSubquery_operation_part(KingbaseSqlParser::Subquery_operation_partContext *ctx) {
    }

    /* ****************************************************************** */
    /* for select list */
    /* ****************************************************************** */
    void enterSelected_list(KingbaseSqlParser::Selected_listContext *ctx) {
      if (nullptr == ctx)
        return;

      // set flag, column_name or expression will return directly
      column_or_expression_visited_ = true;

      // save parent's column_list_ first
      if (!column_list_.empty()) {
        column_list_restore_.push_back(column_list_);
      }
      column_list_.clear();
    }
    void exitSelected_list(KingbaseSqlParser::Selected_listContext *ctx) {
      column_or_expression_visited_ = false;
    }

    void enterSelected_list_element_column(KingbaseSqlParser::Selected_list_element_columnContext *ctx) {
      if (nullptr == ctx)
        return;

      antlr4::TokenStream *tokens = parser_->getTokenStream();

      std::string select_list_ele_string {""};

      auto column_ctx = ctx->column_name();
      auto expr_ctx   = ctx->expression();
      auto as_ctx     = ctx->AS();
      auto alias_ctx  = ctx->column_alias();

      if (column_ctx)
        select_list_ele_string = tokens->getText(column_ctx);
      else if (expr_ctx)
        select_list_ele_string = tokens->getText(expr_ctx);

      ColumnItem column_item;
      column_item.clear();

      // push_back column into column_list_
      column_item = get_column(select_list_ele_string);

      if (alias_ctx) 
        column_item.alias = tokens->getText(alias_ctx);

      if (as_ctx) {
        column_item.hasAs = true;
      }

      column_list_.push_back(column_item);

      // **NOTE:**
      // here we have got column_item, but antlr4 will still travel
      // Column_nameContext or ExpressionContext then, repeated
    }

    void enterSelected_list_element_asterisk(KingbaseSqlParser::Selected_list_element_asteriskContext *ctx) {
      if (nullptr == ctx)
        return;

      antlr4::TokenStream *tokens = parser_->getTokenStream();

      ColumnItem col_item = get_column(tokens->getText(ctx));
      column_list_.push_back(col_item);
    }

    /* ****************************************************************** */
    /* from clause */
    /* get table list, table maybe a subquery, subquery must enter query_block, 
     * here, we just get the map between table_name and subquery_name */
    /* ****************************************************************** */
    void enterTable_ref_list(KingbaseSqlParser::Table_ref_listContext *ctx) {
      if (table_list_.size()) {
        // the current context maybe in a subquery, and table_list_ store
        // its parent's table_list info, save first
        table_list_restore_.push_back(table_list_);
      }
      table_list_.clear();
    }

    void enterTable_ref_aux(KingbaseSqlParser::Table_ref_auxContext *ctx) {
      if (nullptr == ctx)
        return;

      antlr4::TokenStream *tokens = parser_->getTokenStream();

      table_item_.clear();
      std::string tb_alias;
      auto alias_ctx = ctx->table_alias();
      if (alias_ctx) {
        tb_alias = tokens->getText(ctx->table_alias());
        table_item_.alias = tb_alias;
      } else {
        tb_alias = "TABLE_REF_" + std::to_string(count_for_name_);
        count_for_name_++;
      }

      auto table_ref_aux_internal_ctx = ctx->table_ref_aux_internal();
      std::string table_ref_aux_internal_string;
      if (table_ref_aux_internal_ctx)
        table_ref_aux_internal_string = tokens->getText(table_ref_aux_internal_ctx);

      // check whether table_ref_aux_internal is subquery or not
      Table2Subquery tb2subquery;
      if (table_ref_aux_internal_string.find("SELECT") != std::string::npos) {
        // subquery
        tb2subquery.subquery_name = tb_alias + SUBQUERY_SUFFIX;
        tb2subquery.table_name = tb_alias;
        subquery_namev_.push_back(tb2subquery.subquery_name);      // push subquery_name

        column_dag_.table_to_subquery_list.push_back(tb2subquery);

        // in this case, antlr4 will not enterTable_name
        // push_back table_item_ here
        table_item_.table = tb_alias;
        table_list_.push_back(table_item_);
      }
    }
    void exitTable_ref_aux(KingbaseSqlParser::Table_ref_auxContext *ctx) {
    }

    void enterTable_name(KingbaseSqlParser::Table_nameContext *ctx) {
      if (nullptr == ctx)
        return;

      if (column_or_expression_visited_) {
        // in Selected_list_elementContext, antlr4 will visit here only when
        // ctx is tableview_name.*, but we don't need to visit here again.
        return;
      }

      antlr4::TokenStream *tokens = parser_->getTokenStream();
      std::string table_info = tokens->getText(ctx);

      std::vector<std::string> sv;
      split(table_info, sv, '.');
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

      table_list_.push_back(table_item_);
    }
    void exitTable_name(KingbaseSqlParser::Table_nameContext *ctx) {
    }

    /* ****************************************************************** */
    /* for equivalent condition 
     * join_on_part */
    /* ****************************************************************** */
    void enterJoin_on_part(KingbaseSqlParser::Join_on_partContext *ctx) {
      // columnA = columnB
      join_on_part_ = true;
    }
    void exitJoin_on_part(KingbaseSqlParser::Join_on_partContext *ctx) {
    }

    /***********************************************************
     * relational_expression:
     *    relational_expression(A) relational_operator relational_expression(B)
     *
     * tree will enter relational_expression first, and then enter same tree
     * node twice to get value of A and B, but we should not enter A and B twice
     * @author Jona
     * @param 
     * @date 12/09/2019 
     ***********************************************************/ 
    void enterRelational_expression(KingbaseSqlParser::Relational_expressionContext *ctx) {
      if (nullptr == ctx)
        return;

      if (!join_on_part_) {
        // not in join_on_part
        return;
      }

      antlr4::TokenStream *tokens = parser_->getTokenStream();
      auto expr0_ctx = ctx->relational_expression(0);
      auto expr1_ctx = ctx->relational_expression(1);
      auto oper_ctx  = ctx->relational_operator();

      // ColumnA = ColumnB
      if (oper_ctx) {
        if (strcasecmp(oper_ctx->getText().c_str(), "=") != 0)
          return;
      }

      EquivalentCond equ_cond;
      equ_cond.from = get_column(tokens->getText(expr0_ctx));
      equ_cond.to = get_column(tokens->getText(expr1_ctx));
      column_dag_.equivalent_cond_list.push_back(equ_cond);

      // prevent entering A and B 
      join_on_part_ = false;
    }

    void enterIn_elements(KingbaseSqlParser::In_elementsContext *ctx) {
      if (nullptr == ctx)
        return;

      auto subquery_ctx = ctx->subquery();
      std::string subquery_name_in_element {""};
      std::string next_subquery_name {""};
      if (subquery_ctx) {
        subquery_name_in_element = "IN_ELEMENT_" + std::to_string(count_for_name_);
        next_subquery_name = subquery_name_in_element + SUBQUERY_SUFFIX;
        count_for_name_++;

        Table2Subquery tb2subquery;
        tb2subquery.table_name = subquery_name_in_element;
        tb2subquery.subquery_name = next_subquery_name;
        column_dag_.table_to_subquery_list.push_back(tb2subquery);

        subquery_namev_.push_back(next_subquery_name);
      }
    }

    void enterFor_update_clause(KingbaseSqlParser::For_update_clauseContext *ctx) {
      if (nullptr == ctx) {
        return;
      }

      in_for_update_clause_ = true;
    }
    void exitFor_update_clause(KingbaseSqlParser::For_update_clauseContext *ctx) {
      in_for_update_clause_ = false;
    }

    ColumnDAG column_dag() {
      return column_dag_;
    }

    void set_column_dag(ColumnDAG &column_dag) {
      column_dag_ = column_dag;
    }

    /***********************************************************
     * build a map for mask_item, the value of key is ColumnItemList
     * for example:
     * with A(name, score) as (select s.name, c.score from student s join 
     * course c on s.stu_no = c.stu_no) select A.name, A.score, dept.name
     * from A join dept on A.name = dept.name;
     * MaskItem is {"student", "name"}, the map<ColumnItem, ColumnItemList> is
     * {"student", "name"} <-> {{"s", "name"}, {"student", "name"}, {"A", "name"}, 
     * {"dept", "name"}}
     * @author Jona
     * @param 
     * @date 16/09/2019 
     ***********************************************************/ 
    std::map<ColumnItem, ColumnItemList> GetColumnRelationsByMaskItemList(
        MaskItemList &mask_item_list) {
      std::map<ColumnItem, ColumnItemList> column_relation_map;
      for (auto item : mask_item_list) {
        GetColumnRelations(column_dag_, item, column_relation_map);
      }

      return column_relation_map;
    }

  private:
    std::vector<std::string> subquery_namev_;
    ColumnDAG column_dag_;
    KingbaseSqlParser *parser_;

    ColumnItemList column_list_;        // get column_list
    std::vector<ColumnItemList> column_list_restore_; // restore

    TableItemList  table_list_;
    TableItem table_item_;
    std::vector<TableItemList> table_list_restore_;  // restore table_list

    bool join_on_part_;
    bool column_or_expression_visited_;
    bool in_for_update_clause_;
    int count_for_name_;
};

#endif

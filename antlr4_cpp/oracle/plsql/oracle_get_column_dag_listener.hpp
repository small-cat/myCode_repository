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
#ifndef __ORACLE_GET_COLUMN_DAG_LISTENER_HPP__ 
#define __ORACLE_GET_COLUMN_DAG_LISTENER_HPP__ 

#include <string>

#include "item.h"
#include "column_relation_dag.h"
#include "PlSqlParserBaseListener.h"
#include "PlSqlParser.h"

class OracleGetColumnDAG : public PlSqlParserBaseListener {
  public:
    OracleGetColumnDAG(PlSqlParser *parser) : parser_(parser) {
      subquery_namev_.clear();
      column_dag_.clear();
      column_list_.clear();
      table_list_.clear();
      column_list_restore_.clear();
      table_list_restore_.clear();

      join_on_part_ = false;
      count_for_name_ = 0;
      in_selected_list = false;
      in_selected_list_element_ = false;
    }
    ~OracleGetColumnDAG() {}

    void enterFactoring_element(PlSqlParser::Factoring_elementContext *ctx) {
      if (nullptr == ctx) {
        return;
      }

      std::string next_subquery_name;
      std::string table_name;
      antlr4::TokenStream *tokens = parser_->getTokenStream();

      auto query_name_ctx = ctx->query_name();
      if (query_name_ctx) {
        table_name = tokens->getText(query_name_ctx);

        next_subquery_name = table_name + SUBQUERY_NAMES_PART[SUBQUERY_SUFFIX];
      }

      subquery_namev_.push_back(next_subquery_name);

      // build relation
      Table2Subquery tb2subquery;
      tb2subquery.table_name = table_name;
      tb2subquery.subquery_name = next_subquery_name;
      column_dag_.table_to_subquery_list.push_back(tb2subquery);
    }

    void exitFactoring_element(PlSqlParser::Factoring_elementContext *ctx) {
      if (nullptr == ctx) {
        return;
      }

      antlr4::TokenStream *tokens = parser_->getTokenStream();
      TableItemList table_list;
      TableItem table_item;
      std::string table_name;

      auto query_name_ctx = ctx->query_name();
      if (query_name_ctx) {
        table_name = tokens->getText(query_name_ctx);
        table_item.table = table_name;
      }
      table_list.push_back(table_item);

      Tables2Columns tb2column;
      tb2column.subquery_name = table_name + SUBQUERY_NAMES_PART[SUBQUERY_WITHCLAUSE];
      tb2column.from = table_list;
      tb2column.to = column_list_;
      column_dag_.table_to_column_list.push_back(tb2column);
    }

    void enterParen_column_list(PlSqlParser::Paren_column_listContext *ctx) {
      column_list_.clear();
    }

    void enterColumn_name(PlSqlParser::Column_nameContext *ctx) {
      if (nullptr == ctx)
        return;

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
    void exitQuery_block(PlSqlParser::Query_blockContext *ctx) {
      if (nullptr == ctx) {
        return;
      }
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
    void enterSubquery_operation_part(PlSqlParser::Subquery_operation_partContext *ctx) {
      std::string cur_subquery_name {""};
      if (!column_dag_.table_to_column_list.empty()) {
        cur_subquery_name = column_dag_.table_to_column_list.back().subquery_name;
        subquery_namev_.push_back(cur_subquery_name);
      }
    }

    /* ****************************************************************** */
    /* for select list */
    /* ****************************************************************** */
    void enterSelected_list(PlSqlParser::Selected_listContext *ctx) {
      if (nullptr == ctx)
        return;
      
      in_selected_list = true;

      // save parent's column_list_ first
      if (!column_list_.empty()) {
        column_list_restore_.push_back(column_list_);
      }
      column_list_.clear();

      ColumnItem citem;
      if (ctx->ASTERISK()) {
        citem.column = ctx->ASTERISK()->getText();
        column_list_.push_back(citem);
      }
    }
    void exitSelected_list(PlSqlParser::Selected_listContext *ctx) {
      in_selected_list = false;
    }

    void enterSelected_list_element(PlSqlParser::Selected_list_elementContext *ctx) {
      column_item_.clear();
      in_selected_list_element_ = false;
    }

    void exitSelected_list_element(PlSqlParser::Selected_list_elementContext *ctx) {
      if (nullptr == ctx) {
        return;
      }
      
      antlr4::TokenStream *tokens = parser_->getTokenStream();

      auto tableview_name_ctx = ctx->tableview_name();
      if (tableview_name_ctx) {
        column_item_ = get_column(tokens->getText(ctx));
        column_list_.push_back(column_item_);
        return;
      }

      auto expr_ctx = ctx->expression();
      auto as_ctx = ctx->AS();
      auto column_alias_ctx = ctx->column_alias();

      if (column_alias_ctx) {
        column_item_.alias = tokens->getText(column_alias_ctx);
      }

      if (as_ctx) {
        column_item_.hasAs = true;
      }

      if (column_item_.column.empty()) {
        // column maybe an expression
        column_item_.column = tokens->getText(expr_ctx);
      }

      column_list_.push_back(column_item_);
      in_selected_list_element_ = false;
    }

    void enterGeneral_element_part(PlSqlParser::General_element_partContext *ctx) {
      if (nullptr == ctx) {
        return;
      }

      if (!in_selected_list_element_) {
        return;
      }

      antlr4::TokenStream *tokens = parser_->getTokenStream();
      column_item_ = get_column(tokens->getText(ctx));
    }
    
    /* ****************************************************************** */
    /* from clause */
    /* get table list, table maybe a subquery, subquery must enter query_block, 
     * here, we just get the map between table_name and subquery_name */
    /* ****************************************************************** */
    void enterTable_ref_list(PlSqlParser::Table_ref_listContext *ctx) {
      if (table_list_.size()) {
        // the current context maybe in a subquery, and table_list_ store
        // its parent's table_list info, save first
        table_list_restore_.push_back(table_list_);
      }
      table_list_.clear();
    }

    void enterTable_ref_aux(PlSqlParser::Table_ref_auxContext *ctx) {
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
        tb_alias = SUBQUERY_NAMES_PART[SUBQUERY_TABLE_PREFIX] + std::to_string(count_for_name_);
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
        tb2subquery.subquery_name = tb_alias + SUBQUERY_NAMES_PART[SUBQUERY_SUFFIX];
        tb2subquery.table_name = tb_alias;
        subquery_namev_.push_back(tb2subquery.subquery_name);      // push subquery_name

        column_dag_.table_to_subquery_list.push_back(tb2subquery);

        // in this case, antlr4 will not enterTable_name
        // push_back table_item_ here
        table_item_.table = tb_alias;
        table_list_.push_back(table_item_);
      }
    }

    void enterTableview_name(PlSqlParser::Tableview_nameContext *ctx) {
      if (nullptr == ctx)
        return;

      if (in_selected_list) {
        // in Selected_list_elementContext, antlr4 will visit here only when
        // ctx is tableview_name.*, but we don't need to visit here again.
        return;
      }

      auto identifier_ctx = ctx->identifier();
      if (!identifier_ctx) {
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

    /* ****************************************************************** */
    /* for equivalent condition 
     * join_on_part */
    /* ****************************************************************** */
    void enterJoin_on_part(PlSqlParser::Join_on_partContext *ctx) {
      // columnA = columnB
      join_on_part_ = true;
    }
    void exitJoin_on_part(PlSqlParser::Join_on_partContext *ctx) {
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
    void enterRelational_expression(PlSqlParser::Relational_expressionContext *ctx) {
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
    void exitRelational_expression(PlSqlParser::Relational_expressionContext *ctx) {
    }

    void enterIn_elements(PlSqlParser::In_elementsContext *ctx) {
      if (nullptr == ctx)
        return;

      auto subquery_ctx = ctx->subquery();
      std::string subquery_name_in_element {""};
      std::string next_subquery_name {""};
      if (subquery_ctx) {
        subquery_name_in_element = SUBQUERY_NAMES_PART[SUBQUERY_IN_ELEMENTS_PREFIX] + std::to_string(count_for_name_);
        next_subquery_name = subquery_name_in_element + SUBQUERY_NAMES_PART[SUBQUERY_SUFFIX];
        count_for_name_++;

        Table2Subquery tb2subquery;
        tb2subquery.table_name = subquery_name_in_element;
        tb2subquery.subquery_name = next_subquery_name;
        column_dag_.table_to_subquery_list.push_back(tb2subquery);

        subquery_namev_.push_back(next_subquery_name);
      }
    }

    ColumnDAG column_dag() {
      return column_dag_;
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
    PlSqlParser *parser_;

    ColumnItem column_item_;
    ColumnItemList column_list_;        // get column_list
    std::vector<ColumnItemList> column_list_restore_; // restore

    TableItemList  table_list_;
    TableItem table_item_;
    std::vector<TableItemList> table_list_restore_;  // restore table_list

    bool join_on_part_;
    int count_for_name_;
    bool in_selected_list;
    bool in_selected_list_element_;
};

#endif

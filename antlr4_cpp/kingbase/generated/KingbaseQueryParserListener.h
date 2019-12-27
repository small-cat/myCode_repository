
// Generated from KingbaseQueryParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "KingbaseQueryParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by KingbaseQueryParser.
 */
class  KingbaseQueryParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterData_manipulation_language_statements(KingbaseQueryParser::Data_manipulation_language_statementsContext *ctx) = 0;
  virtual void exitData_manipulation_language_statements(KingbaseQueryParser::Data_manipulation_language_statementsContext *ctx) = 0;

  virtual void enterMerge_statement(KingbaseQueryParser::Merge_statementContext *ctx) = 0;
  virtual void exitMerge_statement(KingbaseQueryParser::Merge_statementContext *ctx) = 0;

  virtual void enterMerge_update_clause(KingbaseQueryParser::Merge_update_clauseContext *ctx) = 0;
  virtual void exitMerge_update_clause(KingbaseQueryParser::Merge_update_clauseContext *ctx) = 0;

  virtual void enterMerge_element(KingbaseQueryParser::Merge_elementContext *ctx) = 0;
  virtual void exitMerge_element(KingbaseQueryParser::Merge_elementContext *ctx) = 0;

  virtual void enterMerge_update_delete_part(KingbaseQueryParser::Merge_update_delete_partContext *ctx) = 0;
  virtual void exitMerge_update_delete_part(KingbaseQueryParser::Merge_update_delete_partContext *ctx) = 0;

  virtual void enterMerge_insert_clause(KingbaseQueryParser::Merge_insert_clauseContext *ctx) = 0;
  virtual void exitMerge_insert_clause(KingbaseQueryParser::Merge_insert_clauseContext *ctx) = 0;

  virtual void enterSelected_tableview(KingbaseQueryParser::Selected_tableviewContext *ctx) = 0;
  virtual void exitSelected_tableview(KingbaseQueryParser::Selected_tableviewContext *ctx) = 0;

  virtual void enterTruncate_statement(KingbaseQueryParser::Truncate_statementContext *ctx) = 0;
  virtual void exitTruncate_statement(KingbaseQueryParser::Truncate_statementContext *ctx) = 0;

  virtual void enterSelect_statement(KingbaseQueryParser::Select_statementContext *ctx) = 0;
  virtual void exitSelect_statement(KingbaseQueryParser::Select_statementContext *ctx) = 0;

  virtual void enterWith_clause(KingbaseQueryParser::With_clauseContext *ctx) = 0;
  virtual void exitWith_clause(KingbaseQueryParser::With_clauseContext *ctx) = 0;

  virtual void enterWith_query(KingbaseQueryParser::With_queryContext *ctx) = 0;
  virtual void exitWith_query(KingbaseQueryParser::With_queryContext *ctx) = 0;

  virtual void enterSubquery(KingbaseQueryParser::SubqueryContext *ctx) = 0;
  virtual void exitSubquery(KingbaseQueryParser::SubqueryContext *ctx) = 0;

  virtual void enterSubquery_basic_elements(KingbaseQueryParser::Subquery_basic_elementsContext *ctx) = 0;
  virtual void exitSubquery_basic_elements(KingbaseQueryParser::Subquery_basic_elementsContext *ctx) = 0;

  virtual void enterSubquery_operation_part(KingbaseQueryParser::Subquery_operation_partContext *ctx) = 0;
  virtual void exitSubquery_operation_part(KingbaseQueryParser::Subquery_operation_partContext *ctx) = 0;

  virtual void enterDml_table_expression_clause(KingbaseQueryParser::Dml_table_expression_clauseContext *ctx) = 0;
  virtual void exitDml_table_expression_clause(KingbaseQueryParser::Dml_table_expression_clauseContext *ctx) = 0;

  virtual void enterTable_collection_expression(KingbaseQueryParser::Table_collection_expressionContext *ctx) = 0;
  virtual void exitTable_collection_expression(KingbaseQueryParser::Table_collection_expressionContext *ctx) = 0;

  virtual void enterSubquery_restriction_clause(KingbaseQueryParser::Subquery_restriction_clauseContext *ctx) = 0;
  virtual void exitSubquery_restriction_clause(KingbaseQueryParser::Subquery_restriction_clauseContext *ctx) = 0;

  virtual void enterSample_clause(KingbaseQueryParser::Sample_clauseContext *ctx) = 0;
  virtual void exitSample_clause(KingbaseQueryParser::Sample_clauseContext *ctx) = 0;

  virtual void enterSeed_part(KingbaseQueryParser::Seed_partContext *ctx) = 0;
  virtual void exitSeed_part(KingbaseQueryParser::Seed_partContext *ctx) = 0;

  virtual void enterQuery_block(KingbaseQueryParser::Query_blockContext *ctx) = 0;
  virtual void exitQuery_block(KingbaseQueryParser::Query_blockContext *ctx) = 0;

  virtual void enterTop_clause(KingbaseQueryParser::Top_clauseContext *ctx) = 0;
  virtual void exitTop_clause(KingbaseQueryParser::Top_clauseContext *ctx) = 0;

  virtual void enterStart_value(KingbaseQueryParser::Start_valueContext *ctx) = 0;
  virtual void exitStart_value(KingbaseQueryParser::Start_valueContext *ctx) = 0;

  virtual void enterLine_count(KingbaseQueryParser::Line_countContext *ctx) = 0;
  virtual void exitLine_count(KingbaseQueryParser::Line_countContext *ctx) = 0;

  virtual void enterSelected_list(KingbaseQueryParser::Selected_listContext *ctx) = 0;
  virtual void exitSelected_list(KingbaseQueryParser::Selected_listContext *ctx) = 0;

  virtual void enterSelected_list_element(KingbaseQueryParser::Selected_list_elementContext *ctx) = 0;
  virtual void exitSelected_list_element(KingbaseQueryParser::Selected_list_elementContext *ctx) = 0;

  virtual void enterFrom_clause(KingbaseQueryParser::From_clauseContext *ctx) = 0;
  virtual void exitFrom_clause(KingbaseQueryParser::From_clauseContext *ctx) = 0;

  virtual void enterTable_ref_list(KingbaseQueryParser::Table_ref_listContext *ctx) = 0;
  virtual void exitTable_ref_list(KingbaseQueryParser::Table_ref_listContext *ctx) = 0;

  virtual void enterTable_ref(KingbaseQueryParser::Table_refContext *ctx) = 0;
  virtual void exitTable_ref(KingbaseQueryParser::Table_refContext *ctx) = 0;

  virtual void enterTable_ref_aux(KingbaseQueryParser::Table_ref_auxContext *ctx) = 0;
  virtual void exitTable_ref_aux(KingbaseQueryParser::Table_ref_auxContext *ctx) = 0;

  virtual void enterTable_ref_aux_internal_one(KingbaseQueryParser::Table_ref_aux_internal_oneContext *ctx) = 0;
  virtual void exitTable_ref_aux_internal_one(KingbaseQueryParser::Table_ref_aux_internal_oneContext *ctx) = 0;

  virtual void enterTable_ref_aux_internal_two(KingbaseQueryParser::Table_ref_aux_internal_twoContext *ctx) = 0;
  virtual void exitTable_ref_aux_internal_two(KingbaseQueryParser::Table_ref_aux_internal_twoContext *ctx) = 0;

  virtual void enterTable_ref_aux_internal_three(KingbaseQueryParser::Table_ref_aux_internal_threeContext *ctx) = 0;
  virtual void exitTable_ref_aux_internal_three(KingbaseQueryParser::Table_ref_aux_internal_threeContext *ctx) = 0;

  virtual void enterWhere_clause(KingbaseQueryParser::Where_clauseContext *ctx) = 0;
  virtual void exitWhere_clause(KingbaseQueryParser::Where_clauseContext *ctx) = 0;

  virtual void enterJoin_clause(KingbaseQueryParser::Join_clauseContext *ctx) = 0;
  virtual void exitJoin_clause(KingbaseQueryParser::Join_clauseContext *ctx) = 0;

  virtual void enterJoin_on_part(KingbaseQueryParser::Join_on_partContext *ctx) = 0;
  virtual void exitJoin_on_part(KingbaseQueryParser::Join_on_partContext *ctx) = 0;

  virtual void enterJoin_using_part(KingbaseQueryParser::Join_using_partContext *ctx) = 0;
  virtual void exitJoin_using_part(KingbaseQueryParser::Join_using_partContext *ctx) = 0;

  virtual void enterOuter_join_type(KingbaseQueryParser::Outer_join_typeContext *ctx) = 0;
  virtual void exitOuter_join_type(KingbaseQueryParser::Outer_join_typeContext *ctx) = 0;

  virtual void enterQuery_partition_clause(KingbaseQueryParser::Query_partition_clauseContext *ctx) = 0;
  virtual void exitQuery_partition_clause(KingbaseQueryParser::Query_partition_clauseContext *ctx) = 0;

  virtual void enterPivot_clause(KingbaseQueryParser::Pivot_clauseContext *ctx) = 0;
  virtual void exitPivot_clause(KingbaseQueryParser::Pivot_clauseContext *ctx) = 0;

  virtual void enterPivot_element(KingbaseQueryParser::Pivot_elementContext *ctx) = 0;
  virtual void exitPivot_element(KingbaseQueryParser::Pivot_elementContext *ctx) = 0;

  virtual void enterAggregate_function_name(KingbaseQueryParser::Aggregate_function_nameContext *ctx) = 0;
  virtual void exitAggregate_function_name(KingbaseQueryParser::Aggregate_function_nameContext *ctx) = 0;

  virtual void enterPivot_for_clause(KingbaseQueryParser::Pivot_for_clauseContext *ctx) = 0;
  virtual void exitPivot_for_clause(KingbaseQueryParser::Pivot_for_clauseContext *ctx) = 0;

  virtual void enterPivot_in_clause(KingbaseQueryParser::Pivot_in_clauseContext *ctx) = 0;
  virtual void exitPivot_in_clause(KingbaseQueryParser::Pivot_in_clauseContext *ctx) = 0;

  virtual void enterPivot_in_clause_element(KingbaseQueryParser::Pivot_in_clause_elementContext *ctx) = 0;
  virtual void exitPivot_in_clause_element(KingbaseQueryParser::Pivot_in_clause_elementContext *ctx) = 0;

  virtual void enterPivot_in_clause_elements(KingbaseQueryParser::Pivot_in_clause_elementsContext *ctx) = 0;
  virtual void exitPivot_in_clause_elements(KingbaseQueryParser::Pivot_in_clause_elementsContext *ctx) = 0;

  virtual void enterUnpivot_clause(KingbaseQueryParser::Unpivot_clauseContext *ctx) = 0;
  virtual void exitUnpivot_clause(KingbaseQueryParser::Unpivot_clauseContext *ctx) = 0;

  virtual void enterUnpivot_in_clause(KingbaseQueryParser::Unpivot_in_clauseContext *ctx) = 0;
  virtual void exitUnpivot_in_clause(KingbaseQueryParser::Unpivot_in_clauseContext *ctx) = 0;

  virtual void enterUnpivot_in_elements(KingbaseQueryParser::Unpivot_in_elementsContext *ctx) = 0;
  virtual void exitUnpivot_in_elements(KingbaseQueryParser::Unpivot_in_elementsContext *ctx) = 0;

  virtual void enterHierarchical_query_clause(KingbaseQueryParser::Hierarchical_query_clauseContext *ctx) = 0;
  virtual void exitHierarchical_query_clause(KingbaseQueryParser::Hierarchical_query_clauseContext *ctx) = 0;

  virtual void enterStart_part(KingbaseQueryParser::Start_partContext *ctx) = 0;
  virtual void exitStart_part(KingbaseQueryParser::Start_partContext *ctx) = 0;

  virtual void enterGroup_by_clause(KingbaseQueryParser::Group_by_clauseContext *ctx) = 0;
  virtual void exitGroup_by_clause(KingbaseQueryParser::Group_by_clauseContext *ctx) = 0;

  virtual void enterGroup_by_elements(KingbaseQueryParser::Group_by_elementsContext *ctx) = 0;
  virtual void exitGroup_by_elements(KingbaseQueryParser::Group_by_elementsContext *ctx) = 0;

  virtual void enterRollup_cube_expression(KingbaseQueryParser::Rollup_cube_expressionContext *ctx) = 0;
  virtual void exitRollup_cube_expression(KingbaseQueryParser::Rollup_cube_expressionContext *ctx) = 0;

  virtual void enterEmpty_expression(KingbaseQueryParser::Empty_expressionContext *ctx) = 0;
  virtual void exitEmpty_expression(KingbaseQueryParser::Empty_expressionContext *ctx) = 0;

  virtual void enterGrouping_sets_expression(KingbaseQueryParser::Grouping_sets_expressionContext *ctx) = 0;
  virtual void exitGrouping_sets_expression(KingbaseQueryParser::Grouping_sets_expressionContext *ctx) = 0;

  virtual void enterHaving_clause(KingbaseQueryParser::Having_clauseContext *ctx) = 0;
  virtual void exitHaving_clause(KingbaseQueryParser::Having_clauseContext *ctx) = 0;

  virtual void enterCell_assignment(KingbaseQueryParser::Cell_assignmentContext *ctx) = 0;
  virtual void exitCell_assignment(KingbaseQueryParser::Cell_assignmentContext *ctx) = 0;

  virtual void enterUntil_part(KingbaseQueryParser::Until_partContext *ctx) = 0;
  virtual void exitUntil_part(KingbaseQueryParser::Until_partContext *ctx) = 0;

  virtual void enterOrder_by_clause(KingbaseQueryParser::Order_by_clauseContext *ctx) = 0;
  virtual void exitOrder_by_clause(KingbaseQueryParser::Order_by_clauseContext *ctx) = 0;

  virtual void enterOrder_by_elements(KingbaseQueryParser::Order_by_elementsContext *ctx) = 0;
  virtual void exitOrder_by_elements(KingbaseQueryParser::Order_by_elementsContext *ctx) = 0;

  virtual void enterLimit_clause(KingbaseQueryParser::Limit_clauseContext *ctx) = 0;
  virtual void exitLimit_clause(KingbaseQueryParser::Limit_clauseContext *ctx) = 0;

  virtual void enterOffset_clause(KingbaseQueryParser::Offset_clauseContext *ctx) = 0;
  virtual void exitOffset_clause(KingbaseQueryParser::Offset_clauseContext *ctx) = 0;

  virtual void enterFetch_clause(KingbaseQueryParser::Fetch_clauseContext *ctx) = 0;
  virtual void exitFetch_clause(KingbaseQueryParser::Fetch_clauseContext *ctx) = 0;

  virtual void enterFor_update_clause(KingbaseQueryParser::For_update_clauseContext *ctx) = 0;
  virtual void exitFor_update_clause(KingbaseQueryParser::For_update_clauseContext *ctx) = 0;

  virtual void enterFor_update_of_part(KingbaseQueryParser::For_update_of_partContext *ctx) = 0;
  virtual void exitFor_update_of_part(KingbaseQueryParser::For_update_of_partContext *ctx) = 0;

  virtual void enterFor_update_options(KingbaseQueryParser::For_update_optionsContext *ctx) = 0;
  virtual void exitFor_update_options(KingbaseQueryParser::For_update_optionsContext *ctx) = 0;

  virtual void enterKeep_clause(KingbaseQueryParser::Keep_clauseContext *ctx) = 0;
  virtual void exitKeep_clause(KingbaseQueryParser::Keep_clauseContext *ctx) = 0;

  virtual void enterFunction_argument(KingbaseQueryParser::Function_argumentContext *ctx) = 0;
  virtual void exitFunction_argument(KingbaseQueryParser::Function_argumentContext *ctx) = 0;

  virtual void enterFunction_argument_analytic(KingbaseQueryParser::Function_argument_analyticContext *ctx) = 0;
  virtual void exitFunction_argument_analytic(KingbaseQueryParser::Function_argument_analyticContext *ctx) = 0;

  virtual void enterFunction_argument_modeling(KingbaseQueryParser::Function_argument_modelingContext *ctx) = 0;
  virtual void exitFunction_argument_modeling(KingbaseQueryParser::Function_argument_modelingContext *ctx) = 0;

  virtual void enterRespect_or_ignore_nulls(KingbaseQueryParser::Respect_or_ignore_nullsContext *ctx) = 0;
  virtual void exitRespect_or_ignore_nulls(KingbaseQueryParser::Respect_or_ignore_nullsContext *ctx) = 0;

  virtual void enterArgument(KingbaseQueryParser::ArgumentContext *ctx) = 0;
  virtual void exitArgument(KingbaseQueryParser::ArgumentContext *ctx) = 0;

  virtual void enterDatatype(KingbaseQueryParser::DatatypeContext *ctx) = 0;
  virtual void exitDatatype(KingbaseQueryParser::DatatypeContext *ctx) = 0;

  virtual void enterPrecision_part(KingbaseQueryParser::Precision_partContext *ctx) = 0;
  virtual void exitPrecision_part(KingbaseQueryParser::Precision_partContext *ctx) = 0;

  virtual void enterNative_datatype_element(KingbaseQueryParser::Native_datatype_elementContext *ctx) = 0;
  virtual void exitNative_datatype_element(KingbaseQueryParser::Native_datatype_elementContext *ctx) = 0;

  virtual void enterUpdate_statement(KingbaseQueryParser::Update_statementContext *ctx) = 0;
  virtual void exitUpdate_statement(KingbaseQueryParser::Update_statementContext *ctx) = 0;

  virtual void enterUpdate_set_clause(KingbaseQueryParser::Update_set_clauseContext *ctx) = 0;
  virtual void exitUpdate_set_clause(KingbaseQueryParser::Update_set_clauseContext *ctx) = 0;

  virtual void enterColumn_based_update_set_clause(KingbaseQueryParser::Column_based_update_set_clauseContext *ctx) = 0;
  virtual void exitColumn_based_update_set_clause(KingbaseQueryParser::Column_based_update_set_clauseContext *ctx) = 0;

  virtual void enterDelete_statement(KingbaseQueryParser::Delete_statementContext *ctx) = 0;
  virtual void exitDelete_statement(KingbaseQueryParser::Delete_statementContext *ctx) = 0;

  virtual void enterGeneral_table_ref(KingbaseQueryParser::General_table_refContext *ctx) = 0;
  virtual void exitGeneral_table_ref(KingbaseQueryParser::General_table_refContext *ctx) = 0;

  virtual void enterStatic_returning_clause(KingbaseQueryParser::Static_returning_clauseContext *ctx) = 0;
  virtual void exitStatic_returning_clause(KingbaseQueryParser::Static_returning_clauseContext *ctx) = 0;

  virtual void enterInsert_statement(KingbaseQueryParser::Insert_statementContext *ctx) = 0;
  virtual void exitInsert_statement(KingbaseQueryParser::Insert_statementContext *ctx) = 0;

  virtual void enterSingle_table_insert(KingbaseQueryParser::Single_table_insertContext *ctx) = 0;
  virtual void exitSingle_table_insert(KingbaseQueryParser::Single_table_insertContext *ctx) = 0;

  virtual void enterMulti_table_insert(KingbaseQueryParser::Multi_table_insertContext *ctx) = 0;
  virtual void exitMulti_table_insert(KingbaseQueryParser::Multi_table_insertContext *ctx) = 0;

  virtual void enterMulti_table_element(KingbaseQueryParser::Multi_table_elementContext *ctx) = 0;
  virtual void exitMulti_table_element(KingbaseQueryParser::Multi_table_elementContext *ctx) = 0;

  virtual void enterConditional_insert_clause(KingbaseQueryParser::Conditional_insert_clauseContext *ctx) = 0;
  virtual void exitConditional_insert_clause(KingbaseQueryParser::Conditional_insert_clauseContext *ctx) = 0;

  virtual void enterConditional_insert_when_part(KingbaseQueryParser::Conditional_insert_when_partContext *ctx) = 0;
  virtual void exitConditional_insert_when_part(KingbaseQueryParser::Conditional_insert_when_partContext *ctx) = 0;

  virtual void enterConditional_insert_else_part(KingbaseQueryParser::Conditional_insert_else_partContext *ctx) = 0;
  virtual void exitConditional_insert_else_part(KingbaseQueryParser::Conditional_insert_else_partContext *ctx) = 0;

  virtual void enterInsert_into_clause(KingbaseQueryParser::Insert_into_clauseContext *ctx) = 0;
  virtual void exitInsert_into_clause(KingbaseQueryParser::Insert_into_clauseContext *ctx) = 0;

  virtual void enterValues_clause(KingbaseQueryParser::Values_clauseContext *ctx) = 0;
  virtual void exitValues_clause(KingbaseQueryParser::Values_clauseContext *ctx) = 0;

  virtual void enterCopy_statement(KingbaseQueryParser::Copy_statementContext *ctx) = 0;
  virtual void exitCopy_statement(KingbaseQueryParser::Copy_statementContext *ctx) = 0;

  virtual void enterCondition(KingbaseQueryParser::ConditionContext *ctx) = 0;
  virtual void exitCondition(KingbaseQueryParser::ConditionContext *ctx) = 0;

  virtual void enterExpressions(KingbaseQueryParser::ExpressionsContext *ctx) = 0;
  virtual void exitExpressions(KingbaseQueryParser::ExpressionsContext *ctx) = 0;

  virtual void enterExpression(KingbaseQueryParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(KingbaseQueryParser::ExpressionContext *ctx) = 0;

  virtual void enterCursor_expression(KingbaseQueryParser::Cursor_expressionContext *ctx) = 0;
  virtual void exitCursor_expression(KingbaseQueryParser::Cursor_expressionContext *ctx) = 0;

  virtual void enterLogical_expression(KingbaseQueryParser::Logical_expressionContext *ctx) = 0;
  virtual void exitLogical_expression(KingbaseQueryParser::Logical_expressionContext *ctx) = 0;

  virtual void enterMultiset_expression(KingbaseQueryParser::Multiset_expressionContext *ctx) = 0;
  virtual void exitMultiset_expression(KingbaseQueryParser::Multiset_expressionContext *ctx) = 0;

  virtual void enterRelational_expression(KingbaseQueryParser::Relational_expressionContext *ctx) = 0;
  virtual void exitRelational_expression(KingbaseQueryParser::Relational_expressionContext *ctx) = 0;

  virtual void enterCompound_expression(KingbaseQueryParser::Compound_expressionContext *ctx) = 0;
  virtual void exitCompound_expression(KingbaseQueryParser::Compound_expressionContext *ctx) = 0;

  virtual void enterRelational_operator(KingbaseQueryParser::Relational_operatorContext *ctx) = 0;
  virtual void exitRelational_operator(KingbaseQueryParser::Relational_operatorContext *ctx) = 0;

  virtual void enterIn_elements(KingbaseQueryParser::In_elementsContext *ctx) = 0;
  virtual void exitIn_elements(KingbaseQueryParser::In_elementsContext *ctx) = 0;

  virtual void enterBetween_elements(KingbaseQueryParser::Between_elementsContext *ctx) = 0;
  virtual void exitBetween_elements(KingbaseQueryParser::Between_elementsContext *ctx) = 0;

  virtual void enterConcatenation(KingbaseQueryParser::ConcatenationContext *ctx) = 0;
  virtual void exitConcatenation(KingbaseQueryParser::ConcatenationContext *ctx) = 0;

  virtual void enterInterval_expression(KingbaseQueryParser::Interval_expressionContext *ctx) = 0;
  virtual void exitInterval_expression(KingbaseQueryParser::Interval_expressionContext *ctx) = 0;

  virtual void enterModel_expression(KingbaseQueryParser::Model_expressionContext *ctx) = 0;
  virtual void exitModel_expression(KingbaseQueryParser::Model_expressionContext *ctx) = 0;

  virtual void enterModel_expression_element(KingbaseQueryParser::Model_expression_elementContext *ctx) = 0;
  virtual void exitModel_expression_element(KingbaseQueryParser::Model_expression_elementContext *ctx) = 0;

  virtual void enterSingle_column_for_loop(KingbaseQueryParser::Single_column_for_loopContext *ctx) = 0;
  virtual void exitSingle_column_for_loop(KingbaseQueryParser::Single_column_for_loopContext *ctx) = 0;

  virtual void enterMulti_column_for_loop(KingbaseQueryParser::Multi_column_for_loopContext *ctx) = 0;
  virtual void exitMulti_column_for_loop(KingbaseQueryParser::Multi_column_for_loopContext *ctx) = 0;

  virtual void enterUnary_expression(KingbaseQueryParser::Unary_expressionContext *ctx) = 0;
  virtual void exitUnary_expression(KingbaseQueryParser::Unary_expressionContext *ctx) = 0;

  virtual void enterCase_statement(KingbaseQueryParser::Case_statementContext *ctx) = 0;
  virtual void exitCase_statement(KingbaseQueryParser::Case_statementContext *ctx) = 0;

  virtual void enterSimple_case_statement(KingbaseQueryParser::Simple_case_statementContext *ctx) = 0;
  virtual void exitSimple_case_statement(KingbaseQueryParser::Simple_case_statementContext *ctx) = 0;

  virtual void enterSimple_case_when_part(KingbaseQueryParser::Simple_case_when_partContext *ctx) = 0;
  virtual void exitSimple_case_when_part(KingbaseQueryParser::Simple_case_when_partContext *ctx) = 0;

  virtual void enterSearched_case_statement(KingbaseQueryParser::Searched_case_statementContext *ctx) = 0;
  virtual void exitSearched_case_statement(KingbaseQueryParser::Searched_case_statementContext *ctx) = 0;

  virtual void enterSearched_case_when_part(KingbaseQueryParser::Searched_case_when_partContext *ctx) = 0;
  virtual void exitSearched_case_when_part(KingbaseQueryParser::Searched_case_when_partContext *ctx) = 0;

  virtual void enterCase_else_part(KingbaseQueryParser::Case_else_partContext *ctx) = 0;
  virtual void exitCase_else_part(KingbaseQueryParser::Case_else_partContext *ctx) = 0;

  virtual void enterAtom(KingbaseQueryParser::AtomContext *ctx) = 0;
  virtual void exitAtom(KingbaseQueryParser::AtomContext *ctx) = 0;

  virtual void enterQuantified_expression(KingbaseQueryParser::Quantified_expressionContext *ctx) = 0;
  virtual void exitQuantified_expression(KingbaseQueryParser::Quantified_expressionContext *ctx) = 0;

  virtual void enterString_function(KingbaseQueryParser::String_functionContext *ctx) = 0;
  virtual void exitString_function(KingbaseQueryParser::String_functionContext *ctx) = 0;

  virtual void enterStandard_function(KingbaseQueryParser::Standard_functionContext *ctx) = 0;
  virtual void exitStandard_function(KingbaseQueryParser::Standard_functionContext *ctx) = 0;

  virtual void enterNumeric_function_wrapper(KingbaseQueryParser::Numeric_function_wrapperContext *ctx) = 0;
  virtual void exitNumeric_function_wrapper(KingbaseQueryParser::Numeric_function_wrapperContext *ctx) = 0;

  virtual void enterNumeric_function(KingbaseQueryParser::Numeric_functionContext *ctx) = 0;
  virtual void exitNumeric_function(KingbaseQueryParser::Numeric_functionContext *ctx) = 0;

  virtual void enterOther_function(KingbaseQueryParser::Other_functionContext *ctx) = 0;
  virtual void exitOther_function(KingbaseQueryParser::Other_functionContext *ctx) = 0;

  virtual void enterOver_clause_keyword(KingbaseQueryParser::Over_clause_keywordContext *ctx) = 0;
  virtual void exitOver_clause_keyword(KingbaseQueryParser::Over_clause_keywordContext *ctx) = 0;

  virtual void enterWithin_or_over_clause_keyword(KingbaseQueryParser::Within_or_over_clause_keywordContext *ctx) = 0;
  virtual void exitWithin_or_over_clause_keyword(KingbaseQueryParser::Within_or_over_clause_keywordContext *ctx) = 0;

  virtual void enterStandard_prediction_function_keyword(KingbaseQueryParser::Standard_prediction_function_keywordContext *ctx) = 0;
  virtual void exitStandard_prediction_function_keyword(KingbaseQueryParser::Standard_prediction_function_keywordContext *ctx) = 0;

  virtual void enterOver_clause(KingbaseQueryParser::Over_clauseContext *ctx) = 0;
  virtual void exitOver_clause(KingbaseQueryParser::Over_clauseContext *ctx) = 0;

  virtual void enterWindowing_clause(KingbaseQueryParser::Windowing_clauseContext *ctx) = 0;
  virtual void exitWindowing_clause(KingbaseQueryParser::Windowing_clauseContext *ctx) = 0;

  virtual void enterWindowing_type(KingbaseQueryParser::Windowing_typeContext *ctx) = 0;
  virtual void exitWindowing_type(KingbaseQueryParser::Windowing_typeContext *ctx) = 0;

  virtual void enterWindowing_elements(KingbaseQueryParser::Windowing_elementsContext *ctx) = 0;
  virtual void exitWindowing_elements(KingbaseQueryParser::Windowing_elementsContext *ctx) = 0;

  virtual void enterCollect_order_by_part(KingbaseQueryParser::Collect_order_by_partContext *ctx) = 0;
  virtual void exitCollect_order_by_part(KingbaseQueryParser::Collect_order_by_partContext *ctx) = 0;

  virtual void enterWithin_or_over_part(KingbaseQueryParser::Within_or_over_partContext *ctx) = 0;
  virtual void exitWithin_or_over_part(KingbaseQueryParser::Within_or_over_partContext *ctx) = 0;

  virtual void enterXml_passing_clause(KingbaseQueryParser::Xml_passing_clauseContext *ctx) = 0;
  virtual void exitXml_passing_clause(KingbaseQueryParser::Xml_passing_clauseContext *ctx) = 0;

  virtual void enterXml_attributes_clause(KingbaseQueryParser::Xml_attributes_clauseContext *ctx) = 0;
  virtual void exitXml_attributes_clause(KingbaseQueryParser::Xml_attributes_clauseContext *ctx) = 0;

  virtual void enterXml_namespaces_clause(KingbaseQueryParser::Xml_namespaces_clauseContext *ctx) = 0;
  virtual void exitXml_namespaces_clause(KingbaseQueryParser::Xml_namespaces_clauseContext *ctx) = 0;

  virtual void enterXml_table_column(KingbaseQueryParser::Xml_table_columnContext *ctx) = 0;
  virtual void exitXml_table_column(KingbaseQueryParser::Xml_table_columnContext *ctx) = 0;

  virtual void enterXml_general_default_part(KingbaseQueryParser::Xml_general_default_partContext *ctx) = 0;
  virtual void exitXml_general_default_part(KingbaseQueryParser::Xml_general_default_partContext *ctx) = 0;

  virtual void enterXml_multiuse_expression_element(KingbaseQueryParser::Xml_multiuse_expression_elementContext *ctx) = 0;
  virtual void exitXml_multiuse_expression_element(KingbaseQueryParser::Xml_multiuse_expression_elementContext *ctx) = 0;

  virtual void enterXmlroot_param_version_part(KingbaseQueryParser::Xmlroot_param_version_partContext *ctx) = 0;
  virtual void exitXmlroot_param_version_part(KingbaseQueryParser::Xmlroot_param_version_partContext *ctx) = 0;

  virtual void enterXmlroot_param_standalone_part(KingbaseQueryParser::Xmlroot_param_standalone_partContext *ctx) = 0;
  virtual void exitXmlroot_param_standalone_part(KingbaseQueryParser::Xmlroot_param_standalone_partContext *ctx) = 0;

  virtual void enterXmlserialize_param_enconding_part(KingbaseQueryParser::Xmlserialize_param_enconding_partContext *ctx) = 0;
  virtual void exitXmlserialize_param_enconding_part(KingbaseQueryParser::Xmlserialize_param_enconding_partContext *ctx) = 0;

  virtual void enterXmlserialize_param_version_part(KingbaseQueryParser::Xmlserialize_param_version_partContext *ctx) = 0;
  virtual void exitXmlserialize_param_version_part(KingbaseQueryParser::Xmlserialize_param_version_partContext *ctx) = 0;

  virtual void enterXmlserialize_param_ident_part(KingbaseQueryParser::Xmlserialize_param_ident_partContext *ctx) = 0;
  virtual void exitXmlserialize_param_ident_part(KingbaseQueryParser::Xmlserialize_param_ident_partContext *ctx) = 0;

  virtual void enterBind_variable(KingbaseQueryParser::Bind_variableContext *ctx) = 0;
  virtual void exitBind_variable(KingbaseQueryParser::Bind_variableContext *ctx) = 0;

  virtual void enterGeneral_element(KingbaseQueryParser::General_elementContext *ctx) = 0;
  virtual void exitGeneral_element(KingbaseQueryParser::General_elementContext *ctx) = 0;

  virtual void enterGeneral_element_part(KingbaseQueryParser::General_element_partContext *ctx) = 0;
  virtual void exitGeneral_element_part(KingbaseQueryParser::General_element_partContext *ctx) = 0;

  virtual void enterTable_element(KingbaseQueryParser::Table_elementContext *ctx) = 0;
  virtual void exitTable_element(KingbaseQueryParser::Table_elementContext *ctx) = 0;

  virtual void enterTableview_name(KingbaseQueryParser::Tableview_nameContext *ctx) = 0;
  virtual void exitTableview_name(KingbaseQueryParser::Tableview_nameContext *ctx) = 0;

  virtual void enterColumn_name(KingbaseQueryParser::Column_nameContext *ctx) = 0;
  virtual void exitColumn_name(KingbaseQueryParser::Column_nameContext *ctx) = 0;

  virtual void enterTable_name(KingbaseQueryParser::Table_nameContext *ctx) = 0;
  virtual void exitTable_name(KingbaseQueryParser::Table_nameContext *ctx) = 0;

  virtual void enterLink_name(KingbaseQueryParser::Link_nameContext *ctx) = 0;
  virtual void exitLink_name(KingbaseQueryParser::Link_nameContext *ctx) = 0;

  virtual void enterChar_set_name(KingbaseQueryParser::Char_set_nameContext *ctx) = 0;
  virtual void exitChar_set_name(KingbaseQueryParser::Char_set_nameContext *ctx) = 0;

  virtual void enterColumn_alias(KingbaseQueryParser::Column_aliasContext *ctx) = 0;
  virtual void exitColumn_alias(KingbaseQueryParser::Column_aliasContext *ctx) = 0;

  virtual void enterTable_alias(KingbaseQueryParser::Table_aliasContext *ctx) = 0;
  virtual void exitTable_alias(KingbaseQueryParser::Table_aliasContext *ctx) = 0;

  virtual void enterXml_column_name(KingbaseQueryParser::Xml_column_nameContext *ctx) = 0;
  virtual void exitXml_column_name(KingbaseQueryParser::Xml_column_nameContext *ctx) = 0;

  virtual void enterParen_column_list(KingbaseQueryParser::Paren_column_listContext *ctx) = 0;
  virtual void exitParen_column_list(KingbaseQueryParser::Paren_column_listContext *ctx) = 0;

  virtual void enterColumn_list(KingbaseQueryParser::Column_listContext *ctx) = 0;
  virtual void exitColumn_list(KingbaseQueryParser::Column_listContext *ctx) = 0;

  virtual void enterWith_query_name(KingbaseQueryParser::With_query_nameContext *ctx) = 0;
  virtual void exitWith_query_name(KingbaseQueryParser::With_query_nameContext *ctx) = 0;

  virtual void enterConstraint_name(KingbaseQueryParser::Constraint_nameContext *ctx) = 0;
  virtual void exitConstraint_name(KingbaseQueryParser::Constraint_nameContext *ctx) = 0;

  virtual void enterLabel_name(KingbaseQueryParser::Label_nameContext *ctx) = 0;
  virtual void exitLabel_name(KingbaseQueryParser::Label_nameContext *ctx) = 0;

  virtual void enterPartition_extension_clause(KingbaseQueryParser::Partition_extension_clauseContext *ctx) = 0;
  virtual void exitPartition_extension_clause(KingbaseQueryParser::Partition_extension_clauseContext *ctx) = 0;

  virtual void enterConstant(KingbaseQueryParser::ConstantContext *ctx) = 0;
  virtual void exitConstant(KingbaseQueryParser::ConstantContext *ctx) = 0;

  virtual void enterNumeric(KingbaseQueryParser::NumericContext *ctx) = 0;
  virtual void exitNumeric(KingbaseQueryParser::NumericContext *ctx) = 0;

  virtual void enterNumeric_negative(KingbaseQueryParser::Numeric_negativeContext *ctx) = 0;
  virtual void exitNumeric_negative(KingbaseQueryParser::Numeric_negativeContext *ctx) = 0;

  virtual void enterQuoted_string(KingbaseQueryParser::Quoted_stringContext *ctx) = 0;
  virtual void exitQuoted_string(KingbaseQueryParser::Quoted_stringContext *ctx) = 0;

  virtual void enterIdentifier(KingbaseQueryParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(KingbaseQueryParser::IdentifierContext *ctx) = 0;

  virtual void enterId_expression(KingbaseQueryParser::Id_expressionContext *ctx) = 0;
  virtual void exitId_expression(KingbaseQueryParser::Id_expressionContext *ctx) = 0;

  virtual void enterOuter_join_sign(KingbaseQueryParser::Outer_join_signContext *ctx) = 0;
  virtual void exitOuter_join_sign(KingbaseQueryParser::Outer_join_signContext *ctx) = 0;

  virtual void enterRegular_id(KingbaseQueryParser::Regular_idContext *ctx) = 0;
  virtual void exitRegular_id(KingbaseQueryParser::Regular_idContext *ctx) = 0;

  virtual void enterNon_reserved_keywords_in_12c(KingbaseQueryParser::Non_reserved_keywords_in_12cContext *ctx) = 0;
  virtual void exitNon_reserved_keywords_in_12c(KingbaseQueryParser::Non_reserved_keywords_in_12cContext *ctx) = 0;

  virtual void enterNon_reserved_keywords_pre12c(KingbaseQueryParser::Non_reserved_keywords_pre12cContext *ctx) = 0;
  virtual void exitNon_reserved_keywords_pre12c(KingbaseQueryParser::Non_reserved_keywords_pre12cContext *ctx) = 0;


};


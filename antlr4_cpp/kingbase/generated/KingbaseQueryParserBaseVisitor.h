
// Generated from KingbaseQueryParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "KingbaseQueryParserVisitor.h"


/**
 * This class provides an empty implementation of KingbaseQueryParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  KingbaseQueryParserBaseVisitor : public KingbaseQueryParserVisitor {
public:

  virtual antlrcpp::Any visitData_manipulation_language_statements(KingbaseQueryParser::Data_manipulation_language_statementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMerge_statement(KingbaseQueryParser::Merge_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMerge_update_clause(KingbaseQueryParser::Merge_update_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMerge_element(KingbaseQueryParser::Merge_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMerge_update_delete_part(KingbaseQueryParser::Merge_update_delete_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMerge_insert_clause(KingbaseQueryParser::Merge_insert_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelected_tableview(KingbaseQueryParser::Selected_tableviewContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTruncate_statement(KingbaseQueryParser::Truncate_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelect_statement(KingbaseQueryParser::Select_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWith_clause(KingbaseQueryParser::With_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWith_query(KingbaseQueryParser::With_queryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubquery(KingbaseQueryParser::SubqueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubquery_basic_elements(KingbaseQueryParser::Subquery_basic_elementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubquery_operation_part(KingbaseQueryParser::Subquery_operation_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDml_table_expression_clause(KingbaseQueryParser::Dml_table_expression_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_collection_expression(KingbaseQueryParser::Table_collection_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubquery_restriction_clause(KingbaseQueryParser::Subquery_restriction_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSample_clause(KingbaseQueryParser::Sample_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSeed_part(KingbaseQueryParser::Seed_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQuery_block(KingbaseQueryParser::Query_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTop_clause(KingbaseQueryParser::Top_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStart_value(KingbaseQueryParser::Start_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLine_count(KingbaseQueryParser::Line_countContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelected_list(KingbaseQueryParser::Selected_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelected_list_element(KingbaseQueryParser::Selected_list_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFrom_clause(KingbaseQueryParser::From_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_ref_list(KingbaseQueryParser::Table_ref_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_ref(KingbaseQueryParser::Table_refContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_ref_aux(KingbaseQueryParser::Table_ref_auxContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_ref_aux_internal_one(KingbaseQueryParser::Table_ref_aux_internal_oneContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_ref_aux_internal_two(KingbaseQueryParser::Table_ref_aux_internal_twoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_ref_aux_internal_three(KingbaseQueryParser::Table_ref_aux_internal_threeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhere_clause(KingbaseQueryParser::Where_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitJoin_clause(KingbaseQueryParser::Join_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitJoin_on_part(KingbaseQueryParser::Join_on_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitJoin_using_part(KingbaseQueryParser::Join_using_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOuter_join_type(KingbaseQueryParser::Outer_join_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQuery_partition_clause(KingbaseQueryParser::Query_partition_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPivot_clause(KingbaseQueryParser::Pivot_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPivot_element(KingbaseQueryParser::Pivot_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAggregate_function_name(KingbaseQueryParser::Aggregate_function_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPivot_for_clause(KingbaseQueryParser::Pivot_for_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPivot_in_clause(KingbaseQueryParser::Pivot_in_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPivot_in_clause_element(KingbaseQueryParser::Pivot_in_clause_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPivot_in_clause_elements(KingbaseQueryParser::Pivot_in_clause_elementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnpivot_clause(KingbaseQueryParser::Unpivot_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnpivot_in_clause(KingbaseQueryParser::Unpivot_in_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnpivot_in_elements(KingbaseQueryParser::Unpivot_in_elementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHierarchical_query_clause(KingbaseQueryParser::Hierarchical_query_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStart_part(KingbaseQueryParser::Start_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGroup_by_clause(KingbaseQueryParser::Group_by_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGroup_by_elements(KingbaseQueryParser::Group_by_elementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRollup_cube_expression(KingbaseQueryParser::Rollup_cube_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEmpty_expression(KingbaseQueryParser::Empty_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGrouping_sets_expression(KingbaseQueryParser::Grouping_sets_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHaving_clause(KingbaseQueryParser::Having_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCell_assignment(KingbaseQueryParser::Cell_assignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUntil_part(KingbaseQueryParser::Until_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOrder_by_clause(KingbaseQueryParser::Order_by_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOrder_by_elements(KingbaseQueryParser::Order_by_elementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLimit_clause(KingbaseQueryParser::Limit_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOffset_clause(KingbaseQueryParser::Offset_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFetch_clause(KingbaseQueryParser::Fetch_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFor_update_clause(KingbaseQueryParser::For_update_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFor_update_of_part(KingbaseQueryParser::For_update_of_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFor_update_options(KingbaseQueryParser::For_update_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeep_clause(KingbaseQueryParser::Keep_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_argument(KingbaseQueryParser::Function_argumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_argument_analytic(KingbaseQueryParser::Function_argument_analyticContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_argument_modeling(KingbaseQueryParser::Function_argument_modelingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRespect_or_ignore_nulls(KingbaseQueryParser::Respect_or_ignore_nullsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArgument(KingbaseQueryParser::ArgumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDatatype(KingbaseQueryParser::DatatypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrecision_part(KingbaseQueryParser::Precision_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNative_datatype_element(KingbaseQueryParser::Native_datatype_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUpdate_statement(KingbaseQueryParser::Update_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUpdate_set_clause(KingbaseQueryParser::Update_set_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumn_based_update_set_clause(KingbaseQueryParser::Column_based_update_set_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDelete_statement(KingbaseQueryParser::Delete_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGeneral_table_ref(KingbaseQueryParser::General_table_refContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatic_returning_clause(KingbaseQueryParser::Static_returning_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsert_statement(KingbaseQueryParser::Insert_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSingle_table_insert(KingbaseQueryParser::Single_table_insertContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMulti_table_insert(KingbaseQueryParser::Multi_table_insertContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMulti_table_element(KingbaseQueryParser::Multi_table_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditional_insert_clause(KingbaseQueryParser::Conditional_insert_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditional_insert_when_part(KingbaseQueryParser::Conditional_insert_when_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditional_insert_else_part(KingbaseQueryParser::Conditional_insert_else_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsert_into_clause(KingbaseQueryParser::Insert_into_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValues_clause(KingbaseQueryParser::Values_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCopy_statement(KingbaseQueryParser::Copy_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCondition(KingbaseQueryParser::ConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressions(KingbaseQueryParser::ExpressionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(KingbaseQueryParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCursor_expression(KingbaseQueryParser::Cursor_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogical_expression(KingbaseQueryParser::Logical_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultiset_expression(KingbaseQueryParser::Multiset_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelational_expression(KingbaseQueryParser::Relational_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompound_expression(KingbaseQueryParser::Compound_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelational_operator(KingbaseQueryParser::Relational_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIn_elements(KingbaseQueryParser::In_elementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBetween_elements(KingbaseQueryParser::Between_elementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConcatenation(KingbaseQueryParser::ConcatenationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterval_expression(KingbaseQueryParser::Interval_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModel_expression(KingbaseQueryParser::Model_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModel_expression_element(KingbaseQueryParser::Model_expression_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSingle_column_for_loop(KingbaseQueryParser::Single_column_for_loopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMulti_column_for_loop(KingbaseQueryParser::Multi_column_for_loopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnary_expression(KingbaseQueryParser::Unary_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCase_statement(KingbaseQueryParser::Case_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimple_case_statement(KingbaseQueryParser::Simple_case_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimple_case_when_part(KingbaseQueryParser::Simple_case_when_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSearched_case_statement(KingbaseQueryParser::Searched_case_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSearched_case_when_part(KingbaseQueryParser::Searched_case_when_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCase_else_part(KingbaseQueryParser::Case_else_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAtom(KingbaseQueryParser::AtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQuantified_expression(KingbaseQueryParser::Quantified_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitString_function(KingbaseQueryParser::String_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStandard_function(KingbaseQueryParser::Standard_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumeric_function_wrapper(KingbaseQueryParser::Numeric_function_wrapperContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumeric_function(KingbaseQueryParser::Numeric_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOther_function(KingbaseQueryParser::Other_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOver_clause_keyword(KingbaseQueryParser::Over_clause_keywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWithin_or_over_clause_keyword(KingbaseQueryParser::Within_or_over_clause_keywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStandard_prediction_function_keyword(KingbaseQueryParser::Standard_prediction_function_keywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOver_clause(KingbaseQueryParser::Over_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWindowing_clause(KingbaseQueryParser::Windowing_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWindowing_type(KingbaseQueryParser::Windowing_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWindowing_elements(KingbaseQueryParser::Windowing_elementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCollect_order_by_part(KingbaseQueryParser::Collect_order_by_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWithin_or_over_part(KingbaseQueryParser::Within_or_over_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXml_passing_clause(KingbaseQueryParser::Xml_passing_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXml_attributes_clause(KingbaseQueryParser::Xml_attributes_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXml_namespaces_clause(KingbaseQueryParser::Xml_namespaces_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXml_table_column(KingbaseQueryParser::Xml_table_columnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXml_general_default_part(KingbaseQueryParser::Xml_general_default_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXml_multiuse_expression_element(KingbaseQueryParser::Xml_multiuse_expression_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXmlroot_param_version_part(KingbaseQueryParser::Xmlroot_param_version_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXmlroot_param_standalone_part(KingbaseQueryParser::Xmlroot_param_standalone_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXmlserialize_param_enconding_part(KingbaseQueryParser::Xmlserialize_param_enconding_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXmlserialize_param_version_part(KingbaseQueryParser::Xmlserialize_param_version_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXmlserialize_param_ident_part(KingbaseQueryParser::Xmlserialize_param_ident_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBind_variable(KingbaseQueryParser::Bind_variableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGeneral_element(KingbaseQueryParser::General_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGeneral_element_part(KingbaseQueryParser::General_element_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_element(KingbaseQueryParser::Table_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableview_name(KingbaseQueryParser::Tableview_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumn_name(KingbaseQueryParser::Column_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_name(KingbaseQueryParser::Table_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLink_name(KingbaseQueryParser::Link_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChar_set_name(KingbaseQueryParser::Char_set_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumn_alias(KingbaseQueryParser::Column_aliasContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_alias(KingbaseQueryParser::Table_aliasContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXml_column_name(KingbaseQueryParser::Xml_column_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParen_column_list(KingbaseQueryParser::Paren_column_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumn_list(KingbaseQueryParser::Column_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWith_query_name(KingbaseQueryParser::With_query_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstraint_name(KingbaseQueryParser::Constraint_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLabel_name(KingbaseQueryParser::Label_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartition_extension_clause(KingbaseQueryParser::Partition_extension_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstant(KingbaseQueryParser::ConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumeric(KingbaseQueryParser::NumericContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumeric_negative(KingbaseQueryParser::Numeric_negativeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQuoted_string(KingbaseQueryParser::Quoted_stringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifier(KingbaseQueryParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitId_expression(KingbaseQueryParser::Id_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOuter_join_sign(KingbaseQueryParser::Outer_join_signContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRegular_id(KingbaseQueryParser::Regular_idContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNon_reserved_keywords_in_12c(KingbaseQueryParser::Non_reserved_keywords_in_12cContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNon_reserved_keywords_pre12c(KingbaseQueryParser::Non_reserved_keywords_pre12cContext *ctx) override {
    return visitChildren(ctx);
  }


};


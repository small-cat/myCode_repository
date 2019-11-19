
// Generated from /home/jona/myGit/myCode_repository/antlr4_cpp/hive/Hplsql.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "HplsqlParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by HplsqlParser.
 */
class  HplsqlVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by HplsqlParser.
   */
    virtual antlrcpp::Any visitProgram(HplsqlParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitBlock(HplsqlParser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitBegin_end_block(HplsqlParser::Begin_end_blockContext *context) = 0;

    virtual antlrcpp::Any visitSingle_block_stmt(HplsqlParser::Single_block_stmtContext *context) = 0;

    virtual antlrcpp::Any visitBlock_end(HplsqlParser::Block_endContext *context) = 0;

    virtual antlrcpp::Any visitProc_block(HplsqlParser::Proc_blockContext *context) = 0;

    virtual antlrcpp::Any visitStmt(HplsqlParser::StmtContext *context) = 0;

    virtual antlrcpp::Any visitSemicolon_stmt(HplsqlParser::Semicolon_stmtContext *context) = 0;

    virtual antlrcpp::Any visitException_block(HplsqlParser::Exception_blockContext *context) = 0;

    virtual antlrcpp::Any visitException_block_item(HplsqlParser::Exception_block_itemContext *context) = 0;

    virtual antlrcpp::Any visitNull_stmt(HplsqlParser::Null_stmtContext *context) = 0;

    virtual antlrcpp::Any visitExpr_stmt(HplsqlParser::Expr_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAssignment_stmt(HplsqlParser::Assignment_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAssignment_stmt_item(HplsqlParser::Assignment_stmt_itemContext *context) = 0;

    virtual antlrcpp::Any visitAssignment_stmt_single_item(HplsqlParser::Assignment_stmt_single_itemContext *context) = 0;

    virtual antlrcpp::Any visitAssignment_stmt_multiple_item(HplsqlParser::Assignment_stmt_multiple_itemContext *context) = 0;

    virtual antlrcpp::Any visitAssignment_stmt_select_item(HplsqlParser::Assignment_stmt_select_itemContext *context) = 0;

    virtual antlrcpp::Any visitAllocate_cursor_stmt(HplsqlParser::Allocate_cursor_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAssociate_locator_stmt(HplsqlParser::Associate_locator_stmtContext *context) = 0;

    virtual antlrcpp::Any visitBegin_transaction_stmt(HplsqlParser::Begin_transaction_stmtContext *context) = 0;

    virtual antlrcpp::Any visitBreak_stmt(HplsqlParser::Break_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCall_stmt(HplsqlParser::Call_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDeclare_stmt(HplsqlParser::Declare_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDeclare_block(HplsqlParser::Declare_blockContext *context) = 0;

    virtual antlrcpp::Any visitDeclare_block_inplace(HplsqlParser::Declare_block_inplaceContext *context) = 0;

    virtual antlrcpp::Any visitDeclare_stmt_item(HplsqlParser::Declare_stmt_itemContext *context) = 0;

    virtual antlrcpp::Any visitDeclare_var_item(HplsqlParser::Declare_var_itemContext *context) = 0;

    virtual antlrcpp::Any visitDeclare_condition_item(HplsqlParser::Declare_condition_itemContext *context) = 0;

    virtual antlrcpp::Any visitDeclare_cursor_item(HplsqlParser::Declare_cursor_itemContext *context) = 0;

    virtual antlrcpp::Any visitCursor_with_return(HplsqlParser::Cursor_with_returnContext *context) = 0;

    virtual antlrcpp::Any visitCursor_without_return(HplsqlParser::Cursor_without_returnContext *context) = 0;

    virtual antlrcpp::Any visitDeclare_handler_item(HplsqlParser::Declare_handler_itemContext *context) = 0;

    virtual antlrcpp::Any visitDeclare_temporary_table_item(HplsqlParser::Declare_temporary_table_itemContext *context) = 0;

    virtual antlrcpp::Any visitCreate_table_stmt(HplsqlParser::Create_table_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCreate_local_temp_table_stmt(HplsqlParser::Create_local_temp_table_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCreate_table_definition(HplsqlParser::Create_table_definitionContext *context) = 0;

    virtual antlrcpp::Any visitCreate_table_columns(HplsqlParser::Create_table_columnsContext *context) = 0;

    virtual antlrcpp::Any visitCreate_table_columns_item(HplsqlParser::Create_table_columns_itemContext *context) = 0;

    virtual antlrcpp::Any visitColumn_name(HplsqlParser::Column_nameContext *context) = 0;

    virtual antlrcpp::Any visitCreate_table_column_inline_cons(HplsqlParser::Create_table_column_inline_consContext *context) = 0;

    virtual antlrcpp::Any visitCreate_table_column_cons(HplsqlParser::Create_table_column_consContext *context) = 0;

    virtual antlrcpp::Any visitCreate_table_fk_action(HplsqlParser::Create_table_fk_actionContext *context) = 0;

    virtual antlrcpp::Any visitCreate_table_preoptions(HplsqlParser::Create_table_preoptionsContext *context) = 0;

    virtual antlrcpp::Any visitCreate_table_preoptions_item(HplsqlParser::Create_table_preoptions_itemContext *context) = 0;

    virtual antlrcpp::Any visitCreate_table_preoptions_td_item(HplsqlParser::Create_table_preoptions_td_itemContext *context) = 0;

    virtual antlrcpp::Any visitCreate_table_options(HplsqlParser::Create_table_optionsContext *context) = 0;

    virtual antlrcpp::Any visitCreate_table_options_item(HplsqlParser::Create_table_options_itemContext *context) = 0;

    virtual antlrcpp::Any visitCreate_table_options_ora_item(HplsqlParser::Create_table_options_ora_itemContext *context) = 0;

    virtual antlrcpp::Any visitCreate_table_options_db2_item(HplsqlParser::Create_table_options_db2_itemContext *context) = 0;

    virtual antlrcpp::Any visitCreate_table_options_td_item(HplsqlParser::Create_table_options_td_itemContext *context) = 0;

    virtual antlrcpp::Any visitCreate_table_options_hive_item(HplsqlParser::Create_table_options_hive_itemContext *context) = 0;

    virtual antlrcpp::Any visitCreate_table_hive_row_format(HplsqlParser::Create_table_hive_row_formatContext *context) = 0;

    virtual antlrcpp::Any visitCreate_table_hive_row_format_fields(HplsqlParser::Create_table_hive_row_format_fieldsContext *context) = 0;

    virtual antlrcpp::Any visitCreate_table_options_mssql_item(HplsqlParser::Create_table_options_mssql_itemContext *context) = 0;

    virtual antlrcpp::Any visitCreate_table_options_mysql_item(HplsqlParser::Create_table_options_mysql_itemContext *context) = 0;

    virtual antlrcpp::Any visitAlter_table_stmt(HplsqlParser::Alter_table_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAlter_table_item(HplsqlParser::Alter_table_itemContext *context) = 0;

    virtual antlrcpp::Any visitAlter_table_add_constraint(HplsqlParser::Alter_table_add_constraintContext *context) = 0;

    virtual antlrcpp::Any visitAlter_table_add_constraint_item(HplsqlParser::Alter_table_add_constraint_itemContext *context) = 0;

    virtual antlrcpp::Any visitDtype(HplsqlParser::DtypeContext *context) = 0;

    virtual antlrcpp::Any visitDtype_len(HplsqlParser::Dtype_lenContext *context) = 0;

    virtual antlrcpp::Any visitDtype_attr(HplsqlParser::Dtype_attrContext *context) = 0;

    virtual antlrcpp::Any visitDtype_default(HplsqlParser::Dtype_defaultContext *context) = 0;

    virtual antlrcpp::Any visitCreate_database_stmt(HplsqlParser::Create_database_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCreate_database_option(HplsqlParser::Create_database_optionContext *context) = 0;

    virtual antlrcpp::Any visitCreate_function_stmt(HplsqlParser::Create_function_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCreate_function_return(HplsqlParser::Create_function_returnContext *context) = 0;

    virtual antlrcpp::Any visitCreate_package_stmt(HplsqlParser::Create_package_stmtContext *context) = 0;

    virtual antlrcpp::Any visitPackage_spec(HplsqlParser::Package_specContext *context) = 0;

    virtual antlrcpp::Any visitPackage_spec_item(HplsqlParser::Package_spec_itemContext *context) = 0;

    virtual antlrcpp::Any visitCreate_package_body_stmt(HplsqlParser::Create_package_body_stmtContext *context) = 0;

    virtual antlrcpp::Any visitPackage_body(HplsqlParser::Package_bodyContext *context) = 0;

    virtual antlrcpp::Any visitPackage_body_item(HplsqlParser::Package_body_itemContext *context) = 0;

    virtual antlrcpp::Any visitCreate_procedure_stmt(HplsqlParser::Create_procedure_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCreate_routine_params(HplsqlParser::Create_routine_paramsContext *context) = 0;

    virtual antlrcpp::Any visitCreate_routine_param_item(HplsqlParser::Create_routine_param_itemContext *context) = 0;

    virtual antlrcpp::Any visitCreate_routine_options(HplsqlParser::Create_routine_optionsContext *context) = 0;

    virtual antlrcpp::Any visitCreate_routine_option(HplsqlParser::Create_routine_optionContext *context) = 0;

    virtual antlrcpp::Any visitDrop_stmt(HplsqlParser::Drop_stmtContext *context) = 0;

    virtual antlrcpp::Any visitEnd_transaction_stmt(HplsqlParser::End_transaction_stmtContext *context) = 0;

    virtual antlrcpp::Any visitExec_stmt(HplsqlParser::Exec_stmtContext *context) = 0;

    virtual antlrcpp::Any visitIf_stmt(HplsqlParser::If_stmtContext *context) = 0;

    virtual antlrcpp::Any visitIf_plsql_stmt(HplsqlParser::If_plsql_stmtContext *context) = 0;

    virtual antlrcpp::Any visitIf_tsql_stmt(HplsqlParser::If_tsql_stmtContext *context) = 0;

    virtual antlrcpp::Any visitIf_bteq_stmt(HplsqlParser::If_bteq_stmtContext *context) = 0;

    virtual antlrcpp::Any visitElseif_block(HplsqlParser::Elseif_blockContext *context) = 0;

    virtual antlrcpp::Any visitElse_block(HplsqlParser::Else_blockContext *context) = 0;

    virtual antlrcpp::Any visitInclude_stmt(HplsqlParser::Include_stmtContext *context) = 0;

    virtual antlrcpp::Any visitInsert_stmt(HplsqlParser::Insert_stmtContext *context) = 0;

    virtual antlrcpp::Any visitInsert_stmt_cols(HplsqlParser::Insert_stmt_colsContext *context) = 0;

    virtual antlrcpp::Any visitInsert_stmt_rows(HplsqlParser::Insert_stmt_rowsContext *context) = 0;

    virtual antlrcpp::Any visitInsert_stmt_row(HplsqlParser::Insert_stmt_rowContext *context) = 0;

    virtual antlrcpp::Any visitInsert_directory_stmt(HplsqlParser::Insert_directory_stmtContext *context) = 0;

    virtual antlrcpp::Any visitExit_stmt(HplsqlParser::Exit_stmtContext *context) = 0;

    virtual antlrcpp::Any visitGet_diag_stmt(HplsqlParser::Get_diag_stmtContext *context) = 0;

    virtual antlrcpp::Any visitGet_diag_stmt_item(HplsqlParser::Get_diag_stmt_itemContext *context) = 0;

    virtual antlrcpp::Any visitGet_diag_stmt_exception_item(HplsqlParser::Get_diag_stmt_exception_itemContext *context) = 0;

    virtual antlrcpp::Any visitGet_diag_stmt_rowcount_item(HplsqlParser::Get_diag_stmt_rowcount_itemContext *context) = 0;

    virtual antlrcpp::Any visitGrant_stmt(HplsqlParser::Grant_stmtContext *context) = 0;

    virtual antlrcpp::Any visitGrant_stmt_item(HplsqlParser::Grant_stmt_itemContext *context) = 0;

    virtual antlrcpp::Any visitLeave_stmt(HplsqlParser::Leave_stmtContext *context) = 0;

    virtual antlrcpp::Any visitMap_object_stmt(HplsqlParser::Map_object_stmtContext *context) = 0;

    virtual antlrcpp::Any visitOpen_stmt(HplsqlParser::Open_stmtContext *context) = 0;

    virtual antlrcpp::Any visitFetch_stmt(HplsqlParser::Fetch_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCollect_stats_stmt(HplsqlParser::Collect_stats_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCollect_stats_clause(HplsqlParser::Collect_stats_clauseContext *context) = 0;

    virtual antlrcpp::Any visitClose_stmt(HplsqlParser::Close_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCmp_stmt(HplsqlParser::Cmp_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCmp_source(HplsqlParser::Cmp_sourceContext *context) = 0;

    virtual antlrcpp::Any visitCopy_from_local_stmt(HplsqlParser::Copy_from_local_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCopy_stmt(HplsqlParser::Copy_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCopy_source(HplsqlParser::Copy_sourceContext *context) = 0;

    virtual antlrcpp::Any visitCopy_target(HplsqlParser::Copy_targetContext *context) = 0;

    virtual antlrcpp::Any visitCopy_option(HplsqlParser::Copy_optionContext *context) = 0;

    virtual antlrcpp::Any visitCopy_file_option(HplsqlParser::Copy_file_optionContext *context) = 0;

    virtual antlrcpp::Any visitCommit_stmt(HplsqlParser::Commit_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCreate_index_stmt(HplsqlParser::Create_index_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCreate_index_col(HplsqlParser::Create_index_colContext *context) = 0;

    virtual antlrcpp::Any visitIndex_storage_clause(HplsqlParser::Index_storage_clauseContext *context) = 0;

    virtual antlrcpp::Any visitIndex_mssql_storage_clause(HplsqlParser::Index_mssql_storage_clauseContext *context) = 0;

    virtual antlrcpp::Any visitPrint_stmt(HplsqlParser::Print_stmtContext *context) = 0;

    virtual antlrcpp::Any visitQuit_stmt(HplsqlParser::Quit_stmtContext *context) = 0;

    virtual antlrcpp::Any visitRaise_stmt(HplsqlParser::Raise_stmtContext *context) = 0;

    virtual antlrcpp::Any visitResignal_stmt(HplsqlParser::Resignal_stmtContext *context) = 0;

    virtual antlrcpp::Any visitReturn_stmt(HplsqlParser::Return_stmtContext *context) = 0;

    virtual antlrcpp::Any visitRollback_stmt(HplsqlParser::Rollback_stmtContext *context) = 0;

    virtual antlrcpp::Any visitSet_session_option(HplsqlParser::Set_session_optionContext *context) = 0;

    virtual antlrcpp::Any visitSet_current_schema_option(HplsqlParser::Set_current_schema_optionContext *context) = 0;

    virtual antlrcpp::Any visitSet_mssql_session_option(HplsqlParser::Set_mssql_session_optionContext *context) = 0;

    virtual antlrcpp::Any visitSet_teradata_session_option(HplsqlParser::Set_teradata_session_optionContext *context) = 0;

    virtual antlrcpp::Any visitSignal_stmt(HplsqlParser::Signal_stmtContext *context) = 0;

    virtual antlrcpp::Any visitSummary_stmt(HplsqlParser::Summary_stmtContext *context) = 0;

    virtual antlrcpp::Any visitTruncate_stmt(HplsqlParser::Truncate_stmtContext *context) = 0;

    virtual antlrcpp::Any visitUse_stmt(HplsqlParser::Use_stmtContext *context) = 0;

    virtual antlrcpp::Any visitValues_into_stmt(HplsqlParser::Values_into_stmtContext *context) = 0;

    virtual antlrcpp::Any visitWhile_stmt(HplsqlParser::While_stmtContext *context) = 0;

    virtual antlrcpp::Any visitFor_cursor_stmt(HplsqlParser::For_cursor_stmtContext *context) = 0;

    virtual antlrcpp::Any visitFor_range_stmt(HplsqlParser::For_range_stmtContext *context) = 0;

    virtual antlrcpp::Any visitLabel(HplsqlParser::LabelContext *context) = 0;

    virtual antlrcpp::Any visitUsing_clause(HplsqlParser::Using_clauseContext *context) = 0;

    virtual antlrcpp::Any visitSelect_stmt(HplsqlParser::Select_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCte_select_stmt(HplsqlParser::Cte_select_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCte_select_stmt_item(HplsqlParser::Cte_select_stmt_itemContext *context) = 0;

    virtual antlrcpp::Any visitCte_select_cols(HplsqlParser::Cte_select_colsContext *context) = 0;

    virtual antlrcpp::Any visitFullselect_stmt(HplsqlParser::Fullselect_stmtContext *context) = 0;

    virtual antlrcpp::Any visitFullselect_stmt_item(HplsqlParser::Fullselect_stmt_itemContext *context) = 0;

    virtual antlrcpp::Any visitFullselect_set_clause(HplsqlParser::Fullselect_set_clauseContext *context) = 0;

    virtual antlrcpp::Any visitSubselect_stmt(HplsqlParser::Subselect_stmtContext *context) = 0;

    virtual antlrcpp::Any visitSelect_list(HplsqlParser::Select_listContext *context) = 0;

    virtual antlrcpp::Any visitSelect_list_set(HplsqlParser::Select_list_setContext *context) = 0;

    virtual antlrcpp::Any visitSelect_list_limit(HplsqlParser::Select_list_limitContext *context) = 0;

    virtual antlrcpp::Any visitSelect_list_item(HplsqlParser::Select_list_itemContext *context) = 0;

    virtual antlrcpp::Any visitSelect_list_alias(HplsqlParser::Select_list_aliasContext *context) = 0;

    virtual antlrcpp::Any visitSelect_list_asterisk(HplsqlParser::Select_list_asteriskContext *context) = 0;

    virtual antlrcpp::Any visitInto_clause(HplsqlParser::Into_clauseContext *context) = 0;

    virtual antlrcpp::Any visitFrom_clause(HplsqlParser::From_clauseContext *context) = 0;

    virtual antlrcpp::Any visitFrom_table_clause(HplsqlParser::From_table_clauseContext *context) = 0;

    virtual antlrcpp::Any visitFrom_table_name_clause(HplsqlParser::From_table_name_clauseContext *context) = 0;

    virtual antlrcpp::Any visitFrom_subselect_clause(HplsqlParser::From_subselect_clauseContext *context) = 0;

    virtual antlrcpp::Any visitFrom_join_clause(HplsqlParser::From_join_clauseContext *context) = 0;

    virtual antlrcpp::Any visitFrom_join_type_clause(HplsqlParser::From_join_type_clauseContext *context) = 0;

    virtual antlrcpp::Any visitFrom_table_values_clause(HplsqlParser::From_table_values_clauseContext *context) = 0;

    virtual antlrcpp::Any visitFrom_table_values_row(HplsqlParser::From_table_values_rowContext *context) = 0;

    virtual antlrcpp::Any visitFrom_alias_clause(HplsqlParser::From_alias_clauseContext *context) = 0;

    virtual antlrcpp::Any visitTable_name(HplsqlParser::Table_nameContext *context) = 0;

    virtual antlrcpp::Any visitWhere_clause(HplsqlParser::Where_clauseContext *context) = 0;

    virtual antlrcpp::Any visitGroup_by_clause(HplsqlParser::Group_by_clauseContext *context) = 0;

    virtual antlrcpp::Any visitHaving_clause(HplsqlParser::Having_clauseContext *context) = 0;

    virtual antlrcpp::Any visitQualify_clause(HplsqlParser::Qualify_clauseContext *context) = 0;

    virtual antlrcpp::Any visitOrder_by_clause(HplsqlParser::Order_by_clauseContext *context) = 0;

    virtual antlrcpp::Any visitSelect_options(HplsqlParser::Select_optionsContext *context) = 0;

    virtual antlrcpp::Any visitSelect_options_item(HplsqlParser::Select_options_itemContext *context) = 0;

    virtual antlrcpp::Any visitUpdate_stmt(HplsqlParser::Update_stmtContext *context) = 0;

    virtual antlrcpp::Any visitUpdate_assignment(HplsqlParser::Update_assignmentContext *context) = 0;

    virtual antlrcpp::Any visitUpdate_table(HplsqlParser::Update_tableContext *context) = 0;

    virtual antlrcpp::Any visitUpdate_upsert(HplsqlParser::Update_upsertContext *context) = 0;

    virtual antlrcpp::Any visitMerge_stmt(HplsqlParser::Merge_stmtContext *context) = 0;

    virtual antlrcpp::Any visitMerge_table(HplsqlParser::Merge_tableContext *context) = 0;

    virtual antlrcpp::Any visitMerge_condition(HplsqlParser::Merge_conditionContext *context) = 0;

    virtual antlrcpp::Any visitMerge_action(HplsqlParser::Merge_actionContext *context) = 0;

    virtual antlrcpp::Any visitDelete_stmt(HplsqlParser::Delete_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDelete_alias(HplsqlParser::Delete_aliasContext *context) = 0;

    virtual antlrcpp::Any visitDescribe_stmt(HplsqlParser::Describe_stmtContext *context) = 0;

    virtual antlrcpp::Any visitBool_expr(HplsqlParser::Bool_exprContext *context) = 0;

    virtual antlrcpp::Any visitBool_expr_atom(HplsqlParser::Bool_expr_atomContext *context) = 0;

    virtual antlrcpp::Any visitBool_expr_unary(HplsqlParser::Bool_expr_unaryContext *context) = 0;

    virtual antlrcpp::Any visitBool_expr_single_in(HplsqlParser::Bool_expr_single_inContext *context) = 0;

    virtual antlrcpp::Any visitBool_expr_multi_in(HplsqlParser::Bool_expr_multi_inContext *context) = 0;

    virtual antlrcpp::Any visitBool_expr_binary(HplsqlParser::Bool_expr_binaryContext *context) = 0;

    virtual antlrcpp::Any visitBool_expr_logical_operator(HplsqlParser::Bool_expr_logical_operatorContext *context) = 0;

    virtual antlrcpp::Any visitBool_expr_binary_operator(HplsqlParser::Bool_expr_binary_operatorContext *context) = 0;

    virtual antlrcpp::Any visitExpr(HplsqlParser::ExprContext *context) = 0;

    virtual antlrcpp::Any visitExpr_atom(HplsqlParser::Expr_atomContext *context) = 0;

    virtual antlrcpp::Any visitExpr_interval(HplsqlParser::Expr_intervalContext *context) = 0;

    virtual antlrcpp::Any visitInterval_item(HplsqlParser::Interval_itemContext *context) = 0;

    virtual antlrcpp::Any visitExpr_concat(HplsqlParser::Expr_concatContext *context) = 0;

    virtual antlrcpp::Any visitExpr_concat_item(HplsqlParser::Expr_concat_itemContext *context) = 0;

    virtual antlrcpp::Any visitExpr_case(HplsqlParser::Expr_caseContext *context) = 0;

    virtual antlrcpp::Any visitExpr_case_simple(HplsqlParser::Expr_case_simpleContext *context) = 0;

    virtual antlrcpp::Any visitExpr_case_searched(HplsqlParser::Expr_case_searchedContext *context) = 0;

    virtual antlrcpp::Any visitExpr_cursor_attribute(HplsqlParser::Expr_cursor_attributeContext *context) = 0;

    virtual antlrcpp::Any visitExpr_agg_window_func(HplsqlParser::Expr_agg_window_funcContext *context) = 0;

    virtual antlrcpp::Any visitExpr_func_all_distinct(HplsqlParser::Expr_func_all_distinctContext *context) = 0;

    virtual antlrcpp::Any visitExpr_func_over_clause(HplsqlParser::Expr_func_over_clauseContext *context) = 0;

    virtual antlrcpp::Any visitExpr_func_partition_by_clause(HplsqlParser::Expr_func_partition_by_clauseContext *context) = 0;

    virtual antlrcpp::Any visitExpr_spec_func(HplsqlParser::Expr_spec_funcContext *context) = 0;

    virtual antlrcpp::Any visitExpr_func(HplsqlParser::Expr_funcContext *context) = 0;

    virtual antlrcpp::Any visitExpr_func_params(HplsqlParser::Expr_func_paramsContext *context) = 0;

    virtual antlrcpp::Any visitFunc_param(HplsqlParser::Func_paramContext *context) = 0;

    virtual antlrcpp::Any visitExpr_select(HplsqlParser::Expr_selectContext *context) = 0;

    virtual antlrcpp::Any visitExpr_file(HplsqlParser::Expr_fileContext *context) = 0;

    virtual antlrcpp::Any visitHive(HplsqlParser::HiveContext *context) = 0;

    virtual antlrcpp::Any visitHive_item(HplsqlParser::Hive_itemContext *context) = 0;

    virtual antlrcpp::Any visitHost(HplsqlParser::HostContext *context) = 0;

    virtual antlrcpp::Any visitHost_cmd(HplsqlParser::Host_cmdContext *context) = 0;

    virtual antlrcpp::Any visitHost_stmt(HplsqlParser::Host_stmtContext *context) = 0;

    virtual antlrcpp::Any visitFile_name(HplsqlParser::File_nameContext *context) = 0;

    virtual antlrcpp::Any visitDate_literal(HplsqlParser::Date_literalContext *context) = 0;

    virtual antlrcpp::Any visitTimestamp_literal(HplsqlParser::Timestamp_literalContext *context) = 0;

    virtual antlrcpp::Any visitIdent(HplsqlParser::IdentContext *context) = 0;

    virtual antlrcpp::Any visitSingle_quotedString(HplsqlParser::Single_quotedStringContext *context) = 0;

    virtual antlrcpp::Any visitDouble_quotedString(HplsqlParser::Double_quotedStringContext *context) = 0;

    virtual antlrcpp::Any visitInt_number(HplsqlParser::Int_numberContext *context) = 0;

    virtual antlrcpp::Any visitDec_number(HplsqlParser::Dec_numberContext *context) = 0;

    virtual antlrcpp::Any visitBool_literal(HplsqlParser::Bool_literalContext *context) = 0;

    virtual antlrcpp::Any visitNull_const(HplsqlParser::Null_constContext *context) = 0;

    virtual antlrcpp::Any visitNon_reserved_words(HplsqlParser::Non_reserved_wordsContext *context) = 0;


};



// Generated from /home/jona/myGit/myCode_repository/antlr4_cpp/hive/Hplsql.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "HplsqlParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by HplsqlParser.
 */
class  HplsqlListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(HplsqlParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(HplsqlParser::ProgramContext *ctx) = 0;

  virtual void enterBlock(HplsqlParser::BlockContext *ctx) = 0;
  virtual void exitBlock(HplsqlParser::BlockContext *ctx) = 0;

  virtual void enterBegin_end_block(HplsqlParser::Begin_end_blockContext *ctx) = 0;
  virtual void exitBegin_end_block(HplsqlParser::Begin_end_blockContext *ctx) = 0;

  virtual void enterSingle_block_stmt(HplsqlParser::Single_block_stmtContext *ctx) = 0;
  virtual void exitSingle_block_stmt(HplsqlParser::Single_block_stmtContext *ctx) = 0;

  virtual void enterBlock_end(HplsqlParser::Block_endContext *ctx) = 0;
  virtual void exitBlock_end(HplsqlParser::Block_endContext *ctx) = 0;

  virtual void enterProc_block(HplsqlParser::Proc_blockContext *ctx) = 0;
  virtual void exitProc_block(HplsqlParser::Proc_blockContext *ctx) = 0;

  virtual void enterStmt(HplsqlParser::StmtContext *ctx) = 0;
  virtual void exitStmt(HplsqlParser::StmtContext *ctx) = 0;

  virtual void enterSemicolon_stmt(HplsqlParser::Semicolon_stmtContext *ctx) = 0;
  virtual void exitSemicolon_stmt(HplsqlParser::Semicolon_stmtContext *ctx) = 0;

  virtual void enterException_block(HplsqlParser::Exception_blockContext *ctx) = 0;
  virtual void exitException_block(HplsqlParser::Exception_blockContext *ctx) = 0;

  virtual void enterException_block_item(HplsqlParser::Exception_block_itemContext *ctx) = 0;
  virtual void exitException_block_item(HplsqlParser::Exception_block_itemContext *ctx) = 0;

  virtual void enterNull_stmt(HplsqlParser::Null_stmtContext *ctx) = 0;
  virtual void exitNull_stmt(HplsqlParser::Null_stmtContext *ctx) = 0;

  virtual void enterExpr_stmt(HplsqlParser::Expr_stmtContext *ctx) = 0;
  virtual void exitExpr_stmt(HplsqlParser::Expr_stmtContext *ctx) = 0;

  virtual void enterAssignment_stmt(HplsqlParser::Assignment_stmtContext *ctx) = 0;
  virtual void exitAssignment_stmt(HplsqlParser::Assignment_stmtContext *ctx) = 0;

  virtual void enterAssignment_stmt_item(HplsqlParser::Assignment_stmt_itemContext *ctx) = 0;
  virtual void exitAssignment_stmt_item(HplsqlParser::Assignment_stmt_itemContext *ctx) = 0;

  virtual void enterAssignment_stmt_single_item(HplsqlParser::Assignment_stmt_single_itemContext *ctx) = 0;
  virtual void exitAssignment_stmt_single_item(HplsqlParser::Assignment_stmt_single_itemContext *ctx) = 0;

  virtual void enterAssignment_stmt_multiple_item(HplsqlParser::Assignment_stmt_multiple_itemContext *ctx) = 0;
  virtual void exitAssignment_stmt_multiple_item(HplsqlParser::Assignment_stmt_multiple_itemContext *ctx) = 0;

  virtual void enterAssignment_stmt_select_item(HplsqlParser::Assignment_stmt_select_itemContext *ctx) = 0;
  virtual void exitAssignment_stmt_select_item(HplsqlParser::Assignment_stmt_select_itemContext *ctx) = 0;

  virtual void enterAllocate_cursor_stmt(HplsqlParser::Allocate_cursor_stmtContext *ctx) = 0;
  virtual void exitAllocate_cursor_stmt(HplsqlParser::Allocate_cursor_stmtContext *ctx) = 0;

  virtual void enterAssociate_locator_stmt(HplsqlParser::Associate_locator_stmtContext *ctx) = 0;
  virtual void exitAssociate_locator_stmt(HplsqlParser::Associate_locator_stmtContext *ctx) = 0;

  virtual void enterBegin_transaction_stmt(HplsqlParser::Begin_transaction_stmtContext *ctx) = 0;
  virtual void exitBegin_transaction_stmt(HplsqlParser::Begin_transaction_stmtContext *ctx) = 0;

  virtual void enterBreak_stmt(HplsqlParser::Break_stmtContext *ctx) = 0;
  virtual void exitBreak_stmt(HplsqlParser::Break_stmtContext *ctx) = 0;

  virtual void enterCall_stmt(HplsqlParser::Call_stmtContext *ctx) = 0;
  virtual void exitCall_stmt(HplsqlParser::Call_stmtContext *ctx) = 0;

  virtual void enterDeclare_stmt(HplsqlParser::Declare_stmtContext *ctx) = 0;
  virtual void exitDeclare_stmt(HplsqlParser::Declare_stmtContext *ctx) = 0;

  virtual void enterDeclare_block(HplsqlParser::Declare_blockContext *ctx) = 0;
  virtual void exitDeclare_block(HplsqlParser::Declare_blockContext *ctx) = 0;

  virtual void enterDeclare_block_inplace(HplsqlParser::Declare_block_inplaceContext *ctx) = 0;
  virtual void exitDeclare_block_inplace(HplsqlParser::Declare_block_inplaceContext *ctx) = 0;

  virtual void enterDeclare_stmt_item(HplsqlParser::Declare_stmt_itemContext *ctx) = 0;
  virtual void exitDeclare_stmt_item(HplsqlParser::Declare_stmt_itemContext *ctx) = 0;

  virtual void enterDeclare_var_item(HplsqlParser::Declare_var_itemContext *ctx) = 0;
  virtual void exitDeclare_var_item(HplsqlParser::Declare_var_itemContext *ctx) = 0;

  virtual void enterDeclare_condition_item(HplsqlParser::Declare_condition_itemContext *ctx) = 0;
  virtual void exitDeclare_condition_item(HplsqlParser::Declare_condition_itemContext *ctx) = 0;

  virtual void enterDeclare_cursor_item(HplsqlParser::Declare_cursor_itemContext *ctx) = 0;
  virtual void exitDeclare_cursor_item(HplsqlParser::Declare_cursor_itemContext *ctx) = 0;

  virtual void enterCursor_with_return(HplsqlParser::Cursor_with_returnContext *ctx) = 0;
  virtual void exitCursor_with_return(HplsqlParser::Cursor_with_returnContext *ctx) = 0;

  virtual void enterCursor_without_return(HplsqlParser::Cursor_without_returnContext *ctx) = 0;
  virtual void exitCursor_without_return(HplsqlParser::Cursor_without_returnContext *ctx) = 0;

  virtual void enterDeclare_handler_item(HplsqlParser::Declare_handler_itemContext *ctx) = 0;
  virtual void exitDeclare_handler_item(HplsqlParser::Declare_handler_itemContext *ctx) = 0;

  virtual void enterDeclare_temporary_table_item(HplsqlParser::Declare_temporary_table_itemContext *ctx) = 0;
  virtual void exitDeclare_temporary_table_item(HplsqlParser::Declare_temporary_table_itemContext *ctx) = 0;

  virtual void enterCreate_table_stmt(HplsqlParser::Create_table_stmtContext *ctx) = 0;
  virtual void exitCreate_table_stmt(HplsqlParser::Create_table_stmtContext *ctx) = 0;

  virtual void enterCreate_local_temp_table_stmt(HplsqlParser::Create_local_temp_table_stmtContext *ctx) = 0;
  virtual void exitCreate_local_temp_table_stmt(HplsqlParser::Create_local_temp_table_stmtContext *ctx) = 0;

  virtual void enterCreate_table_definition(HplsqlParser::Create_table_definitionContext *ctx) = 0;
  virtual void exitCreate_table_definition(HplsqlParser::Create_table_definitionContext *ctx) = 0;

  virtual void enterCreate_table_columns(HplsqlParser::Create_table_columnsContext *ctx) = 0;
  virtual void exitCreate_table_columns(HplsqlParser::Create_table_columnsContext *ctx) = 0;

  virtual void enterCreate_table_columns_item(HplsqlParser::Create_table_columns_itemContext *ctx) = 0;
  virtual void exitCreate_table_columns_item(HplsqlParser::Create_table_columns_itemContext *ctx) = 0;

  virtual void enterColumn_name(HplsqlParser::Column_nameContext *ctx) = 0;
  virtual void exitColumn_name(HplsqlParser::Column_nameContext *ctx) = 0;

  virtual void enterCreate_table_column_inline_cons(HplsqlParser::Create_table_column_inline_consContext *ctx) = 0;
  virtual void exitCreate_table_column_inline_cons(HplsqlParser::Create_table_column_inline_consContext *ctx) = 0;

  virtual void enterCreate_table_column_cons(HplsqlParser::Create_table_column_consContext *ctx) = 0;
  virtual void exitCreate_table_column_cons(HplsqlParser::Create_table_column_consContext *ctx) = 0;

  virtual void enterCreate_table_fk_action(HplsqlParser::Create_table_fk_actionContext *ctx) = 0;
  virtual void exitCreate_table_fk_action(HplsqlParser::Create_table_fk_actionContext *ctx) = 0;

  virtual void enterCreate_table_preoptions(HplsqlParser::Create_table_preoptionsContext *ctx) = 0;
  virtual void exitCreate_table_preoptions(HplsqlParser::Create_table_preoptionsContext *ctx) = 0;

  virtual void enterCreate_table_preoptions_item(HplsqlParser::Create_table_preoptions_itemContext *ctx) = 0;
  virtual void exitCreate_table_preoptions_item(HplsqlParser::Create_table_preoptions_itemContext *ctx) = 0;

  virtual void enterCreate_table_preoptions_td_item(HplsqlParser::Create_table_preoptions_td_itemContext *ctx) = 0;
  virtual void exitCreate_table_preoptions_td_item(HplsqlParser::Create_table_preoptions_td_itemContext *ctx) = 0;

  virtual void enterCreate_table_options(HplsqlParser::Create_table_optionsContext *ctx) = 0;
  virtual void exitCreate_table_options(HplsqlParser::Create_table_optionsContext *ctx) = 0;

  virtual void enterCreate_table_options_item(HplsqlParser::Create_table_options_itemContext *ctx) = 0;
  virtual void exitCreate_table_options_item(HplsqlParser::Create_table_options_itemContext *ctx) = 0;

  virtual void enterCreate_table_options_ora_item(HplsqlParser::Create_table_options_ora_itemContext *ctx) = 0;
  virtual void exitCreate_table_options_ora_item(HplsqlParser::Create_table_options_ora_itemContext *ctx) = 0;

  virtual void enterCreate_table_options_db2_item(HplsqlParser::Create_table_options_db2_itemContext *ctx) = 0;
  virtual void exitCreate_table_options_db2_item(HplsqlParser::Create_table_options_db2_itemContext *ctx) = 0;

  virtual void enterCreate_table_options_td_item(HplsqlParser::Create_table_options_td_itemContext *ctx) = 0;
  virtual void exitCreate_table_options_td_item(HplsqlParser::Create_table_options_td_itemContext *ctx) = 0;

  virtual void enterCreate_table_options_hive_item(HplsqlParser::Create_table_options_hive_itemContext *ctx) = 0;
  virtual void exitCreate_table_options_hive_item(HplsqlParser::Create_table_options_hive_itemContext *ctx) = 0;

  virtual void enterCreate_table_hive_row_format(HplsqlParser::Create_table_hive_row_formatContext *ctx) = 0;
  virtual void exitCreate_table_hive_row_format(HplsqlParser::Create_table_hive_row_formatContext *ctx) = 0;

  virtual void enterCreate_table_hive_row_format_fields(HplsqlParser::Create_table_hive_row_format_fieldsContext *ctx) = 0;
  virtual void exitCreate_table_hive_row_format_fields(HplsqlParser::Create_table_hive_row_format_fieldsContext *ctx) = 0;

  virtual void enterCreate_table_options_mssql_item(HplsqlParser::Create_table_options_mssql_itemContext *ctx) = 0;
  virtual void exitCreate_table_options_mssql_item(HplsqlParser::Create_table_options_mssql_itemContext *ctx) = 0;

  virtual void enterCreate_table_options_mysql_item(HplsqlParser::Create_table_options_mysql_itemContext *ctx) = 0;
  virtual void exitCreate_table_options_mysql_item(HplsqlParser::Create_table_options_mysql_itemContext *ctx) = 0;

  virtual void enterAlter_table_stmt(HplsqlParser::Alter_table_stmtContext *ctx) = 0;
  virtual void exitAlter_table_stmt(HplsqlParser::Alter_table_stmtContext *ctx) = 0;

  virtual void enterAlter_table_item(HplsqlParser::Alter_table_itemContext *ctx) = 0;
  virtual void exitAlter_table_item(HplsqlParser::Alter_table_itemContext *ctx) = 0;

  virtual void enterAlter_table_add_constraint(HplsqlParser::Alter_table_add_constraintContext *ctx) = 0;
  virtual void exitAlter_table_add_constraint(HplsqlParser::Alter_table_add_constraintContext *ctx) = 0;

  virtual void enterAlter_table_add_constraint_item(HplsqlParser::Alter_table_add_constraint_itemContext *ctx) = 0;
  virtual void exitAlter_table_add_constraint_item(HplsqlParser::Alter_table_add_constraint_itemContext *ctx) = 0;

  virtual void enterDtype(HplsqlParser::DtypeContext *ctx) = 0;
  virtual void exitDtype(HplsqlParser::DtypeContext *ctx) = 0;

  virtual void enterDtype_len(HplsqlParser::Dtype_lenContext *ctx) = 0;
  virtual void exitDtype_len(HplsqlParser::Dtype_lenContext *ctx) = 0;

  virtual void enterDtype_attr(HplsqlParser::Dtype_attrContext *ctx) = 0;
  virtual void exitDtype_attr(HplsqlParser::Dtype_attrContext *ctx) = 0;

  virtual void enterDtype_default(HplsqlParser::Dtype_defaultContext *ctx) = 0;
  virtual void exitDtype_default(HplsqlParser::Dtype_defaultContext *ctx) = 0;

  virtual void enterCreate_database_stmt(HplsqlParser::Create_database_stmtContext *ctx) = 0;
  virtual void exitCreate_database_stmt(HplsqlParser::Create_database_stmtContext *ctx) = 0;

  virtual void enterCreate_database_option(HplsqlParser::Create_database_optionContext *ctx) = 0;
  virtual void exitCreate_database_option(HplsqlParser::Create_database_optionContext *ctx) = 0;

  virtual void enterCreate_function_stmt(HplsqlParser::Create_function_stmtContext *ctx) = 0;
  virtual void exitCreate_function_stmt(HplsqlParser::Create_function_stmtContext *ctx) = 0;

  virtual void enterCreate_function_return(HplsqlParser::Create_function_returnContext *ctx) = 0;
  virtual void exitCreate_function_return(HplsqlParser::Create_function_returnContext *ctx) = 0;

  virtual void enterCreate_package_stmt(HplsqlParser::Create_package_stmtContext *ctx) = 0;
  virtual void exitCreate_package_stmt(HplsqlParser::Create_package_stmtContext *ctx) = 0;

  virtual void enterPackage_spec(HplsqlParser::Package_specContext *ctx) = 0;
  virtual void exitPackage_spec(HplsqlParser::Package_specContext *ctx) = 0;

  virtual void enterPackage_spec_item(HplsqlParser::Package_spec_itemContext *ctx) = 0;
  virtual void exitPackage_spec_item(HplsqlParser::Package_spec_itemContext *ctx) = 0;

  virtual void enterCreate_package_body_stmt(HplsqlParser::Create_package_body_stmtContext *ctx) = 0;
  virtual void exitCreate_package_body_stmt(HplsqlParser::Create_package_body_stmtContext *ctx) = 0;

  virtual void enterPackage_body(HplsqlParser::Package_bodyContext *ctx) = 0;
  virtual void exitPackage_body(HplsqlParser::Package_bodyContext *ctx) = 0;

  virtual void enterPackage_body_item(HplsqlParser::Package_body_itemContext *ctx) = 0;
  virtual void exitPackage_body_item(HplsqlParser::Package_body_itemContext *ctx) = 0;

  virtual void enterCreate_procedure_stmt(HplsqlParser::Create_procedure_stmtContext *ctx) = 0;
  virtual void exitCreate_procedure_stmt(HplsqlParser::Create_procedure_stmtContext *ctx) = 0;

  virtual void enterCreate_routine_params(HplsqlParser::Create_routine_paramsContext *ctx) = 0;
  virtual void exitCreate_routine_params(HplsqlParser::Create_routine_paramsContext *ctx) = 0;

  virtual void enterCreate_routine_param_item(HplsqlParser::Create_routine_param_itemContext *ctx) = 0;
  virtual void exitCreate_routine_param_item(HplsqlParser::Create_routine_param_itemContext *ctx) = 0;

  virtual void enterCreate_routine_options(HplsqlParser::Create_routine_optionsContext *ctx) = 0;
  virtual void exitCreate_routine_options(HplsqlParser::Create_routine_optionsContext *ctx) = 0;

  virtual void enterCreate_routine_option(HplsqlParser::Create_routine_optionContext *ctx) = 0;
  virtual void exitCreate_routine_option(HplsqlParser::Create_routine_optionContext *ctx) = 0;

  virtual void enterDrop_stmt(HplsqlParser::Drop_stmtContext *ctx) = 0;
  virtual void exitDrop_stmt(HplsqlParser::Drop_stmtContext *ctx) = 0;

  virtual void enterEnd_transaction_stmt(HplsqlParser::End_transaction_stmtContext *ctx) = 0;
  virtual void exitEnd_transaction_stmt(HplsqlParser::End_transaction_stmtContext *ctx) = 0;

  virtual void enterExec_stmt(HplsqlParser::Exec_stmtContext *ctx) = 0;
  virtual void exitExec_stmt(HplsqlParser::Exec_stmtContext *ctx) = 0;

  virtual void enterIf_stmt(HplsqlParser::If_stmtContext *ctx) = 0;
  virtual void exitIf_stmt(HplsqlParser::If_stmtContext *ctx) = 0;

  virtual void enterIf_plsql_stmt(HplsqlParser::If_plsql_stmtContext *ctx) = 0;
  virtual void exitIf_plsql_stmt(HplsqlParser::If_plsql_stmtContext *ctx) = 0;

  virtual void enterIf_tsql_stmt(HplsqlParser::If_tsql_stmtContext *ctx) = 0;
  virtual void exitIf_tsql_stmt(HplsqlParser::If_tsql_stmtContext *ctx) = 0;

  virtual void enterIf_bteq_stmt(HplsqlParser::If_bteq_stmtContext *ctx) = 0;
  virtual void exitIf_bteq_stmt(HplsqlParser::If_bteq_stmtContext *ctx) = 0;

  virtual void enterElseif_block(HplsqlParser::Elseif_blockContext *ctx) = 0;
  virtual void exitElseif_block(HplsqlParser::Elseif_blockContext *ctx) = 0;

  virtual void enterElse_block(HplsqlParser::Else_blockContext *ctx) = 0;
  virtual void exitElse_block(HplsqlParser::Else_blockContext *ctx) = 0;

  virtual void enterInclude_stmt(HplsqlParser::Include_stmtContext *ctx) = 0;
  virtual void exitInclude_stmt(HplsqlParser::Include_stmtContext *ctx) = 0;

  virtual void enterInsert_stmt(HplsqlParser::Insert_stmtContext *ctx) = 0;
  virtual void exitInsert_stmt(HplsqlParser::Insert_stmtContext *ctx) = 0;

  virtual void enterInsert_stmt_cols(HplsqlParser::Insert_stmt_colsContext *ctx) = 0;
  virtual void exitInsert_stmt_cols(HplsqlParser::Insert_stmt_colsContext *ctx) = 0;

  virtual void enterInsert_stmt_rows(HplsqlParser::Insert_stmt_rowsContext *ctx) = 0;
  virtual void exitInsert_stmt_rows(HplsqlParser::Insert_stmt_rowsContext *ctx) = 0;

  virtual void enterInsert_stmt_row(HplsqlParser::Insert_stmt_rowContext *ctx) = 0;
  virtual void exitInsert_stmt_row(HplsqlParser::Insert_stmt_rowContext *ctx) = 0;

  virtual void enterInsert_directory_stmt(HplsqlParser::Insert_directory_stmtContext *ctx) = 0;
  virtual void exitInsert_directory_stmt(HplsqlParser::Insert_directory_stmtContext *ctx) = 0;

  virtual void enterExit_stmt(HplsqlParser::Exit_stmtContext *ctx) = 0;
  virtual void exitExit_stmt(HplsqlParser::Exit_stmtContext *ctx) = 0;

  virtual void enterGet_diag_stmt(HplsqlParser::Get_diag_stmtContext *ctx) = 0;
  virtual void exitGet_diag_stmt(HplsqlParser::Get_diag_stmtContext *ctx) = 0;

  virtual void enterGet_diag_stmt_item(HplsqlParser::Get_diag_stmt_itemContext *ctx) = 0;
  virtual void exitGet_diag_stmt_item(HplsqlParser::Get_diag_stmt_itemContext *ctx) = 0;

  virtual void enterGet_diag_stmt_exception_item(HplsqlParser::Get_diag_stmt_exception_itemContext *ctx) = 0;
  virtual void exitGet_diag_stmt_exception_item(HplsqlParser::Get_diag_stmt_exception_itemContext *ctx) = 0;

  virtual void enterGet_diag_stmt_rowcount_item(HplsqlParser::Get_diag_stmt_rowcount_itemContext *ctx) = 0;
  virtual void exitGet_diag_stmt_rowcount_item(HplsqlParser::Get_diag_stmt_rowcount_itemContext *ctx) = 0;

  virtual void enterGrant_stmt(HplsqlParser::Grant_stmtContext *ctx) = 0;
  virtual void exitGrant_stmt(HplsqlParser::Grant_stmtContext *ctx) = 0;

  virtual void enterGrant_stmt_item(HplsqlParser::Grant_stmt_itemContext *ctx) = 0;
  virtual void exitGrant_stmt_item(HplsqlParser::Grant_stmt_itemContext *ctx) = 0;

  virtual void enterLeave_stmt(HplsqlParser::Leave_stmtContext *ctx) = 0;
  virtual void exitLeave_stmt(HplsqlParser::Leave_stmtContext *ctx) = 0;

  virtual void enterMap_object_stmt(HplsqlParser::Map_object_stmtContext *ctx) = 0;
  virtual void exitMap_object_stmt(HplsqlParser::Map_object_stmtContext *ctx) = 0;

  virtual void enterOpen_stmt(HplsqlParser::Open_stmtContext *ctx) = 0;
  virtual void exitOpen_stmt(HplsqlParser::Open_stmtContext *ctx) = 0;

  virtual void enterFetch_stmt(HplsqlParser::Fetch_stmtContext *ctx) = 0;
  virtual void exitFetch_stmt(HplsqlParser::Fetch_stmtContext *ctx) = 0;

  virtual void enterCollect_stats_stmt(HplsqlParser::Collect_stats_stmtContext *ctx) = 0;
  virtual void exitCollect_stats_stmt(HplsqlParser::Collect_stats_stmtContext *ctx) = 0;

  virtual void enterCollect_stats_clause(HplsqlParser::Collect_stats_clauseContext *ctx) = 0;
  virtual void exitCollect_stats_clause(HplsqlParser::Collect_stats_clauseContext *ctx) = 0;

  virtual void enterClose_stmt(HplsqlParser::Close_stmtContext *ctx) = 0;
  virtual void exitClose_stmt(HplsqlParser::Close_stmtContext *ctx) = 0;

  virtual void enterCmp_stmt(HplsqlParser::Cmp_stmtContext *ctx) = 0;
  virtual void exitCmp_stmt(HplsqlParser::Cmp_stmtContext *ctx) = 0;

  virtual void enterCmp_source(HplsqlParser::Cmp_sourceContext *ctx) = 0;
  virtual void exitCmp_source(HplsqlParser::Cmp_sourceContext *ctx) = 0;

  virtual void enterCopy_from_local_stmt(HplsqlParser::Copy_from_local_stmtContext *ctx) = 0;
  virtual void exitCopy_from_local_stmt(HplsqlParser::Copy_from_local_stmtContext *ctx) = 0;

  virtual void enterCopy_stmt(HplsqlParser::Copy_stmtContext *ctx) = 0;
  virtual void exitCopy_stmt(HplsqlParser::Copy_stmtContext *ctx) = 0;

  virtual void enterCopy_source(HplsqlParser::Copy_sourceContext *ctx) = 0;
  virtual void exitCopy_source(HplsqlParser::Copy_sourceContext *ctx) = 0;

  virtual void enterCopy_target(HplsqlParser::Copy_targetContext *ctx) = 0;
  virtual void exitCopy_target(HplsqlParser::Copy_targetContext *ctx) = 0;

  virtual void enterCopy_option(HplsqlParser::Copy_optionContext *ctx) = 0;
  virtual void exitCopy_option(HplsqlParser::Copy_optionContext *ctx) = 0;

  virtual void enterCopy_file_option(HplsqlParser::Copy_file_optionContext *ctx) = 0;
  virtual void exitCopy_file_option(HplsqlParser::Copy_file_optionContext *ctx) = 0;

  virtual void enterCommit_stmt(HplsqlParser::Commit_stmtContext *ctx) = 0;
  virtual void exitCommit_stmt(HplsqlParser::Commit_stmtContext *ctx) = 0;

  virtual void enterCreate_index_stmt(HplsqlParser::Create_index_stmtContext *ctx) = 0;
  virtual void exitCreate_index_stmt(HplsqlParser::Create_index_stmtContext *ctx) = 0;

  virtual void enterCreate_index_col(HplsqlParser::Create_index_colContext *ctx) = 0;
  virtual void exitCreate_index_col(HplsqlParser::Create_index_colContext *ctx) = 0;

  virtual void enterIndex_storage_clause(HplsqlParser::Index_storage_clauseContext *ctx) = 0;
  virtual void exitIndex_storage_clause(HplsqlParser::Index_storage_clauseContext *ctx) = 0;

  virtual void enterIndex_mssql_storage_clause(HplsqlParser::Index_mssql_storage_clauseContext *ctx) = 0;
  virtual void exitIndex_mssql_storage_clause(HplsqlParser::Index_mssql_storage_clauseContext *ctx) = 0;

  virtual void enterPrint_stmt(HplsqlParser::Print_stmtContext *ctx) = 0;
  virtual void exitPrint_stmt(HplsqlParser::Print_stmtContext *ctx) = 0;

  virtual void enterQuit_stmt(HplsqlParser::Quit_stmtContext *ctx) = 0;
  virtual void exitQuit_stmt(HplsqlParser::Quit_stmtContext *ctx) = 0;

  virtual void enterRaise_stmt(HplsqlParser::Raise_stmtContext *ctx) = 0;
  virtual void exitRaise_stmt(HplsqlParser::Raise_stmtContext *ctx) = 0;

  virtual void enterResignal_stmt(HplsqlParser::Resignal_stmtContext *ctx) = 0;
  virtual void exitResignal_stmt(HplsqlParser::Resignal_stmtContext *ctx) = 0;

  virtual void enterReturn_stmt(HplsqlParser::Return_stmtContext *ctx) = 0;
  virtual void exitReturn_stmt(HplsqlParser::Return_stmtContext *ctx) = 0;

  virtual void enterRollback_stmt(HplsqlParser::Rollback_stmtContext *ctx) = 0;
  virtual void exitRollback_stmt(HplsqlParser::Rollback_stmtContext *ctx) = 0;

  virtual void enterSet_session_option(HplsqlParser::Set_session_optionContext *ctx) = 0;
  virtual void exitSet_session_option(HplsqlParser::Set_session_optionContext *ctx) = 0;

  virtual void enterSet_current_schema_option(HplsqlParser::Set_current_schema_optionContext *ctx) = 0;
  virtual void exitSet_current_schema_option(HplsqlParser::Set_current_schema_optionContext *ctx) = 0;

  virtual void enterSet_mssql_session_option(HplsqlParser::Set_mssql_session_optionContext *ctx) = 0;
  virtual void exitSet_mssql_session_option(HplsqlParser::Set_mssql_session_optionContext *ctx) = 0;

  virtual void enterSet_teradata_session_option(HplsqlParser::Set_teradata_session_optionContext *ctx) = 0;
  virtual void exitSet_teradata_session_option(HplsqlParser::Set_teradata_session_optionContext *ctx) = 0;

  virtual void enterSignal_stmt(HplsqlParser::Signal_stmtContext *ctx) = 0;
  virtual void exitSignal_stmt(HplsqlParser::Signal_stmtContext *ctx) = 0;

  virtual void enterSummary_stmt(HplsqlParser::Summary_stmtContext *ctx) = 0;
  virtual void exitSummary_stmt(HplsqlParser::Summary_stmtContext *ctx) = 0;

  virtual void enterTruncate_stmt(HplsqlParser::Truncate_stmtContext *ctx) = 0;
  virtual void exitTruncate_stmt(HplsqlParser::Truncate_stmtContext *ctx) = 0;

  virtual void enterUse_stmt(HplsqlParser::Use_stmtContext *ctx) = 0;
  virtual void exitUse_stmt(HplsqlParser::Use_stmtContext *ctx) = 0;

  virtual void enterValues_into_stmt(HplsqlParser::Values_into_stmtContext *ctx) = 0;
  virtual void exitValues_into_stmt(HplsqlParser::Values_into_stmtContext *ctx) = 0;

  virtual void enterWhile_stmt(HplsqlParser::While_stmtContext *ctx) = 0;
  virtual void exitWhile_stmt(HplsqlParser::While_stmtContext *ctx) = 0;

  virtual void enterFor_cursor_stmt(HplsqlParser::For_cursor_stmtContext *ctx) = 0;
  virtual void exitFor_cursor_stmt(HplsqlParser::For_cursor_stmtContext *ctx) = 0;

  virtual void enterFor_range_stmt(HplsqlParser::For_range_stmtContext *ctx) = 0;
  virtual void exitFor_range_stmt(HplsqlParser::For_range_stmtContext *ctx) = 0;

  virtual void enterLabel(HplsqlParser::LabelContext *ctx) = 0;
  virtual void exitLabel(HplsqlParser::LabelContext *ctx) = 0;

  virtual void enterUsing_clause(HplsqlParser::Using_clauseContext *ctx) = 0;
  virtual void exitUsing_clause(HplsqlParser::Using_clauseContext *ctx) = 0;

  virtual void enterSelect_stmt(HplsqlParser::Select_stmtContext *ctx) = 0;
  virtual void exitSelect_stmt(HplsqlParser::Select_stmtContext *ctx) = 0;

  virtual void enterCte_select_stmt(HplsqlParser::Cte_select_stmtContext *ctx) = 0;
  virtual void exitCte_select_stmt(HplsqlParser::Cte_select_stmtContext *ctx) = 0;

  virtual void enterCte_select_stmt_item(HplsqlParser::Cte_select_stmt_itemContext *ctx) = 0;
  virtual void exitCte_select_stmt_item(HplsqlParser::Cte_select_stmt_itemContext *ctx) = 0;

  virtual void enterCte_select_cols(HplsqlParser::Cte_select_colsContext *ctx) = 0;
  virtual void exitCte_select_cols(HplsqlParser::Cte_select_colsContext *ctx) = 0;

  virtual void enterFullselect_stmt(HplsqlParser::Fullselect_stmtContext *ctx) = 0;
  virtual void exitFullselect_stmt(HplsqlParser::Fullselect_stmtContext *ctx) = 0;

  virtual void enterFullselect_stmt_item(HplsqlParser::Fullselect_stmt_itemContext *ctx) = 0;
  virtual void exitFullselect_stmt_item(HplsqlParser::Fullselect_stmt_itemContext *ctx) = 0;

  virtual void enterFullselect_set_clause(HplsqlParser::Fullselect_set_clauseContext *ctx) = 0;
  virtual void exitFullselect_set_clause(HplsqlParser::Fullselect_set_clauseContext *ctx) = 0;

  virtual void enterSubselect_stmt(HplsqlParser::Subselect_stmtContext *ctx) = 0;
  virtual void exitSubselect_stmt(HplsqlParser::Subselect_stmtContext *ctx) = 0;

  virtual void enterSelect_list(HplsqlParser::Select_listContext *ctx) = 0;
  virtual void exitSelect_list(HplsqlParser::Select_listContext *ctx) = 0;

  virtual void enterSelect_list_set(HplsqlParser::Select_list_setContext *ctx) = 0;
  virtual void exitSelect_list_set(HplsqlParser::Select_list_setContext *ctx) = 0;

  virtual void enterSelect_list_limit(HplsqlParser::Select_list_limitContext *ctx) = 0;
  virtual void exitSelect_list_limit(HplsqlParser::Select_list_limitContext *ctx) = 0;

  virtual void enterSelect_list_item(HplsqlParser::Select_list_itemContext *ctx) = 0;
  virtual void exitSelect_list_item(HplsqlParser::Select_list_itemContext *ctx) = 0;

  virtual void enterSelect_list_alias(HplsqlParser::Select_list_aliasContext *ctx) = 0;
  virtual void exitSelect_list_alias(HplsqlParser::Select_list_aliasContext *ctx) = 0;

  virtual void enterSelect_list_asterisk(HplsqlParser::Select_list_asteriskContext *ctx) = 0;
  virtual void exitSelect_list_asterisk(HplsqlParser::Select_list_asteriskContext *ctx) = 0;

  virtual void enterInto_clause(HplsqlParser::Into_clauseContext *ctx) = 0;
  virtual void exitInto_clause(HplsqlParser::Into_clauseContext *ctx) = 0;

  virtual void enterFrom_clause(HplsqlParser::From_clauseContext *ctx) = 0;
  virtual void exitFrom_clause(HplsqlParser::From_clauseContext *ctx) = 0;

  virtual void enterFrom_table_clause(HplsqlParser::From_table_clauseContext *ctx) = 0;
  virtual void exitFrom_table_clause(HplsqlParser::From_table_clauseContext *ctx) = 0;

  virtual void enterFrom_table_name_clause(HplsqlParser::From_table_name_clauseContext *ctx) = 0;
  virtual void exitFrom_table_name_clause(HplsqlParser::From_table_name_clauseContext *ctx) = 0;

  virtual void enterFrom_subselect_clause(HplsqlParser::From_subselect_clauseContext *ctx) = 0;
  virtual void exitFrom_subselect_clause(HplsqlParser::From_subselect_clauseContext *ctx) = 0;

  virtual void enterFrom_join_clause(HplsqlParser::From_join_clauseContext *ctx) = 0;
  virtual void exitFrom_join_clause(HplsqlParser::From_join_clauseContext *ctx) = 0;

  virtual void enterFrom_join_type_clause(HplsqlParser::From_join_type_clauseContext *ctx) = 0;
  virtual void exitFrom_join_type_clause(HplsqlParser::From_join_type_clauseContext *ctx) = 0;

  virtual void enterFrom_table_values_clause(HplsqlParser::From_table_values_clauseContext *ctx) = 0;
  virtual void exitFrom_table_values_clause(HplsqlParser::From_table_values_clauseContext *ctx) = 0;

  virtual void enterFrom_table_values_row(HplsqlParser::From_table_values_rowContext *ctx) = 0;
  virtual void exitFrom_table_values_row(HplsqlParser::From_table_values_rowContext *ctx) = 0;

  virtual void enterFrom_alias_clause(HplsqlParser::From_alias_clauseContext *ctx) = 0;
  virtual void exitFrom_alias_clause(HplsqlParser::From_alias_clauseContext *ctx) = 0;

  virtual void enterTable_name(HplsqlParser::Table_nameContext *ctx) = 0;
  virtual void exitTable_name(HplsqlParser::Table_nameContext *ctx) = 0;

  virtual void enterWhere_clause(HplsqlParser::Where_clauseContext *ctx) = 0;
  virtual void exitWhere_clause(HplsqlParser::Where_clauseContext *ctx) = 0;

  virtual void enterGroup_by_clause(HplsqlParser::Group_by_clauseContext *ctx) = 0;
  virtual void exitGroup_by_clause(HplsqlParser::Group_by_clauseContext *ctx) = 0;

  virtual void enterHaving_clause(HplsqlParser::Having_clauseContext *ctx) = 0;
  virtual void exitHaving_clause(HplsqlParser::Having_clauseContext *ctx) = 0;

  virtual void enterQualify_clause(HplsqlParser::Qualify_clauseContext *ctx) = 0;
  virtual void exitQualify_clause(HplsqlParser::Qualify_clauseContext *ctx) = 0;

  virtual void enterOrder_by_clause(HplsqlParser::Order_by_clauseContext *ctx) = 0;
  virtual void exitOrder_by_clause(HplsqlParser::Order_by_clauseContext *ctx) = 0;

  virtual void enterSelect_options(HplsqlParser::Select_optionsContext *ctx) = 0;
  virtual void exitSelect_options(HplsqlParser::Select_optionsContext *ctx) = 0;

  virtual void enterSelect_options_item(HplsqlParser::Select_options_itemContext *ctx) = 0;
  virtual void exitSelect_options_item(HplsqlParser::Select_options_itemContext *ctx) = 0;

  virtual void enterUpdate_stmt(HplsqlParser::Update_stmtContext *ctx) = 0;
  virtual void exitUpdate_stmt(HplsqlParser::Update_stmtContext *ctx) = 0;

  virtual void enterUpdate_assignment(HplsqlParser::Update_assignmentContext *ctx) = 0;
  virtual void exitUpdate_assignment(HplsqlParser::Update_assignmentContext *ctx) = 0;

  virtual void enterUpdate_table(HplsqlParser::Update_tableContext *ctx) = 0;
  virtual void exitUpdate_table(HplsqlParser::Update_tableContext *ctx) = 0;

  virtual void enterUpdate_upsert(HplsqlParser::Update_upsertContext *ctx) = 0;
  virtual void exitUpdate_upsert(HplsqlParser::Update_upsertContext *ctx) = 0;

  virtual void enterMerge_stmt(HplsqlParser::Merge_stmtContext *ctx) = 0;
  virtual void exitMerge_stmt(HplsqlParser::Merge_stmtContext *ctx) = 0;

  virtual void enterMerge_table(HplsqlParser::Merge_tableContext *ctx) = 0;
  virtual void exitMerge_table(HplsqlParser::Merge_tableContext *ctx) = 0;

  virtual void enterMerge_condition(HplsqlParser::Merge_conditionContext *ctx) = 0;
  virtual void exitMerge_condition(HplsqlParser::Merge_conditionContext *ctx) = 0;

  virtual void enterMerge_action(HplsqlParser::Merge_actionContext *ctx) = 0;
  virtual void exitMerge_action(HplsqlParser::Merge_actionContext *ctx) = 0;

  virtual void enterDelete_stmt(HplsqlParser::Delete_stmtContext *ctx) = 0;
  virtual void exitDelete_stmt(HplsqlParser::Delete_stmtContext *ctx) = 0;

  virtual void enterDelete_alias(HplsqlParser::Delete_aliasContext *ctx) = 0;
  virtual void exitDelete_alias(HplsqlParser::Delete_aliasContext *ctx) = 0;

  virtual void enterDescribe_stmt(HplsqlParser::Describe_stmtContext *ctx) = 0;
  virtual void exitDescribe_stmt(HplsqlParser::Describe_stmtContext *ctx) = 0;

  virtual void enterBool_expr(HplsqlParser::Bool_exprContext *ctx) = 0;
  virtual void exitBool_expr(HplsqlParser::Bool_exprContext *ctx) = 0;

  virtual void enterBool_expr_atom(HplsqlParser::Bool_expr_atomContext *ctx) = 0;
  virtual void exitBool_expr_atom(HplsqlParser::Bool_expr_atomContext *ctx) = 0;

  virtual void enterBool_expr_unary(HplsqlParser::Bool_expr_unaryContext *ctx) = 0;
  virtual void exitBool_expr_unary(HplsqlParser::Bool_expr_unaryContext *ctx) = 0;

  virtual void enterBool_expr_single_in(HplsqlParser::Bool_expr_single_inContext *ctx) = 0;
  virtual void exitBool_expr_single_in(HplsqlParser::Bool_expr_single_inContext *ctx) = 0;

  virtual void enterBool_expr_multi_in(HplsqlParser::Bool_expr_multi_inContext *ctx) = 0;
  virtual void exitBool_expr_multi_in(HplsqlParser::Bool_expr_multi_inContext *ctx) = 0;

  virtual void enterBool_expr_binary(HplsqlParser::Bool_expr_binaryContext *ctx) = 0;
  virtual void exitBool_expr_binary(HplsqlParser::Bool_expr_binaryContext *ctx) = 0;

  virtual void enterBool_expr_logical_operator(HplsqlParser::Bool_expr_logical_operatorContext *ctx) = 0;
  virtual void exitBool_expr_logical_operator(HplsqlParser::Bool_expr_logical_operatorContext *ctx) = 0;

  virtual void enterBool_expr_binary_operator(HplsqlParser::Bool_expr_binary_operatorContext *ctx) = 0;
  virtual void exitBool_expr_binary_operator(HplsqlParser::Bool_expr_binary_operatorContext *ctx) = 0;

  virtual void enterExpr(HplsqlParser::ExprContext *ctx) = 0;
  virtual void exitExpr(HplsqlParser::ExprContext *ctx) = 0;

  virtual void enterExpr_atom(HplsqlParser::Expr_atomContext *ctx) = 0;
  virtual void exitExpr_atom(HplsqlParser::Expr_atomContext *ctx) = 0;

  virtual void enterExpr_interval(HplsqlParser::Expr_intervalContext *ctx) = 0;
  virtual void exitExpr_interval(HplsqlParser::Expr_intervalContext *ctx) = 0;

  virtual void enterInterval_item(HplsqlParser::Interval_itemContext *ctx) = 0;
  virtual void exitInterval_item(HplsqlParser::Interval_itemContext *ctx) = 0;

  virtual void enterExpr_concat(HplsqlParser::Expr_concatContext *ctx) = 0;
  virtual void exitExpr_concat(HplsqlParser::Expr_concatContext *ctx) = 0;

  virtual void enterExpr_concat_item(HplsqlParser::Expr_concat_itemContext *ctx) = 0;
  virtual void exitExpr_concat_item(HplsqlParser::Expr_concat_itemContext *ctx) = 0;

  virtual void enterExpr_case(HplsqlParser::Expr_caseContext *ctx) = 0;
  virtual void exitExpr_case(HplsqlParser::Expr_caseContext *ctx) = 0;

  virtual void enterExpr_case_simple(HplsqlParser::Expr_case_simpleContext *ctx) = 0;
  virtual void exitExpr_case_simple(HplsqlParser::Expr_case_simpleContext *ctx) = 0;

  virtual void enterExpr_case_searched(HplsqlParser::Expr_case_searchedContext *ctx) = 0;
  virtual void exitExpr_case_searched(HplsqlParser::Expr_case_searchedContext *ctx) = 0;

  virtual void enterExpr_cursor_attribute(HplsqlParser::Expr_cursor_attributeContext *ctx) = 0;
  virtual void exitExpr_cursor_attribute(HplsqlParser::Expr_cursor_attributeContext *ctx) = 0;

  virtual void enterExpr_agg_window_func(HplsqlParser::Expr_agg_window_funcContext *ctx) = 0;
  virtual void exitExpr_agg_window_func(HplsqlParser::Expr_agg_window_funcContext *ctx) = 0;

  virtual void enterExpr_func_all_distinct(HplsqlParser::Expr_func_all_distinctContext *ctx) = 0;
  virtual void exitExpr_func_all_distinct(HplsqlParser::Expr_func_all_distinctContext *ctx) = 0;

  virtual void enterExpr_func_over_clause(HplsqlParser::Expr_func_over_clauseContext *ctx) = 0;
  virtual void exitExpr_func_over_clause(HplsqlParser::Expr_func_over_clauseContext *ctx) = 0;

  virtual void enterExpr_func_partition_by_clause(HplsqlParser::Expr_func_partition_by_clauseContext *ctx) = 0;
  virtual void exitExpr_func_partition_by_clause(HplsqlParser::Expr_func_partition_by_clauseContext *ctx) = 0;

  virtual void enterExpr_spec_func(HplsqlParser::Expr_spec_funcContext *ctx) = 0;
  virtual void exitExpr_spec_func(HplsqlParser::Expr_spec_funcContext *ctx) = 0;

  virtual void enterExpr_func(HplsqlParser::Expr_funcContext *ctx) = 0;
  virtual void exitExpr_func(HplsqlParser::Expr_funcContext *ctx) = 0;

  virtual void enterExpr_func_params(HplsqlParser::Expr_func_paramsContext *ctx) = 0;
  virtual void exitExpr_func_params(HplsqlParser::Expr_func_paramsContext *ctx) = 0;

  virtual void enterFunc_param(HplsqlParser::Func_paramContext *ctx) = 0;
  virtual void exitFunc_param(HplsqlParser::Func_paramContext *ctx) = 0;

  virtual void enterExpr_select(HplsqlParser::Expr_selectContext *ctx) = 0;
  virtual void exitExpr_select(HplsqlParser::Expr_selectContext *ctx) = 0;

  virtual void enterExpr_file(HplsqlParser::Expr_fileContext *ctx) = 0;
  virtual void exitExpr_file(HplsqlParser::Expr_fileContext *ctx) = 0;

  virtual void enterHive(HplsqlParser::HiveContext *ctx) = 0;
  virtual void exitHive(HplsqlParser::HiveContext *ctx) = 0;

  virtual void enterHive_item(HplsqlParser::Hive_itemContext *ctx) = 0;
  virtual void exitHive_item(HplsqlParser::Hive_itemContext *ctx) = 0;

  virtual void enterHost(HplsqlParser::HostContext *ctx) = 0;
  virtual void exitHost(HplsqlParser::HostContext *ctx) = 0;

  virtual void enterHost_cmd(HplsqlParser::Host_cmdContext *ctx) = 0;
  virtual void exitHost_cmd(HplsqlParser::Host_cmdContext *ctx) = 0;

  virtual void enterHost_stmt(HplsqlParser::Host_stmtContext *ctx) = 0;
  virtual void exitHost_stmt(HplsqlParser::Host_stmtContext *ctx) = 0;

  virtual void enterFile_name(HplsqlParser::File_nameContext *ctx) = 0;
  virtual void exitFile_name(HplsqlParser::File_nameContext *ctx) = 0;

  virtual void enterDate_literal(HplsqlParser::Date_literalContext *ctx) = 0;
  virtual void exitDate_literal(HplsqlParser::Date_literalContext *ctx) = 0;

  virtual void enterTimestamp_literal(HplsqlParser::Timestamp_literalContext *ctx) = 0;
  virtual void exitTimestamp_literal(HplsqlParser::Timestamp_literalContext *ctx) = 0;

  virtual void enterIdent(HplsqlParser::IdentContext *ctx) = 0;
  virtual void exitIdent(HplsqlParser::IdentContext *ctx) = 0;

  virtual void enterSingle_quotedString(HplsqlParser::Single_quotedStringContext *ctx) = 0;
  virtual void exitSingle_quotedString(HplsqlParser::Single_quotedStringContext *ctx) = 0;

  virtual void enterDouble_quotedString(HplsqlParser::Double_quotedStringContext *ctx) = 0;
  virtual void exitDouble_quotedString(HplsqlParser::Double_quotedStringContext *ctx) = 0;

  virtual void enterInt_number(HplsqlParser::Int_numberContext *ctx) = 0;
  virtual void exitInt_number(HplsqlParser::Int_numberContext *ctx) = 0;

  virtual void enterDec_number(HplsqlParser::Dec_numberContext *ctx) = 0;
  virtual void exitDec_number(HplsqlParser::Dec_numberContext *ctx) = 0;

  virtual void enterBool_literal(HplsqlParser::Bool_literalContext *ctx) = 0;
  virtual void exitBool_literal(HplsqlParser::Bool_literalContext *ctx) = 0;

  virtual void enterNull_const(HplsqlParser::Null_constContext *ctx) = 0;
  virtual void exitNull_const(HplsqlParser::Null_constContext *ctx) = 0;

  virtual void enterNon_reserved_words(HplsqlParser::Non_reserved_wordsContext *ctx) = 0;
  virtual void exitNon_reserved_words(HplsqlParser::Non_reserved_wordsContext *ctx) = 0;


};


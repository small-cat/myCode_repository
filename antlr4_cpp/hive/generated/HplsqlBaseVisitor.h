
// Generated from /home/jona/myGit/myCode_repository/antlr4_cpp/hive/Hplsql.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "HplsqlVisitor.h"


/**
 * This class provides an empty implementation of HplsqlVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  HplsqlBaseVisitor : public HplsqlVisitor {
public:

  virtual antlrcpp::Any visitProgram(HplsqlParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(HplsqlParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBegin_end_block(HplsqlParser::Begin_end_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSingle_block_stmt(HplsqlParser::Single_block_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock_end(HplsqlParser::Block_endContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProc_block(HplsqlParser::Proc_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmt(HplsqlParser::StmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSemicolon_stmt(HplsqlParser::Semicolon_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitException_block(HplsqlParser::Exception_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitException_block_item(HplsqlParser::Exception_block_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNull_stmt(HplsqlParser::Null_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_stmt(HplsqlParser::Expr_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignment_stmt(HplsqlParser::Assignment_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignment_stmt_item(HplsqlParser::Assignment_stmt_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignment_stmt_single_item(HplsqlParser::Assignment_stmt_single_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignment_stmt_multiple_item(HplsqlParser::Assignment_stmt_multiple_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignment_stmt_select_item(HplsqlParser::Assignment_stmt_select_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAllocate_cursor_stmt(HplsqlParser::Allocate_cursor_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssociate_locator_stmt(HplsqlParser::Associate_locator_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBegin_transaction_stmt(HplsqlParser::Begin_transaction_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBreak_stmt(HplsqlParser::Break_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCall_stmt(HplsqlParser::Call_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclare_stmt(HplsqlParser::Declare_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclare_block(HplsqlParser::Declare_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclare_block_inplace(HplsqlParser::Declare_block_inplaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclare_stmt_item(HplsqlParser::Declare_stmt_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclare_var_item(HplsqlParser::Declare_var_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclare_condition_item(HplsqlParser::Declare_condition_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclare_cursor_item(HplsqlParser::Declare_cursor_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCursor_with_return(HplsqlParser::Cursor_with_returnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCursor_without_return(HplsqlParser::Cursor_without_returnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclare_handler_item(HplsqlParser::Declare_handler_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclare_temporary_table_item(HplsqlParser::Declare_temporary_table_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_table_stmt(HplsqlParser::Create_table_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_local_temp_table_stmt(HplsqlParser::Create_local_temp_table_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_table_definition(HplsqlParser::Create_table_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_table_columns(HplsqlParser::Create_table_columnsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_table_columns_item(HplsqlParser::Create_table_columns_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumn_name(HplsqlParser::Column_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_table_column_inline_cons(HplsqlParser::Create_table_column_inline_consContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_table_column_cons(HplsqlParser::Create_table_column_consContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_table_fk_action(HplsqlParser::Create_table_fk_actionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_table_preoptions(HplsqlParser::Create_table_preoptionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_table_preoptions_item(HplsqlParser::Create_table_preoptions_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_table_preoptions_td_item(HplsqlParser::Create_table_preoptions_td_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_table_options(HplsqlParser::Create_table_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_table_options_item(HplsqlParser::Create_table_options_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_table_options_ora_item(HplsqlParser::Create_table_options_ora_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_table_options_db2_item(HplsqlParser::Create_table_options_db2_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_table_options_td_item(HplsqlParser::Create_table_options_td_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_table_options_hive_item(HplsqlParser::Create_table_options_hive_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_table_hive_row_format(HplsqlParser::Create_table_hive_row_formatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_table_hive_row_format_fields(HplsqlParser::Create_table_hive_row_format_fieldsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_table_options_mssql_item(HplsqlParser::Create_table_options_mssql_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_table_options_mysql_item(HplsqlParser::Create_table_options_mysql_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_table_stmt(HplsqlParser::Alter_table_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_table_item(HplsqlParser::Alter_table_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_table_add_constraint(HplsqlParser::Alter_table_add_constraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_table_add_constraint_item(HplsqlParser::Alter_table_add_constraint_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDtype(HplsqlParser::DtypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDtype_len(HplsqlParser::Dtype_lenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDtype_attr(HplsqlParser::Dtype_attrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDtype_default(HplsqlParser::Dtype_defaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_database_stmt(HplsqlParser::Create_database_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_database_option(HplsqlParser::Create_database_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_function_stmt(HplsqlParser::Create_function_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_function_return(HplsqlParser::Create_function_returnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_package_stmt(HplsqlParser::Create_package_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPackage_spec(HplsqlParser::Package_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPackage_spec_item(HplsqlParser::Package_spec_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_package_body_stmt(HplsqlParser::Create_package_body_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPackage_body(HplsqlParser::Package_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPackage_body_item(HplsqlParser::Package_body_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_procedure_stmt(HplsqlParser::Create_procedure_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_routine_params(HplsqlParser::Create_routine_paramsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_routine_param_item(HplsqlParser::Create_routine_param_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_routine_options(HplsqlParser::Create_routine_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_routine_option(HplsqlParser::Create_routine_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_stmt(HplsqlParser::Drop_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnd_transaction_stmt(HplsqlParser::End_transaction_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExec_stmt(HplsqlParser::Exec_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_stmt(HplsqlParser::If_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_plsql_stmt(HplsqlParser::If_plsql_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_tsql_stmt(HplsqlParser::If_tsql_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_bteq_stmt(HplsqlParser::If_bteq_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElseif_block(HplsqlParser::Elseif_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElse_block(HplsqlParser::Else_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInclude_stmt(HplsqlParser::Include_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsert_stmt(HplsqlParser::Insert_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsert_stmt_cols(HplsqlParser::Insert_stmt_colsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsert_stmt_rows(HplsqlParser::Insert_stmt_rowsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsert_stmt_row(HplsqlParser::Insert_stmt_rowContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsert_directory_stmt(HplsqlParser::Insert_directory_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExit_stmt(HplsqlParser::Exit_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGet_diag_stmt(HplsqlParser::Get_diag_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGet_diag_stmt_item(HplsqlParser::Get_diag_stmt_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGet_diag_stmt_exception_item(HplsqlParser::Get_diag_stmt_exception_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGet_diag_stmt_rowcount_item(HplsqlParser::Get_diag_stmt_rowcount_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGrant_stmt(HplsqlParser::Grant_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGrant_stmt_item(HplsqlParser::Grant_stmt_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLeave_stmt(HplsqlParser::Leave_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMap_object_stmt(HplsqlParser::Map_object_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOpen_stmt(HplsqlParser::Open_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFetch_stmt(HplsqlParser::Fetch_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCollect_stats_stmt(HplsqlParser::Collect_stats_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCollect_stats_clause(HplsqlParser::Collect_stats_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClose_stmt(HplsqlParser::Close_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCmp_stmt(HplsqlParser::Cmp_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCmp_source(HplsqlParser::Cmp_sourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCopy_from_local_stmt(HplsqlParser::Copy_from_local_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCopy_stmt(HplsqlParser::Copy_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCopy_source(HplsqlParser::Copy_sourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCopy_target(HplsqlParser::Copy_targetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCopy_option(HplsqlParser::Copy_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCopy_file_option(HplsqlParser::Copy_file_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCommit_stmt(HplsqlParser::Commit_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_index_stmt(HplsqlParser::Create_index_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_index_col(HplsqlParser::Create_index_colContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex_storage_clause(HplsqlParser::Index_storage_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex_mssql_storage_clause(HplsqlParser::Index_mssql_storage_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrint_stmt(HplsqlParser::Print_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQuit_stmt(HplsqlParser::Quit_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRaise_stmt(HplsqlParser::Raise_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitResignal_stmt(HplsqlParser::Resignal_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturn_stmt(HplsqlParser::Return_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRollback_stmt(HplsqlParser::Rollback_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSet_session_option(HplsqlParser::Set_session_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSet_current_schema_option(HplsqlParser::Set_current_schema_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSet_mssql_session_option(HplsqlParser::Set_mssql_session_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSet_teradata_session_option(HplsqlParser::Set_teradata_session_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSignal_stmt(HplsqlParser::Signal_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSummary_stmt(HplsqlParser::Summary_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTruncate_stmt(HplsqlParser::Truncate_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUse_stmt(HplsqlParser::Use_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValues_into_stmt(HplsqlParser::Values_into_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhile_stmt(HplsqlParser::While_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFor_cursor_stmt(HplsqlParser::For_cursor_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFor_range_stmt(HplsqlParser::For_range_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLabel(HplsqlParser::LabelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUsing_clause(HplsqlParser::Using_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelect_stmt(HplsqlParser::Select_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCte_select_stmt(HplsqlParser::Cte_select_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCte_select_stmt_item(HplsqlParser::Cte_select_stmt_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCte_select_cols(HplsqlParser::Cte_select_colsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFullselect_stmt(HplsqlParser::Fullselect_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFullselect_stmt_item(HplsqlParser::Fullselect_stmt_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFullselect_set_clause(HplsqlParser::Fullselect_set_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubselect_stmt(HplsqlParser::Subselect_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelect_list(HplsqlParser::Select_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelect_list_set(HplsqlParser::Select_list_setContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelect_list_limit(HplsqlParser::Select_list_limitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelect_list_item(HplsqlParser::Select_list_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelect_list_alias(HplsqlParser::Select_list_aliasContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelect_list_asterisk(HplsqlParser::Select_list_asteriskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInto_clause(HplsqlParser::Into_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFrom_clause(HplsqlParser::From_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFrom_table_clause(HplsqlParser::From_table_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFrom_table_name_clause(HplsqlParser::From_table_name_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFrom_subselect_clause(HplsqlParser::From_subselect_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFrom_join_clause(HplsqlParser::From_join_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFrom_join_type_clause(HplsqlParser::From_join_type_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFrom_table_values_clause(HplsqlParser::From_table_values_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFrom_table_values_row(HplsqlParser::From_table_values_rowContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFrom_alias_clause(HplsqlParser::From_alias_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_name(HplsqlParser::Table_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhere_clause(HplsqlParser::Where_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGroup_by_clause(HplsqlParser::Group_by_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHaving_clause(HplsqlParser::Having_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQualify_clause(HplsqlParser::Qualify_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOrder_by_clause(HplsqlParser::Order_by_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelect_options(HplsqlParser::Select_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelect_options_item(HplsqlParser::Select_options_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUpdate_stmt(HplsqlParser::Update_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUpdate_assignment(HplsqlParser::Update_assignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUpdate_table(HplsqlParser::Update_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUpdate_upsert(HplsqlParser::Update_upsertContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMerge_stmt(HplsqlParser::Merge_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMerge_table(HplsqlParser::Merge_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMerge_condition(HplsqlParser::Merge_conditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMerge_action(HplsqlParser::Merge_actionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDelete_stmt(HplsqlParser::Delete_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDelete_alias(HplsqlParser::Delete_aliasContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDescribe_stmt(HplsqlParser::Describe_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBool_expr(HplsqlParser::Bool_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBool_expr_atom(HplsqlParser::Bool_expr_atomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBool_expr_unary(HplsqlParser::Bool_expr_unaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBool_expr_single_in(HplsqlParser::Bool_expr_single_inContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBool_expr_multi_in(HplsqlParser::Bool_expr_multi_inContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBool_expr_binary(HplsqlParser::Bool_expr_binaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBool_expr_logical_operator(HplsqlParser::Bool_expr_logical_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBool_expr_binary_operator(HplsqlParser::Bool_expr_binary_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr(HplsqlParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_atom(HplsqlParser::Expr_atomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_interval(HplsqlParser::Expr_intervalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterval_item(HplsqlParser::Interval_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_concat(HplsqlParser::Expr_concatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_concat_item(HplsqlParser::Expr_concat_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_case(HplsqlParser::Expr_caseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_case_simple(HplsqlParser::Expr_case_simpleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_case_searched(HplsqlParser::Expr_case_searchedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_cursor_attribute(HplsqlParser::Expr_cursor_attributeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_agg_window_func(HplsqlParser::Expr_agg_window_funcContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_func_all_distinct(HplsqlParser::Expr_func_all_distinctContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_func_over_clause(HplsqlParser::Expr_func_over_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_func_partition_by_clause(HplsqlParser::Expr_func_partition_by_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_spec_func(HplsqlParser::Expr_spec_funcContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_func(HplsqlParser::Expr_funcContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_func_params(HplsqlParser::Expr_func_paramsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc_param(HplsqlParser::Func_paramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_select(HplsqlParser::Expr_selectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_file(HplsqlParser::Expr_fileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHive(HplsqlParser::HiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHive_item(HplsqlParser::Hive_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHost(HplsqlParser::HostContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHost_cmd(HplsqlParser::Host_cmdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHost_stmt(HplsqlParser::Host_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFile_name(HplsqlParser::File_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDate_literal(HplsqlParser::Date_literalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTimestamp_literal(HplsqlParser::Timestamp_literalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdent(HplsqlParser::IdentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSingle_quotedString(HplsqlParser::Single_quotedStringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDouble_quotedString(HplsqlParser::Double_quotedStringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInt_number(HplsqlParser::Int_numberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDec_number(HplsqlParser::Dec_numberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBool_literal(HplsqlParser::Bool_literalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNull_const(HplsqlParser::Null_constContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNon_reserved_words(HplsqlParser::Non_reserved_wordsContext *ctx) override {
    return visitChildren(ctx);
  }


};


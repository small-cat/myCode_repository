
// Generated from /home/jona/myGit/myCode_repository/antlr4_cpp/hive/HqlsqlParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "HqlsqlParserListener.h"


/**
 * This class provides an empty implementation of HqlsqlParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  HqlsqlParserBaseListener : public HqlsqlParserListener {
public:

  virtual void enterProgram(HqlsqlParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(HqlsqlParser::ProgramContext * /*ctx*/) override { }

  virtual void enterBlock(HqlsqlParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(HqlsqlParser::BlockContext * /*ctx*/) override { }

  virtual void enterBegin_end_block(HqlsqlParser::Begin_end_blockContext * /*ctx*/) override { }
  virtual void exitBegin_end_block(HqlsqlParser::Begin_end_blockContext * /*ctx*/) override { }

  virtual void enterSingle_block_stmt(HqlsqlParser::Single_block_stmtContext * /*ctx*/) override { }
  virtual void exitSingle_block_stmt(HqlsqlParser::Single_block_stmtContext * /*ctx*/) override { }

  virtual void enterBlock_end(HqlsqlParser::Block_endContext * /*ctx*/) override { }
  virtual void exitBlock_end(HqlsqlParser::Block_endContext * /*ctx*/) override { }

  virtual void enterProc_block(HqlsqlParser::Proc_blockContext * /*ctx*/) override { }
  virtual void exitProc_block(HqlsqlParser::Proc_blockContext * /*ctx*/) override { }

  virtual void enterStmt(HqlsqlParser::StmtContext * /*ctx*/) override { }
  virtual void exitStmt(HqlsqlParser::StmtContext * /*ctx*/) override { }

  virtual void enterSemicolon_stmt(HqlsqlParser::Semicolon_stmtContext * /*ctx*/) override { }
  virtual void exitSemicolon_stmt(HqlsqlParser::Semicolon_stmtContext * /*ctx*/) override { }

  virtual void enterException_block(HqlsqlParser::Exception_blockContext * /*ctx*/) override { }
  virtual void exitException_block(HqlsqlParser::Exception_blockContext * /*ctx*/) override { }

  virtual void enterException_block_item(HqlsqlParser::Exception_block_itemContext * /*ctx*/) override { }
  virtual void exitException_block_item(HqlsqlParser::Exception_block_itemContext * /*ctx*/) override { }

  virtual void enterAssignment_stmt(HqlsqlParser::Assignment_stmtContext * /*ctx*/) override { }
  virtual void exitAssignment_stmt(HqlsqlParser::Assignment_stmtContext * /*ctx*/) override { }

  virtual void enterAssignment_stmt_item(HqlsqlParser::Assignment_stmt_itemContext * /*ctx*/) override { }
  virtual void exitAssignment_stmt_item(HqlsqlParser::Assignment_stmt_itemContext * /*ctx*/) override { }

  virtual void enterAssignment_stmt_single_item(HqlsqlParser::Assignment_stmt_single_itemContext * /*ctx*/) override { }
  virtual void exitAssignment_stmt_single_item(HqlsqlParser::Assignment_stmt_single_itemContext * /*ctx*/) override { }

  virtual void enterAssignment_stmt_multiple_item(HqlsqlParser::Assignment_stmt_multiple_itemContext * /*ctx*/) override { }
  virtual void exitAssignment_stmt_multiple_item(HqlsqlParser::Assignment_stmt_multiple_itemContext * /*ctx*/) override { }

  virtual void enterAssignment_stmt_select_item(HqlsqlParser::Assignment_stmt_select_itemContext * /*ctx*/) override { }
  virtual void exitAssignment_stmt_select_item(HqlsqlParser::Assignment_stmt_select_itemContext * /*ctx*/) override { }

  virtual void enterAssignment_expr(HqlsqlParser::Assignment_exprContext * /*ctx*/) override { }
  virtual void exitAssignment_expr(HqlsqlParser::Assignment_exprContext * /*ctx*/) override { }

  virtual void enterAssignment_reserverd_words(HqlsqlParser::Assignment_reserverd_wordsContext * /*ctx*/) override { }
  virtual void exitAssignment_reserverd_words(HqlsqlParser::Assignment_reserverd_wordsContext * /*ctx*/) override { }

  virtual void enterAllocate_cursor_stmt(HqlsqlParser::Allocate_cursor_stmtContext * /*ctx*/) override { }
  virtual void exitAllocate_cursor_stmt(HqlsqlParser::Allocate_cursor_stmtContext * /*ctx*/) override { }

  virtual void enterAssociate_locator_stmt(HqlsqlParser::Associate_locator_stmtContext * /*ctx*/) override { }
  virtual void exitAssociate_locator_stmt(HqlsqlParser::Associate_locator_stmtContext * /*ctx*/) override { }

  virtual void enterBegin_transaction_stmt(HqlsqlParser::Begin_transaction_stmtContext * /*ctx*/) override { }
  virtual void exitBegin_transaction_stmt(HqlsqlParser::Begin_transaction_stmtContext * /*ctx*/) override { }

  virtual void enterAbort_transactions_stmt(HqlsqlParser::Abort_transactions_stmtContext * /*ctx*/) override { }
  virtual void exitAbort_transactions_stmt(HqlsqlParser::Abort_transactions_stmtContext * /*ctx*/) override { }

  virtual void enterBreak_stmt(HqlsqlParser::Break_stmtContext * /*ctx*/) override { }
  virtual void exitBreak_stmt(HqlsqlParser::Break_stmtContext * /*ctx*/) override { }

  virtual void enterCall_stmt(HqlsqlParser::Call_stmtContext * /*ctx*/) override { }
  virtual void exitCall_stmt(HqlsqlParser::Call_stmtContext * /*ctx*/) override { }

  virtual void enterDeclare_stmt(HqlsqlParser::Declare_stmtContext * /*ctx*/) override { }
  virtual void exitDeclare_stmt(HqlsqlParser::Declare_stmtContext * /*ctx*/) override { }

  virtual void enterDeclare_block(HqlsqlParser::Declare_blockContext * /*ctx*/) override { }
  virtual void exitDeclare_block(HqlsqlParser::Declare_blockContext * /*ctx*/) override { }

  virtual void enterDeclare_block_inplace(HqlsqlParser::Declare_block_inplaceContext * /*ctx*/) override { }
  virtual void exitDeclare_block_inplace(HqlsqlParser::Declare_block_inplaceContext * /*ctx*/) override { }

  virtual void enterDeclare_stmt_item(HqlsqlParser::Declare_stmt_itemContext * /*ctx*/) override { }
  virtual void exitDeclare_stmt_item(HqlsqlParser::Declare_stmt_itemContext * /*ctx*/) override { }

  virtual void enterDeclare_var_item(HqlsqlParser::Declare_var_itemContext * /*ctx*/) override { }
  virtual void exitDeclare_var_item(HqlsqlParser::Declare_var_itemContext * /*ctx*/) override { }

  virtual void enterDeclare_condition_item(HqlsqlParser::Declare_condition_itemContext * /*ctx*/) override { }
  virtual void exitDeclare_condition_item(HqlsqlParser::Declare_condition_itemContext * /*ctx*/) override { }

  virtual void enterDeclare_cursor_item(HqlsqlParser::Declare_cursor_itemContext * /*ctx*/) override { }
  virtual void exitDeclare_cursor_item(HqlsqlParser::Declare_cursor_itemContext * /*ctx*/) override { }

  virtual void enterCursor_with_return(HqlsqlParser::Cursor_with_returnContext * /*ctx*/) override { }
  virtual void exitCursor_with_return(HqlsqlParser::Cursor_with_returnContext * /*ctx*/) override { }

  virtual void enterCursor_without_return(HqlsqlParser::Cursor_without_returnContext * /*ctx*/) override { }
  virtual void exitCursor_without_return(HqlsqlParser::Cursor_without_returnContext * /*ctx*/) override { }

  virtual void enterDeclare_handler_item(HqlsqlParser::Declare_handler_itemContext * /*ctx*/) override { }
  virtual void exitDeclare_handler_item(HqlsqlParser::Declare_handler_itemContext * /*ctx*/) override { }

  virtual void enterDeclare_temporary_table_item(HqlsqlParser::Declare_temporary_table_itemContext * /*ctx*/) override { }
  virtual void exitDeclare_temporary_table_item(HqlsqlParser::Declare_temporary_table_itemContext * /*ctx*/) override { }

  virtual void enterCreate_table_stmt(HqlsqlParser::Create_table_stmtContext * /*ctx*/) override { }
  virtual void exitCreate_table_stmt(HqlsqlParser::Create_table_stmtContext * /*ctx*/) override { }

  virtual void enterCreate_local_temp_table_stmt(HqlsqlParser::Create_local_temp_table_stmtContext * /*ctx*/) override { }
  virtual void exitCreate_local_temp_table_stmt(HqlsqlParser::Create_local_temp_table_stmtContext * /*ctx*/) override { }

  virtual void enterCreate_table_definition(HqlsqlParser::Create_table_definitionContext * /*ctx*/) override { }
  virtual void exitCreate_table_definition(HqlsqlParser::Create_table_definitionContext * /*ctx*/) override { }

  virtual void enterCreate_table_columns(HqlsqlParser::Create_table_columnsContext * /*ctx*/) override { }
  virtual void exitCreate_table_columns(HqlsqlParser::Create_table_columnsContext * /*ctx*/) override { }

  virtual void enterCreate_table_columns_item(HqlsqlParser::Create_table_columns_itemContext * /*ctx*/) override { }
  virtual void exitCreate_table_columns_item(HqlsqlParser::Create_table_columns_itemContext * /*ctx*/) override { }

  virtual void enterColumn_name(HqlsqlParser::Column_nameContext * /*ctx*/) override { }
  virtual void exitColumn_name(HqlsqlParser::Column_nameContext * /*ctx*/) override { }

  virtual void enterOld_column_name(HqlsqlParser::Old_column_nameContext * /*ctx*/) override { }
  virtual void exitOld_column_name(HqlsqlParser::Old_column_nameContext * /*ctx*/) override { }

  virtual void enterNew_column_name(HqlsqlParser::New_column_nameContext * /*ctx*/) override { }
  virtual void exitNew_column_name(HqlsqlParser::New_column_nameContext * /*ctx*/) override { }

  virtual void enterConstraint_specification(HqlsqlParser::Constraint_specificationContext * /*ctx*/) override { }
  virtual void exitConstraint_specification(HqlsqlParser::Constraint_specificationContext * /*ctx*/) override { }

  virtual void enterConstraint_spec(HqlsqlParser::Constraint_specContext * /*ctx*/) override { }
  virtual void exitConstraint_spec(HqlsqlParser::Constraint_specContext * /*ctx*/) override { }

  virtual void enterConstraint_name(HqlsqlParser::Constraint_nameContext * /*ctx*/) override { }
  virtual void exitConstraint_name(HqlsqlParser::Constraint_nameContext * /*ctx*/) override { }

  virtual void enterParen_column_list(HqlsqlParser::Paren_column_listContext * /*ctx*/) override { }
  virtual void exitParen_column_list(HqlsqlParser::Paren_column_listContext * /*ctx*/) override { }

  virtual void enterColumn_name_list(HqlsqlParser::Column_name_listContext * /*ctx*/) override { }
  virtual void exitColumn_name_list(HqlsqlParser::Column_name_listContext * /*ctx*/) override { }

  virtual void enterColumn_name_ele(HqlsqlParser::Column_name_eleContext * /*ctx*/) override { }
  virtual void exitColumn_name_ele(HqlsqlParser::Column_name_eleContext * /*ctx*/) override { }

  virtual void enterParen_col_values(HqlsqlParser::Paren_col_valuesContext * /*ctx*/) override { }
  virtual void exitParen_col_values(HqlsqlParser::Paren_col_valuesContext * /*ctx*/) override { }

  virtual void enterColumn_constrains_specification(HqlsqlParser::Column_constrains_specificationContext * /*ctx*/) override { }
  virtual void exitColumn_constrains_specification(HqlsqlParser::Column_constrains_specificationContext * /*ctx*/) override { }

  virtual void enterDefault_value(HqlsqlParser::Default_valueContext * /*ctx*/) override { }
  virtual void exitDefault_value(HqlsqlParser::Default_valueContext * /*ctx*/) override { }

  virtual void enterCreate_table_column_comment(HqlsqlParser::Create_table_column_commentContext * /*ctx*/) override { }
  virtual void exitCreate_table_column_comment(HqlsqlParser::Create_table_column_commentContext * /*ctx*/) override { }

  virtual void enterCreate_table_column_cons(HqlsqlParser::Create_table_column_consContext * /*ctx*/) override { }
  virtual void exitCreate_table_column_cons(HqlsqlParser::Create_table_column_consContext * /*ctx*/) override { }

  virtual void enterCreate_table_fk_action(HqlsqlParser::Create_table_fk_actionContext * /*ctx*/) override { }
  virtual void exitCreate_table_fk_action(HqlsqlParser::Create_table_fk_actionContext * /*ctx*/) override { }

  virtual void enterCreate_table_preoptions(HqlsqlParser::Create_table_preoptionsContext * /*ctx*/) override { }
  virtual void exitCreate_table_preoptions(HqlsqlParser::Create_table_preoptionsContext * /*ctx*/) override { }

  virtual void enterCreate_table_preoptions_item(HqlsqlParser::Create_table_preoptions_itemContext * /*ctx*/) override { }
  virtual void exitCreate_table_preoptions_item(HqlsqlParser::Create_table_preoptions_itemContext * /*ctx*/) override { }

  virtual void enterCreate_table_preoptions_td_item(HqlsqlParser::Create_table_preoptions_td_itemContext * /*ctx*/) override { }
  virtual void exitCreate_table_preoptions_td_item(HqlsqlParser::Create_table_preoptions_td_itemContext * /*ctx*/) override { }

  virtual void enterCreate_table_options(HqlsqlParser::Create_table_optionsContext * /*ctx*/) override { }
  virtual void exitCreate_table_options(HqlsqlParser::Create_table_optionsContext * /*ctx*/) override { }

  virtual void enterCreate_table_option(HqlsqlParser::Create_table_optionContext * /*ctx*/) override { }
  virtual void exitCreate_table_option(HqlsqlParser::Create_table_optionContext * /*ctx*/) override { }

  virtual void enterPartition_by_part(HqlsqlParser::Partition_by_partContext * /*ctx*/) override { }
  virtual void exitPartition_by_part(HqlsqlParser::Partition_by_partContext * /*ctx*/) override { }

  virtual void enterCluster_by_part(HqlsqlParser::Cluster_by_partContext * /*ctx*/) override { }
  virtual void exitCluster_by_part(HqlsqlParser::Cluster_by_partContext * /*ctx*/) override { }

  virtual void enterSkewed_by_part(HqlsqlParser::Skewed_by_partContext * /*ctx*/) override { }
  virtual void exitSkewed_by_part(HqlsqlParser::Skewed_by_partContext * /*ctx*/) override { }

  virtual void enterCol_values(HqlsqlParser::Col_valuesContext * /*ctx*/) override { }
  virtual void exitCol_values(HqlsqlParser::Col_valuesContext * /*ctx*/) override { }

  virtual void enterStored_as_part(HqlsqlParser::Stored_as_partContext * /*ctx*/) override { }
  virtual void exitStored_as_part(HqlsqlParser::Stored_as_partContext * /*ctx*/) override { }

  virtual void enterRow_format_part(HqlsqlParser::Row_format_partContext * /*ctx*/) override { }
  virtual void exitRow_format_part(HqlsqlParser::Row_format_partContext * /*ctx*/) override { }

  virtual void enterFile_format(HqlsqlParser::File_formatContext * /*ctx*/) override { }
  virtual void exitFile_format(HqlsqlParser::File_formatContext * /*ctx*/) override { }

  virtual void enterRow_format(HqlsqlParser::Row_formatContext * /*ctx*/) override { }
  virtual void exitRow_format(HqlsqlParser::Row_formatContext * /*ctx*/) override { }

  virtual void enterTerminated_by_part(HqlsqlParser::Terminated_by_partContext * /*ctx*/) override { }
  virtual void exitTerminated_by_part(HqlsqlParser::Terminated_by_partContext * /*ctx*/) override { }

  virtual void enterTerminated_by(HqlsqlParser::Terminated_byContext * /*ctx*/) override { }
  virtual void exitTerminated_by(HqlsqlParser::Terminated_byContext * /*ctx*/) override { }

  virtual void enterBy_char(HqlsqlParser::By_charContext * /*ctx*/) override { }
  virtual void exitBy_char(HqlsqlParser::By_charContext * /*ctx*/) override { }

  virtual void enterCreate_table_options_hive_item(HqlsqlParser::Create_table_options_hive_itemContext * /*ctx*/) override { }
  virtual void exitCreate_table_options_hive_item(HqlsqlParser::Create_table_options_hive_itemContext * /*ctx*/) override { }

  virtual void enterCreate_table_hive_row_format(HqlsqlParser::Create_table_hive_row_formatContext * /*ctx*/) override { }
  virtual void exitCreate_table_hive_row_format(HqlsqlParser::Create_table_hive_row_formatContext * /*ctx*/) override { }

  virtual void enterCreate_table_hive_row_format_fields(HqlsqlParser::Create_table_hive_row_format_fieldsContext * /*ctx*/) override { }
  virtual void exitCreate_table_hive_row_format_fields(HqlsqlParser::Create_table_hive_row_format_fieldsContext * /*ctx*/) override { }

  virtual void enterCreate_table_options_mssql_item(HqlsqlParser::Create_table_options_mssql_itemContext * /*ctx*/) override { }
  virtual void exitCreate_table_options_mssql_item(HqlsqlParser::Create_table_options_mssql_itemContext * /*ctx*/) override { }

  virtual void enterCreate_view_stmt(HqlsqlParser::Create_view_stmtContext * /*ctx*/) override { }
  virtual void exitCreate_view_stmt(HqlsqlParser::Create_view_stmtContext * /*ctx*/) override { }

  virtual void enterCreate_view_options(HqlsqlParser::Create_view_optionsContext * /*ctx*/) override { }
  virtual void exitCreate_view_options(HqlsqlParser::Create_view_optionsContext * /*ctx*/) override { }

  virtual void enterCreate_view_option(HqlsqlParser::Create_view_optionContext * /*ctx*/) override { }
  virtual void exitCreate_view_option(HqlsqlParser::Create_view_optionContext * /*ctx*/) override { }

  virtual void enterCreate_macro_stmt(HqlsqlParser::Create_macro_stmtContext * /*ctx*/) override { }
  virtual void exitCreate_macro_stmt(HqlsqlParser::Create_macro_stmtContext * /*ctx*/) override { }

  virtual void enterCreate_role_stmt(HqlsqlParser::Create_role_stmtContext * /*ctx*/) override { }
  virtual void exitCreate_role_stmt(HqlsqlParser::Create_role_stmtContext * /*ctx*/) override { }

  virtual void enterGrant_revoke_role_stmt(HqlsqlParser::Grant_revoke_role_stmtContext * /*ctx*/) override { }
  virtual void exitGrant_revoke_role_stmt(HqlsqlParser::Grant_revoke_role_stmtContext * /*ctx*/) override { }

  virtual void enterWith_option_for(HqlsqlParser::With_option_forContext * /*ctx*/) override { }
  virtual void exitWith_option_for(HqlsqlParser::With_option_forContext * /*ctx*/) override { }

  virtual void enterRole_name(HqlsqlParser::Role_nameContext * /*ctx*/) override { }
  virtual void exitRole_name(HqlsqlParser::Role_nameContext * /*ctx*/) override { }

  virtual void enterRole_names(HqlsqlParser::Role_namesContext * /*ctx*/) override { }
  virtual void exitRole_names(HqlsqlParser::Role_namesContext * /*ctx*/) override { }

  virtual void enterGrant_revoke_privilege_stmt(HqlsqlParser::Grant_revoke_privilege_stmtContext * /*ctx*/) override { }
  virtual void exitGrant_revoke_privilege_stmt(HqlsqlParser::Grant_revoke_privilege_stmtContext * /*ctx*/) override { }

  virtual void enterPrivilege_columns(HqlsqlParser::Privilege_columnsContext * /*ctx*/) override { }
  virtual void exitPrivilege_columns(HqlsqlParser::Privilege_columnsContext * /*ctx*/) override { }

  virtual void enterPriv_type(HqlsqlParser::Priv_typeContext * /*ctx*/) override { }
  virtual void exitPriv_type(HqlsqlParser::Priv_typeContext * /*ctx*/) override { }

  virtual void enterObject_specification(HqlsqlParser::Object_specificationContext * /*ctx*/) override { }
  virtual void exitObject_specification(HqlsqlParser::Object_specificationContext * /*ctx*/) override { }

  virtual void enterAlter_table_stmt_label(HqlsqlParser::Alter_table_stmt_labelContext * /*ctx*/) override { }
  virtual void exitAlter_table_stmt_label(HqlsqlParser::Alter_table_stmt_labelContext * /*ctx*/) override { }

  virtual void enterAlter_db_schema_view(HqlsqlParser::Alter_db_schema_viewContext * /*ctx*/) override { }
  virtual void exitAlter_db_schema_view(HqlsqlParser::Alter_db_schema_viewContext * /*ctx*/) override { }

  virtual void enterAlter_materialized_view(HqlsqlParser::Alter_materialized_viewContext * /*ctx*/) override { }
  virtual void exitAlter_materialized_view(HqlsqlParser::Alter_materialized_viewContext * /*ctx*/) override { }

  virtual void enterAlter_index(HqlsqlParser::Alter_indexContext * /*ctx*/) override { }
  virtual void exitAlter_index(HqlsqlParser::Alter_indexContext * /*ctx*/) override { }

  virtual void enterAlter_option(HqlsqlParser::Alter_optionContext * /*ctx*/) override { }
  virtual void exitAlter_option(HqlsqlParser::Alter_optionContext * /*ctx*/) override { }

  virtual void enterAlter_table_stmt(HqlsqlParser::Alter_table_stmtContext * /*ctx*/) override { }
  virtual void exitAlter_table_stmt(HqlsqlParser::Alter_table_stmtContext * /*ctx*/) override { }

  virtual void enterAlter_table_item_options(HqlsqlParser::Alter_table_item_optionsContext * /*ctx*/) override { }
  virtual void exitAlter_table_item_options(HqlsqlParser::Alter_table_item_optionsContext * /*ctx*/) override { }

  virtual void enterAlter_table_properties(HqlsqlParser::Alter_table_propertiesContext * /*ctx*/) override { }
  virtual void exitAlter_table_properties(HqlsqlParser::Alter_table_propertiesContext * /*ctx*/) override { }

  virtual void enterSet_tblproperties(HqlsqlParser::Set_tblpropertiesContext * /*ctx*/) override { }
  virtual void exitSet_tblproperties(HqlsqlParser::Set_tblpropertiesContext * /*ctx*/) override { }

  virtual void enterAdd_serde_properties(HqlsqlParser::Add_serde_propertiesContext * /*ctx*/) override { }
  virtual void exitAdd_serde_properties(HqlsqlParser::Add_serde_propertiesContext * /*ctx*/) override { }

  virtual void enterTable_storage_properties(HqlsqlParser::Table_storage_propertiesContext * /*ctx*/) override { }
  virtual void exitTable_storage_properties(HqlsqlParser::Table_storage_propertiesContext * /*ctx*/) override { }

  virtual void enterTable_skewed_properties(HqlsqlParser::Table_skewed_propertiesContext * /*ctx*/) override { }
  virtual void exitTable_skewed_properties(HqlsqlParser::Table_skewed_propertiesContext * /*ctx*/) override { }

  virtual void enterTable_constraints(HqlsqlParser::Table_constraintsContext * /*ctx*/) override { }
  virtual void exitTable_constraints(HqlsqlParser::Table_constraintsContext * /*ctx*/) override { }

  virtual void enterAdd_constraint_property(HqlsqlParser::Add_constraint_propertyContext * /*ctx*/) override { }
  virtual void exitAdd_constraint_property(HqlsqlParser::Add_constraint_propertyContext * /*ctx*/) override { }

  virtual void enterChange_column_property(HqlsqlParser::Change_column_propertyContext * /*ctx*/) override { }
  virtual void exitChange_column_property(HqlsqlParser::Change_column_propertyContext * /*ctx*/) override { }

  virtual void enterDrop_constraint_property(HqlsqlParser::Drop_constraint_propertyContext * /*ctx*/) override { }
  virtual void exitDrop_constraint_property(HqlsqlParser::Drop_constraint_propertyContext * /*ctx*/) override { }

  virtual void enterNew_table_name(HqlsqlParser::New_table_nameContext * /*ctx*/) override { }
  virtual void exitNew_table_name(HqlsqlParser::New_table_nameContext * /*ctx*/) override { }

  virtual void enterAlter_table_partition_properties(HqlsqlParser::Alter_table_partition_propertiesContext * /*ctx*/) override { }
  virtual void exitAlter_table_partition_properties(HqlsqlParser::Alter_table_partition_propertiesContext * /*ctx*/) override { }

  virtual void enterAdd_partition_property(HqlsqlParser::Add_partition_propertyContext * /*ctx*/) override { }
  virtual void exitAdd_partition_property(HqlsqlParser::Add_partition_propertyContext * /*ctx*/) override { }

  virtual void enterAdd_partition_property_options(HqlsqlParser::Add_partition_property_optionsContext * /*ctx*/) override { }
  virtual void exitAdd_partition_property_options(HqlsqlParser::Add_partition_property_optionsContext * /*ctx*/) override { }

  virtual void enterAdd_partition_property_option(HqlsqlParser::Add_partition_property_optionContext * /*ctx*/) override { }
  virtual void exitAdd_partition_property_option(HqlsqlParser::Add_partition_property_optionContext * /*ctx*/) override { }

  virtual void enterRecover_partition_property(HqlsqlParser::Recover_partition_propertyContext * /*ctx*/) override { }
  virtual void exitRecover_partition_property(HqlsqlParser::Recover_partition_propertyContext * /*ctx*/) override { }

  virtual void enterDrop_partition_property(HqlsqlParser::Drop_partition_propertyContext * /*ctx*/) override { }
  virtual void exitDrop_partition_property(HqlsqlParser::Drop_partition_propertyContext * /*ctx*/) override { }

  virtual void enterArchive_partition_property(HqlsqlParser::Archive_partition_propertyContext * /*ctx*/) override { }
  virtual void exitArchive_partition_property(HqlsqlParser::Archive_partition_propertyContext * /*ctx*/) override { }

  virtual void enterAlter_table_or_partition_options(HqlsqlParser::Alter_table_or_partition_optionsContext * /*ctx*/) override { }
  virtual void exitAlter_table_or_partition_options(HqlsqlParser::Alter_table_or_partition_optionsContext * /*ctx*/) override { }

  virtual void enterAlter_table_column_properties(HqlsqlParser::Alter_table_column_propertiesContext * /*ctx*/) override { }
  virtual void exitAlter_table_column_properties(HqlsqlParser::Alter_table_column_propertiesContext * /*ctx*/) override { }

  virtual void enterShow_stmt(HqlsqlParser::Show_stmtContext * /*ctx*/) override { }
  virtual void exitShow_stmt(HqlsqlParser::Show_stmtContext * /*ctx*/) override { }

  virtual void enterPrincipal_specification(HqlsqlParser::Principal_specificationContext * /*ctx*/) override { }
  virtual void exitPrincipal_specification(HqlsqlParser::Principal_specificationContext * /*ctx*/) override { }

  virtual void enterPrincipal_specifications(HqlsqlParser::Principal_specificationsContext * /*ctx*/) override { }
  virtual void exitPrincipal_specifications(HqlsqlParser::Principal_specificationsContext * /*ctx*/) override { }

  virtual void enterImport_stmt(HqlsqlParser::Import_stmtContext * /*ctx*/) override { }
  virtual void exitImport_stmt(HqlsqlParser::Import_stmtContext * /*ctx*/) override { }

  virtual void enterExport_stmt(HqlsqlParser::Export_stmtContext * /*ctx*/) override { }
  virtual void exitExport_stmt(HqlsqlParser::Export_stmtContext * /*ctx*/) override { }

  virtual void enterExplain_stmt(HqlsqlParser::Explain_stmtContext * /*ctx*/) override { }
  virtual void exitExplain_stmt(HqlsqlParser::Explain_stmtContext * /*ctx*/) override { }

  virtual void enterDtype(HqlsqlParser::DtypeContext * /*ctx*/) override { }
  virtual void exitDtype(HqlsqlParser::DtypeContext * /*ctx*/) override { }

  virtual void enterData_type(HqlsqlParser::Data_typeContext * /*ctx*/) override { }
  virtual void exitData_type(HqlsqlParser::Data_typeContext * /*ctx*/) override { }

  virtual void enterPrimitive_type(HqlsqlParser::Primitive_typeContext * /*ctx*/) override { }
  virtual void exitPrimitive_type(HqlsqlParser::Primitive_typeContext * /*ctx*/) override { }

  virtual void enterArray_type(HqlsqlParser::Array_typeContext * /*ctx*/) override { }
  virtual void exitArray_type(HqlsqlParser::Array_typeContext * /*ctx*/) override { }

  virtual void enterMap_type(HqlsqlParser::Map_typeContext * /*ctx*/) override { }
  virtual void exitMap_type(HqlsqlParser::Map_typeContext * /*ctx*/) override { }

  virtual void enterStruct_type(HqlsqlParser::Struct_typeContext * /*ctx*/) override { }
  virtual void exitStruct_type(HqlsqlParser::Struct_typeContext * /*ctx*/) override { }

  virtual void enterStruct_type_type(HqlsqlParser::Struct_type_typeContext * /*ctx*/) override { }
  virtual void exitStruct_type_type(HqlsqlParser::Struct_type_typeContext * /*ctx*/) override { }

  virtual void enterUnion_type(HqlsqlParser::Union_typeContext * /*ctx*/) override { }
  virtual void exitUnion_type(HqlsqlParser::Union_typeContext * /*ctx*/) override { }

  virtual void enterDtype_len(HqlsqlParser::Dtype_lenContext * /*ctx*/) override { }
  virtual void exitDtype_len(HqlsqlParser::Dtype_lenContext * /*ctx*/) override { }

  virtual void enterDtype_attr(HqlsqlParser::Dtype_attrContext * /*ctx*/) override { }
  virtual void exitDtype_attr(HqlsqlParser::Dtype_attrContext * /*ctx*/) override { }

  virtual void enterDtype_default(HqlsqlParser::Dtype_defaultContext * /*ctx*/) override { }
  virtual void exitDtype_default(HqlsqlParser::Dtype_defaultContext * /*ctx*/) override { }

  virtual void enterCreate_database_stmt(HqlsqlParser::Create_database_stmtContext * /*ctx*/) override { }
  virtual void exitCreate_database_stmt(HqlsqlParser::Create_database_stmtContext * /*ctx*/) override { }

  virtual void enterCreate_database_option(HqlsqlParser::Create_database_optionContext * /*ctx*/) override { }
  virtual void exitCreate_database_option(HqlsqlParser::Create_database_optionContext * /*ctx*/) override { }

  virtual void enterComment_part(HqlsqlParser::Comment_partContext * /*ctx*/) override { }
  virtual void exitComment_part(HqlsqlParser::Comment_partContext * /*ctx*/) override { }

  virtual void enterLocation_part(HqlsqlParser::Location_partContext * /*ctx*/) override { }
  virtual void exitLocation_part(HqlsqlParser::Location_partContext * /*ctx*/) override { }

  virtual void enterProperty_values(HqlsqlParser::Property_valuesContext * /*ctx*/) override { }
  virtual void exitProperty_values(HqlsqlParser::Property_valuesContext * /*ctx*/) override { }

  virtual void enterProperty_values_part(HqlsqlParser::Property_values_partContext * /*ctx*/) override { }
  virtual void exitProperty_values_part(HqlsqlParser::Property_values_partContext * /*ctx*/) override { }

  virtual void enterCreate_function_stmt(HqlsqlParser::Create_function_stmtContext * /*ctx*/) override { }
  virtual void exitCreate_function_stmt(HqlsqlParser::Create_function_stmtContext * /*ctx*/) override { }

  virtual void enterCreate_function_procedure(HqlsqlParser::Create_function_procedureContext * /*ctx*/) override { }
  virtual void exitCreate_function_procedure(HqlsqlParser::Create_function_procedureContext * /*ctx*/) override { }

  virtual void enterCreate_temporary_function(HqlsqlParser::Create_temporary_functionContext * /*ctx*/) override { }
  virtual void exitCreate_temporary_function(HqlsqlParser::Create_temporary_functionContext * /*ctx*/) override { }

  virtual void enterCreate_permanent_function(HqlsqlParser::Create_permanent_functionContext * /*ctx*/) override { }
  virtual void exitCreate_permanent_function(HqlsqlParser::Create_permanent_functionContext * /*ctx*/) override { }

  virtual void enterPermanent_function_options(HqlsqlParser::Permanent_function_optionsContext * /*ctx*/) override { }
  virtual void exitPermanent_function_options(HqlsqlParser::Permanent_function_optionsContext * /*ctx*/) override { }

  virtual void enterPermanent_function_option(HqlsqlParser::Permanent_function_optionContext * /*ctx*/) override { }
  virtual void exitPermanent_function_option(HqlsqlParser::Permanent_function_optionContext * /*ctx*/) override { }

  virtual void enterReload_function(HqlsqlParser::Reload_functionContext * /*ctx*/) override { }
  virtual void exitReload_function(HqlsqlParser::Reload_functionContext * /*ctx*/) override { }

  virtual void enterCreate_function_return(HqlsqlParser::Create_function_returnContext * /*ctx*/) override { }
  virtual void exitCreate_function_return(HqlsqlParser::Create_function_returnContext * /*ctx*/) override { }

  virtual void enterCreate_package_stmt(HqlsqlParser::Create_package_stmtContext * /*ctx*/) override { }
  virtual void exitCreate_package_stmt(HqlsqlParser::Create_package_stmtContext * /*ctx*/) override { }

  virtual void enterPackage_spec(HqlsqlParser::Package_specContext * /*ctx*/) override { }
  virtual void exitPackage_spec(HqlsqlParser::Package_specContext * /*ctx*/) override { }

  virtual void enterPackage_spec_item(HqlsqlParser::Package_spec_itemContext * /*ctx*/) override { }
  virtual void exitPackage_spec_item(HqlsqlParser::Package_spec_itemContext * /*ctx*/) override { }

  virtual void enterCreate_package_body_stmt(HqlsqlParser::Create_package_body_stmtContext * /*ctx*/) override { }
  virtual void exitCreate_package_body_stmt(HqlsqlParser::Create_package_body_stmtContext * /*ctx*/) override { }

  virtual void enterPackage_body(HqlsqlParser::Package_bodyContext * /*ctx*/) override { }
  virtual void exitPackage_body(HqlsqlParser::Package_bodyContext * /*ctx*/) override { }

  virtual void enterPackage_body_item(HqlsqlParser::Package_body_itemContext * /*ctx*/) override { }
  virtual void exitPackage_body_item(HqlsqlParser::Package_body_itemContext * /*ctx*/) override { }

  virtual void enterCreate_procedure_stmt(HqlsqlParser::Create_procedure_stmtContext * /*ctx*/) override { }
  virtual void exitCreate_procedure_stmt(HqlsqlParser::Create_procedure_stmtContext * /*ctx*/) override { }

  virtual void enterCreate_routine_params(HqlsqlParser::Create_routine_paramsContext * /*ctx*/) override { }
  virtual void exitCreate_routine_params(HqlsqlParser::Create_routine_paramsContext * /*ctx*/) override { }

  virtual void enterCreate_routine_param_item(HqlsqlParser::Create_routine_param_itemContext * /*ctx*/) override { }
  virtual void exitCreate_routine_param_item(HqlsqlParser::Create_routine_param_itemContext * /*ctx*/) override { }

  virtual void enterCreate_routine_options(HqlsqlParser::Create_routine_optionsContext * /*ctx*/) override { }
  virtual void exitCreate_routine_options(HqlsqlParser::Create_routine_optionsContext * /*ctx*/) override { }

  virtual void enterCreate_routine_option(HqlsqlParser::Create_routine_optionContext * /*ctx*/) override { }
  virtual void exitCreate_routine_option(HqlsqlParser::Create_routine_optionContext * /*ctx*/) override { }

  virtual void enterDrop_table_view_role_index_stmt(HqlsqlParser::Drop_table_view_role_index_stmtContext * /*ctx*/) override { }
  virtual void exitDrop_table_view_role_index_stmt(HqlsqlParser::Drop_table_view_role_index_stmtContext * /*ctx*/) override { }

  virtual void enterDrop_db_schema_stmt(HqlsqlParser::Drop_db_schema_stmtContext * /*ctx*/) override { }
  virtual void exitDrop_db_schema_stmt(HqlsqlParser::Drop_db_schema_stmtContext * /*ctx*/) override { }

  virtual void enterDrop_macro_func_stmt(HqlsqlParser::Drop_macro_func_stmtContext * /*ctx*/) override { }
  virtual void exitDrop_macro_func_stmt(HqlsqlParser::Drop_macro_func_stmtContext * /*ctx*/) override { }

  virtual void enterEnd_transaction_stmt(HqlsqlParser::End_transaction_stmtContext * /*ctx*/) override { }
  virtual void exitEnd_transaction_stmt(HqlsqlParser::End_transaction_stmtContext * /*ctx*/) override { }

  virtual void enterExec_stmt(HqlsqlParser::Exec_stmtContext * /*ctx*/) override { }
  virtual void exitExec_stmt(HqlsqlParser::Exec_stmtContext * /*ctx*/) override { }

  virtual void enterIf_stmt(HqlsqlParser::If_stmtContext * /*ctx*/) override { }
  virtual void exitIf_stmt(HqlsqlParser::If_stmtContext * /*ctx*/) override { }

  virtual void enterIf_plsql_stmt(HqlsqlParser::If_plsql_stmtContext * /*ctx*/) override { }
  virtual void exitIf_plsql_stmt(HqlsqlParser::If_plsql_stmtContext * /*ctx*/) override { }

  virtual void enterIf_tsql_stmt(HqlsqlParser::If_tsql_stmtContext * /*ctx*/) override { }
  virtual void exitIf_tsql_stmt(HqlsqlParser::If_tsql_stmtContext * /*ctx*/) override { }

  virtual void enterIf_bteq_stmt(HqlsqlParser::If_bteq_stmtContext * /*ctx*/) override { }
  virtual void exitIf_bteq_stmt(HqlsqlParser::If_bteq_stmtContext * /*ctx*/) override { }

  virtual void enterElseif_block(HqlsqlParser::Elseif_blockContext * /*ctx*/) override { }
  virtual void exitElseif_block(HqlsqlParser::Elseif_blockContext * /*ctx*/) override { }

  virtual void enterElse_block(HqlsqlParser::Else_blockContext * /*ctx*/) override { }
  virtual void exitElse_block(HqlsqlParser::Else_blockContext * /*ctx*/) override { }

  virtual void enterInclude_stmt(HqlsqlParser::Include_stmtContext * /*ctx*/) override { }
  virtual void exitInclude_stmt(HqlsqlParser::Include_stmtContext * /*ctx*/) override { }

  virtual void enterLoad_file_stmt(HqlsqlParser::Load_file_stmtContext * /*ctx*/) override { }
  virtual void exitLoad_file_stmt(HqlsqlParser::Load_file_stmtContext * /*ctx*/) override { }

  virtual void enterInsert_stmt(HqlsqlParser::Insert_stmtContext * /*ctx*/) override { }
  virtual void exitInsert_stmt(HqlsqlParser::Insert_stmtContext * /*ctx*/) override { }

  virtual void enterInsert_into_table_from_sql(HqlsqlParser::Insert_into_table_from_sqlContext * /*ctx*/) override { }
  virtual void exitInsert_into_table_from_sql(HqlsqlParser::Insert_into_table_from_sqlContext * /*ctx*/) override { }

  virtual void enterInsert_into_tables_from_query(HqlsqlParser::Insert_into_tables_from_queryContext * /*ctx*/) override { }
  virtual void exitInsert_into_tables_from_query(HqlsqlParser::Insert_into_tables_from_queryContext * /*ctx*/) override { }

  virtual void enterInsert_tables_overwrite_into(HqlsqlParser::Insert_tables_overwrite_intoContext * /*ctx*/) override { }
  virtual void exitInsert_tables_overwrite_into(HqlsqlParser::Insert_tables_overwrite_intoContext * /*ctx*/) override { }

  virtual void enterInsert_into_files_from_query(HqlsqlParser::Insert_into_files_from_queryContext * /*ctx*/) override { }
  virtual void exitInsert_into_files_from_query(HqlsqlParser::Insert_into_files_from_queryContext * /*ctx*/) override { }

  virtual void enterInsert_into_mutiples(HqlsqlParser::Insert_into_mutiplesContext * /*ctx*/) override { }
  virtual void exitInsert_into_mutiples(HqlsqlParser::Insert_into_mutiplesContext * /*ctx*/) override { }

  virtual void enterInsert_stmt_cols(HqlsqlParser::Insert_stmt_colsContext * /*ctx*/) override { }
  virtual void exitInsert_stmt_cols(HqlsqlParser::Insert_stmt_colsContext * /*ctx*/) override { }

  virtual void enterInsert_stmt_rows(HqlsqlParser::Insert_stmt_rowsContext * /*ctx*/) override { }
  virtual void exitInsert_stmt_rows(HqlsqlParser::Insert_stmt_rowsContext * /*ctx*/) override { }

  virtual void enterInsert_stmt_row(HqlsqlParser::Insert_stmt_rowContext * /*ctx*/) override { }
  virtual void exitInsert_stmt_row(HqlsqlParser::Insert_stmt_rowContext * /*ctx*/) override { }

  virtual void enterInsert_directory_stmt(HqlsqlParser::Insert_directory_stmtContext * /*ctx*/) override { }
  virtual void exitInsert_directory_stmt(HqlsqlParser::Insert_directory_stmtContext * /*ctx*/) override { }

  virtual void enterExit_stmt(HqlsqlParser::Exit_stmtContext * /*ctx*/) override { }
  virtual void exitExit_stmt(HqlsqlParser::Exit_stmtContext * /*ctx*/) override { }

  virtual void enterGet_diag_stmt(HqlsqlParser::Get_diag_stmtContext * /*ctx*/) override { }
  virtual void exitGet_diag_stmt(HqlsqlParser::Get_diag_stmtContext * /*ctx*/) override { }

  virtual void enterGet_diag_stmt_item(HqlsqlParser::Get_diag_stmt_itemContext * /*ctx*/) override { }
  virtual void exitGet_diag_stmt_item(HqlsqlParser::Get_diag_stmt_itemContext * /*ctx*/) override { }

  virtual void enterGet_diag_stmt_exception_item(HqlsqlParser::Get_diag_stmt_exception_itemContext * /*ctx*/) override { }
  virtual void exitGet_diag_stmt_exception_item(HqlsqlParser::Get_diag_stmt_exception_itemContext * /*ctx*/) override { }

  virtual void enterGet_diag_stmt_rowcount_item(HqlsqlParser::Get_diag_stmt_rowcount_itemContext * /*ctx*/) override { }
  virtual void exitGet_diag_stmt_rowcount_item(HqlsqlParser::Get_diag_stmt_rowcount_itemContext * /*ctx*/) override { }

  virtual void enterLeave_stmt(HqlsqlParser::Leave_stmtContext * /*ctx*/) override { }
  virtual void exitLeave_stmt(HqlsqlParser::Leave_stmtContext * /*ctx*/) override { }

  virtual void enterMap_object_stmt(HqlsqlParser::Map_object_stmtContext * /*ctx*/) override { }
  virtual void exitMap_object_stmt(HqlsqlParser::Map_object_stmtContext * /*ctx*/) override { }

  virtual void enterOpen_stmt(HqlsqlParser::Open_stmtContext * /*ctx*/) override { }
  virtual void exitOpen_stmt(HqlsqlParser::Open_stmtContext * /*ctx*/) override { }

  virtual void enterFetch_stmt(HqlsqlParser::Fetch_stmtContext * /*ctx*/) override { }
  virtual void exitFetch_stmt(HqlsqlParser::Fetch_stmtContext * /*ctx*/) override { }

  virtual void enterCollect_stats_stmt(HqlsqlParser::Collect_stats_stmtContext * /*ctx*/) override { }
  virtual void exitCollect_stats_stmt(HqlsqlParser::Collect_stats_stmtContext * /*ctx*/) override { }

  virtual void enterCollect_stats_clause(HqlsqlParser::Collect_stats_clauseContext * /*ctx*/) override { }
  virtual void exitCollect_stats_clause(HqlsqlParser::Collect_stats_clauseContext * /*ctx*/) override { }

  virtual void enterClose_stmt(HqlsqlParser::Close_stmtContext * /*ctx*/) override { }
  virtual void exitClose_stmt(HqlsqlParser::Close_stmtContext * /*ctx*/) override { }

  virtual void enterCmp_stmt(HqlsqlParser::Cmp_stmtContext * /*ctx*/) override { }
  virtual void exitCmp_stmt(HqlsqlParser::Cmp_stmtContext * /*ctx*/) override { }

  virtual void enterCmp_source(HqlsqlParser::Cmp_sourceContext * /*ctx*/) override { }
  virtual void exitCmp_source(HqlsqlParser::Cmp_sourceContext * /*ctx*/) override { }

  virtual void enterCopy_from_local_stmt(HqlsqlParser::Copy_from_local_stmtContext * /*ctx*/) override { }
  virtual void exitCopy_from_local_stmt(HqlsqlParser::Copy_from_local_stmtContext * /*ctx*/) override { }

  virtual void enterCopy_stmt(HqlsqlParser::Copy_stmtContext * /*ctx*/) override { }
  virtual void exitCopy_stmt(HqlsqlParser::Copy_stmtContext * /*ctx*/) override { }

  virtual void enterCopy_source(HqlsqlParser::Copy_sourceContext * /*ctx*/) override { }
  virtual void exitCopy_source(HqlsqlParser::Copy_sourceContext * /*ctx*/) override { }

  virtual void enterCopy_target(HqlsqlParser::Copy_targetContext * /*ctx*/) override { }
  virtual void exitCopy_target(HqlsqlParser::Copy_targetContext * /*ctx*/) override { }

  virtual void enterCopy_option(HqlsqlParser::Copy_optionContext * /*ctx*/) override { }
  virtual void exitCopy_option(HqlsqlParser::Copy_optionContext * /*ctx*/) override { }

  virtual void enterCopy_file_option(HqlsqlParser::Copy_file_optionContext * /*ctx*/) override { }
  virtual void exitCopy_file_option(HqlsqlParser::Copy_file_optionContext * /*ctx*/) override { }

  virtual void enterCommit_stmt(HqlsqlParser::Commit_stmtContext * /*ctx*/) override { }
  virtual void exitCommit_stmt(HqlsqlParser::Commit_stmtContext * /*ctx*/) override { }

  virtual void enterCreate_index_stmt(HqlsqlParser::Create_index_stmtContext * /*ctx*/) override { }
  virtual void exitCreate_index_stmt(HqlsqlParser::Create_index_stmtContext * /*ctx*/) override { }

  virtual void enterCreate_index_col(HqlsqlParser::Create_index_colContext * /*ctx*/) override { }
  virtual void exitCreate_index_col(HqlsqlParser::Create_index_colContext * /*ctx*/) override { }

  virtual void enterIndex_storage_clause(HqlsqlParser::Index_storage_clauseContext * /*ctx*/) override { }
  virtual void exitIndex_storage_clause(HqlsqlParser::Index_storage_clauseContext * /*ctx*/) override { }

  virtual void enterIndex_mssql_storage_clause(HqlsqlParser::Index_mssql_storage_clauseContext * /*ctx*/) override { }
  virtual void exitIndex_mssql_storage_clause(HqlsqlParser::Index_mssql_storage_clauseContext * /*ctx*/) override { }

  virtual void enterPrint_stmt(HqlsqlParser::Print_stmtContext * /*ctx*/) override { }
  virtual void exitPrint_stmt(HqlsqlParser::Print_stmtContext * /*ctx*/) override { }

  virtual void enterQuit_stmt(HqlsqlParser::Quit_stmtContext * /*ctx*/) override { }
  virtual void exitQuit_stmt(HqlsqlParser::Quit_stmtContext * /*ctx*/) override { }

  virtual void enterRaise_stmt(HqlsqlParser::Raise_stmtContext * /*ctx*/) override { }
  virtual void exitRaise_stmt(HqlsqlParser::Raise_stmtContext * /*ctx*/) override { }

  virtual void enterResignal_stmt(HqlsqlParser::Resignal_stmtContext * /*ctx*/) override { }
  virtual void exitResignal_stmt(HqlsqlParser::Resignal_stmtContext * /*ctx*/) override { }

  virtual void enterReturn_stmt(HqlsqlParser::Return_stmtContext * /*ctx*/) override { }
  virtual void exitReturn_stmt(HqlsqlParser::Return_stmtContext * /*ctx*/) override { }

  virtual void enterRollback_stmt(HqlsqlParser::Rollback_stmtContext * /*ctx*/) override { }
  virtual void exitRollback_stmt(HqlsqlParser::Rollback_stmtContext * /*ctx*/) override { }

  virtual void enterSet_session_option(HqlsqlParser::Set_session_optionContext * /*ctx*/) override { }
  virtual void exitSet_session_option(HqlsqlParser::Set_session_optionContext * /*ctx*/) override { }

  virtual void enterSet_current_schema_option(HqlsqlParser::Set_current_schema_optionContext * /*ctx*/) override { }
  virtual void exitSet_current_schema_option(HqlsqlParser::Set_current_schema_optionContext * /*ctx*/) override { }

  virtual void enterSet_mssql_session_option(HqlsqlParser::Set_mssql_session_optionContext * /*ctx*/) override { }
  virtual void exitSet_mssql_session_option(HqlsqlParser::Set_mssql_session_optionContext * /*ctx*/) override { }

  virtual void enterSet_teradata_session_option(HqlsqlParser::Set_teradata_session_optionContext * /*ctx*/) override { }
  virtual void exitSet_teradata_session_option(HqlsqlParser::Set_teradata_session_optionContext * /*ctx*/) override { }

  virtual void enterSignal_stmt(HqlsqlParser::Signal_stmtContext * /*ctx*/) override { }
  virtual void exitSignal_stmt(HqlsqlParser::Signal_stmtContext * /*ctx*/) override { }

  virtual void enterSummary_stmt(HqlsqlParser::Summary_stmtContext * /*ctx*/) override { }
  virtual void exitSummary_stmt(HqlsqlParser::Summary_stmtContext * /*ctx*/) override { }

  virtual void enterTruncate_table_stmt(HqlsqlParser::Truncate_table_stmtContext * /*ctx*/) override { }
  virtual void exitTruncate_table_stmt(HqlsqlParser::Truncate_table_stmtContext * /*ctx*/) override { }

  virtual void enterPartition_assignment_list(HqlsqlParser::Partition_assignment_listContext * /*ctx*/) override { }
  virtual void exitPartition_assignment_list(HqlsqlParser::Partition_assignment_listContext * /*ctx*/) override { }

  virtual void enterPartition_spec(HqlsqlParser::Partition_specContext * /*ctx*/) override { }
  virtual void exitPartition_spec(HqlsqlParser::Partition_specContext * /*ctx*/) override { }

  virtual void enterUse_stmt(HqlsqlParser::Use_stmtContext * /*ctx*/) override { }
  virtual void exitUse_stmt(HqlsqlParser::Use_stmtContext * /*ctx*/) override { }

  virtual void enterValues_into_stmt(HqlsqlParser::Values_into_stmtContext * /*ctx*/) override { }
  virtual void exitValues_into_stmt(HqlsqlParser::Values_into_stmtContext * /*ctx*/) override { }

  virtual void enterWhile_stmt(HqlsqlParser::While_stmtContext * /*ctx*/) override { }
  virtual void exitWhile_stmt(HqlsqlParser::While_stmtContext * /*ctx*/) override { }

  virtual void enterFor_cursor_stmt(HqlsqlParser::For_cursor_stmtContext * /*ctx*/) override { }
  virtual void exitFor_cursor_stmt(HqlsqlParser::For_cursor_stmtContext * /*ctx*/) override { }

  virtual void enterFor_range_stmt(HqlsqlParser::For_range_stmtContext * /*ctx*/) override { }
  virtual void exitFor_range_stmt(HqlsqlParser::For_range_stmtContext * /*ctx*/) override { }

  virtual void enterLabel(HqlsqlParser::LabelContext * /*ctx*/) override { }
  virtual void exitLabel(HqlsqlParser::LabelContext * /*ctx*/) override { }

  virtual void enterLabel_pattern(HqlsqlParser::Label_patternContext * /*ctx*/) override { }
  virtual void exitLabel_pattern(HqlsqlParser::Label_patternContext * /*ctx*/) override { }

  virtual void enterUsing_clause(HqlsqlParser::Using_clauseContext * /*ctx*/) override { }
  virtual void exitUsing_clause(HqlsqlParser::Using_clauseContext * /*ctx*/) override { }

  virtual void enterSelect_stmt(HqlsqlParser::Select_stmtContext * /*ctx*/) override { }
  virtual void exitSelect_stmt(HqlsqlParser::Select_stmtContext * /*ctx*/) override { }

  virtual void enterCte_select_stmt(HqlsqlParser::Cte_select_stmtContext * /*ctx*/) override { }
  virtual void exitCte_select_stmt(HqlsqlParser::Cte_select_stmtContext * /*ctx*/) override { }

  virtual void enterCommon_table_expression(HqlsqlParser::Common_table_expressionContext * /*ctx*/) override { }
  virtual void exitCommon_table_expression(HqlsqlParser::Common_table_expressionContext * /*ctx*/) override { }

  virtual void enterCte_select_cols(HqlsqlParser::Cte_select_colsContext * /*ctx*/) override { }
  virtual void exitCte_select_cols(HqlsqlParser::Cte_select_colsContext * /*ctx*/) override { }

  virtual void enterFullselect_stmt(HqlsqlParser::Fullselect_stmtContext * /*ctx*/) override { }
  virtual void exitFullselect_stmt(HqlsqlParser::Fullselect_stmtContext * /*ctx*/) override { }

  virtual void enterFullselect_stmt_item(HqlsqlParser::Fullselect_stmt_itemContext * /*ctx*/) override { }
  virtual void exitFullselect_stmt_item(HqlsqlParser::Fullselect_stmt_itemContext * /*ctx*/) override { }

  virtual void enterFullselect_set_clause(HqlsqlParser::Fullselect_set_clauseContext * /*ctx*/) override { }
  virtual void exitFullselect_set_clause(HqlsqlParser::Fullselect_set_clauseContext * /*ctx*/) override { }

  virtual void enterSubselect_stmt(HqlsqlParser::Subselect_stmtContext * /*ctx*/) override { }
  virtual void exitSubselect_stmt(HqlsqlParser::Subselect_stmtContext * /*ctx*/) override { }

  virtual void enterSelect_list(HqlsqlParser::Select_listContext * /*ctx*/) override { }
  virtual void exitSelect_list(HqlsqlParser::Select_listContext * /*ctx*/) override { }

  virtual void enterSelect_list_set(HqlsqlParser::Select_list_setContext * /*ctx*/) override { }
  virtual void exitSelect_list_set(HqlsqlParser::Select_list_setContext * /*ctx*/) override { }

  virtual void enterSelect_list_limit(HqlsqlParser::Select_list_limitContext * /*ctx*/) override { }
  virtual void exitSelect_list_limit(HqlsqlParser::Select_list_limitContext * /*ctx*/) override { }

  virtual void enterSelect_list_item(HqlsqlParser::Select_list_itemContext * /*ctx*/) override { }
  virtual void exitSelect_list_item(HqlsqlParser::Select_list_itemContext * /*ctx*/) override { }

  virtual void enterSelect_list_alias(HqlsqlParser::Select_list_aliasContext * /*ctx*/) override { }
  virtual void exitSelect_list_alias(HqlsqlParser::Select_list_aliasContext * /*ctx*/) override { }

  virtual void enterSelect_list_asterisk(HqlsqlParser::Select_list_asteriskContext * /*ctx*/) override { }
  virtual void exitSelect_list_asterisk(HqlsqlParser::Select_list_asteriskContext * /*ctx*/) override { }

  virtual void enterSelect_list_use_option(HqlsqlParser::Select_list_use_optionContext * /*ctx*/) override { }
  virtual void exitSelect_list_use_option(HqlsqlParser::Select_list_use_optionContext * /*ctx*/) override { }

  virtual void enterFrom_clause(HqlsqlParser::From_clauseContext * /*ctx*/) override { }
  virtual void exitFrom_clause(HqlsqlParser::From_clauseContext * /*ctx*/) override { }

  virtual void enterFrom_table_clause(HqlsqlParser::From_table_clauseContext * /*ctx*/) override { }
  virtual void exitFrom_table_clause(HqlsqlParser::From_table_clauseContext * /*ctx*/) override { }

  virtual void enterFrom_table_name_clause(HqlsqlParser::From_table_name_clauseContext * /*ctx*/) override { }
  virtual void exitFrom_table_name_clause(HqlsqlParser::From_table_name_clauseContext * /*ctx*/) override { }

  virtual void enterFrom_table_clause_option(HqlsqlParser::From_table_clause_optionContext * /*ctx*/) override { }
  virtual void exitFrom_table_clause_option(HqlsqlParser::From_table_clause_optionContext * /*ctx*/) override { }

  virtual void enterLateral_view(HqlsqlParser::Lateral_viewContext * /*ctx*/) override { }
  virtual void exitLateral_view(HqlsqlParser::Lateral_viewContext * /*ctx*/) override { }

  virtual void enterTable_sample_clause(HqlsqlParser::Table_sample_clauseContext * /*ctx*/) override { }
  virtual void exitTable_sample_clause(HqlsqlParser::Table_sample_clauseContext * /*ctx*/) override { }

  virtual void enterTable_sampling(HqlsqlParser::Table_samplingContext * /*ctx*/) override { }
  virtual void exitTable_sampling(HqlsqlParser::Table_samplingContext * /*ctx*/) override { }

  virtual void enterBlock_sampling(HqlsqlParser::Block_samplingContext * /*ctx*/) override { }
  virtual void exitBlock_sampling(HqlsqlParser::Block_samplingContext * /*ctx*/) override { }

  virtual void enterBlock_sampling_option(HqlsqlParser::Block_sampling_optionContext * /*ctx*/) override { }
  virtual void exitBlock_sampling_option(HqlsqlParser::Block_sampling_optionContext * /*ctx*/) override { }

  virtual void enterNumbers(HqlsqlParser::NumbersContext * /*ctx*/) override { }
  virtual void exitNumbers(HqlsqlParser::NumbersContext * /*ctx*/) override { }

  virtual void enterSize_types(HqlsqlParser::Size_typesContext * /*ctx*/) override { }
  virtual void exitSize_types(HqlsqlParser::Size_typesContext * /*ctx*/) override { }

  virtual void enterFrom_subselect_clause(HqlsqlParser::From_subselect_clauseContext * /*ctx*/) override { }
  virtual void exitFrom_subselect_clause(HqlsqlParser::From_subselect_clauseContext * /*ctx*/) override { }

  virtual void enterFrom_join_clause(HqlsqlParser::From_join_clauseContext * /*ctx*/) override { }
  virtual void exitFrom_join_clause(HqlsqlParser::From_join_clauseContext * /*ctx*/) override { }

  virtual void enterFrom_join_type_clause(HqlsqlParser::From_join_type_clauseContext * /*ctx*/) override { }
  virtual void exitFrom_join_type_clause(HqlsqlParser::From_join_type_clauseContext * /*ctx*/) override { }

  virtual void enterFrom_alias_clause(HqlsqlParser::From_alias_clauseContext * /*ctx*/) override { }
  virtual void exitFrom_alias_clause(HqlsqlParser::From_alias_clauseContext * /*ctx*/) override { }

  virtual void enterOn_condition(HqlsqlParser::On_conditionContext * /*ctx*/) override { }
  virtual void exitOn_condition(HqlsqlParser::On_conditionContext * /*ctx*/) override { }

  virtual void enterTable_name(HqlsqlParser::Table_nameContext * /*ctx*/) override { }
  virtual void exitTable_name(HqlsqlParser::Table_nameContext * /*ctx*/) override { }

  virtual void enterView_name(HqlsqlParser::View_nameContext * /*ctx*/) override { }
  virtual void exitView_name(HqlsqlParser::View_nameContext * /*ctx*/) override { }

  virtual void enterDb_name(HqlsqlParser::Db_nameContext * /*ctx*/) override { }
  virtual void exitDb_name(HqlsqlParser::Db_nameContext * /*ctx*/) override { }

  virtual void enterSelect_option(HqlsqlParser::Select_optionContext * /*ctx*/) override { }
  virtual void exitSelect_option(HqlsqlParser::Select_optionContext * /*ctx*/) override { }

  virtual void enterWindow_clause(HqlsqlParser::Window_clauseContext * /*ctx*/) override { }
  virtual void exitWindow_clause(HqlsqlParser::Window_clauseContext * /*ctx*/) override { }

  virtual void enterWhere_clause(HqlsqlParser::Where_clauseContext * /*ctx*/) override { }
  virtual void exitWhere_clause(HqlsqlParser::Where_clauseContext * /*ctx*/) override { }

  virtual void enterGroup_by_clause(HqlsqlParser::Group_by_clauseContext * /*ctx*/) override { }
  virtual void exitGroup_by_clause(HqlsqlParser::Group_by_clauseContext * /*ctx*/) override { }

  virtual void enterHaving_clause(HqlsqlParser::Having_clauseContext * /*ctx*/) override { }
  virtual void exitHaving_clause(HqlsqlParser::Having_clauseContext * /*ctx*/) override { }

  virtual void enterLimit_clause(HqlsqlParser::Limit_clauseContext * /*ctx*/) override { }
  virtual void exitLimit_clause(HqlsqlParser::Limit_clauseContext * /*ctx*/) override { }

  virtual void enterOrder_by_clause(HqlsqlParser::Order_by_clauseContext * /*ctx*/) override { }
  virtual void exitOrder_by_clause(HqlsqlParser::Order_by_clauseContext * /*ctx*/) override { }

  virtual void enterOrder_by_clause_option(HqlsqlParser::Order_by_clause_optionContext * /*ctx*/) override { }
  virtual void exitOrder_by_clause_option(HqlsqlParser::Order_by_clause_optionContext * /*ctx*/) override { }

  virtual void enterCol_order(HqlsqlParser::Col_orderContext * /*ctx*/) override { }
  virtual void exitCol_order(HqlsqlParser::Col_orderContext * /*ctx*/) override { }

  virtual void enterCol_null_order(HqlsqlParser::Col_null_orderContext * /*ctx*/) override { }
  virtual void exitCol_null_order(HqlsqlParser::Col_null_orderContext * /*ctx*/) override { }

  virtual void enterCluster_by_clause(HqlsqlParser::Cluster_by_clauseContext * /*ctx*/) override { }
  virtual void exitCluster_by_clause(HqlsqlParser::Cluster_by_clauseContext * /*ctx*/) override { }

  virtual void enterUpdate_stmt(HqlsqlParser::Update_stmtContext * /*ctx*/) override { }
  virtual void exitUpdate_stmt(HqlsqlParser::Update_stmtContext * /*ctx*/) override { }

  virtual void enterUpdate_assignment(HqlsqlParser::Update_assignmentContext * /*ctx*/) override { }
  virtual void exitUpdate_assignment(HqlsqlParser::Update_assignmentContext * /*ctx*/) override { }

  virtual void enterUpdate_upsert(HqlsqlParser::Update_upsertContext * /*ctx*/) override { }
  virtual void exitUpdate_upsert(HqlsqlParser::Update_upsertContext * /*ctx*/) override { }

  virtual void enterMerge_stmt(HqlsqlParser::Merge_stmtContext * /*ctx*/) override { }
  virtual void exitMerge_stmt(HqlsqlParser::Merge_stmtContext * /*ctx*/) override { }

  virtual void enterMerge_table(HqlsqlParser::Merge_tableContext * /*ctx*/) override { }
  virtual void exitMerge_table(HqlsqlParser::Merge_tableContext * /*ctx*/) override { }

  virtual void enterMerge_condition(HqlsqlParser::Merge_conditionContext * /*ctx*/) override { }
  virtual void exitMerge_condition(HqlsqlParser::Merge_conditionContext * /*ctx*/) override { }

  virtual void enterMerge_action(HqlsqlParser::Merge_actionContext * /*ctx*/) override { }
  virtual void exitMerge_action(HqlsqlParser::Merge_actionContext * /*ctx*/) override { }

  virtual void enterAnalyze_table_stmt(HqlsqlParser::Analyze_table_stmtContext * /*ctx*/) override { }
  virtual void exitAnalyze_table_stmt(HqlsqlParser::Analyze_table_stmtContext * /*ctx*/) override { }

  virtual void enterDelete_stmt(HqlsqlParser::Delete_stmtContext * /*ctx*/) override { }
  virtual void exitDelete_stmt(HqlsqlParser::Delete_stmtContext * /*ctx*/) override { }

  virtual void enterDelete_alias(HqlsqlParser::Delete_aliasContext * /*ctx*/) override { }
  virtual void exitDelete_alias(HqlsqlParser::Delete_aliasContext * /*ctx*/) override { }

  virtual void enterDesc_db_schema(HqlsqlParser::Desc_db_schemaContext * /*ctx*/) override { }
  virtual void exitDesc_db_schema(HqlsqlParser::Desc_db_schemaContext * /*ctx*/) override { }

  virtual void enterDesc_table_view_column(HqlsqlParser::Desc_table_view_columnContext * /*ctx*/) override { }
  virtual void exitDesc_table_view_column(HqlsqlParser::Desc_table_view_columnContext * /*ctx*/) override { }

  virtual void enterBool_expr(HqlsqlParser::Bool_exprContext * /*ctx*/) override { }
  virtual void exitBool_expr(HqlsqlParser::Bool_exprContext * /*ctx*/) override { }

  virtual void enterBool_expr_atom(HqlsqlParser::Bool_expr_atomContext * /*ctx*/) override { }
  virtual void exitBool_expr_atom(HqlsqlParser::Bool_expr_atomContext * /*ctx*/) override { }

  virtual void enterBool_expr_unary(HqlsqlParser::Bool_expr_unaryContext * /*ctx*/) override { }
  virtual void exitBool_expr_unary(HqlsqlParser::Bool_expr_unaryContext * /*ctx*/) override { }

  virtual void enterBool_expr_single_in(HqlsqlParser::Bool_expr_single_inContext * /*ctx*/) override { }
  virtual void exitBool_expr_single_in(HqlsqlParser::Bool_expr_single_inContext * /*ctx*/) override { }

  virtual void enterBool_expr_multi_in(HqlsqlParser::Bool_expr_multi_inContext * /*ctx*/) override { }
  virtual void exitBool_expr_multi_in(HqlsqlParser::Bool_expr_multi_inContext * /*ctx*/) override { }

  virtual void enterParen_expr_list(HqlsqlParser::Paren_expr_listContext * /*ctx*/) override { }
  virtual void exitParen_expr_list(HqlsqlParser::Paren_expr_listContext * /*ctx*/) override { }

  virtual void enterExpr_list(HqlsqlParser::Expr_listContext * /*ctx*/) override { }
  virtual void exitExpr_list(HqlsqlParser::Expr_listContext * /*ctx*/) override { }

  virtual void enterBool_expr_binary(HqlsqlParser::Bool_expr_binaryContext * /*ctx*/) override { }
  virtual void exitBool_expr_binary(HqlsqlParser::Bool_expr_binaryContext * /*ctx*/) override { }

  virtual void enterBool_expr_logical_operator(HqlsqlParser::Bool_expr_logical_operatorContext * /*ctx*/) override { }
  virtual void exitBool_expr_logical_operator(HqlsqlParser::Bool_expr_logical_operatorContext * /*ctx*/) override { }

  virtual void enterBool_expr_binary_operator(HqlsqlParser::Bool_expr_binary_operatorContext * /*ctx*/) override { }
  virtual void exitBool_expr_binary_operator(HqlsqlParser::Bool_expr_binary_operatorContext * /*ctx*/) override { }

  virtual void enterExpr(HqlsqlParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(HqlsqlParser::ExprContext * /*ctx*/) override { }

  virtual void enterExpr_unary(HqlsqlParser::Expr_unaryContext * /*ctx*/) override { }
  virtual void exitExpr_unary(HqlsqlParser::Expr_unaryContext * /*ctx*/) override { }

  virtual void enterExpr_atom(HqlsqlParser::Expr_atomContext * /*ctx*/) override { }
  virtual void exitExpr_atom(HqlsqlParser::Expr_atomContext * /*ctx*/) override { }

  virtual void enterExpr_interval(HqlsqlParser::Expr_intervalContext * /*ctx*/) override { }
  virtual void exitExpr_interval(HqlsqlParser::Expr_intervalContext * /*ctx*/) override { }

  virtual void enterInterval_item(HqlsqlParser::Interval_itemContext * /*ctx*/) override { }
  virtual void exitInterval_item(HqlsqlParser::Interval_itemContext * /*ctx*/) override { }

  virtual void enterExpr_concat(HqlsqlParser::Expr_concatContext * /*ctx*/) override { }
  virtual void exitExpr_concat(HqlsqlParser::Expr_concatContext * /*ctx*/) override { }

  virtual void enterExpr_concat_item(HqlsqlParser::Expr_concat_itemContext * /*ctx*/) override { }
  virtual void exitExpr_concat_item(HqlsqlParser::Expr_concat_itemContext * /*ctx*/) override { }

  virtual void enterExpr_case(HqlsqlParser::Expr_caseContext * /*ctx*/) override { }
  virtual void exitExpr_case(HqlsqlParser::Expr_caseContext * /*ctx*/) override { }

  virtual void enterExpr_case_simple(HqlsqlParser::Expr_case_simpleContext * /*ctx*/) override { }
  virtual void exitExpr_case_simple(HqlsqlParser::Expr_case_simpleContext * /*ctx*/) override { }

  virtual void enterExpr_case_searched(HqlsqlParser::Expr_case_searchedContext * /*ctx*/) override { }
  virtual void exitExpr_case_searched(HqlsqlParser::Expr_case_searchedContext * /*ctx*/) override { }

  virtual void enterExpr_cursor_attribute(HqlsqlParser::Expr_cursor_attributeContext * /*ctx*/) override { }
  virtual void exitExpr_cursor_attribute(HqlsqlParser::Expr_cursor_attributeContext * /*ctx*/) override { }

  virtual void enterExpr_agg_window_func(HqlsqlParser::Expr_agg_window_funcContext * /*ctx*/) override { }
  virtual void exitExpr_agg_window_func(HqlsqlParser::Expr_agg_window_funcContext * /*ctx*/) override { }

  virtual void enterExpr_func_all_distinct(HqlsqlParser::Expr_func_all_distinctContext * /*ctx*/) override { }
  virtual void exitExpr_func_all_distinct(HqlsqlParser::Expr_func_all_distinctContext * /*ctx*/) override { }

  virtual void enterExpr_func_over_clause(HqlsqlParser::Expr_func_over_clauseContext * /*ctx*/) override { }
  virtual void exitExpr_func_over_clause(HqlsqlParser::Expr_func_over_clauseContext * /*ctx*/) override { }

  virtual void enterExpr_func_over_clause_options(HqlsqlParser::Expr_func_over_clause_optionsContext * /*ctx*/) override { }
  virtual void exitExpr_func_over_clause_options(HqlsqlParser::Expr_func_over_clause_optionsContext * /*ctx*/) override { }

  virtual void enterExpr_func_partition_by_clause(HqlsqlParser::Expr_func_partition_by_clauseContext * /*ctx*/) override { }
  virtual void exitExpr_func_partition_by_clause(HqlsqlParser::Expr_func_partition_by_clauseContext * /*ctx*/) override { }

  virtual void enterFunc_partition_clause_option(HqlsqlParser::Func_partition_clause_optionContext * /*ctx*/) override { }
  virtual void exitFunc_partition_clause_option(HqlsqlParser::Func_partition_clause_optionContext * /*ctx*/) override { }

  virtual void enterFunc_partition_clause_part(HqlsqlParser::Func_partition_clause_partContext * /*ctx*/) override { }
  virtual void exitFunc_partition_clause_part(HqlsqlParser::Func_partition_clause_partContext * /*ctx*/) override { }

  virtual void enterExpr_spec_func(HqlsqlParser::Expr_spec_funcContext * /*ctx*/) override { }
  virtual void exitExpr_spec_func(HqlsqlParser::Expr_spec_funcContext * /*ctx*/) override { }

  virtual void enterExpr_func(HqlsqlParser::Expr_funcContext * /*ctx*/) override { }
  virtual void exitExpr_func(HqlsqlParser::Expr_funcContext * /*ctx*/) override { }

  virtual void enterExpr_func_params(HqlsqlParser::Expr_func_paramsContext * /*ctx*/) override { }
  virtual void exitExpr_func_params(HqlsqlParser::Expr_func_paramsContext * /*ctx*/) override { }

  virtual void enterFunc_param(HqlsqlParser::Func_paramContext * /*ctx*/) override { }
  virtual void exitFunc_param(HqlsqlParser::Func_paramContext * /*ctx*/) override { }

  virtual void enterExpr_select(HqlsqlParser::Expr_selectContext * /*ctx*/) override { }
  virtual void exitExpr_select(HqlsqlParser::Expr_selectContext * /*ctx*/) override { }

  virtual void enterExpr_file(HqlsqlParser::Expr_fileContext * /*ctx*/) override { }
  virtual void exitExpr_file(HqlsqlParser::Expr_fileContext * /*ctx*/) override { }

  virtual void enterHive(HqlsqlParser::HiveContext * /*ctx*/) override { }
  virtual void exitHive(HqlsqlParser::HiveContext * /*ctx*/) override { }

  virtual void enterHive_item(HqlsqlParser::Hive_itemContext * /*ctx*/) override { }
  virtual void exitHive_item(HqlsqlParser::Hive_itemContext * /*ctx*/) override { }

  virtual void enterHost(HqlsqlParser::HostContext * /*ctx*/) override { }
  virtual void exitHost(HqlsqlParser::HostContext * /*ctx*/) override { }

  virtual void enterHost_cmd(HqlsqlParser::Host_cmdContext * /*ctx*/) override { }
  virtual void exitHost_cmd(HqlsqlParser::Host_cmdContext * /*ctx*/) override { }

  virtual void enterHost_stmt(HqlsqlParser::Host_stmtContext * /*ctx*/) override { }
  virtual void exitHost_stmt(HqlsqlParser::Host_stmtContext * /*ctx*/) override { }

  virtual void enterFile_name(HqlsqlParser::File_nameContext * /*ctx*/) override { }
  virtual void exitFile_name(HqlsqlParser::File_nameContext * /*ctx*/) override { }

  virtual void enterFile_pattern(HqlsqlParser::File_patternContext * /*ctx*/) override { }
  virtual void exitFile_pattern(HqlsqlParser::File_patternContext * /*ctx*/) override { }

  virtual void enterDate_literal(HqlsqlParser::Date_literalContext * /*ctx*/) override { }
  virtual void exitDate_literal(HqlsqlParser::Date_literalContext * /*ctx*/) override { }

  virtual void enterTimestamp_literal(HqlsqlParser::Timestamp_literalContext * /*ctx*/) override { }
  virtual void exitTimestamp_literal(HqlsqlParser::Timestamp_literalContext * /*ctx*/) override { }

  virtual void enterIdent(HqlsqlParser::IdentContext * /*ctx*/) override { }
  virtual void exitIdent(HqlsqlParser::IdentContext * /*ctx*/) override { }

  virtual void enterSingle_quotedString(HqlsqlParser::Single_quotedStringContext * /*ctx*/) override { }
  virtual void exitSingle_quotedString(HqlsqlParser::Single_quotedStringContext * /*ctx*/) override { }

  virtual void enterDouble_quotedString(HqlsqlParser::Double_quotedStringContext * /*ctx*/) override { }
  virtual void exitDouble_quotedString(HqlsqlParser::Double_quotedStringContext * /*ctx*/) override { }

  virtual void enterInt_number(HqlsqlParser::Int_numberContext * /*ctx*/) override { }
  virtual void exitInt_number(HqlsqlParser::Int_numberContext * /*ctx*/) override { }

  virtual void enterDec_number(HqlsqlParser::Dec_numberContext * /*ctx*/) override { }
  virtual void exitDec_number(HqlsqlParser::Dec_numberContext * /*ctx*/) override { }

  virtual void enterBool_literal(HqlsqlParser::Bool_literalContext * /*ctx*/) override { }
  virtual void exitBool_literal(HqlsqlParser::Bool_literalContext * /*ctx*/) override { }

  virtual void enterNull_const(HqlsqlParser::Null_constContext * /*ctx*/) override { }
  virtual void exitNull_const(HqlsqlParser::Null_constContext * /*ctx*/) override { }

  virtual void enterNon_reserved_words(HqlsqlParser::Non_reserved_wordsContext * /*ctx*/) override { }
  virtual void exitNon_reserved_words(HqlsqlParser::Non_reserved_wordsContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};


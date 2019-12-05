
// Generated from /home/jona/myGit/myCode_repository/antlr4_cpp/hive/HqlsqlParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "HqlsqlParserVisitor.h"


/**
 * This class provides an empty implementation of HqlsqlParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  HqlsqlParserBaseVisitor : public HqlsqlParserVisitor {
public:

  virtual antlrcpp::Any visitProgram(HqlsqlParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(HqlsqlParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock_content(HqlsqlParser::Block_contentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBegin_end_block(HqlsqlParser::Begin_end_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSingle_block_stmt(HqlsqlParser::Single_block_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock_end(HqlsqlParser::Block_endContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProc_block(HqlsqlParser::Proc_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmt(HqlsqlParser::StmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSemicolon_stmt(HqlsqlParser::Semicolon_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitException_block(HqlsqlParser::Exception_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitException_block_item(HqlsqlParser::Exception_block_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignment_stmt(HqlsqlParser::Assignment_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignment_stmt_item(HqlsqlParser::Assignment_stmt_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignment_stmt_single_item(HqlsqlParser::Assignment_stmt_single_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignment_stmt_multiple_item(HqlsqlParser::Assignment_stmt_multiple_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignment_stmt_select_item(HqlsqlParser::Assignment_stmt_select_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignment_expr(HqlsqlParser::Assignment_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignment_reserverd_words(HqlsqlParser::Assignment_reserverd_wordsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAllocate_cursor_stmt(HqlsqlParser::Allocate_cursor_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssociate_locator_stmt(HqlsqlParser::Associate_locator_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBegin_transaction_stmt(HqlsqlParser::Begin_transaction_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAbort_transactions_stmt(HqlsqlParser::Abort_transactions_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBreak_stmt(HqlsqlParser::Break_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCall_stmt(HqlsqlParser::Call_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclare_stmt(HqlsqlParser::Declare_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclare_block(HqlsqlParser::Declare_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclare_block_inplace(HqlsqlParser::Declare_block_inplaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclare_stmt_item(HqlsqlParser::Declare_stmt_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclare_var_item(HqlsqlParser::Declare_var_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclare_condition_item(HqlsqlParser::Declare_condition_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclare_cursor_item(HqlsqlParser::Declare_cursor_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCursor_with_return(HqlsqlParser::Cursor_with_returnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCursor_without_return(HqlsqlParser::Cursor_without_returnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclare_handler_item(HqlsqlParser::Declare_handler_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclare_temporary_table_item(HqlsqlParser::Declare_temporary_table_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_table_stmt(HqlsqlParser::Create_table_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_local_temp_table_stmt(HqlsqlParser::Create_local_temp_table_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_table_definition(HqlsqlParser::Create_table_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_table_columns(HqlsqlParser::Create_table_columnsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_table_columns_item(HqlsqlParser::Create_table_columns_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumn_name(HqlsqlParser::Column_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOld_column_name(HqlsqlParser::Old_column_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNew_column_name(HqlsqlParser::New_column_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstraint_specification(HqlsqlParser::Constraint_specificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstraint_spec(HqlsqlParser::Constraint_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstraint_name(HqlsqlParser::Constraint_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParen_column_list(HqlsqlParser::Paren_column_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumn_name_list(HqlsqlParser::Column_name_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumn_name_ele(HqlsqlParser::Column_name_eleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParen_col_values(HqlsqlParser::Paren_col_valuesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumn_constrains_specification(HqlsqlParser::Column_constrains_specificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefault_value(HqlsqlParser::Default_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_table_column_comment(HqlsqlParser::Create_table_column_commentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_table_column_cons(HqlsqlParser::Create_table_column_consContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_table_fk_action(HqlsqlParser::Create_table_fk_actionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_table_preoptions(HqlsqlParser::Create_table_preoptionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_table_preoptions_item(HqlsqlParser::Create_table_preoptions_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_table_preoptions_td_item(HqlsqlParser::Create_table_preoptions_td_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_table_options(HqlsqlParser::Create_table_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_table_option(HqlsqlParser::Create_table_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartition_by_part(HqlsqlParser::Partition_by_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCluster_by_part(HqlsqlParser::Cluster_by_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSkewed_by_part(HqlsqlParser::Skewed_by_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCol_values(HqlsqlParser::Col_valuesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStored_as_part(HqlsqlParser::Stored_as_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRow_format_part(HqlsqlParser::Row_format_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFile_format(HqlsqlParser::File_formatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRow_format(HqlsqlParser::Row_formatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTerminated_by_part(HqlsqlParser::Terminated_by_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTerminated_by(HqlsqlParser::Terminated_byContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBy_char(HqlsqlParser::By_charContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_table_options_hive_item(HqlsqlParser::Create_table_options_hive_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_table_hive_row_format(HqlsqlParser::Create_table_hive_row_formatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_table_hive_row_format_fields(HqlsqlParser::Create_table_hive_row_format_fieldsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_table_options_mssql_item(HqlsqlParser::Create_table_options_mssql_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_view_stmt(HqlsqlParser::Create_view_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_view_options(HqlsqlParser::Create_view_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_materialized_view_option(HqlsqlParser::Create_materialized_view_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_macro_stmt(HqlsqlParser::Create_macro_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_role_stmt(HqlsqlParser::Create_role_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGrant_revoke_role_stmt(HqlsqlParser::Grant_revoke_role_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWith_option_for(HqlsqlParser::With_option_forContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRole_name(HqlsqlParser::Role_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRole_names(HqlsqlParser::Role_namesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGrant_revoke_privilege_stmt(HqlsqlParser::Grant_revoke_privilege_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrivilege_columns(HqlsqlParser::Privilege_columnsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPriv_type(HqlsqlParser::Priv_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitObject_specification(HqlsqlParser::Object_specificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_table_stmt_label(HqlsqlParser::Alter_table_stmt_labelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_db_schema_view(HqlsqlParser::Alter_db_schema_viewContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_materialized_view(HqlsqlParser::Alter_materialized_viewContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_index(HqlsqlParser::Alter_indexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_view_as_select(HqlsqlParser::Alter_view_as_selectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_option(HqlsqlParser::Alter_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_table_stmt(HqlsqlParser::Alter_table_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_table_item_options(HqlsqlParser::Alter_table_item_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_table_properties(HqlsqlParser::Alter_table_propertiesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSet_tblproperties(HqlsqlParser::Set_tblpropertiesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdd_serde_properties(HqlsqlParser::Add_serde_propertiesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSerde_class_name(HqlsqlParser::Serde_class_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_storage_properties(HqlsqlParser::Table_storage_propertiesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_skewed_properties(HqlsqlParser::Table_skewed_propertiesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_constraints(HqlsqlParser::Table_constraintsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdd_constraint_property(HqlsqlParser::Add_constraint_propertyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChange_column_property(HqlsqlParser::Change_column_propertyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_constraint_property(HqlsqlParser::Drop_constraint_propertyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNew_table_name(HqlsqlParser::New_table_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_table_partition_properties(HqlsqlParser::Alter_table_partition_propertiesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdd_partition_property(HqlsqlParser::Add_partition_propertyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdd_partition_property_options(HqlsqlParser::Add_partition_property_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdd_partition_property_option(HqlsqlParser::Add_partition_property_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRecover_partition_property(HqlsqlParser::Recover_partition_propertyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_partition_property(HqlsqlParser::Drop_partition_propertyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArchive_partition_property(HqlsqlParser::Archive_partition_propertyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_table_or_partition_options(HqlsqlParser::Alter_table_or_partition_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_table_column_properties(HqlsqlParser::Alter_table_column_propertiesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShow_stmt(HqlsqlParser::Show_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrincipal_specification(HqlsqlParser::Principal_specificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrincipal_specifications(HqlsqlParser::Principal_specificationsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitImport_stmt(HqlsqlParser::Import_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExport_stmt(HqlsqlParser::Export_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExplain_stmt(HqlsqlParser::Explain_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDtype(HqlsqlParser::DtypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitData_type(HqlsqlParser::Data_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimitive_type(HqlsqlParser::Primitive_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArray_type(HqlsqlParser::Array_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMap_type(HqlsqlParser::Map_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStruct_type(HqlsqlParser::Struct_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStruct_type_type(HqlsqlParser::Struct_type_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnion_type(HqlsqlParser::Union_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDtype_len(HqlsqlParser::Dtype_lenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDtype_attr(HqlsqlParser::Dtype_attrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDtype_default(HqlsqlParser::Dtype_defaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_database_stmt(HqlsqlParser::Create_database_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_database_option(HqlsqlParser::Create_database_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComment_part(HqlsqlParser::Comment_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLocation_part(HqlsqlParser::Location_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProperty_values(HqlsqlParser::Property_valuesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProperty_values_part(HqlsqlParser::Property_values_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_function_stmt(HqlsqlParser::Create_function_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_function_procedure(HqlsqlParser::Create_function_procedureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_temporary_function(HqlsqlParser::Create_temporary_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_permanent_function(HqlsqlParser::Create_permanent_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPermanent_function_options(HqlsqlParser::Permanent_function_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPermanent_function_option(HqlsqlParser::Permanent_function_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReload_function(HqlsqlParser::Reload_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_function_return(HqlsqlParser::Create_function_returnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_package_stmt(HqlsqlParser::Create_package_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPackage_spec(HqlsqlParser::Package_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPackage_spec_item(HqlsqlParser::Package_spec_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_package_body_stmt(HqlsqlParser::Create_package_body_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPackage_body(HqlsqlParser::Package_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPackage_body_item(HqlsqlParser::Package_body_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_procedure_stmt(HqlsqlParser::Create_procedure_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_routine_params(HqlsqlParser::Create_routine_paramsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_routine_param_item(HqlsqlParser::Create_routine_param_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_routine_options(HqlsqlParser::Create_routine_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_routine_option(HqlsqlParser::Create_routine_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_table_view_role_index_stmt(HqlsqlParser::Drop_table_view_role_index_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_db_schema_stmt(HqlsqlParser::Drop_db_schema_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_macro_func_stmt(HqlsqlParser::Drop_macro_func_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnd_transaction_stmt(HqlsqlParser::End_transaction_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExec_stmt(HqlsqlParser::Exec_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_stmt(HqlsqlParser::If_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_plsql_stmt(HqlsqlParser::If_plsql_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_tsql_stmt(HqlsqlParser::If_tsql_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_bteq_stmt(HqlsqlParser::If_bteq_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElseif_block(HqlsqlParser::Elseif_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElse_block(HqlsqlParser::Else_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInclude_stmt(HqlsqlParser::Include_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLoad_file_stmt(HqlsqlParser::Load_file_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsert_stmt(HqlsqlParser::Insert_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsert_into_table_from_sql(HqlsqlParser::Insert_into_table_from_sqlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsert_into_tables_from_query(HqlsqlParser::Insert_into_tables_from_queryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsert_tables_overwrite_into(HqlsqlParser::Insert_tables_overwrite_intoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsert_into_files_from_query(HqlsqlParser::Insert_into_files_from_queryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsert_into_mutiples(HqlsqlParser::Insert_into_mutiplesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsert_stmt_cols(HqlsqlParser::Insert_stmt_colsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsert_stmt_rows(HqlsqlParser::Insert_stmt_rowsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsert_stmt_row(HqlsqlParser::Insert_stmt_rowContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsert_directory_stmt(HqlsqlParser::Insert_directory_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExit_stmt(HqlsqlParser::Exit_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGet_diag_stmt(HqlsqlParser::Get_diag_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGet_diag_stmt_item(HqlsqlParser::Get_diag_stmt_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGet_diag_stmt_exception_item(HqlsqlParser::Get_diag_stmt_exception_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGet_diag_stmt_rowcount_item(HqlsqlParser::Get_diag_stmt_rowcount_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLeave_stmt(HqlsqlParser::Leave_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMap_object_stmt(HqlsqlParser::Map_object_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOpen_stmt(HqlsqlParser::Open_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFetch_stmt(HqlsqlParser::Fetch_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCollect_stats_stmt(HqlsqlParser::Collect_stats_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCollect_stats_clause(HqlsqlParser::Collect_stats_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClose_stmt(HqlsqlParser::Close_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCmp_stmt(HqlsqlParser::Cmp_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCmp_source(HqlsqlParser::Cmp_sourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCopy_from_local_stmt(HqlsqlParser::Copy_from_local_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCopy_stmt(HqlsqlParser::Copy_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCopy_source(HqlsqlParser::Copy_sourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCopy_target(HqlsqlParser::Copy_targetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCopy_option(HqlsqlParser::Copy_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCopy_file_option(HqlsqlParser::Copy_file_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCommit_stmt(HqlsqlParser::Commit_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_index_stmt(HqlsqlParser::Create_index_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_index_col(HqlsqlParser::Create_index_colContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex_storage_clause(HqlsqlParser::Index_storage_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex_mssql_storage_clause(HqlsqlParser::Index_mssql_storage_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrint_stmt(HqlsqlParser::Print_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQuit_stmt(HqlsqlParser::Quit_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRaise_stmt(HqlsqlParser::Raise_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitResignal_stmt(HqlsqlParser::Resignal_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturn_stmt(HqlsqlParser::Return_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRollback_stmt(HqlsqlParser::Rollback_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSet_session_option(HqlsqlParser::Set_session_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSet_current_schema_option(HqlsqlParser::Set_current_schema_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSet_mssql_session_option(HqlsqlParser::Set_mssql_session_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSet_teradata_session_option(HqlsqlParser::Set_teradata_session_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSignal_stmt(HqlsqlParser::Signal_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSummary_stmt(HqlsqlParser::Summary_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTruncate_table_stmt(HqlsqlParser::Truncate_table_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartition_assignment_list(HqlsqlParser::Partition_assignment_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartition_spec(HqlsqlParser::Partition_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUse_stmt(HqlsqlParser::Use_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValues_into_stmt(HqlsqlParser::Values_into_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhile_stmt(HqlsqlParser::While_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFor_cursor_stmt(HqlsqlParser::For_cursor_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFor_range_stmt(HqlsqlParser::For_range_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLabel(HqlsqlParser::LabelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLabel_pattern(HqlsqlParser::Label_patternContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUsing_clause(HqlsqlParser::Using_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelect_stmt(HqlsqlParser::Select_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCte_select_stmt(HqlsqlParser::Cte_select_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCommon_table_expression(HqlsqlParser::Common_table_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCte_select_cols(HqlsqlParser::Cte_select_colsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCte_select_col(HqlsqlParser::Cte_select_colContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFullselect_stmt(HqlsqlParser::Fullselect_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFullselect_stmt_item(HqlsqlParser::Fullselect_stmt_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFullselect_set_clause(HqlsqlParser::Fullselect_set_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubselect_stmt(HqlsqlParser::Subselect_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelect_list(HqlsqlParser::Select_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelect_list_set(HqlsqlParser::Select_list_setContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelect_list_limit(HqlsqlParser::Select_list_limitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelect_list_item(HqlsqlParser::Select_list_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelect_list_item_normal(HqlsqlParser::Select_list_item_normalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelect_list_item_asterisk(HqlsqlParser::Select_list_item_asteriskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelect_list_use_option(HqlsqlParser::Select_list_use_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFrom_clause(HqlsqlParser::From_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFrom_table_clause(HqlsqlParser::From_table_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFrom_table_name_clause(HqlsqlParser::From_table_name_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFrom_table_clause_option(HqlsqlParser::From_table_clause_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLateral_view(HqlsqlParser::Lateral_viewContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_sample_clause(HqlsqlParser::Table_sample_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_sampling(HqlsqlParser::Table_samplingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock_sampling(HqlsqlParser::Block_samplingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock_sampling_option(HqlsqlParser::Block_sampling_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumbers(HqlsqlParser::NumbersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSize_types(HqlsqlParser::Size_typesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFrom_subselect_clause(HqlsqlParser::From_subselect_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFrom_join_clause(HqlsqlParser::From_join_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFrom_join_type_clause(HqlsqlParser::From_join_type_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFrom_alias_clause(HqlsqlParser::From_alias_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOn_condition(HqlsqlParser::On_conditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_name(HqlsqlParser::Table_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitView_name(HqlsqlParser::View_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDb_name(HqlsqlParser::Db_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelect_option(HqlsqlParser::Select_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWindow_clause(HqlsqlParser::Window_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhere_clause(HqlsqlParser::Where_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGroup_by_clause(HqlsqlParser::Group_by_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHaving_clause(HqlsqlParser::Having_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLimit_clause(HqlsqlParser::Limit_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOrder_by_clause(HqlsqlParser::Order_by_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOrder_by_clause_option(HqlsqlParser::Order_by_clause_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCol_order(HqlsqlParser::Col_orderContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCol_null_order(HqlsqlParser::Col_null_orderContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCluster_by_clause(HqlsqlParser::Cluster_by_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUpdate_stmt(HqlsqlParser::Update_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUpdate_assignment(HqlsqlParser::Update_assignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUpdate_upsert(HqlsqlParser::Update_upsertContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMerge_stmt(HqlsqlParser::Merge_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMerge_table(HqlsqlParser::Merge_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMerge_condition(HqlsqlParser::Merge_conditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMerge_action(HqlsqlParser::Merge_actionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAnalyze_table_stmt(HqlsqlParser::Analyze_table_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDelete_stmt(HqlsqlParser::Delete_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDelete_alias(HqlsqlParser::Delete_aliasContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDesc_db_schema(HqlsqlParser::Desc_db_schemaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDesc_table_view_column(HqlsqlParser::Desc_table_view_columnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBool_expr(HqlsqlParser::Bool_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBool_expr_atom(HqlsqlParser::Bool_expr_atomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBool_expr_unary(HqlsqlParser::Bool_expr_unaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBool_expr_single_in(HqlsqlParser::Bool_expr_single_inContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBool_expr_multi_in(HqlsqlParser::Bool_expr_multi_inContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParen_expr_list(HqlsqlParser::Paren_expr_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_list(HqlsqlParser::Expr_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBool_expr_binary(HqlsqlParser::Bool_expr_binaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBool_expr_logical_operator(HqlsqlParser::Bool_expr_logical_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBool_expr_binary_operator(HqlsqlParser::Bool_expr_binary_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr(HqlsqlParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_unary(HqlsqlParser::Expr_unaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_atom(HqlsqlParser::Expr_atomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_interval(HqlsqlParser::Expr_intervalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterval_item(HqlsqlParser::Interval_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_concat(HqlsqlParser::Expr_concatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_concat_item(HqlsqlParser::Expr_concat_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_case(HqlsqlParser::Expr_caseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_case_simple(HqlsqlParser::Expr_case_simpleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_case_searched(HqlsqlParser::Expr_case_searchedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_cursor_attribute(HqlsqlParser::Expr_cursor_attributeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_agg_window_func(HqlsqlParser::Expr_agg_window_funcContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_func_all_distinct(HqlsqlParser::Expr_func_all_distinctContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_func_over_clause(HqlsqlParser::Expr_func_over_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_func_over_clause_options(HqlsqlParser::Expr_func_over_clause_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_func_partition_by_clause(HqlsqlParser::Expr_func_partition_by_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc_partition_clause_option(HqlsqlParser::Func_partition_clause_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc_partition_clause_part(HqlsqlParser::Func_partition_clause_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_spec_func(HqlsqlParser::Expr_spec_funcContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_func(HqlsqlParser::Expr_funcContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_func_params(HqlsqlParser::Expr_func_paramsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc_param(HqlsqlParser::Func_paramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_select(HqlsqlParser::Expr_selectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_file(HqlsqlParser::Expr_fileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHive(HqlsqlParser::HiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHive_item(HqlsqlParser::Hive_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHost(HqlsqlParser::HostContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHost_cmd(HqlsqlParser::Host_cmdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHost_stmt(HqlsqlParser::Host_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFile_name(HqlsqlParser::File_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFile_pattern(HqlsqlParser::File_patternContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDate_literal(HqlsqlParser::Date_literalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTimestamp_literal(HqlsqlParser::Timestamp_literalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdent(HqlsqlParser::IdentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSingle_quotedString(HqlsqlParser::Single_quotedStringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDouble_quotedString(HqlsqlParser::Double_quotedStringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInt_number(HqlsqlParser::Int_numberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDec_number(HqlsqlParser::Dec_numberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBool_literal(HqlsqlParser::Bool_literalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNull_const(HqlsqlParser::Null_constContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNon_reserved_words(HqlsqlParser::Non_reserved_wordsContext *ctx) override {
    return visitChildren(ctx);
  }


};


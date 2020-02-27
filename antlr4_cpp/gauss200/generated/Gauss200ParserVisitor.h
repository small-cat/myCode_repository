
// Generated from /home/jona/myGit/myCode_repository/antlr4_cpp/gauss200/Gauss200Parser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "Gauss200Parser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by Gauss200Parser.
 */
class  Gauss200ParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by Gauss200Parser.
   */
    virtual antlrcpp::Any visitStmtblock(Gauss200Parser::StmtblockContext *context) = 0;

    virtual antlrcpp::Any visitStmtmulti(Gauss200Parser::StmtmultiContext *context) = 0;

    virtual antlrcpp::Any visitSql_stmt(Gauss200Parser::Sql_stmtContext *context) = 0;

    virtual antlrcpp::Any visitStmt(Gauss200Parser::StmtContext *context) = 0;

    virtual antlrcpp::Any visitOther_stmt(Gauss200Parser::Other_stmtContext *context) = 0;

    virtual antlrcpp::Any visitBegin_stmt(Gauss200Parser::Begin_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAbort_stmt(Gauss200Parser::Abort_stmtContext *context) = 0;

    virtual antlrcpp::Any visitWork_transaction(Gauss200Parser::Work_transactionContext *context) = 0;

    virtual antlrcpp::Any visitAlter_group_mapping_stmt(Gauss200Parser::Alter_group_mapping_stmtContext *context) = 0;

    virtual antlrcpp::Any visitApp_name(Gauss200Parser::App_nameContext *context) = 0;

    virtual antlrcpp::Any visitParen_assignment_stmt_list(Gauss200Parser::Paren_assignment_stmt_listContext *context) = 0;

    virtual antlrcpp::Any visitAssignment_stmt_list(Gauss200Parser::Assignment_stmt_listContext *context) = 0;

    virtual antlrcpp::Any visitAssignment_stmt(Gauss200Parser::Assignment_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAssignment_value(Gauss200Parser::Assignment_valueContext *context) = 0;

    virtual antlrcpp::Any visitAlter_database_stmt(Gauss200Parser::Alter_database_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDatabase_name(Gauss200Parser::Database_nameContext *context) = 0;

    virtual antlrcpp::Any visitAlter_database_option(Gauss200Parser::Alter_database_optionContext *context) = 0;

    virtual antlrcpp::Any visitConnection_limit(Gauss200Parser::Connection_limitContext *context) = 0;

    virtual antlrcpp::Any visitInteger(Gauss200Parser::IntegerContext *context) = 0;

    virtual antlrcpp::Any visitRename_owner_to_option(Gauss200Parser::Rename_owner_to_optionContext *context) = 0;

    virtual antlrcpp::Any visitRename_to_option(Gauss200Parser::Rename_to_optionContext *context) = 0;

    virtual antlrcpp::Any visitOwner_to_option(Gauss200Parser::Owner_to_optionContext *context) = 0;

    virtual antlrcpp::Any visitNew_name(Gauss200Parser::New_nameContext *context) = 0;

    virtual antlrcpp::Any visitSet_configuration_param(Gauss200Parser::Set_configuration_paramContext *context) = 0;

    virtual antlrcpp::Any visitConfiguration_param_value(Gauss200Parser::Configuration_param_valueContext *context) = 0;

    virtual antlrcpp::Any visitReset_configuration_param(Gauss200Parser::Reset_configuration_paramContext *context) = 0;

    virtual antlrcpp::Any visitConfiguration_param(Gauss200Parser::Configuration_paramContext *context) = 0;

    virtual antlrcpp::Any visitAlter_data_source_stmt(Gauss200Parser::Alter_data_source_stmtContext *context) = 0;

    virtual antlrcpp::Any visitSrc_name(Gauss200Parser::Src_nameContext *context) = 0;

    virtual antlrcpp::Any visitAlter_data_src_option(Gauss200Parser::Alter_data_src_optionContext *context) = 0;

    virtual antlrcpp::Any visitData_src_type_version_option(Gauss200Parser::Data_src_type_version_optionContext *context) = 0;

    virtual antlrcpp::Any visitAlter_property_options(Gauss200Parser::Alter_property_optionsContext *context) = 0;

    virtual antlrcpp::Any visitAlter_property_option(Gauss200Parser::Alter_property_optionContext *context) = 0;

    virtual antlrcpp::Any visitOptname(Gauss200Parser::OptnameContext *context) = 0;

    virtual antlrcpp::Any visitAlter_default_privilege_stmt(Gauss200Parser::Alter_default_privilege_stmtContext *context) = 0;

    virtual antlrcpp::Any visitTarget_role_list(Gauss200Parser::Target_role_listContext *context) = 0;

    virtual antlrcpp::Any visitTarget_role(Gauss200Parser::Target_roleContext *context) = 0;

    virtual antlrcpp::Any visitSchema_name_list(Gauss200Parser::Schema_name_listContext *context) = 0;

    virtual antlrcpp::Any visitSchema_name(Gauss200Parser::Schema_nameContext *context) = 0;

    virtual antlrcpp::Any visitAbbreviated_grant_or_revoke(Gauss200Parser::Abbreviated_grant_or_revokeContext *context) = 0;

    virtual antlrcpp::Any visitGrant_on_tables_clause(Gauss200Parser::Grant_on_tables_clauseContext *context) = 0;

    virtual antlrcpp::Any visitAll_privileges(Gauss200Parser::All_privilegesContext *context) = 0;

    virtual antlrcpp::Any visitTable_privileges(Gauss200Parser::Table_privilegesContext *context) = 0;

    virtual antlrcpp::Any visitTable_privilege(Gauss200Parser::Table_privilegeContext *context) = 0;

    virtual antlrcpp::Any visitGrant_revoke_objects(Gauss200Parser::Grant_revoke_objectsContext *context) = 0;

    virtual antlrcpp::Any visitGrant_revoke_obj(Gauss200Parser::Grant_revoke_objContext *context) = 0;

    virtual antlrcpp::Any visitRole_name(Gauss200Parser::Role_nameContext *context) = 0;

    virtual antlrcpp::Any visitWith_grant_option(Gauss200Parser::With_grant_optionContext *context) = 0;

    virtual antlrcpp::Any visitGrant_on_functions_clause(Gauss200Parser::Grant_on_functions_clauseContext *context) = 0;

    virtual antlrcpp::Any visitFunction_privilege(Gauss200Parser::Function_privilegeContext *context) = 0;

    virtual antlrcpp::Any visitGrant_on_types_clause(Gauss200Parser::Grant_on_types_clauseContext *context) = 0;

    virtual antlrcpp::Any visitType_privilege(Gauss200Parser::Type_privilegeContext *context) = 0;

    virtual antlrcpp::Any visitRevoke_on_tables_clause(Gauss200Parser::Revoke_on_tables_clauseContext *context) = 0;

    virtual antlrcpp::Any visitGrant_option_for(Gauss200Parser::Grant_option_forContext *context) = 0;

    virtual antlrcpp::Any visitCascade_restrict(Gauss200Parser::Cascade_restrictContext *context) = 0;

    virtual antlrcpp::Any visitRevoke_on_functions_clause(Gauss200Parser::Revoke_on_functions_clauseContext *context) = 0;

    virtual antlrcpp::Any visitRevoke_on_types_clause(Gauss200Parser::Revoke_on_types_clauseContext *context) = 0;

    virtual antlrcpp::Any visitAlter_directory_stmt(Gauss200Parser::Alter_directory_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDirectory_name(Gauss200Parser::Directory_nameContext *context) = 0;

    virtual antlrcpp::Any visitAlter_foreign_table_stmt(Gauss200Parser::Alter_foreign_table_stmtContext *context) = 0;

    virtual antlrcpp::Any visitIf_exists_or_not(Gauss200Parser::If_exists_or_notContext *context) = 0;

    virtual antlrcpp::Any visitTable_name(Gauss200Parser::Table_nameContext *context) = 0;

    virtual antlrcpp::Any visitAttr(Gauss200Parser::AttrContext *context) = 0;

    virtual antlrcpp::Any visitAlter_foreign_table_option(Gauss200Parser::Alter_foreign_table_optionContext *context) = 0;

    virtual antlrcpp::Any visitAlter_foreign_table_action_list(Gauss200Parser::Alter_foreign_table_action_listContext *context) = 0;

    virtual antlrcpp::Any visitAlter_foreign_table_action(Gauss200Parser::Alter_foreign_table_actionContext *context) = 0;

    virtual antlrcpp::Any visitColumn_name(Gauss200Parser::Column_nameContext *context) = 0;

    virtual antlrcpp::Any visitAlter_foreign_table_action_option(Gauss200Parser::Alter_foreign_table_action_optionContext *context) = 0;

    virtual antlrcpp::Any visitAlter_set_statistics_option(Gauss200Parser::Alter_set_statistics_optionContext *context) = 0;

    virtual antlrcpp::Any visitAlter_add_information_constraint(Gauss200Parser::Alter_add_information_constraintContext *context) = 0;

    virtual antlrcpp::Any visitColumn_constraint_primary_unique(Gauss200Parser::Column_constraint_primary_uniqueContext *context) = 0;

    virtual antlrcpp::Any visitConstraint_name(Gauss200Parser::Constraint_nameContext *context) = 0;

    virtual antlrcpp::Any visitAdd_info_constraint_option(Gauss200Parser::Add_info_constraint_optionContext *context) = 0;

    virtual antlrcpp::Any visitAlter_drop_information_constraint(Gauss200Parser::Alter_drop_information_constraintContext *context) = 0;

    virtual antlrcpp::Any visitAlter_function_stmt(Gauss200Parser::Alter_function_stmtContext *context) = 0;

    virtual antlrcpp::Any visitFunction_with_argtypes(Gauss200Parser::Function_with_argtypesContext *context) = 0;

    virtual antlrcpp::Any visitFunc_args(Gauss200Parser::Func_argsContext *context) = 0;

    virtual antlrcpp::Any visitFunc_args_list(Gauss200Parser::Func_args_listContext *context) = 0;

    virtual antlrcpp::Any visitFunc_arg(Gauss200Parser::Func_argContext *context) = 0;

    virtual antlrcpp::Any visitArgmode(Gauss200Parser::ArgmodeContext *context) = 0;

    virtual antlrcpp::Any visitParam_name(Gauss200Parser::Param_nameContext *context) = 0;

    virtual antlrcpp::Any visitAlter_func_option(Gauss200Parser::Alter_func_optionContext *context) = 0;

    virtual antlrcpp::Any visitAlter_function_action(Gauss200Parser::Alter_function_actionContext *context) = 0;

    virtual antlrcpp::Any visitAlter_set_schema(Gauss200Parser::Alter_set_schemaContext *context) = 0;

    virtual antlrcpp::Any visitAlter_group_stmt(Gauss200Parser::Alter_group_stmtContext *context) = 0;

    virtual antlrcpp::Any visitGroup_name(Gauss200Parser::Group_nameContext *context) = 0;

    virtual antlrcpp::Any visitAlter_group_option(Gauss200Parser::Alter_group_optionContext *context) = 0;

    virtual antlrcpp::Any visitUser_name_list(Gauss200Parser::User_name_listContext *context) = 0;

    virtual antlrcpp::Any visitUser_name(Gauss200Parser::User_nameContext *context) = 0;

    virtual antlrcpp::Any visitAlter_index_stmt(Gauss200Parser::Alter_index_stmtContext *context) = 0;

    virtual antlrcpp::Any visitIndex_name(Gauss200Parser::Index_nameContext *context) = 0;

    virtual antlrcpp::Any visitAlter_index_option(Gauss200Parser::Alter_index_optionContext *context) = 0;

    virtual antlrcpp::Any visitSet_tablespace_option(Gauss200Parser::Set_tablespace_optionContext *context) = 0;

    virtual antlrcpp::Any visitTablespace_name_option(Gauss200Parser::Tablespace_name_optionContext *context) = 0;

    virtual antlrcpp::Any visitSet_assignment_list(Gauss200Parser::Set_assignment_listContext *context) = 0;

    virtual antlrcpp::Any visitReset_param_list(Gauss200Parser::Reset_param_listContext *context) = 0;

    virtual antlrcpp::Any visitTablespace_name(Gauss200Parser::Tablespace_nameContext *context) = 0;

    virtual antlrcpp::Any visitParameter_list(Gauss200Parser::Parameter_listContext *context) = 0;

    virtual antlrcpp::Any visitParameter_name(Gauss200Parser::Parameter_nameContext *context) = 0;

    virtual antlrcpp::Any visitPartition_name(Gauss200Parser::Partition_nameContext *context) = 0;

    virtual antlrcpp::Any visitAlter_large_obj_stmt(Gauss200Parser::Alter_large_obj_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAlter_node_stmt(Gauss200Parser::Alter_node_stmtContext *context) = 0;

    virtual antlrcpp::Any visitNodename(Gauss200Parser::NodenameContext *context) = 0;

    virtual antlrcpp::Any visitParen_node_list(Gauss200Parser::Paren_node_listContext *context) = 0;

    virtual antlrcpp::Any visitNode_list(Gauss200Parser::Node_listContext *context) = 0;

    virtual antlrcpp::Any visitAlter_node_option(Gauss200Parser::Alter_node_optionContext *context) = 0;

    virtual antlrcpp::Any visitAlter_node_group_stmt(Gauss200Parser::Alter_node_group_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAlter_node_group_option(Gauss200Parser::Alter_node_group_optionContext *context) = 0;

    virtual antlrcpp::Any visitAdd_node_list(Gauss200Parser::Add_node_listContext *context) = 0;

    virtual antlrcpp::Any visitDelete_node_list(Gauss200Parser::Delete_node_listContext *context) = 0;

    virtual antlrcpp::Any visitAlter_resource_pool_stmt(Gauss200Parser::Alter_resource_pool_stmtContext *context) = 0;

    virtual antlrcpp::Any visitPool_name(Gauss200Parser::Pool_nameContext *context) = 0;

    virtual antlrcpp::Any visitAlter_role_stmt(Gauss200Parser::Alter_role_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAlter_role_option(Gauss200Parser::Alter_role_optionContext *context) = 0;

    virtual antlrcpp::Any visitRole_option_common(Gauss200Parser::Role_option_commonContext *context) = 0;

    virtual antlrcpp::Any visitAlter_role_with_option(Gauss200Parser::Alter_role_with_optionContext *context) = 0;

    virtual antlrcpp::Any visitAlter_role_encrypt_option(Gauss200Parser::Alter_role_encrypt_optionContext *context) = 0;

    virtual antlrcpp::Any visitLogic_cluster_name(Gauss200Parser::Logic_cluster_nameContext *context) = 0;

    virtual antlrcpp::Any visitAlter_role_level_security_policy_stmt(Gauss200Parser::Alter_role_level_security_policy_stmtContext *context) = 0;

    virtual antlrcpp::Any visitRow_level_security(Gauss200Parser::Row_level_securityContext *context) = 0;

    virtual antlrcpp::Any visitPolicy_name(Gauss200Parser::Policy_nameContext *context) = 0;

    virtual antlrcpp::Any visitAlter_role_level_security_policy_option(Gauss200Parser::Alter_role_level_security_policy_optionContext *context) = 0;

    virtual antlrcpp::Any visitUsing_expr_option(Gauss200Parser::Using_expr_optionContext *context) = 0;

    virtual antlrcpp::Any visitAlter_schema_stmt(Gauss200Parser::Alter_schema_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAlter_sequence_stmt(Gauss200Parser::Alter_sequence_stmtContext *context) = 0;

    virtual antlrcpp::Any visitSequence_name(Gauss200Parser::Sequence_nameContext *context) = 0;

    virtual antlrcpp::Any visitAlter_seq_option(Gauss200Parser::Alter_seq_optionContext *context) = 0;

    virtual antlrcpp::Any visitAlter_server_stmt(Gauss200Parser::Alter_server_stmtContext *context) = 0;

    virtual antlrcpp::Any visitServer_name(Gauss200Parser::Server_nameContext *context) = 0;

    virtual antlrcpp::Any visitAlter_server_option(Gauss200Parser::Alter_server_optionContext *context) = 0;

    virtual antlrcpp::Any visitAlter_session_stmt(Gauss200Parser::Alter_session_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAlter_session_option(Gauss200Parser::Alter_session_optionContext *context) = 0;

    virtual antlrcpp::Any visitAlter_session_transaction_param_list(Gauss200Parser::Alter_session_transaction_param_listContext *context) = 0;

    virtual antlrcpp::Any visitAlter_session_transaction_param(Gauss200Parser::Alter_session_transaction_paramContext *context) = 0;

    virtual antlrcpp::Any visitAlter_session_runtime_param(Gauss200Parser::Alter_session_runtime_paramContext *context) = 0;

    virtual antlrcpp::Any visitExpr_default(Gauss200Parser::Expr_defaultContext *context) = 0;

    virtual antlrcpp::Any visitEncoding_name(Gauss200Parser::Encoding_nameContext *context) = 0;

    virtual antlrcpp::Any visitAlter_sys_kill_session_stmt(Gauss200Parser::Alter_sys_kill_session_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAlter_table_stmt(Gauss200Parser::Alter_table_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAlter_table_name(Gauss200Parser::Alter_table_nameContext *context) = 0;

    virtual antlrcpp::Any visitAlter_table_stmt_option(Gauss200Parser::Alter_table_stmt_optionContext *context) = 0;

    virtual antlrcpp::Any visitAlter_table_option(Gauss200Parser::Alter_table_optionContext *context) = 0;

    virtual antlrcpp::Any visitAlter_table_action_list(Gauss200Parser::Alter_table_action_listContext *context) = 0;

    virtual antlrcpp::Any visitAlter_table_action(Gauss200Parser::Alter_table_actionContext *context) = 0;

    virtual antlrcpp::Any visitColumn_clause(Gauss200Parser::Column_clauseContext *context) = 0;

    virtual antlrcpp::Any visitColumn_clause_add_column_option(Gauss200Parser::Column_clause_add_column_optionContext *context) = 0;

    virtual antlrcpp::Any visitColumn_with_type(Gauss200Parser::Column_with_typeContext *context) = 0;

    virtual antlrcpp::Any visitCompress_type(Gauss200Parser::Compress_typeContext *context) = 0;

    virtual antlrcpp::Any visitCollate_option(Gauss200Parser::Collate_optionContext *context) = 0;

    virtual antlrcpp::Any visitCollation(Gauss200Parser::CollationContext *context) = 0;

    virtual antlrcpp::Any visitAlter_table_column_constraint(Gauss200Parser::Alter_table_column_constraintContext *context) = 0;

    virtual antlrcpp::Any visitColumn_constraint_option(Gauss200Parser::Column_constraint_optionContext *context) = 0;

    virtual antlrcpp::Any visitColumn_clause_alter_column_option(Gauss200Parser::Column_clause_alter_column_optionContext *context) = 0;

    virtual antlrcpp::Any visitAlter_table_constraint(Gauss200Parser::Alter_table_constraintContext *context) = 0;

    virtual antlrcpp::Any visitAlter_table_constraint_option(Gauss200Parser::Alter_table_constraint_optionContext *context) = 0;

    virtual antlrcpp::Any visitParen_column_list(Gauss200Parser::Paren_column_listContext *context) = 0;

    virtual antlrcpp::Any visitIndex_parameters(Gauss200Parser::Index_parametersContext *context) = 0;

    virtual antlrcpp::Any visitTable_constraint_deferrable(Gauss200Parser::Table_constraint_deferrableContext *context) = 0;

    virtual antlrcpp::Any visitTable_constraint_using_index(Gauss200Parser::Table_constraint_using_indexContext *context) = 0;

    virtual antlrcpp::Any visitTrigger_name(Gauss200Parser::Trigger_nameContext *context) = 0;

    virtual antlrcpp::Any visitAlter_table_partition_option(Gauss200Parser::Alter_table_partition_optionContext *context) = 0;

    virtual antlrcpp::Any visitAlter_table_partition_action(Gauss200Parser::Alter_table_partition_actionContext *context) = 0;

    virtual antlrcpp::Any visitMove_clause(Gauss200Parser::Move_clauseContext *context) = 0;

    virtual antlrcpp::Any visitParen_partition_value_list(Gauss200Parser::Paren_partition_value_listContext *context) = 0;

    virtual antlrcpp::Any visitParen_partition_value(Gauss200Parser::Paren_partition_valueContext *context) = 0;

    virtual antlrcpp::Any visitPartition_value(Gauss200Parser::Partition_valueContext *context) = 0;

    virtual antlrcpp::Any visitExchange_clause(Gauss200Parser::Exchange_clauseContext *context) = 0;

    virtual antlrcpp::Any visitRow_clause(Gauss200Parser::Row_clauseContext *context) = 0;

    virtual antlrcpp::Any visitMerge_clause(Gauss200Parser::Merge_clauseContext *context) = 0;

    virtual antlrcpp::Any visitModify_clause(Gauss200Parser::Modify_clauseContext *context) = 0;

    virtual antlrcpp::Any visitSplit_clause(Gauss200Parser::Split_clauseContext *context) = 0;

    virtual antlrcpp::Any visitSplit_point_clause(Gauss200Parser::Split_point_clauseContext *context) = 0;

    virtual antlrcpp::Any visitSplit_point_clause_option(Gauss200Parser::Split_point_clause_optionContext *context) = 0;

    virtual antlrcpp::Any visitNo_split_point_clause(Gauss200Parser::No_split_point_clauseContext *context) = 0;

    virtual antlrcpp::Any visitPartition_item_list(Gauss200Parser::Partition_item_listContext *context) = 0;

    virtual antlrcpp::Any visitPartition_item(Gauss200Parser::Partition_itemContext *context) = 0;

    virtual antlrcpp::Any visitPartition_less_than_item(Gauss200Parser::Partition_less_than_itemContext *context) = 0;

    virtual antlrcpp::Any visitPartition_start_end_item(Gauss200Parser::Partition_start_end_itemContext *context) = 0;

    virtual antlrcpp::Any visitPartition_start_end_item_option(Gauss200Parser::Partition_start_end_item_optionContext *context) = 0;

    virtual antlrcpp::Any visitAdd_clause(Gauss200Parser::Add_clauseContext *context) = 0;

    virtual antlrcpp::Any visitDrop_clause(Gauss200Parser::Drop_clauseContext *context) = 0;

    virtual antlrcpp::Any visitAlter_tablespace_stmt(Gauss200Parser::Alter_tablespace_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAlter_tablespace_option(Gauss200Parser::Alter_tablespace_optionContext *context) = 0;

    virtual antlrcpp::Any visitAlter_txt_search_conf_stmt(Gauss200Parser::Alter_txt_search_conf_stmtContext *context) = 0;

    virtual antlrcpp::Any visitConfiguration_name(Gauss200Parser::Configuration_nameContext *context) = 0;

    virtual antlrcpp::Any visitAlter_txt_search_conf_option(Gauss200Parser::Alter_txt_search_conf_optionContext *context) = 0;

    virtual antlrcpp::Any visitToken_type_list(Gauss200Parser::Token_type_listContext *context) = 0;

    virtual antlrcpp::Any visitToken_type(Gauss200Parser::Token_typeContext *context) = 0;

    virtual antlrcpp::Any visitDictionary_name_list(Gauss200Parser::Dictionary_name_listContext *context) = 0;

    virtual antlrcpp::Any visitDictionary_name(Gauss200Parser::Dictionary_nameContext *context) = 0;

    virtual antlrcpp::Any visitAlter_txt_search_dictionary_stmt(Gauss200Parser::Alter_txt_search_dictionary_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAlter_txt_search_dictionary_option(Gauss200Parser::Alter_txt_search_dictionary_optionContext *context) = 0;

    virtual antlrcpp::Any visitAlter_trigger_stmt(Gauss200Parser::Alter_trigger_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAlter_type_stmt(Gauss200Parser::Alter_type_stmtContext *context) = 0;

    virtual antlrcpp::Any visitType_name(Gauss200Parser::Type_nameContext *context) = 0;

    virtual antlrcpp::Any visitAlter_type_option(Gauss200Parser::Alter_type_optionContext *context) = 0;

    virtual antlrcpp::Any visitAlter_type_action_list(Gauss200Parser::Alter_type_action_listContext *context) = 0;

    virtual antlrcpp::Any visitAlter_type_action(Gauss200Parser::Alter_type_actionContext *context) = 0;

    virtual antlrcpp::Any visitAttr_name(Gauss200Parser::Attr_nameContext *context) = 0;

    virtual antlrcpp::Any visitEnum_value(Gauss200Parser::Enum_valueContext *context) = 0;

    virtual antlrcpp::Any visitAlter_type_add_attr_option(Gauss200Parser::Alter_type_add_attr_optionContext *context) = 0;

    virtual antlrcpp::Any visitAlter_type_drop_attr_option(Gauss200Parser::Alter_type_drop_attr_optionContext *context) = 0;

    virtual antlrcpp::Any visitAlter_type_alter_attr(Gauss200Parser::Alter_type_alter_attrContext *context) = 0;

    virtual antlrcpp::Any visitAlter_user_stmt(Gauss200Parser::Alter_user_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAlter_user_clause(Gauss200Parser::Alter_user_clauseContext *context) = 0;

    virtual antlrcpp::Any visitAlter_view_stmt(Gauss200Parser::Alter_view_stmtContext *context) = 0;

    virtual antlrcpp::Any visitView_name(Gauss200Parser::View_nameContext *context) = 0;

    virtual antlrcpp::Any visitAlter_view_option(Gauss200Parser::Alter_view_optionContext *context) = 0;

    virtual antlrcpp::Any visitWorkload_group_stmt(Gauss200Parser::Workload_group_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCreate_group_mapping_stmt(Gauss200Parser::Create_group_mapping_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCreate_barrier_stmt(Gauss200Parser::Create_barrier_stmtContext *context) = 0;

    virtual antlrcpp::Any visitBarrier_name(Gauss200Parser::Barrier_nameContext *context) = 0;

    virtual antlrcpp::Any visitCreate_database_stmt(Gauss200Parser::Create_database_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCreate_data_source_stmt(Gauss200Parser::Create_data_source_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCreate_directory_stmt(Gauss200Parser::Create_directory_stmtContext *context) = 0;

    virtual antlrcpp::Any visitOr_replace(Gauss200Parser::Or_replaceContext *context) = 0;

    virtual antlrcpp::Any visitCreate_foreign_table_stmt(Gauss200Parser::Create_foreign_table_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCreate_foreign_table_option(Gauss200Parser::Create_foreign_table_optionContext *context) = 0;

    virtual antlrcpp::Any visitCreate_foreign_table_import_export_option(Gauss200Parser::Create_foreign_table_import_export_optionContext *context) = 0;

    virtual antlrcpp::Any visitForeign_table_import_export_column_type_list(Gauss200Parser::Foreign_table_import_export_column_type_listContext *context) = 0;

    virtual antlrcpp::Any visitForeign_table_import_export_column_type(Gauss200Parser::Foreign_table_import_export_column_typeContext *context) = 0;

    virtual antlrcpp::Any visitTable_constraint_to_group_node(Gauss200Parser::Table_constraint_to_group_nodeContext *context) = 0;

    virtual antlrcpp::Any visitCreate_foreign_table_on_hadoop_option(Gauss200Parser::Create_foreign_table_on_hadoop_optionContext *context) = 0;

    virtual antlrcpp::Any visitForeign_table_on_hadoop_column_type_list(Gauss200Parser::Foreign_table_on_hadoop_column_type_listContext *context) = 0;

    virtual antlrcpp::Any visitForeign_table_on_hadoop_column_type(Gauss200Parser::Foreign_table_on_hadoop_column_typeContext *context) = 0;

    virtual antlrcpp::Any visitCreate_foreign_table_column_constraint(Gauss200Parser::Create_foreign_table_column_constraintContext *context) = 0;

    virtual antlrcpp::Any visitCreate_function_procedure_stmt(Gauss200Parser::Create_function_procedure_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCreate_function_procedure_clause(Gauss200Parser::Create_function_procedure_clauseContext *context) = 0;

    virtual antlrcpp::Any visitCreate_func_arg_list(Gauss200Parser::Create_func_arg_listContext *context) = 0;

    virtual antlrcpp::Any visitCreate_func_arg(Gauss200Parser::Create_func_argContext *context) = 0;

    virtual antlrcpp::Any visitFunc_return_type(Gauss200Parser::Func_return_typeContext *context) = 0;

    virtual antlrcpp::Any visitLang_name(Gauss200Parser::Lang_nameContext *context) = 0;

    virtual antlrcpp::Any visitCreate_func_procedure_as_option(Gauss200Parser::Create_func_procedure_as_optionContext *context) = 0;

    virtual antlrcpp::Any visitPlsqlbody(Gauss200Parser::PlsqlbodyContext *context) = 0;

    virtual antlrcpp::Any visitVariable_declarations(Gauss200Parser::Variable_declarationsContext *context) = 0;

    virtual antlrcpp::Any visitVariable_declaration(Gauss200Parser::Variable_declarationContext *context) = 0;

    virtual antlrcpp::Any visitDefault_value_part(Gauss200Parser::Default_value_partContext *context) = 0;

    virtual antlrcpp::Any visitCursor_declaration(Gauss200Parser::Cursor_declarationContext *context) = 0;

    virtual antlrcpp::Any visitParameter_spec(Gauss200Parser::Parameter_specContext *context) = 0;

    virtual antlrcpp::Any visitSequence_of_statements(Gauss200Parser::Sequence_of_statementsContext *context) = 0;

    virtual antlrcpp::Any visitSequence_of_statement(Gauss200Parser::Sequence_of_statementContext *context) = 0;

    virtual antlrcpp::Any visitCreate_group_stmt(Gauss200Parser::Create_group_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCreate_index_stmt(Gauss200Parser::Create_index_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCreate_index_column_list(Gauss200Parser::Create_index_column_listContext *context) = 0;

    virtual antlrcpp::Any visitCreate_index_column(Gauss200Parser::Create_index_columnContext *context) = 0;

    virtual antlrcpp::Any visitOpclass(Gauss200Parser::OpclassContext *context) = 0;

    virtual antlrcpp::Any visitAsc_desc(Gauss200Parser::Asc_descContext *context) = 0;

    virtual antlrcpp::Any visitNulls_first_last(Gauss200Parser::Nulls_first_lastContext *context) = 0;

    virtual antlrcpp::Any visitCreate_node_stmt(Gauss200Parser::Create_node_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCreate_node_group_stmt(Gauss200Parser::Create_node_group_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCreate_row_level_security_policy_stmt(Gauss200Parser::Create_row_level_security_policy_stmtContext *context) = 0;

    virtual antlrcpp::Any visitRow_level_security_policy_objects(Gauss200Parser::Row_level_security_policy_objectsContext *context) = 0;

    virtual antlrcpp::Any visitRow_level_security_policy_obj(Gauss200Parser::Row_level_security_policy_objContext *context) = 0;

    virtual antlrcpp::Any visitCreate_resource_pool_stmt(Gauss200Parser::Create_resource_pool_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCreate_role_stmt(Gauss200Parser::Create_role_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCreate_role_with_option(Gauss200Parser::Create_role_with_optionContext *context) = 0;

    virtual antlrcpp::Any visitProfile_name(Gauss200Parser::Profile_nameContext *context) = 0;

    virtual antlrcpp::Any visitCreate_schema_stmt(Gauss200Parser::Create_schema_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCreate_schema_option(Gauss200Parser::Create_schema_optionContext *context) = 0;

    virtual antlrcpp::Any visitSchema_element(Gauss200Parser::Schema_elementContext *context) = 0;

    virtual antlrcpp::Any visitCreate_sequence_stmt(Gauss200Parser::Create_sequence_stmtContext *context) = 0;

    virtual antlrcpp::Any visitMinvalue_option(Gauss200Parser::Minvalue_optionContext *context) = 0;

    virtual antlrcpp::Any visitMaxvalue_option(Gauss200Parser::Maxvalue_optionContext *context) = 0;

    virtual antlrcpp::Any visitCreate_server_stmt(Gauss200Parser::Create_server_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCreate_table_stmt(Gauss200Parser::Create_table_stmtContext *context) = 0;

    virtual antlrcpp::Any visitTemporary_temp(Gauss200Parser::Temporary_tempContext *context) = 0;

    virtual antlrcpp::Any visitCreate_table_column_type_option_list(Gauss200Parser::Create_table_column_type_option_listContext *context) = 0;

    virtual antlrcpp::Any visitCreate_table_column_type_option(Gauss200Parser::Create_table_column_type_optionContext *context) = 0;

    virtual antlrcpp::Any visitLike_option(Gauss200Parser::Like_optionContext *context) = 0;

    virtual antlrcpp::Any visitLike_option_other(Gauss200Parser::Like_option_otherContext *context) = 0;

    virtual antlrcpp::Any visitCreate_table_stmt_option(Gauss200Parser::Create_table_stmt_optionContext *context) = 0;

    virtual antlrcpp::Any visitCreate_table_as_option(Gauss200Parser::Create_table_as_optionContext *context) = 0;

    virtual antlrcpp::Any visitPartition_by_option(Gauss200Parser::Partition_by_optionContext *context) = 0;

    virtual antlrcpp::Any visitParen_partition_key(Gauss200Parser::Paren_partition_keyContext *context) = 0;

    virtual antlrcpp::Any visitPartition_key(Gauss200Parser::Partition_keyContext *context) = 0;

    virtual antlrcpp::Any visitCreate_tablespace_stmt(Gauss200Parser::Create_tablespace_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCreate_txt_search_stmt(Gauss200Parser::Create_txt_search_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCreate_trigger_stmt(Gauss200Parser::Create_trigger_stmtContext *context) = 0;

    virtual antlrcpp::Any visitTrigger_type(Gauss200Parser::Trigger_typeContext *context) = 0;

    virtual antlrcpp::Any visitTrigger_event_list(Gauss200Parser::Trigger_event_listContext *context) = 0;

    virtual antlrcpp::Any visitTrigger_event(Gauss200Parser::Trigger_eventContext *context) = 0;

    virtual antlrcpp::Any visitCreate_type_stmt(Gauss200Parser::Create_type_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCreate_type_option(Gauss200Parser::Create_type_optionContext *context) = 0;

    virtual antlrcpp::Any visitCreate_user_stmt(Gauss200Parser::Create_user_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCreate_view_stmt(Gauss200Parser::Create_view_stmtContext *context) = 0;

    virtual antlrcpp::Any visitData_manipulate_stmt(Gauss200Parser::Data_manipulate_stmtContext *context) = 0;

    virtual antlrcpp::Any visitSelect_stmt(Gauss200Parser::Select_stmtContext *context) = 0;

    virtual antlrcpp::Any visitSubquery_basic_elements(Gauss200Parser::Subquery_basic_elementsContext *context) = 0;

    virtual antlrcpp::Any visitSelect_with_parens(Gauss200Parser::Select_with_parensContext *context) = 0;

    virtual antlrcpp::Any visitSubquery_operation_part(Gauss200Parser::Subquery_operation_partContext *context) = 0;

    virtual antlrcpp::Any visitSubquery(Gauss200Parser::SubqueryContext *context) = 0;

    virtual antlrcpp::Any visitSimple_select(Gauss200Parser::Simple_selectContext *context) = 0;

    virtual antlrcpp::Any visitAll_distinct(Gauss200Parser::All_distinctContext *context) = 0;

    virtual antlrcpp::Any visitSelected_list(Gauss200Parser::Selected_listContext *context) = 0;

    virtual antlrcpp::Any visitSelected_list_element(Gauss200Parser::Selected_list_elementContext *context) = 0;

    virtual antlrcpp::Any visitInto_clause(Gauss200Parser::Into_clauseContext *context) = 0;

    virtual antlrcpp::Any visitFrom_clause(Gauss200Parser::From_clauseContext *context) = 0;

    virtual antlrcpp::Any visitFrom_list(Gauss200Parser::From_listContext *context) = 0;

    virtual antlrcpp::Any visitTable_ref(Gauss200Parser::Table_refContext *context) = 0;

    virtual antlrcpp::Any visitPartition_clause(Gauss200Parser::Partition_clauseContext *context) = 0;

    virtual antlrcpp::Any visitTable_alias(Gauss200Parser::Table_aliasContext *context) = 0;

    virtual antlrcpp::Any visitTable_sampling_clause(Gauss200Parser::Table_sampling_clauseContext *context) = 0;

    virtual antlrcpp::Any visitSample_method(Gauss200Parser::Sample_methodContext *context) = 0;

    virtual antlrcpp::Any visitJoin_type(Gauss200Parser::Join_typeContext *context) = 0;

    virtual antlrcpp::Any visitUsing_clause(Gauss200Parser::Using_clauseContext *context) = 0;

    virtual antlrcpp::Any visitGroup_by_clause(Gauss200Parser::Group_by_clauseContext *context) = 0;

    virtual antlrcpp::Any visitGrouping_elements(Gauss200Parser::Grouping_elementsContext *context) = 0;

    virtual antlrcpp::Any visitGrouping_element(Gauss200Parser::Grouping_elementContext *context) = 0;

    virtual antlrcpp::Any visitParen_group_element_expr_list(Gauss200Parser::Paren_group_element_expr_listContext *context) = 0;

    virtual antlrcpp::Any visitGroup_element_expr(Gauss200Parser::Group_element_exprContext *context) = 0;

    virtual antlrcpp::Any visitHaving_clause(Gauss200Parser::Having_clauseContext *context) = 0;

    virtual antlrcpp::Any visitWindow_clause(Gauss200Parser::Window_clauseContext *context) = 0;

    virtual antlrcpp::Any visitWindow_clause_options(Gauss200Parser::Window_clause_optionsContext *context) = 0;

    virtual antlrcpp::Any visitWindow_clause_option(Gauss200Parser::Window_clause_optionContext *context) = 0;

    virtual antlrcpp::Any visitWindow_name(Gauss200Parser::Window_nameContext *context) = 0;

    virtual antlrcpp::Any visitWindow_definition(Gauss200Parser::Window_definitionContext *context) = 0;

    virtual antlrcpp::Any visitFrame_clause(Gauss200Parser::Frame_clauseContext *context) = 0;

    virtual antlrcpp::Any visitFrame_start_end(Gauss200Parser::Frame_start_endContext *context) = 0;

    virtual antlrcpp::Any visitOrder_by_clause(Gauss200Parser::Order_by_clauseContext *context) = 0;

    virtual antlrcpp::Any visitOrder_by_clause_options(Gauss200Parser::Order_by_clause_optionsContext *context) = 0;

    virtual antlrcpp::Any visitOrder_by_clause_option(Gauss200Parser::Order_by_clause_optionContext *context) = 0;

    virtual antlrcpp::Any visitOrder_by_clause_expr(Gauss200Parser::Order_by_clause_exprContext *context) = 0;

    virtual antlrcpp::Any visitNlssort_expression_clause(Gauss200Parser::Nlssort_expression_clauseContext *context) = 0;

    virtual antlrcpp::Any visitLimit_clause(Gauss200Parser::Limit_clauseContext *context) = 0;

    virtual antlrcpp::Any visitOffset_clause(Gauss200Parser::Offset_clauseContext *context) = 0;

    virtual antlrcpp::Any visitFetch_clause(Gauss200Parser::Fetch_clauseContext *context) = 0;

    virtual antlrcpp::Any visitFor_update_share_clause(Gauss200Parser::For_update_share_clauseContext *context) = 0;

    virtual antlrcpp::Any visitInsert_stmt(Gauss200Parser::Insert_stmtContext *context) = 0;

    virtual antlrcpp::Any visitInsert_values_option(Gauss200Parser::Insert_values_optionContext *context) = 0;

    virtual antlrcpp::Any visitValues_expression(Gauss200Parser::Values_expressionContext *context) = 0;

    virtual antlrcpp::Any visitUpdate_stmt(Gauss200Parser::Update_stmtContext *context) = 0;

    virtual antlrcpp::Any visitUpdate_set_clause(Gauss200Parser::Update_set_clauseContext *context) = 0;

    virtual antlrcpp::Any visitDelete_stmt(Gauss200Parser::Delete_stmtContext *context) = 0;

    virtual antlrcpp::Any visitWith_clause(Gauss200Parser::With_clauseContext *context) = 0;

    virtual antlrcpp::Any visitWith_query(Gauss200Parser::With_queryContext *context) = 0;

    virtual antlrcpp::Any visitWith_query_name(Gauss200Parser::With_query_nameContext *context) = 0;

    virtual antlrcpp::Any visitAs_alias(Gauss200Parser::As_aliasContext *context) = 0;

    virtual antlrcpp::Any visitAlias_name(Gauss200Parser::Alias_nameContext *context) = 0;

    virtual antlrcpp::Any visitWhere_clause(Gauss200Parser::Where_clauseContext *context) = 0;

    virtual antlrcpp::Any visitReturn_clause(Gauss200Parser::Return_clauseContext *context) = 0;

    virtual antlrcpp::Any visitOutput_expr_alias(Gauss200Parser::Output_expr_aliasContext *context) = 0;

    virtual antlrcpp::Any visitDrop_database_stmt(Gauss200Parser::Drop_database_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDrop_group_mapping_stmt(Gauss200Parser::Drop_group_mapping_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDrop_data_source_stmt(Gauss200Parser::Drop_data_source_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDrop_directory_stmt(Gauss200Parser::Drop_directory_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDrop_foreign_table_stmt(Gauss200Parser::Drop_foreign_table_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDrop_function_stmt(Gauss200Parser::Drop_function_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDrop_group_stmt(Gauss200Parser::Drop_group_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDrop_index_stmt(Gauss200Parser::Drop_index_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDrop_node_stmt(Gauss200Parser::Drop_node_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDrop_node_group_stmt(Gauss200Parser::Drop_node_group_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDrop_owned_stmt(Gauss200Parser::Drop_owned_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDrop_row_level_security_policy_stmt(Gauss200Parser::Drop_row_level_security_policy_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDrop_procedure_stmt(Gauss200Parser::Drop_procedure_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDrop_resource_pool_stmt(Gauss200Parser::Drop_resource_pool_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDrop_role_stmt(Gauss200Parser::Drop_role_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDrop_schema_stmt(Gauss200Parser::Drop_schema_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDrop_sequence_stmt(Gauss200Parser::Drop_sequence_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDrop_name_list(Gauss200Parser::Drop_name_listContext *context) = 0;

    virtual antlrcpp::Any visitDrop_name(Gauss200Parser::Drop_nameContext *context) = 0;

    virtual antlrcpp::Any visitDrop_server_stmt(Gauss200Parser::Drop_server_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDrop_table_stmt(Gauss200Parser::Drop_table_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDrop_tablespace_stmt(Gauss200Parser::Drop_tablespace_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDrop_txt_search_stmt(Gauss200Parser::Drop_txt_search_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDrop_trigger_stmt(Gauss200Parser::Drop_trigger_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDrop_type_stmt(Gauss200Parser::Drop_type_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDrop_user_stmt(Gauss200Parser::Drop_user_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDrop_view_stmt(Gauss200Parser::Drop_view_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDrop_workload_group_stmt(Gauss200Parser::Drop_workload_group_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAnalyze_stmt(Gauss200Parser::Analyze_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAnalyze_keyword(Gauss200Parser::Analyze_keywordContext *context) = 0;

    virtual antlrcpp::Any visitAnalyze_option(Gauss200Parser::Analyze_optionContext *context) = 0;

    virtual antlrcpp::Any visitPartition_name_option(Gauss200Parser::Partition_name_optionContext *context) = 0;

    virtual antlrcpp::Any visitCall_stmt(Gauss200Parser::Call_stmtContext *context) = 0;

    virtual antlrcpp::Any visitParam_expr_list(Gauss200Parser::Param_expr_listContext *context) = 0;

    virtual antlrcpp::Any visitParam_expr(Gauss200Parser::Param_exprContext *context) = 0;

    virtual antlrcpp::Any visitParam_op(Gauss200Parser::Param_opContext *context) = 0;

    virtual antlrcpp::Any visitCheckpoint_stmt(Gauss200Parser::Checkpoint_stmtContext *context) = 0;

    virtual antlrcpp::Any visitClean_connection_stmt(Gauss200Parser::Clean_connection_stmtContext *context) = 0;

    virtual antlrcpp::Any visitClose_stmt(Gauss200Parser::Close_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCursor_name(Gauss200Parser::Cursor_nameContext *context) = 0;

    virtual antlrcpp::Any visitCluster_stmt(Gauss200Parser::Cluster_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCluster_stmt_option(Gauss200Parser::Cluster_stmt_optionContext *context) = 0;

    virtual antlrcpp::Any visitComment_stmt(Gauss200Parser::Comment_stmtContext *context) = 0;

    virtual antlrcpp::Any visitComment_stmt_option(Gauss200Parser::Comment_stmt_optionContext *context) = 0;

    virtual antlrcpp::Any visitAgg_name(Gauss200Parser::Agg_nameContext *context) = 0;

    virtual antlrcpp::Any visitObject_name(Gauss200Parser::Object_nameContext *context) = 0;

    virtual antlrcpp::Any visitCommit_end_stmt(Gauss200Parser::Commit_end_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCommit_prepared_stmt(Gauss200Parser::Commit_prepared_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCopy_stmt(Gauss200Parser::Copy_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCopy_obj(Gauss200Parser::Copy_objContext *context) = 0;

    virtual antlrcpp::Any visitCopy_stmt_clause(Gauss200Parser::Copy_stmt_clauseContext *context) = 0;

    virtual antlrcpp::Any visitCopy_stmt_option(Gauss200Parser::Copy_stmt_optionContext *context) = 0;

    virtual antlrcpp::Any visitParen_copy_clause_option_list(Gauss200Parser::Paren_copy_clause_option_listContext *context) = 0;

    virtual antlrcpp::Any visitCopy_clause_option(Gauss200Parser::Copy_clause_optionContext *context) = 0;

    virtual antlrcpp::Any visitColumn_offset_list(Gauss200Parser::Column_offset_listContext *context) = 0;

    virtual antlrcpp::Any visitColumn_offset_ele(Gauss200Parser::Column_offset_eleContext *context) = 0;

    virtual antlrcpp::Any visitCopy_option(Gauss200Parser::Copy_optionContext *context) = 0;

    virtual antlrcpp::Any visitCopy_clause_common_option(Gauss200Parser::Copy_clause_common_optionContext *context) = 0;

    virtual antlrcpp::Any visitBoolean_value(Gauss200Parser::Boolean_valueContext *context) = 0;

    virtual antlrcpp::Any visitCursor_stmt(Gauss200Parser::Cursor_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDeallocate_stmt(Gauss200Parser::Deallocate_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDo_stmt(Gauss200Parser::Do_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDo_stmt_code(Gauss200Parser::Do_stmt_codeContext *context) = 0;

    virtual antlrcpp::Any visitExecute_stmts(Gauss200Parser::Execute_stmtsContext *context) = 0;

    virtual antlrcpp::Any visitExecute_stmt(Gauss200Parser::Execute_stmtContext *context) = 0;

    virtual antlrcpp::Any visitExecute_direct_stmt(Gauss200Parser::Execute_direct_stmtContext *context) = 0;

    virtual antlrcpp::Any visitExplain_stmt(Gauss200Parser::Explain_stmtContext *context) = 0;

    virtual antlrcpp::Any visitExplain_option_list(Gauss200Parser::Explain_option_listContext *context) = 0;

    virtual antlrcpp::Any visitExplain_option(Gauss200Parser::Explain_optionContext *context) = 0;

    virtual antlrcpp::Any visitExplain_plan_stmt(Gauss200Parser::Explain_plan_stmtContext *context) = 0;

    virtual antlrcpp::Any visitFetch_move_stmt(Gauss200Parser::Fetch_move_stmtContext *context) = 0;

    virtual antlrcpp::Any visitFetch_direction_clause(Gauss200Parser::Fetch_direction_clauseContext *context) = 0;

    virtual antlrcpp::Any visitGrant_stmt(Gauss200Parser::Grant_stmtContext *context) = 0;

    virtual antlrcpp::Any visitPrivileges_for_obj(Gauss200Parser::Privileges_for_objContext *context) = 0;

    virtual antlrcpp::Any visitDatabase_privileges(Gauss200Parser::Database_privilegesContext *context) = 0;

    virtual antlrcpp::Any visitDatabase_privilege(Gauss200Parser::Database_privilegeContext *context) = 0;

    virtual antlrcpp::Any visitCluster_privilege(Gauss200Parser::Cluster_privilegeContext *context) = 0;

    virtual antlrcpp::Any visitGrant_on_option(Gauss200Parser::Grant_on_optionContext *context) = 0;

    virtual antlrcpp::Any visitGrant_on_function_option_list(Gauss200Parser::Grant_on_function_option_listContext *context) = 0;

    virtual antlrcpp::Any visitGrant_on_function_option(Gauss200Parser::Grant_on_function_optionContext *context) = 0;

    virtual antlrcpp::Any visitLock_stmt(Gauss200Parser::Lock_stmtContext *context) = 0;

    virtual antlrcpp::Any visitLock_in_mode(Gauss200Parser::Lock_in_modeContext *context) = 0;

    virtual antlrcpp::Any visitIn_mode_option(Gauss200Parser::In_mode_optionContext *context) = 0;

    virtual antlrcpp::Any visitPrepare_stmt(Gauss200Parser::Prepare_stmtContext *context) = 0;

    virtual antlrcpp::Any visitPrepare_transaction_stmt(Gauss200Parser::Prepare_transaction_stmtContext *context) = 0;

    virtual antlrcpp::Any visitMerge_into_stmt(Gauss200Parser::Merge_into_stmtContext *context) = 0;

    virtual antlrcpp::Any visitOn_condition_clause(Gauss200Parser::On_condition_clauseContext *context) = 0;

    virtual antlrcpp::Any visitWhen_matched_update_clause(Gauss200Parser::When_matched_update_clauseContext *context) = 0;

    virtual antlrcpp::Any visitUpdate_set_column_option(Gauss200Parser::Update_set_column_optionContext *context) = 0;

    virtual antlrcpp::Any visitWhen_not_matched_insert_clause(Gauss200Parser::When_not_matched_insert_clauseContext *context) = 0;

    virtual antlrcpp::Any visitNot_matched_insert_value_option(Gauss200Parser::Not_matched_insert_value_optionContext *context) = 0;

    virtual antlrcpp::Any visitNot_matched_insert_value(Gauss200Parser::Not_matched_insert_valueContext *context) = 0;

    virtual antlrcpp::Any visitReassign_owned_stmt(Gauss200Parser::Reassign_owned_stmtContext *context) = 0;

    virtual antlrcpp::Any visitReindex_stmt(Gauss200Parser::Reindex_stmtContext *context) = 0;

    virtual antlrcpp::Any visitReindex_option(Gauss200Parser::Reindex_optionContext *context) = 0;

    virtual antlrcpp::Any visitRelease_savepoint_stmt(Gauss200Parser::Release_savepoint_stmtContext *context) = 0;

    virtual antlrcpp::Any visitReset_stmt(Gauss200Parser::Reset_stmtContext *context) = 0;

    virtual antlrcpp::Any visitSavepoint_name(Gauss200Parser::Savepoint_nameContext *context) = 0;

    virtual antlrcpp::Any visitRevoke_stmt(Gauss200Parser::Revoke_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAdmin_option_for(Gauss200Parser::Admin_option_forContext *context) = 0;

    virtual antlrcpp::Any visitRollback_stmt(Gauss200Parser::Rollback_stmtContext *context) = 0;

    virtual antlrcpp::Any visitSavepoint_stmt(Gauss200Parser::Savepoint_stmtContext *context) = 0;

    virtual antlrcpp::Any visitSet_reset_stmt(Gauss200Parser::Set_reset_stmtContext *context) = 0;

    virtual antlrcpp::Any visitSet_config_parameters(Gauss200Parser::Set_config_parametersContext *context) = 0;

    virtual antlrcpp::Any visitSession_local(Gauss200Parser::Session_localContext *context) = 0;

    virtual antlrcpp::Any visitSet_parameter_option(Gauss200Parser::Set_parameter_optionContext *context) = 0;

    virtual antlrcpp::Any visitTimezone(Gauss200Parser::TimezoneContext *context) = 0;

    virtual antlrcpp::Any visitSet_constraints(Gauss200Parser::Set_constraintsContext *context) = 0;

    virtual antlrcpp::Any visitSet_role(Gauss200Parser::Set_roleContext *context) = 0;

    virtual antlrcpp::Any visitReset_config_parameters(Gauss200Parser::Reset_config_parametersContext *context) = 0;

    virtual antlrcpp::Any visitSet_session_authorization(Gauss200Parser::Set_session_authorizationContext *context) = 0;

    virtual antlrcpp::Any visitSet_transaction(Gauss200Parser::Set_transactionContext *context) = 0;

    virtual antlrcpp::Any visitIsolation_level_options(Gauss200Parser::Isolation_level_optionsContext *context) = 0;

    virtual antlrcpp::Any visitIsolation_level_option(Gauss200Parser::Isolation_level_optionContext *context) = 0;

    virtual antlrcpp::Any visitShow_stmt(Gauss200Parser::Show_stmtContext *context) = 0;

    virtual antlrcpp::Any visitStart_transaction_stmt(Gauss200Parser::Start_transaction_stmtContext *context) = 0;

    virtual antlrcpp::Any visitStart_transaction_option(Gauss200Parser::Start_transaction_optionContext *context) = 0;

    virtual antlrcpp::Any visitTruncate_stmt(Gauss200Parser::Truncate_stmtContext *context) = 0;

    virtual antlrcpp::Any visitVacuum_stmt(Gauss200Parser::Vacuum_stmtContext *context) = 0;

    virtual antlrcpp::Any visitVacuum_keyword_list(Gauss200Parser::Vacuum_keyword_listContext *context) = 0;

    virtual antlrcpp::Any visitVacuum_keyword(Gauss200Parser::Vacuum_keywordContext *context) = 0;

    virtual antlrcpp::Any visitVacuum_option(Gauss200Parser::Vacuum_optionContext *context) = 0;

    virtual antlrcpp::Any visitValues_stmt(Gauss200Parser::Values_stmtContext *context) = 0;

    virtual antlrcpp::Any visitParen_expr_list(Gauss200Parser::Paren_expr_listContext *context) = 0;

    virtual antlrcpp::Any visitExpression_list(Gauss200Parser::Expression_listContext *context) = 0;

    virtual antlrcpp::Any visitExpression(Gauss200Parser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitLogical_expr(Gauss200Parser::Logical_exprContext *context) = 0;

    virtual antlrcpp::Any visitMultiset_expr(Gauss200Parser::Multiset_exprContext *context) = 0;

    virtual antlrcpp::Any visitRelational_expr(Gauss200Parser::Relational_exprContext *context) = 0;

    virtual antlrcpp::Any visitRelational_op(Gauss200Parser::Relational_opContext *context) = 0;

    virtual antlrcpp::Any visitCompound_expr(Gauss200Parser::Compound_exprContext *context) = 0;

    virtual antlrcpp::Any visitIn_expr(Gauss200Parser::In_exprContext *context) = 0;

    virtual antlrcpp::Any visitBetween_elements(Gauss200Parser::Between_elementsContext *context) = 0;

    virtual antlrcpp::Any visitConcatenation_list(Gauss200Parser::Concatenation_listContext *context) = 0;

    virtual antlrcpp::Any visitConcatenation(Gauss200Parser::ConcatenationContext *context) = 0;

    virtual antlrcpp::Any visitGeometry_op1(Gauss200Parser::Geometry_op1Context *context) = 0;

    virtual antlrcpp::Any visitModel_expr(Gauss200Parser::Model_exprContext *context) = 0;

    virtual antlrcpp::Any visitUnary_expr(Gauss200Parser::Unary_exprContext *context) = 0;

    virtual antlrcpp::Any visitGeometry_op2(Gauss200Parser::Geometry_op2Context *context) = 0;

    virtual antlrcpp::Any visitTypename_gs(Gauss200Parser::Typename_gsContext *context) = 0;

    virtual antlrcpp::Any visitPrecision_part(Gauss200Parser::Precision_partContext *context) = 0;

    virtual antlrcpp::Any visitNumeric(Gauss200Parser::NumericContext *context) = 0;

    virtual antlrcpp::Any visitNumber_type(Gauss200Parser::Number_typeContext *context) = 0;

    virtual antlrcpp::Any visitConcurrency_type(Gauss200Parser::Concurrency_typeContext *context) = 0;

    virtual antlrcpp::Any visitBoolean_type(Gauss200Parser::Boolean_typeContext *context) = 0;

    virtual antlrcpp::Any visitChar_type(Gauss200Parser::Char_typeContext *context) = 0;

    virtual antlrcpp::Any visitBinary_type(Gauss200Parser::Binary_typeContext *context) = 0;

    virtual antlrcpp::Any visitDate_type(Gauss200Parser::Date_typeContext *context) = 0;

    virtual antlrcpp::Any visitTime_zone_part(Gauss200Parser::Time_zone_partContext *context) = 0;

    virtual antlrcpp::Any visitGeometry_type(Gauss200Parser::Geometry_typeContext *context) = 0;

    virtual antlrcpp::Any visitInet_type(Gauss200Parser::Inet_typeContext *context) = 0;

    virtual antlrcpp::Any visitBit_type(Gauss200Parser::Bit_typeContext *context) = 0;

    virtual antlrcpp::Any visitTxt_search_type(Gauss200Parser::Txt_search_typeContext *context) = 0;

    virtual antlrcpp::Any visitHll_type(Gauss200Parser::Hll_typeContext *context) = 0;

    virtual antlrcpp::Any visitOid_type(Gauss200Parser::Oid_typeContext *context) = 0;

    virtual antlrcpp::Any visitOther_type(Gauss200Parser::Other_typeContext *context) = 0;

    virtual antlrcpp::Any visitTypecast_arg(Gauss200Parser::Typecast_argContext *context) = 0;

    virtual antlrcpp::Any visitFunction_expr(Gauss200Parser::Function_exprContext *context) = 0;

    virtual antlrcpp::Any visitCol_label(Gauss200Parser::Col_labelContext *context) = 0;

    virtual antlrcpp::Any visitXmlelement_part(Gauss200Parser::Xmlelement_partContext *context) = 0;

    virtual antlrcpp::Any visitXml_root_version(Gauss200Parser::Xml_root_versionContext *context) = 0;

    virtual antlrcpp::Any visitOpt_xml_root_standalone(Gauss200Parser::Opt_xml_root_standaloneContext *context) = 0;

    virtual antlrcpp::Any visitXml_attributes(Gauss200Parser::Xml_attributesContext *context) = 0;

    virtual antlrcpp::Any visitXml_attribute_list(Gauss200Parser::Xml_attribute_listContext *context) = 0;

    virtual antlrcpp::Any visitXml_attribute_el(Gauss200Parser::Xml_attribute_elContext *context) = 0;

    virtual antlrcpp::Any visitDocument_or_content(Gauss200Parser::Document_or_contentContext *context) = 0;

    virtual antlrcpp::Any visitXml_whitespace_option(Gauss200Parser::Xml_whitespace_optionContext *context) = 0;

    virtual antlrcpp::Any visitXmlexists_argument(Gauss200Parser::Xmlexists_argumentContext *context) = 0;

    virtual antlrcpp::Any visitExtract_list(Gauss200Parser::Extract_listContext *context) = 0;

    virtual antlrcpp::Any visitExtract_arg(Gauss200Parser::Extract_argContext *context) = 0;

    virtual antlrcpp::Any visitOverlay_list(Gauss200Parser::Overlay_listContext *context) = 0;

    virtual antlrcpp::Any visitOverlay_placing(Gauss200Parser::Overlay_placingContext *context) = 0;

    virtual antlrcpp::Any visitPosition_list(Gauss200Parser::Position_listContext *context) = 0;

    virtual antlrcpp::Any visitSubstr_list(Gauss200Parser::Substr_listContext *context) = 0;

    virtual antlrcpp::Any visitSubstr_from(Gauss200Parser::Substr_fromContext *context) = 0;

    virtual antlrcpp::Any visitSubstr_for(Gauss200Parser::Substr_forContext *context) = 0;

    virtual antlrcpp::Any visitTrim_list(Gauss200Parser::Trim_listContext *context) = 0;

    virtual antlrcpp::Any visitSimple_function(Gauss200Parser::Simple_functionContext *context) = 0;

    virtual antlrcpp::Any visitFunc_name(Gauss200Parser::Func_nameContext *context) = 0;

    virtual antlrcpp::Any visitSimple_func_params(Gauss200Parser::Simple_func_paramsContext *context) = 0;

    virtual antlrcpp::Any visitAtom(Gauss200Parser::AtomContext *context) = 0;

    virtual antlrcpp::Any visitGeneral_element(Gauss200Parser::General_elementContext *context) = 0;

    virtual antlrcpp::Any visitGeneral_element_part(Gauss200Parser::General_element_partContext *context) = 0;

    virtual antlrcpp::Any visitIdentifier(Gauss200Parser::IdentifierContext *context) = 0;

    virtual antlrcpp::Any visitRegular_id_common(Gauss200Parser::Regular_id_commonContext *context) = 0;

    virtual antlrcpp::Any visitRegular_id(Gauss200Parser::Regular_idContext *context) = 0;

    virtual antlrcpp::Any visitConstant(Gauss200Parser::ConstantContext *context) = 0;

    virtual antlrcpp::Any visitCase_expr(Gauss200Parser::Case_exprContext *context) = 0;

    virtual antlrcpp::Any visitWhen_clause(Gauss200Parser::When_clauseContext *context) = 0;

    virtual antlrcpp::Any visitCase_default(Gauss200Parser::Case_defaultContext *context) = 0;

    virtual antlrcpp::Any visitQuantified_expression(Gauss200Parser::Quantified_expressionContext *context) = 0;

    virtual antlrcpp::Any visitArray_expr(Gauss200Parser::Array_exprContext *context) = 0;

    virtual antlrcpp::Any visitArray_expr_list(Gauss200Parser::Array_expr_listContext *context) = 0;

    virtual antlrcpp::Any visitReserved_keywords_normal(Gauss200Parser::Reserved_keywords_normalContext *context) = 0;

    virtual antlrcpp::Any visitReserved_keywords_can_be_name(Gauss200Parser::Reserved_keywords_can_be_nameContext *context) = 0;

    virtual antlrcpp::Any visitNonreserved_keywords_normal(Gauss200Parser::Nonreserved_keywords_normalContext *context) = 0;

    virtual antlrcpp::Any visitNon_keywords_but_token(Gauss200Parser::Non_keywords_but_tokenContext *context) = 0;

    virtual antlrcpp::Any visitNonreserved_keywords_can_not_be_name(Gauss200Parser::Nonreserved_keywords_can_not_be_nameContext *context) = 0;


};


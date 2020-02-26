
// Generated from Gauss200Parser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "Gauss200Parser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by Gauss200Parser.
 */
class  Gauss200ParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterStmtblock(Gauss200Parser::StmtblockContext *ctx) = 0;
  virtual void exitStmtblock(Gauss200Parser::StmtblockContext *ctx) = 0;

  virtual void enterStmtmulti(Gauss200Parser::StmtmultiContext *ctx) = 0;
  virtual void exitStmtmulti(Gauss200Parser::StmtmultiContext *ctx) = 0;

  virtual void enterStmt(Gauss200Parser::StmtContext *ctx) = 0;
  virtual void exitStmt(Gauss200Parser::StmtContext *ctx) = 0;

  virtual void enterGs_stmt(Gauss200Parser::Gs_stmtContext *ctx) = 0;
  virtual void exitGs_stmt(Gauss200Parser::Gs_stmtContext *ctx) = 0;

  virtual void enterAbort_stmt(Gauss200Parser::Abort_stmtContext *ctx) = 0;
  virtual void exitAbort_stmt(Gauss200Parser::Abort_stmtContext *ctx) = 0;

  virtual void enterWork_transaction(Gauss200Parser::Work_transactionContext *ctx) = 0;
  virtual void exitWork_transaction(Gauss200Parser::Work_transactionContext *ctx) = 0;

  virtual void enterAlter_group_mapping_stmt(Gauss200Parser::Alter_group_mapping_stmtContext *ctx) = 0;
  virtual void exitAlter_group_mapping_stmt(Gauss200Parser::Alter_group_mapping_stmtContext *ctx) = 0;

  virtual void enterApp_name(Gauss200Parser::App_nameContext *ctx) = 0;
  virtual void exitApp_name(Gauss200Parser::App_nameContext *ctx) = 0;

  virtual void enterParen_assignment_stmt_list(Gauss200Parser::Paren_assignment_stmt_listContext *ctx) = 0;
  virtual void exitParen_assignment_stmt_list(Gauss200Parser::Paren_assignment_stmt_listContext *ctx) = 0;

  virtual void enterAssignment_stmt_list(Gauss200Parser::Assignment_stmt_listContext *ctx) = 0;
  virtual void exitAssignment_stmt_list(Gauss200Parser::Assignment_stmt_listContext *ctx) = 0;

  virtual void enterAssignment_stmt(Gauss200Parser::Assignment_stmtContext *ctx) = 0;
  virtual void exitAssignment_stmt(Gauss200Parser::Assignment_stmtContext *ctx) = 0;

  virtual void enterAssignment_value(Gauss200Parser::Assignment_valueContext *ctx) = 0;
  virtual void exitAssignment_value(Gauss200Parser::Assignment_valueContext *ctx) = 0;

  virtual void enterAlter_database_stmt(Gauss200Parser::Alter_database_stmtContext *ctx) = 0;
  virtual void exitAlter_database_stmt(Gauss200Parser::Alter_database_stmtContext *ctx) = 0;

  virtual void enterDatabase_name(Gauss200Parser::Database_nameContext *ctx) = 0;
  virtual void exitDatabase_name(Gauss200Parser::Database_nameContext *ctx) = 0;

  virtual void enterAlter_database_option(Gauss200Parser::Alter_database_optionContext *ctx) = 0;
  virtual void exitAlter_database_option(Gauss200Parser::Alter_database_optionContext *ctx) = 0;

  virtual void enterConnection_limit(Gauss200Parser::Connection_limitContext *ctx) = 0;
  virtual void exitConnection_limit(Gauss200Parser::Connection_limitContext *ctx) = 0;

  virtual void enterInteger(Gauss200Parser::IntegerContext *ctx) = 0;
  virtual void exitInteger(Gauss200Parser::IntegerContext *ctx) = 0;

  virtual void enterRename_owner_to_option(Gauss200Parser::Rename_owner_to_optionContext *ctx) = 0;
  virtual void exitRename_owner_to_option(Gauss200Parser::Rename_owner_to_optionContext *ctx) = 0;

  virtual void enterRename_to_option(Gauss200Parser::Rename_to_optionContext *ctx) = 0;
  virtual void exitRename_to_option(Gauss200Parser::Rename_to_optionContext *ctx) = 0;

  virtual void enterOwner_to_option(Gauss200Parser::Owner_to_optionContext *ctx) = 0;
  virtual void exitOwner_to_option(Gauss200Parser::Owner_to_optionContext *ctx) = 0;

  virtual void enterNew_name(Gauss200Parser::New_nameContext *ctx) = 0;
  virtual void exitNew_name(Gauss200Parser::New_nameContext *ctx) = 0;

  virtual void enterSet_configuration_param(Gauss200Parser::Set_configuration_paramContext *ctx) = 0;
  virtual void exitSet_configuration_param(Gauss200Parser::Set_configuration_paramContext *ctx) = 0;

  virtual void enterReset_configuration_param(Gauss200Parser::Reset_configuration_paramContext *ctx) = 0;
  virtual void exitReset_configuration_param(Gauss200Parser::Reset_configuration_paramContext *ctx) = 0;

  virtual void enterConfiguration_param(Gauss200Parser::Configuration_paramContext *ctx) = 0;
  virtual void exitConfiguration_param(Gauss200Parser::Configuration_paramContext *ctx) = 0;

  virtual void enterAlter_data_source_stmt(Gauss200Parser::Alter_data_source_stmtContext *ctx) = 0;
  virtual void exitAlter_data_source_stmt(Gauss200Parser::Alter_data_source_stmtContext *ctx) = 0;

  virtual void enterSrc_name(Gauss200Parser::Src_nameContext *ctx) = 0;
  virtual void exitSrc_name(Gauss200Parser::Src_nameContext *ctx) = 0;

  virtual void enterAlter_data_src_option(Gauss200Parser::Alter_data_src_optionContext *ctx) = 0;
  virtual void exitAlter_data_src_option(Gauss200Parser::Alter_data_src_optionContext *ctx) = 0;

  virtual void enterData_src_type_version_option(Gauss200Parser::Data_src_type_version_optionContext *ctx) = 0;
  virtual void exitData_src_type_version_option(Gauss200Parser::Data_src_type_version_optionContext *ctx) = 0;

  virtual void enterAlter_property_options(Gauss200Parser::Alter_property_optionsContext *ctx) = 0;
  virtual void exitAlter_property_options(Gauss200Parser::Alter_property_optionsContext *ctx) = 0;

  virtual void enterAlter_property_option(Gauss200Parser::Alter_property_optionContext *ctx) = 0;
  virtual void exitAlter_property_option(Gauss200Parser::Alter_property_optionContext *ctx) = 0;

  virtual void enterOptname(Gauss200Parser::OptnameContext *ctx) = 0;
  virtual void exitOptname(Gauss200Parser::OptnameContext *ctx) = 0;

  virtual void enterAlter_default_privilege_stmt(Gauss200Parser::Alter_default_privilege_stmtContext *ctx) = 0;
  virtual void exitAlter_default_privilege_stmt(Gauss200Parser::Alter_default_privilege_stmtContext *ctx) = 0;

  virtual void enterTarget_role_list(Gauss200Parser::Target_role_listContext *ctx) = 0;
  virtual void exitTarget_role_list(Gauss200Parser::Target_role_listContext *ctx) = 0;

  virtual void enterTarget_role(Gauss200Parser::Target_roleContext *ctx) = 0;
  virtual void exitTarget_role(Gauss200Parser::Target_roleContext *ctx) = 0;

  virtual void enterSchema_name_list(Gauss200Parser::Schema_name_listContext *ctx) = 0;
  virtual void exitSchema_name_list(Gauss200Parser::Schema_name_listContext *ctx) = 0;

  virtual void enterSchema_name(Gauss200Parser::Schema_nameContext *ctx) = 0;
  virtual void exitSchema_name(Gauss200Parser::Schema_nameContext *ctx) = 0;

  virtual void enterAbbreviated_grant_or_revoke(Gauss200Parser::Abbreviated_grant_or_revokeContext *ctx) = 0;
  virtual void exitAbbreviated_grant_or_revoke(Gauss200Parser::Abbreviated_grant_or_revokeContext *ctx) = 0;

  virtual void enterGrant_on_tables_clause(Gauss200Parser::Grant_on_tables_clauseContext *ctx) = 0;
  virtual void exitGrant_on_tables_clause(Gauss200Parser::Grant_on_tables_clauseContext *ctx) = 0;

  virtual void enterAll_privileges(Gauss200Parser::All_privilegesContext *ctx) = 0;
  virtual void exitAll_privileges(Gauss200Parser::All_privilegesContext *ctx) = 0;

  virtual void enterTable_privileges(Gauss200Parser::Table_privilegesContext *ctx) = 0;
  virtual void exitTable_privileges(Gauss200Parser::Table_privilegesContext *ctx) = 0;

  virtual void enterTable_privilege(Gauss200Parser::Table_privilegeContext *ctx) = 0;
  virtual void exitTable_privilege(Gauss200Parser::Table_privilegeContext *ctx) = 0;

  virtual void enterGrant_revoke_objects(Gauss200Parser::Grant_revoke_objectsContext *ctx) = 0;
  virtual void exitGrant_revoke_objects(Gauss200Parser::Grant_revoke_objectsContext *ctx) = 0;

  virtual void enterGrant_revoke_obj(Gauss200Parser::Grant_revoke_objContext *ctx) = 0;
  virtual void exitGrant_revoke_obj(Gauss200Parser::Grant_revoke_objContext *ctx) = 0;

  virtual void enterRole_name(Gauss200Parser::Role_nameContext *ctx) = 0;
  virtual void exitRole_name(Gauss200Parser::Role_nameContext *ctx) = 0;

  virtual void enterWith_grant_option(Gauss200Parser::With_grant_optionContext *ctx) = 0;
  virtual void exitWith_grant_option(Gauss200Parser::With_grant_optionContext *ctx) = 0;

  virtual void enterGrant_on_functions_clause(Gauss200Parser::Grant_on_functions_clauseContext *ctx) = 0;
  virtual void exitGrant_on_functions_clause(Gauss200Parser::Grant_on_functions_clauseContext *ctx) = 0;

  virtual void enterFunction_privilege(Gauss200Parser::Function_privilegeContext *ctx) = 0;
  virtual void exitFunction_privilege(Gauss200Parser::Function_privilegeContext *ctx) = 0;

  virtual void enterGrant_on_types_clause(Gauss200Parser::Grant_on_types_clauseContext *ctx) = 0;
  virtual void exitGrant_on_types_clause(Gauss200Parser::Grant_on_types_clauseContext *ctx) = 0;

  virtual void enterType_privilege(Gauss200Parser::Type_privilegeContext *ctx) = 0;
  virtual void exitType_privilege(Gauss200Parser::Type_privilegeContext *ctx) = 0;

  virtual void enterRevoke_on_tables_clause(Gauss200Parser::Revoke_on_tables_clauseContext *ctx) = 0;
  virtual void exitRevoke_on_tables_clause(Gauss200Parser::Revoke_on_tables_clauseContext *ctx) = 0;

  virtual void enterGrant_option_for(Gauss200Parser::Grant_option_forContext *ctx) = 0;
  virtual void exitGrant_option_for(Gauss200Parser::Grant_option_forContext *ctx) = 0;

  virtual void enterCascade_restrict(Gauss200Parser::Cascade_restrictContext *ctx) = 0;
  virtual void exitCascade_restrict(Gauss200Parser::Cascade_restrictContext *ctx) = 0;

  virtual void enterRevoke_on_functions_clause(Gauss200Parser::Revoke_on_functions_clauseContext *ctx) = 0;
  virtual void exitRevoke_on_functions_clause(Gauss200Parser::Revoke_on_functions_clauseContext *ctx) = 0;

  virtual void enterRevoke_on_types_clause(Gauss200Parser::Revoke_on_types_clauseContext *ctx) = 0;
  virtual void exitRevoke_on_types_clause(Gauss200Parser::Revoke_on_types_clauseContext *ctx) = 0;

  virtual void enterAlter_directory_stmt(Gauss200Parser::Alter_directory_stmtContext *ctx) = 0;
  virtual void exitAlter_directory_stmt(Gauss200Parser::Alter_directory_stmtContext *ctx) = 0;

  virtual void enterDirectory_name(Gauss200Parser::Directory_nameContext *ctx) = 0;
  virtual void exitDirectory_name(Gauss200Parser::Directory_nameContext *ctx) = 0;

  virtual void enterAlter_foreign_table_stmt(Gauss200Parser::Alter_foreign_table_stmtContext *ctx) = 0;
  virtual void exitAlter_foreign_table_stmt(Gauss200Parser::Alter_foreign_table_stmtContext *ctx) = 0;

  virtual void enterIf_exists_or_not(Gauss200Parser::If_exists_or_notContext *ctx) = 0;
  virtual void exitIf_exists_or_not(Gauss200Parser::If_exists_or_notContext *ctx) = 0;

  virtual void enterTable_name(Gauss200Parser::Table_nameContext *ctx) = 0;
  virtual void exitTable_name(Gauss200Parser::Table_nameContext *ctx) = 0;

  virtual void enterAlter_foreign_table_option(Gauss200Parser::Alter_foreign_table_optionContext *ctx) = 0;
  virtual void exitAlter_foreign_table_option(Gauss200Parser::Alter_foreign_table_optionContext *ctx) = 0;

  virtual void enterAlter_foreign_table_action_list(Gauss200Parser::Alter_foreign_table_action_listContext *ctx) = 0;
  virtual void exitAlter_foreign_table_action_list(Gauss200Parser::Alter_foreign_table_action_listContext *ctx) = 0;

  virtual void enterAlter_foreign_table_action(Gauss200Parser::Alter_foreign_table_actionContext *ctx) = 0;
  virtual void exitAlter_foreign_table_action(Gauss200Parser::Alter_foreign_table_actionContext *ctx) = 0;

  virtual void enterColumn_name(Gauss200Parser::Column_nameContext *ctx) = 0;
  virtual void exitColumn_name(Gauss200Parser::Column_nameContext *ctx) = 0;

  virtual void enterAlter_foreign_table_action_option(Gauss200Parser::Alter_foreign_table_action_optionContext *ctx) = 0;
  virtual void exitAlter_foreign_table_action_option(Gauss200Parser::Alter_foreign_table_action_optionContext *ctx) = 0;

  virtual void enterAlter_set_statistics_option(Gauss200Parser::Alter_set_statistics_optionContext *ctx) = 0;
  virtual void exitAlter_set_statistics_option(Gauss200Parser::Alter_set_statistics_optionContext *ctx) = 0;

  virtual void enterAlter_add_information_constraint(Gauss200Parser::Alter_add_information_constraintContext *ctx) = 0;
  virtual void exitAlter_add_information_constraint(Gauss200Parser::Alter_add_information_constraintContext *ctx) = 0;

  virtual void enterColumn_constraint_primary_unique(Gauss200Parser::Column_constraint_primary_uniqueContext *ctx) = 0;
  virtual void exitColumn_constraint_primary_unique(Gauss200Parser::Column_constraint_primary_uniqueContext *ctx) = 0;

  virtual void enterConstraint_name(Gauss200Parser::Constraint_nameContext *ctx) = 0;
  virtual void exitConstraint_name(Gauss200Parser::Constraint_nameContext *ctx) = 0;

  virtual void enterAdd_info_constraint_option(Gauss200Parser::Add_info_constraint_optionContext *ctx) = 0;
  virtual void exitAdd_info_constraint_option(Gauss200Parser::Add_info_constraint_optionContext *ctx) = 0;

  virtual void enterAlter_drop_information_constraint(Gauss200Parser::Alter_drop_information_constraintContext *ctx) = 0;
  virtual void exitAlter_drop_information_constraint(Gauss200Parser::Alter_drop_information_constraintContext *ctx) = 0;

  virtual void enterAlter_function_stmt(Gauss200Parser::Alter_function_stmtContext *ctx) = 0;
  virtual void exitAlter_function_stmt(Gauss200Parser::Alter_function_stmtContext *ctx) = 0;

  virtual void enterFunction_with_argtypes(Gauss200Parser::Function_with_argtypesContext *ctx) = 0;
  virtual void exitFunction_with_argtypes(Gauss200Parser::Function_with_argtypesContext *ctx) = 0;

  virtual void enterFunc_args(Gauss200Parser::Func_argsContext *ctx) = 0;
  virtual void exitFunc_args(Gauss200Parser::Func_argsContext *ctx) = 0;

  virtual void enterFunc_args_list(Gauss200Parser::Func_args_listContext *ctx) = 0;
  virtual void exitFunc_args_list(Gauss200Parser::Func_args_listContext *ctx) = 0;

  virtual void enterFunc_arg(Gauss200Parser::Func_argContext *ctx) = 0;
  virtual void exitFunc_arg(Gauss200Parser::Func_argContext *ctx) = 0;

  virtual void enterArgmode(Gauss200Parser::ArgmodeContext *ctx) = 0;
  virtual void exitArgmode(Gauss200Parser::ArgmodeContext *ctx) = 0;

  virtual void enterParam_name(Gauss200Parser::Param_nameContext *ctx) = 0;
  virtual void exitParam_name(Gauss200Parser::Param_nameContext *ctx) = 0;

  virtual void enterAlter_func_option(Gauss200Parser::Alter_func_optionContext *ctx) = 0;
  virtual void exitAlter_func_option(Gauss200Parser::Alter_func_optionContext *ctx) = 0;

  virtual void enterAlter_function_action(Gauss200Parser::Alter_function_actionContext *ctx) = 0;
  virtual void exitAlter_function_action(Gauss200Parser::Alter_function_actionContext *ctx) = 0;

  virtual void enterAlter_set_schema(Gauss200Parser::Alter_set_schemaContext *ctx) = 0;
  virtual void exitAlter_set_schema(Gauss200Parser::Alter_set_schemaContext *ctx) = 0;

  virtual void enterAlter_group_stmt(Gauss200Parser::Alter_group_stmtContext *ctx) = 0;
  virtual void exitAlter_group_stmt(Gauss200Parser::Alter_group_stmtContext *ctx) = 0;

  virtual void enterGroup_name(Gauss200Parser::Group_nameContext *ctx) = 0;
  virtual void exitGroup_name(Gauss200Parser::Group_nameContext *ctx) = 0;

  virtual void enterAlter_group_option(Gauss200Parser::Alter_group_optionContext *ctx) = 0;
  virtual void exitAlter_group_option(Gauss200Parser::Alter_group_optionContext *ctx) = 0;

  virtual void enterUser_name_list(Gauss200Parser::User_name_listContext *ctx) = 0;
  virtual void exitUser_name_list(Gauss200Parser::User_name_listContext *ctx) = 0;

  virtual void enterUser_name(Gauss200Parser::User_nameContext *ctx) = 0;
  virtual void exitUser_name(Gauss200Parser::User_nameContext *ctx) = 0;

  virtual void enterAlter_index_stmt(Gauss200Parser::Alter_index_stmtContext *ctx) = 0;
  virtual void exitAlter_index_stmt(Gauss200Parser::Alter_index_stmtContext *ctx) = 0;

  virtual void enterIndex_name(Gauss200Parser::Index_nameContext *ctx) = 0;
  virtual void exitIndex_name(Gauss200Parser::Index_nameContext *ctx) = 0;

  virtual void enterAlter_index_option(Gauss200Parser::Alter_index_optionContext *ctx) = 0;
  virtual void exitAlter_index_option(Gauss200Parser::Alter_index_optionContext *ctx) = 0;

  virtual void enterSet_tablespace_option(Gauss200Parser::Set_tablespace_optionContext *ctx) = 0;
  virtual void exitSet_tablespace_option(Gauss200Parser::Set_tablespace_optionContext *ctx) = 0;

  virtual void enterTablespace_name_option(Gauss200Parser::Tablespace_name_optionContext *ctx) = 0;
  virtual void exitTablespace_name_option(Gauss200Parser::Tablespace_name_optionContext *ctx) = 0;

  virtual void enterSet_assignment_list(Gauss200Parser::Set_assignment_listContext *ctx) = 0;
  virtual void exitSet_assignment_list(Gauss200Parser::Set_assignment_listContext *ctx) = 0;

  virtual void enterReset_param_list(Gauss200Parser::Reset_param_listContext *ctx) = 0;
  virtual void exitReset_param_list(Gauss200Parser::Reset_param_listContext *ctx) = 0;

  virtual void enterTablespace_name(Gauss200Parser::Tablespace_nameContext *ctx) = 0;
  virtual void exitTablespace_name(Gauss200Parser::Tablespace_nameContext *ctx) = 0;

  virtual void enterParameter_list(Gauss200Parser::Parameter_listContext *ctx) = 0;
  virtual void exitParameter_list(Gauss200Parser::Parameter_listContext *ctx) = 0;

  virtual void enterParameter_name(Gauss200Parser::Parameter_nameContext *ctx) = 0;
  virtual void exitParameter_name(Gauss200Parser::Parameter_nameContext *ctx) = 0;

  virtual void enterPartition_name(Gauss200Parser::Partition_nameContext *ctx) = 0;
  virtual void exitPartition_name(Gauss200Parser::Partition_nameContext *ctx) = 0;

  virtual void enterAlter_large_obj_stmt(Gauss200Parser::Alter_large_obj_stmtContext *ctx) = 0;
  virtual void exitAlter_large_obj_stmt(Gauss200Parser::Alter_large_obj_stmtContext *ctx) = 0;

  virtual void enterAlter_node_stmt(Gauss200Parser::Alter_node_stmtContext *ctx) = 0;
  virtual void exitAlter_node_stmt(Gauss200Parser::Alter_node_stmtContext *ctx) = 0;

  virtual void enterNodename(Gauss200Parser::NodenameContext *ctx) = 0;
  virtual void exitNodename(Gauss200Parser::NodenameContext *ctx) = 0;

  virtual void enterParen_node_list(Gauss200Parser::Paren_node_listContext *ctx) = 0;
  virtual void exitParen_node_list(Gauss200Parser::Paren_node_listContext *ctx) = 0;

  virtual void enterNode_list(Gauss200Parser::Node_listContext *ctx) = 0;
  virtual void exitNode_list(Gauss200Parser::Node_listContext *ctx) = 0;

  virtual void enterAlter_node_option(Gauss200Parser::Alter_node_optionContext *ctx) = 0;
  virtual void exitAlter_node_option(Gauss200Parser::Alter_node_optionContext *ctx) = 0;

  virtual void enterAlter_node_group_stmt(Gauss200Parser::Alter_node_group_stmtContext *ctx) = 0;
  virtual void exitAlter_node_group_stmt(Gauss200Parser::Alter_node_group_stmtContext *ctx) = 0;

  virtual void enterAlter_node_group_option(Gauss200Parser::Alter_node_group_optionContext *ctx) = 0;
  virtual void exitAlter_node_group_option(Gauss200Parser::Alter_node_group_optionContext *ctx) = 0;

  virtual void enterAdd_node_list(Gauss200Parser::Add_node_listContext *ctx) = 0;
  virtual void exitAdd_node_list(Gauss200Parser::Add_node_listContext *ctx) = 0;

  virtual void enterDelete_node_list(Gauss200Parser::Delete_node_listContext *ctx) = 0;
  virtual void exitDelete_node_list(Gauss200Parser::Delete_node_listContext *ctx) = 0;

  virtual void enterAlter_resource_pool_stmt(Gauss200Parser::Alter_resource_pool_stmtContext *ctx) = 0;
  virtual void exitAlter_resource_pool_stmt(Gauss200Parser::Alter_resource_pool_stmtContext *ctx) = 0;

  virtual void enterPool_name(Gauss200Parser::Pool_nameContext *ctx) = 0;
  virtual void exitPool_name(Gauss200Parser::Pool_nameContext *ctx) = 0;

  virtual void enterAlter_role_stmt(Gauss200Parser::Alter_role_stmtContext *ctx) = 0;
  virtual void exitAlter_role_stmt(Gauss200Parser::Alter_role_stmtContext *ctx) = 0;

  virtual void enterAlter_role_option(Gauss200Parser::Alter_role_optionContext *ctx) = 0;
  virtual void exitAlter_role_option(Gauss200Parser::Alter_role_optionContext *ctx) = 0;

  virtual void enterAlter_role_with_option(Gauss200Parser::Alter_role_with_optionContext *ctx) = 0;
  virtual void exitAlter_role_with_option(Gauss200Parser::Alter_role_with_optionContext *ctx) = 0;

  virtual void enterAlter_role_encrypt_option(Gauss200Parser::Alter_role_encrypt_optionContext *ctx) = 0;
  virtual void exitAlter_role_encrypt_option(Gauss200Parser::Alter_role_encrypt_optionContext *ctx) = 0;

  virtual void enterLogic_cluster_name(Gauss200Parser::Logic_cluster_nameContext *ctx) = 0;
  virtual void exitLogic_cluster_name(Gauss200Parser::Logic_cluster_nameContext *ctx) = 0;

  virtual void enterAlter_role_level_security_policy_stmt(Gauss200Parser::Alter_role_level_security_policy_stmtContext *ctx) = 0;
  virtual void exitAlter_role_level_security_policy_stmt(Gauss200Parser::Alter_role_level_security_policy_stmtContext *ctx) = 0;

  virtual void enterRow_level_security(Gauss200Parser::Row_level_securityContext *ctx) = 0;
  virtual void exitRow_level_security(Gauss200Parser::Row_level_securityContext *ctx) = 0;

  virtual void enterPolicy_name(Gauss200Parser::Policy_nameContext *ctx) = 0;
  virtual void exitPolicy_name(Gauss200Parser::Policy_nameContext *ctx) = 0;

  virtual void enterAlter_role_level_security_policy_option(Gauss200Parser::Alter_role_level_security_policy_optionContext *ctx) = 0;
  virtual void exitAlter_role_level_security_policy_option(Gauss200Parser::Alter_role_level_security_policy_optionContext *ctx) = 0;

  virtual void enterUsing_expr_option(Gauss200Parser::Using_expr_optionContext *ctx) = 0;
  virtual void exitUsing_expr_option(Gauss200Parser::Using_expr_optionContext *ctx) = 0;

  virtual void enterAlter_schema_stmt(Gauss200Parser::Alter_schema_stmtContext *ctx) = 0;
  virtual void exitAlter_schema_stmt(Gauss200Parser::Alter_schema_stmtContext *ctx) = 0;

  virtual void enterAlter_sequence_stmt(Gauss200Parser::Alter_sequence_stmtContext *ctx) = 0;
  virtual void exitAlter_sequence_stmt(Gauss200Parser::Alter_sequence_stmtContext *ctx) = 0;

  virtual void enterSequence_name(Gauss200Parser::Sequence_nameContext *ctx) = 0;
  virtual void exitSequence_name(Gauss200Parser::Sequence_nameContext *ctx) = 0;

  virtual void enterAlter_seq_option(Gauss200Parser::Alter_seq_optionContext *ctx) = 0;
  virtual void exitAlter_seq_option(Gauss200Parser::Alter_seq_optionContext *ctx) = 0;

  virtual void enterAlter_server_stmt(Gauss200Parser::Alter_server_stmtContext *ctx) = 0;
  virtual void exitAlter_server_stmt(Gauss200Parser::Alter_server_stmtContext *ctx) = 0;

  virtual void enterServer_name(Gauss200Parser::Server_nameContext *ctx) = 0;
  virtual void exitServer_name(Gauss200Parser::Server_nameContext *ctx) = 0;

  virtual void enterAlter_server_option(Gauss200Parser::Alter_server_optionContext *ctx) = 0;
  virtual void exitAlter_server_option(Gauss200Parser::Alter_server_optionContext *ctx) = 0;

  virtual void enterAlter_session_stmt(Gauss200Parser::Alter_session_stmtContext *ctx) = 0;
  virtual void exitAlter_session_stmt(Gauss200Parser::Alter_session_stmtContext *ctx) = 0;

  virtual void enterAlter_session_option(Gauss200Parser::Alter_session_optionContext *ctx) = 0;
  virtual void exitAlter_session_option(Gauss200Parser::Alter_session_optionContext *ctx) = 0;

  virtual void enterAlter_session_transaction_param_list(Gauss200Parser::Alter_session_transaction_param_listContext *ctx) = 0;
  virtual void exitAlter_session_transaction_param_list(Gauss200Parser::Alter_session_transaction_param_listContext *ctx) = 0;

  virtual void enterAlter_session_transaction_param(Gauss200Parser::Alter_session_transaction_paramContext *ctx) = 0;
  virtual void exitAlter_session_transaction_param(Gauss200Parser::Alter_session_transaction_paramContext *ctx) = 0;

  virtual void enterAlter_session_runtime_param(Gauss200Parser::Alter_session_runtime_paramContext *ctx) = 0;
  virtual void exitAlter_session_runtime_param(Gauss200Parser::Alter_session_runtime_paramContext *ctx) = 0;

  virtual void enterExpr_default(Gauss200Parser::Expr_defaultContext *ctx) = 0;
  virtual void exitExpr_default(Gauss200Parser::Expr_defaultContext *ctx) = 0;

  virtual void enterEncoding_name(Gauss200Parser::Encoding_nameContext *ctx) = 0;
  virtual void exitEncoding_name(Gauss200Parser::Encoding_nameContext *ctx) = 0;

  virtual void enterAlter_sys_kill_session_stmt(Gauss200Parser::Alter_sys_kill_session_stmtContext *ctx) = 0;
  virtual void exitAlter_sys_kill_session_stmt(Gauss200Parser::Alter_sys_kill_session_stmtContext *ctx) = 0;

  virtual void enterAlter_table_stmt(Gauss200Parser::Alter_table_stmtContext *ctx) = 0;
  virtual void exitAlter_table_stmt(Gauss200Parser::Alter_table_stmtContext *ctx) = 0;

  virtual void enterAlter_table_name(Gauss200Parser::Alter_table_nameContext *ctx) = 0;
  virtual void exitAlter_table_name(Gauss200Parser::Alter_table_nameContext *ctx) = 0;

  virtual void enterAlter_table_stmt_option(Gauss200Parser::Alter_table_stmt_optionContext *ctx) = 0;
  virtual void exitAlter_table_stmt_option(Gauss200Parser::Alter_table_stmt_optionContext *ctx) = 0;

  virtual void enterAlter_table_option(Gauss200Parser::Alter_table_optionContext *ctx) = 0;
  virtual void exitAlter_table_option(Gauss200Parser::Alter_table_optionContext *ctx) = 0;

  virtual void enterAlter_table_action_list(Gauss200Parser::Alter_table_action_listContext *ctx) = 0;
  virtual void exitAlter_table_action_list(Gauss200Parser::Alter_table_action_listContext *ctx) = 0;

  virtual void enterColumn_clause(Gauss200Parser::Column_clauseContext *ctx) = 0;
  virtual void exitColumn_clause(Gauss200Parser::Column_clauseContext *ctx) = 0;

  virtual void enterColumn_clause_add_column_option(Gauss200Parser::Column_clause_add_column_optionContext *ctx) = 0;
  virtual void exitColumn_clause_add_column_option(Gauss200Parser::Column_clause_add_column_optionContext *ctx) = 0;

  virtual void enterColumn_with_type(Gauss200Parser::Column_with_typeContext *ctx) = 0;
  virtual void exitColumn_with_type(Gauss200Parser::Column_with_typeContext *ctx) = 0;

  virtual void enterCompress_type(Gauss200Parser::Compress_typeContext *ctx) = 0;
  virtual void exitCompress_type(Gauss200Parser::Compress_typeContext *ctx) = 0;

  virtual void enterCollate_option(Gauss200Parser::Collate_optionContext *ctx) = 0;
  virtual void exitCollate_option(Gauss200Parser::Collate_optionContext *ctx) = 0;

  virtual void enterCollation(Gauss200Parser::CollationContext *ctx) = 0;
  virtual void exitCollation(Gauss200Parser::CollationContext *ctx) = 0;

  virtual void enterAlter_table_column_constraint(Gauss200Parser::Alter_table_column_constraintContext *ctx) = 0;
  virtual void exitAlter_table_column_constraint(Gauss200Parser::Alter_table_column_constraintContext *ctx) = 0;

  virtual void enterColumn_constraint_option(Gauss200Parser::Column_constraint_optionContext *ctx) = 0;
  virtual void exitColumn_constraint_option(Gauss200Parser::Column_constraint_optionContext *ctx) = 0;

  virtual void enterColumn_clause_alter_column_option(Gauss200Parser::Column_clause_alter_column_optionContext *ctx) = 0;
  virtual void exitColumn_clause_alter_column_option(Gauss200Parser::Column_clause_alter_column_optionContext *ctx) = 0;

  virtual void enterAlter_table_constraint(Gauss200Parser::Alter_table_constraintContext *ctx) = 0;
  virtual void exitAlter_table_constraint(Gauss200Parser::Alter_table_constraintContext *ctx) = 0;

  virtual void enterAlter_table_constraint_option(Gauss200Parser::Alter_table_constraint_optionContext *ctx) = 0;
  virtual void exitAlter_table_constraint_option(Gauss200Parser::Alter_table_constraint_optionContext *ctx) = 0;

  virtual void enterParen_column_list(Gauss200Parser::Paren_column_listContext *ctx) = 0;
  virtual void exitParen_column_list(Gauss200Parser::Paren_column_listContext *ctx) = 0;

  virtual void enterIndex_parameters(Gauss200Parser::Index_parametersContext *ctx) = 0;
  virtual void exitIndex_parameters(Gauss200Parser::Index_parametersContext *ctx) = 0;

  virtual void enterTable_constraint_deferrable(Gauss200Parser::Table_constraint_deferrableContext *ctx) = 0;
  virtual void exitTable_constraint_deferrable(Gauss200Parser::Table_constraint_deferrableContext *ctx) = 0;

  virtual void enterTable_constraint_using_index(Gauss200Parser::Table_constraint_using_indexContext *ctx) = 0;
  virtual void exitTable_constraint_using_index(Gauss200Parser::Table_constraint_using_indexContext *ctx) = 0;

  virtual void enterTrigger_name(Gauss200Parser::Trigger_nameContext *ctx) = 0;
  virtual void exitTrigger_name(Gauss200Parser::Trigger_nameContext *ctx) = 0;

  virtual void enterAlter_table_partition_option(Gauss200Parser::Alter_table_partition_optionContext *ctx) = 0;
  virtual void exitAlter_table_partition_option(Gauss200Parser::Alter_table_partition_optionContext *ctx) = 0;

  virtual void enterAlter_table_partition_action(Gauss200Parser::Alter_table_partition_actionContext *ctx) = 0;
  virtual void exitAlter_table_partition_action(Gauss200Parser::Alter_table_partition_actionContext *ctx) = 0;

  virtual void enterMove_clause(Gauss200Parser::Move_clauseContext *ctx) = 0;
  virtual void exitMove_clause(Gauss200Parser::Move_clauseContext *ctx) = 0;

  virtual void enterParen_partition_value_list(Gauss200Parser::Paren_partition_value_listContext *ctx) = 0;
  virtual void exitParen_partition_value_list(Gauss200Parser::Paren_partition_value_listContext *ctx) = 0;

  virtual void enterParen_partition_value(Gauss200Parser::Paren_partition_valueContext *ctx) = 0;
  virtual void exitParen_partition_value(Gauss200Parser::Paren_partition_valueContext *ctx) = 0;

  virtual void enterPartition_value(Gauss200Parser::Partition_valueContext *ctx) = 0;
  virtual void exitPartition_value(Gauss200Parser::Partition_valueContext *ctx) = 0;

  virtual void enterExchange_clause(Gauss200Parser::Exchange_clauseContext *ctx) = 0;
  virtual void exitExchange_clause(Gauss200Parser::Exchange_clauseContext *ctx) = 0;

  virtual void enterRow_clause(Gauss200Parser::Row_clauseContext *ctx) = 0;
  virtual void exitRow_clause(Gauss200Parser::Row_clauseContext *ctx) = 0;

  virtual void enterMerge_clause(Gauss200Parser::Merge_clauseContext *ctx) = 0;
  virtual void exitMerge_clause(Gauss200Parser::Merge_clauseContext *ctx) = 0;

  virtual void enterModify_clause(Gauss200Parser::Modify_clauseContext *ctx) = 0;
  virtual void exitModify_clause(Gauss200Parser::Modify_clauseContext *ctx) = 0;

  virtual void enterSplit_clause(Gauss200Parser::Split_clauseContext *ctx) = 0;
  virtual void exitSplit_clause(Gauss200Parser::Split_clauseContext *ctx) = 0;

  virtual void enterSplit_point_clause(Gauss200Parser::Split_point_clauseContext *ctx) = 0;
  virtual void exitSplit_point_clause(Gauss200Parser::Split_point_clauseContext *ctx) = 0;

  virtual void enterSplit_point_clause_option(Gauss200Parser::Split_point_clause_optionContext *ctx) = 0;
  virtual void exitSplit_point_clause_option(Gauss200Parser::Split_point_clause_optionContext *ctx) = 0;

  virtual void enterNo_split_point_clause(Gauss200Parser::No_split_point_clauseContext *ctx) = 0;
  virtual void exitNo_split_point_clause(Gauss200Parser::No_split_point_clauseContext *ctx) = 0;

  virtual void enterPartition_item_list(Gauss200Parser::Partition_item_listContext *ctx) = 0;
  virtual void exitPartition_item_list(Gauss200Parser::Partition_item_listContext *ctx) = 0;

  virtual void enterPartition_item(Gauss200Parser::Partition_itemContext *ctx) = 0;
  virtual void exitPartition_item(Gauss200Parser::Partition_itemContext *ctx) = 0;

  virtual void enterPartition_less_than_item(Gauss200Parser::Partition_less_than_itemContext *ctx) = 0;
  virtual void exitPartition_less_than_item(Gauss200Parser::Partition_less_than_itemContext *ctx) = 0;

  virtual void enterPartition_start_end_item(Gauss200Parser::Partition_start_end_itemContext *ctx) = 0;
  virtual void exitPartition_start_end_item(Gauss200Parser::Partition_start_end_itemContext *ctx) = 0;

  virtual void enterPartition_start_end_item_option(Gauss200Parser::Partition_start_end_item_optionContext *ctx) = 0;
  virtual void exitPartition_start_end_item_option(Gauss200Parser::Partition_start_end_item_optionContext *ctx) = 0;

  virtual void enterAdd_clause(Gauss200Parser::Add_clauseContext *ctx) = 0;
  virtual void exitAdd_clause(Gauss200Parser::Add_clauseContext *ctx) = 0;

  virtual void enterDrop_clause(Gauss200Parser::Drop_clauseContext *ctx) = 0;
  virtual void exitDrop_clause(Gauss200Parser::Drop_clauseContext *ctx) = 0;

  virtual void enterAlter_tablespace_stmt(Gauss200Parser::Alter_tablespace_stmtContext *ctx) = 0;
  virtual void exitAlter_tablespace_stmt(Gauss200Parser::Alter_tablespace_stmtContext *ctx) = 0;

  virtual void enterAlter_tablespace_option(Gauss200Parser::Alter_tablespace_optionContext *ctx) = 0;
  virtual void exitAlter_tablespace_option(Gauss200Parser::Alter_tablespace_optionContext *ctx) = 0;

  virtual void enterAlter_txt_search_conf_stmt(Gauss200Parser::Alter_txt_search_conf_stmtContext *ctx) = 0;
  virtual void exitAlter_txt_search_conf_stmt(Gauss200Parser::Alter_txt_search_conf_stmtContext *ctx) = 0;

  virtual void enterConfiguration_name(Gauss200Parser::Configuration_nameContext *ctx) = 0;
  virtual void exitConfiguration_name(Gauss200Parser::Configuration_nameContext *ctx) = 0;

  virtual void enterAlter_txt_search_conf_option(Gauss200Parser::Alter_txt_search_conf_optionContext *ctx) = 0;
  virtual void exitAlter_txt_search_conf_option(Gauss200Parser::Alter_txt_search_conf_optionContext *ctx) = 0;

  virtual void enterToken_type_list(Gauss200Parser::Token_type_listContext *ctx) = 0;
  virtual void exitToken_type_list(Gauss200Parser::Token_type_listContext *ctx) = 0;

  virtual void enterToken_type(Gauss200Parser::Token_typeContext *ctx) = 0;
  virtual void exitToken_type(Gauss200Parser::Token_typeContext *ctx) = 0;

  virtual void enterDictionary_name_list(Gauss200Parser::Dictionary_name_listContext *ctx) = 0;
  virtual void exitDictionary_name_list(Gauss200Parser::Dictionary_name_listContext *ctx) = 0;

  virtual void enterDictionary_name(Gauss200Parser::Dictionary_nameContext *ctx) = 0;
  virtual void exitDictionary_name(Gauss200Parser::Dictionary_nameContext *ctx) = 0;

  virtual void enterAlter_txt_search_dictionary_stmt(Gauss200Parser::Alter_txt_search_dictionary_stmtContext *ctx) = 0;
  virtual void exitAlter_txt_search_dictionary_stmt(Gauss200Parser::Alter_txt_search_dictionary_stmtContext *ctx) = 0;

  virtual void enterAlter_txt_search_dictionary_option(Gauss200Parser::Alter_txt_search_dictionary_optionContext *ctx) = 0;
  virtual void exitAlter_txt_search_dictionary_option(Gauss200Parser::Alter_txt_search_dictionary_optionContext *ctx) = 0;

  virtual void enterAlter_trigger_stmt(Gauss200Parser::Alter_trigger_stmtContext *ctx) = 0;
  virtual void exitAlter_trigger_stmt(Gauss200Parser::Alter_trigger_stmtContext *ctx) = 0;

  virtual void enterAlter_type_stmt(Gauss200Parser::Alter_type_stmtContext *ctx) = 0;
  virtual void exitAlter_type_stmt(Gauss200Parser::Alter_type_stmtContext *ctx) = 0;

  virtual void enterType_name(Gauss200Parser::Type_nameContext *ctx) = 0;
  virtual void exitType_name(Gauss200Parser::Type_nameContext *ctx) = 0;

  virtual void enterAlter_type_option(Gauss200Parser::Alter_type_optionContext *ctx) = 0;
  virtual void exitAlter_type_option(Gauss200Parser::Alter_type_optionContext *ctx) = 0;

  virtual void enterAlter_type_action_list(Gauss200Parser::Alter_type_action_listContext *ctx) = 0;
  virtual void exitAlter_type_action_list(Gauss200Parser::Alter_type_action_listContext *ctx) = 0;

  virtual void enterAlter_type_action(Gauss200Parser::Alter_type_actionContext *ctx) = 0;
  virtual void exitAlter_type_action(Gauss200Parser::Alter_type_actionContext *ctx) = 0;

  virtual void enterAttr_name(Gauss200Parser::Attr_nameContext *ctx) = 0;
  virtual void exitAttr_name(Gauss200Parser::Attr_nameContext *ctx) = 0;

  virtual void enterEnum_value(Gauss200Parser::Enum_valueContext *ctx) = 0;
  virtual void exitEnum_value(Gauss200Parser::Enum_valueContext *ctx) = 0;

  virtual void enterAlter_type_add_attr_option(Gauss200Parser::Alter_type_add_attr_optionContext *ctx) = 0;
  virtual void exitAlter_type_add_attr_option(Gauss200Parser::Alter_type_add_attr_optionContext *ctx) = 0;

  virtual void enterAlter_type_drop_attr_option(Gauss200Parser::Alter_type_drop_attr_optionContext *ctx) = 0;
  virtual void exitAlter_type_drop_attr_option(Gauss200Parser::Alter_type_drop_attr_optionContext *ctx) = 0;

  virtual void enterAlter_type_alter_attr(Gauss200Parser::Alter_type_alter_attrContext *ctx) = 0;
  virtual void exitAlter_type_alter_attr(Gauss200Parser::Alter_type_alter_attrContext *ctx) = 0;

  virtual void enterAlter_user_stmt(Gauss200Parser::Alter_user_stmtContext *ctx) = 0;
  virtual void exitAlter_user_stmt(Gauss200Parser::Alter_user_stmtContext *ctx) = 0;

  virtual void enterAlter_user_clause(Gauss200Parser::Alter_user_clauseContext *ctx) = 0;
  virtual void exitAlter_user_clause(Gauss200Parser::Alter_user_clauseContext *ctx) = 0;

  virtual void enterAlter_view_stmt(Gauss200Parser::Alter_view_stmtContext *ctx) = 0;
  virtual void exitAlter_view_stmt(Gauss200Parser::Alter_view_stmtContext *ctx) = 0;

  virtual void enterView_name(Gauss200Parser::View_nameContext *ctx) = 0;
  virtual void exitView_name(Gauss200Parser::View_nameContext *ctx) = 0;

  virtual void enterAlter_view_option(Gauss200Parser::Alter_view_optionContext *ctx) = 0;
  virtual void exitAlter_view_option(Gauss200Parser::Alter_view_optionContext *ctx) = 0;

  virtual void enterWorkload_group_stmt(Gauss200Parser::Workload_group_stmtContext *ctx) = 0;
  virtual void exitWorkload_group_stmt(Gauss200Parser::Workload_group_stmtContext *ctx) = 0;

  virtual void enterCreate_group_mapping_stmt(Gauss200Parser::Create_group_mapping_stmtContext *ctx) = 0;
  virtual void exitCreate_group_mapping_stmt(Gauss200Parser::Create_group_mapping_stmtContext *ctx) = 0;

  virtual void enterCreate_barrier_stmt(Gauss200Parser::Create_barrier_stmtContext *ctx) = 0;
  virtual void exitCreate_barrier_stmt(Gauss200Parser::Create_barrier_stmtContext *ctx) = 0;

  virtual void enterBarrier_name(Gauss200Parser::Barrier_nameContext *ctx) = 0;
  virtual void exitBarrier_name(Gauss200Parser::Barrier_nameContext *ctx) = 0;

  virtual void enterCreate_database_stmt(Gauss200Parser::Create_database_stmtContext *ctx) = 0;
  virtual void exitCreate_database_stmt(Gauss200Parser::Create_database_stmtContext *ctx) = 0;

  virtual void enterCreate_data_source_stmt(Gauss200Parser::Create_data_source_stmtContext *ctx) = 0;
  virtual void exitCreate_data_source_stmt(Gauss200Parser::Create_data_source_stmtContext *ctx) = 0;

  virtual void enterCreate_directory_stmt(Gauss200Parser::Create_directory_stmtContext *ctx) = 0;
  virtual void exitCreate_directory_stmt(Gauss200Parser::Create_directory_stmtContext *ctx) = 0;

  virtual void enterOr_replace(Gauss200Parser::Or_replaceContext *ctx) = 0;
  virtual void exitOr_replace(Gauss200Parser::Or_replaceContext *ctx) = 0;

  virtual void enterCreate_foreign_table_stmt(Gauss200Parser::Create_foreign_table_stmtContext *ctx) = 0;
  virtual void exitCreate_foreign_table_stmt(Gauss200Parser::Create_foreign_table_stmtContext *ctx) = 0;

  virtual void enterCreate_foreign_table_option(Gauss200Parser::Create_foreign_table_optionContext *ctx) = 0;
  virtual void exitCreate_foreign_table_option(Gauss200Parser::Create_foreign_table_optionContext *ctx) = 0;

  virtual void enterCreate_foreign_table_import_export_option(Gauss200Parser::Create_foreign_table_import_export_optionContext *ctx) = 0;
  virtual void exitCreate_foreign_table_import_export_option(Gauss200Parser::Create_foreign_table_import_export_optionContext *ctx) = 0;

  virtual void enterForeign_table_import_export_column_type_list(Gauss200Parser::Foreign_table_import_export_column_type_listContext *ctx) = 0;
  virtual void exitForeign_table_import_export_column_type_list(Gauss200Parser::Foreign_table_import_export_column_type_listContext *ctx) = 0;

  virtual void enterForeign_table_import_export_column_type(Gauss200Parser::Foreign_table_import_export_column_typeContext *ctx) = 0;
  virtual void exitForeign_table_import_export_column_type(Gauss200Parser::Foreign_table_import_export_column_typeContext *ctx) = 0;

  virtual void enterTable_constraint_to_group_node(Gauss200Parser::Table_constraint_to_group_nodeContext *ctx) = 0;
  virtual void exitTable_constraint_to_group_node(Gauss200Parser::Table_constraint_to_group_nodeContext *ctx) = 0;

  virtual void enterCreate_foreign_table_on_hadoop_option(Gauss200Parser::Create_foreign_table_on_hadoop_optionContext *ctx) = 0;
  virtual void exitCreate_foreign_table_on_hadoop_option(Gauss200Parser::Create_foreign_table_on_hadoop_optionContext *ctx) = 0;

  virtual void enterForeign_table_on_hadoop_column_type_list(Gauss200Parser::Foreign_table_on_hadoop_column_type_listContext *ctx) = 0;
  virtual void exitForeign_table_on_hadoop_column_type_list(Gauss200Parser::Foreign_table_on_hadoop_column_type_listContext *ctx) = 0;

  virtual void enterForeign_table_on_hadoop_column_type(Gauss200Parser::Foreign_table_on_hadoop_column_typeContext *ctx) = 0;
  virtual void exitForeign_table_on_hadoop_column_type(Gauss200Parser::Foreign_table_on_hadoop_column_typeContext *ctx) = 0;

  virtual void enterCreate_foreign_table_column_constraint(Gauss200Parser::Create_foreign_table_column_constraintContext *ctx) = 0;
  virtual void exitCreate_foreign_table_column_constraint(Gauss200Parser::Create_foreign_table_column_constraintContext *ctx) = 0;

  virtual void enterCreate_function_procedure_stmt(Gauss200Parser::Create_function_procedure_stmtContext *ctx) = 0;
  virtual void exitCreate_function_procedure_stmt(Gauss200Parser::Create_function_procedure_stmtContext *ctx) = 0;

  virtual void enterCreate_func_arg_list(Gauss200Parser::Create_func_arg_listContext *ctx) = 0;
  virtual void exitCreate_func_arg_list(Gauss200Parser::Create_func_arg_listContext *ctx) = 0;

  virtual void enterCreate_func_arg(Gauss200Parser::Create_func_argContext *ctx) = 0;
  virtual void exitCreate_func_arg(Gauss200Parser::Create_func_argContext *ctx) = 0;

  virtual void enterFunc_return_type(Gauss200Parser::Func_return_typeContext *ctx) = 0;
  virtual void exitFunc_return_type(Gauss200Parser::Func_return_typeContext *ctx) = 0;

  virtual void enterLang_name(Gauss200Parser::Lang_nameContext *ctx) = 0;
  virtual void exitLang_name(Gauss200Parser::Lang_nameContext *ctx) = 0;

  virtual void enterCreate_func_procedure_as_option(Gauss200Parser::Create_func_procedure_as_optionContext *ctx) = 0;
  virtual void exitCreate_func_procedure_as_option(Gauss200Parser::Create_func_procedure_as_optionContext *ctx) = 0;

  virtual void enterCreate_group_stmt(Gauss200Parser::Create_group_stmtContext *ctx) = 0;
  virtual void exitCreate_group_stmt(Gauss200Parser::Create_group_stmtContext *ctx) = 0;

  virtual void enterCreate_index_stmt(Gauss200Parser::Create_index_stmtContext *ctx) = 0;
  virtual void exitCreate_index_stmt(Gauss200Parser::Create_index_stmtContext *ctx) = 0;

  virtual void enterCreate_index_column_list(Gauss200Parser::Create_index_column_listContext *ctx) = 0;
  virtual void exitCreate_index_column_list(Gauss200Parser::Create_index_column_listContext *ctx) = 0;

  virtual void enterCreate_index_column(Gauss200Parser::Create_index_columnContext *ctx) = 0;
  virtual void exitCreate_index_column(Gauss200Parser::Create_index_columnContext *ctx) = 0;

  virtual void enterOpclass(Gauss200Parser::OpclassContext *ctx) = 0;
  virtual void exitOpclass(Gauss200Parser::OpclassContext *ctx) = 0;

  virtual void enterAsc_desc(Gauss200Parser::Asc_descContext *ctx) = 0;
  virtual void exitAsc_desc(Gauss200Parser::Asc_descContext *ctx) = 0;

  virtual void enterNulls_first_last(Gauss200Parser::Nulls_first_lastContext *ctx) = 0;
  virtual void exitNulls_first_last(Gauss200Parser::Nulls_first_lastContext *ctx) = 0;

  virtual void enterCreate_node_stmt(Gauss200Parser::Create_node_stmtContext *ctx) = 0;
  virtual void exitCreate_node_stmt(Gauss200Parser::Create_node_stmtContext *ctx) = 0;

  virtual void enterCreate_node_group_stmt(Gauss200Parser::Create_node_group_stmtContext *ctx) = 0;
  virtual void exitCreate_node_group_stmt(Gauss200Parser::Create_node_group_stmtContext *ctx) = 0;

  virtual void enterCreate_row_level_security_policy_stmt(Gauss200Parser::Create_row_level_security_policy_stmtContext *ctx) = 0;
  virtual void exitCreate_row_level_security_policy_stmt(Gauss200Parser::Create_row_level_security_policy_stmtContext *ctx) = 0;

  virtual void enterRow_level_security_policy_objects(Gauss200Parser::Row_level_security_policy_objectsContext *ctx) = 0;
  virtual void exitRow_level_security_policy_objects(Gauss200Parser::Row_level_security_policy_objectsContext *ctx) = 0;

  virtual void enterRow_level_security_policy_obj(Gauss200Parser::Row_level_security_policy_objContext *ctx) = 0;
  virtual void exitRow_level_security_policy_obj(Gauss200Parser::Row_level_security_policy_objContext *ctx) = 0;

  virtual void enterCreate_source_pool_stmt(Gauss200Parser::Create_source_pool_stmtContext *ctx) = 0;
  virtual void exitCreate_source_pool_stmt(Gauss200Parser::Create_source_pool_stmtContext *ctx) = 0;

  virtual void enterCreate_role_stmt(Gauss200Parser::Create_role_stmtContext *ctx) = 0;
  virtual void exitCreate_role_stmt(Gauss200Parser::Create_role_stmtContext *ctx) = 0;

  virtual void enterCreate_schema_stmt(Gauss200Parser::Create_schema_stmtContext *ctx) = 0;
  virtual void exitCreate_schema_stmt(Gauss200Parser::Create_schema_stmtContext *ctx) = 0;

  virtual void enterCreate_schema_option(Gauss200Parser::Create_schema_optionContext *ctx) = 0;
  virtual void exitCreate_schema_option(Gauss200Parser::Create_schema_optionContext *ctx) = 0;

  virtual void enterSchema_element(Gauss200Parser::Schema_elementContext *ctx) = 0;
  virtual void exitSchema_element(Gauss200Parser::Schema_elementContext *ctx) = 0;

  virtual void enterCreate_sequence_stmt(Gauss200Parser::Create_sequence_stmtContext *ctx) = 0;
  virtual void exitCreate_sequence_stmt(Gauss200Parser::Create_sequence_stmtContext *ctx) = 0;

  virtual void enterMinvalue_option(Gauss200Parser::Minvalue_optionContext *ctx) = 0;
  virtual void exitMinvalue_option(Gauss200Parser::Minvalue_optionContext *ctx) = 0;

  virtual void enterMaxvalue_option(Gauss200Parser::Maxvalue_optionContext *ctx) = 0;
  virtual void exitMaxvalue_option(Gauss200Parser::Maxvalue_optionContext *ctx) = 0;

  virtual void enterCreate_server_stmt(Gauss200Parser::Create_server_stmtContext *ctx) = 0;
  virtual void exitCreate_server_stmt(Gauss200Parser::Create_server_stmtContext *ctx) = 0;

  virtual void enterCreate_table_stmt(Gauss200Parser::Create_table_stmtContext *ctx) = 0;
  virtual void exitCreate_table_stmt(Gauss200Parser::Create_table_stmtContext *ctx) = 0;

  virtual void enterTemporary_temp(Gauss200Parser::Temporary_tempContext *ctx) = 0;
  virtual void exitTemporary_temp(Gauss200Parser::Temporary_tempContext *ctx) = 0;

  virtual void enterCreate_table_column_type_option_list(Gauss200Parser::Create_table_column_type_option_listContext *ctx) = 0;
  virtual void exitCreate_table_column_type_option_list(Gauss200Parser::Create_table_column_type_option_listContext *ctx) = 0;

  virtual void enterCreate_table_column_type_option(Gauss200Parser::Create_table_column_type_optionContext *ctx) = 0;
  virtual void exitCreate_table_column_type_option(Gauss200Parser::Create_table_column_type_optionContext *ctx) = 0;

  virtual void enterLike_option(Gauss200Parser::Like_optionContext *ctx) = 0;
  virtual void exitLike_option(Gauss200Parser::Like_optionContext *ctx) = 0;

  virtual void enterLike_option_other(Gauss200Parser::Like_option_otherContext *ctx) = 0;
  virtual void exitLike_option_other(Gauss200Parser::Like_option_otherContext *ctx) = 0;

  virtual void enterCreate_table_stmt_option(Gauss200Parser::Create_table_stmt_optionContext *ctx) = 0;
  virtual void exitCreate_table_stmt_option(Gauss200Parser::Create_table_stmt_optionContext *ctx) = 0;

  virtual void enterCreate_table_as_option(Gauss200Parser::Create_table_as_optionContext *ctx) = 0;
  virtual void exitCreate_table_as_option(Gauss200Parser::Create_table_as_optionContext *ctx) = 0;

  virtual void enterCreate_table_partition_stmt(Gauss200Parser::Create_table_partition_stmtContext *ctx) = 0;
  virtual void exitCreate_table_partition_stmt(Gauss200Parser::Create_table_partition_stmtContext *ctx) = 0;

  virtual void enterPartition_by_option(Gauss200Parser::Partition_by_optionContext *ctx) = 0;
  virtual void exitPartition_by_option(Gauss200Parser::Partition_by_optionContext *ctx) = 0;

  virtual void enterParen_partition_key(Gauss200Parser::Paren_partition_keyContext *ctx) = 0;
  virtual void exitParen_partition_key(Gauss200Parser::Paren_partition_keyContext *ctx) = 0;

  virtual void enterPartition_key(Gauss200Parser::Partition_keyContext *ctx) = 0;
  virtual void exitPartition_key(Gauss200Parser::Partition_keyContext *ctx) = 0;

  virtual void enterCreate_tablespace_stmt(Gauss200Parser::Create_tablespace_stmtContext *ctx) = 0;
  virtual void exitCreate_tablespace_stmt(Gauss200Parser::Create_tablespace_stmtContext *ctx) = 0;

  virtual void enterCreate_txt_search_stmt(Gauss200Parser::Create_txt_search_stmtContext *ctx) = 0;
  virtual void exitCreate_txt_search_stmt(Gauss200Parser::Create_txt_search_stmtContext *ctx) = 0;

  virtual void enterCreate_trigger_stmt(Gauss200Parser::Create_trigger_stmtContext *ctx) = 0;
  virtual void exitCreate_trigger_stmt(Gauss200Parser::Create_trigger_stmtContext *ctx) = 0;

  virtual void enterTrigger_type(Gauss200Parser::Trigger_typeContext *ctx) = 0;
  virtual void exitTrigger_type(Gauss200Parser::Trigger_typeContext *ctx) = 0;

  virtual void enterTrigger_event_list(Gauss200Parser::Trigger_event_listContext *ctx) = 0;
  virtual void exitTrigger_event_list(Gauss200Parser::Trigger_event_listContext *ctx) = 0;

  virtual void enterTrigger_event(Gauss200Parser::Trigger_eventContext *ctx) = 0;
  virtual void exitTrigger_event(Gauss200Parser::Trigger_eventContext *ctx) = 0;

  virtual void enterCreate_trigger_option(Gauss200Parser::Create_trigger_optionContext *ctx) = 0;
  virtual void exitCreate_trigger_option(Gauss200Parser::Create_trigger_optionContext *ctx) = 0;

  virtual void enterCreate_type_stmt(Gauss200Parser::Create_type_stmtContext *ctx) = 0;
  virtual void exitCreate_type_stmt(Gauss200Parser::Create_type_stmtContext *ctx) = 0;

  virtual void enterCreate_type_option(Gauss200Parser::Create_type_optionContext *ctx) = 0;
  virtual void exitCreate_type_option(Gauss200Parser::Create_type_optionContext *ctx) = 0;

  virtual void enterCreate_user_stmt(Gauss200Parser::Create_user_stmtContext *ctx) = 0;
  virtual void exitCreate_user_stmt(Gauss200Parser::Create_user_stmtContext *ctx) = 0;

  virtual void enterCreate_view_stmt(Gauss200Parser::Create_view_stmtContext *ctx) = 0;
  virtual void exitCreate_view_stmt(Gauss200Parser::Create_view_stmtContext *ctx) = 0;

  virtual void enterData_manipulate_stmt(Gauss200Parser::Data_manipulate_stmtContext *ctx) = 0;
  virtual void exitData_manipulate_stmt(Gauss200Parser::Data_manipulate_stmtContext *ctx) = 0;

  virtual void enterSelect_stmt(Gauss200Parser::Select_stmtContext *ctx) = 0;
  virtual void exitSelect_stmt(Gauss200Parser::Select_stmtContext *ctx) = 0;

  virtual void enterSubquery_basic_elements(Gauss200Parser::Subquery_basic_elementsContext *ctx) = 0;
  virtual void exitSubquery_basic_elements(Gauss200Parser::Subquery_basic_elementsContext *ctx) = 0;

  virtual void enterSelect_with_parens(Gauss200Parser::Select_with_parensContext *ctx) = 0;
  virtual void exitSelect_with_parens(Gauss200Parser::Select_with_parensContext *ctx) = 0;

  virtual void enterSubquery_operation_part(Gauss200Parser::Subquery_operation_partContext *ctx) = 0;
  virtual void exitSubquery_operation_part(Gauss200Parser::Subquery_operation_partContext *ctx) = 0;

  virtual void enterSubquery(Gauss200Parser::SubqueryContext *ctx) = 0;
  virtual void exitSubquery(Gauss200Parser::SubqueryContext *ctx) = 0;

  virtual void enterSimple_select(Gauss200Parser::Simple_selectContext *ctx) = 0;
  virtual void exitSimple_select(Gauss200Parser::Simple_selectContext *ctx) = 0;

  virtual void enterAll_distinct(Gauss200Parser::All_distinctContext *ctx) = 0;
  virtual void exitAll_distinct(Gauss200Parser::All_distinctContext *ctx) = 0;

  virtual void enterSelected_list(Gauss200Parser::Selected_listContext *ctx) = 0;
  virtual void exitSelected_list(Gauss200Parser::Selected_listContext *ctx) = 0;

  virtual void enterSelected_list_element(Gauss200Parser::Selected_list_elementContext *ctx) = 0;
  virtual void exitSelected_list_element(Gauss200Parser::Selected_list_elementContext *ctx) = 0;

  virtual void enterInto_clause(Gauss200Parser::Into_clauseContext *ctx) = 0;
  virtual void exitInto_clause(Gauss200Parser::Into_clauseContext *ctx) = 0;

  virtual void enterFrom_clause(Gauss200Parser::From_clauseContext *ctx) = 0;
  virtual void exitFrom_clause(Gauss200Parser::From_clauseContext *ctx) = 0;

  virtual void enterFrom_list(Gauss200Parser::From_listContext *ctx) = 0;
  virtual void exitFrom_list(Gauss200Parser::From_listContext *ctx) = 0;

  virtual void enterTable_ref(Gauss200Parser::Table_refContext *ctx) = 0;
  virtual void exitTable_ref(Gauss200Parser::Table_refContext *ctx) = 0;

  virtual void enterPartition_clause(Gauss200Parser::Partition_clauseContext *ctx) = 0;
  virtual void exitPartition_clause(Gauss200Parser::Partition_clauseContext *ctx) = 0;

  virtual void enterTable_alias(Gauss200Parser::Table_aliasContext *ctx) = 0;
  virtual void exitTable_alias(Gauss200Parser::Table_aliasContext *ctx) = 0;

  virtual void enterTable_sampling_clause(Gauss200Parser::Table_sampling_clauseContext *ctx) = 0;
  virtual void exitTable_sampling_clause(Gauss200Parser::Table_sampling_clauseContext *ctx) = 0;

  virtual void enterSample_method(Gauss200Parser::Sample_methodContext *ctx) = 0;
  virtual void exitSample_method(Gauss200Parser::Sample_methodContext *ctx) = 0;

  virtual void enterJoin_type(Gauss200Parser::Join_typeContext *ctx) = 0;
  virtual void exitJoin_type(Gauss200Parser::Join_typeContext *ctx) = 0;

  virtual void enterUsing_clause(Gauss200Parser::Using_clauseContext *ctx) = 0;
  virtual void exitUsing_clause(Gauss200Parser::Using_clauseContext *ctx) = 0;

  virtual void enterGroup_by_clause(Gauss200Parser::Group_by_clauseContext *ctx) = 0;
  virtual void exitGroup_by_clause(Gauss200Parser::Group_by_clauseContext *ctx) = 0;

  virtual void enterGrouping_elements(Gauss200Parser::Grouping_elementsContext *ctx) = 0;
  virtual void exitGrouping_elements(Gauss200Parser::Grouping_elementsContext *ctx) = 0;

  virtual void enterGrouping_element(Gauss200Parser::Grouping_elementContext *ctx) = 0;
  virtual void exitGrouping_element(Gauss200Parser::Grouping_elementContext *ctx) = 0;

  virtual void enterParen_group_element_expr_list(Gauss200Parser::Paren_group_element_expr_listContext *ctx) = 0;
  virtual void exitParen_group_element_expr_list(Gauss200Parser::Paren_group_element_expr_listContext *ctx) = 0;

  virtual void enterGroup_element_expr(Gauss200Parser::Group_element_exprContext *ctx) = 0;
  virtual void exitGroup_element_expr(Gauss200Parser::Group_element_exprContext *ctx) = 0;

  virtual void enterHaving_clause(Gauss200Parser::Having_clauseContext *ctx) = 0;
  virtual void exitHaving_clause(Gauss200Parser::Having_clauseContext *ctx) = 0;

  virtual void enterWindow_clause(Gauss200Parser::Window_clauseContext *ctx) = 0;
  virtual void exitWindow_clause(Gauss200Parser::Window_clauseContext *ctx) = 0;

  virtual void enterWindow_clause_options(Gauss200Parser::Window_clause_optionsContext *ctx) = 0;
  virtual void exitWindow_clause_options(Gauss200Parser::Window_clause_optionsContext *ctx) = 0;

  virtual void enterWindow_clause_option(Gauss200Parser::Window_clause_optionContext *ctx) = 0;
  virtual void exitWindow_clause_option(Gauss200Parser::Window_clause_optionContext *ctx) = 0;

  virtual void enterWindow_name(Gauss200Parser::Window_nameContext *ctx) = 0;
  virtual void exitWindow_name(Gauss200Parser::Window_nameContext *ctx) = 0;

  virtual void enterWindow_definition(Gauss200Parser::Window_definitionContext *ctx) = 0;
  virtual void exitWindow_definition(Gauss200Parser::Window_definitionContext *ctx) = 0;

  virtual void enterFrame_clause(Gauss200Parser::Frame_clauseContext *ctx) = 0;
  virtual void exitFrame_clause(Gauss200Parser::Frame_clauseContext *ctx) = 0;

  virtual void enterFrame_start_end(Gauss200Parser::Frame_start_endContext *ctx) = 0;
  virtual void exitFrame_start_end(Gauss200Parser::Frame_start_endContext *ctx) = 0;

  virtual void enterOrder_by_clause(Gauss200Parser::Order_by_clauseContext *ctx) = 0;
  virtual void exitOrder_by_clause(Gauss200Parser::Order_by_clauseContext *ctx) = 0;

  virtual void enterOrder_by_clause_options(Gauss200Parser::Order_by_clause_optionsContext *ctx) = 0;
  virtual void exitOrder_by_clause_options(Gauss200Parser::Order_by_clause_optionsContext *ctx) = 0;

  virtual void enterOrder_by_clause_option(Gauss200Parser::Order_by_clause_optionContext *ctx) = 0;
  virtual void exitOrder_by_clause_option(Gauss200Parser::Order_by_clause_optionContext *ctx) = 0;

  virtual void enterOrder_by_clause_expr(Gauss200Parser::Order_by_clause_exprContext *ctx) = 0;
  virtual void exitOrder_by_clause_expr(Gauss200Parser::Order_by_clause_exprContext *ctx) = 0;

  virtual void enterNlssort_expression_clause(Gauss200Parser::Nlssort_expression_clauseContext *ctx) = 0;
  virtual void exitNlssort_expression_clause(Gauss200Parser::Nlssort_expression_clauseContext *ctx) = 0;

  virtual void enterLimit_clause(Gauss200Parser::Limit_clauseContext *ctx) = 0;
  virtual void exitLimit_clause(Gauss200Parser::Limit_clauseContext *ctx) = 0;

  virtual void enterOffset_clause(Gauss200Parser::Offset_clauseContext *ctx) = 0;
  virtual void exitOffset_clause(Gauss200Parser::Offset_clauseContext *ctx) = 0;

  virtual void enterFetch_clause(Gauss200Parser::Fetch_clauseContext *ctx) = 0;
  virtual void exitFetch_clause(Gauss200Parser::Fetch_clauseContext *ctx) = 0;

  virtual void enterFor_update_share_clause(Gauss200Parser::For_update_share_clauseContext *ctx) = 0;
  virtual void exitFor_update_share_clause(Gauss200Parser::For_update_share_clauseContext *ctx) = 0;

  virtual void enterInsert_stmt(Gauss200Parser::Insert_stmtContext *ctx) = 0;
  virtual void exitInsert_stmt(Gauss200Parser::Insert_stmtContext *ctx) = 0;

  virtual void enterInsert_values_option(Gauss200Parser::Insert_values_optionContext *ctx) = 0;
  virtual void exitInsert_values_option(Gauss200Parser::Insert_values_optionContext *ctx) = 0;

  virtual void enterValues_expression(Gauss200Parser::Values_expressionContext *ctx) = 0;
  virtual void exitValues_expression(Gauss200Parser::Values_expressionContext *ctx) = 0;

  virtual void enterUpdate_stmt(Gauss200Parser::Update_stmtContext *ctx) = 0;
  virtual void exitUpdate_stmt(Gauss200Parser::Update_stmtContext *ctx) = 0;

  virtual void enterUpdate_set_clause(Gauss200Parser::Update_set_clauseContext *ctx) = 0;
  virtual void exitUpdate_set_clause(Gauss200Parser::Update_set_clauseContext *ctx) = 0;

  virtual void enterDelete_stmt(Gauss200Parser::Delete_stmtContext *ctx) = 0;
  virtual void exitDelete_stmt(Gauss200Parser::Delete_stmtContext *ctx) = 0;

  virtual void enterWith_clause(Gauss200Parser::With_clauseContext *ctx) = 0;
  virtual void exitWith_clause(Gauss200Parser::With_clauseContext *ctx) = 0;

  virtual void enterWith_query(Gauss200Parser::With_queryContext *ctx) = 0;
  virtual void exitWith_query(Gauss200Parser::With_queryContext *ctx) = 0;

  virtual void enterWith_query_name(Gauss200Parser::With_query_nameContext *ctx) = 0;
  virtual void exitWith_query_name(Gauss200Parser::With_query_nameContext *ctx) = 0;

  virtual void enterAs_alias(Gauss200Parser::As_aliasContext *ctx) = 0;
  virtual void exitAs_alias(Gauss200Parser::As_aliasContext *ctx) = 0;

  virtual void enterAlias_name(Gauss200Parser::Alias_nameContext *ctx) = 0;
  virtual void exitAlias_name(Gauss200Parser::Alias_nameContext *ctx) = 0;

  virtual void enterWhere_clause(Gauss200Parser::Where_clauseContext *ctx) = 0;
  virtual void exitWhere_clause(Gauss200Parser::Where_clauseContext *ctx) = 0;

  virtual void enterReturn_clause(Gauss200Parser::Return_clauseContext *ctx) = 0;
  virtual void exitReturn_clause(Gauss200Parser::Return_clauseContext *ctx) = 0;

  virtual void enterOutput_expr_alias(Gauss200Parser::Output_expr_aliasContext *ctx) = 0;
  virtual void exitOutput_expr_alias(Gauss200Parser::Output_expr_aliasContext *ctx) = 0;

  virtual void enterDrop_database_stmt(Gauss200Parser::Drop_database_stmtContext *ctx) = 0;
  virtual void exitDrop_database_stmt(Gauss200Parser::Drop_database_stmtContext *ctx) = 0;

  virtual void enterDrop_group_mapping_stmt(Gauss200Parser::Drop_group_mapping_stmtContext *ctx) = 0;
  virtual void exitDrop_group_mapping_stmt(Gauss200Parser::Drop_group_mapping_stmtContext *ctx) = 0;

  virtual void enterDrop_data_source_stmt(Gauss200Parser::Drop_data_source_stmtContext *ctx) = 0;
  virtual void exitDrop_data_source_stmt(Gauss200Parser::Drop_data_source_stmtContext *ctx) = 0;

  virtual void enterDrop_directory_stmt(Gauss200Parser::Drop_directory_stmtContext *ctx) = 0;
  virtual void exitDrop_directory_stmt(Gauss200Parser::Drop_directory_stmtContext *ctx) = 0;

  virtual void enterDrop_foreign_table_stmt(Gauss200Parser::Drop_foreign_table_stmtContext *ctx) = 0;
  virtual void exitDrop_foreign_table_stmt(Gauss200Parser::Drop_foreign_table_stmtContext *ctx) = 0;

  virtual void enterDrop_function_stmt(Gauss200Parser::Drop_function_stmtContext *ctx) = 0;
  virtual void exitDrop_function_stmt(Gauss200Parser::Drop_function_stmtContext *ctx) = 0;

  virtual void enterDrop_group_stmt(Gauss200Parser::Drop_group_stmtContext *ctx) = 0;
  virtual void exitDrop_group_stmt(Gauss200Parser::Drop_group_stmtContext *ctx) = 0;

  virtual void enterDrop_index_stmt(Gauss200Parser::Drop_index_stmtContext *ctx) = 0;
  virtual void exitDrop_index_stmt(Gauss200Parser::Drop_index_stmtContext *ctx) = 0;

  virtual void enterDrop_node_stmt(Gauss200Parser::Drop_node_stmtContext *ctx) = 0;
  virtual void exitDrop_node_stmt(Gauss200Parser::Drop_node_stmtContext *ctx) = 0;

  virtual void enterDrop_node_group_stmt(Gauss200Parser::Drop_node_group_stmtContext *ctx) = 0;
  virtual void exitDrop_node_group_stmt(Gauss200Parser::Drop_node_group_stmtContext *ctx) = 0;

  virtual void enterDrop_owned_stmt(Gauss200Parser::Drop_owned_stmtContext *ctx) = 0;
  virtual void exitDrop_owned_stmt(Gauss200Parser::Drop_owned_stmtContext *ctx) = 0;

  virtual void enterDrop_row_level_security_policy_stmt(Gauss200Parser::Drop_row_level_security_policy_stmtContext *ctx) = 0;
  virtual void exitDrop_row_level_security_policy_stmt(Gauss200Parser::Drop_row_level_security_policy_stmtContext *ctx) = 0;

  virtual void enterDrop_procedure_stmt(Gauss200Parser::Drop_procedure_stmtContext *ctx) = 0;
  virtual void exitDrop_procedure_stmt(Gauss200Parser::Drop_procedure_stmtContext *ctx) = 0;

  virtual void enterDrop_resource_pool_stmt(Gauss200Parser::Drop_resource_pool_stmtContext *ctx) = 0;
  virtual void exitDrop_resource_pool_stmt(Gauss200Parser::Drop_resource_pool_stmtContext *ctx) = 0;

  virtual void enterDrop_role_stmt(Gauss200Parser::Drop_role_stmtContext *ctx) = 0;
  virtual void exitDrop_role_stmt(Gauss200Parser::Drop_role_stmtContext *ctx) = 0;

  virtual void enterDrop_schema_stmt(Gauss200Parser::Drop_schema_stmtContext *ctx) = 0;
  virtual void exitDrop_schema_stmt(Gauss200Parser::Drop_schema_stmtContext *ctx) = 0;

  virtual void enterDrop_sequence_stmt(Gauss200Parser::Drop_sequence_stmtContext *ctx) = 0;
  virtual void exitDrop_sequence_stmt(Gauss200Parser::Drop_sequence_stmtContext *ctx) = 0;

  virtual void enterDrop_name_list(Gauss200Parser::Drop_name_listContext *ctx) = 0;
  virtual void exitDrop_name_list(Gauss200Parser::Drop_name_listContext *ctx) = 0;

  virtual void enterDrop_name(Gauss200Parser::Drop_nameContext *ctx) = 0;
  virtual void exitDrop_name(Gauss200Parser::Drop_nameContext *ctx) = 0;

  virtual void enterDrop_server_stmt(Gauss200Parser::Drop_server_stmtContext *ctx) = 0;
  virtual void exitDrop_server_stmt(Gauss200Parser::Drop_server_stmtContext *ctx) = 0;

  virtual void enterDrop_table_stmt(Gauss200Parser::Drop_table_stmtContext *ctx) = 0;
  virtual void exitDrop_table_stmt(Gauss200Parser::Drop_table_stmtContext *ctx) = 0;

  virtual void enterDrop_tablespace_stmt(Gauss200Parser::Drop_tablespace_stmtContext *ctx) = 0;
  virtual void exitDrop_tablespace_stmt(Gauss200Parser::Drop_tablespace_stmtContext *ctx) = 0;

  virtual void enterDrop_txt_search_stmt(Gauss200Parser::Drop_txt_search_stmtContext *ctx) = 0;
  virtual void exitDrop_txt_search_stmt(Gauss200Parser::Drop_txt_search_stmtContext *ctx) = 0;

  virtual void enterDrop_trigger_stmt(Gauss200Parser::Drop_trigger_stmtContext *ctx) = 0;
  virtual void exitDrop_trigger_stmt(Gauss200Parser::Drop_trigger_stmtContext *ctx) = 0;

  virtual void enterDrop_type_stmt(Gauss200Parser::Drop_type_stmtContext *ctx) = 0;
  virtual void exitDrop_type_stmt(Gauss200Parser::Drop_type_stmtContext *ctx) = 0;

  virtual void enterDrop_user_stmt(Gauss200Parser::Drop_user_stmtContext *ctx) = 0;
  virtual void exitDrop_user_stmt(Gauss200Parser::Drop_user_stmtContext *ctx) = 0;

  virtual void enterDrop_view_stmt(Gauss200Parser::Drop_view_stmtContext *ctx) = 0;
  virtual void exitDrop_view_stmt(Gauss200Parser::Drop_view_stmtContext *ctx) = 0;

  virtual void enterDrop_workload_group_stmt(Gauss200Parser::Drop_workload_group_stmtContext *ctx) = 0;
  virtual void exitDrop_workload_group_stmt(Gauss200Parser::Drop_workload_group_stmtContext *ctx) = 0;

  virtual void enterAnalyze_stmt(Gauss200Parser::Analyze_stmtContext *ctx) = 0;
  virtual void exitAnalyze_stmt(Gauss200Parser::Analyze_stmtContext *ctx) = 0;

  virtual void enterAnalyze_keyword(Gauss200Parser::Analyze_keywordContext *ctx) = 0;
  virtual void exitAnalyze_keyword(Gauss200Parser::Analyze_keywordContext *ctx) = 0;

  virtual void enterAnalyze_option(Gauss200Parser::Analyze_optionContext *ctx) = 0;
  virtual void exitAnalyze_option(Gauss200Parser::Analyze_optionContext *ctx) = 0;

  virtual void enterPartition_name_option(Gauss200Parser::Partition_name_optionContext *ctx) = 0;
  virtual void exitPartition_name_option(Gauss200Parser::Partition_name_optionContext *ctx) = 0;

  virtual void enterCall_stmt(Gauss200Parser::Call_stmtContext *ctx) = 0;
  virtual void exitCall_stmt(Gauss200Parser::Call_stmtContext *ctx) = 0;

  virtual void enterParam_expr_list(Gauss200Parser::Param_expr_listContext *ctx) = 0;
  virtual void exitParam_expr_list(Gauss200Parser::Param_expr_listContext *ctx) = 0;

  virtual void enterParam_expr(Gauss200Parser::Param_exprContext *ctx) = 0;
  virtual void exitParam_expr(Gauss200Parser::Param_exprContext *ctx) = 0;

  virtual void enterParam_op(Gauss200Parser::Param_opContext *ctx) = 0;
  virtual void exitParam_op(Gauss200Parser::Param_opContext *ctx) = 0;

  virtual void enterCheckpoint_stmt(Gauss200Parser::Checkpoint_stmtContext *ctx) = 0;
  virtual void exitCheckpoint_stmt(Gauss200Parser::Checkpoint_stmtContext *ctx) = 0;

  virtual void enterClean_connection_stmt(Gauss200Parser::Clean_connection_stmtContext *ctx) = 0;
  virtual void exitClean_connection_stmt(Gauss200Parser::Clean_connection_stmtContext *ctx) = 0;

  virtual void enterClose_stmt(Gauss200Parser::Close_stmtContext *ctx) = 0;
  virtual void exitClose_stmt(Gauss200Parser::Close_stmtContext *ctx) = 0;

  virtual void enterCursor_name(Gauss200Parser::Cursor_nameContext *ctx) = 0;
  virtual void exitCursor_name(Gauss200Parser::Cursor_nameContext *ctx) = 0;

  virtual void enterCluster_stmt(Gauss200Parser::Cluster_stmtContext *ctx) = 0;
  virtual void exitCluster_stmt(Gauss200Parser::Cluster_stmtContext *ctx) = 0;

  virtual void enterCluster_stmt_option(Gauss200Parser::Cluster_stmt_optionContext *ctx) = 0;
  virtual void exitCluster_stmt_option(Gauss200Parser::Cluster_stmt_optionContext *ctx) = 0;

  virtual void enterComment_stmt(Gauss200Parser::Comment_stmtContext *ctx) = 0;
  virtual void exitComment_stmt(Gauss200Parser::Comment_stmtContext *ctx) = 0;

  virtual void enterComment_stmt_option(Gauss200Parser::Comment_stmt_optionContext *ctx) = 0;
  virtual void exitComment_stmt_option(Gauss200Parser::Comment_stmt_optionContext *ctx) = 0;

  virtual void enterAgg_name(Gauss200Parser::Agg_nameContext *ctx) = 0;
  virtual void exitAgg_name(Gauss200Parser::Agg_nameContext *ctx) = 0;

  virtual void enterObject_name(Gauss200Parser::Object_nameContext *ctx) = 0;
  virtual void exitObject_name(Gauss200Parser::Object_nameContext *ctx) = 0;

  virtual void enterCommit_end_stmt(Gauss200Parser::Commit_end_stmtContext *ctx) = 0;
  virtual void exitCommit_end_stmt(Gauss200Parser::Commit_end_stmtContext *ctx) = 0;

  virtual void enterCommit_prepared_stmt(Gauss200Parser::Commit_prepared_stmtContext *ctx) = 0;
  virtual void exitCommit_prepared_stmt(Gauss200Parser::Commit_prepared_stmtContext *ctx) = 0;

  virtual void enterCopy_stmt(Gauss200Parser::Copy_stmtContext *ctx) = 0;
  virtual void exitCopy_stmt(Gauss200Parser::Copy_stmtContext *ctx) = 0;

  virtual void enterCopy_stmt_clause(Gauss200Parser::Copy_stmt_clauseContext *ctx) = 0;
  virtual void exitCopy_stmt_clause(Gauss200Parser::Copy_stmt_clauseContext *ctx) = 0;

  virtual void enterCopy_stmt_option(Gauss200Parser::Copy_stmt_optionContext *ctx) = 0;
  virtual void exitCopy_stmt_option(Gauss200Parser::Copy_stmt_optionContext *ctx) = 0;

  virtual void enterParen_copy_clause_option_list(Gauss200Parser::Paren_copy_clause_option_listContext *ctx) = 0;
  virtual void exitParen_copy_clause_option_list(Gauss200Parser::Paren_copy_clause_option_listContext *ctx) = 0;

  virtual void enterCopy_clause_option(Gauss200Parser::Copy_clause_optionContext *ctx) = 0;
  virtual void exitCopy_clause_option(Gauss200Parser::Copy_clause_optionContext *ctx) = 0;

  virtual void enterColumn_offset_list(Gauss200Parser::Column_offset_listContext *ctx) = 0;
  virtual void exitColumn_offset_list(Gauss200Parser::Column_offset_listContext *ctx) = 0;

  virtual void enterColumn_offset_ele(Gauss200Parser::Column_offset_eleContext *ctx) = 0;
  virtual void exitColumn_offset_ele(Gauss200Parser::Column_offset_eleContext *ctx) = 0;

  virtual void enterCopy_option(Gauss200Parser::Copy_optionContext *ctx) = 0;
  virtual void exitCopy_option(Gauss200Parser::Copy_optionContext *ctx) = 0;

  virtual void enterCopy_clause_common_option(Gauss200Parser::Copy_clause_common_optionContext *ctx) = 0;
  virtual void exitCopy_clause_common_option(Gauss200Parser::Copy_clause_common_optionContext *ctx) = 0;

  virtual void enterBoolean_value(Gauss200Parser::Boolean_valueContext *ctx) = 0;
  virtual void exitBoolean_value(Gauss200Parser::Boolean_valueContext *ctx) = 0;

  virtual void enterCursor_stmt(Gauss200Parser::Cursor_stmtContext *ctx) = 0;
  virtual void exitCursor_stmt(Gauss200Parser::Cursor_stmtContext *ctx) = 0;

  virtual void enterDeallocate_stmt(Gauss200Parser::Deallocate_stmtContext *ctx) = 0;
  virtual void exitDeallocate_stmt(Gauss200Parser::Deallocate_stmtContext *ctx) = 0;

  virtual void enterDo_stmt(Gauss200Parser::Do_stmtContext *ctx) = 0;
  virtual void exitDo_stmt(Gauss200Parser::Do_stmtContext *ctx) = 0;

  virtual void enterDo_stmt_code(Gauss200Parser::Do_stmt_codeContext *ctx) = 0;
  virtual void exitDo_stmt_code(Gauss200Parser::Do_stmt_codeContext *ctx) = 0;

  virtual void enterExecute_stmt(Gauss200Parser::Execute_stmtContext *ctx) = 0;
  virtual void exitExecute_stmt(Gauss200Parser::Execute_stmtContext *ctx) = 0;

  virtual void enterExecute_direct_stmt(Gauss200Parser::Execute_direct_stmtContext *ctx) = 0;
  virtual void exitExecute_direct_stmt(Gauss200Parser::Execute_direct_stmtContext *ctx) = 0;

  virtual void enterExplain_stmt(Gauss200Parser::Explain_stmtContext *ctx) = 0;
  virtual void exitExplain_stmt(Gauss200Parser::Explain_stmtContext *ctx) = 0;

  virtual void enterExplain_option_list(Gauss200Parser::Explain_option_listContext *ctx) = 0;
  virtual void exitExplain_option_list(Gauss200Parser::Explain_option_listContext *ctx) = 0;

  virtual void enterExplain_option(Gauss200Parser::Explain_optionContext *ctx) = 0;
  virtual void exitExplain_option(Gauss200Parser::Explain_optionContext *ctx) = 0;

  virtual void enterExplain_plan_stmt(Gauss200Parser::Explain_plan_stmtContext *ctx) = 0;
  virtual void exitExplain_plan_stmt(Gauss200Parser::Explain_plan_stmtContext *ctx) = 0;

  virtual void enterFetch_move_stmt(Gauss200Parser::Fetch_move_stmtContext *ctx) = 0;
  virtual void exitFetch_move_stmt(Gauss200Parser::Fetch_move_stmtContext *ctx) = 0;

  virtual void enterFetch_direction_clause(Gauss200Parser::Fetch_direction_clauseContext *ctx) = 0;
  virtual void exitFetch_direction_clause(Gauss200Parser::Fetch_direction_clauseContext *ctx) = 0;

  virtual void enterGrant_stmt(Gauss200Parser::Grant_stmtContext *ctx) = 0;
  virtual void exitGrant_stmt(Gauss200Parser::Grant_stmtContext *ctx) = 0;

  virtual void enterPrivileges_for_obj(Gauss200Parser::Privileges_for_objContext *ctx) = 0;
  virtual void exitPrivileges_for_obj(Gauss200Parser::Privileges_for_objContext *ctx) = 0;

  virtual void enterDatabase_privileges(Gauss200Parser::Database_privilegesContext *ctx) = 0;
  virtual void exitDatabase_privileges(Gauss200Parser::Database_privilegesContext *ctx) = 0;

  virtual void enterDatabase_privilege(Gauss200Parser::Database_privilegeContext *ctx) = 0;
  virtual void exitDatabase_privilege(Gauss200Parser::Database_privilegeContext *ctx) = 0;

  virtual void enterCluster_privilege(Gauss200Parser::Cluster_privilegeContext *ctx) = 0;
  virtual void exitCluster_privilege(Gauss200Parser::Cluster_privilegeContext *ctx) = 0;

  virtual void enterGrant_on_option(Gauss200Parser::Grant_on_optionContext *ctx) = 0;
  virtual void exitGrant_on_option(Gauss200Parser::Grant_on_optionContext *ctx) = 0;

  virtual void enterGrant_on_function_option_list(Gauss200Parser::Grant_on_function_option_listContext *ctx) = 0;
  virtual void exitGrant_on_function_option_list(Gauss200Parser::Grant_on_function_option_listContext *ctx) = 0;

  virtual void enterGrant_on_function_option(Gauss200Parser::Grant_on_function_optionContext *ctx) = 0;
  virtual void exitGrant_on_function_option(Gauss200Parser::Grant_on_function_optionContext *ctx) = 0;

  virtual void enterLock_stmt(Gauss200Parser::Lock_stmtContext *ctx) = 0;
  virtual void exitLock_stmt(Gauss200Parser::Lock_stmtContext *ctx) = 0;

  virtual void enterLock_in_mode(Gauss200Parser::Lock_in_modeContext *ctx) = 0;
  virtual void exitLock_in_mode(Gauss200Parser::Lock_in_modeContext *ctx) = 0;

  virtual void enterIn_mode_option(Gauss200Parser::In_mode_optionContext *ctx) = 0;
  virtual void exitIn_mode_option(Gauss200Parser::In_mode_optionContext *ctx) = 0;

  virtual void enterPrepare_stmt(Gauss200Parser::Prepare_stmtContext *ctx) = 0;
  virtual void exitPrepare_stmt(Gauss200Parser::Prepare_stmtContext *ctx) = 0;

  virtual void enterPrepare_transaction_stmt(Gauss200Parser::Prepare_transaction_stmtContext *ctx) = 0;
  virtual void exitPrepare_transaction_stmt(Gauss200Parser::Prepare_transaction_stmtContext *ctx) = 0;

  virtual void enterMerge_into_stmt(Gauss200Parser::Merge_into_stmtContext *ctx) = 0;
  virtual void exitMerge_into_stmt(Gauss200Parser::Merge_into_stmtContext *ctx) = 0;

  virtual void enterOn_condition_clause(Gauss200Parser::On_condition_clauseContext *ctx) = 0;
  virtual void exitOn_condition_clause(Gauss200Parser::On_condition_clauseContext *ctx) = 0;

  virtual void enterWhen_matched_update_clause(Gauss200Parser::When_matched_update_clauseContext *ctx) = 0;
  virtual void exitWhen_matched_update_clause(Gauss200Parser::When_matched_update_clauseContext *ctx) = 0;

  virtual void enterUpdate_set_column_option(Gauss200Parser::Update_set_column_optionContext *ctx) = 0;
  virtual void exitUpdate_set_column_option(Gauss200Parser::Update_set_column_optionContext *ctx) = 0;

  virtual void enterWhen_not_matched_insert_clause(Gauss200Parser::When_not_matched_insert_clauseContext *ctx) = 0;
  virtual void exitWhen_not_matched_insert_clause(Gauss200Parser::When_not_matched_insert_clauseContext *ctx) = 0;

  virtual void enterNot_matched_insert_value_option(Gauss200Parser::Not_matched_insert_value_optionContext *ctx) = 0;
  virtual void exitNot_matched_insert_value_option(Gauss200Parser::Not_matched_insert_value_optionContext *ctx) = 0;

  virtual void enterNot_matched_insert_value(Gauss200Parser::Not_matched_insert_valueContext *ctx) = 0;
  virtual void exitNot_matched_insert_value(Gauss200Parser::Not_matched_insert_valueContext *ctx) = 0;

  virtual void enterReassign_owned_stmt(Gauss200Parser::Reassign_owned_stmtContext *ctx) = 0;
  virtual void exitReassign_owned_stmt(Gauss200Parser::Reassign_owned_stmtContext *ctx) = 0;

  virtual void enterReindex_stmt(Gauss200Parser::Reindex_stmtContext *ctx) = 0;
  virtual void exitReindex_stmt(Gauss200Parser::Reindex_stmtContext *ctx) = 0;

  virtual void enterReindex_option(Gauss200Parser::Reindex_optionContext *ctx) = 0;
  virtual void exitReindex_option(Gauss200Parser::Reindex_optionContext *ctx) = 0;

  virtual void enterRelease_savepoint_stmt(Gauss200Parser::Release_savepoint_stmtContext *ctx) = 0;
  virtual void exitRelease_savepoint_stmt(Gauss200Parser::Release_savepoint_stmtContext *ctx) = 0;

  virtual void enterReset_stmt(Gauss200Parser::Reset_stmtContext *ctx) = 0;
  virtual void exitReset_stmt(Gauss200Parser::Reset_stmtContext *ctx) = 0;

  virtual void enterSavepoint_name(Gauss200Parser::Savepoint_nameContext *ctx) = 0;
  virtual void exitSavepoint_name(Gauss200Parser::Savepoint_nameContext *ctx) = 0;

  virtual void enterRevoke_stmt(Gauss200Parser::Revoke_stmtContext *ctx) = 0;
  virtual void exitRevoke_stmt(Gauss200Parser::Revoke_stmtContext *ctx) = 0;

  virtual void enterAdmin_option_for(Gauss200Parser::Admin_option_forContext *ctx) = 0;
  virtual void exitAdmin_option_for(Gauss200Parser::Admin_option_forContext *ctx) = 0;

  virtual void enterRollback_stmt(Gauss200Parser::Rollback_stmtContext *ctx) = 0;
  virtual void exitRollback_stmt(Gauss200Parser::Rollback_stmtContext *ctx) = 0;

  virtual void enterSavepoint_stmt(Gauss200Parser::Savepoint_stmtContext *ctx) = 0;
  virtual void exitSavepoint_stmt(Gauss200Parser::Savepoint_stmtContext *ctx) = 0;

  virtual void enterSet_reset_stmt(Gauss200Parser::Set_reset_stmtContext *ctx) = 0;
  virtual void exitSet_reset_stmt(Gauss200Parser::Set_reset_stmtContext *ctx) = 0;

  virtual void enterSet_config_parameters(Gauss200Parser::Set_config_parametersContext *ctx) = 0;
  virtual void exitSet_config_parameters(Gauss200Parser::Set_config_parametersContext *ctx) = 0;

  virtual void enterSession_local(Gauss200Parser::Session_localContext *ctx) = 0;
  virtual void exitSession_local(Gauss200Parser::Session_localContext *ctx) = 0;

  virtual void enterSet_parameter_option(Gauss200Parser::Set_parameter_optionContext *ctx) = 0;
  virtual void exitSet_parameter_option(Gauss200Parser::Set_parameter_optionContext *ctx) = 0;

  virtual void enterTimezone(Gauss200Parser::TimezoneContext *ctx) = 0;
  virtual void exitTimezone(Gauss200Parser::TimezoneContext *ctx) = 0;

  virtual void enterSet_constraints(Gauss200Parser::Set_constraintsContext *ctx) = 0;
  virtual void exitSet_constraints(Gauss200Parser::Set_constraintsContext *ctx) = 0;

  virtual void enterSet_role(Gauss200Parser::Set_roleContext *ctx) = 0;
  virtual void exitSet_role(Gauss200Parser::Set_roleContext *ctx) = 0;

  virtual void enterReset_config_parameters(Gauss200Parser::Reset_config_parametersContext *ctx) = 0;
  virtual void exitReset_config_parameters(Gauss200Parser::Reset_config_parametersContext *ctx) = 0;

  virtual void enterSet_session_authorization(Gauss200Parser::Set_session_authorizationContext *ctx) = 0;
  virtual void exitSet_session_authorization(Gauss200Parser::Set_session_authorizationContext *ctx) = 0;

  virtual void enterSet_transaction(Gauss200Parser::Set_transactionContext *ctx) = 0;
  virtual void exitSet_transaction(Gauss200Parser::Set_transactionContext *ctx) = 0;

  virtual void enterIsolation_level_options(Gauss200Parser::Isolation_level_optionsContext *ctx) = 0;
  virtual void exitIsolation_level_options(Gauss200Parser::Isolation_level_optionsContext *ctx) = 0;

  virtual void enterIsolation_level_option(Gauss200Parser::Isolation_level_optionContext *ctx) = 0;
  virtual void exitIsolation_level_option(Gauss200Parser::Isolation_level_optionContext *ctx) = 0;

  virtual void enterShow_stmt(Gauss200Parser::Show_stmtContext *ctx) = 0;
  virtual void exitShow_stmt(Gauss200Parser::Show_stmtContext *ctx) = 0;

  virtual void enterStart_transaction_stmt(Gauss200Parser::Start_transaction_stmtContext *ctx) = 0;
  virtual void exitStart_transaction_stmt(Gauss200Parser::Start_transaction_stmtContext *ctx) = 0;

  virtual void enterStart_transaction_option(Gauss200Parser::Start_transaction_optionContext *ctx) = 0;
  virtual void exitStart_transaction_option(Gauss200Parser::Start_transaction_optionContext *ctx) = 0;

  virtual void enterTruncate_stmt(Gauss200Parser::Truncate_stmtContext *ctx) = 0;
  virtual void exitTruncate_stmt(Gauss200Parser::Truncate_stmtContext *ctx) = 0;

  virtual void enterVacuum_stmt(Gauss200Parser::Vacuum_stmtContext *ctx) = 0;
  virtual void exitVacuum_stmt(Gauss200Parser::Vacuum_stmtContext *ctx) = 0;

  virtual void enterVacuum_keyword_list(Gauss200Parser::Vacuum_keyword_listContext *ctx) = 0;
  virtual void exitVacuum_keyword_list(Gauss200Parser::Vacuum_keyword_listContext *ctx) = 0;

  virtual void enterVacuum_keyword(Gauss200Parser::Vacuum_keywordContext *ctx) = 0;
  virtual void exitVacuum_keyword(Gauss200Parser::Vacuum_keywordContext *ctx) = 0;

  virtual void enterVacuum_option(Gauss200Parser::Vacuum_optionContext *ctx) = 0;
  virtual void exitVacuum_option(Gauss200Parser::Vacuum_optionContext *ctx) = 0;

  virtual void enterValues_stmt(Gauss200Parser::Values_stmtContext *ctx) = 0;
  virtual void exitValues_stmt(Gauss200Parser::Values_stmtContext *ctx) = 0;

  virtual void enterParen_expr_list(Gauss200Parser::Paren_expr_listContext *ctx) = 0;
  virtual void exitParen_expr_list(Gauss200Parser::Paren_expr_listContext *ctx) = 0;

  virtual void enterExpression_list(Gauss200Parser::Expression_listContext *ctx) = 0;
  virtual void exitExpression_list(Gauss200Parser::Expression_listContext *ctx) = 0;

  virtual void enterExpression(Gauss200Parser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(Gauss200Parser::ExpressionContext *ctx) = 0;

  virtual void enterLogical_expr(Gauss200Parser::Logical_exprContext *ctx) = 0;
  virtual void exitLogical_expr(Gauss200Parser::Logical_exprContext *ctx) = 0;

  virtual void enterMultiset_expr(Gauss200Parser::Multiset_exprContext *ctx) = 0;
  virtual void exitMultiset_expr(Gauss200Parser::Multiset_exprContext *ctx) = 0;

  virtual void enterRelational_expr(Gauss200Parser::Relational_exprContext *ctx) = 0;
  virtual void exitRelational_expr(Gauss200Parser::Relational_exprContext *ctx) = 0;

  virtual void enterRelational_op(Gauss200Parser::Relational_opContext *ctx) = 0;
  virtual void exitRelational_op(Gauss200Parser::Relational_opContext *ctx) = 0;

  virtual void enterCompound_expr(Gauss200Parser::Compound_exprContext *ctx) = 0;
  virtual void exitCompound_expr(Gauss200Parser::Compound_exprContext *ctx) = 0;

  virtual void enterIn_expr(Gauss200Parser::In_exprContext *ctx) = 0;
  virtual void exitIn_expr(Gauss200Parser::In_exprContext *ctx) = 0;

  virtual void enterBetween_elements(Gauss200Parser::Between_elementsContext *ctx) = 0;
  virtual void exitBetween_elements(Gauss200Parser::Between_elementsContext *ctx) = 0;

  virtual void enterConcatenation_list(Gauss200Parser::Concatenation_listContext *ctx) = 0;
  virtual void exitConcatenation_list(Gauss200Parser::Concatenation_listContext *ctx) = 0;

  virtual void enterConcatenation(Gauss200Parser::ConcatenationContext *ctx) = 0;
  virtual void exitConcatenation(Gauss200Parser::ConcatenationContext *ctx) = 0;

  virtual void enterGeometry_op1(Gauss200Parser::Geometry_op1Context *ctx) = 0;
  virtual void exitGeometry_op1(Gauss200Parser::Geometry_op1Context *ctx) = 0;

  virtual void enterModel_expr(Gauss200Parser::Model_exprContext *ctx) = 0;
  virtual void exitModel_expr(Gauss200Parser::Model_exprContext *ctx) = 0;

  virtual void enterUnary_expr(Gauss200Parser::Unary_exprContext *ctx) = 0;
  virtual void exitUnary_expr(Gauss200Parser::Unary_exprContext *ctx) = 0;

  virtual void enterGeometry_op2(Gauss200Parser::Geometry_op2Context *ctx) = 0;
  virtual void exitGeometry_op2(Gauss200Parser::Geometry_op2Context *ctx) = 0;

  virtual void enterTypename_gs(Gauss200Parser::Typename_gsContext *ctx) = 0;
  virtual void exitTypename_gs(Gauss200Parser::Typename_gsContext *ctx) = 0;

  virtual void enterPrecision_part(Gauss200Parser::Precision_partContext *ctx) = 0;
  virtual void exitPrecision_part(Gauss200Parser::Precision_partContext *ctx) = 0;

  virtual void enterNumeric(Gauss200Parser::NumericContext *ctx) = 0;
  virtual void exitNumeric(Gauss200Parser::NumericContext *ctx) = 0;

  virtual void enterNumber_type(Gauss200Parser::Number_typeContext *ctx) = 0;
  virtual void exitNumber_type(Gauss200Parser::Number_typeContext *ctx) = 0;

  virtual void enterConcurrency_type(Gauss200Parser::Concurrency_typeContext *ctx) = 0;
  virtual void exitConcurrency_type(Gauss200Parser::Concurrency_typeContext *ctx) = 0;

  virtual void enterBoolean_type(Gauss200Parser::Boolean_typeContext *ctx) = 0;
  virtual void exitBoolean_type(Gauss200Parser::Boolean_typeContext *ctx) = 0;

  virtual void enterChar_type(Gauss200Parser::Char_typeContext *ctx) = 0;
  virtual void exitChar_type(Gauss200Parser::Char_typeContext *ctx) = 0;

  virtual void enterBinary_type(Gauss200Parser::Binary_typeContext *ctx) = 0;
  virtual void exitBinary_type(Gauss200Parser::Binary_typeContext *ctx) = 0;

  virtual void enterDate_type(Gauss200Parser::Date_typeContext *ctx) = 0;
  virtual void exitDate_type(Gauss200Parser::Date_typeContext *ctx) = 0;

  virtual void enterTime_zone_part(Gauss200Parser::Time_zone_partContext *ctx) = 0;
  virtual void exitTime_zone_part(Gauss200Parser::Time_zone_partContext *ctx) = 0;

  virtual void enterGeometry_type(Gauss200Parser::Geometry_typeContext *ctx) = 0;
  virtual void exitGeometry_type(Gauss200Parser::Geometry_typeContext *ctx) = 0;

  virtual void enterInet_type(Gauss200Parser::Inet_typeContext *ctx) = 0;
  virtual void exitInet_type(Gauss200Parser::Inet_typeContext *ctx) = 0;

  virtual void enterBit_type(Gauss200Parser::Bit_typeContext *ctx) = 0;
  virtual void exitBit_type(Gauss200Parser::Bit_typeContext *ctx) = 0;

  virtual void enterTxt_search_type(Gauss200Parser::Txt_search_typeContext *ctx) = 0;
  virtual void exitTxt_search_type(Gauss200Parser::Txt_search_typeContext *ctx) = 0;

  virtual void enterHll_type(Gauss200Parser::Hll_typeContext *ctx) = 0;
  virtual void exitHll_type(Gauss200Parser::Hll_typeContext *ctx) = 0;

  virtual void enterOid_type(Gauss200Parser::Oid_typeContext *ctx) = 0;
  virtual void exitOid_type(Gauss200Parser::Oid_typeContext *ctx) = 0;

  virtual void enterOther_type(Gauss200Parser::Other_typeContext *ctx) = 0;
  virtual void exitOther_type(Gauss200Parser::Other_typeContext *ctx) = 0;

  virtual void enterTypecast_arg(Gauss200Parser::Typecast_argContext *ctx) = 0;
  virtual void exitTypecast_arg(Gauss200Parser::Typecast_argContext *ctx) = 0;

  virtual void enterFunction_expr(Gauss200Parser::Function_exprContext *ctx) = 0;
  virtual void exitFunction_expr(Gauss200Parser::Function_exprContext *ctx) = 0;

  virtual void enterCol_label(Gauss200Parser::Col_labelContext *ctx) = 0;
  virtual void exitCol_label(Gauss200Parser::Col_labelContext *ctx) = 0;

  virtual void enterXmlelement_part(Gauss200Parser::Xmlelement_partContext *ctx) = 0;
  virtual void exitXmlelement_part(Gauss200Parser::Xmlelement_partContext *ctx) = 0;

  virtual void enterXml_root_version(Gauss200Parser::Xml_root_versionContext *ctx) = 0;
  virtual void exitXml_root_version(Gauss200Parser::Xml_root_versionContext *ctx) = 0;

  virtual void enterOpt_xml_root_standalone(Gauss200Parser::Opt_xml_root_standaloneContext *ctx) = 0;
  virtual void exitOpt_xml_root_standalone(Gauss200Parser::Opt_xml_root_standaloneContext *ctx) = 0;

  virtual void enterXml_attributes(Gauss200Parser::Xml_attributesContext *ctx) = 0;
  virtual void exitXml_attributes(Gauss200Parser::Xml_attributesContext *ctx) = 0;

  virtual void enterXml_attribute_list(Gauss200Parser::Xml_attribute_listContext *ctx) = 0;
  virtual void exitXml_attribute_list(Gauss200Parser::Xml_attribute_listContext *ctx) = 0;

  virtual void enterXml_attribute_el(Gauss200Parser::Xml_attribute_elContext *ctx) = 0;
  virtual void exitXml_attribute_el(Gauss200Parser::Xml_attribute_elContext *ctx) = 0;

  virtual void enterDocument_or_content(Gauss200Parser::Document_or_contentContext *ctx) = 0;
  virtual void exitDocument_or_content(Gauss200Parser::Document_or_contentContext *ctx) = 0;

  virtual void enterXml_whitespace_option(Gauss200Parser::Xml_whitespace_optionContext *ctx) = 0;
  virtual void exitXml_whitespace_option(Gauss200Parser::Xml_whitespace_optionContext *ctx) = 0;

  virtual void enterXmlexists_argument(Gauss200Parser::Xmlexists_argumentContext *ctx) = 0;
  virtual void exitXmlexists_argument(Gauss200Parser::Xmlexists_argumentContext *ctx) = 0;

  virtual void enterExtract_list(Gauss200Parser::Extract_listContext *ctx) = 0;
  virtual void exitExtract_list(Gauss200Parser::Extract_listContext *ctx) = 0;

  virtual void enterExtract_arg(Gauss200Parser::Extract_argContext *ctx) = 0;
  virtual void exitExtract_arg(Gauss200Parser::Extract_argContext *ctx) = 0;

  virtual void enterOverlay_list(Gauss200Parser::Overlay_listContext *ctx) = 0;
  virtual void exitOverlay_list(Gauss200Parser::Overlay_listContext *ctx) = 0;

  virtual void enterOverlay_placing(Gauss200Parser::Overlay_placingContext *ctx) = 0;
  virtual void exitOverlay_placing(Gauss200Parser::Overlay_placingContext *ctx) = 0;

  virtual void enterPosition_list(Gauss200Parser::Position_listContext *ctx) = 0;
  virtual void exitPosition_list(Gauss200Parser::Position_listContext *ctx) = 0;

  virtual void enterSubstr_list(Gauss200Parser::Substr_listContext *ctx) = 0;
  virtual void exitSubstr_list(Gauss200Parser::Substr_listContext *ctx) = 0;

  virtual void enterSubstr_from(Gauss200Parser::Substr_fromContext *ctx) = 0;
  virtual void exitSubstr_from(Gauss200Parser::Substr_fromContext *ctx) = 0;

  virtual void enterSubstr_for(Gauss200Parser::Substr_forContext *ctx) = 0;
  virtual void exitSubstr_for(Gauss200Parser::Substr_forContext *ctx) = 0;

  virtual void enterTrim_list(Gauss200Parser::Trim_listContext *ctx) = 0;
  virtual void exitTrim_list(Gauss200Parser::Trim_listContext *ctx) = 0;

  virtual void enterSimple_function(Gauss200Parser::Simple_functionContext *ctx) = 0;
  virtual void exitSimple_function(Gauss200Parser::Simple_functionContext *ctx) = 0;

  virtual void enterFunc_name(Gauss200Parser::Func_nameContext *ctx) = 0;
  virtual void exitFunc_name(Gauss200Parser::Func_nameContext *ctx) = 0;

  virtual void enterSimple_func_params(Gauss200Parser::Simple_func_paramsContext *ctx) = 0;
  virtual void exitSimple_func_params(Gauss200Parser::Simple_func_paramsContext *ctx) = 0;

  virtual void enterAtom(Gauss200Parser::AtomContext *ctx) = 0;
  virtual void exitAtom(Gauss200Parser::AtomContext *ctx) = 0;

  virtual void enterGeneral_element(Gauss200Parser::General_elementContext *ctx) = 0;
  virtual void exitGeneral_element(Gauss200Parser::General_elementContext *ctx) = 0;

  virtual void enterGeneral_element_part(Gauss200Parser::General_element_partContext *ctx) = 0;
  virtual void exitGeneral_element_part(Gauss200Parser::General_element_partContext *ctx) = 0;

  virtual void enterIdentifier(Gauss200Parser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(Gauss200Parser::IdentifierContext *ctx) = 0;

  virtual void enterRegular_id_common(Gauss200Parser::Regular_id_commonContext *ctx) = 0;
  virtual void exitRegular_id_common(Gauss200Parser::Regular_id_commonContext *ctx) = 0;

  virtual void enterRegular_id(Gauss200Parser::Regular_idContext *ctx) = 0;
  virtual void exitRegular_id(Gauss200Parser::Regular_idContext *ctx) = 0;

  virtual void enterConstant(Gauss200Parser::ConstantContext *ctx) = 0;
  virtual void exitConstant(Gauss200Parser::ConstantContext *ctx) = 0;

  virtual void enterCase_expr(Gauss200Parser::Case_exprContext *ctx) = 0;
  virtual void exitCase_expr(Gauss200Parser::Case_exprContext *ctx) = 0;

  virtual void enterWhen_clause(Gauss200Parser::When_clauseContext *ctx) = 0;
  virtual void exitWhen_clause(Gauss200Parser::When_clauseContext *ctx) = 0;

  virtual void enterCase_default(Gauss200Parser::Case_defaultContext *ctx) = 0;
  virtual void exitCase_default(Gauss200Parser::Case_defaultContext *ctx) = 0;

  virtual void enterQuantified_expression(Gauss200Parser::Quantified_expressionContext *ctx) = 0;
  virtual void exitQuantified_expression(Gauss200Parser::Quantified_expressionContext *ctx) = 0;

  virtual void enterArray_expr(Gauss200Parser::Array_exprContext *ctx) = 0;
  virtual void exitArray_expr(Gauss200Parser::Array_exprContext *ctx) = 0;

  virtual void enterArray_expr_list(Gauss200Parser::Array_expr_listContext *ctx) = 0;
  virtual void exitArray_expr_list(Gauss200Parser::Array_expr_listContext *ctx) = 0;

  virtual void enterReserved_keywords_normal(Gauss200Parser::Reserved_keywords_normalContext *ctx) = 0;
  virtual void exitReserved_keywords_normal(Gauss200Parser::Reserved_keywords_normalContext *ctx) = 0;

  virtual void enterReserved_keywords_can_be_name(Gauss200Parser::Reserved_keywords_can_be_nameContext *ctx) = 0;
  virtual void exitReserved_keywords_can_be_name(Gauss200Parser::Reserved_keywords_can_be_nameContext *ctx) = 0;

  virtual void enterNonreserved_keywords_normal(Gauss200Parser::Nonreserved_keywords_normalContext *ctx) = 0;
  virtual void exitNonreserved_keywords_normal(Gauss200Parser::Nonreserved_keywords_normalContext *ctx) = 0;

  virtual void enterNonreserved_keywords_can_not_be_name(Gauss200Parser::Nonreserved_keywords_can_not_be_nameContext *ctx) = 0;
  virtual void exitNonreserved_keywords_can_not_be_name(Gauss200Parser::Nonreserved_keywords_can_not_be_nameContext *ctx) = 0;


};



// Generated from /home/jona/myGit/myCode_repository/antlr4_cpp/greenplum/GreenPlumParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "GreenPlumParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by GreenPlumParser.
 */
class  GreenPlumParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterStmtblock(GreenPlumParser::StmtblockContext *ctx) = 0;
  virtual void exitStmtblock(GreenPlumParser::StmtblockContext *ctx) = 0;

  virtual void enterStmtmulti(GreenPlumParser::StmtmultiContext *ctx) = 0;
  virtual void exitStmtmulti(GreenPlumParser::StmtmultiContext *ctx) = 0;

  virtual void enterStmt(GreenPlumParser::StmtContext *ctx) = 0;
  virtual void exitStmt(GreenPlumParser::StmtContext *ctx) = 0;

  virtual void enterCreate_queue_stmt(GreenPlumParser::Create_queue_stmtContext *ctx) = 0;
  virtual void exitCreate_queue_stmt(GreenPlumParser::Create_queue_stmtContext *ctx) = 0;

  virtual void enterOpt_queue_elem(GreenPlumParser::Opt_queue_elemContext *ctx) = 0;
  virtual void exitOpt_queue_elem(GreenPlumParser::Opt_queue_elemContext *ctx) = 0;

  virtual void enterAlter_queue_stmt(GreenPlumParser::Alter_queue_stmtContext *ctx) = 0;
  virtual void exitAlter_queue_stmt(GreenPlumParser::Alter_queue_stmtContext *ctx) = 0;

  virtual void enterWith_out_definition(GreenPlumParser::With_out_definitionContext *ctx) = 0;
  virtual void exitWith_out_definition(GreenPlumParser::With_out_definitionContext *ctx) = 0;

  virtual void enterDrop_queue_stmt(GreenPlumParser::Drop_queue_stmtContext *ctx) = 0;
  virtual void exitDrop_queue_stmt(GreenPlumParser::Drop_queue_stmtContext *ctx) = 0;

  virtual void enterCreate_resource_group_stmt(GreenPlumParser::Create_resource_group_stmtContext *ctx) = 0;
  virtual void exitCreate_resource_group_stmt(GreenPlumParser::Create_resource_group_stmtContext *ctx) = 0;

  virtual void enterDrop_resource_group_stmt(GreenPlumParser::Drop_resource_group_stmtContext *ctx) = 0;
  virtual void exitDrop_resource_group_stmt(GreenPlumParser::Drop_resource_group_stmtContext *ctx) = 0;

  virtual void enterAlter_resource_group_stmt(GreenPlumParser::Alter_resource_group_stmtContext *ctx) = 0;
  virtual void exitAlter_resource_group_stmt(GreenPlumParser::Alter_resource_group_stmtContext *ctx) = 0;

  virtual void enterResource_group_elem(GreenPlumParser::Resource_group_elemContext *ctx) = 0;
  virtual void exitResource_group_elem(GreenPlumParser::Resource_group_elemContext *ctx) = 0;

  virtual void enterCreate_role_stmt(GreenPlumParser::Create_role_stmtContext *ctx) = 0;
  virtual void exitCreate_role_stmt(GreenPlumParser::Create_role_stmtContext *ctx) = 0;

  virtual void enterOpt_with(GreenPlumParser::Opt_withContext *ctx) = 0;
  virtual void exitOpt_with(GreenPlumParser::Opt_withContext *ctx) = 0;

  virtual void enterRole_elem(GreenPlumParser::Role_elemContext *ctx) = 0;
  virtual void exitRole_elem(GreenPlumParser::Role_elemContext *ctx) = 0;

  virtual void enterDeny_login_role(GreenPlumParser::Deny_login_roleContext *ctx) = 0;
  virtual void exitDeny_login_role(GreenPlumParser::Deny_login_roleContext *ctx) = 0;

  virtual void enterDeny_interval(GreenPlumParser::Deny_intervalContext *ctx) = 0;
  virtual void exitDeny_interval(GreenPlumParser::Deny_intervalContext *ctx) = 0;

  virtual void enterDeny_day_specifier(GreenPlumParser::Deny_day_specifierContext *ctx) = 0;
  virtual void exitDeny_day_specifier(GreenPlumParser::Deny_day_specifierContext *ctx) = 0;

  virtual void enterDeny_point(GreenPlumParser::Deny_pointContext *ctx) = 0;
  virtual void exitDeny_point(GreenPlumParser::Deny_pointContext *ctx) = 0;

  virtual void enterOpt_time(GreenPlumParser::Opt_timeContext *ctx) = 0;
  virtual void exitOpt_time(GreenPlumParser::Opt_timeContext *ctx) = 0;

  virtual void enterExttab_auth_list(GreenPlumParser::Exttab_auth_listContext *ctx) = 0;
  virtual void exitExttab_auth_list(GreenPlumParser::Exttab_auth_listContext *ctx) = 0;

  virtual void enterKeyvalue_list(GreenPlumParser::Keyvalue_listContext *ctx) = 0;
  virtual void exitKeyvalue_list(GreenPlumParser::Keyvalue_listContext *ctx) = 0;

  virtual void enterKeyvalue_pair(GreenPlumParser::Keyvalue_pairContext *ctx) = 0;
  virtual void exitKeyvalue_pair(GreenPlumParser::Keyvalue_pairContext *ctx) = 0;

  virtual void enterCreate_user_stmt(GreenPlumParser::Create_user_stmtContext *ctx) = 0;
  virtual void exitCreate_user_stmt(GreenPlumParser::Create_user_stmtContext *ctx) = 0;

  virtual void enterAlter_role_stmt(GreenPlumParser::Alter_role_stmtContext *ctx) = 0;
  virtual void exitAlter_role_stmt(GreenPlumParser::Alter_role_stmtContext *ctx) = 0;

  virtual void enterAlter_role_set_stmt(GreenPlumParser::Alter_role_set_stmtContext *ctx) = 0;
  virtual void exitAlter_role_set_stmt(GreenPlumParser::Alter_role_set_stmtContext *ctx) = 0;

  virtual void enterAlter_role_elem(GreenPlumParser::Alter_role_elemContext *ctx) = 0;
  virtual void exitAlter_role_elem(GreenPlumParser::Alter_role_elemContext *ctx) = 0;

  virtual void enterAlter_user_stmt(GreenPlumParser::Alter_user_stmtContext *ctx) = 0;
  virtual void exitAlter_user_stmt(GreenPlumParser::Alter_user_stmtContext *ctx) = 0;

  virtual void enterAlter_user_set_stmt(GreenPlumParser::Alter_user_set_stmtContext *ctx) = 0;
  virtual void exitAlter_user_set_stmt(GreenPlumParser::Alter_user_set_stmtContext *ctx) = 0;

  virtual void enterDrop_role_stmt(GreenPlumParser::Drop_role_stmtContext *ctx) = 0;
  virtual void exitDrop_role_stmt(GreenPlumParser::Drop_role_stmtContext *ctx) = 0;

  virtual void enterDrop_user_stmt(GreenPlumParser::Drop_user_stmtContext *ctx) = 0;
  virtual void exitDrop_user_stmt(GreenPlumParser::Drop_user_stmtContext *ctx) = 0;

  virtual void enterCreate_group_stmt(GreenPlumParser::Create_group_stmtContext *ctx) = 0;
  virtual void exitCreate_group_stmt(GreenPlumParser::Create_group_stmtContext *ctx) = 0;

  virtual void enterAlter_group_stmt(GreenPlumParser::Alter_group_stmtContext *ctx) = 0;
  virtual void exitAlter_group_stmt(GreenPlumParser::Alter_group_stmtContext *ctx) = 0;

  virtual void enterAdd_drop(GreenPlumParser::Add_dropContext *ctx) = 0;
  virtual void exitAdd_drop(GreenPlumParser::Add_dropContext *ctx) = 0;

  virtual void enterDrop_group_stmt(GreenPlumParser::Drop_group_stmtContext *ctx) = 0;
  virtual void exitDrop_group_stmt(GreenPlumParser::Drop_group_stmtContext *ctx) = 0;

  virtual void enterCreate_schema_stmt(GreenPlumParser::Create_schema_stmtContext *ctx) = 0;
  virtual void exitCreate_schema_stmt(GreenPlumParser::Create_schema_stmtContext *ctx) = 0;

  virtual void enterSchema_name(GreenPlumParser::Schema_nameContext *ctx) = 0;
  virtual void exitSchema_name(GreenPlumParser::Schema_nameContext *ctx) = 0;

  virtual void enterSchema_stmt(GreenPlumParser::Schema_stmtContext *ctx) = 0;
  virtual void exitSchema_stmt(GreenPlumParser::Schema_stmtContext *ctx) = 0;

  virtual void enterVariable_set_stmt(GreenPlumParser::Variable_set_stmtContext *ctx) = 0;
  virtual void exitVariable_set_stmt(GreenPlumParser::Variable_set_stmtContext *ctx) = 0;

  virtual void enterSet_rest(GreenPlumParser::Set_restContext *ctx) = 0;
  virtual void exitSet_rest(GreenPlumParser::Set_restContext *ctx) = 0;

  virtual void enterVar_name(GreenPlumParser::Var_nameContext *ctx) = 0;
  virtual void exitVar_name(GreenPlumParser::Var_nameContext *ctx) = 0;

  virtual void enterVar_list(GreenPlumParser::Var_listContext *ctx) = 0;
  virtual void exitVar_list(GreenPlumParser::Var_listContext *ctx) = 0;

  virtual void enterVar_value(GreenPlumParser::Var_valueContext *ctx) = 0;
  virtual void exitVar_value(GreenPlumParser::Var_valueContext *ctx) = 0;

  virtual void enterIso_level(GreenPlumParser::Iso_levelContext *ctx) = 0;
  virtual void exitIso_level(GreenPlumParser::Iso_levelContext *ctx) = 0;

  virtual void enterOpt_boolean(GreenPlumParser::Opt_booleanContext *ctx) = 0;
  virtual void exitOpt_boolean(GreenPlumParser::Opt_booleanContext *ctx) = 0;

  virtual void enterZone_value(GreenPlumParser::Zone_valueContext *ctx) = 0;
  virtual void exitZone_value(GreenPlumParser::Zone_valueContext *ctx) = 0;

  virtual void enterParen_iconst(GreenPlumParser::Paren_iconstContext *ctx) = 0;
  virtual void exitParen_iconst(GreenPlumParser::Paren_iconstContext *ctx) = 0;

  virtual void enterOpt_encoding(GreenPlumParser::Opt_encodingContext *ctx) = 0;
  virtual void exitOpt_encoding(GreenPlumParser::Opt_encodingContext *ctx) = 0;

  virtual void enterColid_or_sconst(GreenPlumParser::Colid_or_sconstContext *ctx) = 0;
  virtual void exitColid_or_sconst(GreenPlumParser::Colid_or_sconstContext *ctx) = 0;

  virtual void enterVariable_reset_stmt(GreenPlumParser::Variable_reset_stmtContext *ctx) = 0;
  virtual void exitVariable_reset_stmt(GreenPlumParser::Variable_reset_stmtContext *ctx) = 0;

  virtual void enterSet_reset_clause(GreenPlumParser::Set_reset_clauseContext *ctx) = 0;
  virtual void exitSet_reset_clause(GreenPlumParser::Set_reset_clauseContext *ctx) = 0;

  virtual void enterVariable_show_stmt(GreenPlumParser::Variable_show_stmtContext *ctx) = 0;
  virtual void exitVariable_show_stmt(GreenPlumParser::Variable_show_stmtContext *ctx) = 0;

  virtual void enterConstraints_set_stmt(GreenPlumParser::Constraints_set_stmtContext *ctx) = 0;
  virtual void exitConstraints_set_stmt(GreenPlumParser::Constraints_set_stmtContext *ctx) = 0;

  virtual void enterConstraints_set_list(GreenPlumParser::Constraints_set_listContext *ctx) = 0;
  virtual void exitConstraints_set_list(GreenPlumParser::Constraints_set_listContext *ctx) = 0;

  virtual void enterConstraints_set_mode(GreenPlumParser::Constraints_set_modeContext *ctx) = 0;
  virtual void exitConstraints_set_mode(GreenPlumParser::Constraints_set_modeContext *ctx) = 0;

  virtual void enterCheck_point_stmt(GreenPlumParser::Check_point_stmtContext *ctx) = 0;
  virtual void exitCheck_point_stmt(GreenPlumParser::Check_point_stmtContext *ctx) = 0;

  virtual void enterDiscard_stmt(GreenPlumParser::Discard_stmtContext *ctx) = 0;
  virtual void exitDiscard_stmt(GreenPlumParser::Discard_stmtContext *ctx) = 0;

  virtual void enterAlter_table_stmt(GreenPlumParser::Alter_table_stmtContext *ctx) = 0;
  virtual void exitAlter_table_stmt(GreenPlumParser::Alter_table_stmtContext *ctx) = 0;

  virtual void enterAlter_table_cmds(GreenPlumParser::Alter_table_cmdsContext *ctx) = 0;
  virtual void exitAlter_table_cmds(GreenPlumParser::Alter_table_cmdsContext *ctx) = 0;

  virtual void enterAlter_table_cmd(GreenPlumParser::Alter_table_cmdContext *ctx) = 0;
  virtual void exitAlter_table_cmd(GreenPlumParser::Alter_table_cmdContext *ctx) = 0;

  virtual void enterOpt_table_partition_split_into(GreenPlumParser::Opt_table_partition_split_intoContext *ctx) = 0;
  virtual void exitOpt_table_partition_split_into(GreenPlumParser::Opt_table_partition_split_intoContext *ctx) = 0;

  virtual void enterOpt_table_partition_merge_into(GreenPlumParser::Opt_table_partition_merge_intoContext *ctx) = 0;
  virtual void exitOpt_table_partition_merge_into(GreenPlumParser::Opt_table_partition_merge_intoContext *ctx) = 0;

  virtual void enterTable_partition_modify(GreenPlumParser::Table_partition_modifyContext *ctx) = 0;
  virtual void exitTable_partition_modify(GreenPlumParser::Table_partition_modifyContext *ctx) = 0;

  virtual void enterOpt_table_partition_exchange_validate(GreenPlumParser::Opt_table_partition_exchange_validateContext *ctx) = 0;
  virtual void exitOpt_table_partition_exchange_validate(GreenPlumParser::Opt_table_partition_exchange_validateContext *ctx) = 0;

  virtual void enterAlter_table_partition_id_spec(GreenPlumParser::Alter_table_partition_id_specContext *ctx) = 0;
  virtual void exitAlter_table_partition_id_spec(GreenPlumParser::Alter_table_partition_id_specContext *ctx) = 0;

  virtual void enterAlter_table_partition_id_spec_with_opt_default(GreenPlumParser::Alter_table_partition_id_spec_with_opt_defaultContext *ctx) = 0;
  virtual void exitAlter_table_partition_id_spec_with_opt_default(GreenPlumParser::Alter_table_partition_id_spec_with_opt_defaultContext *ctx) = 0;

  virtual void enterAlter_table_partition_cmd(GreenPlumParser::Alter_table_partition_cmdContext *ctx) = 0;
  virtual void exitAlter_table_partition_cmd(GreenPlumParser::Alter_table_partition_cmdContext *ctx) = 0;

  virtual void enterAlter_rel_cmds(GreenPlumParser::Alter_rel_cmdsContext *ctx) = 0;
  virtual void exitAlter_rel_cmds(GreenPlumParser::Alter_rel_cmdsContext *ctx) = 0;

  virtual void enterAlter_rel_cmd(GreenPlumParser::Alter_rel_cmdContext *ctx) = 0;
  virtual void exitAlter_rel_cmd(GreenPlumParser::Alter_rel_cmdContext *ctx) = 0;

  virtual void enterAlter_column_default(GreenPlumParser::Alter_column_defaultContext *ctx) = 0;
  virtual void exitAlter_column_default(GreenPlumParser::Alter_column_defaultContext *ctx) = 0;

  virtual void enterOpt_drop_behavior(GreenPlumParser::Opt_drop_behaviorContext *ctx) = 0;
  virtual void exitOpt_drop_behavior(GreenPlumParser::Opt_drop_behaviorContext *ctx) = 0;

  virtual void enterAlter_using(GreenPlumParser::Alter_usingContext *ctx) = 0;
  virtual void exitAlter_using(GreenPlumParser::Alter_usingContext *ctx) = 0;

  virtual void enterClose_portal_stmt(GreenPlumParser::Close_portal_stmtContext *ctx) = 0;
  virtual void exitClose_portal_stmt(GreenPlumParser::Close_portal_stmtContext *ctx) = 0;

  virtual void enterCopy_stmt(GreenPlumParser::Copy_stmtContext *ctx) = 0;
  virtual void exitCopy_stmt(GreenPlumParser::Copy_stmtContext *ctx) = 0;

  virtual void enterCopy_from(GreenPlumParser::Copy_fromContext *ctx) = 0;
  virtual void exitCopy_from(GreenPlumParser::Copy_fromContext *ctx) = 0;

  virtual void enterSkip_external_partition(GreenPlumParser::Skip_external_partitionContext *ctx) = 0;
  virtual void exitSkip_external_partition(GreenPlumParser::Skip_external_partitionContext *ctx) = 0;

  virtual void enterCopy_file_name(GreenPlumParser::Copy_file_nameContext *ctx) = 0;
  virtual void exitCopy_file_name(GreenPlumParser::Copy_file_nameContext *ctx) = 0;

  virtual void enterCopy_opt_item(GreenPlumParser::Copy_opt_itemContext *ctx) = 0;
  virtual void exitCopy_opt_item(GreenPlumParser::Copy_opt_itemContext *ctx) = 0;

  virtual void enterOpt_oids(GreenPlumParser::Opt_oidsContext *ctx) = 0;
  virtual void exitOpt_oids(GreenPlumParser::Opt_oidsContext *ctx) = 0;

  virtual void enterCopy_delimiter(GreenPlumParser::Copy_delimiterContext *ctx) = 0;
  virtual void exitCopy_delimiter(GreenPlumParser::Copy_delimiterContext *ctx) = 0;

  virtual void enterCreate_stmt(GreenPlumParser::Create_stmtContext *ctx) = 0;
  virtual void exitCreate_stmt(GreenPlumParser::Create_stmtContext *ctx) = 0;

  virtual void enterOpt_temp(GreenPlumParser::Opt_tempContext *ctx) = 0;
  virtual void exitOpt_temp(GreenPlumParser::Opt_tempContext *ctx) = 0;

  virtual void enterTable_element_list(GreenPlumParser::Table_element_listContext *ctx) = 0;
  virtual void exitTable_element_list(GreenPlumParser::Table_element_listContext *ctx) = 0;

  virtual void enterTable_element(GreenPlumParser::Table_elementContext *ctx) = 0;
  virtual void exitTable_element(GreenPlumParser::Table_elementContext *ctx) = 0;

  virtual void enterColumn_reference_storage_directive(GreenPlumParser::Column_reference_storage_directiveContext *ctx) = 0;
  virtual void exitColumn_reference_storage_directive(GreenPlumParser::Column_reference_storage_directiveContext *ctx) = 0;

  virtual void enterColumn_def(GreenPlumParser::Column_defContext *ctx) = 0;
  virtual void exitColumn_def(GreenPlumParser::Column_defContext *ctx) = 0;

  virtual void enterCol_constraint(GreenPlumParser::Col_constraintContext *ctx) = 0;
  virtual void exitCol_constraint(GreenPlumParser::Col_constraintContext *ctx) = 0;

  virtual void enterOpt_storage_encoding(GreenPlumParser::Opt_storage_encodingContext *ctx) = 0;
  virtual void exitOpt_storage_encoding(GreenPlumParser::Opt_storage_encodingContext *ctx) = 0;

  virtual void enterCol_constraint_elem(GreenPlumParser::Col_constraint_elemContext *ctx) = 0;
  virtual void exitCol_constraint_elem(GreenPlumParser::Col_constraint_elemContext *ctx) = 0;

  virtual void enterConstraint_attr(GreenPlumParser::Constraint_attrContext *ctx) = 0;
  virtual void exitConstraint_attr(GreenPlumParser::Constraint_attrContext *ctx) = 0;

  virtual void enterTable_like_clause(GreenPlumParser::Table_like_clauseContext *ctx) = 0;
  virtual void exitTable_like_clause(GreenPlumParser::Table_like_clauseContext *ctx) = 0;

  virtual void enterTable_list_option(GreenPlumParser::Table_list_optionContext *ctx) = 0;
  virtual void exitTable_list_option(GreenPlumParser::Table_list_optionContext *ctx) = 0;

  virtual void enterTable_constraint(GreenPlumParser::Table_constraintContext *ctx) = 0;
  virtual void exitTable_constraint(GreenPlumParser::Table_constraintContext *ctx) = 0;

  virtual void enterConstraint_elem(GreenPlumParser::Constraint_elemContext *ctx) = 0;
  virtual void exitConstraint_elem(GreenPlumParser::Constraint_elemContext *ctx) = 0;

  virtual void enterParen_column(GreenPlumParser::Paren_columnContext *ctx) = 0;
  virtual void exitParen_column(GreenPlumParser::Paren_columnContext *ctx) = 0;

  virtual void enterParen_column_list(GreenPlumParser::Paren_column_listContext *ctx) = 0;
  virtual void exitParen_column_list(GreenPlumParser::Paren_column_listContext *ctx) = 0;

  virtual void enterColumn_list(GreenPlumParser::Column_listContext *ctx) = 0;
  virtual void exitColumn_list(GreenPlumParser::Column_listContext *ctx) = 0;

  virtual void enterColumn_elem(GreenPlumParser::Column_elemContext *ctx) = 0;
  virtual void exitColumn_elem(GreenPlumParser::Column_elemContext *ctx) = 0;

  virtual void enterKey_match(GreenPlumParser::Key_matchContext *ctx) = 0;
  virtual void exitKey_match(GreenPlumParser::Key_matchContext *ctx) = 0;

  virtual void enterKey_actions(GreenPlumParser::Key_actionsContext *ctx) = 0;
  virtual void exitKey_actions(GreenPlumParser::Key_actionsContext *ctx) = 0;

  virtual void enterKey_update(GreenPlumParser::Key_updateContext *ctx) = 0;
  virtual void exitKey_update(GreenPlumParser::Key_updateContext *ctx) = 0;

  virtual void enterKey_delete(GreenPlumParser::Key_deleteContext *ctx) = 0;
  virtual void exitKey_delete(GreenPlumParser::Key_deleteContext *ctx) = 0;

  virtual void enterKey_action(GreenPlumParser::Key_actionContext *ctx) = 0;
  virtual void exitKey_action(GreenPlumParser::Key_actionContext *ctx) = 0;

  virtual void enterOpt_inherit(GreenPlumParser::Opt_inheritContext *ctx) = 0;
  virtual void exitOpt_inherit(GreenPlumParser::Opt_inheritContext *ctx) = 0;

  virtual void enterOpt_with_def_oids(GreenPlumParser::Opt_with_def_oidsContext *ctx) = 0;
  virtual void exitOpt_with_def_oids(GreenPlumParser::Opt_with_def_oidsContext *ctx) = 0;

  virtual void enterOn_commit_option(GreenPlumParser::On_commit_optionContext *ctx) = 0;
  virtual void exitOn_commit_option(GreenPlumParser::On_commit_optionContext *ctx) = 0;

  virtual void enterOpt_table_space(GreenPlumParser::Opt_table_spaceContext *ctx) = 0;
  virtual void exitOpt_table_space(GreenPlumParser::Opt_table_spaceContext *ctx) = 0;

  virtual void enterConstraint_table_space(GreenPlumParser::Constraint_table_spaceContext *ctx) = 0;
  virtual void exitConstraint_table_space(GreenPlumParser::Constraint_table_spaceContext *ctx) = 0;

  virtual void enterDistributed_by(GreenPlumParser::Distributed_byContext *ctx) = 0;
  virtual void exitDistributed_by(GreenPlumParser::Distributed_byContext *ctx) = 0;

  virtual void enterOpt_distributed_by(GreenPlumParser::Opt_distributed_byContext *ctx) = 0;
  virtual void exitOpt_distributed_by(GreenPlumParser::Opt_distributed_byContext *ctx) = 0;

  virtual void enterTab_partition_column_enc_list(GreenPlumParser::Tab_partition_column_enc_listContext *ctx) = 0;
  virtual void exitTab_partition_column_enc_list(GreenPlumParser::Tab_partition_column_enc_listContext *ctx) = 0;

  virtual void enterOpt_tab_partition_storage_attr(GreenPlumParser::Opt_tab_partition_storage_attrContext *ctx) = 0;
  virtual void exitOpt_tab_partition_storage_attr(GreenPlumParser::Opt_tab_partition_storage_attrContext *ctx) = 0;

  virtual void enterOpt_tab_partition_spec(GreenPlumParser::Opt_tab_partition_specContext *ctx) = 0;
  virtual void exitOpt_tab_partition_spec(GreenPlumParser::Opt_tab_partition_specContext *ctx) = 0;

  virtual void enterOpt_tab_sub_partition_spec(GreenPlumParser::Opt_tab_sub_partition_specContext *ctx) = 0;
  virtual void exitOpt_tab_sub_partition_spec(GreenPlumParser::Opt_tab_sub_partition_specContext *ctx) = 0;

  virtual void enterTab_partition_elem_list(GreenPlumParser::Tab_partition_elem_listContext *ctx) = 0;
  virtual void exitTab_partition_elem_list(GreenPlumParser::Tab_partition_elem_listContext *ctx) = 0;

  virtual void enterTab_sub_partition_elem_list(GreenPlumParser::Tab_sub_partition_elem_listContext *ctx) = 0;
  virtual void exitTab_sub_partition_elem_list(GreenPlumParser::Tab_sub_partition_elem_listContext *ctx) = 0;

  virtual void enterTab_part_val_no_paran(GreenPlumParser::Tab_part_val_no_paranContext *ctx) = 0;
  virtual void exitTab_part_val_no_paran(GreenPlumParser::Tab_part_val_no_paranContext *ctx) = 0;

  virtual void enterTab_part_val(GreenPlumParser::Tab_part_valContext *ctx) = 0;
  virtual void exitTab_part_val(GreenPlumParser::Tab_part_valContext *ctx) = 0;

  virtual void enterTab_partition_boundary_spec_val_list(GreenPlumParser::Tab_partition_boundary_spec_val_listContext *ctx) = 0;
  virtual void exitTab_partition_boundary_spec_val_list(GreenPlumParser::Tab_partition_boundary_spec_val_listContext *ctx) = 0;

  virtual void enterOpt_tab_partition_range_inclusive(GreenPlumParser::Opt_tab_partition_range_inclusiveContext *ctx) = 0;
  virtual void exitOpt_tab_partition_range_inclusive(GreenPlumParser::Opt_tab_partition_range_inclusiveContext *ctx) = 0;

  virtual void enterTab_partition_boundary_spec_start(GreenPlumParser::Tab_partition_boundary_spec_startContext *ctx) = 0;
  virtual void exitTab_partition_boundary_spec_start(GreenPlumParser::Tab_partition_boundary_spec_startContext *ctx) = 0;

  virtual void enterTab_partition_boundary_spec_end(GreenPlumParser::Tab_partition_boundary_spec_endContext *ctx) = 0;
  virtual void exitTab_partition_boundary_spec_end(GreenPlumParser::Tab_partition_boundary_spec_endContext *ctx) = 0;

  virtual void enterOpt_tab_partition_boundary_spec_every(GreenPlumParser::Opt_tab_partition_boundary_spec_everyContext *ctx) = 0;
  virtual void exitOpt_tab_partition_boundary_spec_every(GreenPlumParser::Opt_tab_partition_boundary_spec_everyContext *ctx) = 0;

  virtual void enterTab_partition_boundary_spec(GreenPlumParser::Tab_partition_boundary_specContext *ctx) = 0;
  virtual void exitTab_partition_boundary_spec(GreenPlumParser::Tab_partition_boundary_specContext *ctx) = 0;

  virtual void enterParen_part_values_single(GreenPlumParser::Paren_part_values_singleContext *ctx) = 0;
  virtual void exitParen_part_values_single(GreenPlumParser::Paren_part_values_singleContext *ctx) = 0;

  virtual void enterMulti_spec_value_list(GreenPlumParser::Multi_spec_value_listContext *ctx) = 0;
  virtual void exitMulti_spec_value_list(GreenPlumParser::Multi_spec_value_listContext *ctx) = 0;

  virtual void enterPart_values_single(GreenPlumParser::Part_values_singleContext *ctx) = 0;
  virtual void exitPart_values_single(GreenPlumParser::Part_values_singleContext *ctx) = 0;

  virtual void enterPart_values_clause(GreenPlumParser::Part_values_clauseContext *ctx) = 0;
  virtual void exitPart_values_clause(GreenPlumParser::Part_values_clauseContext *ctx) = 0;

  virtual void enterPart_values_or_spec_list(GreenPlumParser::Part_values_or_spec_listContext *ctx) = 0;
  virtual void exitPart_values_or_spec_list(GreenPlumParser::Part_values_or_spec_listContext *ctx) = 0;

  virtual void enterTab_partition_elem(GreenPlumParser::Tab_partition_elemContext *ctx) = 0;
  virtual void exitTab_partition_elem(GreenPlumParser::Tab_partition_elemContext *ctx) = 0;

  virtual void enterTab_sub_partition_elem(GreenPlumParser::Tab_sub_partition_elemContext *ctx) = 0;
  virtual void exitTab_sub_partition_elem(GreenPlumParser::Tab_sub_partition_elemContext *ctx) = 0;

  virtual void enterTab_partition_elemOption(GreenPlumParser::Tab_partition_elemOptionContext *ctx) = 0;
  virtual void exitTab_partition_elemOption(GreenPlumParser::Tab_partition_elemOptionContext *ctx) = 0;

  virtual void enterTab_partition_name_decl(GreenPlumParser::Tab_partition_name_declContext *ctx) = 0;
  virtual void exitTab_partition_name_decl(GreenPlumParser::Tab_partition_name_declContext *ctx) = 0;

  virtual void enterTab_partition_default_name_decl(GreenPlumParser::Tab_partition_default_name_declContext *ctx) = 0;
  virtual void exitTab_partition_default_name_decl(GreenPlumParser::Tab_partition_default_name_declContext *ctx) = 0;

  virtual void enterTab_sub_partition_name_decl(GreenPlumParser::Tab_sub_partition_name_declContext *ctx) = 0;
  virtual void exitTab_sub_partition_name_decl(GreenPlumParser::Tab_sub_partition_name_declContext *ctx) = 0;

  virtual void enterTab_sub_partition_default_name_decl(GreenPlumParser::Tab_sub_partition_default_name_declContext *ctx) = 0;
  virtual void exitTab_sub_partition_default_name_decl(GreenPlumParser::Tab_sub_partition_default_name_declContext *ctx) = 0;

  virtual void enterTab_partition_by_type(GreenPlumParser::Tab_partition_by_typeContext *ctx) = 0;
  virtual void exitTab_partition_by_type(GreenPlumParser::Tab_partition_by_typeContext *ctx) = 0;

  virtual void enterOpt_tab_partition_by(GreenPlumParser::Opt_tab_partition_byContext *ctx) = 0;
  virtual void exitOpt_tab_partition_by(GreenPlumParser::Opt_tab_partition_byContext *ctx) = 0;

  virtual void enterTab_sub_partition_by_list(GreenPlumParser::Tab_sub_partition_by_listContext *ctx) = 0;
  virtual void exitTab_sub_partition_by_list(GreenPlumParser::Tab_sub_partition_by_listContext *ctx) = 0;

  virtual void enterTab_sub_partition_template(GreenPlumParser::Tab_sub_partition_templateContext *ctx) = 0;
  virtual void exitTab_sub_partition_template(GreenPlumParser::Tab_sub_partition_templateContext *ctx) = 0;

  virtual void enterTab_sub_partition_by(GreenPlumParser::Tab_sub_partition_byContext *ctx) = 0;
  virtual void exitTab_sub_partition_by(GreenPlumParser::Tab_sub_partition_byContext *ctx) = 0;

  virtual void enterOpt_partitions_number(GreenPlumParser::Opt_partitions_numberContext *ctx) = 0;
  virtual void exitOpt_partitions_number(GreenPlumParser::Opt_partitions_numberContext *ctx) = 0;

  virtual void enterCreate_as_stmt(GreenPlumParser::Create_as_stmtContext *ctx) = 0;
  virtual void exitCreate_as_stmt(GreenPlumParser::Create_as_stmtContext *ctx) = 0;

  virtual void enterCreate_as_target(GreenPlumParser::Create_as_targetContext *ctx) = 0;
  virtual void exitCreate_as_target(GreenPlumParser::Create_as_targetContext *ctx) = 0;

  virtual void enterOpt_create_as(GreenPlumParser::Opt_create_asContext *ctx) = 0;
  virtual void exitOpt_create_as(GreenPlumParser::Opt_create_asContext *ctx) = 0;

  virtual void enterCreate_as_list(GreenPlumParser::Create_as_listContext *ctx) = 0;
  virtual void exitCreate_as_list(GreenPlumParser::Create_as_listContext *ctx) = 0;

  virtual void enterCreate_as_element(GreenPlumParser::Create_as_elementContext *ctx) = 0;
  virtual void exitCreate_as_element(GreenPlumParser::Create_as_elementContext *ctx) = 0;

  virtual void enterOpt_with_data(GreenPlumParser::Opt_with_dataContext *ctx) = 0;
  virtual void exitOpt_with_data(GreenPlumParser::Opt_with_dataContext *ctx) = 0;

  virtual void enterCreate_external_stmt(GreenPlumParser::Create_external_stmtContext *ctx) = 0;
  virtual void exitCreate_external_stmt(GreenPlumParser::Create_external_stmtContext *ctx) = 0;

  virtual void enterOpt_writable(GreenPlumParser::Opt_writableContext *ctx) = 0;
  virtual void exitOpt_writable(GreenPlumParser::Opt_writableContext *ctx) = 0;

  virtual void enterExt_type_desc(GreenPlumParser::Ext_type_descContext *ctx) = 0;
  virtual void exitExt_type_desc(GreenPlumParser::Ext_type_descContext *ctx) = 0;

  virtual void enterExt_on_clause_item(GreenPlumParser::Ext_on_clause_itemContext *ctx) = 0;
  virtual void exitExt_on_clause_item(GreenPlumParser::Ext_on_clause_itemContext *ctx) = 0;

  virtual void enterDouble_parens(GreenPlumParser::Double_parensContext *ctx) = 0;
  virtual void exitDouble_parens(GreenPlumParser::Double_parensContext *ctx) = 0;

  virtual void enterFormat_opt(GreenPlumParser::Format_optContext *ctx) = 0;
  virtual void exitFormat_opt(GreenPlumParser::Format_optContext *ctx) = 0;

  virtual void enterFormat_opt_list(GreenPlumParser::Format_opt_listContext *ctx) = 0;
  virtual void exitFormat_opt_list(GreenPlumParser::Format_opt_listContext *ctx) = 0;

  virtual void enterFormat_def_list(GreenPlumParser::Format_def_listContext *ctx) = 0;
  virtual void exitFormat_def_list(GreenPlumParser::Format_def_listContext *ctx) = 0;

  virtual void enterFormat_def_item(GreenPlumParser::Format_def_itemContext *ctx) = 0;
  virtual void exitFormat_def_item(GreenPlumParser::Format_def_itemContext *ctx) = 0;

  virtual void enterFormat_opt_item(GreenPlumParser::Format_opt_itemContext *ctx) = 0;
  virtual void exitFormat_opt_item(GreenPlumParser::Format_opt_itemContext *ctx) = 0;

  virtual void enterExt_options_opt(GreenPlumParser::Ext_options_optContext *ctx) = 0;
  virtual void exitExt_options_opt(GreenPlumParser::Ext_options_optContext *ctx) = 0;

  virtual void enterExt_options(GreenPlumParser::Ext_optionsContext *ctx) = 0;
  virtual void exitExt_options(GreenPlumParser::Ext_optionsContext *ctx) = 0;

  virtual void enterExt_options_list(GreenPlumParser::Ext_options_listContext *ctx) = 0;
  virtual void exitExt_options_list(GreenPlumParser::Ext_options_listContext *ctx) = 0;

  virtual void enterExt_options_item(GreenPlumParser::Ext_options_itemContext *ctx) = 0;
  virtual void exitExt_options_item(GreenPlumParser::Ext_options_itemContext *ctx) = 0;

  virtual void enterExt_table_element_list(GreenPlumParser::Ext_table_element_listContext *ctx) = 0;
  virtual void exitExt_table_element_list(GreenPlumParser::Ext_table_element_listContext *ctx) = 0;

  virtual void enterExt_table_element(GreenPlumParser::Ext_table_elementContext *ctx) = 0;
  virtual void exitExt_table_element(GreenPlumParser::Ext_table_elementContext *ctx) = 0;

  virtual void enterExt_column_def(GreenPlumParser::Ext_column_defContext *ctx) = 0;
  virtual void exitExt_column_def(GreenPlumParser::Ext_column_defContext *ctx) = 0;

  virtual void enterOpt_single_row_error_handling(GreenPlumParser::Opt_single_row_error_handlingContext *ctx) = 0;
  virtual void exitOpt_single_row_error_handling(GreenPlumParser::Opt_single_row_error_handlingContext *ctx) = 0;

  virtual void enterOpt_log_error_table(GreenPlumParser::Opt_log_error_tableContext *ctx) = 0;
  virtual void exitOpt_log_error_table(GreenPlumParser::Opt_log_error_tableContext *ctx) = 0;

  virtual void enterOpt_sreh_limit_type(GreenPlumParser::Opt_sreh_limit_typeContext *ctx) = 0;
  virtual void exitOpt_sreh_limit_type(GreenPlumParser::Opt_sreh_limit_typeContext *ctx) = 0;

  virtual void enterExt_opt_encoding_list(GreenPlumParser::Ext_opt_encoding_listContext *ctx) = 0;
  virtual void exitExt_opt_encoding_list(GreenPlumParser::Ext_opt_encoding_listContext *ctx) = 0;

  virtual void enterExt_opt_encoding_item(GreenPlumParser::Ext_opt_encoding_itemContext *ctx) = 0;
  virtual void exitExt_opt_encoding_item(GreenPlumParser::Ext_opt_encoding_itemContext *ctx) = 0;

  virtual void enterCreate_seq_stmt(GreenPlumParser::Create_seq_stmtContext *ctx) = 0;
  virtual void exitCreate_seq_stmt(GreenPlumParser::Create_seq_stmtContext *ctx) = 0;

  virtual void enterAlter_seq_stmt(GreenPlumParser::Alter_seq_stmtContext *ctx) = 0;
  virtual void exitAlter_seq_stmt(GreenPlumParser::Alter_seq_stmtContext *ctx) = 0;

  virtual void enterOpt_seq_list(GreenPlumParser::Opt_seq_listContext *ctx) = 0;
  virtual void exitOpt_seq_list(GreenPlumParser::Opt_seq_listContext *ctx) = 0;

  virtual void enterOpt_seq_elem(GreenPlumParser::Opt_seq_elemContext *ctx) = 0;
  virtual void exitOpt_seq_elem(GreenPlumParser::Opt_seq_elemContext *ctx) = 0;

  virtual void enterNumberic_only(GreenPlumParser::Numberic_onlyContext *ctx) = 0;
  virtual void exitNumberic_only(GreenPlumParser::Numberic_onlyContext *ctx) = 0;

  virtual void enterFloat_only(GreenPlumParser::Float_onlyContext *ctx) = 0;
  virtual void exitFloat_only(GreenPlumParser::Float_onlyContext *ctx) = 0;

  virtual void enterInteger_only(GreenPlumParser::Integer_onlyContext *ctx) = 0;
  virtual void exitInteger_only(GreenPlumParser::Integer_onlyContext *ctx) = 0;

  virtual void enterCreate_p_lang_stmt(GreenPlumParser::Create_p_lang_stmtContext *ctx) = 0;
  virtual void exitCreate_p_lang_stmt(GreenPlumParser::Create_p_lang_stmtContext *ctx) = 0;

  virtual void enterCreate_p_lang_stmtOption(GreenPlumParser::Create_p_lang_stmtOptionContext *ctx) = 0;
  virtual void exitCreate_p_lang_stmtOption(GreenPlumParser::Create_p_lang_stmtOptionContext *ctx) = 0;

  virtual void enterHandler_name(GreenPlumParser::Handler_nameContext *ctx) = 0;
  virtual void exitHandler_name(GreenPlumParser::Handler_nameContext *ctx) = 0;

  virtual void enterOpt_inline_handler(GreenPlumParser::Opt_inline_handlerContext *ctx) = 0;
  virtual void exitOpt_inline_handler(GreenPlumParser::Opt_inline_handlerContext *ctx) = 0;

  virtual void enterValidator_clause(GreenPlumParser::Validator_clauseContext *ctx) = 0;
  virtual void exitValidator_clause(GreenPlumParser::Validator_clauseContext *ctx) = 0;

  virtual void enterOpt_validator(GreenPlumParser::Opt_validatorContext *ctx) = 0;
  virtual void exitOpt_validator(GreenPlumParser::Opt_validatorContext *ctx) = 0;

  virtual void enterDrop_p_lang_stmt(GreenPlumParser::Drop_p_lang_stmtContext *ctx) = 0;
  virtual void exitDrop_p_lang_stmt(GreenPlumParser::Drop_p_lang_stmtContext *ctx) = 0;

  virtual void enterCreate_file_space_stmt(GreenPlumParser::Create_file_space_stmtContext *ctx) = 0;
  virtual void exitCreate_file_space_stmt(GreenPlumParser::Create_file_space_stmtContext *ctx) = 0;

  virtual void enterFile_space_seg_list(GreenPlumParser::File_space_seg_listContext *ctx) = 0;
  virtual void exitFile_space_seg_list(GreenPlumParser::File_space_seg_listContext *ctx) = 0;

  virtual void enterFile_space_seg(GreenPlumParser::File_space_segContext *ctx) = 0;
  virtual void exitFile_space_seg(GreenPlumParser::File_space_segContext *ctx) = 0;

  virtual void enterOpt_owner(GreenPlumParser::Opt_ownerContext *ctx) = 0;
  virtual void exitOpt_owner(GreenPlumParser::Opt_ownerContext *ctx) = 0;

  virtual void enterCreate_table_space_stmt(GreenPlumParser::Create_table_space_stmtContext *ctx) = 0;
  virtual void exitCreate_table_space_stmt(GreenPlumParser::Create_table_space_stmtContext *ctx) = 0;

  virtual void enterCreate_extension_stmt(GreenPlumParser::Create_extension_stmtContext *ctx) = 0;
  virtual void exitCreate_extension_stmt(GreenPlumParser::Create_extension_stmtContext *ctx) = 0;

  virtual void enterCreate_extension_opt_list(GreenPlumParser::Create_extension_opt_listContext *ctx) = 0;
  virtual void exitCreate_extension_opt_list(GreenPlumParser::Create_extension_opt_listContext *ctx) = 0;

  virtual void enterCreate_extension_opt_item(GreenPlumParser::Create_extension_opt_itemContext *ctx) = 0;
  virtual void exitCreate_extension_opt_item(GreenPlumParser::Create_extension_opt_itemContext *ctx) = 0;

  virtual void enterAlter_extension_stmt(GreenPlumParser::Alter_extension_stmtContext *ctx) = 0;
  virtual void exitAlter_extension_stmt(GreenPlumParser::Alter_extension_stmtContext *ctx) = 0;

  virtual void enterAlter_extension_opt_list(GreenPlumParser::Alter_extension_opt_listContext *ctx) = 0;
  virtual void exitAlter_extension_opt_list(GreenPlumParser::Alter_extension_opt_listContext *ctx) = 0;

  virtual void enterAlter_extension_opt_item(GreenPlumParser::Alter_extension_opt_itemContext *ctx) = 0;
  virtual void exitAlter_extension_opt_item(GreenPlumParser::Alter_extension_opt_itemContext *ctx) = 0;

  virtual void enterAlter_extension_content_stmt(GreenPlumParser::Alter_extension_content_stmtContext *ctx) = 0;
  virtual void exitAlter_extension_content_stmt(GreenPlumParser::Alter_extension_content_stmtContext *ctx) = 0;

  virtual void enterAlter_extension_content_stmtOption(GreenPlumParser::Alter_extension_content_stmtOptionContext *ctx) = 0;
  virtual void exitAlter_extension_content_stmtOption(GreenPlumParser::Alter_extension_content_stmtOptionContext *ctx) = 0;

  virtual void enterCreate_trig_stmt(GreenPlumParser::Create_trig_stmtContext *ctx) = 0;
  virtual void exitCreate_trig_stmt(GreenPlumParser::Create_trig_stmtContext *ctx) = 0;

  virtual void enterTrigger_action_time(GreenPlumParser::Trigger_action_timeContext *ctx) = 0;
  virtual void exitTrigger_action_time(GreenPlumParser::Trigger_action_timeContext *ctx) = 0;

  virtual void enterTrigger_events(GreenPlumParser::Trigger_eventsContext *ctx) = 0;
  virtual void exitTrigger_events(GreenPlumParser::Trigger_eventsContext *ctx) = 0;

  virtual void enterTrigger_one_event(GreenPlumParser::Trigger_one_eventContext *ctx) = 0;
  virtual void exitTrigger_one_event(GreenPlumParser::Trigger_one_eventContext *ctx) = 0;

  virtual void enterTrigger_for_spec(GreenPlumParser::Trigger_for_specContext *ctx) = 0;
  virtual void exitTrigger_for_spec(GreenPlumParser::Trigger_for_specContext *ctx) = 0;

  virtual void enterTrigger_for_type(GreenPlumParser::Trigger_for_typeContext *ctx) = 0;
  virtual void exitTrigger_for_type(GreenPlumParser::Trigger_for_typeContext *ctx) = 0;

  virtual void enterTrigger_func_args(GreenPlumParser::Trigger_func_argsContext *ctx) = 0;
  virtual void exitTrigger_func_args(GreenPlumParser::Trigger_func_argsContext *ctx) = 0;

  virtual void enterTrigger_func_arg(GreenPlumParser::Trigger_func_argContext *ctx) = 0;
  virtual void exitTrigger_func_arg(GreenPlumParser::Trigger_func_argContext *ctx) = 0;

  virtual void enterOpt_constr_from_table(GreenPlumParser::Opt_constr_from_tableContext *ctx) = 0;
  virtual void exitOpt_constr_from_table(GreenPlumParser::Opt_constr_from_tableContext *ctx) = 0;

  virtual void enterConstraint_attr_spec(GreenPlumParser::Constraint_attr_specContext *ctx) = 0;
  virtual void exitConstraint_attr_spec(GreenPlumParser::Constraint_attr_specContext *ctx) = 0;

  virtual void enterConstraint_deferrability_spec(GreenPlumParser::Constraint_deferrability_specContext *ctx) = 0;
  virtual void exitConstraint_deferrability_spec(GreenPlumParser::Constraint_deferrability_specContext *ctx) = 0;

  virtual void enterConstraint_time_spec(GreenPlumParser::Constraint_time_specContext *ctx) = 0;
  virtual void exitConstraint_time_spec(GreenPlumParser::Constraint_time_specContext *ctx) = 0;

  virtual void enterDrop_trig_stmt(GreenPlumParser::Drop_trig_stmtContext *ctx) = 0;
  virtual void exitDrop_trig_stmt(GreenPlumParser::Drop_trig_stmtContext *ctx) = 0;

  virtual void enterCreate_assert_stmt(GreenPlumParser::Create_assert_stmtContext *ctx) = 0;
  virtual void exitCreate_assert_stmt(GreenPlumParser::Create_assert_stmtContext *ctx) = 0;

  virtual void enterDrop_assert_stmt(GreenPlumParser::Drop_assert_stmtContext *ctx) = 0;
  virtual void exitDrop_assert_stmt(GreenPlumParser::Drop_assert_stmtContext *ctx) = 0;

  virtual void enterDefine_stmt(GreenPlumParser::Define_stmtContext *ctx) = 0;
  virtual void exitDefine_stmt(GreenPlumParser::Define_stmtContext *ctx) = 0;

  virtual void enterDefinition(GreenPlumParser::DefinitionContext *ctx) = 0;
  virtual void exitDefinition(GreenPlumParser::DefinitionContext *ctx) = 0;

  virtual void enterDef_list(GreenPlumParser::Def_listContext *ctx) = 0;
  virtual void exitDef_list(GreenPlumParser::Def_listContext *ctx) = 0;

  virtual void enterDef_elem(GreenPlumParser::Def_elemContext *ctx) = 0;
  virtual void exitDef_elem(GreenPlumParser::Def_elemContext *ctx) = 0;

  virtual void enterDef_arg(GreenPlumParser::Def_argContext *ctx) = 0;
  virtual void exitDef_arg(GreenPlumParser::Def_argContext *ctx) = 0;

  virtual void enterAggr_args(GreenPlumParser::Aggr_argsContext *ctx) = 0;
  virtual void exitAggr_args(GreenPlumParser::Aggr_argsContext *ctx) = 0;

  virtual void enterOld_aggr_definition(GreenPlumParser::Old_aggr_definitionContext *ctx) = 0;
  virtual void exitOld_aggr_definition(GreenPlumParser::Old_aggr_definitionContext *ctx) = 0;

  virtual void enterOld_aggr_list(GreenPlumParser::Old_aggr_listContext *ctx) = 0;
  virtual void exitOld_aggr_list(GreenPlumParser::Old_aggr_listContext *ctx) = 0;

  virtual void enterOld_aggr_elem(GreenPlumParser::Old_aggr_elemContext *ctx) = 0;
  virtual void exitOld_aggr_elem(GreenPlumParser::Old_aggr_elemContext *ctx) = 0;

  virtual void enterEnum_val_list(GreenPlumParser::Enum_val_listContext *ctx) = 0;
  virtual void exitEnum_val_list(GreenPlumParser::Enum_val_listContext *ctx) = 0;

  virtual void enterCreate_op_class_stmt(GreenPlumParser::Create_op_class_stmtContext *ctx) = 0;
  virtual void exitCreate_op_class_stmt(GreenPlumParser::Create_op_class_stmtContext *ctx) = 0;

  virtual void enterOpclass_item_list(GreenPlumParser::Opclass_item_listContext *ctx) = 0;
  virtual void exitOpclass_item_list(GreenPlumParser::Opclass_item_listContext *ctx) = 0;

  virtual void enterOpclass_item(GreenPlumParser::Opclass_itemContext *ctx) = 0;
  virtual void exitOpclass_item(GreenPlumParser::Opclass_itemContext *ctx) = 0;

  virtual void enterOpt_opfamily(GreenPlumParser::Opt_opfamilyContext *ctx) = 0;
  virtual void exitOpt_opfamily(GreenPlumParser::Opt_opfamilyContext *ctx) = 0;

  virtual void enterCreate_op_family_stmt(GreenPlumParser::Create_op_family_stmtContext *ctx) = 0;
  virtual void exitCreate_op_family_stmt(GreenPlumParser::Create_op_family_stmtContext *ctx) = 0;

  virtual void enterAlter_op_family_stmt(GreenPlumParser::Alter_op_family_stmtContext *ctx) = 0;
  virtual void exitAlter_op_family_stmt(GreenPlumParser::Alter_op_family_stmtContext *ctx) = 0;

  virtual void enterOpclass_drop_list(GreenPlumParser::Opclass_drop_listContext *ctx) = 0;
  virtual void exitOpclass_drop_list(GreenPlumParser::Opclass_drop_listContext *ctx) = 0;

  virtual void enterOpclass_drop(GreenPlumParser::Opclass_dropContext *ctx) = 0;
  virtual void exitOpclass_drop(GreenPlumParser::Opclass_dropContext *ctx) = 0;

  virtual void enterDrop_op_class_stmt(GreenPlumParser::Drop_op_class_stmtContext *ctx) = 0;
  virtual void exitDrop_op_class_stmt(GreenPlumParser::Drop_op_class_stmtContext *ctx) = 0;

  virtual void enterDrop_op_family_stmt(GreenPlumParser::Drop_op_family_stmtContext *ctx) = 0;
  virtual void exitDrop_op_family_stmt(GreenPlumParser::Drop_op_family_stmtContext *ctx) = 0;

  virtual void enterDrop_owned_stmt(GreenPlumParser::Drop_owned_stmtContext *ctx) = 0;
  virtual void exitDrop_owned_stmt(GreenPlumParser::Drop_owned_stmtContext *ctx) = 0;

  virtual void enterReassign_owned_stmt(GreenPlumParser::Reassign_owned_stmtContext *ctx) = 0;
  virtual void exitReassign_owned_stmt(GreenPlumParser::Reassign_owned_stmtContext *ctx) = 0;

  virtual void enterDrop_stmt(GreenPlumParser::Drop_stmtContext *ctx) = 0;
  virtual void exitDrop_stmt(GreenPlumParser::Drop_stmtContext *ctx) = 0;

  virtual void enterDrop_type(GreenPlumParser::Drop_typeContext *ctx) = 0;
  virtual void exitDrop_type(GreenPlumParser::Drop_typeContext *ctx) = 0;

  virtual void enterAny_name_list(GreenPlumParser::Any_name_listContext *ctx) = 0;
  virtual void exitAny_name_list(GreenPlumParser::Any_name_listContext *ctx) = 0;

  virtual void enterAny_name(GreenPlumParser::Any_nameContext *ctx) = 0;
  virtual void exitAny_name(GreenPlumParser::Any_nameContext *ctx) = 0;

  virtual void enterAttrs(GreenPlumParser::AttrsContext *ctx) = 0;
  virtual void exitAttrs(GreenPlumParser::AttrsContext *ctx) = 0;

  virtual void enterTruncate_stmt(GreenPlumParser::Truncate_stmtContext *ctx) = 0;
  virtual void exitTruncate_stmt(GreenPlumParser::Truncate_stmtContext *ctx) = 0;

  virtual void enterComment_stmt(GreenPlumParser::Comment_stmtContext *ctx) = 0;
  virtual void exitComment_stmt(GreenPlumParser::Comment_stmtContext *ctx) = 0;

  virtual void enterComment_stmtOption(GreenPlumParser::Comment_stmtOptionContext *ctx) = 0;
  virtual void exitComment_stmtOption(GreenPlumParser::Comment_stmtOptionContext *ctx) = 0;

  virtual void enterComment_option(GreenPlumParser::Comment_optionContext *ctx) = 0;
  virtual void exitComment_option(GreenPlumParser::Comment_optionContext *ctx) = 0;

  virtual void enterComment_type(GreenPlumParser::Comment_typeContext *ctx) = 0;
  virtual void exitComment_type(GreenPlumParser::Comment_typeContext *ctx) = 0;

  virtual void enterComment_text(GreenPlumParser::Comment_textContext *ctx) = 0;
  virtual void exitComment_text(GreenPlumParser::Comment_textContext *ctx) = 0;

  virtual void enterFetch_stmt(GreenPlumParser::Fetch_stmtContext *ctx) = 0;
  virtual void exitFetch_stmt(GreenPlumParser::Fetch_stmtContext *ctx) = 0;

  virtual void enterFetch_direction(GreenPlumParser::Fetch_directionContext *ctx) = 0;
  virtual void exitFetch_direction(GreenPlumParser::Fetch_directionContext *ctx) = 0;

  virtual void enterGrant_stmt(GreenPlumParser::Grant_stmtContext *ctx) = 0;
  virtual void exitGrant_stmt(GreenPlumParser::Grant_stmtContext *ctx) = 0;

  virtual void enterRevoke_stmt(GreenPlumParser::Revoke_stmtContext *ctx) = 0;
  virtual void exitRevoke_stmt(GreenPlumParser::Revoke_stmtContext *ctx) = 0;

  virtual void enterPrivileges(GreenPlumParser::PrivilegesContext *ctx) = 0;
  virtual void exitPrivileges(GreenPlumParser::PrivilegesContext *ctx) = 0;

  virtual void enterPrivilege_list(GreenPlumParser::Privilege_listContext *ctx) = 0;
  virtual void exitPrivilege_list(GreenPlumParser::Privilege_listContext *ctx) = 0;

  virtual void enterPrivilege(GreenPlumParser::PrivilegeContext *ctx) = 0;
  virtual void exitPrivilege(GreenPlumParser::PrivilegeContext *ctx) = 0;

  virtual void enterPrivilege_target(GreenPlumParser::Privilege_targetContext *ctx) = 0;
  virtual void exitPrivilege_target(GreenPlumParser::Privilege_targetContext *ctx) = 0;

  virtual void enterGrantee_list(GreenPlumParser::Grantee_listContext *ctx) = 0;
  virtual void exitGrantee_list(GreenPlumParser::Grantee_listContext *ctx) = 0;

  virtual void enterGrantee(GreenPlumParser::GranteeContext *ctx) = 0;
  virtual void exitGrantee(GreenPlumParser::GranteeContext *ctx) = 0;

  virtual void enterOpt_grant_grant_option(GreenPlumParser::Opt_grant_grant_optionContext *ctx) = 0;
  virtual void exitOpt_grant_grant_option(GreenPlumParser::Opt_grant_grant_optionContext *ctx) = 0;

  virtual void enterFunction_with_argtypes_list(GreenPlumParser::Function_with_argtypes_listContext *ctx) = 0;
  virtual void exitFunction_with_argtypes_list(GreenPlumParser::Function_with_argtypes_listContext *ctx) = 0;

  virtual void enterFunction_with_argtypes(GreenPlumParser::Function_with_argtypesContext *ctx) = 0;
  virtual void exitFunction_with_argtypes(GreenPlumParser::Function_with_argtypesContext *ctx) = 0;

  virtual void enterGrant_role_stmt(GreenPlumParser::Grant_role_stmtContext *ctx) = 0;
  virtual void exitGrant_role_stmt(GreenPlumParser::Grant_role_stmtContext *ctx) = 0;

  virtual void enterRevoke_role_stmt(GreenPlumParser::Revoke_role_stmtContext *ctx) = 0;
  virtual void exitRevoke_role_stmt(GreenPlumParser::Revoke_role_stmtContext *ctx) = 0;

  virtual void enterOpt_grant_admin_option(GreenPlumParser::Opt_grant_admin_optionContext *ctx) = 0;
  virtual void exitOpt_grant_admin_option(GreenPlumParser::Opt_grant_admin_optionContext *ctx) = 0;

  virtual void enterOpt_granted_by(GreenPlumParser::Opt_granted_byContext *ctx) = 0;
  virtual void exitOpt_granted_by(GreenPlumParser::Opt_granted_byContext *ctx) = 0;

  virtual void enterIndex_stmt(GreenPlumParser::Index_stmtContext *ctx) = 0;
  virtual void exitIndex_stmt(GreenPlumParser::Index_stmtContext *ctx) = 0;

  virtual void enterIndex_params(GreenPlumParser::Index_paramsContext *ctx) = 0;
  virtual void exitIndex_params(GreenPlumParser::Index_paramsContext *ctx) = 0;

  virtual void enterIndex_elem(GreenPlumParser::Index_elemContext *ctx) = 0;
  virtual void exitIndex_elem(GreenPlumParser::Index_elemContext *ctx) = 0;

  virtual void enterOpt_class(GreenPlumParser::Opt_classContext *ctx) = 0;
  virtual void exitOpt_class(GreenPlumParser::Opt_classContext *ctx) = 0;

  virtual void enterOpt_asc_desc(GreenPlumParser::Opt_asc_descContext *ctx) = 0;
  virtual void exitOpt_asc_desc(GreenPlumParser::Opt_asc_descContext *ctx) = 0;

  virtual void enterOpt_nulls_order(GreenPlumParser::Opt_nulls_orderContext *ctx) = 0;
  virtual void exitOpt_nulls_order(GreenPlumParser::Opt_nulls_orderContext *ctx) = 0;

  virtual void enterCreate_function_stmt(GreenPlumParser::Create_function_stmtContext *ctx) = 0;
  virtual void exitCreate_function_stmt(GreenPlumParser::Create_function_stmtContext *ctx) = 0;

  virtual void enterOpt_or_replace(GreenPlumParser::Opt_or_replaceContext *ctx) = 0;
  virtual void exitOpt_or_replace(GreenPlumParser::Opt_or_replaceContext *ctx) = 0;

  virtual void enterFunc_args(GreenPlumParser::Func_argsContext *ctx) = 0;
  virtual void exitFunc_args(GreenPlumParser::Func_argsContext *ctx) = 0;

  virtual void enterFunc_args_list(GreenPlumParser::Func_args_listContext *ctx) = 0;
  virtual void exitFunc_args_list(GreenPlumParser::Func_args_listContext *ctx) = 0;

  virtual void enterFunc_args_with_defaults(GreenPlumParser::Func_args_with_defaultsContext *ctx) = 0;
  virtual void exitFunc_args_with_defaults(GreenPlumParser::Func_args_with_defaultsContext *ctx) = 0;

  virtual void enterFunc_args_with_defaults_list(GreenPlumParser::Func_args_with_defaults_listContext *ctx) = 0;
  virtual void exitFunc_args_with_defaults_list(GreenPlumParser::Func_args_with_defaults_listContext *ctx) = 0;

  virtual void enterFunc_arg(GreenPlumParser::Func_argContext *ctx) = 0;
  virtual void exitFunc_arg(GreenPlumParser::Func_argContext *ctx) = 0;

  virtual void enterFunc_arg_with_default(GreenPlumParser::Func_arg_with_defaultContext *ctx) = 0;
  virtual void exitFunc_arg_with_default(GreenPlumParser::Func_arg_with_defaultContext *ctx) = 0;

  virtual void enterArg_class(GreenPlumParser::Arg_classContext *ctx) = 0;
  virtual void exitArg_class(GreenPlumParser::Arg_classContext *ctx) = 0;

  virtual void enterParam_name(GreenPlumParser::Param_nameContext *ctx) = 0;
  virtual void exitParam_name(GreenPlumParser::Param_nameContext *ctx) = 0;

  virtual void enterFunc_return(GreenPlumParser::Func_returnContext *ctx) = 0;
  virtual void exitFunc_return(GreenPlumParser::Func_returnContext *ctx) = 0;

  virtual void enterFunc_type(GreenPlumParser::Func_typeContext *ctx) = 0;
  virtual void exitFunc_type(GreenPlumParser::Func_typeContext *ctx) = 0;

  virtual void enterFunc_type_table_option_list(GreenPlumParser::Func_type_table_option_listContext *ctx) = 0;
  virtual void exitFunc_type_table_option_list(GreenPlumParser::Func_type_table_option_listContext *ctx) = 0;

  virtual void enterFunc_type_table_option(GreenPlumParser::Func_type_table_optionContext *ctx) = 0;
  virtual void exitFunc_type_table_option(GreenPlumParser::Func_type_table_optionContext *ctx) = 0;

  virtual void enterCreatefunc_opt_list(GreenPlumParser::Createfunc_opt_listContext *ctx) = 0;
  virtual void exitCreatefunc_opt_list(GreenPlumParser::Createfunc_opt_listContext *ctx) = 0;

  virtual void enterCommon_func_opt_item(GreenPlumParser::Common_func_opt_itemContext *ctx) = 0;
  virtual void exitCommon_func_opt_item(GreenPlumParser::Common_func_opt_itemContext *ctx) = 0;

  virtual void enterCreatefunc_opt_item(GreenPlumParser::Createfunc_opt_itemContext *ctx) = 0;
  virtual void exitCreatefunc_opt_item(GreenPlumParser::Createfunc_opt_itemContext *ctx) = 0;

  virtual void enterFunc_as(GreenPlumParser::Func_asContext *ctx) = 0;
  virtual void exitFunc_as(GreenPlumParser::Func_asContext *ctx) = 0;

  virtual void enterTable_func_column(GreenPlumParser::Table_func_columnContext *ctx) = 0;
  virtual void exitTable_func_column(GreenPlumParser::Table_func_columnContext *ctx) = 0;

  virtual void enterTable_func_column_list(GreenPlumParser::Table_func_column_listContext *ctx) = 0;
  virtual void exitTable_func_column_list(GreenPlumParser::Table_func_column_listContext *ctx) = 0;

  virtual void enterAlter_function_stmt(GreenPlumParser::Alter_function_stmtContext *ctx) = 0;
  virtual void exitAlter_function_stmt(GreenPlumParser::Alter_function_stmtContext *ctx) = 0;

  virtual void enterAlterfunc_opt_list(GreenPlumParser::Alterfunc_opt_listContext *ctx) = 0;
  virtual void exitAlterfunc_opt_list(GreenPlumParser::Alterfunc_opt_listContext *ctx) = 0;

  virtual void enterRemove_func_stmt(GreenPlumParser::Remove_func_stmtContext *ctx) = 0;
  virtual void exitRemove_func_stmt(GreenPlumParser::Remove_func_stmtContext *ctx) = 0;

  virtual void enterRemove_aggr_stmt(GreenPlumParser::Remove_aggr_stmtContext *ctx) = 0;
  virtual void exitRemove_aggr_stmt(GreenPlumParser::Remove_aggr_stmtContext *ctx) = 0;

  virtual void enterRemove_oper_stmt(GreenPlumParser::Remove_oper_stmtContext *ctx) = 0;
  virtual void exitRemove_oper_stmt(GreenPlumParser::Remove_oper_stmtContext *ctx) = 0;

  virtual void enterOper_argtypes(GreenPlumParser::Oper_argtypesContext *ctx) = 0;
  virtual void exitOper_argtypes(GreenPlumParser::Oper_argtypesContext *ctx) = 0;

  virtual void enterAny_operator(GreenPlumParser::Any_operatorContext *ctx) = 0;
  virtual void exitAny_operator(GreenPlumParser::Any_operatorContext *ctx) = 0;

  virtual void enterDo_stmt(GreenPlumParser::Do_stmtContext *ctx) = 0;
  virtual void exitDo_stmt(GreenPlumParser::Do_stmtContext *ctx) = 0;

  virtual void enterDostmt_opt_item(GreenPlumParser::Dostmt_opt_itemContext *ctx) = 0;
  virtual void exitDostmt_opt_item(GreenPlumParser::Dostmt_opt_itemContext *ctx) = 0;

  virtual void enterCreate_cast_stmt(GreenPlumParser::Create_cast_stmtContext *ctx) = 0;
  virtual void exitCreate_cast_stmt(GreenPlumParser::Create_cast_stmtContext *ctx) = 0;

  virtual void enterCast_context(GreenPlumParser::Cast_contextContext *ctx) = 0;
  virtual void exitCast_context(GreenPlumParser::Cast_contextContext *ctx) = 0;

  virtual void enterDrop_cast_stmt(GreenPlumParser::Drop_cast_stmtContext *ctx) = 0;
  virtual void exitDrop_cast_stmt(GreenPlumParser::Drop_cast_stmtContext *ctx) = 0;

  virtual void enterReindex_stmt(GreenPlumParser::Reindex_stmtContext *ctx) = 0;
  virtual void exitReindex_stmt(GreenPlumParser::Reindex_stmtContext *ctx) = 0;

  virtual void enterAlter_type_stmt(GreenPlumParser::Alter_type_stmtContext *ctx) = 0;
  virtual void exitAlter_type_stmt(GreenPlumParser::Alter_type_stmtContext *ctx) = 0;

  virtual void enterRename_stmt(GreenPlumParser::Rename_stmtContext *ctx) = 0;
  virtual void exitRename_stmt(GreenPlumParser::Rename_stmtContext *ctx) = 0;

  virtual void enterOpt_column(GreenPlumParser::Opt_columnContext *ctx) = 0;
  virtual void exitOpt_column(GreenPlumParser::Opt_columnContext *ctx) = 0;

  virtual void enterAlter_object_schema_stmt(GreenPlumParser::Alter_object_schema_stmtContext *ctx) = 0;
  virtual void exitAlter_object_schema_stmt(GreenPlumParser::Alter_object_schema_stmtContext *ctx) = 0;

  virtual void enterAlter_owner_stmt(GreenPlumParser::Alter_owner_stmtContext *ctx) = 0;
  virtual void exitAlter_owner_stmt(GreenPlumParser::Alter_owner_stmtContext *ctx) = 0;

  virtual void enterRule_stmt(GreenPlumParser::Rule_stmtContext *ctx) = 0;
  virtual void exitRule_stmt(GreenPlumParser::Rule_stmtContext *ctx) = 0;

  virtual void enterRule_action_list(GreenPlumParser::Rule_action_listContext *ctx) = 0;
  virtual void exitRule_action_list(GreenPlumParser::Rule_action_listContext *ctx) = 0;

  virtual void enterRule_action_multi(GreenPlumParser::Rule_action_multiContext *ctx) = 0;
  virtual void exitRule_action_multi(GreenPlumParser::Rule_action_multiContext *ctx) = 0;

  virtual void enterRule_action_stmt(GreenPlumParser::Rule_action_stmtContext *ctx) = 0;
  virtual void exitRule_action_stmt(GreenPlumParser::Rule_action_stmtContext *ctx) = 0;

  virtual void enterEvent(GreenPlumParser::EventContext *ctx) = 0;
  virtual void exitEvent(GreenPlumParser::EventContext *ctx) = 0;

  virtual void enterOpt_instead(GreenPlumParser::Opt_insteadContext *ctx) = 0;
  virtual void exitOpt_instead(GreenPlumParser::Opt_insteadContext *ctx) = 0;

  virtual void enterDrop_rule_stmt(GreenPlumParser::Drop_rule_stmtContext *ctx) = 0;
  virtual void exitDrop_rule_stmt(GreenPlumParser::Drop_rule_stmtContext *ctx) = 0;

  virtual void enterNotify_stmt(GreenPlumParser::Notify_stmtContext *ctx) = 0;
  virtual void exitNotify_stmt(GreenPlumParser::Notify_stmtContext *ctx) = 0;

  virtual void enterListen_stmt(GreenPlumParser::Listen_stmtContext *ctx) = 0;
  virtual void exitListen_stmt(GreenPlumParser::Listen_stmtContext *ctx) = 0;

  virtual void enterUnlisten_stmt(GreenPlumParser::Unlisten_stmtContext *ctx) = 0;
  virtual void exitUnlisten_stmt(GreenPlumParser::Unlisten_stmtContext *ctx) = 0;

  virtual void enterTransaction_stmt(GreenPlumParser::Transaction_stmtContext *ctx) = 0;
  virtual void exitTransaction_stmt(GreenPlumParser::Transaction_stmtContext *ctx) = 0;

  virtual void enterOpt_transaction(GreenPlumParser::Opt_transactionContext *ctx) = 0;
  virtual void exitOpt_transaction(GreenPlumParser::Opt_transactionContext *ctx) = 0;

  virtual void enterTransaction_mode_item(GreenPlumParser::Transaction_mode_itemContext *ctx) = 0;
  virtual void exitTransaction_mode_item(GreenPlumParser::Transaction_mode_itemContext *ctx) = 0;

  virtual void enterTransaction_mode_list(GreenPlumParser::Transaction_mode_listContext *ctx) = 0;
  virtual void exitTransaction_mode_list(GreenPlumParser::Transaction_mode_listContext *ctx) = 0;

  virtual void enterView_stmt(GreenPlumParser::View_stmtContext *ctx) = 0;
  virtual void exitView_stmt(GreenPlumParser::View_stmtContext *ctx) = 0;

  virtual void enterOpt_check_option(GreenPlumParser::Opt_check_optionContext *ctx) = 0;
  virtual void exitOpt_check_option(GreenPlumParser::Opt_check_optionContext *ctx) = 0;

  virtual void enterLoad_stmt(GreenPlumParser::Load_stmtContext *ctx) = 0;
  virtual void exitLoad_stmt(GreenPlumParser::Load_stmtContext *ctx) = 0;

  virtual void enterCreatedb_stmt(GreenPlumParser::Createdb_stmtContext *ctx) = 0;
  virtual void exitCreatedb_stmt(GreenPlumParser::Createdb_stmtContext *ctx) = 0;

  virtual void enterCreatedb_opt_item(GreenPlumParser::Createdb_opt_itemContext *ctx) = 0;
  virtual void exitCreatedb_opt_item(GreenPlumParser::Createdb_opt_itemContext *ctx) = 0;

  virtual void enterAlter_database_stmt(GreenPlumParser::Alter_database_stmtContext *ctx) = 0;
  virtual void exitAlter_database_stmt(GreenPlumParser::Alter_database_stmtContext *ctx) = 0;

  virtual void enterAlter_database_set_stmt(GreenPlumParser::Alter_database_set_stmtContext *ctx) = 0;
  virtual void exitAlter_database_set_stmt(GreenPlumParser::Alter_database_set_stmtContext *ctx) = 0;

  virtual void enterAlterdb_opt_item(GreenPlumParser::Alterdb_opt_itemContext *ctx) = 0;
  virtual void exitAlterdb_opt_item(GreenPlumParser::Alterdb_opt_itemContext *ctx) = 0;

  virtual void enterDropdb_stmt(GreenPlumParser::Dropdb_stmtContext *ctx) = 0;
  virtual void exitDropdb_stmt(GreenPlumParser::Dropdb_stmtContext *ctx) = 0;

  virtual void enterCreate_domain_stmt(GreenPlumParser::Create_domain_stmtContext *ctx) = 0;
  virtual void exitCreate_domain_stmt(GreenPlumParser::Create_domain_stmtContext *ctx) = 0;

  virtual void enterAlter_domain_stmt(GreenPlumParser::Alter_domain_stmtContext *ctx) = 0;
  virtual void exitAlter_domain_stmt(GreenPlumParser::Alter_domain_stmtContext *ctx) = 0;

  virtual void enterAlter_domain_option(GreenPlumParser::Alter_domain_optionContext *ctx) = 0;
  virtual void exitAlter_domain_option(GreenPlumParser::Alter_domain_optionContext *ctx) = 0;

  virtual void enterAlter_tsdictionary_stmt(GreenPlumParser::Alter_tsdictionary_stmtContext *ctx) = 0;
  virtual void exitAlter_tsdictionary_stmt(GreenPlumParser::Alter_tsdictionary_stmtContext *ctx) = 0;

  virtual void enterAlter_tsconfiguration_stmt(GreenPlumParser::Alter_tsconfiguration_stmtContext *ctx) = 0;
  virtual void exitAlter_tsconfiguration_stmt(GreenPlumParser::Alter_tsconfiguration_stmtContext *ctx) = 0;

  virtual void enterAlter_txt_search_conf_option(GreenPlumParser::Alter_txt_search_conf_optionContext *ctx) = 0;
  virtual void exitAlter_txt_search_conf_option(GreenPlumParser::Alter_txt_search_conf_optionContext *ctx) = 0;

  virtual void enterCreate_conversion_stmt(GreenPlumParser::Create_conversion_stmtContext *ctx) = 0;
  virtual void exitCreate_conversion_stmt(GreenPlumParser::Create_conversion_stmtContext *ctx) = 0;

  virtual void enterCluster_stmt(GreenPlumParser::Cluster_stmtContext *ctx) = 0;
  virtual void exitCluster_stmt(GreenPlumParser::Cluster_stmtContext *ctx) = 0;

  virtual void enterCluster_option(GreenPlumParser::Cluster_optionContext *ctx) = 0;
  virtual void exitCluster_option(GreenPlumParser::Cluster_optionContext *ctx) = 0;

  virtual void enterVacuum_stmt(GreenPlumParser::Vacuum_stmtContext *ctx) = 0;
  virtual void exitVacuum_stmt(GreenPlumParser::Vacuum_stmtContext *ctx) = 0;

  virtual void enterAnalyze_stmt(GreenPlumParser::Analyze_stmtContext *ctx) = 0;
  virtual void exitAnalyze_stmt(GreenPlumParser::Analyze_stmtContext *ctx) = 0;

  virtual void enterAnalyze_keyword(GreenPlumParser::Analyze_keywordContext *ctx) = 0;
  virtual void exitAnalyze_keyword(GreenPlumParser::Analyze_keywordContext *ctx) = 0;

  virtual void enterParen_name_list(GreenPlumParser::Paren_name_listContext *ctx) = 0;
  virtual void exitParen_name_list(GreenPlumParser::Paren_name_listContext *ctx) = 0;

  virtual void enterExplain_stmt(GreenPlumParser::Explain_stmtContext *ctx) = 0;
  virtual void exitExplain_stmt(GreenPlumParser::Explain_stmtContext *ctx) = 0;

  virtual void enterExplainable_stmt(GreenPlumParser::Explainable_stmtContext *ctx) = 0;
  virtual void exitExplainable_stmt(GreenPlumParser::Explainable_stmtContext *ctx) = 0;

  virtual void enterPrepare_stmt(GreenPlumParser::Prepare_stmtContext *ctx) = 0;
  virtual void exitPrepare_stmt(GreenPlumParser::Prepare_stmtContext *ctx) = 0;

  virtual void enterParen_type_list(GreenPlumParser::Paren_type_listContext *ctx) = 0;
  virtual void exitParen_type_list(GreenPlumParser::Paren_type_listContext *ctx) = 0;

  virtual void enterPreparable_stmt(GreenPlumParser::Preparable_stmtContext *ctx) = 0;
  virtual void exitPreparable_stmt(GreenPlumParser::Preparable_stmtContext *ctx) = 0;

  virtual void enterExecute_stmt(GreenPlumParser::Execute_stmtContext *ctx) = 0;
  virtual void exitExecute_stmt(GreenPlumParser::Execute_stmtContext *ctx) = 0;

  virtual void enterDeallocate_stmt(GreenPlumParser::Deallocate_stmtContext *ctx) = 0;
  virtual void exitDeallocate_stmt(GreenPlumParser::Deallocate_stmtContext *ctx) = 0;

  virtual void enterCdb_string_list(GreenPlumParser::Cdb_string_listContext *ctx) = 0;
  virtual void exitCdb_string_list(GreenPlumParser::Cdb_string_listContext *ctx) = 0;

  virtual void enterCdb_string(GreenPlumParser::Cdb_stringContext *ctx) = 0;
  virtual void exitCdb_string(GreenPlumParser::Cdb_stringContext *ctx) = 0;

  virtual void enterInsert_stmt(GreenPlumParser::Insert_stmtContext *ctx) = 0;
  virtual void exitInsert_stmt(GreenPlumParser::Insert_stmtContext *ctx) = 0;

  virtual void enterInsert_rest(GreenPlumParser::Insert_restContext *ctx) = 0;
  virtual void exitInsert_rest(GreenPlumParser::Insert_restContext *ctx) = 0;

  virtual void enterInsert_column_list(GreenPlumParser::Insert_column_listContext *ctx) = 0;
  virtual void exitInsert_column_list(GreenPlumParser::Insert_column_listContext *ctx) = 0;

  virtual void enterInsert_column_item(GreenPlumParser::Insert_column_itemContext *ctx) = 0;
  virtual void exitInsert_column_item(GreenPlumParser::Insert_column_itemContext *ctx) = 0;

  virtual void enterReturning_clause(GreenPlumParser::Returning_clauseContext *ctx) = 0;
  virtual void exitReturning_clause(GreenPlumParser::Returning_clauseContext *ctx) = 0;

  virtual void enterDelete_stmt(GreenPlumParser::Delete_stmtContext *ctx) = 0;
  virtual void exitDelete_stmt(GreenPlumParser::Delete_stmtContext *ctx) = 0;

  virtual void enterLock_stmt(GreenPlumParser::Lock_stmtContext *ctx) = 0;
  virtual void exitLock_stmt(GreenPlumParser::Lock_stmtContext *ctx) = 0;

  virtual void enterOpt_lock(GreenPlumParser::Opt_lockContext *ctx) = 0;
  virtual void exitOpt_lock(GreenPlumParser::Opt_lockContext *ctx) = 0;

  virtual void enterLock_type(GreenPlumParser::Lock_typeContext *ctx) = 0;
  virtual void exitLock_type(GreenPlumParser::Lock_typeContext *ctx) = 0;

  virtual void enterUpdate_stmt(GreenPlumParser::Update_stmtContext *ctx) = 0;
  virtual void exitUpdate_stmt(GreenPlumParser::Update_stmtContext *ctx) = 0;

  virtual void enterSet_clause_list(GreenPlumParser::Set_clause_listContext *ctx) = 0;
  virtual void exitSet_clause_list(GreenPlumParser::Set_clause_listContext *ctx) = 0;

  virtual void enterSet_clause(GreenPlumParser::Set_clauseContext *ctx) = 0;
  virtual void exitSet_clause(GreenPlumParser::Set_clauseContext *ctx) = 0;

  virtual void enterSingle_set_clause(GreenPlumParser::Single_set_clauseContext *ctx) = 0;
  virtual void exitSingle_set_clause(GreenPlumParser::Single_set_clauseContext *ctx) = 0;

  virtual void enterMultiple_set_clause(GreenPlumParser::Multiple_set_clauseContext *ctx) = 0;
  virtual void exitMultiple_set_clause(GreenPlumParser::Multiple_set_clauseContext *ctx) = 0;

  virtual void enterSet_target(GreenPlumParser::Set_targetContext *ctx) = 0;
  virtual void exitSet_target(GreenPlumParser::Set_targetContext *ctx) = 0;

  virtual void enterSet_target_list(GreenPlumParser::Set_target_listContext *ctx) = 0;
  virtual void exitSet_target_list(GreenPlumParser::Set_target_listContext *ctx) = 0;

  virtual void enterDeclare_cursor_stmt(GreenPlumParser::Declare_cursor_stmtContext *ctx) = 0;
  virtual void exitDeclare_cursor_stmt(GreenPlumParser::Declare_cursor_stmtContext *ctx) = 0;

  virtual void enterCursor_option(GreenPlumParser::Cursor_optionContext *ctx) = 0;
  virtual void exitCursor_option(GreenPlumParser::Cursor_optionContext *ctx) = 0;

  virtual void enterOpt_hold(GreenPlumParser::Opt_holdContext *ctx) = 0;
  virtual void exitOpt_hold(GreenPlumParser::Opt_holdContext *ctx) = 0;

  virtual void enterSelect_stmt(GreenPlumParser::Select_stmtContext *ctx) = 0;
  virtual void exitSelect_stmt(GreenPlumParser::Select_stmtContext *ctx) = 0;

  virtual void enterSubquery_basic_elements(GreenPlumParser::Subquery_basic_elementsContext *ctx) = 0;
  virtual void exitSubquery_basic_elements(GreenPlumParser::Subquery_basic_elementsContext *ctx) = 0;

  virtual void enterSubquery_operation_part(GreenPlumParser::Subquery_operation_partContext *ctx) = 0;
  virtual void exitSubquery_operation_part(GreenPlumParser::Subquery_operation_partContext *ctx) = 0;

  virtual void enterSelect_with_parens(GreenPlumParser::Select_with_parensContext *ctx) = 0;
  virtual void exitSelect_with_parens(GreenPlumParser::Select_with_parensContext *ctx) = 0;

  virtual void enterSelect_no_parens(GreenPlumParser::Select_no_parensContext *ctx) = 0;
  virtual void exitSelect_no_parens(GreenPlumParser::Select_no_parensContext *ctx) = 0;

  virtual void enterSimple_select(GreenPlumParser::Simple_selectContext *ctx) = 0;
  virtual void exitSimple_select(GreenPlumParser::Simple_selectContext *ctx) = 0;

  virtual void enterWith_clause(GreenPlumParser::With_clauseContext *ctx) = 0;
  virtual void exitWith_clause(GreenPlumParser::With_clauseContext *ctx) = 0;

  virtual void enterCte_list(GreenPlumParser::Cte_listContext *ctx) = 0;
  virtual void exitCte_list(GreenPlumParser::Cte_listContext *ctx) = 0;

  virtual void enterCommon_table_expr(GreenPlumParser::Common_table_exprContext *ctx) = 0;
  virtual void exitCommon_table_expr(GreenPlumParser::Common_table_exprContext *ctx) = 0;

  virtual void enterInto_clause(GreenPlumParser::Into_clauseContext *ctx) = 0;
  virtual void exitInto_clause(GreenPlumParser::Into_clauseContext *ctx) = 0;

  virtual void enterOpt_tempTableName(GreenPlumParser::Opt_tempTableNameContext *ctx) = 0;
  virtual void exitOpt_tempTableName(GreenPlumParser::Opt_tempTableNameContext *ctx) = 0;

  virtual void enterOpt_distinct(GreenPlumParser::Opt_distinctContext *ctx) = 0;
  virtual void exitOpt_distinct(GreenPlumParser::Opt_distinctContext *ctx) = 0;

  virtual void enterSort_clause(GreenPlumParser::Sort_clauseContext *ctx) = 0;
  virtual void exitSort_clause(GreenPlumParser::Sort_clauseContext *ctx) = 0;

  virtual void enterSortby_list(GreenPlumParser::Sortby_listContext *ctx) = 0;
  virtual void exitSortby_list(GreenPlumParser::Sortby_listContext *ctx) = 0;

  virtual void enterSortby(GreenPlumParser::SortbyContext *ctx) = 0;
  virtual void exitSortby(GreenPlumParser::SortbyContext *ctx) = 0;

  virtual void enterSelect_limit(GreenPlumParser::Select_limitContext *ctx) = 0;
  virtual void exitSelect_limit(GreenPlumParser::Select_limitContext *ctx) = 0;

  virtual void enterSelect_limit_value(GreenPlumParser::Select_limit_valueContext *ctx) = 0;
  virtual void exitSelect_limit_value(GreenPlumParser::Select_limit_valueContext *ctx) = 0;

  virtual void enterOpt_select_fetch_first_value(GreenPlumParser::Opt_select_fetch_first_valueContext *ctx) = 0;
  virtual void exitOpt_select_fetch_first_value(GreenPlumParser::Opt_select_fetch_first_valueContext *ctx) = 0;

  virtual void enterSelect_offset_value(GreenPlumParser::Select_offset_valueContext *ctx) = 0;
  virtual void exitSelect_offset_value(GreenPlumParser::Select_offset_valueContext *ctx) = 0;

  virtual void enterSelect_offset_value2(GreenPlumParser::Select_offset_value2Context *ctx) = 0;
  virtual void exitSelect_offset_value2(GreenPlumParser::Select_offset_value2Context *ctx) = 0;

  virtual void enterRow_or_rows(GreenPlumParser::Row_or_rowsContext *ctx) = 0;
  virtual void exitRow_or_rows(GreenPlumParser::Row_or_rowsContext *ctx) = 0;

  virtual void enterFirst_or_next(GreenPlumParser::First_or_nextContext *ctx) = 0;
  virtual void exitFirst_or_next(GreenPlumParser::First_or_nextContext *ctx) = 0;

  virtual void enterGroup_clause(GreenPlumParser::Group_clauseContext *ctx) = 0;
  virtual void exitGroup_clause(GreenPlumParser::Group_clauseContext *ctx) = 0;

  virtual void enterGroup_elem_list(GreenPlumParser::Group_elem_listContext *ctx) = 0;
  virtual void exitGroup_elem_list(GreenPlumParser::Group_elem_listContext *ctx) = 0;

  virtual void enterGroup_elem(GreenPlumParser::Group_elemContext *ctx) = 0;
  virtual void exitGroup_elem(GreenPlumParser::Group_elemContext *ctx) = 0;

  virtual void enterHaving_clause(GreenPlumParser::Having_clauseContext *ctx) = 0;
  virtual void exitHaving_clause(GreenPlumParser::Having_clauseContext *ctx) = 0;

  virtual void enterFor_locking_clause(GreenPlumParser::For_locking_clauseContext *ctx) = 0;
  virtual void exitFor_locking_clause(GreenPlumParser::For_locking_clauseContext *ctx) = 0;

  virtual void enterFor_locking_item(GreenPlumParser::For_locking_itemContext *ctx) = 0;
  virtual void exitFor_locking_item(GreenPlumParser::For_locking_itemContext *ctx) = 0;

  virtual void enterLocked_rels_list(GreenPlumParser::Locked_rels_listContext *ctx) = 0;
  virtual void exitLocked_rels_list(GreenPlumParser::Locked_rels_listContext *ctx) = 0;

  virtual void enterValues_clause(GreenPlumParser::Values_clauseContext *ctx) = 0;
  virtual void exitValues_clause(GreenPlumParser::Values_clauseContext *ctx) = 0;

  virtual void enterFrom_clause(GreenPlumParser::From_clauseContext *ctx) = 0;
  virtual void exitFrom_clause(GreenPlumParser::From_clauseContext *ctx) = 0;

  virtual void enterFrom_list(GreenPlumParser::From_listContext *ctx) = 0;
  virtual void exitFrom_list(GreenPlumParser::From_listContext *ctx) = 0;

  virtual void enterTable_ref_subquery(GreenPlumParser::Table_ref_subqueryContext *ctx) = 0;
  virtual void exitTable_ref_subquery(GreenPlumParser::Table_ref_subqueryContext *ctx) = 0;

  virtual void enterTable_ref_parens(GreenPlumParser::Table_ref_parensContext *ctx) = 0;
  virtual void exitTable_ref_parens(GreenPlumParser::Table_ref_parensContext *ctx) = 0;

  virtual void enterTable_ref_normal(GreenPlumParser::Table_ref_normalContext *ctx) = 0;
  virtual void exitTable_ref_normal(GreenPlumParser::Table_ref_normalContext *ctx) = 0;

  virtual void enterTable_ref_func2(GreenPlumParser::Table_ref_func2Context *ctx) = 0;
  virtual void exitTable_ref_func2(GreenPlumParser::Table_ref_func2Context *ctx) = 0;

  virtual void enterTable_ref_func1(GreenPlumParser::Table_ref_func1Context *ctx) = 0;
  virtual void exitTable_ref_func1(GreenPlumParser::Table_ref_func1Context *ctx) = 0;

  virtual void enterTable_ref_joinable(GreenPlumParser::Table_ref_joinableContext *ctx) = 0;
  virtual void exitTable_ref_joinable(GreenPlumParser::Table_ref_joinableContext *ctx) = 0;

  virtual void enterJoin_type(GreenPlumParser::Join_typeContext *ctx) = 0;
  virtual void exitJoin_type(GreenPlumParser::Join_typeContext *ctx) = 0;

  virtual void enterJoin_qual(GreenPlumParser::Join_qualContext *ctx) = 0;
  virtual void exitJoin_qual(GreenPlumParser::Join_qualContext *ctx) = 0;

  virtual void enterRelation_expr(GreenPlumParser::Relation_exprContext *ctx) = 0;
  virtual void exitRelation_expr(GreenPlumParser::Relation_exprContext *ctx) = 0;

  virtual void enterRelation_expr_opt_alias(GreenPlumParser::Relation_expr_opt_aliasContext *ctx) = 0;
  virtual void exitRelation_expr_opt_alias(GreenPlumParser::Relation_expr_opt_aliasContext *ctx) = 0;

  virtual void enterFunc_table(GreenPlumParser::Func_tableContext *ctx) = 0;
  virtual void exitFunc_table(GreenPlumParser::Func_tableContext *ctx) = 0;

  virtual void enterWhere_clause(GreenPlumParser::Where_clauseContext *ctx) = 0;
  virtual void exitWhere_clause(GreenPlumParser::Where_clauseContext *ctx) = 0;

  virtual void enterWhere_or_current_clause(GreenPlumParser::Where_or_current_clauseContext *ctx) = 0;
  virtual void exitWhere_or_current_clause(GreenPlumParser::Where_or_current_clauseContext *ctx) = 0;

  virtual void enterTable_func_element_list(GreenPlumParser::Table_func_element_listContext *ctx) = 0;
  virtual void exitTable_func_element_list(GreenPlumParser::Table_func_element_listContext *ctx) = 0;

  virtual void enterTable_func_element(GreenPlumParser::Table_func_elementContext *ctx) = 0;
  virtual void exitTable_func_element(GreenPlumParser::Table_func_elementContext *ctx) = 0;

  virtual void enterTypename_pg(GreenPlumParser::Typename_pgContext *ctx) = 0;
  virtual void exitTypename_pg(GreenPlumParser::Typename_pgContext *ctx) = 0;

  virtual void enterOpt_array_bounds(GreenPlumParser::Opt_array_boundsContext *ctx) = 0;
  virtual void exitOpt_array_bounds(GreenPlumParser::Opt_array_boundsContext *ctx) = 0;

  virtual void enterSimple_typename(GreenPlumParser::Simple_typenameContext *ctx) = 0;
  virtual void exitSimple_typename(GreenPlumParser::Simple_typenameContext *ctx) = 0;

  virtual void enterConst_typename(GreenPlumParser::Const_typenameContext *ctx) = 0;
  virtual void exitConst_typename(GreenPlumParser::Const_typenameContext *ctx) = 0;

  virtual void enterGeneric_type(GreenPlumParser::Generic_typeContext *ctx) = 0;
  virtual void exitGeneric_type(GreenPlumParser::Generic_typeContext *ctx) = 0;

  virtual void enterNumeric(GreenPlumParser::NumericContext *ctx) = 0;
  virtual void exitNumeric(GreenPlumParser::NumericContext *ctx) = 0;

  virtual void enterBit(GreenPlumParser::BitContext *ctx) = 0;
  virtual void exitBit(GreenPlumParser::BitContext *ctx) = 0;

  virtual void enterConst_bit(GreenPlumParser::Const_bitContext *ctx) = 0;
  virtual void exitConst_bit(GreenPlumParser::Const_bitContext *ctx) = 0;

  virtual void enterBit_with_length(GreenPlumParser::Bit_with_lengthContext *ctx) = 0;
  virtual void exitBit_with_length(GreenPlumParser::Bit_with_lengthContext *ctx) = 0;

  virtual void enterBit_without_length(GreenPlumParser::Bit_without_lengthContext *ctx) = 0;
  virtual void exitBit_without_length(GreenPlumParser::Bit_without_lengthContext *ctx) = 0;

  virtual void enterMulti_character(GreenPlumParser::Multi_characterContext *ctx) = 0;
  virtual void exitMulti_character(GreenPlumParser::Multi_characterContext *ctx) = 0;

  virtual void enterConst_character(GreenPlumParser::Const_characterContext *ctx) = 0;
  virtual void exitConst_character(GreenPlumParser::Const_characterContext *ctx) = 0;

  virtual void enterCharacter_with_length(GreenPlumParser::Character_with_lengthContext *ctx) = 0;
  virtual void exitCharacter_with_length(GreenPlumParser::Character_with_lengthContext *ctx) = 0;

  virtual void enterCharacter_without_length(GreenPlumParser::Character_without_lengthContext *ctx) = 0;
  virtual void exitCharacter_without_length(GreenPlumParser::Character_without_lengthContext *ctx) = 0;

  virtual void enterCharacter(GreenPlumParser::CharacterContext *ctx) = 0;
  virtual void exitCharacter(GreenPlumParser::CharacterContext *ctx) = 0;

  virtual void enterOpt_charset(GreenPlumParser::Opt_charsetContext *ctx) = 0;
  virtual void exitOpt_charset(GreenPlumParser::Opt_charsetContext *ctx) = 0;

  virtual void enterConst_datatime(GreenPlumParser::Const_datatimeContext *ctx) = 0;
  virtual void exitConst_datatime(GreenPlumParser::Const_datatimeContext *ctx) = 0;

  virtual void enterConst_interval(GreenPlumParser::Const_intervalContext *ctx) = 0;
  virtual void exitConst_interval(GreenPlumParser::Const_intervalContext *ctx) = 0;

  virtual void enterOpt_timezone(GreenPlumParser::Opt_timezoneContext *ctx) = 0;
  virtual void exitOpt_timezone(GreenPlumParser::Opt_timezoneContext *ctx) = 0;

  virtual void enterOpt_interval(GreenPlumParser::Opt_intervalContext *ctx) = 0;
  virtual void exitOpt_interval(GreenPlumParser::Opt_intervalContext *ctx) = 0;

  virtual void enterA_expr(GreenPlumParser::A_exprContext *ctx) = 0;
  virtual void exitA_expr(GreenPlumParser::A_exprContext *ctx) = 0;

  virtual void enterLogical_expr(GreenPlumParser::Logical_exprContext *ctx) = 0;
  virtual void exitLogical_expr(GreenPlumParser::Logical_exprContext *ctx) = 0;

  virtual void enterMultiset_expr(GreenPlumParser::Multiset_exprContext *ctx) = 0;
  virtual void exitMultiset_expr(GreenPlumParser::Multiset_exprContext *ctx) = 0;

  virtual void enterRelational_expr(GreenPlumParser::Relational_exprContext *ctx) = 0;
  virtual void exitRelational_expr(GreenPlumParser::Relational_exprContext *ctx) = 0;

  virtual void enterRelational_op(GreenPlumParser::Relational_opContext *ctx) = 0;
  virtual void exitRelational_op(GreenPlumParser::Relational_opContext *ctx) = 0;

  virtual void enterCompound_expr(GreenPlumParser::Compound_exprContext *ctx) = 0;
  virtual void exitCompound_expr(GreenPlumParser::Compound_exprContext *ctx) = 0;

  virtual void enterBetween_elements(GreenPlumParser::Between_elementsContext *ctx) = 0;
  virtual void exitBetween_elements(GreenPlumParser::Between_elementsContext *ctx) = 0;

  virtual void enterConcatenation_list(GreenPlumParser::Concatenation_listContext *ctx) = 0;
  virtual void exitConcatenation_list(GreenPlumParser::Concatenation_listContext *ctx) = 0;

  virtual void enterConcatenation(GreenPlumParser::ConcatenationContext *ctx) = 0;
  virtual void exitConcatenation(GreenPlumParser::ConcatenationContext *ctx) = 0;

  virtual void enterModel_expr(GreenPlumParser::Model_exprContext *ctx) = 0;
  virtual void exitModel_expr(GreenPlumParser::Model_exprContext *ctx) = 0;

  virtual void enterUnary_expr(GreenPlumParser::Unary_exprContext *ctx) = 0;
  virtual void exitUnary_expr(GreenPlumParser::Unary_exprContext *ctx) = 0;

  virtual void enterC_expr(GreenPlumParser::C_exprContext *ctx) = 0;
  virtual void exitC_expr(GreenPlumParser::C_exprContext *ctx) = 0;

  virtual void enterScatter_clause(GreenPlumParser::Scatter_clauseContext *ctx) = 0;
  virtual void exitScatter_clause(GreenPlumParser::Scatter_clauseContext *ctx) = 0;

  virtual void enterTable_value_select_clause(GreenPlumParser::Table_value_select_clauseContext *ctx) = 0;
  virtual void exitTable_value_select_clause(GreenPlumParser::Table_value_select_clauseContext *ctx) = 0;

  virtual void enterSimple_func(GreenPlumParser::Simple_funcContext *ctx) = 0;
  virtual void exitSimple_func(GreenPlumParser::Simple_funcContext *ctx) = 0;

  virtual void enterSimple_func_params(GreenPlumParser::Simple_func_paramsContext *ctx) = 0;
  virtual void exitSimple_func_params(GreenPlumParser::Simple_func_paramsContext *ctx) = 0;

  virtual void enterFunc_expr(GreenPlumParser::Func_exprContext *ctx) = 0;
  virtual void exitFunc_expr(GreenPlumParser::Func_exprContext *ctx) = 0;

  virtual void enterXml_root_version(GreenPlumParser::Xml_root_versionContext *ctx) = 0;
  virtual void exitXml_root_version(GreenPlumParser::Xml_root_versionContext *ctx) = 0;

  virtual void enterOpt_xml_root_standalone(GreenPlumParser::Opt_xml_root_standaloneContext *ctx) = 0;
  virtual void exitOpt_xml_root_standalone(GreenPlumParser::Opt_xml_root_standaloneContext *ctx) = 0;

  virtual void enterXml_attributes(GreenPlumParser::Xml_attributesContext *ctx) = 0;
  virtual void exitXml_attributes(GreenPlumParser::Xml_attributesContext *ctx) = 0;

  virtual void enterXml_attribute_list(GreenPlumParser::Xml_attribute_listContext *ctx) = 0;
  virtual void exitXml_attribute_list(GreenPlumParser::Xml_attribute_listContext *ctx) = 0;

  virtual void enterXml_attribute_el(GreenPlumParser::Xml_attribute_elContext *ctx) = 0;
  virtual void exitXml_attribute_el(GreenPlumParser::Xml_attribute_elContext *ctx) = 0;

  virtual void enterDocument_or_content(GreenPlumParser::Document_or_contentContext *ctx) = 0;
  virtual void exitDocument_or_content(GreenPlumParser::Document_or_contentContext *ctx) = 0;

  virtual void enterXml_whitespace_option(GreenPlumParser::Xml_whitespace_optionContext *ctx) = 0;
  virtual void exitXml_whitespace_option(GreenPlumParser::Xml_whitespace_optionContext *ctx) = 0;

  virtual void enterXmlexists_argument(GreenPlumParser::Xmlexists_argumentContext *ctx) = 0;
  virtual void exitXmlexists_argument(GreenPlumParser::Xmlexists_argumentContext *ctx) = 0;

  virtual void enterWindow_clause(GreenPlumParser::Window_clauseContext *ctx) = 0;
  virtual void exitWindow_clause(GreenPlumParser::Window_clauseContext *ctx) = 0;

  virtual void enterWindow_definition_list(GreenPlumParser::Window_definition_listContext *ctx) = 0;
  virtual void exitWindow_definition_list(GreenPlumParser::Window_definition_listContext *ctx) = 0;

  virtual void enterWindow_definition(GreenPlumParser::Window_definitionContext *ctx) = 0;
  virtual void exitWindow_definition(GreenPlumParser::Window_definitionContext *ctx) = 0;

  virtual void enterWindow_specification(GreenPlumParser::Window_specificationContext *ctx) = 0;
  virtual void exitWindow_specification(GreenPlumParser::Window_specificationContext *ctx) = 0;

  virtual void enterOpt_partition_clause(GreenPlumParser::Opt_partition_clauseContext *ctx) = 0;
  virtual void exitOpt_partition_clause(GreenPlumParser::Opt_partition_clauseContext *ctx) = 0;

  virtual void enterWindow_frame_clause(GreenPlumParser::Window_frame_clauseContext *ctx) = 0;
  virtual void exitWindow_frame_clause(GreenPlumParser::Window_frame_clauseContext *ctx) = 0;

  virtual void enterWindow_frame_units(GreenPlumParser::Window_frame_unitsContext *ctx) = 0;
  virtual void exitWindow_frame_units(GreenPlumParser::Window_frame_unitsContext *ctx) = 0;

  virtual void enterWindow_frame_extent(GreenPlumParser::Window_frame_extentContext *ctx) = 0;
  virtual void exitWindow_frame_extent(GreenPlumParser::Window_frame_extentContext *ctx) = 0;

  virtual void enterWindow_frame_start(GreenPlumParser::Window_frame_startContext *ctx) = 0;
  virtual void exitWindow_frame_start(GreenPlumParser::Window_frame_startContext *ctx) = 0;

  virtual void enterWindow_frame_between(GreenPlumParser::Window_frame_betweenContext *ctx) = 0;
  virtual void exitWindow_frame_between(GreenPlumParser::Window_frame_betweenContext *ctx) = 0;

  virtual void enterWindow_frame_bound(GreenPlumParser::Window_frame_boundContext *ctx) = 0;
  virtual void exitWindow_frame_bound(GreenPlumParser::Window_frame_boundContext *ctx) = 0;

  virtual void enterWindow_frame_exclusion(GreenPlumParser::Window_frame_exclusionContext *ctx) = 0;
  virtual void exitWindow_frame_exclusion(GreenPlumParser::Window_frame_exclusionContext *ctx) = 0;

  virtual void enterRow(GreenPlumParser::RowContext *ctx) = 0;
  virtual void exitRow(GreenPlumParser::RowContext *ctx) = 0;

  virtual void enterOp_signs(GreenPlumParser::Op_signsContext *ctx) = 0;
  virtual void exitOp_signs(GreenPlumParser::Op_signsContext *ctx) = 0;

  virtual void enterAll_Op(GreenPlumParser::All_OpContext *ctx) = 0;
  virtual void exitAll_Op(GreenPlumParser::All_OpContext *ctx) = 0;

  virtual void enterQual_Op(GreenPlumParser::Qual_OpContext *ctx) = 0;
  virtual void exitQual_Op(GreenPlumParser::Qual_OpContext *ctx) = 0;

  virtual void enterQual_all_Op(GreenPlumParser::Qual_all_OpContext *ctx) = 0;
  virtual void exitQual_all_Op(GreenPlumParser::Qual_all_OpContext *ctx) = 0;

  virtual void enterSubquery_Op(GreenPlumParser::Subquery_OpContext *ctx) = 0;
  virtual void exitSubquery_Op(GreenPlumParser::Subquery_OpContext *ctx) = 0;

  virtual void enterParen_expr_list(GreenPlumParser::Paren_expr_listContext *ctx) = 0;
  virtual void exitParen_expr_list(GreenPlumParser::Paren_expr_listContext *ctx) = 0;

  virtual void enterExpr_list(GreenPlumParser::Expr_listContext *ctx) = 0;
  virtual void exitExpr_list(GreenPlumParser::Expr_listContext *ctx) = 0;

  virtual void enterType_list(GreenPlumParser::Type_listContext *ctx) = 0;
  virtual void exitType_list(GreenPlumParser::Type_listContext *ctx) = 0;

  virtual void enterArray_expr(GreenPlumParser::Array_exprContext *ctx) = 0;
  virtual void exitArray_expr(GreenPlumParser::Array_exprContext *ctx) = 0;

  virtual void enterArray_expr_list(GreenPlumParser::Array_expr_listContext *ctx) = 0;
  virtual void exitArray_expr_list(GreenPlumParser::Array_expr_listContext *ctx) = 0;

  virtual void enterExtract_list(GreenPlumParser::Extract_listContext *ctx) = 0;
  virtual void exitExtract_list(GreenPlumParser::Extract_listContext *ctx) = 0;

  virtual void enterExtract_arg(GreenPlumParser::Extract_argContext *ctx) = 0;
  virtual void exitExtract_arg(GreenPlumParser::Extract_argContext *ctx) = 0;

  virtual void enterOverlay_list(GreenPlumParser::Overlay_listContext *ctx) = 0;
  virtual void exitOverlay_list(GreenPlumParser::Overlay_listContext *ctx) = 0;

  virtual void enterOverlay_placing(GreenPlumParser::Overlay_placingContext *ctx) = 0;
  virtual void exitOverlay_placing(GreenPlumParser::Overlay_placingContext *ctx) = 0;

  virtual void enterPosition_list(GreenPlumParser::Position_listContext *ctx) = 0;
  virtual void exitPosition_list(GreenPlumParser::Position_listContext *ctx) = 0;

  virtual void enterSubstr_list(GreenPlumParser::Substr_listContext *ctx) = 0;
  virtual void exitSubstr_list(GreenPlumParser::Substr_listContext *ctx) = 0;

  virtual void enterSubstr_from(GreenPlumParser::Substr_fromContext *ctx) = 0;
  virtual void exitSubstr_from(GreenPlumParser::Substr_fromContext *ctx) = 0;

  virtual void enterSubstr_for(GreenPlumParser::Substr_forContext *ctx) = 0;
  virtual void exitSubstr_for(GreenPlumParser::Substr_forContext *ctx) = 0;

  virtual void enterTrim_list(GreenPlumParser::Trim_listContext *ctx) = 0;
  virtual void exitTrim_list(GreenPlumParser::Trim_listContext *ctx) = 0;

  virtual void enterIn_expr(GreenPlumParser::In_exprContext *ctx) = 0;
  virtual void exitIn_expr(GreenPlumParser::In_exprContext *ctx) = 0;

  virtual void enterCase_expr(GreenPlumParser::Case_exprContext *ctx) = 0;
  virtual void exitCase_expr(GreenPlumParser::Case_exprContext *ctx) = 0;

  virtual void enterWhen_clause(GreenPlumParser::When_clauseContext *ctx) = 0;
  virtual void exitWhen_clause(GreenPlumParser::When_clauseContext *ctx) = 0;

  virtual void enterWhen_operand(GreenPlumParser::When_operandContext *ctx) = 0;
  virtual void exitWhen_operand(GreenPlumParser::When_operandContext *ctx) = 0;

  virtual void enterCase_default(GreenPlumParser::Case_defaultContext *ctx) = 0;
  virtual void exitCase_default(GreenPlumParser::Case_defaultContext *ctx) = 0;

  virtual void enterCase_arg(GreenPlumParser::Case_argContext *ctx) = 0;
  virtual void exitCase_arg(GreenPlumParser::Case_argContext *ctx) = 0;

  virtual void enterDecode_expr(GreenPlumParser::Decode_exprContext *ctx) = 0;
  virtual void exitDecode_expr(GreenPlumParser::Decode_exprContext *ctx) = 0;

  virtual void enterSearch_result(GreenPlumParser::Search_resultContext *ctx) = 0;
  virtual void exitSearch_result(GreenPlumParser::Search_resultContext *ctx) = 0;

  virtual void enterDecode_default(GreenPlumParser::Decode_defaultContext *ctx) = 0;
  virtual void exitDecode_default(GreenPlumParser::Decode_defaultContext *ctx) = 0;

  virtual void enterColumnref(GreenPlumParser::ColumnrefContext *ctx) = 0;
  virtual void exitColumnref(GreenPlumParser::ColumnrefContext *ctx) = 0;

  virtual void enterIndirection_el(GreenPlumParser::Indirection_elContext *ctx) = 0;
  virtual void exitIndirection_el(GreenPlumParser::Indirection_elContext *ctx) = 0;

  virtual void enterIndirection(GreenPlumParser::IndirectionContext *ctx) = 0;
  virtual void exitIndirection(GreenPlumParser::IndirectionContext *ctx) = 0;

  virtual void enterCtext_expr(GreenPlumParser::Ctext_exprContext *ctx) = 0;
  virtual void exitCtext_expr(GreenPlumParser::Ctext_exprContext *ctx) = 0;

  virtual void enterCtext_expr_list(GreenPlumParser::Ctext_expr_listContext *ctx) = 0;
  virtual void exitCtext_expr_list(GreenPlumParser::Ctext_expr_listContext *ctx) = 0;

  virtual void enterCtext_row(GreenPlumParser::Ctext_rowContext *ctx) = 0;
  virtual void exitCtext_row(GreenPlumParser::Ctext_rowContext *ctx) = 0;

  virtual void enterTarget_list(GreenPlumParser::Target_listContext *ctx) = 0;
  virtual void exitTarget_list(GreenPlumParser::Target_listContext *ctx) = 0;

  virtual void enterTarget_el_normal(GreenPlumParser::Target_el_normalContext *ctx) = 0;
  virtual void exitTarget_el_normal(GreenPlumParser::Target_el_normalContext *ctx) = 0;

  virtual void enterTarget_el_asterisk(GreenPlumParser::Target_el_asteriskContext *ctx) = 0;
  virtual void exitTarget_el_asterisk(GreenPlumParser::Target_el_asteriskContext *ctx) = 0;

  virtual void enterRelation_name(GreenPlumParser::Relation_nameContext *ctx) = 0;
  virtual void exitRelation_name(GreenPlumParser::Relation_nameContext *ctx) = 0;

  virtual void enterQualified_name_list(GreenPlumParser::Qualified_name_listContext *ctx) = 0;
  virtual void exitQualified_name_list(GreenPlumParser::Qualified_name_listContext *ctx) = 0;

  virtual void enterQualified_name(GreenPlumParser::Qualified_nameContext *ctx) = 0;
  virtual void exitQualified_name(GreenPlumParser::Qualified_nameContext *ctx) = 0;

  virtual void enterName_list(GreenPlumParser::Name_listContext *ctx) = 0;
  virtual void exitName_list(GreenPlumParser::Name_listContext *ctx) = 0;

  virtual void enterName(GreenPlumParser::NameContext *ctx) = 0;
  virtual void exitName(GreenPlumParser::NameContext *ctx) = 0;

  virtual void enterCte_name(GreenPlumParser::Cte_nameContext *ctx) = 0;
  virtual void exitCte_name(GreenPlumParser::Cte_nameContext *ctx) = 0;

  virtual void enterDatabase_name(GreenPlumParser::Database_nameContext *ctx) = 0;
  virtual void exitDatabase_name(GreenPlumParser::Database_nameContext *ctx) = 0;

  virtual void enterAccess_method(GreenPlumParser::Access_methodContext *ctx) = 0;
  virtual void exitAccess_method(GreenPlumParser::Access_methodContext *ctx) = 0;

  virtual void enterAttr_name(GreenPlumParser::Attr_nameContext *ctx) = 0;
  virtual void exitAttr_name(GreenPlumParser::Attr_nameContext *ctx) = 0;

  virtual void enterIndex_name(GreenPlumParser::Index_nameContext *ctx) = 0;
  virtual void exitIndex_name(GreenPlumParser::Index_nameContext *ctx) = 0;

  virtual void enterFile_name(GreenPlumParser::File_nameContext *ctx) = 0;
  virtual void exitFile_name(GreenPlumParser::File_nameContext *ctx) = 0;

  virtual void enterFunc_name(GreenPlumParser::Func_nameContext *ctx) = 0;
  virtual void exitFunc_name(GreenPlumParser::Func_nameContext *ctx) = 0;

  virtual void enterA_expr_const(GreenPlumParser::A_expr_constContext *ctx) = 0;
  virtual void exitA_expr_const(GreenPlumParser::A_expr_constContext *ctx) = 0;

  virtual void enterIconst(GreenPlumParser::IconstContext *ctx) = 0;
  virtual void exitIconst(GreenPlumParser::IconstContext *ctx) = 0;

  virtual void enterSconst(GreenPlumParser::SconstContext *ctx) = 0;
  virtual void exitSconst(GreenPlumParser::SconstContext *ctx) = 0;

  virtual void enterRole_id(GreenPlumParser::Role_idContext *ctx) = 0;
  virtual void exitRole_id(GreenPlumParser::Role_idContext *ctx) = 0;

  virtual void enterQueue_id(GreenPlumParser::Queue_idContext *ctx) = 0;
  virtual void exitQueue_id(GreenPlumParser::Queue_idContext *ctx) = 0;

  virtual void enterSigned_iconst(GreenPlumParser::Signed_iconstContext *ctx) = 0;
  virtual void exitSigned_iconst(GreenPlumParser::Signed_iconstContext *ctx) = 0;

  virtual void enterColid(GreenPlumParser::ColidContext *ctx) = 0;
  virtual void exitColid(GreenPlumParser::ColidContext *ctx) = 0;

  virtual void enterType_function_name(GreenPlumParser::Type_function_nameContext *ctx) = 0;
  virtual void exitType_function_name(GreenPlumParser::Type_function_nameContext *ctx) = 0;

  virtual void enterCol_label(GreenPlumParser::Col_labelContext *ctx) = 0;
  virtual void exitCol_label(GreenPlumParser::Col_labelContext *ctx) = 0;

  virtual void enterIdentifier(GreenPlumParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(GreenPlumParser::IdentifierContext *ctx) = 0;

  virtual void enterUnreserved_keyword(GreenPlumParser::Unreserved_keywordContext *ctx) = 0;
  virtual void exitUnreserved_keyword(GreenPlumParser::Unreserved_keywordContext *ctx) = 0;

  virtual void enterKeywords_ok_in_alias_no_as(GreenPlumParser::Keywords_ok_in_alias_no_asContext *ctx) = 0;
  virtual void exitKeywords_ok_in_alias_no_as(GreenPlumParser::Keywords_ok_in_alias_no_asContext *ctx) = 0;

  virtual void enterPartition_colid(GreenPlumParser::Partition_colidContext *ctx) = 0;
  virtual void exitPartition_colid(GreenPlumParser::Partition_colidContext *ctx) = 0;

  virtual void enterPartition_ident_key_word(GreenPlumParser::Partition_ident_key_wordContext *ctx) = 0;
  virtual void exitPartition_ident_key_word(GreenPlumParser::Partition_ident_key_wordContext *ctx) = 0;

  virtual void enterCol_name_keyword(GreenPlumParser::Col_name_keywordContext *ctx) = 0;
  virtual void exitCol_name_keyword(GreenPlumParser::Col_name_keywordContext *ctx) = 0;

  virtual void enterType_func_name_keyword(GreenPlumParser::Type_func_name_keywordContext *ctx) = 0;
  virtual void exitType_func_name_keyword(GreenPlumParser::Type_func_name_keywordContext *ctx) = 0;

  virtual void enterReserved_keyword(GreenPlumParser::Reserved_keywordContext *ctx) = 0;
  virtual void exitReserved_keyword(GreenPlumParser::Reserved_keywordContext *ctx) = 0;

  virtual void enterSpecial_rule_relation(GreenPlumParser::Special_rule_relationContext *ctx) = 0;
  virtual void exitSpecial_rule_relation(GreenPlumParser::Special_rule_relationContext *ctx) = 0;


};


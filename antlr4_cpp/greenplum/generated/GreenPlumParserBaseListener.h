
// Generated from /home/jona/myGit/myCode_repository/antlr4_cpp/greenplum/GreenPlumParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "GreenPlumParserListener.h"


/**
 * This class provides an empty implementation of GreenPlumParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  GreenPlumParserBaseListener : public GreenPlumParserListener {
public:

  virtual void enterStmtblock(GreenPlumParser::StmtblockContext * /*ctx*/) override { }
  virtual void exitStmtblock(GreenPlumParser::StmtblockContext * /*ctx*/) override { }

  virtual void enterStmtmulti(GreenPlumParser::StmtmultiContext * /*ctx*/) override { }
  virtual void exitStmtmulti(GreenPlumParser::StmtmultiContext * /*ctx*/) override { }

  virtual void enterStmt(GreenPlumParser::StmtContext * /*ctx*/) override { }
  virtual void exitStmt(GreenPlumParser::StmtContext * /*ctx*/) override { }

  virtual void enterCreate_queue_stmt(GreenPlumParser::Create_queue_stmtContext * /*ctx*/) override { }
  virtual void exitCreate_queue_stmt(GreenPlumParser::Create_queue_stmtContext * /*ctx*/) override { }

  virtual void enterOpt_queue_elem(GreenPlumParser::Opt_queue_elemContext * /*ctx*/) override { }
  virtual void exitOpt_queue_elem(GreenPlumParser::Opt_queue_elemContext * /*ctx*/) override { }

  virtual void enterAlter_queue_stmt(GreenPlumParser::Alter_queue_stmtContext * /*ctx*/) override { }
  virtual void exitAlter_queue_stmt(GreenPlumParser::Alter_queue_stmtContext * /*ctx*/) override { }

  virtual void enterWith_out_definition(GreenPlumParser::With_out_definitionContext * /*ctx*/) override { }
  virtual void exitWith_out_definition(GreenPlumParser::With_out_definitionContext * /*ctx*/) override { }

  virtual void enterDrop_queue_stmt(GreenPlumParser::Drop_queue_stmtContext * /*ctx*/) override { }
  virtual void exitDrop_queue_stmt(GreenPlumParser::Drop_queue_stmtContext * /*ctx*/) override { }

  virtual void enterCreate_resource_group_stmt(GreenPlumParser::Create_resource_group_stmtContext * /*ctx*/) override { }
  virtual void exitCreate_resource_group_stmt(GreenPlumParser::Create_resource_group_stmtContext * /*ctx*/) override { }

  virtual void enterDrop_resource_group_stmt(GreenPlumParser::Drop_resource_group_stmtContext * /*ctx*/) override { }
  virtual void exitDrop_resource_group_stmt(GreenPlumParser::Drop_resource_group_stmtContext * /*ctx*/) override { }

  virtual void enterAlter_resource_group_stmt(GreenPlumParser::Alter_resource_group_stmtContext * /*ctx*/) override { }
  virtual void exitAlter_resource_group_stmt(GreenPlumParser::Alter_resource_group_stmtContext * /*ctx*/) override { }

  virtual void enterResource_group_elem(GreenPlumParser::Resource_group_elemContext * /*ctx*/) override { }
  virtual void exitResource_group_elem(GreenPlumParser::Resource_group_elemContext * /*ctx*/) override { }

  virtual void enterCreate_role_stmt(GreenPlumParser::Create_role_stmtContext * /*ctx*/) override { }
  virtual void exitCreate_role_stmt(GreenPlumParser::Create_role_stmtContext * /*ctx*/) override { }

  virtual void enterOpt_with(GreenPlumParser::Opt_withContext * /*ctx*/) override { }
  virtual void exitOpt_with(GreenPlumParser::Opt_withContext * /*ctx*/) override { }

  virtual void enterRole_elem(GreenPlumParser::Role_elemContext * /*ctx*/) override { }
  virtual void exitRole_elem(GreenPlumParser::Role_elemContext * /*ctx*/) override { }

  virtual void enterDeny_login_role(GreenPlumParser::Deny_login_roleContext * /*ctx*/) override { }
  virtual void exitDeny_login_role(GreenPlumParser::Deny_login_roleContext * /*ctx*/) override { }

  virtual void enterDeny_interval(GreenPlumParser::Deny_intervalContext * /*ctx*/) override { }
  virtual void exitDeny_interval(GreenPlumParser::Deny_intervalContext * /*ctx*/) override { }

  virtual void enterDeny_day_specifier(GreenPlumParser::Deny_day_specifierContext * /*ctx*/) override { }
  virtual void exitDeny_day_specifier(GreenPlumParser::Deny_day_specifierContext * /*ctx*/) override { }

  virtual void enterDeny_point(GreenPlumParser::Deny_pointContext * /*ctx*/) override { }
  virtual void exitDeny_point(GreenPlumParser::Deny_pointContext * /*ctx*/) override { }

  virtual void enterOpt_time(GreenPlumParser::Opt_timeContext * /*ctx*/) override { }
  virtual void exitOpt_time(GreenPlumParser::Opt_timeContext * /*ctx*/) override { }

  virtual void enterExttab_auth_list(GreenPlumParser::Exttab_auth_listContext * /*ctx*/) override { }
  virtual void exitExttab_auth_list(GreenPlumParser::Exttab_auth_listContext * /*ctx*/) override { }

  virtual void enterKeyvalue_list(GreenPlumParser::Keyvalue_listContext * /*ctx*/) override { }
  virtual void exitKeyvalue_list(GreenPlumParser::Keyvalue_listContext * /*ctx*/) override { }

  virtual void enterKeyvalue_pair(GreenPlumParser::Keyvalue_pairContext * /*ctx*/) override { }
  virtual void exitKeyvalue_pair(GreenPlumParser::Keyvalue_pairContext * /*ctx*/) override { }

  virtual void enterCreate_user_stmt(GreenPlumParser::Create_user_stmtContext * /*ctx*/) override { }
  virtual void exitCreate_user_stmt(GreenPlumParser::Create_user_stmtContext * /*ctx*/) override { }

  virtual void enterAlter_role_stmt(GreenPlumParser::Alter_role_stmtContext * /*ctx*/) override { }
  virtual void exitAlter_role_stmt(GreenPlumParser::Alter_role_stmtContext * /*ctx*/) override { }

  virtual void enterAlter_role_set_stmt(GreenPlumParser::Alter_role_set_stmtContext * /*ctx*/) override { }
  virtual void exitAlter_role_set_stmt(GreenPlumParser::Alter_role_set_stmtContext * /*ctx*/) override { }

  virtual void enterAlter_role_elem(GreenPlumParser::Alter_role_elemContext * /*ctx*/) override { }
  virtual void exitAlter_role_elem(GreenPlumParser::Alter_role_elemContext * /*ctx*/) override { }

  virtual void enterAlter_user_stmt(GreenPlumParser::Alter_user_stmtContext * /*ctx*/) override { }
  virtual void exitAlter_user_stmt(GreenPlumParser::Alter_user_stmtContext * /*ctx*/) override { }

  virtual void enterAlter_user_set_stmt(GreenPlumParser::Alter_user_set_stmtContext * /*ctx*/) override { }
  virtual void exitAlter_user_set_stmt(GreenPlumParser::Alter_user_set_stmtContext * /*ctx*/) override { }

  virtual void enterDrop_role_stmt(GreenPlumParser::Drop_role_stmtContext * /*ctx*/) override { }
  virtual void exitDrop_role_stmt(GreenPlumParser::Drop_role_stmtContext * /*ctx*/) override { }

  virtual void enterDrop_user_stmt(GreenPlumParser::Drop_user_stmtContext * /*ctx*/) override { }
  virtual void exitDrop_user_stmt(GreenPlumParser::Drop_user_stmtContext * /*ctx*/) override { }

  virtual void enterCreate_group_stmt(GreenPlumParser::Create_group_stmtContext * /*ctx*/) override { }
  virtual void exitCreate_group_stmt(GreenPlumParser::Create_group_stmtContext * /*ctx*/) override { }

  virtual void enterAlter_group_stmt(GreenPlumParser::Alter_group_stmtContext * /*ctx*/) override { }
  virtual void exitAlter_group_stmt(GreenPlumParser::Alter_group_stmtContext * /*ctx*/) override { }

  virtual void enterAdd_drop(GreenPlumParser::Add_dropContext * /*ctx*/) override { }
  virtual void exitAdd_drop(GreenPlumParser::Add_dropContext * /*ctx*/) override { }

  virtual void enterDrop_group_stmt(GreenPlumParser::Drop_group_stmtContext * /*ctx*/) override { }
  virtual void exitDrop_group_stmt(GreenPlumParser::Drop_group_stmtContext * /*ctx*/) override { }

  virtual void enterCreate_schema_stmt(GreenPlumParser::Create_schema_stmtContext * /*ctx*/) override { }
  virtual void exitCreate_schema_stmt(GreenPlumParser::Create_schema_stmtContext * /*ctx*/) override { }

  virtual void enterSchema_name(GreenPlumParser::Schema_nameContext * /*ctx*/) override { }
  virtual void exitSchema_name(GreenPlumParser::Schema_nameContext * /*ctx*/) override { }

  virtual void enterSchema_stmt(GreenPlumParser::Schema_stmtContext * /*ctx*/) override { }
  virtual void exitSchema_stmt(GreenPlumParser::Schema_stmtContext * /*ctx*/) override { }

  virtual void enterVariable_set_stmt(GreenPlumParser::Variable_set_stmtContext * /*ctx*/) override { }
  virtual void exitVariable_set_stmt(GreenPlumParser::Variable_set_stmtContext * /*ctx*/) override { }

  virtual void enterSet_rest(GreenPlumParser::Set_restContext * /*ctx*/) override { }
  virtual void exitSet_rest(GreenPlumParser::Set_restContext * /*ctx*/) override { }

  virtual void enterVar_name(GreenPlumParser::Var_nameContext * /*ctx*/) override { }
  virtual void exitVar_name(GreenPlumParser::Var_nameContext * /*ctx*/) override { }

  virtual void enterVar_list(GreenPlumParser::Var_listContext * /*ctx*/) override { }
  virtual void exitVar_list(GreenPlumParser::Var_listContext * /*ctx*/) override { }

  virtual void enterVar_value(GreenPlumParser::Var_valueContext * /*ctx*/) override { }
  virtual void exitVar_value(GreenPlumParser::Var_valueContext * /*ctx*/) override { }

  virtual void enterIso_level(GreenPlumParser::Iso_levelContext * /*ctx*/) override { }
  virtual void exitIso_level(GreenPlumParser::Iso_levelContext * /*ctx*/) override { }

  virtual void enterOpt_boolean(GreenPlumParser::Opt_booleanContext * /*ctx*/) override { }
  virtual void exitOpt_boolean(GreenPlumParser::Opt_booleanContext * /*ctx*/) override { }

  virtual void enterZone_value(GreenPlumParser::Zone_valueContext * /*ctx*/) override { }
  virtual void exitZone_value(GreenPlumParser::Zone_valueContext * /*ctx*/) override { }

  virtual void enterParen_iconst(GreenPlumParser::Paren_iconstContext * /*ctx*/) override { }
  virtual void exitParen_iconst(GreenPlumParser::Paren_iconstContext * /*ctx*/) override { }

  virtual void enterOpt_encoding(GreenPlumParser::Opt_encodingContext * /*ctx*/) override { }
  virtual void exitOpt_encoding(GreenPlumParser::Opt_encodingContext * /*ctx*/) override { }

  virtual void enterColid_or_sconst(GreenPlumParser::Colid_or_sconstContext * /*ctx*/) override { }
  virtual void exitColid_or_sconst(GreenPlumParser::Colid_or_sconstContext * /*ctx*/) override { }

  virtual void enterVariable_reset_stmt(GreenPlumParser::Variable_reset_stmtContext * /*ctx*/) override { }
  virtual void exitVariable_reset_stmt(GreenPlumParser::Variable_reset_stmtContext * /*ctx*/) override { }

  virtual void enterSet_reset_clause(GreenPlumParser::Set_reset_clauseContext * /*ctx*/) override { }
  virtual void exitSet_reset_clause(GreenPlumParser::Set_reset_clauseContext * /*ctx*/) override { }

  virtual void enterVariable_show_stmt(GreenPlumParser::Variable_show_stmtContext * /*ctx*/) override { }
  virtual void exitVariable_show_stmt(GreenPlumParser::Variable_show_stmtContext * /*ctx*/) override { }

  virtual void enterConstraints_set_stmt(GreenPlumParser::Constraints_set_stmtContext * /*ctx*/) override { }
  virtual void exitConstraints_set_stmt(GreenPlumParser::Constraints_set_stmtContext * /*ctx*/) override { }

  virtual void enterConstraints_set_list(GreenPlumParser::Constraints_set_listContext * /*ctx*/) override { }
  virtual void exitConstraints_set_list(GreenPlumParser::Constraints_set_listContext * /*ctx*/) override { }

  virtual void enterConstraints_set_mode(GreenPlumParser::Constraints_set_modeContext * /*ctx*/) override { }
  virtual void exitConstraints_set_mode(GreenPlumParser::Constraints_set_modeContext * /*ctx*/) override { }

  virtual void enterCheck_point_stmt(GreenPlumParser::Check_point_stmtContext * /*ctx*/) override { }
  virtual void exitCheck_point_stmt(GreenPlumParser::Check_point_stmtContext * /*ctx*/) override { }

  virtual void enterDiscard_stmt(GreenPlumParser::Discard_stmtContext * /*ctx*/) override { }
  virtual void exitDiscard_stmt(GreenPlumParser::Discard_stmtContext * /*ctx*/) override { }

  virtual void enterAlter_table_stmt(GreenPlumParser::Alter_table_stmtContext * /*ctx*/) override { }
  virtual void exitAlter_table_stmt(GreenPlumParser::Alter_table_stmtContext * /*ctx*/) override { }

  virtual void enterAlter_table_cmds(GreenPlumParser::Alter_table_cmdsContext * /*ctx*/) override { }
  virtual void exitAlter_table_cmds(GreenPlumParser::Alter_table_cmdsContext * /*ctx*/) override { }

  virtual void enterAlter_table_cmd(GreenPlumParser::Alter_table_cmdContext * /*ctx*/) override { }
  virtual void exitAlter_table_cmd(GreenPlumParser::Alter_table_cmdContext * /*ctx*/) override { }

  virtual void enterOpt_table_partition_split_into(GreenPlumParser::Opt_table_partition_split_intoContext * /*ctx*/) override { }
  virtual void exitOpt_table_partition_split_into(GreenPlumParser::Opt_table_partition_split_intoContext * /*ctx*/) override { }

  virtual void enterOpt_table_partition_merge_into(GreenPlumParser::Opt_table_partition_merge_intoContext * /*ctx*/) override { }
  virtual void exitOpt_table_partition_merge_into(GreenPlumParser::Opt_table_partition_merge_intoContext * /*ctx*/) override { }

  virtual void enterTable_partition_modify(GreenPlumParser::Table_partition_modifyContext * /*ctx*/) override { }
  virtual void exitTable_partition_modify(GreenPlumParser::Table_partition_modifyContext * /*ctx*/) override { }

  virtual void enterOpt_table_partition_exchange_validate(GreenPlumParser::Opt_table_partition_exchange_validateContext * /*ctx*/) override { }
  virtual void exitOpt_table_partition_exchange_validate(GreenPlumParser::Opt_table_partition_exchange_validateContext * /*ctx*/) override { }

  virtual void enterAlter_table_partition_id_spec(GreenPlumParser::Alter_table_partition_id_specContext * /*ctx*/) override { }
  virtual void exitAlter_table_partition_id_spec(GreenPlumParser::Alter_table_partition_id_specContext * /*ctx*/) override { }

  virtual void enterAlter_table_partition_id_spec_with_opt_default(GreenPlumParser::Alter_table_partition_id_spec_with_opt_defaultContext * /*ctx*/) override { }
  virtual void exitAlter_table_partition_id_spec_with_opt_default(GreenPlumParser::Alter_table_partition_id_spec_with_opt_defaultContext * /*ctx*/) override { }

  virtual void enterAlter_table_partition_cmd(GreenPlumParser::Alter_table_partition_cmdContext * /*ctx*/) override { }
  virtual void exitAlter_table_partition_cmd(GreenPlumParser::Alter_table_partition_cmdContext * /*ctx*/) override { }

  virtual void enterAlter_rel_cmds(GreenPlumParser::Alter_rel_cmdsContext * /*ctx*/) override { }
  virtual void exitAlter_rel_cmds(GreenPlumParser::Alter_rel_cmdsContext * /*ctx*/) override { }

  virtual void enterAlter_rel_cmd(GreenPlumParser::Alter_rel_cmdContext * /*ctx*/) override { }
  virtual void exitAlter_rel_cmd(GreenPlumParser::Alter_rel_cmdContext * /*ctx*/) override { }

  virtual void enterAlter_column_default(GreenPlumParser::Alter_column_defaultContext * /*ctx*/) override { }
  virtual void exitAlter_column_default(GreenPlumParser::Alter_column_defaultContext * /*ctx*/) override { }

  virtual void enterOpt_drop_behavior(GreenPlumParser::Opt_drop_behaviorContext * /*ctx*/) override { }
  virtual void exitOpt_drop_behavior(GreenPlumParser::Opt_drop_behaviorContext * /*ctx*/) override { }

  virtual void enterAlter_using(GreenPlumParser::Alter_usingContext * /*ctx*/) override { }
  virtual void exitAlter_using(GreenPlumParser::Alter_usingContext * /*ctx*/) override { }

  virtual void enterClose_portal_stmt(GreenPlumParser::Close_portal_stmtContext * /*ctx*/) override { }
  virtual void exitClose_portal_stmt(GreenPlumParser::Close_portal_stmtContext * /*ctx*/) override { }

  virtual void enterCopy_stmt(GreenPlumParser::Copy_stmtContext * /*ctx*/) override { }
  virtual void exitCopy_stmt(GreenPlumParser::Copy_stmtContext * /*ctx*/) override { }

  virtual void enterCopy_from(GreenPlumParser::Copy_fromContext * /*ctx*/) override { }
  virtual void exitCopy_from(GreenPlumParser::Copy_fromContext * /*ctx*/) override { }

  virtual void enterSkip_external_partition(GreenPlumParser::Skip_external_partitionContext * /*ctx*/) override { }
  virtual void exitSkip_external_partition(GreenPlumParser::Skip_external_partitionContext * /*ctx*/) override { }

  virtual void enterCopy_file_name(GreenPlumParser::Copy_file_nameContext * /*ctx*/) override { }
  virtual void exitCopy_file_name(GreenPlumParser::Copy_file_nameContext * /*ctx*/) override { }

  virtual void enterCopy_opt_item(GreenPlumParser::Copy_opt_itemContext * /*ctx*/) override { }
  virtual void exitCopy_opt_item(GreenPlumParser::Copy_opt_itemContext * /*ctx*/) override { }

  virtual void enterOpt_oids(GreenPlumParser::Opt_oidsContext * /*ctx*/) override { }
  virtual void exitOpt_oids(GreenPlumParser::Opt_oidsContext * /*ctx*/) override { }

  virtual void enterCopy_delimiter(GreenPlumParser::Copy_delimiterContext * /*ctx*/) override { }
  virtual void exitCopy_delimiter(GreenPlumParser::Copy_delimiterContext * /*ctx*/) override { }

  virtual void enterCreate_stmt(GreenPlumParser::Create_stmtContext * /*ctx*/) override { }
  virtual void exitCreate_stmt(GreenPlumParser::Create_stmtContext * /*ctx*/) override { }

  virtual void enterOpt_temp(GreenPlumParser::Opt_tempContext * /*ctx*/) override { }
  virtual void exitOpt_temp(GreenPlumParser::Opt_tempContext * /*ctx*/) override { }

  virtual void enterTable_element_list(GreenPlumParser::Table_element_listContext * /*ctx*/) override { }
  virtual void exitTable_element_list(GreenPlumParser::Table_element_listContext * /*ctx*/) override { }

  virtual void enterTable_element(GreenPlumParser::Table_elementContext * /*ctx*/) override { }
  virtual void exitTable_element(GreenPlumParser::Table_elementContext * /*ctx*/) override { }

  virtual void enterColumn_reference_storage_directive(GreenPlumParser::Column_reference_storage_directiveContext * /*ctx*/) override { }
  virtual void exitColumn_reference_storage_directive(GreenPlumParser::Column_reference_storage_directiveContext * /*ctx*/) override { }

  virtual void enterColumn_def(GreenPlumParser::Column_defContext * /*ctx*/) override { }
  virtual void exitColumn_def(GreenPlumParser::Column_defContext * /*ctx*/) override { }

  virtual void enterCol_constraint(GreenPlumParser::Col_constraintContext * /*ctx*/) override { }
  virtual void exitCol_constraint(GreenPlumParser::Col_constraintContext * /*ctx*/) override { }

  virtual void enterOpt_storage_encoding(GreenPlumParser::Opt_storage_encodingContext * /*ctx*/) override { }
  virtual void exitOpt_storage_encoding(GreenPlumParser::Opt_storage_encodingContext * /*ctx*/) override { }

  virtual void enterCol_constraint_elem(GreenPlumParser::Col_constraint_elemContext * /*ctx*/) override { }
  virtual void exitCol_constraint_elem(GreenPlumParser::Col_constraint_elemContext * /*ctx*/) override { }

  virtual void enterConstraint_attr(GreenPlumParser::Constraint_attrContext * /*ctx*/) override { }
  virtual void exitConstraint_attr(GreenPlumParser::Constraint_attrContext * /*ctx*/) override { }

  virtual void enterTable_like_clause(GreenPlumParser::Table_like_clauseContext * /*ctx*/) override { }
  virtual void exitTable_like_clause(GreenPlumParser::Table_like_clauseContext * /*ctx*/) override { }

  virtual void enterTable_list_option(GreenPlumParser::Table_list_optionContext * /*ctx*/) override { }
  virtual void exitTable_list_option(GreenPlumParser::Table_list_optionContext * /*ctx*/) override { }

  virtual void enterTable_constraint(GreenPlumParser::Table_constraintContext * /*ctx*/) override { }
  virtual void exitTable_constraint(GreenPlumParser::Table_constraintContext * /*ctx*/) override { }

  virtual void enterConstraint_elem(GreenPlumParser::Constraint_elemContext * /*ctx*/) override { }
  virtual void exitConstraint_elem(GreenPlumParser::Constraint_elemContext * /*ctx*/) override { }

  virtual void enterParen_column(GreenPlumParser::Paren_columnContext * /*ctx*/) override { }
  virtual void exitParen_column(GreenPlumParser::Paren_columnContext * /*ctx*/) override { }

  virtual void enterParen_column_list(GreenPlumParser::Paren_column_listContext * /*ctx*/) override { }
  virtual void exitParen_column_list(GreenPlumParser::Paren_column_listContext * /*ctx*/) override { }

  virtual void enterColumn_list(GreenPlumParser::Column_listContext * /*ctx*/) override { }
  virtual void exitColumn_list(GreenPlumParser::Column_listContext * /*ctx*/) override { }

  virtual void enterColumn_elem(GreenPlumParser::Column_elemContext * /*ctx*/) override { }
  virtual void exitColumn_elem(GreenPlumParser::Column_elemContext * /*ctx*/) override { }

  virtual void enterKey_match(GreenPlumParser::Key_matchContext * /*ctx*/) override { }
  virtual void exitKey_match(GreenPlumParser::Key_matchContext * /*ctx*/) override { }

  virtual void enterKey_actions(GreenPlumParser::Key_actionsContext * /*ctx*/) override { }
  virtual void exitKey_actions(GreenPlumParser::Key_actionsContext * /*ctx*/) override { }

  virtual void enterKey_update(GreenPlumParser::Key_updateContext * /*ctx*/) override { }
  virtual void exitKey_update(GreenPlumParser::Key_updateContext * /*ctx*/) override { }

  virtual void enterKey_delete(GreenPlumParser::Key_deleteContext * /*ctx*/) override { }
  virtual void exitKey_delete(GreenPlumParser::Key_deleteContext * /*ctx*/) override { }

  virtual void enterKey_action(GreenPlumParser::Key_actionContext * /*ctx*/) override { }
  virtual void exitKey_action(GreenPlumParser::Key_actionContext * /*ctx*/) override { }

  virtual void enterOpt_inherit(GreenPlumParser::Opt_inheritContext * /*ctx*/) override { }
  virtual void exitOpt_inherit(GreenPlumParser::Opt_inheritContext * /*ctx*/) override { }

  virtual void enterOpt_with_def_oids(GreenPlumParser::Opt_with_def_oidsContext * /*ctx*/) override { }
  virtual void exitOpt_with_def_oids(GreenPlumParser::Opt_with_def_oidsContext * /*ctx*/) override { }

  virtual void enterOn_commit_option(GreenPlumParser::On_commit_optionContext * /*ctx*/) override { }
  virtual void exitOn_commit_option(GreenPlumParser::On_commit_optionContext * /*ctx*/) override { }

  virtual void enterOpt_table_space(GreenPlumParser::Opt_table_spaceContext * /*ctx*/) override { }
  virtual void exitOpt_table_space(GreenPlumParser::Opt_table_spaceContext * /*ctx*/) override { }

  virtual void enterConstraint_table_space(GreenPlumParser::Constraint_table_spaceContext * /*ctx*/) override { }
  virtual void exitConstraint_table_space(GreenPlumParser::Constraint_table_spaceContext * /*ctx*/) override { }

  virtual void enterDistributed_by(GreenPlumParser::Distributed_byContext * /*ctx*/) override { }
  virtual void exitDistributed_by(GreenPlumParser::Distributed_byContext * /*ctx*/) override { }

  virtual void enterOpt_distributed_by(GreenPlumParser::Opt_distributed_byContext * /*ctx*/) override { }
  virtual void exitOpt_distributed_by(GreenPlumParser::Opt_distributed_byContext * /*ctx*/) override { }

  virtual void enterTab_partition_column_enc_list(GreenPlumParser::Tab_partition_column_enc_listContext * /*ctx*/) override { }
  virtual void exitTab_partition_column_enc_list(GreenPlumParser::Tab_partition_column_enc_listContext * /*ctx*/) override { }

  virtual void enterOpt_tab_partition_storage_attr(GreenPlumParser::Opt_tab_partition_storage_attrContext * /*ctx*/) override { }
  virtual void exitOpt_tab_partition_storage_attr(GreenPlumParser::Opt_tab_partition_storage_attrContext * /*ctx*/) override { }

  virtual void enterOpt_tab_partition_spec(GreenPlumParser::Opt_tab_partition_specContext * /*ctx*/) override { }
  virtual void exitOpt_tab_partition_spec(GreenPlumParser::Opt_tab_partition_specContext * /*ctx*/) override { }

  virtual void enterOpt_tab_sub_partition_spec(GreenPlumParser::Opt_tab_sub_partition_specContext * /*ctx*/) override { }
  virtual void exitOpt_tab_sub_partition_spec(GreenPlumParser::Opt_tab_sub_partition_specContext * /*ctx*/) override { }

  virtual void enterTab_partition_elem_list(GreenPlumParser::Tab_partition_elem_listContext * /*ctx*/) override { }
  virtual void exitTab_partition_elem_list(GreenPlumParser::Tab_partition_elem_listContext * /*ctx*/) override { }

  virtual void enterTab_sub_partition_elem_list(GreenPlumParser::Tab_sub_partition_elem_listContext * /*ctx*/) override { }
  virtual void exitTab_sub_partition_elem_list(GreenPlumParser::Tab_sub_partition_elem_listContext * /*ctx*/) override { }

  virtual void enterTab_part_val_no_paran(GreenPlumParser::Tab_part_val_no_paranContext * /*ctx*/) override { }
  virtual void exitTab_part_val_no_paran(GreenPlumParser::Tab_part_val_no_paranContext * /*ctx*/) override { }

  virtual void enterTab_part_val(GreenPlumParser::Tab_part_valContext * /*ctx*/) override { }
  virtual void exitTab_part_val(GreenPlumParser::Tab_part_valContext * /*ctx*/) override { }

  virtual void enterTab_partition_boundary_spec_val_list(GreenPlumParser::Tab_partition_boundary_spec_val_listContext * /*ctx*/) override { }
  virtual void exitTab_partition_boundary_spec_val_list(GreenPlumParser::Tab_partition_boundary_spec_val_listContext * /*ctx*/) override { }

  virtual void enterOpt_tab_partition_range_inclusive(GreenPlumParser::Opt_tab_partition_range_inclusiveContext * /*ctx*/) override { }
  virtual void exitOpt_tab_partition_range_inclusive(GreenPlumParser::Opt_tab_partition_range_inclusiveContext * /*ctx*/) override { }

  virtual void enterTab_partition_boundary_spec_start(GreenPlumParser::Tab_partition_boundary_spec_startContext * /*ctx*/) override { }
  virtual void exitTab_partition_boundary_spec_start(GreenPlumParser::Tab_partition_boundary_spec_startContext * /*ctx*/) override { }

  virtual void enterTab_partition_boundary_spec_end(GreenPlumParser::Tab_partition_boundary_spec_endContext * /*ctx*/) override { }
  virtual void exitTab_partition_boundary_spec_end(GreenPlumParser::Tab_partition_boundary_spec_endContext * /*ctx*/) override { }

  virtual void enterOpt_tab_partition_boundary_spec_every(GreenPlumParser::Opt_tab_partition_boundary_spec_everyContext * /*ctx*/) override { }
  virtual void exitOpt_tab_partition_boundary_spec_every(GreenPlumParser::Opt_tab_partition_boundary_spec_everyContext * /*ctx*/) override { }

  virtual void enterTab_partition_boundary_spec(GreenPlumParser::Tab_partition_boundary_specContext * /*ctx*/) override { }
  virtual void exitTab_partition_boundary_spec(GreenPlumParser::Tab_partition_boundary_specContext * /*ctx*/) override { }

  virtual void enterParen_part_values_single(GreenPlumParser::Paren_part_values_singleContext * /*ctx*/) override { }
  virtual void exitParen_part_values_single(GreenPlumParser::Paren_part_values_singleContext * /*ctx*/) override { }

  virtual void enterMulti_spec_value_list(GreenPlumParser::Multi_spec_value_listContext * /*ctx*/) override { }
  virtual void exitMulti_spec_value_list(GreenPlumParser::Multi_spec_value_listContext * /*ctx*/) override { }

  virtual void enterPart_values_single(GreenPlumParser::Part_values_singleContext * /*ctx*/) override { }
  virtual void exitPart_values_single(GreenPlumParser::Part_values_singleContext * /*ctx*/) override { }

  virtual void enterPart_values_clause(GreenPlumParser::Part_values_clauseContext * /*ctx*/) override { }
  virtual void exitPart_values_clause(GreenPlumParser::Part_values_clauseContext * /*ctx*/) override { }

  virtual void enterPart_values_or_spec_list(GreenPlumParser::Part_values_or_spec_listContext * /*ctx*/) override { }
  virtual void exitPart_values_or_spec_list(GreenPlumParser::Part_values_or_spec_listContext * /*ctx*/) override { }

  virtual void enterTab_partition_elem(GreenPlumParser::Tab_partition_elemContext * /*ctx*/) override { }
  virtual void exitTab_partition_elem(GreenPlumParser::Tab_partition_elemContext * /*ctx*/) override { }

  virtual void enterTab_sub_partition_elem(GreenPlumParser::Tab_sub_partition_elemContext * /*ctx*/) override { }
  virtual void exitTab_sub_partition_elem(GreenPlumParser::Tab_sub_partition_elemContext * /*ctx*/) override { }

  virtual void enterTab_partition_elemOption(GreenPlumParser::Tab_partition_elemOptionContext * /*ctx*/) override { }
  virtual void exitTab_partition_elemOption(GreenPlumParser::Tab_partition_elemOptionContext * /*ctx*/) override { }

  virtual void enterTab_partition_name_decl(GreenPlumParser::Tab_partition_name_declContext * /*ctx*/) override { }
  virtual void exitTab_partition_name_decl(GreenPlumParser::Tab_partition_name_declContext * /*ctx*/) override { }

  virtual void enterTab_partition_default_name_decl(GreenPlumParser::Tab_partition_default_name_declContext * /*ctx*/) override { }
  virtual void exitTab_partition_default_name_decl(GreenPlumParser::Tab_partition_default_name_declContext * /*ctx*/) override { }

  virtual void enterTab_sub_partition_name_decl(GreenPlumParser::Tab_sub_partition_name_declContext * /*ctx*/) override { }
  virtual void exitTab_sub_partition_name_decl(GreenPlumParser::Tab_sub_partition_name_declContext * /*ctx*/) override { }

  virtual void enterTab_sub_partition_default_name_decl(GreenPlumParser::Tab_sub_partition_default_name_declContext * /*ctx*/) override { }
  virtual void exitTab_sub_partition_default_name_decl(GreenPlumParser::Tab_sub_partition_default_name_declContext * /*ctx*/) override { }

  virtual void enterTab_partition_by_type(GreenPlumParser::Tab_partition_by_typeContext * /*ctx*/) override { }
  virtual void exitTab_partition_by_type(GreenPlumParser::Tab_partition_by_typeContext * /*ctx*/) override { }

  virtual void enterOpt_tab_partition_by(GreenPlumParser::Opt_tab_partition_byContext * /*ctx*/) override { }
  virtual void exitOpt_tab_partition_by(GreenPlumParser::Opt_tab_partition_byContext * /*ctx*/) override { }

  virtual void enterTab_sub_partition_by_list(GreenPlumParser::Tab_sub_partition_by_listContext * /*ctx*/) override { }
  virtual void exitTab_sub_partition_by_list(GreenPlumParser::Tab_sub_partition_by_listContext * /*ctx*/) override { }

  virtual void enterTab_sub_partition_template(GreenPlumParser::Tab_sub_partition_templateContext * /*ctx*/) override { }
  virtual void exitTab_sub_partition_template(GreenPlumParser::Tab_sub_partition_templateContext * /*ctx*/) override { }

  virtual void enterTab_sub_partition_by(GreenPlumParser::Tab_sub_partition_byContext * /*ctx*/) override { }
  virtual void exitTab_sub_partition_by(GreenPlumParser::Tab_sub_partition_byContext * /*ctx*/) override { }

  virtual void enterOpt_partitions_number(GreenPlumParser::Opt_partitions_numberContext * /*ctx*/) override { }
  virtual void exitOpt_partitions_number(GreenPlumParser::Opt_partitions_numberContext * /*ctx*/) override { }

  virtual void enterCreate_as_stmt(GreenPlumParser::Create_as_stmtContext * /*ctx*/) override { }
  virtual void exitCreate_as_stmt(GreenPlumParser::Create_as_stmtContext * /*ctx*/) override { }

  virtual void enterCreate_as_target(GreenPlumParser::Create_as_targetContext * /*ctx*/) override { }
  virtual void exitCreate_as_target(GreenPlumParser::Create_as_targetContext * /*ctx*/) override { }

  virtual void enterOpt_create_as(GreenPlumParser::Opt_create_asContext * /*ctx*/) override { }
  virtual void exitOpt_create_as(GreenPlumParser::Opt_create_asContext * /*ctx*/) override { }

  virtual void enterCreate_as_list(GreenPlumParser::Create_as_listContext * /*ctx*/) override { }
  virtual void exitCreate_as_list(GreenPlumParser::Create_as_listContext * /*ctx*/) override { }

  virtual void enterCreate_as_element(GreenPlumParser::Create_as_elementContext * /*ctx*/) override { }
  virtual void exitCreate_as_element(GreenPlumParser::Create_as_elementContext * /*ctx*/) override { }

  virtual void enterOpt_with_data(GreenPlumParser::Opt_with_dataContext * /*ctx*/) override { }
  virtual void exitOpt_with_data(GreenPlumParser::Opt_with_dataContext * /*ctx*/) override { }

  virtual void enterCreate_external_stmt(GreenPlumParser::Create_external_stmtContext * /*ctx*/) override { }
  virtual void exitCreate_external_stmt(GreenPlumParser::Create_external_stmtContext * /*ctx*/) override { }

  virtual void enterOpt_writable(GreenPlumParser::Opt_writableContext * /*ctx*/) override { }
  virtual void exitOpt_writable(GreenPlumParser::Opt_writableContext * /*ctx*/) override { }

  virtual void enterExt_type_desc(GreenPlumParser::Ext_type_descContext * /*ctx*/) override { }
  virtual void exitExt_type_desc(GreenPlumParser::Ext_type_descContext * /*ctx*/) override { }

  virtual void enterExt_on_clause_item(GreenPlumParser::Ext_on_clause_itemContext * /*ctx*/) override { }
  virtual void exitExt_on_clause_item(GreenPlumParser::Ext_on_clause_itemContext * /*ctx*/) override { }

  virtual void enterDouble_parens(GreenPlumParser::Double_parensContext * /*ctx*/) override { }
  virtual void exitDouble_parens(GreenPlumParser::Double_parensContext * /*ctx*/) override { }

  virtual void enterFormat_opt(GreenPlumParser::Format_optContext * /*ctx*/) override { }
  virtual void exitFormat_opt(GreenPlumParser::Format_optContext * /*ctx*/) override { }

  virtual void enterFormat_opt_list(GreenPlumParser::Format_opt_listContext * /*ctx*/) override { }
  virtual void exitFormat_opt_list(GreenPlumParser::Format_opt_listContext * /*ctx*/) override { }

  virtual void enterFormat_def_list(GreenPlumParser::Format_def_listContext * /*ctx*/) override { }
  virtual void exitFormat_def_list(GreenPlumParser::Format_def_listContext * /*ctx*/) override { }

  virtual void enterFormat_def_item(GreenPlumParser::Format_def_itemContext * /*ctx*/) override { }
  virtual void exitFormat_def_item(GreenPlumParser::Format_def_itemContext * /*ctx*/) override { }

  virtual void enterFormat_opt_item(GreenPlumParser::Format_opt_itemContext * /*ctx*/) override { }
  virtual void exitFormat_opt_item(GreenPlumParser::Format_opt_itemContext * /*ctx*/) override { }

  virtual void enterExt_options_opt(GreenPlumParser::Ext_options_optContext * /*ctx*/) override { }
  virtual void exitExt_options_opt(GreenPlumParser::Ext_options_optContext * /*ctx*/) override { }

  virtual void enterExt_options(GreenPlumParser::Ext_optionsContext * /*ctx*/) override { }
  virtual void exitExt_options(GreenPlumParser::Ext_optionsContext * /*ctx*/) override { }

  virtual void enterExt_options_list(GreenPlumParser::Ext_options_listContext * /*ctx*/) override { }
  virtual void exitExt_options_list(GreenPlumParser::Ext_options_listContext * /*ctx*/) override { }

  virtual void enterExt_options_item(GreenPlumParser::Ext_options_itemContext * /*ctx*/) override { }
  virtual void exitExt_options_item(GreenPlumParser::Ext_options_itemContext * /*ctx*/) override { }

  virtual void enterExt_table_element_list(GreenPlumParser::Ext_table_element_listContext * /*ctx*/) override { }
  virtual void exitExt_table_element_list(GreenPlumParser::Ext_table_element_listContext * /*ctx*/) override { }

  virtual void enterExt_table_element(GreenPlumParser::Ext_table_elementContext * /*ctx*/) override { }
  virtual void exitExt_table_element(GreenPlumParser::Ext_table_elementContext * /*ctx*/) override { }

  virtual void enterExt_column_def(GreenPlumParser::Ext_column_defContext * /*ctx*/) override { }
  virtual void exitExt_column_def(GreenPlumParser::Ext_column_defContext * /*ctx*/) override { }

  virtual void enterOpt_single_row_error_handling(GreenPlumParser::Opt_single_row_error_handlingContext * /*ctx*/) override { }
  virtual void exitOpt_single_row_error_handling(GreenPlumParser::Opt_single_row_error_handlingContext * /*ctx*/) override { }

  virtual void enterOpt_log_error_table(GreenPlumParser::Opt_log_error_tableContext * /*ctx*/) override { }
  virtual void exitOpt_log_error_table(GreenPlumParser::Opt_log_error_tableContext * /*ctx*/) override { }

  virtual void enterOpt_sreh_limit_type(GreenPlumParser::Opt_sreh_limit_typeContext * /*ctx*/) override { }
  virtual void exitOpt_sreh_limit_type(GreenPlumParser::Opt_sreh_limit_typeContext * /*ctx*/) override { }

  virtual void enterExt_opt_encoding_list(GreenPlumParser::Ext_opt_encoding_listContext * /*ctx*/) override { }
  virtual void exitExt_opt_encoding_list(GreenPlumParser::Ext_opt_encoding_listContext * /*ctx*/) override { }

  virtual void enterExt_opt_encoding_item(GreenPlumParser::Ext_opt_encoding_itemContext * /*ctx*/) override { }
  virtual void exitExt_opt_encoding_item(GreenPlumParser::Ext_opt_encoding_itemContext * /*ctx*/) override { }

  virtual void enterCreate_seq_stmt(GreenPlumParser::Create_seq_stmtContext * /*ctx*/) override { }
  virtual void exitCreate_seq_stmt(GreenPlumParser::Create_seq_stmtContext * /*ctx*/) override { }

  virtual void enterAlter_seq_stmt(GreenPlumParser::Alter_seq_stmtContext * /*ctx*/) override { }
  virtual void exitAlter_seq_stmt(GreenPlumParser::Alter_seq_stmtContext * /*ctx*/) override { }

  virtual void enterOpt_seq_list(GreenPlumParser::Opt_seq_listContext * /*ctx*/) override { }
  virtual void exitOpt_seq_list(GreenPlumParser::Opt_seq_listContext * /*ctx*/) override { }

  virtual void enterOpt_seq_elem(GreenPlumParser::Opt_seq_elemContext * /*ctx*/) override { }
  virtual void exitOpt_seq_elem(GreenPlumParser::Opt_seq_elemContext * /*ctx*/) override { }

  virtual void enterNumberic_only(GreenPlumParser::Numberic_onlyContext * /*ctx*/) override { }
  virtual void exitNumberic_only(GreenPlumParser::Numberic_onlyContext * /*ctx*/) override { }

  virtual void enterFloat_only(GreenPlumParser::Float_onlyContext * /*ctx*/) override { }
  virtual void exitFloat_only(GreenPlumParser::Float_onlyContext * /*ctx*/) override { }

  virtual void enterInteger_only(GreenPlumParser::Integer_onlyContext * /*ctx*/) override { }
  virtual void exitInteger_only(GreenPlumParser::Integer_onlyContext * /*ctx*/) override { }

  virtual void enterCreate_p_lang_stmt(GreenPlumParser::Create_p_lang_stmtContext * /*ctx*/) override { }
  virtual void exitCreate_p_lang_stmt(GreenPlumParser::Create_p_lang_stmtContext * /*ctx*/) override { }

  virtual void enterCreate_p_lang_stmtOption(GreenPlumParser::Create_p_lang_stmtOptionContext * /*ctx*/) override { }
  virtual void exitCreate_p_lang_stmtOption(GreenPlumParser::Create_p_lang_stmtOptionContext * /*ctx*/) override { }

  virtual void enterHandler_name(GreenPlumParser::Handler_nameContext * /*ctx*/) override { }
  virtual void exitHandler_name(GreenPlumParser::Handler_nameContext * /*ctx*/) override { }

  virtual void enterOpt_inline_handler(GreenPlumParser::Opt_inline_handlerContext * /*ctx*/) override { }
  virtual void exitOpt_inline_handler(GreenPlumParser::Opt_inline_handlerContext * /*ctx*/) override { }

  virtual void enterValidator_clause(GreenPlumParser::Validator_clauseContext * /*ctx*/) override { }
  virtual void exitValidator_clause(GreenPlumParser::Validator_clauseContext * /*ctx*/) override { }

  virtual void enterOpt_validator(GreenPlumParser::Opt_validatorContext * /*ctx*/) override { }
  virtual void exitOpt_validator(GreenPlumParser::Opt_validatorContext * /*ctx*/) override { }

  virtual void enterDrop_p_lang_stmt(GreenPlumParser::Drop_p_lang_stmtContext * /*ctx*/) override { }
  virtual void exitDrop_p_lang_stmt(GreenPlumParser::Drop_p_lang_stmtContext * /*ctx*/) override { }

  virtual void enterCreate_file_space_stmt(GreenPlumParser::Create_file_space_stmtContext * /*ctx*/) override { }
  virtual void exitCreate_file_space_stmt(GreenPlumParser::Create_file_space_stmtContext * /*ctx*/) override { }

  virtual void enterFile_space_seg_list(GreenPlumParser::File_space_seg_listContext * /*ctx*/) override { }
  virtual void exitFile_space_seg_list(GreenPlumParser::File_space_seg_listContext * /*ctx*/) override { }

  virtual void enterFile_space_seg(GreenPlumParser::File_space_segContext * /*ctx*/) override { }
  virtual void exitFile_space_seg(GreenPlumParser::File_space_segContext * /*ctx*/) override { }

  virtual void enterOpt_owner(GreenPlumParser::Opt_ownerContext * /*ctx*/) override { }
  virtual void exitOpt_owner(GreenPlumParser::Opt_ownerContext * /*ctx*/) override { }

  virtual void enterCreate_table_space_stmt(GreenPlumParser::Create_table_space_stmtContext * /*ctx*/) override { }
  virtual void exitCreate_table_space_stmt(GreenPlumParser::Create_table_space_stmtContext * /*ctx*/) override { }

  virtual void enterCreate_extension_stmt(GreenPlumParser::Create_extension_stmtContext * /*ctx*/) override { }
  virtual void exitCreate_extension_stmt(GreenPlumParser::Create_extension_stmtContext * /*ctx*/) override { }

  virtual void enterCreate_extension_opt_list(GreenPlumParser::Create_extension_opt_listContext * /*ctx*/) override { }
  virtual void exitCreate_extension_opt_list(GreenPlumParser::Create_extension_opt_listContext * /*ctx*/) override { }

  virtual void enterCreate_extension_opt_item(GreenPlumParser::Create_extension_opt_itemContext * /*ctx*/) override { }
  virtual void exitCreate_extension_opt_item(GreenPlumParser::Create_extension_opt_itemContext * /*ctx*/) override { }

  virtual void enterAlter_extension_stmt(GreenPlumParser::Alter_extension_stmtContext * /*ctx*/) override { }
  virtual void exitAlter_extension_stmt(GreenPlumParser::Alter_extension_stmtContext * /*ctx*/) override { }

  virtual void enterAlter_extension_opt_list(GreenPlumParser::Alter_extension_opt_listContext * /*ctx*/) override { }
  virtual void exitAlter_extension_opt_list(GreenPlumParser::Alter_extension_opt_listContext * /*ctx*/) override { }

  virtual void enterAlter_extension_opt_item(GreenPlumParser::Alter_extension_opt_itemContext * /*ctx*/) override { }
  virtual void exitAlter_extension_opt_item(GreenPlumParser::Alter_extension_opt_itemContext * /*ctx*/) override { }

  virtual void enterAlter_extension_content_stmt(GreenPlumParser::Alter_extension_content_stmtContext * /*ctx*/) override { }
  virtual void exitAlter_extension_content_stmt(GreenPlumParser::Alter_extension_content_stmtContext * /*ctx*/) override { }

  virtual void enterAlter_extension_content_stmtOption(GreenPlumParser::Alter_extension_content_stmtOptionContext * /*ctx*/) override { }
  virtual void exitAlter_extension_content_stmtOption(GreenPlumParser::Alter_extension_content_stmtOptionContext * /*ctx*/) override { }

  virtual void enterCreate_trig_stmt(GreenPlumParser::Create_trig_stmtContext * /*ctx*/) override { }
  virtual void exitCreate_trig_stmt(GreenPlumParser::Create_trig_stmtContext * /*ctx*/) override { }

  virtual void enterTrigger_action_time(GreenPlumParser::Trigger_action_timeContext * /*ctx*/) override { }
  virtual void exitTrigger_action_time(GreenPlumParser::Trigger_action_timeContext * /*ctx*/) override { }

  virtual void enterTrigger_events(GreenPlumParser::Trigger_eventsContext * /*ctx*/) override { }
  virtual void exitTrigger_events(GreenPlumParser::Trigger_eventsContext * /*ctx*/) override { }

  virtual void enterTrigger_one_event(GreenPlumParser::Trigger_one_eventContext * /*ctx*/) override { }
  virtual void exitTrigger_one_event(GreenPlumParser::Trigger_one_eventContext * /*ctx*/) override { }

  virtual void enterTrigger_for_spec(GreenPlumParser::Trigger_for_specContext * /*ctx*/) override { }
  virtual void exitTrigger_for_spec(GreenPlumParser::Trigger_for_specContext * /*ctx*/) override { }

  virtual void enterTrigger_for_type(GreenPlumParser::Trigger_for_typeContext * /*ctx*/) override { }
  virtual void exitTrigger_for_type(GreenPlumParser::Trigger_for_typeContext * /*ctx*/) override { }

  virtual void enterTrigger_func_args(GreenPlumParser::Trigger_func_argsContext * /*ctx*/) override { }
  virtual void exitTrigger_func_args(GreenPlumParser::Trigger_func_argsContext * /*ctx*/) override { }

  virtual void enterTrigger_func_arg(GreenPlumParser::Trigger_func_argContext * /*ctx*/) override { }
  virtual void exitTrigger_func_arg(GreenPlumParser::Trigger_func_argContext * /*ctx*/) override { }

  virtual void enterOpt_constr_from_table(GreenPlumParser::Opt_constr_from_tableContext * /*ctx*/) override { }
  virtual void exitOpt_constr_from_table(GreenPlumParser::Opt_constr_from_tableContext * /*ctx*/) override { }

  virtual void enterConstraint_attr_spec(GreenPlumParser::Constraint_attr_specContext * /*ctx*/) override { }
  virtual void exitConstraint_attr_spec(GreenPlumParser::Constraint_attr_specContext * /*ctx*/) override { }

  virtual void enterConstraint_deferrability_spec(GreenPlumParser::Constraint_deferrability_specContext * /*ctx*/) override { }
  virtual void exitConstraint_deferrability_spec(GreenPlumParser::Constraint_deferrability_specContext * /*ctx*/) override { }

  virtual void enterConstraint_time_spec(GreenPlumParser::Constraint_time_specContext * /*ctx*/) override { }
  virtual void exitConstraint_time_spec(GreenPlumParser::Constraint_time_specContext * /*ctx*/) override { }

  virtual void enterDrop_trig_stmt(GreenPlumParser::Drop_trig_stmtContext * /*ctx*/) override { }
  virtual void exitDrop_trig_stmt(GreenPlumParser::Drop_trig_stmtContext * /*ctx*/) override { }

  virtual void enterCreate_assert_stmt(GreenPlumParser::Create_assert_stmtContext * /*ctx*/) override { }
  virtual void exitCreate_assert_stmt(GreenPlumParser::Create_assert_stmtContext * /*ctx*/) override { }

  virtual void enterDrop_assert_stmt(GreenPlumParser::Drop_assert_stmtContext * /*ctx*/) override { }
  virtual void exitDrop_assert_stmt(GreenPlumParser::Drop_assert_stmtContext * /*ctx*/) override { }

  virtual void enterDefine_stmt(GreenPlumParser::Define_stmtContext * /*ctx*/) override { }
  virtual void exitDefine_stmt(GreenPlumParser::Define_stmtContext * /*ctx*/) override { }

  virtual void enterDefinition(GreenPlumParser::DefinitionContext * /*ctx*/) override { }
  virtual void exitDefinition(GreenPlumParser::DefinitionContext * /*ctx*/) override { }

  virtual void enterDef_list(GreenPlumParser::Def_listContext * /*ctx*/) override { }
  virtual void exitDef_list(GreenPlumParser::Def_listContext * /*ctx*/) override { }

  virtual void enterDef_elem(GreenPlumParser::Def_elemContext * /*ctx*/) override { }
  virtual void exitDef_elem(GreenPlumParser::Def_elemContext * /*ctx*/) override { }

  virtual void enterDef_arg(GreenPlumParser::Def_argContext * /*ctx*/) override { }
  virtual void exitDef_arg(GreenPlumParser::Def_argContext * /*ctx*/) override { }

  virtual void enterAggr_args(GreenPlumParser::Aggr_argsContext * /*ctx*/) override { }
  virtual void exitAggr_args(GreenPlumParser::Aggr_argsContext * /*ctx*/) override { }

  virtual void enterOld_aggr_definition(GreenPlumParser::Old_aggr_definitionContext * /*ctx*/) override { }
  virtual void exitOld_aggr_definition(GreenPlumParser::Old_aggr_definitionContext * /*ctx*/) override { }

  virtual void enterOld_aggr_list(GreenPlumParser::Old_aggr_listContext * /*ctx*/) override { }
  virtual void exitOld_aggr_list(GreenPlumParser::Old_aggr_listContext * /*ctx*/) override { }

  virtual void enterOld_aggr_elem(GreenPlumParser::Old_aggr_elemContext * /*ctx*/) override { }
  virtual void exitOld_aggr_elem(GreenPlumParser::Old_aggr_elemContext * /*ctx*/) override { }

  virtual void enterEnum_val_list(GreenPlumParser::Enum_val_listContext * /*ctx*/) override { }
  virtual void exitEnum_val_list(GreenPlumParser::Enum_val_listContext * /*ctx*/) override { }

  virtual void enterCreate_op_class_stmt(GreenPlumParser::Create_op_class_stmtContext * /*ctx*/) override { }
  virtual void exitCreate_op_class_stmt(GreenPlumParser::Create_op_class_stmtContext * /*ctx*/) override { }

  virtual void enterOpclass_item_list(GreenPlumParser::Opclass_item_listContext * /*ctx*/) override { }
  virtual void exitOpclass_item_list(GreenPlumParser::Opclass_item_listContext * /*ctx*/) override { }

  virtual void enterOpclass_item(GreenPlumParser::Opclass_itemContext * /*ctx*/) override { }
  virtual void exitOpclass_item(GreenPlumParser::Opclass_itemContext * /*ctx*/) override { }

  virtual void enterOpt_opfamily(GreenPlumParser::Opt_opfamilyContext * /*ctx*/) override { }
  virtual void exitOpt_opfamily(GreenPlumParser::Opt_opfamilyContext * /*ctx*/) override { }

  virtual void enterCreate_op_family_stmt(GreenPlumParser::Create_op_family_stmtContext * /*ctx*/) override { }
  virtual void exitCreate_op_family_stmt(GreenPlumParser::Create_op_family_stmtContext * /*ctx*/) override { }

  virtual void enterAlter_op_family_stmt(GreenPlumParser::Alter_op_family_stmtContext * /*ctx*/) override { }
  virtual void exitAlter_op_family_stmt(GreenPlumParser::Alter_op_family_stmtContext * /*ctx*/) override { }

  virtual void enterOpclass_drop_list(GreenPlumParser::Opclass_drop_listContext * /*ctx*/) override { }
  virtual void exitOpclass_drop_list(GreenPlumParser::Opclass_drop_listContext * /*ctx*/) override { }

  virtual void enterOpclass_drop(GreenPlumParser::Opclass_dropContext * /*ctx*/) override { }
  virtual void exitOpclass_drop(GreenPlumParser::Opclass_dropContext * /*ctx*/) override { }

  virtual void enterDrop_op_class_stmt(GreenPlumParser::Drop_op_class_stmtContext * /*ctx*/) override { }
  virtual void exitDrop_op_class_stmt(GreenPlumParser::Drop_op_class_stmtContext * /*ctx*/) override { }

  virtual void enterDrop_op_family_stmt(GreenPlumParser::Drop_op_family_stmtContext * /*ctx*/) override { }
  virtual void exitDrop_op_family_stmt(GreenPlumParser::Drop_op_family_stmtContext * /*ctx*/) override { }

  virtual void enterDrop_owned_stmt(GreenPlumParser::Drop_owned_stmtContext * /*ctx*/) override { }
  virtual void exitDrop_owned_stmt(GreenPlumParser::Drop_owned_stmtContext * /*ctx*/) override { }

  virtual void enterReassign_owned_stmt(GreenPlumParser::Reassign_owned_stmtContext * /*ctx*/) override { }
  virtual void exitReassign_owned_stmt(GreenPlumParser::Reassign_owned_stmtContext * /*ctx*/) override { }

  virtual void enterDrop_stmt(GreenPlumParser::Drop_stmtContext * /*ctx*/) override { }
  virtual void exitDrop_stmt(GreenPlumParser::Drop_stmtContext * /*ctx*/) override { }

  virtual void enterDrop_type(GreenPlumParser::Drop_typeContext * /*ctx*/) override { }
  virtual void exitDrop_type(GreenPlumParser::Drop_typeContext * /*ctx*/) override { }

  virtual void enterAny_name_list(GreenPlumParser::Any_name_listContext * /*ctx*/) override { }
  virtual void exitAny_name_list(GreenPlumParser::Any_name_listContext * /*ctx*/) override { }

  virtual void enterAny_name(GreenPlumParser::Any_nameContext * /*ctx*/) override { }
  virtual void exitAny_name(GreenPlumParser::Any_nameContext * /*ctx*/) override { }

  virtual void enterAttrs(GreenPlumParser::AttrsContext * /*ctx*/) override { }
  virtual void exitAttrs(GreenPlumParser::AttrsContext * /*ctx*/) override { }

  virtual void enterTruncate_stmt(GreenPlumParser::Truncate_stmtContext * /*ctx*/) override { }
  virtual void exitTruncate_stmt(GreenPlumParser::Truncate_stmtContext * /*ctx*/) override { }

  virtual void enterComment_stmt(GreenPlumParser::Comment_stmtContext * /*ctx*/) override { }
  virtual void exitComment_stmt(GreenPlumParser::Comment_stmtContext * /*ctx*/) override { }

  virtual void enterComment_stmtOption(GreenPlumParser::Comment_stmtOptionContext * /*ctx*/) override { }
  virtual void exitComment_stmtOption(GreenPlumParser::Comment_stmtOptionContext * /*ctx*/) override { }

  virtual void enterComment_option(GreenPlumParser::Comment_optionContext * /*ctx*/) override { }
  virtual void exitComment_option(GreenPlumParser::Comment_optionContext * /*ctx*/) override { }

  virtual void enterComment_type(GreenPlumParser::Comment_typeContext * /*ctx*/) override { }
  virtual void exitComment_type(GreenPlumParser::Comment_typeContext * /*ctx*/) override { }

  virtual void enterComment_text(GreenPlumParser::Comment_textContext * /*ctx*/) override { }
  virtual void exitComment_text(GreenPlumParser::Comment_textContext * /*ctx*/) override { }

  virtual void enterFetch_stmt(GreenPlumParser::Fetch_stmtContext * /*ctx*/) override { }
  virtual void exitFetch_stmt(GreenPlumParser::Fetch_stmtContext * /*ctx*/) override { }

  virtual void enterFetch_direction(GreenPlumParser::Fetch_directionContext * /*ctx*/) override { }
  virtual void exitFetch_direction(GreenPlumParser::Fetch_directionContext * /*ctx*/) override { }

  virtual void enterGrant_stmt(GreenPlumParser::Grant_stmtContext * /*ctx*/) override { }
  virtual void exitGrant_stmt(GreenPlumParser::Grant_stmtContext * /*ctx*/) override { }

  virtual void enterRevoke_stmt(GreenPlumParser::Revoke_stmtContext * /*ctx*/) override { }
  virtual void exitRevoke_stmt(GreenPlumParser::Revoke_stmtContext * /*ctx*/) override { }

  virtual void enterPrivileges(GreenPlumParser::PrivilegesContext * /*ctx*/) override { }
  virtual void exitPrivileges(GreenPlumParser::PrivilegesContext * /*ctx*/) override { }

  virtual void enterPrivilege_list(GreenPlumParser::Privilege_listContext * /*ctx*/) override { }
  virtual void exitPrivilege_list(GreenPlumParser::Privilege_listContext * /*ctx*/) override { }

  virtual void enterPrivilege(GreenPlumParser::PrivilegeContext * /*ctx*/) override { }
  virtual void exitPrivilege(GreenPlumParser::PrivilegeContext * /*ctx*/) override { }

  virtual void enterPrivilege_target(GreenPlumParser::Privilege_targetContext * /*ctx*/) override { }
  virtual void exitPrivilege_target(GreenPlumParser::Privilege_targetContext * /*ctx*/) override { }

  virtual void enterGrantee_list(GreenPlumParser::Grantee_listContext * /*ctx*/) override { }
  virtual void exitGrantee_list(GreenPlumParser::Grantee_listContext * /*ctx*/) override { }

  virtual void enterGrantee(GreenPlumParser::GranteeContext * /*ctx*/) override { }
  virtual void exitGrantee(GreenPlumParser::GranteeContext * /*ctx*/) override { }

  virtual void enterOpt_grant_grant_option(GreenPlumParser::Opt_grant_grant_optionContext * /*ctx*/) override { }
  virtual void exitOpt_grant_grant_option(GreenPlumParser::Opt_grant_grant_optionContext * /*ctx*/) override { }

  virtual void enterFunction_with_argtypes_list(GreenPlumParser::Function_with_argtypes_listContext * /*ctx*/) override { }
  virtual void exitFunction_with_argtypes_list(GreenPlumParser::Function_with_argtypes_listContext * /*ctx*/) override { }

  virtual void enterFunction_with_argtypes(GreenPlumParser::Function_with_argtypesContext * /*ctx*/) override { }
  virtual void exitFunction_with_argtypes(GreenPlumParser::Function_with_argtypesContext * /*ctx*/) override { }

  virtual void enterGrant_role_stmt(GreenPlumParser::Grant_role_stmtContext * /*ctx*/) override { }
  virtual void exitGrant_role_stmt(GreenPlumParser::Grant_role_stmtContext * /*ctx*/) override { }

  virtual void enterRevoke_role_stmt(GreenPlumParser::Revoke_role_stmtContext * /*ctx*/) override { }
  virtual void exitRevoke_role_stmt(GreenPlumParser::Revoke_role_stmtContext * /*ctx*/) override { }

  virtual void enterOpt_grant_admin_option(GreenPlumParser::Opt_grant_admin_optionContext * /*ctx*/) override { }
  virtual void exitOpt_grant_admin_option(GreenPlumParser::Opt_grant_admin_optionContext * /*ctx*/) override { }

  virtual void enterOpt_granted_by(GreenPlumParser::Opt_granted_byContext * /*ctx*/) override { }
  virtual void exitOpt_granted_by(GreenPlumParser::Opt_granted_byContext * /*ctx*/) override { }

  virtual void enterIndex_stmt(GreenPlumParser::Index_stmtContext * /*ctx*/) override { }
  virtual void exitIndex_stmt(GreenPlumParser::Index_stmtContext * /*ctx*/) override { }

  virtual void enterIndex_params(GreenPlumParser::Index_paramsContext * /*ctx*/) override { }
  virtual void exitIndex_params(GreenPlumParser::Index_paramsContext * /*ctx*/) override { }

  virtual void enterIndex_elem(GreenPlumParser::Index_elemContext * /*ctx*/) override { }
  virtual void exitIndex_elem(GreenPlumParser::Index_elemContext * /*ctx*/) override { }

  virtual void enterOpt_class(GreenPlumParser::Opt_classContext * /*ctx*/) override { }
  virtual void exitOpt_class(GreenPlumParser::Opt_classContext * /*ctx*/) override { }

  virtual void enterOpt_asc_desc(GreenPlumParser::Opt_asc_descContext * /*ctx*/) override { }
  virtual void exitOpt_asc_desc(GreenPlumParser::Opt_asc_descContext * /*ctx*/) override { }

  virtual void enterOpt_nulls_order(GreenPlumParser::Opt_nulls_orderContext * /*ctx*/) override { }
  virtual void exitOpt_nulls_order(GreenPlumParser::Opt_nulls_orderContext * /*ctx*/) override { }

  virtual void enterCreate_function_stmt(GreenPlumParser::Create_function_stmtContext * /*ctx*/) override { }
  virtual void exitCreate_function_stmt(GreenPlumParser::Create_function_stmtContext * /*ctx*/) override { }

  virtual void enterOpt_or_replace(GreenPlumParser::Opt_or_replaceContext * /*ctx*/) override { }
  virtual void exitOpt_or_replace(GreenPlumParser::Opt_or_replaceContext * /*ctx*/) override { }

  virtual void enterFunc_args(GreenPlumParser::Func_argsContext * /*ctx*/) override { }
  virtual void exitFunc_args(GreenPlumParser::Func_argsContext * /*ctx*/) override { }

  virtual void enterFunc_args_list(GreenPlumParser::Func_args_listContext * /*ctx*/) override { }
  virtual void exitFunc_args_list(GreenPlumParser::Func_args_listContext * /*ctx*/) override { }

  virtual void enterFunc_args_with_defaults(GreenPlumParser::Func_args_with_defaultsContext * /*ctx*/) override { }
  virtual void exitFunc_args_with_defaults(GreenPlumParser::Func_args_with_defaultsContext * /*ctx*/) override { }

  virtual void enterFunc_args_with_defaults_list(GreenPlumParser::Func_args_with_defaults_listContext * /*ctx*/) override { }
  virtual void exitFunc_args_with_defaults_list(GreenPlumParser::Func_args_with_defaults_listContext * /*ctx*/) override { }

  virtual void enterFunc_arg(GreenPlumParser::Func_argContext * /*ctx*/) override { }
  virtual void exitFunc_arg(GreenPlumParser::Func_argContext * /*ctx*/) override { }

  virtual void enterFunc_arg_with_default(GreenPlumParser::Func_arg_with_defaultContext * /*ctx*/) override { }
  virtual void exitFunc_arg_with_default(GreenPlumParser::Func_arg_with_defaultContext * /*ctx*/) override { }

  virtual void enterArg_class(GreenPlumParser::Arg_classContext * /*ctx*/) override { }
  virtual void exitArg_class(GreenPlumParser::Arg_classContext * /*ctx*/) override { }

  virtual void enterParam_name(GreenPlumParser::Param_nameContext * /*ctx*/) override { }
  virtual void exitParam_name(GreenPlumParser::Param_nameContext * /*ctx*/) override { }

  virtual void enterFunc_return(GreenPlumParser::Func_returnContext * /*ctx*/) override { }
  virtual void exitFunc_return(GreenPlumParser::Func_returnContext * /*ctx*/) override { }

  virtual void enterFunc_type(GreenPlumParser::Func_typeContext * /*ctx*/) override { }
  virtual void exitFunc_type(GreenPlumParser::Func_typeContext * /*ctx*/) override { }

  virtual void enterFunc_type_table_option_list(GreenPlumParser::Func_type_table_option_listContext * /*ctx*/) override { }
  virtual void exitFunc_type_table_option_list(GreenPlumParser::Func_type_table_option_listContext * /*ctx*/) override { }

  virtual void enterFunc_type_table_option(GreenPlumParser::Func_type_table_optionContext * /*ctx*/) override { }
  virtual void exitFunc_type_table_option(GreenPlumParser::Func_type_table_optionContext * /*ctx*/) override { }

  virtual void enterCreatefunc_opt_list(GreenPlumParser::Createfunc_opt_listContext * /*ctx*/) override { }
  virtual void exitCreatefunc_opt_list(GreenPlumParser::Createfunc_opt_listContext * /*ctx*/) override { }

  virtual void enterCommon_func_opt_item(GreenPlumParser::Common_func_opt_itemContext * /*ctx*/) override { }
  virtual void exitCommon_func_opt_item(GreenPlumParser::Common_func_opt_itemContext * /*ctx*/) override { }

  virtual void enterCreatefunc_opt_item(GreenPlumParser::Createfunc_opt_itemContext * /*ctx*/) override { }
  virtual void exitCreatefunc_opt_item(GreenPlumParser::Createfunc_opt_itemContext * /*ctx*/) override { }

  virtual void enterFunc_as(GreenPlumParser::Func_asContext * /*ctx*/) override { }
  virtual void exitFunc_as(GreenPlumParser::Func_asContext * /*ctx*/) override { }

  virtual void enterTable_func_column(GreenPlumParser::Table_func_columnContext * /*ctx*/) override { }
  virtual void exitTable_func_column(GreenPlumParser::Table_func_columnContext * /*ctx*/) override { }

  virtual void enterTable_func_column_list(GreenPlumParser::Table_func_column_listContext * /*ctx*/) override { }
  virtual void exitTable_func_column_list(GreenPlumParser::Table_func_column_listContext * /*ctx*/) override { }

  virtual void enterAlter_function_stmt(GreenPlumParser::Alter_function_stmtContext * /*ctx*/) override { }
  virtual void exitAlter_function_stmt(GreenPlumParser::Alter_function_stmtContext * /*ctx*/) override { }

  virtual void enterAlterfunc_opt_list(GreenPlumParser::Alterfunc_opt_listContext * /*ctx*/) override { }
  virtual void exitAlterfunc_opt_list(GreenPlumParser::Alterfunc_opt_listContext * /*ctx*/) override { }

  virtual void enterRemove_func_stmt(GreenPlumParser::Remove_func_stmtContext * /*ctx*/) override { }
  virtual void exitRemove_func_stmt(GreenPlumParser::Remove_func_stmtContext * /*ctx*/) override { }

  virtual void enterRemove_aggr_stmt(GreenPlumParser::Remove_aggr_stmtContext * /*ctx*/) override { }
  virtual void exitRemove_aggr_stmt(GreenPlumParser::Remove_aggr_stmtContext * /*ctx*/) override { }

  virtual void enterRemove_oper_stmt(GreenPlumParser::Remove_oper_stmtContext * /*ctx*/) override { }
  virtual void exitRemove_oper_stmt(GreenPlumParser::Remove_oper_stmtContext * /*ctx*/) override { }

  virtual void enterOper_argtypes(GreenPlumParser::Oper_argtypesContext * /*ctx*/) override { }
  virtual void exitOper_argtypes(GreenPlumParser::Oper_argtypesContext * /*ctx*/) override { }

  virtual void enterAny_operator(GreenPlumParser::Any_operatorContext * /*ctx*/) override { }
  virtual void exitAny_operator(GreenPlumParser::Any_operatorContext * /*ctx*/) override { }

  virtual void enterDo_stmt(GreenPlumParser::Do_stmtContext * /*ctx*/) override { }
  virtual void exitDo_stmt(GreenPlumParser::Do_stmtContext * /*ctx*/) override { }

  virtual void enterDostmt_opt_item(GreenPlumParser::Dostmt_opt_itemContext * /*ctx*/) override { }
  virtual void exitDostmt_opt_item(GreenPlumParser::Dostmt_opt_itemContext * /*ctx*/) override { }

  virtual void enterCreate_cast_stmt(GreenPlumParser::Create_cast_stmtContext * /*ctx*/) override { }
  virtual void exitCreate_cast_stmt(GreenPlumParser::Create_cast_stmtContext * /*ctx*/) override { }

  virtual void enterCast_context(GreenPlumParser::Cast_contextContext * /*ctx*/) override { }
  virtual void exitCast_context(GreenPlumParser::Cast_contextContext * /*ctx*/) override { }

  virtual void enterDrop_cast_stmt(GreenPlumParser::Drop_cast_stmtContext * /*ctx*/) override { }
  virtual void exitDrop_cast_stmt(GreenPlumParser::Drop_cast_stmtContext * /*ctx*/) override { }

  virtual void enterReindex_stmt(GreenPlumParser::Reindex_stmtContext * /*ctx*/) override { }
  virtual void exitReindex_stmt(GreenPlumParser::Reindex_stmtContext * /*ctx*/) override { }

  virtual void enterAlter_type_stmt(GreenPlumParser::Alter_type_stmtContext * /*ctx*/) override { }
  virtual void exitAlter_type_stmt(GreenPlumParser::Alter_type_stmtContext * /*ctx*/) override { }

  virtual void enterRename_stmt(GreenPlumParser::Rename_stmtContext * /*ctx*/) override { }
  virtual void exitRename_stmt(GreenPlumParser::Rename_stmtContext * /*ctx*/) override { }

  virtual void enterOpt_column(GreenPlumParser::Opt_columnContext * /*ctx*/) override { }
  virtual void exitOpt_column(GreenPlumParser::Opt_columnContext * /*ctx*/) override { }

  virtual void enterAlter_object_schema_stmt(GreenPlumParser::Alter_object_schema_stmtContext * /*ctx*/) override { }
  virtual void exitAlter_object_schema_stmt(GreenPlumParser::Alter_object_schema_stmtContext * /*ctx*/) override { }

  virtual void enterAlter_owner_stmt(GreenPlumParser::Alter_owner_stmtContext * /*ctx*/) override { }
  virtual void exitAlter_owner_stmt(GreenPlumParser::Alter_owner_stmtContext * /*ctx*/) override { }

  virtual void enterRule_stmt(GreenPlumParser::Rule_stmtContext * /*ctx*/) override { }
  virtual void exitRule_stmt(GreenPlumParser::Rule_stmtContext * /*ctx*/) override { }

  virtual void enterRule_action_list(GreenPlumParser::Rule_action_listContext * /*ctx*/) override { }
  virtual void exitRule_action_list(GreenPlumParser::Rule_action_listContext * /*ctx*/) override { }

  virtual void enterRule_action_multi(GreenPlumParser::Rule_action_multiContext * /*ctx*/) override { }
  virtual void exitRule_action_multi(GreenPlumParser::Rule_action_multiContext * /*ctx*/) override { }

  virtual void enterRule_action_stmt(GreenPlumParser::Rule_action_stmtContext * /*ctx*/) override { }
  virtual void exitRule_action_stmt(GreenPlumParser::Rule_action_stmtContext * /*ctx*/) override { }

  virtual void enterEvent(GreenPlumParser::EventContext * /*ctx*/) override { }
  virtual void exitEvent(GreenPlumParser::EventContext * /*ctx*/) override { }

  virtual void enterOpt_instead(GreenPlumParser::Opt_insteadContext * /*ctx*/) override { }
  virtual void exitOpt_instead(GreenPlumParser::Opt_insteadContext * /*ctx*/) override { }

  virtual void enterDrop_rule_stmt(GreenPlumParser::Drop_rule_stmtContext * /*ctx*/) override { }
  virtual void exitDrop_rule_stmt(GreenPlumParser::Drop_rule_stmtContext * /*ctx*/) override { }

  virtual void enterNotify_stmt(GreenPlumParser::Notify_stmtContext * /*ctx*/) override { }
  virtual void exitNotify_stmt(GreenPlumParser::Notify_stmtContext * /*ctx*/) override { }

  virtual void enterListen_stmt(GreenPlumParser::Listen_stmtContext * /*ctx*/) override { }
  virtual void exitListen_stmt(GreenPlumParser::Listen_stmtContext * /*ctx*/) override { }

  virtual void enterUnlisten_stmt(GreenPlumParser::Unlisten_stmtContext * /*ctx*/) override { }
  virtual void exitUnlisten_stmt(GreenPlumParser::Unlisten_stmtContext * /*ctx*/) override { }

  virtual void enterTransaction_stmt(GreenPlumParser::Transaction_stmtContext * /*ctx*/) override { }
  virtual void exitTransaction_stmt(GreenPlumParser::Transaction_stmtContext * /*ctx*/) override { }

  virtual void enterOpt_transaction(GreenPlumParser::Opt_transactionContext * /*ctx*/) override { }
  virtual void exitOpt_transaction(GreenPlumParser::Opt_transactionContext * /*ctx*/) override { }

  virtual void enterTransaction_mode_item(GreenPlumParser::Transaction_mode_itemContext * /*ctx*/) override { }
  virtual void exitTransaction_mode_item(GreenPlumParser::Transaction_mode_itemContext * /*ctx*/) override { }

  virtual void enterTransaction_mode_list(GreenPlumParser::Transaction_mode_listContext * /*ctx*/) override { }
  virtual void exitTransaction_mode_list(GreenPlumParser::Transaction_mode_listContext * /*ctx*/) override { }

  virtual void enterView_stmt(GreenPlumParser::View_stmtContext * /*ctx*/) override { }
  virtual void exitView_stmt(GreenPlumParser::View_stmtContext * /*ctx*/) override { }

  virtual void enterOpt_check_option(GreenPlumParser::Opt_check_optionContext * /*ctx*/) override { }
  virtual void exitOpt_check_option(GreenPlumParser::Opt_check_optionContext * /*ctx*/) override { }

  virtual void enterLoad_stmt(GreenPlumParser::Load_stmtContext * /*ctx*/) override { }
  virtual void exitLoad_stmt(GreenPlumParser::Load_stmtContext * /*ctx*/) override { }

  virtual void enterCreatedb_stmt(GreenPlumParser::Createdb_stmtContext * /*ctx*/) override { }
  virtual void exitCreatedb_stmt(GreenPlumParser::Createdb_stmtContext * /*ctx*/) override { }

  virtual void enterCreatedb_opt_item(GreenPlumParser::Createdb_opt_itemContext * /*ctx*/) override { }
  virtual void exitCreatedb_opt_item(GreenPlumParser::Createdb_opt_itemContext * /*ctx*/) override { }

  virtual void enterAlter_database_stmt(GreenPlumParser::Alter_database_stmtContext * /*ctx*/) override { }
  virtual void exitAlter_database_stmt(GreenPlumParser::Alter_database_stmtContext * /*ctx*/) override { }

  virtual void enterAlter_database_set_stmt(GreenPlumParser::Alter_database_set_stmtContext * /*ctx*/) override { }
  virtual void exitAlter_database_set_stmt(GreenPlumParser::Alter_database_set_stmtContext * /*ctx*/) override { }

  virtual void enterAlterdb_opt_item(GreenPlumParser::Alterdb_opt_itemContext * /*ctx*/) override { }
  virtual void exitAlterdb_opt_item(GreenPlumParser::Alterdb_opt_itemContext * /*ctx*/) override { }

  virtual void enterDropdb_stmt(GreenPlumParser::Dropdb_stmtContext * /*ctx*/) override { }
  virtual void exitDropdb_stmt(GreenPlumParser::Dropdb_stmtContext * /*ctx*/) override { }

  virtual void enterCreate_domain_stmt(GreenPlumParser::Create_domain_stmtContext * /*ctx*/) override { }
  virtual void exitCreate_domain_stmt(GreenPlumParser::Create_domain_stmtContext * /*ctx*/) override { }

  virtual void enterAlter_domain_stmt(GreenPlumParser::Alter_domain_stmtContext * /*ctx*/) override { }
  virtual void exitAlter_domain_stmt(GreenPlumParser::Alter_domain_stmtContext * /*ctx*/) override { }

  virtual void enterAlter_domain_option(GreenPlumParser::Alter_domain_optionContext * /*ctx*/) override { }
  virtual void exitAlter_domain_option(GreenPlumParser::Alter_domain_optionContext * /*ctx*/) override { }

  virtual void enterAlter_tsdictionary_stmt(GreenPlumParser::Alter_tsdictionary_stmtContext * /*ctx*/) override { }
  virtual void exitAlter_tsdictionary_stmt(GreenPlumParser::Alter_tsdictionary_stmtContext * /*ctx*/) override { }

  virtual void enterAlter_tsconfiguration_stmt(GreenPlumParser::Alter_tsconfiguration_stmtContext * /*ctx*/) override { }
  virtual void exitAlter_tsconfiguration_stmt(GreenPlumParser::Alter_tsconfiguration_stmtContext * /*ctx*/) override { }

  virtual void enterAlter_txt_search_conf_option(GreenPlumParser::Alter_txt_search_conf_optionContext * /*ctx*/) override { }
  virtual void exitAlter_txt_search_conf_option(GreenPlumParser::Alter_txt_search_conf_optionContext * /*ctx*/) override { }

  virtual void enterCreate_conversion_stmt(GreenPlumParser::Create_conversion_stmtContext * /*ctx*/) override { }
  virtual void exitCreate_conversion_stmt(GreenPlumParser::Create_conversion_stmtContext * /*ctx*/) override { }

  virtual void enterCluster_stmt(GreenPlumParser::Cluster_stmtContext * /*ctx*/) override { }
  virtual void exitCluster_stmt(GreenPlumParser::Cluster_stmtContext * /*ctx*/) override { }

  virtual void enterCluster_option(GreenPlumParser::Cluster_optionContext * /*ctx*/) override { }
  virtual void exitCluster_option(GreenPlumParser::Cluster_optionContext * /*ctx*/) override { }

  virtual void enterVacuum_stmt(GreenPlumParser::Vacuum_stmtContext * /*ctx*/) override { }
  virtual void exitVacuum_stmt(GreenPlumParser::Vacuum_stmtContext * /*ctx*/) override { }

  virtual void enterAnalyze_stmt(GreenPlumParser::Analyze_stmtContext * /*ctx*/) override { }
  virtual void exitAnalyze_stmt(GreenPlumParser::Analyze_stmtContext * /*ctx*/) override { }

  virtual void enterAnalyze_keyword(GreenPlumParser::Analyze_keywordContext * /*ctx*/) override { }
  virtual void exitAnalyze_keyword(GreenPlumParser::Analyze_keywordContext * /*ctx*/) override { }

  virtual void enterParen_name_list(GreenPlumParser::Paren_name_listContext * /*ctx*/) override { }
  virtual void exitParen_name_list(GreenPlumParser::Paren_name_listContext * /*ctx*/) override { }

  virtual void enterExplain_stmt(GreenPlumParser::Explain_stmtContext * /*ctx*/) override { }
  virtual void exitExplain_stmt(GreenPlumParser::Explain_stmtContext * /*ctx*/) override { }

  virtual void enterExplainable_stmt(GreenPlumParser::Explainable_stmtContext * /*ctx*/) override { }
  virtual void exitExplainable_stmt(GreenPlumParser::Explainable_stmtContext * /*ctx*/) override { }

  virtual void enterPrepare_stmt(GreenPlumParser::Prepare_stmtContext * /*ctx*/) override { }
  virtual void exitPrepare_stmt(GreenPlumParser::Prepare_stmtContext * /*ctx*/) override { }

  virtual void enterParen_type_list(GreenPlumParser::Paren_type_listContext * /*ctx*/) override { }
  virtual void exitParen_type_list(GreenPlumParser::Paren_type_listContext * /*ctx*/) override { }

  virtual void enterPreparable_stmt(GreenPlumParser::Preparable_stmtContext * /*ctx*/) override { }
  virtual void exitPreparable_stmt(GreenPlumParser::Preparable_stmtContext * /*ctx*/) override { }

  virtual void enterExecute_stmt(GreenPlumParser::Execute_stmtContext * /*ctx*/) override { }
  virtual void exitExecute_stmt(GreenPlumParser::Execute_stmtContext * /*ctx*/) override { }

  virtual void enterDeallocate_stmt(GreenPlumParser::Deallocate_stmtContext * /*ctx*/) override { }
  virtual void exitDeallocate_stmt(GreenPlumParser::Deallocate_stmtContext * /*ctx*/) override { }

  virtual void enterCdb_string_list(GreenPlumParser::Cdb_string_listContext * /*ctx*/) override { }
  virtual void exitCdb_string_list(GreenPlumParser::Cdb_string_listContext * /*ctx*/) override { }

  virtual void enterCdb_string(GreenPlumParser::Cdb_stringContext * /*ctx*/) override { }
  virtual void exitCdb_string(GreenPlumParser::Cdb_stringContext * /*ctx*/) override { }

  virtual void enterInsert_stmt(GreenPlumParser::Insert_stmtContext * /*ctx*/) override { }
  virtual void exitInsert_stmt(GreenPlumParser::Insert_stmtContext * /*ctx*/) override { }

  virtual void enterInsert_rest(GreenPlumParser::Insert_restContext * /*ctx*/) override { }
  virtual void exitInsert_rest(GreenPlumParser::Insert_restContext * /*ctx*/) override { }

  virtual void enterInsert_column_list(GreenPlumParser::Insert_column_listContext * /*ctx*/) override { }
  virtual void exitInsert_column_list(GreenPlumParser::Insert_column_listContext * /*ctx*/) override { }

  virtual void enterInsert_column_item(GreenPlumParser::Insert_column_itemContext * /*ctx*/) override { }
  virtual void exitInsert_column_item(GreenPlumParser::Insert_column_itemContext * /*ctx*/) override { }

  virtual void enterReturning_clause(GreenPlumParser::Returning_clauseContext * /*ctx*/) override { }
  virtual void exitReturning_clause(GreenPlumParser::Returning_clauseContext * /*ctx*/) override { }

  virtual void enterDelete_stmt(GreenPlumParser::Delete_stmtContext * /*ctx*/) override { }
  virtual void exitDelete_stmt(GreenPlumParser::Delete_stmtContext * /*ctx*/) override { }

  virtual void enterLock_stmt(GreenPlumParser::Lock_stmtContext * /*ctx*/) override { }
  virtual void exitLock_stmt(GreenPlumParser::Lock_stmtContext * /*ctx*/) override { }

  virtual void enterOpt_lock(GreenPlumParser::Opt_lockContext * /*ctx*/) override { }
  virtual void exitOpt_lock(GreenPlumParser::Opt_lockContext * /*ctx*/) override { }

  virtual void enterLock_type(GreenPlumParser::Lock_typeContext * /*ctx*/) override { }
  virtual void exitLock_type(GreenPlumParser::Lock_typeContext * /*ctx*/) override { }

  virtual void enterUpdate_stmt(GreenPlumParser::Update_stmtContext * /*ctx*/) override { }
  virtual void exitUpdate_stmt(GreenPlumParser::Update_stmtContext * /*ctx*/) override { }

  virtual void enterSet_clause_list(GreenPlumParser::Set_clause_listContext * /*ctx*/) override { }
  virtual void exitSet_clause_list(GreenPlumParser::Set_clause_listContext * /*ctx*/) override { }

  virtual void enterSet_clause(GreenPlumParser::Set_clauseContext * /*ctx*/) override { }
  virtual void exitSet_clause(GreenPlumParser::Set_clauseContext * /*ctx*/) override { }

  virtual void enterSingle_set_clause(GreenPlumParser::Single_set_clauseContext * /*ctx*/) override { }
  virtual void exitSingle_set_clause(GreenPlumParser::Single_set_clauseContext * /*ctx*/) override { }

  virtual void enterMultiple_set_clause(GreenPlumParser::Multiple_set_clauseContext * /*ctx*/) override { }
  virtual void exitMultiple_set_clause(GreenPlumParser::Multiple_set_clauseContext * /*ctx*/) override { }

  virtual void enterSet_target(GreenPlumParser::Set_targetContext * /*ctx*/) override { }
  virtual void exitSet_target(GreenPlumParser::Set_targetContext * /*ctx*/) override { }

  virtual void enterSet_target_list(GreenPlumParser::Set_target_listContext * /*ctx*/) override { }
  virtual void exitSet_target_list(GreenPlumParser::Set_target_listContext * /*ctx*/) override { }

  virtual void enterDeclare_cursor_stmt(GreenPlumParser::Declare_cursor_stmtContext * /*ctx*/) override { }
  virtual void exitDeclare_cursor_stmt(GreenPlumParser::Declare_cursor_stmtContext * /*ctx*/) override { }

  virtual void enterCursor_option(GreenPlumParser::Cursor_optionContext * /*ctx*/) override { }
  virtual void exitCursor_option(GreenPlumParser::Cursor_optionContext * /*ctx*/) override { }

  virtual void enterOpt_hold(GreenPlumParser::Opt_holdContext * /*ctx*/) override { }
  virtual void exitOpt_hold(GreenPlumParser::Opt_holdContext * /*ctx*/) override { }

  virtual void enterSelect_stmt(GreenPlumParser::Select_stmtContext * /*ctx*/) override { }
  virtual void exitSelect_stmt(GreenPlumParser::Select_stmtContext * /*ctx*/) override { }

  virtual void enterSubquery_basic_elements(GreenPlumParser::Subquery_basic_elementsContext * /*ctx*/) override { }
  virtual void exitSubquery_basic_elements(GreenPlumParser::Subquery_basic_elementsContext * /*ctx*/) override { }

  virtual void enterSubquery_operation_part(GreenPlumParser::Subquery_operation_partContext * /*ctx*/) override { }
  virtual void exitSubquery_operation_part(GreenPlumParser::Subquery_operation_partContext * /*ctx*/) override { }

  virtual void enterSelect_with_parens(GreenPlumParser::Select_with_parensContext * /*ctx*/) override { }
  virtual void exitSelect_with_parens(GreenPlumParser::Select_with_parensContext * /*ctx*/) override { }

  virtual void enterSelect_no_parens(GreenPlumParser::Select_no_parensContext * /*ctx*/) override { }
  virtual void exitSelect_no_parens(GreenPlumParser::Select_no_parensContext * /*ctx*/) override { }

  virtual void enterSimple_select(GreenPlumParser::Simple_selectContext * /*ctx*/) override { }
  virtual void exitSimple_select(GreenPlumParser::Simple_selectContext * /*ctx*/) override { }

  virtual void enterWith_clause(GreenPlumParser::With_clauseContext * /*ctx*/) override { }
  virtual void exitWith_clause(GreenPlumParser::With_clauseContext * /*ctx*/) override { }

  virtual void enterCte_list(GreenPlumParser::Cte_listContext * /*ctx*/) override { }
  virtual void exitCte_list(GreenPlumParser::Cte_listContext * /*ctx*/) override { }

  virtual void enterCommon_table_expr(GreenPlumParser::Common_table_exprContext * /*ctx*/) override { }
  virtual void exitCommon_table_expr(GreenPlumParser::Common_table_exprContext * /*ctx*/) override { }

  virtual void enterInto_clause(GreenPlumParser::Into_clauseContext * /*ctx*/) override { }
  virtual void exitInto_clause(GreenPlumParser::Into_clauseContext * /*ctx*/) override { }

  virtual void enterOpt_tempTableName(GreenPlumParser::Opt_tempTableNameContext * /*ctx*/) override { }
  virtual void exitOpt_tempTableName(GreenPlumParser::Opt_tempTableNameContext * /*ctx*/) override { }

  virtual void enterOpt_distinct(GreenPlumParser::Opt_distinctContext * /*ctx*/) override { }
  virtual void exitOpt_distinct(GreenPlumParser::Opt_distinctContext * /*ctx*/) override { }

  virtual void enterSort_clause(GreenPlumParser::Sort_clauseContext * /*ctx*/) override { }
  virtual void exitSort_clause(GreenPlumParser::Sort_clauseContext * /*ctx*/) override { }

  virtual void enterSortby_list(GreenPlumParser::Sortby_listContext * /*ctx*/) override { }
  virtual void exitSortby_list(GreenPlumParser::Sortby_listContext * /*ctx*/) override { }

  virtual void enterSortby(GreenPlumParser::SortbyContext * /*ctx*/) override { }
  virtual void exitSortby(GreenPlumParser::SortbyContext * /*ctx*/) override { }

  virtual void enterSelect_limit(GreenPlumParser::Select_limitContext * /*ctx*/) override { }
  virtual void exitSelect_limit(GreenPlumParser::Select_limitContext * /*ctx*/) override { }

  virtual void enterSelect_limit_value(GreenPlumParser::Select_limit_valueContext * /*ctx*/) override { }
  virtual void exitSelect_limit_value(GreenPlumParser::Select_limit_valueContext * /*ctx*/) override { }

  virtual void enterOpt_select_fetch_first_value(GreenPlumParser::Opt_select_fetch_first_valueContext * /*ctx*/) override { }
  virtual void exitOpt_select_fetch_first_value(GreenPlumParser::Opt_select_fetch_first_valueContext * /*ctx*/) override { }

  virtual void enterSelect_offset_value(GreenPlumParser::Select_offset_valueContext * /*ctx*/) override { }
  virtual void exitSelect_offset_value(GreenPlumParser::Select_offset_valueContext * /*ctx*/) override { }

  virtual void enterSelect_offset_value2(GreenPlumParser::Select_offset_value2Context * /*ctx*/) override { }
  virtual void exitSelect_offset_value2(GreenPlumParser::Select_offset_value2Context * /*ctx*/) override { }

  virtual void enterRow_or_rows(GreenPlumParser::Row_or_rowsContext * /*ctx*/) override { }
  virtual void exitRow_or_rows(GreenPlumParser::Row_or_rowsContext * /*ctx*/) override { }

  virtual void enterFirst_or_next(GreenPlumParser::First_or_nextContext * /*ctx*/) override { }
  virtual void exitFirst_or_next(GreenPlumParser::First_or_nextContext * /*ctx*/) override { }

  virtual void enterGroup_clause(GreenPlumParser::Group_clauseContext * /*ctx*/) override { }
  virtual void exitGroup_clause(GreenPlumParser::Group_clauseContext * /*ctx*/) override { }

  virtual void enterGroup_elem_list(GreenPlumParser::Group_elem_listContext * /*ctx*/) override { }
  virtual void exitGroup_elem_list(GreenPlumParser::Group_elem_listContext * /*ctx*/) override { }

  virtual void enterGroup_elem(GreenPlumParser::Group_elemContext * /*ctx*/) override { }
  virtual void exitGroup_elem(GreenPlumParser::Group_elemContext * /*ctx*/) override { }

  virtual void enterHaving_clause(GreenPlumParser::Having_clauseContext * /*ctx*/) override { }
  virtual void exitHaving_clause(GreenPlumParser::Having_clauseContext * /*ctx*/) override { }

  virtual void enterFor_locking_clause(GreenPlumParser::For_locking_clauseContext * /*ctx*/) override { }
  virtual void exitFor_locking_clause(GreenPlumParser::For_locking_clauseContext * /*ctx*/) override { }

  virtual void enterFor_locking_item(GreenPlumParser::For_locking_itemContext * /*ctx*/) override { }
  virtual void exitFor_locking_item(GreenPlumParser::For_locking_itemContext * /*ctx*/) override { }

  virtual void enterLocked_rels_list(GreenPlumParser::Locked_rels_listContext * /*ctx*/) override { }
  virtual void exitLocked_rels_list(GreenPlumParser::Locked_rels_listContext * /*ctx*/) override { }

  virtual void enterValues_clause(GreenPlumParser::Values_clauseContext * /*ctx*/) override { }
  virtual void exitValues_clause(GreenPlumParser::Values_clauseContext * /*ctx*/) override { }

  virtual void enterFrom_clause(GreenPlumParser::From_clauseContext * /*ctx*/) override { }
  virtual void exitFrom_clause(GreenPlumParser::From_clauseContext * /*ctx*/) override { }

  virtual void enterFrom_list(GreenPlumParser::From_listContext * /*ctx*/) override { }
  virtual void exitFrom_list(GreenPlumParser::From_listContext * /*ctx*/) override { }

  virtual void enterTable_ref_subquery(GreenPlumParser::Table_ref_subqueryContext * /*ctx*/) override { }
  virtual void exitTable_ref_subquery(GreenPlumParser::Table_ref_subqueryContext * /*ctx*/) override { }

  virtual void enterTable_ref_parens(GreenPlumParser::Table_ref_parensContext * /*ctx*/) override { }
  virtual void exitTable_ref_parens(GreenPlumParser::Table_ref_parensContext * /*ctx*/) override { }

  virtual void enterTable_ref_normal(GreenPlumParser::Table_ref_normalContext * /*ctx*/) override { }
  virtual void exitTable_ref_normal(GreenPlumParser::Table_ref_normalContext * /*ctx*/) override { }

  virtual void enterTable_ref_func2(GreenPlumParser::Table_ref_func2Context * /*ctx*/) override { }
  virtual void exitTable_ref_func2(GreenPlumParser::Table_ref_func2Context * /*ctx*/) override { }

  virtual void enterTable_ref_func1(GreenPlumParser::Table_ref_func1Context * /*ctx*/) override { }
  virtual void exitTable_ref_func1(GreenPlumParser::Table_ref_func1Context * /*ctx*/) override { }

  virtual void enterTable_ref_joinable(GreenPlumParser::Table_ref_joinableContext * /*ctx*/) override { }
  virtual void exitTable_ref_joinable(GreenPlumParser::Table_ref_joinableContext * /*ctx*/) override { }

  virtual void enterJoin_type(GreenPlumParser::Join_typeContext * /*ctx*/) override { }
  virtual void exitJoin_type(GreenPlumParser::Join_typeContext * /*ctx*/) override { }

  virtual void enterJoin_qual(GreenPlumParser::Join_qualContext * /*ctx*/) override { }
  virtual void exitJoin_qual(GreenPlumParser::Join_qualContext * /*ctx*/) override { }

  virtual void enterRelation_expr(GreenPlumParser::Relation_exprContext * /*ctx*/) override { }
  virtual void exitRelation_expr(GreenPlumParser::Relation_exprContext * /*ctx*/) override { }

  virtual void enterRelation_expr_opt_alias(GreenPlumParser::Relation_expr_opt_aliasContext * /*ctx*/) override { }
  virtual void exitRelation_expr_opt_alias(GreenPlumParser::Relation_expr_opt_aliasContext * /*ctx*/) override { }

  virtual void enterFunc_table(GreenPlumParser::Func_tableContext * /*ctx*/) override { }
  virtual void exitFunc_table(GreenPlumParser::Func_tableContext * /*ctx*/) override { }

  virtual void enterWhere_clause(GreenPlumParser::Where_clauseContext * /*ctx*/) override { }
  virtual void exitWhere_clause(GreenPlumParser::Where_clauseContext * /*ctx*/) override { }

  virtual void enterWhere_or_current_clause(GreenPlumParser::Where_or_current_clauseContext * /*ctx*/) override { }
  virtual void exitWhere_or_current_clause(GreenPlumParser::Where_or_current_clauseContext * /*ctx*/) override { }

  virtual void enterTable_func_element_list(GreenPlumParser::Table_func_element_listContext * /*ctx*/) override { }
  virtual void exitTable_func_element_list(GreenPlumParser::Table_func_element_listContext * /*ctx*/) override { }

  virtual void enterTable_func_element(GreenPlumParser::Table_func_elementContext * /*ctx*/) override { }
  virtual void exitTable_func_element(GreenPlumParser::Table_func_elementContext * /*ctx*/) override { }

  virtual void enterTypename_pg(GreenPlumParser::Typename_pgContext * /*ctx*/) override { }
  virtual void exitTypename_pg(GreenPlumParser::Typename_pgContext * /*ctx*/) override { }

  virtual void enterOpt_array_bounds(GreenPlumParser::Opt_array_boundsContext * /*ctx*/) override { }
  virtual void exitOpt_array_bounds(GreenPlumParser::Opt_array_boundsContext * /*ctx*/) override { }

  virtual void enterSimple_typename(GreenPlumParser::Simple_typenameContext * /*ctx*/) override { }
  virtual void exitSimple_typename(GreenPlumParser::Simple_typenameContext * /*ctx*/) override { }

  virtual void enterConst_typename(GreenPlumParser::Const_typenameContext * /*ctx*/) override { }
  virtual void exitConst_typename(GreenPlumParser::Const_typenameContext * /*ctx*/) override { }

  virtual void enterGeneric_type(GreenPlumParser::Generic_typeContext * /*ctx*/) override { }
  virtual void exitGeneric_type(GreenPlumParser::Generic_typeContext * /*ctx*/) override { }

  virtual void enterNumeric(GreenPlumParser::NumericContext * /*ctx*/) override { }
  virtual void exitNumeric(GreenPlumParser::NumericContext * /*ctx*/) override { }

  virtual void enterBit(GreenPlumParser::BitContext * /*ctx*/) override { }
  virtual void exitBit(GreenPlumParser::BitContext * /*ctx*/) override { }

  virtual void enterConst_bit(GreenPlumParser::Const_bitContext * /*ctx*/) override { }
  virtual void exitConst_bit(GreenPlumParser::Const_bitContext * /*ctx*/) override { }

  virtual void enterBit_with_length(GreenPlumParser::Bit_with_lengthContext * /*ctx*/) override { }
  virtual void exitBit_with_length(GreenPlumParser::Bit_with_lengthContext * /*ctx*/) override { }

  virtual void enterBit_without_length(GreenPlumParser::Bit_without_lengthContext * /*ctx*/) override { }
  virtual void exitBit_without_length(GreenPlumParser::Bit_without_lengthContext * /*ctx*/) override { }

  virtual void enterMulti_character(GreenPlumParser::Multi_characterContext * /*ctx*/) override { }
  virtual void exitMulti_character(GreenPlumParser::Multi_characterContext * /*ctx*/) override { }

  virtual void enterConst_character(GreenPlumParser::Const_characterContext * /*ctx*/) override { }
  virtual void exitConst_character(GreenPlumParser::Const_characterContext * /*ctx*/) override { }

  virtual void enterCharacter_with_length(GreenPlumParser::Character_with_lengthContext * /*ctx*/) override { }
  virtual void exitCharacter_with_length(GreenPlumParser::Character_with_lengthContext * /*ctx*/) override { }

  virtual void enterCharacter_without_length(GreenPlumParser::Character_without_lengthContext * /*ctx*/) override { }
  virtual void exitCharacter_without_length(GreenPlumParser::Character_without_lengthContext * /*ctx*/) override { }

  virtual void enterCharacter(GreenPlumParser::CharacterContext * /*ctx*/) override { }
  virtual void exitCharacter(GreenPlumParser::CharacterContext * /*ctx*/) override { }

  virtual void enterOpt_charset(GreenPlumParser::Opt_charsetContext * /*ctx*/) override { }
  virtual void exitOpt_charset(GreenPlumParser::Opt_charsetContext * /*ctx*/) override { }

  virtual void enterConst_datatime(GreenPlumParser::Const_datatimeContext * /*ctx*/) override { }
  virtual void exitConst_datatime(GreenPlumParser::Const_datatimeContext * /*ctx*/) override { }

  virtual void enterConst_interval(GreenPlumParser::Const_intervalContext * /*ctx*/) override { }
  virtual void exitConst_interval(GreenPlumParser::Const_intervalContext * /*ctx*/) override { }

  virtual void enterOpt_timezone(GreenPlumParser::Opt_timezoneContext * /*ctx*/) override { }
  virtual void exitOpt_timezone(GreenPlumParser::Opt_timezoneContext * /*ctx*/) override { }

  virtual void enterOpt_interval(GreenPlumParser::Opt_intervalContext * /*ctx*/) override { }
  virtual void exitOpt_interval(GreenPlumParser::Opt_intervalContext * /*ctx*/) override { }

  virtual void enterA_expr(GreenPlumParser::A_exprContext * /*ctx*/) override { }
  virtual void exitA_expr(GreenPlumParser::A_exprContext * /*ctx*/) override { }

  virtual void enterLogical_expr(GreenPlumParser::Logical_exprContext * /*ctx*/) override { }
  virtual void exitLogical_expr(GreenPlumParser::Logical_exprContext * /*ctx*/) override { }

  virtual void enterMultiset_expr(GreenPlumParser::Multiset_exprContext * /*ctx*/) override { }
  virtual void exitMultiset_expr(GreenPlumParser::Multiset_exprContext * /*ctx*/) override { }

  virtual void enterRelational_expr(GreenPlumParser::Relational_exprContext * /*ctx*/) override { }
  virtual void exitRelational_expr(GreenPlumParser::Relational_exprContext * /*ctx*/) override { }

  virtual void enterRelational_op(GreenPlumParser::Relational_opContext * /*ctx*/) override { }
  virtual void exitRelational_op(GreenPlumParser::Relational_opContext * /*ctx*/) override { }

  virtual void enterCompound_expr(GreenPlumParser::Compound_exprContext * /*ctx*/) override { }
  virtual void exitCompound_expr(GreenPlumParser::Compound_exprContext * /*ctx*/) override { }

  virtual void enterBetween_elements(GreenPlumParser::Between_elementsContext * /*ctx*/) override { }
  virtual void exitBetween_elements(GreenPlumParser::Between_elementsContext * /*ctx*/) override { }

  virtual void enterConcatenation_list(GreenPlumParser::Concatenation_listContext * /*ctx*/) override { }
  virtual void exitConcatenation_list(GreenPlumParser::Concatenation_listContext * /*ctx*/) override { }

  virtual void enterConcatenation(GreenPlumParser::ConcatenationContext * /*ctx*/) override { }
  virtual void exitConcatenation(GreenPlumParser::ConcatenationContext * /*ctx*/) override { }

  virtual void enterModel_expr(GreenPlumParser::Model_exprContext * /*ctx*/) override { }
  virtual void exitModel_expr(GreenPlumParser::Model_exprContext * /*ctx*/) override { }

  virtual void enterUnary_expr(GreenPlumParser::Unary_exprContext * /*ctx*/) override { }
  virtual void exitUnary_expr(GreenPlumParser::Unary_exprContext * /*ctx*/) override { }

  virtual void enterC_expr(GreenPlumParser::C_exprContext * /*ctx*/) override { }
  virtual void exitC_expr(GreenPlumParser::C_exprContext * /*ctx*/) override { }

  virtual void enterScatter_clause(GreenPlumParser::Scatter_clauseContext * /*ctx*/) override { }
  virtual void exitScatter_clause(GreenPlumParser::Scatter_clauseContext * /*ctx*/) override { }

  virtual void enterTable_value_select_clause(GreenPlumParser::Table_value_select_clauseContext * /*ctx*/) override { }
  virtual void exitTable_value_select_clause(GreenPlumParser::Table_value_select_clauseContext * /*ctx*/) override { }

  virtual void enterSimple_func(GreenPlumParser::Simple_funcContext * /*ctx*/) override { }
  virtual void exitSimple_func(GreenPlumParser::Simple_funcContext * /*ctx*/) override { }

  virtual void enterSimple_func_params(GreenPlumParser::Simple_func_paramsContext * /*ctx*/) override { }
  virtual void exitSimple_func_params(GreenPlumParser::Simple_func_paramsContext * /*ctx*/) override { }

  virtual void enterFunc_expr(GreenPlumParser::Func_exprContext * /*ctx*/) override { }
  virtual void exitFunc_expr(GreenPlumParser::Func_exprContext * /*ctx*/) override { }

  virtual void enterXml_root_version(GreenPlumParser::Xml_root_versionContext * /*ctx*/) override { }
  virtual void exitXml_root_version(GreenPlumParser::Xml_root_versionContext * /*ctx*/) override { }

  virtual void enterOpt_xml_root_standalone(GreenPlumParser::Opt_xml_root_standaloneContext * /*ctx*/) override { }
  virtual void exitOpt_xml_root_standalone(GreenPlumParser::Opt_xml_root_standaloneContext * /*ctx*/) override { }

  virtual void enterXml_attributes(GreenPlumParser::Xml_attributesContext * /*ctx*/) override { }
  virtual void exitXml_attributes(GreenPlumParser::Xml_attributesContext * /*ctx*/) override { }

  virtual void enterXml_attribute_list(GreenPlumParser::Xml_attribute_listContext * /*ctx*/) override { }
  virtual void exitXml_attribute_list(GreenPlumParser::Xml_attribute_listContext * /*ctx*/) override { }

  virtual void enterXml_attribute_el(GreenPlumParser::Xml_attribute_elContext * /*ctx*/) override { }
  virtual void exitXml_attribute_el(GreenPlumParser::Xml_attribute_elContext * /*ctx*/) override { }

  virtual void enterDocument_or_content(GreenPlumParser::Document_or_contentContext * /*ctx*/) override { }
  virtual void exitDocument_or_content(GreenPlumParser::Document_or_contentContext * /*ctx*/) override { }

  virtual void enterXml_whitespace_option(GreenPlumParser::Xml_whitespace_optionContext * /*ctx*/) override { }
  virtual void exitXml_whitespace_option(GreenPlumParser::Xml_whitespace_optionContext * /*ctx*/) override { }

  virtual void enterXmlexists_argument(GreenPlumParser::Xmlexists_argumentContext * /*ctx*/) override { }
  virtual void exitXmlexists_argument(GreenPlumParser::Xmlexists_argumentContext * /*ctx*/) override { }

  virtual void enterWindow_clause(GreenPlumParser::Window_clauseContext * /*ctx*/) override { }
  virtual void exitWindow_clause(GreenPlumParser::Window_clauseContext * /*ctx*/) override { }

  virtual void enterWindow_definition_list(GreenPlumParser::Window_definition_listContext * /*ctx*/) override { }
  virtual void exitWindow_definition_list(GreenPlumParser::Window_definition_listContext * /*ctx*/) override { }

  virtual void enterWindow_definition(GreenPlumParser::Window_definitionContext * /*ctx*/) override { }
  virtual void exitWindow_definition(GreenPlumParser::Window_definitionContext * /*ctx*/) override { }

  virtual void enterWindow_specification(GreenPlumParser::Window_specificationContext * /*ctx*/) override { }
  virtual void exitWindow_specification(GreenPlumParser::Window_specificationContext * /*ctx*/) override { }

  virtual void enterOpt_partition_clause(GreenPlumParser::Opt_partition_clauseContext * /*ctx*/) override { }
  virtual void exitOpt_partition_clause(GreenPlumParser::Opt_partition_clauseContext * /*ctx*/) override { }

  virtual void enterWindow_frame_clause(GreenPlumParser::Window_frame_clauseContext * /*ctx*/) override { }
  virtual void exitWindow_frame_clause(GreenPlumParser::Window_frame_clauseContext * /*ctx*/) override { }

  virtual void enterWindow_frame_units(GreenPlumParser::Window_frame_unitsContext * /*ctx*/) override { }
  virtual void exitWindow_frame_units(GreenPlumParser::Window_frame_unitsContext * /*ctx*/) override { }

  virtual void enterWindow_frame_extent(GreenPlumParser::Window_frame_extentContext * /*ctx*/) override { }
  virtual void exitWindow_frame_extent(GreenPlumParser::Window_frame_extentContext * /*ctx*/) override { }

  virtual void enterWindow_frame_start(GreenPlumParser::Window_frame_startContext * /*ctx*/) override { }
  virtual void exitWindow_frame_start(GreenPlumParser::Window_frame_startContext * /*ctx*/) override { }

  virtual void enterWindow_frame_between(GreenPlumParser::Window_frame_betweenContext * /*ctx*/) override { }
  virtual void exitWindow_frame_between(GreenPlumParser::Window_frame_betweenContext * /*ctx*/) override { }

  virtual void enterWindow_frame_bound(GreenPlumParser::Window_frame_boundContext * /*ctx*/) override { }
  virtual void exitWindow_frame_bound(GreenPlumParser::Window_frame_boundContext * /*ctx*/) override { }

  virtual void enterWindow_frame_exclusion(GreenPlumParser::Window_frame_exclusionContext * /*ctx*/) override { }
  virtual void exitWindow_frame_exclusion(GreenPlumParser::Window_frame_exclusionContext * /*ctx*/) override { }

  virtual void enterRow(GreenPlumParser::RowContext * /*ctx*/) override { }
  virtual void exitRow(GreenPlumParser::RowContext * /*ctx*/) override { }

  virtual void enterOp_signs(GreenPlumParser::Op_signsContext * /*ctx*/) override { }
  virtual void exitOp_signs(GreenPlumParser::Op_signsContext * /*ctx*/) override { }

  virtual void enterAll_Op(GreenPlumParser::All_OpContext * /*ctx*/) override { }
  virtual void exitAll_Op(GreenPlumParser::All_OpContext * /*ctx*/) override { }

  virtual void enterQual_Op(GreenPlumParser::Qual_OpContext * /*ctx*/) override { }
  virtual void exitQual_Op(GreenPlumParser::Qual_OpContext * /*ctx*/) override { }

  virtual void enterQual_all_Op(GreenPlumParser::Qual_all_OpContext * /*ctx*/) override { }
  virtual void exitQual_all_Op(GreenPlumParser::Qual_all_OpContext * /*ctx*/) override { }

  virtual void enterSubquery_Op(GreenPlumParser::Subquery_OpContext * /*ctx*/) override { }
  virtual void exitSubquery_Op(GreenPlumParser::Subquery_OpContext * /*ctx*/) override { }

  virtual void enterParen_expr_list(GreenPlumParser::Paren_expr_listContext * /*ctx*/) override { }
  virtual void exitParen_expr_list(GreenPlumParser::Paren_expr_listContext * /*ctx*/) override { }

  virtual void enterExpr_list(GreenPlumParser::Expr_listContext * /*ctx*/) override { }
  virtual void exitExpr_list(GreenPlumParser::Expr_listContext * /*ctx*/) override { }

  virtual void enterType_list(GreenPlumParser::Type_listContext * /*ctx*/) override { }
  virtual void exitType_list(GreenPlumParser::Type_listContext * /*ctx*/) override { }

  virtual void enterArray_expr(GreenPlumParser::Array_exprContext * /*ctx*/) override { }
  virtual void exitArray_expr(GreenPlumParser::Array_exprContext * /*ctx*/) override { }

  virtual void enterArray_expr_list(GreenPlumParser::Array_expr_listContext * /*ctx*/) override { }
  virtual void exitArray_expr_list(GreenPlumParser::Array_expr_listContext * /*ctx*/) override { }

  virtual void enterExtract_list(GreenPlumParser::Extract_listContext * /*ctx*/) override { }
  virtual void exitExtract_list(GreenPlumParser::Extract_listContext * /*ctx*/) override { }

  virtual void enterExtract_arg(GreenPlumParser::Extract_argContext * /*ctx*/) override { }
  virtual void exitExtract_arg(GreenPlumParser::Extract_argContext * /*ctx*/) override { }

  virtual void enterOverlay_list(GreenPlumParser::Overlay_listContext * /*ctx*/) override { }
  virtual void exitOverlay_list(GreenPlumParser::Overlay_listContext * /*ctx*/) override { }

  virtual void enterOverlay_placing(GreenPlumParser::Overlay_placingContext * /*ctx*/) override { }
  virtual void exitOverlay_placing(GreenPlumParser::Overlay_placingContext * /*ctx*/) override { }

  virtual void enterPosition_list(GreenPlumParser::Position_listContext * /*ctx*/) override { }
  virtual void exitPosition_list(GreenPlumParser::Position_listContext * /*ctx*/) override { }

  virtual void enterSubstr_list(GreenPlumParser::Substr_listContext * /*ctx*/) override { }
  virtual void exitSubstr_list(GreenPlumParser::Substr_listContext * /*ctx*/) override { }

  virtual void enterSubstr_from(GreenPlumParser::Substr_fromContext * /*ctx*/) override { }
  virtual void exitSubstr_from(GreenPlumParser::Substr_fromContext * /*ctx*/) override { }

  virtual void enterSubstr_for(GreenPlumParser::Substr_forContext * /*ctx*/) override { }
  virtual void exitSubstr_for(GreenPlumParser::Substr_forContext * /*ctx*/) override { }

  virtual void enterTrim_list(GreenPlumParser::Trim_listContext * /*ctx*/) override { }
  virtual void exitTrim_list(GreenPlumParser::Trim_listContext * /*ctx*/) override { }

  virtual void enterIn_expr(GreenPlumParser::In_exprContext * /*ctx*/) override { }
  virtual void exitIn_expr(GreenPlumParser::In_exprContext * /*ctx*/) override { }

  virtual void enterCase_expr(GreenPlumParser::Case_exprContext * /*ctx*/) override { }
  virtual void exitCase_expr(GreenPlumParser::Case_exprContext * /*ctx*/) override { }

  virtual void enterWhen_clause(GreenPlumParser::When_clauseContext * /*ctx*/) override { }
  virtual void exitWhen_clause(GreenPlumParser::When_clauseContext * /*ctx*/) override { }

  virtual void enterWhen_operand(GreenPlumParser::When_operandContext * /*ctx*/) override { }
  virtual void exitWhen_operand(GreenPlumParser::When_operandContext * /*ctx*/) override { }

  virtual void enterCase_default(GreenPlumParser::Case_defaultContext * /*ctx*/) override { }
  virtual void exitCase_default(GreenPlumParser::Case_defaultContext * /*ctx*/) override { }

  virtual void enterCase_arg(GreenPlumParser::Case_argContext * /*ctx*/) override { }
  virtual void exitCase_arg(GreenPlumParser::Case_argContext * /*ctx*/) override { }

  virtual void enterDecode_expr(GreenPlumParser::Decode_exprContext * /*ctx*/) override { }
  virtual void exitDecode_expr(GreenPlumParser::Decode_exprContext * /*ctx*/) override { }

  virtual void enterSearch_result(GreenPlumParser::Search_resultContext * /*ctx*/) override { }
  virtual void exitSearch_result(GreenPlumParser::Search_resultContext * /*ctx*/) override { }

  virtual void enterDecode_default(GreenPlumParser::Decode_defaultContext * /*ctx*/) override { }
  virtual void exitDecode_default(GreenPlumParser::Decode_defaultContext * /*ctx*/) override { }

  virtual void enterColumnref(GreenPlumParser::ColumnrefContext * /*ctx*/) override { }
  virtual void exitColumnref(GreenPlumParser::ColumnrefContext * /*ctx*/) override { }

  virtual void enterIndirection_el(GreenPlumParser::Indirection_elContext * /*ctx*/) override { }
  virtual void exitIndirection_el(GreenPlumParser::Indirection_elContext * /*ctx*/) override { }

  virtual void enterIndirection(GreenPlumParser::IndirectionContext * /*ctx*/) override { }
  virtual void exitIndirection(GreenPlumParser::IndirectionContext * /*ctx*/) override { }

  virtual void enterCtext_expr(GreenPlumParser::Ctext_exprContext * /*ctx*/) override { }
  virtual void exitCtext_expr(GreenPlumParser::Ctext_exprContext * /*ctx*/) override { }

  virtual void enterCtext_expr_list(GreenPlumParser::Ctext_expr_listContext * /*ctx*/) override { }
  virtual void exitCtext_expr_list(GreenPlumParser::Ctext_expr_listContext * /*ctx*/) override { }

  virtual void enterCtext_row(GreenPlumParser::Ctext_rowContext * /*ctx*/) override { }
  virtual void exitCtext_row(GreenPlumParser::Ctext_rowContext * /*ctx*/) override { }

  virtual void enterTarget_list(GreenPlumParser::Target_listContext * /*ctx*/) override { }
  virtual void exitTarget_list(GreenPlumParser::Target_listContext * /*ctx*/) override { }

  virtual void enterTarget_el_normal(GreenPlumParser::Target_el_normalContext * /*ctx*/) override { }
  virtual void exitTarget_el_normal(GreenPlumParser::Target_el_normalContext * /*ctx*/) override { }

  virtual void enterTarget_el_asterisk(GreenPlumParser::Target_el_asteriskContext * /*ctx*/) override { }
  virtual void exitTarget_el_asterisk(GreenPlumParser::Target_el_asteriskContext * /*ctx*/) override { }

  virtual void enterRelation_name(GreenPlumParser::Relation_nameContext * /*ctx*/) override { }
  virtual void exitRelation_name(GreenPlumParser::Relation_nameContext * /*ctx*/) override { }

  virtual void enterQualified_name_list(GreenPlumParser::Qualified_name_listContext * /*ctx*/) override { }
  virtual void exitQualified_name_list(GreenPlumParser::Qualified_name_listContext * /*ctx*/) override { }

  virtual void enterQualified_name(GreenPlumParser::Qualified_nameContext * /*ctx*/) override { }
  virtual void exitQualified_name(GreenPlumParser::Qualified_nameContext * /*ctx*/) override { }

  virtual void enterName_list(GreenPlumParser::Name_listContext * /*ctx*/) override { }
  virtual void exitName_list(GreenPlumParser::Name_listContext * /*ctx*/) override { }

  virtual void enterName(GreenPlumParser::NameContext * /*ctx*/) override { }
  virtual void exitName(GreenPlumParser::NameContext * /*ctx*/) override { }

  virtual void enterCte_name(GreenPlumParser::Cte_nameContext * /*ctx*/) override { }
  virtual void exitCte_name(GreenPlumParser::Cte_nameContext * /*ctx*/) override { }

  virtual void enterDatabase_name(GreenPlumParser::Database_nameContext * /*ctx*/) override { }
  virtual void exitDatabase_name(GreenPlumParser::Database_nameContext * /*ctx*/) override { }

  virtual void enterAccess_method(GreenPlumParser::Access_methodContext * /*ctx*/) override { }
  virtual void exitAccess_method(GreenPlumParser::Access_methodContext * /*ctx*/) override { }

  virtual void enterAttr_name(GreenPlumParser::Attr_nameContext * /*ctx*/) override { }
  virtual void exitAttr_name(GreenPlumParser::Attr_nameContext * /*ctx*/) override { }

  virtual void enterIndex_name(GreenPlumParser::Index_nameContext * /*ctx*/) override { }
  virtual void exitIndex_name(GreenPlumParser::Index_nameContext * /*ctx*/) override { }

  virtual void enterFile_name(GreenPlumParser::File_nameContext * /*ctx*/) override { }
  virtual void exitFile_name(GreenPlumParser::File_nameContext * /*ctx*/) override { }

  virtual void enterFunc_name(GreenPlumParser::Func_nameContext * /*ctx*/) override { }
  virtual void exitFunc_name(GreenPlumParser::Func_nameContext * /*ctx*/) override { }

  virtual void enterA_expr_const(GreenPlumParser::A_expr_constContext * /*ctx*/) override { }
  virtual void exitA_expr_const(GreenPlumParser::A_expr_constContext * /*ctx*/) override { }

  virtual void enterIconst(GreenPlumParser::IconstContext * /*ctx*/) override { }
  virtual void exitIconst(GreenPlumParser::IconstContext * /*ctx*/) override { }

  virtual void enterSconst(GreenPlumParser::SconstContext * /*ctx*/) override { }
  virtual void exitSconst(GreenPlumParser::SconstContext * /*ctx*/) override { }

  virtual void enterRole_id(GreenPlumParser::Role_idContext * /*ctx*/) override { }
  virtual void exitRole_id(GreenPlumParser::Role_idContext * /*ctx*/) override { }

  virtual void enterQueue_id(GreenPlumParser::Queue_idContext * /*ctx*/) override { }
  virtual void exitQueue_id(GreenPlumParser::Queue_idContext * /*ctx*/) override { }

  virtual void enterSigned_iconst(GreenPlumParser::Signed_iconstContext * /*ctx*/) override { }
  virtual void exitSigned_iconst(GreenPlumParser::Signed_iconstContext * /*ctx*/) override { }

  virtual void enterColid(GreenPlumParser::ColidContext * /*ctx*/) override { }
  virtual void exitColid(GreenPlumParser::ColidContext * /*ctx*/) override { }

  virtual void enterType_function_name(GreenPlumParser::Type_function_nameContext * /*ctx*/) override { }
  virtual void exitType_function_name(GreenPlumParser::Type_function_nameContext * /*ctx*/) override { }

  virtual void enterCol_label(GreenPlumParser::Col_labelContext * /*ctx*/) override { }
  virtual void exitCol_label(GreenPlumParser::Col_labelContext * /*ctx*/) override { }

  virtual void enterIdentifier(GreenPlumParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(GreenPlumParser::IdentifierContext * /*ctx*/) override { }

  virtual void enterUnreserved_keyword(GreenPlumParser::Unreserved_keywordContext * /*ctx*/) override { }
  virtual void exitUnreserved_keyword(GreenPlumParser::Unreserved_keywordContext * /*ctx*/) override { }

  virtual void enterKeywords_ok_in_alias_no_as(GreenPlumParser::Keywords_ok_in_alias_no_asContext * /*ctx*/) override { }
  virtual void exitKeywords_ok_in_alias_no_as(GreenPlumParser::Keywords_ok_in_alias_no_asContext * /*ctx*/) override { }

  virtual void enterPartition_colid(GreenPlumParser::Partition_colidContext * /*ctx*/) override { }
  virtual void exitPartition_colid(GreenPlumParser::Partition_colidContext * /*ctx*/) override { }

  virtual void enterPartition_ident_key_word(GreenPlumParser::Partition_ident_key_wordContext * /*ctx*/) override { }
  virtual void exitPartition_ident_key_word(GreenPlumParser::Partition_ident_key_wordContext * /*ctx*/) override { }

  virtual void enterCol_name_keyword(GreenPlumParser::Col_name_keywordContext * /*ctx*/) override { }
  virtual void exitCol_name_keyword(GreenPlumParser::Col_name_keywordContext * /*ctx*/) override { }

  virtual void enterType_func_name_keyword(GreenPlumParser::Type_func_name_keywordContext * /*ctx*/) override { }
  virtual void exitType_func_name_keyword(GreenPlumParser::Type_func_name_keywordContext * /*ctx*/) override { }

  virtual void enterReserved_keyword(GreenPlumParser::Reserved_keywordContext * /*ctx*/) override { }
  virtual void exitReserved_keyword(GreenPlumParser::Reserved_keywordContext * /*ctx*/) override { }

  virtual void enterSpecial_rule_relation(GreenPlumParser::Special_rule_relationContext * /*ctx*/) override { }
  virtual void exitSpecial_rule_relation(GreenPlumParser::Special_rule_relationContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};


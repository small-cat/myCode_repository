
// Generated from /home/jona/myGit/myCode_repository/antlr4_cpp/greenplum/GreenPlumParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "GreenPlumParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by GreenPlumParser.
 */
class  GreenPlumParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by GreenPlumParser.
   */
    virtual antlrcpp::Any visitStmtblock(GreenPlumParser::StmtblockContext *context) = 0;

    virtual antlrcpp::Any visitStmtmulti(GreenPlumParser::StmtmultiContext *context) = 0;

    virtual antlrcpp::Any visitStmt(GreenPlumParser::StmtContext *context) = 0;

    virtual antlrcpp::Any visitCreate_queue_stmt(GreenPlumParser::Create_queue_stmtContext *context) = 0;

    virtual antlrcpp::Any visitOpt_queue_elem(GreenPlumParser::Opt_queue_elemContext *context) = 0;

    virtual antlrcpp::Any visitAlter_queue_stmt(GreenPlumParser::Alter_queue_stmtContext *context) = 0;

    virtual antlrcpp::Any visitWith_out_definition(GreenPlumParser::With_out_definitionContext *context) = 0;

    virtual antlrcpp::Any visitDrop_queue_stmt(GreenPlumParser::Drop_queue_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCreate_resource_group_stmt(GreenPlumParser::Create_resource_group_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDrop_resource_group_stmt(GreenPlumParser::Drop_resource_group_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAlter_resource_group_stmt(GreenPlumParser::Alter_resource_group_stmtContext *context) = 0;

    virtual antlrcpp::Any visitResource_group_elem(GreenPlumParser::Resource_group_elemContext *context) = 0;

    virtual antlrcpp::Any visitCreate_role_stmt(GreenPlumParser::Create_role_stmtContext *context) = 0;

    virtual antlrcpp::Any visitOpt_with(GreenPlumParser::Opt_withContext *context) = 0;

    virtual antlrcpp::Any visitRole_elem(GreenPlumParser::Role_elemContext *context) = 0;

    virtual antlrcpp::Any visitDeny_login_role(GreenPlumParser::Deny_login_roleContext *context) = 0;

    virtual antlrcpp::Any visitDeny_interval(GreenPlumParser::Deny_intervalContext *context) = 0;

    virtual antlrcpp::Any visitDeny_day_specifier(GreenPlumParser::Deny_day_specifierContext *context) = 0;

    virtual antlrcpp::Any visitDeny_point(GreenPlumParser::Deny_pointContext *context) = 0;

    virtual antlrcpp::Any visitOpt_time(GreenPlumParser::Opt_timeContext *context) = 0;

    virtual antlrcpp::Any visitExttab_auth_list(GreenPlumParser::Exttab_auth_listContext *context) = 0;

    virtual antlrcpp::Any visitKeyvalue_list(GreenPlumParser::Keyvalue_listContext *context) = 0;

    virtual antlrcpp::Any visitKeyvalue_pair(GreenPlumParser::Keyvalue_pairContext *context) = 0;

    virtual antlrcpp::Any visitCreate_user_stmt(GreenPlumParser::Create_user_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAlter_role_stmt(GreenPlumParser::Alter_role_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAlter_role_set_stmt(GreenPlumParser::Alter_role_set_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAlter_role_elem(GreenPlumParser::Alter_role_elemContext *context) = 0;

    virtual antlrcpp::Any visitAlter_user_stmt(GreenPlumParser::Alter_user_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAlter_user_set_stmt(GreenPlumParser::Alter_user_set_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDrop_role_stmt(GreenPlumParser::Drop_role_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDrop_user_stmt(GreenPlumParser::Drop_user_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCreate_group_stmt(GreenPlumParser::Create_group_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAlter_group_stmt(GreenPlumParser::Alter_group_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAdd_drop(GreenPlumParser::Add_dropContext *context) = 0;

    virtual antlrcpp::Any visitDrop_group_stmt(GreenPlumParser::Drop_group_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCreate_schema_stmt(GreenPlumParser::Create_schema_stmtContext *context) = 0;

    virtual antlrcpp::Any visitSchema_name(GreenPlumParser::Schema_nameContext *context) = 0;

    virtual antlrcpp::Any visitSchema_stmt(GreenPlumParser::Schema_stmtContext *context) = 0;

    virtual antlrcpp::Any visitVariable_set_stmt(GreenPlumParser::Variable_set_stmtContext *context) = 0;

    virtual antlrcpp::Any visitSet_rest(GreenPlumParser::Set_restContext *context) = 0;

    virtual antlrcpp::Any visitVar_name(GreenPlumParser::Var_nameContext *context) = 0;

    virtual antlrcpp::Any visitVar_list(GreenPlumParser::Var_listContext *context) = 0;

    virtual antlrcpp::Any visitVar_value(GreenPlumParser::Var_valueContext *context) = 0;

    virtual antlrcpp::Any visitIso_level(GreenPlumParser::Iso_levelContext *context) = 0;

    virtual antlrcpp::Any visitOpt_boolean(GreenPlumParser::Opt_booleanContext *context) = 0;

    virtual antlrcpp::Any visitZone_value(GreenPlumParser::Zone_valueContext *context) = 0;

    virtual antlrcpp::Any visitParen_iconst(GreenPlumParser::Paren_iconstContext *context) = 0;

    virtual antlrcpp::Any visitOpt_encoding(GreenPlumParser::Opt_encodingContext *context) = 0;

    virtual antlrcpp::Any visitColid_or_sconst(GreenPlumParser::Colid_or_sconstContext *context) = 0;

    virtual antlrcpp::Any visitVariable_reset_stmt(GreenPlumParser::Variable_reset_stmtContext *context) = 0;

    virtual antlrcpp::Any visitSet_reset_clause(GreenPlumParser::Set_reset_clauseContext *context) = 0;

    virtual antlrcpp::Any visitVariable_show_stmt(GreenPlumParser::Variable_show_stmtContext *context) = 0;

    virtual antlrcpp::Any visitConstraints_set_stmt(GreenPlumParser::Constraints_set_stmtContext *context) = 0;

    virtual antlrcpp::Any visitConstraints_set_list(GreenPlumParser::Constraints_set_listContext *context) = 0;

    virtual antlrcpp::Any visitConstraints_set_mode(GreenPlumParser::Constraints_set_modeContext *context) = 0;

    virtual antlrcpp::Any visitCheck_point_stmt(GreenPlumParser::Check_point_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDiscard_stmt(GreenPlumParser::Discard_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAlter_table_stmt(GreenPlumParser::Alter_table_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAlter_table_cmds(GreenPlumParser::Alter_table_cmdsContext *context) = 0;

    virtual antlrcpp::Any visitAlter_table_cmd(GreenPlumParser::Alter_table_cmdContext *context) = 0;

    virtual antlrcpp::Any visitOpt_table_partition_split_into(GreenPlumParser::Opt_table_partition_split_intoContext *context) = 0;

    virtual antlrcpp::Any visitOpt_table_partition_merge_into(GreenPlumParser::Opt_table_partition_merge_intoContext *context) = 0;

    virtual antlrcpp::Any visitTable_partition_modify(GreenPlumParser::Table_partition_modifyContext *context) = 0;

    virtual antlrcpp::Any visitOpt_table_partition_exchange_validate(GreenPlumParser::Opt_table_partition_exchange_validateContext *context) = 0;

    virtual antlrcpp::Any visitAlter_table_partition_id_spec(GreenPlumParser::Alter_table_partition_id_specContext *context) = 0;

    virtual antlrcpp::Any visitAlter_table_partition_id_spec_with_opt_default(GreenPlumParser::Alter_table_partition_id_spec_with_opt_defaultContext *context) = 0;

    virtual antlrcpp::Any visitAlter_table_partition_cmd(GreenPlumParser::Alter_table_partition_cmdContext *context) = 0;

    virtual antlrcpp::Any visitAlter_rel_cmds(GreenPlumParser::Alter_rel_cmdsContext *context) = 0;

    virtual antlrcpp::Any visitAlter_rel_cmd(GreenPlumParser::Alter_rel_cmdContext *context) = 0;

    virtual antlrcpp::Any visitAlter_column_default(GreenPlumParser::Alter_column_defaultContext *context) = 0;

    virtual antlrcpp::Any visitOpt_drop_behavior(GreenPlumParser::Opt_drop_behaviorContext *context) = 0;

    virtual antlrcpp::Any visitAlter_using(GreenPlumParser::Alter_usingContext *context) = 0;

    virtual antlrcpp::Any visitClose_portal_stmt(GreenPlumParser::Close_portal_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCopy_stmt(GreenPlumParser::Copy_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCopy_from(GreenPlumParser::Copy_fromContext *context) = 0;

    virtual antlrcpp::Any visitSkip_external_partition(GreenPlumParser::Skip_external_partitionContext *context) = 0;

    virtual antlrcpp::Any visitCopy_file_name(GreenPlumParser::Copy_file_nameContext *context) = 0;

    virtual antlrcpp::Any visitCopy_opt_item(GreenPlumParser::Copy_opt_itemContext *context) = 0;

    virtual antlrcpp::Any visitOpt_oids(GreenPlumParser::Opt_oidsContext *context) = 0;

    virtual antlrcpp::Any visitCopy_delimiter(GreenPlumParser::Copy_delimiterContext *context) = 0;

    virtual antlrcpp::Any visitCreate_stmt(GreenPlumParser::Create_stmtContext *context) = 0;

    virtual antlrcpp::Any visitOpt_temp(GreenPlumParser::Opt_tempContext *context) = 0;

    virtual antlrcpp::Any visitTable_element_list(GreenPlumParser::Table_element_listContext *context) = 0;

    virtual antlrcpp::Any visitTable_element(GreenPlumParser::Table_elementContext *context) = 0;

    virtual antlrcpp::Any visitColumn_reference_storage_directive(GreenPlumParser::Column_reference_storage_directiveContext *context) = 0;

    virtual antlrcpp::Any visitColumn_def(GreenPlumParser::Column_defContext *context) = 0;

    virtual antlrcpp::Any visitCol_constraint(GreenPlumParser::Col_constraintContext *context) = 0;

    virtual antlrcpp::Any visitOpt_storage_encoding(GreenPlumParser::Opt_storage_encodingContext *context) = 0;

    virtual antlrcpp::Any visitCol_constraint_elem(GreenPlumParser::Col_constraint_elemContext *context) = 0;

    virtual antlrcpp::Any visitConstraint_attr(GreenPlumParser::Constraint_attrContext *context) = 0;

    virtual antlrcpp::Any visitTable_like_clause(GreenPlumParser::Table_like_clauseContext *context) = 0;

    virtual antlrcpp::Any visitTable_list_option(GreenPlumParser::Table_list_optionContext *context) = 0;

    virtual antlrcpp::Any visitTable_constraint(GreenPlumParser::Table_constraintContext *context) = 0;

    virtual antlrcpp::Any visitConstraint_elem(GreenPlumParser::Constraint_elemContext *context) = 0;

    virtual antlrcpp::Any visitParen_column(GreenPlumParser::Paren_columnContext *context) = 0;

    virtual antlrcpp::Any visitParen_column_list(GreenPlumParser::Paren_column_listContext *context) = 0;

    virtual antlrcpp::Any visitColumn_list(GreenPlumParser::Column_listContext *context) = 0;

    virtual antlrcpp::Any visitColumn_elem(GreenPlumParser::Column_elemContext *context) = 0;

    virtual antlrcpp::Any visitKey_match(GreenPlumParser::Key_matchContext *context) = 0;

    virtual antlrcpp::Any visitKey_actions(GreenPlumParser::Key_actionsContext *context) = 0;

    virtual antlrcpp::Any visitKey_update(GreenPlumParser::Key_updateContext *context) = 0;

    virtual antlrcpp::Any visitKey_delete(GreenPlumParser::Key_deleteContext *context) = 0;

    virtual antlrcpp::Any visitKey_action(GreenPlumParser::Key_actionContext *context) = 0;

    virtual antlrcpp::Any visitOpt_inherit(GreenPlumParser::Opt_inheritContext *context) = 0;

    virtual antlrcpp::Any visitOpt_with_def_oids(GreenPlumParser::Opt_with_def_oidsContext *context) = 0;

    virtual antlrcpp::Any visitOn_commit_option(GreenPlumParser::On_commit_optionContext *context) = 0;

    virtual antlrcpp::Any visitOpt_table_space(GreenPlumParser::Opt_table_spaceContext *context) = 0;

    virtual antlrcpp::Any visitConstraint_table_space(GreenPlumParser::Constraint_table_spaceContext *context) = 0;

    virtual antlrcpp::Any visitDistributed_by(GreenPlumParser::Distributed_byContext *context) = 0;

    virtual antlrcpp::Any visitOpt_distributed_by(GreenPlumParser::Opt_distributed_byContext *context) = 0;

    virtual antlrcpp::Any visitTab_partition_column_enc_list(GreenPlumParser::Tab_partition_column_enc_listContext *context) = 0;

    virtual antlrcpp::Any visitOpt_tab_partition_storage_attr(GreenPlumParser::Opt_tab_partition_storage_attrContext *context) = 0;

    virtual antlrcpp::Any visitOpt_tab_partition_spec(GreenPlumParser::Opt_tab_partition_specContext *context) = 0;

    virtual antlrcpp::Any visitOpt_tab_sub_partition_spec(GreenPlumParser::Opt_tab_sub_partition_specContext *context) = 0;

    virtual antlrcpp::Any visitTab_partition_elem_list(GreenPlumParser::Tab_partition_elem_listContext *context) = 0;

    virtual antlrcpp::Any visitTab_sub_partition_elem_list(GreenPlumParser::Tab_sub_partition_elem_listContext *context) = 0;

    virtual antlrcpp::Any visitTab_part_val_no_paran(GreenPlumParser::Tab_part_val_no_paranContext *context) = 0;

    virtual antlrcpp::Any visitTab_part_val(GreenPlumParser::Tab_part_valContext *context) = 0;

    virtual antlrcpp::Any visitTab_partition_boundary_spec_val_list(GreenPlumParser::Tab_partition_boundary_spec_val_listContext *context) = 0;

    virtual antlrcpp::Any visitOpt_tab_partition_range_inclusive(GreenPlumParser::Opt_tab_partition_range_inclusiveContext *context) = 0;

    virtual antlrcpp::Any visitTab_partition_boundary_spec_start(GreenPlumParser::Tab_partition_boundary_spec_startContext *context) = 0;

    virtual antlrcpp::Any visitTab_partition_boundary_spec_end(GreenPlumParser::Tab_partition_boundary_spec_endContext *context) = 0;

    virtual antlrcpp::Any visitOpt_tab_partition_boundary_spec_every(GreenPlumParser::Opt_tab_partition_boundary_spec_everyContext *context) = 0;

    virtual antlrcpp::Any visitTab_partition_boundary_spec(GreenPlumParser::Tab_partition_boundary_specContext *context) = 0;

    virtual antlrcpp::Any visitParen_part_values_single(GreenPlumParser::Paren_part_values_singleContext *context) = 0;

    virtual antlrcpp::Any visitMulti_spec_value_list(GreenPlumParser::Multi_spec_value_listContext *context) = 0;

    virtual antlrcpp::Any visitPart_values_single(GreenPlumParser::Part_values_singleContext *context) = 0;

    virtual antlrcpp::Any visitPart_values_clause(GreenPlumParser::Part_values_clauseContext *context) = 0;

    virtual antlrcpp::Any visitPart_values_or_spec_list(GreenPlumParser::Part_values_or_spec_listContext *context) = 0;

    virtual antlrcpp::Any visitTab_partition_elem(GreenPlumParser::Tab_partition_elemContext *context) = 0;

    virtual antlrcpp::Any visitTab_sub_partition_elem(GreenPlumParser::Tab_sub_partition_elemContext *context) = 0;

    virtual antlrcpp::Any visitTab_partition_elemOption(GreenPlumParser::Tab_partition_elemOptionContext *context) = 0;

    virtual antlrcpp::Any visitTab_partition_name_decl(GreenPlumParser::Tab_partition_name_declContext *context) = 0;

    virtual antlrcpp::Any visitTab_partition_default_name_decl(GreenPlumParser::Tab_partition_default_name_declContext *context) = 0;

    virtual antlrcpp::Any visitTab_sub_partition_name_decl(GreenPlumParser::Tab_sub_partition_name_declContext *context) = 0;

    virtual antlrcpp::Any visitTab_sub_partition_default_name_decl(GreenPlumParser::Tab_sub_partition_default_name_declContext *context) = 0;

    virtual antlrcpp::Any visitTab_partition_by_type(GreenPlumParser::Tab_partition_by_typeContext *context) = 0;

    virtual antlrcpp::Any visitOpt_tab_partition_by(GreenPlumParser::Opt_tab_partition_byContext *context) = 0;

    virtual antlrcpp::Any visitTab_sub_partition_by_list(GreenPlumParser::Tab_sub_partition_by_listContext *context) = 0;

    virtual antlrcpp::Any visitTab_sub_partition_template(GreenPlumParser::Tab_sub_partition_templateContext *context) = 0;

    virtual antlrcpp::Any visitTab_sub_partition_by(GreenPlumParser::Tab_sub_partition_byContext *context) = 0;

    virtual antlrcpp::Any visitOpt_partitions_number(GreenPlumParser::Opt_partitions_numberContext *context) = 0;

    virtual antlrcpp::Any visitCreate_as_stmt(GreenPlumParser::Create_as_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCreate_as_target(GreenPlumParser::Create_as_targetContext *context) = 0;

    virtual antlrcpp::Any visitOpt_create_as(GreenPlumParser::Opt_create_asContext *context) = 0;

    virtual antlrcpp::Any visitCreate_as_list(GreenPlumParser::Create_as_listContext *context) = 0;

    virtual antlrcpp::Any visitCreate_as_element(GreenPlumParser::Create_as_elementContext *context) = 0;

    virtual antlrcpp::Any visitOpt_with_data(GreenPlumParser::Opt_with_dataContext *context) = 0;

    virtual antlrcpp::Any visitCreate_external_stmt(GreenPlumParser::Create_external_stmtContext *context) = 0;

    virtual antlrcpp::Any visitOpt_writable(GreenPlumParser::Opt_writableContext *context) = 0;

    virtual antlrcpp::Any visitExt_type_desc(GreenPlumParser::Ext_type_descContext *context) = 0;

    virtual antlrcpp::Any visitExt_on_clause_item(GreenPlumParser::Ext_on_clause_itemContext *context) = 0;

    virtual antlrcpp::Any visitDouble_parens(GreenPlumParser::Double_parensContext *context) = 0;

    virtual antlrcpp::Any visitFormat_opt(GreenPlumParser::Format_optContext *context) = 0;

    virtual antlrcpp::Any visitFormat_opt_list(GreenPlumParser::Format_opt_listContext *context) = 0;

    virtual antlrcpp::Any visitFormat_def_list(GreenPlumParser::Format_def_listContext *context) = 0;

    virtual antlrcpp::Any visitFormat_def_item(GreenPlumParser::Format_def_itemContext *context) = 0;

    virtual antlrcpp::Any visitFormat_opt_item(GreenPlumParser::Format_opt_itemContext *context) = 0;

    virtual antlrcpp::Any visitExt_options_opt(GreenPlumParser::Ext_options_optContext *context) = 0;

    virtual antlrcpp::Any visitExt_options(GreenPlumParser::Ext_optionsContext *context) = 0;

    virtual antlrcpp::Any visitExt_options_list(GreenPlumParser::Ext_options_listContext *context) = 0;

    virtual antlrcpp::Any visitExt_options_item(GreenPlumParser::Ext_options_itemContext *context) = 0;

    virtual antlrcpp::Any visitExt_table_element_list(GreenPlumParser::Ext_table_element_listContext *context) = 0;

    virtual antlrcpp::Any visitExt_table_element(GreenPlumParser::Ext_table_elementContext *context) = 0;

    virtual antlrcpp::Any visitExt_column_def(GreenPlumParser::Ext_column_defContext *context) = 0;

    virtual antlrcpp::Any visitOpt_single_row_error_handling(GreenPlumParser::Opt_single_row_error_handlingContext *context) = 0;

    virtual antlrcpp::Any visitOpt_log_error_table(GreenPlumParser::Opt_log_error_tableContext *context) = 0;

    virtual antlrcpp::Any visitOpt_sreh_limit_type(GreenPlumParser::Opt_sreh_limit_typeContext *context) = 0;

    virtual antlrcpp::Any visitExt_opt_encoding_list(GreenPlumParser::Ext_opt_encoding_listContext *context) = 0;

    virtual antlrcpp::Any visitExt_opt_encoding_item(GreenPlumParser::Ext_opt_encoding_itemContext *context) = 0;

    virtual antlrcpp::Any visitCreate_seq_stmt(GreenPlumParser::Create_seq_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAlter_seq_stmt(GreenPlumParser::Alter_seq_stmtContext *context) = 0;

    virtual antlrcpp::Any visitOpt_seq_list(GreenPlumParser::Opt_seq_listContext *context) = 0;

    virtual antlrcpp::Any visitOpt_seq_elem(GreenPlumParser::Opt_seq_elemContext *context) = 0;

    virtual antlrcpp::Any visitNumberic_only(GreenPlumParser::Numberic_onlyContext *context) = 0;

    virtual antlrcpp::Any visitFloat_only(GreenPlumParser::Float_onlyContext *context) = 0;

    virtual antlrcpp::Any visitInteger_only(GreenPlumParser::Integer_onlyContext *context) = 0;

    virtual antlrcpp::Any visitCreate_p_lang_stmt(GreenPlumParser::Create_p_lang_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCreate_p_lang_stmtOption(GreenPlumParser::Create_p_lang_stmtOptionContext *context) = 0;

    virtual antlrcpp::Any visitHandler_name(GreenPlumParser::Handler_nameContext *context) = 0;

    virtual antlrcpp::Any visitOpt_inline_handler(GreenPlumParser::Opt_inline_handlerContext *context) = 0;

    virtual antlrcpp::Any visitValidator_clause(GreenPlumParser::Validator_clauseContext *context) = 0;

    virtual antlrcpp::Any visitOpt_validator(GreenPlumParser::Opt_validatorContext *context) = 0;

    virtual antlrcpp::Any visitDrop_p_lang_stmt(GreenPlumParser::Drop_p_lang_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCreate_file_space_stmt(GreenPlumParser::Create_file_space_stmtContext *context) = 0;

    virtual antlrcpp::Any visitFile_space_seg_list(GreenPlumParser::File_space_seg_listContext *context) = 0;

    virtual antlrcpp::Any visitFile_space_seg(GreenPlumParser::File_space_segContext *context) = 0;

    virtual antlrcpp::Any visitOpt_owner(GreenPlumParser::Opt_ownerContext *context) = 0;

    virtual antlrcpp::Any visitCreate_table_space_stmt(GreenPlumParser::Create_table_space_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCreate_extension_stmt(GreenPlumParser::Create_extension_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCreate_extension_opt_list(GreenPlumParser::Create_extension_opt_listContext *context) = 0;

    virtual antlrcpp::Any visitCreate_extension_opt_item(GreenPlumParser::Create_extension_opt_itemContext *context) = 0;

    virtual antlrcpp::Any visitAlter_extension_stmt(GreenPlumParser::Alter_extension_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAlter_extension_opt_list(GreenPlumParser::Alter_extension_opt_listContext *context) = 0;

    virtual antlrcpp::Any visitAlter_extension_opt_item(GreenPlumParser::Alter_extension_opt_itemContext *context) = 0;

    virtual antlrcpp::Any visitAlter_extension_content_stmt(GreenPlumParser::Alter_extension_content_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAlter_extension_content_stmtOption(GreenPlumParser::Alter_extension_content_stmtOptionContext *context) = 0;

    virtual antlrcpp::Any visitCreate_trig_stmt(GreenPlumParser::Create_trig_stmtContext *context) = 0;

    virtual antlrcpp::Any visitTrigger_action_time(GreenPlumParser::Trigger_action_timeContext *context) = 0;

    virtual antlrcpp::Any visitTrigger_events(GreenPlumParser::Trigger_eventsContext *context) = 0;

    virtual antlrcpp::Any visitTrigger_one_event(GreenPlumParser::Trigger_one_eventContext *context) = 0;

    virtual antlrcpp::Any visitTrigger_for_spec(GreenPlumParser::Trigger_for_specContext *context) = 0;

    virtual antlrcpp::Any visitTrigger_for_type(GreenPlumParser::Trigger_for_typeContext *context) = 0;

    virtual antlrcpp::Any visitTrigger_func_args(GreenPlumParser::Trigger_func_argsContext *context) = 0;

    virtual antlrcpp::Any visitTrigger_func_arg(GreenPlumParser::Trigger_func_argContext *context) = 0;

    virtual antlrcpp::Any visitOpt_constr_from_table(GreenPlumParser::Opt_constr_from_tableContext *context) = 0;

    virtual antlrcpp::Any visitConstraint_attr_spec(GreenPlumParser::Constraint_attr_specContext *context) = 0;

    virtual antlrcpp::Any visitConstraint_deferrability_spec(GreenPlumParser::Constraint_deferrability_specContext *context) = 0;

    virtual antlrcpp::Any visitConstraint_time_spec(GreenPlumParser::Constraint_time_specContext *context) = 0;

    virtual antlrcpp::Any visitDrop_trig_stmt(GreenPlumParser::Drop_trig_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCreate_assert_stmt(GreenPlumParser::Create_assert_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDrop_assert_stmt(GreenPlumParser::Drop_assert_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDefine_stmt(GreenPlumParser::Define_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDefinition(GreenPlumParser::DefinitionContext *context) = 0;

    virtual antlrcpp::Any visitDef_list(GreenPlumParser::Def_listContext *context) = 0;

    virtual antlrcpp::Any visitDef_elem(GreenPlumParser::Def_elemContext *context) = 0;

    virtual antlrcpp::Any visitDef_arg(GreenPlumParser::Def_argContext *context) = 0;

    virtual antlrcpp::Any visitAggr_args(GreenPlumParser::Aggr_argsContext *context) = 0;

    virtual antlrcpp::Any visitOld_aggr_definition(GreenPlumParser::Old_aggr_definitionContext *context) = 0;

    virtual antlrcpp::Any visitOld_aggr_list(GreenPlumParser::Old_aggr_listContext *context) = 0;

    virtual antlrcpp::Any visitOld_aggr_elem(GreenPlumParser::Old_aggr_elemContext *context) = 0;

    virtual antlrcpp::Any visitEnum_val_list(GreenPlumParser::Enum_val_listContext *context) = 0;

    virtual antlrcpp::Any visitCreate_op_class_stmt(GreenPlumParser::Create_op_class_stmtContext *context) = 0;

    virtual antlrcpp::Any visitOpclass_item_list(GreenPlumParser::Opclass_item_listContext *context) = 0;

    virtual antlrcpp::Any visitOpclass_item(GreenPlumParser::Opclass_itemContext *context) = 0;

    virtual antlrcpp::Any visitOpt_opfamily(GreenPlumParser::Opt_opfamilyContext *context) = 0;

    virtual antlrcpp::Any visitCreate_op_family_stmt(GreenPlumParser::Create_op_family_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAlter_op_family_stmt(GreenPlumParser::Alter_op_family_stmtContext *context) = 0;

    virtual antlrcpp::Any visitOpclass_drop_list(GreenPlumParser::Opclass_drop_listContext *context) = 0;

    virtual antlrcpp::Any visitOpclass_drop(GreenPlumParser::Opclass_dropContext *context) = 0;

    virtual antlrcpp::Any visitDrop_op_class_stmt(GreenPlumParser::Drop_op_class_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDrop_op_family_stmt(GreenPlumParser::Drop_op_family_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDrop_owned_stmt(GreenPlumParser::Drop_owned_stmtContext *context) = 0;

    virtual antlrcpp::Any visitReassign_owned_stmt(GreenPlumParser::Reassign_owned_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDrop_stmt(GreenPlumParser::Drop_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDrop_type(GreenPlumParser::Drop_typeContext *context) = 0;

    virtual antlrcpp::Any visitAny_name_list(GreenPlumParser::Any_name_listContext *context) = 0;

    virtual antlrcpp::Any visitAny_name(GreenPlumParser::Any_nameContext *context) = 0;

    virtual antlrcpp::Any visitAttrs(GreenPlumParser::AttrsContext *context) = 0;

    virtual antlrcpp::Any visitTruncate_stmt(GreenPlumParser::Truncate_stmtContext *context) = 0;

    virtual antlrcpp::Any visitComment_stmt(GreenPlumParser::Comment_stmtContext *context) = 0;

    virtual antlrcpp::Any visitComment_stmtOption(GreenPlumParser::Comment_stmtOptionContext *context) = 0;

    virtual antlrcpp::Any visitComment_option(GreenPlumParser::Comment_optionContext *context) = 0;

    virtual antlrcpp::Any visitComment_type(GreenPlumParser::Comment_typeContext *context) = 0;

    virtual antlrcpp::Any visitComment_text(GreenPlumParser::Comment_textContext *context) = 0;

    virtual antlrcpp::Any visitFetch_stmt(GreenPlumParser::Fetch_stmtContext *context) = 0;

    virtual antlrcpp::Any visitFetch_direction(GreenPlumParser::Fetch_directionContext *context) = 0;

    virtual antlrcpp::Any visitGrant_stmt(GreenPlumParser::Grant_stmtContext *context) = 0;

    virtual antlrcpp::Any visitRevoke_stmt(GreenPlumParser::Revoke_stmtContext *context) = 0;

    virtual antlrcpp::Any visitPrivileges(GreenPlumParser::PrivilegesContext *context) = 0;

    virtual antlrcpp::Any visitPrivilege_list(GreenPlumParser::Privilege_listContext *context) = 0;

    virtual antlrcpp::Any visitPrivilege(GreenPlumParser::PrivilegeContext *context) = 0;

    virtual antlrcpp::Any visitPrivilege_target(GreenPlumParser::Privilege_targetContext *context) = 0;

    virtual antlrcpp::Any visitGrantee_list(GreenPlumParser::Grantee_listContext *context) = 0;

    virtual antlrcpp::Any visitGrantee(GreenPlumParser::GranteeContext *context) = 0;

    virtual antlrcpp::Any visitOpt_grant_grant_option(GreenPlumParser::Opt_grant_grant_optionContext *context) = 0;

    virtual antlrcpp::Any visitFunction_with_argtypes_list(GreenPlumParser::Function_with_argtypes_listContext *context) = 0;

    virtual antlrcpp::Any visitFunction_with_argtypes(GreenPlumParser::Function_with_argtypesContext *context) = 0;

    virtual antlrcpp::Any visitGrant_role_stmt(GreenPlumParser::Grant_role_stmtContext *context) = 0;

    virtual antlrcpp::Any visitRevoke_role_stmt(GreenPlumParser::Revoke_role_stmtContext *context) = 0;

    virtual antlrcpp::Any visitOpt_grant_admin_option(GreenPlumParser::Opt_grant_admin_optionContext *context) = 0;

    virtual antlrcpp::Any visitOpt_granted_by(GreenPlumParser::Opt_granted_byContext *context) = 0;

    virtual antlrcpp::Any visitIndex_stmt(GreenPlumParser::Index_stmtContext *context) = 0;

    virtual antlrcpp::Any visitIndex_params(GreenPlumParser::Index_paramsContext *context) = 0;

    virtual antlrcpp::Any visitIndex_elem(GreenPlumParser::Index_elemContext *context) = 0;

    virtual antlrcpp::Any visitOpt_class(GreenPlumParser::Opt_classContext *context) = 0;

    virtual antlrcpp::Any visitOpt_asc_desc(GreenPlumParser::Opt_asc_descContext *context) = 0;

    virtual antlrcpp::Any visitOpt_nulls_order(GreenPlumParser::Opt_nulls_orderContext *context) = 0;

    virtual antlrcpp::Any visitCreate_function_stmt(GreenPlumParser::Create_function_stmtContext *context) = 0;

    virtual antlrcpp::Any visitOpt_or_replace(GreenPlumParser::Opt_or_replaceContext *context) = 0;

    virtual antlrcpp::Any visitFunc_args(GreenPlumParser::Func_argsContext *context) = 0;

    virtual antlrcpp::Any visitFunc_args_list(GreenPlumParser::Func_args_listContext *context) = 0;

    virtual antlrcpp::Any visitFunc_args_with_defaults(GreenPlumParser::Func_args_with_defaultsContext *context) = 0;

    virtual antlrcpp::Any visitFunc_args_with_defaults_list(GreenPlumParser::Func_args_with_defaults_listContext *context) = 0;

    virtual antlrcpp::Any visitFunc_arg(GreenPlumParser::Func_argContext *context) = 0;

    virtual antlrcpp::Any visitFunc_arg_with_default(GreenPlumParser::Func_arg_with_defaultContext *context) = 0;

    virtual antlrcpp::Any visitArg_class(GreenPlumParser::Arg_classContext *context) = 0;

    virtual antlrcpp::Any visitParam_name(GreenPlumParser::Param_nameContext *context) = 0;

    virtual antlrcpp::Any visitFunc_return(GreenPlumParser::Func_returnContext *context) = 0;

    virtual antlrcpp::Any visitFunc_type(GreenPlumParser::Func_typeContext *context) = 0;

    virtual antlrcpp::Any visitFunc_type_table_option_list(GreenPlumParser::Func_type_table_option_listContext *context) = 0;

    virtual antlrcpp::Any visitFunc_type_table_option(GreenPlumParser::Func_type_table_optionContext *context) = 0;

    virtual antlrcpp::Any visitCreatefunc_opt_list(GreenPlumParser::Createfunc_opt_listContext *context) = 0;

    virtual antlrcpp::Any visitCommon_func_opt_item(GreenPlumParser::Common_func_opt_itemContext *context) = 0;

    virtual antlrcpp::Any visitCreatefunc_opt_item(GreenPlumParser::Createfunc_opt_itemContext *context) = 0;

    virtual antlrcpp::Any visitFunc_as(GreenPlumParser::Func_asContext *context) = 0;

    virtual antlrcpp::Any visitTable_func_column(GreenPlumParser::Table_func_columnContext *context) = 0;

    virtual antlrcpp::Any visitTable_func_column_list(GreenPlumParser::Table_func_column_listContext *context) = 0;

    virtual antlrcpp::Any visitAlter_function_stmt(GreenPlumParser::Alter_function_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAlterfunc_opt_list(GreenPlumParser::Alterfunc_opt_listContext *context) = 0;

    virtual antlrcpp::Any visitRemove_func_stmt(GreenPlumParser::Remove_func_stmtContext *context) = 0;

    virtual antlrcpp::Any visitRemove_aggr_stmt(GreenPlumParser::Remove_aggr_stmtContext *context) = 0;

    virtual antlrcpp::Any visitRemove_oper_stmt(GreenPlumParser::Remove_oper_stmtContext *context) = 0;

    virtual antlrcpp::Any visitOper_argtypes(GreenPlumParser::Oper_argtypesContext *context) = 0;

    virtual antlrcpp::Any visitAny_operator(GreenPlumParser::Any_operatorContext *context) = 0;

    virtual antlrcpp::Any visitDo_stmt(GreenPlumParser::Do_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDostmt_opt_item(GreenPlumParser::Dostmt_opt_itemContext *context) = 0;

    virtual antlrcpp::Any visitCreate_cast_stmt(GreenPlumParser::Create_cast_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCast_context(GreenPlumParser::Cast_contextContext *context) = 0;

    virtual antlrcpp::Any visitDrop_cast_stmt(GreenPlumParser::Drop_cast_stmtContext *context) = 0;

    virtual antlrcpp::Any visitReindex_stmt(GreenPlumParser::Reindex_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAlter_type_stmt(GreenPlumParser::Alter_type_stmtContext *context) = 0;

    virtual antlrcpp::Any visitRename_stmt(GreenPlumParser::Rename_stmtContext *context) = 0;

    virtual antlrcpp::Any visitOpt_column(GreenPlumParser::Opt_columnContext *context) = 0;

    virtual antlrcpp::Any visitAlter_object_schema_stmt(GreenPlumParser::Alter_object_schema_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAlter_owner_stmt(GreenPlumParser::Alter_owner_stmtContext *context) = 0;

    virtual antlrcpp::Any visitRule_stmt(GreenPlumParser::Rule_stmtContext *context) = 0;

    virtual antlrcpp::Any visitRule_action_list(GreenPlumParser::Rule_action_listContext *context) = 0;

    virtual antlrcpp::Any visitRule_action_multi(GreenPlumParser::Rule_action_multiContext *context) = 0;

    virtual antlrcpp::Any visitRule_action_stmt(GreenPlumParser::Rule_action_stmtContext *context) = 0;

    virtual antlrcpp::Any visitEvent(GreenPlumParser::EventContext *context) = 0;

    virtual antlrcpp::Any visitOpt_instead(GreenPlumParser::Opt_insteadContext *context) = 0;

    virtual antlrcpp::Any visitDrop_rule_stmt(GreenPlumParser::Drop_rule_stmtContext *context) = 0;

    virtual antlrcpp::Any visitNotify_stmt(GreenPlumParser::Notify_stmtContext *context) = 0;

    virtual antlrcpp::Any visitListen_stmt(GreenPlumParser::Listen_stmtContext *context) = 0;

    virtual antlrcpp::Any visitUnlisten_stmt(GreenPlumParser::Unlisten_stmtContext *context) = 0;

    virtual antlrcpp::Any visitTransaction_stmt(GreenPlumParser::Transaction_stmtContext *context) = 0;

    virtual antlrcpp::Any visitOpt_transaction(GreenPlumParser::Opt_transactionContext *context) = 0;

    virtual antlrcpp::Any visitTransaction_mode_item(GreenPlumParser::Transaction_mode_itemContext *context) = 0;

    virtual antlrcpp::Any visitTransaction_mode_list(GreenPlumParser::Transaction_mode_listContext *context) = 0;

    virtual antlrcpp::Any visitView_stmt(GreenPlumParser::View_stmtContext *context) = 0;

    virtual antlrcpp::Any visitOpt_check_option(GreenPlumParser::Opt_check_optionContext *context) = 0;

    virtual antlrcpp::Any visitLoad_stmt(GreenPlumParser::Load_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCreatedb_stmt(GreenPlumParser::Createdb_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCreatedb_opt_item(GreenPlumParser::Createdb_opt_itemContext *context) = 0;

    virtual antlrcpp::Any visitAlter_database_stmt(GreenPlumParser::Alter_database_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAlter_database_set_stmt(GreenPlumParser::Alter_database_set_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAlterdb_opt_item(GreenPlumParser::Alterdb_opt_itemContext *context) = 0;

    virtual antlrcpp::Any visitDropdb_stmt(GreenPlumParser::Dropdb_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCreate_domain_stmt(GreenPlumParser::Create_domain_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAlter_domain_stmt(GreenPlumParser::Alter_domain_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAlter_domain_option(GreenPlumParser::Alter_domain_optionContext *context) = 0;

    virtual antlrcpp::Any visitAlter_tsdictionary_stmt(GreenPlumParser::Alter_tsdictionary_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAlter_tsconfiguration_stmt(GreenPlumParser::Alter_tsconfiguration_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAlter_txt_search_conf_option(GreenPlumParser::Alter_txt_search_conf_optionContext *context) = 0;

    virtual antlrcpp::Any visitCreate_conversion_stmt(GreenPlumParser::Create_conversion_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCluster_stmt(GreenPlumParser::Cluster_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCluster_option(GreenPlumParser::Cluster_optionContext *context) = 0;

    virtual antlrcpp::Any visitVacuum_stmt(GreenPlumParser::Vacuum_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAnalyze_stmt(GreenPlumParser::Analyze_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAnalyze_keyword(GreenPlumParser::Analyze_keywordContext *context) = 0;

    virtual antlrcpp::Any visitParen_name_list(GreenPlumParser::Paren_name_listContext *context) = 0;

    virtual antlrcpp::Any visitExplain_stmt(GreenPlumParser::Explain_stmtContext *context) = 0;

    virtual antlrcpp::Any visitExplainable_stmt(GreenPlumParser::Explainable_stmtContext *context) = 0;

    virtual antlrcpp::Any visitPrepare_stmt(GreenPlumParser::Prepare_stmtContext *context) = 0;

    virtual antlrcpp::Any visitParen_type_list(GreenPlumParser::Paren_type_listContext *context) = 0;

    virtual antlrcpp::Any visitPreparable_stmt(GreenPlumParser::Preparable_stmtContext *context) = 0;

    virtual antlrcpp::Any visitExecute_stmt(GreenPlumParser::Execute_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDeallocate_stmt(GreenPlumParser::Deallocate_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCdb_string_list(GreenPlumParser::Cdb_string_listContext *context) = 0;

    virtual antlrcpp::Any visitCdb_string(GreenPlumParser::Cdb_stringContext *context) = 0;

    virtual antlrcpp::Any visitInsert_stmt(GreenPlumParser::Insert_stmtContext *context) = 0;

    virtual antlrcpp::Any visitInsert_rest(GreenPlumParser::Insert_restContext *context) = 0;

    virtual antlrcpp::Any visitInsert_column_list(GreenPlumParser::Insert_column_listContext *context) = 0;

    virtual antlrcpp::Any visitInsert_column_item(GreenPlumParser::Insert_column_itemContext *context) = 0;

    virtual antlrcpp::Any visitReturning_clause(GreenPlumParser::Returning_clauseContext *context) = 0;

    virtual antlrcpp::Any visitDelete_stmt(GreenPlumParser::Delete_stmtContext *context) = 0;

    virtual antlrcpp::Any visitLock_stmt(GreenPlumParser::Lock_stmtContext *context) = 0;

    virtual antlrcpp::Any visitOpt_lock(GreenPlumParser::Opt_lockContext *context) = 0;

    virtual antlrcpp::Any visitLock_type(GreenPlumParser::Lock_typeContext *context) = 0;

    virtual antlrcpp::Any visitUpdate_stmt(GreenPlumParser::Update_stmtContext *context) = 0;

    virtual antlrcpp::Any visitSet_clause_list(GreenPlumParser::Set_clause_listContext *context) = 0;

    virtual antlrcpp::Any visitSet_clause(GreenPlumParser::Set_clauseContext *context) = 0;

    virtual antlrcpp::Any visitSingle_set_clause(GreenPlumParser::Single_set_clauseContext *context) = 0;

    virtual antlrcpp::Any visitMultiple_set_clause(GreenPlumParser::Multiple_set_clauseContext *context) = 0;

    virtual antlrcpp::Any visitSet_target(GreenPlumParser::Set_targetContext *context) = 0;

    virtual antlrcpp::Any visitSet_target_list(GreenPlumParser::Set_target_listContext *context) = 0;

    virtual antlrcpp::Any visitDeclare_cursor_stmt(GreenPlumParser::Declare_cursor_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCursor_option(GreenPlumParser::Cursor_optionContext *context) = 0;

    virtual antlrcpp::Any visitOpt_hold(GreenPlumParser::Opt_holdContext *context) = 0;

    virtual antlrcpp::Any visitSelect_stmt(GreenPlumParser::Select_stmtContext *context) = 0;

    virtual antlrcpp::Any visitSubquery_basic_elements(GreenPlumParser::Subquery_basic_elementsContext *context) = 0;

    virtual antlrcpp::Any visitSubquery_operation_part(GreenPlumParser::Subquery_operation_partContext *context) = 0;

    virtual antlrcpp::Any visitSelect_with_parens(GreenPlumParser::Select_with_parensContext *context) = 0;

    virtual antlrcpp::Any visitSelect_no_parens(GreenPlumParser::Select_no_parensContext *context) = 0;

    virtual antlrcpp::Any visitSimple_select(GreenPlumParser::Simple_selectContext *context) = 0;

    virtual antlrcpp::Any visitWith_clause(GreenPlumParser::With_clauseContext *context) = 0;

    virtual antlrcpp::Any visitCte_list(GreenPlumParser::Cte_listContext *context) = 0;

    virtual antlrcpp::Any visitCommon_table_expr(GreenPlumParser::Common_table_exprContext *context) = 0;

    virtual antlrcpp::Any visitInto_clause(GreenPlumParser::Into_clauseContext *context) = 0;

    virtual antlrcpp::Any visitOpt_tempTableName(GreenPlumParser::Opt_tempTableNameContext *context) = 0;

    virtual antlrcpp::Any visitOpt_distinct(GreenPlumParser::Opt_distinctContext *context) = 0;

    virtual antlrcpp::Any visitSort_clause(GreenPlumParser::Sort_clauseContext *context) = 0;

    virtual antlrcpp::Any visitSortby_list(GreenPlumParser::Sortby_listContext *context) = 0;

    virtual antlrcpp::Any visitSortby(GreenPlumParser::SortbyContext *context) = 0;

    virtual antlrcpp::Any visitSelect_limit(GreenPlumParser::Select_limitContext *context) = 0;

    virtual antlrcpp::Any visitSelect_limit_value(GreenPlumParser::Select_limit_valueContext *context) = 0;

    virtual antlrcpp::Any visitOpt_select_fetch_first_value(GreenPlumParser::Opt_select_fetch_first_valueContext *context) = 0;

    virtual antlrcpp::Any visitSelect_offset_value(GreenPlumParser::Select_offset_valueContext *context) = 0;

    virtual antlrcpp::Any visitSelect_offset_value2(GreenPlumParser::Select_offset_value2Context *context) = 0;

    virtual antlrcpp::Any visitRow_or_rows(GreenPlumParser::Row_or_rowsContext *context) = 0;

    virtual antlrcpp::Any visitFirst_or_next(GreenPlumParser::First_or_nextContext *context) = 0;

    virtual antlrcpp::Any visitGroup_clause(GreenPlumParser::Group_clauseContext *context) = 0;

    virtual antlrcpp::Any visitGroup_elem_list(GreenPlumParser::Group_elem_listContext *context) = 0;

    virtual antlrcpp::Any visitGroup_elem(GreenPlumParser::Group_elemContext *context) = 0;

    virtual antlrcpp::Any visitHaving_clause(GreenPlumParser::Having_clauseContext *context) = 0;

    virtual antlrcpp::Any visitFor_locking_clause(GreenPlumParser::For_locking_clauseContext *context) = 0;

    virtual antlrcpp::Any visitFor_locking_item(GreenPlumParser::For_locking_itemContext *context) = 0;

    virtual antlrcpp::Any visitLocked_rels_list(GreenPlumParser::Locked_rels_listContext *context) = 0;

    virtual antlrcpp::Any visitValues_clause(GreenPlumParser::Values_clauseContext *context) = 0;

    virtual antlrcpp::Any visitFrom_clause(GreenPlumParser::From_clauseContext *context) = 0;

    virtual antlrcpp::Any visitFrom_list(GreenPlumParser::From_listContext *context) = 0;

    virtual antlrcpp::Any visitTable_ref_subquery(GreenPlumParser::Table_ref_subqueryContext *context) = 0;

    virtual antlrcpp::Any visitTable_ref_parens(GreenPlumParser::Table_ref_parensContext *context) = 0;

    virtual antlrcpp::Any visitTable_ref_normal(GreenPlumParser::Table_ref_normalContext *context) = 0;

    virtual antlrcpp::Any visitTable_ref_func2(GreenPlumParser::Table_ref_func2Context *context) = 0;

    virtual antlrcpp::Any visitTable_ref_func1(GreenPlumParser::Table_ref_func1Context *context) = 0;

    virtual antlrcpp::Any visitTable_ref_joinable(GreenPlumParser::Table_ref_joinableContext *context) = 0;

    virtual antlrcpp::Any visitJoin_type(GreenPlumParser::Join_typeContext *context) = 0;

    virtual antlrcpp::Any visitJoin_qual(GreenPlumParser::Join_qualContext *context) = 0;

    virtual antlrcpp::Any visitRelation_expr(GreenPlumParser::Relation_exprContext *context) = 0;

    virtual antlrcpp::Any visitRelation_expr_opt_alias(GreenPlumParser::Relation_expr_opt_aliasContext *context) = 0;

    virtual antlrcpp::Any visitFunc_table(GreenPlumParser::Func_tableContext *context) = 0;

    virtual antlrcpp::Any visitWhere_clause(GreenPlumParser::Where_clauseContext *context) = 0;

    virtual antlrcpp::Any visitWhere_or_current_clause(GreenPlumParser::Where_or_current_clauseContext *context) = 0;

    virtual antlrcpp::Any visitTable_func_element_list(GreenPlumParser::Table_func_element_listContext *context) = 0;

    virtual antlrcpp::Any visitTable_func_element(GreenPlumParser::Table_func_elementContext *context) = 0;

    virtual antlrcpp::Any visitTypename_pg(GreenPlumParser::Typename_pgContext *context) = 0;

    virtual antlrcpp::Any visitOpt_array_bounds(GreenPlumParser::Opt_array_boundsContext *context) = 0;

    virtual antlrcpp::Any visitSimple_typename(GreenPlumParser::Simple_typenameContext *context) = 0;

    virtual antlrcpp::Any visitConst_typename(GreenPlumParser::Const_typenameContext *context) = 0;

    virtual antlrcpp::Any visitGeneric_type(GreenPlumParser::Generic_typeContext *context) = 0;

    virtual antlrcpp::Any visitNumeric(GreenPlumParser::NumericContext *context) = 0;

    virtual antlrcpp::Any visitBit(GreenPlumParser::BitContext *context) = 0;

    virtual antlrcpp::Any visitConst_bit(GreenPlumParser::Const_bitContext *context) = 0;

    virtual antlrcpp::Any visitBit_with_length(GreenPlumParser::Bit_with_lengthContext *context) = 0;

    virtual antlrcpp::Any visitBit_without_length(GreenPlumParser::Bit_without_lengthContext *context) = 0;

    virtual antlrcpp::Any visitMulti_character(GreenPlumParser::Multi_characterContext *context) = 0;

    virtual antlrcpp::Any visitConst_character(GreenPlumParser::Const_characterContext *context) = 0;

    virtual antlrcpp::Any visitCharacter_with_length(GreenPlumParser::Character_with_lengthContext *context) = 0;

    virtual antlrcpp::Any visitCharacter_without_length(GreenPlumParser::Character_without_lengthContext *context) = 0;

    virtual antlrcpp::Any visitCharacter(GreenPlumParser::CharacterContext *context) = 0;

    virtual antlrcpp::Any visitOpt_charset(GreenPlumParser::Opt_charsetContext *context) = 0;

    virtual antlrcpp::Any visitConst_datatime(GreenPlumParser::Const_datatimeContext *context) = 0;

    virtual antlrcpp::Any visitConst_interval(GreenPlumParser::Const_intervalContext *context) = 0;

    virtual antlrcpp::Any visitOpt_timezone(GreenPlumParser::Opt_timezoneContext *context) = 0;

    virtual antlrcpp::Any visitOpt_interval(GreenPlumParser::Opt_intervalContext *context) = 0;

    virtual antlrcpp::Any visitA_expr(GreenPlumParser::A_exprContext *context) = 0;

    virtual antlrcpp::Any visitLogical_expr(GreenPlumParser::Logical_exprContext *context) = 0;

    virtual antlrcpp::Any visitMultiset_expr(GreenPlumParser::Multiset_exprContext *context) = 0;

    virtual antlrcpp::Any visitRelational_expr(GreenPlumParser::Relational_exprContext *context) = 0;

    virtual antlrcpp::Any visitRelational_op(GreenPlumParser::Relational_opContext *context) = 0;

    virtual antlrcpp::Any visitCompound_expr(GreenPlumParser::Compound_exprContext *context) = 0;

    virtual antlrcpp::Any visitBetween_elements(GreenPlumParser::Between_elementsContext *context) = 0;

    virtual antlrcpp::Any visitConcatenation_list(GreenPlumParser::Concatenation_listContext *context) = 0;

    virtual antlrcpp::Any visitConcatenation(GreenPlumParser::ConcatenationContext *context) = 0;

    virtual antlrcpp::Any visitModel_expr(GreenPlumParser::Model_exprContext *context) = 0;

    virtual antlrcpp::Any visitUnary_expr(GreenPlumParser::Unary_exprContext *context) = 0;

    virtual antlrcpp::Any visitC_expr(GreenPlumParser::C_exprContext *context) = 0;

    virtual antlrcpp::Any visitScatter_clause(GreenPlumParser::Scatter_clauseContext *context) = 0;

    virtual antlrcpp::Any visitTable_value_select_clause(GreenPlumParser::Table_value_select_clauseContext *context) = 0;

    virtual antlrcpp::Any visitSimple_func(GreenPlumParser::Simple_funcContext *context) = 0;

    virtual antlrcpp::Any visitSimple_func_params(GreenPlumParser::Simple_func_paramsContext *context) = 0;

    virtual antlrcpp::Any visitFunc_expr(GreenPlumParser::Func_exprContext *context) = 0;

    virtual antlrcpp::Any visitXml_root_version(GreenPlumParser::Xml_root_versionContext *context) = 0;

    virtual antlrcpp::Any visitOpt_xml_root_standalone(GreenPlumParser::Opt_xml_root_standaloneContext *context) = 0;

    virtual antlrcpp::Any visitXml_attributes(GreenPlumParser::Xml_attributesContext *context) = 0;

    virtual antlrcpp::Any visitXml_attribute_list(GreenPlumParser::Xml_attribute_listContext *context) = 0;

    virtual antlrcpp::Any visitXml_attribute_el(GreenPlumParser::Xml_attribute_elContext *context) = 0;

    virtual antlrcpp::Any visitDocument_or_content(GreenPlumParser::Document_or_contentContext *context) = 0;

    virtual antlrcpp::Any visitXml_whitespace_option(GreenPlumParser::Xml_whitespace_optionContext *context) = 0;

    virtual antlrcpp::Any visitXmlexists_argument(GreenPlumParser::Xmlexists_argumentContext *context) = 0;

    virtual antlrcpp::Any visitWindow_clause(GreenPlumParser::Window_clauseContext *context) = 0;

    virtual antlrcpp::Any visitWindow_definition_list(GreenPlumParser::Window_definition_listContext *context) = 0;

    virtual antlrcpp::Any visitWindow_definition(GreenPlumParser::Window_definitionContext *context) = 0;

    virtual antlrcpp::Any visitWindow_specification(GreenPlumParser::Window_specificationContext *context) = 0;

    virtual antlrcpp::Any visitOpt_partition_clause(GreenPlumParser::Opt_partition_clauseContext *context) = 0;

    virtual antlrcpp::Any visitWindow_frame_clause(GreenPlumParser::Window_frame_clauseContext *context) = 0;

    virtual antlrcpp::Any visitWindow_frame_units(GreenPlumParser::Window_frame_unitsContext *context) = 0;

    virtual antlrcpp::Any visitWindow_frame_extent(GreenPlumParser::Window_frame_extentContext *context) = 0;

    virtual antlrcpp::Any visitWindow_frame_start(GreenPlumParser::Window_frame_startContext *context) = 0;

    virtual antlrcpp::Any visitWindow_frame_between(GreenPlumParser::Window_frame_betweenContext *context) = 0;

    virtual antlrcpp::Any visitWindow_frame_bound(GreenPlumParser::Window_frame_boundContext *context) = 0;

    virtual antlrcpp::Any visitWindow_frame_exclusion(GreenPlumParser::Window_frame_exclusionContext *context) = 0;

    virtual antlrcpp::Any visitRow(GreenPlumParser::RowContext *context) = 0;

    virtual antlrcpp::Any visitOp_signs(GreenPlumParser::Op_signsContext *context) = 0;

    virtual antlrcpp::Any visitAll_Op(GreenPlumParser::All_OpContext *context) = 0;

    virtual antlrcpp::Any visitQual_Op(GreenPlumParser::Qual_OpContext *context) = 0;

    virtual antlrcpp::Any visitQual_all_Op(GreenPlumParser::Qual_all_OpContext *context) = 0;

    virtual antlrcpp::Any visitSubquery_Op(GreenPlumParser::Subquery_OpContext *context) = 0;

    virtual antlrcpp::Any visitParen_expr_list(GreenPlumParser::Paren_expr_listContext *context) = 0;

    virtual antlrcpp::Any visitExpr_list(GreenPlumParser::Expr_listContext *context) = 0;

    virtual antlrcpp::Any visitType_list(GreenPlumParser::Type_listContext *context) = 0;

    virtual antlrcpp::Any visitArray_expr(GreenPlumParser::Array_exprContext *context) = 0;

    virtual antlrcpp::Any visitArray_expr_list(GreenPlumParser::Array_expr_listContext *context) = 0;

    virtual antlrcpp::Any visitExtract_list(GreenPlumParser::Extract_listContext *context) = 0;

    virtual antlrcpp::Any visitExtract_arg(GreenPlumParser::Extract_argContext *context) = 0;

    virtual antlrcpp::Any visitOverlay_list(GreenPlumParser::Overlay_listContext *context) = 0;

    virtual antlrcpp::Any visitOverlay_placing(GreenPlumParser::Overlay_placingContext *context) = 0;

    virtual antlrcpp::Any visitPosition_list(GreenPlumParser::Position_listContext *context) = 0;

    virtual antlrcpp::Any visitSubstr_list(GreenPlumParser::Substr_listContext *context) = 0;

    virtual antlrcpp::Any visitSubstr_from(GreenPlumParser::Substr_fromContext *context) = 0;

    virtual antlrcpp::Any visitSubstr_for(GreenPlumParser::Substr_forContext *context) = 0;

    virtual antlrcpp::Any visitTrim_list(GreenPlumParser::Trim_listContext *context) = 0;

    virtual antlrcpp::Any visitIn_expr(GreenPlumParser::In_exprContext *context) = 0;

    virtual antlrcpp::Any visitCase_expr(GreenPlumParser::Case_exprContext *context) = 0;

    virtual antlrcpp::Any visitWhen_clause(GreenPlumParser::When_clauseContext *context) = 0;

    virtual antlrcpp::Any visitWhen_operand(GreenPlumParser::When_operandContext *context) = 0;

    virtual antlrcpp::Any visitCase_default(GreenPlumParser::Case_defaultContext *context) = 0;

    virtual antlrcpp::Any visitCase_arg(GreenPlumParser::Case_argContext *context) = 0;

    virtual antlrcpp::Any visitDecode_expr(GreenPlumParser::Decode_exprContext *context) = 0;

    virtual antlrcpp::Any visitSearch_result(GreenPlumParser::Search_resultContext *context) = 0;

    virtual antlrcpp::Any visitDecode_default(GreenPlumParser::Decode_defaultContext *context) = 0;

    virtual antlrcpp::Any visitColumnref(GreenPlumParser::ColumnrefContext *context) = 0;

    virtual antlrcpp::Any visitIndirection_el(GreenPlumParser::Indirection_elContext *context) = 0;

    virtual antlrcpp::Any visitIndirection(GreenPlumParser::IndirectionContext *context) = 0;

    virtual antlrcpp::Any visitCtext_expr(GreenPlumParser::Ctext_exprContext *context) = 0;

    virtual antlrcpp::Any visitCtext_expr_list(GreenPlumParser::Ctext_expr_listContext *context) = 0;

    virtual antlrcpp::Any visitCtext_row(GreenPlumParser::Ctext_rowContext *context) = 0;

    virtual antlrcpp::Any visitTarget_list(GreenPlumParser::Target_listContext *context) = 0;

    virtual antlrcpp::Any visitTarget_el_normal(GreenPlumParser::Target_el_normalContext *context) = 0;

    virtual antlrcpp::Any visitTarget_el_asterisk(GreenPlumParser::Target_el_asteriskContext *context) = 0;

    virtual antlrcpp::Any visitRelation_name(GreenPlumParser::Relation_nameContext *context) = 0;

    virtual antlrcpp::Any visitQualified_name_list(GreenPlumParser::Qualified_name_listContext *context) = 0;

    virtual antlrcpp::Any visitQualified_name(GreenPlumParser::Qualified_nameContext *context) = 0;

    virtual antlrcpp::Any visitName_list(GreenPlumParser::Name_listContext *context) = 0;

    virtual antlrcpp::Any visitName(GreenPlumParser::NameContext *context) = 0;

    virtual antlrcpp::Any visitCte_name(GreenPlumParser::Cte_nameContext *context) = 0;

    virtual antlrcpp::Any visitDatabase_name(GreenPlumParser::Database_nameContext *context) = 0;

    virtual antlrcpp::Any visitAccess_method(GreenPlumParser::Access_methodContext *context) = 0;

    virtual antlrcpp::Any visitAttr_name(GreenPlumParser::Attr_nameContext *context) = 0;

    virtual antlrcpp::Any visitIndex_name(GreenPlumParser::Index_nameContext *context) = 0;

    virtual antlrcpp::Any visitFile_name(GreenPlumParser::File_nameContext *context) = 0;

    virtual antlrcpp::Any visitFunc_name(GreenPlumParser::Func_nameContext *context) = 0;

    virtual antlrcpp::Any visitA_expr_const(GreenPlumParser::A_expr_constContext *context) = 0;

    virtual antlrcpp::Any visitIconst(GreenPlumParser::IconstContext *context) = 0;

    virtual antlrcpp::Any visitSconst(GreenPlumParser::SconstContext *context) = 0;

    virtual antlrcpp::Any visitRole_id(GreenPlumParser::Role_idContext *context) = 0;

    virtual antlrcpp::Any visitQueue_id(GreenPlumParser::Queue_idContext *context) = 0;

    virtual antlrcpp::Any visitSigned_iconst(GreenPlumParser::Signed_iconstContext *context) = 0;

    virtual antlrcpp::Any visitColid(GreenPlumParser::ColidContext *context) = 0;

    virtual antlrcpp::Any visitType_function_name(GreenPlumParser::Type_function_nameContext *context) = 0;

    virtual antlrcpp::Any visitCol_label(GreenPlumParser::Col_labelContext *context) = 0;

    virtual antlrcpp::Any visitIdentifier(GreenPlumParser::IdentifierContext *context) = 0;

    virtual antlrcpp::Any visitUnreserved_keyword(GreenPlumParser::Unreserved_keywordContext *context) = 0;

    virtual antlrcpp::Any visitKeywords_ok_in_alias_no_as(GreenPlumParser::Keywords_ok_in_alias_no_asContext *context) = 0;

    virtual antlrcpp::Any visitPartition_colid(GreenPlumParser::Partition_colidContext *context) = 0;

    virtual antlrcpp::Any visitPartition_ident_key_word(GreenPlumParser::Partition_ident_key_wordContext *context) = 0;

    virtual antlrcpp::Any visitCol_name_keyword(GreenPlumParser::Col_name_keywordContext *context) = 0;

    virtual antlrcpp::Any visitType_func_name_keyword(GreenPlumParser::Type_func_name_keywordContext *context) = 0;

    virtual antlrcpp::Any visitReserved_keyword(GreenPlumParser::Reserved_keywordContext *context) = 0;

    virtual antlrcpp::Any visitSpecial_rule_relation(GreenPlumParser::Special_rule_relationContext *context) = 0;


};


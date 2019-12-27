
// Generated from KingbaseSqlParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "KingbaseSqlParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by KingbaseSqlParser.
 */
class  KingbaseSqlParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by KingbaseSqlParser.
   */
    virtual antlrcpp::Any visitSql_script(KingbaseSqlParser::Sql_scriptContext *context) = 0;

    virtual antlrcpp::Any visitUnit_sql_statement(KingbaseSqlParser::Unit_sql_statementContext *context) = 0;

    virtual antlrcpp::Any visitUnit_statement(KingbaseSqlParser::Unit_statementContext *context) = 0;

    virtual antlrcpp::Any visitAlter_full_search_configuration(KingbaseSqlParser::Alter_full_search_configurationContext *context) = 0;

    virtual antlrcpp::Any visitToken_or_dictionary(KingbaseSqlParser::Token_or_dictionaryContext *context) = 0;

    virtual antlrcpp::Any visitAlter_full_search_dictionary(KingbaseSqlParser::Alter_full_search_dictionaryContext *context) = 0;

    virtual antlrcpp::Any visitAlter_full_search_parser(KingbaseSqlParser::Alter_full_search_parserContext *context) = 0;

    virtual antlrcpp::Any visitAlter_full_search_template(KingbaseSqlParser::Alter_full_search_templateContext *context) = 0;

    virtual antlrcpp::Any visitDrop_full_search(KingbaseSqlParser::Drop_full_searchContext *context) = 0;

    virtual antlrcpp::Any visitDrop_index_schema_sequence_table_view(KingbaseSqlParser::Drop_index_schema_sequence_table_viewContext *context) = 0;

    virtual antlrcpp::Any visitDrop_materialize_view(KingbaseSqlParser::Drop_materialize_viewContext *context) = 0;

    virtual antlrcpp::Any visitDrop_synonym(KingbaseSqlParser::Drop_synonymContext *context) = 0;

    virtual antlrcpp::Any visitDrop_tablespace(KingbaseSqlParser::Drop_tablespaceContext *context) = 0;

    virtual antlrcpp::Any visitDrop_directory(KingbaseSqlParser::Drop_directoryContext *context) = 0;

    virtual antlrcpp::Any visitAlter_function(KingbaseSqlParser::Alter_functionContext *context) = 0;

    virtual antlrcpp::Any visitDrop_function(KingbaseSqlParser::Drop_functionContext *context) = 0;

    virtual antlrcpp::Any visitCreate_function_statement(KingbaseSqlParser::Create_function_statementContext *context) = 0;

    virtual antlrcpp::Any visitSequence_of_statements(KingbaseSqlParser::Sequence_of_statementsContext *context) = 0;

    virtual antlrcpp::Any visitSequence_of_statement(KingbaseSqlParser::Sequence_of_statementContext *context) = 0;

    virtual antlrcpp::Any visitCreate_package(KingbaseSqlParser::Create_packageContext *context) = 0;

    virtual antlrcpp::Any visitAlter_package(KingbaseSqlParser::Alter_packageContext *context) = 0;

    virtual antlrcpp::Any visitDrop_package(KingbaseSqlParser::Drop_packageContext *context) = 0;

    virtual antlrcpp::Any visitPackage_names(KingbaseSqlParser::Package_namesContext *context) = 0;

    virtual antlrcpp::Any visitPackage_name(KingbaseSqlParser::Package_nameContext *context) = 0;

    virtual antlrcpp::Any visitPackage_body(KingbaseSqlParser::Package_bodyContext *context) = 0;

    virtual antlrcpp::Any visitInitialization_statement(KingbaseSqlParser::Initialization_statementContext *context) = 0;

    virtual antlrcpp::Any visitProcedure_definition(KingbaseSqlParser::Procedure_definitionContext *context) = 0;

    virtual antlrcpp::Any visitFunction_definition(KingbaseSqlParser::Function_definitionContext *context) = 0;

    virtual antlrcpp::Any visitDrop_procedure(KingbaseSqlParser::Drop_procedureContext *context) = 0;

    virtual antlrcpp::Any visitAlter_procedure(KingbaseSqlParser::Alter_procedureContext *context) = 0;

    virtual antlrcpp::Any visitCreate_procedure_statement(KingbaseSqlParser::Create_procedure_statementContext *context) = 0;

    virtual antlrcpp::Any visitPlsql_block(KingbaseSqlParser::Plsql_blockContext *context) = 0;

    virtual antlrcpp::Any visitDeclare_statement(KingbaseSqlParser::Declare_statementContext *context) = 0;

    virtual antlrcpp::Any visitDrop_trigger(KingbaseSqlParser::Drop_triggerContext *context) = 0;

    virtual antlrcpp::Any visitAlter_trigger(KingbaseSqlParser::Alter_triggerContext *context) = 0;

    virtual antlrcpp::Any visitCreate_trigger(KingbaseSqlParser::Create_triggerContext *context) = 0;

    virtual antlrcpp::Any visitExecute_procedure_statement(KingbaseSqlParser::Execute_procedure_statementContext *context) = 0;

    virtual antlrcpp::Any visitDml_event_clause(KingbaseSqlParser::Dml_event_clauseContext *context) = 0;

    virtual antlrcpp::Any visitDml_event_element(KingbaseSqlParser::Dml_event_elementContext *context) = 0;

    virtual antlrcpp::Any visitDrop_type(KingbaseSqlParser::Drop_typeContext *context) = 0;

    virtual antlrcpp::Any visitCreate_type(KingbaseSqlParser::Create_typeContext *context) = 0;

    virtual antlrcpp::Any visitType_options(KingbaseSqlParser::Type_optionsContext *context) = 0;

    virtual antlrcpp::Any visitType_elements_parameter(KingbaseSqlParser::Type_elements_parameterContext *context) = 0;

    virtual antlrcpp::Any visitDrop_sequence(KingbaseSqlParser::Drop_sequenceContext *context) = 0;

    virtual antlrcpp::Any visitAlter_sequence(KingbaseSqlParser::Alter_sequenceContext *context) = 0;

    virtual antlrcpp::Any visitAlter_synonym(KingbaseSqlParser::Alter_synonymContext *context) = 0;

    virtual antlrcpp::Any visitAlter_system(KingbaseSqlParser::Alter_systemContext *context) = 0;

    virtual antlrcpp::Any visitSystem_spec(KingbaseSqlParser::System_specContext *context) = 0;

    virtual antlrcpp::Any visitCreate_sequence(KingbaseSqlParser::Create_sequenceContext *context) = 0;

    virtual antlrcpp::Any visitSequence_spec(KingbaseSqlParser::Sequence_specContext *context) = 0;

    virtual antlrcpp::Any visitCreate_index(KingbaseSqlParser::Create_indexContext *context) = 0;

    virtual antlrcpp::Any visitCreate_full_index(KingbaseSqlParser::Create_full_indexContext *context) = 0;

    virtual antlrcpp::Any visitIndex_expr(KingbaseSqlParser::Index_exprContext *context) = 0;

    virtual antlrcpp::Any visitIndextype(KingbaseSqlParser::IndextypeContext *context) = 0;

    virtual antlrcpp::Any visitAlter_index(KingbaseSqlParser::Alter_indexContext *context) = 0;

    virtual antlrcpp::Any visitAlter_schema(KingbaseSqlParser::Alter_schemaContext *context) = 0;

    virtual antlrcpp::Any visitNew_partition_name(KingbaseSqlParser::New_partition_nameContext *context) = 0;

    virtual antlrcpp::Any visitCreate_user(KingbaseSqlParser::Create_userContext *context) = 0;

    virtual antlrcpp::Any visitCreate_role(KingbaseSqlParser::Create_roleContext *context) = 0;

    virtual antlrcpp::Any visitAlter_user(KingbaseSqlParser::Alter_userContext *context) = 0;

    virtual antlrcpp::Any visitAlter_role(KingbaseSqlParser::Alter_roleContext *context) = 0;

    virtual antlrcpp::Any visitDrop_role(KingbaseSqlParser::Drop_roleContext *context) = 0;

    virtual antlrcpp::Any visitDrop_user(KingbaseSqlParser::Drop_userContext *context) = 0;

    virtual antlrcpp::Any visitDrop_owned(KingbaseSqlParser::Drop_ownedContext *context) = 0;

    virtual antlrcpp::Any visitReassign_owned(KingbaseSqlParser::Reassign_ownedContext *context) = 0;

    virtual antlrcpp::Any visitEnable_user_ip(KingbaseSqlParser::Enable_user_ipContext *context) = 0;

    virtual antlrcpp::Any visitIdentified_by(KingbaseSqlParser::Identified_byContext *context) = 0;

    virtual antlrcpp::Any visitIdentified_other_clause(KingbaseSqlParser::Identified_other_clauseContext *context) = 0;

    virtual antlrcpp::Any visitUser_tablespace_clause(KingbaseSqlParser::User_tablespace_clauseContext *context) = 0;

    virtual antlrcpp::Any visitProfile_clause(KingbaseSqlParser::Profile_clauseContext *context) = 0;

    virtual antlrcpp::Any visitAnalyze(KingbaseSqlParser::AnalyzeContext *context) = 0;

    virtual antlrcpp::Any visitCheckpoint(KingbaseSqlParser::CheckpointContext *context) = 0;

    virtual antlrcpp::Any visitCluster(KingbaseSqlParser::ClusterContext *context) = 0;

    virtual antlrcpp::Any visitComment(KingbaseSqlParser::CommentContext *context) = 0;

    virtual antlrcpp::Any visitComment_spec(KingbaseSqlParser::Comment_specContext *context) = 0;

    virtual antlrcpp::Any visitCopy_datafile(KingbaseSqlParser::Copy_datafileContext *context) = 0;

    virtual antlrcpp::Any visitCreate_database(KingbaseSqlParser::Create_databaseContext *context) = 0;

    virtual antlrcpp::Any visitCreate_full_search_configuration(KingbaseSqlParser::Create_full_search_configurationContext *context) = 0;

    virtual antlrcpp::Any visitCreate_full_search_dictionary(KingbaseSqlParser::Create_full_search_dictionaryContext *context) = 0;

    virtual antlrcpp::Any visitCreate_full_search_parser(KingbaseSqlParser::Create_full_search_parserContext *context) = 0;

    virtual antlrcpp::Any visitCreate_full_search_template(KingbaseSqlParser::Create_full_search_templateContext *context) = 0;

    virtual antlrcpp::Any visitDrop_index(KingbaseSqlParser::Drop_indexContext *context) = 0;

    virtual antlrcpp::Any visitGrant_statement(KingbaseSqlParser::Grant_statementContext *context) = 0;

    virtual antlrcpp::Any visitGrant_object_privilege(KingbaseSqlParser::Grant_object_privilegeContext *context) = 0;

    virtual antlrcpp::Any visitGrant_column_privilege(KingbaseSqlParser::Grant_column_privilegeContext *context) = 0;

    virtual antlrcpp::Any visitGrant_role_privilege(KingbaseSqlParser::Grant_role_privilegeContext *context) = 0;

    virtual antlrcpp::Any visitRevoke_statement(KingbaseSqlParser::Revoke_statementContext *context) = 0;

    virtual antlrcpp::Any visitRevoke_object_privilege(KingbaseSqlParser::Revoke_object_privilegeContext *context) = 0;

    virtual antlrcpp::Any visitRevoke_role_privilege(KingbaseSqlParser::Revoke_role_privilegeContext *context) = 0;

    virtual antlrcpp::Any visitCreate_directory(KingbaseSqlParser::Create_directoryContext *context) = 0;

    virtual antlrcpp::Any visitDirectory_name(KingbaseSqlParser::Directory_nameContext *context) = 0;

    virtual antlrcpp::Any visitDirectory_path(KingbaseSqlParser::Directory_pathContext *context) = 0;

    virtual antlrcpp::Any visitDbcc_checkallocate(KingbaseSqlParser::Dbcc_checkallocateContext *context) = 0;

    virtual antlrcpp::Any visitDbcc_checkcatalog(KingbaseSqlParser::Dbcc_checkcatalogContext *context) = 0;

    virtual antlrcpp::Any visitDbcc_checktable(KingbaseSqlParser::Dbcc_checktableContext *context) = 0;

    virtual antlrcpp::Any visitDbcc_checkindex(KingbaseSqlParser::Dbcc_checkindexContext *context) = 0;

    virtual antlrcpp::Any visitDbcc_checktablespace(KingbaseSqlParser::Dbcc_checktablespaceContext *context) = 0;

    virtual antlrcpp::Any visitDbcc_checkdb(KingbaseSqlParser::Dbcc_checkdbContext *context) = 0;

    virtual antlrcpp::Any visitCreate_view(KingbaseSqlParser::Create_viewContext *context) = 0;

    virtual antlrcpp::Any visitCreate_rule(KingbaseSqlParser::Create_ruleContext *context) = 0;

    virtual antlrcpp::Any visitRulename(KingbaseSqlParser::RulenameContext *context) = 0;

    virtual antlrcpp::Any visitEvent(KingbaseSqlParser::EventContext *context) = 0;

    virtual antlrcpp::Any visitCreate_force_view(KingbaseSqlParser::Create_force_viewContext *context) = 0;

    virtual antlrcpp::Any visitAlter_tablespace(KingbaseSqlParser::Alter_tablespaceContext *context) = 0;

    virtual antlrcpp::Any visitTablespace_state_clauses(KingbaseSqlParser::Tablespace_state_clausesContext *context) = 0;

    virtual antlrcpp::Any visitNew_tablespace_name(KingbaseSqlParser::New_tablespace_nameContext *context) = 0;

    virtual antlrcpp::Any visitCreate_tablespace(KingbaseSqlParser::Create_tablespaceContext *context) = 0;

    virtual antlrcpp::Any visitTablespace_retention_clause(KingbaseSqlParser::Tablespace_retention_clauseContext *context) = 0;

    virtual antlrcpp::Any visitBuild_clause(KingbaseSqlParser::Build_clauseContext *context) = 0;

    virtual antlrcpp::Any visitAlter_materialized_view(KingbaseSqlParser::Alter_materialized_viewContext *context) = 0;

    virtual antlrcpp::Any visitInterval_expr(KingbaseSqlParser::Interval_exprContext *context) = 0;

    virtual antlrcpp::Any visitCreate_materialized_view(KingbaseSqlParser::Create_materialized_viewContext *context) = 0;

    virtual antlrcpp::Any visitCreate_schema(KingbaseSqlParser::Create_schemaContext *context) = 0;

    virtual antlrcpp::Any visitCreate_table(KingbaseSqlParser::Create_tableContext *context) = 0;

    virtual antlrcpp::Any visitCreate_table_without_select(KingbaseSqlParser::Create_table_without_selectContext *context) = 0;

    virtual antlrcpp::Any visitCreate_table_as_select(KingbaseSqlParser::Create_table_as_selectContext *context) = 0;

    virtual antlrcpp::Any visitCreate_table_select_into(KingbaseSqlParser::Create_table_select_intoContext *context) = 0;

    virtual antlrcpp::Any visitColumn_with_datatype_list(KingbaseSqlParser::Column_with_datatype_listContext *context) = 0;

    virtual antlrcpp::Any visitColumn_with_datatype(KingbaseSqlParser::Column_with_datatypeContext *context) = 0;

    virtual antlrcpp::Any visitColumn_constraint(KingbaseSqlParser::Column_constraintContext *context) = 0;

    virtual antlrcpp::Any visitTable_constraint(KingbaseSqlParser::Table_constraintContext *context) = 0;

    virtual antlrcpp::Any visitAction(KingbaseSqlParser::ActionContext *context) = 0;

    virtual antlrcpp::Any visitSubpartition_name(KingbaseSqlParser::Subpartition_nameContext *context) = 0;

    virtual antlrcpp::Any visitDrop_table(KingbaseSqlParser::Drop_tableContext *context) = 0;

    virtual antlrcpp::Any visitAllow_or_disallow(KingbaseSqlParser::Allow_or_disallowContext *context) = 0;

    virtual antlrcpp::Any visitCreate_synonym(KingbaseSqlParser::Create_synonymContext *context) = 0;

    virtual antlrcpp::Any visitComment_on_table(KingbaseSqlParser::Comment_on_tableContext *context) = 0;

    virtual antlrcpp::Any visitDatabase_name(KingbaseSqlParser::Database_nameContext *context) = 0;

    virtual antlrcpp::Any visitAlter_database(KingbaseSqlParser::Alter_databaseContext *context) = 0;

    virtual antlrcpp::Any visitAlter_table(KingbaseSqlParser::Alter_tableContext *context) = 0;

    virtual antlrcpp::Any visitAlter_table_add_properties(KingbaseSqlParser::Alter_table_add_propertiesContext *context) = 0;

    virtual antlrcpp::Any visitAlter_table_change_properties(KingbaseSqlParser::Alter_table_change_propertiesContext *context) = 0;

    virtual antlrcpp::Any visitAlter_table_drop_properties(KingbaseSqlParser::Alter_table_drop_propertiesContext *context) = 0;

    virtual antlrcpp::Any visitAlter_table_rename_properties(KingbaseSqlParser::Alter_table_rename_propertiesContext *context) = 0;

    virtual antlrcpp::Any visitAlter_table_truncate_properties(KingbaseSqlParser::Alter_table_truncate_propertiesContext *context) = 0;

    virtual antlrcpp::Any visitAlter_table_others(KingbaseSqlParser::Alter_table_othersContext *context) = 0;

    virtual antlrcpp::Any visitTablespace(KingbaseSqlParser::TablespaceContext *context) = 0;

    virtual antlrcpp::Any visitPartition_name(KingbaseSqlParser::Partition_nameContext *context) = 0;

    virtual antlrcpp::Any visitColumn_or_attribute(KingbaseSqlParser::Column_or_attributeContext *context) = 0;

    virtual antlrcpp::Any visitParameter(KingbaseSqlParser::ParameterContext *context) = 0;

    virtual antlrcpp::Any visitDefault_value_part(KingbaseSqlParser::Default_value_partContext *context) = 0;

    virtual antlrcpp::Any visitParameter_list(KingbaseSqlParser::Parameter_listContext *context) = 0;

    virtual antlrcpp::Any visitParen_parameter_list(KingbaseSqlParser::Paren_parameter_listContext *context) = 0;

    virtual antlrcpp::Any visitVariable_declaration(KingbaseSqlParser::Variable_declarationContext *context) = 0;

    virtual antlrcpp::Any visitVariable_declarations(KingbaseSqlParser::Variable_declarationsContext *context) = 0;

    virtual antlrcpp::Any visitCursor_declaration(KingbaseSqlParser::Cursor_declarationContext *context) = 0;

    virtual antlrcpp::Any visitCursor_declarations(KingbaseSqlParser::Cursor_declarationsContext *context) = 0;

    virtual antlrcpp::Any visitParameter_spec(KingbaseSqlParser::Parameter_specContext *context) = 0;

    virtual antlrcpp::Any visitRecord_type_def(KingbaseSqlParser::Record_type_defContext *context) = 0;

    virtual antlrcpp::Any visitField_spec(KingbaseSqlParser::Field_specContext *context) = 0;

    virtual antlrcpp::Any visitRef_cursor_type_def(KingbaseSqlParser::Ref_cursor_type_defContext *context) = 0;

    virtual antlrcpp::Any visitType_declaration(KingbaseSqlParser::Type_declarationContext *context) = 0;

    virtual antlrcpp::Any visitTable_type_def(KingbaseSqlParser::Table_type_defContext *context) = 0;

    virtual antlrcpp::Any visitTable_indexed_by_part(KingbaseSqlParser::Table_indexed_by_partContext *context) = 0;

    virtual antlrcpp::Any visitVarray_type_def(KingbaseSqlParser::Varray_type_defContext *context) = 0;

    virtual antlrcpp::Any visitSeq_of_statements(KingbaseSqlParser::Seq_of_statementsContext *context) = 0;

    virtual antlrcpp::Any visitLabel_declaration(KingbaseSqlParser::Label_declarationContext *context) = 0;

    virtual antlrcpp::Any visitStatement(KingbaseSqlParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitAssignment_statement(KingbaseSqlParser::Assignment_statementContext *context) = 0;

    virtual antlrcpp::Any visitContinue_statement(KingbaseSqlParser::Continue_statementContext *context) = 0;

    virtual antlrcpp::Any visitExit_statement(KingbaseSqlParser::Exit_statementContext *context) = 0;

    virtual antlrcpp::Any visitGoto_statement(KingbaseSqlParser::Goto_statementContext *context) = 0;

    virtual antlrcpp::Any visitIf_statement(KingbaseSqlParser::If_statementContext *context) = 0;

    virtual antlrcpp::Any visitElsif_part(KingbaseSqlParser::Elsif_partContext *context) = 0;

    virtual antlrcpp::Any visitElse_part(KingbaseSqlParser::Else_partContext *context) = 0;

    virtual antlrcpp::Any visitLoop_statement(KingbaseSqlParser::Loop_statementContext *context) = 0;

    virtual antlrcpp::Any visitCursor_loop_param(KingbaseSqlParser::Cursor_loop_paramContext *context) = 0;

    virtual antlrcpp::Any visitForall_statement(KingbaseSqlParser::Forall_statementContext *context) = 0;

    virtual antlrcpp::Any visitBounds_clause(KingbaseSqlParser::Bounds_clauseContext *context) = 0;

    virtual antlrcpp::Any visitBetween_bound(KingbaseSqlParser::Between_boundContext *context) = 0;

    virtual antlrcpp::Any visitLower_bound(KingbaseSqlParser::Lower_boundContext *context) = 0;

    virtual antlrcpp::Any visitUpper_bound(KingbaseSqlParser::Upper_boundContext *context) = 0;

    virtual antlrcpp::Any visitNull_statement(KingbaseSqlParser::Null_statementContext *context) = 0;

    virtual antlrcpp::Any visitRaise_statement(KingbaseSqlParser::Raise_statementContext *context) = 0;

    virtual antlrcpp::Any visitReturn_statement(KingbaseSqlParser::Return_statementContext *context) = 0;

    virtual antlrcpp::Any visitFunction_call(KingbaseSqlParser::Function_callContext *context) = 0;

    virtual antlrcpp::Any visitProcedure_call(KingbaseSqlParser::Procedure_callContext *context) = 0;

    virtual antlrcpp::Any visitPipe_row_statement(KingbaseSqlParser::Pipe_row_statementContext *context) = 0;

    virtual antlrcpp::Any visitSql_statement(KingbaseSqlParser::Sql_statementContext *context) = 0;

    virtual antlrcpp::Any visitCursor_manipulation_statements(KingbaseSqlParser::Cursor_manipulation_statementsContext *context) = 0;

    virtual antlrcpp::Any visitClose_statement(KingbaseSqlParser::Close_statementContext *context) = 0;

    virtual antlrcpp::Any visitOpen_statement(KingbaseSqlParser::Open_statementContext *context) = 0;

    virtual antlrcpp::Any visitFetch_statement(KingbaseSqlParser::Fetch_statementContext *context) = 0;

    virtual antlrcpp::Any visitDirection(KingbaseSqlParser::DirectionContext *context) = 0;

    virtual antlrcpp::Any visitCount(KingbaseSqlParser::CountContext *context) = 0;

    virtual antlrcpp::Any visitMove_statement(KingbaseSqlParser::Move_statementContext *context) = 0;

    virtual antlrcpp::Any visitTransaction_control_statements(KingbaseSqlParser::Transaction_control_statementsContext *context) = 0;

    virtual antlrcpp::Any visitTransaction_command(KingbaseSqlParser::Transaction_commandContext *context) = 0;

    virtual antlrcpp::Any visitLock_mode(KingbaseSqlParser::Lock_modeContext *context) = 0;

    virtual antlrcpp::Any visitSavepoint_command(KingbaseSqlParser::Savepoint_commandContext *context) = 0;

    virtual antlrcpp::Any visitExplain_statement(KingbaseSqlParser::Explain_statementContext *context) = 0;

    virtual antlrcpp::Any visitExplain_elements(KingbaseSqlParser::Explain_elementsContext *context) = 0;

    virtual antlrcpp::Any visitExplain_element(KingbaseSqlParser::Explain_elementContext *context) = 0;

    virtual antlrcpp::Any visitError_logging_into_part(KingbaseSqlParser::Error_logging_into_partContext *context) = 0;

    virtual antlrcpp::Any visitError_logging_reject_part(KingbaseSqlParser::Error_logging_reject_partContext *context) = 0;

    virtual antlrcpp::Any visitSql_plus_command(KingbaseSqlParser::Sql_plus_commandContext *context) = 0;

    virtual antlrcpp::Any visitGet_arguments_command(KingbaseSqlParser::Get_arguments_commandContext *context) = 0;

    virtual antlrcpp::Any visitSet_arguments_command(KingbaseSqlParser::Set_arguments_commandContext *context) = 0;

    virtual antlrcpp::Any visitCost_class_name(KingbaseSqlParser::Cost_class_nameContext *context) = 0;

    virtual antlrcpp::Any visitSavepoint_name(KingbaseSqlParser::Savepoint_nameContext *context) = 0;

    virtual antlrcpp::Any visitRollback_segment_name(KingbaseSqlParser::Rollback_segment_nameContext *context) = 0;

    virtual antlrcpp::Any visitTable_var_name(KingbaseSqlParser::Table_var_nameContext *context) = 0;

    virtual antlrcpp::Any visitSchema_name(KingbaseSqlParser::Schema_nameContext *context) = 0;

    virtual antlrcpp::Any visitRoutine_name(KingbaseSqlParser::Routine_nameContext *context) = 0;

    virtual antlrcpp::Any visitImplementation_type_name(KingbaseSqlParser::Implementation_type_nameContext *context) = 0;

    virtual antlrcpp::Any visitParameter_name(KingbaseSqlParser::Parameter_nameContext *context) = 0;

    virtual antlrcpp::Any visitReference_model_name(KingbaseSqlParser::Reference_model_nameContext *context) = 0;

    virtual antlrcpp::Any visitMain_model_name(KingbaseSqlParser::Main_model_nameContext *context) = 0;

    virtual antlrcpp::Any visitContainer_tableview_name(KingbaseSqlParser::Container_tableview_nameContext *context) = 0;

    virtual antlrcpp::Any visitGrantee_name(KingbaseSqlParser::Grantee_nameContext *context) = 0;

    virtual antlrcpp::Any visitRole_name(KingbaseSqlParser::Role_nameContext *context) = 0;

    virtual antlrcpp::Any visitType_name(KingbaseSqlParser::Type_nameContext *context) = 0;

    virtual antlrcpp::Any visitSequence_name(KingbaseSqlParser::Sequence_nameContext *context) = 0;

    virtual antlrcpp::Any visitException_name(KingbaseSqlParser::Exception_nameContext *context) = 0;

    virtual antlrcpp::Any visitFunction_name(KingbaseSqlParser::Function_nameContext *context) = 0;

    virtual antlrcpp::Any visitProcedure_name(KingbaseSqlParser::Procedure_nameContext *context) = 0;

    virtual antlrcpp::Any visitTrigger_name(KingbaseSqlParser::Trigger_nameContext *context) = 0;

    virtual antlrcpp::Any visitVariable_name(KingbaseSqlParser::Variable_nameContext *context) = 0;

    virtual antlrcpp::Any visitIndex_name(KingbaseSqlParser::Index_nameContext *context) = 0;

    virtual antlrcpp::Any visitCursor_name(KingbaseSqlParser::Cursor_nameContext *context) = 0;

    virtual antlrcpp::Any visitRecord_name(KingbaseSqlParser::Record_nameContext *context) = 0;

    virtual antlrcpp::Any visitCollection_name(KingbaseSqlParser::Collection_nameContext *context) = 0;

    virtual antlrcpp::Any visitChar_set_name(KingbaseSqlParser::Char_set_nameContext *context) = 0;

    virtual antlrcpp::Any visitSynonym_name(KingbaseSqlParser::Synonym_nameContext *context) = 0;

    virtual antlrcpp::Any visitSchema_object_name(KingbaseSqlParser::Schema_object_nameContext *context) = 0;

    virtual antlrcpp::Any visitDir_object_name(KingbaseSqlParser::Dir_object_nameContext *context) = 0;

    virtual antlrcpp::Any visitUser_object_name(KingbaseSqlParser::User_object_nameContext *context) = 0;

    virtual antlrcpp::Any visitGrant_object_name(KingbaseSqlParser::Grant_object_nameContext *context) = 0;

    virtual antlrcpp::Any visitTablename_list(KingbaseSqlParser::Tablename_listContext *context) = 0;

    virtual antlrcpp::Any visitObject_privilege(KingbaseSqlParser::Object_privilegeContext *context) = 0;

    virtual antlrcpp::Any visitColumn_privilege(KingbaseSqlParser::Column_privilegeContext *context) = 0;

    virtual antlrcpp::Any visitSystem_privilege(KingbaseSqlParser::System_privilegeContext *context) = 0;

    virtual antlrcpp::Any visitData_manipulation_language_statements(KingbaseSqlParser::Data_manipulation_language_statementsContext *context) = 0;

    virtual antlrcpp::Any visitMerge_statement(KingbaseSqlParser::Merge_statementContext *context) = 0;

    virtual antlrcpp::Any visitMerge_update_clause(KingbaseSqlParser::Merge_update_clauseContext *context) = 0;

    virtual antlrcpp::Any visitMerge_element(KingbaseSqlParser::Merge_elementContext *context) = 0;

    virtual antlrcpp::Any visitMerge_update_delete_part(KingbaseSqlParser::Merge_update_delete_partContext *context) = 0;

    virtual antlrcpp::Any visitMerge_insert_clause(KingbaseSqlParser::Merge_insert_clauseContext *context) = 0;

    virtual antlrcpp::Any visitSelected_tableview(KingbaseSqlParser::Selected_tableviewContext *context) = 0;

    virtual antlrcpp::Any visitTruncate_statement(KingbaseSqlParser::Truncate_statementContext *context) = 0;

    virtual antlrcpp::Any visitSelect_statement(KingbaseSqlParser::Select_statementContext *context) = 0;

    virtual antlrcpp::Any visitWith_clause(KingbaseSqlParser::With_clauseContext *context) = 0;

    virtual antlrcpp::Any visitWith_query(KingbaseSqlParser::With_queryContext *context) = 0;

    virtual antlrcpp::Any visitSubquery(KingbaseSqlParser::SubqueryContext *context) = 0;

    virtual antlrcpp::Any visitSubquery_basic_elements(KingbaseSqlParser::Subquery_basic_elementsContext *context) = 0;

    virtual antlrcpp::Any visitSubquery_operation_part(KingbaseSqlParser::Subquery_operation_partContext *context) = 0;

    virtual antlrcpp::Any visitDml_table_expression_clause(KingbaseSqlParser::Dml_table_expression_clauseContext *context) = 0;

    virtual antlrcpp::Any visitTable_collection_expression(KingbaseSqlParser::Table_collection_expressionContext *context) = 0;

    virtual antlrcpp::Any visitSubquery_restriction_clause(KingbaseSqlParser::Subquery_restriction_clauseContext *context) = 0;

    virtual antlrcpp::Any visitSample_clause(KingbaseSqlParser::Sample_clauseContext *context) = 0;

    virtual antlrcpp::Any visitSeed_part(KingbaseSqlParser::Seed_partContext *context) = 0;

    virtual antlrcpp::Any visitQuery_block(KingbaseSqlParser::Query_blockContext *context) = 0;

    virtual antlrcpp::Any visitTop_clause(KingbaseSqlParser::Top_clauseContext *context) = 0;

    virtual antlrcpp::Any visitStart_value(KingbaseSqlParser::Start_valueContext *context) = 0;

    virtual antlrcpp::Any visitLine_count(KingbaseSqlParser::Line_countContext *context) = 0;

    virtual antlrcpp::Any visitSelected_list(KingbaseSqlParser::Selected_listContext *context) = 0;

    virtual antlrcpp::Any visitSelected_list_element(KingbaseSqlParser::Selected_list_elementContext *context) = 0;

    virtual antlrcpp::Any visitFrom_clause(KingbaseSqlParser::From_clauseContext *context) = 0;

    virtual antlrcpp::Any visitTable_ref_list(KingbaseSqlParser::Table_ref_listContext *context) = 0;

    virtual antlrcpp::Any visitTable_ref(KingbaseSqlParser::Table_refContext *context) = 0;

    virtual antlrcpp::Any visitTable_ref_aux(KingbaseSqlParser::Table_ref_auxContext *context) = 0;

    virtual antlrcpp::Any visitTable_ref_aux_internal_one(KingbaseSqlParser::Table_ref_aux_internal_oneContext *context) = 0;

    virtual antlrcpp::Any visitTable_ref_aux_internal_two(KingbaseSqlParser::Table_ref_aux_internal_twoContext *context) = 0;

    virtual antlrcpp::Any visitTable_ref_aux_internal_three(KingbaseSqlParser::Table_ref_aux_internal_threeContext *context) = 0;

    virtual antlrcpp::Any visitWhere_clause(KingbaseSqlParser::Where_clauseContext *context) = 0;

    virtual antlrcpp::Any visitJoin_clause(KingbaseSqlParser::Join_clauseContext *context) = 0;

    virtual antlrcpp::Any visitJoin_on_part(KingbaseSqlParser::Join_on_partContext *context) = 0;

    virtual antlrcpp::Any visitJoin_using_part(KingbaseSqlParser::Join_using_partContext *context) = 0;

    virtual antlrcpp::Any visitOuter_join_type(KingbaseSqlParser::Outer_join_typeContext *context) = 0;

    virtual antlrcpp::Any visitQuery_partition_clause(KingbaseSqlParser::Query_partition_clauseContext *context) = 0;

    virtual antlrcpp::Any visitPivot_clause(KingbaseSqlParser::Pivot_clauseContext *context) = 0;

    virtual antlrcpp::Any visitPivot_element(KingbaseSqlParser::Pivot_elementContext *context) = 0;

    virtual antlrcpp::Any visitAggregate_function_name(KingbaseSqlParser::Aggregate_function_nameContext *context) = 0;

    virtual antlrcpp::Any visitPivot_for_clause(KingbaseSqlParser::Pivot_for_clauseContext *context) = 0;

    virtual antlrcpp::Any visitPivot_in_clause(KingbaseSqlParser::Pivot_in_clauseContext *context) = 0;

    virtual antlrcpp::Any visitPivot_in_clause_element(KingbaseSqlParser::Pivot_in_clause_elementContext *context) = 0;

    virtual antlrcpp::Any visitPivot_in_clause_elements(KingbaseSqlParser::Pivot_in_clause_elementsContext *context) = 0;

    virtual antlrcpp::Any visitUnpivot_clause(KingbaseSqlParser::Unpivot_clauseContext *context) = 0;

    virtual antlrcpp::Any visitUnpivot_in_clause(KingbaseSqlParser::Unpivot_in_clauseContext *context) = 0;

    virtual antlrcpp::Any visitUnpivot_in_elements(KingbaseSqlParser::Unpivot_in_elementsContext *context) = 0;

    virtual antlrcpp::Any visitHierarchical_query_clause(KingbaseSqlParser::Hierarchical_query_clauseContext *context) = 0;

    virtual antlrcpp::Any visitStart_part(KingbaseSqlParser::Start_partContext *context) = 0;

    virtual antlrcpp::Any visitGroup_by_clause(KingbaseSqlParser::Group_by_clauseContext *context) = 0;

    virtual antlrcpp::Any visitGroup_by_elements(KingbaseSqlParser::Group_by_elementsContext *context) = 0;

    virtual antlrcpp::Any visitRollup_cube_expression(KingbaseSqlParser::Rollup_cube_expressionContext *context) = 0;

    virtual antlrcpp::Any visitEmpty_expression(KingbaseSqlParser::Empty_expressionContext *context) = 0;

    virtual antlrcpp::Any visitGrouping_sets_expression(KingbaseSqlParser::Grouping_sets_expressionContext *context) = 0;

    virtual antlrcpp::Any visitHaving_clause(KingbaseSqlParser::Having_clauseContext *context) = 0;

    virtual antlrcpp::Any visitCell_assignment(KingbaseSqlParser::Cell_assignmentContext *context) = 0;

    virtual antlrcpp::Any visitUntil_part(KingbaseSqlParser::Until_partContext *context) = 0;

    virtual antlrcpp::Any visitOrder_by_clause(KingbaseSqlParser::Order_by_clauseContext *context) = 0;

    virtual antlrcpp::Any visitOrder_by_elements(KingbaseSqlParser::Order_by_elementsContext *context) = 0;

    virtual antlrcpp::Any visitLimit_clause(KingbaseSqlParser::Limit_clauseContext *context) = 0;

    virtual antlrcpp::Any visitOffset_clause(KingbaseSqlParser::Offset_clauseContext *context) = 0;

    virtual antlrcpp::Any visitFetch_clause(KingbaseSqlParser::Fetch_clauseContext *context) = 0;

    virtual antlrcpp::Any visitFor_update_clause(KingbaseSqlParser::For_update_clauseContext *context) = 0;

    virtual antlrcpp::Any visitFor_update_of_part(KingbaseSqlParser::For_update_of_partContext *context) = 0;

    virtual antlrcpp::Any visitFor_update_options(KingbaseSqlParser::For_update_optionsContext *context) = 0;

    virtual antlrcpp::Any visitKeep_clause(KingbaseSqlParser::Keep_clauseContext *context) = 0;

    virtual antlrcpp::Any visitFunction_argument(KingbaseSqlParser::Function_argumentContext *context) = 0;

    virtual antlrcpp::Any visitFunction_argument_analytic(KingbaseSqlParser::Function_argument_analyticContext *context) = 0;

    virtual antlrcpp::Any visitFunction_argument_modeling(KingbaseSqlParser::Function_argument_modelingContext *context) = 0;

    virtual antlrcpp::Any visitRespect_or_ignore_nulls(KingbaseSqlParser::Respect_or_ignore_nullsContext *context) = 0;

    virtual antlrcpp::Any visitArgument(KingbaseSqlParser::ArgumentContext *context) = 0;

    virtual antlrcpp::Any visitDatatype(KingbaseSqlParser::DatatypeContext *context) = 0;

    virtual antlrcpp::Any visitPrecision_part(KingbaseSqlParser::Precision_partContext *context) = 0;

    virtual antlrcpp::Any visitNative_datatype_element(KingbaseSqlParser::Native_datatype_elementContext *context) = 0;

    virtual antlrcpp::Any visitUpdate_statement(KingbaseSqlParser::Update_statementContext *context) = 0;

    virtual antlrcpp::Any visitUpdate_set_clause(KingbaseSqlParser::Update_set_clauseContext *context) = 0;

    virtual antlrcpp::Any visitColumn_based_update_set_clause(KingbaseSqlParser::Column_based_update_set_clauseContext *context) = 0;

    virtual antlrcpp::Any visitDelete_statement(KingbaseSqlParser::Delete_statementContext *context) = 0;

    virtual antlrcpp::Any visitGeneral_table_ref(KingbaseSqlParser::General_table_refContext *context) = 0;

    virtual antlrcpp::Any visitStatic_returning_clause(KingbaseSqlParser::Static_returning_clauseContext *context) = 0;

    virtual antlrcpp::Any visitInsert_statement(KingbaseSqlParser::Insert_statementContext *context) = 0;

    virtual antlrcpp::Any visitSingle_table_insert(KingbaseSqlParser::Single_table_insertContext *context) = 0;

    virtual antlrcpp::Any visitMulti_table_insert(KingbaseSqlParser::Multi_table_insertContext *context) = 0;

    virtual antlrcpp::Any visitMulti_table_element(KingbaseSqlParser::Multi_table_elementContext *context) = 0;

    virtual antlrcpp::Any visitConditional_insert_clause(KingbaseSqlParser::Conditional_insert_clauseContext *context) = 0;

    virtual antlrcpp::Any visitConditional_insert_when_part(KingbaseSqlParser::Conditional_insert_when_partContext *context) = 0;

    virtual antlrcpp::Any visitConditional_insert_else_part(KingbaseSqlParser::Conditional_insert_else_partContext *context) = 0;

    virtual antlrcpp::Any visitInsert_into_clause(KingbaseSqlParser::Insert_into_clauseContext *context) = 0;

    virtual antlrcpp::Any visitValues_clause(KingbaseSqlParser::Values_clauseContext *context) = 0;

    virtual antlrcpp::Any visitCopy_statement(KingbaseSqlParser::Copy_statementContext *context) = 0;

    virtual antlrcpp::Any visitCondition(KingbaseSqlParser::ConditionContext *context) = 0;

    virtual antlrcpp::Any visitExpressions(KingbaseSqlParser::ExpressionsContext *context) = 0;

    virtual antlrcpp::Any visitExpression(KingbaseSqlParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitCursor_expression(KingbaseSqlParser::Cursor_expressionContext *context) = 0;

    virtual antlrcpp::Any visitLogical_expression(KingbaseSqlParser::Logical_expressionContext *context) = 0;

    virtual antlrcpp::Any visitMultiset_expression(KingbaseSqlParser::Multiset_expressionContext *context) = 0;

    virtual antlrcpp::Any visitRelational_expression(KingbaseSqlParser::Relational_expressionContext *context) = 0;

    virtual antlrcpp::Any visitCompound_expression(KingbaseSqlParser::Compound_expressionContext *context) = 0;

    virtual antlrcpp::Any visitRelational_operator(KingbaseSqlParser::Relational_operatorContext *context) = 0;

    virtual antlrcpp::Any visitIn_elements(KingbaseSqlParser::In_elementsContext *context) = 0;

    virtual antlrcpp::Any visitBetween_elements(KingbaseSqlParser::Between_elementsContext *context) = 0;

    virtual antlrcpp::Any visitConcatenation(KingbaseSqlParser::ConcatenationContext *context) = 0;

    virtual antlrcpp::Any visitInterval_expression(KingbaseSqlParser::Interval_expressionContext *context) = 0;

    virtual antlrcpp::Any visitModel_expression(KingbaseSqlParser::Model_expressionContext *context) = 0;

    virtual antlrcpp::Any visitModel_expression_element(KingbaseSqlParser::Model_expression_elementContext *context) = 0;

    virtual antlrcpp::Any visitSingle_column_for_loop(KingbaseSqlParser::Single_column_for_loopContext *context) = 0;

    virtual antlrcpp::Any visitMulti_column_for_loop(KingbaseSqlParser::Multi_column_for_loopContext *context) = 0;

    virtual antlrcpp::Any visitUnary_expression(KingbaseSqlParser::Unary_expressionContext *context) = 0;

    virtual antlrcpp::Any visitCase_statement(KingbaseSqlParser::Case_statementContext *context) = 0;

    virtual antlrcpp::Any visitSimple_case_statement(KingbaseSqlParser::Simple_case_statementContext *context) = 0;

    virtual antlrcpp::Any visitSimple_case_when_part(KingbaseSqlParser::Simple_case_when_partContext *context) = 0;

    virtual antlrcpp::Any visitSearched_case_statement(KingbaseSqlParser::Searched_case_statementContext *context) = 0;

    virtual antlrcpp::Any visitSearched_case_when_part(KingbaseSqlParser::Searched_case_when_partContext *context) = 0;

    virtual antlrcpp::Any visitCase_else_part(KingbaseSqlParser::Case_else_partContext *context) = 0;

    virtual antlrcpp::Any visitAtom(KingbaseSqlParser::AtomContext *context) = 0;

    virtual antlrcpp::Any visitQuantified_expression(KingbaseSqlParser::Quantified_expressionContext *context) = 0;

    virtual antlrcpp::Any visitString_function(KingbaseSqlParser::String_functionContext *context) = 0;

    virtual antlrcpp::Any visitStandard_function(KingbaseSqlParser::Standard_functionContext *context) = 0;

    virtual antlrcpp::Any visitNumeric_function_wrapper(KingbaseSqlParser::Numeric_function_wrapperContext *context) = 0;

    virtual antlrcpp::Any visitNumeric_function(KingbaseSqlParser::Numeric_functionContext *context) = 0;

    virtual antlrcpp::Any visitOther_function(KingbaseSqlParser::Other_functionContext *context) = 0;

    virtual antlrcpp::Any visitOver_clause_keyword(KingbaseSqlParser::Over_clause_keywordContext *context) = 0;

    virtual antlrcpp::Any visitWithin_or_over_clause_keyword(KingbaseSqlParser::Within_or_over_clause_keywordContext *context) = 0;

    virtual antlrcpp::Any visitStandard_prediction_function_keyword(KingbaseSqlParser::Standard_prediction_function_keywordContext *context) = 0;

    virtual antlrcpp::Any visitOver_clause(KingbaseSqlParser::Over_clauseContext *context) = 0;

    virtual antlrcpp::Any visitWindowing_clause(KingbaseSqlParser::Windowing_clauseContext *context) = 0;

    virtual antlrcpp::Any visitWindowing_type(KingbaseSqlParser::Windowing_typeContext *context) = 0;

    virtual antlrcpp::Any visitWindowing_elements(KingbaseSqlParser::Windowing_elementsContext *context) = 0;

    virtual antlrcpp::Any visitCollect_order_by_part(KingbaseSqlParser::Collect_order_by_partContext *context) = 0;

    virtual antlrcpp::Any visitWithin_or_over_part(KingbaseSqlParser::Within_or_over_partContext *context) = 0;

    virtual antlrcpp::Any visitXml_passing_clause(KingbaseSqlParser::Xml_passing_clauseContext *context) = 0;

    virtual antlrcpp::Any visitXml_attributes_clause(KingbaseSqlParser::Xml_attributes_clauseContext *context) = 0;

    virtual antlrcpp::Any visitXml_namespaces_clause(KingbaseSqlParser::Xml_namespaces_clauseContext *context) = 0;

    virtual antlrcpp::Any visitXml_table_column(KingbaseSqlParser::Xml_table_columnContext *context) = 0;

    virtual antlrcpp::Any visitXml_general_default_part(KingbaseSqlParser::Xml_general_default_partContext *context) = 0;

    virtual antlrcpp::Any visitXml_multiuse_expression_element(KingbaseSqlParser::Xml_multiuse_expression_elementContext *context) = 0;

    virtual antlrcpp::Any visitXmlroot_param_version_part(KingbaseSqlParser::Xmlroot_param_version_partContext *context) = 0;

    virtual antlrcpp::Any visitXmlroot_param_standalone_part(KingbaseSqlParser::Xmlroot_param_standalone_partContext *context) = 0;

    virtual antlrcpp::Any visitXmlserialize_param_enconding_part(KingbaseSqlParser::Xmlserialize_param_enconding_partContext *context) = 0;

    virtual antlrcpp::Any visitXmlserialize_param_version_part(KingbaseSqlParser::Xmlserialize_param_version_partContext *context) = 0;

    virtual antlrcpp::Any visitXmlserialize_param_ident_part(KingbaseSqlParser::Xmlserialize_param_ident_partContext *context) = 0;

    virtual antlrcpp::Any visitBind_variable(KingbaseSqlParser::Bind_variableContext *context) = 0;

    virtual antlrcpp::Any visitGeneral_element(KingbaseSqlParser::General_elementContext *context) = 0;

    virtual antlrcpp::Any visitGeneral_element_part(KingbaseSqlParser::General_element_partContext *context) = 0;

    virtual antlrcpp::Any visitTable_element(KingbaseSqlParser::Table_elementContext *context) = 0;

    virtual antlrcpp::Any visitTableview_name(KingbaseSqlParser::Tableview_nameContext *context) = 0;

    virtual antlrcpp::Any visitColumn_name(KingbaseSqlParser::Column_nameContext *context) = 0;

    virtual antlrcpp::Any visitTable_name(KingbaseSqlParser::Table_nameContext *context) = 0;

    virtual antlrcpp::Any visitLink_name(KingbaseSqlParser::Link_nameContext *context) = 0;

    virtual antlrcpp::Any visitColumn_alias(KingbaseSqlParser::Column_aliasContext *context) = 0;

    virtual antlrcpp::Any visitTable_alias(KingbaseSqlParser::Table_aliasContext *context) = 0;

    virtual antlrcpp::Any visitXml_column_name(KingbaseSqlParser::Xml_column_nameContext *context) = 0;

    virtual antlrcpp::Any visitParen_column_list(KingbaseSqlParser::Paren_column_listContext *context) = 0;

    virtual antlrcpp::Any visitColumn_list(KingbaseSqlParser::Column_listContext *context) = 0;

    virtual antlrcpp::Any visitWith_query_name(KingbaseSqlParser::With_query_nameContext *context) = 0;

    virtual antlrcpp::Any visitConstraint_name(KingbaseSqlParser::Constraint_nameContext *context) = 0;

    virtual antlrcpp::Any visitLabel_name(KingbaseSqlParser::Label_nameContext *context) = 0;

    virtual antlrcpp::Any visitPartition_extension_clause(KingbaseSqlParser::Partition_extension_clauseContext *context) = 0;

    virtual antlrcpp::Any visitConstant(KingbaseSqlParser::ConstantContext *context) = 0;

    virtual antlrcpp::Any visitNumeric(KingbaseSqlParser::NumericContext *context) = 0;

    virtual antlrcpp::Any visitNumeric_negative(KingbaseSqlParser::Numeric_negativeContext *context) = 0;

    virtual antlrcpp::Any visitQuoted_string(KingbaseSqlParser::Quoted_stringContext *context) = 0;

    virtual antlrcpp::Any visitIdentifier(KingbaseSqlParser::IdentifierContext *context) = 0;

    virtual antlrcpp::Any visitId_expression(KingbaseSqlParser::Id_expressionContext *context) = 0;

    virtual antlrcpp::Any visitOuter_join_sign(KingbaseSqlParser::Outer_join_signContext *context) = 0;

    virtual antlrcpp::Any visitRegular_id(KingbaseSqlParser::Regular_idContext *context) = 0;

    virtual antlrcpp::Any visitNon_reserved_keywords_in_12c(KingbaseSqlParser::Non_reserved_keywords_in_12cContext *context) = 0;

    virtual antlrcpp::Any visitNon_reserved_keywords_pre12c(KingbaseSqlParser::Non_reserved_keywords_pre12cContext *context) = 0;


};


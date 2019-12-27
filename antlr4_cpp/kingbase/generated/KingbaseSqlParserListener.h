
// Generated from KingbaseSqlParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "KingbaseSqlParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by KingbaseSqlParser.
 */
class  KingbaseSqlParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterSql_script(KingbaseSqlParser::Sql_scriptContext *ctx) = 0;
  virtual void exitSql_script(KingbaseSqlParser::Sql_scriptContext *ctx) = 0;

  virtual void enterUnit_sql_statement(KingbaseSqlParser::Unit_sql_statementContext *ctx) = 0;
  virtual void exitUnit_sql_statement(KingbaseSqlParser::Unit_sql_statementContext *ctx) = 0;

  virtual void enterUnit_statement(KingbaseSqlParser::Unit_statementContext *ctx) = 0;
  virtual void exitUnit_statement(KingbaseSqlParser::Unit_statementContext *ctx) = 0;

  virtual void enterAlter_full_search_configuration(KingbaseSqlParser::Alter_full_search_configurationContext *ctx) = 0;
  virtual void exitAlter_full_search_configuration(KingbaseSqlParser::Alter_full_search_configurationContext *ctx) = 0;

  virtual void enterToken_or_dictionary(KingbaseSqlParser::Token_or_dictionaryContext *ctx) = 0;
  virtual void exitToken_or_dictionary(KingbaseSqlParser::Token_or_dictionaryContext *ctx) = 0;

  virtual void enterAlter_full_search_dictionary(KingbaseSqlParser::Alter_full_search_dictionaryContext *ctx) = 0;
  virtual void exitAlter_full_search_dictionary(KingbaseSqlParser::Alter_full_search_dictionaryContext *ctx) = 0;

  virtual void enterAlter_full_search_parser(KingbaseSqlParser::Alter_full_search_parserContext *ctx) = 0;
  virtual void exitAlter_full_search_parser(KingbaseSqlParser::Alter_full_search_parserContext *ctx) = 0;

  virtual void enterAlter_full_search_template(KingbaseSqlParser::Alter_full_search_templateContext *ctx) = 0;
  virtual void exitAlter_full_search_template(KingbaseSqlParser::Alter_full_search_templateContext *ctx) = 0;

  virtual void enterDrop_full_search(KingbaseSqlParser::Drop_full_searchContext *ctx) = 0;
  virtual void exitDrop_full_search(KingbaseSqlParser::Drop_full_searchContext *ctx) = 0;

  virtual void enterDrop_index_schema_sequence_table_view(KingbaseSqlParser::Drop_index_schema_sequence_table_viewContext *ctx) = 0;
  virtual void exitDrop_index_schema_sequence_table_view(KingbaseSqlParser::Drop_index_schema_sequence_table_viewContext *ctx) = 0;

  virtual void enterDrop_materialize_view(KingbaseSqlParser::Drop_materialize_viewContext *ctx) = 0;
  virtual void exitDrop_materialize_view(KingbaseSqlParser::Drop_materialize_viewContext *ctx) = 0;

  virtual void enterDrop_synonym(KingbaseSqlParser::Drop_synonymContext *ctx) = 0;
  virtual void exitDrop_synonym(KingbaseSqlParser::Drop_synonymContext *ctx) = 0;

  virtual void enterDrop_tablespace(KingbaseSqlParser::Drop_tablespaceContext *ctx) = 0;
  virtual void exitDrop_tablespace(KingbaseSqlParser::Drop_tablespaceContext *ctx) = 0;

  virtual void enterDrop_directory(KingbaseSqlParser::Drop_directoryContext *ctx) = 0;
  virtual void exitDrop_directory(KingbaseSqlParser::Drop_directoryContext *ctx) = 0;

  virtual void enterAlter_function(KingbaseSqlParser::Alter_functionContext *ctx) = 0;
  virtual void exitAlter_function(KingbaseSqlParser::Alter_functionContext *ctx) = 0;

  virtual void enterDrop_function(KingbaseSqlParser::Drop_functionContext *ctx) = 0;
  virtual void exitDrop_function(KingbaseSqlParser::Drop_functionContext *ctx) = 0;

  virtual void enterCreate_function_statement(KingbaseSqlParser::Create_function_statementContext *ctx) = 0;
  virtual void exitCreate_function_statement(KingbaseSqlParser::Create_function_statementContext *ctx) = 0;

  virtual void enterSequence_of_statements(KingbaseSqlParser::Sequence_of_statementsContext *ctx) = 0;
  virtual void exitSequence_of_statements(KingbaseSqlParser::Sequence_of_statementsContext *ctx) = 0;

  virtual void enterSequence_of_statement(KingbaseSqlParser::Sequence_of_statementContext *ctx) = 0;
  virtual void exitSequence_of_statement(KingbaseSqlParser::Sequence_of_statementContext *ctx) = 0;

  virtual void enterCreate_package(KingbaseSqlParser::Create_packageContext *ctx) = 0;
  virtual void exitCreate_package(KingbaseSqlParser::Create_packageContext *ctx) = 0;

  virtual void enterAlter_package(KingbaseSqlParser::Alter_packageContext *ctx) = 0;
  virtual void exitAlter_package(KingbaseSqlParser::Alter_packageContext *ctx) = 0;

  virtual void enterDrop_package(KingbaseSqlParser::Drop_packageContext *ctx) = 0;
  virtual void exitDrop_package(KingbaseSqlParser::Drop_packageContext *ctx) = 0;

  virtual void enterPackage_names(KingbaseSqlParser::Package_namesContext *ctx) = 0;
  virtual void exitPackage_names(KingbaseSqlParser::Package_namesContext *ctx) = 0;

  virtual void enterPackage_name(KingbaseSqlParser::Package_nameContext *ctx) = 0;
  virtual void exitPackage_name(KingbaseSqlParser::Package_nameContext *ctx) = 0;

  virtual void enterPackage_body(KingbaseSqlParser::Package_bodyContext *ctx) = 0;
  virtual void exitPackage_body(KingbaseSqlParser::Package_bodyContext *ctx) = 0;

  virtual void enterInitialization_statement(KingbaseSqlParser::Initialization_statementContext *ctx) = 0;
  virtual void exitInitialization_statement(KingbaseSqlParser::Initialization_statementContext *ctx) = 0;

  virtual void enterProcedure_definition(KingbaseSqlParser::Procedure_definitionContext *ctx) = 0;
  virtual void exitProcedure_definition(KingbaseSqlParser::Procedure_definitionContext *ctx) = 0;

  virtual void enterFunction_definition(KingbaseSqlParser::Function_definitionContext *ctx) = 0;
  virtual void exitFunction_definition(KingbaseSqlParser::Function_definitionContext *ctx) = 0;

  virtual void enterDrop_procedure(KingbaseSqlParser::Drop_procedureContext *ctx) = 0;
  virtual void exitDrop_procedure(KingbaseSqlParser::Drop_procedureContext *ctx) = 0;

  virtual void enterAlter_procedure(KingbaseSqlParser::Alter_procedureContext *ctx) = 0;
  virtual void exitAlter_procedure(KingbaseSqlParser::Alter_procedureContext *ctx) = 0;

  virtual void enterCreate_procedure_statement(KingbaseSqlParser::Create_procedure_statementContext *ctx) = 0;
  virtual void exitCreate_procedure_statement(KingbaseSqlParser::Create_procedure_statementContext *ctx) = 0;

  virtual void enterPlsql_block(KingbaseSqlParser::Plsql_blockContext *ctx) = 0;
  virtual void exitPlsql_block(KingbaseSqlParser::Plsql_blockContext *ctx) = 0;

  virtual void enterDeclare_statement(KingbaseSqlParser::Declare_statementContext *ctx) = 0;
  virtual void exitDeclare_statement(KingbaseSqlParser::Declare_statementContext *ctx) = 0;

  virtual void enterDrop_trigger(KingbaseSqlParser::Drop_triggerContext *ctx) = 0;
  virtual void exitDrop_trigger(KingbaseSqlParser::Drop_triggerContext *ctx) = 0;

  virtual void enterAlter_trigger(KingbaseSqlParser::Alter_triggerContext *ctx) = 0;
  virtual void exitAlter_trigger(KingbaseSqlParser::Alter_triggerContext *ctx) = 0;

  virtual void enterCreate_trigger(KingbaseSqlParser::Create_triggerContext *ctx) = 0;
  virtual void exitCreate_trigger(KingbaseSqlParser::Create_triggerContext *ctx) = 0;

  virtual void enterExecute_procedure_statement(KingbaseSqlParser::Execute_procedure_statementContext *ctx) = 0;
  virtual void exitExecute_procedure_statement(KingbaseSqlParser::Execute_procedure_statementContext *ctx) = 0;

  virtual void enterDml_event_clause(KingbaseSqlParser::Dml_event_clauseContext *ctx) = 0;
  virtual void exitDml_event_clause(KingbaseSqlParser::Dml_event_clauseContext *ctx) = 0;

  virtual void enterDml_event_element(KingbaseSqlParser::Dml_event_elementContext *ctx) = 0;
  virtual void exitDml_event_element(KingbaseSqlParser::Dml_event_elementContext *ctx) = 0;

  virtual void enterDrop_type(KingbaseSqlParser::Drop_typeContext *ctx) = 0;
  virtual void exitDrop_type(KingbaseSqlParser::Drop_typeContext *ctx) = 0;

  virtual void enterCreate_type(KingbaseSqlParser::Create_typeContext *ctx) = 0;
  virtual void exitCreate_type(KingbaseSqlParser::Create_typeContext *ctx) = 0;

  virtual void enterType_options(KingbaseSqlParser::Type_optionsContext *ctx) = 0;
  virtual void exitType_options(KingbaseSqlParser::Type_optionsContext *ctx) = 0;

  virtual void enterType_elements_parameter(KingbaseSqlParser::Type_elements_parameterContext *ctx) = 0;
  virtual void exitType_elements_parameter(KingbaseSqlParser::Type_elements_parameterContext *ctx) = 0;

  virtual void enterDrop_sequence(KingbaseSqlParser::Drop_sequenceContext *ctx) = 0;
  virtual void exitDrop_sequence(KingbaseSqlParser::Drop_sequenceContext *ctx) = 0;

  virtual void enterAlter_sequence(KingbaseSqlParser::Alter_sequenceContext *ctx) = 0;
  virtual void exitAlter_sequence(KingbaseSqlParser::Alter_sequenceContext *ctx) = 0;

  virtual void enterAlter_synonym(KingbaseSqlParser::Alter_synonymContext *ctx) = 0;
  virtual void exitAlter_synonym(KingbaseSqlParser::Alter_synonymContext *ctx) = 0;

  virtual void enterAlter_system(KingbaseSqlParser::Alter_systemContext *ctx) = 0;
  virtual void exitAlter_system(KingbaseSqlParser::Alter_systemContext *ctx) = 0;

  virtual void enterSystem_spec(KingbaseSqlParser::System_specContext *ctx) = 0;
  virtual void exitSystem_spec(KingbaseSqlParser::System_specContext *ctx) = 0;

  virtual void enterCreate_sequence(KingbaseSqlParser::Create_sequenceContext *ctx) = 0;
  virtual void exitCreate_sequence(KingbaseSqlParser::Create_sequenceContext *ctx) = 0;

  virtual void enterSequence_spec(KingbaseSqlParser::Sequence_specContext *ctx) = 0;
  virtual void exitSequence_spec(KingbaseSqlParser::Sequence_specContext *ctx) = 0;

  virtual void enterCreate_index(KingbaseSqlParser::Create_indexContext *ctx) = 0;
  virtual void exitCreate_index(KingbaseSqlParser::Create_indexContext *ctx) = 0;

  virtual void enterCreate_full_index(KingbaseSqlParser::Create_full_indexContext *ctx) = 0;
  virtual void exitCreate_full_index(KingbaseSqlParser::Create_full_indexContext *ctx) = 0;

  virtual void enterIndex_expr(KingbaseSqlParser::Index_exprContext *ctx) = 0;
  virtual void exitIndex_expr(KingbaseSqlParser::Index_exprContext *ctx) = 0;

  virtual void enterIndextype(KingbaseSqlParser::IndextypeContext *ctx) = 0;
  virtual void exitIndextype(KingbaseSqlParser::IndextypeContext *ctx) = 0;

  virtual void enterAlter_index(KingbaseSqlParser::Alter_indexContext *ctx) = 0;
  virtual void exitAlter_index(KingbaseSqlParser::Alter_indexContext *ctx) = 0;

  virtual void enterAlter_schema(KingbaseSqlParser::Alter_schemaContext *ctx) = 0;
  virtual void exitAlter_schema(KingbaseSqlParser::Alter_schemaContext *ctx) = 0;

  virtual void enterNew_partition_name(KingbaseSqlParser::New_partition_nameContext *ctx) = 0;
  virtual void exitNew_partition_name(KingbaseSqlParser::New_partition_nameContext *ctx) = 0;

  virtual void enterCreate_user(KingbaseSqlParser::Create_userContext *ctx) = 0;
  virtual void exitCreate_user(KingbaseSqlParser::Create_userContext *ctx) = 0;

  virtual void enterCreate_role(KingbaseSqlParser::Create_roleContext *ctx) = 0;
  virtual void exitCreate_role(KingbaseSqlParser::Create_roleContext *ctx) = 0;

  virtual void enterAlter_user(KingbaseSqlParser::Alter_userContext *ctx) = 0;
  virtual void exitAlter_user(KingbaseSqlParser::Alter_userContext *ctx) = 0;

  virtual void enterAlter_role(KingbaseSqlParser::Alter_roleContext *ctx) = 0;
  virtual void exitAlter_role(KingbaseSqlParser::Alter_roleContext *ctx) = 0;

  virtual void enterDrop_role(KingbaseSqlParser::Drop_roleContext *ctx) = 0;
  virtual void exitDrop_role(KingbaseSqlParser::Drop_roleContext *ctx) = 0;

  virtual void enterDrop_user(KingbaseSqlParser::Drop_userContext *ctx) = 0;
  virtual void exitDrop_user(KingbaseSqlParser::Drop_userContext *ctx) = 0;

  virtual void enterDrop_owned(KingbaseSqlParser::Drop_ownedContext *ctx) = 0;
  virtual void exitDrop_owned(KingbaseSqlParser::Drop_ownedContext *ctx) = 0;

  virtual void enterReassign_owned(KingbaseSqlParser::Reassign_ownedContext *ctx) = 0;
  virtual void exitReassign_owned(KingbaseSqlParser::Reassign_ownedContext *ctx) = 0;

  virtual void enterEnable_user_ip(KingbaseSqlParser::Enable_user_ipContext *ctx) = 0;
  virtual void exitEnable_user_ip(KingbaseSqlParser::Enable_user_ipContext *ctx) = 0;

  virtual void enterIdentified_by(KingbaseSqlParser::Identified_byContext *ctx) = 0;
  virtual void exitIdentified_by(KingbaseSqlParser::Identified_byContext *ctx) = 0;

  virtual void enterIdentified_other_clause(KingbaseSqlParser::Identified_other_clauseContext *ctx) = 0;
  virtual void exitIdentified_other_clause(KingbaseSqlParser::Identified_other_clauseContext *ctx) = 0;

  virtual void enterUser_tablespace_clause(KingbaseSqlParser::User_tablespace_clauseContext *ctx) = 0;
  virtual void exitUser_tablespace_clause(KingbaseSqlParser::User_tablespace_clauseContext *ctx) = 0;

  virtual void enterProfile_clause(KingbaseSqlParser::Profile_clauseContext *ctx) = 0;
  virtual void exitProfile_clause(KingbaseSqlParser::Profile_clauseContext *ctx) = 0;

  virtual void enterAnalyze(KingbaseSqlParser::AnalyzeContext *ctx) = 0;
  virtual void exitAnalyze(KingbaseSqlParser::AnalyzeContext *ctx) = 0;

  virtual void enterCheckpoint(KingbaseSqlParser::CheckpointContext *ctx) = 0;
  virtual void exitCheckpoint(KingbaseSqlParser::CheckpointContext *ctx) = 0;

  virtual void enterCluster(KingbaseSqlParser::ClusterContext *ctx) = 0;
  virtual void exitCluster(KingbaseSqlParser::ClusterContext *ctx) = 0;

  virtual void enterComment(KingbaseSqlParser::CommentContext *ctx) = 0;
  virtual void exitComment(KingbaseSqlParser::CommentContext *ctx) = 0;

  virtual void enterComment_spec(KingbaseSqlParser::Comment_specContext *ctx) = 0;
  virtual void exitComment_spec(KingbaseSqlParser::Comment_specContext *ctx) = 0;

  virtual void enterCopy_datafile(KingbaseSqlParser::Copy_datafileContext *ctx) = 0;
  virtual void exitCopy_datafile(KingbaseSqlParser::Copy_datafileContext *ctx) = 0;

  virtual void enterCreate_database(KingbaseSqlParser::Create_databaseContext *ctx) = 0;
  virtual void exitCreate_database(KingbaseSqlParser::Create_databaseContext *ctx) = 0;

  virtual void enterCreate_full_search_configuration(KingbaseSqlParser::Create_full_search_configurationContext *ctx) = 0;
  virtual void exitCreate_full_search_configuration(KingbaseSqlParser::Create_full_search_configurationContext *ctx) = 0;

  virtual void enterCreate_full_search_dictionary(KingbaseSqlParser::Create_full_search_dictionaryContext *ctx) = 0;
  virtual void exitCreate_full_search_dictionary(KingbaseSqlParser::Create_full_search_dictionaryContext *ctx) = 0;

  virtual void enterCreate_full_search_parser(KingbaseSqlParser::Create_full_search_parserContext *ctx) = 0;
  virtual void exitCreate_full_search_parser(KingbaseSqlParser::Create_full_search_parserContext *ctx) = 0;

  virtual void enterCreate_full_search_template(KingbaseSqlParser::Create_full_search_templateContext *ctx) = 0;
  virtual void exitCreate_full_search_template(KingbaseSqlParser::Create_full_search_templateContext *ctx) = 0;

  virtual void enterDrop_index(KingbaseSqlParser::Drop_indexContext *ctx) = 0;
  virtual void exitDrop_index(KingbaseSqlParser::Drop_indexContext *ctx) = 0;

  virtual void enterGrant_statement(KingbaseSqlParser::Grant_statementContext *ctx) = 0;
  virtual void exitGrant_statement(KingbaseSqlParser::Grant_statementContext *ctx) = 0;

  virtual void enterGrant_object_privilege(KingbaseSqlParser::Grant_object_privilegeContext *ctx) = 0;
  virtual void exitGrant_object_privilege(KingbaseSqlParser::Grant_object_privilegeContext *ctx) = 0;

  virtual void enterGrant_column_privilege(KingbaseSqlParser::Grant_column_privilegeContext *ctx) = 0;
  virtual void exitGrant_column_privilege(KingbaseSqlParser::Grant_column_privilegeContext *ctx) = 0;

  virtual void enterGrant_role_privilege(KingbaseSqlParser::Grant_role_privilegeContext *ctx) = 0;
  virtual void exitGrant_role_privilege(KingbaseSqlParser::Grant_role_privilegeContext *ctx) = 0;

  virtual void enterRevoke_statement(KingbaseSqlParser::Revoke_statementContext *ctx) = 0;
  virtual void exitRevoke_statement(KingbaseSqlParser::Revoke_statementContext *ctx) = 0;

  virtual void enterRevoke_object_privilege(KingbaseSqlParser::Revoke_object_privilegeContext *ctx) = 0;
  virtual void exitRevoke_object_privilege(KingbaseSqlParser::Revoke_object_privilegeContext *ctx) = 0;

  virtual void enterRevoke_role_privilege(KingbaseSqlParser::Revoke_role_privilegeContext *ctx) = 0;
  virtual void exitRevoke_role_privilege(KingbaseSqlParser::Revoke_role_privilegeContext *ctx) = 0;

  virtual void enterCreate_directory(KingbaseSqlParser::Create_directoryContext *ctx) = 0;
  virtual void exitCreate_directory(KingbaseSqlParser::Create_directoryContext *ctx) = 0;

  virtual void enterDirectory_name(KingbaseSqlParser::Directory_nameContext *ctx) = 0;
  virtual void exitDirectory_name(KingbaseSqlParser::Directory_nameContext *ctx) = 0;

  virtual void enterDirectory_path(KingbaseSqlParser::Directory_pathContext *ctx) = 0;
  virtual void exitDirectory_path(KingbaseSqlParser::Directory_pathContext *ctx) = 0;

  virtual void enterDbcc_checkallocate(KingbaseSqlParser::Dbcc_checkallocateContext *ctx) = 0;
  virtual void exitDbcc_checkallocate(KingbaseSqlParser::Dbcc_checkallocateContext *ctx) = 0;

  virtual void enterDbcc_checkcatalog(KingbaseSqlParser::Dbcc_checkcatalogContext *ctx) = 0;
  virtual void exitDbcc_checkcatalog(KingbaseSqlParser::Dbcc_checkcatalogContext *ctx) = 0;

  virtual void enterDbcc_checktable(KingbaseSqlParser::Dbcc_checktableContext *ctx) = 0;
  virtual void exitDbcc_checktable(KingbaseSqlParser::Dbcc_checktableContext *ctx) = 0;

  virtual void enterDbcc_checkindex(KingbaseSqlParser::Dbcc_checkindexContext *ctx) = 0;
  virtual void exitDbcc_checkindex(KingbaseSqlParser::Dbcc_checkindexContext *ctx) = 0;

  virtual void enterDbcc_checktablespace(KingbaseSqlParser::Dbcc_checktablespaceContext *ctx) = 0;
  virtual void exitDbcc_checktablespace(KingbaseSqlParser::Dbcc_checktablespaceContext *ctx) = 0;

  virtual void enterDbcc_checkdb(KingbaseSqlParser::Dbcc_checkdbContext *ctx) = 0;
  virtual void exitDbcc_checkdb(KingbaseSqlParser::Dbcc_checkdbContext *ctx) = 0;

  virtual void enterCreate_view(KingbaseSqlParser::Create_viewContext *ctx) = 0;
  virtual void exitCreate_view(KingbaseSqlParser::Create_viewContext *ctx) = 0;

  virtual void enterCreate_rule(KingbaseSqlParser::Create_ruleContext *ctx) = 0;
  virtual void exitCreate_rule(KingbaseSqlParser::Create_ruleContext *ctx) = 0;

  virtual void enterRulename(KingbaseSqlParser::RulenameContext *ctx) = 0;
  virtual void exitRulename(KingbaseSqlParser::RulenameContext *ctx) = 0;

  virtual void enterEvent(KingbaseSqlParser::EventContext *ctx) = 0;
  virtual void exitEvent(KingbaseSqlParser::EventContext *ctx) = 0;

  virtual void enterCreate_force_view(KingbaseSqlParser::Create_force_viewContext *ctx) = 0;
  virtual void exitCreate_force_view(KingbaseSqlParser::Create_force_viewContext *ctx) = 0;

  virtual void enterAlter_tablespace(KingbaseSqlParser::Alter_tablespaceContext *ctx) = 0;
  virtual void exitAlter_tablespace(KingbaseSqlParser::Alter_tablespaceContext *ctx) = 0;

  virtual void enterTablespace_state_clauses(KingbaseSqlParser::Tablespace_state_clausesContext *ctx) = 0;
  virtual void exitTablespace_state_clauses(KingbaseSqlParser::Tablespace_state_clausesContext *ctx) = 0;

  virtual void enterNew_tablespace_name(KingbaseSqlParser::New_tablespace_nameContext *ctx) = 0;
  virtual void exitNew_tablespace_name(KingbaseSqlParser::New_tablespace_nameContext *ctx) = 0;

  virtual void enterCreate_tablespace(KingbaseSqlParser::Create_tablespaceContext *ctx) = 0;
  virtual void exitCreate_tablespace(KingbaseSqlParser::Create_tablespaceContext *ctx) = 0;

  virtual void enterTablespace_retention_clause(KingbaseSqlParser::Tablespace_retention_clauseContext *ctx) = 0;
  virtual void exitTablespace_retention_clause(KingbaseSqlParser::Tablespace_retention_clauseContext *ctx) = 0;

  virtual void enterBuild_clause(KingbaseSqlParser::Build_clauseContext *ctx) = 0;
  virtual void exitBuild_clause(KingbaseSqlParser::Build_clauseContext *ctx) = 0;

  virtual void enterAlter_materialized_view(KingbaseSqlParser::Alter_materialized_viewContext *ctx) = 0;
  virtual void exitAlter_materialized_view(KingbaseSqlParser::Alter_materialized_viewContext *ctx) = 0;

  virtual void enterInterval_expr(KingbaseSqlParser::Interval_exprContext *ctx) = 0;
  virtual void exitInterval_expr(KingbaseSqlParser::Interval_exprContext *ctx) = 0;

  virtual void enterCreate_materialized_view(KingbaseSqlParser::Create_materialized_viewContext *ctx) = 0;
  virtual void exitCreate_materialized_view(KingbaseSqlParser::Create_materialized_viewContext *ctx) = 0;

  virtual void enterCreate_schema(KingbaseSqlParser::Create_schemaContext *ctx) = 0;
  virtual void exitCreate_schema(KingbaseSqlParser::Create_schemaContext *ctx) = 0;

  virtual void enterCreate_table(KingbaseSqlParser::Create_tableContext *ctx) = 0;
  virtual void exitCreate_table(KingbaseSqlParser::Create_tableContext *ctx) = 0;

  virtual void enterCreate_table_without_select(KingbaseSqlParser::Create_table_without_selectContext *ctx) = 0;
  virtual void exitCreate_table_without_select(KingbaseSqlParser::Create_table_without_selectContext *ctx) = 0;

  virtual void enterCreate_table_as_select(KingbaseSqlParser::Create_table_as_selectContext *ctx) = 0;
  virtual void exitCreate_table_as_select(KingbaseSqlParser::Create_table_as_selectContext *ctx) = 0;

  virtual void enterCreate_table_select_into(KingbaseSqlParser::Create_table_select_intoContext *ctx) = 0;
  virtual void exitCreate_table_select_into(KingbaseSqlParser::Create_table_select_intoContext *ctx) = 0;

  virtual void enterColumn_with_datatype_list(KingbaseSqlParser::Column_with_datatype_listContext *ctx) = 0;
  virtual void exitColumn_with_datatype_list(KingbaseSqlParser::Column_with_datatype_listContext *ctx) = 0;

  virtual void enterColumn_with_datatype(KingbaseSqlParser::Column_with_datatypeContext *ctx) = 0;
  virtual void exitColumn_with_datatype(KingbaseSqlParser::Column_with_datatypeContext *ctx) = 0;

  virtual void enterColumn_constraint(KingbaseSqlParser::Column_constraintContext *ctx) = 0;
  virtual void exitColumn_constraint(KingbaseSqlParser::Column_constraintContext *ctx) = 0;

  virtual void enterTable_constraint(KingbaseSqlParser::Table_constraintContext *ctx) = 0;
  virtual void exitTable_constraint(KingbaseSqlParser::Table_constraintContext *ctx) = 0;

  virtual void enterAction(KingbaseSqlParser::ActionContext *ctx) = 0;
  virtual void exitAction(KingbaseSqlParser::ActionContext *ctx) = 0;

  virtual void enterSubpartition_name(KingbaseSqlParser::Subpartition_nameContext *ctx) = 0;
  virtual void exitSubpartition_name(KingbaseSqlParser::Subpartition_nameContext *ctx) = 0;

  virtual void enterDrop_table(KingbaseSqlParser::Drop_tableContext *ctx) = 0;
  virtual void exitDrop_table(KingbaseSqlParser::Drop_tableContext *ctx) = 0;

  virtual void enterAllow_or_disallow(KingbaseSqlParser::Allow_or_disallowContext *ctx) = 0;
  virtual void exitAllow_or_disallow(KingbaseSqlParser::Allow_or_disallowContext *ctx) = 0;

  virtual void enterCreate_synonym(KingbaseSqlParser::Create_synonymContext *ctx) = 0;
  virtual void exitCreate_synonym(KingbaseSqlParser::Create_synonymContext *ctx) = 0;

  virtual void enterComment_on_table(KingbaseSqlParser::Comment_on_tableContext *ctx) = 0;
  virtual void exitComment_on_table(KingbaseSqlParser::Comment_on_tableContext *ctx) = 0;

  virtual void enterDatabase_name(KingbaseSqlParser::Database_nameContext *ctx) = 0;
  virtual void exitDatabase_name(KingbaseSqlParser::Database_nameContext *ctx) = 0;

  virtual void enterAlter_database(KingbaseSqlParser::Alter_databaseContext *ctx) = 0;
  virtual void exitAlter_database(KingbaseSqlParser::Alter_databaseContext *ctx) = 0;

  virtual void enterAlter_table(KingbaseSqlParser::Alter_tableContext *ctx) = 0;
  virtual void exitAlter_table(KingbaseSqlParser::Alter_tableContext *ctx) = 0;

  virtual void enterAlter_table_add_properties(KingbaseSqlParser::Alter_table_add_propertiesContext *ctx) = 0;
  virtual void exitAlter_table_add_properties(KingbaseSqlParser::Alter_table_add_propertiesContext *ctx) = 0;

  virtual void enterAlter_table_change_properties(KingbaseSqlParser::Alter_table_change_propertiesContext *ctx) = 0;
  virtual void exitAlter_table_change_properties(KingbaseSqlParser::Alter_table_change_propertiesContext *ctx) = 0;

  virtual void enterAlter_table_drop_properties(KingbaseSqlParser::Alter_table_drop_propertiesContext *ctx) = 0;
  virtual void exitAlter_table_drop_properties(KingbaseSqlParser::Alter_table_drop_propertiesContext *ctx) = 0;

  virtual void enterAlter_table_rename_properties(KingbaseSqlParser::Alter_table_rename_propertiesContext *ctx) = 0;
  virtual void exitAlter_table_rename_properties(KingbaseSqlParser::Alter_table_rename_propertiesContext *ctx) = 0;

  virtual void enterAlter_table_truncate_properties(KingbaseSqlParser::Alter_table_truncate_propertiesContext *ctx) = 0;
  virtual void exitAlter_table_truncate_properties(KingbaseSqlParser::Alter_table_truncate_propertiesContext *ctx) = 0;

  virtual void enterAlter_table_others(KingbaseSqlParser::Alter_table_othersContext *ctx) = 0;
  virtual void exitAlter_table_others(KingbaseSqlParser::Alter_table_othersContext *ctx) = 0;

  virtual void enterTablespace(KingbaseSqlParser::TablespaceContext *ctx) = 0;
  virtual void exitTablespace(KingbaseSqlParser::TablespaceContext *ctx) = 0;

  virtual void enterPartition_name(KingbaseSqlParser::Partition_nameContext *ctx) = 0;
  virtual void exitPartition_name(KingbaseSqlParser::Partition_nameContext *ctx) = 0;

  virtual void enterColumn_or_attribute(KingbaseSqlParser::Column_or_attributeContext *ctx) = 0;
  virtual void exitColumn_or_attribute(KingbaseSqlParser::Column_or_attributeContext *ctx) = 0;

  virtual void enterParameter(KingbaseSqlParser::ParameterContext *ctx) = 0;
  virtual void exitParameter(KingbaseSqlParser::ParameterContext *ctx) = 0;

  virtual void enterDefault_value_part(KingbaseSqlParser::Default_value_partContext *ctx) = 0;
  virtual void exitDefault_value_part(KingbaseSqlParser::Default_value_partContext *ctx) = 0;

  virtual void enterParameter_list(KingbaseSqlParser::Parameter_listContext *ctx) = 0;
  virtual void exitParameter_list(KingbaseSqlParser::Parameter_listContext *ctx) = 0;

  virtual void enterParen_parameter_list(KingbaseSqlParser::Paren_parameter_listContext *ctx) = 0;
  virtual void exitParen_parameter_list(KingbaseSqlParser::Paren_parameter_listContext *ctx) = 0;

  virtual void enterVariable_declaration(KingbaseSqlParser::Variable_declarationContext *ctx) = 0;
  virtual void exitVariable_declaration(KingbaseSqlParser::Variable_declarationContext *ctx) = 0;

  virtual void enterVariable_declarations(KingbaseSqlParser::Variable_declarationsContext *ctx) = 0;
  virtual void exitVariable_declarations(KingbaseSqlParser::Variable_declarationsContext *ctx) = 0;

  virtual void enterCursor_declaration(KingbaseSqlParser::Cursor_declarationContext *ctx) = 0;
  virtual void exitCursor_declaration(KingbaseSqlParser::Cursor_declarationContext *ctx) = 0;

  virtual void enterCursor_declarations(KingbaseSqlParser::Cursor_declarationsContext *ctx) = 0;
  virtual void exitCursor_declarations(KingbaseSqlParser::Cursor_declarationsContext *ctx) = 0;

  virtual void enterParameter_spec(KingbaseSqlParser::Parameter_specContext *ctx) = 0;
  virtual void exitParameter_spec(KingbaseSqlParser::Parameter_specContext *ctx) = 0;

  virtual void enterRecord_type_def(KingbaseSqlParser::Record_type_defContext *ctx) = 0;
  virtual void exitRecord_type_def(KingbaseSqlParser::Record_type_defContext *ctx) = 0;

  virtual void enterField_spec(KingbaseSqlParser::Field_specContext *ctx) = 0;
  virtual void exitField_spec(KingbaseSqlParser::Field_specContext *ctx) = 0;

  virtual void enterRef_cursor_type_def(KingbaseSqlParser::Ref_cursor_type_defContext *ctx) = 0;
  virtual void exitRef_cursor_type_def(KingbaseSqlParser::Ref_cursor_type_defContext *ctx) = 0;

  virtual void enterType_declaration(KingbaseSqlParser::Type_declarationContext *ctx) = 0;
  virtual void exitType_declaration(KingbaseSqlParser::Type_declarationContext *ctx) = 0;

  virtual void enterTable_type_def(KingbaseSqlParser::Table_type_defContext *ctx) = 0;
  virtual void exitTable_type_def(KingbaseSqlParser::Table_type_defContext *ctx) = 0;

  virtual void enterTable_indexed_by_part(KingbaseSqlParser::Table_indexed_by_partContext *ctx) = 0;
  virtual void exitTable_indexed_by_part(KingbaseSqlParser::Table_indexed_by_partContext *ctx) = 0;

  virtual void enterVarray_type_def(KingbaseSqlParser::Varray_type_defContext *ctx) = 0;
  virtual void exitVarray_type_def(KingbaseSqlParser::Varray_type_defContext *ctx) = 0;

  virtual void enterSeq_of_statements(KingbaseSqlParser::Seq_of_statementsContext *ctx) = 0;
  virtual void exitSeq_of_statements(KingbaseSqlParser::Seq_of_statementsContext *ctx) = 0;

  virtual void enterLabel_declaration(KingbaseSqlParser::Label_declarationContext *ctx) = 0;
  virtual void exitLabel_declaration(KingbaseSqlParser::Label_declarationContext *ctx) = 0;

  virtual void enterStatement(KingbaseSqlParser::StatementContext *ctx) = 0;
  virtual void exitStatement(KingbaseSqlParser::StatementContext *ctx) = 0;

  virtual void enterAssignment_statement(KingbaseSqlParser::Assignment_statementContext *ctx) = 0;
  virtual void exitAssignment_statement(KingbaseSqlParser::Assignment_statementContext *ctx) = 0;

  virtual void enterContinue_statement(KingbaseSqlParser::Continue_statementContext *ctx) = 0;
  virtual void exitContinue_statement(KingbaseSqlParser::Continue_statementContext *ctx) = 0;

  virtual void enterExit_statement(KingbaseSqlParser::Exit_statementContext *ctx) = 0;
  virtual void exitExit_statement(KingbaseSqlParser::Exit_statementContext *ctx) = 0;

  virtual void enterGoto_statement(KingbaseSqlParser::Goto_statementContext *ctx) = 0;
  virtual void exitGoto_statement(KingbaseSqlParser::Goto_statementContext *ctx) = 0;

  virtual void enterIf_statement(KingbaseSqlParser::If_statementContext *ctx) = 0;
  virtual void exitIf_statement(KingbaseSqlParser::If_statementContext *ctx) = 0;

  virtual void enterElsif_part(KingbaseSqlParser::Elsif_partContext *ctx) = 0;
  virtual void exitElsif_part(KingbaseSqlParser::Elsif_partContext *ctx) = 0;

  virtual void enterElse_part(KingbaseSqlParser::Else_partContext *ctx) = 0;
  virtual void exitElse_part(KingbaseSqlParser::Else_partContext *ctx) = 0;

  virtual void enterLoop_statement(KingbaseSqlParser::Loop_statementContext *ctx) = 0;
  virtual void exitLoop_statement(KingbaseSqlParser::Loop_statementContext *ctx) = 0;

  virtual void enterCursor_loop_param(KingbaseSqlParser::Cursor_loop_paramContext *ctx) = 0;
  virtual void exitCursor_loop_param(KingbaseSqlParser::Cursor_loop_paramContext *ctx) = 0;

  virtual void enterForall_statement(KingbaseSqlParser::Forall_statementContext *ctx) = 0;
  virtual void exitForall_statement(KingbaseSqlParser::Forall_statementContext *ctx) = 0;

  virtual void enterBounds_clause(KingbaseSqlParser::Bounds_clauseContext *ctx) = 0;
  virtual void exitBounds_clause(KingbaseSqlParser::Bounds_clauseContext *ctx) = 0;

  virtual void enterBetween_bound(KingbaseSqlParser::Between_boundContext *ctx) = 0;
  virtual void exitBetween_bound(KingbaseSqlParser::Between_boundContext *ctx) = 0;

  virtual void enterLower_bound(KingbaseSqlParser::Lower_boundContext *ctx) = 0;
  virtual void exitLower_bound(KingbaseSqlParser::Lower_boundContext *ctx) = 0;

  virtual void enterUpper_bound(KingbaseSqlParser::Upper_boundContext *ctx) = 0;
  virtual void exitUpper_bound(KingbaseSqlParser::Upper_boundContext *ctx) = 0;

  virtual void enterNull_statement(KingbaseSqlParser::Null_statementContext *ctx) = 0;
  virtual void exitNull_statement(KingbaseSqlParser::Null_statementContext *ctx) = 0;

  virtual void enterRaise_statement(KingbaseSqlParser::Raise_statementContext *ctx) = 0;
  virtual void exitRaise_statement(KingbaseSqlParser::Raise_statementContext *ctx) = 0;

  virtual void enterReturn_statement(KingbaseSqlParser::Return_statementContext *ctx) = 0;
  virtual void exitReturn_statement(KingbaseSqlParser::Return_statementContext *ctx) = 0;

  virtual void enterFunction_call(KingbaseSqlParser::Function_callContext *ctx) = 0;
  virtual void exitFunction_call(KingbaseSqlParser::Function_callContext *ctx) = 0;

  virtual void enterProcedure_call(KingbaseSqlParser::Procedure_callContext *ctx) = 0;
  virtual void exitProcedure_call(KingbaseSqlParser::Procedure_callContext *ctx) = 0;

  virtual void enterPipe_row_statement(KingbaseSqlParser::Pipe_row_statementContext *ctx) = 0;
  virtual void exitPipe_row_statement(KingbaseSqlParser::Pipe_row_statementContext *ctx) = 0;

  virtual void enterSql_statement(KingbaseSqlParser::Sql_statementContext *ctx) = 0;
  virtual void exitSql_statement(KingbaseSqlParser::Sql_statementContext *ctx) = 0;

  virtual void enterCursor_manipulation_statements(KingbaseSqlParser::Cursor_manipulation_statementsContext *ctx) = 0;
  virtual void exitCursor_manipulation_statements(KingbaseSqlParser::Cursor_manipulation_statementsContext *ctx) = 0;

  virtual void enterClose_statement(KingbaseSqlParser::Close_statementContext *ctx) = 0;
  virtual void exitClose_statement(KingbaseSqlParser::Close_statementContext *ctx) = 0;

  virtual void enterOpen_statement(KingbaseSqlParser::Open_statementContext *ctx) = 0;
  virtual void exitOpen_statement(KingbaseSqlParser::Open_statementContext *ctx) = 0;

  virtual void enterFetch_statement(KingbaseSqlParser::Fetch_statementContext *ctx) = 0;
  virtual void exitFetch_statement(KingbaseSqlParser::Fetch_statementContext *ctx) = 0;

  virtual void enterDirection(KingbaseSqlParser::DirectionContext *ctx) = 0;
  virtual void exitDirection(KingbaseSqlParser::DirectionContext *ctx) = 0;

  virtual void enterCount(KingbaseSqlParser::CountContext *ctx) = 0;
  virtual void exitCount(KingbaseSqlParser::CountContext *ctx) = 0;

  virtual void enterMove_statement(KingbaseSqlParser::Move_statementContext *ctx) = 0;
  virtual void exitMove_statement(KingbaseSqlParser::Move_statementContext *ctx) = 0;

  virtual void enterTransaction_control_statements(KingbaseSqlParser::Transaction_control_statementsContext *ctx) = 0;
  virtual void exitTransaction_control_statements(KingbaseSqlParser::Transaction_control_statementsContext *ctx) = 0;

  virtual void enterTransaction_command(KingbaseSqlParser::Transaction_commandContext *ctx) = 0;
  virtual void exitTransaction_command(KingbaseSqlParser::Transaction_commandContext *ctx) = 0;

  virtual void enterLock_mode(KingbaseSqlParser::Lock_modeContext *ctx) = 0;
  virtual void exitLock_mode(KingbaseSqlParser::Lock_modeContext *ctx) = 0;

  virtual void enterSavepoint_command(KingbaseSqlParser::Savepoint_commandContext *ctx) = 0;
  virtual void exitSavepoint_command(KingbaseSqlParser::Savepoint_commandContext *ctx) = 0;

  virtual void enterExplain_statement(KingbaseSqlParser::Explain_statementContext *ctx) = 0;
  virtual void exitExplain_statement(KingbaseSqlParser::Explain_statementContext *ctx) = 0;

  virtual void enterExplain_elements(KingbaseSqlParser::Explain_elementsContext *ctx) = 0;
  virtual void exitExplain_elements(KingbaseSqlParser::Explain_elementsContext *ctx) = 0;

  virtual void enterExplain_element(KingbaseSqlParser::Explain_elementContext *ctx) = 0;
  virtual void exitExplain_element(KingbaseSqlParser::Explain_elementContext *ctx) = 0;

  virtual void enterError_logging_into_part(KingbaseSqlParser::Error_logging_into_partContext *ctx) = 0;
  virtual void exitError_logging_into_part(KingbaseSqlParser::Error_logging_into_partContext *ctx) = 0;

  virtual void enterError_logging_reject_part(KingbaseSqlParser::Error_logging_reject_partContext *ctx) = 0;
  virtual void exitError_logging_reject_part(KingbaseSqlParser::Error_logging_reject_partContext *ctx) = 0;

  virtual void enterSql_plus_command(KingbaseSqlParser::Sql_plus_commandContext *ctx) = 0;
  virtual void exitSql_plus_command(KingbaseSqlParser::Sql_plus_commandContext *ctx) = 0;

  virtual void enterGet_arguments_command(KingbaseSqlParser::Get_arguments_commandContext *ctx) = 0;
  virtual void exitGet_arguments_command(KingbaseSqlParser::Get_arguments_commandContext *ctx) = 0;

  virtual void enterSet_arguments_command(KingbaseSqlParser::Set_arguments_commandContext *ctx) = 0;
  virtual void exitSet_arguments_command(KingbaseSqlParser::Set_arguments_commandContext *ctx) = 0;

  virtual void enterCost_class_name(KingbaseSqlParser::Cost_class_nameContext *ctx) = 0;
  virtual void exitCost_class_name(KingbaseSqlParser::Cost_class_nameContext *ctx) = 0;

  virtual void enterSavepoint_name(KingbaseSqlParser::Savepoint_nameContext *ctx) = 0;
  virtual void exitSavepoint_name(KingbaseSqlParser::Savepoint_nameContext *ctx) = 0;

  virtual void enterRollback_segment_name(KingbaseSqlParser::Rollback_segment_nameContext *ctx) = 0;
  virtual void exitRollback_segment_name(KingbaseSqlParser::Rollback_segment_nameContext *ctx) = 0;

  virtual void enterTable_var_name(KingbaseSqlParser::Table_var_nameContext *ctx) = 0;
  virtual void exitTable_var_name(KingbaseSqlParser::Table_var_nameContext *ctx) = 0;

  virtual void enterSchema_name(KingbaseSqlParser::Schema_nameContext *ctx) = 0;
  virtual void exitSchema_name(KingbaseSqlParser::Schema_nameContext *ctx) = 0;

  virtual void enterRoutine_name(KingbaseSqlParser::Routine_nameContext *ctx) = 0;
  virtual void exitRoutine_name(KingbaseSqlParser::Routine_nameContext *ctx) = 0;

  virtual void enterImplementation_type_name(KingbaseSqlParser::Implementation_type_nameContext *ctx) = 0;
  virtual void exitImplementation_type_name(KingbaseSqlParser::Implementation_type_nameContext *ctx) = 0;

  virtual void enterParameter_name(KingbaseSqlParser::Parameter_nameContext *ctx) = 0;
  virtual void exitParameter_name(KingbaseSqlParser::Parameter_nameContext *ctx) = 0;

  virtual void enterReference_model_name(KingbaseSqlParser::Reference_model_nameContext *ctx) = 0;
  virtual void exitReference_model_name(KingbaseSqlParser::Reference_model_nameContext *ctx) = 0;

  virtual void enterMain_model_name(KingbaseSqlParser::Main_model_nameContext *ctx) = 0;
  virtual void exitMain_model_name(KingbaseSqlParser::Main_model_nameContext *ctx) = 0;

  virtual void enterContainer_tableview_name(KingbaseSqlParser::Container_tableview_nameContext *ctx) = 0;
  virtual void exitContainer_tableview_name(KingbaseSqlParser::Container_tableview_nameContext *ctx) = 0;

  virtual void enterGrantee_name(KingbaseSqlParser::Grantee_nameContext *ctx) = 0;
  virtual void exitGrantee_name(KingbaseSqlParser::Grantee_nameContext *ctx) = 0;

  virtual void enterRole_name(KingbaseSqlParser::Role_nameContext *ctx) = 0;
  virtual void exitRole_name(KingbaseSqlParser::Role_nameContext *ctx) = 0;

  virtual void enterType_name(KingbaseSqlParser::Type_nameContext *ctx) = 0;
  virtual void exitType_name(KingbaseSqlParser::Type_nameContext *ctx) = 0;

  virtual void enterSequence_name(KingbaseSqlParser::Sequence_nameContext *ctx) = 0;
  virtual void exitSequence_name(KingbaseSqlParser::Sequence_nameContext *ctx) = 0;

  virtual void enterException_name(KingbaseSqlParser::Exception_nameContext *ctx) = 0;
  virtual void exitException_name(KingbaseSqlParser::Exception_nameContext *ctx) = 0;

  virtual void enterFunction_name(KingbaseSqlParser::Function_nameContext *ctx) = 0;
  virtual void exitFunction_name(KingbaseSqlParser::Function_nameContext *ctx) = 0;

  virtual void enterProcedure_name(KingbaseSqlParser::Procedure_nameContext *ctx) = 0;
  virtual void exitProcedure_name(KingbaseSqlParser::Procedure_nameContext *ctx) = 0;

  virtual void enterTrigger_name(KingbaseSqlParser::Trigger_nameContext *ctx) = 0;
  virtual void exitTrigger_name(KingbaseSqlParser::Trigger_nameContext *ctx) = 0;

  virtual void enterVariable_name(KingbaseSqlParser::Variable_nameContext *ctx) = 0;
  virtual void exitVariable_name(KingbaseSqlParser::Variable_nameContext *ctx) = 0;

  virtual void enterIndex_name(KingbaseSqlParser::Index_nameContext *ctx) = 0;
  virtual void exitIndex_name(KingbaseSqlParser::Index_nameContext *ctx) = 0;

  virtual void enterCursor_name(KingbaseSqlParser::Cursor_nameContext *ctx) = 0;
  virtual void exitCursor_name(KingbaseSqlParser::Cursor_nameContext *ctx) = 0;

  virtual void enterRecord_name(KingbaseSqlParser::Record_nameContext *ctx) = 0;
  virtual void exitRecord_name(KingbaseSqlParser::Record_nameContext *ctx) = 0;

  virtual void enterCollection_name(KingbaseSqlParser::Collection_nameContext *ctx) = 0;
  virtual void exitCollection_name(KingbaseSqlParser::Collection_nameContext *ctx) = 0;

  virtual void enterChar_set_name(KingbaseSqlParser::Char_set_nameContext *ctx) = 0;
  virtual void exitChar_set_name(KingbaseSqlParser::Char_set_nameContext *ctx) = 0;

  virtual void enterSynonym_name(KingbaseSqlParser::Synonym_nameContext *ctx) = 0;
  virtual void exitSynonym_name(KingbaseSqlParser::Synonym_nameContext *ctx) = 0;

  virtual void enterSchema_object_name(KingbaseSqlParser::Schema_object_nameContext *ctx) = 0;
  virtual void exitSchema_object_name(KingbaseSqlParser::Schema_object_nameContext *ctx) = 0;

  virtual void enterDir_object_name(KingbaseSqlParser::Dir_object_nameContext *ctx) = 0;
  virtual void exitDir_object_name(KingbaseSqlParser::Dir_object_nameContext *ctx) = 0;

  virtual void enterUser_object_name(KingbaseSqlParser::User_object_nameContext *ctx) = 0;
  virtual void exitUser_object_name(KingbaseSqlParser::User_object_nameContext *ctx) = 0;

  virtual void enterGrant_object_name(KingbaseSqlParser::Grant_object_nameContext *ctx) = 0;
  virtual void exitGrant_object_name(KingbaseSqlParser::Grant_object_nameContext *ctx) = 0;

  virtual void enterTablename_list(KingbaseSqlParser::Tablename_listContext *ctx) = 0;
  virtual void exitTablename_list(KingbaseSqlParser::Tablename_listContext *ctx) = 0;

  virtual void enterObject_privilege(KingbaseSqlParser::Object_privilegeContext *ctx) = 0;
  virtual void exitObject_privilege(KingbaseSqlParser::Object_privilegeContext *ctx) = 0;

  virtual void enterColumn_privilege(KingbaseSqlParser::Column_privilegeContext *ctx) = 0;
  virtual void exitColumn_privilege(KingbaseSqlParser::Column_privilegeContext *ctx) = 0;

  virtual void enterSystem_privilege(KingbaseSqlParser::System_privilegeContext *ctx) = 0;
  virtual void exitSystem_privilege(KingbaseSqlParser::System_privilegeContext *ctx) = 0;

  virtual void enterData_manipulation_language_statements(KingbaseSqlParser::Data_manipulation_language_statementsContext *ctx) = 0;
  virtual void exitData_manipulation_language_statements(KingbaseSqlParser::Data_manipulation_language_statementsContext *ctx) = 0;

  virtual void enterMerge_statement(KingbaseSqlParser::Merge_statementContext *ctx) = 0;
  virtual void exitMerge_statement(KingbaseSqlParser::Merge_statementContext *ctx) = 0;

  virtual void enterMerge_update_clause(KingbaseSqlParser::Merge_update_clauseContext *ctx) = 0;
  virtual void exitMerge_update_clause(KingbaseSqlParser::Merge_update_clauseContext *ctx) = 0;

  virtual void enterMerge_element(KingbaseSqlParser::Merge_elementContext *ctx) = 0;
  virtual void exitMerge_element(KingbaseSqlParser::Merge_elementContext *ctx) = 0;

  virtual void enterMerge_update_delete_part(KingbaseSqlParser::Merge_update_delete_partContext *ctx) = 0;
  virtual void exitMerge_update_delete_part(KingbaseSqlParser::Merge_update_delete_partContext *ctx) = 0;

  virtual void enterMerge_insert_clause(KingbaseSqlParser::Merge_insert_clauseContext *ctx) = 0;
  virtual void exitMerge_insert_clause(KingbaseSqlParser::Merge_insert_clauseContext *ctx) = 0;

  virtual void enterSelected_tableview(KingbaseSqlParser::Selected_tableviewContext *ctx) = 0;
  virtual void exitSelected_tableview(KingbaseSqlParser::Selected_tableviewContext *ctx) = 0;

  virtual void enterTruncate_statement(KingbaseSqlParser::Truncate_statementContext *ctx) = 0;
  virtual void exitTruncate_statement(KingbaseSqlParser::Truncate_statementContext *ctx) = 0;

  virtual void enterSelect_statement(KingbaseSqlParser::Select_statementContext *ctx) = 0;
  virtual void exitSelect_statement(KingbaseSqlParser::Select_statementContext *ctx) = 0;

  virtual void enterWith_clause(KingbaseSqlParser::With_clauseContext *ctx) = 0;
  virtual void exitWith_clause(KingbaseSqlParser::With_clauseContext *ctx) = 0;

  virtual void enterWith_query(KingbaseSqlParser::With_queryContext *ctx) = 0;
  virtual void exitWith_query(KingbaseSqlParser::With_queryContext *ctx) = 0;

  virtual void enterSubquery(KingbaseSqlParser::SubqueryContext *ctx) = 0;
  virtual void exitSubquery(KingbaseSqlParser::SubqueryContext *ctx) = 0;

  virtual void enterSubquery_basic_elements(KingbaseSqlParser::Subquery_basic_elementsContext *ctx) = 0;
  virtual void exitSubquery_basic_elements(KingbaseSqlParser::Subquery_basic_elementsContext *ctx) = 0;

  virtual void enterSubquery_operation_part(KingbaseSqlParser::Subquery_operation_partContext *ctx) = 0;
  virtual void exitSubquery_operation_part(KingbaseSqlParser::Subquery_operation_partContext *ctx) = 0;

  virtual void enterDml_table_expression_clause(KingbaseSqlParser::Dml_table_expression_clauseContext *ctx) = 0;
  virtual void exitDml_table_expression_clause(KingbaseSqlParser::Dml_table_expression_clauseContext *ctx) = 0;

  virtual void enterTable_collection_expression(KingbaseSqlParser::Table_collection_expressionContext *ctx) = 0;
  virtual void exitTable_collection_expression(KingbaseSqlParser::Table_collection_expressionContext *ctx) = 0;

  virtual void enterSubquery_restriction_clause(KingbaseSqlParser::Subquery_restriction_clauseContext *ctx) = 0;
  virtual void exitSubquery_restriction_clause(KingbaseSqlParser::Subquery_restriction_clauseContext *ctx) = 0;

  virtual void enterSample_clause(KingbaseSqlParser::Sample_clauseContext *ctx) = 0;
  virtual void exitSample_clause(KingbaseSqlParser::Sample_clauseContext *ctx) = 0;

  virtual void enterSeed_part(KingbaseSqlParser::Seed_partContext *ctx) = 0;
  virtual void exitSeed_part(KingbaseSqlParser::Seed_partContext *ctx) = 0;

  virtual void enterQuery_block(KingbaseSqlParser::Query_blockContext *ctx) = 0;
  virtual void exitQuery_block(KingbaseSqlParser::Query_blockContext *ctx) = 0;

  virtual void enterTop_clause(KingbaseSqlParser::Top_clauseContext *ctx) = 0;
  virtual void exitTop_clause(KingbaseSqlParser::Top_clauseContext *ctx) = 0;

  virtual void enterStart_value(KingbaseSqlParser::Start_valueContext *ctx) = 0;
  virtual void exitStart_value(KingbaseSqlParser::Start_valueContext *ctx) = 0;

  virtual void enterLine_count(KingbaseSqlParser::Line_countContext *ctx) = 0;
  virtual void exitLine_count(KingbaseSqlParser::Line_countContext *ctx) = 0;

  virtual void enterSelected_list(KingbaseSqlParser::Selected_listContext *ctx) = 0;
  virtual void exitSelected_list(KingbaseSqlParser::Selected_listContext *ctx) = 0;

  virtual void enterSelected_list_element(KingbaseSqlParser::Selected_list_elementContext *ctx) = 0;
  virtual void exitSelected_list_element(KingbaseSqlParser::Selected_list_elementContext *ctx) = 0;

  virtual void enterFrom_clause(KingbaseSqlParser::From_clauseContext *ctx) = 0;
  virtual void exitFrom_clause(KingbaseSqlParser::From_clauseContext *ctx) = 0;

  virtual void enterTable_ref_list(KingbaseSqlParser::Table_ref_listContext *ctx) = 0;
  virtual void exitTable_ref_list(KingbaseSqlParser::Table_ref_listContext *ctx) = 0;

  virtual void enterTable_ref(KingbaseSqlParser::Table_refContext *ctx) = 0;
  virtual void exitTable_ref(KingbaseSqlParser::Table_refContext *ctx) = 0;

  virtual void enterTable_ref_aux(KingbaseSqlParser::Table_ref_auxContext *ctx) = 0;
  virtual void exitTable_ref_aux(KingbaseSqlParser::Table_ref_auxContext *ctx) = 0;

  virtual void enterTable_ref_aux_internal_one(KingbaseSqlParser::Table_ref_aux_internal_oneContext *ctx) = 0;
  virtual void exitTable_ref_aux_internal_one(KingbaseSqlParser::Table_ref_aux_internal_oneContext *ctx) = 0;

  virtual void enterTable_ref_aux_internal_two(KingbaseSqlParser::Table_ref_aux_internal_twoContext *ctx) = 0;
  virtual void exitTable_ref_aux_internal_two(KingbaseSqlParser::Table_ref_aux_internal_twoContext *ctx) = 0;

  virtual void enterTable_ref_aux_internal_three(KingbaseSqlParser::Table_ref_aux_internal_threeContext *ctx) = 0;
  virtual void exitTable_ref_aux_internal_three(KingbaseSqlParser::Table_ref_aux_internal_threeContext *ctx) = 0;

  virtual void enterWhere_clause(KingbaseSqlParser::Where_clauseContext *ctx) = 0;
  virtual void exitWhere_clause(KingbaseSqlParser::Where_clauseContext *ctx) = 0;

  virtual void enterJoin_clause(KingbaseSqlParser::Join_clauseContext *ctx) = 0;
  virtual void exitJoin_clause(KingbaseSqlParser::Join_clauseContext *ctx) = 0;

  virtual void enterJoin_on_part(KingbaseSqlParser::Join_on_partContext *ctx) = 0;
  virtual void exitJoin_on_part(KingbaseSqlParser::Join_on_partContext *ctx) = 0;

  virtual void enterJoin_using_part(KingbaseSqlParser::Join_using_partContext *ctx) = 0;
  virtual void exitJoin_using_part(KingbaseSqlParser::Join_using_partContext *ctx) = 0;

  virtual void enterOuter_join_type(KingbaseSqlParser::Outer_join_typeContext *ctx) = 0;
  virtual void exitOuter_join_type(KingbaseSqlParser::Outer_join_typeContext *ctx) = 0;

  virtual void enterQuery_partition_clause(KingbaseSqlParser::Query_partition_clauseContext *ctx) = 0;
  virtual void exitQuery_partition_clause(KingbaseSqlParser::Query_partition_clauseContext *ctx) = 0;

  virtual void enterPivot_clause(KingbaseSqlParser::Pivot_clauseContext *ctx) = 0;
  virtual void exitPivot_clause(KingbaseSqlParser::Pivot_clauseContext *ctx) = 0;

  virtual void enterPivot_element(KingbaseSqlParser::Pivot_elementContext *ctx) = 0;
  virtual void exitPivot_element(KingbaseSqlParser::Pivot_elementContext *ctx) = 0;

  virtual void enterAggregate_function_name(KingbaseSqlParser::Aggregate_function_nameContext *ctx) = 0;
  virtual void exitAggregate_function_name(KingbaseSqlParser::Aggregate_function_nameContext *ctx) = 0;

  virtual void enterPivot_for_clause(KingbaseSqlParser::Pivot_for_clauseContext *ctx) = 0;
  virtual void exitPivot_for_clause(KingbaseSqlParser::Pivot_for_clauseContext *ctx) = 0;

  virtual void enterPivot_in_clause(KingbaseSqlParser::Pivot_in_clauseContext *ctx) = 0;
  virtual void exitPivot_in_clause(KingbaseSqlParser::Pivot_in_clauseContext *ctx) = 0;

  virtual void enterPivot_in_clause_element(KingbaseSqlParser::Pivot_in_clause_elementContext *ctx) = 0;
  virtual void exitPivot_in_clause_element(KingbaseSqlParser::Pivot_in_clause_elementContext *ctx) = 0;

  virtual void enterPivot_in_clause_elements(KingbaseSqlParser::Pivot_in_clause_elementsContext *ctx) = 0;
  virtual void exitPivot_in_clause_elements(KingbaseSqlParser::Pivot_in_clause_elementsContext *ctx) = 0;

  virtual void enterUnpivot_clause(KingbaseSqlParser::Unpivot_clauseContext *ctx) = 0;
  virtual void exitUnpivot_clause(KingbaseSqlParser::Unpivot_clauseContext *ctx) = 0;

  virtual void enterUnpivot_in_clause(KingbaseSqlParser::Unpivot_in_clauseContext *ctx) = 0;
  virtual void exitUnpivot_in_clause(KingbaseSqlParser::Unpivot_in_clauseContext *ctx) = 0;

  virtual void enterUnpivot_in_elements(KingbaseSqlParser::Unpivot_in_elementsContext *ctx) = 0;
  virtual void exitUnpivot_in_elements(KingbaseSqlParser::Unpivot_in_elementsContext *ctx) = 0;

  virtual void enterHierarchical_query_clause(KingbaseSqlParser::Hierarchical_query_clauseContext *ctx) = 0;
  virtual void exitHierarchical_query_clause(KingbaseSqlParser::Hierarchical_query_clauseContext *ctx) = 0;

  virtual void enterStart_part(KingbaseSqlParser::Start_partContext *ctx) = 0;
  virtual void exitStart_part(KingbaseSqlParser::Start_partContext *ctx) = 0;

  virtual void enterGroup_by_clause(KingbaseSqlParser::Group_by_clauseContext *ctx) = 0;
  virtual void exitGroup_by_clause(KingbaseSqlParser::Group_by_clauseContext *ctx) = 0;

  virtual void enterGroup_by_elements(KingbaseSqlParser::Group_by_elementsContext *ctx) = 0;
  virtual void exitGroup_by_elements(KingbaseSqlParser::Group_by_elementsContext *ctx) = 0;

  virtual void enterRollup_cube_expression(KingbaseSqlParser::Rollup_cube_expressionContext *ctx) = 0;
  virtual void exitRollup_cube_expression(KingbaseSqlParser::Rollup_cube_expressionContext *ctx) = 0;

  virtual void enterEmpty_expression(KingbaseSqlParser::Empty_expressionContext *ctx) = 0;
  virtual void exitEmpty_expression(KingbaseSqlParser::Empty_expressionContext *ctx) = 0;

  virtual void enterGrouping_sets_expression(KingbaseSqlParser::Grouping_sets_expressionContext *ctx) = 0;
  virtual void exitGrouping_sets_expression(KingbaseSqlParser::Grouping_sets_expressionContext *ctx) = 0;

  virtual void enterHaving_clause(KingbaseSqlParser::Having_clauseContext *ctx) = 0;
  virtual void exitHaving_clause(KingbaseSqlParser::Having_clauseContext *ctx) = 0;

  virtual void enterCell_assignment(KingbaseSqlParser::Cell_assignmentContext *ctx) = 0;
  virtual void exitCell_assignment(KingbaseSqlParser::Cell_assignmentContext *ctx) = 0;

  virtual void enterUntil_part(KingbaseSqlParser::Until_partContext *ctx) = 0;
  virtual void exitUntil_part(KingbaseSqlParser::Until_partContext *ctx) = 0;

  virtual void enterOrder_by_clause(KingbaseSqlParser::Order_by_clauseContext *ctx) = 0;
  virtual void exitOrder_by_clause(KingbaseSqlParser::Order_by_clauseContext *ctx) = 0;

  virtual void enterOrder_by_elements(KingbaseSqlParser::Order_by_elementsContext *ctx) = 0;
  virtual void exitOrder_by_elements(KingbaseSqlParser::Order_by_elementsContext *ctx) = 0;

  virtual void enterLimit_clause(KingbaseSqlParser::Limit_clauseContext *ctx) = 0;
  virtual void exitLimit_clause(KingbaseSqlParser::Limit_clauseContext *ctx) = 0;

  virtual void enterOffset_clause(KingbaseSqlParser::Offset_clauseContext *ctx) = 0;
  virtual void exitOffset_clause(KingbaseSqlParser::Offset_clauseContext *ctx) = 0;

  virtual void enterFetch_clause(KingbaseSqlParser::Fetch_clauseContext *ctx) = 0;
  virtual void exitFetch_clause(KingbaseSqlParser::Fetch_clauseContext *ctx) = 0;

  virtual void enterFor_update_clause(KingbaseSqlParser::For_update_clauseContext *ctx) = 0;
  virtual void exitFor_update_clause(KingbaseSqlParser::For_update_clauseContext *ctx) = 0;

  virtual void enterFor_update_of_part(KingbaseSqlParser::For_update_of_partContext *ctx) = 0;
  virtual void exitFor_update_of_part(KingbaseSqlParser::For_update_of_partContext *ctx) = 0;

  virtual void enterFor_update_options(KingbaseSqlParser::For_update_optionsContext *ctx) = 0;
  virtual void exitFor_update_options(KingbaseSqlParser::For_update_optionsContext *ctx) = 0;

  virtual void enterKeep_clause(KingbaseSqlParser::Keep_clauseContext *ctx) = 0;
  virtual void exitKeep_clause(KingbaseSqlParser::Keep_clauseContext *ctx) = 0;

  virtual void enterFunction_argument(KingbaseSqlParser::Function_argumentContext *ctx) = 0;
  virtual void exitFunction_argument(KingbaseSqlParser::Function_argumentContext *ctx) = 0;

  virtual void enterFunction_argument_analytic(KingbaseSqlParser::Function_argument_analyticContext *ctx) = 0;
  virtual void exitFunction_argument_analytic(KingbaseSqlParser::Function_argument_analyticContext *ctx) = 0;

  virtual void enterFunction_argument_modeling(KingbaseSqlParser::Function_argument_modelingContext *ctx) = 0;
  virtual void exitFunction_argument_modeling(KingbaseSqlParser::Function_argument_modelingContext *ctx) = 0;

  virtual void enterRespect_or_ignore_nulls(KingbaseSqlParser::Respect_or_ignore_nullsContext *ctx) = 0;
  virtual void exitRespect_or_ignore_nulls(KingbaseSqlParser::Respect_or_ignore_nullsContext *ctx) = 0;

  virtual void enterArgument(KingbaseSqlParser::ArgumentContext *ctx) = 0;
  virtual void exitArgument(KingbaseSqlParser::ArgumentContext *ctx) = 0;

  virtual void enterDatatype(KingbaseSqlParser::DatatypeContext *ctx) = 0;
  virtual void exitDatatype(KingbaseSqlParser::DatatypeContext *ctx) = 0;

  virtual void enterPrecision_part(KingbaseSqlParser::Precision_partContext *ctx) = 0;
  virtual void exitPrecision_part(KingbaseSqlParser::Precision_partContext *ctx) = 0;

  virtual void enterNative_datatype_element(KingbaseSqlParser::Native_datatype_elementContext *ctx) = 0;
  virtual void exitNative_datatype_element(KingbaseSqlParser::Native_datatype_elementContext *ctx) = 0;

  virtual void enterUpdate_statement(KingbaseSqlParser::Update_statementContext *ctx) = 0;
  virtual void exitUpdate_statement(KingbaseSqlParser::Update_statementContext *ctx) = 0;

  virtual void enterUpdate_set_clause(KingbaseSqlParser::Update_set_clauseContext *ctx) = 0;
  virtual void exitUpdate_set_clause(KingbaseSqlParser::Update_set_clauseContext *ctx) = 0;

  virtual void enterColumn_based_update_set_clause(KingbaseSqlParser::Column_based_update_set_clauseContext *ctx) = 0;
  virtual void exitColumn_based_update_set_clause(KingbaseSqlParser::Column_based_update_set_clauseContext *ctx) = 0;

  virtual void enterDelete_statement(KingbaseSqlParser::Delete_statementContext *ctx) = 0;
  virtual void exitDelete_statement(KingbaseSqlParser::Delete_statementContext *ctx) = 0;

  virtual void enterGeneral_table_ref(KingbaseSqlParser::General_table_refContext *ctx) = 0;
  virtual void exitGeneral_table_ref(KingbaseSqlParser::General_table_refContext *ctx) = 0;

  virtual void enterStatic_returning_clause(KingbaseSqlParser::Static_returning_clauseContext *ctx) = 0;
  virtual void exitStatic_returning_clause(KingbaseSqlParser::Static_returning_clauseContext *ctx) = 0;

  virtual void enterInsert_statement(KingbaseSqlParser::Insert_statementContext *ctx) = 0;
  virtual void exitInsert_statement(KingbaseSqlParser::Insert_statementContext *ctx) = 0;

  virtual void enterSingle_table_insert(KingbaseSqlParser::Single_table_insertContext *ctx) = 0;
  virtual void exitSingle_table_insert(KingbaseSqlParser::Single_table_insertContext *ctx) = 0;

  virtual void enterMulti_table_insert(KingbaseSqlParser::Multi_table_insertContext *ctx) = 0;
  virtual void exitMulti_table_insert(KingbaseSqlParser::Multi_table_insertContext *ctx) = 0;

  virtual void enterMulti_table_element(KingbaseSqlParser::Multi_table_elementContext *ctx) = 0;
  virtual void exitMulti_table_element(KingbaseSqlParser::Multi_table_elementContext *ctx) = 0;

  virtual void enterConditional_insert_clause(KingbaseSqlParser::Conditional_insert_clauseContext *ctx) = 0;
  virtual void exitConditional_insert_clause(KingbaseSqlParser::Conditional_insert_clauseContext *ctx) = 0;

  virtual void enterConditional_insert_when_part(KingbaseSqlParser::Conditional_insert_when_partContext *ctx) = 0;
  virtual void exitConditional_insert_when_part(KingbaseSqlParser::Conditional_insert_when_partContext *ctx) = 0;

  virtual void enterConditional_insert_else_part(KingbaseSqlParser::Conditional_insert_else_partContext *ctx) = 0;
  virtual void exitConditional_insert_else_part(KingbaseSqlParser::Conditional_insert_else_partContext *ctx) = 0;

  virtual void enterInsert_into_clause(KingbaseSqlParser::Insert_into_clauseContext *ctx) = 0;
  virtual void exitInsert_into_clause(KingbaseSqlParser::Insert_into_clauseContext *ctx) = 0;

  virtual void enterValues_clause(KingbaseSqlParser::Values_clauseContext *ctx) = 0;
  virtual void exitValues_clause(KingbaseSqlParser::Values_clauseContext *ctx) = 0;

  virtual void enterCopy_statement(KingbaseSqlParser::Copy_statementContext *ctx) = 0;
  virtual void exitCopy_statement(KingbaseSqlParser::Copy_statementContext *ctx) = 0;

  virtual void enterCondition(KingbaseSqlParser::ConditionContext *ctx) = 0;
  virtual void exitCondition(KingbaseSqlParser::ConditionContext *ctx) = 0;

  virtual void enterExpressions(KingbaseSqlParser::ExpressionsContext *ctx) = 0;
  virtual void exitExpressions(KingbaseSqlParser::ExpressionsContext *ctx) = 0;

  virtual void enterExpression(KingbaseSqlParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(KingbaseSqlParser::ExpressionContext *ctx) = 0;

  virtual void enterCursor_expression(KingbaseSqlParser::Cursor_expressionContext *ctx) = 0;
  virtual void exitCursor_expression(KingbaseSqlParser::Cursor_expressionContext *ctx) = 0;

  virtual void enterLogical_expression(KingbaseSqlParser::Logical_expressionContext *ctx) = 0;
  virtual void exitLogical_expression(KingbaseSqlParser::Logical_expressionContext *ctx) = 0;

  virtual void enterMultiset_expression(KingbaseSqlParser::Multiset_expressionContext *ctx) = 0;
  virtual void exitMultiset_expression(KingbaseSqlParser::Multiset_expressionContext *ctx) = 0;

  virtual void enterRelational_expression(KingbaseSqlParser::Relational_expressionContext *ctx) = 0;
  virtual void exitRelational_expression(KingbaseSqlParser::Relational_expressionContext *ctx) = 0;

  virtual void enterCompound_expression(KingbaseSqlParser::Compound_expressionContext *ctx) = 0;
  virtual void exitCompound_expression(KingbaseSqlParser::Compound_expressionContext *ctx) = 0;

  virtual void enterRelational_operator(KingbaseSqlParser::Relational_operatorContext *ctx) = 0;
  virtual void exitRelational_operator(KingbaseSqlParser::Relational_operatorContext *ctx) = 0;

  virtual void enterIn_elements(KingbaseSqlParser::In_elementsContext *ctx) = 0;
  virtual void exitIn_elements(KingbaseSqlParser::In_elementsContext *ctx) = 0;

  virtual void enterBetween_elements(KingbaseSqlParser::Between_elementsContext *ctx) = 0;
  virtual void exitBetween_elements(KingbaseSqlParser::Between_elementsContext *ctx) = 0;

  virtual void enterConcatenation(KingbaseSqlParser::ConcatenationContext *ctx) = 0;
  virtual void exitConcatenation(KingbaseSqlParser::ConcatenationContext *ctx) = 0;

  virtual void enterInterval_expression(KingbaseSqlParser::Interval_expressionContext *ctx) = 0;
  virtual void exitInterval_expression(KingbaseSqlParser::Interval_expressionContext *ctx) = 0;

  virtual void enterModel_expression(KingbaseSqlParser::Model_expressionContext *ctx) = 0;
  virtual void exitModel_expression(KingbaseSqlParser::Model_expressionContext *ctx) = 0;

  virtual void enterModel_expression_element(KingbaseSqlParser::Model_expression_elementContext *ctx) = 0;
  virtual void exitModel_expression_element(KingbaseSqlParser::Model_expression_elementContext *ctx) = 0;

  virtual void enterSingle_column_for_loop(KingbaseSqlParser::Single_column_for_loopContext *ctx) = 0;
  virtual void exitSingle_column_for_loop(KingbaseSqlParser::Single_column_for_loopContext *ctx) = 0;

  virtual void enterMulti_column_for_loop(KingbaseSqlParser::Multi_column_for_loopContext *ctx) = 0;
  virtual void exitMulti_column_for_loop(KingbaseSqlParser::Multi_column_for_loopContext *ctx) = 0;

  virtual void enterUnary_expression(KingbaseSqlParser::Unary_expressionContext *ctx) = 0;
  virtual void exitUnary_expression(KingbaseSqlParser::Unary_expressionContext *ctx) = 0;

  virtual void enterCase_statement(KingbaseSqlParser::Case_statementContext *ctx) = 0;
  virtual void exitCase_statement(KingbaseSqlParser::Case_statementContext *ctx) = 0;

  virtual void enterSimple_case_statement(KingbaseSqlParser::Simple_case_statementContext *ctx) = 0;
  virtual void exitSimple_case_statement(KingbaseSqlParser::Simple_case_statementContext *ctx) = 0;

  virtual void enterSimple_case_when_part(KingbaseSqlParser::Simple_case_when_partContext *ctx) = 0;
  virtual void exitSimple_case_when_part(KingbaseSqlParser::Simple_case_when_partContext *ctx) = 0;

  virtual void enterSearched_case_statement(KingbaseSqlParser::Searched_case_statementContext *ctx) = 0;
  virtual void exitSearched_case_statement(KingbaseSqlParser::Searched_case_statementContext *ctx) = 0;

  virtual void enterSearched_case_when_part(KingbaseSqlParser::Searched_case_when_partContext *ctx) = 0;
  virtual void exitSearched_case_when_part(KingbaseSqlParser::Searched_case_when_partContext *ctx) = 0;

  virtual void enterCase_else_part(KingbaseSqlParser::Case_else_partContext *ctx) = 0;
  virtual void exitCase_else_part(KingbaseSqlParser::Case_else_partContext *ctx) = 0;

  virtual void enterAtom(KingbaseSqlParser::AtomContext *ctx) = 0;
  virtual void exitAtom(KingbaseSqlParser::AtomContext *ctx) = 0;

  virtual void enterQuantified_expression(KingbaseSqlParser::Quantified_expressionContext *ctx) = 0;
  virtual void exitQuantified_expression(KingbaseSqlParser::Quantified_expressionContext *ctx) = 0;

  virtual void enterString_function(KingbaseSqlParser::String_functionContext *ctx) = 0;
  virtual void exitString_function(KingbaseSqlParser::String_functionContext *ctx) = 0;

  virtual void enterStandard_function(KingbaseSqlParser::Standard_functionContext *ctx) = 0;
  virtual void exitStandard_function(KingbaseSqlParser::Standard_functionContext *ctx) = 0;

  virtual void enterNumeric_function_wrapper(KingbaseSqlParser::Numeric_function_wrapperContext *ctx) = 0;
  virtual void exitNumeric_function_wrapper(KingbaseSqlParser::Numeric_function_wrapperContext *ctx) = 0;

  virtual void enterNumeric_function(KingbaseSqlParser::Numeric_functionContext *ctx) = 0;
  virtual void exitNumeric_function(KingbaseSqlParser::Numeric_functionContext *ctx) = 0;

  virtual void enterOther_function(KingbaseSqlParser::Other_functionContext *ctx) = 0;
  virtual void exitOther_function(KingbaseSqlParser::Other_functionContext *ctx) = 0;

  virtual void enterOver_clause_keyword(KingbaseSqlParser::Over_clause_keywordContext *ctx) = 0;
  virtual void exitOver_clause_keyword(KingbaseSqlParser::Over_clause_keywordContext *ctx) = 0;

  virtual void enterWithin_or_over_clause_keyword(KingbaseSqlParser::Within_or_over_clause_keywordContext *ctx) = 0;
  virtual void exitWithin_or_over_clause_keyword(KingbaseSqlParser::Within_or_over_clause_keywordContext *ctx) = 0;

  virtual void enterStandard_prediction_function_keyword(KingbaseSqlParser::Standard_prediction_function_keywordContext *ctx) = 0;
  virtual void exitStandard_prediction_function_keyword(KingbaseSqlParser::Standard_prediction_function_keywordContext *ctx) = 0;

  virtual void enterOver_clause(KingbaseSqlParser::Over_clauseContext *ctx) = 0;
  virtual void exitOver_clause(KingbaseSqlParser::Over_clauseContext *ctx) = 0;

  virtual void enterWindowing_clause(KingbaseSqlParser::Windowing_clauseContext *ctx) = 0;
  virtual void exitWindowing_clause(KingbaseSqlParser::Windowing_clauseContext *ctx) = 0;

  virtual void enterWindowing_type(KingbaseSqlParser::Windowing_typeContext *ctx) = 0;
  virtual void exitWindowing_type(KingbaseSqlParser::Windowing_typeContext *ctx) = 0;

  virtual void enterWindowing_elements(KingbaseSqlParser::Windowing_elementsContext *ctx) = 0;
  virtual void exitWindowing_elements(KingbaseSqlParser::Windowing_elementsContext *ctx) = 0;

  virtual void enterCollect_order_by_part(KingbaseSqlParser::Collect_order_by_partContext *ctx) = 0;
  virtual void exitCollect_order_by_part(KingbaseSqlParser::Collect_order_by_partContext *ctx) = 0;

  virtual void enterWithin_or_over_part(KingbaseSqlParser::Within_or_over_partContext *ctx) = 0;
  virtual void exitWithin_or_over_part(KingbaseSqlParser::Within_or_over_partContext *ctx) = 0;

  virtual void enterXml_passing_clause(KingbaseSqlParser::Xml_passing_clauseContext *ctx) = 0;
  virtual void exitXml_passing_clause(KingbaseSqlParser::Xml_passing_clauseContext *ctx) = 0;

  virtual void enterXml_attributes_clause(KingbaseSqlParser::Xml_attributes_clauseContext *ctx) = 0;
  virtual void exitXml_attributes_clause(KingbaseSqlParser::Xml_attributes_clauseContext *ctx) = 0;

  virtual void enterXml_namespaces_clause(KingbaseSqlParser::Xml_namespaces_clauseContext *ctx) = 0;
  virtual void exitXml_namespaces_clause(KingbaseSqlParser::Xml_namespaces_clauseContext *ctx) = 0;

  virtual void enterXml_table_column(KingbaseSqlParser::Xml_table_columnContext *ctx) = 0;
  virtual void exitXml_table_column(KingbaseSqlParser::Xml_table_columnContext *ctx) = 0;

  virtual void enterXml_general_default_part(KingbaseSqlParser::Xml_general_default_partContext *ctx) = 0;
  virtual void exitXml_general_default_part(KingbaseSqlParser::Xml_general_default_partContext *ctx) = 0;

  virtual void enterXml_multiuse_expression_element(KingbaseSqlParser::Xml_multiuse_expression_elementContext *ctx) = 0;
  virtual void exitXml_multiuse_expression_element(KingbaseSqlParser::Xml_multiuse_expression_elementContext *ctx) = 0;

  virtual void enterXmlroot_param_version_part(KingbaseSqlParser::Xmlroot_param_version_partContext *ctx) = 0;
  virtual void exitXmlroot_param_version_part(KingbaseSqlParser::Xmlroot_param_version_partContext *ctx) = 0;

  virtual void enterXmlroot_param_standalone_part(KingbaseSqlParser::Xmlroot_param_standalone_partContext *ctx) = 0;
  virtual void exitXmlroot_param_standalone_part(KingbaseSqlParser::Xmlroot_param_standalone_partContext *ctx) = 0;

  virtual void enterXmlserialize_param_enconding_part(KingbaseSqlParser::Xmlserialize_param_enconding_partContext *ctx) = 0;
  virtual void exitXmlserialize_param_enconding_part(KingbaseSqlParser::Xmlserialize_param_enconding_partContext *ctx) = 0;

  virtual void enterXmlserialize_param_version_part(KingbaseSqlParser::Xmlserialize_param_version_partContext *ctx) = 0;
  virtual void exitXmlserialize_param_version_part(KingbaseSqlParser::Xmlserialize_param_version_partContext *ctx) = 0;

  virtual void enterXmlserialize_param_ident_part(KingbaseSqlParser::Xmlserialize_param_ident_partContext *ctx) = 0;
  virtual void exitXmlserialize_param_ident_part(KingbaseSqlParser::Xmlserialize_param_ident_partContext *ctx) = 0;

  virtual void enterBind_variable(KingbaseSqlParser::Bind_variableContext *ctx) = 0;
  virtual void exitBind_variable(KingbaseSqlParser::Bind_variableContext *ctx) = 0;

  virtual void enterGeneral_element(KingbaseSqlParser::General_elementContext *ctx) = 0;
  virtual void exitGeneral_element(KingbaseSqlParser::General_elementContext *ctx) = 0;

  virtual void enterGeneral_element_part(KingbaseSqlParser::General_element_partContext *ctx) = 0;
  virtual void exitGeneral_element_part(KingbaseSqlParser::General_element_partContext *ctx) = 0;

  virtual void enterTable_element(KingbaseSqlParser::Table_elementContext *ctx) = 0;
  virtual void exitTable_element(KingbaseSqlParser::Table_elementContext *ctx) = 0;

  virtual void enterTableview_name(KingbaseSqlParser::Tableview_nameContext *ctx) = 0;
  virtual void exitTableview_name(KingbaseSqlParser::Tableview_nameContext *ctx) = 0;

  virtual void enterColumn_name(KingbaseSqlParser::Column_nameContext *ctx) = 0;
  virtual void exitColumn_name(KingbaseSqlParser::Column_nameContext *ctx) = 0;

  virtual void enterTable_name(KingbaseSqlParser::Table_nameContext *ctx) = 0;
  virtual void exitTable_name(KingbaseSqlParser::Table_nameContext *ctx) = 0;

  virtual void enterLink_name(KingbaseSqlParser::Link_nameContext *ctx) = 0;
  virtual void exitLink_name(KingbaseSqlParser::Link_nameContext *ctx) = 0;

  virtual void enterColumn_alias(KingbaseSqlParser::Column_aliasContext *ctx) = 0;
  virtual void exitColumn_alias(KingbaseSqlParser::Column_aliasContext *ctx) = 0;

  virtual void enterTable_alias(KingbaseSqlParser::Table_aliasContext *ctx) = 0;
  virtual void exitTable_alias(KingbaseSqlParser::Table_aliasContext *ctx) = 0;

  virtual void enterXml_column_name(KingbaseSqlParser::Xml_column_nameContext *ctx) = 0;
  virtual void exitXml_column_name(KingbaseSqlParser::Xml_column_nameContext *ctx) = 0;

  virtual void enterParen_column_list(KingbaseSqlParser::Paren_column_listContext *ctx) = 0;
  virtual void exitParen_column_list(KingbaseSqlParser::Paren_column_listContext *ctx) = 0;

  virtual void enterColumn_list(KingbaseSqlParser::Column_listContext *ctx) = 0;
  virtual void exitColumn_list(KingbaseSqlParser::Column_listContext *ctx) = 0;

  virtual void enterWith_query_name(KingbaseSqlParser::With_query_nameContext *ctx) = 0;
  virtual void exitWith_query_name(KingbaseSqlParser::With_query_nameContext *ctx) = 0;

  virtual void enterConstraint_name(KingbaseSqlParser::Constraint_nameContext *ctx) = 0;
  virtual void exitConstraint_name(KingbaseSqlParser::Constraint_nameContext *ctx) = 0;

  virtual void enterLabel_name(KingbaseSqlParser::Label_nameContext *ctx) = 0;
  virtual void exitLabel_name(KingbaseSqlParser::Label_nameContext *ctx) = 0;

  virtual void enterPartition_extension_clause(KingbaseSqlParser::Partition_extension_clauseContext *ctx) = 0;
  virtual void exitPartition_extension_clause(KingbaseSqlParser::Partition_extension_clauseContext *ctx) = 0;

  virtual void enterConstant(KingbaseSqlParser::ConstantContext *ctx) = 0;
  virtual void exitConstant(KingbaseSqlParser::ConstantContext *ctx) = 0;

  virtual void enterNumeric(KingbaseSqlParser::NumericContext *ctx) = 0;
  virtual void exitNumeric(KingbaseSqlParser::NumericContext *ctx) = 0;

  virtual void enterNumeric_negative(KingbaseSqlParser::Numeric_negativeContext *ctx) = 0;
  virtual void exitNumeric_negative(KingbaseSqlParser::Numeric_negativeContext *ctx) = 0;

  virtual void enterQuoted_string(KingbaseSqlParser::Quoted_stringContext *ctx) = 0;
  virtual void exitQuoted_string(KingbaseSqlParser::Quoted_stringContext *ctx) = 0;

  virtual void enterIdentifier(KingbaseSqlParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(KingbaseSqlParser::IdentifierContext *ctx) = 0;

  virtual void enterId_expression(KingbaseSqlParser::Id_expressionContext *ctx) = 0;
  virtual void exitId_expression(KingbaseSqlParser::Id_expressionContext *ctx) = 0;

  virtual void enterOuter_join_sign(KingbaseSqlParser::Outer_join_signContext *ctx) = 0;
  virtual void exitOuter_join_sign(KingbaseSqlParser::Outer_join_signContext *ctx) = 0;

  virtual void enterRegular_id(KingbaseSqlParser::Regular_idContext *ctx) = 0;
  virtual void exitRegular_id(KingbaseSqlParser::Regular_idContext *ctx) = 0;

  virtual void enterNon_reserved_keywords_in_12c(KingbaseSqlParser::Non_reserved_keywords_in_12cContext *ctx) = 0;
  virtual void exitNon_reserved_keywords_in_12c(KingbaseSqlParser::Non_reserved_keywords_in_12cContext *ctx) = 0;

  virtual void enterNon_reserved_keywords_pre12c(KingbaseSqlParser::Non_reserved_keywords_pre12cContext *ctx) = 0;
  virtual void exitNon_reserved_keywords_pre12c(KingbaseSqlParser::Non_reserved_keywords_pre12cContext *ctx) = 0;


};


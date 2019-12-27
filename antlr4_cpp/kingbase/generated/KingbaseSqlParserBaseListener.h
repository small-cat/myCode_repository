
// Generated from KingbaseSqlParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "KingbaseSqlParserListener.h"


/**
 * This class provides an empty implementation of KingbaseSqlParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  KingbaseSqlParserBaseListener : public KingbaseSqlParserListener {
public:

  virtual void enterSql_script(KingbaseSqlParser::Sql_scriptContext * /*ctx*/) override { }
  virtual void exitSql_script(KingbaseSqlParser::Sql_scriptContext * /*ctx*/) override { }

  virtual void enterUnit_sql_statement(KingbaseSqlParser::Unit_sql_statementContext * /*ctx*/) override { }
  virtual void exitUnit_sql_statement(KingbaseSqlParser::Unit_sql_statementContext * /*ctx*/) override { }

  virtual void enterUnit_statement(KingbaseSqlParser::Unit_statementContext * /*ctx*/) override { }
  virtual void exitUnit_statement(KingbaseSqlParser::Unit_statementContext * /*ctx*/) override { }

  virtual void enterAlter_full_search_configuration(KingbaseSqlParser::Alter_full_search_configurationContext * /*ctx*/) override { }
  virtual void exitAlter_full_search_configuration(KingbaseSqlParser::Alter_full_search_configurationContext * /*ctx*/) override { }

  virtual void enterToken_or_dictionary(KingbaseSqlParser::Token_or_dictionaryContext * /*ctx*/) override { }
  virtual void exitToken_or_dictionary(KingbaseSqlParser::Token_or_dictionaryContext * /*ctx*/) override { }

  virtual void enterAlter_full_search_dictionary(KingbaseSqlParser::Alter_full_search_dictionaryContext * /*ctx*/) override { }
  virtual void exitAlter_full_search_dictionary(KingbaseSqlParser::Alter_full_search_dictionaryContext * /*ctx*/) override { }

  virtual void enterAlter_full_search_parser(KingbaseSqlParser::Alter_full_search_parserContext * /*ctx*/) override { }
  virtual void exitAlter_full_search_parser(KingbaseSqlParser::Alter_full_search_parserContext * /*ctx*/) override { }

  virtual void enterAlter_full_search_template(KingbaseSqlParser::Alter_full_search_templateContext * /*ctx*/) override { }
  virtual void exitAlter_full_search_template(KingbaseSqlParser::Alter_full_search_templateContext * /*ctx*/) override { }

  virtual void enterDrop_full_search(KingbaseSqlParser::Drop_full_searchContext * /*ctx*/) override { }
  virtual void exitDrop_full_search(KingbaseSqlParser::Drop_full_searchContext * /*ctx*/) override { }

  virtual void enterDrop_index_schema_sequence_table_view(KingbaseSqlParser::Drop_index_schema_sequence_table_viewContext * /*ctx*/) override { }
  virtual void exitDrop_index_schema_sequence_table_view(KingbaseSqlParser::Drop_index_schema_sequence_table_viewContext * /*ctx*/) override { }

  virtual void enterDrop_materialize_view(KingbaseSqlParser::Drop_materialize_viewContext * /*ctx*/) override { }
  virtual void exitDrop_materialize_view(KingbaseSqlParser::Drop_materialize_viewContext * /*ctx*/) override { }

  virtual void enterDrop_synonym(KingbaseSqlParser::Drop_synonymContext * /*ctx*/) override { }
  virtual void exitDrop_synonym(KingbaseSqlParser::Drop_synonymContext * /*ctx*/) override { }

  virtual void enterDrop_tablespace(KingbaseSqlParser::Drop_tablespaceContext * /*ctx*/) override { }
  virtual void exitDrop_tablespace(KingbaseSqlParser::Drop_tablespaceContext * /*ctx*/) override { }

  virtual void enterDrop_directory(KingbaseSqlParser::Drop_directoryContext * /*ctx*/) override { }
  virtual void exitDrop_directory(KingbaseSqlParser::Drop_directoryContext * /*ctx*/) override { }

  virtual void enterAlter_function(KingbaseSqlParser::Alter_functionContext * /*ctx*/) override { }
  virtual void exitAlter_function(KingbaseSqlParser::Alter_functionContext * /*ctx*/) override { }

  virtual void enterDrop_function(KingbaseSqlParser::Drop_functionContext * /*ctx*/) override { }
  virtual void exitDrop_function(KingbaseSqlParser::Drop_functionContext * /*ctx*/) override { }

  virtual void enterCreate_function_statement(KingbaseSqlParser::Create_function_statementContext * /*ctx*/) override { }
  virtual void exitCreate_function_statement(KingbaseSqlParser::Create_function_statementContext * /*ctx*/) override { }

  virtual void enterSequence_of_statements(KingbaseSqlParser::Sequence_of_statementsContext * /*ctx*/) override { }
  virtual void exitSequence_of_statements(KingbaseSqlParser::Sequence_of_statementsContext * /*ctx*/) override { }

  virtual void enterSequence_of_statement(KingbaseSqlParser::Sequence_of_statementContext * /*ctx*/) override { }
  virtual void exitSequence_of_statement(KingbaseSqlParser::Sequence_of_statementContext * /*ctx*/) override { }

  virtual void enterCreate_package(KingbaseSqlParser::Create_packageContext * /*ctx*/) override { }
  virtual void exitCreate_package(KingbaseSqlParser::Create_packageContext * /*ctx*/) override { }

  virtual void enterAlter_package(KingbaseSqlParser::Alter_packageContext * /*ctx*/) override { }
  virtual void exitAlter_package(KingbaseSqlParser::Alter_packageContext * /*ctx*/) override { }

  virtual void enterDrop_package(KingbaseSqlParser::Drop_packageContext * /*ctx*/) override { }
  virtual void exitDrop_package(KingbaseSqlParser::Drop_packageContext * /*ctx*/) override { }

  virtual void enterPackage_names(KingbaseSqlParser::Package_namesContext * /*ctx*/) override { }
  virtual void exitPackage_names(KingbaseSqlParser::Package_namesContext * /*ctx*/) override { }

  virtual void enterPackage_name(KingbaseSqlParser::Package_nameContext * /*ctx*/) override { }
  virtual void exitPackage_name(KingbaseSqlParser::Package_nameContext * /*ctx*/) override { }

  virtual void enterPackage_body(KingbaseSqlParser::Package_bodyContext * /*ctx*/) override { }
  virtual void exitPackage_body(KingbaseSqlParser::Package_bodyContext * /*ctx*/) override { }

  virtual void enterInitialization_statement(KingbaseSqlParser::Initialization_statementContext * /*ctx*/) override { }
  virtual void exitInitialization_statement(KingbaseSqlParser::Initialization_statementContext * /*ctx*/) override { }

  virtual void enterProcedure_definition(KingbaseSqlParser::Procedure_definitionContext * /*ctx*/) override { }
  virtual void exitProcedure_definition(KingbaseSqlParser::Procedure_definitionContext * /*ctx*/) override { }

  virtual void enterFunction_definition(KingbaseSqlParser::Function_definitionContext * /*ctx*/) override { }
  virtual void exitFunction_definition(KingbaseSqlParser::Function_definitionContext * /*ctx*/) override { }

  virtual void enterDrop_procedure(KingbaseSqlParser::Drop_procedureContext * /*ctx*/) override { }
  virtual void exitDrop_procedure(KingbaseSqlParser::Drop_procedureContext * /*ctx*/) override { }

  virtual void enterAlter_procedure(KingbaseSqlParser::Alter_procedureContext * /*ctx*/) override { }
  virtual void exitAlter_procedure(KingbaseSqlParser::Alter_procedureContext * /*ctx*/) override { }

  virtual void enterCreate_procedure_statement(KingbaseSqlParser::Create_procedure_statementContext * /*ctx*/) override { }
  virtual void exitCreate_procedure_statement(KingbaseSqlParser::Create_procedure_statementContext * /*ctx*/) override { }

  virtual void enterPlsql_block(KingbaseSqlParser::Plsql_blockContext * /*ctx*/) override { }
  virtual void exitPlsql_block(KingbaseSqlParser::Plsql_blockContext * /*ctx*/) override { }

  virtual void enterDeclare_statement(KingbaseSqlParser::Declare_statementContext * /*ctx*/) override { }
  virtual void exitDeclare_statement(KingbaseSqlParser::Declare_statementContext * /*ctx*/) override { }

  virtual void enterDrop_trigger(KingbaseSqlParser::Drop_triggerContext * /*ctx*/) override { }
  virtual void exitDrop_trigger(KingbaseSqlParser::Drop_triggerContext * /*ctx*/) override { }

  virtual void enterAlter_trigger(KingbaseSqlParser::Alter_triggerContext * /*ctx*/) override { }
  virtual void exitAlter_trigger(KingbaseSqlParser::Alter_triggerContext * /*ctx*/) override { }

  virtual void enterCreate_trigger(KingbaseSqlParser::Create_triggerContext * /*ctx*/) override { }
  virtual void exitCreate_trigger(KingbaseSqlParser::Create_triggerContext * /*ctx*/) override { }

  virtual void enterExecute_procedure_statement(KingbaseSqlParser::Execute_procedure_statementContext * /*ctx*/) override { }
  virtual void exitExecute_procedure_statement(KingbaseSqlParser::Execute_procedure_statementContext * /*ctx*/) override { }

  virtual void enterDml_event_clause(KingbaseSqlParser::Dml_event_clauseContext * /*ctx*/) override { }
  virtual void exitDml_event_clause(KingbaseSqlParser::Dml_event_clauseContext * /*ctx*/) override { }

  virtual void enterDml_event_element(KingbaseSqlParser::Dml_event_elementContext * /*ctx*/) override { }
  virtual void exitDml_event_element(KingbaseSqlParser::Dml_event_elementContext * /*ctx*/) override { }

  virtual void enterDrop_type(KingbaseSqlParser::Drop_typeContext * /*ctx*/) override { }
  virtual void exitDrop_type(KingbaseSqlParser::Drop_typeContext * /*ctx*/) override { }

  virtual void enterCreate_type(KingbaseSqlParser::Create_typeContext * /*ctx*/) override { }
  virtual void exitCreate_type(KingbaseSqlParser::Create_typeContext * /*ctx*/) override { }

  virtual void enterType_options(KingbaseSqlParser::Type_optionsContext * /*ctx*/) override { }
  virtual void exitType_options(KingbaseSqlParser::Type_optionsContext * /*ctx*/) override { }

  virtual void enterType_elements_parameter(KingbaseSqlParser::Type_elements_parameterContext * /*ctx*/) override { }
  virtual void exitType_elements_parameter(KingbaseSqlParser::Type_elements_parameterContext * /*ctx*/) override { }

  virtual void enterDrop_sequence(KingbaseSqlParser::Drop_sequenceContext * /*ctx*/) override { }
  virtual void exitDrop_sequence(KingbaseSqlParser::Drop_sequenceContext * /*ctx*/) override { }

  virtual void enterAlter_sequence(KingbaseSqlParser::Alter_sequenceContext * /*ctx*/) override { }
  virtual void exitAlter_sequence(KingbaseSqlParser::Alter_sequenceContext * /*ctx*/) override { }

  virtual void enterAlter_synonym(KingbaseSqlParser::Alter_synonymContext * /*ctx*/) override { }
  virtual void exitAlter_synonym(KingbaseSqlParser::Alter_synonymContext * /*ctx*/) override { }

  virtual void enterAlter_system(KingbaseSqlParser::Alter_systemContext * /*ctx*/) override { }
  virtual void exitAlter_system(KingbaseSqlParser::Alter_systemContext * /*ctx*/) override { }

  virtual void enterSystem_spec(KingbaseSqlParser::System_specContext * /*ctx*/) override { }
  virtual void exitSystem_spec(KingbaseSqlParser::System_specContext * /*ctx*/) override { }

  virtual void enterCreate_sequence(KingbaseSqlParser::Create_sequenceContext * /*ctx*/) override { }
  virtual void exitCreate_sequence(KingbaseSqlParser::Create_sequenceContext * /*ctx*/) override { }

  virtual void enterSequence_spec(KingbaseSqlParser::Sequence_specContext * /*ctx*/) override { }
  virtual void exitSequence_spec(KingbaseSqlParser::Sequence_specContext * /*ctx*/) override { }

  virtual void enterCreate_index(KingbaseSqlParser::Create_indexContext * /*ctx*/) override { }
  virtual void exitCreate_index(KingbaseSqlParser::Create_indexContext * /*ctx*/) override { }

  virtual void enterCreate_full_index(KingbaseSqlParser::Create_full_indexContext * /*ctx*/) override { }
  virtual void exitCreate_full_index(KingbaseSqlParser::Create_full_indexContext * /*ctx*/) override { }

  virtual void enterIndex_expr(KingbaseSqlParser::Index_exprContext * /*ctx*/) override { }
  virtual void exitIndex_expr(KingbaseSqlParser::Index_exprContext * /*ctx*/) override { }

  virtual void enterIndextype(KingbaseSqlParser::IndextypeContext * /*ctx*/) override { }
  virtual void exitIndextype(KingbaseSqlParser::IndextypeContext * /*ctx*/) override { }

  virtual void enterAlter_index(KingbaseSqlParser::Alter_indexContext * /*ctx*/) override { }
  virtual void exitAlter_index(KingbaseSqlParser::Alter_indexContext * /*ctx*/) override { }

  virtual void enterAlter_schema(KingbaseSqlParser::Alter_schemaContext * /*ctx*/) override { }
  virtual void exitAlter_schema(KingbaseSqlParser::Alter_schemaContext * /*ctx*/) override { }

  virtual void enterNew_partition_name(KingbaseSqlParser::New_partition_nameContext * /*ctx*/) override { }
  virtual void exitNew_partition_name(KingbaseSqlParser::New_partition_nameContext * /*ctx*/) override { }

  virtual void enterCreate_user(KingbaseSqlParser::Create_userContext * /*ctx*/) override { }
  virtual void exitCreate_user(KingbaseSqlParser::Create_userContext * /*ctx*/) override { }

  virtual void enterCreate_role(KingbaseSqlParser::Create_roleContext * /*ctx*/) override { }
  virtual void exitCreate_role(KingbaseSqlParser::Create_roleContext * /*ctx*/) override { }

  virtual void enterAlter_user(KingbaseSqlParser::Alter_userContext * /*ctx*/) override { }
  virtual void exitAlter_user(KingbaseSqlParser::Alter_userContext * /*ctx*/) override { }

  virtual void enterAlter_role(KingbaseSqlParser::Alter_roleContext * /*ctx*/) override { }
  virtual void exitAlter_role(KingbaseSqlParser::Alter_roleContext * /*ctx*/) override { }

  virtual void enterDrop_role(KingbaseSqlParser::Drop_roleContext * /*ctx*/) override { }
  virtual void exitDrop_role(KingbaseSqlParser::Drop_roleContext * /*ctx*/) override { }

  virtual void enterDrop_user(KingbaseSqlParser::Drop_userContext * /*ctx*/) override { }
  virtual void exitDrop_user(KingbaseSqlParser::Drop_userContext * /*ctx*/) override { }

  virtual void enterDrop_owned(KingbaseSqlParser::Drop_ownedContext * /*ctx*/) override { }
  virtual void exitDrop_owned(KingbaseSqlParser::Drop_ownedContext * /*ctx*/) override { }

  virtual void enterReassign_owned(KingbaseSqlParser::Reassign_ownedContext * /*ctx*/) override { }
  virtual void exitReassign_owned(KingbaseSqlParser::Reassign_ownedContext * /*ctx*/) override { }

  virtual void enterEnable_user_ip(KingbaseSqlParser::Enable_user_ipContext * /*ctx*/) override { }
  virtual void exitEnable_user_ip(KingbaseSqlParser::Enable_user_ipContext * /*ctx*/) override { }

  virtual void enterIdentified_by(KingbaseSqlParser::Identified_byContext * /*ctx*/) override { }
  virtual void exitIdentified_by(KingbaseSqlParser::Identified_byContext * /*ctx*/) override { }

  virtual void enterIdentified_other_clause(KingbaseSqlParser::Identified_other_clauseContext * /*ctx*/) override { }
  virtual void exitIdentified_other_clause(KingbaseSqlParser::Identified_other_clauseContext * /*ctx*/) override { }

  virtual void enterUser_tablespace_clause(KingbaseSqlParser::User_tablespace_clauseContext * /*ctx*/) override { }
  virtual void exitUser_tablespace_clause(KingbaseSqlParser::User_tablespace_clauseContext * /*ctx*/) override { }

  virtual void enterProfile_clause(KingbaseSqlParser::Profile_clauseContext * /*ctx*/) override { }
  virtual void exitProfile_clause(KingbaseSqlParser::Profile_clauseContext * /*ctx*/) override { }

  virtual void enterAnalyze(KingbaseSqlParser::AnalyzeContext * /*ctx*/) override { }
  virtual void exitAnalyze(KingbaseSqlParser::AnalyzeContext * /*ctx*/) override { }

  virtual void enterCheckpoint(KingbaseSqlParser::CheckpointContext * /*ctx*/) override { }
  virtual void exitCheckpoint(KingbaseSqlParser::CheckpointContext * /*ctx*/) override { }

  virtual void enterCluster(KingbaseSqlParser::ClusterContext * /*ctx*/) override { }
  virtual void exitCluster(KingbaseSqlParser::ClusterContext * /*ctx*/) override { }

  virtual void enterComment(KingbaseSqlParser::CommentContext * /*ctx*/) override { }
  virtual void exitComment(KingbaseSqlParser::CommentContext * /*ctx*/) override { }

  virtual void enterComment_spec(KingbaseSqlParser::Comment_specContext * /*ctx*/) override { }
  virtual void exitComment_spec(KingbaseSqlParser::Comment_specContext * /*ctx*/) override { }

  virtual void enterCopy_datafile(KingbaseSqlParser::Copy_datafileContext * /*ctx*/) override { }
  virtual void exitCopy_datafile(KingbaseSqlParser::Copy_datafileContext * /*ctx*/) override { }

  virtual void enterCreate_database(KingbaseSqlParser::Create_databaseContext * /*ctx*/) override { }
  virtual void exitCreate_database(KingbaseSqlParser::Create_databaseContext * /*ctx*/) override { }

  virtual void enterCreate_full_search_configuration(KingbaseSqlParser::Create_full_search_configurationContext * /*ctx*/) override { }
  virtual void exitCreate_full_search_configuration(KingbaseSqlParser::Create_full_search_configurationContext * /*ctx*/) override { }

  virtual void enterCreate_full_search_dictionary(KingbaseSqlParser::Create_full_search_dictionaryContext * /*ctx*/) override { }
  virtual void exitCreate_full_search_dictionary(KingbaseSqlParser::Create_full_search_dictionaryContext * /*ctx*/) override { }

  virtual void enterCreate_full_search_parser(KingbaseSqlParser::Create_full_search_parserContext * /*ctx*/) override { }
  virtual void exitCreate_full_search_parser(KingbaseSqlParser::Create_full_search_parserContext * /*ctx*/) override { }

  virtual void enterCreate_full_search_template(KingbaseSqlParser::Create_full_search_templateContext * /*ctx*/) override { }
  virtual void exitCreate_full_search_template(KingbaseSqlParser::Create_full_search_templateContext * /*ctx*/) override { }

  virtual void enterDrop_index(KingbaseSqlParser::Drop_indexContext * /*ctx*/) override { }
  virtual void exitDrop_index(KingbaseSqlParser::Drop_indexContext * /*ctx*/) override { }

  virtual void enterGrant_statement(KingbaseSqlParser::Grant_statementContext * /*ctx*/) override { }
  virtual void exitGrant_statement(KingbaseSqlParser::Grant_statementContext * /*ctx*/) override { }

  virtual void enterGrant_object_privilege(KingbaseSqlParser::Grant_object_privilegeContext * /*ctx*/) override { }
  virtual void exitGrant_object_privilege(KingbaseSqlParser::Grant_object_privilegeContext * /*ctx*/) override { }

  virtual void enterGrant_column_privilege(KingbaseSqlParser::Grant_column_privilegeContext * /*ctx*/) override { }
  virtual void exitGrant_column_privilege(KingbaseSqlParser::Grant_column_privilegeContext * /*ctx*/) override { }

  virtual void enterGrant_role_privilege(KingbaseSqlParser::Grant_role_privilegeContext * /*ctx*/) override { }
  virtual void exitGrant_role_privilege(KingbaseSqlParser::Grant_role_privilegeContext * /*ctx*/) override { }

  virtual void enterRevoke_statement(KingbaseSqlParser::Revoke_statementContext * /*ctx*/) override { }
  virtual void exitRevoke_statement(KingbaseSqlParser::Revoke_statementContext * /*ctx*/) override { }

  virtual void enterRevoke_object_privilege(KingbaseSqlParser::Revoke_object_privilegeContext * /*ctx*/) override { }
  virtual void exitRevoke_object_privilege(KingbaseSqlParser::Revoke_object_privilegeContext * /*ctx*/) override { }

  virtual void enterRevoke_role_privilege(KingbaseSqlParser::Revoke_role_privilegeContext * /*ctx*/) override { }
  virtual void exitRevoke_role_privilege(KingbaseSqlParser::Revoke_role_privilegeContext * /*ctx*/) override { }

  virtual void enterCreate_directory(KingbaseSqlParser::Create_directoryContext * /*ctx*/) override { }
  virtual void exitCreate_directory(KingbaseSqlParser::Create_directoryContext * /*ctx*/) override { }

  virtual void enterDirectory_name(KingbaseSqlParser::Directory_nameContext * /*ctx*/) override { }
  virtual void exitDirectory_name(KingbaseSqlParser::Directory_nameContext * /*ctx*/) override { }

  virtual void enterDirectory_path(KingbaseSqlParser::Directory_pathContext * /*ctx*/) override { }
  virtual void exitDirectory_path(KingbaseSqlParser::Directory_pathContext * /*ctx*/) override { }

  virtual void enterDbcc_checkallocate(KingbaseSqlParser::Dbcc_checkallocateContext * /*ctx*/) override { }
  virtual void exitDbcc_checkallocate(KingbaseSqlParser::Dbcc_checkallocateContext * /*ctx*/) override { }

  virtual void enterDbcc_checkcatalog(KingbaseSqlParser::Dbcc_checkcatalogContext * /*ctx*/) override { }
  virtual void exitDbcc_checkcatalog(KingbaseSqlParser::Dbcc_checkcatalogContext * /*ctx*/) override { }

  virtual void enterDbcc_checktable(KingbaseSqlParser::Dbcc_checktableContext * /*ctx*/) override { }
  virtual void exitDbcc_checktable(KingbaseSqlParser::Dbcc_checktableContext * /*ctx*/) override { }

  virtual void enterDbcc_checkindex(KingbaseSqlParser::Dbcc_checkindexContext * /*ctx*/) override { }
  virtual void exitDbcc_checkindex(KingbaseSqlParser::Dbcc_checkindexContext * /*ctx*/) override { }

  virtual void enterDbcc_checktablespace(KingbaseSqlParser::Dbcc_checktablespaceContext * /*ctx*/) override { }
  virtual void exitDbcc_checktablespace(KingbaseSqlParser::Dbcc_checktablespaceContext * /*ctx*/) override { }

  virtual void enterDbcc_checkdb(KingbaseSqlParser::Dbcc_checkdbContext * /*ctx*/) override { }
  virtual void exitDbcc_checkdb(KingbaseSqlParser::Dbcc_checkdbContext * /*ctx*/) override { }

  virtual void enterCreate_view(KingbaseSqlParser::Create_viewContext * /*ctx*/) override { }
  virtual void exitCreate_view(KingbaseSqlParser::Create_viewContext * /*ctx*/) override { }

  virtual void enterCreate_rule(KingbaseSqlParser::Create_ruleContext * /*ctx*/) override { }
  virtual void exitCreate_rule(KingbaseSqlParser::Create_ruleContext * /*ctx*/) override { }

  virtual void enterRulename(KingbaseSqlParser::RulenameContext * /*ctx*/) override { }
  virtual void exitRulename(KingbaseSqlParser::RulenameContext * /*ctx*/) override { }

  virtual void enterEvent(KingbaseSqlParser::EventContext * /*ctx*/) override { }
  virtual void exitEvent(KingbaseSqlParser::EventContext * /*ctx*/) override { }

  virtual void enterCreate_force_view(KingbaseSqlParser::Create_force_viewContext * /*ctx*/) override { }
  virtual void exitCreate_force_view(KingbaseSqlParser::Create_force_viewContext * /*ctx*/) override { }

  virtual void enterAlter_tablespace(KingbaseSqlParser::Alter_tablespaceContext * /*ctx*/) override { }
  virtual void exitAlter_tablespace(KingbaseSqlParser::Alter_tablespaceContext * /*ctx*/) override { }

  virtual void enterTablespace_state_clauses(KingbaseSqlParser::Tablespace_state_clausesContext * /*ctx*/) override { }
  virtual void exitTablespace_state_clauses(KingbaseSqlParser::Tablespace_state_clausesContext * /*ctx*/) override { }

  virtual void enterNew_tablespace_name(KingbaseSqlParser::New_tablespace_nameContext * /*ctx*/) override { }
  virtual void exitNew_tablespace_name(KingbaseSqlParser::New_tablespace_nameContext * /*ctx*/) override { }

  virtual void enterCreate_tablespace(KingbaseSqlParser::Create_tablespaceContext * /*ctx*/) override { }
  virtual void exitCreate_tablespace(KingbaseSqlParser::Create_tablespaceContext * /*ctx*/) override { }

  virtual void enterTablespace_retention_clause(KingbaseSqlParser::Tablespace_retention_clauseContext * /*ctx*/) override { }
  virtual void exitTablespace_retention_clause(KingbaseSqlParser::Tablespace_retention_clauseContext * /*ctx*/) override { }

  virtual void enterBuild_clause(KingbaseSqlParser::Build_clauseContext * /*ctx*/) override { }
  virtual void exitBuild_clause(KingbaseSqlParser::Build_clauseContext * /*ctx*/) override { }

  virtual void enterAlter_materialized_view(KingbaseSqlParser::Alter_materialized_viewContext * /*ctx*/) override { }
  virtual void exitAlter_materialized_view(KingbaseSqlParser::Alter_materialized_viewContext * /*ctx*/) override { }

  virtual void enterInterval_expr(KingbaseSqlParser::Interval_exprContext * /*ctx*/) override { }
  virtual void exitInterval_expr(KingbaseSqlParser::Interval_exprContext * /*ctx*/) override { }

  virtual void enterCreate_materialized_view(KingbaseSqlParser::Create_materialized_viewContext * /*ctx*/) override { }
  virtual void exitCreate_materialized_view(KingbaseSqlParser::Create_materialized_viewContext * /*ctx*/) override { }

  virtual void enterCreate_schema(KingbaseSqlParser::Create_schemaContext * /*ctx*/) override { }
  virtual void exitCreate_schema(KingbaseSqlParser::Create_schemaContext * /*ctx*/) override { }

  virtual void enterCreate_table(KingbaseSqlParser::Create_tableContext * /*ctx*/) override { }
  virtual void exitCreate_table(KingbaseSqlParser::Create_tableContext * /*ctx*/) override { }

  virtual void enterCreate_table_without_select(KingbaseSqlParser::Create_table_without_selectContext * /*ctx*/) override { }
  virtual void exitCreate_table_without_select(KingbaseSqlParser::Create_table_without_selectContext * /*ctx*/) override { }

  virtual void enterCreate_table_as_select(KingbaseSqlParser::Create_table_as_selectContext * /*ctx*/) override { }
  virtual void exitCreate_table_as_select(KingbaseSqlParser::Create_table_as_selectContext * /*ctx*/) override { }

  virtual void enterCreate_table_select_into(KingbaseSqlParser::Create_table_select_intoContext * /*ctx*/) override { }
  virtual void exitCreate_table_select_into(KingbaseSqlParser::Create_table_select_intoContext * /*ctx*/) override { }

  virtual void enterColumn_with_datatype_list(KingbaseSqlParser::Column_with_datatype_listContext * /*ctx*/) override { }
  virtual void exitColumn_with_datatype_list(KingbaseSqlParser::Column_with_datatype_listContext * /*ctx*/) override { }

  virtual void enterColumn_with_datatype(KingbaseSqlParser::Column_with_datatypeContext * /*ctx*/) override { }
  virtual void exitColumn_with_datatype(KingbaseSqlParser::Column_with_datatypeContext * /*ctx*/) override { }

  virtual void enterColumn_constraint(KingbaseSqlParser::Column_constraintContext * /*ctx*/) override { }
  virtual void exitColumn_constraint(KingbaseSqlParser::Column_constraintContext * /*ctx*/) override { }

  virtual void enterTable_constraint(KingbaseSqlParser::Table_constraintContext * /*ctx*/) override { }
  virtual void exitTable_constraint(KingbaseSqlParser::Table_constraintContext * /*ctx*/) override { }

  virtual void enterAction(KingbaseSqlParser::ActionContext * /*ctx*/) override { }
  virtual void exitAction(KingbaseSqlParser::ActionContext * /*ctx*/) override { }

  virtual void enterSubpartition_name(KingbaseSqlParser::Subpartition_nameContext * /*ctx*/) override { }
  virtual void exitSubpartition_name(KingbaseSqlParser::Subpartition_nameContext * /*ctx*/) override { }

  virtual void enterDrop_table(KingbaseSqlParser::Drop_tableContext * /*ctx*/) override { }
  virtual void exitDrop_table(KingbaseSqlParser::Drop_tableContext * /*ctx*/) override { }

  virtual void enterAllow_or_disallow(KingbaseSqlParser::Allow_or_disallowContext * /*ctx*/) override { }
  virtual void exitAllow_or_disallow(KingbaseSqlParser::Allow_or_disallowContext * /*ctx*/) override { }

  virtual void enterCreate_synonym(KingbaseSqlParser::Create_synonymContext * /*ctx*/) override { }
  virtual void exitCreate_synonym(KingbaseSqlParser::Create_synonymContext * /*ctx*/) override { }

  virtual void enterComment_on_table(KingbaseSqlParser::Comment_on_tableContext * /*ctx*/) override { }
  virtual void exitComment_on_table(KingbaseSqlParser::Comment_on_tableContext * /*ctx*/) override { }

  virtual void enterDatabase_name(KingbaseSqlParser::Database_nameContext * /*ctx*/) override { }
  virtual void exitDatabase_name(KingbaseSqlParser::Database_nameContext * /*ctx*/) override { }

  virtual void enterAlter_database(KingbaseSqlParser::Alter_databaseContext * /*ctx*/) override { }
  virtual void exitAlter_database(KingbaseSqlParser::Alter_databaseContext * /*ctx*/) override { }

  virtual void enterAlter_table(KingbaseSqlParser::Alter_tableContext * /*ctx*/) override { }
  virtual void exitAlter_table(KingbaseSqlParser::Alter_tableContext * /*ctx*/) override { }

  virtual void enterAlter_table_add_properties(KingbaseSqlParser::Alter_table_add_propertiesContext * /*ctx*/) override { }
  virtual void exitAlter_table_add_properties(KingbaseSqlParser::Alter_table_add_propertiesContext * /*ctx*/) override { }

  virtual void enterAlter_table_change_properties(KingbaseSqlParser::Alter_table_change_propertiesContext * /*ctx*/) override { }
  virtual void exitAlter_table_change_properties(KingbaseSqlParser::Alter_table_change_propertiesContext * /*ctx*/) override { }

  virtual void enterAlter_table_drop_properties(KingbaseSqlParser::Alter_table_drop_propertiesContext * /*ctx*/) override { }
  virtual void exitAlter_table_drop_properties(KingbaseSqlParser::Alter_table_drop_propertiesContext * /*ctx*/) override { }

  virtual void enterAlter_table_rename_properties(KingbaseSqlParser::Alter_table_rename_propertiesContext * /*ctx*/) override { }
  virtual void exitAlter_table_rename_properties(KingbaseSqlParser::Alter_table_rename_propertiesContext * /*ctx*/) override { }

  virtual void enterAlter_table_truncate_properties(KingbaseSqlParser::Alter_table_truncate_propertiesContext * /*ctx*/) override { }
  virtual void exitAlter_table_truncate_properties(KingbaseSqlParser::Alter_table_truncate_propertiesContext * /*ctx*/) override { }

  virtual void enterAlter_table_others(KingbaseSqlParser::Alter_table_othersContext * /*ctx*/) override { }
  virtual void exitAlter_table_others(KingbaseSqlParser::Alter_table_othersContext * /*ctx*/) override { }

  virtual void enterTablespace(KingbaseSqlParser::TablespaceContext * /*ctx*/) override { }
  virtual void exitTablespace(KingbaseSqlParser::TablespaceContext * /*ctx*/) override { }

  virtual void enterPartition_name(KingbaseSqlParser::Partition_nameContext * /*ctx*/) override { }
  virtual void exitPartition_name(KingbaseSqlParser::Partition_nameContext * /*ctx*/) override { }

  virtual void enterColumn_or_attribute(KingbaseSqlParser::Column_or_attributeContext * /*ctx*/) override { }
  virtual void exitColumn_or_attribute(KingbaseSqlParser::Column_or_attributeContext * /*ctx*/) override { }

  virtual void enterParameter(KingbaseSqlParser::ParameterContext * /*ctx*/) override { }
  virtual void exitParameter(KingbaseSqlParser::ParameterContext * /*ctx*/) override { }

  virtual void enterDefault_value_part(KingbaseSqlParser::Default_value_partContext * /*ctx*/) override { }
  virtual void exitDefault_value_part(KingbaseSqlParser::Default_value_partContext * /*ctx*/) override { }

  virtual void enterParameter_list(KingbaseSqlParser::Parameter_listContext * /*ctx*/) override { }
  virtual void exitParameter_list(KingbaseSqlParser::Parameter_listContext * /*ctx*/) override { }

  virtual void enterParen_parameter_list(KingbaseSqlParser::Paren_parameter_listContext * /*ctx*/) override { }
  virtual void exitParen_parameter_list(KingbaseSqlParser::Paren_parameter_listContext * /*ctx*/) override { }

  virtual void enterVariable_declaration(KingbaseSqlParser::Variable_declarationContext * /*ctx*/) override { }
  virtual void exitVariable_declaration(KingbaseSqlParser::Variable_declarationContext * /*ctx*/) override { }

  virtual void enterVariable_declarations(KingbaseSqlParser::Variable_declarationsContext * /*ctx*/) override { }
  virtual void exitVariable_declarations(KingbaseSqlParser::Variable_declarationsContext * /*ctx*/) override { }

  virtual void enterCursor_declaration(KingbaseSqlParser::Cursor_declarationContext * /*ctx*/) override { }
  virtual void exitCursor_declaration(KingbaseSqlParser::Cursor_declarationContext * /*ctx*/) override { }

  virtual void enterCursor_declarations(KingbaseSqlParser::Cursor_declarationsContext * /*ctx*/) override { }
  virtual void exitCursor_declarations(KingbaseSqlParser::Cursor_declarationsContext * /*ctx*/) override { }

  virtual void enterParameter_spec(KingbaseSqlParser::Parameter_specContext * /*ctx*/) override { }
  virtual void exitParameter_spec(KingbaseSqlParser::Parameter_specContext * /*ctx*/) override { }

  virtual void enterRecord_type_def(KingbaseSqlParser::Record_type_defContext * /*ctx*/) override { }
  virtual void exitRecord_type_def(KingbaseSqlParser::Record_type_defContext * /*ctx*/) override { }

  virtual void enterField_spec(KingbaseSqlParser::Field_specContext * /*ctx*/) override { }
  virtual void exitField_spec(KingbaseSqlParser::Field_specContext * /*ctx*/) override { }

  virtual void enterRef_cursor_type_def(KingbaseSqlParser::Ref_cursor_type_defContext * /*ctx*/) override { }
  virtual void exitRef_cursor_type_def(KingbaseSqlParser::Ref_cursor_type_defContext * /*ctx*/) override { }

  virtual void enterType_declaration(KingbaseSqlParser::Type_declarationContext * /*ctx*/) override { }
  virtual void exitType_declaration(KingbaseSqlParser::Type_declarationContext * /*ctx*/) override { }

  virtual void enterTable_type_def(KingbaseSqlParser::Table_type_defContext * /*ctx*/) override { }
  virtual void exitTable_type_def(KingbaseSqlParser::Table_type_defContext * /*ctx*/) override { }

  virtual void enterTable_indexed_by_part(KingbaseSqlParser::Table_indexed_by_partContext * /*ctx*/) override { }
  virtual void exitTable_indexed_by_part(KingbaseSqlParser::Table_indexed_by_partContext * /*ctx*/) override { }

  virtual void enterVarray_type_def(KingbaseSqlParser::Varray_type_defContext * /*ctx*/) override { }
  virtual void exitVarray_type_def(KingbaseSqlParser::Varray_type_defContext * /*ctx*/) override { }

  virtual void enterSeq_of_statements(KingbaseSqlParser::Seq_of_statementsContext * /*ctx*/) override { }
  virtual void exitSeq_of_statements(KingbaseSqlParser::Seq_of_statementsContext * /*ctx*/) override { }

  virtual void enterLabel_declaration(KingbaseSqlParser::Label_declarationContext * /*ctx*/) override { }
  virtual void exitLabel_declaration(KingbaseSqlParser::Label_declarationContext * /*ctx*/) override { }

  virtual void enterStatement(KingbaseSqlParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(KingbaseSqlParser::StatementContext * /*ctx*/) override { }

  virtual void enterAssignment_statement(KingbaseSqlParser::Assignment_statementContext * /*ctx*/) override { }
  virtual void exitAssignment_statement(KingbaseSqlParser::Assignment_statementContext * /*ctx*/) override { }

  virtual void enterContinue_statement(KingbaseSqlParser::Continue_statementContext * /*ctx*/) override { }
  virtual void exitContinue_statement(KingbaseSqlParser::Continue_statementContext * /*ctx*/) override { }

  virtual void enterExit_statement(KingbaseSqlParser::Exit_statementContext * /*ctx*/) override { }
  virtual void exitExit_statement(KingbaseSqlParser::Exit_statementContext * /*ctx*/) override { }

  virtual void enterGoto_statement(KingbaseSqlParser::Goto_statementContext * /*ctx*/) override { }
  virtual void exitGoto_statement(KingbaseSqlParser::Goto_statementContext * /*ctx*/) override { }

  virtual void enterIf_statement(KingbaseSqlParser::If_statementContext * /*ctx*/) override { }
  virtual void exitIf_statement(KingbaseSqlParser::If_statementContext * /*ctx*/) override { }

  virtual void enterElsif_part(KingbaseSqlParser::Elsif_partContext * /*ctx*/) override { }
  virtual void exitElsif_part(KingbaseSqlParser::Elsif_partContext * /*ctx*/) override { }

  virtual void enterElse_part(KingbaseSqlParser::Else_partContext * /*ctx*/) override { }
  virtual void exitElse_part(KingbaseSqlParser::Else_partContext * /*ctx*/) override { }

  virtual void enterLoop_statement(KingbaseSqlParser::Loop_statementContext * /*ctx*/) override { }
  virtual void exitLoop_statement(KingbaseSqlParser::Loop_statementContext * /*ctx*/) override { }

  virtual void enterCursor_loop_param(KingbaseSqlParser::Cursor_loop_paramContext * /*ctx*/) override { }
  virtual void exitCursor_loop_param(KingbaseSqlParser::Cursor_loop_paramContext * /*ctx*/) override { }

  virtual void enterForall_statement(KingbaseSqlParser::Forall_statementContext * /*ctx*/) override { }
  virtual void exitForall_statement(KingbaseSqlParser::Forall_statementContext * /*ctx*/) override { }

  virtual void enterBounds_clause(KingbaseSqlParser::Bounds_clauseContext * /*ctx*/) override { }
  virtual void exitBounds_clause(KingbaseSqlParser::Bounds_clauseContext * /*ctx*/) override { }

  virtual void enterBetween_bound(KingbaseSqlParser::Between_boundContext * /*ctx*/) override { }
  virtual void exitBetween_bound(KingbaseSqlParser::Between_boundContext * /*ctx*/) override { }

  virtual void enterLower_bound(KingbaseSqlParser::Lower_boundContext * /*ctx*/) override { }
  virtual void exitLower_bound(KingbaseSqlParser::Lower_boundContext * /*ctx*/) override { }

  virtual void enterUpper_bound(KingbaseSqlParser::Upper_boundContext * /*ctx*/) override { }
  virtual void exitUpper_bound(KingbaseSqlParser::Upper_boundContext * /*ctx*/) override { }

  virtual void enterNull_statement(KingbaseSqlParser::Null_statementContext * /*ctx*/) override { }
  virtual void exitNull_statement(KingbaseSqlParser::Null_statementContext * /*ctx*/) override { }

  virtual void enterRaise_statement(KingbaseSqlParser::Raise_statementContext * /*ctx*/) override { }
  virtual void exitRaise_statement(KingbaseSqlParser::Raise_statementContext * /*ctx*/) override { }

  virtual void enterReturn_statement(KingbaseSqlParser::Return_statementContext * /*ctx*/) override { }
  virtual void exitReturn_statement(KingbaseSqlParser::Return_statementContext * /*ctx*/) override { }

  virtual void enterFunction_call(KingbaseSqlParser::Function_callContext * /*ctx*/) override { }
  virtual void exitFunction_call(KingbaseSqlParser::Function_callContext * /*ctx*/) override { }

  virtual void enterProcedure_call(KingbaseSqlParser::Procedure_callContext * /*ctx*/) override { }
  virtual void exitProcedure_call(KingbaseSqlParser::Procedure_callContext * /*ctx*/) override { }

  virtual void enterPipe_row_statement(KingbaseSqlParser::Pipe_row_statementContext * /*ctx*/) override { }
  virtual void exitPipe_row_statement(KingbaseSqlParser::Pipe_row_statementContext * /*ctx*/) override { }

  virtual void enterSql_statement(KingbaseSqlParser::Sql_statementContext * /*ctx*/) override { }
  virtual void exitSql_statement(KingbaseSqlParser::Sql_statementContext * /*ctx*/) override { }

  virtual void enterCursor_manipulation_statements(KingbaseSqlParser::Cursor_manipulation_statementsContext * /*ctx*/) override { }
  virtual void exitCursor_manipulation_statements(KingbaseSqlParser::Cursor_manipulation_statementsContext * /*ctx*/) override { }

  virtual void enterClose_statement(KingbaseSqlParser::Close_statementContext * /*ctx*/) override { }
  virtual void exitClose_statement(KingbaseSqlParser::Close_statementContext * /*ctx*/) override { }

  virtual void enterOpen_statement(KingbaseSqlParser::Open_statementContext * /*ctx*/) override { }
  virtual void exitOpen_statement(KingbaseSqlParser::Open_statementContext * /*ctx*/) override { }

  virtual void enterFetch_statement(KingbaseSqlParser::Fetch_statementContext * /*ctx*/) override { }
  virtual void exitFetch_statement(KingbaseSqlParser::Fetch_statementContext * /*ctx*/) override { }

  virtual void enterDirection(KingbaseSqlParser::DirectionContext * /*ctx*/) override { }
  virtual void exitDirection(KingbaseSqlParser::DirectionContext * /*ctx*/) override { }

  virtual void enterCount(KingbaseSqlParser::CountContext * /*ctx*/) override { }
  virtual void exitCount(KingbaseSqlParser::CountContext * /*ctx*/) override { }

  virtual void enterMove_statement(KingbaseSqlParser::Move_statementContext * /*ctx*/) override { }
  virtual void exitMove_statement(KingbaseSqlParser::Move_statementContext * /*ctx*/) override { }

  virtual void enterTransaction_control_statements(KingbaseSqlParser::Transaction_control_statementsContext * /*ctx*/) override { }
  virtual void exitTransaction_control_statements(KingbaseSqlParser::Transaction_control_statementsContext * /*ctx*/) override { }

  virtual void enterTransaction_command(KingbaseSqlParser::Transaction_commandContext * /*ctx*/) override { }
  virtual void exitTransaction_command(KingbaseSqlParser::Transaction_commandContext * /*ctx*/) override { }

  virtual void enterLock_mode(KingbaseSqlParser::Lock_modeContext * /*ctx*/) override { }
  virtual void exitLock_mode(KingbaseSqlParser::Lock_modeContext * /*ctx*/) override { }

  virtual void enterSavepoint_command(KingbaseSqlParser::Savepoint_commandContext * /*ctx*/) override { }
  virtual void exitSavepoint_command(KingbaseSqlParser::Savepoint_commandContext * /*ctx*/) override { }

  virtual void enterExplain_statement(KingbaseSqlParser::Explain_statementContext * /*ctx*/) override { }
  virtual void exitExplain_statement(KingbaseSqlParser::Explain_statementContext * /*ctx*/) override { }

  virtual void enterExplain_elements(KingbaseSqlParser::Explain_elementsContext * /*ctx*/) override { }
  virtual void exitExplain_elements(KingbaseSqlParser::Explain_elementsContext * /*ctx*/) override { }

  virtual void enterExplain_element(KingbaseSqlParser::Explain_elementContext * /*ctx*/) override { }
  virtual void exitExplain_element(KingbaseSqlParser::Explain_elementContext * /*ctx*/) override { }

  virtual void enterError_logging_into_part(KingbaseSqlParser::Error_logging_into_partContext * /*ctx*/) override { }
  virtual void exitError_logging_into_part(KingbaseSqlParser::Error_logging_into_partContext * /*ctx*/) override { }

  virtual void enterError_logging_reject_part(KingbaseSqlParser::Error_logging_reject_partContext * /*ctx*/) override { }
  virtual void exitError_logging_reject_part(KingbaseSqlParser::Error_logging_reject_partContext * /*ctx*/) override { }

  virtual void enterSql_plus_command(KingbaseSqlParser::Sql_plus_commandContext * /*ctx*/) override { }
  virtual void exitSql_plus_command(KingbaseSqlParser::Sql_plus_commandContext * /*ctx*/) override { }

  virtual void enterGet_arguments_command(KingbaseSqlParser::Get_arguments_commandContext * /*ctx*/) override { }
  virtual void exitGet_arguments_command(KingbaseSqlParser::Get_arguments_commandContext * /*ctx*/) override { }

  virtual void enterSet_arguments_command(KingbaseSqlParser::Set_arguments_commandContext * /*ctx*/) override { }
  virtual void exitSet_arguments_command(KingbaseSqlParser::Set_arguments_commandContext * /*ctx*/) override { }

  virtual void enterCost_class_name(KingbaseSqlParser::Cost_class_nameContext * /*ctx*/) override { }
  virtual void exitCost_class_name(KingbaseSqlParser::Cost_class_nameContext * /*ctx*/) override { }

  virtual void enterSavepoint_name(KingbaseSqlParser::Savepoint_nameContext * /*ctx*/) override { }
  virtual void exitSavepoint_name(KingbaseSqlParser::Savepoint_nameContext * /*ctx*/) override { }

  virtual void enterRollback_segment_name(KingbaseSqlParser::Rollback_segment_nameContext * /*ctx*/) override { }
  virtual void exitRollback_segment_name(KingbaseSqlParser::Rollback_segment_nameContext * /*ctx*/) override { }

  virtual void enterTable_var_name(KingbaseSqlParser::Table_var_nameContext * /*ctx*/) override { }
  virtual void exitTable_var_name(KingbaseSqlParser::Table_var_nameContext * /*ctx*/) override { }

  virtual void enterSchema_name(KingbaseSqlParser::Schema_nameContext * /*ctx*/) override { }
  virtual void exitSchema_name(KingbaseSqlParser::Schema_nameContext * /*ctx*/) override { }

  virtual void enterRoutine_name(KingbaseSqlParser::Routine_nameContext * /*ctx*/) override { }
  virtual void exitRoutine_name(KingbaseSqlParser::Routine_nameContext * /*ctx*/) override { }

  virtual void enterImplementation_type_name(KingbaseSqlParser::Implementation_type_nameContext * /*ctx*/) override { }
  virtual void exitImplementation_type_name(KingbaseSqlParser::Implementation_type_nameContext * /*ctx*/) override { }

  virtual void enterParameter_name(KingbaseSqlParser::Parameter_nameContext * /*ctx*/) override { }
  virtual void exitParameter_name(KingbaseSqlParser::Parameter_nameContext * /*ctx*/) override { }

  virtual void enterReference_model_name(KingbaseSqlParser::Reference_model_nameContext * /*ctx*/) override { }
  virtual void exitReference_model_name(KingbaseSqlParser::Reference_model_nameContext * /*ctx*/) override { }

  virtual void enterMain_model_name(KingbaseSqlParser::Main_model_nameContext * /*ctx*/) override { }
  virtual void exitMain_model_name(KingbaseSqlParser::Main_model_nameContext * /*ctx*/) override { }

  virtual void enterContainer_tableview_name(KingbaseSqlParser::Container_tableview_nameContext * /*ctx*/) override { }
  virtual void exitContainer_tableview_name(KingbaseSqlParser::Container_tableview_nameContext * /*ctx*/) override { }

  virtual void enterGrantee_name(KingbaseSqlParser::Grantee_nameContext * /*ctx*/) override { }
  virtual void exitGrantee_name(KingbaseSqlParser::Grantee_nameContext * /*ctx*/) override { }

  virtual void enterRole_name(KingbaseSqlParser::Role_nameContext * /*ctx*/) override { }
  virtual void exitRole_name(KingbaseSqlParser::Role_nameContext * /*ctx*/) override { }

  virtual void enterType_name(KingbaseSqlParser::Type_nameContext * /*ctx*/) override { }
  virtual void exitType_name(KingbaseSqlParser::Type_nameContext * /*ctx*/) override { }

  virtual void enterSequence_name(KingbaseSqlParser::Sequence_nameContext * /*ctx*/) override { }
  virtual void exitSequence_name(KingbaseSqlParser::Sequence_nameContext * /*ctx*/) override { }

  virtual void enterException_name(KingbaseSqlParser::Exception_nameContext * /*ctx*/) override { }
  virtual void exitException_name(KingbaseSqlParser::Exception_nameContext * /*ctx*/) override { }

  virtual void enterFunction_name(KingbaseSqlParser::Function_nameContext * /*ctx*/) override { }
  virtual void exitFunction_name(KingbaseSqlParser::Function_nameContext * /*ctx*/) override { }

  virtual void enterProcedure_name(KingbaseSqlParser::Procedure_nameContext * /*ctx*/) override { }
  virtual void exitProcedure_name(KingbaseSqlParser::Procedure_nameContext * /*ctx*/) override { }

  virtual void enterTrigger_name(KingbaseSqlParser::Trigger_nameContext * /*ctx*/) override { }
  virtual void exitTrigger_name(KingbaseSqlParser::Trigger_nameContext * /*ctx*/) override { }

  virtual void enterVariable_name(KingbaseSqlParser::Variable_nameContext * /*ctx*/) override { }
  virtual void exitVariable_name(KingbaseSqlParser::Variable_nameContext * /*ctx*/) override { }

  virtual void enterIndex_name(KingbaseSqlParser::Index_nameContext * /*ctx*/) override { }
  virtual void exitIndex_name(KingbaseSqlParser::Index_nameContext * /*ctx*/) override { }

  virtual void enterCursor_name(KingbaseSqlParser::Cursor_nameContext * /*ctx*/) override { }
  virtual void exitCursor_name(KingbaseSqlParser::Cursor_nameContext * /*ctx*/) override { }

  virtual void enterRecord_name(KingbaseSqlParser::Record_nameContext * /*ctx*/) override { }
  virtual void exitRecord_name(KingbaseSqlParser::Record_nameContext * /*ctx*/) override { }

  virtual void enterCollection_name(KingbaseSqlParser::Collection_nameContext * /*ctx*/) override { }
  virtual void exitCollection_name(KingbaseSqlParser::Collection_nameContext * /*ctx*/) override { }

  virtual void enterChar_set_name(KingbaseSqlParser::Char_set_nameContext * /*ctx*/) override { }
  virtual void exitChar_set_name(KingbaseSqlParser::Char_set_nameContext * /*ctx*/) override { }

  virtual void enterSynonym_name(KingbaseSqlParser::Synonym_nameContext * /*ctx*/) override { }
  virtual void exitSynonym_name(KingbaseSqlParser::Synonym_nameContext * /*ctx*/) override { }

  virtual void enterSchema_object_name(KingbaseSqlParser::Schema_object_nameContext * /*ctx*/) override { }
  virtual void exitSchema_object_name(KingbaseSqlParser::Schema_object_nameContext * /*ctx*/) override { }

  virtual void enterDir_object_name(KingbaseSqlParser::Dir_object_nameContext * /*ctx*/) override { }
  virtual void exitDir_object_name(KingbaseSqlParser::Dir_object_nameContext * /*ctx*/) override { }

  virtual void enterUser_object_name(KingbaseSqlParser::User_object_nameContext * /*ctx*/) override { }
  virtual void exitUser_object_name(KingbaseSqlParser::User_object_nameContext * /*ctx*/) override { }

  virtual void enterGrant_object_name(KingbaseSqlParser::Grant_object_nameContext * /*ctx*/) override { }
  virtual void exitGrant_object_name(KingbaseSqlParser::Grant_object_nameContext * /*ctx*/) override { }

  virtual void enterTablename_list(KingbaseSqlParser::Tablename_listContext * /*ctx*/) override { }
  virtual void exitTablename_list(KingbaseSqlParser::Tablename_listContext * /*ctx*/) override { }

  virtual void enterObject_privilege(KingbaseSqlParser::Object_privilegeContext * /*ctx*/) override { }
  virtual void exitObject_privilege(KingbaseSqlParser::Object_privilegeContext * /*ctx*/) override { }

  virtual void enterColumn_privilege(KingbaseSqlParser::Column_privilegeContext * /*ctx*/) override { }
  virtual void exitColumn_privilege(KingbaseSqlParser::Column_privilegeContext * /*ctx*/) override { }

  virtual void enterSystem_privilege(KingbaseSqlParser::System_privilegeContext * /*ctx*/) override { }
  virtual void exitSystem_privilege(KingbaseSqlParser::System_privilegeContext * /*ctx*/) override { }

  virtual void enterData_manipulation_language_statements(KingbaseSqlParser::Data_manipulation_language_statementsContext * /*ctx*/) override { }
  virtual void exitData_manipulation_language_statements(KingbaseSqlParser::Data_manipulation_language_statementsContext * /*ctx*/) override { }

  virtual void enterMerge_statement(KingbaseSqlParser::Merge_statementContext * /*ctx*/) override { }
  virtual void exitMerge_statement(KingbaseSqlParser::Merge_statementContext * /*ctx*/) override { }

  virtual void enterMerge_update_clause(KingbaseSqlParser::Merge_update_clauseContext * /*ctx*/) override { }
  virtual void exitMerge_update_clause(KingbaseSqlParser::Merge_update_clauseContext * /*ctx*/) override { }

  virtual void enterMerge_element(KingbaseSqlParser::Merge_elementContext * /*ctx*/) override { }
  virtual void exitMerge_element(KingbaseSqlParser::Merge_elementContext * /*ctx*/) override { }

  virtual void enterMerge_update_delete_part(KingbaseSqlParser::Merge_update_delete_partContext * /*ctx*/) override { }
  virtual void exitMerge_update_delete_part(KingbaseSqlParser::Merge_update_delete_partContext * /*ctx*/) override { }

  virtual void enterMerge_insert_clause(KingbaseSqlParser::Merge_insert_clauseContext * /*ctx*/) override { }
  virtual void exitMerge_insert_clause(KingbaseSqlParser::Merge_insert_clauseContext * /*ctx*/) override { }

  virtual void enterSelected_tableview(KingbaseSqlParser::Selected_tableviewContext * /*ctx*/) override { }
  virtual void exitSelected_tableview(KingbaseSqlParser::Selected_tableviewContext * /*ctx*/) override { }

  virtual void enterTruncate_statement(KingbaseSqlParser::Truncate_statementContext * /*ctx*/) override { }
  virtual void exitTruncate_statement(KingbaseSqlParser::Truncate_statementContext * /*ctx*/) override { }

  virtual void enterSelect_statement(KingbaseSqlParser::Select_statementContext * /*ctx*/) override { }
  virtual void exitSelect_statement(KingbaseSqlParser::Select_statementContext * /*ctx*/) override { }

  virtual void enterWith_clause(KingbaseSqlParser::With_clauseContext * /*ctx*/) override { }
  virtual void exitWith_clause(KingbaseSqlParser::With_clauseContext * /*ctx*/) override { }

  virtual void enterWith_query(KingbaseSqlParser::With_queryContext * /*ctx*/) override { }
  virtual void exitWith_query(KingbaseSqlParser::With_queryContext * /*ctx*/) override { }

  virtual void enterSubquery(KingbaseSqlParser::SubqueryContext * /*ctx*/) override { }
  virtual void exitSubquery(KingbaseSqlParser::SubqueryContext * /*ctx*/) override { }

  virtual void enterSubquery_basic_elements(KingbaseSqlParser::Subquery_basic_elementsContext * /*ctx*/) override { }
  virtual void exitSubquery_basic_elements(KingbaseSqlParser::Subquery_basic_elementsContext * /*ctx*/) override { }

  virtual void enterSubquery_operation_part(KingbaseSqlParser::Subquery_operation_partContext * /*ctx*/) override { }
  virtual void exitSubquery_operation_part(KingbaseSqlParser::Subquery_operation_partContext * /*ctx*/) override { }

  virtual void enterDml_table_expression_clause(KingbaseSqlParser::Dml_table_expression_clauseContext * /*ctx*/) override { }
  virtual void exitDml_table_expression_clause(KingbaseSqlParser::Dml_table_expression_clauseContext * /*ctx*/) override { }

  virtual void enterTable_collection_expression(KingbaseSqlParser::Table_collection_expressionContext * /*ctx*/) override { }
  virtual void exitTable_collection_expression(KingbaseSqlParser::Table_collection_expressionContext * /*ctx*/) override { }

  virtual void enterSubquery_restriction_clause(KingbaseSqlParser::Subquery_restriction_clauseContext * /*ctx*/) override { }
  virtual void exitSubquery_restriction_clause(KingbaseSqlParser::Subquery_restriction_clauseContext * /*ctx*/) override { }

  virtual void enterSample_clause(KingbaseSqlParser::Sample_clauseContext * /*ctx*/) override { }
  virtual void exitSample_clause(KingbaseSqlParser::Sample_clauseContext * /*ctx*/) override { }

  virtual void enterSeed_part(KingbaseSqlParser::Seed_partContext * /*ctx*/) override { }
  virtual void exitSeed_part(KingbaseSqlParser::Seed_partContext * /*ctx*/) override { }

  virtual void enterQuery_block(KingbaseSqlParser::Query_blockContext * /*ctx*/) override { }
  virtual void exitQuery_block(KingbaseSqlParser::Query_blockContext * /*ctx*/) override { }

  virtual void enterTop_clause(KingbaseSqlParser::Top_clauseContext * /*ctx*/) override { }
  virtual void exitTop_clause(KingbaseSqlParser::Top_clauseContext * /*ctx*/) override { }

  virtual void enterStart_value(KingbaseSqlParser::Start_valueContext * /*ctx*/) override { }
  virtual void exitStart_value(KingbaseSqlParser::Start_valueContext * /*ctx*/) override { }

  virtual void enterLine_count(KingbaseSqlParser::Line_countContext * /*ctx*/) override { }
  virtual void exitLine_count(KingbaseSqlParser::Line_countContext * /*ctx*/) override { }

  virtual void enterSelected_list(KingbaseSqlParser::Selected_listContext * /*ctx*/) override { }
  virtual void exitSelected_list(KingbaseSqlParser::Selected_listContext * /*ctx*/) override { }

  virtual void enterSelected_list_element(KingbaseSqlParser::Selected_list_elementContext * /*ctx*/) override { }
  virtual void exitSelected_list_element(KingbaseSqlParser::Selected_list_elementContext * /*ctx*/) override { }

  virtual void enterFrom_clause(KingbaseSqlParser::From_clauseContext * /*ctx*/) override { }
  virtual void exitFrom_clause(KingbaseSqlParser::From_clauseContext * /*ctx*/) override { }

  virtual void enterTable_ref_list(KingbaseSqlParser::Table_ref_listContext * /*ctx*/) override { }
  virtual void exitTable_ref_list(KingbaseSqlParser::Table_ref_listContext * /*ctx*/) override { }

  virtual void enterTable_ref(KingbaseSqlParser::Table_refContext * /*ctx*/) override { }
  virtual void exitTable_ref(KingbaseSqlParser::Table_refContext * /*ctx*/) override { }

  virtual void enterTable_ref_aux(KingbaseSqlParser::Table_ref_auxContext * /*ctx*/) override { }
  virtual void exitTable_ref_aux(KingbaseSqlParser::Table_ref_auxContext * /*ctx*/) override { }

  virtual void enterTable_ref_aux_internal_one(KingbaseSqlParser::Table_ref_aux_internal_oneContext * /*ctx*/) override { }
  virtual void exitTable_ref_aux_internal_one(KingbaseSqlParser::Table_ref_aux_internal_oneContext * /*ctx*/) override { }

  virtual void enterTable_ref_aux_internal_two(KingbaseSqlParser::Table_ref_aux_internal_twoContext * /*ctx*/) override { }
  virtual void exitTable_ref_aux_internal_two(KingbaseSqlParser::Table_ref_aux_internal_twoContext * /*ctx*/) override { }

  virtual void enterTable_ref_aux_internal_three(KingbaseSqlParser::Table_ref_aux_internal_threeContext * /*ctx*/) override { }
  virtual void exitTable_ref_aux_internal_three(KingbaseSqlParser::Table_ref_aux_internal_threeContext * /*ctx*/) override { }

  virtual void enterWhere_clause(KingbaseSqlParser::Where_clauseContext * /*ctx*/) override { }
  virtual void exitWhere_clause(KingbaseSqlParser::Where_clauseContext * /*ctx*/) override { }

  virtual void enterJoin_clause(KingbaseSqlParser::Join_clauseContext * /*ctx*/) override { }
  virtual void exitJoin_clause(KingbaseSqlParser::Join_clauseContext * /*ctx*/) override { }

  virtual void enterJoin_on_part(KingbaseSqlParser::Join_on_partContext * /*ctx*/) override { }
  virtual void exitJoin_on_part(KingbaseSqlParser::Join_on_partContext * /*ctx*/) override { }

  virtual void enterJoin_using_part(KingbaseSqlParser::Join_using_partContext * /*ctx*/) override { }
  virtual void exitJoin_using_part(KingbaseSqlParser::Join_using_partContext * /*ctx*/) override { }

  virtual void enterOuter_join_type(KingbaseSqlParser::Outer_join_typeContext * /*ctx*/) override { }
  virtual void exitOuter_join_type(KingbaseSqlParser::Outer_join_typeContext * /*ctx*/) override { }

  virtual void enterQuery_partition_clause(KingbaseSqlParser::Query_partition_clauseContext * /*ctx*/) override { }
  virtual void exitQuery_partition_clause(KingbaseSqlParser::Query_partition_clauseContext * /*ctx*/) override { }

  virtual void enterPivot_clause(KingbaseSqlParser::Pivot_clauseContext * /*ctx*/) override { }
  virtual void exitPivot_clause(KingbaseSqlParser::Pivot_clauseContext * /*ctx*/) override { }

  virtual void enterPivot_element(KingbaseSqlParser::Pivot_elementContext * /*ctx*/) override { }
  virtual void exitPivot_element(KingbaseSqlParser::Pivot_elementContext * /*ctx*/) override { }

  virtual void enterAggregate_function_name(KingbaseSqlParser::Aggregate_function_nameContext * /*ctx*/) override { }
  virtual void exitAggregate_function_name(KingbaseSqlParser::Aggregate_function_nameContext * /*ctx*/) override { }

  virtual void enterPivot_for_clause(KingbaseSqlParser::Pivot_for_clauseContext * /*ctx*/) override { }
  virtual void exitPivot_for_clause(KingbaseSqlParser::Pivot_for_clauseContext * /*ctx*/) override { }

  virtual void enterPivot_in_clause(KingbaseSqlParser::Pivot_in_clauseContext * /*ctx*/) override { }
  virtual void exitPivot_in_clause(KingbaseSqlParser::Pivot_in_clauseContext * /*ctx*/) override { }

  virtual void enterPivot_in_clause_element(KingbaseSqlParser::Pivot_in_clause_elementContext * /*ctx*/) override { }
  virtual void exitPivot_in_clause_element(KingbaseSqlParser::Pivot_in_clause_elementContext * /*ctx*/) override { }

  virtual void enterPivot_in_clause_elements(KingbaseSqlParser::Pivot_in_clause_elementsContext * /*ctx*/) override { }
  virtual void exitPivot_in_clause_elements(KingbaseSqlParser::Pivot_in_clause_elementsContext * /*ctx*/) override { }

  virtual void enterUnpivot_clause(KingbaseSqlParser::Unpivot_clauseContext * /*ctx*/) override { }
  virtual void exitUnpivot_clause(KingbaseSqlParser::Unpivot_clauseContext * /*ctx*/) override { }

  virtual void enterUnpivot_in_clause(KingbaseSqlParser::Unpivot_in_clauseContext * /*ctx*/) override { }
  virtual void exitUnpivot_in_clause(KingbaseSqlParser::Unpivot_in_clauseContext * /*ctx*/) override { }

  virtual void enterUnpivot_in_elements(KingbaseSqlParser::Unpivot_in_elementsContext * /*ctx*/) override { }
  virtual void exitUnpivot_in_elements(KingbaseSqlParser::Unpivot_in_elementsContext * /*ctx*/) override { }

  virtual void enterHierarchical_query_clause(KingbaseSqlParser::Hierarchical_query_clauseContext * /*ctx*/) override { }
  virtual void exitHierarchical_query_clause(KingbaseSqlParser::Hierarchical_query_clauseContext * /*ctx*/) override { }

  virtual void enterStart_part(KingbaseSqlParser::Start_partContext * /*ctx*/) override { }
  virtual void exitStart_part(KingbaseSqlParser::Start_partContext * /*ctx*/) override { }

  virtual void enterGroup_by_clause(KingbaseSqlParser::Group_by_clauseContext * /*ctx*/) override { }
  virtual void exitGroup_by_clause(KingbaseSqlParser::Group_by_clauseContext * /*ctx*/) override { }

  virtual void enterGroup_by_elements(KingbaseSqlParser::Group_by_elementsContext * /*ctx*/) override { }
  virtual void exitGroup_by_elements(KingbaseSqlParser::Group_by_elementsContext * /*ctx*/) override { }

  virtual void enterRollup_cube_expression(KingbaseSqlParser::Rollup_cube_expressionContext * /*ctx*/) override { }
  virtual void exitRollup_cube_expression(KingbaseSqlParser::Rollup_cube_expressionContext * /*ctx*/) override { }

  virtual void enterEmpty_expression(KingbaseSqlParser::Empty_expressionContext * /*ctx*/) override { }
  virtual void exitEmpty_expression(KingbaseSqlParser::Empty_expressionContext * /*ctx*/) override { }

  virtual void enterGrouping_sets_expression(KingbaseSqlParser::Grouping_sets_expressionContext * /*ctx*/) override { }
  virtual void exitGrouping_sets_expression(KingbaseSqlParser::Grouping_sets_expressionContext * /*ctx*/) override { }

  virtual void enterHaving_clause(KingbaseSqlParser::Having_clauseContext * /*ctx*/) override { }
  virtual void exitHaving_clause(KingbaseSqlParser::Having_clauseContext * /*ctx*/) override { }

  virtual void enterCell_assignment(KingbaseSqlParser::Cell_assignmentContext * /*ctx*/) override { }
  virtual void exitCell_assignment(KingbaseSqlParser::Cell_assignmentContext * /*ctx*/) override { }

  virtual void enterUntil_part(KingbaseSqlParser::Until_partContext * /*ctx*/) override { }
  virtual void exitUntil_part(KingbaseSqlParser::Until_partContext * /*ctx*/) override { }

  virtual void enterOrder_by_clause(KingbaseSqlParser::Order_by_clauseContext * /*ctx*/) override { }
  virtual void exitOrder_by_clause(KingbaseSqlParser::Order_by_clauseContext * /*ctx*/) override { }

  virtual void enterOrder_by_elements(KingbaseSqlParser::Order_by_elementsContext * /*ctx*/) override { }
  virtual void exitOrder_by_elements(KingbaseSqlParser::Order_by_elementsContext * /*ctx*/) override { }

  virtual void enterLimit_clause(KingbaseSqlParser::Limit_clauseContext * /*ctx*/) override { }
  virtual void exitLimit_clause(KingbaseSqlParser::Limit_clauseContext * /*ctx*/) override { }

  virtual void enterOffset_clause(KingbaseSqlParser::Offset_clauseContext * /*ctx*/) override { }
  virtual void exitOffset_clause(KingbaseSqlParser::Offset_clauseContext * /*ctx*/) override { }

  virtual void enterFetch_clause(KingbaseSqlParser::Fetch_clauseContext * /*ctx*/) override { }
  virtual void exitFetch_clause(KingbaseSqlParser::Fetch_clauseContext * /*ctx*/) override { }

  virtual void enterFor_update_clause(KingbaseSqlParser::For_update_clauseContext * /*ctx*/) override { }
  virtual void exitFor_update_clause(KingbaseSqlParser::For_update_clauseContext * /*ctx*/) override { }

  virtual void enterFor_update_of_part(KingbaseSqlParser::For_update_of_partContext * /*ctx*/) override { }
  virtual void exitFor_update_of_part(KingbaseSqlParser::For_update_of_partContext * /*ctx*/) override { }

  virtual void enterFor_update_options(KingbaseSqlParser::For_update_optionsContext * /*ctx*/) override { }
  virtual void exitFor_update_options(KingbaseSqlParser::For_update_optionsContext * /*ctx*/) override { }

  virtual void enterKeep_clause(KingbaseSqlParser::Keep_clauseContext * /*ctx*/) override { }
  virtual void exitKeep_clause(KingbaseSqlParser::Keep_clauseContext * /*ctx*/) override { }

  virtual void enterFunction_argument(KingbaseSqlParser::Function_argumentContext * /*ctx*/) override { }
  virtual void exitFunction_argument(KingbaseSqlParser::Function_argumentContext * /*ctx*/) override { }

  virtual void enterFunction_argument_analytic(KingbaseSqlParser::Function_argument_analyticContext * /*ctx*/) override { }
  virtual void exitFunction_argument_analytic(KingbaseSqlParser::Function_argument_analyticContext * /*ctx*/) override { }

  virtual void enterFunction_argument_modeling(KingbaseSqlParser::Function_argument_modelingContext * /*ctx*/) override { }
  virtual void exitFunction_argument_modeling(KingbaseSqlParser::Function_argument_modelingContext * /*ctx*/) override { }

  virtual void enterRespect_or_ignore_nulls(KingbaseSqlParser::Respect_or_ignore_nullsContext * /*ctx*/) override { }
  virtual void exitRespect_or_ignore_nulls(KingbaseSqlParser::Respect_or_ignore_nullsContext * /*ctx*/) override { }

  virtual void enterArgument(KingbaseSqlParser::ArgumentContext * /*ctx*/) override { }
  virtual void exitArgument(KingbaseSqlParser::ArgumentContext * /*ctx*/) override { }

  virtual void enterDatatype(KingbaseSqlParser::DatatypeContext * /*ctx*/) override { }
  virtual void exitDatatype(KingbaseSqlParser::DatatypeContext * /*ctx*/) override { }

  virtual void enterPrecision_part(KingbaseSqlParser::Precision_partContext * /*ctx*/) override { }
  virtual void exitPrecision_part(KingbaseSqlParser::Precision_partContext * /*ctx*/) override { }

  virtual void enterNative_datatype_element(KingbaseSqlParser::Native_datatype_elementContext * /*ctx*/) override { }
  virtual void exitNative_datatype_element(KingbaseSqlParser::Native_datatype_elementContext * /*ctx*/) override { }

  virtual void enterUpdate_statement(KingbaseSqlParser::Update_statementContext * /*ctx*/) override { }
  virtual void exitUpdate_statement(KingbaseSqlParser::Update_statementContext * /*ctx*/) override { }

  virtual void enterUpdate_set_clause(KingbaseSqlParser::Update_set_clauseContext * /*ctx*/) override { }
  virtual void exitUpdate_set_clause(KingbaseSqlParser::Update_set_clauseContext * /*ctx*/) override { }

  virtual void enterColumn_based_update_set_clause(KingbaseSqlParser::Column_based_update_set_clauseContext * /*ctx*/) override { }
  virtual void exitColumn_based_update_set_clause(KingbaseSqlParser::Column_based_update_set_clauseContext * /*ctx*/) override { }

  virtual void enterDelete_statement(KingbaseSqlParser::Delete_statementContext * /*ctx*/) override { }
  virtual void exitDelete_statement(KingbaseSqlParser::Delete_statementContext * /*ctx*/) override { }

  virtual void enterGeneral_table_ref(KingbaseSqlParser::General_table_refContext * /*ctx*/) override { }
  virtual void exitGeneral_table_ref(KingbaseSqlParser::General_table_refContext * /*ctx*/) override { }

  virtual void enterStatic_returning_clause(KingbaseSqlParser::Static_returning_clauseContext * /*ctx*/) override { }
  virtual void exitStatic_returning_clause(KingbaseSqlParser::Static_returning_clauseContext * /*ctx*/) override { }

  virtual void enterInsert_statement(KingbaseSqlParser::Insert_statementContext * /*ctx*/) override { }
  virtual void exitInsert_statement(KingbaseSqlParser::Insert_statementContext * /*ctx*/) override { }

  virtual void enterSingle_table_insert(KingbaseSqlParser::Single_table_insertContext * /*ctx*/) override { }
  virtual void exitSingle_table_insert(KingbaseSqlParser::Single_table_insertContext * /*ctx*/) override { }

  virtual void enterMulti_table_insert(KingbaseSqlParser::Multi_table_insertContext * /*ctx*/) override { }
  virtual void exitMulti_table_insert(KingbaseSqlParser::Multi_table_insertContext * /*ctx*/) override { }

  virtual void enterMulti_table_element(KingbaseSqlParser::Multi_table_elementContext * /*ctx*/) override { }
  virtual void exitMulti_table_element(KingbaseSqlParser::Multi_table_elementContext * /*ctx*/) override { }

  virtual void enterConditional_insert_clause(KingbaseSqlParser::Conditional_insert_clauseContext * /*ctx*/) override { }
  virtual void exitConditional_insert_clause(KingbaseSqlParser::Conditional_insert_clauseContext * /*ctx*/) override { }

  virtual void enterConditional_insert_when_part(KingbaseSqlParser::Conditional_insert_when_partContext * /*ctx*/) override { }
  virtual void exitConditional_insert_when_part(KingbaseSqlParser::Conditional_insert_when_partContext * /*ctx*/) override { }

  virtual void enterConditional_insert_else_part(KingbaseSqlParser::Conditional_insert_else_partContext * /*ctx*/) override { }
  virtual void exitConditional_insert_else_part(KingbaseSqlParser::Conditional_insert_else_partContext * /*ctx*/) override { }

  virtual void enterInsert_into_clause(KingbaseSqlParser::Insert_into_clauseContext * /*ctx*/) override { }
  virtual void exitInsert_into_clause(KingbaseSqlParser::Insert_into_clauseContext * /*ctx*/) override { }

  virtual void enterValues_clause(KingbaseSqlParser::Values_clauseContext * /*ctx*/) override { }
  virtual void exitValues_clause(KingbaseSqlParser::Values_clauseContext * /*ctx*/) override { }

  virtual void enterCopy_statement(KingbaseSqlParser::Copy_statementContext * /*ctx*/) override { }
  virtual void exitCopy_statement(KingbaseSqlParser::Copy_statementContext * /*ctx*/) override { }

  virtual void enterCondition(KingbaseSqlParser::ConditionContext * /*ctx*/) override { }
  virtual void exitCondition(KingbaseSqlParser::ConditionContext * /*ctx*/) override { }

  virtual void enterExpressions(KingbaseSqlParser::ExpressionsContext * /*ctx*/) override { }
  virtual void exitExpressions(KingbaseSqlParser::ExpressionsContext * /*ctx*/) override { }

  virtual void enterExpression(KingbaseSqlParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(KingbaseSqlParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterCursor_expression(KingbaseSqlParser::Cursor_expressionContext * /*ctx*/) override { }
  virtual void exitCursor_expression(KingbaseSqlParser::Cursor_expressionContext * /*ctx*/) override { }

  virtual void enterLogical_expression(KingbaseSqlParser::Logical_expressionContext * /*ctx*/) override { }
  virtual void exitLogical_expression(KingbaseSqlParser::Logical_expressionContext * /*ctx*/) override { }

  virtual void enterMultiset_expression(KingbaseSqlParser::Multiset_expressionContext * /*ctx*/) override { }
  virtual void exitMultiset_expression(KingbaseSqlParser::Multiset_expressionContext * /*ctx*/) override { }

  virtual void enterRelational_expression(KingbaseSqlParser::Relational_expressionContext * /*ctx*/) override { }
  virtual void exitRelational_expression(KingbaseSqlParser::Relational_expressionContext * /*ctx*/) override { }

  virtual void enterCompound_expression(KingbaseSqlParser::Compound_expressionContext * /*ctx*/) override { }
  virtual void exitCompound_expression(KingbaseSqlParser::Compound_expressionContext * /*ctx*/) override { }

  virtual void enterRelational_operator(KingbaseSqlParser::Relational_operatorContext * /*ctx*/) override { }
  virtual void exitRelational_operator(KingbaseSqlParser::Relational_operatorContext * /*ctx*/) override { }

  virtual void enterIn_elements(KingbaseSqlParser::In_elementsContext * /*ctx*/) override { }
  virtual void exitIn_elements(KingbaseSqlParser::In_elementsContext * /*ctx*/) override { }

  virtual void enterBetween_elements(KingbaseSqlParser::Between_elementsContext * /*ctx*/) override { }
  virtual void exitBetween_elements(KingbaseSqlParser::Between_elementsContext * /*ctx*/) override { }

  virtual void enterConcatenation(KingbaseSqlParser::ConcatenationContext * /*ctx*/) override { }
  virtual void exitConcatenation(KingbaseSqlParser::ConcatenationContext * /*ctx*/) override { }

  virtual void enterInterval_expression(KingbaseSqlParser::Interval_expressionContext * /*ctx*/) override { }
  virtual void exitInterval_expression(KingbaseSqlParser::Interval_expressionContext * /*ctx*/) override { }

  virtual void enterModel_expression(KingbaseSqlParser::Model_expressionContext * /*ctx*/) override { }
  virtual void exitModel_expression(KingbaseSqlParser::Model_expressionContext * /*ctx*/) override { }

  virtual void enterModel_expression_element(KingbaseSqlParser::Model_expression_elementContext * /*ctx*/) override { }
  virtual void exitModel_expression_element(KingbaseSqlParser::Model_expression_elementContext * /*ctx*/) override { }

  virtual void enterSingle_column_for_loop(KingbaseSqlParser::Single_column_for_loopContext * /*ctx*/) override { }
  virtual void exitSingle_column_for_loop(KingbaseSqlParser::Single_column_for_loopContext * /*ctx*/) override { }

  virtual void enterMulti_column_for_loop(KingbaseSqlParser::Multi_column_for_loopContext * /*ctx*/) override { }
  virtual void exitMulti_column_for_loop(KingbaseSqlParser::Multi_column_for_loopContext * /*ctx*/) override { }

  virtual void enterUnary_expression(KingbaseSqlParser::Unary_expressionContext * /*ctx*/) override { }
  virtual void exitUnary_expression(KingbaseSqlParser::Unary_expressionContext * /*ctx*/) override { }

  virtual void enterCase_statement(KingbaseSqlParser::Case_statementContext * /*ctx*/) override { }
  virtual void exitCase_statement(KingbaseSqlParser::Case_statementContext * /*ctx*/) override { }

  virtual void enterSimple_case_statement(KingbaseSqlParser::Simple_case_statementContext * /*ctx*/) override { }
  virtual void exitSimple_case_statement(KingbaseSqlParser::Simple_case_statementContext * /*ctx*/) override { }

  virtual void enterSimple_case_when_part(KingbaseSqlParser::Simple_case_when_partContext * /*ctx*/) override { }
  virtual void exitSimple_case_when_part(KingbaseSqlParser::Simple_case_when_partContext * /*ctx*/) override { }

  virtual void enterSearched_case_statement(KingbaseSqlParser::Searched_case_statementContext * /*ctx*/) override { }
  virtual void exitSearched_case_statement(KingbaseSqlParser::Searched_case_statementContext * /*ctx*/) override { }

  virtual void enterSearched_case_when_part(KingbaseSqlParser::Searched_case_when_partContext * /*ctx*/) override { }
  virtual void exitSearched_case_when_part(KingbaseSqlParser::Searched_case_when_partContext * /*ctx*/) override { }

  virtual void enterCase_else_part(KingbaseSqlParser::Case_else_partContext * /*ctx*/) override { }
  virtual void exitCase_else_part(KingbaseSqlParser::Case_else_partContext * /*ctx*/) override { }

  virtual void enterAtom(KingbaseSqlParser::AtomContext * /*ctx*/) override { }
  virtual void exitAtom(KingbaseSqlParser::AtomContext * /*ctx*/) override { }

  virtual void enterQuantified_expression(KingbaseSqlParser::Quantified_expressionContext * /*ctx*/) override { }
  virtual void exitQuantified_expression(KingbaseSqlParser::Quantified_expressionContext * /*ctx*/) override { }

  virtual void enterString_function(KingbaseSqlParser::String_functionContext * /*ctx*/) override { }
  virtual void exitString_function(KingbaseSqlParser::String_functionContext * /*ctx*/) override { }

  virtual void enterStandard_function(KingbaseSqlParser::Standard_functionContext * /*ctx*/) override { }
  virtual void exitStandard_function(KingbaseSqlParser::Standard_functionContext * /*ctx*/) override { }

  virtual void enterNumeric_function_wrapper(KingbaseSqlParser::Numeric_function_wrapperContext * /*ctx*/) override { }
  virtual void exitNumeric_function_wrapper(KingbaseSqlParser::Numeric_function_wrapperContext * /*ctx*/) override { }

  virtual void enterNumeric_function(KingbaseSqlParser::Numeric_functionContext * /*ctx*/) override { }
  virtual void exitNumeric_function(KingbaseSqlParser::Numeric_functionContext * /*ctx*/) override { }

  virtual void enterOther_function(KingbaseSqlParser::Other_functionContext * /*ctx*/) override { }
  virtual void exitOther_function(KingbaseSqlParser::Other_functionContext * /*ctx*/) override { }

  virtual void enterOver_clause_keyword(KingbaseSqlParser::Over_clause_keywordContext * /*ctx*/) override { }
  virtual void exitOver_clause_keyword(KingbaseSqlParser::Over_clause_keywordContext * /*ctx*/) override { }

  virtual void enterWithin_or_over_clause_keyword(KingbaseSqlParser::Within_or_over_clause_keywordContext * /*ctx*/) override { }
  virtual void exitWithin_or_over_clause_keyword(KingbaseSqlParser::Within_or_over_clause_keywordContext * /*ctx*/) override { }

  virtual void enterStandard_prediction_function_keyword(KingbaseSqlParser::Standard_prediction_function_keywordContext * /*ctx*/) override { }
  virtual void exitStandard_prediction_function_keyword(KingbaseSqlParser::Standard_prediction_function_keywordContext * /*ctx*/) override { }

  virtual void enterOver_clause(KingbaseSqlParser::Over_clauseContext * /*ctx*/) override { }
  virtual void exitOver_clause(KingbaseSqlParser::Over_clauseContext * /*ctx*/) override { }

  virtual void enterWindowing_clause(KingbaseSqlParser::Windowing_clauseContext * /*ctx*/) override { }
  virtual void exitWindowing_clause(KingbaseSqlParser::Windowing_clauseContext * /*ctx*/) override { }

  virtual void enterWindowing_type(KingbaseSqlParser::Windowing_typeContext * /*ctx*/) override { }
  virtual void exitWindowing_type(KingbaseSqlParser::Windowing_typeContext * /*ctx*/) override { }

  virtual void enterWindowing_elements(KingbaseSqlParser::Windowing_elementsContext * /*ctx*/) override { }
  virtual void exitWindowing_elements(KingbaseSqlParser::Windowing_elementsContext * /*ctx*/) override { }

  virtual void enterCollect_order_by_part(KingbaseSqlParser::Collect_order_by_partContext * /*ctx*/) override { }
  virtual void exitCollect_order_by_part(KingbaseSqlParser::Collect_order_by_partContext * /*ctx*/) override { }

  virtual void enterWithin_or_over_part(KingbaseSqlParser::Within_or_over_partContext * /*ctx*/) override { }
  virtual void exitWithin_or_over_part(KingbaseSqlParser::Within_or_over_partContext * /*ctx*/) override { }

  virtual void enterXml_passing_clause(KingbaseSqlParser::Xml_passing_clauseContext * /*ctx*/) override { }
  virtual void exitXml_passing_clause(KingbaseSqlParser::Xml_passing_clauseContext * /*ctx*/) override { }

  virtual void enterXml_attributes_clause(KingbaseSqlParser::Xml_attributes_clauseContext * /*ctx*/) override { }
  virtual void exitXml_attributes_clause(KingbaseSqlParser::Xml_attributes_clauseContext * /*ctx*/) override { }

  virtual void enterXml_namespaces_clause(KingbaseSqlParser::Xml_namespaces_clauseContext * /*ctx*/) override { }
  virtual void exitXml_namespaces_clause(KingbaseSqlParser::Xml_namespaces_clauseContext * /*ctx*/) override { }

  virtual void enterXml_table_column(KingbaseSqlParser::Xml_table_columnContext * /*ctx*/) override { }
  virtual void exitXml_table_column(KingbaseSqlParser::Xml_table_columnContext * /*ctx*/) override { }

  virtual void enterXml_general_default_part(KingbaseSqlParser::Xml_general_default_partContext * /*ctx*/) override { }
  virtual void exitXml_general_default_part(KingbaseSqlParser::Xml_general_default_partContext * /*ctx*/) override { }

  virtual void enterXml_multiuse_expression_element(KingbaseSqlParser::Xml_multiuse_expression_elementContext * /*ctx*/) override { }
  virtual void exitXml_multiuse_expression_element(KingbaseSqlParser::Xml_multiuse_expression_elementContext * /*ctx*/) override { }

  virtual void enterXmlroot_param_version_part(KingbaseSqlParser::Xmlroot_param_version_partContext * /*ctx*/) override { }
  virtual void exitXmlroot_param_version_part(KingbaseSqlParser::Xmlroot_param_version_partContext * /*ctx*/) override { }

  virtual void enterXmlroot_param_standalone_part(KingbaseSqlParser::Xmlroot_param_standalone_partContext * /*ctx*/) override { }
  virtual void exitXmlroot_param_standalone_part(KingbaseSqlParser::Xmlroot_param_standalone_partContext * /*ctx*/) override { }

  virtual void enterXmlserialize_param_enconding_part(KingbaseSqlParser::Xmlserialize_param_enconding_partContext * /*ctx*/) override { }
  virtual void exitXmlserialize_param_enconding_part(KingbaseSqlParser::Xmlserialize_param_enconding_partContext * /*ctx*/) override { }

  virtual void enterXmlserialize_param_version_part(KingbaseSqlParser::Xmlserialize_param_version_partContext * /*ctx*/) override { }
  virtual void exitXmlserialize_param_version_part(KingbaseSqlParser::Xmlserialize_param_version_partContext * /*ctx*/) override { }

  virtual void enterXmlserialize_param_ident_part(KingbaseSqlParser::Xmlserialize_param_ident_partContext * /*ctx*/) override { }
  virtual void exitXmlserialize_param_ident_part(KingbaseSqlParser::Xmlserialize_param_ident_partContext * /*ctx*/) override { }

  virtual void enterBind_variable(KingbaseSqlParser::Bind_variableContext * /*ctx*/) override { }
  virtual void exitBind_variable(KingbaseSqlParser::Bind_variableContext * /*ctx*/) override { }

  virtual void enterGeneral_element(KingbaseSqlParser::General_elementContext * /*ctx*/) override { }
  virtual void exitGeneral_element(KingbaseSqlParser::General_elementContext * /*ctx*/) override { }

  virtual void enterGeneral_element_part(KingbaseSqlParser::General_element_partContext * /*ctx*/) override { }
  virtual void exitGeneral_element_part(KingbaseSqlParser::General_element_partContext * /*ctx*/) override { }

  virtual void enterTable_element(KingbaseSqlParser::Table_elementContext * /*ctx*/) override { }
  virtual void exitTable_element(KingbaseSqlParser::Table_elementContext * /*ctx*/) override { }

  virtual void enterTableview_name(KingbaseSqlParser::Tableview_nameContext * /*ctx*/) override { }
  virtual void exitTableview_name(KingbaseSqlParser::Tableview_nameContext * /*ctx*/) override { }

  virtual void enterColumn_name(KingbaseSqlParser::Column_nameContext * /*ctx*/) override { }
  virtual void exitColumn_name(KingbaseSqlParser::Column_nameContext * /*ctx*/) override { }

  virtual void enterTable_name(KingbaseSqlParser::Table_nameContext * /*ctx*/) override { }
  virtual void exitTable_name(KingbaseSqlParser::Table_nameContext * /*ctx*/) override { }

  virtual void enterLink_name(KingbaseSqlParser::Link_nameContext * /*ctx*/) override { }
  virtual void exitLink_name(KingbaseSqlParser::Link_nameContext * /*ctx*/) override { }

  virtual void enterColumn_alias(KingbaseSqlParser::Column_aliasContext * /*ctx*/) override { }
  virtual void exitColumn_alias(KingbaseSqlParser::Column_aliasContext * /*ctx*/) override { }

  virtual void enterTable_alias(KingbaseSqlParser::Table_aliasContext * /*ctx*/) override { }
  virtual void exitTable_alias(KingbaseSqlParser::Table_aliasContext * /*ctx*/) override { }

  virtual void enterXml_column_name(KingbaseSqlParser::Xml_column_nameContext * /*ctx*/) override { }
  virtual void exitXml_column_name(KingbaseSqlParser::Xml_column_nameContext * /*ctx*/) override { }

  virtual void enterParen_column_list(KingbaseSqlParser::Paren_column_listContext * /*ctx*/) override { }
  virtual void exitParen_column_list(KingbaseSqlParser::Paren_column_listContext * /*ctx*/) override { }

  virtual void enterColumn_list(KingbaseSqlParser::Column_listContext * /*ctx*/) override { }
  virtual void exitColumn_list(KingbaseSqlParser::Column_listContext * /*ctx*/) override { }

  virtual void enterWith_query_name(KingbaseSqlParser::With_query_nameContext * /*ctx*/) override { }
  virtual void exitWith_query_name(KingbaseSqlParser::With_query_nameContext * /*ctx*/) override { }

  virtual void enterConstraint_name(KingbaseSqlParser::Constraint_nameContext * /*ctx*/) override { }
  virtual void exitConstraint_name(KingbaseSqlParser::Constraint_nameContext * /*ctx*/) override { }

  virtual void enterLabel_name(KingbaseSqlParser::Label_nameContext * /*ctx*/) override { }
  virtual void exitLabel_name(KingbaseSqlParser::Label_nameContext * /*ctx*/) override { }

  virtual void enterPartition_extension_clause(KingbaseSqlParser::Partition_extension_clauseContext * /*ctx*/) override { }
  virtual void exitPartition_extension_clause(KingbaseSqlParser::Partition_extension_clauseContext * /*ctx*/) override { }

  virtual void enterConstant(KingbaseSqlParser::ConstantContext * /*ctx*/) override { }
  virtual void exitConstant(KingbaseSqlParser::ConstantContext * /*ctx*/) override { }

  virtual void enterNumeric(KingbaseSqlParser::NumericContext * /*ctx*/) override { }
  virtual void exitNumeric(KingbaseSqlParser::NumericContext * /*ctx*/) override { }

  virtual void enterNumeric_negative(KingbaseSqlParser::Numeric_negativeContext * /*ctx*/) override { }
  virtual void exitNumeric_negative(KingbaseSqlParser::Numeric_negativeContext * /*ctx*/) override { }

  virtual void enterQuoted_string(KingbaseSqlParser::Quoted_stringContext * /*ctx*/) override { }
  virtual void exitQuoted_string(KingbaseSqlParser::Quoted_stringContext * /*ctx*/) override { }

  virtual void enterIdentifier(KingbaseSqlParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(KingbaseSqlParser::IdentifierContext * /*ctx*/) override { }

  virtual void enterId_expression(KingbaseSqlParser::Id_expressionContext * /*ctx*/) override { }
  virtual void exitId_expression(KingbaseSqlParser::Id_expressionContext * /*ctx*/) override { }

  virtual void enterOuter_join_sign(KingbaseSqlParser::Outer_join_signContext * /*ctx*/) override { }
  virtual void exitOuter_join_sign(KingbaseSqlParser::Outer_join_signContext * /*ctx*/) override { }

  virtual void enterRegular_id(KingbaseSqlParser::Regular_idContext * /*ctx*/) override { }
  virtual void exitRegular_id(KingbaseSqlParser::Regular_idContext * /*ctx*/) override { }

  virtual void enterNon_reserved_keywords_in_12c(KingbaseSqlParser::Non_reserved_keywords_in_12cContext * /*ctx*/) override { }
  virtual void exitNon_reserved_keywords_in_12c(KingbaseSqlParser::Non_reserved_keywords_in_12cContext * /*ctx*/) override { }

  virtual void enterNon_reserved_keywords_pre12c(KingbaseSqlParser::Non_reserved_keywords_pre12cContext * /*ctx*/) override { }
  virtual void exitNon_reserved_keywords_pre12c(KingbaseSqlParser::Non_reserved_keywords_pre12cContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};


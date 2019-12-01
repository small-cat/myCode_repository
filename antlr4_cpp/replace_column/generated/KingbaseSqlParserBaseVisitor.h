
// Generated from /home/jona/myGit/myCode_repository/antlr4_cpp/replace_column/KingbaseSqlParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "KingbaseSqlParserVisitor.h"


/**
 * This class provides an empty implementation of KingbaseSqlParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  KingbaseSqlParserBaseVisitor : public KingbaseSqlParserVisitor {
public:

  virtual antlrcpp::Any visitSql_script(KingbaseSqlParser::Sql_scriptContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnit_sql_statement(KingbaseSqlParser::Unit_sql_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnit_statement(KingbaseSqlParser::Unit_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_full_search_configuration(KingbaseSqlParser::Alter_full_search_configurationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToken_or_dictionary(KingbaseSqlParser::Token_or_dictionaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_full_search_dictionary(KingbaseSqlParser::Alter_full_search_dictionaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_full_search_parser(KingbaseSqlParser::Alter_full_search_parserContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_full_search_template(KingbaseSqlParser::Alter_full_search_templateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_full_search(KingbaseSqlParser::Drop_full_searchContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_index_schema_sequence_table_view(KingbaseSqlParser::Drop_index_schema_sequence_table_viewContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_materialize_view(KingbaseSqlParser::Drop_materialize_viewContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_synonym(KingbaseSqlParser::Drop_synonymContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_tablespace(KingbaseSqlParser::Drop_tablespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_directory(KingbaseSqlParser::Drop_directoryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_function(KingbaseSqlParser::Alter_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_function(KingbaseSqlParser::Drop_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_function_statement(KingbaseSqlParser::Create_function_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSequence_of_statements(KingbaseSqlParser::Sequence_of_statementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSequence_of_statement(KingbaseSqlParser::Sequence_of_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_package(KingbaseSqlParser::Create_packageContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_package(KingbaseSqlParser::Alter_packageContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_package(KingbaseSqlParser::Drop_packageContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPackage_names(KingbaseSqlParser::Package_namesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPackage_name(KingbaseSqlParser::Package_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPackage_body(KingbaseSqlParser::Package_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInitialization_statement(KingbaseSqlParser::Initialization_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProcedure_definition(KingbaseSqlParser::Procedure_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_definition(KingbaseSqlParser::Function_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_procedure(KingbaseSqlParser::Drop_procedureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_procedure(KingbaseSqlParser::Alter_procedureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_procedure_statement(KingbaseSqlParser::Create_procedure_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPlsql_block(KingbaseSqlParser::Plsql_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclare_statement(KingbaseSqlParser::Declare_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_trigger(KingbaseSqlParser::Drop_triggerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_trigger(KingbaseSqlParser::Alter_triggerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_trigger(KingbaseSqlParser::Create_triggerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExecute_procedure_statement(KingbaseSqlParser::Execute_procedure_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDml_event_clause(KingbaseSqlParser::Dml_event_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDml_event_element(KingbaseSqlParser::Dml_event_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_type(KingbaseSqlParser::Drop_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_type(KingbaseSqlParser::Create_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_options(KingbaseSqlParser::Type_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_elements_parameter(KingbaseSqlParser::Type_elements_parameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_sequence(KingbaseSqlParser::Drop_sequenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_sequence(KingbaseSqlParser::Alter_sequenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_synonym(KingbaseSqlParser::Alter_synonymContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_system(KingbaseSqlParser::Alter_systemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSystem_spec(KingbaseSqlParser::System_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_sequence(KingbaseSqlParser::Create_sequenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSequence_spec(KingbaseSqlParser::Sequence_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_index(KingbaseSqlParser::Create_indexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_full_index(KingbaseSqlParser::Create_full_indexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex_expr(KingbaseSqlParser::Index_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndextype(KingbaseSqlParser::IndextypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_index(KingbaseSqlParser::Alter_indexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_schema(KingbaseSqlParser::Alter_schemaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNew_partition_name(KingbaseSqlParser::New_partition_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_user(KingbaseSqlParser::Create_userContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_role(KingbaseSqlParser::Create_roleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_user(KingbaseSqlParser::Alter_userContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_role(KingbaseSqlParser::Alter_roleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_role(KingbaseSqlParser::Drop_roleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_user(KingbaseSqlParser::Drop_userContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_owned(KingbaseSqlParser::Drop_ownedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReassign_owned(KingbaseSqlParser::Reassign_ownedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnable_user_ip(KingbaseSqlParser::Enable_user_ipContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentified_by(KingbaseSqlParser::Identified_byContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentified_other_clause(KingbaseSqlParser::Identified_other_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUser_tablespace_clause(KingbaseSqlParser::User_tablespace_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProfile_clause(KingbaseSqlParser::Profile_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAnalyze(KingbaseSqlParser::AnalyzeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCheckpoint(KingbaseSqlParser::CheckpointContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCluster(KingbaseSqlParser::ClusterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComment(KingbaseSqlParser::CommentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComment_spec(KingbaseSqlParser::Comment_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCopy_datafile(KingbaseSqlParser::Copy_datafileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_database(KingbaseSqlParser::Create_databaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_full_search_configuration(KingbaseSqlParser::Create_full_search_configurationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_full_search_dictionary(KingbaseSqlParser::Create_full_search_dictionaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_full_search_parser(KingbaseSqlParser::Create_full_search_parserContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_full_search_template(KingbaseSqlParser::Create_full_search_templateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_index(KingbaseSqlParser::Drop_indexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGrant_statement(KingbaseSqlParser::Grant_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGrant_object_privilege(KingbaseSqlParser::Grant_object_privilegeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGrant_column_privilege(KingbaseSqlParser::Grant_column_privilegeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGrant_role_privilege(KingbaseSqlParser::Grant_role_privilegeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRevoke_statement(KingbaseSqlParser::Revoke_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRevoke_object_privilege(KingbaseSqlParser::Revoke_object_privilegeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRevoke_role_privilege(KingbaseSqlParser::Revoke_role_privilegeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_directory(KingbaseSqlParser::Create_directoryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDirectory_name(KingbaseSqlParser::Directory_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDirectory_path(KingbaseSqlParser::Directory_pathContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDbcc_checkallocate(KingbaseSqlParser::Dbcc_checkallocateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDbcc_checkcatalog(KingbaseSqlParser::Dbcc_checkcatalogContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDbcc_checktable(KingbaseSqlParser::Dbcc_checktableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDbcc_checkindex(KingbaseSqlParser::Dbcc_checkindexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDbcc_checktablespace(KingbaseSqlParser::Dbcc_checktablespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDbcc_checkdb(KingbaseSqlParser::Dbcc_checkdbContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_view(KingbaseSqlParser::Create_viewContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_rule(KingbaseSqlParser::Create_ruleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRulename(KingbaseSqlParser::RulenameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEvent(KingbaseSqlParser::EventContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_force_view(KingbaseSqlParser::Create_force_viewContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_tablespace(KingbaseSqlParser::Alter_tablespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTablespace_state_clauses(KingbaseSqlParser::Tablespace_state_clausesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNew_tablespace_name(KingbaseSqlParser::New_tablespace_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_tablespace(KingbaseSqlParser::Create_tablespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTablespace_retention_clause(KingbaseSqlParser::Tablespace_retention_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBuild_clause(KingbaseSqlParser::Build_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_materialized_view(KingbaseSqlParser::Alter_materialized_viewContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterval_expr(KingbaseSqlParser::Interval_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_materialized_view(KingbaseSqlParser::Create_materialized_viewContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_schema(KingbaseSqlParser::Create_schemaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_table(KingbaseSqlParser::Create_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_table_without_select(KingbaseSqlParser::Create_table_without_selectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_table_as_select(KingbaseSqlParser::Create_table_as_selectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_table_select_into(KingbaseSqlParser::Create_table_select_intoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumn_with_datatype_list(KingbaseSqlParser::Column_with_datatype_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumn_with_datatype(KingbaseSqlParser::Column_with_datatypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumn_constraint(KingbaseSqlParser::Column_constraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_constraint(KingbaseSqlParser::Table_constraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAction(KingbaseSqlParser::ActionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubpartition_name(KingbaseSqlParser::Subpartition_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_table(KingbaseSqlParser::Drop_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAllow_or_disallow(KingbaseSqlParser::Allow_or_disallowContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_synonym(KingbaseSqlParser::Create_synonymContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComment_on_table(KingbaseSqlParser::Comment_on_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDatabase_name(KingbaseSqlParser::Database_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_database(KingbaseSqlParser::Alter_databaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_table(KingbaseSqlParser::Alter_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_table_add_properties(KingbaseSqlParser::Alter_table_add_propertiesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_table_change_properties(KingbaseSqlParser::Alter_table_change_propertiesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_table_drop_properties(KingbaseSqlParser::Alter_table_drop_propertiesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_table_rename_properties(KingbaseSqlParser::Alter_table_rename_propertiesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_table_truncate_properties(KingbaseSqlParser::Alter_table_truncate_propertiesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_table_others(KingbaseSqlParser::Alter_table_othersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTablespace(KingbaseSqlParser::TablespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartition_name(KingbaseSqlParser::Partition_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumn_or_attribute(KingbaseSqlParser::Column_or_attributeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameter(KingbaseSqlParser::ParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefault_value_part(KingbaseSqlParser::Default_value_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameter_list(KingbaseSqlParser::Parameter_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParen_parameter_list(KingbaseSqlParser::Paren_parameter_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable_declaration(KingbaseSqlParser::Variable_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable_declarations(KingbaseSqlParser::Variable_declarationsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCursor_declaration(KingbaseSqlParser::Cursor_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCursor_declarations(KingbaseSqlParser::Cursor_declarationsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameter_spec(KingbaseSqlParser::Parameter_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRecord_type_def(KingbaseSqlParser::Record_type_defContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitField_spec(KingbaseSqlParser::Field_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRef_cursor_type_def(KingbaseSqlParser::Ref_cursor_type_defContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_declaration(KingbaseSqlParser::Type_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_type_def(KingbaseSqlParser::Table_type_defContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_indexed_by_part(KingbaseSqlParser::Table_indexed_by_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarray_type_def(KingbaseSqlParser::Varray_type_defContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSeq_of_statements(KingbaseSqlParser::Seq_of_statementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLabel_declaration(KingbaseSqlParser::Label_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(KingbaseSqlParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignment_statement(KingbaseSqlParser::Assignment_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitContinue_statement(KingbaseSqlParser::Continue_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExit_statement(KingbaseSqlParser::Exit_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGoto_statement(KingbaseSqlParser::Goto_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_statement(KingbaseSqlParser::If_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElsif_part(KingbaseSqlParser::Elsif_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElse_part(KingbaseSqlParser::Else_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLoop_statement(KingbaseSqlParser::Loop_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCursor_loop_param(KingbaseSqlParser::Cursor_loop_paramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForall_statement(KingbaseSqlParser::Forall_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBounds_clause(KingbaseSqlParser::Bounds_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBetween_bound(KingbaseSqlParser::Between_boundContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLower_bound(KingbaseSqlParser::Lower_boundContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUpper_bound(KingbaseSqlParser::Upper_boundContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNull_statement(KingbaseSqlParser::Null_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRaise_statement(KingbaseSqlParser::Raise_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturn_statement(KingbaseSqlParser::Return_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_call(KingbaseSqlParser::Function_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProcedure_call(KingbaseSqlParser::Procedure_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPipe_row_statement(KingbaseSqlParser::Pipe_row_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSql_statement(KingbaseSqlParser::Sql_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitData_manipulation_language_statements(KingbaseSqlParser::Data_manipulation_language_statementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCursor_manipulation_statements(KingbaseSqlParser::Cursor_manipulation_statementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClose_statement(KingbaseSqlParser::Close_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOpen_statement(KingbaseSqlParser::Open_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFetch_statement(KingbaseSqlParser::Fetch_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDirection(KingbaseSqlParser::DirectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCount(KingbaseSqlParser::CountContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMove_statement(KingbaseSqlParser::Move_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTransaction_control_statements(KingbaseSqlParser::Transaction_control_statementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTransaction_command(KingbaseSqlParser::Transaction_commandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLock_mode(KingbaseSqlParser::Lock_modeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSavepoint_command(KingbaseSqlParser::Savepoint_commandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExplain_statement(KingbaseSqlParser::Explain_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExplain_elements(KingbaseSqlParser::Explain_elementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExplain_element(KingbaseSqlParser::Explain_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelect_statement(KingbaseSqlParser::Select_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWith_clause(KingbaseSqlParser::With_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWith_query(KingbaseSqlParser::With_queryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubquery(KingbaseSqlParser::SubqueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubquery_basic_elements(KingbaseSqlParser::Subquery_basic_elementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubquery_operation_part(KingbaseSqlParser::Subquery_operation_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQuery_block(KingbaseSqlParser::Query_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTop_clause(KingbaseSqlParser::Top_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStart_value(KingbaseSqlParser::Start_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLine_count(KingbaseSqlParser::Line_countContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelected_list(KingbaseSqlParser::Selected_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelected_list_element_asterisk(KingbaseSqlParser::Selected_list_element_asteriskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelected_list_element_column(KingbaseSqlParser::Selected_list_element_columnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFrom_clause(KingbaseSqlParser::From_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_ref_list(KingbaseSqlParser::Table_ref_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_ref(KingbaseSqlParser::Table_refContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_ref_aux(KingbaseSqlParser::Table_ref_auxContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_ref_aux_internal_one(KingbaseSqlParser::Table_ref_aux_internal_oneContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_ref_aux_internal_two(KingbaseSqlParser::Table_ref_aux_internal_twoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_ref_aux_internal_three(KingbaseSqlParser::Table_ref_aux_internal_threeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitJoin_clause(KingbaseSqlParser::Join_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitJoin_on_part(KingbaseSqlParser::Join_on_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitJoin_using_part(KingbaseSqlParser::Join_using_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOuter_join_type(KingbaseSqlParser::Outer_join_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQuery_partition_clause(KingbaseSqlParser::Query_partition_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPivot_clause(KingbaseSqlParser::Pivot_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPivot_element(KingbaseSqlParser::Pivot_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPivot_for_clause(KingbaseSqlParser::Pivot_for_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPivot_in_clause(KingbaseSqlParser::Pivot_in_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPivot_in_clause_element(KingbaseSqlParser::Pivot_in_clause_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPivot_in_clause_elements(KingbaseSqlParser::Pivot_in_clause_elementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnpivot_clause(KingbaseSqlParser::Unpivot_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnpivot_in_clause(KingbaseSqlParser::Unpivot_in_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnpivot_in_elements(KingbaseSqlParser::Unpivot_in_elementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHierarchical_query_clause(KingbaseSqlParser::Hierarchical_query_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStart_part(KingbaseSqlParser::Start_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGroup_by_clause(KingbaseSqlParser::Group_by_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGroup_by_elements(KingbaseSqlParser::Group_by_elementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRollup_cube_expression(KingbaseSqlParser::Rollup_cube_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEmpty_expression(KingbaseSqlParser::Empty_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGrouping_sets_expression(KingbaseSqlParser::Grouping_sets_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHaving_clause(KingbaseSqlParser::Having_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCell_assignment(KingbaseSqlParser::Cell_assignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUntil_part(KingbaseSqlParser::Until_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOrder_by_clause(KingbaseSqlParser::Order_by_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOrder_by_elements(KingbaseSqlParser::Order_by_elementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLimit_clause(KingbaseSqlParser::Limit_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOffset_clause(KingbaseSqlParser::Offset_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFetch_clause(KingbaseSqlParser::Fetch_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFor_update_clause(KingbaseSqlParser::For_update_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFor_update_of_part(KingbaseSqlParser::For_update_of_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFor_update_options(KingbaseSqlParser::For_update_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUpdate_statement(KingbaseSqlParser::Update_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUpdate_set_clause(KingbaseSqlParser::Update_set_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumn_based_update_set_clause(KingbaseSqlParser::Column_based_update_set_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDelete_statement(KingbaseSqlParser::Delete_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsert_statement(KingbaseSqlParser::Insert_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSingle_table_insert(KingbaseSqlParser::Single_table_insertContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMulti_table_insert(KingbaseSqlParser::Multi_table_insertContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMulti_table_element(KingbaseSqlParser::Multi_table_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditional_insert_clause(KingbaseSqlParser::Conditional_insert_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditional_insert_when_part(KingbaseSqlParser::Conditional_insert_when_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditional_insert_else_part(KingbaseSqlParser::Conditional_insert_else_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsert_into_clause(KingbaseSqlParser::Insert_into_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValues_clause(KingbaseSqlParser::Values_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCopy_statement(KingbaseSqlParser::Copy_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMerge_statement(KingbaseSqlParser::Merge_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMerge_update_clause(KingbaseSqlParser::Merge_update_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMerge_element(KingbaseSqlParser::Merge_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMerge_update_delete_part(KingbaseSqlParser::Merge_update_delete_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMerge_insert_clause(KingbaseSqlParser::Merge_insert_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelected_tableview(KingbaseSqlParser::Selected_tableviewContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLock_table_statement(KingbaseSqlParser::Lock_table_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWait_nowait_part(KingbaseSqlParser::Wait_nowait_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTruncate_statement(KingbaseSqlParser::Truncate_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLock_table_element(KingbaseSqlParser::Lock_table_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGeneral_table_ref(KingbaseSqlParser::General_table_refContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatic_returning_clause(KingbaseSqlParser::Static_returning_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitError_logging_into_part(KingbaseSqlParser::Error_logging_into_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitError_logging_reject_part(KingbaseSqlParser::Error_logging_reject_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDml_table_expression_clause(KingbaseSqlParser::Dml_table_expression_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_collection_expression(KingbaseSqlParser::Table_collection_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubquery_restriction_clause(KingbaseSqlParser::Subquery_restriction_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSample_clause(KingbaseSqlParser::Sample_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSeed_part(KingbaseSqlParser::Seed_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCondition(KingbaseSqlParser::ConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressions(KingbaseSqlParser::ExpressionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(KingbaseSqlParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCursor_expression(KingbaseSqlParser::Cursor_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogical_expression(KingbaseSqlParser::Logical_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultiset_expression(KingbaseSqlParser::Multiset_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelational_expression(KingbaseSqlParser::Relational_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompound_expression(KingbaseSqlParser::Compound_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelational_operator(KingbaseSqlParser::Relational_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIn_elements(KingbaseSqlParser::In_elementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBetween_elements(KingbaseSqlParser::Between_elementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConcat_bar_bar(KingbaseSqlParser::Concat_bar_barContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConcat_plus_minus(KingbaseSqlParser::Concat_plus_minusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConcat_mul_div(KingbaseSqlParser::Concat_mul_divContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConcat_model_expr(KingbaseSqlParser::Concat_model_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterval_expression(KingbaseSqlParser::Interval_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModel_expression(KingbaseSqlParser::Model_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModel_expression_element(KingbaseSqlParser::Model_expression_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSingle_column_for_loop(KingbaseSqlParser::Single_column_for_loopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMulti_column_for_loop(KingbaseSqlParser::Multi_column_for_loopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnary_expression(KingbaseSqlParser::Unary_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCase_statement(KingbaseSqlParser::Case_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimple_case_statement(KingbaseSqlParser::Simple_case_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimple_case_when_part(KingbaseSqlParser::Simple_case_when_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSearched_case_statement(KingbaseSqlParser::Searched_case_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSearched_case_when_part(KingbaseSqlParser::Searched_case_when_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCase_else_part(KingbaseSqlParser::Case_else_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAtom(KingbaseSqlParser::AtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQuantified_expression(KingbaseSqlParser::Quantified_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitString_function(KingbaseSqlParser::String_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStandard_function(KingbaseSqlParser::Standard_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumeric_function_wrapper(KingbaseSqlParser::Numeric_function_wrapperContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumeric_function(KingbaseSqlParser::Numeric_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOther_function(KingbaseSqlParser::Other_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOver_clause_keyword(KingbaseSqlParser::Over_clause_keywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWithin_or_over_clause_keyword(KingbaseSqlParser::Within_or_over_clause_keywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStandard_prediction_function_keyword(KingbaseSqlParser::Standard_prediction_function_keywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOver_clause(KingbaseSqlParser::Over_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWindow_clause(KingbaseSqlParser::Window_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWindow_part(KingbaseSqlParser::Window_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWindow_definition(KingbaseSqlParser::Window_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFrame_clause(KingbaseSqlParser::Frame_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFrame_part(KingbaseSqlParser::Frame_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFrame_start_or_end(KingbaseSqlParser::Frame_start_or_endContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCollect_order_by_part(KingbaseSqlParser::Collect_order_by_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWithin_or_over_part(KingbaseSqlParser::Within_or_over_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCost_matrix_clause(KingbaseSqlParser::Cost_matrix_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXml_passing_clause(KingbaseSqlParser::Xml_passing_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXml_attributes_clause(KingbaseSqlParser::Xml_attributes_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXml_namespaces_clause(KingbaseSqlParser::Xml_namespaces_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXml_table_column(KingbaseSqlParser::Xml_table_columnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXml_general_default_part(KingbaseSqlParser::Xml_general_default_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXml_multiuse_expression_element(KingbaseSqlParser::Xml_multiuse_expression_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXmlroot_param_version_part(KingbaseSqlParser::Xmlroot_param_version_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXmlroot_param_standalone_part(KingbaseSqlParser::Xmlroot_param_standalone_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXmlserialize_param_enconding_part(KingbaseSqlParser::Xmlserialize_param_enconding_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXmlserialize_param_version_part(KingbaseSqlParser::Xmlserialize_param_version_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXmlserialize_param_ident_part(KingbaseSqlParser::Xmlserialize_param_ident_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSql_plus_command(KingbaseSqlParser::Sql_plus_commandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGet_arguments_command(KingbaseSqlParser::Get_arguments_commandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSet_arguments_command(KingbaseSqlParser::Set_arguments_commandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartition_extension_clause(KingbaseSqlParser::Partition_extension_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumn_alias(KingbaseSqlParser::Column_aliasContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_alias(KingbaseSqlParser::Table_aliasContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhere_clause(KingbaseSqlParser::Where_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXml_column_name(KingbaseSqlParser::Xml_column_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCost_class_name(KingbaseSqlParser::Cost_class_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSavepoint_name(KingbaseSqlParser::Savepoint_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRollback_segment_name(KingbaseSqlParser::Rollback_segment_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_var_name(KingbaseSqlParser::Table_var_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSchema_name(KingbaseSqlParser::Schema_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRoutine_name(KingbaseSqlParser::Routine_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitImplementation_type_name(KingbaseSqlParser::Implementation_type_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameter_name(KingbaseSqlParser::Parameter_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReference_model_name(KingbaseSqlParser::Reference_model_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMain_model_name(KingbaseSqlParser::Main_model_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitContainer_tableview_name(KingbaseSqlParser::Container_tableview_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAggregate_function_name(KingbaseSqlParser::Aggregate_function_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWith_query_name(KingbaseSqlParser::With_query_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGrantee_name(KingbaseSqlParser::Grantee_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRole_name(KingbaseSqlParser::Role_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstraint_name(KingbaseSqlParser::Constraint_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLabel_name(KingbaseSqlParser::Label_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_name(KingbaseSqlParser::Type_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSequence_name(KingbaseSqlParser::Sequence_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitException_name(KingbaseSqlParser::Exception_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_name(KingbaseSqlParser::Function_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProcedure_name(KingbaseSqlParser::Procedure_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTrigger_name(KingbaseSqlParser::Trigger_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable_name(KingbaseSqlParser::Variable_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex_name(KingbaseSqlParser::Index_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCursor_name(KingbaseSqlParser::Cursor_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRecord_name(KingbaseSqlParser::Record_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCollection_name(KingbaseSqlParser::Collection_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLink_name(KingbaseSqlParser::Link_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumn_name(KingbaseSqlParser::Column_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableview_name(KingbaseSqlParser::Tableview_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_name(KingbaseSqlParser::Table_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChar_set_name(KingbaseSqlParser::Char_set_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSynonym_name(KingbaseSqlParser::Synonym_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSchema_object_name(KingbaseSqlParser::Schema_object_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDir_object_name(KingbaseSqlParser::Dir_object_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUser_object_name(KingbaseSqlParser::User_object_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGrant_object_name(KingbaseSqlParser::Grant_object_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumn_list(KingbaseSqlParser::Column_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParen_column_list(KingbaseSqlParser::Paren_column_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTablename_list(KingbaseSqlParser::Tablename_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeep_clause(KingbaseSqlParser::Keep_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_argument(KingbaseSqlParser::Function_argumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_argument_analytic(KingbaseSqlParser::Function_argument_analyticContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_argument_modeling(KingbaseSqlParser::Function_argument_modelingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRespect_or_ignore_nulls(KingbaseSqlParser::Respect_or_ignore_nullsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArgument(KingbaseSqlParser::ArgumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDatatype(KingbaseSqlParser::DatatypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrecision_part(KingbaseSqlParser::Precision_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNative_datatype_element(KingbaseSqlParser::Native_datatype_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBind_variable(KingbaseSqlParser::Bind_variableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGeneral_element(KingbaseSqlParser::General_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGeneral_element_part(KingbaseSqlParser::General_element_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_element(KingbaseSqlParser::Table_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitObject_privilege(KingbaseSqlParser::Object_privilegeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumn_privilege(KingbaseSqlParser::Column_privilegeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSystem_privilege(KingbaseSqlParser::System_privilegeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstant(KingbaseSqlParser::ConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumeric(KingbaseSqlParser::NumericContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumeric_negative(KingbaseSqlParser::Numeric_negativeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQuoted_string(KingbaseSqlParser::Quoted_stringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifier(KingbaseSqlParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitId_expression(KingbaseSqlParser::Id_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOuter_join_sign(KingbaseSqlParser::Outer_join_signContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRegular_id(KingbaseSqlParser::Regular_idContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNon_reserved_keywords_in_12c(KingbaseSqlParser::Non_reserved_keywords_in_12cContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNon_reserved_keywords_pre12c(KingbaseSqlParser::Non_reserved_keywords_pre12cContext *ctx) override {
    return visitChildren(ctx);
  }


};



// Generated from /home/jona/myGit/myCode_repository/antlr4_cpp/oracle/PlSqlParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "PlSqlParser.h"


namespace oracle {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by PlSqlParser.
 */
class  PlSqlParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by PlSqlParser.
   */
    virtual antlrcpp::Any visitSql_script(PlSqlParser::Sql_scriptContext *context) = 0;

    virtual antlrcpp::Any visitUnit_statement(PlSqlParser::Unit_statementContext *context) = 0;

    virtual antlrcpp::Any visitSelect_expr_statement(PlSqlParser::Select_expr_statementContext *context) = 0;

    virtual antlrcpp::Any visitDrop_function(PlSqlParser::Drop_functionContext *context) = 0;

    virtual antlrcpp::Any visitAlter_function(PlSqlParser::Alter_functionContext *context) = 0;

    virtual antlrcpp::Any visitCreate_function_body(PlSqlParser::Create_function_bodyContext *context) = 0;

    virtual antlrcpp::Any visitParallel_enable_clause(PlSqlParser::Parallel_enable_clauseContext *context) = 0;

    virtual antlrcpp::Any visitPartition_by_clause(PlSqlParser::Partition_by_clauseContext *context) = 0;

    virtual antlrcpp::Any visitResult_cache_clause(PlSqlParser::Result_cache_clauseContext *context) = 0;

    virtual antlrcpp::Any visitRelies_on_part(PlSqlParser::Relies_on_partContext *context) = 0;

    virtual antlrcpp::Any visitStreaming_clause(PlSqlParser::Streaming_clauseContext *context) = 0;

    virtual antlrcpp::Any visitDrop_package(PlSqlParser::Drop_packageContext *context) = 0;

    virtual antlrcpp::Any visitAlter_package(PlSqlParser::Alter_packageContext *context) = 0;

    virtual antlrcpp::Any visitCreate_package(PlSqlParser::Create_packageContext *context) = 0;

    virtual antlrcpp::Any visitCreate_package_body(PlSqlParser::Create_package_bodyContext *context) = 0;

    virtual antlrcpp::Any visitPackage_obj_spec(PlSqlParser::Package_obj_specContext *context) = 0;

    virtual antlrcpp::Any visitProcedure_spec(PlSqlParser::Procedure_specContext *context) = 0;

    virtual antlrcpp::Any visitFunction_spec(PlSqlParser::Function_specContext *context) = 0;

    virtual antlrcpp::Any visitPackage_obj_body(PlSqlParser::Package_obj_bodyContext *context) = 0;

    virtual antlrcpp::Any visitDrop_procedure(PlSqlParser::Drop_procedureContext *context) = 0;

    virtual antlrcpp::Any visitAlter_procedure(PlSqlParser::Alter_procedureContext *context) = 0;

    virtual antlrcpp::Any visitFunction_body(PlSqlParser::Function_bodyContext *context) = 0;

    virtual antlrcpp::Any visitProcedure_body(PlSqlParser::Procedure_bodyContext *context) = 0;

    virtual antlrcpp::Any visitCreate_procedure_body(PlSqlParser::Create_procedure_bodyContext *context) = 0;

    virtual antlrcpp::Any visitDrop_trigger(PlSqlParser::Drop_triggerContext *context) = 0;

    virtual antlrcpp::Any visitAlter_trigger(PlSqlParser::Alter_triggerContext *context) = 0;

    virtual antlrcpp::Any visitCreate_trigger(PlSqlParser::Create_triggerContext *context) = 0;

    virtual antlrcpp::Any visitTrigger_follows_clause(PlSqlParser::Trigger_follows_clauseContext *context) = 0;

    virtual antlrcpp::Any visitTrigger_when_clause(PlSqlParser::Trigger_when_clauseContext *context) = 0;

    virtual antlrcpp::Any visitSimple_dml_trigger(PlSqlParser::Simple_dml_triggerContext *context) = 0;

    virtual antlrcpp::Any visitFor_each_row(PlSqlParser::For_each_rowContext *context) = 0;

    virtual antlrcpp::Any visitCompound_dml_trigger(PlSqlParser::Compound_dml_triggerContext *context) = 0;

    virtual antlrcpp::Any visitNon_dml_trigger(PlSqlParser::Non_dml_triggerContext *context) = 0;

    virtual antlrcpp::Any visitTrigger_body(PlSqlParser::Trigger_bodyContext *context) = 0;

    virtual antlrcpp::Any visitRoutine_clause(PlSqlParser::Routine_clauseContext *context) = 0;

    virtual antlrcpp::Any visitCompound_trigger_block(PlSqlParser::Compound_trigger_blockContext *context) = 0;

    virtual antlrcpp::Any visitTiming_point_section(PlSqlParser::Timing_point_sectionContext *context) = 0;

    virtual antlrcpp::Any visitNon_dml_event(PlSqlParser::Non_dml_eventContext *context) = 0;

    virtual antlrcpp::Any visitDml_event_clause(PlSqlParser::Dml_event_clauseContext *context) = 0;

    virtual antlrcpp::Any visitDml_event_element(PlSqlParser::Dml_event_elementContext *context) = 0;

    virtual antlrcpp::Any visitDml_event_nested_clause(PlSqlParser::Dml_event_nested_clauseContext *context) = 0;

    virtual antlrcpp::Any visitReferencing_clause(PlSqlParser::Referencing_clauseContext *context) = 0;

    virtual antlrcpp::Any visitReferencing_element(PlSqlParser::Referencing_elementContext *context) = 0;

    virtual antlrcpp::Any visitDrop_type(PlSqlParser::Drop_typeContext *context) = 0;

    virtual antlrcpp::Any visitAlter_type(PlSqlParser::Alter_typeContext *context) = 0;

    virtual antlrcpp::Any visitCompile_type_clause(PlSqlParser::Compile_type_clauseContext *context) = 0;

    virtual antlrcpp::Any visitReplace_type_clause(PlSqlParser::Replace_type_clauseContext *context) = 0;

    virtual antlrcpp::Any visitAlter_method_spec(PlSqlParser::Alter_method_specContext *context) = 0;

    virtual antlrcpp::Any visitAlter_method_element(PlSqlParser::Alter_method_elementContext *context) = 0;

    virtual antlrcpp::Any visitAlter_attribute_definition(PlSqlParser::Alter_attribute_definitionContext *context) = 0;

    virtual antlrcpp::Any visitAttribute_definition(PlSqlParser::Attribute_definitionContext *context) = 0;

    virtual antlrcpp::Any visitAlter_collection_clauses(PlSqlParser::Alter_collection_clausesContext *context) = 0;

    virtual antlrcpp::Any visitDependent_handling_clause(PlSqlParser::Dependent_handling_clauseContext *context) = 0;

    virtual antlrcpp::Any visitDependent_exceptions_part(PlSqlParser::Dependent_exceptions_partContext *context) = 0;

    virtual antlrcpp::Any visitCreate_type(PlSqlParser::Create_typeContext *context) = 0;

    virtual antlrcpp::Any visitType_definition(PlSqlParser::Type_definitionContext *context) = 0;

    virtual antlrcpp::Any visitObject_type_def(PlSqlParser::Object_type_defContext *context) = 0;

    virtual antlrcpp::Any visitObject_as_part(PlSqlParser::Object_as_partContext *context) = 0;

    virtual antlrcpp::Any visitObject_under_part(PlSqlParser::Object_under_partContext *context) = 0;

    virtual antlrcpp::Any visitNested_table_type_def(PlSqlParser::Nested_table_type_defContext *context) = 0;

    virtual antlrcpp::Any visitSqlj_object_type(PlSqlParser::Sqlj_object_typeContext *context) = 0;

    virtual antlrcpp::Any visitType_body(PlSqlParser::Type_bodyContext *context) = 0;

    virtual antlrcpp::Any visitType_body_elements(PlSqlParser::Type_body_elementsContext *context) = 0;

    virtual antlrcpp::Any visitMap_order_func_declaration(PlSqlParser::Map_order_func_declarationContext *context) = 0;

    virtual antlrcpp::Any visitSubprog_decl_in_type(PlSqlParser::Subprog_decl_in_typeContext *context) = 0;

    virtual antlrcpp::Any visitProc_decl_in_type(PlSqlParser::Proc_decl_in_typeContext *context) = 0;

    virtual antlrcpp::Any visitFunc_decl_in_type(PlSqlParser::Func_decl_in_typeContext *context) = 0;

    virtual antlrcpp::Any visitConstructor_declaration(PlSqlParser::Constructor_declarationContext *context) = 0;

    virtual antlrcpp::Any visitModifier_clause(PlSqlParser::Modifier_clauseContext *context) = 0;

    virtual antlrcpp::Any visitObject_member_spec(PlSqlParser::Object_member_specContext *context) = 0;

    virtual antlrcpp::Any visitSqlj_object_type_attr(PlSqlParser::Sqlj_object_type_attrContext *context) = 0;

    virtual antlrcpp::Any visitElement_spec(PlSqlParser::Element_specContext *context) = 0;

    virtual antlrcpp::Any visitElement_spec_options(PlSqlParser::Element_spec_optionsContext *context) = 0;

    virtual antlrcpp::Any visitSubprogram_spec(PlSqlParser::Subprogram_specContext *context) = 0;

    virtual antlrcpp::Any visitOverriding_subprogram_spec(PlSqlParser::Overriding_subprogram_specContext *context) = 0;

    virtual antlrcpp::Any visitOverriding_function_spec(PlSqlParser::Overriding_function_specContext *context) = 0;

    virtual antlrcpp::Any visitType_procedure_spec(PlSqlParser::Type_procedure_specContext *context) = 0;

    virtual antlrcpp::Any visitType_function_spec(PlSqlParser::Type_function_specContext *context) = 0;

    virtual antlrcpp::Any visitConstructor_spec(PlSqlParser::Constructor_specContext *context) = 0;

    virtual antlrcpp::Any visitMap_order_function_spec(PlSqlParser::Map_order_function_specContext *context) = 0;

    virtual antlrcpp::Any visitPragma_clause(PlSqlParser::Pragma_clauseContext *context) = 0;

    virtual antlrcpp::Any visitPragma_elements(PlSqlParser::Pragma_elementsContext *context) = 0;

    virtual antlrcpp::Any visitType_elements_parameter(PlSqlParser::Type_elements_parameterContext *context) = 0;

    virtual antlrcpp::Any visitDrop_sequence(PlSqlParser::Drop_sequenceContext *context) = 0;

    virtual antlrcpp::Any visitAlter_sequence(PlSqlParser::Alter_sequenceContext *context) = 0;

    virtual antlrcpp::Any visitAlter_session(PlSqlParser::Alter_sessionContext *context) = 0;

    virtual antlrcpp::Any visitAlter_session_set_clause(PlSqlParser::Alter_session_set_clauseContext *context) = 0;

    virtual antlrcpp::Any visitCreate_sequence(PlSqlParser::Create_sequenceContext *context) = 0;

    virtual antlrcpp::Any visitSequence_spec(PlSqlParser::Sequence_specContext *context) = 0;

    virtual antlrcpp::Any visitSequence_start_clause(PlSqlParser::Sequence_start_clauseContext *context) = 0;

    virtual antlrcpp::Any visitCreate_index(PlSqlParser::Create_indexContext *context) = 0;

    virtual antlrcpp::Any visitCluster_index_clause(PlSqlParser::Cluster_index_clauseContext *context) = 0;

    virtual antlrcpp::Any visitCluster_name(PlSqlParser::Cluster_nameContext *context) = 0;

    virtual antlrcpp::Any visitTable_index_clause(PlSqlParser::Table_index_clauseContext *context) = 0;

    virtual antlrcpp::Any visitBitmap_join_index_clause(PlSqlParser::Bitmap_join_index_clauseContext *context) = 0;

    virtual antlrcpp::Any visitIndex_expr(PlSqlParser::Index_exprContext *context) = 0;

    virtual antlrcpp::Any visitIndex_properties(PlSqlParser::Index_propertiesContext *context) = 0;

    virtual antlrcpp::Any visitDomain_index_clause(PlSqlParser::Domain_index_clauseContext *context) = 0;

    virtual antlrcpp::Any visitLocal_domain_index_clause(PlSqlParser::Local_domain_index_clauseContext *context) = 0;

    virtual antlrcpp::Any visitXmlindex_clause(PlSqlParser::Xmlindex_clauseContext *context) = 0;

    virtual antlrcpp::Any visitLocal_xmlindex_clause(PlSqlParser::Local_xmlindex_clauseContext *context) = 0;

    virtual antlrcpp::Any visitGlobal_partitioned_index(PlSqlParser::Global_partitioned_indexContext *context) = 0;

    virtual antlrcpp::Any visitIndex_partitioning_clause(PlSqlParser::Index_partitioning_clauseContext *context) = 0;

    virtual antlrcpp::Any visitLocal_partitioned_index(PlSqlParser::Local_partitioned_indexContext *context) = 0;

    virtual antlrcpp::Any visitOn_range_partitioned_table(PlSqlParser::On_range_partitioned_tableContext *context) = 0;

    virtual antlrcpp::Any visitOn_list_partitioned_table(PlSqlParser::On_list_partitioned_tableContext *context) = 0;

    virtual antlrcpp::Any visitOn_hash_partitioned_table(PlSqlParser::On_hash_partitioned_tableContext *context) = 0;

    virtual antlrcpp::Any visitOn_comp_partitioned_table(PlSqlParser::On_comp_partitioned_tableContext *context) = 0;

    virtual antlrcpp::Any visitIndex_subpartition_clause(PlSqlParser::Index_subpartition_clauseContext *context) = 0;

    virtual antlrcpp::Any visitOdci_parameters(PlSqlParser::Odci_parametersContext *context) = 0;

    virtual antlrcpp::Any visitIndextype(PlSqlParser::IndextypeContext *context) = 0;

    virtual antlrcpp::Any visitAlter_index(PlSqlParser::Alter_indexContext *context) = 0;

    virtual antlrcpp::Any visitAlter_index_ops_set1(PlSqlParser::Alter_index_ops_set1Context *context) = 0;

    virtual antlrcpp::Any visitAlter_index_ops_set2(PlSqlParser::Alter_index_ops_set2Context *context) = 0;

    virtual antlrcpp::Any visitVisible_or_invisible(PlSqlParser::Visible_or_invisibleContext *context) = 0;

    virtual antlrcpp::Any visitMonitoring_nomonitoring(PlSqlParser::Monitoring_nomonitoringContext *context) = 0;

    virtual antlrcpp::Any visitRebuild_clause(PlSqlParser::Rebuild_clauseContext *context) = 0;

    virtual antlrcpp::Any visitAlter_index_partitioning(PlSqlParser::Alter_index_partitioningContext *context) = 0;

    virtual antlrcpp::Any visitModify_index_default_attrs(PlSqlParser::Modify_index_default_attrsContext *context) = 0;

    virtual antlrcpp::Any visitAdd_hash_index_partition(PlSqlParser::Add_hash_index_partitionContext *context) = 0;

    virtual antlrcpp::Any visitCoalesce_index_partition(PlSqlParser::Coalesce_index_partitionContext *context) = 0;

    virtual antlrcpp::Any visitModify_index_partition(PlSqlParser::Modify_index_partitionContext *context) = 0;

    virtual antlrcpp::Any visitModify_index_partitions_ops(PlSqlParser::Modify_index_partitions_opsContext *context) = 0;

    virtual antlrcpp::Any visitRename_index_partition(PlSqlParser::Rename_index_partitionContext *context) = 0;

    virtual antlrcpp::Any visitDrop_index_partition(PlSqlParser::Drop_index_partitionContext *context) = 0;

    virtual antlrcpp::Any visitSplit_index_partition(PlSqlParser::Split_index_partitionContext *context) = 0;

    virtual antlrcpp::Any visitIndex_partition_description(PlSqlParser::Index_partition_descriptionContext *context) = 0;

    virtual antlrcpp::Any visitModify_index_subpartition(PlSqlParser::Modify_index_subpartitionContext *context) = 0;

    virtual antlrcpp::Any visitPartition_name_old(PlSqlParser::Partition_name_oldContext *context) = 0;

    virtual antlrcpp::Any visitNew_partition_name(PlSqlParser::New_partition_nameContext *context) = 0;

    virtual antlrcpp::Any visitNew_index_name(PlSqlParser::New_index_nameContext *context) = 0;

    virtual antlrcpp::Any visitCreate_user(PlSqlParser::Create_userContext *context) = 0;

    virtual antlrcpp::Any visitAlter_user(PlSqlParser::Alter_userContext *context) = 0;

    virtual antlrcpp::Any visitAlter_identified_by(PlSqlParser::Alter_identified_byContext *context) = 0;

    virtual antlrcpp::Any visitIdentified_by(PlSqlParser::Identified_byContext *context) = 0;

    virtual antlrcpp::Any visitIdentified_other_clause(PlSqlParser::Identified_other_clauseContext *context) = 0;

    virtual antlrcpp::Any visitUser_tablespace_clause(PlSqlParser::User_tablespace_clauseContext *context) = 0;

    virtual antlrcpp::Any visitQuota_clause(PlSqlParser::Quota_clauseContext *context) = 0;

    virtual antlrcpp::Any visitProfile_clause(PlSqlParser::Profile_clauseContext *context) = 0;

    virtual antlrcpp::Any visitRole_clause(PlSqlParser::Role_clauseContext *context) = 0;

    virtual antlrcpp::Any visitUser_default_role_clause(PlSqlParser::User_default_role_clauseContext *context) = 0;

    virtual antlrcpp::Any visitPassword_expire_clause(PlSqlParser::Password_expire_clauseContext *context) = 0;

    virtual antlrcpp::Any visitUser_lock_clause(PlSqlParser::User_lock_clauseContext *context) = 0;

    virtual antlrcpp::Any visitUser_editions_clause(PlSqlParser::User_editions_clauseContext *context) = 0;

    virtual antlrcpp::Any visitAlter_user_editions_clause(PlSqlParser::Alter_user_editions_clauseContext *context) = 0;

    virtual antlrcpp::Any visitProxy_clause(PlSqlParser::Proxy_clauseContext *context) = 0;

    virtual antlrcpp::Any visitContainer_names(PlSqlParser::Container_namesContext *context) = 0;

    virtual antlrcpp::Any visitSet_container_data(PlSqlParser::Set_container_dataContext *context) = 0;

    virtual antlrcpp::Any visitAdd_rem_container_data(PlSqlParser::Add_rem_container_dataContext *context) = 0;

    virtual antlrcpp::Any visitContainer_data_clause(PlSqlParser::Container_data_clauseContext *context) = 0;

    virtual antlrcpp::Any visitAnalyze(PlSqlParser::AnalyzeContext *context) = 0;

    virtual antlrcpp::Any visitPartition_extention_clause(PlSqlParser::Partition_extention_clauseContext *context) = 0;

    virtual antlrcpp::Any visitValidation_clauses(PlSqlParser::Validation_clausesContext *context) = 0;

    virtual antlrcpp::Any visitOnline_or_offline(PlSqlParser::Online_or_offlineContext *context) = 0;

    virtual antlrcpp::Any visitInto_clause1(PlSqlParser::Into_clause1Context *context) = 0;

    virtual antlrcpp::Any visitPartition_key_value(PlSqlParser::Partition_key_valueContext *context) = 0;

    virtual antlrcpp::Any visitSubpartition_key_value(PlSqlParser::Subpartition_key_valueContext *context) = 0;

    virtual antlrcpp::Any visitAssociate_statistics(PlSqlParser::Associate_statisticsContext *context) = 0;

    virtual antlrcpp::Any visitColumn_association(PlSqlParser::Column_associationContext *context) = 0;

    virtual antlrcpp::Any visitFunction_association(PlSqlParser::Function_associationContext *context) = 0;

    virtual antlrcpp::Any visitIndextype_name(PlSqlParser::Indextype_nameContext *context) = 0;

    virtual antlrcpp::Any visitUsing_statistics_type(PlSqlParser::Using_statistics_typeContext *context) = 0;

    virtual antlrcpp::Any visitStatistics_type_name(PlSqlParser::Statistics_type_nameContext *context) = 0;

    virtual antlrcpp::Any visitDefault_cost_clause(PlSqlParser::Default_cost_clauseContext *context) = 0;

    virtual antlrcpp::Any visitCpu_cost(PlSqlParser::Cpu_costContext *context) = 0;

    virtual antlrcpp::Any visitIo_cost(PlSqlParser::Io_costContext *context) = 0;

    virtual antlrcpp::Any visitNetwork_cost(PlSqlParser::Network_costContext *context) = 0;

    virtual antlrcpp::Any visitDefault_selectivity_clause(PlSqlParser::Default_selectivity_clauseContext *context) = 0;

    virtual antlrcpp::Any visitDefault_selectivity(PlSqlParser::Default_selectivityContext *context) = 0;

    virtual antlrcpp::Any visitStorage_table_clause(PlSqlParser::Storage_table_clauseContext *context) = 0;

    virtual antlrcpp::Any visitUnified_auditing(PlSqlParser::Unified_auditingContext *context) = 0;

    virtual antlrcpp::Any visitPolicy_name(PlSqlParser::Policy_nameContext *context) = 0;

    virtual antlrcpp::Any visitAudit_traditional(PlSqlParser::Audit_traditionalContext *context) = 0;

    virtual antlrcpp::Any visitAudit_direct_path(PlSqlParser::Audit_direct_pathContext *context) = 0;

    virtual antlrcpp::Any visitAudit_container_clause(PlSqlParser::Audit_container_clauseContext *context) = 0;

    virtual antlrcpp::Any visitAudit_operation_clause(PlSqlParser::Audit_operation_clauseContext *context) = 0;

    virtual antlrcpp::Any visitAuditing_by_clause(PlSqlParser::Auditing_by_clauseContext *context) = 0;

    virtual antlrcpp::Any visitAudit_user(PlSqlParser::Audit_userContext *context) = 0;

    virtual antlrcpp::Any visitAudit_schema_object_clause(PlSqlParser::Audit_schema_object_clauseContext *context) = 0;

    virtual antlrcpp::Any visitSql_operation(PlSqlParser::Sql_operationContext *context) = 0;

    virtual antlrcpp::Any visitAuditing_on_clause(PlSqlParser::Auditing_on_clauseContext *context) = 0;

    virtual antlrcpp::Any visitModel_name(PlSqlParser::Model_nameContext *context) = 0;

    virtual antlrcpp::Any visitObject_name(PlSqlParser::Object_nameContext *context) = 0;

    virtual antlrcpp::Any visitProfile_name(PlSqlParser::Profile_nameContext *context) = 0;

    virtual antlrcpp::Any visitSql_statement_shortcut(PlSqlParser::Sql_statement_shortcutContext *context) = 0;

    virtual antlrcpp::Any visitDrop_index(PlSqlParser::Drop_indexContext *context) = 0;

    virtual antlrcpp::Any visitGrant_statement(PlSqlParser::Grant_statementContext *context) = 0;

    virtual antlrcpp::Any visitContainer_clause(PlSqlParser::Container_clauseContext *context) = 0;

    virtual antlrcpp::Any visitCreate_directory(PlSqlParser::Create_directoryContext *context) = 0;

    virtual antlrcpp::Any visitDirectory_name(PlSqlParser::Directory_nameContext *context) = 0;

    virtual antlrcpp::Any visitDirectory_path(PlSqlParser::Directory_pathContext *context) = 0;

    virtual antlrcpp::Any visitAlter_library(PlSqlParser::Alter_libraryContext *context) = 0;

    virtual antlrcpp::Any visitLibrary_editionable(PlSqlParser::Library_editionableContext *context) = 0;

    virtual antlrcpp::Any visitLibrary_debug(PlSqlParser::Library_debugContext *context) = 0;

    virtual antlrcpp::Any visitCompiler_parameters_clause(PlSqlParser::Compiler_parameters_clauseContext *context) = 0;

    virtual antlrcpp::Any visitParameter_value(PlSqlParser::Parameter_valueContext *context) = 0;

    virtual antlrcpp::Any visitLibrary_name(PlSqlParser::Library_nameContext *context) = 0;

    virtual antlrcpp::Any visitAlter_view(PlSqlParser::Alter_viewContext *context) = 0;

    virtual antlrcpp::Any visitAlter_view_editionable(PlSqlParser::Alter_view_editionableContext *context) = 0;

    virtual antlrcpp::Any visitCreate_view(PlSqlParser::Create_viewContext *context) = 0;

    virtual antlrcpp::Any visitView_options(PlSqlParser::View_optionsContext *context) = 0;

    virtual antlrcpp::Any visitView_alias_constraint(PlSqlParser::View_alias_constraintContext *context) = 0;

    virtual antlrcpp::Any visitObject_view_clause(PlSqlParser::Object_view_clauseContext *context) = 0;

    virtual antlrcpp::Any visitInline_constraint(PlSqlParser::Inline_constraintContext *context) = 0;

    virtual antlrcpp::Any visitInline_ref_constraint(PlSqlParser::Inline_ref_constraintContext *context) = 0;

    virtual antlrcpp::Any visitOut_of_line_ref_constraint(PlSqlParser::Out_of_line_ref_constraintContext *context) = 0;

    virtual antlrcpp::Any visitOut_of_line_constraint(PlSqlParser::Out_of_line_constraintContext *context) = 0;

    virtual antlrcpp::Any visitConstraint_state(PlSqlParser::Constraint_stateContext *context) = 0;

    virtual antlrcpp::Any visitAlter_tablespace(PlSqlParser::Alter_tablespaceContext *context) = 0;

    virtual antlrcpp::Any visitDatafile_tempfile_clauses(PlSqlParser::Datafile_tempfile_clausesContext *context) = 0;

    virtual antlrcpp::Any visitTablespace_logging_clauses(PlSqlParser::Tablespace_logging_clausesContext *context) = 0;

    virtual antlrcpp::Any visitTablespace_group_clause(PlSqlParser::Tablespace_group_clauseContext *context) = 0;

    virtual antlrcpp::Any visitTablespace_group_name(PlSqlParser::Tablespace_group_nameContext *context) = 0;

    virtual antlrcpp::Any visitTablespace_state_clauses(PlSqlParser::Tablespace_state_clausesContext *context) = 0;

    virtual antlrcpp::Any visitFlashback_mode_clause(PlSqlParser::Flashback_mode_clauseContext *context) = 0;

    virtual antlrcpp::Any visitNew_tablespace_name(PlSqlParser::New_tablespace_nameContext *context) = 0;

    virtual antlrcpp::Any visitCreate_tablespace(PlSqlParser::Create_tablespaceContext *context) = 0;

    virtual antlrcpp::Any visitPermanent_tablespace_clause(PlSqlParser::Permanent_tablespace_clauseContext *context) = 0;

    virtual antlrcpp::Any visitTablespace_encryption_spec(PlSqlParser::Tablespace_encryption_specContext *context) = 0;

    virtual antlrcpp::Any visitLogging_clause(PlSqlParser::Logging_clauseContext *context) = 0;

    virtual antlrcpp::Any visitExtent_management_clause(PlSqlParser::Extent_management_clauseContext *context) = 0;

    virtual antlrcpp::Any visitSegment_management_clause(PlSqlParser::Segment_management_clauseContext *context) = 0;

    virtual antlrcpp::Any visitTemporary_tablespace_clause(PlSqlParser::Temporary_tablespace_clauseContext *context) = 0;

    virtual antlrcpp::Any visitUndo_tablespace_clause(PlSqlParser::Undo_tablespace_clauseContext *context) = 0;

    virtual antlrcpp::Any visitTablespace_retention_clause(PlSqlParser::Tablespace_retention_clauseContext *context) = 0;

    virtual antlrcpp::Any visitDatafile_specification(PlSqlParser::Datafile_specificationContext *context) = 0;

    virtual antlrcpp::Any visitTempfile_specification(PlSqlParser::Tempfile_specificationContext *context) = 0;

    virtual antlrcpp::Any visitDatafile_tempfile_spec(PlSqlParser::Datafile_tempfile_specContext *context) = 0;

    virtual antlrcpp::Any visitRedo_log_file_spec(PlSqlParser::Redo_log_file_specContext *context) = 0;

    virtual antlrcpp::Any visitAutoextend_clause(PlSqlParser::Autoextend_clauseContext *context) = 0;

    virtual antlrcpp::Any visitMaxsize_clause(PlSqlParser::Maxsize_clauseContext *context) = 0;

    virtual antlrcpp::Any visitBuild_clause(PlSqlParser::Build_clauseContext *context) = 0;

    virtual antlrcpp::Any visitParallel_clause(PlSqlParser::Parallel_clauseContext *context) = 0;

    virtual antlrcpp::Any visitAlter_materialized_view(PlSqlParser::Alter_materialized_viewContext *context) = 0;

    virtual antlrcpp::Any visitAlter_mv_option1(PlSqlParser::Alter_mv_option1Context *context) = 0;

    virtual antlrcpp::Any visitAlter_mv_refresh(PlSqlParser::Alter_mv_refreshContext *context) = 0;

    virtual antlrcpp::Any visitRollback_segment(PlSqlParser::Rollback_segmentContext *context) = 0;

    virtual antlrcpp::Any visitModify_mv_column_clause(PlSqlParser::Modify_mv_column_clauseContext *context) = 0;

    virtual antlrcpp::Any visitAlter_materialized_view_log(PlSqlParser::Alter_materialized_view_logContext *context) = 0;

    virtual antlrcpp::Any visitAdd_mv_log_column_clause(PlSqlParser::Add_mv_log_column_clauseContext *context) = 0;

    virtual antlrcpp::Any visitMove_mv_log_clause(PlSqlParser::Move_mv_log_clauseContext *context) = 0;

    virtual antlrcpp::Any visitMv_log_augmentation(PlSqlParser::Mv_log_augmentationContext *context) = 0;

    virtual antlrcpp::Any visitDatetime_expr(PlSqlParser::Datetime_exprContext *context) = 0;

    virtual antlrcpp::Any visitInterval_expr(PlSqlParser::Interval_exprContext *context) = 0;

    virtual antlrcpp::Any visitSynchronous_or_asynchronous(PlSqlParser::Synchronous_or_asynchronousContext *context) = 0;

    virtual antlrcpp::Any visitIncluding_or_excluding(PlSqlParser::Including_or_excludingContext *context) = 0;

    virtual antlrcpp::Any visitCreate_materialized_view_log(PlSqlParser::Create_materialized_view_logContext *context) = 0;

    virtual antlrcpp::Any visitNew_values_clause(PlSqlParser::New_values_clauseContext *context) = 0;

    virtual antlrcpp::Any visitMv_log_purge_clause(PlSqlParser::Mv_log_purge_clauseContext *context) = 0;

    virtual antlrcpp::Any visitCreate_materialized_view(PlSqlParser::Create_materialized_viewContext *context) = 0;

    virtual antlrcpp::Any visitCreate_mv_refresh(PlSqlParser::Create_mv_refreshContext *context) = 0;

    virtual antlrcpp::Any visitCreate_context(PlSqlParser::Create_contextContext *context) = 0;

    virtual antlrcpp::Any visitOracle_namespace(PlSqlParser::Oracle_namespaceContext *context) = 0;

    virtual antlrcpp::Any visitCreate_cluster(PlSqlParser::Create_clusterContext *context) = 0;

    virtual antlrcpp::Any visitCreate_table(PlSqlParser::Create_tableContext *context) = 0;

    virtual antlrcpp::Any visitXmltype_table(PlSqlParser::Xmltype_tableContext *context) = 0;

    virtual antlrcpp::Any visitXmltype_virtual_columns(PlSqlParser::Xmltype_virtual_columnsContext *context) = 0;

    virtual antlrcpp::Any visitXmltype_column_properties(PlSqlParser::Xmltype_column_propertiesContext *context) = 0;

    virtual antlrcpp::Any visitXmltype_storage(PlSqlParser::Xmltype_storageContext *context) = 0;

    virtual antlrcpp::Any visitXmlschema_spec(PlSqlParser::Xmlschema_specContext *context) = 0;

    virtual antlrcpp::Any visitObject_table(PlSqlParser::Object_tableContext *context) = 0;

    virtual antlrcpp::Any visitOid_index_clause(PlSqlParser::Oid_index_clauseContext *context) = 0;

    virtual antlrcpp::Any visitOid_clause(PlSqlParser::Oid_clauseContext *context) = 0;

    virtual antlrcpp::Any visitObject_properties(PlSqlParser::Object_propertiesContext *context) = 0;

    virtual antlrcpp::Any visitObject_table_substitution(PlSqlParser::Object_table_substitutionContext *context) = 0;

    virtual antlrcpp::Any visitRelational_table(PlSqlParser::Relational_tableContext *context) = 0;

    virtual antlrcpp::Any visitRelational_properties(PlSqlParser::Relational_propertiesContext *context) = 0;

    virtual antlrcpp::Any visitTable_partitioning_clauses(PlSqlParser::Table_partitioning_clausesContext *context) = 0;

    virtual antlrcpp::Any visitRange_partitions(PlSqlParser::Range_partitionsContext *context) = 0;

    virtual antlrcpp::Any visitList_partitions(PlSqlParser::List_partitionsContext *context) = 0;

    virtual antlrcpp::Any visitHash_partitions(PlSqlParser::Hash_partitionsContext *context) = 0;

    virtual antlrcpp::Any visitIndividual_hash_partitions(PlSqlParser::Individual_hash_partitionsContext *context) = 0;

    virtual antlrcpp::Any visitHash_partitions_by_quantity(PlSqlParser::Hash_partitions_by_quantityContext *context) = 0;

    virtual antlrcpp::Any visitHash_partition_quantity(PlSqlParser::Hash_partition_quantityContext *context) = 0;

    virtual antlrcpp::Any visitComposite_range_partitions(PlSqlParser::Composite_range_partitionsContext *context) = 0;

    virtual antlrcpp::Any visitComposite_list_partitions(PlSqlParser::Composite_list_partitionsContext *context) = 0;

    virtual antlrcpp::Any visitComposite_hash_partitions(PlSqlParser::Composite_hash_partitionsContext *context) = 0;

    virtual antlrcpp::Any visitReference_partitioning(PlSqlParser::Reference_partitioningContext *context) = 0;

    virtual antlrcpp::Any visitReference_partition_desc(PlSqlParser::Reference_partition_descContext *context) = 0;

    virtual antlrcpp::Any visitSystem_partitioning(PlSqlParser::System_partitioningContext *context) = 0;

    virtual antlrcpp::Any visitRange_partition_desc(PlSqlParser::Range_partition_descContext *context) = 0;

    virtual antlrcpp::Any visitList_partition_desc(PlSqlParser::List_partition_descContext *context) = 0;

    virtual antlrcpp::Any visitSubpartition_template(PlSqlParser::Subpartition_templateContext *context) = 0;

    virtual antlrcpp::Any visitHash_subpartition_quantity(PlSqlParser::Hash_subpartition_quantityContext *context) = 0;

    virtual antlrcpp::Any visitSubpartition_by_range(PlSqlParser::Subpartition_by_rangeContext *context) = 0;

    virtual antlrcpp::Any visitSubpartition_by_list(PlSqlParser::Subpartition_by_listContext *context) = 0;

    virtual antlrcpp::Any visitSubpartition_by_hash(PlSqlParser::Subpartition_by_hashContext *context) = 0;

    virtual antlrcpp::Any visitSubpartition_name(PlSqlParser::Subpartition_nameContext *context) = 0;

    virtual antlrcpp::Any visitRange_subpartition_desc(PlSqlParser::Range_subpartition_descContext *context) = 0;

    virtual antlrcpp::Any visitList_subpartition_desc(PlSqlParser::List_subpartition_descContext *context) = 0;

    virtual antlrcpp::Any visitIndividual_hash_subparts(PlSqlParser::Individual_hash_subpartsContext *context) = 0;

    virtual antlrcpp::Any visitHash_subparts_by_quantity(PlSqlParser::Hash_subparts_by_quantityContext *context) = 0;

    virtual antlrcpp::Any visitRange_values_clause(PlSqlParser::Range_values_clauseContext *context) = 0;

    virtual antlrcpp::Any visitList_values_clause(PlSqlParser::List_values_clauseContext *context) = 0;

    virtual antlrcpp::Any visitTable_partition_description(PlSqlParser::Table_partition_descriptionContext *context) = 0;

    virtual antlrcpp::Any visitPartitioning_storage_clause(PlSqlParser::Partitioning_storage_clauseContext *context) = 0;

    virtual antlrcpp::Any visitLob_partitioning_storage(PlSqlParser::Lob_partitioning_storageContext *context) = 0;

    virtual antlrcpp::Any visitDatatype_null_enable(PlSqlParser::Datatype_null_enableContext *context) = 0;

    virtual antlrcpp::Any visitSize_clause(PlSqlParser::Size_clauseContext *context) = 0;

    virtual antlrcpp::Any visitTable_compression(PlSqlParser::Table_compressionContext *context) = 0;

    virtual antlrcpp::Any visitPhysical_attributes_clause(PlSqlParser::Physical_attributes_clauseContext *context) = 0;

    virtual antlrcpp::Any visitStorage_clause(PlSqlParser::Storage_clauseContext *context) = 0;

    virtual antlrcpp::Any visitDeferred_segment_creation(PlSqlParser::Deferred_segment_creationContext *context) = 0;

    virtual antlrcpp::Any visitSegment_attributes_clause(PlSqlParser::Segment_attributes_clauseContext *context) = 0;

    virtual antlrcpp::Any visitPhysical_properties(PlSqlParser::Physical_propertiesContext *context) = 0;

    virtual antlrcpp::Any visitRow_movement_clause(PlSqlParser::Row_movement_clauseContext *context) = 0;

    virtual antlrcpp::Any visitFlashback_archive_clause(PlSqlParser::Flashback_archive_clauseContext *context) = 0;

    virtual antlrcpp::Any visitLog_grp(PlSqlParser::Log_grpContext *context) = 0;

    virtual antlrcpp::Any visitSupplemental_table_logging(PlSqlParser::Supplemental_table_loggingContext *context) = 0;

    virtual antlrcpp::Any visitSupplemental_log_grp_clause(PlSqlParser::Supplemental_log_grp_clauseContext *context) = 0;

    virtual antlrcpp::Any visitSupplemental_id_key_clause(PlSqlParser::Supplemental_id_key_clauseContext *context) = 0;

    virtual antlrcpp::Any visitAllocate_extent_clause(PlSqlParser::Allocate_extent_clauseContext *context) = 0;

    virtual antlrcpp::Any visitDeallocate_unused_clause(PlSqlParser::Deallocate_unused_clauseContext *context) = 0;

    virtual antlrcpp::Any visitShrink_clause(PlSqlParser::Shrink_clauseContext *context) = 0;

    virtual antlrcpp::Any visitRecords_per_block_clause(PlSqlParser::Records_per_block_clauseContext *context) = 0;

    virtual antlrcpp::Any visitUpgrade_table_clause(PlSqlParser::Upgrade_table_clauseContext *context) = 0;

    virtual antlrcpp::Any visitDrop_table(PlSqlParser::Drop_tableContext *context) = 0;

    virtual antlrcpp::Any visitComment_on_column(PlSqlParser::Comment_on_columnContext *context) = 0;

    virtual antlrcpp::Any visitEnable_or_disable(PlSqlParser::Enable_or_disableContext *context) = 0;

    virtual antlrcpp::Any visitAllow_or_disallow(PlSqlParser::Allow_or_disallowContext *context) = 0;

    virtual antlrcpp::Any visitCreate_synonym(PlSqlParser::Create_synonymContext *context) = 0;

    virtual antlrcpp::Any visitComment_on_table(PlSqlParser::Comment_on_tableContext *context) = 0;

    virtual antlrcpp::Any visitAlter_cluster(PlSqlParser::Alter_clusterContext *context) = 0;

    virtual antlrcpp::Any visitCache_or_nocache(PlSqlParser::Cache_or_nocacheContext *context) = 0;

    virtual antlrcpp::Any visitDatabase_name(PlSqlParser::Database_nameContext *context) = 0;

    virtual antlrcpp::Any visitAlter_database(PlSqlParser::Alter_databaseContext *context) = 0;

    virtual antlrcpp::Any visitStartup_clauses(PlSqlParser::Startup_clausesContext *context) = 0;

    virtual antlrcpp::Any visitResetlogs_or_noresetlogs(PlSqlParser::Resetlogs_or_noresetlogsContext *context) = 0;

    virtual antlrcpp::Any visitUpgrade_or_downgrade(PlSqlParser::Upgrade_or_downgradeContext *context) = 0;

    virtual antlrcpp::Any visitRecovery_clauses(PlSqlParser::Recovery_clausesContext *context) = 0;

    virtual antlrcpp::Any visitBegin_or_end(PlSqlParser::Begin_or_endContext *context) = 0;

    virtual antlrcpp::Any visitGeneral_recovery(PlSqlParser::General_recoveryContext *context) = 0;

    virtual antlrcpp::Any visitFull_database_recovery(PlSqlParser::Full_database_recoveryContext *context) = 0;

    virtual antlrcpp::Any visitPartial_database_recovery(PlSqlParser::Partial_database_recoveryContext *context) = 0;

    virtual antlrcpp::Any visitPartial_database_recovery_10g(PlSqlParser::Partial_database_recovery_10gContext *context) = 0;

    virtual antlrcpp::Any visitManaged_standby_recovery(PlSqlParser::Managed_standby_recoveryContext *context) = 0;

    virtual antlrcpp::Any visitDb_name(PlSqlParser::Db_nameContext *context) = 0;

    virtual antlrcpp::Any visitDatabase_file_clauses(PlSqlParser::Database_file_clausesContext *context) = 0;

    virtual antlrcpp::Any visitCreate_datafile_clause(PlSqlParser::Create_datafile_clauseContext *context) = 0;

    virtual antlrcpp::Any visitAlter_datafile_clause(PlSqlParser::Alter_datafile_clauseContext *context) = 0;

    virtual antlrcpp::Any visitAlter_tempfile_clause(PlSqlParser::Alter_tempfile_clauseContext *context) = 0;

    virtual antlrcpp::Any visitLogfile_clauses(PlSqlParser::Logfile_clausesContext *context) = 0;

    virtual antlrcpp::Any visitAdd_logfile_clauses(PlSqlParser::Add_logfile_clausesContext *context) = 0;

    virtual antlrcpp::Any visitLog_file_group(PlSqlParser::Log_file_groupContext *context) = 0;

    virtual antlrcpp::Any visitDrop_logfile_clauses(PlSqlParser::Drop_logfile_clausesContext *context) = 0;

    virtual antlrcpp::Any visitSwitch_logfile_clause(PlSqlParser::Switch_logfile_clauseContext *context) = 0;

    virtual antlrcpp::Any visitSupplemental_db_logging(PlSqlParser::Supplemental_db_loggingContext *context) = 0;

    virtual antlrcpp::Any visitAdd_or_drop(PlSqlParser::Add_or_dropContext *context) = 0;

    virtual antlrcpp::Any visitSupplemental_plsql_clause(PlSqlParser::Supplemental_plsql_clauseContext *context) = 0;

    virtual antlrcpp::Any visitLogfile_descriptor(PlSqlParser::Logfile_descriptorContext *context) = 0;

    virtual antlrcpp::Any visitControlfile_clauses(PlSqlParser::Controlfile_clausesContext *context) = 0;

    virtual antlrcpp::Any visitTrace_file_clause(PlSqlParser::Trace_file_clauseContext *context) = 0;

    virtual antlrcpp::Any visitStandby_database_clauses(PlSqlParser::Standby_database_clausesContext *context) = 0;

    virtual antlrcpp::Any visitActivate_standby_db_clause(PlSqlParser::Activate_standby_db_clauseContext *context) = 0;

    virtual antlrcpp::Any visitMaximize_standby_db_clause(PlSqlParser::Maximize_standby_db_clauseContext *context) = 0;

    virtual antlrcpp::Any visitRegister_logfile_clause(PlSqlParser::Register_logfile_clauseContext *context) = 0;

    virtual antlrcpp::Any visitCommit_switchover_clause(PlSqlParser::Commit_switchover_clauseContext *context) = 0;

    virtual antlrcpp::Any visitStart_standby_clause(PlSqlParser::Start_standby_clauseContext *context) = 0;

    virtual antlrcpp::Any visitStop_standby_clause(PlSqlParser::Stop_standby_clauseContext *context) = 0;

    virtual antlrcpp::Any visitConvert_database_clause(PlSqlParser::Convert_database_clauseContext *context) = 0;

    virtual antlrcpp::Any visitDefault_settings_clause(PlSqlParser::Default_settings_clauseContext *context) = 0;

    virtual antlrcpp::Any visitSet_time_zone_clause(PlSqlParser::Set_time_zone_clauseContext *context) = 0;

    virtual antlrcpp::Any visitInstance_clauses(PlSqlParser::Instance_clausesContext *context) = 0;

    virtual antlrcpp::Any visitSecurity_clause(PlSqlParser::Security_clauseContext *context) = 0;

    virtual antlrcpp::Any visitDomain(PlSqlParser::DomainContext *context) = 0;

    virtual antlrcpp::Any visitDatabase(PlSqlParser::DatabaseContext *context) = 0;

    virtual antlrcpp::Any visitEdition_name(PlSqlParser::Edition_nameContext *context) = 0;

    virtual antlrcpp::Any visitFilenumber(PlSqlParser::FilenumberContext *context) = 0;

    virtual antlrcpp::Any visitFilename(PlSqlParser::FilenameContext *context) = 0;

    virtual antlrcpp::Any visitAlter_table(PlSqlParser::Alter_tableContext *context) = 0;

    virtual antlrcpp::Any visitAlter_table_properties(PlSqlParser::Alter_table_propertiesContext *context) = 0;

    virtual antlrcpp::Any visitAlter_table_properties_1(PlSqlParser::Alter_table_properties_1Context *context) = 0;

    virtual antlrcpp::Any visitAlter_iot_clauses(PlSqlParser::Alter_iot_clausesContext *context) = 0;

    virtual antlrcpp::Any visitAlter_mapping_table_clause(PlSqlParser::Alter_mapping_table_clauseContext *context) = 0;

    virtual antlrcpp::Any visitAlter_overflow_clause(PlSqlParser::Alter_overflow_clauseContext *context) = 0;

    virtual antlrcpp::Any visitAdd_overflow_clause(PlSqlParser::Add_overflow_clauseContext *context) = 0;

    virtual antlrcpp::Any visitEnable_disable_clause(PlSqlParser::Enable_disable_clauseContext *context) = 0;

    virtual antlrcpp::Any visitUsing_index_clause(PlSqlParser::Using_index_clauseContext *context) = 0;

    virtual antlrcpp::Any visitIndex_attributes(PlSqlParser::Index_attributesContext *context) = 0;

    virtual antlrcpp::Any visitSort_or_nosort(PlSqlParser::Sort_or_nosortContext *context) = 0;

    virtual antlrcpp::Any visitExceptions_clause(PlSqlParser::Exceptions_clauseContext *context) = 0;

    virtual antlrcpp::Any visitMove_table_clause(PlSqlParser::Move_table_clauseContext *context) = 0;

    virtual antlrcpp::Any visitIndex_org_table_clause(PlSqlParser::Index_org_table_clauseContext *context) = 0;

    virtual antlrcpp::Any visitMapping_table_clause(PlSqlParser::Mapping_table_clauseContext *context) = 0;

    virtual antlrcpp::Any visitKey_compression(PlSqlParser::Key_compressionContext *context) = 0;

    virtual antlrcpp::Any visitIndex_org_overflow_clause(PlSqlParser::Index_org_overflow_clauseContext *context) = 0;

    virtual antlrcpp::Any visitColumn_clauses(PlSqlParser::Column_clausesContext *context) = 0;

    virtual antlrcpp::Any visitModify_collection_retrieval(PlSqlParser::Modify_collection_retrievalContext *context) = 0;

    virtual antlrcpp::Any visitCollection_item(PlSqlParser::Collection_itemContext *context) = 0;

    virtual antlrcpp::Any visitRename_column_clause(PlSqlParser::Rename_column_clauseContext *context) = 0;

    virtual antlrcpp::Any visitOld_column_name(PlSqlParser::Old_column_nameContext *context) = 0;

    virtual antlrcpp::Any visitNew_column_name(PlSqlParser::New_column_nameContext *context) = 0;

    virtual antlrcpp::Any visitAdd_modify_drop_column_clauses(PlSqlParser::Add_modify_drop_column_clausesContext *context) = 0;

    virtual antlrcpp::Any visitDrop_column_clause(PlSqlParser::Drop_column_clauseContext *context) = 0;

    virtual antlrcpp::Any visitModify_column_clauses(PlSqlParser::Modify_column_clausesContext *context) = 0;

    virtual antlrcpp::Any visitModify_col_properties(PlSqlParser::Modify_col_propertiesContext *context) = 0;

    virtual antlrcpp::Any visitModify_col_substitutable(PlSqlParser::Modify_col_substitutableContext *context) = 0;

    virtual antlrcpp::Any visitAdd_column_clause(PlSqlParser::Add_column_clauseContext *context) = 0;

    virtual antlrcpp::Any visitAlter_varray_col_properties(PlSqlParser::Alter_varray_col_propertiesContext *context) = 0;

    virtual antlrcpp::Any visitVarray_col_properties(PlSqlParser::Varray_col_propertiesContext *context) = 0;

    virtual antlrcpp::Any visitVarray_storage_clause(PlSqlParser::Varray_storage_clauseContext *context) = 0;

    virtual antlrcpp::Any visitLob_segname(PlSqlParser::Lob_segnameContext *context) = 0;

    virtual antlrcpp::Any visitLob_item(PlSqlParser::Lob_itemContext *context) = 0;

    virtual antlrcpp::Any visitLob_storage_parameters(PlSqlParser::Lob_storage_parametersContext *context) = 0;

    virtual antlrcpp::Any visitLob_storage_clause(PlSqlParser::Lob_storage_clauseContext *context) = 0;

    virtual antlrcpp::Any visitModify_lob_storage_clause(PlSqlParser::Modify_lob_storage_clauseContext *context) = 0;

    virtual antlrcpp::Any visitModify_lob_parameters(PlSqlParser::Modify_lob_parametersContext *context) = 0;

    virtual antlrcpp::Any visitLob_parameters(PlSqlParser::Lob_parametersContext *context) = 0;

    virtual antlrcpp::Any visitLob_deduplicate_clause(PlSqlParser::Lob_deduplicate_clauseContext *context) = 0;

    virtual antlrcpp::Any visitLob_compression_clause(PlSqlParser::Lob_compression_clauseContext *context) = 0;

    virtual antlrcpp::Any visitLob_retention_clause(PlSqlParser::Lob_retention_clauseContext *context) = 0;

    virtual antlrcpp::Any visitEncryption_spec(PlSqlParser::Encryption_specContext *context) = 0;

    virtual antlrcpp::Any visitTablespace(PlSqlParser::TablespaceContext *context) = 0;

    virtual antlrcpp::Any visitVarray_item(PlSqlParser::Varray_itemContext *context) = 0;

    virtual antlrcpp::Any visitColumn_properties(PlSqlParser::Column_propertiesContext *context) = 0;

    virtual antlrcpp::Any visitPeriod_definition(PlSqlParser::Period_definitionContext *context) = 0;

    virtual antlrcpp::Any visitStart_time_column(PlSqlParser::Start_time_columnContext *context) = 0;

    virtual antlrcpp::Any visitEnd_time_column(PlSqlParser::End_time_columnContext *context) = 0;

    virtual antlrcpp::Any visitColumn_definition(PlSqlParser::Column_definitionContext *context) = 0;

    virtual antlrcpp::Any visitVirtual_column_definition(PlSqlParser::Virtual_column_definitionContext *context) = 0;

    virtual antlrcpp::Any visitOut_of_line_part_storage(PlSqlParser::Out_of_line_part_storageContext *context) = 0;

    virtual antlrcpp::Any visitNested_table_col_properties(PlSqlParser::Nested_table_col_propertiesContext *context) = 0;

    virtual antlrcpp::Any visitNested_item(PlSqlParser::Nested_itemContext *context) = 0;

    virtual antlrcpp::Any visitSubstitutable_column_clause(PlSqlParser::Substitutable_column_clauseContext *context) = 0;

    virtual antlrcpp::Any visitPartition_name(PlSqlParser::Partition_nameContext *context) = 0;

    virtual antlrcpp::Any visitSupplemental_logging_props(PlSqlParser::Supplemental_logging_propsContext *context) = 0;

    virtual antlrcpp::Any visitColumn_or_attribute(PlSqlParser::Column_or_attributeContext *context) = 0;

    virtual antlrcpp::Any visitObject_type_col_properties(PlSqlParser::Object_type_col_propertiesContext *context) = 0;

    virtual antlrcpp::Any visitConstraint_clauses(PlSqlParser::Constraint_clausesContext *context) = 0;

    virtual antlrcpp::Any visitOld_constraint_name(PlSqlParser::Old_constraint_nameContext *context) = 0;

    virtual antlrcpp::Any visitNew_constraint_name(PlSqlParser::New_constraint_nameContext *context) = 0;

    virtual antlrcpp::Any visitDrop_constraint_clause(PlSqlParser::Drop_constraint_clauseContext *context) = 0;

    virtual antlrcpp::Any visitDrop_primary_key_or_unique_or_generic_clause(PlSqlParser::Drop_primary_key_or_unique_or_generic_clauseContext *context) = 0;

    virtual antlrcpp::Any visitAdd_constraint(PlSqlParser::Add_constraintContext *context) = 0;

    virtual antlrcpp::Any visitCheck_constraint(PlSqlParser::Check_constraintContext *context) = 0;

    virtual antlrcpp::Any visitDrop_constraint(PlSqlParser::Drop_constraintContext *context) = 0;

    virtual antlrcpp::Any visitEnable_constraint(PlSqlParser::Enable_constraintContext *context) = 0;

    virtual antlrcpp::Any visitDisable_constraint(PlSqlParser::Disable_constraintContext *context) = 0;

    virtual antlrcpp::Any visitForeign_key_clause(PlSqlParser::Foreign_key_clauseContext *context) = 0;

    virtual antlrcpp::Any visitReferences_clause(PlSqlParser::References_clauseContext *context) = 0;

    virtual antlrcpp::Any visitOn_delete_clause(PlSqlParser::On_delete_clauseContext *context) = 0;

    virtual antlrcpp::Any visitUnique_key_clause(PlSqlParser::Unique_key_clauseContext *context) = 0;

    virtual antlrcpp::Any visitPrimary_key_clause(PlSqlParser::Primary_key_clauseContext *context) = 0;

    virtual antlrcpp::Any visitAnonymous_block(PlSqlParser::Anonymous_blockContext *context) = 0;

    virtual antlrcpp::Any visitInvoker_rights_clause(PlSqlParser::Invoker_rights_clauseContext *context) = 0;

    virtual antlrcpp::Any visitCall_spec(PlSqlParser::Call_specContext *context) = 0;

    virtual antlrcpp::Any visitJava_spec(PlSqlParser::Java_specContext *context) = 0;

    virtual antlrcpp::Any visitC_spec(PlSqlParser::C_specContext *context) = 0;

    virtual antlrcpp::Any visitC_agent_in_clause(PlSqlParser::C_agent_in_clauseContext *context) = 0;

    virtual antlrcpp::Any visitC_parameters_clause(PlSqlParser::C_parameters_clauseContext *context) = 0;

    virtual antlrcpp::Any visitParameter(PlSqlParser::ParameterContext *context) = 0;

    virtual antlrcpp::Any visitDefault_value_part(PlSqlParser::Default_value_partContext *context) = 0;

    virtual antlrcpp::Any visitSeq_of_declare_specs(PlSqlParser::Seq_of_declare_specsContext *context) = 0;

    virtual antlrcpp::Any visitDeclare_spec(PlSqlParser::Declare_specContext *context) = 0;

    virtual antlrcpp::Any visitVariable_declaration(PlSqlParser::Variable_declarationContext *context) = 0;

    virtual antlrcpp::Any visitSubtype_declaration(PlSqlParser::Subtype_declarationContext *context) = 0;

    virtual antlrcpp::Any visitCursor_declaration(PlSqlParser::Cursor_declarationContext *context) = 0;

    virtual antlrcpp::Any visitParameter_spec(PlSqlParser::Parameter_specContext *context) = 0;

    virtual antlrcpp::Any visitException_declaration(PlSqlParser::Exception_declarationContext *context) = 0;

    virtual antlrcpp::Any visitPragma_declaration(PlSqlParser::Pragma_declarationContext *context) = 0;

    virtual antlrcpp::Any visitRecord_type_def(PlSqlParser::Record_type_defContext *context) = 0;

    virtual antlrcpp::Any visitField_spec(PlSqlParser::Field_specContext *context) = 0;

    virtual antlrcpp::Any visitRef_cursor_type_def(PlSqlParser::Ref_cursor_type_defContext *context) = 0;

    virtual antlrcpp::Any visitType_declaration(PlSqlParser::Type_declarationContext *context) = 0;

    virtual antlrcpp::Any visitTable_type_def(PlSqlParser::Table_type_defContext *context) = 0;

    virtual antlrcpp::Any visitTable_indexed_by_part(PlSqlParser::Table_indexed_by_partContext *context) = 0;

    virtual antlrcpp::Any visitVarray_type_def(PlSqlParser::Varray_type_defContext *context) = 0;

    virtual antlrcpp::Any visitSeq_of_statements(PlSqlParser::Seq_of_statementsContext *context) = 0;

    virtual antlrcpp::Any visitLabel_declaration(PlSqlParser::Label_declarationContext *context) = 0;

    virtual antlrcpp::Any visitStatement(PlSqlParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitSwallow_to_semi(PlSqlParser::Swallow_to_semiContext *context) = 0;

    virtual antlrcpp::Any visitAssignment_statement(PlSqlParser::Assignment_statementContext *context) = 0;

    virtual antlrcpp::Any visitContinue_statement(PlSqlParser::Continue_statementContext *context) = 0;

    virtual antlrcpp::Any visitExit_statement(PlSqlParser::Exit_statementContext *context) = 0;

    virtual antlrcpp::Any visitGoto_statement(PlSqlParser::Goto_statementContext *context) = 0;

    virtual antlrcpp::Any visitIf_statement(PlSqlParser::If_statementContext *context) = 0;

    virtual antlrcpp::Any visitElsif_part(PlSqlParser::Elsif_partContext *context) = 0;

    virtual antlrcpp::Any visitElse_part(PlSqlParser::Else_partContext *context) = 0;

    virtual antlrcpp::Any visitLoop_statement(PlSqlParser::Loop_statementContext *context) = 0;

    virtual antlrcpp::Any visitCursor_loop_param(PlSqlParser::Cursor_loop_paramContext *context) = 0;

    virtual antlrcpp::Any visitForall_statement(PlSqlParser::Forall_statementContext *context) = 0;

    virtual antlrcpp::Any visitBounds_clause(PlSqlParser::Bounds_clauseContext *context) = 0;

    virtual antlrcpp::Any visitBetween_bound(PlSqlParser::Between_boundContext *context) = 0;

    virtual antlrcpp::Any visitLower_bound(PlSqlParser::Lower_boundContext *context) = 0;

    virtual antlrcpp::Any visitUpper_bound(PlSqlParser::Upper_boundContext *context) = 0;

    virtual antlrcpp::Any visitNull_statement(PlSqlParser::Null_statementContext *context) = 0;

    virtual antlrcpp::Any visitRaise_statement(PlSqlParser::Raise_statementContext *context) = 0;

    virtual antlrcpp::Any visitReturn_statement(PlSqlParser::Return_statementContext *context) = 0;

    virtual antlrcpp::Any visitFunction_call(PlSqlParser::Function_callContext *context) = 0;

    virtual antlrcpp::Any visitProcedure_call(PlSqlParser::Procedure_callContext *context) = 0;

    virtual antlrcpp::Any visitPipe_row_statement(PlSqlParser::Pipe_row_statementContext *context) = 0;

    virtual antlrcpp::Any visitBody(PlSqlParser::BodyContext *context) = 0;

    virtual antlrcpp::Any visitException_handler(PlSqlParser::Exception_handlerContext *context) = 0;

    virtual antlrcpp::Any visitTrigger_block(PlSqlParser::Trigger_blockContext *context) = 0;

    virtual antlrcpp::Any visitBlock(PlSqlParser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitSql_statement(PlSqlParser::Sql_statementContext *context) = 0;

    virtual antlrcpp::Any visitExecute_immediate(PlSqlParser::Execute_immediateContext *context) = 0;

    virtual antlrcpp::Any visitDynamic_returning_clause(PlSqlParser::Dynamic_returning_clauseContext *context) = 0;

    virtual antlrcpp::Any visitData_manipulation_language_statements(PlSqlParser::Data_manipulation_language_statementsContext *context) = 0;

    virtual antlrcpp::Any visitCursor_manipulation_statements(PlSqlParser::Cursor_manipulation_statementsContext *context) = 0;

    virtual antlrcpp::Any visitClose_statement(PlSqlParser::Close_statementContext *context) = 0;

    virtual antlrcpp::Any visitOpen_statement(PlSqlParser::Open_statementContext *context) = 0;

    virtual antlrcpp::Any visitFetch_statement(PlSqlParser::Fetch_statementContext *context) = 0;

    virtual antlrcpp::Any visitOpen_for_statement(PlSqlParser::Open_for_statementContext *context) = 0;

    virtual antlrcpp::Any visitTransaction_control_statements(PlSqlParser::Transaction_control_statementsContext *context) = 0;

    virtual antlrcpp::Any visitSet_transaction_command(PlSqlParser::Set_transaction_commandContext *context) = 0;

    virtual antlrcpp::Any visitSet_constraint_command(PlSqlParser::Set_constraint_commandContext *context) = 0;

    virtual antlrcpp::Any visitCommit_statement(PlSqlParser::Commit_statementContext *context) = 0;

    virtual antlrcpp::Any visitWrite_clause(PlSqlParser::Write_clauseContext *context) = 0;

    virtual antlrcpp::Any visitRollback_statement(PlSqlParser::Rollback_statementContext *context) = 0;

    virtual antlrcpp::Any visitSavepoint_statement(PlSqlParser::Savepoint_statementContext *context) = 0;

    virtual antlrcpp::Any visitExplain_statement(PlSqlParser::Explain_statementContext *context) = 0;

    virtual antlrcpp::Any visitSelect_statement(PlSqlParser::Select_statementContext *context) = 0;

    virtual antlrcpp::Any visitSubquery_factoring_clause(PlSqlParser::Subquery_factoring_clauseContext *context) = 0;

    virtual antlrcpp::Any visitFactoring_element(PlSqlParser::Factoring_elementContext *context) = 0;

    virtual antlrcpp::Any visitSearch_clause(PlSqlParser::Search_clauseContext *context) = 0;

    virtual antlrcpp::Any visitCycle_clause(PlSqlParser::Cycle_clauseContext *context) = 0;

    virtual antlrcpp::Any visitSubquery(PlSqlParser::SubqueryContext *context) = 0;

    virtual antlrcpp::Any visitSubquery_basic_elements(PlSqlParser::Subquery_basic_elementsContext *context) = 0;

    virtual antlrcpp::Any visitSubquery_operation_part(PlSqlParser::Subquery_operation_partContext *context) = 0;

    virtual antlrcpp::Any visitQuery_block(PlSqlParser::Query_blockContext *context) = 0;

    virtual antlrcpp::Any visitSelected_list(PlSqlParser::Selected_listContext *context) = 0;

    virtual antlrcpp::Any visitSelected_list_element(PlSqlParser::Selected_list_elementContext *context) = 0;

    virtual antlrcpp::Any visitFrom_clause(PlSqlParser::From_clauseContext *context) = 0;

    virtual antlrcpp::Any visitSelect_list_elements(PlSqlParser::Select_list_elementsContext *context) = 0;

    virtual antlrcpp::Any visitTable_ref_list(PlSqlParser::Table_ref_listContext *context) = 0;

    virtual antlrcpp::Any visitTable_ref(PlSqlParser::Table_refContext *context) = 0;

    virtual antlrcpp::Any visitTable_ref_aux(PlSqlParser::Table_ref_auxContext *context) = 0;

    virtual antlrcpp::Any visitTable_ref_aux_internal_one(PlSqlParser::Table_ref_aux_internal_oneContext *context) = 0;

    virtual antlrcpp::Any visitTable_ref_aux_internal_two(PlSqlParser::Table_ref_aux_internal_twoContext *context) = 0;

    virtual antlrcpp::Any visitTable_ref_aux_internal_three(PlSqlParser::Table_ref_aux_internal_threeContext *context) = 0;

    virtual antlrcpp::Any visitJoin_clause(PlSqlParser::Join_clauseContext *context) = 0;

    virtual antlrcpp::Any visitJoin_on_part(PlSqlParser::Join_on_partContext *context) = 0;

    virtual antlrcpp::Any visitJoin_using_part(PlSqlParser::Join_using_partContext *context) = 0;

    virtual antlrcpp::Any visitOuter_join_type(PlSqlParser::Outer_join_typeContext *context) = 0;

    virtual antlrcpp::Any visitQuery_partition_clause(PlSqlParser::Query_partition_clauseContext *context) = 0;

    virtual antlrcpp::Any visitFlashback_query_clause(PlSqlParser::Flashback_query_clauseContext *context) = 0;

    virtual antlrcpp::Any visitPivot_clause(PlSqlParser::Pivot_clauseContext *context) = 0;

    virtual antlrcpp::Any visitPivot_element(PlSqlParser::Pivot_elementContext *context) = 0;

    virtual antlrcpp::Any visitPivot_for_clause(PlSqlParser::Pivot_for_clauseContext *context) = 0;

    virtual antlrcpp::Any visitPivot_in_clause(PlSqlParser::Pivot_in_clauseContext *context) = 0;

    virtual antlrcpp::Any visitPivot_in_clause_element(PlSqlParser::Pivot_in_clause_elementContext *context) = 0;

    virtual antlrcpp::Any visitPivot_in_clause_elements(PlSqlParser::Pivot_in_clause_elementsContext *context) = 0;

    virtual antlrcpp::Any visitUnpivot_clause(PlSqlParser::Unpivot_clauseContext *context) = 0;

    virtual antlrcpp::Any visitUnpivot_in_clause(PlSqlParser::Unpivot_in_clauseContext *context) = 0;

    virtual antlrcpp::Any visitUnpivot_in_elements(PlSqlParser::Unpivot_in_elementsContext *context) = 0;

    virtual antlrcpp::Any visitHierarchical_query_clause(PlSqlParser::Hierarchical_query_clauseContext *context) = 0;

    virtual antlrcpp::Any visitStart_part(PlSqlParser::Start_partContext *context) = 0;

    virtual antlrcpp::Any visitGroup_by_clause(PlSqlParser::Group_by_clauseContext *context) = 0;

    virtual antlrcpp::Any visitGroup_by_elements(PlSqlParser::Group_by_elementsContext *context) = 0;

    virtual antlrcpp::Any visitRollup_cube_clause(PlSqlParser::Rollup_cube_clauseContext *context) = 0;

    virtual antlrcpp::Any visitGrouping_sets_clause(PlSqlParser::Grouping_sets_clauseContext *context) = 0;

    virtual antlrcpp::Any visitGrouping_sets_elements(PlSqlParser::Grouping_sets_elementsContext *context) = 0;

    virtual antlrcpp::Any visitHaving_clause(PlSqlParser::Having_clauseContext *context) = 0;

    virtual antlrcpp::Any visitModel_clause(PlSqlParser::Model_clauseContext *context) = 0;

    virtual antlrcpp::Any visitCell_reference_options(PlSqlParser::Cell_reference_optionsContext *context) = 0;

    virtual antlrcpp::Any visitReturn_rows_clause(PlSqlParser::Return_rows_clauseContext *context) = 0;

    virtual antlrcpp::Any visitReference_model(PlSqlParser::Reference_modelContext *context) = 0;

    virtual antlrcpp::Any visitMain_model(PlSqlParser::Main_modelContext *context) = 0;

    virtual antlrcpp::Any visitModel_column_clauses(PlSqlParser::Model_column_clausesContext *context) = 0;

    virtual antlrcpp::Any visitModel_column_partition_part(PlSqlParser::Model_column_partition_partContext *context) = 0;

    virtual antlrcpp::Any visitModel_column_list(PlSqlParser::Model_column_listContext *context) = 0;

    virtual antlrcpp::Any visitModel_column(PlSqlParser::Model_columnContext *context) = 0;

    virtual antlrcpp::Any visitModel_rules_clause(PlSqlParser::Model_rules_clauseContext *context) = 0;

    virtual antlrcpp::Any visitModel_rules_part(PlSqlParser::Model_rules_partContext *context) = 0;

    virtual antlrcpp::Any visitModel_rules_element(PlSqlParser::Model_rules_elementContext *context) = 0;

    virtual antlrcpp::Any visitCell_assignment(PlSqlParser::Cell_assignmentContext *context) = 0;

    virtual antlrcpp::Any visitModel_iterate_clause(PlSqlParser::Model_iterate_clauseContext *context) = 0;

    virtual antlrcpp::Any visitUntil_part(PlSqlParser::Until_partContext *context) = 0;

    virtual antlrcpp::Any visitOrder_by_clause(PlSqlParser::Order_by_clauseContext *context) = 0;

    virtual antlrcpp::Any visitOrder_by_elements(PlSqlParser::Order_by_elementsContext *context) = 0;

    virtual antlrcpp::Any visitOffset_clause(PlSqlParser::Offset_clauseContext *context) = 0;

    virtual antlrcpp::Any visitFetch_clause(PlSqlParser::Fetch_clauseContext *context) = 0;

    virtual antlrcpp::Any visitFor_update_clause(PlSqlParser::For_update_clauseContext *context) = 0;

    virtual antlrcpp::Any visitFor_update_of_part(PlSqlParser::For_update_of_partContext *context) = 0;

    virtual antlrcpp::Any visitFor_update_options(PlSqlParser::For_update_optionsContext *context) = 0;

    virtual antlrcpp::Any visitUpdate_statement(PlSqlParser::Update_statementContext *context) = 0;

    virtual antlrcpp::Any visitUpdate_set_clause(PlSqlParser::Update_set_clauseContext *context) = 0;

    virtual antlrcpp::Any visitColumn_based_update_set_clause(PlSqlParser::Column_based_update_set_clauseContext *context) = 0;

    virtual antlrcpp::Any visitDelete_statement(PlSqlParser::Delete_statementContext *context) = 0;

    virtual antlrcpp::Any visitInsert_statement(PlSqlParser::Insert_statementContext *context) = 0;

    virtual antlrcpp::Any visitSingle_table_insert(PlSqlParser::Single_table_insertContext *context) = 0;

    virtual antlrcpp::Any visitMulti_table_insert(PlSqlParser::Multi_table_insertContext *context) = 0;

    virtual antlrcpp::Any visitMulti_table_element(PlSqlParser::Multi_table_elementContext *context) = 0;

    virtual antlrcpp::Any visitConditional_insert_clause(PlSqlParser::Conditional_insert_clauseContext *context) = 0;

    virtual antlrcpp::Any visitConditional_insert_when_part(PlSqlParser::Conditional_insert_when_partContext *context) = 0;

    virtual antlrcpp::Any visitConditional_insert_else_part(PlSqlParser::Conditional_insert_else_partContext *context) = 0;

    virtual antlrcpp::Any visitInsert_into_clause(PlSqlParser::Insert_into_clauseContext *context) = 0;

    virtual antlrcpp::Any visitValues_clause(PlSqlParser::Values_clauseContext *context) = 0;

    virtual antlrcpp::Any visitMerge_statement(PlSqlParser::Merge_statementContext *context) = 0;

    virtual antlrcpp::Any visitMerge_update_clause(PlSqlParser::Merge_update_clauseContext *context) = 0;

    virtual antlrcpp::Any visitMerge_element(PlSqlParser::Merge_elementContext *context) = 0;

    virtual antlrcpp::Any visitMerge_update_delete_part(PlSqlParser::Merge_update_delete_partContext *context) = 0;

    virtual antlrcpp::Any visitMerge_insert_clause(PlSqlParser::Merge_insert_clauseContext *context) = 0;

    virtual antlrcpp::Any visitSelected_tableview(PlSqlParser::Selected_tableviewContext *context) = 0;

    virtual antlrcpp::Any visitLock_table_statement(PlSqlParser::Lock_table_statementContext *context) = 0;

    virtual antlrcpp::Any visitWait_nowait_part(PlSqlParser::Wait_nowait_partContext *context) = 0;

    virtual antlrcpp::Any visitLock_table_element(PlSqlParser::Lock_table_elementContext *context) = 0;

    virtual antlrcpp::Any visitLock_mode(PlSqlParser::Lock_modeContext *context) = 0;

    virtual antlrcpp::Any visitGeneral_table_ref(PlSqlParser::General_table_refContext *context) = 0;

    virtual antlrcpp::Any visitStatic_returning_clause(PlSqlParser::Static_returning_clauseContext *context) = 0;

    virtual antlrcpp::Any visitError_logging_clause(PlSqlParser::Error_logging_clauseContext *context) = 0;

    virtual antlrcpp::Any visitError_logging_into_part(PlSqlParser::Error_logging_into_partContext *context) = 0;

    virtual antlrcpp::Any visitError_logging_reject_part(PlSqlParser::Error_logging_reject_partContext *context) = 0;

    virtual antlrcpp::Any visitDml_table_expression_clause(PlSqlParser::Dml_table_expression_clauseContext *context) = 0;

    virtual antlrcpp::Any visitTable_collection_expression(PlSqlParser::Table_collection_expressionContext *context) = 0;

    virtual antlrcpp::Any visitSubquery_restriction_clause(PlSqlParser::Subquery_restriction_clauseContext *context) = 0;

    virtual antlrcpp::Any visitSample_clause(PlSqlParser::Sample_clauseContext *context) = 0;

    virtual antlrcpp::Any visitSeed_part(PlSqlParser::Seed_partContext *context) = 0;

    virtual antlrcpp::Any visitCondition(PlSqlParser::ConditionContext *context) = 0;

    virtual antlrcpp::Any visitExpressions(PlSqlParser::ExpressionsContext *context) = 0;

    virtual antlrcpp::Any visitExpression(PlSqlParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitCursor_expression(PlSqlParser::Cursor_expressionContext *context) = 0;

    virtual antlrcpp::Any visitLogical_expression(PlSqlParser::Logical_expressionContext *context) = 0;

    virtual antlrcpp::Any visitMultiset_expression(PlSqlParser::Multiset_expressionContext *context) = 0;

    virtual antlrcpp::Any visitRelational_expression(PlSqlParser::Relational_expressionContext *context) = 0;

    virtual antlrcpp::Any visitCompound_expression(PlSqlParser::Compound_expressionContext *context) = 0;

    virtual antlrcpp::Any visitRelational_operator(PlSqlParser::Relational_operatorContext *context) = 0;

    virtual antlrcpp::Any visitIn_elements(PlSqlParser::In_elementsContext *context) = 0;

    virtual antlrcpp::Any visitBetween_elements(PlSqlParser::Between_elementsContext *context) = 0;

    virtual antlrcpp::Any visitConcatenation(PlSqlParser::ConcatenationContext *context) = 0;

    virtual antlrcpp::Any visitInterval_expression(PlSqlParser::Interval_expressionContext *context) = 0;

    virtual antlrcpp::Any visitModel_expression(PlSqlParser::Model_expressionContext *context) = 0;

    virtual antlrcpp::Any visitModel_expression_element(PlSqlParser::Model_expression_elementContext *context) = 0;

    virtual antlrcpp::Any visitSingle_column_for_loop(PlSqlParser::Single_column_for_loopContext *context) = 0;

    virtual antlrcpp::Any visitMulti_column_for_loop(PlSqlParser::Multi_column_for_loopContext *context) = 0;

    virtual antlrcpp::Any visitUnary_expression(PlSqlParser::Unary_expressionContext *context) = 0;

    virtual antlrcpp::Any visitCase_statement(PlSqlParser::Case_statementContext *context) = 0;

    virtual antlrcpp::Any visitSimple_case_statement(PlSqlParser::Simple_case_statementContext *context) = 0;

    virtual antlrcpp::Any visitSimple_case_when_part(PlSqlParser::Simple_case_when_partContext *context) = 0;

    virtual antlrcpp::Any visitSearched_case_statement(PlSqlParser::Searched_case_statementContext *context) = 0;

    virtual antlrcpp::Any visitSearched_case_when_part(PlSqlParser::Searched_case_when_partContext *context) = 0;

    virtual antlrcpp::Any visitCase_else_part(PlSqlParser::Case_else_partContext *context) = 0;

    virtual antlrcpp::Any visitAtom(PlSqlParser::AtomContext *context) = 0;

    virtual antlrcpp::Any visitQuantified_expression(PlSqlParser::Quantified_expressionContext *context) = 0;

    virtual antlrcpp::Any visitString_function(PlSqlParser::String_functionContext *context) = 0;

    virtual antlrcpp::Any visitStandard_function(PlSqlParser::Standard_functionContext *context) = 0;

    virtual antlrcpp::Any visitLiteral(PlSqlParser::LiteralContext *context) = 0;

    virtual antlrcpp::Any visitNumeric_function_wrapper(PlSqlParser::Numeric_function_wrapperContext *context) = 0;

    virtual antlrcpp::Any visitNumeric_function(PlSqlParser::Numeric_functionContext *context) = 0;

    virtual antlrcpp::Any visitOther_function(PlSqlParser::Other_functionContext *context) = 0;

    virtual antlrcpp::Any visitOver_clause_keyword(PlSqlParser::Over_clause_keywordContext *context) = 0;

    virtual antlrcpp::Any visitWithin_or_over_clause_keyword(PlSqlParser::Within_or_over_clause_keywordContext *context) = 0;

    virtual antlrcpp::Any visitStandard_prediction_function_keyword(PlSqlParser::Standard_prediction_function_keywordContext *context) = 0;

    virtual antlrcpp::Any visitOver_clause(PlSqlParser::Over_clauseContext *context) = 0;

    virtual antlrcpp::Any visitWindowing_clause(PlSqlParser::Windowing_clauseContext *context) = 0;

    virtual antlrcpp::Any visitWindowing_type(PlSqlParser::Windowing_typeContext *context) = 0;

    virtual antlrcpp::Any visitWindowing_elements(PlSqlParser::Windowing_elementsContext *context) = 0;

    virtual antlrcpp::Any visitUsing_clause(PlSqlParser::Using_clauseContext *context) = 0;

    virtual antlrcpp::Any visitUsing_element(PlSqlParser::Using_elementContext *context) = 0;

    virtual antlrcpp::Any visitCollect_order_by_part(PlSqlParser::Collect_order_by_partContext *context) = 0;

    virtual antlrcpp::Any visitWithin_or_over_part(PlSqlParser::Within_or_over_partContext *context) = 0;

    virtual antlrcpp::Any visitCost_matrix_clause(PlSqlParser::Cost_matrix_clauseContext *context) = 0;

    virtual antlrcpp::Any visitXml_passing_clause(PlSqlParser::Xml_passing_clauseContext *context) = 0;

    virtual antlrcpp::Any visitXml_attributes_clause(PlSqlParser::Xml_attributes_clauseContext *context) = 0;

    virtual antlrcpp::Any visitXml_namespaces_clause(PlSqlParser::Xml_namespaces_clauseContext *context) = 0;

    virtual antlrcpp::Any visitXml_table_column(PlSqlParser::Xml_table_columnContext *context) = 0;

    virtual antlrcpp::Any visitXml_general_default_part(PlSqlParser::Xml_general_default_partContext *context) = 0;

    virtual antlrcpp::Any visitXml_multiuse_expression_element(PlSqlParser::Xml_multiuse_expression_elementContext *context) = 0;

    virtual antlrcpp::Any visitXmlroot_param_version_part(PlSqlParser::Xmlroot_param_version_partContext *context) = 0;

    virtual antlrcpp::Any visitXmlroot_param_standalone_part(PlSqlParser::Xmlroot_param_standalone_partContext *context) = 0;

    virtual antlrcpp::Any visitXmlserialize_param_enconding_part(PlSqlParser::Xmlserialize_param_enconding_partContext *context) = 0;

    virtual antlrcpp::Any visitXmlserialize_param_version_part(PlSqlParser::Xmlserialize_param_version_partContext *context) = 0;

    virtual antlrcpp::Any visitXmlserialize_param_ident_part(PlSqlParser::Xmlserialize_param_ident_partContext *context) = 0;

    virtual antlrcpp::Any visitSql_plus_command(PlSqlParser::Sql_plus_commandContext *context) = 0;

    virtual antlrcpp::Any visitWhenever_command(PlSqlParser::Whenever_commandContext *context) = 0;

    virtual antlrcpp::Any visitSet_command(PlSqlParser::Set_commandContext *context) = 0;

    virtual antlrcpp::Any visitPartition_extension_clause(PlSqlParser::Partition_extension_clauseContext *context) = 0;

    virtual antlrcpp::Any visitColumn_alias(PlSqlParser::Column_aliasContext *context) = 0;

    virtual antlrcpp::Any visitTable_alias(PlSqlParser::Table_aliasContext *context) = 0;

    virtual antlrcpp::Any visitWhere_clause(PlSqlParser::Where_clauseContext *context) = 0;

    virtual antlrcpp::Any visitInto_clause(PlSqlParser::Into_clauseContext *context) = 0;

    virtual antlrcpp::Any visitXml_column_name(PlSqlParser::Xml_column_nameContext *context) = 0;

    virtual antlrcpp::Any visitCost_class_name(PlSqlParser::Cost_class_nameContext *context) = 0;

    virtual antlrcpp::Any visitAttribute_name(PlSqlParser::Attribute_nameContext *context) = 0;

    virtual antlrcpp::Any visitSavepoint_name(PlSqlParser::Savepoint_nameContext *context) = 0;

    virtual antlrcpp::Any visitRollback_segment_name(PlSqlParser::Rollback_segment_nameContext *context) = 0;

    virtual antlrcpp::Any visitTable_var_name(PlSqlParser::Table_var_nameContext *context) = 0;

    virtual antlrcpp::Any visitSchema_name(PlSqlParser::Schema_nameContext *context) = 0;

    virtual antlrcpp::Any visitRoutine_name(PlSqlParser::Routine_nameContext *context) = 0;

    virtual antlrcpp::Any visitPackage_name(PlSqlParser::Package_nameContext *context) = 0;

    virtual antlrcpp::Any visitImplementation_type_name(PlSqlParser::Implementation_type_nameContext *context) = 0;

    virtual antlrcpp::Any visitParameter_name(PlSqlParser::Parameter_nameContext *context) = 0;

    virtual antlrcpp::Any visitReference_model_name(PlSqlParser::Reference_model_nameContext *context) = 0;

    virtual antlrcpp::Any visitMain_model_name(PlSqlParser::Main_model_nameContext *context) = 0;

    virtual antlrcpp::Any visitContainer_tableview_name(PlSqlParser::Container_tableview_nameContext *context) = 0;

    virtual antlrcpp::Any visitAggregate_function_name(PlSqlParser::Aggregate_function_nameContext *context) = 0;

    virtual antlrcpp::Any visitQuery_name(PlSqlParser::Query_nameContext *context) = 0;

    virtual antlrcpp::Any visitGrantee_name(PlSqlParser::Grantee_nameContext *context) = 0;

    virtual antlrcpp::Any visitRole_name(PlSqlParser::Role_nameContext *context) = 0;

    virtual antlrcpp::Any visitConstraint_name(PlSqlParser::Constraint_nameContext *context) = 0;

    virtual antlrcpp::Any visitLabel_name(PlSqlParser::Label_nameContext *context) = 0;

    virtual antlrcpp::Any visitType_name(PlSqlParser::Type_nameContext *context) = 0;

    virtual antlrcpp::Any visitSequence_name(PlSqlParser::Sequence_nameContext *context) = 0;

    virtual antlrcpp::Any visitException_name(PlSqlParser::Exception_nameContext *context) = 0;

    virtual antlrcpp::Any visitFunction_name(PlSqlParser::Function_nameContext *context) = 0;

    virtual antlrcpp::Any visitProcedure_name(PlSqlParser::Procedure_nameContext *context) = 0;

    virtual antlrcpp::Any visitTrigger_name(PlSqlParser::Trigger_nameContext *context) = 0;

    virtual antlrcpp::Any visitVariable_name(PlSqlParser::Variable_nameContext *context) = 0;

    virtual antlrcpp::Any visitIndex_name(PlSqlParser::Index_nameContext *context) = 0;

    virtual antlrcpp::Any visitCursor_name(PlSqlParser::Cursor_nameContext *context) = 0;

    virtual antlrcpp::Any visitRecord_name(PlSqlParser::Record_nameContext *context) = 0;

    virtual antlrcpp::Any visitCollection_name(PlSqlParser::Collection_nameContext *context) = 0;

    virtual antlrcpp::Any visitLink_name(PlSqlParser::Link_nameContext *context) = 0;

    virtual antlrcpp::Any visitColumn_name(PlSqlParser::Column_nameContext *context) = 0;

    virtual antlrcpp::Any visitTableview_name(PlSqlParser::Tableview_nameContext *context) = 0;

    virtual antlrcpp::Any visitChar_set_name(PlSqlParser::Char_set_nameContext *context) = 0;

    virtual antlrcpp::Any visitSynonym_name(PlSqlParser::Synonym_nameContext *context) = 0;

    virtual antlrcpp::Any visitSchema_object_name(PlSqlParser::Schema_object_nameContext *context) = 0;

    virtual antlrcpp::Any visitDir_object_name(PlSqlParser::Dir_object_nameContext *context) = 0;

    virtual antlrcpp::Any visitUser_object_name(PlSqlParser::User_object_nameContext *context) = 0;

    virtual antlrcpp::Any visitGrant_object_name(PlSqlParser::Grant_object_nameContext *context) = 0;

    virtual antlrcpp::Any visitColumn_list(PlSqlParser::Column_listContext *context) = 0;

    virtual antlrcpp::Any visitParen_column_list(PlSqlParser::Paren_column_listContext *context) = 0;

    virtual antlrcpp::Any visitKeep_clause(PlSqlParser::Keep_clauseContext *context) = 0;

    virtual antlrcpp::Any visitFunction_argument(PlSqlParser::Function_argumentContext *context) = 0;

    virtual antlrcpp::Any visitFunction_argument_analytic(PlSqlParser::Function_argument_analyticContext *context) = 0;

    virtual antlrcpp::Any visitFunction_argument_modeling(PlSqlParser::Function_argument_modelingContext *context) = 0;

    virtual antlrcpp::Any visitRespect_or_ignore_nulls(PlSqlParser::Respect_or_ignore_nullsContext *context) = 0;

    virtual antlrcpp::Any visitArgument(PlSqlParser::ArgumentContext *context) = 0;

    virtual antlrcpp::Any visitType_spec(PlSqlParser::Type_specContext *context) = 0;

    virtual antlrcpp::Any visitDatatype(PlSqlParser::DatatypeContext *context) = 0;

    virtual antlrcpp::Any visitPrecision_part(PlSqlParser::Precision_partContext *context) = 0;

    virtual antlrcpp::Any visitNative_datatype_element(PlSqlParser::Native_datatype_elementContext *context) = 0;

    virtual antlrcpp::Any visitBind_variable(PlSqlParser::Bind_variableContext *context) = 0;

    virtual antlrcpp::Any visitGeneral_element(PlSqlParser::General_elementContext *context) = 0;

    virtual antlrcpp::Any visitGeneral_element_part(PlSqlParser::General_element_partContext *context) = 0;

    virtual antlrcpp::Any visitTable_element(PlSqlParser::Table_elementContext *context) = 0;

    virtual antlrcpp::Any visitObject_privilege(PlSqlParser::Object_privilegeContext *context) = 0;

    virtual antlrcpp::Any visitSystem_privilege(PlSqlParser::System_privilegeContext *context) = 0;

    virtual antlrcpp::Any visitConstant(PlSqlParser::ConstantContext *context) = 0;

    virtual antlrcpp::Any visitNumeric(PlSqlParser::NumericContext *context) = 0;

    virtual antlrcpp::Any visitNumeric_negative(PlSqlParser::Numeric_negativeContext *context) = 0;

    virtual antlrcpp::Any visitQuoted_string(PlSqlParser::Quoted_stringContext *context) = 0;

    virtual antlrcpp::Any visitIdentifier(PlSqlParser::IdentifierContext *context) = 0;

    virtual antlrcpp::Any visitId_expression(PlSqlParser::Id_expressionContext *context) = 0;

    virtual antlrcpp::Any visitOuter_join_sign(PlSqlParser::Outer_join_signContext *context) = 0;

    virtual antlrcpp::Any visitRegular_id(PlSqlParser::Regular_idContext *context) = 0;

    virtual antlrcpp::Any visitNon_reserved_keywords_in_12c(PlSqlParser::Non_reserved_keywords_in_12cContext *context) = 0;

    virtual antlrcpp::Any visitNon_reserved_keywords_pre12c(PlSqlParser::Non_reserved_keywords_pre12cContext *context) = 0;

    virtual antlrcpp::Any visitString_function_name(PlSqlParser::String_function_nameContext *context) = 0;

    virtual antlrcpp::Any visitNumeric_function_name(PlSqlParser::Numeric_function_nameContext *context) = 0;


};

}  // namespace oracle

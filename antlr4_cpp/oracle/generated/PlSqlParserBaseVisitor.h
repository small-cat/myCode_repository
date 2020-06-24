
// Generated from /home/jona/myGit/myCode_repository/antlr4_cpp/oracle/PlSqlParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "PlSqlParserVisitor.h"


namespace oracle {

/**
 * This class provides an empty implementation of PlSqlParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  PlSqlParserBaseVisitor : public PlSqlParserVisitor {
public:

  virtual antlrcpp::Any visitSql_script(PlSqlParser::Sql_scriptContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnit_statement(PlSqlParser::Unit_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelect_expr_statement(PlSqlParser::Select_expr_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_function(PlSqlParser::Drop_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_function(PlSqlParser::Alter_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_function_body(PlSqlParser::Create_function_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParallel_enable_clause(PlSqlParser::Parallel_enable_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartition_by_clause(PlSqlParser::Partition_by_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitResult_cache_clause(PlSqlParser::Result_cache_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelies_on_part(PlSqlParser::Relies_on_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStreaming_clause(PlSqlParser::Streaming_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_package(PlSqlParser::Drop_packageContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_package(PlSqlParser::Alter_packageContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_package(PlSqlParser::Create_packageContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_package_body(PlSqlParser::Create_package_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPackage_obj_spec(PlSqlParser::Package_obj_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProcedure_spec(PlSqlParser::Procedure_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_spec(PlSqlParser::Function_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPackage_obj_body(PlSqlParser::Package_obj_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_procedure(PlSqlParser::Drop_procedureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_procedure(PlSqlParser::Alter_procedureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_body(PlSqlParser::Function_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProcedure_body(PlSqlParser::Procedure_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_procedure_body(PlSqlParser::Create_procedure_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_trigger(PlSqlParser::Drop_triggerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_trigger(PlSqlParser::Alter_triggerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_trigger(PlSqlParser::Create_triggerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTrigger_follows_clause(PlSqlParser::Trigger_follows_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTrigger_when_clause(PlSqlParser::Trigger_when_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimple_dml_trigger(PlSqlParser::Simple_dml_triggerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFor_each_row(PlSqlParser::For_each_rowContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompound_dml_trigger(PlSqlParser::Compound_dml_triggerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNon_dml_trigger(PlSqlParser::Non_dml_triggerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTrigger_body(PlSqlParser::Trigger_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRoutine_clause(PlSqlParser::Routine_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompound_trigger_block(PlSqlParser::Compound_trigger_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTiming_point_section(PlSqlParser::Timing_point_sectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNon_dml_event(PlSqlParser::Non_dml_eventContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDml_event_clause(PlSqlParser::Dml_event_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDml_event_element(PlSqlParser::Dml_event_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDml_event_nested_clause(PlSqlParser::Dml_event_nested_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReferencing_clause(PlSqlParser::Referencing_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReferencing_element(PlSqlParser::Referencing_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_type(PlSqlParser::Drop_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_type(PlSqlParser::Alter_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompile_type_clause(PlSqlParser::Compile_type_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReplace_type_clause(PlSqlParser::Replace_type_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_method_spec(PlSqlParser::Alter_method_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_method_element(PlSqlParser::Alter_method_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_attribute_definition(PlSqlParser::Alter_attribute_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttribute_definition(PlSqlParser::Attribute_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_collection_clauses(PlSqlParser::Alter_collection_clausesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDependent_handling_clause(PlSqlParser::Dependent_handling_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDependent_exceptions_part(PlSqlParser::Dependent_exceptions_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_type(PlSqlParser::Create_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_definition(PlSqlParser::Type_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitObject_type_def(PlSqlParser::Object_type_defContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitObject_as_part(PlSqlParser::Object_as_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitObject_under_part(PlSqlParser::Object_under_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNested_table_type_def(PlSqlParser::Nested_table_type_defContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSqlj_object_type(PlSqlParser::Sqlj_object_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_body(PlSqlParser::Type_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_body_elements(PlSqlParser::Type_body_elementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMap_order_func_declaration(PlSqlParser::Map_order_func_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubprog_decl_in_type(PlSqlParser::Subprog_decl_in_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProc_decl_in_type(PlSqlParser::Proc_decl_in_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc_decl_in_type(PlSqlParser::Func_decl_in_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstructor_declaration(PlSqlParser::Constructor_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModifier_clause(PlSqlParser::Modifier_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitObject_member_spec(PlSqlParser::Object_member_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSqlj_object_type_attr(PlSqlParser::Sqlj_object_type_attrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElement_spec(PlSqlParser::Element_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElement_spec_options(PlSqlParser::Element_spec_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubprogram_spec(PlSqlParser::Subprogram_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOverriding_subprogram_spec(PlSqlParser::Overriding_subprogram_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOverriding_function_spec(PlSqlParser::Overriding_function_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_procedure_spec(PlSqlParser::Type_procedure_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_function_spec(PlSqlParser::Type_function_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstructor_spec(PlSqlParser::Constructor_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMap_order_function_spec(PlSqlParser::Map_order_function_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPragma_clause(PlSqlParser::Pragma_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPragma_elements(PlSqlParser::Pragma_elementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_elements_parameter(PlSqlParser::Type_elements_parameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_sequence(PlSqlParser::Drop_sequenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_sequence(PlSqlParser::Alter_sequenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_session(PlSqlParser::Alter_sessionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_session_set_clause(PlSqlParser::Alter_session_set_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_sequence(PlSqlParser::Create_sequenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSequence_spec(PlSqlParser::Sequence_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSequence_start_clause(PlSqlParser::Sequence_start_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_index(PlSqlParser::Create_indexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCluster_index_clause(PlSqlParser::Cluster_index_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCluster_name(PlSqlParser::Cluster_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_index_clause(PlSqlParser::Table_index_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBitmap_join_index_clause(PlSqlParser::Bitmap_join_index_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex_expr(PlSqlParser::Index_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex_properties(PlSqlParser::Index_propertiesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDomain_index_clause(PlSqlParser::Domain_index_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLocal_domain_index_clause(PlSqlParser::Local_domain_index_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXmlindex_clause(PlSqlParser::Xmlindex_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLocal_xmlindex_clause(PlSqlParser::Local_xmlindex_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGlobal_partitioned_index(PlSqlParser::Global_partitioned_indexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex_partitioning_clause(PlSqlParser::Index_partitioning_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLocal_partitioned_index(PlSqlParser::Local_partitioned_indexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOn_range_partitioned_table(PlSqlParser::On_range_partitioned_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOn_list_partitioned_table(PlSqlParser::On_list_partitioned_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOn_hash_partitioned_table(PlSqlParser::On_hash_partitioned_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOn_comp_partitioned_table(PlSqlParser::On_comp_partitioned_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex_subpartition_clause(PlSqlParser::Index_subpartition_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOdci_parameters(PlSqlParser::Odci_parametersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndextype(PlSqlParser::IndextypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_index(PlSqlParser::Alter_indexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_index_ops_set1(PlSqlParser::Alter_index_ops_set1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_index_ops_set2(PlSqlParser::Alter_index_ops_set2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVisible_or_invisible(PlSqlParser::Visible_or_invisibleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMonitoring_nomonitoring(PlSqlParser::Monitoring_nomonitoringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRebuild_clause(PlSqlParser::Rebuild_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_index_partitioning(PlSqlParser::Alter_index_partitioningContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModify_index_default_attrs(PlSqlParser::Modify_index_default_attrsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdd_hash_index_partition(PlSqlParser::Add_hash_index_partitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCoalesce_index_partition(PlSqlParser::Coalesce_index_partitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModify_index_partition(PlSqlParser::Modify_index_partitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModify_index_partitions_ops(PlSqlParser::Modify_index_partitions_opsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRename_index_partition(PlSqlParser::Rename_index_partitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_index_partition(PlSqlParser::Drop_index_partitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSplit_index_partition(PlSqlParser::Split_index_partitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex_partition_description(PlSqlParser::Index_partition_descriptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModify_index_subpartition(PlSqlParser::Modify_index_subpartitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartition_name_old(PlSqlParser::Partition_name_oldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNew_partition_name(PlSqlParser::New_partition_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNew_index_name(PlSqlParser::New_index_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_user(PlSqlParser::Create_userContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_user(PlSqlParser::Alter_userContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_identified_by(PlSqlParser::Alter_identified_byContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentified_by(PlSqlParser::Identified_byContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentified_other_clause(PlSqlParser::Identified_other_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUser_tablespace_clause(PlSqlParser::User_tablespace_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQuota_clause(PlSqlParser::Quota_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProfile_clause(PlSqlParser::Profile_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRole_clause(PlSqlParser::Role_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUser_default_role_clause(PlSqlParser::User_default_role_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPassword_expire_clause(PlSqlParser::Password_expire_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUser_lock_clause(PlSqlParser::User_lock_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUser_editions_clause(PlSqlParser::User_editions_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_user_editions_clause(PlSqlParser::Alter_user_editions_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProxy_clause(PlSqlParser::Proxy_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitContainer_names(PlSqlParser::Container_namesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSet_container_data(PlSqlParser::Set_container_dataContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdd_rem_container_data(PlSqlParser::Add_rem_container_dataContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitContainer_data_clause(PlSqlParser::Container_data_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAnalyze(PlSqlParser::AnalyzeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartition_extention_clause(PlSqlParser::Partition_extention_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValidation_clauses(PlSqlParser::Validation_clausesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOnline_or_offline(PlSqlParser::Online_or_offlineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInto_clause1(PlSqlParser::Into_clause1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartition_key_value(PlSqlParser::Partition_key_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubpartition_key_value(PlSqlParser::Subpartition_key_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssociate_statistics(PlSqlParser::Associate_statisticsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumn_association(PlSqlParser::Column_associationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_association(PlSqlParser::Function_associationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndextype_name(PlSqlParser::Indextype_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUsing_statistics_type(PlSqlParser::Using_statistics_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatistics_type_name(PlSqlParser::Statistics_type_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefault_cost_clause(PlSqlParser::Default_cost_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCpu_cost(PlSqlParser::Cpu_costContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIo_cost(PlSqlParser::Io_costContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNetwork_cost(PlSqlParser::Network_costContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefault_selectivity_clause(PlSqlParser::Default_selectivity_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefault_selectivity(PlSqlParser::Default_selectivityContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStorage_table_clause(PlSqlParser::Storage_table_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnified_auditing(PlSqlParser::Unified_auditingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPolicy_name(PlSqlParser::Policy_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAudit_traditional(PlSqlParser::Audit_traditionalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAudit_direct_path(PlSqlParser::Audit_direct_pathContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAudit_container_clause(PlSqlParser::Audit_container_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAudit_operation_clause(PlSqlParser::Audit_operation_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAuditing_by_clause(PlSqlParser::Auditing_by_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAudit_user(PlSqlParser::Audit_userContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAudit_schema_object_clause(PlSqlParser::Audit_schema_object_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSql_operation(PlSqlParser::Sql_operationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAuditing_on_clause(PlSqlParser::Auditing_on_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModel_name(PlSqlParser::Model_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitObject_name(PlSqlParser::Object_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProfile_name(PlSqlParser::Profile_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSql_statement_shortcut(PlSqlParser::Sql_statement_shortcutContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_index(PlSqlParser::Drop_indexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGrant_statement(PlSqlParser::Grant_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitContainer_clause(PlSqlParser::Container_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_directory(PlSqlParser::Create_directoryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDirectory_name(PlSqlParser::Directory_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDirectory_path(PlSqlParser::Directory_pathContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_library(PlSqlParser::Alter_libraryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLibrary_editionable(PlSqlParser::Library_editionableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLibrary_debug(PlSqlParser::Library_debugContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompiler_parameters_clause(PlSqlParser::Compiler_parameters_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameter_value(PlSqlParser::Parameter_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLibrary_name(PlSqlParser::Library_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_view(PlSqlParser::Alter_viewContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_view_editionable(PlSqlParser::Alter_view_editionableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_view(PlSqlParser::Create_viewContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitView_options(PlSqlParser::View_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitView_alias_constraint(PlSqlParser::View_alias_constraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitObject_view_clause(PlSqlParser::Object_view_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInline_constraint(PlSqlParser::Inline_constraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInline_ref_constraint(PlSqlParser::Inline_ref_constraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOut_of_line_ref_constraint(PlSqlParser::Out_of_line_ref_constraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOut_of_line_constraint(PlSqlParser::Out_of_line_constraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstraint_state(PlSqlParser::Constraint_stateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_tablespace(PlSqlParser::Alter_tablespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDatafile_tempfile_clauses(PlSqlParser::Datafile_tempfile_clausesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTablespace_logging_clauses(PlSqlParser::Tablespace_logging_clausesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTablespace_group_clause(PlSqlParser::Tablespace_group_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTablespace_group_name(PlSqlParser::Tablespace_group_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTablespace_state_clauses(PlSqlParser::Tablespace_state_clausesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFlashback_mode_clause(PlSqlParser::Flashback_mode_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNew_tablespace_name(PlSqlParser::New_tablespace_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_tablespace(PlSqlParser::Create_tablespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPermanent_tablespace_clause(PlSqlParser::Permanent_tablespace_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTablespace_encryption_spec(PlSqlParser::Tablespace_encryption_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogging_clause(PlSqlParser::Logging_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExtent_management_clause(PlSqlParser::Extent_management_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSegment_management_clause(PlSqlParser::Segment_management_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTemporary_tablespace_clause(PlSqlParser::Temporary_tablespace_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUndo_tablespace_clause(PlSqlParser::Undo_tablespace_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTablespace_retention_clause(PlSqlParser::Tablespace_retention_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDatafile_specification(PlSqlParser::Datafile_specificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTempfile_specification(PlSqlParser::Tempfile_specificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDatafile_tempfile_spec(PlSqlParser::Datafile_tempfile_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRedo_log_file_spec(PlSqlParser::Redo_log_file_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAutoextend_clause(PlSqlParser::Autoextend_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMaxsize_clause(PlSqlParser::Maxsize_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBuild_clause(PlSqlParser::Build_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParallel_clause(PlSqlParser::Parallel_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_materialized_view(PlSqlParser::Alter_materialized_viewContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_mv_option1(PlSqlParser::Alter_mv_option1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_mv_refresh(PlSqlParser::Alter_mv_refreshContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRollback_segment(PlSqlParser::Rollback_segmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModify_mv_column_clause(PlSqlParser::Modify_mv_column_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_materialized_view_log(PlSqlParser::Alter_materialized_view_logContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdd_mv_log_column_clause(PlSqlParser::Add_mv_log_column_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMove_mv_log_clause(PlSqlParser::Move_mv_log_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMv_log_augmentation(PlSqlParser::Mv_log_augmentationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDatetime_expr(PlSqlParser::Datetime_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterval_expr(PlSqlParser::Interval_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSynchronous_or_asynchronous(PlSqlParser::Synchronous_or_asynchronousContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIncluding_or_excluding(PlSqlParser::Including_or_excludingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_materialized_view_log(PlSqlParser::Create_materialized_view_logContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNew_values_clause(PlSqlParser::New_values_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMv_log_purge_clause(PlSqlParser::Mv_log_purge_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_materialized_view(PlSqlParser::Create_materialized_viewContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_mv_refresh(PlSqlParser::Create_mv_refreshContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_context(PlSqlParser::Create_contextContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOracle_namespace(PlSqlParser::Oracle_namespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_cluster(PlSqlParser::Create_clusterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_table(PlSqlParser::Create_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXmltype_table(PlSqlParser::Xmltype_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXmltype_virtual_columns(PlSqlParser::Xmltype_virtual_columnsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXmltype_column_properties(PlSqlParser::Xmltype_column_propertiesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXmltype_storage(PlSqlParser::Xmltype_storageContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXmlschema_spec(PlSqlParser::Xmlschema_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitObject_table(PlSqlParser::Object_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOid_index_clause(PlSqlParser::Oid_index_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOid_clause(PlSqlParser::Oid_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitObject_properties(PlSqlParser::Object_propertiesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitObject_table_substitution(PlSqlParser::Object_table_substitutionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelational_table(PlSqlParser::Relational_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelational_properties(PlSqlParser::Relational_propertiesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_partitioning_clauses(PlSqlParser::Table_partitioning_clausesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRange_partitions(PlSqlParser::Range_partitionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitList_partitions(PlSqlParser::List_partitionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHash_partitions(PlSqlParser::Hash_partitionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndividual_hash_partitions(PlSqlParser::Individual_hash_partitionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHash_partitions_by_quantity(PlSqlParser::Hash_partitions_by_quantityContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHash_partition_quantity(PlSqlParser::Hash_partition_quantityContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComposite_range_partitions(PlSqlParser::Composite_range_partitionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComposite_list_partitions(PlSqlParser::Composite_list_partitionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComposite_hash_partitions(PlSqlParser::Composite_hash_partitionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReference_partitioning(PlSqlParser::Reference_partitioningContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReference_partition_desc(PlSqlParser::Reference_partition_descContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSystem_partitioning(PlSqlParser::System_partitioningContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRange_partition_desc(PlSqlParser::Range_partition_descContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitList_partition_desc(PlSqlParser::List_partition_descContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubpartition_template(PlSqlParser::Subpartition_templateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHash_subpartition_quantity(PlSqlParser::Hash_subpartition_quantityContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubpartition_by_range(PlSqlParser::Subpartition_by_rangeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubpartition_by_list(PlSqlParser::Subpartition_by_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubpartition_by_hash(PlSqlParser::Subpartition_by_hashContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubpartition_name(PlSqlParser::Subpartition_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRange_subpartition_desc(PlSqlParser::Range_subpartition_descContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitList_subpartition_desc(PlSqlParser::List_subpartition_descContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndividual_hash_subparts(PlSqlParser::Individual_hash_subpartsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHash_subparts_by_quantity(PlSqlParser::Hash_subparts_by_quantityContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRange_values_clause(PlSqlParser::Range_values_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitList_values_clause(PlSqlParser::List_values_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_partition_description(PlSqlParser::Table_partition_descriptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartitioning_storage_clause(PlSqlParser::Partitioning_storage_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLob_partitioning_storage(PlSqlParser::Lob_partitioning_storageContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDatatype_null_enable(PlSqlParser::Datatype_null_enableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSize_clause(PlSqlParser::Size_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_compression(PlSqlParser::Table_compressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPhysical_attributes_clause(PlSqlParser::Physical_attributes_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStorage_clause(PlSqlParser::Storage_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeferred_segment_creation(PlSqlParser::Deferred_segment_creationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSegment_attributes_clause(PlSqlParser::Segment_attributes_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPhysical_properties(PlSqlParser::Physical_propertiesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRow_movement_clause(PlSqlParser::Row_movement_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFlashback_archive_clause(PlSqlParser::Flashback_archive_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLog_grp(PlSqlParser::Log_grpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSupplemental_table_logging(PlSqlParser::Supplemental_table_loggingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSupplemental_log_grp_clause(PlSqlParser::Supplemental_log_grp_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSupplemental_id_key_clause(PlSqlParser::Supplemental_id_key_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAllocate_extent_clause(PlSqlParser::Allocate_extent_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeallocate_unused_clause(PlSqlParser::Deallocate_unused_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShrink_clause(PlSqlParser::Shrink_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRecords_per_block_clause(PlSqlParser::Records_per_block_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUpgrade_table_clause(PlSqlParser::Upgrade_table_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_table(PlSqlParser::Drop_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComment_on_column(PlSqlParser::Comment_on_columnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnable_or_disable(PlSqlParser::Enable_or_disableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAllow_or_disallow(PlSqlParser::Allow_or_disallowContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_synonym(PlSqlParser::Create_synonymContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComment_on_table(PlSqlParser::Comment_on_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_cluster(PlSqlParser::Alter_clusterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCache_or_nocache(PlSqlParser::Cache_or_nocacheContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDatabase_name(PlSqlParser::Database_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_database(PlSqlParser::Alter_databaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStartup_clauses(PlSqlParser::Startup_clausesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitResetlogs_or_noresetlogs(PlSqlParser::Resetlogs_or_noresetlogsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUpgrade_or_downgrade(PlSqlParser::Upgrade_or_downgradeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRecovery_clauses(PlSqlParser::Recovery_clausesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBegin_or_end(PlSqlParser::Begin_or_endContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGeneral_recovery(PlSqlParser::General_recoveryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFull_database_recovery(PlSqlParser::Full_database_recoveryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartial_database_recovery(PlSqlParser::Partial_database_recoveryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartial_database_recovery_10g(PlSqlParser::Partial_database_recovery_10gContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitManaged_standby_recovery(PlSqlParser::Managed_standby_recoveryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDb_name(PlSqlParser::Db_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDatabase_file_clauses(PlSqlParser::Database_file_clausesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_datafile_clause(PlSqlParser::Create_datafile_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_datafile_clause(PlSqlParser::Alter_datafile_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_tempfile_clause(PlSqlParser::Alter_tempfile_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogfile_clauses(PlSqlParser::Logfile_clausesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdd_logfile_clauses(PlSqlParser::Add_logfile_clausesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLog_file_group(PlSqlParser::Log_file_groupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_logfile_clauses(PlSqlParser::Drop_logfile_clausesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSwitch_logfile_clause(PlSqlParser::Switch_logfile_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSupplemental_db_logging(PlSqlParser::Supplemental_db_loggingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdd_or_drop(PlSqlParser::Add_or_dropContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSupplemental_plsql_clause(PlSqlParser::Supplemental_plsql_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogfile_descriptor(PlSqlParser::Logfile_descriptorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitControlfile_clauses(PlSqlParser::Controlfile_clausesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTrace_file_clause(PlSqlParser::Trace_file_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStandby_database_clauses(PlSqlParser::Standby_database_clausesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitActivate_standby_db_clause(PlSqlParser::Activate_standby_db_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMaximize_standby_db_clause(PlSqlParser::Maximize_standby_db_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRegister_logfile_clause(PlSqlParser::Register_logfile_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCommit_switchover_clause(PlSqlParser::Commit_switchover_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStart_standby_clause(PlSqlParser::Start_standby_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStop_standby_clause(PlSqlParser::Stop_standby_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConvert_database_clause(PlSqlParser::Convert_database_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefault_settings_clause(PlSqlParser::Default_settings_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSet_time_zone_clause(PlSqlParser::Set_time_zone_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInstance_clauses(PlSqlParser::Instance_clausesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSecurity_clause(PlSqlParser::Security_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDomain(PlSqlParser::DomainContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDatabase(PlSqlParser::DatabaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEdition_name(PlSqlParser::Edition_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFilenumber(PlSqlParser::FilenumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFilename(PlSqlParser::FilenameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_table(PlSqlParser::Alter_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_table_properties(PlSqlParser::Alter_table_propertiesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_table_properties_1(PlSqlParser::Alter_table_properties_1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_iot_clauses(PlSqlParser::Alter_iot_clausesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_mapping_table_clause(PlSqlParser::Alter_mapping_table_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_overflow_clause(PlSqlParser::Alter_overflow_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdd_overflow_clause(PlSqlParser::Add_overflow_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnable_disable_clause(PlSqlParser::Enable_disable_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUsing_index_clause(PlSqlParser::Using_index_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex_attributes(PlSqlParser::Index_attributesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSort_or_nosort(PlSqlParser::Sort_or_nosortContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExceptions_clause(PlSqlParser::Exceptions_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMove_table_clause(PlSqlParser::Move_table_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex_org_table_clause(PlSqlParser::Index_org_table_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMapping_table_clause(PlSqlParser::Mapping_table_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKey_compression(PlSqlParser::Key_compressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex_org_overflow_clause(PlSqlParser::Index_org_overflow_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumn_clauses(PlSqlParser::Column_clausesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModify_collection_retrieval(PlSqlParser::Modify_collection_retrievalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCollection_item(PlSqlParser::Collection_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRename_column_clause(PlSqlParser::Rename_column_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOld_column_name(PlSqlParser::Old_column_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNew_column_name(PlSqlParser::New_column_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdd_modify_drop_column_clauses(PlSqlParser::Add_modify_drop_column_clausesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_column_clause(PlSqlParser::Drop_column_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModify_column_clauses(PlSqlParser::Modify_column_clausesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModify_col_properties(PlSqlParser::Modify_col_propertiesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModify_col_substitutable(PlSqlParser::Modify_col_substitutableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdd_column_clause(PlSqlParser::Add_column_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_varray_col_properties(PlSqlParser::Alter_varray_col_propertiesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarray_col_properties(PlSqlParser::Varray_col_propertiesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarray_storage_clause(PlSqlParser::Varray_storage_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLob_segname(PlSqlParser::Lob_segnameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLob_item(PlSqlParser::Lob_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLob_storage_parameters(PlSqlParser::Lob_storage_parametersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLob_storage_clause(PlSqlParser::Lob_storage_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModify_lob_storage_clause(PlSqlParser::Modify_lob_storage_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModify_lob_parameters(PlSqlParser::Modify_lob_parametersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLob_parameters(PlSqlParser::Lob_parametersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLob_deduplicate_clause(PlSqlParser::Lob_deduplicate_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLob_compression_clause(PlSqlParser::Lob_compression_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLob_retention_clause(PlSqlParser::Lob_retention_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEncryption_spec(PlSqlParser::Encryption_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTablespace(PlSqlParser::TablespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarray_item(PlSqlParser::Varray_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumn_properties(PlSqlParser::Column_propertiesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPeriod_definition(PlSqlParser::Period_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStart_time_column(PlSqlParser::Start_time_columnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnd_time_column(PlSqlParser::End_time_columnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumn_definition(PlSqlParser::Column_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVirtual_column_definition(PlSqlParser::Virtual_column_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOut_of_line_part_storage(PlSqlParser::Out_of_line_part_storageContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNested_table_col_properties(PlSqlParser::Nested_table_col_propertiesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNested_item(PlSqlParser::Nested_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubstitutable_column_clause(PlSqlParser::Substitutable_column_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartition_name(PlSqlParser::Partition_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSupplemental_logging_props(PlSqlParser::Supplemental_logging_propsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumn_or_attribute(PlSqlParser::Column_or_attributeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitObject_type_col_properties(PlSqlParser::Object_type_col_propertiesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstraint_clauses(PlSqlParser::Constraint_clausesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOld_constraint_name(PlSqlParser::Old_constraint_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNew_constraint_name(PlSqlParser::New_constraint_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_constraint_clause(PlSqlParser::Drop_constraint_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_primary_key_or_unique_or_generic_clause(PlSqlParser::Drop_primary_key_or_unique_or_generic_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdd_constraint(PlSqlParser::Add_constraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCheck_constraint(PlSqlParser::Check_constraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_constraint(PlSqlParser::Drop_constraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnable_constraint(PlSqlParser::Enable_constraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDisable_constraint(PlSqlParser::Disable_constraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForeign_key_clause(PlSqlParser::Foreign_key_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReferences_clause(PlSqlParser::References_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOn_delete_clause(PlSqlParser::On_delete_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnique_key_clause(PlSqlParser::Unique_key_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimary_key_clause(PlSqlParser::Primary_key_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAnonymous_block(PlSqlParser::Anonymous_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInvoker_rights_clause(PlSqlParser::Invoker_rights_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCall_spec(PlSqlParser::Call_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitJava_spec(PlSqlParser::Java_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitC_spec(PlSqlParser::C_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitC_agent_in_clause(PlSqlParser::C_agent_in_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitC_parameters_clause(PlSqlParser::C_parameters_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameter(PlSqlParser::ParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefault_value_part(PlSqlParser::Default_value_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSeq_of_declare_specs(PlSqlParser::Seq_of_declare_specsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclare_spec(PlSqlParser::Declare_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable_declaration(PlSqlParser::Variable_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubtype_declaration(PlSqlParser::Subtype_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCursor_declaration(PlSqlParser::Cursor_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameter_spec(PlSqlParser::Parameter_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitException_declaration(PlSqlParser::Exception_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPragma_declaration(PlSqlParser::Pragma_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRecord_type_def(PlSqlParser::Record_type_defContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitField_spec(PlSqlParser::Field_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRef_cursor_type_def(PlSqlParser::Ref_cursor_type_defContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_declaration(PlSqlParser::Type_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_type_def(PlSqlParser::Table_type_defContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_indexed_by_part(PlSqlParser::Table_indexed_by_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarray_type_def(PlSqlParser::Varray_type_defContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSeq_of_statements(PlSqlParser::Seq_of_statementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLabel_declaration(PlSqlParser::Label_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(PlSqlParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSwallow_to_semi(PlSqlParser::Swallow_to_semiContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignment_statement(PlSqlParser::Assignment_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitContinue_statement(PlSqlParser::Continue_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExit_statement(PlSqlParser::Exit_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGoto_statement(PlSqlParser::Goto_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_statement(PlSqlParser::If_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElsif_part(PlSqlParser::Elsif_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElse_part(PlSqlParser::Else_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLoop_statement(PlSqlParser::Loop_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCursor_loop_param(PlSqlParser::Cursor_loop_paramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForall_statement(PlSqlParser::Forall_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBounds_clause(PlSqlParser::Bounds_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBetween_bound(PlSqlParser::Between_boundContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLower_bound(PlSqlParser::Lower_boundContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUpper_bound(PlSqlParser::Upper_boundContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNull_statement(PlSqlParser::Null_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRaise_statement(PlSqlParser::Raise_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturn_statement(PlSqlParser::Return_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_call(PlSqlParser::Function_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProcedure_call(PlSqlParser::Procedure_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPipe_row_statement(PlSqlParser::Pipe_row_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBody(PlSqlParser::BodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitException_handler(PlSqlParser::Exception_handlerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTrigger_block(PlSqlParser::Trigger_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(PlSqlParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSql_statement(PlSqlParser::Sql_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExecute_immediate(PlSqlParser::Execute_immediateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDynamic_returning_clause(PlSqlParser::Dynamic_returning_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitData_manipulation_language_statements(PlSqlParser::Data_manipulation_language_statementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCursor_manipulation_statements(PlSqlParser::Cursor_manipulation_statementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClose_statement(PlSqlParser::Close_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOpen_statement(PlSqlParser::Open_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFetch_statement(PlSqlParser::Fetch_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOpen_for_statement(PlSqlParser::Open_for_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTransaction_control_statements(PlSqlParser::Transaction_control_statementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSet_transaction_command(PlSqlParser::Set_transaction_commandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSet_constraint_command(PlSqlParser::Set_constraint_commandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCommit_statement(PlSqlParser::Commit_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWrite_clause(PlSqlParser::Write_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRollback_statement(PlSqlParser::Rollback_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSavepoint_statement(PlSqlParser::Savepoint_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExplain_statement(PlSqlParser::Explain_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelect_statement(PlSqlParser::Select_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubquery_factoring_clause(PlSqlParser::Subquery_factoring_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFactoring_element(PlSqlParser::Factoring_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSearch_clause(PlSqlParser::Search_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCycle_clause(PlSqlParser::Cycle_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubquery(PlSqlParser::SubqueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubquery_basic_elements(PlSqlParser::Subquery_basic_elementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubquery_operation_part(PlSqlParser::Subquery_operation_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQuery_block(PlSqlParser::Query_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelected_list(PlSqlParser::Selected_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelected_list_element(PlSqlParser::Selected_list_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFrom_clause(PlSqlParser::From_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelect_list_elements(PlSqlParser::Select_list_elementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_ref_list(PlSqlParser::Table_ref_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_ref(PlSqlParser::Table_refContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_ref_aux(PlSqlParser::Table_ref_auxContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_ref_aux_internal_one(PlSqlParser::Table_ref_aux_internal_oneContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_ref_aux_internal_two(PlSqlParser::Table_ref_aux_internal_twoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_ref_aux_internal_three(PlSqlParser::Table_ref_aux_internal_threeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitJoin_clause(PlSqlParser::Join_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitJoin_on_part(PlSqlParser::Join_on_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitJoin_using_part(PlSqlParser::Join_using_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOuter_join_type(PlSqlParser::Outer_join_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQuery_partition_clause(PlSqlParser::Query_partition_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFlashback_query_clause(PlSqlParser::Flashback_query_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPivot_clause(PlSqlParser::Pivot_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPivot_element(PlSqlParser::Pivot_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPivot_for_clause(PlSqlParser::Pivot_for_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPivot_in_clause(PlSqlParser::Pivot_in_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPivot_in_clause_element(PlSqlParser::Pivot_in_clause_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPivot_in_clause_elements(PlSqlParser::Pivot_in_clause_elementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnpivot_clause(PlSqlParser::Unpivot_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnpivot_in_clause(PlSqlParser::Unpivot_in_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnpivot_in_elements(PlSqlParser::Unpivot_in_elementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHierarchical_query_clause(PlSqlParser::Hierarchical_query_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStart_part(PlSqlParser::Start_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGroup_by_clause(PlSqlParser::Group_by_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGroup_by_elements(PlSqlParser::Group_by_elementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRollup_cube_clause(PlSqlParser::Rollup_cube_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGrouping_sets_clause(PlSqlParser::Grouping_sets_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGrouping_sets_elements(PlSqlParser::Grouping_sets_elementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHaving_clause(PlSqlParser::Having_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModel_clause(PlSqlParser::Model_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCell_reference_options(PlSqlParser::Cell_reference_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturn_rows_clause(PlSqlParser::Return_rows_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReference_model(PlSqlParser::Reference_modelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMain_model(PlSqlParser::Main_modelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModel_column_clauses(PlSqlParser::Model_column_clausesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModel_column_partition_part(PlSqlParser::Model_column_partition_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModel_column_list(PlSqlParser::Model_column_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModel_column(PlSqlParser::Model_columnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModel_rules_clause(PlSqlParser::Model_rules_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModel_rules_part(PlSqlParser::Model_rules_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModel_rules_element(PlSqlParser::Model_rules_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCell_assignment(PlSqlParser::Cell_assignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModel_iterate_clause(PlSqlParser::Model_iterate_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUntil_part(PlSqlParser::Until_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOrder_by_clause(PlSqlParser::Order_by_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOrder_by_elements(PlSqlParser::Order_by_elementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOffset_clause(PlSqlParser::Offset_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFetch_clause(PlSqlParser::Fetch_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFor_update_clause(PlSqlParser::For_update_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFor_update_of_part(PlSqlParser::For_update_of_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFor_update_options(PlSqlParser::For_update_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUpdate_statement(PlSqlParser::Update_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUpdate_set_clause(PlSqlParser::Update_set_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumn_based_update_set_clause(PlSqlParser::Column_based_update_set_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDelete_statement(PlSqlParser::Delete_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsert_statement(PlSqlParser::Insert_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSingle_table_insert(PlSqlParser::Single_table_insertContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMulti_table_insert(PlSqlParser::Multi_table_insertContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMulti_table_element(PlSqlParser::Multi_table_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditional_insert_clause(PlSqlParser::Conditional_insert_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditional_insert_when_part(PlSqlParser::Conditional_insert_when_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditional_insert_else_part(PlSqlParser::Conditional_insert_else_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsert_into_clause(PlSqlParser::Insert_into_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValues_clause(PlSqlParser::Values_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMerge_statement(PlSqlParser::Merge_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMerge_update_clause(PlSqlParser::Merge_update_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMerge_element(PlSqlParser::Merge_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMerge_update_delete_part(PlSqlParser::Merge_update_delete_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMerge_insert_clause(PlSqlParser::Merge_insert_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelected_tableview(PlSqlParser::Selected_tableviewContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLock_table_statement(PlSqlParser::Lock_table_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWait_nowait_part(PlSqlParser::Wait_nowait_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLock_table_element(PlSqlParser::Lock_table_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLock_mode(PlSqlParser::Lock_modeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGeneral_table_ref(PlSqlParser::General_table_refContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatic_returning_clause(PlSqlParser::Static_returning_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitError_logging_clause(PlSqlParser::Error_logging_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitError_logging_into_part(PlSqlParser::Error_logging_into_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitError_logging_reject_part(PlSqlParser::Error_logging_reject_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDml_table_expression_clause(PlSqlParser::Dml_table_expression_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_collection_expression(PlSqlParser::Table_collection_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubquery_restriction_clause(PlSqlParser::Subquery_restriction_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSample_clause(PlSqlParser::Sample_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSeed_part(PlSqlParser::Seed_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCondition(PlSqlParser::ConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressions(PlSqlParser::ExpressionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(PlSqlParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCursor_expression(PlSqlParser::Cursor_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogical_expression(PlSqlParser::Logical_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultiset_expression(PlSqlParser::Multiset_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelational_expression(PlSqlParser::Relational_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompound_expression(PlSqlParser::Compound_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelational_operator(PlSqlParser::Relational_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIn_elements(PlSqlParser::In_elementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBetween_elements(PlSqlParser::Between_elementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConcatenation(PlSqlParser::ConcatenationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterval_expression(PlSqlParser::Interval_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModel_expression(PlSqlParser::Model_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModel_expression_element(PlSqlParser::Model_expression_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSingle_column_for_loop(PlSqlParser::Single_column_for_loopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMulti_column_for_loop(PlSqlParser::Multi_column_for_loopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnary_expression(PlSqlParser::Unary_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCase_statement(PlSqlParser::Case_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimple_case_statement(PlSqlParser::Simple_case_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimple_case_when_part(PlSqlParser::Simple_case_when_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSearched_case_statement(PlSqlParser::Searched_case_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSearched_case_when_part(PlSqlParser::Searched_case_when_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCase_else_part(PlSqlParser::Case_else_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAtom(PlSqlParser::AtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQuantified_expression(PlSqlParser::Quantified_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitString_function(PlSqlParser::String_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStandard_function(PlSqlParser::Standard_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLiteral(PlSqlParser::LiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumeric_function_wrapper(PlSqlParser::Numeric_function_wrapperContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumeric_function(PlSqlParser::Numeric_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOther_function(PlSqlParser::Other_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOver_clause_keyword(PlSqlParser::Over_clause_keywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWithin_or_over_clause_keyword(PlSqlParser::Within_or_over_clause_keywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStandard_prediction_function_keyword(PlSqlParser::Standard_prediction_function_keywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOver_clause(PlSqlParser::Over_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWindowing_clause(PlSqlParser::Windowing_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWindowing_type(PlSqlParser::Windowing_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWindowing_elements(PlSqlParser::Windowing_elementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUsing_clause(PlSqlParser::Using_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUsing_element(PlSqlParser::Using_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCollect_order_by_part(PlSqlParser::Collect_order_by_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWithin_or_over_part(PlSqlParser::Within_or_over_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCost_matrix_clause(PlSqlParser::Cost_matrix_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXml_passing_clause(PlSqlParser::Xml_passing_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXml_attributes_clause(PlSqlParser::Xml_attributes_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXml_namespaces_clause(PlSqlParser::Xml_namespaces_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXml_table_column(PlSqlParser::Xml_table_columnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXml_general_default_part(PlSqlParser::Xml_general_default_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXml_multiuse_expression_element(PlSqlParser::Xml_multiuse_expression_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXmlroot_param_version_part(PlSqlParser::Xmlroot_param_version_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXmlroot_param_standalone_part(PlSqlParser::Xmlroot_param_standalone_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXmlserialize_param_enconding_part(PlSqlParser::Xmlserialize_param_enconding_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXmlserialize_param_version_part(PlSqlParser::Xmlserialize_param_version_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXmlserialize_param_ident_part(PlSqlParser::Xmlserialize_param_ident_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSql_plus_command(PlSqlParser::Sql_plus_commandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhenever_command(PlSqlParser::Whenever_commandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSet_command(PlSqlParser::Set_commandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartition_extension_clause(PlSqlParser::Partition_extension_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumn_alias(PlSqlParser::Column_aliasContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_alias(PlSqlParser::Table_aliasContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhere_clause(PlSqlParser::Where_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInto_clause(PlSqlParser::Into_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXml_column_name(PlSqlParser::Xml_column_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCost_class_name(PlSqlParser::Cost_class_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttribute_name(PlSqlParser::Attribute_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSavepoint_name(PlSqlParser::Savepoint_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRollback_segment_name(PlSqlParser::Rollback_segment_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_var_name(PlSqlParser::Table_var_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSchema_name(PlSqlParser::Schema_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRoutine_name(PlSqlParser::Routine_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPackage_name(PlSqlParser::Package_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitImplementation_type_name(PlSqlParser::Implementation_type_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameter_name(PlSqlParser::Parameter_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReference_model_name(PlSqlParser::Reference_model_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMain_model_name(PlSqlParser::Main_model_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitContainer_tableview_name(PlSqlParser::Container_tableview_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAggregate_function_name(PlSqlParser::Aggregate_function_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQuery_name(PlSqlParser::Query_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGrantee_name(PlSqlParser::Grantee_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRole_name(PlSqlParser::Role_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstraint_name(PlSqlParser::Constraint_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLabel_name(PlSqlParser::Label_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_name(PlSqlParser::Type_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSequence_name(PlSqlParser::Sequence_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitException_name(PlSqlParser::Exception_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_name(PlSqlParser::Function_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProcedure_name(PlSqlParser::Procedure_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTrigger_name(PlSqlParser::Trigger_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable_name(PlSqlParser::Variable_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex_name(PlSqlParser::Index_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCursor_name(PlSqlParser::Cursor_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRecord_name(PlSqlParser::Record_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCollection_name(PlSqlParser::Collection_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLink_name(PlSqlParser::Link_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumn_name(PlSqlParser::Column_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableview_name(PlSqlParser::Tableview_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChar_set_name(PlSqlParser::Char_set_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSynonym_name(PlSqlParser::Synonym_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSchema_object_name(PlSqlParser::Schema_object_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDir_object_name(PlSqlParser::Dir_object_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUser_object_name(PlSqlParser::User_object_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGrant_object_name(PlSqlParser::Grant_object_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumn_list(PlSqlParser::Column_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParen_column_list(PlSqlParser::Paren_column_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeep_clause(PlSqlParser::Keep_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_argument(PlSqlParser::Function_argumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_argument_analytic(PlSqlParser::Function_argument_analyticContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_argument_modeling(PlSqlParser::Function_argument_modelingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRespect_or_ignore_nulls(PlSqlParser::Respect_or_ignore_nullsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArgument(PlSqlParser::ArgumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_spec(PlSqlParser::Type_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDatatype(PlSqlParser::DatatypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrecision_part(PlSqlParser::Precision_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNative_datatype_element(PlSqlParser::Native_datatype_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBind_variable(PlSqlParser::Bind_variableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGeneral_element(PlSqlParser::General_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGeneral_element_part(PlSqlParser::General_element_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_element(PlSqlParser::Table_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitObject_privilege(PlSqlParser::Object_privilegeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSystem_privilege(PlSqlParser::System_privilegeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstant(PlSqlParser::ConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumeric(PlSqlParser::NumericContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumeric_negative(PlSqlParser::Numeric_negativeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQuoted_string(PlSqlParser::Quoted_stringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifier(PlSqlParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitId_expression(PlSqlParser::Id_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOuter_join_sign(PlSqlParser::Outer_join_signContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRegular_id(PlSqlParser::Regular_idContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNon_reserved_keywords_in_12c(PlSqlParser::Non_reserved_keywords_in_12cContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNon_reserved_keywords_pre12c(PlSqlParser::Non_reserved_keywords_pre12cContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitString_function_name(PlSqlParser::String_function_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumeric_function_name(PlSqlParser::Numeric_function_nameContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace oracle

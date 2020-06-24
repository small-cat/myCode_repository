
// Generated from /home/jona/myGit/myCode_repository/antlr4_cpp/oracle/PlSqlParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "PlSqlParser.h"


namespace oracle {

/**
 * This interface defines an abstract listener for a parse tree produced by PlSqlParser.
 */
class  PlSqlParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterSql_script(PlSqlParser::Sql_scriptContext *ctx) = 0;
  virtual void exitSql_script(PlSqlParser::Sql_scriptContext *ctx) = 0;

  virtual void enterUnit_statement(PlSqlParser::Unit_statementContext *ctx) = 0;
  virtual void exitUnit_statement(PlSqlParser::Unit_statementContext *ctx) = 0;

  virtual void enterSelect_expr_statement(PlSqlParser::Select_expr_statementContext *ctx) = 0;
  virtual void exitSelect_expr_statement(PlSqlParser::Select_expr_statementContext *ctx) = 0;

  virtual void enterDrop_function(PlSqlParser::Drop_functionContext *ctx) = 0;
  virtual void exitDrop_function(PlSqlParser::Drop_functionContext *ctx) = 0;

  virtual void enterAlter_function(PlSqlParser::Alter_functionContext *ctx) = 0;
  virtual void exitAlter_function(PlSqlParser::Alter_functionContext *ctx) = 0;

  virtual void enterCreate_function_body(PlSqlParser::Create_function_bodyContext *ctx) = 0;
  virtual void exitCreate_function_body(PlSqlParser::Create_function_bodyContext *ctx) = 0;

  virtual void enterParallel_enable_clause(PlSqlParser::Parallel_enable_clauseContext *ctx) = 0;
  virtual void exitParallel_enable_clause(PlSqlParser::Parallel_enable_clauseContext *ctx) = 0;

  virtual void enterPartition_by_clause(PlSqlParser::Partition_by_clauseContext *ctx) = 0;
  virtual void exitPartition_by_clause(PlSqlParser::Partition_by_clauseContext *ctx) = 0;

  virtual void enterResult_cache_clause(PlSqlParser::Result_cache_clauseContext *ctx) = 0;
  virtual void exitResult_cache_clause(PlSqlParser::Result_cache_clauseContext *ctx) = 0;

  virtual void enterRelies_on_part(PlSqlParser::Relies_on_partContext *ctx) = 0;
  virtual void exitRelies_on_part(PlSqlParser::Relies_on_partContext *ctx) = 0;

  virtual void enterStreaming_clause(PlSqlParser::Streaming_clauseContext *ctx) = 0;
  virtual void exitStreaming_clause(PlSqlParser::Streaming_clauseContext *ctx) = 0;

  virtual void enterDrop_package(PlSqlParser::Drop_packageContext *ctx) = 0;
  virtual void exitDrop_package(PlSqlParser::Drop_packageContext *ctx) = 0;

  virtual void enterAlter_package(PlSqlParser::Alter_packageContext *ctx) = 0;
  virtual void exitAlter_package(PlSqlParser::Alter_packageContext *ctx) = 0;

  virtual void enterCreate_package(PlSqlParser::Create_packageContext *ctx) = 0;
  virtual void exitCreate_package(PlSqlParser::Create_packageContext *ctx) = 0;

  virtual void enterCreate_package_body(PlSqlParser::Create_package_bodyContext *ctx) = 0;
  virtual void exitCreate_package_body(PlSqlParser::Create_package_bodyContext *ctx) = 0;

  virtual void enterPackage_obj_spec(PlSqlParser::Package_obj_specContext *ctx) = 0;
  virtual void exitPackage_obj_spec(PlSqlParser::Package_obj_specContext *ctx) = 0;

  virtual void enterProcedure_spec(PlSqlParser::Procedure_specContext *ctx) = 0;
  virtual void exitProcedure_spec(PlSqlParser::Procedure_specContext *ctx) = 0;

  virtual void enterFunction_spec(PlSqlParser::Function_specContext *ctx) = 0;
  virtual void exitFunction_spec(PlSqlParser::Function_specContext *ctx) = 0;

  virtual void enterPackage_obj_body(PlSqlParser::Package_obj_bodyContext *ctx) = 0;
  virtual void exitPackage_obj_body(PlSqlParser::Package_obj_bodyContext *ctx) = 0;

  virtual void enterDrop_procedure(PlSqlParser::Drop_procedureContext *ctx) = 0;
  virtual void exitDrop_procedure(PlSqlParser::Drop_procedureContext *ctx) = 0;

  virtual void enterAlter_procedure(PlSqlParser::Alter_procedureContext *ctx) = 0;
  virtual void exitAlter_procedure(PlSqlParser::Alter_procedureContext *ctx) = 0;

  virtual void enterFunction_body(PlSqlParser::Function_bodyContext *ctx) = 0;
  virtual void exitFunction_body(PlSqlParser::Function_bodyContext *ctx) = 0;

  virtual void enterProcedure_body(PlSqlParser::Procedure_bodyContext *ctx) = 0;
  virtual void exitProcedure_body(PlSqlParser::Procedure_bodyContext *ctx) = 0;

  virtual void enterCreate_procedure_body(PlSqlParser::Create_procedure_bodyContext *ctx) = 0;
  virtual void exitCreate_procedure_body(PlSqlParser::Create_procedure_bodyContext *ctx) = 0;

  virtual void enterDrop_trigger(PlSqlParser::Drop_triggerContext *ctx) = 0;
  virtual void exitDrop_trigger(PlSqlParser::Drop_triggerContext *ctx) = 0;

  virtual void enterAlter_trigger(PlSqlParser::Alter_triggerContext *ctx) = 0;
  virtual void exitAlter_trigger(PlSqlParser::Alter_triggerContext *ctx) = 0;

  virtual void enterCreate_trigger(PlSqlParser::Create_triggerContext *ctx) = 0;
  virtual void exitCreate_trigger(PlSqlParser::Create_triggerContext *ctx) = 0;

  virtual void enterTrigger_follows_clause(PlSqlParser::Trigger_follows_clauseContext *ctx) = 0;
  virtual void exitTrigger_follows_clause(PlSqlParser::Trigger_follows_clauseContext *ctx) = 0;

  virtual void enterTrigger_when_clause(PlSqlParser::Trigger_when_clauseContext *ctx) = 0;
  virtual void exitTrigger_when_clause(PlSqlParser::Trigger_when_clauseContext *ctx) = 0;

  virtual void enterSimple_dml_trigger(PlSqlParser::Simple_dml_triggerContext *ctx) = 0;
  virtual void exitSimple_dml_trigger(PlSqlParser::Simple_dml_triggerContext *ctx) = 0;

  virtual void enterFor_each_row(PlSqlParser::For_each_rowContext *ctx) = 0;
  virtual void exitFor_each_row(PlSqlParser::For_each_rowContext *ctx) = 0;

  virtual void enterCompound_dml_trigger(PlSqlParser::Compound_dml_triggerContext *ctx) = 0;
  virtual void exitCompound_dml_trigger(PlSqlParser::Compound_dml_triggerContext *ctx) = 0;

  virtual void enterNon_dml_trigger(PlSqlParser::Non_dml_triggerContext *ctx) = 0;
  virtual void exitNon_dml_trigger(PlSqlParser::Non_dml_triggerContext *ctx) = 0;

  virtual void enterTrigger_body(PlSqlParser::Trigger_bodyContext *ctx) = 0;
  virtual void exitTrigger_body(PlSqlParser::Trigger_bodyContext *ctx) = 0;

  virtual void enterRoutine_clause(PlSqlParser::Routine_clauseContext *ctx) = 0;
  virtual void exitRoutine_clause(PlSqlParser::Routine_clauseContext *ctx) = 0;

  virtual void enterCompound_trigger_block(PlSqlParser::Compound_trigger_blockContext *ctx) = 0;
  virtual void exitCompound_trigger_block(PlSqlParser::Compound_trigger_blockContext *ctx) = 0;

  virtual void enterTiming_point_section(PlSqlParser::Timing_point_sectionContext *ctx) = 0;
  virtual void exitTiming_point_section(PlSqlParser::Timing_point_sectionContext *ctx) = 0;

  virtual void enterNon_dml_event(PlSqlParser::Non_dml_eventContext *ctx) = 0;
  virtual void exitNon_dml_event(PlSqlParser::Non_dml_eventContext *ctx) = 0;

  virtual void enterDml_event_clause(PlSqlParser::Dml_event_clauseContext *ctx) = 0;
  virtual void exitDml_event_clause(PlSqlParser::Dml_event_clauseContext *ctx) = 0;

  virtual void enterDml_event_element(PlSqlParser::Dml_event_elementContext *ctx) = 0;
  virtual void exitDml_event_element(PlSqlParser::Dml_event_elementContext *ctx) = 0;

  virtual void enterDml_event_nested_clause(PlSqlParser::Dml_event_nested_clauseContext *ctx) = 0;
  virtual void exitDml_event_nested_clause(PlSqlParser::Dml_event_nested_clauseContext *ctx) = 0;

  virtual void enterReferencing_clause(PlSqlParser::Referencing_clauseContext *ctx) = 0;
  virtual void exitReferencing_clause(PlSqlParser::Referencing_clauseContext *ctx) = 0;

  virtual void enterReferencing_element(PlSqlParser::Referencing_elementContext *ctx) = 0;
  virtual void exitReferencing_element(PlSqlParser::Referencing_elementContext *ctx) = 0;

  virtual void enterDrop_type(PlSqlParser::Drop_typeContext *ctx) = 0;
  virtual void exitDrop_type(PlSqlParser::Drop_typeContext *ctx) = 0;

  virtual void enterAlter_type(PlSqlParser::Alter_typeContext *ctx) = 0;
  virtual void exitAlter_type(PlSqlParser::Alter_typeContext *ctx) = 0;

  virtual void enterCompile_type_clause(PlSqlParser::Compile_type_clauseContext *ctx) = 0;
  virtual void exitCompile_type_clause(PlSqlParser::Compile_type_clauseContext *ctx) = 0;

  virtual void enterReplace_type_clause(PlSqlParser::Replace_type_clauseContext *ctx) = 0;
  virtual void exitReplace_type_clause(PlSqlParser::Replace_type_clauseContext *ctx) = 0;

  virtual void enterAlter_method_spec(PlSqlParser::Alter_method_specContext *ctx) = 0;
  virtual void exitAlter_method_spec(PlSqlParser::Alter_method_specContext *ctx) = 0;

  virtual void enterAlter_method_element(PlSqlParser::Alter_method_elementContext *ctx) = 0;
  virtual void exitAlter_method_element(PlSqlParser::Alter_method_elementContext *ctx) = 0;

  virtual void enterAlter_attribute_definition(PlSqlParser::Alter_attribute_definitionContext *ctx) = 0;
  virtual void exitAlter_attribute_definition(PlSqlParser::Alter_attribute_definitionContext *ctx) = 0;

  virtual void enterAttribute_definition(PlSqlParser::Attribute_definitionContext *ctx) = 0;
  virtual void exitAttribute_definition(PlSqlParser::Attribute_definitionContext *ctx) = 0;

  virtual void enterAlter_collection_clauses(PlSqlParser::Alter_collection_clausesContext *ctx) = 0;
  virtual void exitAlter_collection_clauses(PlSqlParser::Alter_collection_clausesContext *ctx) = 0;

  virtual void enterDependent_handling_clause(PlSqlParser::Dependent_handling_clauseContext *ctx) = 0;
  virtual void exitDependent_handling_clause(PlSqlParser::Dependent_handling_clauseContext *ctx) = 0;

  virtual void enterDependent_exceptions_part(PlSqlParser::Dependent_exceptions_partContext *ctx) = 0;
  virtual void exitDependent_exceptions_part(PlSqlParser::Dependent_exceptions_partContext *ctx) = 0;

  virtual void enterCreate_type(PlSqlParser::Create_typeContext *ctx) = 0;
  virtual void exitCreate_type(PlSqlParser::Create_typeContext *ctx) = 0;

  virtual void enterType_definition(PlSqlParser::Type_definitionContext *ctx) = 0;
  virtual void exitType_definition(PlSqlParser::Type_definitionContext *ctx) = 0;

  virtual void enterObject_type_def(PlSqlParser::Object_type_defContext *ctx) = 0;
  virtual void exitObject_type_def(PlSqlParser::Object_type_defContext *ctx) = 0;

  virtual void enterObject_as_part(PlSqlParser::Object_as_partContext *ctx) = 0;
  virtual void exitObject_as_part(PlSqlParser::Object_as_partContext *ctx) = 0;

  virtual void enterObject_under_part(PlSqlParser::Object_under_partContext *ctx) = 0;
  virtual void exitObject_under_part(PlSqlParser::Object_under_partContext *ctx) = 0;

  virtual void enterNested_table_type_def(PlSqlParser::Nested_table_type_defContext *ctx) = 0;
  virtual void exitNested_table_type_def(PlSqlParser::Nested_table_type_defContext *ctx) = 0;

  virtual void enterSqlj_object_type(PlSqlParser::Sqlj_object_typeContext *ctx) = 0;
  virtual void exitSqlj_object_type(PlSqlParser::Sqlj_object_typeContext *ctx) = 0;

  virtual void enterType_body(PlSqlParser::Type_bodyContext *ctx) = 0;
  virtual void exitType_body(PlSqlParser::Type_bodyContext *ctx) = 0;

  virtual void enterType_body_elements(PlSqlParser::Type_body_elementsContext *ctx) = 0;
  virtual void exitType_body_elements(PlSqlParser::Type_body_elementsContext *ctx) = 0;

  virtual void enterMap_order_func_declaration(PlSqlParser::Map_order_func_declarationContext *ctx) = 0;
  virtual void exitMap_order_func_declaration(PlSqlParser::Map_order_func_declarationContext *ctx) = 0;

  virtual void enterSubprog_decl_in_type(PlSqlParser::Subprog_decl_in_typeContext *ctx) = 0;
  virtual void exitSubprog_decl_in_type(PlSqlParser::Subprog_decl_in_typeContext *ctx) = 0;

  virtual void enterProc_decl_in_type(PlSqlParser::Proc_decl_in_typeContext *ctx) = 0;
  virtual void exitProc_decl_in_type(PlSqlParser::Proc_decl_in_typeContext *ctx) = 0;

  virtual void enterFunc_decl_in_type(PlSqlParser::Func_decl_in_typeContext *ctx) = 0;
  virtual void exitFunc_decl_in_type(PlSqlParser::Func_decl_in_typeContext *ctx) = 0;

  virtual void enterConstructor_declaration(PlSqlParser::Constructor_declarationContext *ctx) = 0;
  virtual void exitConstructor_declaration(PlSqlParser::Constructor_declarationContext *ctx) = 0;

  virtual void enterModifier_clause(PlSqlParser::Modifier_clauseContext *ctx) = 0;
  virtual void exitModifier_clause(PlSqlParser::Modifier_clauseContext *ctx) = 0;

  virtual void enterObject_member_spec(PlSqlParser::Object_member_specContext *ctx) = 0;
  virtual void exitObject_member_spec(PlSqlParser::Object_member_specContext *ctx) = 0;

  virtual void enterSqlj_object_type_attr(PlSqlParser::Sqlj_object_type_attrContext *ctx) = 0;
  virtual void exitSqlj_object_type_attr(PlSqlParser::Sqlj_object_type_attrContext *ctx) = 0;

  virtual void enterElement_spec(PlSqlParser::Element_specContext *ctx) = 0;
  virtual void exitElement_spec(PlSqlParser::Element_specContext *ctx) = 0;

  virtual void enterElement_spec_options(PlSqlParser::Element_spec_optionsContext *ctx) = 0;
  virtual void exitElement_spec_options(PlSqlParser::Element_spec_optionsContext *ctx) = 0;

  virtual void enterSubprogram_spec(PlSqlParser::Subprogram_specContext *ctx) = 0;
  virtual void exitSubprogram_spec(PlSqlParser::Subprogram_specContext *ctx) = 0;

  virtual void enterOverriding_subprogram_spec(PlSqlParser::Overriding_subprogram_specContext *ctx) = 0;
  virtual void exitOverriding_subprogram_spec(PlSqlParser::Overriding_subprogram_specContext *ctx) = 0;

  virtual void enterOverriding_function_spec(PlSqlParser::Overriding_function_specContext *ctx) = 0;
  virtual void exitOverriding_function_spec(PlSqlParser::Overriding_function_specContext *ctx) = 0;

  virtual void enterType_procedure_spec(PlSqlParser::Type_procedure_specContext *ctx) = 0;
  virtual void exitType_procedure_spec(PlSqlParser::Type_procedure_specContext *ctx) = 0;

  virtual void enterType_function_spec(PlSqlParser::Type_function_specContext *ctx) = 0;
  virtual void exitType_function_spec(PlSqlParser::Type_function_specContext *ctx) = 0;

  virtual void enterConstructor_spec(PlSqlParser::Constructor_specContext *ctx) = 0;
  virtual void exitConstructor_spec(PlSqlParser::Constructor_specContext *ctx) = 0;

  virtual void enterMap_order_function_spec(PlSqlParser::Map_order_function_specContext *ctx) = 0;
  virtual void exitMap_order_function_spec(PlSqlParser::Map_order_function_specContext *ctx) = 0;

  virtual void enterPragma_clause(PlSqlParser::Pragma_clauseContext *ctx) = 0;
  virtual void exitPragma_clause(PlSqlParser::Pragma_clauseContext *ctx) = 0;

  virtual void enterPragma_elements(PlSqlParser::Pragma_elementsContext *ctx) = 0;
  virtual void exitPragma_elements(PlSqlParser::Pragma_elementsContext *ctx) = 0;

  virtual void enterType_elements_parameter(PlSqlParser::Type_elements_parameterContext *ctx) = 0;
  virtual void exitType_elements_parameter(PlSqlParser::Type_elements_parameterContext *ctx) = 0;

  virtual void enterDrop_sequence(PlSqlParser::Drop_sequenceContext *ctx) = 0;
  virtual void exitDrop_sequence(PlSqlParser::Drop_sequenceContext *ctx) = 0;

  virtual void enterAlter_sequence(PlSqlParser::Alter_sequenceContext *ctx) = 0;
  virtual void exitAlter_sequence(PlSqlParser::Alter_sequenceContext *ctx) = 0;

  virtual void enterAlter_session(PlSqlParser::Alter_sessionContext *ctx) = 0;
  virtual void exitAlter_session(PlSqlParser::Alter_sessionContext *ctx) = 0;

  virtual void enterAlter_session_set_clause(PlSqlParser::Alter_session_set_clauseContext *ctx) = 0;
  virtual void exitAlter_session_set_clause(PlSqlParser::Alter_session_set_clauseContext *ctx) = 0;

  virtual void enterCreate_sequence(PlSqlParser::Create_sequenceContext *ctx) = 0;
  virtual void exitCreate_sequence(PlSqlParser::Create_sequenceContext *ctx) = 0;

  virtual void enterSequence_spec(PlSqlParser::Sequence_specContext *ctx) = 0;
  virtual void exitSequence_spec(PlSqlParser::Sequence_specContext *ctx) = 0;

  virtual void enterSequence_start_clause(PlSqlParser::Sequence_start_clauseContext *ctx) = 0;
  virtual void exitSequence_start_clause(PlSqlParser::Sequence_start_clauseContext *ctx) = 0;

  virtual void enterCreate_index(PlSqlParser::Create_indexContext *ctx) = 0;
  virtual void exitCreate_index(PlSqlParser::Create_indexContext *ctx) = 0;

  virtual void enterCluster_index_clause(PlSqlParser::Cluster_index_clauseContext *ctx) = 0;
  virtual void exitCluster_index_clause(PlSqlParser::Cluster_index_clauseContext *ctx) = 0;

  virtual void enterCluster_name(PlSqlParser::Cluster_nameContext *ctx) = 0;
  virtual void exitCluster_name(PlSqlParser::Cluster_nameContext *ctx) = 0;

  virtual void enterTable_index_clause(PlSqlParser::Table_index_clauseContext *ctx) = 0;
  virtual void exitTable_index_clause(PlSqlParser::Table_index_clauseContext *ctx) = 0;

  virtual void enterBitmap_join_index_clause(PlSqlParser::Bitmap_join_index_clauseContext *ctx) = 0;
  virtual void exitBitmap_join_index_clause(PlSqlParser::Bitmap_join_index_clauseContext *ctx) = 0;

  virtual void enterIndex_expr(PlSqlParser::Index_exprContext *ctx) = 0;
  virtual void exitIndex_expr(PlSqlParser::Index_exprContext *ctx) = 0;

  virtual void enterIndex_properties(PlSqlParser::Index_propertiesContext *ctx) = 0;
  virtual void exitIndex_properties(PlSqlParser::Index_propertiesContext *ctx) = 0;

  virtual void enterDomain_index_clause(PlSqlParser::Domain_index_clauseContext *ctx) = 0;
  virtual void exitDomain_index_clause(PlSqlParser::Domain_index_clauseContext *ctx) = 0;

  virtual void enterLocal_domain_index_clause(PlSqlParser::Local_domain_index_clauseContext *ctx) = 0;
  virtual void exitLocal_domain_index_clause(PlSqlParser::Local_domain_index_clauseContext *ctx) = 0;

  virtual void enterXmlindex_clause(PlSqlParser::Xmlindex_clauseContext *ctx) = 0;
  virtual void exitXmlindex_clause(PlSqlParser::Xmlindex_clauseContext *ctx) = 0;

  virtual void enterLocal_xmlindex_clause(PlSqlParser::Local_xmlindex_clauseContext *ctx) = 0;
  virtual void exitLocal_xmlindex_clause(PlSqlParser::Local_xmlindex_clauseContext *ctx) = 0;

  virtual void enterGlobal_partitioned_index(PlSqlParser::Global_partitioned_indexContext *ctx) = 0;
  virtual void exitGlobal_partitioned_index(PlSqlParser::Global_partitioned_indexContext *ctx) = 0;

  virtual void enterIndex_partitioning_clause(PlSqlParser::Index_partitioning_clauseContext *ctx) = 0;
  virtual void exitIndex_partitioning_clause(PlSqlParser::Index_partitioning_clauseContext *ctx) = 0;

  virtual void enterLocal_partitioned_index(PlSqlParser::Local_partitioned_indexContext *ctx) = 0;
  virtual void exitLocal_partitioned_index(PlSqlParser::Local_partitioned_indexContext *ctx) = 0;

  virtual void enterOn_range_partitioned_table(PlSqlParser::On_range_partitioned_tableContext *ctx) = 0;
  virtual void exitOn_range_partitioned_table(PlSqlParser::On_range_partitioned_tableContext *ctx) = 0;

  virtual void enterOn_list_partitioned_table(PlSqlParser::On_list_partitioned_tableContext *ctx) = 0;
  virtual void exitOn_list_partitioned_table(PlSqlParser::On_list_partitioned_tableContext *ctx) = 0;

  virtual void enterOn_hash_partitioned_table(PlSqlParser::On_hash_partitioned_tableContext *ctx) = 0;
  virtual void exitOn_hash_partitioned_table(PlSqlParser::On_hash_partitioned_tableContext *ctx) = 0;

  virtual void enterOn_comp_partitioned_table(PlSqlParser::On_comp_partitioned_tableContext *ctx) = 0;
  virtual void exitOn_comp_partitioned_table(PlSqlParser::On_comp_partitioned_tableContext *ctx) = 0;

  virtual void enterIndex_subpartition_clause(PlSqlParser::Index_subpartition_clauseContext *ctx) = 0;
  virtual void exitIndex_subpartition_clause(PlSqlParser::Index_subpartition_clauseContext *ctx) = 0;

  virtual void enterOdci_parameters(PlSqlParser::Odci_parametersContext *ctx) = 0;
  virtual void exitOdci_parameters(PlSqlParser::Odci_parametersContext *ctx) = 0;

  virtual void enterIndextype(PlSqlParser::IndextypeContext *ctx) = 0;
  virtual void exitIndextype(PlSqlParser::IndextypeContext *ctx) = 0;

  virtual void enterAlter_index(PlSqlParser::Alter_indexContext *ctx) = 0;
  virtual void exitAlter_index(PlSqlParser::Alter_indexContext *ctx) = 0;

  virtual void enterAlter_index_ops_set1(PlSqlParser::Alter_index_ops_set1Context *ctx) = 0;
  virtual void exitAlter_index_ops_set1(PlSqlParser::Alter_index_ops_set1Context *ctx) = 0;

  virtual void enterAlter_index_ops_set2(PlSqlParser::Alter_index_ops_set2Context *ctx) = 0;
  virtual void exitAlter_index_ops_set2(PlSqlParser::Alter_index_ops_set2Context *ctx) = 0;

  virtual void enterVisible_or_invisible(PlSqlParser::Visible_or_invisibleContext *ctx) = 0;
  virtual void exitVisible_or_invisible(PlSqlParser::Visible_or_invisibleContext *ctx) = 0;

  virtual void enterMonitoring_nomonitoring(PlSqlParser::Monitoring_nomonitoringContext *ctx) = 0;
  virtual void exitMonitoring_nomonitoring(PlSqlParser::Monitoring_nomonitoringContext *ctx) = 0;

  virtual void enterRebuild_clause(PlSqlParser::Rebuild_clauseContext *ctx) = 0;
  virtual void exitRebuild_clause(PlSqlParser::Rebuild_clauseContext *ctx) = 0;

  virtual void enterAlter_index_partitioning(PlSqlParser::Alter_index_partitioningContext *ctx) = 0;
  virtual void exitAlter_index_partitioning(PlSqlParser::Alter_index_partitioningContext *ctx) = 0;

  virtual void enterModify_index_default_attrs(PlSqlParser::Modify_index_default_attrsContext *ctx) = 0;
  virtual void exitModify_index_default_attrs(PlSqlParser::Modify_index_default_attrsContext *ctx) = 0;

  virtual void enterAdd_hash_index_partition(PlSqlParser::Add_hash_index_partitionContext *ctx) = 0;
  virtual void exitAdd_hash_index_partition(PlSqlParser::Add_hash_index_partitionContext *ctx) = 0;

  virtual void enterCoalesce_index_partition(PlSqlParser::Coalesce_index_partitionContext *ctx) = 0;
  virtual void exitCoalesce_index_partition(PlSqlParser::Coalesce_index_partitionContext *ctx) = 0;

  virtual void enterModify_index_partition(PlSqlParser::Modify_index_partitionContext *ctx) = 0;
  virtual void exitModify_index_partition(PlSqlParser::Modify_index_partitionContext *ctx) = 0;

  virtual void enterModify_index_partitions_ops(PlSqlParser::Modify_index_partitions_opsContext *ctx) = 0;
  virtual void exitModify_index_partitions_ops(PlSqlParser::Modify_index_partitions_opsContext *ctx) = 0;

  virtual void enterRename_index_partition(PlSqlParser::Rename_index_partitionContext *ctx) = 0;
  virtual void exitRename_index_partition(PlSqlParser::Rename_index_partitionContext *ctx) = 0;

  virtual void enterDrop_index_partition(PlSqlParser::Drop_index_partitionContext *ctx) = 0;
  virtual void exitDrop_index_partition(PlSqlParser::Drop_index_partitionContext *ctx) = 0;

  virtual void enterSplit_index_partition(PlSqlParser::Split_index_partitionContext *ctx) = 0;
  virtual void exitSplit_index_partition(PlSqlParser::Split_index_partitionContext *ctx) = 0;

  virtual void enterIndex_partition_description(PlSqlParser::Index_partition_descriptionContext *ctx) = 0;
  virtual void exitIndex_partition_description(PlSqlParser::Index_partition_descriptionContext *ctx) = 0;

  virtual void enterModify_index_subpartition(PlSqlParser::Modify_index_subpartitionContext *ctx) = 0;
  virtual void exitModify_index_subpartition(PlSqlParser::Modify_index_subpartitionContext *ctx) = 0;

  virtual void enterPartition_name_old(PlSqlParser::Partition_name_oldContext *ctx) = 0;
  virtual void exitPartition_name_old(PlSqlParser::Partition_name_oldContext *ctx) = 0;

  virtual void enterNew_partition_name(PlSqlParser::New_partition_nameContext *ctx) = 0;
  virtual void exitNew_partition_name(PlSqlParser::New_partition_nameContext *ctx) = 0;

  virtual void enterNew_index_name(PlSqlParser::New_index_nameContext *ctx) = 0;
  virtual void exitNew_index_name(PlSqlParser::New_index_nameContext *ctx) = 0;

  virtual void enterCreate_user(PlSqlParser::Create_userContext *ctx) = 0;
  virtual void exitCreate_user(PlSqlParser::Create_userContext *ctx) = 0;

  virtual void enterAlter_user(PlSqlParser::Alter_userContext *ctx) = 0;
  virtual void exitAlter_user(PlSqlParser::Alter_userContext *ctx) = 0;

  virtual void enterAlter_identified_by(PlSqlParser::Alter_identified_byContext *ctx) = 0;
  virtual void exitAlter_identified_by(PlSqlParser::Alter_identified_byContext *ctx) = 0;

  virtual void enterIdentified_by(PlSqlParser::Identified_byContext *ctx) = 0;
  virtual void exitIdentified_by(PlSqlParser::Identified_byContext *ctx) = 0;

  virtual void enterIdentified_other_clause(PlSqlParser::Identified_other_clauseContext *ctx) = 0;
  virtual void exitIdentified_other_clause(PlSqlParser::Identified_other_clauseContext *ctx) = 0;

  virtual void enterUser_tablespace_clause(PlSqlParser::User_tablespace_clauseContext *ctx) = 0;
  virtual void exitUser_tablespace_clause(PlSqlParser::User_tablespace_clauseContext *ctx) = 0;

  virtual void enterQuota_clause(PlSqlParser::Quota_clauseContext *ctx) = 0;
  virtual void exitQuota_clause(PlSqlParser::Quota_clauseContext *ctx) = 0;

  virtual void enterProfile_clause(PlSqlParser::Profile_clauseContext *ctx) = 0;
  virtual void exitProfile_clause(PlSqlParser::Profile_clauseContext *ctx) = 0;

  virtual void enterRole_clause(PlSqlParser::Role_clauseContext *ctx) = 0;
  virtual void exitRole_clause(PlSqlParser::Role_clauseContext *ctx) = 0;

  virtual void enterUser_default_role_clause(PlSqlParser::User_default_role_clauseContext *ctx) = 0;
  virtual void exitUser_default_role_clause(PlSqlParser::User_default_role_clauseContext *ctx) = 0;

  virtual void enterPassword_expire_clause(PlSqlParser::Password_expire_clauseContext *ctx) = 0;
  virtual void exitPassword_expire_clause(PlSqlParser::Password_expire_clauseContext *ctx) = 0;

  virtual void enterUser_lock_clause(PlSqlParser::User_lock_clauseContext *ctx) = 0;
  virtual void exitUser_lock_clause(PlSqlParser::User_lock_clauseContext *ctx) = 0;

  virtual void enterUser_editions_clause(PlSqlParser::User_editions_clauseContext *ctx) = 0;
  virtual void exitUser_editions_clause(PlSqlParser::User_editions_clauseContext *ctx) = 0;

  virtual void enterAlter_user_editions_clause(PlSqlParser::Alter_user_editions_clauseContext *ctx) = 0;
  virtual void exitAlter_user_editions_clause(PlSqlParser::Alter_user_editions_clauseContext *ctx) = 0;

  virtual void enterProxy_clause(PlSqlParser::Proxy_clauseContext *ctx) = 0;
  virtual void exitProxy_clause(PlSqlParser::Proxy_clauseContext *ctx) = 0;

  virtual void enterContainer_names(PlSqlParser::Container_namesContext *ctx) = 0;
  virtual void exitContainer_names(PlSqlParser::Container_namesContext *ctx) = 0;

  virtual void enterSet_container_data(PlSqlParser::Set_container_dataContext *ctx) = 0;
  virtual void exitSet_container_data(PlSqlParser::Set_container_dataContext *ctx) = 0;

  virtual void enterAdd_rem_container_data(PlSqlParser::Add_rem_container_dataContext *ctx) = 0;
  virtual void exitAdd_rem_container_data(PlSqlParser::Add_rem_container_dataContext *ctx) = 0;

  virtual void enterContainer_data_clause(PlSqlParser::Container_data_clauseContext *ctx) = 0;
  virtual void exitContainer_data_clause(PlSqlParser::Container_data_clauseContext *ctx) = 0;

  virtual void enterAnalyze(PlSqlParser::AnalyzeContext *ctx) = 0;
  virtual void exitAnalyze(PlSqlParser::AnalyzeContext *ctx) = 0;

  virtual void enterPartition_extention_clause(PlSqlParser::Partition_extention_clauseContext *ctx) = 0;
  virtual void exitPartition_extention_clause(PlSqlParser::Partition_extention_clauseContext *ctx) = 0;

  virtual void enterValidation_clauses(PlSqlParser::Validation_clausesContext *ctx) = 0;
  virtual void exitValidation_clauses(PlSqlParser::Validation_clausesContext *ctx) = 0;

  virtual void enterOnline_or_offline(PlSqlParser::Online_or_offlineContext *ctx) = 0;
  virtual void exitOnline_or_offline(PlSqlParser::Online_or_offlineContext *ctx) = 0;

  virtual void enterInto_clause1(PlSqlParser::Into_clause1Context *ctx) = 0;
  virtual void exitInto_clause1(PlSqlParser::Into_clause1Context *ctx) = 0;

  virtual void enterPartition_key_value(PlSqlParser::Partition_key_valueContext *ctx) = 0;
  virtual void exitPartition_key_value(PlSqlParser::Partition_key_valueContext *ctx) = 0;

  virtual void enterSubpartition_key_value(PlSqlParser::Subpartition_key_valueContext *ctx) = 0;
  virtual void exitSubpartition_key_value(PlSqlParser::Subpartition_key_valueContext *ctx) = 0;

  virtual void enterAssociate_statistics(PlSqlParser::Associate_statisticsContext *ctx) = 0;
  virtual void exitAssociate_statistics(PlSqlParser::Associate_statisticsContext *ctx) = 0;

  virtual void enterColumn_association(PlSqlParser::Column_associationContext *ctx) = 0;
  virtual void exitColumn_association(PlSqlParser::Column_associationContext *ctx) = 0;

  virtual void enterFunction_association(PlSqlParser::Function_associationContext *ctx) = 0;
  virtual void exitFunction_association(PlSqlParser::Function_associationContext *ctx) = 0;

  virtual void enterIndextype_name(PlSqlParser::Indextype_nameContext *ctx) = 0;
  virtual void exitIndextype_name(PlSqlParser::Indextype_nameContext *ctx) = 0;

  virtual void enterUsing_statistics_type(PlSqlParser::Using_statistics_typeContext *ctx) = 0;
  virtual void exitUsing_statistics_type(PlSqlParser::Using_statistics_typeContext *ctx) = 0;

  virtual void enterStatistics_type_name(PlSqlParser::Statistics_type_nameContext *ctx) = 0;
  virtual void exitStatistics_type_name(PlSqlParser::Statistics_type_nameContext *ctx) = 0;

  virtual void enterDefault_cost_clause(PlSqlParser::Default_cost_clauseContext *ctx) = 0;
  virtual void exitDefault_cost_clause(PlSqlParser::Default_cost_clauseContext *ctx) = 0;

  virtual void enterCpu_cost(PlSqlParser::Cpu_costContext *ctx) = 0;
  virtual void exitCpu_cost(PlSqlParser::Cpu_costContext *ctx) = 0;

  virtual void enterIo_cost(PlSqlParser::Io_costContext *ctx) = 0;
  virtual void exitIo_cost(PlSqlParser::Io_costContext *ctx) = 0;

  virtual void enterNetwork_cost(PlSqlParser::Network_costContext *ctx) = 0;
  virtual void exitNetwork_cost(PlSqlParser::Network_costContext *ctx) = 0;

  virtual void enterDefault_selectivity_clause(PlSqlParser::Default_selectivity_clauseContext *ctx) = 0;
  virtual void exitDefault_selectivity_clause(PlSqlParser::Default_selectivity_clauseContext *ctx) = 0;

  virtual void enterDefault_selectivity(PlSqlParser::Default_selectivityContext *ctx) = 0;
  virtual void exitDefault_selectivity(PlSqlParser::Default_selectivityContext *ctx) = 0;

  virtual void enterStorage_table_clause(PlSqlParser::Storage_table_clauseContext *ctx) = 0;
  virtual void exitStorage_table_clause(PlSqlParser::Storage_table_clauseContext *ctx) = 0;

  virtual void enterUnified_auditing(PlSqlParser::Unified_auditingContext *ctx) = 0;
  virtual void exitUnified_auditing(PlSqlParser::Unified_auditingContext *ctx) = 0;

  virtual void enterPolicy_name(PlSqlParser::Policy_nameContext *ctx) = 0;
  virtual void exitPolicy_name(PlSqlParser::Policy_nameContext *ctx) = 0;

  virtual void enterAudit_traditional(PlSqlParser::Audit_traditionalContext *ctx) = 0;
  virtual void exitAudit_traditional(PlSqlParser::Audit_traditionalContext *ctx) = 0;

  virtual void enterAudit_direct_path(PlSqlParser::Audit_direct_pathContext *ctx) = 0;
  virtual void exitAudit_direct_path(PlSqlParser::Audit_direct_pathContext *ctx) = 0;

  virtual void enterAudit_container_clause(PlSqlParser::Audit_container_clauseContext *ctx) = 0;
  virtual void exitAudit_container_clause(PlSqlParser::Audit_container_clauseContext *ctx) = 0;

  virtual void enterAudit_operation_clause(PlSqlParser::Audit_operation_clauseContext *ctx) = 0;
  virtual void exitAudit_operation_clause(PlSqlParser::Audit_operation_clauseContext *ctx) = 0;

  virtual void enterAuditing_by_clause(PlSqlParser::Auditing_by_clauseContext *ctx) = 0;
  virtual void exitAuditing_by_clause(PlSqlParser::Auditing_by_clauseContext *ctx) = 0;

  virtual void enterAudit_user(PlSqlParser::Audit_userContext *ctx) = 0;
  virtual void exitAudit_user(PlSqlParser::Audit_userContext *ctx) = 0;

  virtual void enterAudit_schema_object_clause(PlSqlParser::Audit_schema_object_clauseContext *ctx) = 0;
  virtual void exitAudit_schema_object_clause(PlSqlParser::Audit_schema_object_clauseContext *ctx) = 0;

  virtual void enterSql_operation(PlSqlParser::Sql_operationContext *ctx) = 0;
  virtual void exitSql_operation(PlSqlParser::Sql_operationContext *ctx) = 0;

  virtual void enterAuditing_on_clause(PlSqlParser::Auditing_on_clauseContext *ctx) = 0;
  virtual void exitAuditing_on_clause(PlSqlParser::Auditing_on_clauseContext *ctx) = 0;

  virtual void enterModel_name(PlSqlParser::Model_nameContext *ctx) = 0;
  virtual void exitModel_name(PlSqlParser::Model_nameContext *ctx) = 0;

  virtual void enterObject_name(PlSqlParser::Object_nameContext *ctx) = 0;
  virtual void exitObject_name(PlSqlParser::Object_nameContext *ctx) = 0;

  virtual void enterProfile_name(PlSqlParser::Profile_nameContext *ctx) = 0;
  virtual void exitProfile_name(PlSqlParser::Profile_nameContext *ctx) = 0;

  virtual void enterSql_statement_shortcut(PlSqlParser::Sql_statement_shortcutContext *ctx) = 0;
  virtual void exitSql_statement_shortcut(PlSqlParser::Sql_statement_shortcutContext *ctx) = 0;

  virtual void enterDrop_index(PlSqlParser::Drop_indexContext *ctx) = 0;
  virtual void exitDrop_index(PlSqlParser::Drop_indexContext *ctx) = 0;

  virtual void enterGrant_statement(PlSqlParser::Grant_statementContext *ctx) = 0;
  virtual void exitGrant_statement(PlSqlParser::Grant_statementContext *ctx) = 0;

  virtual void enterContainer_clause(PlSqlParser::Container_clauseContext *ctx) = 0;
  virtual void exitContainer_clause(PlSqlParser::Container_clauseContext *ctx) = 0;

  virtual void enterCreate_directory(PlSqlParser::Create_directoryContext *ctx) = 0;
  virtual void exitCreate_directory(PlSqlParser::Create_directoryContext *ctx) = 0;

  virtual void enterDirectory_name(PlSqlParser::Directory_nameContext *ctx) = 0;
  virtual void exitDirectory_name(PlSqlParser::Directory_nameContext *ctx) = 0;

  virtual void enterDirectory_path(PlSqlParser::Directory_pathContext *ctx) = 0;
  virtual void exitDirectory_path(PlSqlParser::Directory_pathContext *ctx) = 0;

  virtual void enterAlter_library(PlSqlParser::Alter_libraryContext *ctx) = 0;
  virtual void exitAlter_library(PlSqlParser::Alter_libraryContext *ctx) = 0;

  virtual void enterLibrary_editionable(PlSqlParser::Library_editionableContext *ctx) = 0;
  virtual void exitLibrary_editionable(PlSqlParser::Library_editionableContext *ctx) = 0;

  virtual void enterLibrary_debug(PlSqlParser::Library_debugContext *ctx) = 0;
  virtual void exitLibrary_debug(PlSqlParser::Library_debugContext *ctx) = 0;

  virtual void enterCompiler_parameters_clause(PlSqlParser::Compiler_parameters_clauseContext *ctx) = 0;
  virtual void exitCompiler_parameters_clause(PlSqlParser::Compiler_parameters_clauseContext *ctx) = 0;

  virtual void enterParameter_value(PlSqlParser::Parameter_valueContext *ctx) = 0;
  virtual void exitParameter_value(PlSqlParser::Parameter_valueContext *ctx) = 0;

  virtual void enterLibrary_name(PlSqlParser::Library_nameContext *ctx) = 0;
  virtual void exitLibrary_name(PlSqlParser::Library_nameContext *ctx) = 0;

  virtual void enterAlter_view(PlSqlParser::Alter_viewContext *ctx) = 0;
  virtual void exitAlter_view(PlSqlParser::Alter_viewContext *ctx) = 0;

  virtual void enterAlter_view_editionable(PlSqlParser::Alter_view_editionableContext *ctx) = 0;
  virtual void exitAlter_view_editionable(PlSqlParser::Alter_view_editionableContext *ctx) = 0;

  virtual void enterCreate_view(PlSqlParser::Create_viewContext *ctx) = 0;
  virtual void exitCreate_view(PlSqlParser::Create_viewContext *ctx) = 0;

  virtual void enterView_options(PlSqlParser::View_optionsContext *ctx) = 0;
  virtual void exitView_options(PlSqlParser::View_optionsContext *ctx) = 0;

  virtual void enterView_alias_constraint(PlSqlParser::View_alias_constraintContext *ctx) = 0;
  virtual void exitView_alias_constraint(PlSqlParser::View_alias_constraintContext *ctx) = 0;

  virtual void enterObject_view_clause(PlSqlParser::Object_view_clauseContext *ctx) = 0;
  virtual void exitObject_view_clause(PlSqlParser::Object_view_clauseContext *ctx) = 0;

  virtual void enterInline_constraint(PlSqlParser::Inline_constraintContext *ctx) = 0;
  virtual void exitInline_constraint(PlSqlParser::Inline_constraintContext *ctx) = 0;

  virtual void enterInline_ref_constraint(PlSqlParser::Inline_ref_constraintContext *ctx) = 0;
  virtual void exitInline_ref_constraint(PlSqlParser::Inline_ref_constraintContext *ctx) = 0;

  virtual void enterOut_of_line_ref_constraint(PlSqlParser::Out_of_line_ref_constraintContext *ctx) = 0;
  virtual void exitOut_of_line_ref_constraint(PlSqlParser::Out_of_line_ref_constraintContext *ctx) = 0;

  virtual void enterOut_of_line_constraint(PlSqlParser::Out_of_line_constraintContext *ctx) = 0;
  virtual void exitOut_of_line_constraint(PlSqlParser::Out_of_line_constraintContext *ctx) = 0;

  virtual void enterConstraint_state(PlSqlParser::Constraint_stateContext *ctx) = 0;
  virtual void exitConstraint_state(PlSqlParser::Constraint_stateContext *ctx) = 0;

  virtual void enterAlter_tablespace(PlSqlParser::Alter_tablespaceContext *ctx) = 0;
  virtual void exitAlter_tablespace(PlSqlParser::Alter_tablespaceContext *ctx) = 0;

  virtual void enterDatafile_tempfile_clauses(PlSqlParser::Datafile_tempfile_clausesContext *ctx) = 0;
  virtual void exitDatafile_tempfile_clauses(PlSqlParser::Datafile_tempfile_clausesContext *ctx) = 0;

  virtual void enterTablespace_logging_clauses(PlSqlParser::Tablespace_logging_clausesContext *ctx) = 0;
  virtual void exitTablespace_logging_clauses(PlSqlParser::Tablespace_logging_clausesContext *ctx) = 0;

  virtual void enterTablespace_group_clause(PlSqlParser::Tablespace_group_clauseContext *ctx) = 0;
  virtual void exitTablespace_group_clause(PlSqlParser::Tablespace_group_clauseContext *ctx) = 0;

  virtual void enterTablespace_group_name(PlSqlParser::Tablespace_group_nameContext *ctx) = 0;
  virtual void exitTablespace_group_name(PlSqlParser::Tablespace_group_nameContext *ctx) = 0;

  virtual void enterTablespace_state_clauses(PlSqlParser::Tablespace_state_clausesContext *ctx) = 0;
  virtual void exitTablespace_state_clauses(PlSqlParser::Tablespace_state_clausesContext *ctx) = 0;

  virtual void enterFlashback_mode_clause(PlSqlParser::Flashback_mode_clauseContext *ctx) = 0;
  virtual void exitFlashback_mode_clause(PlSqlParser::Flashback_mode_clauseContext *ctx) = 0;

  virtual void enterNew_tablespace_name(PlSqlParser::New_tablespace_nameContext *ctx) = 0;
  virtual void exitNew_tablespace_name(PlSqlParser::New_tablespace_nameContext *ctx) = 0;

  virtual void enterCreate_tablespace(PlSqlParser::Create_tablespaceContext *ctx) = 0;
  virtual void exitCreate_tablespace(PlSqlParser::Create_tablespaceContext *ctx) = 0;

  virtual void enterPermanent_tablespace_clause(PlSqlParser::Permanent_tablespace_clauseContext *ctx) = 0;
  virtual void exitPermanent_tablespace_clause(PlSqlParser::Permanent_tablespace_clauseContext *ctx) = 0;

  virtual void enterTablespace_encryption_spec(PlSqlParser::Tablespace_encryption_specContext *ctx) = 0;
  virtual void exitTablespace_encryption_spec(PlSqlParser::Tablespace_encryption_specContext *ctx) = 0;

  virtual void enterLogging_clause(PlSqlParser::Logging_clauseContext *ctx) = 0;
  virtual void exitLogging_clause(PlSqlParser::Logging_clauseContext *ctx) = 0;

  virtual void enterExtent_management_clause(PlSqlParser::Extent_management_clauseContext *ctx) = 0;
  virtual void exitExtent_management_clause(PlSqlParser::Extent_management_clauseContext *ctx) = 0;

  virtual void enterSegment_management_clause(PlSqlParser::Segment_management_clauseContext *ctx) = 0;
  virtual void exitSegment_management_clause(PlSqlParser::Segment_management_clauseContext *ctx) = 0;

  virtual void enterTemporary_tablespace_clause(PlSqlParser::Temporary_tablespace_clauseContext *ctx) = 0;
  virtual void exitTemporary_tablespace_clause(PlSqlParser::Temporary_tablespace_clauseContext *ctx) = 0;

  virtual void enterUndo_tablespace_clause(PlSqlParser::Undo_tablespace_clauseContext *ctx) = 0;
  virtual void exitUndo_tablespace_clause(PlSqlParser::Undo_tablespace_clauseContext *ctx) = 0;

  virtual void enterTablespace_retention_clause(PlSqlParser::Tablespace_retention_clauseContext *ctx) = 0;
  virtual void exitTablespace_retention_clause(PlSqlParser::Tablespace_retention_clauseContext *ctx) = 0;

  virtual void enterDatafile_specification(PlSqlParser::Datafile_specificationContext *ctx) = 0;
  virtual void exitDatafile_specification(PlSqlParser::Datafile_specificationContext *ctx) = 0;

  virtual void enterTempfile_specification(PlSqlParser::Tempfile_specificationContext *ctx) = 0;
  virtual void exitTempfile_specification(PlSqlParser::Tempfile_specificationContext *ctx) = 0;

  virtual void enterDatafile_tempfile_spec(PlSqlParser::Datafile_tempfile_specContext *ctx) = 0;
  virtual void exitDatafile_tempfile_spec(PlSqlParser::Datafile_tempfile_specContext *ctx) = 0;

  virtual void enterRedo_log_file_spec(PlSqlParser::Redo_log_file_specContext *ctx) = 0;
  virtual void exitRedo_log_file_spec(PlSqlParser::Redo_log_file_specContext *ctx) = 0;

  virtual void enterAutoextend_clause(PlSqlParser::Autoextend_clauseContext *ctx) = 0;
  virtual void exitAutoextend_clause(PlSqlParser::Autoextend_clauseContext *ctx) = 0;

  virtual void enterMaxsize_clause(PlSqlParser::Maxsize_clauseContext *ctx) = 0;
  virtual void exitMaxsize_clause(PlSqlParser::Maxsize_clauseContext *ctx) = 0;

  virtual void enterBuild_clause(PlSqlParser::Build_clauseContext *ctx) = 0;
  virtual void exitBuild_clause(PlSqlParser::Build_clauseContext *ctx) = 0;

  virtual void enterParallel_clause(PlSqlParser::Parallel_clauseContext *ctx) = 0;
  virtual void exitParallel_clause(PlSqlParser::Parallel_clauseContext *ctx) = 0;

  virtual void enterAlter_materialized_view(PlSqlParser::Alter_materialized_viewContext *ctx) = 0;
  virtual void exitAlter_materialized_view(PlSqlParser::Alter_materialized_viewContext *ctx) = 0;

  virtual void enterAlter_mv_option1(PlSqlParser::Alter_mv_option1Context *ctx) = 0;
  virtual void exitAlter_mv_option1(PlSqlParser::Alter_mv_option1Context *ctx) = 0;

  virtual void enterAlter_mv_refresh(PlSqlParser::Alter_mv_refreshContext *ctx) = 0;
  virtual void exitAlter_mv_refresh(PlSqlParser::Alter_mv_refreshContext *ctx) = 0;

  virtual void enterRollback_segment(PlSqlParser::Rollback_segmentContext *ctx) = 0;
  virtual void exitRollback_segment(PlSqlParser::Rollback_segmentContext *ctx) = 0;

  virtual void enterModify_mv_column_clause(PlSqlParser::Modify_mv_column_clauseContext *ctx) = 0;
  virtual void exitModify_mv_column_clause(PlSqlParser::Modify_mv_column_clauseContext *ctx) = 0;

  virtual void enterAlter_materialized_view_log(PlSqlParser::Alter_materialized_view_logContext *ctx) = 0;
  virtual void exitAlter_materialized_view_log(PlSqlParser::Alter_materialized_view_logContext *ctx) = 0;

  virtual void enterAdd_mv_log_column_clause(PlSqlParser::Add_mv_log_column_clauseContext *ctx) = 0;
  virtual void exitAdd_mv_log_column_clause(PlSqlParser::Add_mv_log_column_clauseContext *ctx) = 0;

  virtual void enterMove_mv_log_clause(PlSqlParser::Move_mv_log_clauseContext *ctx) = 0;
  virtual void exitMove_mv_log_clause(PlSqlParser::Move_mv_log_clauseContext *ctx) = 0;

  virtual void enterMv_log_augmentation(PlSqlParser::Mv_log_augmentationContext *ctx) = 0;
  virtual void exitMv_log_augmentation(PlSqlParser::Mv_log_augmentationContext *ctx) = 0;

  virtual void enterDatetime_expr(PlSqlParser::Datetime_exprContext *ctx) = 0;
  virtual void exitDatetime_expr(PlSqlParser::Datetime_exprContext *ctx) = 0;

  virtual void enterInterval_expr(PlSqlParser::Interval_exprContext *ctx) = 0;
  virtual void exitInterval_expr(PlSqlParser::Interval_exprContext *ctx) = 0;

  virtual void enterSynchronous_or_asynchronous(PlSqlParser::Synchronous_or_asynchronousContext *ctx) = 0;
  virtual void exitSynchronous_or_asynchronous(PlSqlParser::Synchronous_or_asynchronousContext *ctx) = 0;

  virtual void enterIncluding_or_excluding(PlSqlParser::Including_or_excludingContext *ctx) = 0;
  virtual void exitIncluding_or_excluding(PlSqlParser::Including_or_excludingContext *ctx) = 0;

  virtual void enterCreate_materialized_view_log(PlSqlParser::Create_materialized_view_logContext *ctx) = 0;
  virtual void exitCreate_materialized_view_log(PlSqlParser::Create_materialized_view_logContext *ctx) = 0;

  virtual void enterNew_values_clause(PlSqlParser::New_values_clauseContext *ctx) = 0;
  virtual void exitNew_values_clause(PlSqlParser::New_values_clauseContext *ctx) = 0;

  virtual void enterMv_log_purge_clause(PlSqlParser::Mv_log_purge_clauseContext *ctx) = 0;
  virtual void exitMv_log_purge_clause(PlSqlParser::Mv_log_purge_clauseContext *ctx) = 0;

  virtual void enterCreate_materialized_view(PlSqlParser::Create_materialized_viewContext *ctx) = 0;
  virtual void exitCreate_materialized_view(PlSqlParser::Create_materialized_viewContext *ctx) = 0;

  virtual void enterCreate_mv_refresh(PlSqlParser::Create_mv_refreshContext *ctx) = 0;
  virtual void exitCreate_mv_refresh(PlSqlParser::Create_mv_refreshContext *ctx) = 0;

  virtual void enterCreate_context(PlSqlParser::Create_contextContext *ctx) = 0;
  virtual void exitCreate_context(PlSqlParser::Create_contextContext *ctx) = 0;

  virtual void enterOracle_namespace(PlSqlParser::Oracle_namespaceContext *ctx) = 0;
  virtual void exitOracle_namespace(PlSqlParser::Oracle_namespaceContext *ctx) = 0;

  virtual void enterCreate_cluster(PlSqlParser::Create_clusterContext *ctx) = 0;
  virtual void exitCreate_cluster(PlSqlParser::Create_clusterContext *ctx) = 0;

  virtual void enterCreate_table(PlSqlParser::Create_tableContext *ctx) = 0;
  virtual void exitCreate_table(PlSqlParser::Create_tableContext *ctx) = 0;

  virtual void enterXmltype_table(PlSqlParser::Xmltype_tableContext *ctx) = 0;
  virtual void exitXmltype_table(PlSqlParser::Xmltype_tableContext *ctx) = 0;

  virtual void enterXmltype_virtual_columns(PlSqlParser::Xmltype_virtual_columnsContext *ctx) = 0;
  virtual void exitXmltype_virtual_columns(PlSqlParser::Xmltype_virtual_columnsContext *ctx) = 0;

  virtual void enterXmltype_column_properties(PlSqlParser::Xmltype_column_propertiesContext *ctx) = 0;
  virtual void exitXmltype_column_properties(PlSqlParser::Xmltype_column_propertiesContext *ctx) = 0;

  virtual void enterXmltype_storage(PlSqlParser::Xmltype_storageContext *ctx) = 0;
  virtual void exitXmltype_storage(PlSqlParser::Xmltype_storageContext *ctx) = 0;

  virtual void enterXmlschema_spec(PlSqlParser::Xmlschema_specContext *ctx) = 0;
  virtual void exitXmlschema_spec(PlSqlParser::Xmlschema_specContext *ctx) = 0;

  virtual void enterObject_table(PlSqlParser::Object_tableContext *ctx) = 0;
  virtual void exitObject_table(PlSqlParser::Object_tableContext *ctx) = 0;

  virtual void enterOid_index_clause(PlSqlParser::Oid_index_clauseContext *ctx) = 0;
  virtual void exitOid_index_clause(PlSqlParser::Oid_index_clauseContext *ctx) = 0;

  virtual void enterOid_clause(PlSqlParser::Oid_clauseContext *ctx) = 0;
  virtual void exitOid_clause(PlSqlParser::Oid_clauseContext *ctx) = 0;

  virtual void enterObject_properties(PlSqlParser::Object_propertiesContext *ctx) = 0;
  virtual void exitObject_properties(PlSqlParser::Object_propertiesContext *ctx) = 0;

  virtual void enterObject_table_substitution(PlSqlParser::Object_table_substitutionContext *ctx) = 0;
  virtual void exitObject_table_substitution(PlSqlParser::Object_table_substitutionContext *ctx) = 0;

  virtual void enterRelational_table(PlSqlParser::Relational_tableContext *ctx) = 0;
  virtual void exitRelational_table(PlSqlParser::Relational_tableContext *ctx) = 0;

  virtual void enterRelational_properties(PlSqlParser::Relational_propertiesContext *ctx) = 0;
  virtual void exitRelational_properties(PlSqlParser::Relational_propertiesContext *ctx) = 0;

  virtual void enterTable_partitioning_clauses(PlSqlParser::Table_partitioning_clausesContext *ctx) = 0;
  virtual void exitTable_partitioning_clauses(PlSqlParser::Table_partitioning_clausesContext *ctx) = 0;

  virtual void enterRange_partitions(PlSqlParser::Range_partitionsContext *ctx) = 0;
  virtual void exitRange_partitions(PlSqlParser::Range_partitionsContext *ctx) = 0;

  virtual void enterList_partitions(PlSqlParser::List_partitionsContext *ctx) = 0;
  virtual void exitList_partitions(PlSqlParser::List_partitionsContext *ctx) = 0;

  virtual void enterHash_partitions(PlSqlParser::Hash_partitionsContext *ctx) = 0;
  virtual void exitHash_partitions(PlSqlParser::Hash_partitionsContext *ctx) = 0;

  virtual void enterIndividual_hash_partitions(PlSqlParser::Individual_hash_partitionsContext *ctx) = 0;
  virtual void exitIndividual_hash_partitions(PlSqlParser::Individual_hash_partitionsContext *ctx) = 0;

  virtual void enterHash_partitions_by_quantity(PlSqlParser::Hash_partitions_by_quantityContext *ctx) = 0;
  virtual void exitHash_partitions_by_quantity(PlSqlParser::Hash_partitions_by_quantityContext *ctx) = 0;

  virtual void enterHash_partition_quantity(PlSqlParser::Hash_partition_quantityContext *ctx) = 0;
  virtual void exitHash_partition_quantity(PlSqlParser::Hash_partition_quantityContext *ctx) = 0;

  virtual void enterComposite_range_partitions(PlSqlParser::Composite_range_partitionsContext *ctx) = 0;
  virtual void exitComposite_range_partitions(PlSqlParser::Composite_range_partitionsContext *ctx) = 0;

  virtual void enterComposite_list_partitions(PlSqlParser::Composite_list_partitionsContext *ctx) = 0;
  virtual void exitComposite_list_partitions(PlSqlParser::Composite_list_partitionsContext *ctx) = 0;

  virtual void enterComposite_hash_partitions(PlSqlParser::Composite_hash_partitionsContext *ctx) = 0;
  virtual void exitComposite_hash_partitions(PlSqlParser::Composite_hash_partitionsContext *ctx) = 0;

  virtual void enterReference_partitioning(PlSqlParser::Reference_partitioningContext *ctx) = 0;
  virtual void exitReference_partitioning(PlSqlParser::Reference_partitioningContext *ctx) = 0;

  virtual void enterReference_partition_desc(PlSqlParser::Reference_partition_descContext *ctx) = 0;
  virtual void exitReference_partition_desc(PlSqlParser::Reference_partition_descContext *ctx) = 0;

  virtual void enterSystem_partitioning(PlSqlParser::System_partitioningContext *ctx) = 0;
  virtual void exitSystem_partitioning(PlSqlParser::System_partitioningContext *ctx) = 0;

  virtual void enterRange_partition_desc(PlSqlParser::Range_partition_descContext *ctx) = 0;
  virtual void exitRange_partition_desc(PlSqlParser::Range_partition_descContext *ctx) = 0;

  virtual void enterList_partition_desc(PlSqlParser::List_partition_descContext *ctx) = 0;
  virtual void exitList_partition_desc(PlSqlParser::List_partition_descContext *ctx) = 0;

  virtual void enterSubpartition_template(PlSqlParser::Subpartition_templateContext *ctx) = 0;
  virtual void exitSubpartition_template(PlSqlParser::Subpartition_templateContext *ctx) = 0;

  virtual void enterHash_subpartition_quantity(PlSqlParser::Hash_subpartition_quantityContext *ctx) = 0;
  virtual void exitHash_subpartition_quantity(PlSqlParser::Hash_subpartition_quantityContext *ctx) = 0;

  virtual void enterSubpartition_by_range(PlSqlParser::Subpartition_by_rangeContext *ctx) = 0;
  virtual void exitSubpartition_by_range(PlSqlParser::Subpartition_by_rangeContext *ctx) = 0;

  virtual void enterSubpartition_by_list(PlSqlParser::Subpartition_by_listContext *ctx) = 0;
  virtual void exitSubpartition_by_list(PlSqlParser::Subpartition_by_listContext *ctx) = 0;

  virtual void enterSubpartition_by_hash(PlSqlParser::Subpartition_by_hashContext *ctx) = 0;
  virtual void exitSubpartition_by_hash(PlSqlParser::Subpartition_by_hashContext *ctx) = 0;

  virtual void enterSubpartition_name(PlSqlParser::Subpartition_nameContext *ctx) = 0;
  virtual void exitSubpartition_name(PlSqlParser::Subpartition_nameContext *ctx) = 0;

  virtual void enterRange_subpartition_desc(PlSqlParser::Range_subpartition_descContext *ctx) = 0;
  virtual void exitRange_subpartition_desc(PlSqlParser::Range_subpartition_descContext *ctx) = 0;

  virtual void enterList_subpartition_desc(PlSqlParser::List_subpartition_descContext *ctx) = 0;
  virtual void exitList_subpartition_desc(PlSqlParser::List_subpartition_descContext *ctx) = 0;

  virtual void enterIndividual_hash_subparts(PlSqlParser::Individual_hash_subpartsContext *ctx) = 0;
  virtual void exitIndividual_hash_subparts(PlSqlParser::Individual_hash_subpartsContext *ctx) = 0;

  virtual void enterHash_subparts_by_quantity(PlSqlParser::Hash_subparts_by_quantityContext *ctx) = 0;
  virtual void exitHash_subparts_by_quantity(PlSqlParser::Hash_subparts_by_quantityContext *ctx) = 0;

  virtual void enterRange_values_clause(PlSqlParser::Range_values_clauseContext *ctx) = 0;
  virtual void exitRange_values_clause(PlSqlParser::Range_values_clauseContext *ctx) = 0;

  virtual void enterList_values_clause(PlSqlParser::List_values_clauseContext *ctx) = 0;
  virtual void exitList_values_clause(PlSqlParser::List_values_clauseContext *ctx) = 0;

  virtual void enterTable_partition_description(PlSqlParser::Table_partition_descriptionContext *ctx) = 0;
  virtual void exitTable_partition_description(PlSqlParser::Table_partition_descriptionContext *ctx) = 0;

  virtual void enterPartitioning_storage_clause(PlSqlParser::Partitioning_storage_clauseContext *ctx) = 0;
  virtual void exitPartitioning_storage_clause(PlSqlParser::Partitioning_storage_clauseContext *ctx) = 0;

  virtual void enterLob_partitioning_storage(PlSqlParser::Lob_partitioning_storageContext *ctx) = 0;
  virtual void exitLob_partitioning_storage(PlSqlParser::Lob_partitioning_storageContext *ctx) = 0;

  virtual void enterDatatype_null_enable(PlSqlParser::Datatype_null_enableContext *ctx) = 0;
  virtual void exitDatatype_null_enable(PlSqlParser::Datatype_null_enableContext *ctx) = 0;

  virtual void enterSize_clause(PlSqlParser::Size_clauseContext *ctx) = 0;
  virtual void exitSize_clause(PlSqlParser::Size_clauseContext *ctx) = 0;

  virtual void enterTable_compression(PlSqlParser::Table_compressionContext *ctx) = 0;
  virtual void exitTable_compression(PlSqlParser::Table_compressionContext *ctx) = 0;

  virtual void enterPhysical_attributes_clause(PlSqlParser::Physical_attributes_clauseContext *ctx) = 0;
  virtual void exitPhysical_attributes_clause(PlSqlParser::Physical_attributes_clauseContext *ctx) = 0;

  virtual void enterStorage_clause(PlSqlParser::Storage_clauseContext *ctx) = 0;
  virtual void exitStorage_clause(PlSqlParser::Storage_clauseContext *ctx) = 0;

  virtual void enterDeferred_segment_creation(PlSqlParser::Deferred_segment_creationContext *ctx) = 0;
  virtual void exitDeferred_segment_creation(PlSqlParser::Deferred_segment_creationContext *ctx) = 0;

  virtual void enterSegment_attributes_clause(PlSqlParser::Segment_attributes_clauseContext *ctx) = 0;
  virtual void exitSegment_attributes_clause(PlSqlParser::Segment_attributes_clauseContext *ctx) = 0;

  virtual void enterPhysical_properties(PlSqlParser::Physical_propertiesContext *ctx) = 0;
  virtual void exitPhysical_properties(PlSqlParser::Physical_propertiesContext *ctx) = 0;

  virtual void enterRow_movement_clause(PlSqlParser::Row_movement_clauseContext *ctx) = 0;
  virtual void exitRow_movement_clause(PlSqlParser::Row_movement_clauseContext *ctx) = 0;

  virtual void enterFlashback_archive_clause(PlSqlParser::Flashback_archive_clauseContext *ctx) = 0;
  virtual void exitFlashback_archive_clause(PlSqlParser::Flashback_archive_clauseContext *ctx) = 0;

  virtual void enterLog_grp(PlSqlParser::Log_grpContext *ctx) = 0;
  virtual void exitLog_grp(PlSqlParser::Log_grpContext *ctx) = 0;

  virtual void enterSupplemental_table_logging(PlSqlParser::Supplemental_table_loggingContext *ctx) = 0;
  virtual void exitSupplemental_table_logging(PlSqlParser::Supplemental_table_loggingContext *ctx) = 0;

  virtual void enterSupplemental_log_grp_clause(PlSqlParser::Supplemental_log_grp_clauseContext *ctx) = 0;
  virtual void exitSupplemental_log_grp_clause(PlSqlParser::Supplemental_log_grp_clauseContext *ctx) = 0;

  virtual void enterSupplemental_id_key_clause(PlSqlParser::Supplemental_id_key_clauseContext *ctx) = 0;
  virtual void exitSupplemental_id_key_clause(PlSqlParser::Supplemental_id_key_clauseContext *ctx) = 0;

  virtual void enterAllocate_extent_clause(PlSqlParser::Allocate_extent_clauseContext *ctx) = 0;
  virtual void exitAllocate_extent_clause(PlSqlParser::Allocate_extent_clauseContext *ctx) = 0;

  virtual void enterDeallocate_unused_clause(PlSqlParser::Deallocate_unused_clauseContext *ctx) = 0;
  virtual void exitDeallocate_unused_clause(PlSqlParser::Deallocate_unused_clauseContext *ctx) = 0;

  virtual void enterShrink_clause(PlSqlParser::Shrink_clauseContext *ctx) = 0;
  virtual void exitShrink_clause(PlSqlParser::Shrink_clauseContext *ctx) = 0;

  virtual void enterRecords_per_block_clause(PlSqlParser::Records_per_block_clauseContext *ctx) = 0;
  virtual void exitRecords_per_block_clause(PlSqlParser::Records_per_block_clauseContext *ctx) = 0;

  virtual void enterUpgrade_table_clause(PlSqlParser::Upgrade_table_clauseContext *ctx) = 0;
  virtual void exitUpgrade_table_clause(PlSqlParser::Upgrade_table_clauseContext *ctx) = 0;

  virtual void enterDrop_table(PlSqlParser::Drop_tableContext *ctx) = 0;
  virtual void exitDrop_table(PlSqlParser::Drop_tableContext *ctx) = 0;

  virtual void enterComment_on_column(PlSqlParser::Comment_on_columnContext *ctx) = 0;
  virtual void exitComment_on_column(PlSqlParser::Comment_on_columnContext *ctx) = 0;

  virtual void enterEnable_or_disable(PlSqlParser::Enable_or_disableContext *ctx) = 0;
  virtual void exitEnable_or_disable(PlSqlParser::Enable_or_disableContext *ctx) = 0;

  virtual void enterAllow_or_disallow(PlSqlParser::Allow_or_disallowContext *ctx) = 0;
  virtual void exitAllow_or_disallow(PlSqlParser::Allow_or_disallowContext *ctx) = 0;

  virtual void enterCreate_synonym(PlSqlParser::Create_synonymContext *ctx) = 0;
  virtual void exitCreate_synonym(PlSqlParser::Create_synonymContext *ctx) = 0;

  virtual void enterComment_on_table(PlSqlParser::Comment_on_tableContext *ctx) = 0;
  virtual void exitComment_on_table(PlSqlParser::Comment_on_tableContext *ctx) = 0;

  virtual void enterAlter_cluster(PlSqlParser::Alter_clusterContext *ctx) = 0;
  virtual void exitAlter_cluster(PlSqlParser::Alter_clusterContext *ctx) = 0;

  virtual void enterCache_or_nocache(PlSqlParser::Cache_or_nocacheContext *ctx) = 0;
  virtual void exitCache_or_nocache(PlSqlParser::Cache_or_nocacheContext *ctx) = 0;

  virtual void enterDatabase_name(PlSqlParser::Database_nameContext *ctx) = 0;
  virtual void exitDatabase_name(PlSqlParser::Database_nameContext *ctx) = 0;

  virtual void enterAlter_database(PlSqlParser::Alter_databaseContext *ctx) = 0;
  virtual void exitAlter_database(PlSqlParser::Alter_databaseContext *ctx) = 0;

  virtual void enterStartup_clauses(PlSqlParser::Startup_clausesContext *ctx) = 0;
  virtual void exitStartup_clauses(PlSqlParser::Startup_clausesContext *ctx) = 0;

  virtual void enterResetlogs_or_noresetlogs(PlSqlParser::Resetlogs_or_noresetlogsContext *ctx) = 0;
  virtual void exitResetlogs_or_noresetlogs(PlSqlParser::Resetlogs_or_noresetlogsContext *ctx) = 0;

  virtual void enterUpgrade_or_downgrade(PlSqlParser::Upgrade_or_downgradeContext *ctx) = 0;
  virtual void exitUpgrade_or_downgrade(PlSqlParser::Upgrade_or_downgradeContext *ctx) = 0;

  virtual void enterRecovery_clauses(PlSqlParser::Recovery_clausesContext *ctx) = 0;
  virtual void exitRecovery_clauses(PlSqlParser::Recovery_clausesContext *ctx) = 0;

  virtual void enterBegin_or_end(PlSqlParser::Begin_or_endContext *ctx) = 0;
  virtual void exitBegin_or_end(PlSqlParser::Begin_or_endContext *ctx) = 0;

  virtual void enterGeneral_recovery(PlSqlParser::General_recoveryContext *ctx) = 0;
  virtual void exitGeneral_recovery(PlSqlParser::General_recoveryContext *ctx) = 0;

  virtual void enterFull_database_recovery(PlSqlParser::Full_database_recoveryContext *ctx) = 0;
  virtual void exitFull_database_recovery(PlSqlParser::Full_database_recoveryContext *ctx) = 0;

  virtual void enterPartial_database_recovery(PlSqlParser::Partial_database_recoveryContext *ctx) = 0;
  virtual void exitPartial_database_recovery(PlSqlParser::Partial_database_recoveryContext *ctx) = 0;

  virtual void enterPartial_database_recovery_10g(PlSqlParser::Partial_database_recovery_10gContext *ctx) = 0;
  virtual void exitPartial_database_recovery_10g(PlSqlParser::Partial_database_recovery_10gContext *ctx) = 0;

  virtual void enterManaged_standby_recovery(PlSqlParser::Managed_standby_recoveryContext *ctx) = 0;
  virtual void exitManaged_standby_recovery(PlSqlParser::Managed_standby_recoveryContext *ctx) = 0;

  virtual void enterDb_name(PlSqlParser::Db_nameContext *ctx) = 0;
  virtual void exitDb_name(PlSqlParser::Db_nameContext *ctx) = 0;

  virtual void enterDatabase_file_clauses(PlSqlParser::Database_file_clausesContext *ctx) = 0;
  virtual void exitDatabase_file_clauses(PlSqlParser::Database_file_clausesContext *ctx) = 0;

  virtual void enterCreate_datafile_clause(PlSqlParser::Create_datafile_clauseContext *ctx) = 0;
  virtual void exitCreate_datafile_clause(PlSqlParser::Create_datafile_clauseContext *ctx) = 0;

  virtual void enterAlter_datafile_clause(PlSqlParser::Alter_datafile_clauseContext *ctx) = 0;
  virtual void exitAlter_datafile_clause(PlSqlParser::Alter_datafile_clauseContext *ctx) = 0;

  virtual void enterAlter_tempfile_clause(PlSqlParser::Alter_tempfile_clauseContext *ctx) = 0;
  virtual void exitAlter_tempfile_clause(PlSqlParser::Alter_tempfile_clauseContext *ctx) = 0;

  virtual void enterLogfile_clauses(PlSqlParser::Logfile_clausesContext *ctx) = 0;
  virtual void exitLogfile_clauses(PlSqlParser::Logfile_clausesContext *ctx) = 0;

  virtual void enterAdd_logfile_clauses(PlSqlParser::Add_logfile_clausesContext *ctx) = 0;
  virtual void exitAdd_logfile_clauses(PlSqlParser::Add_logfile_clausesContext *ctx) = 0;

  virtual void enterLog_file_group(PlSqlParser::Log_file_groupContext *ctx) = 0;
  virtual void exitLog_file_group(PlSqlParser::Log_file_groupContext *ctx) = 0;

  virtual void enterDrop_logfile_clauses(PlSqlParser::Drop_logfile_clausesContext *ctx) = 0;
  virtual void exitDrop_logfile_clauses(PlSqlParser::Drop_logfile_clausesContext *ctx) = 0;

  virtual void enterSwitch_logfile_clause(PlSqlParser::Switch_logfile_clauseContext *ctx) = 0;
  virtual void exitSwitch_logfile_clause(PlSqlParser::Switch_logfile_clauseContext *ctx) = 0;

  virtual void enterSupplemental_db_logging(PlSqlParser::Supplemental_db_loggingContext *ctx) = 0;
  virtual void exitSupplemental_db_logging(PlSqlParser::Supplemental_db_loggingContext *ctx) = 0;

  virtual void enterAdd_or_drop(PlSqlParser::Add_or_dropContext *ctx) = 0;
  virtual void exitAdd_or_drop(PlSqlParser::Add_or_dropContext *ctx) = 0;

  virtual void enterSupplemental_plsql_clause(PlSqlParser::Supplemental_plsql_clauseContext *ctx) = 0;
  virtual void exitSupplemental_plsql_clause(PlSqlParser::Supplemental_plsql_clauseContext *ctx) = 0;

  virtual void enterLogfile_descriptor(PlSqlParser::Logfile_descriptorContext *ctx) = 0;
  virtual void exitLogfile_descriptor(PlSqlParser::Logfile_descriptorContext *ctx) = 0;

  virtual void enterControlfile_clauses(PlSqlParser::Controlfile_clausesContext *ctx) = 0;
  virtual void exitControlfile_clauses(PlSqlParser::Controlfile_clausesContext *ctx) = 0;

  virtual void enterTrace_file_clause(PlSqlParser::Trace_file_clauseContext *ctx) = 0;
  virtual void exitTrace_file_clause(PlSqlParser::Trace_file_clauseContext *ctx) = 0;

  virtual void enterStandby_database_clauses(PlSqlParser::Standby_database_clausesContext *ctx) = 0;
  virtual void exitStandby_database_clauses(PlSqlParser::Standby_database_clausesContext *ctx) = 0;

  virtual void enterActivate_standby_db_clause(PlSqlParser::Activate_standby_db_clauseContext *ctx) = 0;
  virtual void exitActivate_standby_db_clause(PlSqlParser::Activate_standby_db_clauseContext *ctx) = 0;

  virtual void enterMaximize_standby_db_clause(PlSqlParser::Maximize_standby_db_clauseContext *ctx) = 0;
  virtual void exitMaximize_standby_db_clause(PlSqlParser::Maximize_standby_db_clauseContext *ctx) = 0;

  virtual void enterRegister_logfile_clause(PlSqlParser::Register_logfile_clauseContext *ctx) = 0;
  virtual void exitRegister_logfile_clause(PlSqlParser::Register_logfile_clauseContext *ctx) = 0;

  virtual void enterCommit_switchover_clause(PlSqlParser::Commit_switchover_clauseContext *ctx) = 0;
  virtual void exitCommit_switchover_clause(PlSqlParser::Commit_switchover_clauseContext *ctx) = 0;

  virtual void enterStart_standby_clause(PlSqlParser::Start_standby_clauseContext *ctx) = 0;
  virtual void exitStart_standby_clause(PlSqlParser::Start_standby_clauseContext *ctx) = 0;

  virtual void enterStop_standby_clause(PlSqlParser::Stop_standby_clauseContext *ctx) = 0;
  virtual void exitStop_standby_clause(PlSqlParser::Stop_standby_clauseContext *ctx) = 0;

  virtual void enterConvert_database_clause(PlSqlParser::Convert_database_clauseContext *ctx) = 0;
  virtual void exitConvert_database_clause(PlSqlParser::Convert_database_clauseContext *ctx) = 0;

  virtual void enterDefault_settings_clause(PlSqlParser::Default_settings_clauseContext *ctx) = 0;
  virtual void exitDefault_settings_clause(PlSqlParser::Default_settings_clauseContext *ctx) = 0;

  virtual void enterSet_time_zone_clause(PlSqlParser::Set_time_zone_clauseContext *ctx) = 0;
  virtual void exitSet_time_zone_clause(PlSqlParser::Set_time_zone_clauseContext *ctx) = 0;

  virtual void enterInstance_clauses(PlSqlParser::Instance_clausesContext *ctx) = 0;
  virtual void exitInstance_clauses(PlSqlParser::Instance_clausesContext *ctx) = 0;

  virtual void enterSecurity_clause(PlSqlParser::Security_clauseContext *ctx) = 0;
  virtual void exitSecurity_clause(PlSqlParser::Security_clauseContext *ctx) = 0;

  virtual void enterDomain(PlSqlParser::DomainContext *ctx) = 0;
  virtual void exitDomain(PlSqlParser::DomainContext *ctx) = 0;

  virtual void enterDatabase(PlSqlParser::DatabaseContext *ctx) = 0;
  virtual void exitDatabase(PlSqlParser::DatabaseContext *ctx) = 0;

  virtual void enterEdition_name(PlSqlParser::Edition_nameContext *ctx) = 0;
  virtual void exitEdition_name(PlSqlParser::Edition_nameContext *ctx) = 0;

  virtual void enterFilenumber(PlSqlParser::FilenumberContext *ctx) = 0;
  virtual void exitFilenumber(PlSqlParser::FilenumberContext *ctx) = 0;

  virtual void enterFilename(PlSqlParser::FilenameContext *ctx) = 0;
  virtual void exitFilename(PlSqlParser::FilenameContext *ctx) = 0;

  virtual void enterAlter_table(PlSqlParser::Alter_tableContext *ctx) = 0;
  virtual void exitAlter_table(PlSqlParser::Alter_tableContext *ctx) = 0;

  virtual void enterAlter_table_properties(PlSqlParser::Alter_table_propertiesContext *ctx) = 0;
  virtual void exitAlter_table_properties(PlSqlParser::Alter_table_propertiesContext *ctx) = 0;

  virtual void enterAlter_table_properties_1(PlSqlParser::Alter_table_properties_1Context *ctx) = 0;
  virtual void exitAlter_table_properties_1(PlSqlParser::Alter_table_properties_1Context *ctx) = 0;

  virtual void enterAlter_iot_clauses(PlSqlParser::Alter_iot_clausesContext *ctx) = 0;
  virtual void exitAlter_iot_clauses(PlSqlParser::Alter_iot_clausesContext *ctx) = 0;

  virtual void enterAlter_mapping_table_clause(PlSqlParser::Alter_mapping_table_clauseContext *ctx) = 0;
  virtual void exitAlter_mapping_table_clause(PlSqlParser::Alter_mapping_table_clauseContext *ctx) = 0;

  virtual void enterAlter_overflow_clause(PlSqlParser::Alter_overflow_clauseContext *ctx) = 0;
  virtual void exitAlter_overflow_clause(PlSqlParser::Alter_overflow_clauseContext *ctx) = 0;

  virtual void enterAdd_overflow_clause(PlSqlParser::Add_overflow_clauseContext *ctx) = 0;
  virtual void exitAdd_overflow_clause(PlSqlParser::Add_overflow_clauseContext *ctx) = 0;

  virtual void enterEnable_disable_clause(PlSqlParser::Enable_disable_clauseContext *ctx) = 0;
  virtual void exitEnable_disable_clause(PlSqlParser::Enable_disable_clauseContext *ctx) = 0;

  virtual void enterUsing_index_clause(PlSqlParser::Using_index_clauseContext *ctx) = 0;
  virtual void exitUsing_index_clause(PlSqlParser::Using_index_clauseContext *ctx) = 0;

  virtual void enterIndex_attributes(PlSqlParser::Index_attributesContext *ctx) = 0;
  virtual void exitIndex_attributes(PlSqlParser::Index_attributesContext *ctx) = 0;

  virtual void enterSort_or_nosort(PlSqlParser::Sort_or_nosortContext *ctx) = 0;
  virtual void exitSort_or_nosort(PlSqlParser::Sort_or_nosortContext *ctx) = 0;

  virtual void enterExceptions_clause(PlSqlParser::Exceptions_clauseContext *ctx) = 0;
  virtual void exitExceptions_clause(PlSqlParser::Exceptions_clauseContext *ctx) = 0;

  virtual void enterMove_table_clause(PlSqlParser::Move_table_clauseContext *ctx) = 0;
  virtual void exitMove_table_clause(PlSqlParser::Move_table_clauseContext *ctx) = 0;

  virtual void enterIndex_org_table_clause(PlSqlParser::Index_org_table_clauseContext *ctx) = 0;
  virtual void exitIndex_org_table_clause(PlSqlParser::Index_org_table_clauseContext *ctx) = 0;

  virtual void enterMapping_table_clause(PlSqlParser::Mapping_table_clauseContext *ctx) = 0;
  virtual void exitMapping_table_clause(PlSqlParser::Mapping_table_clauseContext *ctx) = 0;

  virtual void enterKey_compression(PlSqlParser::Key_compressionContext *ctx) = 0;
  virtual void exitKey_compression(PlSqlParser::Key_compressionContext *ctx) = 0;

  virtual void enterIndex_org_overflow_clause(PlSqlParser::Index_org_overflow_clauseContext *ctx) = 0;
  virtual void exitIndex_org_overflow_clause(PlSqlParser::Index_org_overflow_clauseContext *ctx) = 0;

  virtual void enterColumn_clauses(PlSqlParser::Column_clausesContext *ctx) = 0;
  virtual void exitColumn_clauses(PlSqlParser::Column_clausesContext *ctx) = 0;

  virtual void enterModify_collection_retrieval(PlSqlParser::Modify_collection_retrievalContext *ctx) = 0;
  virtual void exitModify_collection_retrieval(PlSqlParser::Modify_collection_retrievalContext *ctx) = 0;

  virtual void enterCollection_item(PlSqlParser::Collection_itemContext *ctx) = 0;
  virtual void exitCollection_item(PlSqlParser::Collection_itemContext *ctx) = 0;

  virtual void enterRename_column_clause(PlSqlParser::Rename_column_clauseContext *ctx) = 0;
  virtual void exitRename_column_clause(PlSqlParser::Rename_column_clauseContext *ctx) = 0;

  virtual void enterOld_column_name(PlSqlParser::Old_column_nameContext *ctx) = 0;
  virtual void exitOld_column_name(PlSqlParser::Old_column_nameContext *ctx) = 0;

  virtual void enterNew_column_name(PlSqlParser::New_column_nameContext *ctx) = 0;
  virtual void exitNew_column_name(PlSqlParser::New_column_nameContext *ctx) = 0;

  virtual void enterAdd_modify_drop_column_clauses(PlSqlParser::Add_modify_drop_column_clausesContext *ctx) = 0;
  virtual void exitAdd_modify_drop_column_clauses(PlSqlParser::Add_modify_drop_column_clausesContext *ctx) = 0;

  virtual void enterDrop_column_clause(PlSqlParser::Drop_column_clauseContext *ctx) = 0;
  virtual void exitDrop_column_clause(PlSqlParser::Drop_column_clauseContext *ctx) = 0;

  virtual void enterModify_column_clauses(PlSqlParser::Modify_column_clausesContext *ctx) = 0;
  virtual void exitModify_column_clauses(PlSqlParser::Modify_column_clausesContext *ctx) = 0;

  virtual void enterModify_col_properties(PlSqlParser::Modify_col_propertiesContext *ctx) = 0;
  virtual void exitModify_col_properties(PlSqlParser::Modify_col_propertiesContext *ctx) = 0;

  virtual void enterModify_col_substitutable(PlSqlParser::Modify_col_substitutableContext *ctx) = 0;
  virtual void exitModify_col_substitutable(PlSqlParser::Modify_col_substitutableContext *ctx) = 0;

  virtual void enterAdd_column_clause(PlSqlParser::Add_column_clauseContext *ctx) = 0;
  virtual void exitAdd_column_clause(PlSqlParser::Add_column_clauseContext *ctx) = 0;

  virtual void enterAlter_varray_col_properties(PlSqlParser::Alter_varray_col_propertiesContext *ctx) = 0;
  virtual void exitAlter_varray_col_properties(PlSqlParser::Alter_varray_col_propertiesContext *ctx) = 0;

  virtual void enterVarray_col_properties(PlSqlParser::Varray_col_propertiesContext *ctx) = 0;
  virtual void exitVarray_col_properties(PlSqlParser::Varray_col_propertiesContext *ctx) = 0;

  virtual void enterVarray_storage_clause(PlSqlParser::Varray_storage_clauseContext *ctx) = 0;
  virtual void exitVarray_storage_clause(PlSqlParser::Varray_storage_clauseContext *ctx) = 0;

  virtual void enterLob_segname(PlSqlParser::Lob_segnameContext *ctx) = 0;
  virtual void exitLob_segname(PlSqlParser::Lob_segnameContext *ctx) = 0;

  virtual void enterLob_item(PlSqlParser::Lob_itemContext *ctx) = 0;
  virtual void exitLob_item(PlSqlParser::Lob_itemContext *ctx) = 0;

  virtual void enterLob_storage_parameters(PlSqlParser::Lob_storage_parametersContext *ctx) = 0;
  virtual void exitLob_storage_parameters(PlSqlParser::Lob_storage_parametersContext *ctx) = 0;

  virtual void enterLob_storage_clause(PlSqlParser::Lob_storage_clauseContext *ctx) = 0;
  virtual void exitLob_storage_clause(PlSqlParser::Lob_storage_clauseContext *ctx) = 0;

  virtual void enterModify_lob_storage_clause(PlSqlParser::Modify_lob_storage_clauseContext *ctx) = 0;
  virtual void exitModify_lob_storage_clause(PlSqlParser::Modify_lob_storage_clauseContext *ctx) = 0;

  virtual void enterModify_lob_parameters(PlSqlParser::Modify_lob_parametersContext *ctx) = 0;
  virtual void exitModify_lob_parameters(PlSqlParser::Modify_lob_parametersContext *ctx) = 0;

  virtual void enterLob_parameters(PlSqlParser::Lob_parametersContext *ctx) = 0;
  virtual void exitLob_parameters(PlSqlParser::Lob_parametersContext *ctx) = 0;

  virtual void enterLob_deduplicate_clause(PlSqlParser::Lob_deduplicate_clauseContext *ctx) = 0;
  virtual void exitLob_deduplicate_clause(PlSqlParser::Lob_deduplicate_clauseContext *ctx) = 0;

  virtual void enterLob_compression_clause(PlSqlParser::Lob_compression_clauseContext *ctx) = 0;
  virtual void exitLob_compression_clause(PlSqlParser::Lob_compression_clauseContext *ctx) = 0;

  virtual void enterLob_retention_clause(PlSqlParser::Lob_retention_clauseContext *ctx) = 0;
  virtual void exitLob_retention_clause(PlSqlParser::Lob_retention_clauseContext *ctx) = 0;

  virtual void enterEncryption_spec(PlSqlParser::Encryption_specContext *ctx) = 0;
  virtual void exitEncryption_spec(PlSqlParser::Encryption_specContext *ctx) = 0;

  virtual void enterTablespace(PlSqlParser::TablespaceContext *ctx) = 0;
  virtual void exitTablespace(PlSqlParser::TablespaceContext *ctx) = 0;

  virtual void enterVarray_item(PlSqlParser::Varray_itemContext *ctx) = 0;
  virtual void exitVarray_item(PlSqlParser::Varray_itemContext *ctx) = 0;

  virtual void enterColumn_properties(PlSqlParser::Column_propertiesContext *ctx) = 0;
  virtual void exitColumn_properties(PlSqlParser::Column_propertiesContext *ctx) = 0;

  virtual void enterPeriod_definition(PlSqlParser::Period_definitionContext *ctx) = 0;
  virtual void exitPeriod_definition(PlSqlParser::Period_definitionContext *ctx) = 0;

  virtual void enterStart_time_column(PlSqlParser::Start_time_columnContext *ctx) = 0;
  virtual void exitStart_time_column(PlSqlParser::Start_time_columnContext *ctx) = 0;

  virtual void enterEnd_time_column(PlSqlParser::End_time_columnContext *ctx) = 0;
  virtual void exitEnd_time_column(PlSqlParser::End_time_columnContext *ctx) = 0;

  virtual void enterColumn_definition(PlSqlParser::Column_definitionContext *ctx) = 0;
  virtual void exitColumn_definition(PlSqlParser::Column_definitionContext *ctx) = 0;

  virtual void enterVirtual_column_definition(PlSqlParser::Virtual_column_definitionContext *ctx) = 0;
  virtual void exitVirtual_column_definition(PlSqlParser::Virtual_column_definitionContext *ctx) = 0;

  virtual void enterOut_of_line_part_storage(PlSqlParser::Out_of_line_part_storageContext *ctx) = 0;
  virtual void exitOut_of_line_part_storage(PlSqlParser::Out_of_line_part_storageContext *ctx) = 0;

  virtual void enterNested_table_col_properties(PlSqlParser::Nested_table_col_propertiesContext *ctx) = 0;
  virtual void exitNested_table_col_properties(PlSqlParser::Nested_table_col_propertiesContext *ctx) = 0;

  virtual void enterNested_item(PlSqlParser::Nested_itemContext *ctx) = 0;
  virtual void exitNested_item(PlSqlParser::Nested_itemContext *ctx) = 0;

  virtual void enterSubstitutable_column_clause(PlSqlParser::Substitutable_column_clauseContext *ctx) = 0;
  virtual void exitSubstitutable_column_clause(PlSqlParser::Substitutable_column_clauseContext *ctx) = 0;

  virtual void enterPartition_name(PlSqlParser::Partition_nameContext *ctx) = 0;
  virtual void exitPartition_name(PlSqlParser::Partition_nameContext *ctx) = 0;

  virtual void enterSupplemental_logging_props(PlSqlParser::Supplemental_logging_propsContext *ctx) = 0;
  virtual void exitSupplemental_logging_props(PlSqlParser::Supplemental_logging_propsContext *ctx) = 0;

  virtual void enterColumn_or_attribute(PlSqlParser::Column_or_attributeContext *ctx) = 0;
  virtual void exitColumn_or_attribute(PlSqlParser::Column_or_attributeContext *ctx) = 0;

  virtual void enterObject_type_col_properties(PlSqlParser::Object_type_col_propertiesContext *ctx) = 0;
  virtual void exitObject_type_col_properties(PlSqlParser::Object_type_col_propertiesContext *ctx) = 0;

  virtual void enterConstraint_clauses(PlSqlParser::Constraint_clausesContext *ctx) = 0;
  virtual void exitConstraint_clauses(PlSqlParser::Constraint_clausesContext *ctx) = 0;

  virtual void enterOld_constraint_name(PlSqlParser::Old_constraint_nameContext *ctx) = 0;
  virtual void exitOld_constraint_name(PlSqlParser::Old_constraint_nameContext *ctx) = 0;

  virtual void enterNew_constraint_name(PlSqlParser::New_constraint_nameContext *ctx) = 0;
  virtual void exitNew_constraint_name(PlSqlParser::New_constraint_nameContext *ctx) = 0;

  virtual void enterDrop_constraint_clause(PlSqlParser::Drop_constraint_clauseContext *ctx) = 0;
  virtual void exitDrop_constraint_clause(PlSqlParser::Drop_constraint_clauseContext *ctx) = 0;

  virtual void enterDrop_primary_key_or_unique_or_generic_clause(PlSqlParser::Drop_primary_key_or_unique_or_generic_clauseContext *ctx) = 0;
  virtual void exitDrop_primary_key_or_unique_or_generic_clause(PlSqlParser::Drop_primary_key_or_unique_or_generic_clauseContext *ctx) = 0;

  virtual void enterAdd_constraint(PlSqlParser::Add_constraintContext *ctx) = 0;
  virtual void exitAdd_constraint(PlSqlParser::Add_constraintContext *ctx) = 0;

  virtual void enterCheck_constraint(PlSqlParser::Check_constraintContext *ctx) = 0;
  virtual void exitCheck_constraint(PlSqlParser::Check_constraintContext *ctx) = 0;

  virtual void enterDrop_constraint(PlSqlParser::Drop_constraintContext *ctx) = 0;
  virtual void exitDrop_constraint(PlSqlParser::Drop_constraintContext *ctx) = 0;

  virtual void enterEnable_constraint(PlSqlParser::Enable_constraintContext *ctx) = 0;
  virtual void exitEnable_constraint(PlSqlParser::Enable_constraintContext *ctx) = 0;

  virtual void enterDisable_constraint(PlSqlParser::Disable_constraintContext *ctx) = 0;
  virtual void exitDisable_constraint(PlSqlParser::Disable_constraintContext *ctx) = 0;

  virtual void enterForeign_key_clause(PlSqlParser::Foreign_key_clauseContext *ctx) = 0;
  virtual void exitForeign_key_clause(PlSqlParser::Foreign_key_clauseContext *ctx) = 0;

  virtual void enterReferences_clause(PlSqlParser::References_clauseContext *ctx) = 0;
  virtual void exitReferences_clause(PlSqlParser::References_clauseContext *ctx) = 0;

  virtual void enterOn_delete_clause(PlSqlParser::On_delete_clauseContext *ctx) = 0;
  virtual void exitOn_delete_clause(PlSqlParser::On_delete_clauseContext *ctx) = 0;

  virtual void enterUnique_key_clause(PlSqlParser::Unique_key_clauseContext *ctx) = 0;
  virtual void exitUnique_key_clause(PlSqlParser::Unique_key_clauseContext *ctx) = 0;

  virtual void enterPrimary_key_clause(PlSqlParser::Primary_key_clauseContext *ctx) = 0;
  virtual void exitPrimary_key_clause(PlSqlParser::Primary_key_clauseContext *ctx) = 0;

  virtual void enterAnonymous_block(PlSqlParser::Anonymous_blockContext *ctx) = 0;
  virtual void exitAnonymous_block(PlSqlParser::Anonymous_blockContext *ctx) = 0;

  virtual void enterInvoker_rights_clause(PlSqlParser::Invoker_rights_clauseContext *ctx) = 0;
  virtual void exitInvoker_rights_clause(PlSqlParser::Invoker_rights_clauseContext *ctx) = 0;

  virtual void enterCall_spec(PlSqlParser::Call_specContext *ctx) = 0;
  virtual void exitCall_spec(PlSqlParser::Call_specContext *ctx) = 0;

  virtual void enterJava_spec(PlSqlParser::Java_specContext *ctx) = 0;
  virtual void exitJava_spec(PlSqlParser::Java_specContext *ctx) = 0;

  virtual void enterC_spec(PlSqlParser::C_specContext *ctx) = 0;
  virtual void exitC_spec(PlSqlParser::C_specContext *ctx) = 0;

  virtual void enterC_agent_in_clause(PlSqlParser::C_agent_in_clauseContext *ctx) = 0;
  virtual void exitC_agent_in_clause(PlSqlParser::C_agent_in_clauseContext *ctx) = 0;

  virtual void enterC_parameters_clause(PlSqlParser::C_parameters_clauseContext *ctx) = 0;
  virtual void exitC_parameters_clause(PlSqlParser::C_parameters_clauseContext *ctx) = 0;

  virtual void enterParameter(PlSqlParser::ParameterContext *ctx) = 0;
  virtual void exitParameter(PlSqlParser::ParameterContext *ctx) = 0;

  virtual void enterDefault_value_part(PlSqlParser::Default_value_partContext *ctx) = 0;
  virtual void exitDefault_value_part(PlSqlParser::Default_value_partContext *ctx) = 0;

  virtual void enterSeq_of_declare_specs(PlSqlParser::Seq_of_declare_specsContext *ctx) = 0;
  virtual void exitSeq_of_declare_specs(PlSqlParser::Seq_of_declare_specsContext *ctx) = 0;

  virtual void enterDeclare_spec(PlSqlParser::Declare_specContext *ctx) = 0;
  virtual void exitDeclare_spec(PlSqlParser::Declare_specContext *ctx) = 0;

  virtual void enterVariable_declaration(PlSqlParser::Variable_declarationContext *ctx) = 0;
  virtual void exitVariable_declaration(PlSqlParser::Variable_declarationContext *ctx) = 0;

  virtual void enterSubtype_declaration(PlSqlParser::Subtype_declarationContext *ctx) = 0;
  virtual void exitSubtype_declaration(PlSqlParser::Subtype_declarationContext *ctx) = 0;

  virtual void enterCursor_declaration(PlSqlParser::Cursor_declarationContext *ctx) = 0;
  virtual void exitCursor_declaration(PlSqlParser::Cursor_declarationContext *ctx) = 0;

  virtual void enterParameter_spec(PlSqlParser::Parameter_specContext *ctx) = 0;
  virtual void exitParameter_spec(PlSqlParser::Parameter_specContext *ctx) = 0;

  virtual void enterException_declaration(PlSqlParser::Exception_declarationContext *ctx) = 0;
  virtual void exitException_declaration(PlSqlParser::Exception_declarationContext *ctx) = 0;

  virtual void enterPragma_declaration(PlSqlParser::Pragma_declarationContext *ctx) = 0;
  virtual void exitPragma_declaration(PlSqlParser::Pragma_declarationContext *ctx) = 0;

  virtual void enterRecord_type_def(PlSqlParser::Record_type_defContext *ctx) = 0;
  virtual void exitRecord_type_def(PlSqlParser::Record_type_defContext *ctx) = 0;

  virtual void enterField_spec(PlSqlParser::Field_specContext *ctx) = 0;
  virtual void exitField_spec(PlSqlParser::Field_specContext *ctx) = 0;

  virtual void enterRef_cursor_type_def(PlSqlParser::Ref_cursor_type_defContext *ctx) = 0;
  virtual void exitRef_cursor_type_def(PlSqlParser::Ref_cursor_type_defContext *ctx) = 0;

  virtual void enterType_declaration(PlSqlParser::Type_declarationContext *ctx) = 0;
  virtual void exitType_declaration(PlSqlParser::Type_declarationContext *ctx) = 0;

  virtual void enterTable_type_def(PlSqlParser::Table_type_defContext *ctx) = 0;
  virtual void exitTable_type_def(PlSqlParser::Table_type_defContext *ctx) = 0;

  virtual void enterTable_indexed_by_part(PlSqlParser::Table_indexed_by_partContext *ctx) = 0;
  virtual void exitTable_indexed_by_part(PlSqlParser::Table_indexed_by_partContext *ctx) = 0;

  virtual void enterVarray_type_def(PlSqlParser::Varray_type_defContext *ctx) = 0;
  virtual void exitVarray_type_def(PlSqlParser::Varray_type_defContext *ctx) = 0;

  virtual void enterSeq_of_statements(PlSqlParser::Seq_of_statementsContext *ctx) = 0;
  virtual void exitSeq_of_statements(PlSqlParser::Seq_of_statementsContext *ctx) = 0;

  virtual void enterLabel_declaration(PlSqlParser::Label_declarationContext *ctx) = 0;
  virtual void exitLabel_declaration(PlSqlParser::Label_declarationContext *ctx) = 0;

  virtual void enterStatement(PlSqlParser::StatementContext *ctx) = 0;
  virtual void exitStatement(PlSqlParser::StatementContext *ctx) = 0;

  virtual void enterSwallow_to_semi(PlSqlParser::Swallow_to_semiContext *ctx) = 0;
  virtual void exitSwallow_to_semi(PlSqlParser::Swallow_to_semiContext *ctx) = 0;

  virtual void enterAssignment_statement(PlSqlParser::Assignment_statementContext *ctx) = 0;
  virtual void exitAssignment_statement(PlSqlParser::Assignment_statementContext *ctx) = 0;

  virtual void enterContinue_statement(PlSqlParser::Continue_statementContext *ctx) = 0;
  virtual void exitContinue_statement(PlSqlParser::Continue_statementContext *ctx) = 0;

  virtual void enterExit_statement(PlSqlParser::Exit_statementContext *ctx) = 0;
  virtual void exitExit_statement(PlSqlParser::Exit_statementContext *ctx) = 0;

  virtual void enterGoto_statement(PlSqlParser::Goto_statementContext *ctx) = 0;
  virtual void exitGoto_statement(PlSqlParser::Goto_statementContext *ctx) = 0;

  virtual void enterIf_statement(PlSqlParser::If_statementContext *ctx) = 0;
  virtual void exitIf_statement(PlSqlParser::If_statementContext *ctx) = 0;

  virtual void enterElsif_part(PlSqlParser::Elsif_partContext *ctx) = 0;
  virtual void exitElsif_part(PlSqlParser::Elsif_partContext *ctx) = 0;

  virtual void enterElse_part(PlSqlParser::Else_partContext *ctx) = 0;
  virtual void exitElse_part(PlSqlParser::Else_partContext *ctx) = 0;

  virtual void enterLoop_statement(PlSqlParser::Loop_statementContext *ctx) = 0;
  virtual void exitLoop_statement(PlSqlParser::Loop_statementContext *ctx) = 0;

  virtual void enterCursor_loop_param(PlSqlParser::Cursor_loop_paramContext *ctx) = 0;
  virtual void exitCursor_loop_param(PlSqlParser::Cursor_loop_paramContext *ctx) = 0;

  virtual void enterForall_statement(PlSqlParser::Forall_statementContext *ctx) = 0;
  virtual void exitForall_statement(PlSqlParser::Forall_statementContext *ctx) = 0;

  virtual void enterBounds_clause(PlSqlParser::Bounds_clauseContext *ctx) = 0;
  virtual void exitBounds_clause(PlSqlParser::Bounds_clauseContext *ctx) = 0;

  virtual void enterBetween_bound(PlSqlParser::Between_boundContext *ctx) = 0;
  virtual void exitBetween_bound(PlSqlParser::Between_boundContext *ctx) = 0;

  virtual void enterLower_bound(PlSqlParser::Lower_boundContext *ctx) = 0;
  virtual void exitLower_bound(PlSqlParser::Lower_boundContext *ctx) = 0;

  virtual void enterUpper_bound(PlSqlParser::Upper_boundContext *ctx) = 0;
  virtual void exitUpper_bound(PlSqlParser::Upper_boundContext *ctx) = 0;

  virtual void enterNull_statement(PlSqlParser::Null_statementContext *ctx) = 0;
  virtual void exitNull_statement(PlSqlParser::Null_statementContext *ctx) = 0;

  virtual void enterRaise_statement(PlSqlParser::Raise_statementContext *ctx) = 0;
  virtual void exitRaise_statement(PlSqlParser::Raise_statementContext *ctx) = 0;

  virtual void enterReturn_statement(PlSqlParser::Return_statementContext *ctx) = 0;
  virtual void exitReturn_statement(PlSqlParser::Return_statementContext *ctx) = 0;

  virtual void enterFunction_call(PlSqlParser::Function_callContext *ctx) = 0;
  virtual void exitFunction_call(PlSqlParser::Function_callContext *ctx) = 0;

  virtual void enterProcedure_call(PlSqlParser::Procedure_callContext *ctx) = 0;
  virtual void exitProcedure_call(PlSqlParser::Procedure_callContext *ctx) = 0;

  virtual void enterPipe_row_statement(PlSqlParser::Pipe_row_statementContext *ctx) = 0;
  virtual void exitPipe_row_statement(PlSqlParser::Pipe_row_statementContext *ctx) = 0;

  virtual void enterBody(PlSqlParser::BodyContext *ctx) = 0;
  virtual void exitBody(PlSqlParser::BodyContext *ctx) = 0;

  virtual void enterException_handler(PlSqlParser::Exception_handlerContext *ctx) = 0;
  virtual void exitException_handler(PlSqlParser::Exception_handlerContext *ctx) = 0;

  virtual void enterTrigger_block(PlSqlParser::Trigger_blockContext *ctx) = 0;
  virtual void exitTrigger_block(PlSqlParser::Trigger_blockContext *ctx) = 0;

  virtual void enterBlock(PlSqlParser::BlockContext *ctx) = 0;
  virtual void exitBlock(PlSqlParser::BlockContext *ctx) = 0;

  virtual void enterSql_statement(PlSqlParser::Sql_statementContext *ctx) = 0;
  virtual void exitSql_statement(PlSqlParser::Sql_statementContext *ctx) = 0;

  virtual void enterExecute_immediate(PlSqlParser::Execute_immediateContext *ctx) = 0;
  virtual void exitExecute_immediate(PlSqlParser::Execute_immediateContext *ctx) = 0;

  virtual void enterDynamic_returning_clause(PlSqlParser::Dynamic_returning_clauseContext *ctx) = 0;
  virtual void exitDynamic_returning_clause(PlSqlParser::Dynamic_returning_clauseContext *ctx) = 0;

  virtual void enterData_manipulation_language_statements(PlSqlParser::Data_manipulation_language_statementsContext *ctx) = 0;
  virtual void exitData_manipulation_language_statements(PlSqlParser::Data_manipulation_language_statementsContext *ctx) = 0;

  virtual void enterCursor_manipulation_statements(PlSqlParser::Cursor_manipulation_statementsContext *ctx) = 0;
  virtual void exitCursor_manipulation_statements(PlSqlParser::Cursor_manipulation_statementsContext *ctx) = 0;

  virtual void enterClose_statement(PlSqlParser::Close_statementContext *ctx) = 0;
  virtual void exitClose_statement(PlSqlParser::Close_statementContext *ctx) = 0;

  virtual void enterOpen_statement(PlSqlParser::Open_statementContext *ctx) = 0;
  virtual void exitOpen_statement(PlSqlParser::Open_statementContext *ctx) = 0;

  virtual void enterFetch_statement(PlSqlParser::Fetch_statementContext *ctx) = 0;
  virtual void exitFetch_statement(PlSqlParser::Fetch_statementContext *ctx) = 0;

  virtual void enterOpen_for_statement(PlSqlParser::Open_for_statementContext *ctx) = 0;
  virtual void exitOpen_for_statement(PlSqlParser::Open_for_statementContext *ctx) = 0;

  virtual void enterTransaction_control_statements(PlSqlParser::Transaction_control_statementsContext *ctx) = 0;
  virtual void exitTransaction_control_statements(PlSqlParser::Transaction_control_statementsContext *ctx) = 0;

  virtual void enterSet_transaction_command(PlSqlParser::Set_transaction_commandContext *ctx) = 0;
  virtual void exitSet_transaction_command(PlSqlParser::Set_transaction_commandContext *ctx) = 0;

  virtual void enterSet_constraint_command(PlSqlParser::Set_constraint_commandContext *ctx) = 0;
  virtual void exitSet_constraint_command(PlSqlParser::Set_constraint_commandContext *ctx) = 0;

  virtual void enterCommit_statement(PlSqlParser::Commit_statementContext *ctx) = 0;
  virtual void exitCommit_statement(PlSqlParser::Commit_statementContext *ctx) = 0;

  virtual void enterWrite_clause(PlSqlParser::Write_clauseContext *ctx) = 0;
  virtual void exitWrite_clause(PlSqlParser::Write_clauseContext *ctx) = 0;

  virtual void enterRollback_statement(PlSqlParser::Rollback_statementContext *ctx) = 0;
  virtual void exitRollback_statement(PlSqlParser::Rollback_statementContext *ctx) = 0;

  virtual void enterSavepoint_statement(PlSqlParser::Savepoint_statementContext *ctx) = 0;
  virtual void exitSavepoint_statement(PlSqlParser::Savepoint_statementContext *ctx) = 0;

  virtual void enterExplain_statement(PlSqlParser::Explain_statementContext *ctx) = 0;
  virtual void exitExplain_statement(PlSqlParser::Explain_statementContext *ctx) = 0;

  virtual void enterSelect_statement(PlSqlParser::Select_statementContext *ctx) = 0;
  virtual void exitSelect_statement(PlSqlParser::Select_statementContext *ctx) = 0;

  virtual void enterSubquery_factoring_clause(PlSqlParser::Subquery_factoring_clauseContext *ctx) = 0;
  virtual void exitSubquery_factoring_clause(PlSqlParser::Subquery_factoring_clauseContext *ctx) = 0;

  virtual void enterFactoring_element(PlSqlParser::Factoring_elementContext *ctx) = 0;
  virtual void exitFactoring_element(PlSqlParser::Factoring_elementContext *ctx) = 0;

  virtual void enterSearch_clause(PlSqlParser::Search_clauseContext *ctx) = 0;
  virtual void exitSearch_clause(PlSqlParser::Search_clauseContext *ctx) = 0;

  virtual void enterCycle_clause(PlSqlParser::Cycle_clauseContext *ctx) = 0;
  virtual void exitCycle_clause(PlSqlParser::Cycle_clauseContext *ctx) = 0;

  virtual void enterSubquery(PlSqlParser::SubqueryContext *ctx) = 0;
  virtual void exitSubquery(PlSqlParser::SubqueryContext *ctx) = 0;

  virtual void enterSubquery_basic_elements(PlSqlParser::Subquery_basic_elementsContext *ctx) = 0;
  virtual void exitSubquery_basic_elements(PlSqlParser::Subquery_basic_elementsContext *ctx) = 0;

  virtual void enterSubquery_operation_part(PlSqlParser::Subquery_operation_partContext *ctx) = 0;
  virtual void exitSubquery_operation_part(PlSqlParser::Subquery_operation_partContext *ctx) = 0;

  virtual void enterQuery_block(PlSqlParser::Query_blockContext *ctx) = 0;
  virtual void exitQuery_block(PlSqlParser::Query_blockContext *ctx) = 0;

  virtual void enterSelected_list(PlSqlParser::Selected_listContext *ctx) = 0;
  virtual void exitSelected_list(PlSqlParser::Selected_listContext *ctx) = 0;

  virtual void enterSelected_list_element(PlSqlParser::Selected_list_elementContext *ctx) = 0;
  virtual void exitSelected_list_element(PlSqlParser::Selected_list_elementContext *ctx) = 0;

  virtual void enterFrom_clause(PlSqlParser::From_clauseContext *ctx) = 0;
  virtual void exitFrom_clause(PlSqlParser::From_clauseContext *ctx) = 0;

  virtual void enterSelect_list_elements(PlSqlParser::Select_list_elementsContext *ctx) = 0;
  virtual void exitSelect_list_elements(PlSqlParser::Select_list_elementsContext *ctx) = 0;

  virtual void enterTable_ref_list(PlSqlParser::Table_ref_listContext *ctx) = 0;
  virtual void exitTable_ref_list(PlSqlParser::Table_ref_listContext *ctx) = 0;

  virtual void enterTable_ref(PlSqlParser::Table_refContext *ctx) = 0;
  virtual void exitTable_ref(PlSqlParser::Table_refContext *ctx) = 0;

  virtual void enterTable_ref_aux(PlSqlParser::Table_ref_auxContext *ctx) = 0;
  virtual void exitTable_ref_aux(PlSqlParser::Table_ref_auxContext *ctx) = 0;

  virtual void enterTable_ref_aux_internal_one(PlSqlParser::Table_ref_aux_internal_oneContext *ctx) = 0;
  virtual void exitTable_ref_aux_internal_one(PlSqlParser::Table_ref_aux_internal_oneContext *ctx) = 0;

  virtual void enterTable_ref_aux_internal_two(PlSqlParser::Table_ref_aux_internal_twoContext *ctx) = 0;
  virtual void exitTable_ref_aux_internal_two(PlSqlParser::Table_ref_aux_internal_twoContext *ctx) = 0;

  virtual void enterTable_ref_aux_internal_three(PlSqlParser::Table_ref_aux_internal_threeContext *ctx) = 0;
  virtual void exitTable_ref_aux_internal_three(PlSqlParser::Table_ref_aux_internal_threeContext *ctx) = 0;

  virtual void enterJoin_clause(PlSqlParser::Join_clauseContext *ctx) = 0;
  virtual void exitJoin_clause(PlSqlParser::Join_clauseContext *ctx) = 0;

  virtual void enterJoin_on_part(PlSqlParser::Join_on_partContext *ctx) = 0;
  virtual void exitJoin_on_part(PlSqlParser::Join_on_partContext *ctx) = 0;

  virtual void enterJoin_using_part(PlSqlParser::Join_using_partContext *ctx) = 0;
  virtual void exitJoin_using_part(PlSqlParser::Join_using_partContext *ctx) = 0;

  virtual void enterOuter_join_type(PlSqlParser::Outer_join_typeContext *ctx) = 0;
  virtual void exitOuter_join_type(PlSqlParser::Outer_join_typeContext *ctx) = 0;

  virtual void enterQuery_partition_clause(PlSqlParser::Query_partition_clauseContext *ctx) = 0;
  virtual void exitQuery_partition_clause(PlSqlParser::Query_partition_clauseContext *ctx) = 0;

  virtual void enterFlashback_query_clause(PlSqlParser::Flashback_query_clauseContext *ctx) = 0;
  virtual void exitFlashback_query_clause(PlSqlParser::Flashback_query_clauseContext *ctx) = 0;

  virtual void enterPivot_clause(PlSqlParser::Pivot_clauseContext *ctx) = 0;
  virtual void exitPivot_clause(PlSqlParser::Pivot_clauseContext *ctx) = 0;

  virtual void enterPivot_element(PlSqlParser::Pivot_elementContext *ctx) = 0;
  virtual void exitPivot_element(PlSqlParser::Pivot_elementContext *ctx) = 0;

  virtual void enterPivot_for_clause(PlSqlParser::Pivot_for_clauseContext *ctx) = 0;
  virtual void exitPivot_for_clause(PlSqlParser::Pivot_for_clauseContext *ctx) = 0;

  virtual void enterPivot_in_clause(PlSqlParser::Pivot_in_clauseContext *ctx) = 0;
  virtual void exitPivot_in_clause(PlSqlParser::Pivot_in_clauseContext *ctx) = 0;

  virtual void enterPivot_in_clause_element(PlSqlParser::Pivot_in_clause_elementContext *ctx) = 0;
  virtual void exitPivot_in_clause_element(PlSqlParser::Pivot_in_clause_elementContext *ctx) = 0;

  virtual void enterPivot_in_clause_elements(PlSqlParser::Pivot_in_clause_elementsContext *ctx) = 0;
  virtual void exitPivot_in_clause_elements(PlSqlParser::Pivot_in_clause_elementsContext *ctx) = 0;

  virtual void enterUnpivot_clause(PlSqlParser::Unpivot_clauseContext *ctx) = 0;
  virtual void exitUnpivot_clause(PlSqlParser::Unpivot_clauseContext *ctx) = 0;

  virtual void enterUnpivot_in_clause(PlSqlParser::Unpivot_in_clauseContext *ctx) = 0;
  virtual void exitUnpivot_in_clause(PlSqlParser::Unpivot_in_clauseContext *ctx) = 0;

  virtual void enterUnpivot_in_elements(PlSqlParser::Unpivot_in_elementsContext *ctx) = 0;
  virtual void exitUnpivot_in_elements(PlSqlParser::Unpivot_in_elementsContext *ctx) = 0;

  virtual void enterHierarchical_query_clause(PlSqlParser::Hierarchical_query_clauseContext *ctx) = 0;
  virtual void exitHierarchical_query_clause(PlSqlParser::Hierarchical_query_clauseContext *ctx) = 0;

  virtual void enterStart_part(PlSqlParser::Start_partContext *ctx) = 0;
  virtual void exitStart_part(PlSqlParser::Start_partContext *ctx) = 0;

  virtual void enterGroup_by_clause(PlSqlParser::Group_by_clauseContext *ctx) = 0;
  virtual void exitGroup_by_clause(PlSqlParser::Group_by_clauseContext *ctx) = 0;

  virtual void enterGroup_by_elements(PlSqlParser::Group_by_elementsContext *ctx) = 0;
  virtual void exitGroup_by_elements(PlSqlParser::Group_by_elementsContext *ctx) = 0;

  virtual void enterRollup_cube_clause(PlSqlParser::Rollup_cube_clauseContext *ctx) = 0;
  virtual void exitRollup_cube_clause(PlSqlParser::Rollup_cube_clauseContext *ctx) = 0;

  virtual void enterGrouping_sets_clause(PlSqlParser::Grouping_sets_clauseContext *ctx) = 0;
  virtual void exitGrouping_sets_clause(PlSqlParser::Grouping_sets_clauseContext *ctx) = 0;

  virtual void enterGrouping_sets_elements(PlSqlParser::Grouping_sets_elementsContext *ctx) = 0;
  virtual void exitGrouping_sets_elements(PlSqlParser::Grouping_sets_elementsContext *ctx) = 0;

  virtual void enterHaving_clause(PlSqlParser::Having_clauseContext *ctx) = 0;
  virtual void exitHaving_clause(PlSqlParser::Having_clauseContext *ctx) = 0;

  virtual void enterModel_clause(PlSqlParser::Model_clauseContext *ctx) = 0;
  virtual void exitModel_clause(PlSqlParser::Model_clauseContext *ctx) = 0;

  virtual void enterCell_reference_options(PlSqlParser::Cell_reference_optionsContext *ctx) = 0;
  virtual void exitCell_reference_options(PlSqlParser::Cell_reference_optionsContext *ctx) = 0;

  virtual void enterReturn_rows_clause(PlSqlParser::Return_rows_clauseContext *ctx) = 0;
  virtual void exitReturn_rows_clause(PlSqlParser::Return_rows_clauseContext *ctx) = 0;

  virtual void enterReference_model(PlSqlParser::Reference_modelContext *ctx) = 0;
  virtual void exitReference_model(PlSqlParser::Reference_modelContext *ctx) = 0;

  virtual void enterMain_model(PlSqlParser::Main_modelContext *ctx) = 0;
  virtual void exitMain_model(PlSqlParser::Main_modelContext *ctx) = 0;

  virtual void enterModel_column_clauses(PlSqlParser::Model_column_clausesContext *ctx) = 0;
  virtual void exitModel_column_clauses(PlSqlParser::Model_column_clausesContext *ctx) = 0;

  virtual void enterModel_column_partition_part(PlSqlParser::Model_column_partition_partContext *ctx) = 0;
  virtual void exitModel_column_partition_part(PlSqlParser::Model_column_partition_partContext *ctx) = 0;

  virtual void enterModel_column_list(PlSqlParser::Model_column_listContext *ctx) = 0;
  virtual void exitModel_column_list(PlSqlParser::Model_column_listContext *ctx) = 0;

  virtual void enterModel_column(PlSqlParser::Model_columnContext *ctx) = 0;
  virtual void exitModel_column(PlSqlParser::Model_columnContext *ctx) = 0;

  virtual void enterModel_rules_clause(PlSqlParser::Model_rules_clauseContext *ctx) = 0;
  virtual void exitModel_rules_clause(PlSqlParser::Model_rules_clauseContext *ctx) = 0;

  virtual void enterModel_rules_part(PlSqlParser::Model_rules_partContext *ctx) = 0;
  virtual void exitModel_rules_part(PlSqlParser::Model_rules_partContext *ctx) = 0;

  virtual void enterModel_rules_element(PlSqlParser::Model_rules_elementContext *ctx) = 0;
  virtual void exitModel_rules_element(PlSqlParser::Model_rules_elementContext *ctx) = 0;

  virtual void enterCell_assignment(PlSqlParser::Cell_assignmentContext *ctx) = 0;
  virtual void exitCell_assignment(PlSqlParser::Cell_assignmentContext *ctx) = 0;

  virtual void enterModel_iterate_clause(PlSqlParser::Model_iterate_clauseContext *ctx) = 0;
  virtual void exitModel_iterate_clause(PlSqlParser::Model_iterate_clauseContext *ctx) = 0;

  virtual void enterUntil_part(PlSqlParser::Until_partContext *ctx) = 0;
  virtual void exitUntil_part(PlSqlParser::Until_partContext *ctx) = 0;

  virtual void enterOrder_by_clause(PlSqlParser::Order_by_clauseContext *ctx) = 0;
  virtual void exitOrder_by_clause(PlSqlParser::Order_by_clauseContext *ctx) = 0;

  virtual void enterOrder_by_elements(PlSqlParser::Order_by_elementsContext *ctx) = 0;
  virtual void exitOrder_by_elements(PlSqlParser::Order_by_elementsContext *ctx) = 0;

  virtual void enterOffset_clause(PlSqlParser::Offset_clauseContext *ctx) = 0;
  virtual void exitOffset_clause(PlSqlParser::Offset_clauseContext *ctx) = 0;

  virtual void enterFetch_clause(PlSqlParser::Fetch_clauseContext *ctx) = 0;
  virtual void exitFetch_clause(PlSqlParser::Fetch_clauseContext *ctx) = 0;

  virtual void enterFor_update_clause(PlSqlParser::For_update_clauseContext *ctx) = 0;
  virtual void exitFor_update_clause(PlSqlParser::For_update_clauseContext *ctx) = 0;

  virtual void enterFor_update_of_part(PlSqlParser::For_update_of_partContext *ctx) = 0;
  virtual void exitFor_update_of_part(PlSqlParser::For_update_of_partContext *ctx) = 0;

  virtual void enterFor_update_options(PlSqlParser::For_update_optionsContext *ctx) = 0;
  virtual void exitFor_update_options(PlSqlParser::For_update_optionsContext *ctx) = 0;

  virtual void enterUpdate_statement(PlSqlParser::Update_statementContext *ctx) = 0;
  virtual void exitUpdate_statement(PlSqlParser::Update_statementContext *ctx) = 0;

  virtual void enterUpdate_set_clause(PlSqlParser::Update_set_clauseContext *ctx) = 0;
  virtual void exitUpdate_set_clause(PlSqlParser::Update_set_clauseContext *ctx) = 0;

  virtual void enterColumn_based_update_set_clause(PlSqlParser::Column_based_update_set_clauseContext *ctx) = 0;
  virtual void exitColumn_based_update_set_clause(PlSqlParser::Column_based_update_set_clauseContext *ctx) = 0;

  virtual void enterDelete_statement(PlSqlParser::Delete_statementContext *ctx) = 0;
  virtual void exitDelete_statement(PlSqlParser::Delete_statementContext *ctx) = 0;

  virtual void enterInsert_statement(PlSqlParser::Insert_statementContext *ctx) = 0;
  virtual void exitInsert_statement(PlSqlParser::Insert_statementContext *ctx) = 0;

  virtual void enterSingle_table_insert(PlSqlParser::Single_table_insertContext *ctx) = 0;
  virtual void exitSingle_table_insert(PlSqlParser::Single_table_insertContext *ctx) = 0;

  virtual void enterMulti_table_insert(PlSqlParser::Multi_table_insertContext *ctx) = 0;
  virtual void exitMulti_table_insert(PlSqlParser::Multi_table_insertContext *ctx) = 0;

  virtual void enterMulti_table_element(PlSqlParser::Multi_table_elementContext *ctx) = 0;
  virtual void exitMulti_table_element(PlSqlParser::Multi_table_elementContext *ctx) = 0;

  virtual void enterConditional_insert_clause(PlSqlParser::Conditional_insert_clauseContext *ctx) = 0;
  virtual void exitConditional_insert_clause(PlSqlParser::Conditional_insert_clauseContext *ctx) = 0;

  virtual void enterConditional_insert_when_part(PlSqlParser::Conditional_insert_when_partContext *ctx) = 0;
  virtual void exitConditional_insert_when_part(PlSqlParser::Conditional_insert_when_partContext *ctx) = 0;

  virtual void enterConditional_insert_else_part(PlSqlParser::Conditional_insert_else_partContext *ctx) = 0;
  virtual void exitConditional_insert_else_part(PlSqlParser::Conditional_insert_else_partContext *ctx) = 0;

  virtual void enterInsert_into_clause(PlSqlParser::Insert_into_clauseContext *ctx) = 0;
  virtual void exitInsert_into_clause(PlSqlParser::Insert_into_clauseContext *ctx) = 0;

  virtual void enterValues_clause(PlSqlParser::Values_clauseContext *ctx) = 0;
  virtual void exitValues_clause(PlSqlParser::Values_clauseContext *ctx) = 0;

  virtual void enterMerge_statement(PlSqlParser::Merge_statementContext *ctx) = 0;
  virtual void exitMerge_statement(PlSqlParser::Merge_statementContext *ctx) = 0;

  virtual void enterMerge_update_clause(PlSqlParser::Merge_update_clauseContext *ctx) = 0;
  virtual void exitMerge_update_clause(PlSqlParser::Merge_update_clauseContext *ctx) = 0;

  virtual void enterMerge_element(PlSqlParser::Merge_elementContext *ctx) = 0;
  virtual void exitMerge_element(PlSqlParser::Merge_elementContext *ctx) = 0;

  virtual void enterMerge_update_delete_part(PlSqlParser::Merge_update_delete_partContext *ctx) = 0;
  virtual void exitMerge_update_delete_part(PlSqlParser::Merge_update_delete_partContext *ctx) = 0;

  virtual void enterMerge_insert_clause(PlSqlParser::Merge_insert_clauseContext *ctx) = 0;
  virtual void exitMerge_insert_clause(PlSqlParser::Merge_insert_clauseContext *ctx) = 0;

  virtual void enterSelected_tableview(PlSqlParser::Selected_tableviewContext *ctx) = 0;
  virtual void exitSelected_tableview(PlSqlParser::Selected_tableviewContext *ctx) = 0;

  virtual void enterLock_table_statement(PlSqlParser::Lock_table_statementContext *ctx) = 0;
  virtual void exitLock_table_statement(PlSqlParser::Lock_table_statementContext *ctx) = 0;

  virtual void enterWait_nowait_part(PlSqlParser::Wait_nowait_partContext *ctx) = 0;
  virtual void exitWait_nowait_part(PlSqlParser::Wait_nowait_partContext *ctx) = 0;

  virtual void enterLock_table_element(PlSqlParser::Lock_table_elementContext *ctx) = 0;
  virtual void exitLock_table_element(PlSqlParser::Lock_table_elementContext *ctx) = 0;

  virtual void enterLock_mode(PlSqlParser::Lock_modeContext *ctx) = 0;
  virtual void exitLock_mode(PlSqlParser::Lock_modeContext *ctx) = 0;

  virtual void enterGeneral_table_ref(PlSqlParser::General_table_refContext *ctx) = 0;
  virtual void exitGeneral_table_ref(PlSqlParser::General_table_refContext *ctx) = 0;

  virtual void enterStatic_returning_clause(PlSqlParser::Static_returning_clauseContext *ctx) = 0;
  virtual void exitStatic_returning_clause(PlSqlParser::Static_returning_clauseContext *ctx) = 0;

  virtual void enterError_logging_clause(PlSqlParser::Error_logging_clauseContext *ctx) = 0;
  virtual void exitError_logging_clause(PlSqlParser::Error_logging_clauseContext *ctx) = 0;

  virtual void enterError_logging_into_part(PlSqlParser::Error_logging_into_partContext *ctx) = 0;
  virtual void exitError_logging_into_part(PlSqlParser::Error_logging_into_partContext *ctx) = 0;

  virtual void enterError_logging_reject_part(PlSqlParser::Error_logging_reject_partContext *ctx) = 0;
  virtual void exitError_logging_reject_part(PlSqlParser::Error_logging_reject_partContext *ctx) = 0;

  virtual void enterDml_table_expression_clause(PlSqlParser::Dml_table_expression_clauseContext *ctx) = 0;
  virtual void exitDml_table_expression_clause(PlSqlParser::Dml_table_expression_clauseContext *ctx) = 0;

  virtual void enterTable_collection_expression(PlSqlParser::Table_collection_expressionContext *ctx) = 0;
  virtual void exitTable_collection_expression(PlSqlParser::Table_collection_expressionContext *ctx) = 0;

  virtual void enterSubquery_restriction_clause(PlSqlParser::Subquery_restriction_clauseContext *ctx) = 0;
  virtual void exitSubquery_restriction_clause(PlSqlParser::Subquery_restriction_clauseContext *ctx) = 0;

  virtual void enterSample_clause(PlSqlParser::Sample_clauseContext *ctx) = 0;
  virtual void exitSample_clause(PlSqlParser::Sample_clauseContext *ctx) = 0;

  virtual void enterSeed_part(PlSqlParser::Seed_partContext *ctx) = 0;
  virtual void exitSeed_part(PlSqlParser::Seed_partContext *ctx) = 0;

  virtual void enterCondition(PlSqlParser::ConditionContext *ctx) = 0;
  virtual void exitCondition(PlSqlParser::ConditionContext *ctx) = 0;

  virtual void enterExpressions(PlSqlParser::ExpressionsContext *ctx) = 0;
  virtual void exitExpressions(PlSqlParser::ExpressionsContext *ctx) = 0;

  virtual void enterExpression(PlSqlParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(PlSqlParser::ExpressionContext *ctx) = 0;

  virtual void enterCursor_expression(PlSqlParser::Cursor_expressionContext *ctx) = 0;
  virtual void exitCursor_expression(PlSqlParser::Cursor_expressionContext *ctx) = 0;

  virtual void enterLogical_expression(PlSqlParser::Logical_expressionContext *ctx) = 0;
  virtual void exitLogical_expression(PlSqlParser::Logical_expressionContext *ctx) = 0;

  virtual void enterMultiset_expression(PlSqlParser::Multiset_expressionContext *ctx) = 0;
  virtual void exitMultiset_expression(PlSqlParser::Multiset_expressionContext *ctx) = 0;

  virtual void enterRelational_expression(PlSqlParser::Relational_expressionContext *ctx) = 0;
  virtual void exitRelational_expression(PlSqlParser::Relational_expressionContext *ctx) = 0;

  virtual void enterCompound_expression(PlSqlParser::Compound_expressionContext *ctx) = 0;
  virtual void exitCompound_expression(PlSqlParser::Compound_expressionContext *ctx) = 0;

  virtual void enterRelational_operator(PlSqlParser::Relational_operatorContext *ctx) = 0;
  virtual void exitRelational_operator(PlSqlParser::Relational_operatorContext *ctx) = 0;

  virtual void enterIn_elements(PlSqlParser::In_elementsContext *ctx) = 0;
  virtual void exitIn_elements(PlSqlParser::In_elementsContext *ctx) = 0;

  virtual void enterBetween_elements(PlSqlParser::Between_elementsContext *ctx) = 0;
  virtual void exitBetween_elements(PlSqlParser::Between_elementsContext *ctx) = 0;

  virtual void enterConcatenation(PlSqlParser::ConcatenationContext *ctx) = 0;
  virtual void exitConcatenation(PlSqlParser::ConcatenationContext *ctx) = 0;

  virtual void enterInterval_expression(PlSqlParser::Interval_expressionContext *ctx) = 0;
  virtual void exitInterval_expression(PlSqlParser::Interval_expressionContext *ctx) = 0;

  virtual void enterModel_expression(PlSqlParser::Model_expressionContext *ctx) = 0;
  virtual void exitModel_expression(PlSqlParser::Model_expressionContext *ctx) = 0;

  virtual void enterModel_expression_element(PlSqlParser::Model_expression_elementContext *ctx) = 0;
  virtual void exitModel_expression_element(PlSqlParser::Model_expression_elementContext *ctx) = 0;

  virtual void enterSingle_column_for_loop(PlSqlParser::Single_column_for_loopContext *ctx) = 0;
  virtual void exitSingle_column_for_loop(PlSqlParser::Single_column_for_loopContext *ctx) = 0;

  virtual void enterMulti_column_for_loop(PlSqlParser::Multi_column_for_loopContext *ctx) = 0;
  virtual void exitMulti_column_for_loop(PlSqlParser::Multi_column_for_loopContext *ctx) = 0;

  virtual void enterUnary_expression(PlSqlParser::Unary_expressionContext *ctx) = 0;
  virtual void exitUnary_expression(PlSqlParser::Unary_expressionContext *ctx) = 0;

  virtual void enterCase_statement(PlSqlParser::Case_statementContext *ctx) = 0;
  virtual void exitCase_statement(PlSqlParser::Case_statementContext *ctx) = 0;

  virtual void enterSimple_case_statement(PlSqlParser::Simple_case_statementContext *ctx) = 0;
  virtual void exitSimple_case_statement(PlSqlParser::Simple_case_statementContext *ctx) = 0;

  virtual void enterSimple_case_when_part(PlSqlParser::Simple_case_when_partContext *ctx) = 0;
  virtual void exitSimple_case_when_part(PlSqlParser::Simple_case_when_partContext *ctx) = 0;

  virtual void enterSearched_case_statement(PlSqlParser::Searched_case_statementContext *ctx) = 0;
  virtual void exitSearched_case_statement(PlSqlParser::Searched_case_statementContext *ctx) = 0;

  virtual void enterSearched_case_when_part(PlSqlParser::Searched_case_when_partContext *ctx) = 0;
  virtual void exitSearched_case_when_part(PlSqlParser::Searched_case_when_partContext *ctx) = 0;

  virtual void enterCase_else_part(PlSqlParser::Case_else_partContext *ctx) = 0;
  virtual void exitCase_else_part(PlSqlParser::Case_else_partContext *ctx) = 0;

  virtual void enterAtom(PlSqlParser::AtomContext *ctx) = 0;
  virtual void exitAtom(PlSqlParser::AtomContext *ctx) = 0;

  virtual void enterQuantified_expression(PlSqlParser::Quantified_expressionContext *ctx) = 0;
  virtual void exitQuantified_expression(PlSqlParser::Quantified_expressionContext *ctx) = 0;

  virtual void enterString_function(PlSqlParser::String_functionContext *ctx) = 0;
  virtual void exitString_function(PlSqlParser::String_functionContext *ctx) = 0;

  virtual void enterStandard_function(PlSqlParser::Standard_functionContext *ctx) = 0;
  virtual void exitStandard_function(PlSqlParser::Standard_functionContext *ctx) = 0;

  virtual void enterLiteral(PlSqlParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(PlSqlParser::LiteralContext *ctx) = 0;

  virtual void enterNumeric_function_wrapper(PlSqlParser::Numeric_function_wrapperContext *ctx) = 0;
  virtual void exitNumeric_function_wrapper(PlSqlParser::Numeric_function_wrapperContext *ctx) = 0;

  virtual void enterNumeric_function(PlSqlParser::Numeric_functionContext *ctx) = 0;
  virtual void exitNumeric_function(PlSqlParser::Numeric_functionContext *ctx) = 0;

  virtual void enterOther_function(PlSqlParser::Other_functionContext *ctx) = 0;
  virtual void exitOther_function(PlSqlParser::Other_functionContext *ctx) = 0;

  virtual void enterOver_clause_keyword(PlSqlParser::Over_clause_keywordContext *ctx) = 0;
  virtual void exitOver_clause_keyword(PlSqlParser::Over_clause_keywordContext *ctx) = 0;

  virtual void enterWithin_or_over_clause_keyword(PlSqlParser::Within_or_over_clause_keywordContext *ctx) = 0;
  virtual void exitWithin_or_over_clause_keyword(PlSqlParser::Within_or_over_clause_keywordContext *ctx) = 0;

  virtual void enterStandard_prediction_function_keyword(PlSqlParser::Standard_prediction_function_keywordContext *ctx) = 0;
  virtual void exitStandard_prediction_function_keyword(PlSqlParser::Standard_prediction_function_keywordContext *ctx) = 0;

  virtual void enterOver_clause(PlSqlParser::Over_clauseContext *ctx) = 0;
  virtual void exitOver_clause(PlSqlParser::Over_clauseContext *ctx) = 0;

  virtual void enterWindowing_clause(PlSqlParser::Windowing_clauseContext *ctx) = 0;
  virtual void exitWindowing_clause(PlSqlParser::Windowing_clauseContext *ctx) = 0;

  virtual void enterWindowing_type(PlSqlParser::Windowing_typeContext *ctx) = 0;
  virtual void exitWindowing_type(PlSqlParser::Windowing_typeContext *ctx) = 0;

  virtual void enterWindowing_elements(PlSqlParser::Windowing_elementsContext *ctx) = 0;
  virtual void exitWindowing_elements(PlSqlParser::Windowing_elementsContext *ctx) = 0;

  virtual void enterUsing_clause(PlSqlParser::Using_clauseContext *ctx) = 0;
  virtual void exitUsing_clause(PlSqlParser::Using_clauseContext *ctx) = 0;

  virtual void enterUsing_element(PlSqlParser::Using_elementContext *ctx) = 0;
  virtual void exitUsing_element(PlSqlParser::Using_elementContext *ctx) = 0;

  virtual void enterCollect_order_by_part(PlSqlParser::Collect_order_by_partContext *ctx) = 0;
  virtual void exitCollect_order_by_part(PlSqlParser::Collect_order_by_partContext *ctx) = 0;

  virtual void enterWithin_or_over_part(PlSqlParser::Within_or_over_partContext *ctx) = 0;
  virtual void exitWithin_or_over_part(PlSqlParser::Within_or_over_partContext *ctx) = 0;

  virtual void enterCost_matrix_clause(PlSqlParser::Cost_matrix_clauseContext *ctx) = 0;
  virtual void exitCost_matrix_clause(PlSqlParser::Cost_matrix_clauseContext *ctx) = 0;

  virtual void enterXml_passing_clause(PlSqlParser::Xml_passing_clauseContext *ctx) = 0;
  virtual void exitXml_passing_clause(PlSqlParser::Xml_passing_clauseContext *ctx) = 0;

  virtual void enterXml_attributes_clause(PlSqlParser::Xml_attributes_clauseContext *ctx) = 0;
  virtual void exitXml_attributes_clause(PlSqlParser::Xml_attributes_clauseContext *ctx) = 0;

  virtual void enterXml_namespaces_clause(PlSqlParser::Xml_namespaces_clauseContext *ctx) = 0;
  virtual void exitXml_namespaces_clause(PlSqlParser::Xml_namespaces_clauseContext *ctx) = 0;

  virtual void enterXml_table_column(PlSqlParser::Xml_table_columnContext *ctx) = 0;
  virtual void exitXml_table_column(PlSqlParser::Xml_table_columnContext *ctx) = 0;

  virtual void enterXml_general_default_part(PlSqlParser::Xml_general_default_partContext *ctx) = 0;
  virtual void exitXml_general_default_part(PlSqlParser::Xml_general_default_partContext *ctx) = 0;

  virtual void enterXml_multiuse_expression_element(PlSqlParser::Xml_multiuse_expression_elementContext *ctx) = 0;
  virtual void exitXml_multiuse_expression_element(PlSqlParser::Xml_multiuse_expression_elementContext *ctx) = 0;

  virtual void enterXmlroot_param_version_part(PlSqlParser::Xmlroot_param_version_partContext *ctx) = 0;
  virtual void exitXmlroot_param_version_part(PlSqlParser::Xmlroot_param_version_partContext *ctx) = 0;

  virtual void enterXmlroot_param_standalone_part(PlSqlParser::Xmlroot_param_standalone_partContext *ctx) = 0;
  virtual void exitXmlroot_param_standalone_part(PlSqlParser::Xmlroot_param_standalone_partContext *ctx) = 0;

  virtual void enterXmlserialize_param_enconding_part(PlSqlParser::Xmlserialize_param_enconding_partContext *ctx) = 0;
  virtual void exitXmlserialize_param_enconding_part(PlSqlParser::Xmlserialize_param_enconding_partContext *ctx) = 0;

  virtual void enterXmlserialize_param_version_part(PlSqlParser::Xmlserialize_param_version_partContext *ctx) = 0;
  virtual void exitXmlserialize_param_version_part(PlSqlParser::Xmlserialize_param_version_partContext *ctx) = 0;

  virtual void enterXmlserialize_param_ident_part(PlSqlParser::Xmlserialize_param_ident_partContext *ctx) = 0;
  virtual void exitXmlserialize_param_ident_part(PlSqlParser::Xmlserialize_param_ident_partContext *ctx) = 0;

  virtual void enterSql_plus_command(PlSqlParser::Sql_plus_commandContext *ctx) = 0;
  virtual void exitSql_plus_command(PlSqlParser::Sql_plus_commandContext *ctx) = 0;

  virtual void enterWhenever_command(PlSqlParser::Whenever_commandContext *ctx) = 0;
  virtual void exitWhenever_command(PlSqlParser::Whenever_commandContext *ctx) = 0;

  virtual void enterSet_command(PlSqlParser::Set_commandContext *ctx) = 0;
  virtual void exitSet_command(PlSqlParser::Set_commandContext *ctx) = 0;

  virtual void enterPartition_extension_clause(PlSqlParser::Partition_extension_clauseContext *ctx) = 0;
  virtual void exitPartition_extension_clause(PlSqlParser::Partition_extension_clauseContext *ctx) = 0;

  virtual void enterColumn_alias(PlSqlParser::Column_aliasContext *ctx) = 0;
  virtual void exitColumn_alias(PlSqlParser::Column_aliasContext *ctx) = 0;

  virtual void enterTable_alias(PlSqlParser::Table_aliasContext *ctx) = 0;
  virtual void exitTable_alias(PlSqlParser::Table_aliasContext *ctx) = 0;

  virtual void enterWhere_clause(PlSqlParser::Where_clauseContext *ctx) = 0;
  virtual void exitWhere_clause(PlSqlParser::Where_clauseContext *ctx) = 0;

  virtual void enterInto_clause(PlSqlParser::Into_clauseContext *ctx) = 0;
  virtual void exitInto_clause(PlSqlParser::Into_clauseContext *ctx) = 0;

  virtual void enterXml_column_name(PlSqlParser::Xml_column_nameContext *ctx) = 0;
  virtual void exitXml_column_name(PlSqlParser::Xml_column_nameContext *ctx) = 0;

  virtual void enterCost_class_name(PlSqlParser::Cost_class_nameContext *ctx) = 0;
  virtual void exitCost_class_name(PlSqlParser::Cost_class_nameContext *ctx) = 0;

  virtual void enterAttribute_name(PlSqlParser::Attribute_nameContext *ctx) = 0;
  virtual void exitAttribute_name(PlSqlParser::Attribute_nameContext *ctx) = 0;

  virtual void enterSavepoint_name(PlSqlParser::Savepoint_nameContext *ctx) = 0;
  virtual void exitSavepoint_name(PlSqlParser::Savepoint_nameContext *ctx) = 0;

  virtual void enterRollback_segment_name(PlSqlParser::Rollback_segment_nameContext *ctx) = 0;
  virtual void exitRollback_segment_name(PlSqlParser::Rollback_segment_nameContext *ctx) = 0;

  virtual void enterTable_var_name(PlSqlParser::Table_var_nameContext *ctx) = 0;
  virtual void exitTable_var_name(PlSqlParser::Table_var_nameContext *ctx) = 0;

  virtual void enterSchema_name(PlSqlParser::Schema_nameContext *ctx) = 0;
  virtual void exitSchema_name(PlSqlParser::Schema_nameContext *ctx) = 0;

  virtual void enterRoutine_name(PlSqlParser::Routine_nameContext *ctx) = 0;
  virtual void exitRoutine_name(PlSqlParser::Routine_nameContext *ctx) = 0;

  virtual void enterPackage_name(PlSqlParser::Package_nameContext *ctx) = 0;
  virtual void exitPackage_name(PlSqlParser::Package_nameContext *ctx) = 0;

  virtual void enterImplementation_type_name(PlSqlParser::Implementation_type_nameContext *ctx) = 0;
  virtual void exitImplementation_type_name(PlSqlParser::Implementation_type_nameContext *ctx) = 0;

  virtual void enterParameter_name(PlSqlParser::Parameter_nameContext *ctx) = 0;
  virtual void exitParameter_name(PlSqlParser::Parameter_nameContext *ctx) = 0;

  virtual void enterReference_model_name(PlSqlParser::Reference_model_nameContext *ctx) = 0;
  virtual void exitReference_model_name(PlSqlParser::Reference_model_nameContext *ctx) = 0;

  virtual void enterMain_model_name(PlSqlParser::Main_model_nameContext *ctx) = 0;
  virtual void exitMain_model_name(PlSqlParser::Main_model_nameContext *ctx) = 0;

  virtual void enterContainer_tableview_name(PlSqlParser::Container_tableview_nameContext *ctx) = 0;
  virtual void exitContainer_tableview_name(PlSqlParser::Container_tableview_nameContext *ctx) = 0;

  virtual void enterAggregate_function_name(PlSqlParser::Aggregate_function_nameContext *ctx) = 0;
  virtual void exitAggregate_function_name(PlSqlParser::Aggregate_function_nameContext *ctx) = 0;

  virtual void enterQuery_name(PlSqlParser::Query_nameContext *ctx) = 0;
  virtual void exitQuery_name(PlSqlParser::Query_nameContext *ctx) = 0;

  virtual void enterGrantee_name(PlSqlParser::Grantee_nameContext *ctx) = 0;
  virtual void exitGrantee_name(PlSqlParser::Grantee_nameContext *ctx) = 0;

  virtual void enterRole_name(PlSqlParser::Role_nameContext *ctx) = 0;
  virtual void exitRole_name(PlSqlParser::Role_nameContext *ctx) = 0;

  virtual void enterConstraint_name(PlSqlParser::Constraint_nameContext *ctx) = 0;
  virtual void exitConstraint_name(PlSqlParser::Constraint_nameContext *ctx) = 0;

  virtual void enterLabel_name(PlSqlParser::Label_nameContext *ctx) = 0;
  virtual void exitLabel_name(PlSqlParser::Label_nameContext *ctx) = 0;

  virtual void enterType_name(PlSqlParser::Type_nameContext *ctx) = 0;
  virtual void exitType_name(PlSqlParser::Type_nameContext *ctx) = 0;

  virtual void enterSequence_name(PlSqlParser::Sequence_nameContext *ctx) = 0;
  virtual void exitSequence_name(PlSqlParser::Sequence_nameContext *ctx) = 0;

  virtual void enterException_name(PlSqlParser::Exception_nameContext *ctx) = 0;
  virtual void exitException_name(PlSqlParser::Exception_nameContext *ctx) = 0;

  virtual void enterFunction_name(PlSqlParser::Function_nameContext *ctx) = 0;
  virtual void exitFunction_name(PlSqlParser::Function_nameContext *ctx) = 0;

  virtual void enterProcedure_name(PlSqlParser::Procedure_nameContext *ctx) = 0;
  virtual void exitProcedure_name(PlSqlParser::Procedure_nameContext *ctx) = 0;

  virtual void enterTrigger_name(PlSqlParser::Trigger_nameContext *ctx) = 0;
  virtual void exitTrigger_name(PlSqlParser::Trigger_nameContext *ctx) = 0;

  virtual void enterVariable_name(PlSqlParser::Variable_nameContext *ctx) = 0;
  virtual void exitVariable_name(PlSqlParser::Variable_nameContext *ctx) = 0;

  virtual void enterIndex_name(PlSqlParser::Index_nameContext *ctx) = 0;
  virtual void exitIndex_name(PlSqlParser::Index_nameContext *ctx) = 0;

  virtual void enterCursor_name(PlSqlParser::Cursor_nameContext *ctx) = 0;
  virtual void exitCursor_name(PlSqlParser::Cursor_nameContext *ctx) = 0;

  virtual void enterRecord_name(PlSqlParser::Record_nameContext *ctx) = 0;
  virtual void exitRecord_name(PlSqlParser::Record_nameContext *ctx) = 0;

  virtual void enterCollection_name(PlSqlParser::Collection_nameContext *ctx) = 0;
  virtual void exitCollection_name(PlSqlParser::Collection_nameContext *ctx) = 0;

  virtual void enterLink_name(PlSqlParser::Link_nameContext *ctx) = 0;
  virtual void exitLink_name(PlSqlParser::Link_nameContext *ctx) = 0;

  virtual void enterColumn_name(PlSqlParser::Column_nameContext *ctx) = 0;
  virtual void exitColumn_name(PlSqlParser::Column_nameContext *ctx) = 0;

  virtual void enterTableview_name(PlSqlParser::Tableview_nameContext *ctx) = 0;
  virtual void exitTableview_name(PlSqlParser::Tableview_nameContext *ctx) = 0;

  virtual void enterChar_set_name(PlSqlParser::Char_set_nameContext *ctx) = 0;
  virtual void exitChar_set_name(PlSqlParser::Char_set_nameContext *ctx) = 0;

  virtual void enterSynonym_name(PlSqlParser::Synonym_nameContext *ctx) = 0;
  virtual void exitSynonym_name(PlSqlParser::Synonym_nameContext *ctx) = 0;

  virtual void enterSchema_object_name(PlSqlParser::Schema_object_nameContext *ctx) = 0;
  virtual void exitSchema_object_name(PlSqlParser::Schema_object_nameContext *ctx) = 0;

  virtual void enterDir_object_name(PlSqlParser::Dir_object_nameContext *ctx) = 0;
  virtual void exitDir_object_name(PlSqlParser::Dir_object_nameContext *ctx) = 0;

  virtual void enterUser_object_name(PlSqlParser::User_object_nameContext *ctx) = 0;
  virtual void exitUser_object_name(PlSqlParser::User_object_nameContext *ctx) = 0;

  virtual void enterGrant_object_name(PlSqlParser::Grant_object_nameContext *ctx) = 0;
  virtual void exitGrant_object_name(PlSqlParser::Grant_object_nameContext *ctx) = 0;

  virtual void enterColumn_list(PlSqlParser::Column_listContext *ctx) = 0;
  virtual void exitColumn_list(PlSqlParser::Column_listContext *ctx) = 0;

  virtual void enterParen_column_list(PlSqlParser::Paren_column_listContext *ctx) = 0;
  virtual void exitParen_column_list(PlSqlParser::Paren_column_listContext *ctx) = 0;

  virtual void enterKeep_clause(PlSqlParser::Keep_clauseContext *ctx) = 0;
  virtual void exitKeep_clause(PlSqlParser::Keep_clauseContext *ctx) = 0;

  virtual void enterFunction_argument(PlSqlParser::Function_argumentContext *ctx) = 0;
  virtual void exitFunction_argument(PlSqlParser::Function_argumentContext *ctx) = 0;

  virtual void enterFunction_argument_analytic(PlSqlParser::Function_argument_analyticContext *ctx) = 0;
  virtual void exitFunction_argument_analytic(PlSqlParser::Function_argument_analyticContext *ctx) = 0;

  virtual void enterFunction_argument_modeling(PlSqlParser::Function_argument_modelingContext *ctx) = 0;
  virtual void exitFunction_argument_modeling(PlSqlParser::Function_argument_modelingContext *ctx) = 0;

  virtual void enterRespect_or_ignore_nulls(PlSqlParser::Respect_or_ignore_nullsContext *ctx) = 0;
  virtual void exitRespect_or_ignore_nulls(PlSqlParser::Respect_or_ignore_nullsContext *ctx) = 0;

  virtual void enterArgument(PlSqlParser::ArgumentContext *ctx) = 0;
  virtual void exitArgument(PlSqlParser::ArgumentContext *ctx) = 0;

  virtual void enterType_spec(PlSqlParser::Type_specContext *ctx) = 0;
  virtual void exitType_spec(PlSqlParser::Type_specContext *ctx) = 0;

  virtual void enterDatatype(PlSqlParser::DatatypeContext *ctx) = 0;
  virtual void exitDatatype(PlSqlParser::DatatypeContext *ctx) = 0;

  virtual void enterPrecision_part(PlSqlParser::Precision_partContext *ctx) = 0;
  virtual void exitPrecision_part(PlSqlParser::Precision_partContext *ctx) = 0;

  virtual void enterNative_datatype_element(PlSqlParser::Native_datatype_elementContext *ctx) = 0;
  virtual void exitNative_datatype_element(PlSqlParser::Native_datatype_elementContext *ctx) = 0;

  virtual void enterBind_variable(PlSqlParser::Bind_variableContext *ctx) = 0;
  virtual void exitBind_variable(PlSqlParser::Bind_variableContext *ctx) = 0;

  virtual void enterGeneral_element(PlSqlParser::General_elementContext *ctx) = 0;
  virtual void exitGeneral_element(PlSqlParser::General_elementContext *ctx) = 0;

  virtual void enterGeneral_element_part(PlSqlParser::General_element_partContext *ctx) = 0;
  virtual void exitGeneral_element_part(PlSqlParser::General_element_partContext *ctx) = 0;

  virtual void enterTable_element(PlSqlParser::Table_elementContext *ctx) = 0;
  virtual void exitTable_element(PlSqlParser::Table_elementContext *ctx) = 0;

  virtual void enterObject_privilege(PlSqlParser::Object_privilegeContext *ctx) = 0;
  virtual void exitObject_privilege(PlSqlParser::Object_privilegeContext *ctx) = 0;

  virtual void enterSystem_privilege(PlSqlParser::System_privilegeContext *ctx) = 0;
  virtual void exitSystem_privilege(PlSqlParser::System_privilegeContext *ctx) = 0;

  virtual void enterConstant(PlSqlParser::ConstantContext *ctx) = 0;
  virtual void exitConstant(PlSqlParser::ConstantContext *ctx) = 0;

  virtual void enterNumeric(PlSqlParser::NumericContext *ctx) = 0;
  virtual void exitNumeric(PlSqlParser::NumericContext *ctx) = 0;

  virtual void enterNumeric_negative(PlSqlParser::Numeric_negativeContext *ctx) = 0;
  virtual void exitNumeric_negative(PlSqlParser::Numeric_negativeContext *ctx) = 0;

  virtual void enterQuoted_string(PlSqlParser::Quoted_stringContext *ctx) = 0;
  virtual void exitQuoted_string(PlSqlParser::Quoted_stringContext *ctx) = 0;

  virtual void enterIdentifier(PlSqlParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(PlSqlParser::IdentifierContext *ctx) = 0;

  virtual void enterId_expression(PlSqlParser::Id_expressionContext *ctx) = 0;
  virtual void exitId_expression(PlSqlParser::Id_expressionContext *ctx) = 0;

  virtual void enterOuter_join_sign(PlSqlParser::Outer_join_signContext *ctx) = 0;
  virtual void exitOuter_join_sign(PlSqlParser::Outer_join_signContext *ctx) = 0;

  virtual void enterRegular_id(PlSqlParser::Regular_idContext *ctx) = 0;
  virtual void exitRegular_id(PlSqlParser::Regular_idContext *ctx) = 0;

  virtual void enterNon_reserved_keywords_in_12c(PlSqlParser::Non_reserved_keywords_in_12cContext *ctx) = 0;
  virtual void exitNon_reserved_keywords_in_12c(PlSqlParser::Non_reserved_keywords_in_12cContext *ctx) = 0;

  virtual void enterNon_reserved_keywords_pre12c(PlSqlParser::Non_reserved_keywords_pre12cContext *ctx) = 0;
  virtual void exitNon_reserved_keywords_pre12c(PlSqlParser::Non_reserved_keywords_pre12cContext *ctx) = 0;

  virtual void enterString_function_name(PlSqlParser::String_function_nameContext *ctx) = 0;
  virtual void exitString_function_name(PlSqlParser::String_function_nameContext *ctx) = 0;

  virtual void enterNumeric_function_name(PlSqlParser::Numeric_function_nameContext *ctx) = 0;
  virtual void exitNumeric_function_name(PlSqlParser::Numeric_function_nameContext *ctx) = 0;


};

}  // namespace oracle

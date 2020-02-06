
// Generated from PlSqlParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "PlSqlParserListener.h"


namespace oracle {

/**
 * This class provides an empty implementation of PlSqlParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  PlSqlParserBaseListener : public PlSqlParserListener {
public:

  virtual void enterSql_script(PlSqlParser::Sql_scriptContext * /*ctx*/) override { }
  virtual void exitSql_script(PlSqlParser::Sql_scriptContext * /*ctx*/) override { }

  virtual void enterUnit_statement(PlSqlParser::Unit_statementContext * /*ctx*/) override { }
  virtual void exitUnit_statement(PlSqlParser::Unit_statementContext * /*ctx*/) override { }

  virtual void enterSelect_expr_statement(PlSqlParser::Select_expr_statementContext * /*ctx*/) override { }
  virtual void exitSelect_expr_statement(PlSqlParser::Select_expr_statementContext * /*ctx*/) override { }

  virtual void enterDrop_function(PlSqlParser::Drop_functionContext * /*ctx*/) override { }
  virtual void exitDrop_function(PlSqlParser::Drop_functionContext * /*ctx*/) override { }

  virtual void enterAlter_function(PlSqlParser::Alter_functionContext * /*ctx*/) override { }
  virtual void exitAlter_function(PlSqlParser::Alter_functionContext * /*ctx*/) override { }

  virtual void enterCreate_function_body(PlSqlParser::Create_function_bodyContext * /*ctx*/) override { }
  virtual void exitCreate_function_body(PlSqlParser::Create_function_bodyContext * /*ctx*/) override { }

  virtual void enterParallel_enable_clause(PlSqlParser::Parallel_enable_clauseContext * /*ctx*/) override { }
  virtual void exitParallel_enable_clause(PlSqlParser::Parallel_enable_clauseContext * /*ctx*/) override { }

  virtual void enterPartition_by_clause(PlSqlParser::Partition_by_clauseContext * /*ctx*/) override { }
  virtual void exitPartition_by_clause(PlSqlParser::Partition_by_clauseContext * /*ctx*/) override { }

  virtual void enterResult_cache_clause(PlSqlParser::Result_cache_clauseContext * /*ctx*/) override { }
  virtual void exitResult_cache_clause(PlSqlParser::Result_cache_clauseContext * /*ctx*/) override { }

  virtual void enterRelies_on_part(PlSqlParser::Relies_on_partContext * /*ctx*/) override { }
  virtual void exitRelies_on_part(PlSqlParser::Relies_on_partContext * /*ctx*/) override { }

  virtual void enterStreaming_clause(PlSqlParser::Streaming_clauseContext * /*ctx*/) override { }
  virtual void exitStreaming_clause(PlSqlParser::Streaming_clauseContext * /*ctx*/) override { }

  virtual void enterDrop_package(PlSqlParser::Drop_packageContext * /*ctx*/) override { }
  virtual void exitDrop_package(PlSqlParser::Drop_packageContext * /*ctx*/) override { }

  virtual void enterAlter_package(PlSqlParser::Alter_packageContext * /*ctx*/) override { }
  virtual void exitAlter_package(PlSqlParser::Alter_packageContext * /*ctx*/) override { }

  virtual void enterCreate_package(PlSqlParser::Create_packageContext * /*ctx*/) override { }
  virtual void exitCreate_package(PlSqlParser::Create_packageContext * /*ctx*/) override { }

  virtual void enterCreate_package_body(PlSqlParser::Create_package_bodyContext * /*ctx*/) override { }
  virtual void exitCreate_package_body(PlSqlParser::Create_package_bodyContext * /*ctx*/) override { }

  virtual void enterPackage_obj_spec(PlSqlParser::Package_obj_specContext * /*ctx*/) override { }
  virtual void exitPackage_obj_spec(PlSqlParser::Package_obj_specContext * /*ctx*/) override { }

  virtual void enterProcedure_spec(PlSqlParser::Procedure_specContext * /*ctx*/) override { }
  virtual void exitProcedure_spec(PlSqlParser::Procedure_specContext * /*ctx*/) override { }

  virtual void enterFunction_spec(PlSqlParser::Function_specContext * /*ctx*/) override { }
  virtual void exitFunction_spec(PlSqlParser::Function_specContext * /*ctx*/) override { }

  virtual void enterPackage_obj_body(PlSqlParser::Package_obj_bodyContext * /*ctx*/) override { }
  virtual void exitPackage_obj_body(PlSqlParser::Package_obj_bodyContext * /*ctx*/) override { }

  virtual void enterDrop_procedure(PlSqlParser::Drop_procedureContext * /*ctx*/) override { }
  virtual void exitDrop_procedure(PlSqlParser::Drop_procedureContext * /*ctx*/) override { }

  virtual void enterAlter_procedure(PlSqlParser::Alter_procedureContext * /*ctx*/) override { }
  virtual void exitAlter_procedure(PlSqlParser::Alter_procedureContext * /*ctx*/) override { }

  virtual void enterFunction_body(PlSqlParser::Function_bodyContext * /*ctx*/) override { }
  virtual void exitFunction_body(PlSqlParser::Function_bodyContext * /*ctx*/) override { }

  virtual void enterProcedure_body(PlSqlParser::Procedure_bodyContext * /*ctx*/) override { }
  virtual void exitProcedure_body(PlSqlParser::Procedure_bodyContext * /*ctx*/) override { }

  virtual void enterCreate_procedure_body(PlSqlParser::Create_procedure_bodyContext * /*ctx*/) override { }
  virtual void exitCreate_procedure_body(PlSqlParser::Create_procedure_bodyContext * /*ctx*/) override { }

  virtual void enterDrop_trigger(PlSqlParser::Drop_triggerContext * /*ctx*/) override { }
  virtual void exitDrop_trigger(PlSqlParser::Drop_triggerContext * /*ctx*/) override { }

  virtual void enterAlter_trigger(PlSqlParser::Alter_triggerContext * /*ctx*/) override { }
  virtual void exitAlter_trigger(PlSqlParser::Alter_triggerContext * /*ctx*/) override { }

  virtual void enterCreate_trigger(PlSqlParser::Create_triggerContext * /*ctx*/) override { }
  virtual void exitCreate_trigger(PlSqlParser::Create_triggerContext * /*ctx*/) override { }

  virtual void enterTrigger_follows_clause(PlSqlParser::Trigger_follows_clauseContext * /*ctx*/) override { }
  virtual void exitTrigger_follows_clause(PlSqlParser::Trigger_follows_clauseContext * /*ctx*/) override { }

  virtual void enterTrigger_when_clause(PlSqlParser::Trigger_when_clauseContext * /*ctx*/) override { }
  virtual void exitTrigger_when_clause(PlSqlParser::Trigger_when_clauseContext * /*ctx*/) override { }

  virtual void enterSimple_dml_trigger(PlSqlParser::Simple_dml_triggerContext * /*ctx*/) override { }
  virtual void exitSimple_dml_trigger(PlSqlParser::Simple_dml_triggerContext * /*ctx*/) override { }

  virtual void enterFor_each_row(PlSqlParser::For_each_rowContext * /*ctx*/) override { }
  virtual void exitFor_each_row(PlSqlParser::For_each_rowContext * /*ctx*/) override { }

  virtual void enterCompound_dml_trigger(PlSqlParser::Compound_dml_triggerContext * /*ctx*/) override { }
  virtual void exitCompound_dml_trigger(PlSqlParser::Compound_dml_triggerContext * /*ctx*/) override { }

  virtual void enterNon_dml_trigger(PlSqlParser::Non_dml_triggerContext * /*ctx*/) override { }
  virtual void exitNon_dml_trigger(PlSqlParser::Non_dml_triggerContext * /*ctx*/) override { }

  virtual void enterTrigger_body(PlSqlParser::Trigger_bodyContext * /*ctx*/) override { }
  virtual void exitTrigger_body(PlSqlParser::Trigger_bodyContext * /*ctx*/) override { }

  virtual void enterRoutine_clause(PlSqlParser::Routine_clauseContext * /*ctx*/) override { }
  virtual void exitRoutine_clause(PlSqlParser::Routine_clauseContext * /*ctx*/) override { }

  virtual void enterCompound_trigger_block(PlSqlParser::Compound_trigger_blockContext * /*ctx*/) override { }
  virtual void exitCompound_trigger_block(PlSqlParser::Compound_trigger_blockContext * /*ctx*/) override { }

  virtual void enterTiming_point_section(PlSqlParser::Timing_point_sectionContext * /*ctx*/) override { }
  virtual void exitTiming_point_section(PlSqlParser::Timing_point_sectionContext * /*ctx*/) override { }

  virtual void enterNon_dml_event(PlSqlParser::Non_dml_eventContext * /*ctx*/) override { }
  virtual void exitNon_dml_event(PlSqlParser::Non_dml_eventContext * /*ctx*/) override { }

  virtual void enterDml_event_clause(PlSqlParser::Dml_event_clauseContext * /*ctx*/) override { }
  virtual void exitDml_event_clause(PlSqlParser::Dml_event_clauseContext * /*ctx*/) override { }

  virtual void enterDml_event_element(PlSqlParser::Dml_event_elementContext * /*ctx*/) override { }
  virtual void exitDml_event_element(PlSqlParser::Dml_event_elementContext * /*ctx*/) override { }

  virtual void enterDml_event_nested_clause(PlSqlParser::Dml_event_nested_clauseContext * /*ctx*/) override { }
  virtual void exitDml_event_nested_clause(PlSqlParser::Dml_event_nested_clauseContext * /*ctx*/) override { }

  virtual void enterReferencing_clause(PlSqlParser::Referencing_clauseContext * /*ctx*/) override { }
  virtual void exitReferencing_clause(PlSqlParser::Referencing_clauseContext * /*ctx*/) override { }

  virtual void enterReferencing_element(PlSqlParser::Referencing_elementContext * /*ctx*/) override { }
  virtual void exitReferencing_element(PlSqlParser::Referencing_elementContext * /*ctx*/) override { }

  virtual void enterDrop_type(PlSqlParser::Drop_typeContext * /*ctx*/) override { }
  virtual void exitDrop_type(PlSqlParser::Drop_typeContext * /*ctx*/) override { }

  virtual void enterAlter_type(PlSqlParser::Alter_typeContext * /*ctx*/) override { }
  virtual void exitAlter_type(PlSqlParser::Alter_typeContext * /*ctx*/) override { }

  virtual void enterCompile_type_clause(PlSqlParser::Compile_type_clauseContext * /*ctx*/) override { }
  virtual void exitCompile_type_clause(PlSqlParser::Compile_type_clauseContext * /*ctx*/) override { }

  virtual void enterReplace_type_clause(PlSqlParser::Replace_type_clauseContext * /*ctx*/) override { }
  virtual void exitReplace_type_clause(PlSqlParser::Replace_type_clauseContext * /*ctx*/) override { }

  virtual void enterAlter_method_spec(PlSqlParser::Alter_method_specContext * /*ctx*/) override { }
  virtual void exitAlter_method_spec(PlSqlParser::Alter_method_specContext * /*ctx*/) override { }

  virtual void enterAlter_method_element(PlSqlParser::Alter_method_elementContext * /*ctx*/) override { }
  virtual void exitAlter_method_element(PlSqlParser::Alter_method_elementContext * /*ctx*/) override { }

  virtual void enterAlter_attribute_definition(PlSqlParser::Alter_attribute_definitionContext * /*ctx*/) override { }
  virtual void exitAlter_attribute_definition(PlSqlParser::Alter_attribute_definitionContext * /*ctx*/) override { }

  virtual void enterAttribute_definition(PlSqlParser::Attribute_definitionContext * /*ctx*/) override { }
  virtual void exitAttribute_definition(PlSqlParser::Attribute_definitionContext * /*ctx*/) override { }

  virtual void enterAlter_collection_clauses(PlSqlParser::Alter_collection_clausesContext * /*ctx*/) override { }
  virtual void exitAlter_collection_clauses(PlSqlParser::Alter_collection_clausesContext * /*ctx*/) override { }

  virtual void enterDependent_handling_clause(PlSqlParser::Dependent_handling_clauseContext * /*ctx*/) override { }
  virtual void exitDependent_handling_clause(PlSqlParser::Dependent_handling_clauseContext * /*ctx*/) override { }

  virtual void enterDependent_exceptions_part(PlSqlParser::Dependent_exceptions_partContext * /*ctx*/) override { }
  virtual void exitDependent_exceptions_part(PlSqlParser::Dependent_exceptions_partContext * /*ctx*/) override { }

  virtual void enterCreate_type(PlSqlParser::Create_typeContext * /*ctx*/) override { }
  virtual void exitCreate_type(PlSqlParser::Create_typeContext * /*ctx*/) override { }

  virtual void enterType_definition(PlSqlParser::Type_definitionContext * /*ctx*/) override { }
  virtual void exitType_definition(PlSqlParser::Type_definitionContext * /*ctx*/) override { }

  virtual void enterObject_type_def(PlSqlParser::Object_type_defContext * /*ctx*/) override { }
  virtual void exitObject_type_def(PlSqlParser::Object_type_defContext * /*ctx*/) override { }

  virtual void enterObject_as_part(PlSqlParser::Object_as_partContext * /*ctx*/) override { }
  virtual void exitObject_as_part(PlSqlParser::Object_as_partContext * /*ctx*/) override { }

  virtual void enterObject_under_part(PlSqlParser::Object_under_partContext * /*ctx*/) override { }
  virtual void exitObject_under_part(PlSqlParser::Object_under_partContext * /*ctx*/) override { }

  virtual void enterNested_table_type_def(PlSqlParser::Nested_table_type_defContext * /*ctx*/) override { }
  virtual void exitNested_table_type_def(PlSqlParser::Nested_table_type_defContext * /*ctx*/) override { }

  virtual void enterSqlj_object_type(PlSqlParser::Sqlj_object_typeContext * /*ctx*/) override { }
  virtual void exitSqlj_object_type(PlSqlParser::Sqlj_object_typeContext * /*ctx*/) override { }

  virtual void enterType_body(PlSqlParser::Type_bodyContext * /*ctx*/) override { }
  virtual void exitType_body(PlSqlParser::Type_bodyContext * /*ctx*/) override { }

  virtual void enterType_body_elements(PlSqlParser::Type_body_elementsContext * /*ctx*/) override { }
  virtual void exitType_body_elements(PlSqlParser::Type_body_elementsContext * /*ctx*/) override { }

  virtual void enterMap_order_func_declaration(PlSqlParser::Map_order_func_declarationContext * /*ctx*/) override { }
  virtual void exitMap_order_func_declaration(PlSqlParser::Map_order_func_declarationContext * /*ctx*/) override { }

  virtual void enterSubprog_decl_in_type(PlSqlParser::Subprog_decl_in_typeContext * /*ctx*/) override { }
  virtual void exitSubprog_decl_in_type(PlSqlParser::Subprog_decl_in_typeContext * /*ctx*/) override { }

  virtual void enterProc_decl_in_type(PlSqlParser::Proc_decl_in_typeContext * /*ctx*/) override { }
  virtual void exitProc_decl_in_type(PlSqlParser::Proc_decl_in_typeContext * /*ctx*/) override { }

  virtual void enterFunc_decl_in_type(PlSqlParser::Func_decl_in_typeContext * /*ctx*/) override { }
  virtual void exitFunc_decl_in_type(PlSqlParser::Func_decl_in_typeContext * /*ctx*/) override { }

  virtual void enterConstructor_declaration(PlSqlParser::Constructor_declarationContext * /*ctx*/) override { }
  virtual void exitConstructor_declaration(PlSqlParser::Constructor_declarationContext * /*ctx*/) override { }

  virtual void enterModifier_clause(PlSqlParser::Modifier_clauseContext * /*ctx*/) override { }
  virtual void exitModifier_clause(PlSqlParser::Modifier_clauseContext * /*ctx*/) override { }

  virtual void enterObject_member_spec(PlSqlParser::Object_member_specContext * /*ctx*/) override { }
  virtual void exitObject_member_spec(PlSqlParser::Object_member_specContext * /*ctx*/) override { }

  virtual void enterSqlj_object_type_attr(PlSqlParser::Sqlj_object_type_attrContext * /*ctx*/) override { }
  virtual void exitSqlj_object_type_attr(PlSqlParser::Sqlj_object_type_attrContext * /*ctx*/) override { }

  virtual void enterElement_spec(PlSqlParser::Element_specContext * /*ctx*/) override { }
  virtual void exitElement_spec(PlSqlParser::Element_specContext * /*ctx*/) override { }

  virtual void enterElement_spec_options(PlSqlParser::Element_spec_optionsContext * /*ctx*/) override { }
  virtual void exitElement_spec_options(PlSqlParser::Element_spec_optionsContext * /*ctx*/) override { }

  virtual void enterSubprogram_spec(PlSqlParser::Subprogram_specContext * /*ctx*/) override { }
  virtual void exitSubprogram_spec(PlSqlParser::Subprogram_specContext * /*ctx*/) override { }

  virtual void enterOverriding_subprogram_spec(PlSqlParser::Overriding_subprogram_specContext * /*ctx*/) override { }
  virtual void exitOverriding_subprogram_spec(PlSqlParser::Overriding_subprogram_specContext * /*ctx*/) override { }

  virtual void enterOverriding_function_spec(PlSqlParser::Overriding_function_specContext * /*ctx*/) override { }
  virtual void exitOverriding_function_spec(PlSqlParser::Overriding_function_specContext * /*ctx*/) override { }

  virtual void enterType_procedure_spec(PlSqlParser::Type_procedure_specContext * /*ctx*/) override { }
  virtual void exitType_procedure_spec(PlSqlParser::Type_procedure_specContext * /*ctx*/) override { }

  virtual void enterType_function_spec(PlSqlParser::Type_function_specContext * /*ctx*/) override { }
  virtual void exitType_function_spec(PlSqlParser::Type_function_specContext * /*ctx*/) override { }

  virtual void enterConstructor_spec(PlSqlParser::Constructor_specContext * /*ctx*/) override { }
  virtual void exitConstructor_spec(PlSqlParser::Constructor_specContext * /*ctx*/) override { }

  virtual void enterMap_order_function_spec(PlSqlParser::Map_order_function_specContext * /*ctx*/) override { }
  virtual void exitMap_order_function_spec(PlSqlParser::Map_order_function_specContext * /*ctx*/) override { }

  virtual void enterPragma_clause(PlSqlParser::Pragma_clauseContext * /*ctx*/) override { }
  virtual void exitPragma_clause(PlSqlParser::Pragma_clauseContext * /*ctx*/) override { }

  virtual void enterPragma_elements(PlSqlParser::Pragma_elementsContext * /*ctx*/) override { }
  virtual void exitPragma_elements(PlSqlParser::Pragma_elementsContext * /*ctx*/) override { }

  virtual void enterType_elements_parameter(PlSqlParser::Type_elements_parameterContext * /*ctx*/) override { }
  virtual void exitType_elements_parameter(PlSqlParser::Type_elements_parameterContext * /*ctx*/) override { }

  virtual void enterDrop_sequence(PlSqlParser::Drop_sequenceContext * /*ctx*/) override { }
  virtual void exitDrop_sequence(PlSqlParser::Drop_sequenceContext * /*ctx*/) override { }

  virtual void enterAlter_sequence(PlSqlParser::Alter_sequenceContext * /*ctx*/) override { }
  virtual void exitAlter_sequence(PlSqlParser::Alter_sequenceContext * /*ctx*/) override { }

  virtual void enterAlter_session(PlSqlParser::Alter_sessionContext * /*ctx*/) override { }
  virtual void exitAlter_session(PlSqlParser::Alter_sessionContext * /*ctx*/) override { }

  virtual void enterAlter_session_set_clause(PlSqlParser::Alter_session_set_clauseContext * /*ctx*/) override { }
  virtual void exitAlter_session_set_clause(PlSqlParser::Alter_session_set_clauseContext * /*ctx*/) override { }

  virtual void enterCreate_sequence(PlSqlParser::Create_sequenceContext * /*ctx*/) override { }
  virtual void exitCreate_sequence(PlSqlParser::Create_sequenceContext * /*ctx*/) override { }

  virtual void enterSequence_spec(PlSqlParser::Sequence_specContext * /*ctx*/) override { }
  virtual void exitSequence_spec(PlSqlParser::Sequence_specContext * /*ctx*/) override { }

  virtual void enterSequence_start_clause(PlSqlParser::Sequence_start_clauseContext * /*ctx*/) override { }
  virtual void exitSequence_start_clause(PlSqlParser::Sequence_start_clauseContext * /*ctx*/) override { }

  virtual void enterCreate_index(PlSqlParser::Create_indexContext * /*ctx*/) override { }
  virtual void exitCreate_index(PlSqlParser::Create_indexContext * /*ctx*/) override { }

  virtual void enterCluster_index_clause(PlSqlParser::Cluster_index_clauseContext * /*ctx*/) override { }
  virtual void exitCluster_index_clause(PlSqlParser::Cluster_index_clauseContext * /*ctx*/) override { }

  virtual void enterCluster_name(PlSqlParser::Cluster_nameContext * /*ctx*/) override { }
  virtual void exitCluster_name(PlSqlParser::Cluster_nameContext * /*ctx*/) override { }

  virtual void enterTable_index_clause(PlSqlParser::Table_index_clauseContext * /*ctx*/) override { }
  virtual void exitTable_index_clause(PlSqlParser::Table_index_clauseContext * /*ctx*/) override { }

  virtual void enterBitmap_join_index_clause(PlSqlParser::Bitmap_join_index_clauseContext * /*ctx*/) override { }
  virtual void exitBitmap_join_index_clause(PlSqlParser::Bitmap_join_index_clauseContext * /*ctx*/) override { }

  virtual void enterIndex_expr(PlSqlParser::Index_exprContext * /*ctx*/) override { }
  virtual void exitIndex_expr(PlSqlParser::Index_exprContext * /*ctx*/) override { }

  virtual void enterIndex_properties(PlSqlParser::Index_propertiesContext * /*ctx*/) override { }
  virtual void exitIndex_properties(PlSqlParser::Index_propertiesContext * /*ctx*/) override { }

  virtual void enterDomain_index_clause(PlSqlParser::Domain_index_clauseContext * /*ctx*/) override { }
  virtual void exitDomain_index_clause(PlSqlParser::Domain_index_clauseContext * /*ctx*/) override { }

  virtual void enterLocal_domain_index_clause(PlSqlParser::Local_domain_index_clauseContext * /*ctx*/) override { }
  virtual void exitLocal_domain_index_clause(PlSqlParser::Local_domain_index_clauseContext * /*ctx*/) override { }

  virtual void enterXmlindex_clause(PlSqlParser::Xmlindex_clauseContext * /*ctx*/) override { }
  virtual void exitXmlindex_clause(PlSqlParser::Xmlindex_clauseContext * /*ctx*/) override { }

  virtual void enterLocal_xmlindex_clause(PlSqlParser::Local_xmlindex_clauseContext * /*ctx*/) override { }
  virtual void exitLocal_xmlindex_clause(PlSqlParser::Local_xmlindex_clauseContext * /*ctx*/) override { }

  virtual void enterGlobal_partitioned_index(PlSqlParser::Global_partitioned_indexContext * /*ctx*/) override { }
  virtual void exitGlobal_partitioned_index(PlSqlParser::Global_partitioned_indexContext * /*ctx*/) override { }

  virtual void enterIndex_partitioning_clause(PlSqlParser::Index_partitioning_clauseContext * /*ctx*/) override { }
  virtual void exitIndex_partitioning_clause(PlSqlParser::Index_partitioning_clauseContext * /*ctx*/) override { }

  virtual void enterLocal_partitioned_index(PlSqlParser::Local_partitioned_indexContext * /*ctx*/) override { }
  virtual void exitLocal_partitioned_index(PlSqlParser::Local_partitioned_indexContext * /*ctx*/) override { }

  virtual void enterOn_range_partitioned_table(PlSqlParser::On_range_partitioned_tableContext * /*ctx*/) override { }
  virtual void exitOn_range_partitioned_table(PlSqlParser::On_range_partitioned_tableContext * /*ctx*/) override { }

  virtual void enterOn_list_partitioned_table(PlSqlParser::On_list_partitioned_tableContext * /*ctx*/) override { }
  virtual void exitOn_list_partitioned_table(PlSqlParser::On_list_partitioned_tableContext * /*ctx*/) override { }

  virtual void enterOn_hash_partitioned_table(PlSqlParser::On_hash_partitioned_tableContext * /*ctx*/) override { }
  virtual void exitOn_hash_partitioned_table(PlSqlParser::On_hash_partitioned_tableContext * /*ctx*/) override { }

  virtual void enterOn_comp_partitioned_table(PlSqlParser::On_comp_partitioned_tableContext * /*ctx*/) override { }
  virtual void exitOn_comp_partitioned_table(PlSqlParser::On_comp_partitioned_tableContext * /*ctx*/) override { }

  virtual void enterIndex_subpartition_clause(PlSqlParser::Index_subpartition_clauseContext * /*ctx*/) override { }
  virtual void exitIndex_subpartition_clause(PlSqlParser::Index_subpartition_clauseContext * /*ctx*/) override { }

  virtual void enterOdci_parameters(PlSqlParser::Odci_parametersContext * /*ctx*/) override { }
  virtual void exitOdci_parameters(PlSqlParser::Odci_parametersContext * /*ctx*/) override { }

  virtual void enterIndextype(PlSqlParser::IndextypeContext * /*ctx*/) override { }
  virtual void exitIndextype(PlSqlParser::IndextypeContext * /*ctx*/) override { }

  virtual void enterAlter_index(PlSqlParser::Alter_indexContext * /*ctx*/) override { }
  virtual void exitAlter_index(PlSqlParser::Alter_indexContext * /*ctx*/) override { }

  virtual void enterAlter_index_ops_set1(PlSqlParser::Alter_index_ops_set1Context * /*ctx*/) override { }
  virtual void exitAlter_index_ops_set1(PlSqlParser::Alter_index_ops_set1Context * /*ctx*/) override { }

  virtual void enterAlter_index_ops_set2(PlSqlParser::Alter_index_ops_set2Context * /*ctx*/) override { }
  virtual void exitAlter_index_ops_set2(PlSqlParser::Alter_index_ops_set2Context * /*ctx*/) override { }

  virtual void enterVisible_or_invisible(PlSqlParser::Visible_or_invisibleContext * /*ctx*/) override { }
  virtual void exitVisible_or_invisible(PlSqlParser::Visible_or_invisibleContext * /*ctx*/) override { }

  virtual void enterMonitoring_nomonitoring(PlSqlParser::Monitoring_nomonitoringContext * /*ctx*/) override { }
  virtual void exitMonitoring_nomonitoring(PlSqlParser::Monitoring_nomonitoringContext * /*ctx*/) override { }

  virtual void enterRebuild_clause(PlSqlParser::Rebuild_clauseContext * /*ctx*/) override { }
  virtual void exitRebuild_clause(PlSqlParser::Rebuild_clauseContext * /*ctx*/) override { }

  virtual void enterAlter_index_partitioning(PlSqlParser::Alter_index_partitioningContext * /*ctx*/) override { }
  virtual void exitAlter_index_partitioning(PlSqlParser::Alter_index_partitioningContext * /*ctx*/) override { }

  virtual void enterModify_index_default_attrs(PlSqlParser::Modify_index_default_attrsContext * /*ctx*/) override { }
  virtual void exitModify_index_default_attrs(PlSqlParser::Modify_index_default_attrsContext * /*ctx*/) override { }

  virtual void enterAdd_hash_index_partition(PlSqlParser::Add_hash_index_partitionContext * /*ctx*/) override { }
  virtual void exitAdd_hash_index_partition(PlSqlParser::Add_hash_index_partitionContext * /*ctx*/) override { }

  virtual void enterCoalesce_index_partition(PlSqlParser::Coalesce_index_partitionContext * /*ctx*/) override { }
  virtual void exitCoalesce_index_partition(PlSqlParser::Coalesce_index_partitionContext * /*ctx*/) override { }

  virtual void enterModify_index_partition(PlSqlParser::Modify_index_partitionContext * /*ctx*/) override { }
  virtual void exitModify_index_partition(PlSqlParser::Modify_index_partitionContext * /*ctx*/) override { }

  virtual void enterModify_index_partitions_ops(PlSqlParser::Modify_index_partitions_opsContext * /*ctx*/) override { }
  virtual void exitModify_index_partitions_ops(PlSqlParser::Modify_index_partitions_opsContext * /*ctx*/) override { }

  virtual void enterRename_index_partition(PlSqlParser::Rename_index_partitionContext * /*ctx*/) override { }
  virtual void exitRename_index_partition(PlSqlParser::Rename_index_partitionContext * /*ctx*/) override { }

  virtual void enterDrop_index_partition(PlSqlParser::Drop_index_partitionContext * /*ctx*/) override { }
  virtual void exitDrop_index_partition(PlSqlParser::Drop_index_partitionContext * /*ctx*/) override { }

  virtual void enterSplit_index_partition(PlSqlParser::Split_index_partitionContext * /*ctx*/) override { }
  virtual void exitSplit_index_partition(PlSqlParser::Split_index_partitionContext * /*ctx*/) override { }

  virtual void enterIndex_partition_description(PlSqlParser::Index_partition_descriptionContext * /*ctx*/) override { }
  virtual void exitIndex_partition_description(PlSqlParser::Index_partition_descriptionContext * /*ctx*/) override { }

  virtual void enterModify_index_subpartition(PlSqlParser::Modify_index_subpartitionContext * /*ctx*/) override { }
  virtual void exitModify_index_subpartition(PlSqlParser::Modify_index_subpartitionContext * /*ctx*/) override { }

  virtual void enterPartition_name_old(PlSqlParser::Partition_name_oldContext * /*ctx*/) override { }
  virtual void exitPartition_name_old(PlSqlParser::Partition_name_oldContext * /*ctx*/) override { }

  virtual void enterNew_partition_name(PlSqlParser::New_partition_nameContext * /*ctx*/) override { }
  virtual void exitNew_partition_name(PlSqlParser::New_partition_nameContext * /*ctx*/) override { }

  virtual void enterNew_index_name(PlSqlParser::New_index_nameContext * /*ctx*/) override { }
  virtual void exitNew_index_name(PlSqlParser::New_index_nameContext * /*ctx*/) override { }

  virtual void enterCreate_user(PlSqlParser::Create_userContext * /*ctx*/) override { }
  virtual void exitCreate_user(PlSqlParser::Create_userContext * /*ctx*/) override { }

  virtual void enterAlter_user(PlSqlParser::Alter_userContext * /*ctx*/) override { }
  virtual void exitAlter_user(PlSqlParser::Alter_userContext * /*ctx*/) override { }

  virtual void enterAlter_identified_by(PlSqlParser::Alter_identified_byContext * /*ctx*/) override { }
  virtual void exitAlter_identified_by(PlSqlParser::Alter_identified_byContext * /*ctx*/) override { }

  virtual void enterIdentified_by(PlSqlParser::Identified_byContext * /*ctx*/) override { }
  virtual void exitIdentified_by(PlSqlParser::Identified_byContext * /*ctx*/) override { }

  virtual void enterIdentified_other_clause(PlSqlParser::Identified_other_clauseContext * /*ctx*/) override { }
  virtual void exitIdentified_other_clause(PlSqlParser::Identified_other_clauseContext * /*ctx*/) override { }

  virtual void enterUser_tablespace_clause(PlSqlParser::User_tablespace_clauseContext * /*ctx*/) override { }
  virtual void exitUser_tablespace_clause(PlSqlParser::User_tablespace_clauseContext * /*ctx*/) override { }

  virtual void enterQuota_clause(PlSqlParser::Quota_clauseContext * /*ctx*/) override { }
  virtual void exitQuota_clause(PlSqlParser::Quota_clauseContext * /*ctx*/) override { }

  virtual void enterProfile_clause(PlSqlParser::Profile_clauseContext * /*ctx*/) override { }
  virtual void exitProfile_clause(PlSqlParser::Profile_clauseContext * /*ctx*/) override { }

  virtual void enterRole_clause(PlSqlParser::Role_clauseContext * /*ctx*/) override { }
  virtual void exitRole_clause(PlSqlParser::Role_clauseContext * /*ctx*/) override { }

  virtual void enterUser_default_role_clause(PlSqlParser::User_default_role_clauseContext * /*ctx*/) override { }
  virtual void exitUser_default_role_clause(PlSqlParser::User_default_role_clauseContext * /*ctx*/) override { }

  virtual void enterPassword_expire_clause(PlSqlParser::Password_expire_clauseContext * /*ctx*/) override { }
  virtual void exitPassword_expire_clause(PlSqlParser::Password_expire_clauseContext * /*ctx*/) override { }

  virtual void enterUser_lock_clause(PlSqlParser::User_lock_clauseContext * /*ctx*/) override { }
  virtual void exitUser_lock_clause(PlSqlParser::User_lock_clauseContext * /*ctx*/) override { }

  virtual void enterUser_editions_clause(PlSqlParser::User_editions_clauseContext * /*ctx*/) override { }
  virtual void exitUser_editions_clause(PlSqlParser::User_editions_clauseContext * /*ctx*/) override { }

  virtual void enterAlter_user_editions_clause(PlSqlParser::Alter_user_editions_clauseContext * /*ctx*/) override { }
  virtual void exitAlter_user_editions_clause(PlSqlParser::Alter_user_editions_clauseContext * /*ctx*/) override { }

  virtual void enterProxy_clause(PlSqlParser::Proxy_clauseContext * /*ctx*/) override { }
  virtual void exitProxy_clause(PlSqlParser::Proxy_clauseContext * /*ctx*/) override { }

  virtual void enterContainer_names(PlSqlParser::Container_namesContext * /*ctx*/) override { }
  virtual void exitContainer_names(PlSqlParser::Container_namesContext * /*ctx*/) override { }

  virtual void enterSet_container_data(PlSqlParser::Set_container_dataContext * /*ctx*/) override { }
  virtual void exitSet_container_data(PlSqlParser::Set_container_dataContext * /*ctx*/) override { }

  virtual void enterAdd_rem_container_data(PlSqlParser::Add_rem_container_dataContext * /*ctx*/) override { }
  virtual void exitAdd_rem_container_data(PlSqlParser::Add_rem_container_dataContext * /*ctx*/) override { }

  virtual void enterContainer_data_clause(PlSqlParser::Container_data_clauseContext * /*ctx*/) override { }
  virtual void exitContainer_data_clause(PlSqlParser::Container_data_clauseContext * /*ctx*/) override { }

  virtual void enterAnalyze(PlSqlParser::AnalyzeContext * /*ctx*/) override { }
  virtual void exitAnalyze(PlSqlParser::AnalyzeContext * /*ctx*/) override { }

  virtual void enterPartition_extention_clause(PlSqlParser::Partition_extention_clauseContext * /*ctx*/) override { }
  virtual void exitPartition_extention_clause(PlSqlParser::Partition_extention_clauseContext * /*ctx*/) override { }

  virtual void enterValidation_clauses(PlSqlParser::Validation_clausesContext * /*ctx*/) override { }
  virtual void exitValidation_clauses(PlSqlParser::Validation_clausesContext * /*ctx*/) override { }

  virtual void enterOnline_or_offline(PlSqlParser::Online_or_offlineContext * /*ctx*/) override { }
  virtual void exitOnline_or_offline(PlSqlParser::Online_or_offlineContext * /*ctx*/) override { }

  virtual void enterInto_clause1(PlSqlParser::Into_clause1Context * /*ctx*/) override { }
  virtual void exitInto_clause1(PlSqlParser::Into_clause1Context * /*ctx*/) override { }

  virtual void enterPartition_key_value(PlSqlParser::Partition_key_valueContext * /*ctx*/) override { }
  virtual void exitPartition_key_value(PlSqlParser::Partition_key_valueContext * /*ctx*/) override { }

  virtual void enterSubpartition_key_value(PlSqlParser::Subpartition_key_valueContext * /*ctx*/) override { }
  virtual void exitSubpartition_key_value(PlSqlParser::Subpartition_key_valueContext * /*ctx*/) override { }

  virtual void enterAssociate_statistics(PlSqlParser::Associate_statisticsContext * /*ctx*/) override { }
  virtual void exitAssociate_statistics(PlSqlParser::Associate_statisticsContext * /*ctx*/) override { }

  virtual void enterColumn_association(PlSqlParser::Column_associationContext * /*ctx*/) override { }
  virtual void exitColumn_association(PlSqlParser::Column_associationContext * /*ctx*/) override { }

  virtual void enterFunction_association(PlSqlParser::Function_associationContext * /*ctx*/) override { }
  virtual void exitFunction_association(PlSqlParser::Function_associationContext * /*ctx*/) override { }

  virtual void enterIndextype_name(PlSqlParser::Indextype_nameContext * /*ctx*/) override { }
  virtual void exitIndextype_name(PlSqlParser::Indextype_nameContext * /*ctx*/) override { }

  virtual void enterUsing_statistics_type(PlSqlParser::Using_statistics_typeContext * /*ctx*/) override { }
  virtual void exitUsing_statistics_type(PlSqlParser::Using_statistics_typeContext * /*ctx*/) override { }

  virtual void enterStatistics_type_name(PlSqlParser::Statistics_type_nameContext * /*ctx*/) override { }
  virtual void exitStatistics_type_name(PlSqlParser::Statistics_type_nameContext * /*ctx*/) override { }

  virtual void enterDefault_cost_clause(PlSqlParser::Default_cost_clauseContext * /*ctx*/) override { }
  virtual void exitDefault_cost_clause(PlSqlParser::Default_cost_clauseContext * /*ctx*/) override { }

  virtual void enterCpu_cost(PlSqlParser::Cpu_costContext * /*ctx*/) override { }
  virtual void exitCpu_cost(PlSqlParser::Cpu_costContext * /*ctx*/) override { }

  virtual void enterIo_cost(PlSqlParser::Io_costContext * /*ctx*/) override { }
  virtual void exitIo_cost(PlSqlParser::Io_costContext * /*ctx*/) override { }

  virtual void enterNetwork_cost(PlSqlParser::Network_costContext * /*ctx*/) override { }
  virtual void exitNetwork_cost(PlSqlParser::Network_costContext * /*ctx*/) override { }

  virtual void enterDefault_selectivity_clause(PlSqlParser::Default_selectivity_clauseContext * /*ctx*/) override { }
  virtual void exitDefault_selectivity_clause(PlSqlParser::Default_selectivity_clauseContext * /*ctx*/) override { }

  virtual void enterDefault_selectivity(PlSqlParser::Default_selectivityContext * /*ctx*/) override { }
  virtual void exitDefault_selectivity(PlSqlParser::Default_selectivityContext * /*ctx*/) override { }

  virtual void enterStorage_table_clause(PlSqlParser::Storage_table_clauseContext * /*ctx*/) override { }
  virtual void exitStorage_table_clause(PlSqlParser::Storage_table_clauseContext * /*ctx*/) override { }

  virtual void enterUnified_auditing(PlSqlParser::Unified_auditingContext * /*ctx*/) override { }
  virtual void exitUnified_auditing(PlSqlParser::Unified_auditingContext * /*ctx*/) override { }

  virtual void enterPolicy_name(PlSqlParser::Policy_nameContext * /*ctx*/) override { }
  virtual void exitPolicy_name(PlSqlParser::Policy_nameContext * /*ctx*/) override { }

  virtual void enterAudit_traditional(PlSqlParser::Audit_traditionalContext * /*ctx*/) override { }
  virtual void exitAudit_traditional(PlSqlParser::Audit_traditionalContext * /*ctx*/) override { }

  virtual void enterAudit_direct_path(PlSqlParser::Audit_direct_pathContext * /*ctx*/) override { }
  virtual void exitAudit_direct_path(PlSqlParser::Audit_direct_pathContext * /*ctx*/) override { }

  virtual void enterAudit_container_clause(PlSqlParser::Audit_container_clauseContext * /*ctx*/) override { }
  virtual void exitAudit_container_clause(PlSqlParser::Audit_container_clauseContext * /*ctx*/) override { }

  virtual void enterAudit_operation_clause(PlSqlParser::Audit_operation_clauseContext * /*ctx*/) override { }
  virtual void exitAudit_operation_clause(PlSqlParser::Audit_operation_clauseContext * /*ctx*/) override { }

  virtual void enterAuditing_by_clause(PlSqlParser::Auditing_by_clauseContext * /*ctx*/) override { }
  virtual void exitAuditing_by_clause(PlSqlParser::Auditing_by_clauseContext * /*ctx*/) override { }

  virtual void enterAudit_user(PlSqlParser::Audit_userContext * /*ctx*/) override { }
  virtual void exitAudit_user(PlSqlParser::Audit_userContext * /*ctx*/) override { }

  virtual void enterAudit_schema_object_clause(PlSqlParser::Audit_schema_object_clauseContext * /*ctx*/) override { }
  virtual void exitAudit_schema_object_clause(PlSqlParser::Audit_schema_object_clauseContext * /*ctx*/) override { }

  virtual void enterSql_operation(PlSqlParser::Sql_operationContext * /*ctx*/) override { }
  virtual void exitSql_operation(PlSqlParser::Sql_operationContext * /*ctx*/) override { }

  virtual void enterAuditing_on_clause(PlSqlParser::Auditing_on_clauseContext * /*ctx*/) override { }
  virtual void exitAuditing_on_clause(PlSqlParser::Auditing_on_clauseContext * /*ctx*/) override { }

  virtual void enterModel_name(PlSqlParser::Model_nameContext * /*ctx*/) override { }
  virtual void exitModel_name(PlSqlParser::Model_nameContext * /*ctx*/) override { }

  virtual void enterObject_name(PlSqlParser::Object_nameContext * /*ctx*/) override { }
  virtual void exitObject_name(PlSqlParser::Object_nameContext * /*ctx*/) override { }

  virtual void enterProfile_name(PlSqlParser::Profile_nameContext * /*ctx*/) override { }
  virtual void exitProfile_name(PlSqlParser::Profile_nameContext * /*ctx*/) override { }

  virtual void enterSql_statement_shortcut(PlSqlParser::Sql_statement_shortcutContext * /*ctx*/) override { }
  virtual void exitSql_statement_shortcut(PlSqlParser::Sql_statement_shortcutContext * /*ctx*/) override { }

  virtual void enterDrop_index(PlSqlParser::Drop_indexContext * /*ctx*/) override { }
  virtual void exitDrop_index(PlSqlParser::Drop_indexContext * /*ctx*/) override { }

  virtual void enterGrant_statement(PlSqlParser::Grant_statementContext * /*ctx*/) override { }
  virtual void exitGrant_statement(PlSqlParser::Grant_statementContext * /*ctx*/) override { }

  virtual void enterContainer_clause(PlSqlParser::Container_clauseContext * /*ctx*/) override { }
  virtual void exitContainer_clause(PlSqlParser::Container_clauseContext * /*ctx*/) override { }

  virtual void enterCreate_directory(PlSqlParser::Create_directoryContext * /*ctx*/) override { }
  virtual void exitCreate_directory(PlSqlParser::Create_directoryContext * /*ctx*/) override { }

  virtual void enterDirectory_name(PlSqlParser::Directory_nameContext * /*ctx*/) override { }
  virtual void exitDirectory_name(PlSqlParser::Directory_nameContext * /*ctx*/) override { }

  virtual void enterDirectory_path(PlSqlParser::Directory_pathContext * /*ctx*/) override { }
  virtual void exitDirectory_path(PlSqlParser::Directory_pathContext * /*ctx*/) override { }

  virtual void enterAlter_library(PlSqlParser::Alter_libraryContext * /*ctx*/) override { }
  virtual void exitAlter_library(PlSqlParser::Alter_libraryContext * /*ctx*/) override { }

  virtual void enterLibrary_editionable(PlSqlParser::Library_editionableContext * /*ctx*/) override { }
  virtual void exitLibrary_editionable(PlSqlParser::Library_editionableContext * /*ctx*/) override { }

  virtual void enterLibrary_debug(PlSqlParser::Library_debugContext * /*ctx*/) override { }
  virtual void exitLibrary_debug(PlSqlParser::Library_debugContext * /*ctx*/) override { }

  virtual void enterCompiler_parameters_clause(PlSqlParser::Compiler_parameters_clauseContext * /*ctx*/) override { }
  virtual void exitCompiler_parameters_clause(PlSqlParser::Compiler_parameters_clauseContext * /*ctx*/) override { }

  virtual void enterParameter_value(PlSqlParser::Parameter_valueContext * /*ctx*/) override { }
  virtual void exitParameter_value(PlSqlParser::Parameter_valueContext * /*ctx*/) override { }

  virtual void enterLibrary_name(PlSqlParser::Library_nameContext * /*ctx*/) override { }
  virtual void exitLibrary_name(PlSqlParser::Library_nameContext * /*ctx*/) override { }

  virtual void enterAlter_view(PlSqlParser::Alter_viewContext * /*ctx*/) override { }
  virtual void exitAlter_view(PlSqlParser::Alter_viewContext * /*ctx*/) override { }

  virtual void enterAlter_view_editionable(PlSqlParser::Alter_view_editionableContext * /*ctx*/) override { }
  virtual void exitAlter_view_editionable(PlSqlParser::Alter_view_editionableContext * /*ctx*/) override { }

  virtual void enterCreate_view(PlSqlParser::Create_viewContext * /*ctx*/) override { }
  virtual void exitCreate_view(PlSqlParser::Create_viewContext * /*ctx*/) override { }

  virtual void enterView_options(PlSqlParser::View_optionsContext * /*ctx*/) override { }
  virtual void exitView_options(PlSqlParser::View_optionsContext * /*ctx*/) override { }

  virtual void enterView_alias_constraint(PlSqlParser::View_alias_constraintContext * /*ctx*/) override { }
  virtual void exitView_alias_constraint(PlSqlParser::View_alias_constraintContext * /*ctx*/) override { }

  virtual void enterObject_view_clause(PlSqlParser::Object_view_clauseContext * /*ctx*/) override { }
  virtual void exitObject_view_clause(PlSqlParser::Object_view_clauseContext * /*ctx*/) override { }

  virtual void enterInline_constraint(PlSqlParser::Inline_constraintContext * /*ctx*/) override { }
  virtual void exitInline_constraint(PlSqlParser::Inline_constraintContext * /*ctx*/) override { }

  virtual void enterInline_ref_constraint(PlSqlParser::Inline_ref_constraintContext * /*ctx*/) override { }
  virtual void exitInline_ref_constraint(PlSqlParser::Inline_ref_constraintContext * /*ctx*/) override { }

  virtual void enterOut_of_line_ref_constraint(PlSqlParser::Out_of_line_ref_constraintContext * /*ctx*/) override { }
  virtual void exitOut_of_line_ref_constraint(PlSqlParser::Out_of_line_ref_constraintContext * /*ctx*/) override { }

  virtual void enterOut_of_line_constraint(PlSqlParser::Out_of_line_constraintContext * /*ctx*/) override { }
  virtual void exitOut_of_line_constraint(PlSqlParser::Out_of_line_constraintContext * /*ctx*/) override { }

  virtual void enterConstraint_state(PlSqlParser::Constraint_stateContext * /*ctx*/) override { }
  virtual void exitConstraint_state(PlSqlParser::Constraint_stateContext * /*ctx*/) override { }

  virtual void enterAlter_tablespace(PlSqlParser::Alter_tablespaceContext * /*ctx*/) override { }
  virtual void exitAlter_tablespace(PlSqlParser::Alter_tablespaceContext * /*ctx*/) override { }

  virtual void enterDatafile_tempfile_clauses(PlSqlParser::Datafile_tempfile_clausesContext * /*ctx*/) override { }
  virtual void exitDatafile_tempfile_clauses(PlSqlParser::Datafile_tempfile_clausesContext * /*ctx*/) override { }

  virtual void enterTablespace_logging_clauses(PlSqlParser::Tablespace_logging_clausesContext * /*ctx*/) override { }
  virtual void exitTablespace_logging_clauses(PlSqlParser::Tablespace_logging_clausesContext * /*ctx*/) override { }

  virtual void enterTablespace_group_clause(PlSqlParser::Tablespace_group_clauseContext * /*ctx*/) override { }
  virtual void exitTablespace_group_clause(PlSqlParser::Tablespace_group_clauseContext * /*ctx*/) override { }

  virtual void enterTablespace_group_name(PlSqlParser::Tablespace_group_nameContext * /*ctx*/) override { }
  virtual void exitTablespace_group_name(PlSqlParser::Tablespace_group_nameContext * /*ctx*/) override { }

  virtual void enterTablespace_state_clauses(PlSqlParser::Tablespace_state_clausesContext * /*ctx*/) override { }
  virtual void exitTablespace_state_clauses(PlSqlParser::Tablespace_state_clausesContext * /*ctx*/) override { }

  virtual void enterFlashback_mode_clause(PlSqlParser::Flashback_mode_clauseContext * /*ctx*/) override { }
  virtual void exitFlashback_mode_clause(PlSqlParser::Flashback_mode_clauseContext * /*ctx*/) override { }

  virtual void enterNew_tablespace_name(PlSqlParser::New_tablespace_nameContext * /*ctx*/) override { }
  virtual void exitNew_tablespace_name(PlSqlParser::New_tablespace_nameContext * /*ctx*/) override { }

  virtual void enterCreate_tablespace(PlSqlParser::Create_tablespaceContext * /*ctx*/) override { }
  virtual void exitCreate_tablespace(PlSqlParser::Create_tablespaceContext * /*ctx*/) override { }

  virtual void enterPermanent_tablespace_clause(PlSqlParser::Permanent_tablespace_clauseContext * /*ctx*/) override { }
  virtual void exitPermanent_tablespace_clause(PlSqlParser::Permanent_tablespace_clauseContext * /*ctx*/) override { }

  virtual void enterTablespace_encryption_spec(PlSqlParser::Tablespace_encryption_specContext * /*ctx*/) override { }
  virtual void exitTablespace_encryption_spec(PlSqlParser::Tablespace_encryption_specContext * /*ctx*/) override { }

  virtual void enterLogging_clause(PlSqlParser::Logging_clauseContext * /*ctx*/) override { }
  virtual void exitLogging_clause(PlSqlParser::Logging_clauseContext * /*ctx*/) override { }

  virtual void enterExtent_management_clause(PlSqlParser::Extent_management_clauseContext * /*ctx*/) override { }
  virtual void exitExtent_management_clause(PlSqlParser::Extent_management_clauseContext * /*ctx*/) override { }

  virtual void enterSegment_management_clause(PlSqlParser::Segment_management_clauseContext * /*ctx*/) override { }
  virtual void exitSegment_management_clause(PlSqlParser::Segment_management_clauseContext * /*ctx*/) override { }

  virtual void enterTemporary_tablespace_clause(PlSqlParser::Temporary_tablespace_clauseContext * /*ctx*/) override { }
  virtual void exitTemporary_tablespace_clause(PlSqlParser::Temporary_tablespace_clauseContext * /*ctx*/) override { }

  virtual void enterUndo_tablespace_clause(PlSqlParser::Undo_tablespace_clauseContext * /*ctx*/) override { }
  virtual void exitUndo_tablespace_clause(PlSqlParser::Undo_tablespace_clauseContext * /*ctx*/) override { }

  virtual void enterTablespace_retention_clause(PlSqlParser::Tablespace_retention_clauseContext * /*ctx*/) override { }
  virtual void exitTablespace_retention_clause(PlSqlParser::Tablespace_retention_clauseContext * /*ctx*/) override { }

  virtual void enterDatafile_specification(PlSqlParser::Datafile_specificationContext * /*ctx*/) override { }
  virtual void exitDatafile_specification(PlSqlParser::Datafile_specificationContext * /*ctx*/) override { }

  virtual void enterTempfile_specification(PlSqlParser::Tempfile_specificationContext * /*ctx*/) override { }
  virtual void exitTempfile_specification(PlSqlParser::Tempfile_specificationContext * /*ctx*/) override { }

  virtual void enterDatafile_tempfile_spec(PlSqlParser::Datafile_tempfile_specContext * /*ctx*/) override { }
  virtual void exitDatafile_tempfile_spec(PlSqlParser::Datafile_tempfile_specContext * /*ctx*/) override { }

  virtual void enterRedo_log_file_spec(PlSqlParser::Redo_log_file_specContext * /*ctx*/) override { }
  virtual void exitRedo_log_file_spec(PlSqlParser::Redo_log_file_specContext * /*ctx*/) override { }

  virtual void enterAutoextend_clause(PlSqlParser::Autoextend_clauseContext * /*ctx*/) override { }
  virtual void exitAutoextend_clause(PlSqlParser::Autoextend_clauseContext * /*ctx*/) override { }

  virtual void enterMaxsize_clause(PlSqlParser::Maxsize_clauseContext * /*ctx*/) override { }
  virtual void exitMaxsize_clause(PlSqlParser::Maxsize_clauseContext * /*ctx*/) override { }

  virtual void enterBuild_clause(PlSqlParser::Build_clauseContext * /*ctx*/) override { }
  virtual void exitBuild_clause(PlSqlParser::Build_clauseContext * /*ctx*/) override { }

  virtual void enterParallel_clause(PlSqlParser::Parallel_clauseContext * /*ctx*/) override { }
  virtual void exitParallel_clause(PlSqlParser::Parallel_clauseContext * /*ctx*/) override { }

  virtual void enterAlter_materialized_view(PlSqlParser::Alter_materialized_viewContext * /*ctx*/) override { }
  virtual void exitAlter_materialized_view(PlSqlParser::Alter_materialized_viewContext * /*ctx*/) override { }

  virtual void enterAlter_mv_option1(PlSqlParser::Alter_mv_option1Context * /*ctx*/) override { }
  virtual void exitAlter_mv_option1(PlSqlParser::Alter_mv_option1Context * /*ctx*/) override { }

  virtual void enterAlter_mv_refresh(PlSqlParser::Alter_mv_refreshContext * /*ctx*/) override { }
  virtual void exitAlter_mv_refresh(PlSqlParser::Alter_mv_refreshContext * /*ctx*/) override { }

  virtual void enterRollback_segment(PlSqlParser::Rollback_segmentContext * /*ctx*/) override { }
  virtual void exitRollback_segment(PlSqlParser::Rollback_segmentContext * /*ctx*/) override { }

  virtual void enterModify_mv_column_clause(PlSqlParser::Modify_mv_column_clauseContext * /*ctx*/) override { }
  virtual void exitModify_mv_column_clause(PlSqlParser::Modify_mv_column_clauseContext * /*ctx*/) override { }

  virtual void enterAlter_materialized_view_log(PlSqlParser::Alter_materialized_view_logContext * /*ctx*/) override { }
  virtual void exitAlter_materialized_view_log(PlSqlParser::Alter_materialized_view_logContext * /*ctx*/) override { }

  virtual void enterAdd_mv_log_column_clause(PlSqlParser::Add_mv_log_column_clauseContext * /*ctx*/) override { }
  virtual void exitAdd_mv_log_column_clause(PlSqlParser::Add_mv_log_column_clauseContext * /*ctx*/) override { }

  virtual void enterMove_mv_log_clause(PlSqlParser::Move_mv_log_clauseContext * /*ctx*/) override { }
  virtual void exitMove_mv_log_clause(PlSqlParser::Move_mv_log_clauseContext * /*ctx*/) override { }

  virtual void enterMv_log_augmentation(PlSqlParser::Mv_log_augmentationContext * /*ctx*/) override { }
  virtual void exitMv_log_augmentation(PlSqlParser::Mv_log_augmentationContext * /*ctx*/) override { }

  virtual void enterDatetime_expr(PlSqlParser::Datetime_exprContext * /*ctx*/) override { }
  virtual void exitDatetime_expr(PlSqlParser::Datetime_exprContext * /*ctx*/) override { }

  virtual void enterInterval_expr(PlSqlParser::Interval_exprContext * /*ctx*/) override { }
  virtual void exitInterval_expr(PlSqlParser::Interval_exprContext * /*ctx*/) override { }

  virtual void enterSynchronous_or_asynchronous(PlSqlParser::Synchronous_or_asynchronousContext * /*ctx*/) override { }
  virtual void exitSynchronous_or_asynchronous(PlSqlParser::Synchronous_or_asynchronousContext * /*ctx*/) override { }

  virtual void enterIncluding_or_excluding(PlSqlParser::Including_or_excludingContext * /*ctx*/) override { }
  virtual void exitIncluding_or_excluding(PlSqlParser::Including_or_excludingContext * /*ctx*/) override { }

  virtual void enterCreate_materialized_view_log(PlSqlParser::Create_materialized_view_logContext * /*ctx*/) override { }
  virtual void exitCreate_materialized_view_log(PlSqlParser::Create_materialized_view_logContext * /*ctx*/) override { }

  virtual void enterNew_values_clause(PlSqlParser::New_values_clauseContext * /*ctx*/) override { }
  virtual void exitNew_values_clause(PlSqlParser::New_values_clauseContext * /*ctx*/) override { }

  virtual void enterMv_log_purge_clause(PlSqlParser::Mv_log_purge_clauseContext * /*ctx*/) override { }
  virtual void exitMv_log_purge_clause(PlSqlParser::Mv_log_purge_clauseContext * /*ctx*/) override { }

  virtual void enterCreate_materialized_view(PlSqlParser::Create_materialized_viewContext * /*ctx*/) override { }
  virtual void exitCreate_materialized_view(PlSqlParser::Create_materialized_viewContext * /*ctx*/) override { }

  virtual void enterCreate_mv_refresh(PlSqlParser::Create_mv_refreshContext * /*ctx*/) override { }
  virtual void exitCreate_mv_refresh(PlSqlParser::Create_mv_refreshContext * /*ctx*/) override { }

  virtual void enterCreate_context(PlSqlParser::Create_contextContext * /*ctx*/) override { }
  virtual void exitCreate_context(PlSqlParser::Create_contextContext * /*ctx*/) override { }

  virtual void enterOracle_namespace(PlSqlParser::Oracle_namespaceContext * /*ctx*/) override { }
  virtual void exitOracle_namespace(PlSqlParser::Oracle_namespaceContext * /*ctx*/) override { }

  virtual void enterCreate_cluster(PlSqlParser::Create_clusterContext * /*ctx*/) override { }
  virtual void exitCreate_cluster(PlSqlParser::Create_clusterContext * /*ctx*/) override { }

  virtual void enterCreate_table(PlSqlParser::Create_tableContext * /*ctx*/) override { }
  virtual void exitCreate_table(PlSqlParser::Create_tableContext * /*ctx*/) override { }

  virtual void enterXmltype_table(PlSqlParser::Xmltype_tableContext * /*ctx*/) override { }
  virtual void exitXmltype_table(PlSqlParser::Xmltype_tableContext * /*ctx*/) override { }

  virtual void enterXmltype_virtual_columns(PlSqlParser::Xmltype_virtual_columnsContext * /*ctx*/) override { }
  virtual void exitXmltype_virtual_columns(PlSqlParser::Xmltype_virtual_columnsContext * /*ctx*/) override { }

  virtual void enterXmltype_column_properties(PlSqlParser::Xmltype_column_propertiesContext * /*ctx*/) override { }
  virtual void exitXmltype_column_properties(PlSqlParser::Xmltype_column_propertiesContext * /*ctx*/) override { }

  virtual void enterXmltype_storage(PlSqlParser::Xmltype_storageContext * /*ctx*/) override { }
  virtual void exitXmltype_storage(PlSqlParser::Xmltype_storageContext * /*ctx*/) override { }

  virtual void enterXmlschema_spec(PlSqlParser::Xmlschema_specContext * /*ctx*/) override { }
  virtual void exitXmlschema_spec(PlSqlParser::Xmlschema_specContext * /*ctx*/) override { }

  virtual void enterObject_table(PlSqlParser::Object_tableContext * /*ctx*/) override { }
  virtual void exitObject_table(PlSqlParser::Object_tableContext * /*ctx*/) override { }

  virtual void enterOid_index_clause(PlSqlParser::Oid_index_clauseContext * /*ctx*/) override { }
  virtual void exitOid_index_clause(PlSqlParser::Oid_index_clauseContext * /*ctx*/) override { }

  virtual void enterOid_clause(PlSqlParser::Oid_clauseContext * /*ctx*/) override { }
  virtual void exitOid_clause(PlSqlParser::Oid_clauseContext * /*ctx*/) override { }

  virtual void enterObject_properties(PlSqlParser::Object_propertiesContext * /*ctx*/) override { }
  virtual void exitObject_properties(PlSqlParser::Object_propertiesContext * /*ctx*/) override { }

  virtual void enterObject_table_substitution(PlSqlParser::Object_table_substitutionContext * /*ctx*/) override { }
  virtual void exitObject_table_substitution(PlSqlParser::Object_table_substitutionContext * /*ctx*/) override { }

  virtual void enterRelational_table(PlSqlParser::Relational_tableContext * /*ctx*/) override { }
  virtual void exitRelational_table(PlSqlParser::Relational_tableContext * /*ctx*/) override { }

  virtual void enterRelational_properties(PlSqlParser::Relational_propertiesContext * /*ctx*/) override { }
  virtual void exitRelational_properties(PlSqlParser::Relational_propertiesContext * /*ctx*/) override { }

  virtual void enterTable_partitioning_clauses(PlSqlParser::Table_partitioning_clausesContext * /*ctx*/) override { }
  virtual void exitTable_partitioning_clauses(PlSqlParser::Table_partitioning_clausesContext * /*ctx*/) override { }

  virtual void enterRange_partitions(PlSqlParser::Range_partitionsContext * /*ctx*/) override { }
  virtual void exitRange_partitions(PlSqlParser::Range_partitionsContext * /*ctx*/) override { }

  virtual void enterList_partitions(PlSqlParser::List_partitionsContext * /*ctx*/) override { }
  virtual void exitList_partitions(PlSqlParser::List_partitionsContext * /*ctx*/) override { }

  virtual void enterHash_partitions(PlSqlParser::Hash_partitionsContext * /*ctx*/) override { }
  virtual void exitHash_partitions(PlSqlParser::Hash_partitionsContext * /*ctx*/) override { }

  virtual void enterIndividual_hash_partitions(PlSqlParser::Individual_hash_partitionsContext * /*ctx*/) override { }
  virtual void exitIndividual_hash_partitions(PlSqlParser::Individual_hash_partitionsContext * /*ctx*/) override { }

  virtual void enterHash_partitions_by_quantity(PlSqlParser::Hash_partitions_by_quantityContext * /*ctx*/) override { }
  virtual void exitHash_partitions_by_quantity(PlSqlParser::Hash_partitions_by_quantityContext * /*ctx*/) override { }

  virtual void enterHash_partition_quantity(PlSqlParser::Hash_partition_quantityContext * /*ctx*/) override { }
  virtual void exitHash_partition_quantity(PlSqlParser::Hash_partition_quantityContext * /*ctx*/) override { }

  virtual void enterComposite_range_partitions(PlSqlParser::Composite_range_partitionsContext * /*ctx*/) override { }
  virtual void exitComposite_range_partitions(PlSqlParser::Composite_range_partitionsContext * /*ctx*/) override { }

  virtual void enterComposite_list_partitions(PlSqlParser::Composite_list_partitionsContext * /*ctx*/) override { }
  virtual void exitComposite_list_partitions(PlSqlParser::Composite_list_partitionsContext * /*ctx*/) override { }

  virtual void enterComposite_hash_partitions(PlSqlParser::Composite_hash_partitionsContext * /*ctx*/) override { }
  virtual void exitComposite_hash_partitions(PlSqlParser::Composite_hash_partitionsContext * /*ctx*/) override { }

  virtual void enterReference_partitioning(PlSqlParser::Reference_partitioningContext * /*ctx*/) override { }
  virtual void exitReference_partitioning(PlSqlParser::Reference_partitioningContext * /*ctx*/) override { }

  virtual void enterReference_partition_desc(PlSqlParser::Reference_partition_descContext * /*ctx*/) override { }
  virtual void exitReference_partition_desc(PlSqlParser::Reference_partition_descContext * /*ctx*/) override { }

  virtual void enterSystem_partitioning(PlSqlParser::System_partitioningContext * /*ctx*/) override { }
  virtual void exitSystem_partitioning(PlSqlParser::System_partitioningContext * /*ctx*/) override { }

  virtual void enterRange_partition_desc(PlSqlParser::Range_partition_descContext * /*ctx*/) override { }
  virtual void exitRange_partition_desc(PlSqlParser::Range_partition_descContext * /*ctx*/) override { }

  virtual void enterList_partition_desc(PlSqlParser::List_partition_descContext * /*ctx*/) override { }
  virtual void exitList_partition_desc(PlSqlParser::List_partition_descContext * /*ctx*/) override { }

  virtual void enterSubpartition_template(PlSqlParser::Subpartition_templateContext * /*ctx*/) override { }
  virtual void exitSubpartition_template(PlSqlParser::Subpartition_templateContext * /*ctx*/) override { }

  virtual void enterHash_subpartition_quantity(PlSqlParser::Hash_subpartition_quantityContext * /*ctx*/) override { }
  virtual void exitHash_subpartition_quantity(PlSqlParser::Hash_subpartition_quantityContext * /*ctx*/) override { }

  virtual void enterSubpartition_by_range(PlSqlParser::Subpartition_by_rangeContext * /*ctx*/) override { }
  virtual void exitSubpartition_by_range(PlSqlParser::Subpartition_by_rangeContext * /*ctx*/) override { }

  virtual void enterSubpartition_by_list(PlSqlParser::Subpartition_by_listContext * /*ctx*/) override { }
  virtual void exitSubpartition_by_list(PlSqlParser::Subpartition_by_listContext * /*ctx*/) override { }

  virtual void enterSubpartition_by_hash(PlSqlParser::Subpartition_by_hashContext * /*ctx*/) override { }
  virtual void exitSubpartition_by_hash(PlSqlParser::Subpartition_by_hashContext * /*ctx*/) override { }

  virtual void enterSubpartition_name(PlSqlParser::Subpartition_nameContext * /*ctx*/) override { }
  virtual void exitSubpartition_name(PlSqlParser::Subpartition_nameContext * /*ctx*/) override { }

  virtual void enterRange_subpartition_desc(PlSqlParser::Range_subpartition_descContext * /*ctx*/) override { }
  virtual void exitRange_subpartition_desc(PlSqlParser::Range_subpartition_descContext * /*ctx*/) override { }

  virtual void enterList_subpartition_desc(PlSqlParser::List_subpartition_descContext * /*ctx*/) override { }
  virtual void exitList_subpartition_desc(PlSqlParser::List_subpartition_descContext * /*ctx*/) override { }

  virtual void enterIndividual_hash_subparts(PlSqlParser::Individual_hash_subpartsContext * /*ctx*/) override { }
  virtual void exitIndividual_hash_subparts(PlSqlParser::Individual_hash_subpartsContext * /*ctx*/) override { }

  virtual void enterHash_subparts_by_quantity(PlSqlParser::Hash_subparts_by_quantityContext * /*ctx*/) override { }
  virtual void exitHash_subparts_by_quantity(PlSqlParser::Hash_subparts_by_quantityContext * /*ctx*/) override { }

  virtual void enterRange_values_clause(PlSqlParser::Range_values_clauseContext * /*ctx*/) override { }
  virtual void exitRange_values_clause(PlSqlParser::Range_values_clauseContext * /*ctx*/) override { }

  virtual void enterList_values_clause(PlSqlParser::List_values_clauseContext * /*ctx*/) override { }
  virtual void exitList_values_clause(PlSqlParser::List_values_clauseContext * /*ctx*/) override { }

  virtual void enterTable_partition_description(PlSqlParser::Table_partition_descriptionContext * /*ctx*/) override { }
  virtual void exitTable_partition_description(PlSqlParser::Table_partition_descriptionContext * /*ctx*/) override { }

  virtual void enterPartitioning_storage_clause(PlSqlParser::Partitioning_storage_clauseContext * /*ctx*/) override { }
  virtual void exitPartitioning_storage_clause(PlSqlParser::Partitioning_storage_clauseContext * /*ctx*/) override { }

  virtual void enterLob_partitioning_storage(PlSqlParser::Lob_partitioning_storageContext * /*ctx*/) override { }
  virtual void exitLob_partitioning_storage(PlSqlParser::Lob_partitioning_storageContext * /*ctx*/) override { }

  virtual void enterDatatype_null_enable(PlSqlParser::Datatype_null_enableContext * /*ctx*/) override { }
  virtual void exitDatatype_null_enable(PlSqlParser::Datatype_null_enableContext * /*ctx*/) override { }

  virtual void enterSize_clause(PlSqlParser::Size_clauseContext * /*ctx*/) override { }
  virtual void exitSize_clause(PlSqlParser::Size_clauseContext * /*ctx*/) override { }

  virtual void enterTable_compression(PlSqlParser::Table_compressionContext * /*ctx*/) override { }
  virtual void exitTable_compression(PlSqlParser::Table_compressionContext * /*ctx*/) override { }

  virtual void enterPhysical_attributes_clause(PlSqlParser::Physical_attributes_clauseContext * /*ctx*/) override { }
  virtual void exitPhysical_attributes_clause(PlSqlParser::Physical_attributes_clauseContext * /*ctx*/) override { }

  virtual void enterStorage_clause(PlSqlParser::Storage_clauseContext * /*ctx*/) override { }
  virtual void exitStorage_clause(PlSqlParser::Storage_clauseContext * /*ctx*/) override { }

  virtual void enterDeferred_segment_creation(PlSqlParser::Deferred_segment_creationContext * /*ctx*/) override { }
  virtual void exitDeferred_segment_creation(PlSqlParser::Deferred_segment_creationContext * /*ctx*/) override { }

  virtual void enterSegment_attributes_clause(PlSqlParser::Segment_attributes_clauseContext * /*ctx*/) override { }
  virtual void exitSegment_attributes_clause(PlSqlParser::Segment_attributes_clauseContext * /*ctx*/) override { }

  virtual void enterPhysical_properties(PlSqlParser::Physical_propertiesContext * /*ctx*/) override { }
  virtual void exitPhysical_properties(PlSqlParser::Physical_propertiesContext * /*ctx*/) override { }

  virtual void enterRow_movement_clause(PlSqlParser::Row_movement_clauseContext * /*ctx*/) override { }
  virtual void exitRow_movement_clause(PlSqlParser::Row_movement_clauseContext * /*ctx*/) override { }

  virtual void enterFlashback_archive_clause(PlSqlParser::Flashback_archive_clauseContext * /*ctx*/) override { }
  virtual void exitFlashback_archive_clause(PlSqlParser::Flashback_archive_clauseContext * /*ctx*/) override { }

  virtual void enterLog_grp(PlSqlParser::Log_grpContext * /*ctx*/) override { }
  virtual void exitLog_grp(PlSqlParser::Log_grpContext * /*ctx*/) override { }

  virtual void enterSupplemental_table_logging(PlSqlParser::Supplemental_table_loggingContext * /*ctx*/) override { }
  virtual void exitSupplemental_table_logging(PlSqlParser::Supplemental_table_loggingContext * /*ctx*/) override { }

  virtual void enterSupplemental_log_grp_clause(PlSqlParser::Supplemental_log_grp_clauseContext * /*ctx*/) override { }
  virtual void exitSupplemental_log_grp_clause(PlSqlParser::Supplemental_log_grp_clauseContext * /*ctx*/) override { }

  virtual void enterSupplemental_id_key_clause(PlSqlParser::Supplemental_id_key_clauseContext * /*ctx*/) override { }
  virtual void exitSupplemental_id_key_clause(PlSqlParser::Supplemental_id_key_clauseContext * /*ctx*/) override { }

  virtual void enterAllocate_extent_clause(PlSqlParser::Allocate_extent_clauseContext * /*ctx*/) override { }
  virtual void exitAllocate_extent_clause(PlSqlParser::Allocate_extent_clauseContext * /*ctx*/) override { }

  virtual void enterDeallocate_unused_clause(PlSqlParser::Deallocate_unused_clauseContext * /*ctx*/) override { }
  virtual void exitDeallocate_unused_clause(PlSqlParser::Deallocate_unused_clauseContext * /*ctx*/) override { }

  virtual void enterShrink_clause(PlSqlParser::Shrink_clauseContext * /*ctx*/) override { }
  virtual void exitShrink_clause(PlSqlParser::Shrink_clauseContext * /*ctx*/) override { }

  virtual void enterRecords_per_block_clause(PlSqlParser::Records_per_block_clauseContext * /*ctx*/) override { }
  virtual void exitRecords_per_block_clause(PlSqlParser::Records_per_block_clauseContext * /*ctx*/) override { }

  virtual void enterUpgrade_table_clause(PlSqlParser::Upgrade_table_clauseContext * /*ctx*/) override { }
  virtual void exitUpgrade_table_clause(PlSqlParser::Upgrade_table_clauseContext * /*ctx*/) override { }

  virtual void enterDrop_table(PlSqlParser::Drop_tableContext * /*ctx*/) override { }
  virtual void exitDrop_table(PlSqlParser::Drop_tableContext * /*ctx*/) override { }

  virtual void enterComment_on_column(PlSqlParser::Comment_on_columnContext * /*ctx*/) override { }
  virtual void exitComment_on_column(PlSqlParser::Comment_on_columnContext * /*ctx*/) override { }

  virtual void enterEnable_or_disable(PlSqlParser::Enable_or_disableContext * /*ctx*/) override { }
  virtual void exitEnable_or_disable(PlSqlParser::Enable_or_disableContext * /*ctx*/) override { }

  virtual void enterAllow_or_disallow(PlSqlParser::Allow_or_disallowContext * /*ctx*/) override { }
  virtual void exitAllow_or_disallow(PlSqlParser::Allow_or_disallowContext * /*ctx*/) override { }

  virtual void enterCreate_synonym(PlSqlParser::Create_synonymContext * /*ctx*/) override { }
  virtual void exitCreate_synonym(PlSqlParser::Create_synonymContext * /*ctx*/) override { }

  virtual void enterComment_on_table(PlSqlParser::Comment_on_tableContext * /*ctx*/) override { }
  virtual void exitComment_on_table(PlSqlParser::Comment_on_tableContext * /*ctx*/) override { }

  virtual void enterAlter_cluster(PlSqlParser::Alter_clusterContext * /*ctx*/) override { }
  virtual void exitAlter_cluster(PlSqlParser::Alter_clusterContext * /*ctx*/) override { }

  virtual void enterCache_or_nocache(PlSqlParser::Cache_or_nocacheContext * /*ctx*/) override { }
  virtual void exitCache_or_nocache(PlSqlParser::Cache_or_nocacheContext * /*ctx*/) override { }

  virtual void enterDatabase_name(PlSqlParser::Database_nameContext * /*ctx*/) override { }
  virtual void exitDatabase_name(PlSqlParser::Database_nameContext * /*ctx*/) override { }

  virtual void enterAlter_database(PlSqlParser::Alter_databaseContext * /*ctx*/) override { }
  virtual void exitAlter_database(PlSqlParser::Alter_databaseContext * /*ctx*/) override { }

  virtual void enterStartup_clauses(PlSqlParser::Startup_clausesContext * /*ctx*/) override { }
  virtual void exitStartup_clauses(PlSqlParser::Startup_clausesContext * /*ctx*/) override { }

  virtual void enterResetlogs_or_noresetlogs(PlSqlParser::Resetlogs_or_noresetlogsContext * /*ctx*/) override { }
  virtual void exitResetlogs_or_noresetlogs(PlSqlParser::Resetlogs_or_noresetlogsContext * /*ctx*/) override { }

  virtual void enterUpgrade_or_downgrade(PlSqlParser::Upgrade_or_downgradeContext * /*ctx*/) override { }
  virtual void exitUpgrade_or_downgrade(PlSqlParser::Upgrade_or_downgradeContext * /*ctx*/) override { }

  virtual void enterRecovery_clauses(PlSqlParser::Recovery_clausesContext * /*ctx*/) override { }
  virtual void exitRecovery_clauses(PlSqlParser::Recovery_clausesContext * /*ctx*/) override { }

  virtual void enterBegin_or_end(PlSqlParser::Begin_or_endContext * /*ctx*/) override { }
  virtual void exitBegin_or_end(PlSqlParser::Begin_or_endContext * /*ctx*/) override { }

  virtual void enterGeneral_recovery(PlSqlParser::General_recoveryContext * /*ctx*/) override { }
  virtual void exitGeneral_recovery(PlSqlParser::General_recoveryContext * /*ctx*/) override { }

  virtual void enterFull_database_recovery(PlSqlParser::Full_database_recoveryContext * /*ctx*/) override { }
  virtual void exitFull_database_recovery(PlSqlParser::Full_database_recoveryContext * /*ctx*/) override { }

  virtual void enterPartial_database_recovery(PlSqlParser::Partial_database_recoveryContext * /*ctx*/) override { }
  virtual void exitPartial_database_recovery(PlSqlParser::Partial_database_recoveryContext * /*ctx*/) override { }

  virtual void enterPartial_database_recovery_10g(PlSqlParser::Partial_database_recovery_10gContext * /*ctx*/) override { }
  virtual void exitPartial_database_recovery_10g(PlSqlParser::Partial_database_recovery_10gContext * /*ctx*/) override { }

  virtual void enterManaged_standby_recovery(PlSqlParser::Managed_standby_recoveryContext * /*ctx*/) override { }
  virtual void exitManaged_standby_recovery(PlSqlParser::Managed_standby_recoveryContext * /*ctx*/) override { }

  virtual void enterDb_name(PlSqlParser::Db_nameContext * /*ctx*/) override { }
  virtual void exitDb_name(PlSqlParser::Db_nameContext * /*ctx*/) override { }

  virtual void enterDatabase_file_clauses(PlSqlParser::Database_file_clausesContext * /*ctx*/) override { }
  virtual void exitDatabase_file_clauses(PlSqlParser::Database_file_clausesContext * /*ctx*/) override { }

  virtual void enterCreate_datafile_clause(PlSqlParser::Create_datafile_clauseContext * /*ctx*/) override { }
  virtual void exitCreate_datafile_clause(PlSqlParser::Create_datafile_clauseContext * /*ctx*/) override { }

  virtual void enterAlter_datafile_clause(PlSqlParser::Alter_datafile_clauseContext * /*ctx*/) override { }
  virtual void exitAlter_datafile_clause(PlSqlParser::Alter_datafile_clauseContext * /*ctx*/) override { }

  virtual void enterAlter_tempfile_clause(PlSqlParser::Alter_tempfile_clauseContext * /*ctx*/) override { }
  virtual void exitAlter_tempfile_clause(PlSqlParser::Alter_tempfile_clauseContext * /*ctx*/) override { }

  virtual void enterLogfile_clauses(PlSqlParser::Logfile_clausesContext * /*ctx*/) override { }
  virtual void exitLogfile_clauses(PlSqlParser::Logfile_clausesContext * /*ctx*/) override { }

  virtual void enterAdd_logfile_clauses(PlSqlParser::Add_logfile_clausesContext * /*ctx*/) override { }
  virtual void exitAdd_logfile_clauses(PlSqlParser::Add_logfile_clausesContext * /*ctx*/) override { }

  virtual void enterLog_file_group(PlSqlParser::Log_file_groupContext * /*ctx*/) override { }
  virtual void exitLog_file_group(PlSqlParser::Log_file_groupContext * /*ctx*/) override { }

  virtual void enterDrop_logfile_clauses(PlSqlParser::Drop_logfile_clausesContext * /*ctx*/) override { }
  virtual void exitDrop_logfile_clauses(PlSqlParser::Drop_logfile_clausesContext * /*ctx*/) override { }

  virtual void enterSwitch_logfile_clause(PlSqlParser::Switch_logfile_clauseContext * /*ctx*/) override { }
  virtual void exitSwitch_logfile_clause(PlSqlParser::Switch_logfile_clauseContext * /*ctx*/) override { }

  virtual void enterSupplemental_db_logging(PlSqlParser::Supplemental_db_loggingContext * /*ctx*/) override { }
  virtual void exitSupplemental_db_logging(PlSqlParser::Supplemental_db_loggingContext * /*ctx*/) override { }

  virtual void enterAdd_or_drop(PlSqlParser::Add_or_dropContext * /*ctx*/) override { }
  virtual void exitAdd_or_drop(PlSqlParser::Add_or_dropContext * /*ctx*/) override { }

  virtual void enterSupplemental_plsql_clause(PlSqlParser::Supplemental_plsql_clauseContext * /*ctx*/) override { }
  virtual void exitSupplemental_plsql_clause(PlSqlParser::Supplemental_plsql_clauseContext * /*ctx*/) override { }

  virtual void enterLogfile_descriptor(PlSqlParser::Logfile_descriptorContext * /*ctx*/) override { }
  virtual void exitLogfile_descriptor(PlSqlParser::Logfile_descriptorContext * /*ctx*/) override { }

  virtual void enterControlfile_clauses(PlSqlParser::Controlfile_clausesContext * /*ctx*/) override { }
  virtual void exitControlfile_clauses(PlSqlParser::Controlfile_clausesContext * /*ctx*/) override { }

  virtual void enterTrace_file_clause(PlSqlParser::Trace_file_clauseContext * /*ctx*/) override { }
  virtual void exitTrace_file_clause(PlSqlParser::Trace_file_clauseContext * /*ctx*/) override { }

  virtual void enterStandby_database_clauses(PlSqlParser::Standby_database_clausesContext * /*ctx*/) override { }
  virtual void exitStandby_database_clauses(PlSqlParser::Standby_database_clausesContext * /*ctx*/) override { }

  virtual void enterActivate_standby_db_clause(PlSqlParser::Activate_standby_db_clauseContext * /*ctx*/) override { }
  virtual void exitActivate_standby_db_clause(PlSqlParser::Activate_standby_db_clauseContext * /*ctx*/) override { }

  virtual void enterMaximize_standby_db_clause(PlSqlParser::Maximize_standby_db_clauseContext * /*ctx*/) override { }
  virtual void exitMaximize_standby_db_clause(PlSqlParser::Maximize_standby_db_clauseContext * /*ctx*/) override { }

  virtual void enterRegister_logfile_clause(PlSqlParser::Register_logfile_clauseContext * /*ctx*/) override { }
  virtual void exitRegister_logfile_clause(PlSqlParser::Register_logfile_clauseContext * /*ctx*/) override { }

  virtual void enterCommit_switchover_clause(PlSqlParser::Commit_switchover_clauseContext * /*ctx*/) override { }
  virtual void exitCommit_switchover_clause(PlSqlParser::Commit_switchover_clauseContext * /*ctx*/) override { }

  virtual void enterStart_standby_clause(PlSqlParser::Start_standby_clauseContext * /*ctx*/) override { }
  virtual void exitStart_standby_clause(PlSqlParser::Start_standby_clauseContext * /*ctx*/) override { }

  virtual void enterStop_standby_clause(PlSqlParser::Stop_standby_clauseContext * /*ctx*/) override { }
  virtual void exitStop_standby_clause(PlSqlParser::Stop_standby_clauseContext * /*ctx*/) override { }

  virtual void enterConvert_database_clause(PlSqlParser::Convert_database_clauseContext * /*ctx*/) override { }
  virtual void exitConvert_database_clause(PlSqlParser::Convert_database_clauseContext * /*ctx*/) override { }

  virtual void enterDefault_settings_clause(PlSqlParser::Default_settings_clauseContext * /*ctx*/) override { }
  virtual void exitDefault_settings_clause(PlSqlParser::Default_settings_clauseContext * /*ctx*/) override { }

  virtual void enterSet_time_zone_clause(PlSqlParser::Set_time_zone_clauseContext * /*ctx*/) override { }
  virtual void exitSet_time_zone_clause(PlSqlParser::Set_time_zone_clauseContext * /*ctx*/) override { }

  virtual void enterInstance_clauses(PlSqlParser::Instance_clausesContext * /*ctx*/) override { }
  virtual void exitInstance_clauses(PlSqlParser::Instance_clausesContext * /*ctx*/) override { }

  virtual void enterSecurity_clause(PlSqlParser::Security_clauseContext * /*ctx*/) override { }
  virtual void exitSecurity_clause(PlSqlParser::Security_clauseContext * /*ctx*/) override { }

  virtual void enterDomain(PlSqlParser::DomainContext * /*ctx*/) override { }
  virtual void exitDomain(PlSqlParser::DomainContext * /*ctx*/) override { }

  virtual void enterDatabase(PlSqlParser::DatabaseContext * /*ctx*/) override { }
  virtual void exitDatabase(PlSqlParser::DatabaseContext * /*ctx*/) override { }

  virtual void enterEdition_name(PlSqlParser::Edition_nameContext * /*ctx*/) override { }
  virtual void exitEdition_name(PlSqlParser::Edition_nameContext * /*ctx*/) override { }

  virtual void enterFilenumber(PlSqlParser::FilenumberContext * /*ctx*/) override { }
  virtual void exitFilenumber(PlSqlParser::FilenumberContext * /*ctx*/) override { }

  virtual void enterFilename(PlSqlParser::FilenameContext * /*ctx*/) override { }
  virtual void exitFilename(PlSqlParser::FilenameContext * /*ctx*/) override { }

  virtual void enterAlter_table(PlSqlParser::Alter_tableContext * /*ctx*/) override { }
  virtual void exitAlter_table(PlSqlParser::Alter_tableContext * /*ctx*/) override { }

  virtual void enterAlter_table_properties(PlSqlParser::Alter_table_propertiesContext * /*ctx*/) override { }
  virtual void exitAlter_table_properties(PlSqlParser::Alter_table_propertiesContext * /*ctx*/) override { }

  virtual void enterAlter_table_properties_1(PlSqlParser::Alter_table_properties_1Context * /*ctx*/) override { }
  virtual void exitAlter_table_properties_1(PlSqlParser::Alter_table_properties_1Context * /*ctx*/) override { }

  virtual void enterAlter_iot_clauses(PlSqlParser::Alter_iot_clausesContext * /*ctx*/) override { }
  virtual void exitAlter_iot_clauses(PlSqlParser::Alter_iot_clausesContext * /*ctx*/) override { }

  virtual void enterAlter_mapping_table_clause(PlSqlParser::Alter_mapping_table_clauseContext * /*ctx*/) override { }
  virtual void exitAlter_mapping_table_clause(PlSqlParser::Alter_mapping_table_clauseContext * /*ctx*/) override { }

  virtual void enterAlter_overflow_clause(PlSqlParser::Alter_overflow_clauseContext * /*ctx*/) override { }
  virtual void exitAlter_overflow_clause(PlSqlParser::Alter_overflow_clauseContext * /*ctx*/) override { }

  virtual void enterAdd_overflow_clause(PlSqlParser::Add_overflow_clauseContext * /*ctx*/) override { }
  virtual void exitAdd_overflow_clause(PlSqlParser::Add_overflow_clauseContext * /*ctx*/) override { }

  virtual void enterEnable_disable_clause(PlSqlParser::Enable_disable_clauseContext * /*ctx*/) override { }
  virtual void exitEnable_disable_clause(PlSqlParser::Enable_disable_clauseContext * /*ctx*/) override { }

  virtual void enterUsing_index_clause(PlSqlParser::Using_index_clauseContext * /*ctx*/) override { }
  virtual void exitUsing_index_clause(PlSqlParser::Using_index_clauseContext * /*ctx*/) override { }

  virtual void enterIndex_attributes(PlSqlParser::Index_attributesContext * /*ctx*/) override { }
  virtual void exitIndex_attributes(PlSqlParser::Index_attributesContext * /*ctx*/) override { }

  virtual void enterSort_or_nosort(PlSqlParser::Sort_or_nosortContext * /*ctx*/) override { }
  virtual void exitSort_or_nosort(PlSqlParser::Sort_or_nosortContext * /*ctx*/) override { }

  virtual void enterExceptions_clause(PlSqlParser::Exceptions_clauseContext * /*ctx*/) override { }
  virtual void exitExceptions_clause(PlSqlParser::Exceptions_clauseContext * /*ctx*/) override { }

  virtual void enterMove_table_clause(PlSqlParser::Move_table_clauseContext * /*ctx*/) override { }
  virtual void exitMove_table_clause(PlSqlParser::Move_table_clauseContext * /*ctx*/) override { }

  virtual void enterIndex_org_table_clause(PlSqlParser::Index_org_table_clauseContext * /*ctx*/) override { }
  virtual void exitIndex_org_table_clause(PlSqlParser::Index_org_table_clauseContext * /*ctx*/) override { }

  virtual void enterMapping_table_clause(PlSqlParser::Mapping_table_clauseContext * /*ctx*/) override { }
  virtual void exitMapping_table_clause(PlSqlParser::Mapping_table_clauseContext * /*ctx*/) override { }

  virtual void enterKey_compression(PlSqlParser::Key_compressionContext * /*ctx*/) override { }
  virtual void exitKey_compression(PlSqlParser::Key_compressionContext * /*ctx*/) override { }

  virtual void enterIndex_org_overflow_clause(PlSqlParser::Index_org_overflow_clauseContext * /*ctx*/) override { }
  virtual void exitIndex_org_overflow_clause(PlSqlParser::Index_org_overflow_clauseContext * /*ctx*/) override { }

  virtual void enterColumn_clauses(PlSqlParser::Column_clausesContext * /*ctx*/) override { }
  virtual void exitColumn_clauses(PlSqlParser::Column_clausesContext * /*ctx*/) override { }

  virtual void enterModify_collection_retrieval(PlSqlParser::Modify_collection_retrievalContext * /*ctx*/) override { }
  virtual void exitModify_collection_retrieval(PlSqlParser::Modify_collection_retrievalContext * /*ctx*/) override { }

  virtual void enterCollection_item(PlSqlParser::Collection_itemContext * /*ctx*/) override { }
  virtual void exitCollection_item(PlSqlParser::Collection_itemContext * /*ctx*/) override { }

  virtual void enterRename_column_clause(PlSqlParser::Rename_column_clauseContext * /*ctx*/) override { }
  virtual void exitRename_column_clause(PlSqlParser::Rename_column_clauseContext * /*ctx*/) override { }

  virtual void enterOld_column_name(PlSqlParser::Old_column_nameContext * /*ctx*/) override { }
  virtual void exitOld_column_name(PlSqlParser::Old_column_nameContext * /*ctx*/) override { }

  virtual void enterNew_column_name(PlSqlParser::New_column_nameContext * /*ctx*/) override { }
  virtual void exitNew_column_name(PlSqlParser::New_column_nameContext * /*ctx*/) override { }

  virtual void enterAdd_modify_drop_column_clauses(PlSqlParser::Add_modify_drop_column_clausesContext * /*ctx*/) override { }
  virtual void exitAdd_modify_drop_column_clauses(PlSqlParser::Add_modify_drop_column_clausesContext * /*ctx*/) override { }

  virtual void enterDrop_column_clause(PlSqlParser::Drop_column_clauseContext * /*ctx*/) override { }
  virtual void exitDrop_column_clause(PlSqlParser::Drop_column_clauseContext * /*ctx*/) override { }

  virtual void enterModify_column_clauses(PlSqlParser::Modify_column_clausesContext * /*ctx*/) override { }
  virtual void exitModify_column_clauses(PlSqlParser::Modify_column_clausesContext * /*ctx*/) override { }

  virtual void enterModify_col_properties(PlSqlParser::Modify_col_propertiesContext * /*ctx*/) override { }
  virtual void exitModify_col_properties(PlSqlParser::Modify_col_propertiesContext * /*ctx*/) override { }

  virtual void enterModify_col_substitutable(PlSqlParser::Modify_col_substitutableContext * /*ctx*/) override { }
  virtual void exitModify_col_substitutable(PlSqlParser::Modify_col_substitutableContext * /*ctx*/) override { }

  virtual void enterAdd_column_clause(PlSqlParser::Add_column_clauseContext * /*ctx*/) override { }
  virtual void exitAdd_column_clause(PlSqlParser::Add_column_clauseContext * /*ctx*/) override { }

  virtual void enterAlter_varray_col_properties(PlSqlParser::Alter_varray_col_propertiesContext * /*ctx*/) override { }
  virtual void exitAlter_varray_col_properties(PlSqlParser::Alter_varray_col_propertiesContext * /*ctx*/) override { }

  virtual void enterVarray_col_properties(PlSqlParser::Varray_col_propertiesContext * /*ctx*/) override { }
  virtual void exitVarray_col_properties(PlSqlParser::Varray_col_propertiesContext * /*ctx*/) override { }

  virtual void enterVarray_storage_clause(PlSqlParser::Varray_storage_clauseContext * /*ctx*/) override { }
  virtual void exitVarray_storage_clause(PlSqlParser::Varray_storage_clauseContext * /*ctx*/) override { }

  virtual void enterLob_segname(PlSqlParser::Lob_segnameContext * /*ctx*/) override { }
  virtual void exitLob_segname(PlSqlParser::Lob_segnameContext * /*ctx*/) override { }

  virtual void enterLob_item(PlSqlParser::Lob_itemContext * /*ctx*/) override { }
  virtual void exitLob_item(PlSqlParser::Lob_itemContext * /*ctx*/) override { }

  virtual void enterLob_storage_parameters(PlSqlParser::Lob_storage_parametersContext * /*ctx*/) override { }
  virtual void exitLob_storage_parameters(PlSqlParser::Lob_storage_parametersContext * /*ctx*/) override { }

  virtual void enterLob_storage_clause(PlSqlParser::Lob_storage_clauseContext * /*ctx*/) override { }
  virtual void exitLob_storage_clause(PlSqlParser::Lob_storage_clauseContext * /*ctx*/) override { }

  virtual void enterModify_lob_storage_clause(PlSqlParser::Modify_lob_storage_clauseContext * /*ctx*/) override { }
  virtual void exitModify_lob_storage_clause(PlSqlParser::Modify_lob_storage_clauseContext * /*ctx*/) override { }

  virtual void enterModify_lob_parameters(PlSqlParser::Modify_lob_parametersContext * /*ctx*/) override { }
  virtual void exitModify_lob_parameters(PlSqlParser::Modify_lob_parametersContext * /*ctx*/) override { }

  virtual void enterLob_parameters(PlSqlParser::Lob_parametersContext * /*ctx*/) override { }
  virtual void exitLob_parameters(PlSqlParser::Lob_parametersContext * /*ctx*/) override { }

  virtual void enterLob_deduplicate_clause(PlSqlParser::Lob_deduplicate_clauseContext * /*ctx*/) override { }
  virtual void exitLob_deduplicate_clause(PlSqlParser::Lob_deduplicate_clauseContext * /*ctx*/) override { }

  virtual void enterLob_compression_clause(PlSqlParser::Lob_compression_clauseContext * /*ctx*/) override { }
  virtual void exitLob_compression_clause(PlSqlParser::Lob_compression_clauseContext * /*ctx*/) override { }

  virtual void enterLob_retention_clause(PlSqlParser::Lob_retention_clauseContext * /*ctx*/) override { }
  virtual void exitLob_retention_clause(PlSqlParser::Lob_retention_clauseContext * /*ctx*/) override { }

  virtual void enterEncryption_spec(PlSqlParser::Encryption_specContext * /*ctx*/) override { }
  virtual void exitEncryption_spec(PlSqlParser::Encryption_specContext * /*ctx*/) override { }

  virtual void enterTablespace(PlSqlParser::TablespaceContext * /*ctx*/) override { }
  virtual void exitTablespace(PlSqlParser::TablespaceContext * /*ctx*/) override { }

  virtual void enterVarray_item(PlSqlParser::Varray_itemContext * /*ctx*/) override { }
  virtual void exitVarray_item(PlSqlParser::Varray_itemContext * /*ctx*/) override { }

  virtual void enterColumn_properties(PlSqlParser::Column_propertiesContext * /*ctx*/) override { }
  virtual void exitColumn_properties(PlSqlParser::Column_propertiesContext * /*ctx*/) override { }

  virtual void enterPeriod_definition(PlSqlParser::Period_definitionContext * /*ctx*/) override { }
  virtual void exitPeriod_definition(PlSqlParser::Period_definitionContext * /*ctx*/) override { }

  virtual void enterStart_time_column(PlSqlParser::Start_time_columnContext * /*ctx*/) override { }
  virtual void exitStart_time_column(PlSqlParser::Start_time_columnContext * /*ctx*/) override { }

  virtual void enterEnd_time_column(PlSqlParser::End_time_columnContext * /*ctx*/) override { }
  virtual void exitEnd_time_column(PlSqlParser::End_time_columnContext * /*ctx*/) override { }

  virtual void enterColumn_definition(PlSqlParser::Column_definitionContext * /*ctx*/) override { }
  virtual void exitColumn_definition(PlSqlParser::Column_definitionContext * /*ctx*/) override { }

  virtual void enterVirtual_column_definition(PlSqlParser::Virtual_column_definitionContext * /*ctx*/) override { }
  virtual void exitVirtual_column_definition(PlSqlParser::Virtual_column_definitionContext * /*ctx*/) override { }

  virtual void enterOut_of_line_part_storage(PlSqlParser::Out_of_line_part_storageContext * /*ctx*/) override { }
  virtual void exitOut_of_line_part_storage(PlSqlParser::Out_of_line_part_storageContext * /*ctx*/) override { }

  virtual void enterNested_table_col_properties(PlSqlParser::Nested_table_col_propertiesContext * /*ctx*/) override { }
  virtual void exitNested_table_col_properties(PlSqlParser::Nested_table_col_propertiesContext * /*ctx*/) override { }

  virtual void enterNested_item(PlSqlParser::Nested_itemContext * /*ctx*/) override { }
  virtual void exitNested_item(PlSqlParser::Nested_itemContext * /*ctx*/) override { }

  virtual void enterSubstitutable_column_clause(PlSqlParser::Substitutable_column_clauseContext * /*ctx*/) override { }
  virtual void exitSubstitutable_column_clause(PlSqlParser::Substitutable_column_clauseContext * /*ctx*/) override { }

  virtual void enterPartition_name(PlSqlParser::Partition_nameContext * /*ctx*/) override { }
  virtual void exitPartition_name(PlSqlParser::Partition_nameContext * /*ctx*/) override { }

  virtual void enterSupplemental_logging_props(PlSqlParser::Supplemental_logging_propsContext * /*ctx*/) override { }
  virtual void exitSupplemental_logging_props(PlSqlParser::Supplemental_logging_propsContext * /*ctx*/) override { }

  virtual void enterColumn_or_attribute(PlSqlParser::Column_or_attributeContext * /*ctx*/) override { }
  virtual void exitColumn_or_attribute(PlSqlParser::Column_or_attributeContext * /*ctx*/) override { }

  virtual void enterObject_type_col_properties(PlSqlParser::Object_type_col_propertiesContext * /*ctx*/) override { }
  virtual void exitObject_type_col_properties(PlSqlParser::Object_type_col_propertiesContext * /*ctx*/) override { }

  virtual void enterConstraint_clauses(PlSqlParser::Constraint_clausesContext * /*ctx*/) override { }
  virtual void exitConstraint_clauses(PlSqlParser::Constraint_clausesContext * /*ctx*/) override { }

  virtual void enterOld_constraint_name(PlSqlParser::Old_constraint_nameContext * /*ctx*/) override { }
  virtual void exitOld_constraint_name(PlSqlParser::Old_constraint_nameContext * /*ctx*/) override { }

  virtual void enterNew_constraint_name(PlSqlParser::New_constraint_nameContext * /*ctx*/) override { }
  virtual void exitNew_constraint_name(PlSqlParser::New_constraint_nameContext * /*ctx*/) override { }

  virtual void enterDrop_constraint_clause(PlSqlParser::Drop_constraint_clauseContext * /*ctx*/) override { }
  virtual void exitDrop_constraint_clause(PlSqlParser::Drop_constraint_clauseContext * /*ctx*/) override { }

  virtual void enterDrop_primary_key_or_unique_or_generic_clause(PlSqlParser::Drop_primary_key_or_unique_or_generic_clauseContext * /*ctx*/) override { }
  virtual void exitDrop_primary_key_or_unique_or_generic_clause(PlSqlParser::Drop_primary_key_or_unique_or_generic_clauseContext * /*ctx*/) override { }

  virtual void enterAdd_constraint(PlSqlParser::Add_constraintContext * /*ctx*/) override { }
  virtual void exitAdd_constraint(PlSqlParser::Add_constraintContext * /*ctx*/) override { }

  virtual void enterCheck_constraint(PlSqlParser::Check_constraintContext * /*ctx*/) override { }
  virtual void exitCheck_constraint(PlSqlParser::Check_constraintContext * /*ctx*/) override { }

  virtual void enterDrop_constraint(PlSqlParser::Drop_constraintContext * /*ctx*/) override { }
  virtual void exitDrop_constraint(PlSqlParser::Drop_constraintContext * /*ctx*/) override { }

  virtual void enterEnable_constraint(PlSqlParser::Enable_constraintContext * /*ctx*/) override { }
  virtual void exitEnable_constraint(PlSqlParser::Enable_constraintContext * /*ctx*/) override { }

  virtual void enterDisable_constraint(PlSqlParser::Disable_constraintContext * /*ctx*/) override { }
  virtual void exitDisable_constraint(PlSqlParser::Disable_constraintContext * /*ctx*/) override { }

  virtual void enterForeign_key_clause(PlSqlParser::Foreign_key_clauseContext * /*ctx*/) override { }
  virtual void exitForeign_key_clause(PlSqlParser::Foreign_key_clauseContext * /*ctx*/) override { }

  virtual void enterReferences_clause(PlSqlParser::References_clauseContext * /*ctx*/) override { }
  virtual void exitReferences_clause(PlSqlParser::References_clauseContext * /*ctx*/) override { }

  virtual void enterOn_delete_clause(PlSqlParser::On_delete_clauseContext * /*ctx*/) override { }
  virtual void exitOn_delete_clause(PlSqlParser::On_delete_clauseContext * /*ctx*/) override { }

  virtual void enterUnique_key_clause(PlSqlParser::Unique_key_clauseContext * /*ctx*/) override { }
  virtual void exitUnique_key_clause(PlSqlParser::Unique_key_clauseContext * /*ctx*/) override { }

  virtual void enterPrimary_key_clause(PlSqlParser::Primary_key_clauseContext * /*ctx*/) override { }
  virtual void exitPrimary_key_clause(PlSqlParser::Primary_key_clauseContext * /*ctx*/) override { }

  virtual void enterAnonymous_block(PlSqlParser::Anonymous_blockContext * /*ctx*/) override { }
  virtual void exitAnonymous_block(PlSqlParser::Anonymous_blockContext * /*ctx*/) override { }

  virtual void enterInvoker_rights_clause(PlSqlParser::Invoker_rights_clauseContext * /*ctx*/) override { }
  virtual void exitInvoker_rights_clause(PlSqlParser::Invoker_rights_clauseContext * /*ctx*/) override { }

  virtual void enterCall_spec(PlSqlParser::Call_specContext * /*ctx*/) override { }
  virtual void exitCall_spec(PlSqlParser::Call_specContext * /*ctx*/) override { }

  virtual void enterJava_spec(PlSqlParser::Java_specContext * /*ctx*/) override { }
  virtual void exitJava_spec(PlSqlParser::Java_specContext * /*ctx*/) override { }

  virtual void enterC_spec(PlSqlParser::C_specContext * /*ctx*/) override { }
  virtual void exitC_spec(PlSqlParser::C_specContext * /*ctx*/) override { }

  virtual void enterC_agent_in_clause(PlSqlParser::C_agent_in_clauseContext * /*ctx*/) override { }
  virtual void exitC_agent_in_clause(PlSqlParser::C_agent_in_clauseContext * /*ctx*/) override { }

  virtual void enterC_parameters_clause(PlSqlParser::C_parameters_clauseContext * /*ctx*/) override { }
  virtual void exitC_parameters_clause(PlSqlParser::C_parameters_clauseContext * /*ctx*/) override { }

  virtual void enterParameter(PlSqlParser::ParameterContext * /*ctx*/) override { }
  virtual void exitParameter(PlSqlParser::ParameterContext * /*ctx*/) override { }

  virtual void enterDefault_value_part(PlSqlParser::Default_value_partContext * /*ctx*/) override { }
  virtual void exitDefault_value_part(PlSqlParser::Default_value_partContext * /*ctx*/) override { }

  virtual void enterSeq_of_declare_specs(PlSqlParser::Seq_of_declare_specsContext * /*ctx*/) override { }
  virtual void exitSeq_of_declare_specs(PlSqlParser::Seq_of_declare_specsContext * /*ctx*/) override { }

  virtual void enterDeclare_spec(PlSqlParser::Declare_specContext * /*ctx*/) override { }
  virtual void exitDeclare_spec(PlSqlParser::Declare_specContext * /*ctx*/) override { }

  virtual void enterVariable_declaration(PlSqlParser::Variable_declarationContext * /*ctx*/) override { }
  virtual void exitVariable_declaration(PlSqlParser::Variable_declarationContext * /*ctx*/) override { }

  virtual void enterSubtype_declaration(PlSqlParser::Subtype_declarationContext * /*ctx*/) override { }
  virtual void exitSubtype_declaration(PlSqlParser::Subtype_declarationContext * /*ctx*/) override { }

  virtual void enterCursor_declaration(PlSqlParser::Cursor_declarationContext * /*ctx*/) override { }
  virtual void exitCursor_declaration(PlSqlParser::Cursor_declarationContext * /*ctx*/) override { }

  virtual void enterParameter_spec(PlSqlParser::Parameter_specContext * /*ctx*/) override { }
  virtual void exitParameter_spec(PlSqlParser::Parameter_specContext * /*ctx*/) override { }

  virtual void enterException_declaration(PlSqlParser::Exception_declarationContext * /*ctx*/) override { }
  virtual void exitException_declaration(PlSqlParser::Exception_declarationContext * /*ctx*/) override { }

  virtual void enterPragma_declaration(PlSqlParser::Pragma_declarationContext * /*ctx*/) override { }
  virtual void exitPragma_declaration(PlSqlParser::Pragma_declarationContext * /*ctx*/) override { }

  virtual void enterRecord_type_def(PlSqlParser::Record_type_defContext * /*ctx*/) override { }
  virtual void exitRecord_type_def(PlSqlParser::Record_type_defContext * /*ctx*/) override { }

  virtual void enterField_spec(PlSqlParser::Field_specContext * /*ctx*/) override { }
  virtual void exitField_spec(PlSqlParser::Field_specContext * /*ctx*/) override { }

  virtual void enterRef_cursor_type_def(PlSqlParser::Ref_cursor_type_defContext * /*ctx*/) override { }
  virtual void exitRef_cursor_type_def(PlSqlParser::Ref_cursor_type_defContext * /*ctx*/) override { }

  virtual void enterType_declaration(PlSqlParser::Type_declarationContext * /*ctx*/) override { }
  virtual void exitType_declaration(PlSqlParser::Type_declarationContext * /*ctx*/) override { }

  virtual void enterTable_type_def(PlSqlParser::Table_type_defContext * /*ctx*/) override { }
  virtual void exitTable_type_def(PlSqlParser::Table_type_defContext * /*ctx*/) override { }

  virtual void enterTable_indexed_by_part(PlSqlParser::Table_indexed_by_partContext * /*ctx*/) override { }
  virtual void exitTable_indexed_by_part(PlSqlParser::Table_indexed_by_partContext * /*ctx*/) override { }

  virtual void enterVarray_type_def(PlSqlParser::Varray_type_defContext * /*ctx*/) override { }
  virtual void exitVarray_type_def(PlSqlParser::Varray_type_defContext * /*ctx*/) override { }

  virtual void enterSeq_of_statements(PlSqlParser::Seq_of_statementsContext * /*ctx*/) override { }
  virtual void exitSeq_of_statements(PlSqlParser::Seq_of_statementsContext * /*ctx*/) override { }

  virtual void enterLabel_declaration(PlSqlParser::Label_declarationContext * /*ctx*/) override { }
  virtual void exitLabel_declaration(PlSqlParser::Label_declarationContext * /*ctx*/) override { }

  virtual void enterStatement(PlSqlParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(PlSqlParser::StatementContext * /*ctx*/) override { }

  virtual void enterSwallow_to_semi(PlSqlParser::Swallow_to_semiContext * /*ctx*/) override { }
  virtual void exitSwallow_to_semi(PlSqlParser::Swallow_to_semiContext * /*ctx*/) override { }

  virtual void enterAssignment_statement(PlSqlParser::Assignment_statementContext * /*ctx*/) override { }
  virtual void exitAssignment_statement(PlSqlParser::Assignment_statementContext * /*ctx*/) override { }

  virtual void enterContinue_statement(PlSqlParser::Continue_statementContext * /*ctx*/) override { }
  virtual void exitContinue_statement(PlSqlParser::Continue_statementContext * /*ctx*/) override { }

  virtual void enterExit_statement(PlSqlParser::Exit_statementContext * /*ctx*/) override { }
  virtual void exitExit_statement(PlSqlParser::Exit_statementContext * /*ctx*/) override { }

  virtual void enterGoto_statement(PlSqlParser::Goto_statementContext * /*ctx*/) override { }
  virtual void exitGoto_statement(PlSqlParser::Goto_statementContext * /*ctx*/) override { }

  virtual void enterIf_statement(PlSqlParser::If_statementContext * /*ctx*/) override { }
  virtual void exitIf_statement(PlSqlParser::If_statementContext * /*ctx*/) override { }

  virtual void enterElsif_part(PlSqlParser::Elsif_partContext * /*ctx*/) override { }
  virtual void exitElsif_part(PlSqlParser::Elsif_partContext * /*ctx*/) override { }

  virtual void enterElse_part(PlSqlParser::Else_partContext * /*ctx*/) override { }
  virtual void exitElse_part(PlSqlParser::Else_partContext * /*ctx*/) override { }

  virtual void enterLoop_statement(PlSqlParser::Loop_statementContext * /*ctx*/) override { }
  virtual void exitLoop_statement(PlSqlParser::Loop_statementContext * /*ctx*/) override { }

  virtual void enterCursor_loop_param(PlSqlParser::Cursor_loop_paramContext * /*ctx*/) override { }
  virtual void exitCursor_loop_param(PlSqlParser::Cursor_loop_paramContext * /*ctx*/) override { }

  virtual void enterForall_statement(PlSqlParser::Forall_statementContext * /*ctx*/) override { }
  virtual void exitForall_statement(PlSqlParser::Forall_statementContext * /*ctx*/) override { }

  virtual void enterBounds_clause(PlSqlParser::Bounds_clauseContext * /*ctx*/) override { }
  virtual void exitBounds_clause(PlSqlParser::Bounds_clauseContext * /*ctx*/) override { }

  virtual void enterBetween_bound(PlSqlParser::Between_boundContext * /*ctx*/) override { }
  virtual void exitBetween_bound(PlSqlParser::Between_boundContext * /*ctx*/) override { }

  virtual void enterLower_bound(PlSqlParser::Lower_boundContext * /*ctx*/) override { }
  virtual void exitLower_bound(PlSqlParser::Lower_boundContext * /*ctx*/) override { }

  virtual void enterUpper_bound(PlSqlParser::Upper_boundContext * /*ctx*/) override { }
  virtual void exitUpper_bound(PlSqlParser::Upper_boundContext * /*ctx*/) override { }

  virtual void enterNull_statement(PlSqlParser::Null_statementContext * /*ctx*/) override { }
  virtual void exitNull_statement(PlSqlParser::Null_statementContext * /*ctx*/) override { }

  virtual void enterRaise_statement(PlSqlParser::Raise_statementContext * /*ctx*/) override { }
  virtual void exitRaise_statement(PlSqlParser::Raise_statementContext * /*ctx*/) override { }

  virtual void enterReturn_statement(PlSqlParser::Return_statementContext * /*ctx*/) override { }
  virtual void exitReturn_statement(PlSqlParser::Return_statementContext * /*ctx*/) override { }

  virtual void enterFunction_call(PlSqlParser::Function_callContext * /*ctx*/) override { }
  virtual void exitFunction_call(PlSqlParser::Function_callContext * /*ctx*/) override { }

  virtual void enterProcedure_call(PlSqlParser::Procedure_callContext * /*ctx*/) override { }
  virtual void exitProcedure_call(PlSqlParser::Procedure_callContext * /*ctx*/) override { }

  virtual void enterPipe_row_statement(PlSqlParser::Pipe_row_statementContext * /*ctx*/) override { }
  virtual void exitPipe_row_statement(PlSqlParser::Pipe_row_statementContext * /*ctx*/) override { }

  virtual void enterBody(PlSqlParser::BodyContext * /*ctx*/) override { }
  virtual void exitBody(PlSqlParser::BodyContext * /*ctx*/) override { }

  virtual void enterException_handler(PlSqlParser::Exception_handlerContext * /*ctx*/) override { }
  virtual void exitException_handler(PlSqlParser::Exception_handlerContext * /*ctx*/) override { }

  virtual void enterTrigger_block(PlSqlParser::Trigger_blockContext * /*ctx*/) override { }
  virtual void exitTrigger_block(PlSqlParser::Trigger_blockContext * /*ctx*/) override { }

  virtual void enterBlock(PlSqlParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(PlSqlParser::BlockContext * /*ctx*/) override { }

  virtual void enterSql_statement(PlSqlParser::Sql_statementContext * /*ctx*/) override { }
  virtual void exitSql_statement(PlSqlParser::Sql_statementContext * /*ctx*/) override { }

  virtual void enterExecute_immediate(PlSqlParser::Execute_immediateContext * /*ctx*/) override { }
  virtual void exitExecute_immediate(PlSqlParser::Execute_immediateContext * /*ctx*/) override { }

  virtual void enterDynamic_returning_clause(PlSqlParser::Dynamic_returning_clauseContext * /*ctx*/) override { }
  virtual void exitDynamic_returning_clause(PlSqlParser::Dynamic_returning_clauseContext * /*ctx*/) override { }

  virtual void enterData_manipulation_language_statements(PlSqlParser::Data_manipulation_language_statementsContext * /*ctx*/) override { }
  virtual void exitData_manipulation_language_statements(PlSqlParser::Data_manipulation_language_statementsContext * /*ctx*/) override { }

  virtual void enterCursor_manipulation_statements(PlSqlParser::Cursor_manipulation_statementsContext * /*ctx*/) override { }
  virtual void exitCursor_manipulation_statements(PlSqlParser::Cursor_manipulation_statementsContext * /*ctx*/) override { }

  virtual void enterClose_statement(PlSqlParser::Close_statementContext * /*ctx*/) override { }
  virtual void exitClose_statement(PlSqlParser::Close_statementContext * /*ctx*/) override { }

  virtual void enterOpen_statement(PlSqlParser::Open_statementContext * /*ctx*/) override { }
  virtual void exitOpen_statement(PlSqlParser::Open_statementContext * /*ctx*/) override { }

  virtual void enterFetch_statement(PlSqlParser::Fetch_statementContext * /*ctx*/) override { }
  virtual void exitFetch_statement(PlSqlParser::Fetch_statementContext * /*ctx*/) override { }

  virtual void enterOpen_for_statement(PlSqlParser::Open_for_statementContext * /*ctx*/) override { }
  virtual void exitOpen_for_statement(PlSqlParser::Open_for_statementContext * /*ctx*/) override { }

  virtual void enterTransaction_control_statements(PlSqlParser::Transaction_control_statementsContext * /*ctx*/) override { }
  virtual void exitTransaction_control_statements(PlSqlParser::Transaction_control_statementsContext * /*ctx*/) override { }

  virtual void enterSet_transaction_command(PlSqlParser::Set_transaction_commandContext * /*ctx*/) override { }
  virtual void exitSet_transaction_command(PlSqlParser::Set_transaction_commandContext * /*ctx*/) override { }

  virtual void enterSet_constraint_command(PlSqlParser::Set_constraint_commandContext * /*ctx*/) override { }
  virtual void exitSet_constraint_command(PlSqlParser::Set_constraint_commandContext * /*ctx*/) override { }

  virtual void enterCommit_statement(PlSqlParser::Commit_statementContext * /*ctx*/) override { }
  virtual void exitCommit_statement(PlSqlParser::Commit_statementContext * /*ctx*/) override { }

  virtual void enterWrite_clause(PlSqlParser::Write_clauseContext * /*ctx*/) override { }
  virtual void exitWrite_clause(PlSqlParser::Write_clauseContext * /*ctx*/) override { }

  virtual void enterRollback_statement(PlSqlParser::Rollback_statementContext * /*ctx*/) override { }
  virtual void exitRollback_statement(PlSqlParser::Rollback_statementContext * /*ctx*/) override { }

  virtual void enterSavepoint_statement(PlSqlParser::Savepoint_statementContext * /*ctx*/) override { }
  virtual void exitSavepoint_statement(PlSqlParser::Savepoint_statementContext * /*ctx*/) override { }

  virtual void enterExplain_statement(PlSqlParser::Explain_statementContext * /*ctx*/) override { }
  virtual void exitExplain_statement(PlSqlParser::Explain_statementContext * /*ctx*/) override { }

  virtual void enterSelect_statement(PlSqlParser::Select_statementContext * /*ctx*/) override { }
  virtual void exitSelect_statement(PlSqlParser::Select_statementContext * /*ctx*/) override { }

  virtual void enterSubquery_factoring_clause(PlSqlParser::Subquery_factoring_clauseContext * /*ctx*/) override { }
  virtual void exitSubquery_factoring_clause(PlSqlParser::Subquery_factoring_clauseContext * /*ctx*/) override { }

  virtual void enterFactoring_element(PlSqlParser::Factoring_elementContext * /*ctx*/) override { }
  virtual void exitFactoring_element(PlSqlParser::Factoring_elementContext * /*ctx*/) override { }

  virtual void enterSearch_clause(PlSqlParser::Search_clauseContext * /*ctx*/) override { }
  virtual void exitSearch_clause(PlSqlParser::Search_clauseContext * /*ctx*/) override { }

  virtual void enterCycle_clause(PlSqlParser::Cycle_clauseContext * /*ctx*/) override { }
  virtual void exitCycle_clause(PlSqlParser::Cycle_clauseContext * /*ctx*/) override { }

  virtual void enterSubquery(PlSqlParser::SubqueryContext * /*ctx*/) override { }
  virtual void exitSubquery(PlSqlParser::SubqueryContext * /*ctx*/) override { }

  virtual void enterSubquery_basic_elements(PlSqlParser::Subquery_basic_elementsContext * /*ctx*/) override { }
  virtual void exitSubquery_basic_elements(PlSqlParser::Subquery_basic_elementsContext * /*ctx*/) override { }

  virtual void enterSubquery_operation_part(PlSqlParser::Subquery_operation_partContext * /*ctx*/) override { }
  virtual void exitSubquery_operation_part(PlSqlParser::Subquery_operation_partContext * /*ctx*/) override { }

  virtual void enterQuery_block(PlSqlParser::Query_blockContext * /*ctx*/) override { }
  virtual void exitQuery_block(PlSqlParser::Query_blockContext * /*ctx*/) override { }

  virtual void enterSelected_list(PlSqlParser::Selected_listContext * /*ctx*/) override { }
  virtual void exitSelected_list(PlSqlParser::Selected_listContext * /*ctx*/) override { }

  virtual void enterSelected_list_element(PlSqlParser::Selected_list_elementContext * /*ctx*/) override { }
  virtual void exitSelected_list_element(PlSqlParser::Selected_list_elementContext * /*ctx*/) override { }

  virtual void enterFrom_clause(PlSqlParser::From_clauseContext * /*ctx*/) override { }
  virtual void exitFrom_clause(PlSqlParser::From_clauseContext * /*ctx*/) override { }

  virtual void enterSelect_list_elements(PlSqlParser::Select_list_elementsContext * /*ctx*/) override { }
  virtual void exitSelect_list_elements(PlSqlParser::Select_list_elementsContext * /*ctx*/) override { }

  virtual void enterTable_ref_list(PlSqlParser::Table_ref_listContext * /*ctx*/) override { }
  virtual void exitTable_ref_list(PlSqlParser::Table_ref_listContext * /*ctx*/) override { }

  virtual void enterTable_ref(PlSqlParser::Table_refContext * /*ctx*/) override { }
  virtual void exitTable_ref(PlSqlParser::Table_refContext * /*ctx*/) override { }

  virtual void enterTable_ref_aux(PlSqlParser::Table_ref_auxContext * /*ctx*/) override { }
  virtual void exitTable_ref_aux(PlSqlParser::Table_ref_auxContext * /*ctx*/) override { }

  virtual void enterTable_ref_aux_internal_one(PlSqlParser::Table_ref_aux_internal_oneContext * /*ctx*/) override { }
  virtual void exitTable_ref_aux_internal_one(PlSqlParser::Table_ref_aux_internal_oneContext * /*ctx*/) override { }

  virtual void enterTable_ref_aux_internal_two(PlSqlParser::Table_ref_aux_internal_twoContext * /*ctx*/) override { }
  virtual void exitTable_ref_aux_internal_two(PlSqlParser::Table_ref_aux_internal_twoContext * /*ctx*/) override { }

  virtual void enterTable_ref_aux_internal_three(PlSqlParser::Table_ref_aux_internal_threeContext * /*ctx*/) override { }
  virtual void exitTable_ref_aux_internal_three(PlSqlParser::Table_ref_aux_internal_threeContext * /*ctx*/) override { }

  virtual void enterJoin_clause(PlSqlParser::Join_clauseContext * /*ctx*/) override { }
  virtual void exitJoin_clause(PlSqlParser::Join_clauseContext * /*ctx*/) override { }

  virtual void enterJoin_on_part(PlSqlParser::Join_on_partContext * /*ctx*/) override { }
  virtual void exitJoin_on_part(PlSqlParser::Join_on_partContext * /*ctx*/) override { }

  virtual void enterJoin_using_part(PlSqlParser::Join_using_partContext * /*ctx*/) override { }
  virtual void exitJoin_using_part(PlSqlParser::Join_using_partContext * /*ctx*/) override { }

  virtual void enterOuter_join_type(PlSqlParser::Outer_join_typeContext * /*ctx*/) override { }
  virtual void exitOuter_join_type(PlSqlParser::Outer_join_typeContext * /*ctx*/) override { }

  virtual void enterQuery_partition_clause(PlSqlParser::Query_partition_clauseContext * /*ctx*/) override { }
  virtual void exitQuery_partition_clause(PlSqlParser::Query_partition_clauseContext * /*ctx*/) override { }

  virtual void enterFlashback_query_clause(PlSqlParser::Flashback_query_clauseContext * /*ctx*/) override { }
  virtual void exitFlashback_query_clause(PlSqlParser::Flashback_query_clauseContext * /*ctx*/) override { }

  virtual void enterPivot_clause(PlSqlParser::Pivot_clauseContext * /*ctx*/) override { }
  virtual void exitPivot_clause(PlSqlParser::Pivot_clauseContext * /*ctx*/) override { }

  virtual void enterPivot_element(PlSqlParser::Pivot_elementContext * /*ctx*/) override { }
  virtual void exitPivot_element(PlSqlParser::Pivot_elementContext * /*ctx*/) override { }

  virtual void enterPivot_for_clause(PlSqlParser::Pivot_for_clauseContext * /*ctx*/) override { }
  virtual void exitPivot_for_clause(PlSqlParser::Pivot_for_clauseContext * /*ctx*/) override { }

  virtual void enterPivot_in_clause(PlSqlParser::Pivot_in_clauseContext * /*ctx*/) override { }
  virtual void exitPivot_in_clause(PlSqlParser::Pivot_in_clauseContext * /*ctx*/) override { }

  virtual void enterPivot_in_clause_element(PlSqlParser::Pivot_in_clause_elementContext * /*ctx*/) override { }
  virtual void exitPivot_in_clause_element(PlSqlParser::Pivot_in_clause_elementContext * /*ctx*/) override { }

  virtual void enterPivot_in_clause_elements(PlSqlParser::Pivot_in_clause_elementsContext * /*ctx*/) override { }
  virtual void exitPivot_in_clause_elements(PlSqlParser::Pivot_in_clause_elementsContext * /*ctx*/) override { }

  virtual void enterUnpivot_clause(PlSqlParser::Unpivot_clauseContext * /*ctx*/) override { }
  virtual void exitUnpivot_clause(PlSqlParser::Unpivot_clauseContext * /*ctx*/) override { }

  virtual void enterUnpivot_in_clause(PlSqlParser::Unpivot_in_clauseContext * /*ctx*/) override { }
  virtual void exitUnpivot_in_clause(PlSqlParser::Unpivot_in_clauseContext * /*ctx*/) override { }

  virtual void enterUnpivot_in_elements(PlSqlParser::Unpivot_in_elementsContext * /*ctx*/) override { }
  virtual void exitUnpivot_in_elements(PlSqlParser::Unpivot_in_elementsContext * /*ctx*/) override { }

  virtual void enterHierarchical_query_clause(PlSqlParser::Hierarchical_query_clauseContext * /*ctx*/) override { }
  virtual void exitHierarchical_query_clause(PlSqlParser::Hierarchical_query_clauseContext * /*ctx*/) override { }

  virtual void enterStart_part(PlSqlParser::Start_partContext * /*ctx*/) override { }
  virtual void exitStart_part(PlSqlParser::Start_partContext * /*ctx*/) override { }

  virtual void enterGroup_by_clause(PlSqlParser::Group_by_clauseContext * /*ctx*/) override { }
  virtual void exitGroup_by_clause(PlSqlParser::Group_by_clauseContext * /*ctx*/) override { }

  virtual void enterGroup_by_elements(PlSqlParser::Group_by_elementsContext * /*ctx*/) override { }
  virtual void exitGroup_by_elements(PlSqlParser::Group_by_elementsContext * /*ctx*/) override { }

  virtual void enterRollup_cube_clause(PlSqlParser::Rollup_cube_clauseContext * /*ctx*/) override { }
  virtual void exitRollup_cube_clause(PlSqlParser::Rollup_cube_clauseContext * /*ctx*/) override { }

  virtual void enterGrouping_sets_clause(PlSqlParser::Grouping_sets_clauseContext * /*ctx*/) override { }
  virtual void exitGrouping_sets_clause(PlSqlParser::Grouping_sets_clauseContext * /*ctx*/) override { }

  virtual void enterGrouping_sets_elements(PlSqlParser::Grouping_sets_elementsContext * /*ctx*/) override { }
  virtual void exitGrouping_sets_elements(PlSqlParser::Grouping_sets_elementsContext * /*ctx*/) override { }

  virtual void enterHaving_clause(PlSqlParser::Having_clauseContext * /*ctx*/) override { }
  virtual void exitHaving_clause(PlSqlParser::Having_clauseContext * /*ctx*/) override { }

  virtual void enterModel_clause(PlSqlParser::Model_clauseContext * /*ctx*/) override { }
  virtual void exitModel_clause(PlSqlParser::Model_clauseContext * /*ctx*/) override { }

  virtual void enterCell_reference_options(PlSqlParser::Cell_reference_optionsContext * /*ctx*/) override { }
  virtual void exitCell_reference_options(PlSqlParser::Cell_reference_optionsContext * /*ctx*/) override { }

  virtual void enterReturn_rows_clause(PlSqlParser::Return_rows_clauseContext * /*ctx*/) override { }
  virtual void exitReturn_rows_clause(PlSqlParser::Return_rows_clauseContext * /*ctx*/) override { }

  virtual void enterReference_model(PlSqlParser::Reference_modelContext * /*ctx*/) override { }
  virtual void exitReference_model(PlSqlParser::Reference_modelContext * /*ctx*/) override { }

  virtual void enterMain_model(PlSqlParser::Main_modelContext * /*ctx*/) override { }
  virtual void exitMain_model(PlSqlParser::Main_modelContext * /*ctx*/) override { }

  virtual void enterModel_column_clauses(PlSqlParser::Model_column_clausesContext * /*ctx*/) override { }
  virtual void exitModel_column_clauses(PlSqlParser::Model_column_clausesContext * /*ctx*/) override { }

  virtual void enterModel_column_partition_part(PlSqlParser::Model_column_partition_partContext * /*ctx*/) override { }
  virtual void exitModel_column_partition_part(PlSqlParser::Model_column_partition_partContext * /*ctx*/) override { }

  virtual void enterModel_column_list(PlSqlParser::Model_column_listContext * /*ctx*/) override { }
  virtual void exitModel_column_list(PlSqlParser::Model_column_listContext * /*ctx*/) override { }

  virtual void enterModel_column(PlSqlParser::Model_columnContext * /*ctx*/) override { }
  virtual void exitModel_column(PlSqlParser::Model_columnContext * /*ctx*/) override { }

  virtual void enterModel_rules_clause(PlSqlParser::Model_rules_clauseContext * /*ctx*/) override { }
  virtual void exitModel_rules_clause(PlSqlParser::Model_rules_clauseContext * /*ctx*/) override { }

  virtual void enterModel_rules_part(PlSqlParser::Model_rules_partContext * /*ctx*/) override { }
  virtual void exitModel_rules_part(PlSqlParser::Model_rules_partContext * /*ctx*/) override { }

  virtual void enterModel_rules_element(PlSqlParser::Model_rules_elementContext * /*ctx*/) override { }
  virtual void exitModel_rules_element(PlSqlParser::Model_rules_elementContext * /*ctx*/) override { }

  virtual void enterCell_assignment(PlSqlParser::Cell_assignmentContext * /*ctx*/) override { }
  virtual void exitCell_assignment(PlSqlParser::Cell_assignmentContext * /*ctx*/) override { }

  virtual void enterModel_iterate_clause(PlSqlParser::Model_iterate_clauseContext * /*ctx*/) override { }
  virtual void exitModel_iterate_clause(PlSqlParser::Model_iterate_clauseContext * /*ctx*/) override { }

  virtual void enterUntil_part(PlSqlParser::Until_partContext * /*ctx*/) override { }
  virtual void exitUntil_part(PlSqlParser::Until_partContext * /*ctx*/) override { }

  virtual void enterOrder_by_clause(PlSqlParser::Order_by_clauseContext * /*ctx*/) override { }
  virtual void exitOrder_by_clause(PlSqlParser::Order_by_clauseContext * /*ctx*/) override { }

  virtual void enterOrder_by_elements(PlSqlParser::Order_by_elementsContext * /*ctx*/) override { }
  virtual void exitOrder_by_elements(PlSqlParser::Order_by_elementsContext * /*ctx*/) override { }

  virtual void enterOffset_clause(PlSqlParser::Offset_clauseContext * /*ctx*/) override { }
  virtual void exitOffset_clause(PlSqlParser::Offset_clauseContext * /*ctx*/) override { }

  virtual void enterFetch_clause(PlSqlParser::Fetch_clauseContext * /*ctx*/) override { }
  virtual void exitFetch_clause(PlSqlParser::Fetch_clauseContext * /*ctx*/) override { }

  virtual void enterFor_update_clause(PlSqlParser::For_update_clauseContext * /*ctx*/) override { }
  virtual void exitFor_update_clause(PlSqlParser::For_update_clauseContext * /*ctx*/) override { }

  virtual void enterFor_update_of_part(PlSqlParser::For_update_of_partContext * /*ctx*/) override { }
  virtual void exitFor_update_of_part(PlSqlParser::For_update_of_partContext * /*ctx*/) override { }

  virtual void enterFor_update_options(PlSqlParser::For_update_optionsContext * /*ctx*/) override { }
  virtual void exitFor_update_options(PlSqlParser::For_update_optionsContext * /*ctx*/) override { }

  virtual void enterUpdate_statement(PlSqlParser::Update_statementContext * /*ctx*/) override { }
  virtual void exitUpdate_statement(PlSqlParser::Update_statementContext * /*ctx*/) override { }

  virtual void enterUpdate_set_clause(PlSqlParser::Update_set_clauseContext * /*ctx*/) override { }
  virtual void exitUpdate_set_clause(PlSqlParser::Update_set_clauseContext * /*ctx*/) override { }

  virtual void enterColumn_based_update_set_clause(PlSqlParser::Column_based_update_set_clauseContext * /*ctx*/) override { }
  virtual void exitColumn_based_update_set_clause(PlSqlParser::Column_based_update_set_clauseContext * /*ctx*/) override { }

  virtual void enterDelete_statement(PlSqlParser::Delete_statementContext * /*ctx*/) override { }
  virtual void exitDelete_statement(PlSqlParser::Delete_statementContext * /*ctx*/) override { }

  virtual void enterInsert_statement(PlSqlParser::Insert_statementContext * /*ctx*/) override { }
  virtual void exitInsert_statement(PlSqlParser::Insert_statementContext * /*ctx*/) override { }

  virtual void enterSingle_table_insert(PlSqlParser::Single_table_insertContext * /*ctx*/) override { }
  virtual void exitSingle_table_insert(PlSqlParser::Single_table_insertContext * /*ctx*/) override { }

  virtual void enterMulti_table_insert(PlSqlParser::Multi_table_insertContext * /*ctx*/) override { }
  virtual void exitMulti_table_insert(PlSqlParser::Multi_table_insertContext * /*ctx*/) override { }

  virtual void enterMulti_table_element(PlSqlParser::Multi_table_elementContext * /*ctx*/) override { }
  virtual void exitMulti_table_element(PlSqlParser::Multi_table_elementContext * /*ctx*/) override { }

  virtual void enterConditional_insert_clause(PlSqlParser::Conditional_insert_clauseContext * /*ctx*/) override { }
  virtual void exitConditional_insert_clause(PlSqlParser::Conditional_insert_clauseContext * /*ctx*/) override { }

  virtual void enterConditional_insert_when_part(PlSqlParser::Conditional_insert_when_partContext * /*ctx*/) override { }
  virtual void exitConditional_insert_when_part(PlSqlParser::Conditional_insert_when_partContext * /*ctx*/) override { }

  virtual void enterConditional_insert_else_part(PlSqlParser::Conditional_insert_else_partContext * /*ctx*/) override { }
  virtual void exitConditional_insert_else_part(PlSqlParser::Conditional_insert_else_partContext * /*ctx*/) override { }

  virtual void enterInsert_into_clause(PlSqlParser::Insert_into_clauseContext * /*ctx*/) override { }
  virtual void exitInsert_into_clause(PlSqlParser::Insert_into_clauseContext * /*ctx*/) override { }

  virtual void enterValues_clause(PlSqlParser::Values_clauseContext * /*ctx*/) override { }
  virtual void exitValues_clause(PlSqlParser::Values_clauseContext * /*ctx*/) override { }

  virtual void enterMerge_statement(PlSqlParser::Merge_statementContext * /*ctx*/) override { }
  virtual void exitMerge_statement(PlSqlParser::Merge_statementContext * /*ctx*/) override { }

  virtual void enterMerge_update_clause(PlSqlParser::Merge_update_clauseContext * /*ctx*/) override { }
  virtual void exitMerge_update_clause(PlSqlParser::Merge_update_clauseContext * /*ctx*/) override { }

  virtual void enterMerge_element(PlSqlParser::Merge_elementContext * /*ctx*/) override { }
  virtual void exitMerge_element(PlSqlParser::Merge_elementContext * /*ctx*/) override { }

  virtual void enterMerge_update_delete_part(PlSqlParser::Merge_update_delete_partContext * /*ctx*/) override { }
  virtual void exitMerge_update_delete_part(PlSqlParser::Merge_update_delete_partContext * /*ctx*/) override { }

  virtual void enterMerge_insert_clause(PlSqlParser::Merge_insert_clauseContext * /*ctx*/) override { }
  virtual void exitMerge_insert_clause(PlSqlParser::Merge_insert_clauseContext * /*ctx*/) override { }

  virtual void enterSelected_tableview(PlSqlParser::Selected_tableviewContext * /*ctx*/) override { }
  virtual void exitSelected_tableview(PlSqlParser::Selected_tableviewContext * /*ctx*/) override { }

  virtual void enterLock_table_statement(PlSqlParser::Lock_table_statementContext * /*ctx*/) override { }
  virtual void exitLock_table_statement(PlSqlParser::Lock_table_statementContext * /*ctx*/) override { }

  virtual void enterWait_nowait_part(PlSqlParser::Wait_nowait_partContext * /*ctx*/) override { }
  virtual void exitWait_nowait_part(PlSqlParser::Wait_nowait_partContext * /*ctx*/) override { }

  virtual void enterLock_table_element(PlSqlParser::Lock_table_elementContext * /*ctx*/) override { }
  virtual void exitLock_table_element(PlSqlParser::Lock_table_elementContext * /*ctx*/) override { }

  virtual void enterLock_mode(PlSqlParser::Lock_modeContext * /*ctx*/) override { }
  virtual void exitLock_mode(PlSqlParser::Lock_modeContext * /*ctx*/) override { }

  virtual void enterGeneral_table_ref(PlSqlParser::General_table_refContext * /*ctx*/) override { }
  virtual void exitGeneral_table_ref(PlSqlParser::General_table_refContext * /*ctx*/) override { }

  virtual void enterStatic_returning_clause(PlSqlParser::Static_returning_clauseContext * /*ctx*/) override { }
  virtual void exitStatic_returning_clause(PlSqlParser::Static_returning_clauseContext * /*ctx*/) override { }

  virtual void enterError_logging_clause(PlSqlParser::Error_logging_clauseContext * /*ctx*/) override { }
  virtual void exitError_logging_clause(PlSqlParser::Error_logging_clauseContext * /*ctx*/) override { }

  virtual void enterError_logging_into_part(PlSqlParser::Error_logging_into_partContext * /*ctx*/) override { }
  virtual void exitError_logging_into_part(PlSqlParser::Error_logging_into_partContext * /*ctx*/) override { }

  virtual void enterError_logging_reject_part(PlSqlParser::Error_logging_reject_partContext * /*ctx*/) override { }
  virtual void exitError_logging_reject_part(PlSqlParser::Error_logging_reject_partContext * /*ctx*/) override { }

  virtual void enterDml_table_expression_clause(PlSqlParser::Dml_table_expression_clauseContext * /*ctx*/) override { }
  virtual void exitDml_table_expression_clause(PlSqlParser::Dml_table_expression_clauseContext * /*ctx*/) override { }

  virtual void enterTable_collection_expression(PlSqlParser::Table_collection_expressionContext * /*ctx*/) override { }
  virtual void exitTable_collection_expression(PlSqlParser::Table_collection_expressionContext * /*ctx*/) override { }

  virtual void enterSubquery_restriction_clause(PlSqlParser::Subquery_restriction_clauseContext * /*ctx*/) override { }
  virtual void exitSubquery_restriction_clause(PlSqlParser::Subquery_restriction_clauseContext * /*ctx*/) override { }

  virtual void enterSample_clause(PlSqlParser::Sample_clauseContext * /*ctx*/) override { }
  virtual void exitSample_clause(PlSqlParser::Sample_clauseContext * /*ctx*/) override { }

  virtual void enterSeed_part(PlSqlParser::Seed_partContext * /*ctx*/) override { }
  virtual void exitSeed_part(PlSqlParser::Seed_partContext * /*ctx*/) override { }

  virtual void enterCondition(PlSqlParser::ConditionContext * /*ctx*/) override { }
  virtual void exitCondition(PlSqlParser::ConditionContext * /*ctx*/) override { }

  virtual void enterExpressions(PlSqlParser::ExpressionsContext * /*ctx*/) override { }
  virtual void exitExpressions(PlSqlParser::ExpressionsContext * /*ctx*/) override { }

  virtual void enterExpression(PlSqlParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(PlSqlParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterCursor_expression(PlSqlParser::Cursor_expressionContext * /*ctx*/) override { }
  virtual void exitCursor_expression(PlSqlParser::Cursor_expressionContext * /*ctx*/) override { }

  virtual void enterLogical_expression(PlSqlParser::Logical_expressionContext * /*ctx*/) override { }
  virtual void exitLogical_expression(PlSqlParser::Logical_expressionContext * /*ctx*/) override { }

  virtual void enterMultiset_expression(PlSqlParser::Multiset_expressionContext * /*ctx*/) override { }
  virtual void exitMultiset_expression(PlSqlParser::Multiset_expressionContext * /*ctx*/) override { }

  virtual void enterRelational_expression(PlSqlParser::Relational_expressionContext * /*ctx*/) override { }
  virtual void exitRelational_expression(PlSqlParser::Relational_expressionContext * /*ctx*/) override { }

  virtual void enterCompound_expression(PlSqlParser::Compound_expressionContext * /*ctx*/) override { }
  virtual void exitCompound_expression(PlSqlParser::Compound_expressionContext * /*ctx*/) override { }

  virtual void enterRelational_operator(PlSqlParser::Relational_operatorContext * /*ctx*/) override { }
  virtual void exitRelational_operator(PlSqlParser::Relational_operatorContext * /*ctx*/) override { }

  virtual void enterIn_elements(PlSqlParser::In_elementsContext * /*ctx*/) override { }
  virtual void exitIn_elements(PlSqlParser::In_elementsContext * /*ctx*/) override { }

  virtual void enterBetween_elements(PlSqlParser::Between_elementsContext * /*ctx*/) override { }
  virtual void exitBetween_elements(PlSqlParser::Between_elementsContext * /*ctx*/) override { }

  virtual void enterConcatenation(PlSqlParser::ConcatenationContext * /*ctx*/) override { }
  virtual void exitConcatenation(PlSqlParser::ConcatenationContext * /*ctx*/) override { }

  virtual void enterInterval_expression(PlSqlParser::Interval_expressionContext * /*ctx*/) override { }
  virtual void exitInterval_expression(PlSqlParser::Interval_expressionContext * /*ctx*/) override { }

  virtual void enterModel_expression(PlSqlParser::Model_expressionContext * /*ctx*/) override { }
  virtual void exitModel_expression(PlSqlParser::Model_expressionContext * /*ctx*/) override { }

  virtual void enterModel_expression_element(PlSqlParser::Model_expression_elementContext * /*ctx*/) override { }
  virtual void exitModel_expression_element(PlSqlParser::Model_expression_elementContext * /*ctx*/) override { }

  virtual void enterSingle_column_for_loop(PlSqlParser::Single_column_for_loopContext * /*ctx*/) override { }
  virtual void exitSingle_column_for_loop(PlSqlParser::Single_column_for_loopContext * /*ctx*/) override { }

  virtual void enterMulti_column_for_loop(PlSqlParser::Multi_column_for_loopContext * /*ctx*/) override { }
  virtual void exitMulti_column_for_loop(PlSqlParser::Multi_column_for_loopContext * /*ctx*/) override { }

  virtual void enterUnary_expression(PlSqlParser::Unary_expressionContext * /*ctx*/) override { }
  virtual void exitUnary_expression(PlSqlParser::Unary_expressionContext * /*ctx*/) override { }

  virtual void enterCase_statement(PlSqlParser::Case_statementContext * /*ctx*/) override { }
  virtual void exitCase_statement(PlSqlParser::Case_statementContext * /*ctx*/) override { }

  virtual void enterSimple_case_statement(PlSqlParser::Simple_case_statementContext * /*ctx*/) override { }
  virtual void exitSimple_case_statement(PlSqlParser::Simple_case_statementContext * /*ctx*/) override { }

  virtual void enterSimple_case_when_part(PlSqlParser::Simple_case_when_partContext * /*ctx*/) override { }
  virtual void exitSimple_case_when_part(PlSqlParser::Simple_case_when_partContext * /*ctx*/) override { }

  virtual void enterSearched_case_statement(PlSqlParser::Searched_case_statementContext * /*ctx*/) override { }
  virtual void exitSearched_case_statement(PlSqlParser::Searched_case_statementContext * /*ctx*/) override { }

  virtual void enterSearched_case_when_part(PlSqlParser::Searched_case_when_partContext * /*ctx*/) override { }
  virtual void exitSearched_case_when_part(PlSqlParser::Searched_case_when_partContext * /*ctx*/) override { }

  virtual void enterCase_else_part(PlSqlParser::Case_else_partContext * /*ctx*/) override { }
  virtual void exitCase_else_part(PlSqlParser::Case_else_partContext * /*ctx*/) override { }

  virtual void enterAtom(PlSqlParser::AtomContext * /*ctx*/) override { }
  virtual void exitAtom(PlSqlParser::AtomContext * /*ctx*/) override { }

  virtual void enterQuantified_expression(PlSqlParser::Quantified_expressionContext * /*ctx*/) override { }
  virtual void exitQuantified_expression(PlSqlParser::Quantified_expressionContext * /*ctx*/) override { }

  virtual void enterString_function(PlSqlParser::String_functionContext * /*ctx*/) override { }
  virtual void exitString_function(PlSqlParser::String_functionContext * /*ctx*/) override { }

  virtual void enterStandard_function(PlSqlParser::Standard_functionContext * /*ctx*/) override { }
  virtual void exitStandard_function(PlSqlParser::Standard_functionContext * /*ctx*/) override { }

  virtual void enterLiteral(PlSqlParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(PlSqlParser::LiteralContext * /*ctx*/) override { }

  virtual void enterNumeric_function_wrapper(PlSqlParser::Numeric_function_wrapperContext * /*ctx*/) override { }
  virtual void exitNumeric_function_wrapper(PlSqlParser::Numeric_function_wrapperContext * /*ctx*/) override { }

  virtual void enterNumeric_function(PlSqlParser::Numeric_functionContext * /*ctx*/) override { }
  virtual void exitNumeric_function(PlSqlParser::Numeric_functionContext * /*ctx*/) override { }

  virtual void enterOther_function(PlSqlParser::Other_functionContext * /*ctx*/) override { }
  virtual void exitOther_function(PlSqlParser::Other_functionContext * /*ctx*/) override { }

  virtual void enterOver_clause_keyword(PlSqlParser::Over_clause_keywordContext * /*ctx*/) override { }
  virtual void exitOver_clause_keyword(PlSqlParser::Over_clause_keywordContext * /*ctx*/) override { }

  virtual void enterWithin_or_over_clause_keyword(PlSqlParser::Within_or_over_clause_keywordContext * /*ctx*/) override { }
  virtual void exitWithin_or_over_clause_keyword(PlSqlParser::Within_or_over_clause_keywordContext * /*ctx*/) override { }

  virtual void enterStandard_prediction_function_keyword(PlSqlParser::Standard_prediction_function_keywordContext * /*ctx*/) override { }
  virtual void exitStandard_prediction_function_keyword(PlSqlParser::Standard_prediction_function_keywordContext * /*ctx*/) override { }

  virtual void enterOver_clause(PlSqlParser::Over_clauseContext * /*ctx*/) override { }
  virtual void exitOver_clause(PlSqlParser::Over_clauseContext * /*ctx*/) override { }

  virtual void enterWindowing_clause(PlSqlParser::Windowing_clauseContext * /*ctx*/) override { }
  virtual void exitWindowing_clause(PlSqlParser::Windowing_clauseContext * /*ctx*/) override { }

  virtual void enterWindowing_type(PlSqlParser::Windowing_typeContext * /*ctx*/) override { }
  virtual void exitWindowing_type(PlSqlParser::Windowing_typeContext * /*ctx*/) override { }

  virtual void enterWindowing_elements(PlSqlParser::Windowing_elementsContext * /*ctx*/) override { }
  virtual void exitWindowing_elements(PlSqlParser::Windowing_elementsContext * /*ctx*/) override { }

  virtual void enterUsing_clause(PlSqlParser::Using_clauseContext * /*ctx*/) override { }
  virtual void exitUsing_clause(PlSqlParser::Using_clauseContext * /*ctx*/) override { }

  virtual void enterUsing_element(PlSqlParser::Using_elementContext * /*ctx*/) override { }
  virtual void exitUsing_element(PlSqlParser::Using_elementContext * /*ctx*/) override { }

  virtual void enterCollect_order_by_part(PlSqlParser::Collect_order_by_partContext * /*ctx*/) override { }
  virtual void exitCollect_order_by_part(PlSqlParser::Collect_order_by_partContext * /*ctx*/) override { }

  virtual void enterWithin_or_over_part(PlSqlParser::Within_or_over_partContext * /*ctx*/) override { }
  virtual void exitWithin_or_over_part(PlSqlParser::Within_or_over_partContext * /*ctx*/) override { }

  virtual void enterCost_matrix_clause(PlSqlParser::Cost_matrix_clauseContext * /*ctx*/) override { }
  virtual void exitCost_matrix_clause(PlSqlParser::Cost_matrix_clauseContext * /*ctx*/) override { }

  virtual void enterXml_passing_clause(PlSqlParser::Xml_passing_clauseContext * /*ctx*/) override { }
  virtual void exitXml_passing_clause(PlSqlParser::Xml_passing_clauseContext * /*ctx*/) override { }

  virtual void enterXml_attributes_clause(PlSqlParser::Xml_attributes_clauseContext * /*ctx*/) override { }
  virtual void exitXml_attributes_clause(PlSqlParser::Xml_attributes_clauseContext * /*ctx*/) override { }

  virtual void enterXml_namespaces_clause(PlSqlParser::Xml_namespaces_clauseContext * /*ctx*/) override { }
  virtual void exitXml_namespaces_clause(PlSqlParser::Xml_namespaces_clauseContext * /*ctx*/) override { }

  virtual void enterXml_table_column(PlSqlParser::Xml_table_columnContext * /*ctx*/) override { }
  virtual void exitXml_table_column(PlSqlParser::Xml_table_columnContext * /*ctx*/) override { }

  virtual void enterXml_general_default_part(PlSqlParser::Xml_general_default_partContext * /*ctx*/) override { }
  virtual void exitXml_general_default_part(PlSqlParser::Xml_general_default_partContext * /*ctx*/) override { }

  virtual void enterXml_multiuse_expression_element(PlSqlParser::Xml_multiuse_expression_elementContext * /*ctx*/) override { }
  virtual void exitXml_multiuse_expression_element(PlSqlParser::Xml_multiuse_expression_elementContext * /*ctx*/) override { }

  virtual void enterXmlroot_param_version_part(PlSqlParser::Xmlroot_param_version_partContext * /*ctx*/) override { }
  virtual void exitXmlroot_param_version_part(PlSqlParser::Xmlroot_param_version_partContext * /*ctx*/) override { }

  virtual void enterXmlroot_param_standalone_part(PlSqlParser::Xmlroot_param_standalone_partContext * /*ctx*/) override { }
  virtual void exitXmlroot_param_standalone_part(PlSqlParser::Xmlroot_param_standalone_partContext * /*ctx*/) override { }

  virtual void enterXmlserialize_param_enconding_part(PlSqlParser::Xmlserialize_param_enconding_partContext * /*ctx*/) override { }
  virtual void exitXmlserialize_param_enconding_part(PlSqlParser::Xmlserialize_param_enconding_partContext * /*ctx*/) override { }

  virtual void enterXmlserialize_param_version_part(PlSqlParser::Xmlserialize_param_version_partContext * /*ctx*/) override { }
  virtual void exitXmlserialize_param_version_part(PlSqlParser::Xmlserialize_param_version_partContext * /*ctx*/) override { }

  virtual void enterXmlserialize_param_ident_part(PlSqlParser::Xmlserialize_param_ident_partContext * /*ctx*/) override { }
  virtual void exitXmlserialize_param_ident_part(PlSqlParser::Xmlserialize_param_ident_partContext * /*ctx*/) override { }

  virtual void enterSql_plus_command(PlSqlParser::Sql_plus_commandContext * /*ctx*/) override { }
  virtual void exitSql_plus_command(PlSqlParser::Sql_plus_commandContext * /*ctx*/) override { }

  virtual void enterWhenever_command(PlSqlParser::Whenever_commandContext * /*ctx*/) override { }
  virtual void exitWhenever_command(PlSqlParser::Whenever_commandContext * /*ctx*/) override { }

  virtual void enterSet_command(PlSqlParser::Set_commandContext * /*ctx*/) override { }
  virtual void exitSet_command(PlSqlParser::Set_commandContext * /*ctx*/) override { }

  virtual void enterPartition_extension_clause(PlSqlParser::Partition_extension_clauseContext * /*ctx*/) override { }
  virtual void exitPartition_extension_clause(PlSqlParser::Partition_extension_clauseContext * /*ctx*/) override { }

  virtual void enterColumn_alias(PlSqlParser::Column_aliasContext * /*ctx*/) override { }
  virtual void exitColumn_alias(PlSqlParser::Column_aliasContext * /*ctx*/) override { }

  virtual void enterTable_alias(PlSqlParser::Table_aliasContext * /*ctx*/) override { }
  virtual void exitTable_alias(PlSqlParser::Table_aliasContext * /*ctx*/) override { }

  virtual void enterWhere_clause(PlSqlParser::Where_clauseContext * /*ctx*/) override { }
  virtual void exitWhere_clause(PlSqlParser::Where_clauseContext * /*ctx*/) override { }

  virtual void enterInto_clause(PlSqlParser::Into_clauseContext * /*ctx*/) override { }
  virtual void exitInto_clause(PlSqlParser::Into_clauseContext * /*ctx*/) override { }

  virtual void enterXml_column_name(PlSqlParser::Xml_column_nameContext * /*ctx*/) override { }
  virtual void exitXml_column_name(PlSqlParser::Xml_column_nameContext * /*ctx*/) override { }

  virtual void enterCost_class_name(PlSqlParser::Cost_class_nameContext * /*ctx*/) override { }
  virtual void exitCost_class_name(PlSqlParser::Cost_class_nameContext * /*ctx*/) override { }

  virtual void enterAttribute_name(PlSqlParser::Attribute_nameContext * /*ctx*/) override { }
  virtual void exitAttribute_name(PlSqlParser::Attribute_nameContext * /*ctx*/) override { }

  virtual void enterSavepoint_name(PlSqlParser::Savepoint_nameContext * /*ctx*/) override { }
  virtual void exitSavepoint_name(PlSqlParser::Savepoint_nameContext * /*ctx*/) override { }

  virtual void enterRollback_segment_name(PlSqlParser::Rollback_segment_nameContext * /*ctx*/) override { }
  virtual void exitRollback_segment_name(PlSqlParser::Rollback_segment_nameContext * /*ctx*/) override { }

  virtual void enterTable_var_name(PlSqlParser::Table_var_nameContext * /*ctx*/) override { }
  virtual void exitTable_var_name(PlSqlParser::Table_var_nameContext * /*ctx*/) override { }

  virtual void enterSchema_name(PlSqlParser::Schema_nameContext * /*ctx*/) override { }
  virtual void exitSchema_name(PlSqlParser::Schema_nameContext * /*ctx*/) override { }

  virtual void enterRoutine_name(PlSqlParser::Routine_nameContext * /*ctx*/) override { }
  virtual void exitRoutine_name(PlSqlParser::Routine_nameContext * /*ctx*/) override { }

  virtual void enterPackage_name(PlSqlParser::Package_nameContext * /*ctx*/) override { }
  virtual void exitPackage_name(PlSqlParser::Package_nameContext * /*ctx*/) override { }

  virtual void enterImplementation_type_name(PlSqlParser::Implementation_type_nameContext * /*ctx*/) override { }
  virtual void exitImplementation_type_name(PlSqlParser::Implementation_type_nameContext * /*ctx*/) override { }

  virtual void enterParameter_name(PlSqlParser::Parameter_nameContext * /*ctx*/) override { }
  virtual void exitParameter_name(PlSqlParser::Parameter_nameContext * /*ctx*/) override { }

  virtual void enterReference_model_name(PlSqlParser::Reference_model_nameContext * /*ctx*/) override { }
  virtual void exitReference_model_name(PlSqlParser::Reference_model_nameContext * /*ctx*/) override { }

  virtual void enterMain_model_name(PlSqlParser::Main_model_nameContext * /*ctx*/) override { }
  virtual void exitMain_model_name(PlSqlParser::Main_model_nameContext * /*ctx*/) override { }

  virtual void enterContainer_tableview_name(PlSqlParser::Container_tableview_nameContext * /*ctx*/) override { }
  virtual void exitContainer_tableview_name(PlSqlParser::Container_tableview_nameContext * /*ctx*/) override { }

  virtual void enterAggregate_function_name(PlSqlParser::Aggregate_function_nameContext * /*ctx*/) override { }
  virtual void exitAggregate_function_name(PlSqlParser::Aggregate_function_nameContext * /*ctx*/) override { }

  virtual void enterQuery_name(PlSqlParser::Query_nameContext * /*ctx*/) override { }
  virtual void exitQuery_name(PlSqlParser::Query_nameContext * /*ctx*/) override { }

  virtual void enterGrantee_name(PlSqlParser::Grantee_nameContext * /*ctx*/) override { }
  virtual void exitGrantee_name(PlSqlParser::Grantee_nameContext * /*ctx*/) override { }

  virtual void enterRole_name(PlSqlParser::Role_nameContext * /*ctx*/) override { }
  virtual void exitRole_name(PlSqlParser::Role_nameContext * /*ctx*/) override { }

  virtual void enterConstraint_name(PlSqlParser::Constraint_nameContext * /*ctx*/) override { }
  virtual void exitConstraint_name(PlSqlParser::Constraint_nameContext * /*ctx*/) override { }

  virtual void enterLabel_name(PlSqlParser::Label_nameContext * /*ctx*/) override { }
  virtual void exitLabel_name(PlSqlParser::Label_nameContext * /*ctx*/) override { }

  virtual void enterType_name(PlSqlParser::Type_nameContext * /*ctx*/) override { }
  virtual void exitType_name(PlSqlParser::Type_nameContext * /*ctx*/) override { }

  virtual void enterSequence_name(PlSqlParser::Sequence_nameContext * /*ctx*/) override { }
  virtual void exitSequence_name(PlSqlParser::Sequence_nameContext * /*ctx*/) override { }

  virtual void enterException_name(PlSqlParser::Exception_nameContext * /*ctx*/) override { }
  virtual void exitException_name(PlSqlParser::Exception_nameContext * /*ctx*/) override { }

  virtual void enterFunction_name(PlSqlParser::Function_nameContext * /*ctx*/) override { }
  virtual void exitFunction_name(PlSqlParser::Function_nameContext * /*ctx*/) override { }

  virtual void enterProcedure_name(PlSqlParser::Procedure_nameContext * /*ctx*/) override { }
  virtual void exitProcedure_name(PlSqlParser::Procedure_nameContext * /*ctx*/) override { }

  virtual void enterTrigger_name(PlSqlParser::Trigger_nameContext * /*ctx*/) override { }
  virtual void exitTrigger_name(PlSqlParser::Trigger_nameContext * /*ctx*/) override { }

  virtual void enterVariable_name(PlSqlParser::Variable_nameContext * /*ctx*/) override { }
  virtual void exitVariable_name(PlSqlParser::Variable_nameContext * /*ctx*/) override { }

  virtual void enterIndex_name(PlSqlParser::Index_nameContext * /*ctx*/) override { }
  virtual void exitIndex_name(PlSqlParser::Index_nameContext * /*ctx*/) override { }

  virtual void enterCursor_name(PlSqlParser::Cursor_nameContext * /*ctx*/) override { }
  virtual void exitCursor_name(PlSqlParser::Cursor_nameContext * /*ctx*/) override { }

  virtual void enterRecord_name(PlSqlParser::Record_nameContext * /*ctx*/) override { }
  virtual void exitRecord_name(PlSqlParser::Record_nameContext * /*ctx*/) override { }

  virtual void enterCollection_name(PlSqlParser::Collection_nameContext * /*ctx*/) override { }
  virtual void exitCollection_name(PlSqlParser::Collection_nameContext * /*ctx*/) override { }

  virtual void enterLink_name(PlSqlParser::Link_nameContext * /*ctx*/) override { }
  virtual void exitLink_name(PlSqlParser::Link_nameContext * /*ctx*/) override { }

  virtual void enterColumn_name(PlSqlParser::Column_nameContext * /*ctx*/) override { }
  virtual void exitColumn_name(PlSqlParser::Column_nameContext * /*ctx*/) override { }

  virtual void enterTableview_name(PlSqlParser::Tableview_nameContext * /*ctx*/) override { }
  virtual void exitTableview_name(PlSqlParser::Tableview_nameContext * /*ctx*/) override { }

  virtual void enterChar_set_name(PlSqlParser::Char_set_nameContext * /*ctx*/) override { }
  virtual void exitChar_set_name(PlSqlParser::Char_set_nameContext * /*ctx*/) override { }

  virtual void enterSynonym_name(PlSqlParser::Synonym_nameContext * /*ctx*/) override { }
  virtual void exitSynonym_name(PlSqlParser::Synonym_nameContext * /*ctx*/) override { }

  virtual void enterSchema_object_name(PlSqlParser::Schema_object_nameContext * /*ctx*/) override { }
  virtual void exitSchema_object_name(PlSqlParser::Schema_object_nameContext * /*ctx*/) override { }

  virtual void enterDir_object_name(PlSqlParser::Dir_object_nameContext * /*ctx*/) override { }
  virtual void exitDir_object_name(PlSqlParser::Dir_object_nameContext * /*ctx*/) override { }

  virtual void enterUser_object_name(PlSqlParser::User_object_nameContext * /*ctx*/) override { }
  virtual void exitUser_object_name(PlSqlParser::User_object_nameContext * /*ctx*/) override { }

  virtual void enterGrant_object_name(PlSqlParser::Grant_object_nameContext * /*ctx*/) override { }
  virtual void exitGrant_object_name(PlSqlParser::Grant_object_nameContext * /*ctx*/) override { }

  virtual void enterColumn_list(PlSqlParser::Column_listContext * /*ctx*/) override { }
  virtual void exitColumn_list(PlSqlParser::Column_listContext * /*ctx*/) override { }

  virtual void enterParen_column_list(PlSqlParser::Paren_column_listContext * /*ctx*/) override { }
  virtual void exitParen_column_list(PlSqlParser::Paren_column_listContext * /*ctx*/) override { }

  virtual void enterKeep_clause(PlSqlParser::Keep_clauseContext * /*ctx*/) override { }
  virtual void exitKeep_clause(PlSqlParser::Keep_clauseContext * /*ctx*/) override { }

  virtual void enterFunction_argument(PlSqlParser::Function_argumentContext * /*ctx*/) override { }
  virtual void exitFunction_argument(PlSqlParser::Function_argumentContext * /*ctx*/) override { }

  virtual void enterFunction_argument_analytic(PlSqlParser::Function_argument_analyticContext * /*ctx*/) override { }
  virtual void exitFunction_argument_analytic(PlSqlParser::Function_argument_analyticContext * /*ctx*/) override { }

  virtual void enterFunction_argument_modeling(PlSqlParser::Function_argument_modelingContext * /*ctx*/) override { }
  virtual void exitFunction_argument_modeling(PlSqlParser::Function_argument_modelingContext * /*ctx*/) override { }

  virtual void enterRespect_or_ignore_nulls(PlSqlParser::Respect_or_ignore_nullsContext * /*ctx*/) override { }
  virtual void exitRespect_or_ignore_nulls(PlSqlParser::Respect_or_ignore_nullsContext * /*ctx*/) override { }

  virtual void enterArgument(PlSqlParser::ArgumentContext * /*ctx*/) override { }
  virtual void exitArgument(PlSqlParser::ArgumentContext * /*ctx*/) override { }

  virtual void enterType_spec(PlSqlParser::Type_specContext * /*ctx*/) override { }
  virtual void exitType_spec(PlSqlParser::Type_specContext * /*ctx*/) override { }

  virtual void enterDatatype(PlSqlParser::DatatypeContext * /*ctx*/) override { }
  virtual void exitDatatype(PlSqlParser::DatatypeContext * /*ctx*/) override { }

  virtual void enterPrecision_part(PlSqlParser::Precision_partContext * /*ctx*/) override { }
  virtual void exitPrecision_part(PlSqlParser::Precision_partContext * /*ctx*/) override { }

  virtual void enterNative_datatype_element(PlSqlParser::Native_datatype_elementContext * /*ctx*/) override { }
  virtual void exitNative_datatype_element(PlSqlParser::Native_datatype_elementContext * /*ctx*/) override { }

  virtual void enterBind_variable(PlSqlParser::Bind_variableContext * /*ctx*/) override { }
  virtual void exitBind_variable(PlSqlParser::Bind_variableContext * /*ctx*/) override { }

  virtual void enterGeneral_element(PlSqlParser::General_elementContext * /*ctx*/) override { }
  virtual void exitGeneral_element(PlSqlParser::General_elementContext * /*ctx*/) override { }

  virtual void enterGeneral_element_part(PlSqlParser::General_element_partContext * /*ctx*/) override { }
  virtual void exitGeneral_element_part(PlSqlParser::General_element_partContext * /*ctx*/) override { }

  virtual void enterTable_element(PlSqlParser::Table_elementContext * /*ctx*/) override { }
  virtual void exitTable_element(PlSqlParser::Table_elementContext * /*ctx*/) override { }

  virtual void enterObject_privilege(PlSqlParser::Object_privilegeContext * /*ctx*/) override { }
  virtual void exitObject_privilege(PlSqlParser::Object_privilegeContext * /*ctx*/) override { }

  virtual void enterSystem_privilege(PlSqlParser::System_privilegeContext * /*ctx*/) override { }
  virtual void exitSystem_privilege(PlSqlParser::System_privilegeContext * /*ctx*/) override { }

  virtual void enterConstant(PlSqlParser::ConstantContext * /*ctx*/) override { }
  virtual void exitConstant(PlSqlParser::ConstantContext * /*ctx*/) override { }

  virtual void enterNumeric(PlSqlParser::NumericContext * /*ctx*/) override { }
  virtual void exitNumeric(PlSqlParser::NumericContext * /*ctx*/) override { }

  virtual void enterNumeric_negative(PlSqlParser::Numeric_negativeContext * /*ctx*/) override { }
  virtual void exitNumeric_negative(PlSqlParser::Numeric_negativeContext * /*ctx*/) override { }

  virtual void enterQuoted_string(PlSqlParser::Quoted_stringContext * /*ctx*/) override { }
  virtual void exitQuoted_string(PlSqlParser::Quoted_stringContext * /*ctx*/) override { }

  virtual void enterIdentifier(PlSqlParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(PlSqlParser::IdentifierContext * /*ctx*/) override { }

  virtual void enterId_expression(PlSqlParser::Id_expressionContext * /*ctx*/) override { }
  virtual void exitId_expression(PlSqlParser::Id_expressionContext * /*ctx*/) override { }

  virtual void enterOuter_join_sign(PlSqlParser::Outer_join_signContext * /*ctx*/) override { }
  virtual void exitOuter_join_sign(PlSqlParser::Outer_join_signContext * /*ctx*/) override { }

  virtual void enterRegular_id(PlSqlParser::Regular_idContext * /*ctx*/) override { }
  virtual void exitRegular_id(PlSqlParser::Regular_idContext * /*ctx*/) override { }

  virtual void enterNon_reserved_keywords_in_12c(PlSqlParser::Non_reserved_keywords_in_12cContext * /*ctx*/) override { }
  virtual void exitNon_reserved_keywords_in_12c(PlSqlParser::Non_reserved_keywords_in_12cContext * /*ctx*/) override { }

  virtual void enterNon_reserved_keywords_pre12c(PlSqlParser::Non_reserved_keywords_pre12cContext * /*ctx*/) override { }
  virtual void exitNon_reserved_keywords_pre12c(PlSqlParser::Non_reserved_keywords_pre12cContext * /*ctx*/) override { }

  virtual void enterString_function_name(PlSqlParser::String_function_nameContext * /*ctx*/) override { }
  virtual void exitString_function_name(PlSqlParser::String_function_nameContext * /*ctx*/) override { }

  virtual void enterNumeric_function_name(PlSqlParser::Numeric_function_nameContext * /*ctx*/) override { }
  virtual void exitNumeric_function_name(PlSqlParser::Numeric_function_nameContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace oracle

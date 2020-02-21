parser grammar Gauss200Parser;

options {
    tokenVocab = Gauss200Lexer;
}

// ;
// select 1;;;
stmtblock
    :  stmtmulti EOF
    ;

stmtmulti
    : stmt (SEMICOLON stmt)* 
    ;

stmt
    : gs_stmt? SEMICOLON
    ;

gs_stmt
    : abort_stmt
      
    // alter stmts
    | alter_group_mapping_stmt
    | alter_database_stmt
    | alter_data_source_stmt
    | alter_default_privilege_stmt
    | alter_directory_stmt
    | alter_foreign_table_stmt
    | alter_function_stmt
    | alter_group_stmt
    | alter_index_stmt
    | alter_large_obj_stmt
    | alter_node_stmt
    | alter_node_group_stmt
    | alter_resource_pool_stmt
    | alter_role_stmt
    | alter_role_level_security_policy_stmt
    | alter_schema_stmt
    | alter_sequence_stmt
    | alter_server_stmt
    | alter_session_stmt
    | alter_sys_kill_session_stmt
    | alter_table_stmt
    | alter_tablespace_stmt
    | alter_txt_search_conf_stmt
    | alter_txt_search_dictionary_stmt
    | alter_trigger_stmt
    | alter_type_stmt
    | alter_user_stmt
    | alter_view_stmt
    | workload_group_stmt   //create and alter
      
    // create stmt
    | create_group_mapping_stmt
    | create_barrier_stmt
    | create_database_stmt
    | create_data_source_stmt
    | create_directory_stmt
    | create_foreign_table_stmt
    | create_function_procedure_stmt
    | create_group_stmt
    | create_index_stmt
    | create_node_stmt
    | create_node_group_stmt
    | create_row_level_security_policy_stmt
    | create_source_pool_stmt
    | create_role_stmt
    | create_schema_stmt
    | create_sequence_stmt
    | create_server_stmt
    | create_table_stmt
    | create_table_partition_stmt
    | create_tablespace_stmt
    | create_txt_search_stmt
    | create_trigger_stmt
    | create_type_stmt
    | create_user_stmt
    | create_view_stmt
      
    // select insert update delete values
    | data_manipulate_stmt
      
    // drop stmt
    | drop_database_stmt
    | drop_group_mapping_stmt
    | drop_data_source_stmt
    | drop_directory_stmt
    | drop_foreign_table_stmt
    | drop_function_stmt
    | drop_group_stmt
    | drop_index_stmt
    | drop_node_stmt
    | drop_node_group_stmt
    | drop_owned_stmt
    | drop_row_level_security_policy_stmt
    | drop_procedure_stmt
    | drop_resource_pool_stmt
    | drop_role_stmt
    | drop_schema_stmt
    | drop_sequence_stmt
    | drop_server_stmt
    | drop_table_stmt
    | drop_tablespace_stmt
    | drop_txt_search_stmt
    | drop_trigger_stmt
    | drop_type_stmt
    | drop_user_stmt
    | drop_view_stmt
    | drop_workload_group_stmt
      
     // other stmt
    | analyze_stmt
    // | begin
    | call_stmt
    | checkpoint_stmt
    | clean_connection_stmt
    | close_stmt
    | cluster_stmt
    | comment_stmt
    | commit_end_stmt
    | commit_prepared_stmt
    | copy_stmt
    | cursor_stmt
    | deallocate_stmt
      
    | do_stmt
      
    | execute_stmt
    | execute_direct_stmt
    | explain_stmt
    | explain_plan_stmt
      
    | fetch_move_stmt
      
    | grant_stmt
      
    | lock_stmt
    | merge_into_stmt
    | prepare_stmt
    | prepare_transaction_stmt
      
    | reassign_owned_stmt
    | reindex_stmt
    | release_savepoint_stmt
    | reset_stmt
    | revoke_stmt
    | rollback_stmt
      
    | savepoint_stmt
    | set_reset_stmt
    | show_stmt
    | start_transaction_stmt
    | truncate_stmt
    | update_stmt
      
    // recollect space time and update statistic infos
    | vacuum_stmt
    | values_stmt
    ;

abort_stmt
    : ABORT_GS work_transaction
    ;

work_transaction
    : WORK_GS 
    | TRANSACTION_GS
    ;

alter_group_mapping_stmt
    : ALTER_GS APP_GS WORKLOAD_GS GROUP_GS MAPPING_GS app_name WITH_GS LEFT_PAREN assignment_stmt RIGHT_PAREN
    ;

app_name
    : identifier
    ;

paren_assignment_stmt_list
    : LEFT_PAREN assignment_stmt_list RIGHT_PAREN
    ;

assignment_stmt_list
    : assignment_stmt (COMMA assignment_stmt)*
    ;

assignment_stmt
    : identifier (EQUALS_OP? assignment_value)?
    ;

assignment_value
    : expression
    | DEFAULT_GS
    | SCONST
    ;

alter_database_stmt
    : ALTER_GS DATABASE_GS database_name alter_database_option?
    ;

database_name
    : identifier
    ;

alter_database_option
    : WITH_GS? connection_limit
    | rename_owner_to_option
    | set_configuration_param
    | reset_configuration_param
    | WITH_GS? (ENABLE_GS | DISABLE_GS) PRIVATE_GS OBJECT_GS
    ;

connection_limit
    : CONNECTION_GS LIMIT_GS integer
    ;

integer
    : unary_expr
    ;

rename_owner_to_option
    : rename_to_option
    | owner_to_option
    ;

rename_to_option
    : RENAME_GS TO_GS new_name
    ;

owner_to_option
    : OWNER_GS TO_GS new_name
    ;

new_name
    : identifier
    ;

set_configuration_param
    : SET_GS session_local? configuration_param ((TO_GS | EQUALS_OP) expr_default
                                         | FROM_GS CURRENT_GS)
    ;

reset_configuration_param
    : RESET_GS (configuration_param | ALL_GS)
    ;

configuration_param
    : identifier
    ;

// alter data source
alter_data_source_stmt
    : ALTER_GS DATA_GS SOURCE_GS src_name alter_data_src_option?
    ;

src_name
    : identifier
    ;

alter_data_src_option
    : data_src_type_version_option*
    | rename_owner_to_option
    ;

data_src_type_version_option
    : TYPE_GS CHAR_STRING
    | VERSION_GS (CHAR_STRING | NULL_GS)
    | alter_property_options
    ;

alter_property_options
    : OPTIONS_GS LEFT_PAREN alter_property_option (COMMA alter_property_option)* RIGHT_PAREN
    ;

alter_property_option
    : (ADD_GS | SET_GS | DROP_GS)? optname CHAR_STRING?
    ;

optname
    : identifier
    ;

// alter default privileges
alter_default_privilege_stmt
    : ALTER_GS DEFAULT_GS PRIVILEGES_GS (FOR_GS (ROLE_GS | USER_GS) target_role_list)?
      (IN_GS SCHEMA_GS schema_name_list)? abbreviated_grant_or_revoke
    ;

target_role_list
    : target_role (COMMA target_role)*
    ;

target_role
    : identifier
    ;

schema_name_list
    : schema_name (COMMA schema_name)*
    ;

schema_name
    : identifier
    ;

abbreviated_grant_or_revoke
    : grant_on_tables_clause
    | grant_on_functions_clause
    | grant_on_types_clause
    | revoke_on_tables_clause
    | revoke_on_functions_clause
    | revoke_on_types_clause
    ;

grant_on_tables_clause
    : GRANT_GS (table_privileges | all_privileges) ON_GS TABLES_GS TO_GS
      grant_revoke_objects with_grant_option?
    ;

all_privileges
    : ALL_GS PRIVILEGES_GS?
    ;

table_privileges
    : table_privilege (COMMA table_privilege)*
    ;

table_privilege
    : SELECT_GS
    | INSERT_GS
    | UPDATE_GS
    | DELETE_GS
    | TRUNCATE_GS
    | REFERENCES_GS
    ;

grant_revoke_objects
    : grant_revoke_obj (COMMA grant_revoke_obj)*
    ;

grant_revoke_obj
    : GROUP_GS? role_name | PUBLIC_GS
    ;

role_name
    : identifier
    ;

with_grant_option
    : WITH_GS GRANT_GS OPTION_GS
    ;

grant_on_functions_clause
    : GRANT_GS (function_privilege | all_privileges) ON_GS FUNCTIONS_GS TO_GS grant_revoke_objects with_grant_option?
    ;

function_privilege
    : EXECUTE_GS
    ;

grant_on_types_clause
    : GRANT_GS (type_privilege | all_privileges) ON_GS TYPES_GS TO_GS grant_revoke_objects with_grant_option?
    ;

type_privilege
    : USAGE_GS
    ;

revoke_on_tables_clause
    : REVOKE_GS grant_option_for? (table_privileges | all_privileges) ON_GS TABLES_GS
      FROM_GS grant_revoke_objects cascade_restrict?
    ;

grant_option_for
    : GRANT_GS OPTION_GS FOR_GS
    ;

cascade_restrict
    : CASCADE_GS CONSTRAINTS_GS?
    | RESTRICT_GS 
    ;

revoke_on_functions_clause
    : REVOKE_GS grant_option_for? (function_privilege | all_privileges) ON_GS FUNCTIONS_GS
      FROM_GS grant_revoke_objects cascade_restrict?
    ;

revoke_on_types_clause
    : REVOKE_GS grant_option_for? (type_privilege | all_privileges) ON_GS TYPES_GS
      FROM_GS grant_revoke_objects cascade_restrict?
    ;

// alter directory stmt
alter_directory_stmt
    : ALTER_GS DIRECTORY_GS directory_name owner_to_option
    ;

directory_name
    : identifier
    ;

// alter foreign table stmt
alter_foreign_table_stmt
    : ALTER_GS FOREIGN_GS TABLES_GS if_exists_or_not? table_name alter_foreign_table_option
    ;

if_exists_or_not
    : IF_GS NOT_GS? EXISTS_GS
    ;

table_name
    : identifier
    ;

alter_foreign_table_option
    : alter_property_options
    | owner_to_option
    | alter_foreign_table_action_list // SQL on Hadoop
    | alter_add_information_constraint
    | alter_drop_information_constraint
    ;

alter_foreign_table_action_list
    : alter_foreign_table_action (COMMA alter_foreign_table_action)*
    ;

alter_foreign_table_action
    : ALTER_GS COLUMN_GS? column_name alter_foreign_table_action_option
    ;

column_name
    : identifier
    ;

alter_foreign_table_action_option
    : (SET_GS DATA_GS)? TYPE_GS typename_gs
    | (SET_GS | DROP_GS) NOT_GS NULL_GS
    | alter_set_statistics_option
    | alter_property_options
    ;

alter_set_statistics_option
    : SET_GS STATISTICS_GS PERCENT_GS? integer
    ;

alter_add_information_constraint
    : ADD_GS (CONSTRAINT_GS constraint_name)? column_constraint_primary_unique add_info_constraint_option?
    ;

column_constraint_primary_unique
    : (PRIMARY_GS KEY_GS | UNIQUE_GS) paren_column_list?
    ;

constraint_name
    : identifier
    ;

add_info_constraint_option
    : ENFORCED_GS
    | NOT_GS ENFORCED_GS ((ENABLE_GS | DISABLE_GS) QUERY_GS OPTIMIZATION_GS)?
    ;

alter_drop_information_constraint
    : DROP_GS CONSTRAINT_GS constraint_name
    ;

// alter function stmt
alter_function_stmt
    : ALTER_GS FUNCTION_GS function_with_argtypes alter_func_option
    ;

function_with_argtypes
    : func_name func_args
    ;

func_args
    : LEFT_PAREN func_args_list? RIGHT_PAREN
    ;

func_args_list
    : func_arg (COMMA func_arg)*
    ;

func_arg
    : argmode? param_name? typename_gs
    ;

argmode
    : IN_GS
    | OUT_GS
    | INOUT_GS
    ;

param_name
    : identifier
    ;

alter_func_option
    : alter_function_action* RESTRICT_GS?
    | rename_owner_to_option
    | alter_set_schema
    ;

alter_function_action
    : CALLED_GS ON_GS NULL_GS INPUT_GS 
    | RETURNS_GS NULL_GS ON_GS NULL_GS INPUT_GS
    | STRICT_GS
    | (IMMUTABLE_GS | STABLE_GS | VOLATILE_GS)
    | NOT_GS? (SHIPPABLE_GS | FENCED_GS | LEAKPROOF_GS)
    | EXTERNAL_GS? SECURITY_GS (INVOKER_GS | DEFINER_GS)
    | AUTHID_GS (DEFINER_GS | CURRENT_USER_GS)
    | (COST_GS | ROWS_GS) numeric
    | set_configuration_param
    | reset_configuration_param
    ;

alter_set_schema
    : SET_GS SCHEMA_GS schema_name
    ;

// alter group stmt
alter_group_stmt
    : ALTER_GS GROUP_GS group_name alter_group_option
    ;

group_name
    : identifier
    ;

alter_group_option
    : (ADD_GS | DROP_GS) USER_GS user_name_list
    | rename_to_option
    ;

user_name_list
    : user_name (COMMA user_name)*
    ;

user_name
    : identifier
    ;

// alter index stmt
alter_index_stmt
    : ALTER_GS INDEX_GS if_exists_or_not? index_name alter_index_option
    ;

index_name
    : identifier
    ;

alter_index_option
    : rename_to_option
    | set_tablespace_option
    | set_assignment_list
    | reset_param_list
    | (MODIFY_GS PARTITION_GS partition_name)? UNUSABLE_GS
    | REBUILD_GS (PARTITION_GS partition_name)?
    | RENAME_GS PARTITION_GS partition_name TO_GS new_name
    | MOVE_GS PARTITION_GS partition_name TABLESPACE_GS new_name
    ;

set_tablespace_option
    : SET_GS tablespace_name_option
    ;

tablespace_name_option
    : TABLESPACE_GS tablespace_name
    ;

set_assignment_list
    : SET_GS paren_assignment_stmt_list
    ;

reset_param_list
    : RESET_GS LEFT_PAREN parameter_list RIGHT_PAREN
    ;

tablespace_name
    : identifier
    ;

parameter_list
    : parameter_name (COMMA parameter_name)*
    ;

parameter_name
    : identifier
    ;

partition_name
    : identifier
    ;

// alter large object stmt
alter_large_obj_stmt
    : ALTER_GS LARGE_GS OBJECT_GS identifier owner_to_option
    ;

// alter node stmt
alter_node_stmt
    : ALTER_GS NODE_GS nodename WITH_GS paren_assignment_stmt_list
    ;

nodename
    : identifier
    ;

paren_node_list
    : LEFT_PAREN node_list RIGHT_PAREN
    ;

node_list
    : nodename (COMMA nodename)*
    ;

alter_node_option
    : 
    ;

// alter node group stmt
alter_node_group_stmt
    : ALTER_GS NODE_GS GROUP_GS group_name alter_node_group_option
    ;

alter_node_group_option
    : SET_GS DEFAULT_GS
    | (SET_GS VCGROUP_GS)? rename_to_option
    | SET_GS NOT_GS VCGROUP_GS
    | SET_GS TABLE_GS GROUP_GS new_name
    | COPY_GS BUCKETS_GS FROM_GS group_name
    | add_node_list
    | delete_node_list
    | RESIZE_GS TO_GS group_name
    | SET_GS VCGROUP_GS WITH_GS GROUP_GS group_name
    ;

add_node_list
    : ADD_GS NODE_GS paren_node_list
    ;

delete_node_list
    : DELETE_GS NODE_GS paren_node_list
    ;

// alter resource pool
alter_resource_pool_stmt
    : ALTER_GS RESOURCE_GS POOL_GS pool_name WITH_GS paren_assignment_stmt_list
    ;

pool_name
    : identifier
    ;

// alter role
alter_role_stmt
    : ALTER_GS ROLE_GS role_name alter_role_option?
    ;

alter_role_option
    : WITH_GS? alter_role_with_option*
    | rename_to_option
    | (IN_GS DATABASE_GS database_name)? (set_configuration_param | reset_configuration_param)
    ;

alter_role_with_option
    : (CREATEDB_GS | NOCREATEDB_GS) 
    | (CREATEROLE_GS | NOCREATEROLE_GS)
    | (INHERIT_GS | NOINHERIT_GS)
    | (AUDITADMIN_GS | NOAUDITADMIN_GS)
    | (SYSADMIN_GS | NOSYSADMIN_GS)
    | (USEFT_GS | NOUSEFT_GS)
    | (LOGIN_GS | NOLOGIN_GS)
    | (REPLICATION_GS | NOREPLICATION_GS)
    | (INDEPENDENT_GS | NOINDEPENDENT_GS)
    | (VCADMIN_GS | NOVCADMIN_GS)
    | connection_limit
    | (ENCRYPTED_GS | UNENCRYPTED_GS)? alter_role_encrypt_option
    | VALID_GS (BEGIN_GS | UNTIL_GS) CHAR_STRING
    | RESOURCE_GS POOL_GS CHAR_STRING
    | USER_GS GROUP_GS CHAR_STRING
    | PERM_GS SPACE_GS CHAR_STRING
    | NODE_GS GROUP_GS logic_cluster_name
    | ACCOUNT_GS (LOCK_GS | UNLOCK_GS)
    | PGUSER_GS
    ;

alter_role_encrypt_option
    : PASSWORD_GS (CHAR_STRING | DISABLE_GS)
    | IDENTIFIED_GS BY_GS (CHAR_STRING (REPLACE_GS CHAR_STRING)? | DISABLE_GS)
    ;

logic_cluster_name
    : identifier
    ;

// alter role level security policy
alter_role_level_security_policy_stmt
    : ALTER_GS row_level_security? POLICY_GS if_exists_or_not? policy_name ON_GS 
      table_name alter_role_level_security_policy_option
    ;

row_level_security
    : ROW_GS LEVEL_GS SECURITY_GS
    ;

policy_name
    : identifier
    ;

alter_role_level_security_policy_option
    : rename_to_option
    | (TO_GS grant_revoke_objects | using_expr_option)*
    ;

using_expr_option
    : USING_GS expression
    | USING_GS LEFT_PAREN expression RIGHT_PAREN
    ;

// alter schema
alter_schema_stmt
    : ALTER_GS SCHEMA_GS schema_name rename_owner_to_option
    ;

// atler sequence stmt
alter_sequence_stmt
    : ALTER_GS SEQUENCE_GS if_exists_or_not? sequence_name alter_seq_option?
    ;

sequence_name
    : identifier
    ; 

alter_seq_option
    : owner_to_option
    | OWNED_GS BY_GS (general_element | NONE_GS)
    ;

// alter server
alter_server_stmt
    : ALTER_GS SERVER_GS server_name alter_server_option?
    ;

server_name
    : identifier
    ;

alter_server_option
    : rename_owner_to_option
    | (VERSION_GS CHAR_STRING)? alter_property_options
    ;

// alter session stmt
alter_session_stmt 
    : ALTER_GS SESSION_GS SET_GS alter_session_option
    ;

alter_session_option
    : (SESSION_GS CHARACTERISTICS_GS AS_GS)? TRANSACTION_GS alter_session_transaction_param_list
    | alter_session_runtime_param
    ;

alter_session_transaction_param_list
    : alter_session_transaction_param (COMMA alter_session_transaction_param)*
    ;

alter_session_transaction_param
    : ISOLATION_GS LEVEL_GS READ_GS (COMMITTED_GS | UNCOMMITTED_GS) 
    | READ_GS (ONLY_GS | WRITE_GS)
    ;

alter_session_runtime_param
    : param_name ((TO_GS | EQUALS_OP) expr_default | FROM_GS CURRENT_GS)
    | CURRENT_SCHEMA_GS (TO_GS | EQUALS_OP)? (schema_name | DEFAULT_GS)
    | TIME_GS ZONE_GS CHAR_STRING
    | SCHEMA_GS schema_name
    | NAMES_GS encoding_name
    | ROLE_GS role_name PASSWORD_GS CHAR_STRING
    | SESSION_GS AUTHORIZATION_GS (role_name PASSWORD_GS CHAR_STRING | DEFAULT_GS)
    | XML_GS OPTION_GS (DOCUMENT_GS | CONTENT_GS)
    | 
    ;

expr_default
    : expression 
    | DEFAULT_GS
    ;

encoding_name
    : identifier
    ;

// alter system kill session
alter_sys_kill_session_stmt
    : ALTER_GS SYSTEM_GS KILL_GS SESSION_GS CHAR_STRING IMMEDIATE_GS?
    ;

// alter table stmt
alter_table_stmt
    : ALTER_GS TABLE_GS if_exists_or_not? alter_table_name alter_table_stmt_option
    ;

alter_table_name
    : table_name ASTERISK?
    | ONLY_GS table_name
    | ONLY_GS LEFT_PAREN table_name RIGHT_PAREN
    ;

alter_table_stmt_option
    : alter_table_option
    | alter_table_partition_option
    ;

alter_table_option
    : alter_table_action_list
    | rename_to_option
    | RENAME_GS COLUMN_GS? column_name TO_GS new_name
    | RENAME_GS CONSTRAINT_GS constraint_name TO_GS new_name
    | alter_set_schema
    | ADD_GS LEFT_PAREN column_clause_add_column_option (COMMA column_clause_add_column_option)* RIGHT_PAREN
    | MODIFY_GS LEFT_PAREN column_with_type (COMMA column_with_type)* RIGHT_PAREN
    ;

alter_table_action_list
    : column_clause
    | ADD_GS alter_table_constraint (NOT_GS VALID_GS)?
    | ADD_GS table_constraint_using_index
    | VALIDATE_GS CONSTRAINT_GS constraint_name
    | DROP_GS CONSTRAINT_GS if_exists_or_not? constraint_name cascade_restrict?
    | CLUSTER_GS ON_GS index_name
    | SET_GS WITHOUT_GS CLUSTER_GS
    | set_assignment_list
    | reset_param_list
    | owner_to_option
    | set_tablespace_option
    | SET_GS (COMPRESS_GS | NOCOMPRESS_GS)
    | TO_GS (GROUP_GS group_name | NODE_GS paren_node_list)
    | add_node_list
    | delete_node_list
    | (DISABLE_GS | ENABLE_GS) TRIGGER_GS (trigger_name | ALL_GS | USER_GS)
    | ENABLE_GS (REPLICA_GS | ALWAYS_GS) TRIGGER_GS trigger_name
    | (DISABLE_GS | ENABLE_GS | FORCE_GS | NO_GS FORCE_GS) row_level_security
    ;

column_clause
    : ADD_GS COLUMN_GS? column_clause_add_column_option
    | MODIFY_GS column_with_type
    | DROP_GS COLUMN_GS? if_exists_or_not? column_name cascade_restrict?
    | ALTER_GS COLUMN_GS? column_name column_clause_alter_column_option
    ; 

column_clause_add_column_option
    : column_with_type compress_type? collate_option? alter_table_column_constraint*
    ;

column_with_type
    : column_name typename_gs
    ;

// DELTA | PREFIX | DICTIONARY | NUMSTR | NOCOMPRESS
compress_type
    : DELTA_GS
    | PREFIX_GS
    | DICTIONARY_GS
    | NUMSTR_GS
    | NOCOMPRESS_GS
    ;

collate_option
    : COLLATE_GS collation
    ;

// 字段排序规则名称
collation
    : identifier
    ;

alter_table_column_constraint
    : (CONSTRAINT_GS constraint_name)? column_constraint_option table_constraint_deferrable?
    ;

column_constraint_option
    : NOT_GS? NULL_GS
    | CHECK_GS LEFT_PAREN expression RIGHT_PAREN
    | DEFAULT_GS expression
    | column_constraint_primary_unique index_parameters
    ;

column_clause_alter_column_option
    : (SET_GS DATA_GS)? TYPE_GS typename_gs collate_option? using_expr_option?
    | (SET_GS DEFAULT_GS expression | DROP_GS DEFAULT_GS)
    | (SET_GS | DROP_GS) NOT_GS NULL_GS
    | alter_set_statistics_option
    | (ADD_GS | DELETE_GS) STATISTICS_GS LEFT_PAREN paren_column_list RIGHT_PAREN
    | set_assignment_list
    | reset_param_list
    | SET_GS STORAGE_GS (PLAIN_GS | EXTERNAL_GS | EXTENDED_GS | MAIN_GS)
    ;

alter_table_constraint
    : (CONSTRAINT_GS constraint_name)? alter_table_constraint_option table_constraint_deferrable?
    ;

alter_table_constraint_option
    : CHECK_GS LEFT_PAREN expression RIGHT_PAREN
    | column_constraint_primary_unique index_parameters
    | PARTIAL_GS CLUSTER_GS KEY_GS paren_column_list
    ;

paren_column_list
    : LEFT_PAREN column_name (COMMA column_name)* RIGHT_PAREN
    ;

index_parameters
    : (WITH_GS paren_assignment_stmt_list | USING_GS INDEX_GS tablespace_name_option)*
    ;

table_constraint_deferrable
    : NOT_GS DEFERRABLE_GS
    | DEFERRABLE_GS? INITIALLY_GS (DEFERRED_GS | IMMEDIATE_GS)
    ;

table_constraint_using_index
    : (CONSTRAINTS_GS constraint_name)? column_constraint_primary_unique USING_GS
      INDEX_GS index_name table_constraint_deferrable?
    ;

trigger_name
    : identifier
    ;

// alter table partition
alter_table_partition_option
    : alter_table_partition_action (COMMA alter_table_partition_action)*
    | RENAME_GS PARTITION_GS (partition_name | FOR_GS paren_partition_value_list)
      TO_GS new_name
    | TRUNCATE_GS PARTITION_GS (partition_name | FOR_GS paren_partition_value_list)
    ;

alter_table_partition_action 
    : move_clause
    | exchange_clause
    | row_clause
    | merge_clause
    | modify_clause
    | split_clause
    | add_clause
    | drop_clause
    ;

move_clause
    : MOVE_GS PARTITION_GS (partition_name | FOR_GS paren_partition_value_list)
      tablespace_name_option
    ;

paren_partition_value_list
    : LEFT_PAREN partition_value (COMMA partition_value)* RIGHT_PAREN
    ;

paren_partition_value
    : LEFT_PAREN partition_value RIGHT_PAREN
    ;

partition_value
    : expression
    ;

exchange_clause
    : EXCHANGE_GS PARTITION_GS (LEFT_PAREN partition_name RIGHT_PAREN | FOR_GS paren_partition_value_list)
      WITH_GS TABLE_GS alter_table_name ((WITH_GS | WITHOUT_GS) VALIDATION_GS)? VERBOSE_GS?
    ;

row_clause
    : (ENABLE_GS | DISABLE_GS) ROW_GS MOVEMENT_GS
    ;

merge_clause
    : MERGE_GS PARTITION_GS partition_name (COMMA partition_name)* INTO_GS 
      PARTITION_GS partition_name (tablespace_name_option)?
    ;

modify_clause
    : MODIFY_GS PARTITION_GS partition_name REBUILD_GS? UNUSABLE_GS LOCAL_GS INDEXES_GS
    ;

split_clause
    : SPLIT_GS PARTITION_GS (partition_name | FOR_GS paren_partition_value_list)
      (split_point_clause | no_split_point_clause)
    ;

split_point_clause
    : AT_GS paren_partition_value INTO_GS LEFT_PAREN 
      split_point_clause_option COMMA split_point_clause_option RIGHT_PAREN
    ;

split_point_clause_option
    : PARTITION_GS partition_name (tablespace_name_option)?
    ;

no_split_point_clause
    : INTO_GS LEFT_PAREN partition_item_list RIGHT_PAREN
    ;

partition_item_list
    : partition_item (COMMA partition_item)*
    ;

partition_item
    : partition_less_than_item
    | partition_start_end_item
    ;

partition_less_than_item
    : PARTITION_GS partition_name VALUES_GS LESS_GS THAN_GS LEFT_PAREN
      (partition_value | MAXVALUE_GS) (COMMA (partition_value | MAXVALUE_GS))* RIGHT_PAREN
      tablespace_name_option?
    ;

partition_start_end_item
    : PARTITION_GS partition_name partition_start_end_item_option tablespace_name_option?
    ;

partition_start_end_item_option
    : START_GS paren_partition_value END_GS paren_partition_value EVERY_GS paren_partition_value
    | START_GS paren_partition_value END_GS LEFT_PAREN (partition_value | MAXVALUE_GS) RIGHT_PAREN
    | START_GS paren_partition_value
    | END_GS LEFT_PAREN (partition_value | MAXVALUE_GS) RIGHT_PAREN
    ;

add_clause
    : ADD_GS (partition_less_than_item | partition_start_end_item)
    ;

drop_clause
    : DROP_GS PARTITION_GS (partition_name | FOR_GS paren_partition_value_list)
    ;

// alter tablespace stmt
alter_tablespace_stmt
    : ALTER_GS tablespace_name_option alter_tablespace_option
    ;

alter_tablespace_option
    : rename_owner_to_option
    | set_assignment_list
    | reset_param_list
    | RESIZE_GS MAXSIZE_GS (UNLIMITED_GS | CHAR_STRING)
    ;

// alter txt search configuration
alter_txt_search_conf_stmt
    : ALTER_GS TEXT_GS SEARCH_GS CONFIGURATION_GS configuration_name alter_txt_search_conf_option
    ;

configuration_name
    : identifier
    ;

alter_txt_search_conf_option
    : (ADD_GS | ALTER_GS) MAPPING_GS FOR_GS token_type_list WITH_GS dictionary_name_list
    | ALTER_GS MAPPING_GS (FOR_GS token_type_list)? REPLACE_GS DICTIONARY_GS WITH_GS new_name
    | DROP_GS MAPPING_GS if_exists_or_not? FOR_GS token_type_list
    | rename_owner_to_option
    | alter_set_schema
    | set_assignment_list
    | reset_param_list
    ;

token_type_list
    : token_type (COMMA token_type)*
    ;

// 与配置的语法解析器关联的字串类型的名称
token_type
    : identifier
    ;

dictionary_name_list
    : dictionary_name (COMMA dictionary_name)*
    ;

dictionary_name
    : identifier
    ;

// alter text search dictionary
alter_txt_search_dictionary_stmt
    : ALTER_GS TEXT_GS SEARCH_GS DICTIONARY_GS dictionary_name alter_txt_search_dictionary_option
    ;

alter_txt_search_dictionary_option
    : paren_assignment_stmt_list
    | rename_owner_to_option
    | alter_set_schema
    ;

// alter trigger
alter_trigger_stmt
    : ALTER_GS TRIGGER_GS trigger_name ON_GS table_name rename_to_option
    ;

// alter type stmt
alter_type_stmt
    : ALTER_GS TYPE_GS type_name alter_type_option
    ;

type_name
    : identifier
    ;

alter_type_option
    : alter_type_action_list
    | OWNER_GS TO_GS (new_name | CURRENT_USER_GS | SESSION_USER_GS)
    | RENAME_GS ATTRIBUTE_GS attr_name TO_GS new_name cascade_restrict?
    | rename_to_option
    | alter_set_schema
    | ADD_GS VALUE_GS (IF_GS NOT_GS EXISTS_GS)? enum_value ((BEFORE_GS | AFTER_GS) enum_value)?
    | RENAME_GS VALUE_GS enum_value TO_GS enum_value
    | alter_type_add_attr_option
    | alter_type_drop_attr_option
    | alter_type_alter_attr
    ;

alter_type_action_list
    : alter_type_action (COMMA alter_type_action)*
    ;

alter_type_action
    : alter_type_add_attr_option
    | alter_type_drop_attr_option
    | alter_type_alter_attr
    ;

attr_name
    : identifier
    ;

// 枚举类型新增加的标签值，是一个非空的长度不超过64个字节的字符串
enum_value
    : CHAR_STRING
    | SCONST
    ;

alter_type_add_attr_option
    : ADD_GS ATTRIBUTE_GS attr_name typename_gs collate_option? cascade_restrict?
    ;

alter_type_drop_attr_option
    : DROP_GS ATTRIBUTE_GS if_exists_or_not? attr_name cascade_restrict?
    ;

alter_type_alter_attr
    : ALTER_GS ATTRIBUTE_GS attr_name (SET_GS DATA_GS)? TYPE_GS typename_gs collate_option? cascade_restrict?
    ;

// alter user stmt
alter_user_stmt
    : ALTER_GS USER_GS user_name alter_user_clause?
    ;

alter_user_clause
    : WITH_GS? alter_role_with_option*
    | rename_to_option
    | set_configuration_param
    | reset_configuration_param
    ;

// alter view stmt
alter_view_stmt
    : ALTER_GS VIEW_GS if_exists_or_not? view_name alter_view_option
    ;

view_name
    : identifier
    ;

alter_view_option
    : ALTER_GS COLUMN_GS? column_name (SET_GS DEFAULT_GS expression | DROP_GS DEFAULT_GS)
    | rename_owner_to_option
    | alter_set_schema
    | set_assignment_list
    | reset_param_list
    ;

// alter workload group
workload_group_stmt
    : (ALTER_GS | CREATE_GS) WORKLOAD_GS GROUP_GS group_name (USING_GS RESOURCE_GS POOL_GS pool_name
      (WITH_GS LEFT_PAREN assignment_stmt RIGHT_PAREN)?)?
    ;

// create group mapping 
create_group_mapping_stmt
    : CREATE_GS APP_GS WORKLOAD_GS GROUP_GS MAPPING_GS app_name WITH_GS LEFT_PAREN assignment_stmt RIGHT_PAREN
    ;

// create barrier stmt
create_barrier_stmt
    : CREATE_GS BARRIER_GS barrier_name?
    ;

barrier_name
    : identifier
    ;

// create database stmt
create_database_stmt
    : CREATE_GS DATABASE_GS database_name (WITH_GS? assignment_stmt*)?
    ;

// create data source stmt
create_data_source_stmt
    : CREATE_GS DATA_GS SOURCE_GS src_name data_src_type_version_option*
    ;

// create directory
create_directory_stmt
    : CREATE_GS or_replace? DIRECTORY_GS directory_name AS_GS CHAR_STRING
    ;

or_replace
    : OR_GS REPLACE_GS
    ;

// create foreign table 
create_foreign_table_stmt
    : CREATE_GS FOREIGN_GS TABLE_GS (IF_GS NOT_GS EXISTS_GS)? table_name create_foreign_table_option
    ;

create_foreign_table_option
    : create_foreign_table_import_export_option // contain on other GaussDB 200 
    | create_foreign_table_on_hadoop_option
    ;

create_foreign_table_import_export_option
    : LEFT_PAREN foreign_table_import_export_column_type_list RIGHT_PAREN SERVER_GS server_name
      alter_property_options ((WRITE_GS | READ_GS) ONLY_GS)? ((WITH_GS | LOG_GS INTO_GS) table_name)?
      (REMOTE_GS LOG_GS CHAR_STRING)? (PER_GS NODE_GS REJECT_GS LIMIT_GS CHAR_STRING)?
      table_constraint_to_group_node?
    ;

foreign_table_import_export_column_type_list
    : foreign_table_import_export_column_type (COMMA foreign_table_import_export_column_type)*
    ;

foreign_table_import_export_column_type
    : column_with_type (POSITION_GS LEFT_PAREN numeric COMMA numeric RIGHT_PAREN)? | LIKE_GS table_name
    ;

table_constraint_to_group_node
    : TO_GS (GROUP_GS group_name | NODE_GS paren_node_list)
    ;

create_foreign_table_on_hadoop_option
    : LEFT_PAREN foreign_table_on_hadoop_column_type_list RIGHT_PAREN SERVER_GS server_name
      alter_property_options DISTRIBUTE_GS BY_GS (ROUNDROBIN_GS | REPLICATION_GS)
      table_constraint_to_group_node? (PARTITION_GS BY_GS paren_column_list AUTOMAPPED_GS?)?
    ;

foreign_table_on_hadoop_column_type_list
    : foreign_table_on_hadoop_column_type (COMMA foreign_table_on_hadoop_column_type)*
    ;

foreign_table_on_hadoop_column_type
    : column_with_type ((CONSTRAINT_GS constraint_name)? NOT_GS? NULL_GS 
                               | create_foreign_table_column_constraint*)?
    | create_foreign_table_column_constraint (COMMA create_foreign_table_column_constraint)*
    ;

create_foreign_table_column_constraint
    : (CONSTRAINT_GS constraint_name)? (column_constraint_primary_unique) add_info_constraint_option?
    ;

// create function stmt
// only support PostgreSql style, **not support Oracle style so far**
create_function_procedure_stmt
    : CREATE_GS or_replace? (FUNCTION_GS | PROCEDURE_GS) func_name create_func_arg_list (RETURNS_GS func_return_type)?
      LANGUAGE_GS lang_name alter_function_action* create_func_procedure_as_option /* plsqlbody */
    ;

create_func_arg_list
    : create_func_arg (COMMA create_func_arg)*
    ;

create_func_arg
    : param_name argmode? typename_gs ((DEFAULT_GS | (COLON? EQUALS_OP)) expression)?
    ;

func_return_type
    : SETOF_GS? typename_gs DETERMINISTIC_GS?
    | TABLE_GS LEFT_PAREN column_with_type (COMMA column_with_type)* RIGHT_PAREN
    ;

lang_name
    : identifier
    ;

create_func_procedure_as_option
    : AS_GS CHAR_STRING*
    | IS_GS
    ;

// create group stmt
create_group_stmt
    : CREATE_GS GROUP_GS group_name (WITH_GS? alter_role_with_option*)?
      (ENCRYPTED_GS | UNENCRYPTED_GS)? alter_role_encrypt_option
    ;

// create index stmt
// predicate is an expression
create_index_stmt
    : CREATE_GS UNIQUE_GS? INDEX_GS index_name? ON_GS table_name using_expr_option?
      create_index_column_list (WITH_GS paren_assignment_stmt_list)?
      tablespace_name_option? (WHERE_GS expression)?
    ;

create_index_column_list
    : create_index_column (COMMA create_index_column)*
    ;

create_index_column
    : (column_name | LEFT_PAREN expression RIGHT_PAREN) collate_option? opclass?
      asc_desc? nulls_first_last?
    ;

// name of operator
opclass
    : identifier
    ;

asc_desc
    : ASC_GS
    | DESC_GS
    ;

nulls_first_last
    : NULLS_GS (FIRST_GS | LAST_GS)
    ;

// create node stmt
create_node_stmt
    : CREATE_GS NODE_GS nodename WITH_GS paren_assignment_stmt_list
    ;

// create node group stmt
create_node_group_stmt
    : CREATE_GS NODE_GS GROUP_GS group_name WITH_GS paren_node_list
      (BUCKETS_GS paren_expr_list?)? VCGROUP_GS? (DISTRIBUTE_GS FROM_GS group_name)?
    ;

// create row level security policy stmt
create_row_level_security_policy_stmt
    : CREATE_GS row_level_security? POLICY_GS policy_name ON_GS table_name
      (AS_GS (PERMISSIVE_GS | RESTRICTIVE_GS))? (FOR_GS (ALL_GS | table_privilege))?
      (TO_GS row_level_security_policy_objects)? using_expr_option
    ;

row_level_security_policy_objects
    : row_level_security_policy_obj (COMMA row_level_security_policy_obj)*
    ;

row_level_security_policy_obj
    : role_name 
    | PUBLIC_GS
    | CURRENT_USER_GS
    | SESSION_USER_GS
    ;

// create source stmt
create_source_pool_stmt
    : CREATE_GS SOURCE_GS POOL_GS pool_name (WITH_GS paren_assignment_stmt_list)?
    ;

// create role stmt
create_role_stmt
    : CREATE_GS ROLE_GS role_name (WITH_GS? alter_role_with_option*)?
      (ENCRYPTED_GS | UNENCRYPTED_GS)? alter_role_encrypt_option
    ;

// create schema stmt
create_schema_stmt
    : CREATE_GS SCHEMA_GS create_schema_option
    ;

create_schema_option
    : schema_name? (AUTHORIZATION_GS user_name)? schema_element*
    ;

schema_element
    : create_table_stmt
    | create_view_stmt
    | create_index_stmt
    | create_table_partition_stmt
    | grant_stmt
    ;

// create sequence stmt
create_sequence_stmt
    : CREATE_GS SEQUENCE_GS sequence_name (INCREMENT_GS BY_GS? unary_expr)?
      minvalue_option? maxvalue_option? (START_GS WITH_GS unary_expr)?
      (CACHE_GS numeric)? (NO_GS? CYCLE_GS | NOCYCLE_GS)?
      (OWNED_GS BY_GS (table_name PERIOD column_name | NONE_GS))?
    ;

minvalue_option
    : MINVALUE_GS unary_expr 
    | NO_GS MINVALUE_GS
    | NOMINVALUE_GS
    ;

maxvalue_option
    : MAXVALUE_GS unary_expr
    | NO_GS MAXVALUE_GS
    | NOMAXVALUE_GS
    ;

// create server
create_server_stmt
    : CREATE_GS SERVER_GS server_name FOREIGN_GS DATA_GS WRAPPER_GS object_name
      alter_property_options
    ;

// create table stmt
create_table_stmt
    : CREATE_GS ((GLOBAL_GS | LOCAL_GS)? temporary_temp | UNLOGGED_GS)? 
      TABLE_GS (IF_GS NOT_GS EXISTS_GS)? table_name LEFT_PAREN create_table_column_type_option_list
      RIGHT_PAREN create_table_stmt_option* create_table_as_option?
    ;

temporary_temp
    : TEMPORARY_GS 
    | TEMP_GS
    ;

create_table_column_type_option_list
    : create_table_column_type_option (COMMA create_table_column_type_option)*
    ;

create_table_column_type_option
    : column_clause_add_column_option
    | alter_table_constraint
    | LIKE_GS table_name like_option*
    ;

like_option
    : (INCLUDING_GS | EXCLUDING_GS) like_option_other
    ;

like_option_other
    : DEFAULTS_GS
    | CONSTRAINT_GS 
    | INDEXES_GS
    | STORAGE_GS
    | COMMENTS_GS
    | PARTITION_GS
    | RELOPTIONS_GS
    | DISTRIBUTION_GS
    | ALL_GS
    ;

create_table_stmt_option
    : WITH_GS paren_assignment_stmt_list
    | ON_GS COMMIT_GS (PRESERVE_GS ROW_GS | DELETE_GS ROW_GS | DROP_GS)
    | (COMPRESS_GS | NOCOMPRESS_GS)
    | tablespace_name_option
    | DISTRIBUTE_GS BY_GS (REPLICATION_GS | HASH_GS paren_column_list)
    | table_constraint_to_group_node
    ;

create_table_as_option
    : AS_GS select_stmt (WITH_GS NO_GS? DATA_GS)?
    ;

// create table partition
create_table_partition_stmt
    : CREATE_GS TABLE_GS (IF_GS NOT_GS EXISTS_GS)? partition_name LEFT_PAREN
      create_table_column_type_option_list? RIGHT_PAREN create_table_stmt_option*
      PARTITION_GS BY_GS partition_by_option row_clause?
    ;

partition_by_option
    : VALUES_GS paren_partition_key
    | RANGE_GS paren_partition_key LEFT_PAREN partition_item_list RIGHT_PAREN
    ;

paren_partition_key
    : LEFT_PAREN partition_key RIGHT_PAREN
    ;

// partition_key为分区键的名称
partition_key
    : identifier
    ;

// create tablespace stmt
create_tablespace_stmt
    : CREATE_GS TABLESPACE_GS tablespace_name (OWNER_GS user_name)? RELATIVE_GS
      LOCATION_GS CHAR_STRING (MAXSIZE_GS CHAR_STRING)? (WITH_GS paren_assignment_stmt_list)?
    ;

// create text search configuration and dictionary
create_txt_search_stmt
    : CREATE_GS TEXT_GS SEARCH_GS (CONFIGURATION_GS | DICTIONARY_GS) identifier
      paren_assignment_stmt_list (WITH_GS paren_assignment_stmt_list)?
    ;

// create trigger stmt
// 执行触发器时要提供给函数的可选的以逗号分隔的参数列表。参数是文字字符串常量，
// 简单的名称和数字常量也可以写在这里，但它们都将被转换为字符串
create_trigger_stmt
    : CREATE_GS CONSTRAINT_GS? TRIGGER_GS trigger_name trigger_type trigger_event_list
      ON_GS table_name create_trigger_option EXECUTE_GS PROCEDURE_GS 
      LEFT_PAREN func_name param_expr_list RIGHT_PAREN
    ;

trigger_type
    : BEFORE_GS
    | AFTER_GS
    | INSTEAD_GS OF_GS
    ;

trigger_event_list
    : trigger_event (OR_GS trigger_event)*
    ;

trigger_event
    : INSERT_GS
    | UPDATE_GS (OF_GS column_name (COMMA column_name)*)?
    | DELETE_GS
    | TRUNCATE_GS
    ;

create_trigger_option
    : (FROM_GS table_name)? table_constraint_deferrable (FOR_GS EACH_GS? (ROW_GS | STATEMENT_GS))?
      (WHEN_GS LEFT_PAREN expression RIGHT_PAREN)?
    ;

// create type
create_type_stmt
    : CREATE_GS TYPE_GS type_name (LEFT_PAREN create_type_option RIGHT_PAREN)?
    ;

create_type_option
    : column_clause_add_column_option (COMMA column_clause_add_column_option)*
    | assignment_stmt_list
    | expression_list
    ;

// create user stmt
create_user_stmt
    : CREATE_GS USER_GS user_name (WITH_GS? alter_role_with_option*)?
      (ENCRYPTED_GS | UNENCRYPTED_GS)? alter_role_encrypt_option
    ;

// create view stmt
create_view_stmt
    : CREATE_GS or_replace? temporary_temp? VIEW_GS view_name paren_column_list?
      (WITH_GS assignment_stmt_list)? AS_GS select_stmt
    ;

data_manipulate_stmt
    : select_stmt
    | insert_stmt
    | update_stmt
    | delete_stmt
    | values_stmt
    ;

// ////////////////////////////////////////////////////////////////////////////
// select stmt
select_stmt
    : subquery_basic_elements subquery_operation_part*
    ;
    
subquery_basic_elements
    : subquery
    | select_with_parens
    ;

select_with_parens
    : LEFT_PAREN select_stmt RIGHT_PAREN
    ;

subquery_operation_part
    : (UNION_GS | INTERSECT_GS | EXCEPT_GS | MINUS_GS) all_distinct? subquery_basic_elements
    ;

subquery
    : with_clause? simple_select window_clause? order_by_clause? 
      limit_clause? offset_clause? fetch_clause? for_update_share_clause?
    ;

simple_select
    : SELECT_GS all_distinct? selected_list into_clause? from_clause? 
      where_clause? group_by_clause? having_clause?
    ;

all_distinct
    : ALL_GS
    | DISTINCT_GS (ON_GS paren_expr_list)?
    ;

selected_list
    : ASTERISK
    | selected_list_element (COMMA selected_list_element)*
    ;

selected_list_element
    : expression as_alias?
    ;

into_clause
    : INTO_GS UNLOGGED_GS? TABLE_GS? table_name
    ;

// from table reference
from_clause
    : FROM_GS from_list
    ;

from_list
    : table_ref (COMMA table_ref)*
    ;

table_ref
    : ONLY_GS? table_name ASTERISK? partition_clause? table_alias? table_sampling_clause?
    | select_with_parens table_alias?
    | func_name paren_expr_list AS_GS? alias_name? paren_column_list?
    | table_ref NATURAL_GS? join_type? JOIN_GS table_ref (on_condition_clause | using_clause)?
    ;

partition_clause
    : PARTITION_GS (LEFT_PAREN partition_name RIGHT_PAREN 
                   | FOR_GS paren_partition_value_list)
    ;

table_alias
    : AS_GS? alias_name paren_column_list?
    ;

table_sampling_clause
    : TABLESAMPLE_GS sample_method paren_expr_list (REPEATABLE_GS paren_expr_list)?
    ;

sample_method
    : identifier
    ;

join_type
    : INNER_GS
    | (LEFT_GS | RIGHT_GS | FULL_GS) OUTER_GS?
    | CROSS_GS
    ;

using_clause
    : USING_GS paren_column_list
    ;

group_by_clause
    : GROUP_GS BY_GS grouping_elements
    ;

grouping_elements
    : grouping_element (COMMA grouping_element)*
    ;

grouping_element
    : LEFT_PAREN expression_list? RIGHT_PAREN
    | expression
    | (ROLLUP_GS | CUBE_GS) paren_group_element_expr_list
    | GROUPING_GS SETS_GS LEFT_PAREN grouping_elements RIGHT_PAREN 
    ;

paren_group_element_expr_list
    : LEFT_PAREN group_element_expr (COMMA group_element_expr)* RIGHT_PAREN
    ;

group_element_expr
    : expression
    | paren_expr_list
    ;

having_clause
    : HAVING_GS expression_list
    ;

window_clause
    : WINDOW_GS window_clause_options
    ;

window_clause_options
    : window_clause_option (COMMA window_clause_option)*
    ;

window_clause_option
    : window_name AS_GS LEFT_PAREN window_definition RIGHT_PAREN
    ;

window_name
    : identifier
    ;

window_definition
    : window_name
    | PARTITION_GS BY_GS expression_list
    | order_by_clause
    | frame_clause
    ;

frame_clause
    : (RANGE_GS | ROWS_GS)? frame_start_end
    | (RANGE_GS | ROWS_GS)? BETWEEN_GS frame_start_end AND_GS frame_start_end
    ;

frame_start_end
    : UNBOUNDED_GS PRECEDING_GS
    | expression PRECEDING_GS
    | CURRENT_GS ROW_GS
    | expression FOLLOWING_GS
    | UNBOUNDED_GS FOLLOWING_GS
    ; 

// [ ORDER BY expression [ ASC | DESC | USING operator ] [ NULLS { FIRST | LAST } ] [, ...] ] 
// [ ORDER BY {expression [ [ ASC | DESC | USING operator ] | nlssort_expression_clause ] [ NULLS { FIRST | LAST } ]} [, ...] ]
order_by_clause
    : ORDER_GS BY_GS order_by_clause_options
    ;

order_by_clause_options
    : order_by_clause_option (COMMA order_by_clause_option)*
    ;

order_by_clause_option
    : expression order_by_clause_expr? nulls_first_last?
    ;

order_by_clause_expr
    : (ASC_GS | DESC_GS | USING_GS identifier)
    | nlssort_expression_clause
    ;

//NLSSORT ( column_name, ' NLS_SORT = { SCHINESE_PINYIN_M | generic_m_ci } ' )
nlssort_expression_clause
    : NLSSORT_GS LEFT_PAREN column_name COMMA CHAR_STRING RIGHT_PAREN
    ;

limit_clause
    : LIMIT_GS (expression | ALL_GS)
    ;

offset_clause
    : OFFSET_GS expression (ROW_GS | ROWS_GS)?
    ;

fetch_clause
    : FETCH_GS (FIRST_GS | NEXT_GS) expression? (ROW_GS | ROWS_GS) ONLY_GS 
    ;

for_update_share_clause
    : for_update_share_clause_option*
    ;

for_update_share_clause_option
    : FOR_GS (UPDATE_GS | SHARE_GS) (OF_GS table_name (COMMA table_name)*)? NOWAIT_GS?
    ;

// /////////////////////////////////////////////////////////////////////////////

// insert stmt
insert_stmt
    : with_clause? INSERT_GS INTO_GS table_name paren_column_list? insert_values_option
      return_clause?
    ;

insert_values_option
    : DEFAULT_GS VALUES_GS
    | VALUES_GS values_expression (COMMA values_expression)*
    | select_stmt
    ;

values_expression
    : LEFT_PAREN expr_default (COMMA expr_default)* RIGHT_PAREN
    ;

// update stmt
update_stmt
    : UPDATE_GS ONLY_GS? table_name ASTERISK? as_alias? SET_GS update_set_clause
      from_clause? where_clause? return_clause?
    ;

update_set_clause
    : update_set_column_option (COMMA update_set_column_option)*
    ;

// delete stmt
delete_stmt
    : with_clause? DELETE_GS FROM_GS ONLY_GS? table_name ASTERISK? as_alias?
      using_expr_option? where_clause? return_clause?
    ;

with_clause
    : WITH_GS RECURSIVE_GS? with_query (COMMA with_query)*
    ;

with_query
    : with_query_name paren_column_list? AS_GS LEFT_PAREN data_manipulate_stmt RIGHT_PAREN
    ;

with_query_name
    : identifier
    ;

as_alias
    : AS_GS? alias_name
    ;

alias_name
    : identifier
    | SCONST
    ;

where_clause
    : WHERE_GS expression
    | WHERE_GS CURRENT_GS OF_GS  cursor_name
    ;

return_clause
    : RETURNING_GS (ASTERISK | output_expr_alias (COMMA output_expr_alias)*)
    ;

output_expr_alias
    : expression as_alias?
    ;

// drop database stmt
drop_database_stmt
    : DROP_GS DATABASE_GS if_exists_or_not? database_name
    ;

drop_group_mapping_stmt
    : DROP_GS APP_GS WORKLOAD_GS GROUP_GS MAPPING_GS if_exists_or_not? app_name
    ;

drop_data_source_stmt
    : DROP_GS DATA_GS SOURCE_GS if_exists_or_not? src_name cascade_restrict?
    ;

drop_directory_stmt
    : DROP_GS DIRECTORY_GS if_exists_or_not? directory_name
    ;

drop_foreign_table_stmt
    : DROP_GS FOREIGN_GS TABLE_GS if_exists_or_not? table_name (COMMA table_name)* cascade_restrict?
    ;

drop_function_stmt
    : DROP_GS FUNCTION_GS if_exists_or_not? func_name (func_args cascade_restrict?)?
    ;

drop_group_stmt
    : DROP_GS GROUP_GS if_exists_or_not? group_name (COMMA group_name)*
    ;

drop_index_stmt
    : DROP_GS INDEX_GS CONCURRENTLY_GS? if_exists_or_not? index_name (COMMA index_name)*
      cascade_restrict?
    ;

drop_node_stmt
    : DROP_GS NODE_GS if_exists_or_not? nodename (WITH_GS paren_node_list)?
    ;

drop_node_group_stmt
    : DROP_GS NODE_GS GROUP_GS group_name (DISTRIBUTE_GS FROM_GS group_name)?
    ;

drop_owned_stmt
    : DROP_GS OWNED_GS BY_GS role_name (COMMA role_name)* cascade_restrict?
    ;

drop_row_level_security_policy_stmt
    : DROP_GS row_level_security? POLICY_GS if_exists_or_not? policy_name ON_GS
      table_name cascade_restrict?
    ;

drop_procedure_stmt
    : DROP_GS PROCEDURE_GS if_exists_or_not? identifier
    ;

drop_resource_pool_stmt
    : DROP_GS RESOURCE_GS POOL_GS if_exists_or_not? pool_name
    ;

drop_role_stmt
    : DROP_GS ROLE_GS if_exists_or_not? role_name (COMMA role_name)*
    ;

drop_schema_stmt
    : DROP_GS SCHEMA_GS if_exists_or_not? schema_name (COMMA schema_name)* cascade_restrict?
    ;

drop_sequence_stmt
    : DROP_GS SEQUENCE_GS if_exists_or_not? drop_name_list cascade_restrict? 
    ;

drop_name_list
    : drop_name (COMMA drop_name)*
    ;

drop_name
    : (schema_name PERIOD)? identifier
    ;

drop_server_stmt
    : DROP_GS SERVER_GS if_exists_or_not? server_name cascade_restrict?
    ;

drop_table_stmt
    : DROP_GS TABLE_GS if_exists_or_not? drop_name_list cascade_restrict?
    ;

drop_tablespace_stmt
    : DROP_GS TABLESPACE_GS if_exists_or_not? tablespace_name
    ;

drop_txt_search_stmt
    : DROP_GS TEXT_GS SEARCH_GS (CONFIGURATION_GS | DICTIONARY_GS) if_exists_or_not?
      configuration_name cascade_restrict?
    ;

drop_trigger_stmt
    : DROP_GS TRIGGER_GS if_exists_or_not? trigger_name ON_GS table_name cascade_restrict?
    ;

drop_type_stmt
    : DROP_GS TYPE_GS if_exists_or_not? type_name (COMMA type_name)* cascade_restrict?
    ;

drop_user_stmt
    : DROP_GS USER_GS if_exists_or_not? user_name (COMMA user_name)* cascade_restrict?
    ;

drop_view_stmt
    : DROP_GS VIEW_GS if_exists_or_not? view_name (COMMA view_name)* cascade_restrict?
    ;

drop_workload_group_stmt
    : DROP_GS WORKLOAD_GS GROUP_GS if_exists_or_not? group_name
    ;

// analyze stmt
analyze_stmt
    : analyze_keyword VERBOSE_GS? analyze_option
    ;

analyze_keyword
    : ANALYZE_GS
    | ANALYSE_GS
    ;

analyze_option
    : (table_name paren_column_list?)? partition_name_option
    | (table_name | FOREIGN_GS TABLES_GS)
    | table_name LEFT_PAREN paren_column_list RIGHT_PAREN
    ;

partition_name_option
    : PARTITION_GS partition_name
    | PARTITION_GS LEFT_PAREN partition_name RIGHT_PAREN
    ;

// call function for procedure
call_stmt
    : CALL_GS (identifier PERIOD)? func_name LEFT_PAREN param_expr_list RIGHT_PAREN
    ;

param_expr_list
    : param_expr (COMMA param_expr)*
    ;

param_expr
    : (param_name param_op)? expression
    ;

// :=, =>
param_op
    : COLON EQUALS_OP
    | EQUALS_OP GREATER_THAN_OP
    ;

// checkpoint
checkpoint_stmt
    : CHECKPOINT_GS
    ;

// clean connection
clean_connection_stmt
    : CLEAN_GS CONNECTION_GS TO_GS ((COORDINATOR_GS | NODE_GS) paren_node_list | ALL_GS CHECK_GS? FORCE_GS?)
      (FOR_GS DATABASE_GS database_name)? (TO_GS USER_GS user_name)?
    ;

// close
close_stmt
    : CLOSE_GS (cursor_name | ALL_GS)
    ;

cursor_name
    : identifier
    ;

// cluster
cluster_stmt
    : CLUSTER_GS VERBOSE_GS? cluster_stmt_option?
    ;

cluster_stmt_option
    : table_name (USING_GS index_name)?
    | table_name partition_name_option (USING_GS index_name)?
    ;

// comment 
comment_stmt
    : COMMENT_GS ON_GS comment_stmt_option IS_GS CHAR_STRING
    ;

comment_stmt_option
    : AGGREGATE_GS agg_name func_args
    | CAST_GS LEFT_PAREN typename_gs AS_GS typename_gs RIGHT_PAREN
    | COLUMN_GS table_name PERIOD column_name
    | CONSTRAINT_GS constraint_name ON_GS table_name
    | FUNCTION_GS function_with_argtypes
    | OPERATOR_GS identifier LEFT_PAREN typename_gs COMMA typename_gs RIGHT_PAREN
    | OPERATOR_GS (CLASS_GS | FAMILY_GS) object_name USING_GS index_name
    | (COLLATE_GS | CONVERSION_GS | DATABASE_GS | DOMAIN_GS | EXTENSION_GS | FOREIGN_GS TABLE_GS
      | INDEX_GS | LARGE_GS OBJECT_GS | PROCEDURAL_GS? LANGUAGE_GS | ROLE_GS
      | SCHEMA_GS | SERVER_GS | TABLE_GS | TABLESPACE_GS | TYPE_GS | VIEW_GS
      | TEXT_GS SEARCH_GS (CONFIGURATION_GS | DICTIONARY_GS | PARSER_GS | TEMPLATE_GS)
      | FOREIGN_GS DATA_GS WRAPPER_GS) object_name
    ;

agg_name
    : identifier
    ;

object_name
    : identifier
    ;

// commit end
commit_end_stmt
    : (COMMIT_GS | END_GS) work_transaction?
    ;

// commit prepared
commit_prepared_stmt
    : COMMIT_GS PREPARED_GS identifier (WITH_GS CSN_GS)? 
    ;

// copy stmt
copy_stmt
    : COPY_GS identifier paren_column_list? (FROM_GS | TO_GS) 
      (CHAR_STRING | STDOUT_GS | STDIN_GS) copy_stmt_option*
    ;

copy_stmt_option
    : USING_GS DELIMITERS_GS CHAR_STRING
    | WITHOUT_GS ESCAPE_GS
    | LOG_GS ERRORS_GS
    | REJECT_GS LIMIT_GS CHAR_STRING
    | WITH_GS? paren_copy_clause_option_list
    | copy_option
    | FIXED_GS FORMATTER_GS (LEFT_PAREN column_offset_list RIGHT_PAREN | (paren_copy_clause_option_list | copy_option*))*
    ;

paren_copy_clause_option_list
    : LEFT_PAREN copy_clause_option (COMMA copy_clause_option)* RIGHT_PAREN
    ;

copy_clause_option
    : FORMAT_GS CHAR_STRING
    | DELIMITER_GS CHAR_STRING
    | NOESCAPING_GS boolean_value?
    | FORCE_QUOTE_GS (paren_column_list | ASTERISK)
    | FORCE_NOT_NULL_GS paren_column_list
    | copy_clause_common_option
    ;

column_offset_list
    : column_name LEFT_PAREN numeric COMMA numeric RIGHT_PAREN
    ;

copy_option
    : BINARY_GS
    | CSV_GS
    | copy_clause_common_option
    ;

copy_clause_common_option
    : OIDS_GS boolean_value?
    | NULL_GS CHAR_STRING
    | HEADER_GS boolean_value?
    | FILEHEADER_GS CHAR_STRING
    | FREEZE_GS boolean_value?
    | (QUOTE_GS | ESCAPE_GS) AS_GS? CHAR_STRING
    | EOL_GS CHAR_STRING
    | ENCODING_GS CHAR_STRING
    | IGNORE_EXTRA_DATA_GS boolean_value?
    | FILL_MISSING_FIELDS_GS boolean_value?
    | COMPATIBLE_ILLEGAL_CHARS_GS boolean_value?
    | (DATE_FORMAT_GS | TIME_FORMAT_GS | TIMESTAMP_FORMAT_GS | SMALLDATETIME_FORMAT_GS) CHAR_STRING
    ;

boolean_value
    : TRUE_GS
    | FALSE_GS
    ;

// cursor stmt
cursor_stmt
    : CURSOR_GS cursor_name BINARY_GS? (NO_GS SCROLL_GS)? ((WITH_GS | WITHOUT_GS) HOLD_GS)?
      FOR_GS select_stmt
    ;

// deallocate stmt
deallocate_stmt
    : DEALLOCATE_GS PREPARE_GS? (identifier || ALL_GS)
    ;

// do stmt
do_stmt
    : DO_GS (LANGUAGE_GS lang_name)? do_stmt_code
    ;

// 程序语言代码可以被执行的。程序语言必须指定为字符串才行。
do_stmt_code
    : SCONST
    ;

execute_stmt
    : EXECUTE_GS identifier LEFT_PAREN param_expr_list RIGHT_PAREN
    ;

execute_direct_stmt
    : EXECUTE_GS DIRECT_GS ON_GS paren_node_list select_stmt
    ;

explain_stmt
    : EXPLAIN_GS (explain_option_list? | analyze_keyword? VERBOSE_GS | PERFORMANCE_GS) gs_stmt
    ;

explain_option_list
    : explain_option (COMMA explain_option)*
    ;

explain_option
    : (analyze_keyword
      | VERBOSE_GS
      | COSTS_GS
      | CPU_GS
      | DETAIL_GS
      | NODES_GS
      | NUM_NODES_GS
      | BUFFERS_GS
      | TIMING_GS
      | PLAN_GS) boolean_value?
    | FORMAT_GS (TEXT_GS | XML_GS | JSON_GS | YAML_GS) 
    ;

// explain plan
explain_plan_stmt
    : EXPLAIN_GS PLAN_GS (SET_GS assignment_stmt)? FOR_GS gs_stmt
    ;

// fetch stmt
fetch_move_stmt
    : (FETCH_GS | MOVE_GS) (fetch_direction_clause (FROM_GS | IN_GS))? cursor_name
    ;

//count取值范围：有符号的整数 
//count为正数，就从查询结果的第一行开始，抓取第count行。当count小于当前游标位置时，涉及到rewind操作，暂不支持。
//count为负数或0，涉及到反向扫描操作，暂不支持。
fetch_direction_clause
    : NEXT_GS
    | FIRST_GS
    | LAST_GS
    | (ABSOLUTE_GS | RELATIVE_GS | FORWARD_GS | BACKWARD_GS)? ICONST
    | (FORWARD_GS | BACKWARD_GS)? ALL_GS
    | FORWARD_GS
    | BACKWARD_GS
    ;

// grant stmt
grant_stmt
    : GRANT_GS privileges_for_obj (ON_GS grant_on_option)? TO_GS grant_revoke_objects with_grant_option?
    | GRANT_GS role_name (COMMA role_name)* TO_GS grant_revoke_objects with_grant_option?
    ;

privileges_for_obj
    : (table_privileges | all_privileges)
    | (table_privilege paren_column_list (COMMA table_privilege paren_column_list)* | all_privileges paren_column_list)
    | (database_privileges | all_privileges)
    | (USAGE_GS | all_privileges)
    | (function_privilege | all_privileges)
    | cluster_privilege
    | ALL_GS PRIVILEGE_GS
    | (READ_GS | WRITE_GS | all_privileges)
    ;

database_privileges
    : database_privilege (COMMA database_privilege)*
    ;

database_privilege
    : CREATE_GS
    | CONNECT_GS 
    | TEMPORARY_GS
    | TEMP_GS
    ;

cluster_privilege
    : CREATE_GS
    | USAGE_GS
    | COMPUTE_GS 
    ;

grant_on_option
    : (TABLE_GS? table_name (COMMA table_name)* | ALL_GS TABLES_GS IN_GS SCHEMA_GS schema_name_list)
    | DATABASE_GS database_name (COMMA database_name)*
    | FOREIGN_GS DATA_GS WRAPPER_GS object_name (COMMA object_name)*
    | FOREIGN_GS SERVER_GS server_name (COMMA server_name)*
    | (grant_on_function_option_list | ALL_GS FUNCTIONS_GS IN_GS SCHEMA_GS schema_name_list)
    | LANGUAGE_GS lang_name (COMMA lang_name)*
    | NODE_GS GROUP_GS group_name (COMMA group_name)*
    | SCHEMA_GS schema_name_list
    | TABLESPACE_GS tablespace_name (COMMA tablespace_name)*
    | TYPE_GS type_name (COMMA type_name)*
    | DATA_GS SOURCE_GS src_name (COMMA src_name)*
    | DIRECTORY_GS directory_name (COMMA directory_name)*
    ;

grant_on_function_option_list
    : grant_on_function_option (COMMA grant_on_function_option)*
    ;

grant_on_function_option
    : FUNCTION_GS function_with_argtypes
    ;

// lock stmt
lock_stmt
    : LOCK_GS TABLE_GS? alter_table_name (alter_table_name)* lock_in_mode? NOWAIT_GS?
    ;

lock_in_mode
    : IN_GS in_mode_option MODE_GS
    ;

in_mode_option
    : (ACCESS_GS | ROW_GS)? (SHARE_GS | EXCLUSIVE_GS)
    | SHARE_GS (UPDATE_GS | ROW_GS) EXCLUSIVE_GS
    ;

// prepare stmt
prepare_stmt
    : PREPARE_GS identifier (LEFT_PAREN typename_gs (COMMA typename_gs)* RIGHT_PAREN)? AS_GS gs_stmt
    ;

prepare_transaction_stmt
    : PREPARE_GS TRANSACTION_GS identifier
    ;

// merge into stmt
merge_into_stmt
    : MERGE_GS INTO_GS table_name as_alias? USING_GS (table_name | select_stmt) 
      as_alias? on_condition_clause when_matched_update_clause? when_not_matched_insert_clause?
    ;

on_condition_clause
    : ON_GS expression
    | ON_GS LEFT_PAREN expression RIGHT_PAREN
    ;

when_matched_update_clause
    : WHEN_GS MATCHED_GS THEN_GS UPDATE_GS SET_GS update_set_column_option where_clause?
    ;

update_set_column_option
    : assignment_stmt
    | paren_column_list EQUALS_OP (LEFT_PAREN expr_default (COMMA expr_default)* RIGHT_PAREN | simple_select)
    ;

when_not_matched_insert_clause
    : WHEN_GS NOT_GS MATCHED_GS THEN_GS INSERT_GS not_matched_insert_value_option
    ;

not_matched_insert_value_option
    : DEFAULT_GS VALUES_GS
    | not_matched_insert_value (COMMA not_matched_insert_value)* where_clause?
    ;

not_matched_insert_value
    : paren_column_list? VALUES_GS LEFT_PAREN expr_default (COMMA expr_default)* RIGHT_PAREN
    ;

// reassign owned stmt
reassign_owned_stmt
    : REASSIGN_GS OWNED_GS BY_GS role_name (COMMA role_name)* TO_GS new_name
    ;

// reindex stmt
reindex_stmt
    : REINDEX_GS reindex_option index_name (PARTITION_GS partition_name)? FORCE_GS
    ;

reindex_option
    : INDEX_GS
    | INTERNAL_GS? TABLE_GS
    | DATABASE_GS
    | SYSTEM_GS
    ;

// release savepoint stmt
release_savepoint_stmt
    : RELEASE_GS SAVEPOINT_GS? savepoint_name
    ;

reset_stmt
    : RESET_GS (configuration_param
               | CURRENT_SCHEMA_GS
               | TIME_GS ZONE_GS
               | TRANSACTION_GS ISOLATION_GS LEVEL_GS
               | SESSION_GS AUTHORIZATION_GS
               | ALL_GS)
    ;

savepoint_name
    : identifier
    ;

// revoke stmt
revoke_stmt
    : REVOKE_GS grant_option_for? privileges_for_obj (ON_GS grant_on_option)? 
      FROM_GS grant_revoke_objects cascade_restrict?
    | REVOKE_GS admin_option_for? role_name (COMMA role_name)* FROM_GS
      role_name (COMMA role_name)* cascade_restrict?
    ;

admin_option_for
    : ADMIN_GS OPTION_GS FOR_GS
    ;

// rollback stmt
rollback_stmt
    : ROLLBACK_GS work_transaction?
    | ROLLBACK_GS PREPARED_GS identifier
    | ROLLBACK_GS work_transaction? TO_GS SAVEPOINT_GS? savepoint_name
    ;

// savepoint
savepoint_stmt
    : SAVEPOINT_GS savepoint_name
    ;

// set or reset
set_reset_stmt
    : set_config_parameters
    | set_constraints
    | set_role
    | set_session_authorization
    | set_transaction
    | reset_config_parameters
    ;

set_config_parameters
    : set_configuration_param
    | SET_GS session_local? set_parameter_option
    ;

session_local
    : SESSION_GS 
    | LOCAL_GS
    ;

set_parameter_option
    : TIME_GS ZONE_GS (timezone | LOCAL_GS | DEFAULT_GS)
    | (CURRENT_SCHEMA_GS (TO_GS | EQUALS_OP) (schema_name | DEFAULT_GS)
      | SCHEMA_GS CHAR_STRING)
    | NAMES_GS encoding_name
    | XML_GS OPTION_GS (DOCUMENT_GS | CONTENT_GS)
    ;

timezone
    : CHAR_STRING
    ;

set_constraints
    : SET_GS CONSTRAINTS_GS (ALL_GS | constraint_name (COMMA constraint_name)*) (DEFERRED_GS | IMMEDIATE_GS)
    ;

set_role
    : SET_GS session_local? ROLE_GS role_name PASSWORD_GS CHAR_STRING
    ;

reset_config_parameters
    : RESET_GS ROLE_GS
    | RESET_GS SESSION_GS AUTHORIZATION_GS
    ;

set_session_authorization
    : SET_GS session_local? SESSION_GS AUTHORIZATION_GS (DEFAULT_GS | role_name PASSWORD_GS CHAR_STRING)
    ;

set_transaction
    : SET_GS (LOCAL_GS | SESSION_GS CHARACTERISTICS_GS AS_GS)? TRANSACTION_GS isolation_level_options
    ;

isolation_level_options
    : isolation_level_option (COMMA isolation_level_option)*
    ;

isolation_level_option
    : ISOLATION_GS LEVEL_GS (READ_GS COMMITTED_GS | READ_GS UNCOMMITTED_GS | SERIALIZABLE_GS | REPEATABLE_GS READ_GS)
    | READ_GS (WRITE_GS | ONLY_GS)
    ;

// show stmt
show_stmt
    : SHOW_GS (configuration_name
              | CURRENT_SCHEMA_GS
              | TIME_GS ZONE_GS
              | TRANSACTION_GS ISOLATION_GS LEVEL_GS
              | SESSION_GS AUTHORIZATION_GS
              | ALL_GS)
    ;

// start transaction
start_transaction_stmt
    : start_transaction_option isolation_level_options?
    ;

start_transaction_option
    : START_GS TRANSACTION_GS
    | BEGIN_GS work_transaction?
    ;

// truncate stmt
truncate_stmt
    : TRUNCATE_GS TABLE_GS? ONLY_GS? alter_table_name (COMMA alter_table_name)*
      (CONTINUE_GS IDENTITY_GS)? cascade_restrict?
    ;

// vacuum stmt
vacuum_stmt
    : VACUUM_GS LEFT_PAREN? vacuum_keyword_list? RIGHT_PAREN? vacuum_option*
    ;

vacuum_keyword_list
    : vacuum_keyword (COMMA? vacuum_keyword)*
    ;

vacuum_keyword
    : FULL_GS COMPACT_GS? 
    | FREEZE_GS
    | VERBOSE_GS
    | analyze_keyword
    | DELTAMERGE_GS
    | HDFSDIRECTORY_GS 
    ;

vacuum_option
    : table_name paren_column_list?
    | partition_name_option
    ;

// values_stmt
values_stmt
    : VALUES_GS paren_expr_list (COMMA paren_expr_list)* order_by_clause?
      limit_clause? offset_clause? fetch_clause?
    ;

// expression definitions
paren_expr_list
    : LEFT_PAREN expression_list RIGHT_PAREN
    ;

expression_list
    : expression (COMMA expression)*
    ;

// define expression reference to greenplum
expression
    : logical_expr
    ;

logical_expr
    : multiset_expr (IS_GS NOT_GS? 
                     (NULL_GS | DISTINCT_GS FROM_GS logical_expr ))?
    | multiset_expr (ISNULL_GS | NOTNULL_GS)
    | NOT_GS logical_expr
    | logical_expr AND_GS logical_expr
    | logical_expr OR_GS logical_expr
    ;

multiset_expr
    : relational_expr
    ;

relational_expr
    : relational_expr relational_op relational_expr
    | compound_expr
    ;

relational_op
    : (LESS_THAN_OP | GREATER_THAN_OP) EQUALS_OP?
    | EQUALS_OP
    | NOT_EQUAL_OP
    ;

compound_expr
    : concatenation 
      (NOT_GS? (IN_GS in_expr 
            | BETWEEN_GS (ASYMMETRIC_GS? | SYMMETRIC_GS) between_elements 
            | (LIKE_GS | ILIKE_GS | SIMILAR_GS TO_GS) concatenation (ESCAPE_GS expression)?))?
    | concatenation_list OVERLAPS_GS concatenation_list
    ;

in_expr
    : LEFT_PAREN select_stmt RIGHT_PAREN
    | paren_expr_list      
    ;
    
between_elements
    : concatenation AND_GS concatenation
    ;

concatenation_list
    : LEFT_PAREN concatenation (COMMA concatenation)* RIGHT_PAREN
    ;

concatenation
    : model_expr (AT_GS TIME_GS ZONE_GS concatenation)?
    | concatenation CARRET_OPERATOR_PART concatenation
    | concatenation op=(ASTERISK | SOLIDUS | PERCENT_SIGN) concatenation
    | concatenation op=(PLUS_SIGN | MINUS_SIGN) concatenation
    | concatenation op=(AMPERSAND | BAR | POUND_SIGN) concatenation
    | concatenation op=(GREATER_THAN_OP GREATER_THAN_OP | LESS_THAN_OP LESS_THAN_OP) concatenation
    | concatenation geometry_op1 concatenation
    | concatenation BAR BAR concatenation
    ;

// operators for geometry types
geometry_op1
    : POUND_SIGN POUND_SIGN
    | AMPERSAND AMPERSAND
    | AMPERSAND (GREATER_THAN_OP | LESS_THAN_OP)
    | LESS_THAN_OP '-' GREATER_THAN_OP
    | BAR GREATER_THAN_OP GREATER_THAN_OP 
    | LESS_THAN_OP LESS_THAN_OP BAR
    | AMPERSAND LESS_THAN_OP BAR
    | BAR AMPERSAND GREATER_THAN_OP
    | (GREATER_THAN_OP | LESS_THAN_OP) CARRET_OPERATOR_PART
    | QUESTION_MARK (POUND_SIGN | '-' | BAR)
    | QUESTION_MARK '-' BAR
    | QUESTION_MARK BAR BAR
    | AT_SIGN GREATER_THAN_OP
    | LESS_THAN_OP AT_SIGN
    | TILDE_OPERATOR_PART EQUALS_OP
    ;

model_expr
    : unary_expr
    ;

unary_expr
    : (MINUS_SIGN | PLUS_SIGN) unary_expr
    | AT_SIGN unary_expr
    | BAR SOLIDUS unary_expr
    | BAR BAR SOLIDUS unary_expr
    | EXCLAMATION_OPERATOR_PART EXCLAMATION_OPERATOR_PART unary_expr
    | unary_expr EXCLAMATION_OPERATOR_PART
    | TILDE_OPERATOR_PART unary_expr
    | geometry_op2 unary_expr
    | unary_expr (TYPECAST typename_gs (typecast_arg)?)*   // 44::bit(4)::integer, array[1, 2, 3]::int[]
    | case_expr
    | function_expr
    | quantified_expression
    | atom
    | ARRAY_GS array_expr
    ;

geometry_op2
    : POUND_SIGN
    | AT_SIGN '-'? AT_SIGN
    | QUESTION_MARK ('-' | BAR)
    ;

// datatypes in GaussDB 200
typename_gs
    : number_type precision_part?
    | concurrency_type
    | boolean_type
    | char_type precision_part?
    | binary_type
    | date_type
    | geometry_type
    | inet_type
    | bit_type precision_part?
    | txt_search_type
//    | uuid_type
//    | json_type
    | hll_type
    | oid_type // object identify
    | other_type
    ;

precision_part
    : LEFT_PAREN (numeric | ASTERISK) (COMMA numeric)? RIGHT_PAREN
    ;

numeric
    : ICONST
    | FCONST
    ;

number_type
    : TINYINT_GS
    | SMALLINT_GS
    | INTEGER_GS
    | BINARY_INTEGER_GS
    | BIGINT_GS
    | DECIMAL_GS
    | NUMERIC_GS
    | NUMBER_GS
    | SMALLSERIAL_GS
    | SERIAL_GS
    | BIGSERIAL_GS
    | REAL_GS
    | FLOAT4_GS 
    | FLOAT_GS
    | FLOAT8_GS
    | DOUBLE_GS PRECISION_GS
    | BINARY_DOUBLE_GS
    | DEC_GS
    ;

concurrency_type
    : MONEY_GS
    ;

boolean_type
    : BOOLEAN_GS
    ;

char_type
    : CHAR_GS
    | CHARACTER_GS
    | NCHAR_GS
    | VARCHAR_GS
    | CHARACTER_GS VARYING_GS
    | VARCHAR2_GS
    | NVARCHAR2_GS
    | CLOB_GS
    | TEXT_GS
    ;

binary_type
    : BLOB_GS
    | RAW_GS
    | BYTEA_GS
    ;

date_type
    : DATE_GS
    | (TIME_GS | TIMESTAMP_GS) precision_part? ((WITH_GS | WITHOUT_GS) time_zone_part)?
    | SMALLDATETIME_GS
    | INTERVAL_GS DAY_GS precision_part TO_GS SECOND_GS precision_part
    | INTERVAL_GS FIELDS_GS? precision_part?
    | RELTIME_GS
    ;

time_zone_part
    : TIME_GS ZONE_GS
    ;

geometry_type
    : POINT_GS
    | LSEG_GS
    | BOX_GS
    | PATH_GS
    | POLYGON_GS
    | CIRCLE_GS
    ;

inet_type
    : CIDR_GS
    | INET_GS
    | MACADDR_GS
    ;

bit_type
    : BIT_GS
    | BIT_GS VARYING_GS
    ;

txt_search_type
    : TSVECTOR_GS
    | TSQUERY_GS
    ;

hll_type
    : HLL_GS
    ;

oid_type
    : OID_GS
    | CID_GS
    | XID_GS
    | TID_GS
    | REGCONFIG_GS
    | REGDICTIONARY_GS
    | REGOPER
    | REGOPERATOR
    | REGPROC
    | REGPROCEDURE
    | REGCLASS
    | REGTYPE
    ;

other_type
    : ANY_GS
    | ANYELEMENT_GS
    | ANYARRAY_GS
    | ANYNONARRAY_GS
    | ANYENUM_GS
    | ANYRANGE_GS
    | CSTRING_GS
    | INTERNAL_GS
    | LANGUAGE_HANDLER_GS
    | FDW_HANDLER_GS
    | RECORD_GS
    | TRIGGER_GS
    | VOID_GS
    | OPAQUE_GS
    ;

typecast_arg
    : LEFT_BRACKET expression_list? RIGHT_BRACKET
    | LEFT_PAREN expression_list? RIGHT_PAREN
    ;

// function expression definition
function_expr
    : simple_function FILTER_GS LEFT_PAREN WHERE_GS expression RIGHT_PAREN
    | simple_function
    | CURRENT_DATE_GS
    | (CURRENT_TIME_GS | CURRENT_TIMESTAMP_GS | LOCALTIME_GS | LOCALTIMESTAMP_GS) 
      (LEFT_PAREN ICONST RIGHT_PAREN)?
    | CURRENT_ROLE_GS
    | CURRENT_USER_GS
    | SESSION_USER_GS
    | USER_GS
    | CURRENT_CATALOG_GS
    | CURRENT_SCHEMA_GS
    | CAST_GS LEFT_PAREN expression AS_GS typename_gs RIGHT_PAREN
    | EXTRACT_GS LEFT_PAREN extract_list? RIGHT_PAREN
    | OVERLAY_GS LEFT_PAREN overlay_list RIGHT_PAREN
    | POSITION_GS LEFT_PAREN position_list? RIGHT_PAREN
    | SUBSTRING_GS LEFT_PAREN substr_list? RIGHT_PAREN
    | TREAT_GS LEFT_PAREN expression AS_GS typename_gs RIGHT_PAREN
    | TRIM_GS LEFT_PAREN (BOTH_GS | LEADING_GS | TRAILING_GS)? trim_list RIGHT_PAREN
    | NULLIF_GS LEFT_PAREN expression COMMA expression RIGHT_PAREN
    | COALESCE_GS paren_expr_list
    | GREATEST_GS paren_expr_list
    | LEAST_GS paren_expr_list
    | DECODE_GS LEFT_PAREN expression COMMA expression RIGHT_PAREN
    | XMLCONCAT_GS paren_expr_list
    | XMLELEMENT_GS LEFT_PAREN NAME_GS col_label xmlelement_part? RIGHT_PAREN
    | XMLEXISTS_GS LEFT_PAREN expression (xmlexists_argument | COMMA expression) RIGHT_PAREN
    | XMLFOREST_GS LEFT_PAREN xml_attribute_list RIGHT_PAREN
    | XMLPARSE_GS LEFT_PAREN document_or_content expression xml_whitespace_option? RIGHT_PAREN
    | XMLPI_GS LEFT_PAREN NAME_GS col_label (COMMA expression)? RIGHT_PAREN
    | XMLROOT_GS LEFT_PAREN expression COMMA xml_root_version opt_xml_root_standalone? RIGHT_PAREN
    | XMLSERIALIZE_GS LEFT_PAREN document_or_content expression AS typename_gs RIGHT_PAREN
    ;

col_label
    : identifier
    | SCONST
    ;

xmlelement_part
    : COMMA (xml_attributes (COMMA expression_list)? | expression_list)
    ;

/*
 * SQL/XML support
 */
xml_root_version
    : VERSION_GS expression
    | VERSION_GS NO_GS VALUE_GS
    ;

opt_xml_root_standalone
    : COMMA STANDALONE_GS (YES_GS | NO_GS VALUE_GS?)
    ;

xml_attributes
    : XMLATTRIBUTES_GS LEFT_PAREN xml_attribute_list RIGHT_PAREN
    ;

xml_attribute_list
    : xml_attribute_el (COMMA xml_attribute_el)*
    ;

xml_attribute_el
    : expression (AS_GS col_label)?
    ;

document_or_content
    : DOCUMENT_GS
    | CONTENT_GS
    ;

xml_whitespace_option
    : (PRESERVE_GS | STRIP_GS) WHITESPACE_GS
    ;

/* We allow several variants for SQL and other compatibility. */
xmlexists_argument
    : PASSING_GS (BY_GS REF_GS)? expression (BY_GS REF_GS)?
    ;

extract_list
    : extract_arg FROM_GS expression
    ;

/* Allow delimited string SCONST in extract_arg as an SQL extension.
 * - thomas 2001-04-12
 */

extract_arg 
    : identifier
    | YEAR_GS
    | MONTH_GS
    | DAY_GS
    | HOUR_GS
    | MINUTE_GS  
    | SECOND_GS
    | DELIMITED_STR   
    ;

/* OVERLAY() arguments
 * SQL99 defines the OVERLAY() function:
 * o overlay(text placing text from int for int)
 * o overlay(text placing text from int)
 */
overlay_list
    : expression overlay_placing substr_from substr_for?
    ;

overlay_placing
    : PLACING_GS expression
    ;

/* position_list uses a_expr not a_expr to avoid conflict with general IN */

position_list
    : expression IN_GS expression
    ;

/* SUBSTRING() arguments
 * SQL9x defines a specific syntax for arguments to SUBSTRING():
 * o substring(text from int for int)
 * o substring(text from int) get entire string from starting point "int"
 * o substring(text for int) get first "int" characters of string
 * o substring(text from pattern) get entire string matching pattern
 * o substring(text from pattern for escape) same with specified escape char
 * We also want to support generic substring functions which accept
 * the usual generic list of arguments. So we will accept both styles
 * here, and convert the SQL9x style to the generic list for further
 * processing. - thomas 2000-11-28
 */
substr_list
    : expression substr_from substr_for
    | expression substr_for substr_from
    | expression substr_from
    | expression substr_for
    | expression_list
    ;

substr_from 
    : FROM_GS expression 
    ;

substr_for
    : FOR_GS expression   
    ;

trim_list
    : (expression? FROM)? expression_list 
    ;

simple_function
    : func_name simple_func_params
    ;

func_name
    : regular_id_common
    | CHAR_STRING
    ;

simple_func_params
    : LEFT_PAREN (ASTERISK | expression_list)? RIGHT_PAREN
    | LEFT_PAREN VARIADIC_GS expression_list RIGHT_PAREN
    | LEFT_PAREN expression_list COMMA VARIADIC_GS expression RIGHT_PAREN
    ;

atom
    : general_element
    | constant  // pay attention to datetype and geometry type
    | LEFT_PAREN select_stmt RIGHT_PAREN
    | LEFT_PAREN expression_list RIGHT_PAREN
    ;

// normal identifier, like a.b.c.d
general_element
    : general_element_part (PERIOD general_element_part)*
    ;

general_element_part
    : identifier (PERIOD identifier)*
    ;

identifier
    : regular_id_common
    | nonreserved_keywords_can_not_be_name
    | CHAR_STRING
    ;

// this could be name of any, including function and typename
regular_id_common
    : REGULAR_ID
    | reserved_keywords_normal
    | reserved_keywords_can_be_name
    | nonreserved_keywords_normal
    ;

// regular_id could be name of any, but some nonreserved keywords can not be
// name of function and typename
regular_id
    : regular_id_common
    ;

// constant can be number, strings, date, geometry, bit string, inet,
constant
    : numeric
    | CHAR_STRING
    | date_type CHAR_STRING
    | geometry_type CHAR_STRING
    | BCONST
    | inet_type CHAR_STRING
    | NULL_GS
    | FALSE_GS
    | TRUE_GS
    ;

case_expr
    : CASE_GS when_clause+ case_default? END_GS
    ;

when_clause
    : WHEN_GS expression THEN_GS expression
    ;

case_default
    : ELSE_GS expression
    ;

quantified_expression
    : (SOME_GS | EXISTS_GS | ALL_GS | ANY_GS) (LEFT_PAREN select_stmt RIGHT_PAREN | LEFT_PAREN expression RIGHT_PAREN)
    ;

array_expr
    : LEFT_BRACKET expression_list? RIGHT_BRACKET
    | LEFT_BRACKET array_expr_list RIGHT_BRACKET
    ;

array_expr_list
    : array_expr (COMMA array_expr)*
    ;


// reserved keywords;
reserved_keywords_normal
    : ALL_GS
    | ANALYSE_GS
    | ANALYZE_GS
    | AND_GS
    | ANY_GS
    | ARRAY_GS
    | ASC_GS
    | ASYMMETRIC_GS
    | AS_GS
    | AUTHID_GS
    | BOTH_GS
    | BUCKETS_GS
    | CASE_GS
    | CAST_GS
    | CHECK_GS
    | COLLATE_GS
    | COLUMN_GS
    | CONSTRAINT_GS
    | CREATE_GS
    | CURRENT_CATALOG_GS
    | CURRENT_DATE_GS
    | CURRENT_ROLE_GS
    | CURRENT_TIMESTAMP_GS
    | CURRENT_TIME_GS
    | CURRENT_USER_GS
    | DEFAULT_GS
    | DEFERRABLE_GS
    | DESC_GS
    | DISTINCT_GS
    | DO_GS
    | ELSE_GS
    | END_GS
    | EXCEPT_GS
    | FALSE_GS
    | FETCH_GS
    | FOREIGN_GS
    | FOR_GS
    | FROM_GS
    | FUNCTION_GS
    | GRANT_GS
    | GROUP_GS
    | HAVING_GS
    | INITIALLY_GS
    | INTERSECT_GS
    | INTO_GS
    | IN_GS
    | IS_GS
    | LEADING_GS
    | LESS_GS
    | LIMIT_GS
    | LOCALTIMESTAMP_GS
    | LOCALTIME_GS
    | MAXVALUE_GS
    | MINUS_GS
    | MODIFY_GS
    | NLSSORT_GS
    | NOT_GS
    | NULL_GS
    | OFFSET_GS
    | ONLY_GS
    | ON_GS
    | ORDER_GS
    | OR_GS
    | PERFORMANCE_GS
    | PLACING_GS
    | PRIMARY_GS
    | PROCEDURE_GS
    | REFERENCES_GS
    | REJECT_GS
    | RETURNING_GS
    | RETURN_GS
    | SELECT_GS
    | SESSION_USER_GS
    | SOME_GS
    | SPLIT_GS
    | SYMMETRIC_GS
    | SYSDATE_GS
    | TABLE_GS
    | THEN_GS
    | TO_GS
    | TRAILING_GS
    | TRUE_GS
    | UNION_GS
    | UNIQUE_GS
    | USER_GS
    | USING_GS
    | VARIADIC_GS
    | WHEN_GS
    | WHERE_GS
    | WINDOW_GS
    | WITH_GS
    ;

// reserved keywords can be name of function or type;
reserved_keywords_can_be_name
    : AUTHORIZATION_GS
    | BINARY_GS
    | COLLATION_GS
    | CONCURRENTLY_GS
    | CROSS_GS
    | CURRENT_SCHEMA_GS
    | FREEZE_GS
    | FULL_GS
    | ILIKE_GS
    | INNER_GS
    | ISNULL_GS
    | JOIN_GS
    | LEFT_GS
    | LIKE_GS
    | NATURAL_GS
    | NOTNULL_GS
    | OUTER_GS
    | OVERLAPS_GS
    | OVER_GS
    | RIGHT_GS
    | SIMILAR_GS
    | VERBOSE_GS
    ;

// nonreserved keywords;
nonreserved_keywords_normal
    : ABORT_GS
    | ABSOLUTE_GS
    | ACCESS_GS
    | ACCOUNT_GS
    | ACTION_GS
    | ADD_GS
    | ADMIN_GS
    | AFTER_GS
    | AGGREGATE_GS
    | ALSO_GS
    | ALTER_GS
    | ALWAYS_GS
    | APP_GS
    | ASSERTION_GS
    | ASSIGNMENT_GS
    | ATTRIBUTE_GS
    | AT_GS
    | AUTOEXTEND_GS
    | AUTOMAPPED_GS
    | BACKWARD_GS
    | BARRIER_GS
    | BEFORE_GS
    | BEGIN_GS
    | BLOB_GS
    | BY_GS
    | CACHE_GS
    | CALLED_GS
    | CALL_GS
    | CASCADED_GS
    | CASCADE_GS
    | CATALOG_GS
    | CHAIN_GS
    | CHARACTERISTICS_GS
    | CHECKPOINT_GS
    | CLASS_GS
    | CLEAN_GS
    | CLOB_GS
    | CLOSE_GS
    | CLUSTER_GS
    | COMMENTS_GS
    | COMMENT_GS
    | COMMITTED_GS
    | COMMIT_GS
    | COMPRESS_GS
    | CONFIGURATION_GS
    | CONNECTION_GS
    | CONSTRAINTS_GS
    | CONTENT_GS
    | CONTINUE_GS
    | CONVERSION_GS
    | COORDINATOR_GS
    | COPY_GS
    | COST_GS
    | CSV_GS
    | CURRENT_GS
    | CURSOR_GS
    | CYCLE_GS
    | DATABASE_GS
    | DATAFILE_GS
    | DATA_GS
    | DAY_GS
    | DBCOMPATIBILITY_GS
    | DEALLOCATE_GS
    | DECLARE_GS
    | DEFAULTS_GS
    | DEFERRED_GS
    | DEFINER_GS
    | DELETE_GS
    | DELIMITERS_GS
    | DELIMITER_GS
    | DELTA_GS
    | DETERMINISTIC_GS
    | DICTIONARY_GS
    | DIRECT_GS
    | DISABLE_GS
    | DISCARD_GS
    | DISTRIBUTE_GS
    | DISTRIBUTION_GS
    | DOCUMENT_GS
    | DOMAIN_GS
    | DOUBLE_GS
    | DROP_GS
    | EACH_GS
    | ENABLE_GS
    | ENCODING_GS
    | ENCRYPTED_GS
    | ENFORCED_GS
    | ENUM_GS
    | EOL_GS
    | ESCAPE_GS
    | ESCAPING_GS
    | EVERY_GS
    | EXCHANGE_GS
    | EXCLUDE_GS
    | EXCLUDING_GS
    | EXCLUSIVE_GS
    | EXECUTE_GS
    | EXPLAIN_GS
    | EXTENSION_GS
    | EXTERNAL_GS
    | FAMILY_GS
    | FILEHEADER_GS
    | FIRST_GS
    | FIXED_GS
    | FOLLOWING_GS
    | FORCE_GS
    | FORMATTER_GS
    | FORWARD_GS
    | FUNCTIONS_GS
    | GLOBAL_GS
    | GRANTED_GS
    | HANDLER_GS
    | HEADER_GS
    | HOLD_GS
    | HOUR_GS
    | IDENTIFIED_GS
    | IDENTITY_GS
    | IF_GS
    | IMMEDIATE_GS
    | IMMUTABLE_GS
    | IMPLICIT_GS
    | INCLUDING_GS
    | INCREMENT_GS
    | INDEXES_GS
    | INDEX_GS
    | INHERITS_GS
    | INHERIT_GS
    | INITIAL_GS
    | INITRANS_GS
    | INLINE_GS
    | INPUT_GS
    | INSENSITIVE_GS
    | INSERT_GS
    | INSTEAD_GS
    | INVOKER_GS
    | ISOLATION_GS
    | KEY_GS
    | LABEL_GS
    | LANGUAGE_GS
    | LARGE_GS
    | LAST_GS
    | LC_COLLATE_GS
    | LC_CTYPE_GS
    | LEAKPROOF_GS
    | LEVEL_GS
    | LISTEN_GS
    | LOAD_GS
    | LOCAL_GS
    | LOCATION_GS
    | LOCK_GS
    | LOGGING_GS
    | LOGIN_GS
    | LOG_GS
    | LOOP_GS
    | MAPPING_GS
    | MATCHED_GS
    | MATCH_GS
    | MAXEXTENTS_GS
    | MAXSIZE_GS
    | MAXTRANS_GS
    | MERGE_GS
    | MINEXTENTS_GS
    | MINUTE_GS
    | MINVALUE_GS
    | MODE_GS
    | MONTH_GS
    | MOVEMENT_GS
    | MOVE_GS
    | NAMES_GS
    | NAME_GS
    | NEXT_GS
    | NOCOMPRESS_GS
    | NOCYCLE_GS
    | NODE_GS
    | NOLOGGING_GS
    | NOLOGIN_GS
    | NOMAXVALUE_GS
    | NOMINVALUE_GS
    | NOTHING_GS
    | NOTIFY_GS
    | NOWAIT_GS
    | NO_GS
    | NULLS_GS
    | NUMSTR_GS
    | OBJECT_GS
    | OFF_GS
    | OF_GS
    | OIDS_GS
    | OPERATOR_GS
    | OPTIMIZATION_GS
    | OPTIONS_GS
    | OPTION_GS
    | OWNED_GS
    | OWNER_GS
    | PARSER_GS
    | PARTIAL_GS
    | PARTITIONS_GS
    | PARTITION_GS
    | PASSING_GS
    | PASSWORD_GS
    | PCTFREE_GS
    | PERCENT_GS
    | PER_GS
    | PLANS_GS
    | POOL_GS
    | PRECEDING_GS
    | PREFERRED_GS
    | PREFIX_GS
    | PREPARED_GS
    | PREPARE_GS
    | PRESERVE_GS
    | PRIOR_GS
    | PRIVILEGES_GS
    | PRIVILEGE_GS
    | PROCEDURAL_GS
    | PROFILE_GS
    | QUERY_GS
    | QUOTE_GS
    | RANGE_GS
    | RAW_GS
    | READ_GS
    | REASSIGN_GS
    | REBUILD_GS
    | RECHECK_GS
    | RECURSIVE_GS
    | REF_GS
    | REINDEX_GS
    | RELATIVE_GS
    | RELEASE_GS
    | RELOPTIONS_GS
    | REMOTE_GS
    | RENAME_GS
    | REPEATABLE_GS
    | REPLACE_GS
    | REPLICA_GS
    | RESET_GS
    | RESIZE_GS
    | RESOURCE_GS
    | RESTART_GS
    | RESTRICT_GS
    | RETURNS_GS
    | REUSE_GS
    | REVOKE_GS
    | ROLE_GS
    | ROLLBACK_GS
    | ROWS_GS
    | RULE_GS
    | SAVEPOINT_GS
    | SCHEMA_GS
    | SCROLL_GS
    | SEARCH_GS
    | SECOND_GS
    | SECURITY_GS
    | SEQUENCES_GS
    | SEQUENCE_GS
    | SERIALIZABLE_GS
    | SERVER_GS
    | SESSION_GS
    | SET_GS
    | SHARE_GS
    | SHOW_GS
    | SIMPLE_GS
    | SIZE_GS
    | SNAPSHOT_GS
    | STABLE_GS
    | STANDALONE_GS
    | START_GS
    | STATEMENT_GS
    | STATISTICS_GS
    | STDIN_GS
    | STDOUT_GS
    | STORAGE_GS
    | STORE_GS
    | STRICT_GS
    | STRIP_GS
    | SUPERUSER_GS
    | SYSID_GS
    | SYS_REFCURSOR_GS
    | SYSTEM_GS
    | TABLESPACE_GS
    | TABLES_GS
    | TEMPLATE_GS
    | TEMPORARY_GS
    | TEMP_GS
    | TEXT_GS
    | THAN_GS
    | TRANSACTION_GS
    | TRIGGER_GS
    | TRUNCATE_GS
    | TRUSTED_GS
    | TYPES_GS
    | TYPE_GS
    | UNBOUNDED_GS
    | UNCOMMITTED_GS
    | UNENCRYPTED_GS
    | UNKNOWN_GS
    | UNLIMITED_GS
    | UNLISTEN_GS
    | UNLOCK_GS
    | UNLOGGED_GS
    | UNTIL_GS
    | UNUSABLE_GS
    | UPDATE_GS
    | VACUUM_GS
    | VALIDATE_GS
    | VALIDATION_GS
    | VALIDATOR_GS
    | VALID_GS
    | VALUE_GS
    | VARYING_GS
    | VERSION_GS
    | VIEW_GS
    | VOLATILE_GS
    | WHITESPACE_GS
    | WITHIN_GS
    | WITHOUT_GS
    | WORKLOAD_GS
    | WORK_GS
    | WRAPPER_GS
    | WRITE_GS
    | XML_GS
    | YEAR_GS
    | YES_GS
    | ZONE_GS
    ;

// nonreserved keywords can not be name of function and type;
nonreserved_keywords_can_not_be_name
    : BETWEEN_GS
    | BIGINT_GS
    | BINARY_DOUBLE_GS
    | BINARY_INTEGER_GS
    | BIT_GS
    | BOOLEAN_GS
    | CHARACTER_GS
    | CHAR_GS
    | COALESCE_GS
    | DATE_GS
    | DECIMAL_GS
    | DECODE_GS
    | DEC_GS
    | EXISTS_GS
    | EXTRACT_GS
    | FLOAT_GS
    | GREATEST_GS
    | INOUT_GS
    | INTEGER_GS
    | INTERVAL_GS
    | INT_GS
    | LEAST_GS
    | NATIONAL_GS
    | NCHAR_GS
    | NONE_GS
    | NULLIF_GS
    | NUMBER_GS
    | NUMERIC_GS
    | NVARCHAR2_GS
    | NVL_GS
    | OUT_GS
    | OVERLAY_GS
    | POSITION_GS
    | PRECISION_GS
    | REAL_GS
    | ROW_GS
    | SETOF_GS
    | SMALLDATETIME_GS
    | SMALLINT_GS
    | SUBSTRING_GS
    | TIMESTAMP_GS
    | TIME_GS
    | TINYINT_GS
    | TREAT_GS
    | TRIM_GS
    | VALUES_GS
    | VARCHAR2_GS
    | VARCHAR_GS
    | XMLATTRIBUTES_GS
    | XMLCONCAT_GS
    | XMLELEMENT_GS
    | XMLEXISTS_GS
    | XMLFOREST_GS
    | XMLPARSE_GS
    | XMLPI_GS
    | XMLROOT_GS
    | XMLSERIALIZE_GS
    ;

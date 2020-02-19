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
    | alter_database
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
    | alter_workload_group_stmt
      
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
    ;

abort_stmt
    : ABORT_GS (WORK_GS | TRANSACTION_GS)
    ;

alter_group_mapping_stmt
    : ALTER_GS APP_GS WORKLOAD_GS GROUP_GS MAPPING_GS app_name WITH_GS assignment_stmt
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
    : identifier (EQUALS_OP assignment_value)?
    ;

assignment_value
    : expression
    | SCONST
    ;

alter_database
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
    : SET_GS configuration_param ((TO_GS | EQUALS_OP) (expression | DEFAULT_GS)
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
    : ALTER_GS FOREIGN_GS TABLES_GS (IF_GS EXISTS_GS)? table_name alter_foreign_table_option
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
    : ADD_GS (CONSTRAINT_GS constraint_name)? (PRIMARY_GS KEY_GS | UNIQUE_GS)
      LEFT_PAREN column_name RIGHT_PAREN add_info_constraint_option?
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
    : ALTER_GS INDEX_GS (IF_GS EXISTS_GS)? index_name alter_index_option
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
    : ALTER_GS row_level_security? POLICY_GS (IF_GS EXISTS_GS)? policy_name ON_GS 
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
    ;

// alter schema
alter_schema_stmt
    : ALTER_GS SCHEMA_GS schema_name rename_owner_to_option
    ;

// atler sequence stmt
alter_sequence_stmt
    : ALTER_GS SEQUENCE_GS (IF_GS EXISTS_GS)? sequence_name alter_seq_option?
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
    : param_name ((TO_GS | EQUALS_OP) (expression | DEFAULT_GS) | FROM_GS CURRENT_GS)
    | CURRENT_SCHEMA_GS (TO_GS | EQUALS_OP)? (schema_name | DEFAULT_GS)
    | TIME_GS ZONE_GS CHAR_STRING
    | SCHEMA_GS schema_name
    | NAMES_GS encoding_name
    | ROLE_GS role_name PASSWORD_GS CHAR_STRING
    | SESSION_GS AUTHORIZATION_GS (role_name PASSWORD_GS CHAR_STRING | DEFAULT_GS)
    | XML_GS OPTION_GS (DOCUMENT_GS | CONTENT_GS)
    | 
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
    : ALTER_GS TABLE_GS (IF_GS EXISTS_GS)? alter_table_name alter_table_stmt_option
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
    | MODIFY_GS LEFT_PAREN column_clause_modify_option (COMMA column_clause_modify_option)* RIGHT_PAREN
    ;

alter_table_action_list
    : column_clause
    | ADD_GS table_constraint (NOT_GS VALID_GS)?
    | ADD_GS table_constraint_using_index
    | VALIDATE_GS CONSTRAINT_GS constraint_name
    | DROP_GS CONSTRAINT_GS (IF_GS EXISTS_GS)? constraint_name cascade_restrict?
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
    | MODIFY_GS column_clause_modify_option
    | DROP_GS COLUMN_GS? (IF_GS EXISTS_GS)? column_name cascade_restrict?
    | ALTER_GS COLUMN_GS? column_name column_clause_alter_column_option
    ; 

column_clause_add_column_option
    : column_name typename_gs compress_type? collate_option? column_constraint*
    ;

column_clause_modify_option
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

column_constraint
    : (CONSTRAINT_GS constraint_name)? column_constraint_option table_constraint_deferrable?
    ;

column_constraint_option
    : NOT_GS? NULL_GS
    | CHECK_GS LEFT_PAREN expression RIGHT_PAREN
    | DEFAULT_GS expression
    | (UNIQUE_GS | PRIMARY_GS KEY_GS) index_parameters
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

table_constraint
    : (CONSTRAINT_GS constraint_name)? table_constraint_option table_constraint_deferrable?
    ;

table_constraint_option
    : CHECK_GS LEFT_PAREN expression RIGHT_PAREN
    | (UNIQUE_GS | PRIMARY_GS KEY_GS) paren_column_list index_parameters
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
    | INITIALLY_GS (DEFERRED_GS | IMMEDIATE_GS)
    ;

table_constraint_using_index
    : (CONSTRAINTS_GS constraint_name)? (UNIQUE_GS | PRIMARY_GS KEY_GS) USING_GS
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
    | DROP_GS MAPPING_GS (IF_GS EXISTS_GS)? FOR_GS token_type_list
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
    : DROP_GS ATTRIBUTE_GS (IF_GS EXISTS_GS)? attr_name cascade_restrict?
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
    : ALTER_GS VIEW_GS (IF_GS EXISTS_GS)? view_name alter_view_option
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
alter_workload_group_stmt
    : ALTER_GS WORKLOAD_GS GROUP_GS group_name USING_GS RESOURCE_GS POOL_GS pool_name
      (WITH_GS LEFT_PAREN assignment_stmt RIGHT_PAREN)?
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
    : (table_name paren_column_list?)? PARTITION_GS LEFT_PAREN partition_name RIGHT_PAREN
    | (table_name | FOREIGN_GS TABLES_GS)
    | table_name LEFT_PAREN paren_column_list RIGHT_PAREN
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
    | table_name PARTITION_GS LEFT_PAREN partition_name RIGHT_PAREN (USING_GS index_name)?
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
    : (COMMIT_GS | END_GS) (WORK_GS | TRANSACTION_GS)?
    ;

// commit prepared
commit_prepared_stmt
    : COMMIT_GS PREPARED_GS identifier (WITH_GS CSN_GS)? 
    ;

// copy stmt
copy_stmt
    : 
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
    | LEFT_PAREN subquery RIGHT_PAREN
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
    : (SOME_GS | EXISTS_GS | ALL_GS | ANY_GS) (LEFT_PAREN subquery RIGHT_PAREN | LEFT_PAREN expression RIGHT_PAREN)
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

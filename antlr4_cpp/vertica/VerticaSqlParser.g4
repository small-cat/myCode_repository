parser grammar VerticaSqlParser;

options {
    tokenVocab = VerticaSqlLexer;
}

// in vertica, hints like /*+ ... */, we just regard it as a comment and ignore it
stmts
    : stmt (SEMICOLON stmt)* SEMICOLON? EOF
    ;

stmt
    : alter_stmts
    | activate_directed_query_stmt
    | begin_stmt
    | commit_stmt
    | comment_on_stmts
    | connect_to_vertica_stmt
    | copy_stmt
    | create_stmts
    | deactive_directed_query_stmt
    | delete_stmt
    | disconnect_stmt
    | drop_stmts
    | end_stmt
    | explain_stmt
    | export_to_parquet_stmt
    | export_to_vertica_stmt
    | get_directed_query
    | grant_stmts
    | insert_stmt
    | merge_stmt
    | profile_stmt
    | release_savepoint_stmt
    | revoke_stmts
    | rollback_stmt
    | save_query_stmt
    | savepoint_stmt
    | select_stmt
    ;

// alter stmts
alter_stmts
    : alter_access_policy
    | alter_authentication
    | alter_database
    | alter_fault_group
    | alter_function_stmts
    | alter_hcatalog_schema
    | alter_library
    | alter_load_balance_group
    | alter_model
    | alter_network_address
    | alter_network_interface 
    | alter_node
    | alter_notifier
    | alter_projection
    | alter_profile
    | alter_resource_pool
    | alter_role
    | alter_routing_rule
    | alter_sequence
    | alter_subcluster
    | alter_session
    | alter_subnet
    | alter_table
    | alter_user
    | alter_view
    ;

alter_access_policy
    : V_ALTER V_ACCESS V_POLICY V_ON table_name alter_access_policy_option
    ;

table_name
    : general_element_part
    ;

alter_access_policy_option
    : (for_column expression? | for_rows where_clause?) enable_disable
    | (for_column | for_rows) V_COPY V_TO V_TABLE table_name
    ;

for_column
    : V_FOR V_COLUMN column_name 
    ; 

paren_column_list
    : LEFT_PAREN column_name (column_name)* RIGHT_PAREN
    ;

paren_column_name
    : LEFT_PAREN column_name RIGHT_PAREN
    ;

column_name
    : general_element_part encoding_option? access_ranker? grouped_column_reference?
    ;

grouped_column_reference
    : V_GROUPED LEFT_PAREN column_ref_list RIGHT_PAREN
    ;

column_ref_list
    : column_name (COMMA column_name)*
    ;

for_rows
    : V_FOR V_ROWS
    ;

where_clause
    : V_WHERE expression
    ;

enable_disable
    : V_ENABLE
    | V_DISABLE
    ;

/* alter authentication */
alter_authentication
    : V_ALTER V_AUTHENTICATION auth_method_name alter_authentication_option
    ;

auth_method_name
    : identifier
    ;

alter_authentication_option
    : enable_disable
    | access_method
    | V_RENAME V_TO auth_method_name
    | V_METHOD method_name
    | V_SET assignment_param_value_list
    | V_PRIORITY priority_value
    ;

access_method
    : V_LOCAL 
    | V_HOST (V_NO? V_TLS)? host_ip_addr
    ;

host_ip_addr
    : CHAR_STRING
    ;

method_name
    : identifier
    ;

priority_value
    : UNSIGNED_INTEGER
    ;

/* alter database */
alter_database
    : V_ALTER V_DATABASE db_spec alter_database_option
    ;

db_spec
    : database_name
    | V_DEFAULT
    ;

database_name
    : identifier
    ;

alter_database_option
    : V_DROP V_ALL V_FAULT V_GROUP
    | export_on_network_option
    | V_RESET V_STANDBY
    | set_parameter_values
    | clear_parameter_values
    ;

export_on_network_option
    : V_EXPORT V_ON (subnet_name | V_DEFAULT)
    ;

subnet_name
    : identifier
    ;

set_parameter_values
    : V_SET V_PARAMETER? assignment_param_value_list
    ;

clear_parameter_values
    : V_CLEAR V_PARAMETER? expression_list
    ;

/* alter fault group */
alter_fault_group
    : V_ALTER V_FAULT V_GROUP fault_group_name alter_fault_group_option
    ;

fault_group_name
    : identifier
    ;

alter_fault_group_option
    : (V_ADD | V_DROP) V_NODE node_name
    | (V_ADD | V_DROP) V_FAULT V_GROUP fault_group_name
    | V_RENAME V_TO fault_group_name
    ;

node_list
    : node_name (COMMA node_name)*
    ;

node_name
    : identifier
    ;

/* alter function statements */
alter_function_stmts
    : V_ALTER function_type function_name func_arg_list alter_function_option
    ;

function_type
    : (V_AGGREGATE | V_ANALYTIC | V_TRANSFORM)? V_FUNCTION
    | V_FILTER
    | V_PARSER
    | V_SOURCE
    ;

function_name
    : general_element_part
    | special_function_name
    ;

special_function_name
    : V_GROUPING V_SETS
    | V_CUBE
    | V_ROLLUP
    ;

func_arg_list
    : LEFT_PAREN (func_arg (COMMA func_arg)*)? RIGHT_PAREN
    ;

func_arg
    : expression
    | arg_name? data_type 
    ;

arg_name
    : identifier
    ;

alter_function_option
    : owner_to_option
    | rename_to_option
    | set_schema_option
    | set_fenced_option
    ;

owner_to_option
    : V_OWNER V_TO owner_name
    ;

rename_to_option
    : V_RENAME V_TO new_name
    ;

set_schema_option
    : V_SET V_SCHEMA schema_name
    ;

set_fenced_option
    : V_SET V_FENCED expression
    ;

owner_name
    : identifier
    ;

new_name
    : identifier
    ;

schema_name
    : general_element_part
    ;

/* alter hcatalog schema */
alter_hcatalog_schema
    : V_ALTER V_HCATALOG V_SCHEMA schema_name V_SET assignment_param_value+
    ;

/* alter library */
alter_library
    : V_ALTER V_LIBRARY library_name depends_option? V_AS CHAR_STRING
    ;

library_name
    : general_element_part
    ;

depends_option
    : V_DEPENDS CHAR_STRING
    ;

/* alter load balance group*/
alter_load_balance_group
    : V_ALTER V_LOAD V_BALANCE V_GROUP group_name alter_load_balance_group_option
    ;

group_name
    : identifier
    ;

alter_load_balance_group_option
    : rename_to_option
    | V_SET (V_FILTER | V_POLICY) V_TO CHAR_STRING
    | (V_ADD | V_DROP) (V_ADDRESS | V_FAULT V_GROUP | V_SUBCLUSTER) expression_list
    ;

alter_model
    : V_ALTER V_MODEL model_name alter_model_option
    ;

model_name
    : general_element_part
    ;

alter_model_option
    : rename_to_option
    | owner_to_option
    | set_schema_option
    ;

alter_network_address
    : V_ALTER V_NETWORK V_ADDRESS address_name alter_network_address_option
    ;

address_name
    : identifier
    ;

alter_network_address_option
    : rename_to_option
    | V_SET V_TO CHAR_STRING (V_PORT UNSIGNED_INTEGER)?
    | enable_disable
    ;

alter_network_interface
    : V_ALTER V_NETWORK V_INTERFACE network_interface_name rename_to_option
    ;

network_interface_name
    : identifier
    ;

alter_node
    : V_ALTER V_NODE node_name alter_node_option
    ;

alter_node_option
    : export_on_network_option
    | V_IS? node_type
    | V_REPLACE (V_WITH node_name)?
    | V_RESET
    | set_parameter_values
    | clear_parameter_values
    ;

node_type
    : V_PERMANENT
    | V_EPHEMERAL
    | V_STANDBY
    | V_EXECUTE
    ;

alter_notifier
    : V_ALTER V_NOTIFIER notifier_name notifier_parameter+
    ;

notifier_name
    : identifier
    ;

notifier_parameter
    : V_NO? V_CHECK V_COMMITTED
    | enable_disable
    | V_IDENTIFIED V_BY uuid
    | (V_MAXMEMORYSIZE | V_MAXPAYLOAD) max_size
    | V_PARAMETERS CHAR_STRING
    ;

uuid
    : identifier
    ;

max_size
    : UNSIGNED_INTEGER (V_K | V_M | V_G | V_T)
    ;

alter_projection
    : V_ALTER V_PROJECTION projection_name rename_to_option
    ;

projection_name
    : general_element_part
    ;

alter_profile
    : V_ALTER V_PROFILE profile_name alter_profile_option
    ;

profile_name
    : identifier
    ;

alter_profile_option
    : V_LIMIT (parameter_name UNSIGNED_INTEGER)
    | rename_to_option
    ;

password_parameter
    : identifier
    ;

alter_resource_pool
    : V_ALTER V_RESOURCE V_POOL pool_name ((parameter_name | V_CASCADE V_TO) expression)
    ;

pool_name
    : identifier
    ;

alter_role
    : V_ALTER V_ROLE role_name rename_to_option
    ;

role_name
    : identifier
    ;

alter_routing_rule
    : V_ALTER V_ROUTING V_RULE rule_name alter_routing_rule_option
    ;

rule_name
    : identifier
    ;

alter_routing_rule_option
    : rename_to_option
    | set_route_to_option
    | set_group_to_option
    ;

set_route_to_option
    : V_SET V_ROUTE V_TO CHAR_STRING
    ;

set_group_to_option
    : V_SET V_GROUP V_TO group_name
    ;

alter_sequence
    : V_ALTER V_SEQUENCE sequence_name (alter_sequence_behavior_option* | alter_sequence_schema_owner_option)
    ;

sequence_name
    : general_element_part
    ;

alter_sequence_behavior_option
    : V_INCREMENT V_BY? UNSIGNED_INTEGER
    | (V_MINVALUE | V_MAXVALUE) UNSIGNED_INTEGER
    | V_NO (V_MINVALUE | V_MAXVALUE)
    | V_RESTART V_WITH? UNSIGNED_INTEGER
    | V_CACHE UNSIGNED_INTEGER
    | V_NO? (V_CYCLE | V_CACHE)
    ;

alter_sequence_schema_owner_option
    : rename_to_option
    | set_schema_option
    | owner_to_option
    ;

alter_subcluster
    : V_ALTER V_SUBCLUSTER cluster_name (rename_to_option | V_SET V_DEFAULT)
    ;

cluster_name
    : identifier
    ;

alter_session
    : V_ALTER V_SESSION alter_session_option
    ;

alter_session_option
    : set_parameter_values
    | clear_parameter_values
    | set_udparameter_values
    | clear_udparameter_values
    ;

set_udparameter_values
    : V_SET V_UDPARAMETER (V_FOR library_name)? assignment_param_value_list
    ;

clear_udparameter_values
    : V_CLEAR V_UDPARAMETER ((V_FOR library_name)? expression_list | V_ALL)
    ;

alter_subnet
    : V_ALTER V_SUBNET subnet_name rename_to_option 
    ;

alter_table
    : V_ALTER V_TABLE table_name alter_table_option
    | V_ALTER V_TABLE table_list V_RENAME V_TO table_list
    ;

table_list
    : table_name (COMMA table_name)*
    ;

alter_table_option
    : V_ADD V_COLUMN if_not_exists? column_name data_type column_constraint? encoding_option?
      (V_PROJECTIONS LEFT_PAREN projections_list RIGHT_PAREN | V_ALL V_PROJECTIONS)
    | V_ADD table_constraint
    | V_ALTER V_COLUMN (V_SET | V_DROP) expression
    | V_ALTER V_CONSTRAINT constraint_name enable_disable
    | V_DROP V_CONSTRAINT constraint_name cascade_restrict
    | V_DROP V_COLUMN? if_not_exists? column_name cascade_restrict
    | V_FORCE V_OUTER UNSIGNED_INTEGER
    | include_exclude_privileges
    | owner_to_option
    | partition_clause V_REORGANIZE?
    | V_REMOVE V_PARTITIONING
    | V_RENAME V_COLUMN? column_name V_TO column_name
    | V_REORGANIZE
    | V_SET UNSIGNED_INTEGER expression
    | set_schema_option
    | set_storage_option
    ;

include_exclude_privileges
    : (V_INCLUDE | V_EXCLUDE | V_MATERIALIZE) V_SCHEMA? V_PRIVILEGES
    ;

if_not_exists
    : V_IF V_NOT? V_EXISTS
    ;

column_constraint
    : (V_AUTO_INCREMENT | V_IDENTITY) paren_column_name? 
    | V_CONSTRAINT constraint_name
    | check_expression
    | (V_DEFAULT expression)? V_SET V_USING expression
    | V_DEFAULT V_USING expression
    | V_NOT? V_NULL
    | V_PRIMARY V_KEY enable_disable? V_REFERENCES table_name paren_column_name
    | V_UNIQUE enable_disable?
    ;

check_expression
    : V_CHECK LEFT_PAREN expression RIGHT_PAREN enable_disable?
    ;

table_constraint
    : (V_CONSTRAINT constraint_name)? table_constraint_option
    ;

table_constraint_option
    : V_PRIMARY V_KEY paren_column_list enable_disable?
    | V_FOREIGN V_KEY paren_column_list V_REFERENCES table_name paren_column_list?
    | V_UNIQUE paren_column_list enable_disable?
    | check_expression
    ;

encoding_option
    : V_ENCODING encoding_type_name
    ;

encoding_type_name
    : identifier
    ;

projections_list
    : projection_name (COMMA projection_name)*
    ;

constraint_name
    : identifier
    ;

cascade_restrict
    : V_CASCADE
    | V_RESTRICT
    ;

set_storage_option
    : V_SET V_STORAGE load_method
    ;

load_method
    : V_AUTO
    | V_DIRECT
    | V_TRICKLE
    ;

partition_clause
    : V_PARTITION V_BY expression (V_GROUP V_BY expression)? UNSIGNED_INTEGER?
    ;

alter_user
    : V_ALTER V_USER user_name user_parameter_setting_list
    ;

user_name
    : identifier
    ;

user_parameter_setting_list
    : user_parameter_setting (COMMA user_parameter_setting)*
    ;

user_parameter_setting
    : user_parameter expression
    ;

user_parameter
    : parameter_name
    | V_DEFAULT V_ROLE
    | V_IDENTIFIED V_BY
    | V_PASSWORD V_EXPIRE
    | V_RENAME V_TO
    | V_CASCADE V_TO
    | V_RESOURCE V_POOL
    ;

alter_view
    : V_ALTER V_VIEW view_name alter_view_option
    ;

view_name
    : general_element_part
    ;

alter_view_option
    : owner_to_option
    | set_schema_option
    | include_exclude_privileges
    ; 

activate_directed_query_stmt
    : V_ACTIVATE V_DIRECTED V_QUERY query_name
    ;

query_name
    : identifier
    ;

begin_stmt
    : V_BEGIN (V_WORK | V_TRANSACTION)? isolation_level? transaction_mode?
    ;

isolation_level
    : V_READ (V_COMMITTED | V_UNCOMMITTED)
    | V_SERIALIZABLE
    | V_REPEATABLE V_READ
    | 
    ;

transaction_mode
    : V_READ (V_ONLY | V_WRITE)
    ;

commit_stmt
    : V_COMMIT (V_WORK | V_TRANSACTION)? 
    ;

/* comment on statements */
comment_on_stmts
    : V_COMMENT V_ON comment_objects V_IS (CHAR_STRING | V_NULL)
    ;

comment_objects
    : V_CONSTRAINT constraint_name V_ON table_name
    | (V_AGGREGATE | V_ANALYTIC | V_TRANSFORM)? V_FUNCTION function_name func_arg_list
    | V_LIBRARY library_name
    | V_NODE node_name
    | (V_PROJECTION | V_COLUMN) projection_name
    | V_SCHEMA schema_name
    | V_TABLE table_name
    | V_SEQUENCE sequence_name
    | V_VIEW view_name
    ;

connect_to_vertica_stmt
    : V_CONNECT V_TO V_VERTICA db_spec V_USER user_name V_PASSWORD CHAR_STRING 
      V_ON CHAR_STRING COMMA UNSIGNED_INTEGER (V_TLSMODE V_PREFER)?
    ;

/* copy statement */
copy_stmt
    : V_COPY table_name? copy_column_as_expression? copy_column_option? V_FROM
      copy_from_option orc_parquet? copy_other_option*
    ;

copy_column_as_expression
    : LEFT_PAREN copy_column_as_expression_option (COMMA copy_column_as_expression_option)* RIGHT_PAREN
    ;

copy_column_as_expression_option
    : column_as_expression (copy_common_option | V_FILLER data_type)*
    ;

column_as_expression
    : column_name (V_AS expression)?
    ;

copy_column_option
    : V_COLUMN V_OPTION LEFT_PAREN copy_column_option_option (COMMA copy_column_option_option)* RIGHT_PAREN
    ;

copy_column_option_option
    : column_name copy_common_option*
    ;

copy_from_option
    : local_input_fmt (COMMA local_input_fmt)*
    | on_node_input_fmt (COMMA on_node_input_fmt)*
    | V_VERTICA table_name paren_column_list?
    | V_WITH? udl_clause+
    ;

local_input_fmt
    : V_LOCAL? (V_STDIN | CHAR_STRING) input_format?
    ;

input_format
    : V_UNCOMPRESSED 
    | V_BZIP
    | V_GZIP
    | V_LZO
    | V_ZSTD
    ;

on_node_input_fmt
    : CHAR_STRING (V_ON (node_name | V_ANY V_NODE | LEFT_PAREN node_list RIGHT_PAREN))? input_format?
    ;

udl_clause
    : (V_SOURCE | V_FILTER | V_PARSER) src_fit_parser LEFT_PAREN assignment_param_value_list? RIGHT_PAREN
    ;

src_fit_parser
    : identifier
    ;

copy_common_option
    : V_DELIMITER V_AS? CHAR_STRING
    | V_ENCLOSED V_BY? CHAR_STRING
    | V_ENFORCELENGTH
    | V_ESCAPE V_AS? CHAR_STRING 
    | V_NO V_ESCAPE
    | V_FORMAT CHAR_STRING
    | V_NULL V_AS? CHAR_STRING
    | V_TRIM CHAR_STRING
    ;

orc_parquet
    : (V_ORC | V_PARQUET) LEFT_PAREN assignment_param_value_list RIGHT_PAREN
    | V_NATIVE V_VARCHAR?
    | V_FIXEDWIDTH V_COLSIZES LEFT_PAREN UNSIGNED_INTEGER (COMMA UNSIGNED_INTEGER)* RIGHT_PAREN
    ;

// orc and parquet is not confirmed
copy_other_option
    : V_ABORT V_ON V_ERROR
    | V_ERROR V_TOLERANCE
    | V_EXCEPTIONS CHAR_STRING (V_ON node_list)?
    | V_RECORD V_TERMINATOR CHAR_STRING
    | V_REJECTED V_DATA (CHAR_STRING (V_ON node_list) | V_AS V_TABLE table_name)
    | (V_REJECTMAX | V_SKIP V_BYTES?) UNSIGNED_INTEGER
    | V_STORAGE? load_method
    | V_STREAM V_NAME CHAR_STRING
    | V_TRAILING V_NULLCOLS
    | V_WITH? (V_PARSER) parser_name LEFT_PAREN assignment_param_value_list RIGHT_PAREN
    | V_NO V_COMMIT
    | copy_common_option
    ;

parser_name
    : identifier
    ;

/* create statements */
create_stmts
    : create_access_prolicy
    | create_authentication
    | create_directed_query
    | create_fault_group
    | create_table_stmt
    | create_function_stmt
    | create_hcatalog_schema
    | create_library
    | create_load_balance_group
    | create_view
    | create_location
    | create_network_address
    | create_network_interface
    | create_notifier
    | create_procedure
    | create_profile
    | create_projection
    | create_resource_pool
    | create_role
    | create_routing_rule
    | create_schema
    | create_sequence
    | create_subnet
    | create_text_index
    | create_user
    ;

create_access_prolicy
    : V_CREATE V_ACCESS V_POLICY V_ON table_name (V_FOR V_COLUMN column_name | V_FOR V_ROWS where_clause) enable_disable
    ;

create_authentication
    : V_CREATE V_AUTHENTICATION auth_method_name V_METHOD CHAR_STRING access_method
    ;

create_directed_query
    : V_CREATE V_DIRECTED V_QUERY (V_OPT | V_OPTIMIZER | V_CUSTOM) query_name comment_option? query_name
    ;

comment_option
    : V_COMMENT CHAR_STRING
    ;

create_fault_group
    : V_CREATE V_FAULT V_GROUP group_name
    ;

create_table_stmt
    : create_table
    | create_flexible_external_table_as_copy
    | create_temporary_table
    ;

create_table
    : V_CREATE temp_flex? V_TABLE if_not_exists? table_name create_table_column_definition
      load_method? order_by_clause? segmentation_spec? ksafe_option? partition_clause? include_exclude_privileges?
    | V_CREATE temp_flex? V_TABLE if_not_exists? table_name (as_clause | like_clause)
    ;

ksafe_option
    : V_KSAFE UNSIGNED_INTEGER?
    ;

temp_flex
    : (scope? (V_TEMP | V_TEMPORARY))? (V_FLEX | V_FLEXIBLE) 
    ;

scope
    : V_GLOBAL
    | V_LOCAL
    ;

create_table_column_definition
    : LEFT_PAREN column_definitions (COMMA table_constraints)? RIGHT_PAREN
    ;

column_definitions
    : column_defition (COMMA column_defition)*
    ;

column_defition
    : column_name data_type column_constraint* encoding_option? access_ranker?
    ;

access_ranker
    : V_ACCESSRANK UNSIGNED_INTEGER
    ;

table_constraints
    : table_constraint (COMMA table_constraint)*
    ;

order_by_clause
    : V_ORDER V_BY expression asc_desc? (COMMA expression asc_desc?)*
    ;

segmentation_spec
    : hash_segmentation_clause
    | unsegmented_clause
    ;

hash_segmentation_clause
    : V_SEGMENTED V_BY expression (V_ALL V_NODES (V_OFFSET number_literal)? | V_NODES node_list)
    ;

unsegmented_clause
    : V_UNSEGMENTED (V_NODE node_name | V_ALL V_NODES)
    ;

as_clause
    : paren_column_list? load_method? include_exclude_privileges? V_AS at_epoch?
      select_stmt (V_ENCODED V_BY column_ref_list)?
    ;

at_epoch
    : V_AT epoch
    ;

like_clause
    : V_LIKE table_name include_exclude_projections? load_method? include_exclude_privileges?
    ;

include_exclude_projections
    : (V_INCLUDING | V_EXCLUDING) V_PROJECTIONS
    ;

epoch
    : V_EPOCH V_LATEST
    | V_EPOCH UNSIGNED_INTEGER
    | V_TIME CHAR_STRING
    ;

create_flexible_external_table_as_copy
    : V_CREATE (V_FLEX | V_FLEXIBLE)? V_EXTERNAL V_TABLE if_not_exists? table_name create_table_column_definition
      include_exclude_privileges? V_AS copy_stmt
    ;

create_temporary_table
    : V_CREATE scope? (V_TEMP | V_TEMPORARY) V_TABLE if_not_exists? table_name
      create_table_column_definition table_constraint? (V_ON V_COMMIT (V_DELETE | V_PRESERVE) V_ROWS)?
      load_method? ((V_NO V_PROJECTION)? order_by_clause? segmentation_spec? 
      ksafe_option? include_exclude_privileges? | as_clause)
    ;

/* create function stmt */
create_function_stmt
    : V_CREATE or_replace? function_type? function_name V_AS create_function_option*
    | V_CREATE or_replace? V_FUNCTION function_name func_arg_list V_RETURN data_type
      V_AS V_BEGIN V_RETURN expression V_END
    ;

or_replace
    : V_OR V_REPLACE
    ;

create_function_option
    : language_option
    | V_NAME CHAR_STRING
    | V_LIBRARY library_name
    | V_NOT? V_FENCED
    ;

language_option
    : V_LANGUAGE CHAR_STRING
    ;

create_hcatalog_schema
    : V_CREATE V_HCATALOG V_SCHEMA if_not_exists? schema_name (V_AUTHENTICATION user_name)?
      (V_WITH assignment_param_value_list)?
    ;

create_library
    : V_CREATE or_replace? V_LIBRARY library_name V_AS library_path depends_option? language_option?
    ;

library_path
    : CHAR_STRING
    ;

create_load_balance_group
    : V_CREATE V_LOAD V_BALANCE V_GROUP group_name V_WITH create_load_balance_group_option policy_option?
    ;

create_load_balance_group_option
    : V_ADDRESS address_name (COMMA)* address_name
    | V_FAULT V_GROUP fault_group_name (COMMA fault_group_name)* filter_option
    | V_SUBCLUSTER cluster_name (COMMA cluster_name)* filter_option
    ;

filter_option
    : V_FILTER CHAR_STRING
    ;

policy_option
    : V_POLICY CHAR_STRING
    ;

create_view
    : V_CREATE or_replace? (V_LOCAL (V_TEMP | V_TEMPORARY))? V_VIEW view_name paren_column_list? include_exclude_privileges?
      V_AS select_stmt
    ;

create_location
    : V_CREATE V_LOCATION location_path (V_NODE node_name | V_ALL V_NODES)?
      V_SHARED? (V_USAGE CHAR_STRING)? (V_LABEL CHAR_STRING)? (V_LIMIT CHAR_STRING)?
    ;

location_path
    : CHAR_STRING
    ;

create_network_address
    : V_CREATE V_NETWORK V_ADDRESS address_name V_ON node_name V_WITH CHAR_STRING
    ;

create_network_interface
    : V_CREATE V_NETWORK V_INTERFACE network_interface_name V_ON node_name V_WITH CHAR_STRING
    ;

create_notifier
    : V_CREATE V_NOTIFIER if_not_exists? notifier_name V_ACTION action_url V_MAXMEMORYSIZE
      max_size notifier_parameter*
    ;

action_url
    : CHAR_STRING
    ;

create_procedure
    : V_CREATE V_PROCEDURE procedure_name func_arg_list V_AS CHAR_STRING language_option V_USER CHAR_STRING
    ;

procedure_name
    : general_element_part
    ;

create_profile
    : V_CREATE V_PROFILE profile_name V_LIMIT user_parameter_setting?
    ;

create_projection
    : V_CREATE V_PROJECTION if_not_exists? projection_name projection_column_list?
      V_AS projection_as_option
    ;

projection_column_list
    : project_column (COMMA project_column)*
    ;

project_column
    : // TODO ------------------------- 
    ;

projection_as_option
    : V_SELECT select_list V_FROM table_name as_alias? order_by_clause? 
      group_by_clause? segmentation_spec? ksafe_option?
    | // TODO: batch-query
    ;

as_alias
    : V_AS alias_name
    ;

alias_name
    : identifier
    ;

group_by_clause
    : V_GROUP V_BY expression_list
    ;

create_resource_pool
    : V_CREATE V_RESOURCE V_POOL pool_name user_parameter_setting?
    ;

create_role
    : V_CREATE V_ROLE role_name
    ;

create_routing_rule
    : V_CREATE V_ROUTING V_RULE rule_name V_ROUTE CHAR_STRING V_TO group_name
    ;

create_schema
    : V_CREATE V_SCHEMA if_not_exists? schema_name (V_AUTHENTICATION user_name)?
      (V_DEFAULT include_exclude_privileges)?
    ;

create_sequence
    : V_CREATE V_SEQUENCE if_not_exists? sequence_name 
    ;

create_subnet
    : V_CREATE V_SUBNET subnet_name V_WITH CHAR_STRING
    ;

create_text_index
    : V_CREATE V_TEXT V_INDEX index_name V_ON table_name LEFT_PAREN 
      unique_id COMMA text_field COMMA column_ref_list? RIGHT_PAREN
      index_stemmer_option? index_tokenizer_option?
    ;

index_name
    : general_element_part
    ;

text_field
    : column_name
    ;

unique_id
    : column_name
    ;

index_stemmer_option
    : V_STEMMER (stemmer_name LEFT_PAREN data_type RIGHT_PAREN | V_NONE)
    ;

stemmer_name
    : identifier
    ;

index_tokenizer_option
    : V_TOKENIZER tokenizer_name LEFT_PAREN data_type RIGHT_PAREN
    ;

tokenizer_name
    : identifier
    ;

create_user
    : V_CREATE V_USER user_name user_parameter_setting_list?
    ;

/* deactive directed query stmt */
deactive_directed_query_stmt
    : V_DEACTIVATE V_DIRECTED V_QUERY (query_name | select_stmt)
    ;

/* delete stmt */
delete_stmt
    : V_DELETE V_FROM table_name where_clause?
    ;

disconnect_stmt
    : V_DISCONNECT db_spec
    ;

/* drop stmts */
drop_stmts
    : drop_access_policy
    | drop_function
    | drop_authentication
    | drop_directed_query
    | drop_fault_group
    | drop_library
    | drop_load_balance_group
    | drop_model
    | drop_network_address
    | drop_network_interface
    | drop_notifier
    | drop_procedure
    | drop_profile
    | drop_projection
    | drop_resource_pool
    | drop_role
    | drop_routing_rule
    | drop_schema
    | drop_sequence
    | drop_subnet
    | drop_table
    | drop_text_index
    | drop_user
    | drop_view
    ;

drop_access_policy
    : V_DROP V_ACCESS V_POLICY V_ON table_name V_FOR (V_COLUMN column_name | V_ROWS)
    ;

drop_function
    : V_DROP function_type? if_not_exists? function_name func_arg_list
    ;

drop_authentication
    : V_DROP V_AUTHENTICATION if_not_exists? auth_method_name V_CASCADE?
    ;

drop_directed_query
    : V_DROP V_DIRECTED V_QUERY query_name
    ;

drop_fault_group
    : V_DROP V_FAULT V_GROUP if_not_exists? fault_group_name
    ;

drop_library
    : V_DROP V_LIBRARY if_not_exists? library_name V_CASCADE?
    ;

drop_load_balance_group
    : V_DROP V_LOAD V_BALANCE V_GROUP if_not_exists? group_name V_CASCADE?
    ;

drop_model
    : V_DROP V_MODEL if_not_exists? model_name (COMMA model_name)*
    ;

drop_network_address
    : V_DROP V_NETWORK V_ADDRESS if_not_exists? address_name V_CASCADE?
    ;

drop_network_interface
    : V_DROP V_NETWORK V_INTERFACE if_not_exists? network_interface_name V_CASCADE?
    ;

drop_notifier
    : V_DROP V_NOTIFIER if_not_exists? notifier_name
    ;

drop_procedure
    : V_DROP V_PROCEDURE if_not_exists? procedure_name func_arg_list
    ;

drop_profile
    : V_DROP V_PROFILE if_not_exists? profile_name (COMMA profile_name)* V_CASCADE?
    ;

drop_projection
    : V_DROP V_PROJECTION if_not_exists? projections_list cascade_restrict?
    ;

drop_resource_pool
    : V_DROP V_RESOURCE V_POOL pool_name
    ;

drop_role
    : V_DROP V_ROLE if_not_exists? role_name (COMMA role_name)* V_CASCADE?
    ;

drop_routing_rule
    : V_DROP V_ROUTING V_RULE if_not_exists? rule_name
    ;

drop_schema
    : V_DROP V_SCHEMA if_not_exists? schema_name (COMMA schema_name)* cascade_restrict?
    ;

drop_sequence
    : V_DROP V_SEQUENCE if_not_exists? sequence_name (COMMA sequence_name)*
    ;

drop_subnet
    : V_DROP V_SUBNET if_not_exists? subnet_name (COMMA subnet_name)* V_CASCADE?
    ;

drop_table
    : V_DROP V_TABLE if_not_exists? table_name (COMMA table_name)* V_CASCADE?
    ;

drop_text_index
    : V_DROP V_TEXT V_INDEX if_not_exists? index_name
    ;

drop_user
    : V_DROP V_USER if_not_exists? user_name (COMMA user_name)* V_CASCADE?
    ;

drop_view
    : V_DROP V_VIEW if_not_exists? view_name (COMMA view_name)*
    ;

/* end stmt */
end_stmt
    : V_COMMIT (V_WORK | V_TRANSACTION)
    ;

rollback_stmt
    : V_ROLLBACK (V_WORK | V_TRANSACTION)? 
    | V_ROLLBACK V_TO V_SAVEPOINT? savepoint_name
    ;

/* explain stmt */
explain_stmt
    : V_EXPLAIN explain_options* sql_statement
    ;

explain_options
    : V_LOCAL 
    | V_VERBOSE
    | V_JSON
    | V_ANNOTATED
    ;

sql_statement
    : select_stmt
    | insert_stmt
    | update_stmt
    | copy_stmt
    | merge_stmt
    ;

profile_stmt
    : V_PROFILE sql_statement
    ;

/* export to stmt */
export_to_parquet_stmt
    : V_EXPORT V_TO V_PARQUET LEFT_PAREN assignment_param_value_list RIGHT_PAREN
      over_option? V_AS select_stmt
    ;

// over_clause is partition_clause
over_option
    : V_OVER LEFT_PAREN partition_clause order_by_clause? RIGHT_PAREN
    ;

export_to_vertica_stmt
    : V_EXPORT V_TO V_VERTICA table_name paren_column_list? 
      (V_AS select_stmt | V_FROM table_name paren_column_list?)
    ;

/* get directed query */
get_directed_query
    : V_GET V_DIRECTED V_QUERY select_stmt
    ;

/* grant stmts */
grant_stmts
    : grant_authentication
    | grant_privileges_stmt
    | grant_role
    ;

grant_authentication
    : V_GRANT V_AUTHENTICATION auth_method_name V_TO grantee_list
    ;

grantee_list
    : grantee (COMMA grantee)*
    ;

grantee
    : user_name
    | role_name
    | V_PUBLIC
    ;

grant_privileges_stmt
    : V_GRANT (privilege_list | all_privileges) V_ON grant_revoke_objects 
      V_TO grantee_list with_grant_option?
    ;

privilege_list
    : privilege (COMMA privilege)*
    ;

privilege
    : V_CREATE
    | V_TEMP
    | V_USAGE
    | V_ALTER
    | V_DROP
    | V_EXECUTE
    | V_SELECT | V_INSERT | V_DELETE | V_UPDATE | V_REFERENCES | V_TRUNCATE
    | V_READ | V_WRITE
    ;

all_privileges
    : V_ALL V_PRIVILEGES? V_EXTEND
    ;

grant_revoke_objects
    : V_DATABASE db_spec
    | V_LIBRARY library_name (COMMA library_name)*
    | V_MODEL model_name (COMMA model_name)*
    | V_PROCEDURE procedure_name func_arg_list (COMMA procedure_name func_arg_list)*
    | V_SCHEMA schema_list
    | (V_SEQUENCE sequence_name (COMMA sequence_name)* | V_ALL V_SEQUENCE V_IN V_SCHEMA schema_list)
    | V_LOCATION location_path (V_ON node_name)?
    | (V_TABLE table_name (COMMA table_name)* | V_ALL V_TABLES V_IN V_SCHEMA schema_list)
    | (grant_function (COMMA grant_function) | V_ALL V_FUNCTIONS V_IN V_SCHEMA schema_list)
    | V_VIEW? view_name (COMMA view_name)*
    | V_RESOURCE V_POOL pool_name (COMMA pool_name)*
    ;

grant_function
    : function_type function_name func_arg_list
    ;

schema_list
    : schema_name (COMMA schema_name)*
    ;

with_grant_option
    : V_WITH V_GRANT V_OPTION
    ;

grant_role
    : V_GRANT role_name (COMMA role_name)* V_TO grantee_list with_admin_option?
    ;

with_admin_option
    : V_WITH V_ADMIN V_OPTION 
    ;

/* insert stmt */
insert_stmt
    : V_INSERT V_INTO table_name paren_column_list? insert_option
    ;

insert_option
    : V_DEFAULT V_VALUES 
    | V_VALUES paren_expression_list
    | select_stmt
    ;

/* merge stmt */
merge_stmt
    : V_MERGE V_INTO table_name as_alias? V_USING src_dataset V_ON expression matching_clause+
    ;

src_dataset
    : expression as_alias?
    ;

matching_clause
    : V_WHEN V_MATCHED (V_AND expression_list)? V_THEN V_UPDATE V_SET assignment_param_value_list
    | V_WHEN V_NOT V_MATCHED (V_AND expression_list)? V_THEN V_INSERT paren_column_list?
      V_VALUES paren_expression_list
    ;

/* select stmt */
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
    : (V_UNION | V_INTERSECT | V_EXCEPT) all_distinct? subquery_basic_elements
    ;

all_distinct
    : V_ALL
    | V_DISTINCT
    ;

subquery
    : at_epoch? simple_select order_by_clause_list? limit_clause? offset_clause? for_update_clause?
    ;

simple_select
    : V_SELECT all_distinct? select_list into_table_clause? from_clause? 
      where_clause? time_series_clause? group_by_clause_list? having_clause_list? 
      match_clause? except_clause?
    ;

select_list
    : select_element (COMMA select_element)*
    ;

select_element
    : STAR_SIGN
    | (column_name | expression) as_alias?
    ;

into_table_clause
    : V_INTO (scope? (V_TEMP | V_TEMPORARY))? V_TABLE? table_name 
      (V_ON V_COMMIT (V_PRESERVE | V_DELETE) V_ROWS)?
    ;

from_clause
    : V_FROM dataset_list table_sample?
    ;

dataset_list
    : table_ref (COMMA table_ref)*
    ;

table_ref
    : // TODO -----------------------------------------
    ;

table_sample
    : V_TABLESAMPLE LEFT_PAREN number_literal RIGHT_PAREN
    ;

time_series_clause
    : V_TIMESERIES column_name V_AS CHAR_STRING over_option? order_by_clause?
    ;

group_by_clause_list
    : group_by_clause (COMMA group_by_clause)*
    ;

having_clause_list
    : having_clause (COMMA having_clause)*
    ;

having_clause
    : V_HAVING expression_list
    ;

match_clause
    : V_MATCH LEFT_PAREN partition_clause? order_by_clause
      match_define_clause match_pattern_clause rows_match_clause? RIGHT_PAREN
    ;

match_define_clause
    : V_DEFINE event_name V_AS expression_list
    ;

event_name
    : identifier
    ;

match_pattern_clause
    : V_PATTERN pattern_name V_AS paren_expression_list
    ;

pattern_name
    : identifier
    ;

rows_match_clause
    : V_ROWS V_MATCH (V_ALL V_EVENTS | V_FIRST V_EVENT)
    ;

except_clause
    :
    ;

order_by_clause_list
    : order_by_clause (COMMA order_by_clause)*
    ;

limit_clause
    : V_LIMIT (UNSIGNED_INTEGER | V_ALL)
    ;

offset_clause
    : V_OFFSET UNSIGNED_INTEGER
    ;

for_update_clause
    : V_FOR V_UPDATE (V_OF table_name (COMMA table_name)*)?
    ;

/* release savepoint */
release_savepoint_stmt
    : V_RELEASE V_SAVEPOINT? savepoint_name
    ;

savepoint_name
    : identifier
    ;

/* revoke stmts */
revoke_stmts
    : revoke_authentication
    | revoke_privileges_stmt
    | revoke_role
    ;

revoke_authentication
    : V_REVOKE V_AUTHENTICATION auth_method_name V_FROM grantee_list
    ;

revoke_privileges_stmt
    : V_REVOKE grant_option_for? (privilege_list | all_privileges) V_ON grant_revoke_objects
      V_FROM grantee_list V_CASCADE?
    ;

grant_option_for
    : V_GRANT V_OPTION V_FOR
    ;

revoke_role
    : V_REVOKE admin_option_for? role_name (COMMA role_name)* V_FROM grantee_list V_CASCADE?
    ;

admin_option_for
    : V_ADMIN V_OPTION V_FOR
    ;

/* save query and savepoint */
save_query_stmt
    : V_SAVE V_QUERY select_stmt
    ;

savepoint_stmt
    : V_SAVEPOINT savepoint_name
    ;

// sql elements
reserved_keywords
    :
    ;

nonreserved_keywords
    :
    ;

identifier
    : REGULAR_ID
    | CHAR_STRING
    | DOUBLE_STRING
    | reserved_keywords
    | nonreserved_keywords
    ;

literals
    : number_literal
    | string_literal
    | date_time_literal
    | external_type_literal
    | V_TRUE
    | V_FALSE
    | V_NULL
    ;

external_type_literal
    : V_ARRAY? array_expr
    | V_ROW paren_expression_list
    ;

numerics
    : HEX_STRING_LIT
    | APPROXIMATE_NUM_LIT
    ;

number_literal
    : UNSIGNED_INTEGER
    | numerics
    ;

string_literal
    : CHAR_STRING
    | DOUBLE_STRING
    | DOLLAR_STRING
    | UNI_STRING
    | var_binary_string_literal
    ;

var_binary_string_literal
    : HEX_STRING_LIT
    | BIT_STRING_LIT
    ;

date_time_literal
    : date_time_data_type CHAR_STRING
    | (number_literal year_month_subtype_unit)+ V_AGO?
    ;

// expression definitions

paren_expression_list
    : LEFT_PAREN expression_list RIGHT_PAREN
    ;

expression_list
    : expression (COMMA expression)*
    ;

expression
    : logical_expression
    ;

logical_expression
    : relational_expression V_IS V_NOT? V_NULL
    | V_NOT logical_expression
    | logical_expression V_AND logical_expression
    | logical_expression V_OR logical_expression
    ;

relational_expression
    : relational_expression relational_operator relational_expression
    | compound_expression
    ;

relational_operator
    : EQUAL_SIGN
    | NOT_EQUAL_SIGN
    | GREATER_THAN EQUAL_SIGN?
    | LESS_THAN EQUAL_SIGN?
    ;

compound_expression
    : concatenation
      (V_NOT? ( V_IN in_elements
            | V_BETWEEN between_elements
            | like_type=(V_LIKE | V_ILIKE | V_LIKEB | V_ILIKEB) concatenation (V_ESCAPE concatenation)?)
      | V_IS (V_TRUE | V_FALSE | V_UNKNOWN))?
    | concatenation like_operators concatenation
    | concatenation_list V_OVERLAPS concatenation_list
    ;

like_operators
    : NOT_SIGN XOR_SIGN STAR_SIGN? // ~#
    | NOT_SIGN NOT_SIGN STAR_SIGN
    | FACTORIAL_SIGN NOT_SIGN NOT_SIGN STAR_SIGN?
    | FACTORIAL_SIGN NOT_SIGN XOR_SIGN STAR_SIGN?
    ;

in_elements
    : LEFT_PAREN subquery RIGHT_PAREN
    | LEFT_PAREN concatenation (COMMA concatenation)* RIGHT_PAREN
    ;

between_elements
    : concatenation V_AND concatenation
    ;

concatenation_list
    : LEFT_PAREN concatenation (COMMA concatenation)* RIGHT_PAREN
    ;

concatenation
    : model_expression
        (V_AT (V_LOCAL | V_TIME V_ZONE concatenation))?
    | concatenation EXP_SIGN concatenation
    | concatenation op=(STAR_SIGN | DIV_SIGN | MOD_SIGN) concatenation
    | concatenation op=(ADD_SIGN | SUB_SIGN) concatenation
    | concatenation BAR_SIGN BAR_SIGN concatenation
    ;

model_expression
    : unary_expression
    ;

unary_expression
    : (SUB_SIGN | ADD_SIGN) unary_expression
    | BAR_SIGN DIV_SIGN unary_expression
    | BAR_SIGN BAR_SIGN DIV_SIGN unary_expression
    | FACTORIAL_SIGN FACTORIAL_SIGN unary_expression
    | AT_SIGN unary_expression
    | unary_expression FACTORIAL_SIGN
    | unary_expression DATA_TYPE_CAST data_type
    | V_DISTINCT unary_expression
    | V_ALL unary_expression 
    | case_expression
    | standard_function
    | atom
    ;

array_expr
    : LEFT_BRACKET expression_list? RIGHT_BRACKET
    ;

case_expression
    : V_CASE expression? when_then_clause+ else_clause? V_END 
    ;

when_then_clause
    : V_WHEN expression V_THEN expression
    ;

else_clause
    : V_ELSE expression
    ;

standard_function
    : function_name func_params func_options?
    ;

func_params
    : LEFT_PAREN func_parameters? RIGHT_PAREN
    ;

func_parameters
    : (V_ALL | V_DISTINCT)? expression (COMMA expression (V_IGNORE V_NULLS)?)?
    | expression_list using_parameters?
    ;

using_parameters
    : V_USING V_PARAMETERS assignment_param_value_list
    ;

assignment_param_value_list
    : assignment_param_value (COMMA assignment_param_value)*
    ;

assignment_param_value
    : parameter_name EQUAL_SIGN expression
    ;

parameter_name
    : identifier
    ;

func_options
    : (V_WITHIN V_GROUP LEFT_PAREN V_ORDER V_BY expression asc_desc? RIGHT_PAREN)? V_OVER LEFT_PAREN func_window_clause* RIGHT_PAREN
    ;

func_window_clause
    : window_partition_clause
    | window_order_clause
    | window_frame_clause
    | window_name_clause
    ;

window_partition_clause
    : V_PARTITION V_BY expression_list
    | V_PARTITION V_BEST
    | V_PARTITION V_NODES
    ;

window_order_clause
    : V_ORDER V_BY order_by_expression_list
    ;

order_by_expression_list
    : order_by_expression (COMMA order_by_expression)*
    ;

order_by_expression
    : expression sort_qualifiers?
    ;

sort_qualifiers
    : asc_desc (V_NULLS? (V_FIRST | V_LAST | V_AUTO))?
    ;

asc_desc
    : V_ASC 
    | V_DESC
    ;

window_frame_clause
    : (V_ROWS | V_RANGE) V_BETWEEN start_end_point V_AND start_end_point 
    | start_end_point
    ;

start_end_point
    : V_UNBOUNDED (V_PRECEDING | V_FOLLOWING)
    | V_CURRENT V_ROW
    | literals preceding_following
    ;

preceding_following
    : V_PRECEDING 
    | V_FOLLOWING
    ;

window_name_clause
    : V_WINDOW window_name V_AS LEFT_PAREN window_partition_clause window_order_clause? RIGHT_PAREN
    ;

window_name
    : identifier
    ;

atom
    : general_element
    | literals  // pay attention to datetype and geometry type
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

data_type
    : binary_data_type
    | boolean_data_type
    | character_data_type
    | date_time_data_type
    | long_data_type
    | numeric_data_type
    | spatial_data_type
    | uuid_data_type
    | external_data_type
    ;

binary_data_type
    : (V_BINARY | V_VARBINARY) data_type_precision
    ;

boolean_data_type
    : V_BOOLEAN
    ;

character_data_type
    : (V_CHAR | V_VARCHAR | V_CHARACTER V_VARYING?) (LEFT_PAREN UNSIGNED_INTEGER RIGHT_PAREN)?
    ;

date_time_data_type
    : V_DATE
    | V_DATETIME
    | V_SMALLDATETIME
    | V_TIMESTAMP
    | (V_TIME | V_TIMETZ | V_TIMESTAMP | V_TIMESTAMPTZ) data_type_precision? ((V_WITH | V_WITHOUT) V_TIME V_ZONE)? CHAR_STRING (V_AT V_TIME V_ZONE time_zone)?
    | V_INTERVAL data_type_precision? CHAR_STRING interval_qualifier
    ;

time_zone
    : V_INTERVAL? CHAR_STRING
    ;

data_type_precision
    : LEFT_PAREN UNSIGNED_INTEGER (COMMA UNSIGNED_INTEGER)? RIGHT_PAREN
    ;

interval_qualifier
    : interval_unit data_type_precision? (V_TO interval_unit data_type_precision?)?
    ;

interval_unit
    : year_month_subtype_unit
    | day_time_subtype_unit
    ;

year_month_subtype_unit
    : V_MILLENNIUM
    | V_CENTURY
    | V_DECADE
    | V_YEAR
    | V_QUARTER
    | V_MONTH
    | V_WEEK
    ;

day_time_subtype_unit
    : V_DAY
    | V_HOUR
    | V_MINUTE
    | V_SECOND
    | V_MILLISECOND
    | V_MICROSECOND
    ;

long_data_type
    : V_LONG (V_VARBINARY | V_VARCHAR) data_type_precision
    ;

numeric_data_type
    : double_precision_type
    | interger_date_type
    | numeric_type data_type_precision?
    ;

double_precision_type
    : V_DOUBLE V_PRECISION 
    | V_FLOAT data_type_precision?
    | V_FLOAT8
    | V_REAL
    ;

interger_date_type
    : V_INTEGER
    | V_INT
    | V_BIGINT
    | V_INT8
    | V_SMALLINT
    | V_TINYINT
    ;

numeric_type
    : V_NUMERIC
    | V_DECIMAL
    | V_NUMBER
    | V_MONEY
    ;

spatial_data_type
    : (V_GEOMETRY | V_GEOGRAPHY) data_type_precision?
    ;

uuid_data_type
    : V_UUID
    ;

external_data_type
    : V_ARRAY LEFT_BRACKET data_type RIGHT_BRACKET
    | V_MAP LESS_THAN data_type COMMA data_type GREATER_THAN
    | V_ROW LEFT_PAREN row_definition_list RIGHT_PAREN
    ;

row_definition_list
    : row_definition (COMMA row_definition)*
    ;

row_definition
    : row_name data_type
    ;

row_name
    : identifier
    ;
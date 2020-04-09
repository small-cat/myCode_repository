/**
   Licensed to the Apache Software Foundation (ASF) under one or more 
   contributor license agreements.  See the NOTICE file distributed with 
   this work for additional information regarding copyright ownership.
   The ASF licenses this file to You under the Apache License, Version 2.0
   (the "License"); you may not use this file except in compliance with 
   the License.  You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

// HPL/SQL Procedural SQL Extension Grammar 
parser grammar HqlsqlParser;

options {
    tokenVocab=HqlsqlLexer;
}

@parser::postinclude {
#include <strings.h>
}

program : block EOF;

block : (block_content T_GO?)+ ;               // Multiple consecutive blocks/statements

block_content
    : begin_end_block 
    | stmt
    ;

begin_end_block :
       declare_block? T_BEGIN block exception_block? block_end
     ;
     
single_block_stmt :                                      // Single BEGIN END block (but nested blocks are possible) or single statement
       T_BEGIN block exception_block? block_end
     | stmt T_SEMICOLON?
     ;

block_end :
       {!(strcasecmp(_input->LT(2)->getText().c_str(), "TRANSACTION") == 0)}? T_END 
     ;
     
proc_block :
       begin_end_block
     | stmt+ T_GO?
     ;

stmt
     : alter_stmt
     | allocate_cursor_stmt 
     | associate_locator_stmt
     | begin_transaction_stmt
     | abort_transactions_stmt
     | break_stmt
     | call_stmt
     | collect_stats_stmt
     | close_stmt
     | cmp_stmt
     | copy_from_local_stmt
     | copy_stmt
     | commit_stmt
     | create_database_stmt 
     | create_function_stmt 
     | create_index_stmt
     | create_local_temp_table_stmt
     | create_package_stmt
     | create_package_body_stmt
     | create_procedure_stmt
     | create_table_stmt
     | declare_stmt
     | drop_stmt
     | end_transaction_stmt
     | exec_stmt 
     | exit_stmt
     | fetch_stmt
     | for_cursor_stmt
     | for_range_stmt
     | if_stmt     
     | include_stmt
     | get_diag_stmt
     | leave_stmt
     | map_object_stmt
     | open_stmt
     | print_stmt
     | quit_stmt
     | raise_stmt
     | resignal_stmt
     | return_stmt
     | rollback_stmt
     | signal_stmt
     | summary_stmt
     | use_stmt 
     | truncate_table_stmt 
     | values_into_stmt
     | while_stmt
     | label    
     | hive    
     | host 
       
     // view/index manipulation
     | create_view_stmt 
     | create_macro_stmt
     | reload_function 
       
     // role manipulation
     | create_role_stmt
     | grant_revoke_role_stmt
     | grant_revoke_privilege_stmt

     // dml 
     | load_file_stmt
     | insert_stmt
     | update_stmt
     | delete_stmt
     | merge_stmt
     | analyze_table_stmt

     // queries
     | select_stmt

     // show desc
     | show_stmt
     | describe_stmt

     // import / export
     | import_stmt
     | export_stmt
       
     | explain_stmt
     | assignment_stmt
     | semicolon_stmt      // Placed here to allow null statements ;;...          
     ;
     
semicolon_stmt :
       T_SEMICOLON
     | T_AT_SIGN
     | T_POUND_SIGN
     | T_DIV_SIGN
     ;

exception_block :       // Exception block
       T_EXCEPTION exception_block_item+
     ;

exception_block_item : 
       T_WHEN L_ID T_THEN block ~(T_WHEN | T_END)       
     ;

// Assignment statement
assignment_stmt : 
       T_SET set_session_option
     | tk=(T_SET | T_RESET) assignment_stmt_item (T_COMMA assignment_stmt_item)*  
     ;

assignment_stmt_item : 
       assignment_stmt_single_item
     | assignment_stmt_multiple_item
     | assignment_stmt_select_item
     ;

// in hive doc, we just find "partition (a=b)", but no "partition (a<b)"
// this case appears in samples (holly shittttttt)
assignment_stmt_single_item : 
       assignment_expr T_COLON? (bool_expr_binary_operator assignment_expr)*
     | T_OPEN_P assignment_expr T_CLOSE_P T_COLON? T_EQUAL assignment_expr
     ;

assignment_stmt_multiple_item : 
       T_OPEN_P expr (T_COMMA expr)* T_CLOSE_P T_COLON? T_EQUAL T_OPEN_P expr (T_COMMA expr)* T_CLOSE_P
     ;

assignment_stmt_select_item : 
       (expr | (T_OPEN_P expr (T_COMMA expr)* T_CLOSE_P)) T_COLON? T_EQUAL T_OPEN_P select_stmt T_CLOSE_P
     ;

assignment_expr
    : (ident | assignment_reserverd_words) (T_PERIOD (ident | assignment_reserverd_words))*
    | expr
    ;

assignment_reserverd_words
    : T_WINDOW
    | T_FROM
    | T_SET
    | T_CHECK
    | T_EXTERNAL
    | T_TABLES
    | T_TABLE
    | T_LIMIT
    | T_UNION
    | T_BUCKET
    | T_INTERVAL
    | T_DISABLE
    | T_REBUILD
    | T_PERCENTS
    | T_EXPORT
    ;
     
allocate_cursor_stmt:
       T_ALLOCATE ident T_CURSOR T_FOR ((T_RESULT T_SET) | T_PROCEDURE) ident
     ;
     
associate_locator_stmt : 
       T_ASSOCIATE (T_RESULT T_SET)? (T_LOCATOR | T_LOCATORS) T_OPEN_P ident (T_COMMA ident)* T_CLOSE_P T_WITH T_PROCEDURE ident
     ;       

begin_transaction_stmt :
       T_BEGIN T_TRANSACTION
     ;

abort_transactions_stmt
    : T_ABORT T_TRANSACTIONS ident+
    ;

break_stmt :
       T_BREAK
     ;
     
call_stmt :
       T_CALL ident (T_OPEN_P expr_func_params? T_CLOSE_P | expr_func_params)?
     ;
     
declare_stmt :          // Declaration statement
       T_DECLARE declare_stmt_item (T_COMMA declare_stmt_item)*
     ;

declare_block :         // Declaration block
       T_DECLARE declare_stmt_item T_SEMICOLON (declare_stmt_item T_SEMICOLON)*
     ;

declare_block_inplace : 
       declare_stmt_item T_SEMICOLON (declare_stmt_item T_SEMICOLON)*
     ;
     
declare_stmt_item :
       declare_cursor_item
     | declare_condition_item  
     | declare_handler_item
     | declare_var_item 
     | declare_temporary_table_item
     ;

declare_var_item :
       ident (T_COMMA ident)* T_AS? dtype dtype_attr* dtype_default? 
     | ident T_CONSTANT T_AS? dtype dtype_default 
     ;

declare_condition_item :    // Condition declaration 
       ident T_CONDITION
     ;
     
declare_cursor_item :      // Cursor declaration 
       (T_CURSOR ident | ident T_CURSOR) (cursor_with_return | cursor_without_return)? (T_IS | T_AS | T_FOR) (select_stmt | expr )
     ;
     
cursor_with_return :
       T_WITH T_RETURN T_ONLY? (T_TO (T_CALLER | T_CLIENT))?
     ;
     
cursor_without_return :
       T_WITHOUT T_RETURN
     ;

declare_handler_item :     // Condition handler declaration 
       (T_CONTINUE | T_EXIT) T_HANDLER T_FOR (T_SQLEXCEPTION | T_SQLWARNING | T_NOT T_FOUND | ident) single_block_stmt
     ;
     
declare_temporary_table_item :     // DECLARE TEMPORARY TABLE statement
       T_GLOBAL? T_TEMPORARY T_TABLE ident create_table_preoptions? create_table_definition
     ;
     
create_table_stmt :
       T_CREATE tk=(T_TEMPORARY | T_EXTERNAL)? T_TABLE (T_IF T_NOT T_EXISTS)? table_name create_table_definition 
     ;
     
create_local_temp_table_stmt :
       T_CREATE (T_LOCAL T_TEMPORARY | (T_SET | T_MULTISET)? T_VOLATILE) T_TABLE ident create_table_preoptions? create_table_definition
     ;
     
create_table_definition :
       create_table_options? 
     | T_LIKE table_name location_part?
     ;
     
create_table_columns :         
       create_table_columns_item (T_COMMA create_table_columns_item)* constraint_specification?
     ;
       
create_table_columns_item :
       column_name dtype column_constrains_specification? comment_part?
     ;
     
column_name :
       ident
     ;

old_column_name
    : ident
    ;

new_column_name
    : ident
    ;

constraint_specification
    : constraint_spec+
    ;

constraint_spec
    : T_COMMA T_PRIMARY T_KEY paren_column_list T_DISABLE T_NOVALIDATE T_RELY T_DIV_SIGN T_NORELY
    | T_COMMA T_CONSTRAINT constraint_name T_FOREIGN T_KEY paren_column_list 
      T_REFERENCES table_name paren_column_list T_DISABLE T_NOVALIDATE
    | T_COMMA T_CONSTRAINT constraint_name T_UNIQUE paren_column_list T_DISABLE T_NOVALIDATE T_RELY T_DIV_SIGN T_NORELY
    | T_COMMA T_CONSTRAINT constraint_name T_CHECK expr? (T_ENABLE | T_DISABLE) T_NOVALIDATE T_RELY T_DIV_SIGN T_NORELY
    ;

constraint_name
    : ident
    ;

paren_column_list
    : T_OPEN_P column_name_list T_CLOSE_P
    ;

column_name_list
    : column_name_ele (T_COMMA column_name_ele)*
    ;

column_name_ele
    : column_name dtype? (T_ASC | T_DESC)? comment_part?
    ;

paren_col_values
    : T_OPEN_P expr (T_COMMA expr)* T_CLOSE_P
    ;

column_constrains_specification :
     T_PRIMARY T_KEY
     | T_NOT? T_NULL
     | T_UNIQUE
     | T_DEFAULT default_value
     | T_CHECK expr? T_ENABLE
     | T_DISABLE T_NOVALIDATE T_RELY T_DIV_SIGN T_NORELY
     ;

default_value
    : T_LITERAL
    | T_CURRENT_USER T_OPEN_P T_CLOSE_P
    | T_CURRENT_DATE T_OPEN_P T_CLOSE_P
    | T_CURRENT_TIMESTAMP T_OPEN_P T_CLOSE_P
    | T_NULL
    ;

create_table_column_comment :
       T_COMMENT expr
                            ;
     
create_table_column_cons :
       T_PRIMARY T_KEY T_CLUSTERED? T_OPEN_P ident (T_ASC | T_DESC)? (T_COMMA ident (T_ASC | T_DESC)?)* T_CLOSE_P T_ENABLE? index_storage_clause?
     | T_FOREIGN T_KEY T_OPEN_P ident (T_COMMA ident)* T_CLOSE_P T_REFERENCES table_name T_OPEN_P ident (T_COMMA ident)* T_CLOSE_P create_table_fk_action* 
    ;
    
create_table_fk_action :
       T_ON (T_UPDATE | T_DELETE) (T_NO T_ACTION | T_RESTRICT | T_SET T_NULL | T_SET T_DEFAULT | T_CASCADE)
     ;

create_table_preoptions :
      create_table_preoptions_item+
     ;

create_table_preoptions_item :
        T_COMMA create_table_preoptions_td_item
      | create_table_options_hive_item
     ;     
     
create_table_preoptions_td_item :
       T_NO? (T_LOG | T_FALLBACK)
     ;
     
create_table_options
    : create_table_option+
    ;

create_table_option
    : T_OPEN_P create_table_columns T_CLOSE_P 
    | comment_part
    | partition_by_part
    | cluster_by_part
    | skewed_by_part T_ON T_OPEN_P col_values T_CLOSE_P stored_as_part?
    | row_format_part
    | location_part
    | property_values_part
    | T_AS select_stmt
    ;

partition_by_part
    : T_PARTITIONED T_BY paren_column_list
    ;

cluster_by_part
    : T_CLUSTERED T_BY paren_column_list (T_SORTED T_BY paren_column_list)? T_INTO int_number T_BUCKETS
    ;

skewed_by_part
    : T_SKEWED T_BY paren_column_list
    ;

col_values
    : paren_col_values (T_COMMA paren_col_values)*
    ;

stored_as_part
    : T_STORED T_AS (T_DIRECTORIES | file_format)
    ;

row_format_part
    : (T_ROW T_FORMAT row_format | stored_as_part)+
    | T_STORED T_BY expr property_values?
    ;

file_format
    : T_SEQUENCEFILE
    | T_TEXTFILE
    | T_RCFILE
    | T_ORC
    | T_PARQUET
    | T_AVRO
    | T_JSONFILE
    | T_INPUTFORMAT expr T_OUTPUTFORMAT expr
    ;

row_format
    : T_DELIMITED (T_FIELDS terminated_by (T_ESCAPED T_BY by_char)?)? 
      terminated_by_part* (T_NULL T_DEFINED T_AS by_char)?
    | T_SERDE expr property_values?
    ;

terminated_by_part
    : (T_COLLECTION T_ITEMS | T_MAP T_KEYS | T_LINES) terminated_by
    ;

terminated_by
    : T_TERMINATED T_BY by_char
    ;

by_char
    : expr
    ;
    
create_table_options_hive_item :
       create_table_hive_row_format
     | T_STORED T_AS ident
     ;
     
create_table_hive_row_format :
       T_ROW T_FORMAT T_DELIMITED create_table_hive_row_format_fields*
     ;
     
create_table_hive_row_format_fields :
       T_FIELDS terminated_by (T_ESCAPED T_BY expr)?
     | T_COLLECTION T_ITEMS terminated_by
     | T_MAP T_KEYS terminated_by
     | T_LINES terminated_by
     | T_NULL T_DEFINED T_AS expr
     ;
     
create_table_options_mssql_item :
       T_ON ident
     | T_TEXTIMAGE_ON ident
     ;

// view manipulations
create_view_stmt
    : T_CREATE T_VIEW (T_IF T_NOT T_EXISTS)? view_name paren_column_list? create_view_options* T_AS select_stmt
    | T_CREATE T_MATERIALIZED T_VIEW (T_IF T_NOT T_EXISTS)? view_name create_materialized_view_option* T_AS select_stmt
    ;

create_view_options
    : comment_part
    | property_values_part
    ;

create_materialized_view_option
    : create_view_options
    | T_DISABLE T_REWRITE
    | T_PARTITIONED T_ON paren_column_list
    | T_CLUSTERED T_ON paren_column_list
    | T_DISTRIBUTED T_ON paren_column_list T_SORTED T_ON paren_column_list
    | row_format_part
    | location_part
    ; 

// create macro
create_macro_stmt
    : T_CREATE T_TEMPORARY T_MACRO ident paren_column_list expr
    ;

// role manipulations
create_role_stmt
    : T_CREATE T_ROLE role_name
    ;

grant_revoke_role_stmt
    : T_GRANT T_ROLE role_names T_TO principal_specifications with_option_for?
    | T_REVOKE with_option_for? T_ROLE role_names T_FROM principal_specifications
    ;

with_option_for
    : T_WITH? T_ADMIN T_OPTION T_FOR?
    | T_WITH? T_GRANT T_OPTION T_FOR?
    ;

role_name
    : ident
    ;

role_names
    : role_name (T_COMMA role_name)*
    ;

grant_revoke_privilege_stmt
    : (T_GRANT | T_REVOKE) with_option_for? privilege_columns (T_ON object_specification)?
      (T_TO | T_FROM) principal_specifications with_option_for?
    | T_REVOKE T_ALL T_PRIVILEGES T_COMMA with_option_for T_FROM ident (T_COMMA ident)*
    ;

privilege_columns
    : priv_type paren_column_list? (priv_type paren_column_list?)*
    ;

priv_type
    : T_ALL 
    | T_ALTER 
    | T_UPDATE 
    | T_CREATE 
    | T_DROP 
    | T_INDEX 
    | T_LOCK  
    | T_SELECT 
    | T_SHOW_DATABASE 
    ;

object_specification
    : T_TABLE table_name
    | T_DATABASE db_name
    ;

// alter stmt
alter_stmt
    : alter_table_stmt                                                              # alter_table_stmt_label 
    | T_ALTER tk=(T_DATABASE | T_SCHEMA | T_VIEW) ident T_SET alter_option          # alter_db_schema_view
    | T_ALTER T_MATERIALIZED T_VIEW view_name (T_ENABLE|T_DISABLE) T_REWRITE        # alter_materialized_view
    | T_ALTER T_INDEX ident T_ON table_name partition_assignment_list? T_REBUILD    # alter_index
    | T_ALTER T_VIEW view_name T_AS select_stmt                                     # alter_view_as_select
    ;

alter_option
    : property_values_part
    | T_OWNER (T_USER | T_ROLE) ident
    | location_part
    ;

alter_table_stmt :
       T_ALTER T_TABLE table_name alter_table_item_options 
     ;
     
alter_table_item_options
    : alter_table_properties
    | alter_table_partition_properties
    | alter_table_or_partition_options
    | alter_table_column_properties
    ;

alter_table_properties
    : T_RENAME T_TO new_table_name
    | set_tblproperties
    | add_serde_properties
    | table_storage_properties
    | table_skewed_properties
    | table_constraints
    ;

set_tblproperties
    : T_SET T_TBLPROPERTIES (property_values_part | T_OPEN_P assignment_stmt_single_item T_CLOSE_P)
    ;

add_serde_properties
    : partition_assignment_list? T_SET (property_values_part | T_SERDE serde_class_name property_values?)
    ;

serde_class_name
    : ident
    | L_S_STRING
    | L_D_STRING
    ;

table_storage_properties
    : T_CLUSTERED T_BY paren_column_list (T_SORTED T_BY paren_column_list)? 
      T_INTO ident T_BUCKETS 
    | T_NOT stored_as_part
    ;

table_skewed_properties
    : T_SKEWED T_BY paren_column_list T_ON paren_column_list (T_COMMA paren_column_list)*
      stored_as_part
    | T_NOT T_SKEWED
    | T_SET T_SKEWED T_LOCATION T_OPEN_P assignment_stmt_single_item (T_COMMA assignment_stmt_single_item)* T_CLOSE_P
    ;

table_constraints
    : add_constraint_property
    | change_column_property
    | drop_constraint_property
    ;

add_constraint_property
    : T_ADD T_CONSTRAINT constraint_name T_PRIMARY T_KEY paren_column_list T_DISABLE T_NOVALIDATE
    | T_ADD T_CONSTRAINT constraint_name T_FOREIGN T_KEY paren_column_list 
      T_REFERENCES table_name paren_column_list T_DISABLE T_NOVALIDATE T_RELY
    | T_ADD T_CONSTRAINT constraint_name T_UNIQUE paren_column_list T_DISABLE T_NOVALIDATE
    ;

change_column_property
    : T_CHANGE T_COLUMN column_name column_name dtype T_CONSTRAINT 
      constraint_name (T_NOT T_NULL T_ENABLE | T_DEFAULT default_value T_ENABLE
                      | T_CHECK expr T_ENABLE)
    ;

drop_constraint_property
    : T_DROP T_CONSTRAINT constraint_name
    ;

new_table_name
    : ident
    ;

alter_table_partition_properties
    : add_partition_property
    | partition_assignment_list T_RENAME T_TO partition_assignment_list
    | T_EXCHANGE T_PARTITION T_OPEN_P partition_spec (T_COMMA partition_spec)* T_CLOSE_P T_WITH T_TABLE table_name
    | recover_partition_property
    | drop_partition_property
    | archive_partition_property
    ;

add_partition_property
    : T_ADD (T_IF T_NOT T_EXISTS)? add_partition_property_options
    ;

add_partition_property_options
    : add_partition_property_option (T_COMMA add_partition_property_option)*
    ;

add_partition_property_option
    : partition_assignment_list (T_LOCATION ident)?
    ;

recover_partition_property
    : T_RECOVER T_PARTITIONS
    ;

drop_partition_property
    : T_DROP (T_IF T_EXISTS)? partition_assignment_list (T_COMMA partition_assignment_list)* 
      (T_IGNORE T_PROTECTION)? T_PURGE?
    ;

archive_partition_property
    : (T_ARCHIVE | T_UNARCHIVE) partition_assignment_list
    ;

alter_table_or_partition_options
    : partition_assignment_list? T_SET (T_FILEFORMAT | T_LOCATION) (file_format | ident)
    | T_TOUCH partition_assignment_list?
    | partition_assignment_list? (T_ENABLE | T_DISABLE) (T_OFFLINE | T_NO_DROP T_CASCADE?)
    | partition_assignment_list? T_COMPACT ident (T_AND T_WAIT)? property_values? 
    | partition_assignment_list? (T_CONCATENATE | T_UPDATE T_COLUMNS) 
    ;

alter_table_column_properties
    : partition_assignment_list? T_CHANGE T_COLUMN? old_column_name new_column_name 
      dtype comment_part (T_FIRST|T_AFTER column_name)? (T_CASCADE | T_RESTRICT)?
    | partition_assignment_list? (T_ADD | T_REPLACE) T_COLUMNS paren_column_list (T_CASCADE | T_RESTRICT)?
    ;

// show stmt
show_stmt
    : T_SHOW (T_DATABASES|T_SCHEMAS) (T_LIKE expr)?
    | T_SHOW T_TABLES (T_IN ident) expr?
    | T_SHOW T_MATERIALIZED? T_VIEWS ((T_IN | T_FROM) ident)? (T_LIKE expr)?
    | T_SHOW T_PARTITIONS table_name partition_assignment_list
    | T_SHOW T_TABLE T_EXTENDED ((T_IN | T_FROM) ident)? T_LIKE expr partition_assignment_list?
    | T_SHOW T_TBLPROPERTIES table_name paren_column_list
    | T_SHOW T_CREATE T_TABLE table_name
    | T_SHOW T_FORMATTED? (T_INDEX|T_INDEXES) T_ON ident ((T_FROM|T_IN) ident)?
    | T_SHOW T_COLUMNS (T_IN | T_FROM) table_name ((T_FROM|T_IN) ident)?
    | T_SHOW T_FUNCTIONS (T_LIKE expr)?
    | T_SHOW T_GRANT principal_specification (T_ON object_specification paren_column_list?)?
    | T_SHOW T_ROLE T_GRANT principal_specification
    | T_SHOW T_CURRENT? T_ROLES
    | T_SHOW T_PRINCIPALS ident
    | T_SHOW T_LOCKS (T_DATABASE | T_SCHEMA)? ident partition_assignment_list? T_EXTENDED?
    | T_SHOW T_CONF T_LESS ident T_GREATER
    | T_SHOW T_TRANSACTIONS
    | T_SHOW T_COMPACTIONS
    | T_SHOW T_PARTITIONS partition_assignment_list?
    ; 

principal_specification
    : (T_USER | T_ROLE) ident
    ;

principal_specifications
    : principal_specification (T_COMMA principal_specification)*
    ;

// import/export
import_stmt
    : T_IMPORT (T_EXTERNAL? T_TABLE table_name partition_assignment_list?)? T_FROM
      L_S_STRING location_part?
    ;

export_stmt
    :  T_EXPORT T_TABLE table_name partition_assignment_list? T_TO L_S_STRING 
      ( T_FOR expr_func )?
    ;

// explain stmt
explain_stmt
    : T_EXPLAIN (T_EXTENDED
                |T_FORMATTED? T_CBO (T_COST | T_JOINCOST)?
                |T_AST
                |T_DEPENDENCY
                |T_AUTHORIZATION
                |T_LOCKS
                |T_VECTORIZATION T_ONLY? (T_SUMMARY | T_OPERATOR | T_EXPRESSION | T_DETAIL)?
                |T_ANALYZE)? stmt
    ;

dtype
    : data_type dtype_len?
    ;

data_type
    : primitive_type
    | array_type
    | map_type
    | struct_type
    | union_type
    ;

primitive_type
    : T_TINYINT
    | T_SMALLINT
    | T_INT
    | T_BIGINT
    | T_BOOLEAN
    | T_FLOAT
    | T_DOUBLE
    | T_DOUBLE T_PRECISION
    | T_STRING
    | T_BINARY     
    | T_TIMESTAMP (T_WITH T_LOCAL T_TIME T_ZONE)?
    | T_DECIMAL  
    | T_DECIMAL T_OPEN_P expr T_COMMA expr T_CLOSE_P
    | T_DATE     
    | T_VARCHAR 
    | T_CHAR
    ;

array_type
    : T_ARRAY T_LESS dtype T_GREATER
    ;

map_type
    : T_MAP T_LESS primitive_type T_COMMA dtype T_GREATER
    ;

struct_type
    : T_STRUCT T_LESS struct_type_type (T_COMMA struct_type_type)* T_GREATER
    ;

struct_type_type
    : column_name T_COLON dtype comment_part?
    ;

union_type
    : T_UNIONTYPE T_LESS dtype (T_COMMA dtype)* T_GREATER
    ;
     
dtype_len :             // Data type length or size specification
       T_OPEN_P (L_INT | T_MAX) (T_CHAR | T_BYTE)? (T_COMMA L_INT)? T_CLOSE_P
     ;
     
dtype_attr :
       T_NOT? T_NULL
     | T_CHARACTER T_SET ident
     | T_NOT? (T_CASESPECIFIC | T_CS)
     ;

dtype_default :         
       T_COLON? T_EQUAL expr
     | T_WITH? T_DEFAULT expr?
     ;
 
create_database_stmt :
      T_CREATE (T_DATABASE | T_SCHEMA) (T_IF T_NOT T_EXISTS)? ident create_database_option
    ;

create_database_option :
      comment_part? location_part? property_values?
    ;

comment_part
    : T_COMMENT expr
    ;

location_part
    : T_LOCATION expr
    ;

property_values
    : T_WITH T_OVERWRITE? property_values_part
    ;

property_values_part
    : (T_DBPROPERTIES | T_TBLPROPERTIES | T_IDXPROPERTIES | T_SERDEPROPERTIES)? T_OPEN_P 
      assignment_stmt_single_item (T_COMMA assignment_stmt_single_item)* T_CLOSE_P
    ;
     
create_function_stmt
    : create_temporary_function
    | create_permanent_function
    | create_function_procedure
    ;

create_function_procedure
    : (T_ALTER | T_CREATE (T_OR T_REPLACE)? | T_REPLACE)? T_FUNCTION ident create_routine_params? create_function_return (T_AS | T_IS)? declare_block_inplace? single_block_stmt
    ;

create_temporary_function
    : T_CREATE T_TEMPORARY T_FUNCTION ident T_AS expr
    ;

create_permanent_function
    : T_CREATE T_FUNCTION ident T_AS expr permanent_function_options?
    ;

permanent_function_options
    : permanent_function_option (T_COMMA permanent_function_option)*
    ;

permanent_function_option
    : T_USING (T_JAR|T_FILE|T_ARCHIVE) ident
    ;

reload_function
    : T_RELOAD tk=(T_FUNCTIONS|T_FUNCTION)
    ;

create_function_return :
       (T_RETURN | T_RETURNS) dtype
     ;
     
create_package_stmt :
      (T_ALTER | T_CREATE (T_OR T_REPLACE)? | T_REPLACE)? T_PACKAGE ident (T_AS | T_IS) package_spec T_END (ident T_SEMICOLON)? 
    ;
    
package_spec :
      package_spec_item T_SEMICOLON (package_spec_item T_SEMICOLON)*
    ;

package_spec_item :
      declare_stmt_item
    | T_FUNCTION ident create_routine_params? create_function_return 
    | (T_PROCEDURE | T_PROC) ident create_routine_params? 
    ;

create_package_body_stmt :
      (T_ALTER | T_CREATE (T_OR T_REPLACE)? | T_REPLACE)? T_PACKAGE T_BODY ident (T_AS | T_IS) package_body T_END (ident T_SEMICOLON)? 
    ;
    
package_body :
      package_body_item T_SEMICOLON (package_body_item T_SEMICOLON)*
    ;

package_body_item :
      declare_stmt_item
    | create_function_stmt
    | create_procedure_stmt 
    ;
    
create_procedure_stmt : 
      (T_ALTER | T_CREATE (T_OR T_REPLACE)? | T_REPLACE)? (T_PROCEDURE | T_PROC) ident create_routine_params? create_routine_options? (T_AS | T_IS)? declare_block_inplace? label? proc_block (ident T_SEMICOLON)? 
    ;

create_routine_params :
       T_OPEN_P T_CLOSE_P
     | T_OPEN_P create_routine_param_item (T_COMMA create_routine_param_item)* T_CLOSE_P
     | create_routine_param_item (T_COMMA create_routine_param_item)* 
     ;
     
create_routine_param_item :
       (T_IN | T_OUT | T_INOUT | T_IN T_OUT)? ident dtype dtype_attr* dtype_default? 
     | ident (T_IN | T_OUT | T_INOUT | T_IN T_OUT)? dtype dtype_attr* dtype_default? 
     ;
     
create_routine_options :
       create_routine_option+
     ;
create_routine_option :
       T_LANGUAGE T_SQL       
     | T_SQL T_SECURITY (T_CREATOR | T_DEFINER | T_INVOKER | T_OWNER)
     | T_DYNAMIC? T_RESULT T_SETS int_number
     ;
     
drop_stmt :             // DROP statement
       T_DROP T_MATERIALIZED? tk=(T_TABLE | T_VIEW | T_INDEX | T_ROLE) (T_IF T_EXISTS)? ident T_PURGE?           # drop_table_view_role_index_stmt
     | T_DROP (T_DATABASE | T_SCHEMA) (T_IF T_EXISTS)? ident (T_RESTRICT | T_CASCADE)?    # drop_db_schema_stmt
     | T_DROP T_TEMPORARY? tk=(T_MACRO | T_FUNCTION) (T_IF T_EXISTS)? ident    # drop_macro_func_stmt
     ;

end_transaction_stmt :
       T_END T_TRANSACTION
     ;

exec_stmt :             // EXEC, EXECUTE IMMEDIATE statement 
       (T_EXEC | T_EXECUTE) T_IMMEDIATE? expr (T_OPEN_P expr_func_params T_CLOSE_P | expr_func_params)? (T_INTO L_ID (T_COMMA L_ID)*)? using_clause?
     ;

if_stmt :               // IF statement 
       if_plsql_stmt
     | if_tsql_stmt 
     | if_bteq_stmt
     ;

if_plsql_stmt : 
       T_IF bool_expr T_THEN block elseif_block* else_block? T_END T_IF 
     ;

if_tsql_stmt : 
       T_IF bool_expr single_block_stmt (T_ELSE single_block_stmt)?  
     ;
     
if_bteq_stmt :
       T_PERIOD T_IF bool_expr T_THEN single_block_stmt 
     ;

elseif_block :
       (T_ELSIF | T_ELSEIF) bool_expr T_THEN block
     ;

else_block :
       T_ELSE block
     ; 
     
include_stmt :          // INCLUDE statement
       T_INCLUDE (file_name | expr)
     ;  

// load file
load_file_stmt
    : T_LOAD T_DATA T_LOCAL? T_INPATH string T_OVERWRITE? T_INTO T_TABLE table_name
      partition_assignment_list? (T_INPUTFORMAT L_S_STRING T_SERDE L_S_STRING)?
    ;

// INSERT statement
insert_stmt
    : insert_into_table_from_sql
    | insert_into_tables_from_query
    | insert_into_files_from_query
    | insert_into_mutiples
    ;

insert_into_table_from_sql
    : T_INSERT T_INTO T_TABLE table_name partition_assignment_list? insert_stmt_cols? 
      insert_stmt_rows
    ;

insert_into_tables_from_query
    : insert_tables_overwrite_into from_clause?
    ;

insert_tables_overwrite_into
    : T_INSERT (T_OVERWRITE | T_INTO) T_TABLE table_name (partition_assignment_list (T_IF T_NOT T_EXISTS)?)? 
      select_stmt
    ;

insert_into_files_from_query
    : insert_directory_stmt
    ;

insert_into_mutiples
    : from_clause (insert_tables_overwrite_into | insert_directory_stmt)+
    ;
     
insert_stmt_cols :
       T_OPEN_P ident (T_COMMA ident)* T_CLOSE_P 
     ;
     
insert_stmt_rows :
       T_VALUES insert_stmt_row (T_COMMA insert_stmt_row)*
     ;

insert_stmt_row:
       T_OPEN_P expr (T_COMMA expr)* T_CLOSE_P
     ;

insert_directory_stmt :
       T_INSERT T_OVERWRITE T_LOCAL? T_DIRECTORY expr_file row_format_part? expr_select
     ;
     
exit_stmt :
       T_EXIT L_ID? (T_WHEN bool_expr)?
     ;
     
get_diag_stmt :         // GET DIAGNOSTICS statement
       T_GET T_DIAGNOSTICS get_diag_stmt_item
     ;
     
get_diag_stmt_item :
       get_diag_stmt_exception_item
     | get_diag_stmt_rowcount_item
     ;
     
get_diag_stmt_exception_item :
       T_EXCEPTION int_number ident T_EQUAL T_MESSAGE_TEXT
     ;

get_diag_stmt_rowcount_item :
       ident T_EQUAL T_ROW_COUNT
     ;
     
leave_stmt :
       T_LEAVE L_ID?
     ;
     
map_object_stmt :
       T_MAP T_OBJECT expr (T_TO expr)? (T_AT expr)?
     ;
     
open_stmt :             // OPEN cursor statement
       T_OPEN L_ID (T_FOR (select_stmt | expr))?
     ;

fetch_stmt :            // FETCH cursor statement
       T_FETCH T_FROM? L_ID T_INTO L_ID (T_COMMA L_ID)*
     ;
     
collect_stats_stmt :
       T_COLLECT (T_STATISTICS | T_STATS) T_ON table_name collect_stats_clause?
     ;
     
collect_stats_clause :
       T_COLUMN T_OPEN_P ident (T_COMMA ident)* T_CLOSE_P
     ;
     
close_stmt :            // CLOSE cursor statement
       T_CLOSE L_ID
     ;
     
cmp_stmt :              // CMP statement
       T_CMP (T_ROW_COUNT | T_SUM) cmp_source T_COMMA cmp_source
     ;
     
cmp_source :
      (table_name where_clause? | T_OPEN_P select_stmt T_CLOSE_P) (T_AT ident)?
     ;
     
copy_from_local_stmt :  // COPY FROM LOCAL statement
       T_COPY T_FROM T_LOCAL copy_source (T_COMMA copy_source)* T_TO copy_target copy_file_option*
     ;
     
copy_stmt :             // COPY statement
       T_COPY (table_name | T_OPEN_P select_stmt T_CLOSE_P) T_TO T_HDFS? copy_target copy_option*
     ;
     
copy_source :
       (file_name | expr) 
     ;

copy_target :
       (file_name | expr) 
     ;
    
copy_option :
       T_AT ident
     | T_BATCHSIZE expr
     | T_DELIMITER expr
     | T_SQLINSERT ident
     ;

copy_file_option :
       T_DELETE
     | T_IGNORE
     | T_OVERWRITE
     ;
     
commit_stmt :           // COMMIT statement
       T_COMMIT T_WORK?
     ;
     
create_index_stmt :     // CREATE INDEX statement
       T_CREATE T_INDEX ident T_ON T_TABLE table_name paren_column_list T_AS dtype
       (T_WITH T_DEFERRED T_REBUILD)? property_values_part? (T_IN T_TABLE table_name)?
       row_format_part? location_part? property_values_part? comment_part?
     ;
     
create_index_col : 
       ident (T_ASC | T_DESC)?
     ;
     
index_storage_clause :
      index_mssql_storage_clause
    ;
    
index_mssql_storage_clause :
      T_WITH T_OPEN_P ident T_EQUAL ident (T_COMMA ident T_EQUAL ident)* T_CLOSE_P create_table_options_mssql_item*
    ;
     
print_stmt :            // PRINT statement 
       T_PRINT expr
     | T_PRINT T_OPEN_P expr T_CLOSE_P
     ;

quit_stmt :
       T_PERIOD? T_QUIT expr?
     ;
     
raise_stmt :
       T_RAISE
     ;
     
resignal_stmt :         // RESIGNAL statement
       T_RESIGNAL (T_SQLSTATE T_VALUE? expr (T_SET T_MESSAGE_TEXT T_EQUAL expr)? )?
     ;
     
return_stmt :           // RETURN statement
       T_RETURN expr?
     ;
     
rollback_stmt :         // ROLLBACK statement
       T_ROLLBACK T_WORK?
     ;
     
set_session_option :          
       set_current_schema_option
     | set_mssql_session_option
     | set_teradata_session_option
     ;

set_current_schema_option :          
       ((T_CURRENT? T_SCHEMA) | T_CURRENT_SCHEMA) T_EQUAL? expr
     ;
     
set_mssql_session_option :
     ( T_ANSI_NULLS        
     | T_ANSI_PADDING
     | T_NOCOUNT
     | T_QUOTED_IDENTIFIER
     | T_XACT_ABORT )
     (T_ON | T_OFF)
     ;
     
set_teradata_session_option :
       T_QUERY_BAND T_EQUAL (expr | T_NONE) T_UPDATE? T_FOR (T_TRANSACTION | T_SESSION)
     ;
     
signal_stmt :          // SIGNAL statement
       T_SIGNAL ident
     ;

summary_stmt :         // SUMMARY statement
       T_SUMMARY (T_TOP expr)? T_FOR (select_stmt | table_name where_clause? (T_LIMIT expr)?)
     ;
     
truncate_table_stmt :
       T_TRUNCATE T_TABLE? table_name partition_assignment_list? 
     ;

partition_assignment_list
    : T_PARTITION T_OPEN_P? partition_spec T_CLOSE_P?
    ;

partition_spec
    : T_OPEN_P assignment_stmt_single_item (T_COMMA assignment_stmt_single_item)* T_CLOSE_P
    ;

use_stmt :              // USE statement
       T_USE (expr | T_DEFAULT)
     ;
     
values_into_stmt :     // VALUES INTO statement
       T_VALUES T_OPEN_P? expr (T_COMMA expr)* T_CLOSE_P? T_INTO T_OPEN_P? ident (T_COMMA ident)* T_CLOSE_P? 
     ;

while_stmt :            // WHILE loop statement
       T_WHILE bool_expr (T_DO | T_LOOP | T_THEN | T_BEGIN) block T_END (T_WHILE | T_LOOP)? 
     ;

for_cursor_stmt :       // FOR (cursor) statement
       T_FOR L_ID T_IN T_OPEN_P? select_stmt T_CLOSE_P? T_LOOP block T_END T_LOOP
     ;
     
for_range_stmt :        // FOR (Integer range) statement
       T_FOR L_ID T_IN T_REVERSE? expr T_DOT2 expr ((T_BY | T_STEP) expr)? T_LOOP block T_END T_LOOP
     ;
     
label :
       label_pattern
     | T_LESS T_LESS L_ID T_GREATER T_GREATER
     ;

// L_LABEL defined as a token lexer, conflicts with some other rules who contains T_COLON
// so redefined here as a rule instead of a token
label_pattern     
    : (L_ALPHA | L_DIGIT | '_')* ':'            
    ;

using_clause :          // USING var,... clause
       T_USING expr (T_COMMA expr)*
     ;

// SELECT statement
select_stmt
    : cte_select_stmt? fullselect_stmt       
    ;
     
cte_select_stmt :
       T_WITH common_table_expression (T_COMMA common_table_expression)*
     ;
     
common_table_expression :
       ident cte_select_cols? T_AS T_OPEN_P fullselect_stmt T_CLOSE_P
     ;
     
cte_select_cols :
       T_OPEN_P cte_select_col (T_COMMA cte_select_col)* T_CLOSE_P
     ;

cte_select_col
    : ident
    ;
     
fullselect_stmt : 
       fullselect_stmt_item (fullselect_set_clause fullselect_stmt_item)* 
     ;

fullselect_stmt_item : 
       subselect_stmt
     | T_OPEN_P fullselect_stmt T_CLOSE_P
     ;

fullselect_set_clause :
       T_UNION T_ALL?
     | T_EXCEPT T_ALL?
     | T_INTERSECT T_ALL?     
     ;
  
subselect_stmt : 
       from_clause? T_SELECT select_list select_option*
     ;

select_list :           
       select_list_set? select_list_limit? select_list_item (T_COMMA select_list_item)* select_list_use_option?
     ;

select_list_set :
       T_ALL 
     | T_DISTINCT
     ;
       
select_list_limit :       
       T_TOP expr
     ;

select_list_item
    : select_list_item_normal 
    | select_list_item_asterisk
    ;

select_list_item_normal
    : (ident T_EQUAL)? bool_expr (T_AS? expr)? 
    ;
     
select_list_item_asterisk
    : (ident T_PERIOD)? '*' 
    ;

// TODO: can not find from hive documentation, just occur in samples.
select_list_use_option
    : T_USING expr (T_AS (paren_column_list | column_name_ele))?
    ; 
     
from_clause :           
       T_FROM from_table_clause (from_join_clause)*
     ;
     
from_table_clause :
       from_table_name_clause
     | from_subselect_clause
     ;
     
// The TABLESAMPLE clause can be added to any table in the FROM clause. 
// from https://cwiki.apache.org/confluence/display/Hive/LanguageManual+Sampling
from_table_name_clause :
       table_name from_table_clause_option* 
     ;

from_table_clause_option
    : table_sample_clause
    | from_alias_clause
    | lateral_view
    ;

lateral_view
    : T_LATERAL T_VIEW T_OUTER? ident T_OPEN_P expr (T_COMMA expr)* T_CLOSE_P ident T_AS column_name_list
    ; 

table_sample_clause
    : table_sampling 
    | block_sampling
    ;

//TABLESAMPLE (BUCKET x OUT OF y [ON colname])
//T_TABLESAMPLE T_OPEN_P T_BUCKET L_DIGIT T_OUT T_OF L_DIGIT (T_ON expr)? T_CLOSE_P
table_sampling
    : T_TABLESAMPLE T_OPEN_P T_BUCKET numbers T_OUT T_OF numbers (T_ON expr)? T_CLOSE_P
    ;

block_sampling
    : T_TABLESAMPLE T_OPEN_P block_sampling_option T_CLOSE_P
    ;

block_sampling_option
    : numbers (T_PERCENTS | size_types | T_ROWS)
    ;

numbers
    : dec_number
    | int_number
    ;

// size type is B b K k M m G b
// conflict, use L_ID directly
size_types
    : L_ID
    ;

from_subselect_clause :
       T_OPEN_P select_stmt T_CLOSE_P (T_AS? expr)?
     ;
     
from_join_clause :
       T_COMMA from_table_clause
     | from_join_type_clause from_table_clause on_condition?
     ;
     
from_join_type_clause :
       T_INNER? T_JOIN
     | (T_LEFT | T_RIGHT | T_FULL) T_OUTER? T_JOIN
     | T_LEFT T_SEMI T_JOIN
     | T_CROSS T_JOIN
     ;
          
from_alias_clause :
       T_AS? expr (T_OPEN_P L_ID (T_COMMA L_ID)* T_CLOSE_P)? 
     ;

on_condition
    : T_ON bool_expr
    | T_ON expr T_IS T_DISTINCT T_FROM expr
    ;
     
table_name :
       ident
     ;

view_name
    : ident
    ;

db_name
    : ident
    ;
     
select_option
    : from_clause
    | where_clause
    | group_by_clause
    | having_clause
    | order_by_clause
    | cluster_by_clause
    | limit_clause
    | window_clause
    ;

// I don't find documentations about window clause syntax from hive website.
window_clause
    : T_WINDOW ident expr_func_over_clause
    ;

where_clause
    : T_WHERE bool_expr
    ;

// GroupByQuery
group_by_clause :
       T_GROUP T_BY expr (T_COMMA expr)*
     ;
     
having_clause :           
       T_HAVING bool_expr
     ;     
     
limit_clause
    : T_LIMIT (T_COMMA L_INT)? L_INT
    ;

order_by_clause :
       (T_ORDER | T_SORT) T_BY expr order_by_clause_option (T_COMMA expr order_by_clause_option)*
     ;

order_by_clause_option
    : col_order? col_null_order?
    ;

col_order
    : T_ASC
    | T_DESC
    ;

col_null_order
    : T_NULLS T_FIRST 
    | T_NULLS T_LAST
    ;

// [CLUSTER BY col_list | [DISTRIBUTE BY col_list] [SORT BY col_list]]
cluster_by_clause
    : T_CLUSTER T_BY expr (T_COMMA expr)*
    | ((T_DISTRIBUTE | T_SORT) T_BY expr (T_COMMA expr)*)+ 
    ;

update_stmt :                              // UPDATE statement
       T_UPDATE table_name T_SET update_assignment where_clause? update_upsert?
     ;
     
update_assignment :
       assignment_stmt_item (T_COMMA assignment_stmt_item)*
     ;   
     
update_upsert :
       T_ELSE insert_stmt
     ;
     
// MERGE statement
merge_stmt :                              
       T_MERGE T_INTO merge_table T_AS? T_T T_USING expr T_AS? T_S T_ON bool_expr merge_condition+
     ;
     
merge_table :
       (table_name | (T_OPEN_P select_stmt T_CLOSE_P)) (T_AS? ident)?
     ; 
     
merge_condition :
       T_WHEN T_NOT? T_MATCHED (T_AND bool_expr)? T_THEN merge_action
     | T_ELSE T_IGNORE
     ;
     
merge_action :
       T_INSERT insert_stmt_cols? T_VALUES insert_stmt_row 
     | T_UPDATE T_SET assignment_stmt_item (T_COMMA assignment_stmt_item)* where_clause? 
     | T_DELETE
     ;

// existing table analyze
analyze_table_stmt
    : T_ANALYZE T_TABLE table_name partition_assignment_list? T_COMPUTE T_STATISTICS
      (T_FOR T_COLUMNS)? (T_CACHE T_METADATA)? T_NOSCAN?
    ;

// delete stmt
delete_stmt :                             
       T_DELETE T_FROM? table_name delete_alias? (where_clause | T_ALL)?
     ;

delete_alias :
       T_AS? ident
     ;
 
describe_stmt
    : T_DESCRIBE tk=(T_DATABASE | T_SCHEMA) T_EXTENDED? db_name     # desc_db_schema
    | T_DESCRIBE (T_EXTENDED|T_FORMATTED)? ident column_name? partition_assignment_list? # desc_table_view_column
    ;
     
bool_expr :                               // Boolean condition
       T_NOT? T_OPEN_P bool_expr T_CLOSE_P 
     | bool_expr bool_expr_logical_operator bool_expr 
     | T_IF T_OPEN_P bool_expr (T_COMMA bool_expr)* T_CLOSE_P
     | bool_expr_atom
     ;

bool_expr_atom :
      bool_expr_unary
    | bool_expr_binary
    | expr
    ;
    
bool_expr_unary :
      expr T_IS T_NOT? T_NULL
    | expr T_BETWEEN expr T_AND expr
    | T_NOT? T_EXISTS T_OPEN_P select_stmt T_CLOSE_P
    | bool_expr_single_in
    | bool_expr_multi_in
    ;
    
bool_expr_single_in :
      expr T_NOT? T_IN T_OPEN_P ((expr (T_COMMA expr)*) | select_stmt) T_CLOSE_P 
    ;

bool_expr_multi_in :
      paren_expr_list T_NOT? T_IN T_OPEN_P 
      (paren_expr_list (T_COMMA paren_expr_list)* | select_stmt) T_CLOSE_P 
    ;

paren_expr_list
    : T_OPEN_P expr_list T_CLOSE_P
    ;

expr_list
    : expr (T_COMMA expr)*
    ;
    
bool_expr_binary :
       expr bool_expr_binary_operator expr
     ;
     
bool_expr_logical_operator :
       T_AND 
     | T_OR
     ;      

bool_expr_binary_operator :
       T_EQUAL 
     | T_EQUAL2 
     | T_NOTEQUAL 
     | T_NOTEQUAL2 
     | T_LESS 
     | T_LESSEQUAL 
     | T_GREATER 
     | T_GREATEREQUAL 
     | T_NOT? (T_LIKE | T_RLIKE | T_REGEXP)
     ;

expr :
       expr interval_item
     | expr T_MUL expr 
     | expr T_DIV_SIGN expr  
     | expr T_DIV expr
     | expr T_ADD_SIGN expr  
     | expr T_SUB expr   
     | expr T_PERCENT expr
     | expr T_PIPE expr
     | expr T_EXPONENT expr
     | expr T_AND_SIGN expr
     | T_OPEN_P select_stmt T_CLOSE_P 
     | T_OPEN_P expr T_CLOSE_P 
     | expr_unary
     | expr_interval 
     | expr_concat
     | expr_case
     | expr_cursor_attribute
     | expr_agg_window_func
     | expr_spec_func
     | expr_func                          
     | expr_atom    
     ;

expr_unary
    : T_EXCLAMATION expr
    | T_SUB expr
    ;

expr_atom : 
       date_literal
     | timestamp_literal
     | bool_literal
     | ident 
     | string
     | dec_number
     | int_number
     | null_const
     ;
     
expr_interval :
       T_INTERVAL expr interval_item (T_TO interval_item)?
     ;
interval_item :
       T_DAY 
     | T_DAYS
     | T_MICROSECOND 
     | T_MICROSECONDS  
     | T_SECOND 
     | T_SECONDS  
     | T_YEAR
     | T_MONTH
     | T_MINUTE
     ;
     
expr_concat :                  // String concatenation operator
       expr_concat_item (T_PIPE T_PIPE | T_CONCAT) expr_concat_item ((T_PIPE T_PIPE | T_CONCAT) expr_concat_item)*
     ;
     
expr_concat_item : 
       T_OPEN_P expr T_CLOSE_P 
     | expr_case
     | expr_agg_window_func
     | expr_spec_func
     | expr_func                          
     | expr_atom 
     ;

expr_case :                    // CASE expression
       expr_case_simple
     | expr_case_searched
     ;

expr_case_simple :              
       T_CASE expr (T_WHEN expr T_THEN expr)+ (T_ELSE expr)? T_END
     ;

expr_case_searched :              
       T_CASE (T_WHEN bool_expr T_THEN expr)+ (T_ELSE expr)? T_END
     ;
     
expr_cursor_attribute :
      ident T_PERCENT (T_ISOPEN | T_FOUND | T_NOTFOUND)
    ;
     
expr_agg_window_func :
       T_AVG T_OPEN_P expr_func_all_distinct? expr T_CLOSE_P expr_func_over_clause?
     | T_COUNT T_OPEN_P ((expr_func_all_distinct? expr) | '*') T_CLOSE_P expr_func_over_clause?
     | T_COUNT_BIG T_OPEN_P ((expr_func_all_distinct? expr) | '*') T_CLOSE_P expr_func_over_clause?
     | T_CUME_DIST T_OPEN_P T_CLOSE_P expr_func_over_clause
     | T_DENSE_RANK T_OPEN_P T_CLOSE_P expr_func_over_clause
     | T_FIRST_VALUE T_OPEN_P expr T_CLOSE_P expr_func_over_clause
     | T_LAG T_OPEN_P expr (T_COMMA expr (T_COMMA expr)?)? T_CLOSE_P expr_func_over_clause
     | T_LAST_VALUE T_OPEN_P expr T_CLOSE_P expr_func_over_clause
     | T_LEAD T_OPEN_P expr (T_COMMA expr (T_COMMA expr)?)? T_CLOSE_P expr_func_over_clause
     | T_MAX T_OPEN_P expr_func_all_distinct? expr T_CLOSE_P expr_func_over_clause?
     | T_MIN T_OPEN_P expr_func_all_distinct? expr T_CLOSE_P expr_func_over_clause?
     | T_RANK T_OPEN_P T_CLOSE_P expr_func_over_clause
     | T_ROW_NUMBER T_OPEN_P T_CLOSE_P expr_func_over_clause
     | T_STDEV T_OPEN_P expr_func_all_distinct? expr T_CLOSE_P expr_func_over_clause?   
     | T_STD T_OPEN_P expr_func_all_distinct? expr T_CLOSE_P expr_func_over_clause?  
     | T_SUM T_OPEN_P expr_func_all_distinct? expr T_CLOSE_P expr_func_over_clause?
     | T_VAR T_OPEN_P expr_func_all_distinct? expr T_CLOSE_P expr_func_over_clause?
     | T_VARIANCE T_OPEN_P expr_func_all_distinct? expr T_CLOSE_P expr_func_over_clause?
     ; 

expr_func_all_distinct :
       T_ALL 
     | T_DISTINCT 
     ; 

expr_func_over_clause :
       (T_OVER | T_AS?) (T_OPEN_P expr_func_over_clause_options* T_CLOSE_P | ident)
     ; 

expr_func_over_clause_options
    : expr_func_partition_by_clause
    | order_by_clause
    | func_partition_clause_option
    | T_DISTRIBUTE T_BY expr (T_COMMA expr)*
    ;

expr_func_partition_by_clause :
       T_PARTITION T_BY expr (T_COMMA expr)*
     ; 

//(ROWS | RANGE) BETWEEN (UNBOUNDED | [num]) PRECEDING AND ([num] PRECEDING | CURRENT ROW | (UNBOUNDED | [num]) FOLLOWING)
//(ROWS | RANGE) BETWEEN CURRENT ROW AND (CURRENT ROW | (UNBOUNDED | [num]) FOLLOWING)
//(ROWS | RANGE) BETWEEN [num] FOLLOWING AND (UNBOUNDED | [num]) FOLLOWING
func_partition_clause_option 
    : (T_ROWS | T_RANGE) T_BETWEEN? func_partition_clause_part
    ;

func_partition_clause_part
    : (T_UNBOUNDED | L_INT?) T_PRECEDING T_AND? (L_INT? T_PRECEDING | T_CURRENT T_ROW | (T_UNBOUNDED | L_INT?) T_FOLLOWING)?
    | T_CURRENT T_ROW T_AND? (T_CURRENT T_ROW | (T_UNBOUNDED | L_INT?) T_FOLLOWING)?
    | L_INT? T_FOLLOWING T_AND? (T_UNBOUNDED | L_INT?) T_FOLLOWING
    ;

expr_spec_func : 
       T_ACTIVITY_COUNT
     | T_CAST T_OPEN_P (expr T_AS  dtype | dtype T_AS expr) (T_FORMAT expr)? T_CLOSE_P
     | T_COUNT T_OPEN_P (expr | '*') T_CLOSE_P
     | T_CURRENT_DATE | T_CURRENT T_DATE
     | (T_CURRENT_TIMESTAMP | T_CURRENT T_TIMESTAMP) (T_OPEN_P expr T_CLOSE_P)?
     | T_CURRENT_USER | T_CURRENT T_USER
     | T_MAX_PART_STRING T_OPEN_P expr (T_COMMA expr (T_COMMA expr T_EQUAL expr)*)? T_CLOSE_P 
     | T_MIN_PART_STRING T_OPEN_P expr (T_COMMA expr (T_COMMA expr T_EQUAL expr)*)? T_CLOSE_P 
     | T_MAX_PART_INT T_OPEN_P expr (T_COMMA expr (T_COMMA expr T_EQUAL expr)*)? T_CLOSE_P 
     | T_MIN_PART_INT T_OPEN_P expr (T_COMMA expr (T_COMMA expr T_EQUAL expr)*)? T_CLOSE_P 
     | T_MAX_PART_DATE T_OPEN_P expr (T_COMMA expr (T_COMMA expr T_EQUAL expr)*)? T_CLOSE_P 
     | T_MIN_PART_DATE T_OPEN_P expr (T_COMMA expr (T_COMMA expr T_EQUAL expr)*)? T_CLOSE_P 
     | T_PART_COUNT T_OPEN_P expr (T_COMMA expr T_EQUAL expr)* T_CLOSE_P 
     | T_PART_LOC T_OPEN_P expr (T_COMMA expr T_EQUAL expr)+ (T_COMMA expr)? T_CLOSE_P 
     | T_TRIM T_OPEN_P expr T_CLOSE_P
     | T_SUBSTRING T_OPEN_P expr T_FROM expr (T_FOR expr)? T_CLOSE_P
     | T_SYSDATE
     | T_USER
     ;
     
// as a matter of fact, expr_func_over_clause can only accur in window functions
expr_func : 
       ident T_OPEN_P expr_func_params? T_CLOSE_P expr_func_over_clause?
     ;

expr_func_params : 
       func_param (T_COMMA func_param)*  
     ;

func_param : 
       (ident T_EQUAL T_GREATER?)? (bool_expr | '*' )  
     ;
   
expr_select :
       select_stmt
     | expr
     ;
     
expr_file :
       file_name
     | expr
     ;
      
hive :
       T_HIVE hive_item*
     ;

hive_item :
       T_SUB ident expr
     | T_SUB ident L_ID T_EQUAL expr 
     | T_SUB ident
     ;  

host :     
       T_EXCLAMATION host_cmd  T_SEMICOLON                   // OS command
     | host_stmt
     ;

host_cmd :     
       .*?          
     ;
     
host_stmt :     
       T_HOST expr          
     ;
     
file_name :
       file_pattern | (T_DIV_SIGN | T_PERIOD T_DIV_SIGN)? ident (T_DIV_SIGN ident)*
     ;

// File path (a/b/c Linux path causes conflicts with division operator and handled at parser level)
file_pattern
    : (L_ALPHA+ ':' '\\'?)? L_ID ('\\' L_ID)* 
    ; 
     
// DATE 'YYYY-MM-DD' literal
date_literal :
       T_DATE string
     ;

// TIMESTAMP 'YYYY-MM-DD HH:MI:SS.FFF' literal
timestamp_literal : 
       T_TIMESTAMP string
     ;
     
ident :
       T_SUB? (L_ID | non_reserved_words) (T_PERIOD (L_ID | non_reserved_words))*
     ;
     
// String literal (single or double quoted)
// a.b.c.d['abcd'.d]
string 
     : L_S_STRING                          # single_quotedString
     | L_D_STRING                          # double_quotedString
     ;

int_number :                               // Integer (positive or negative)
     (T_SUB | T_ADD_SIGN)? L_INT
     ;

dec_number :                               // Decimal number (positive or negative)
     (T_SUB | T_ADD_SIGN)? L_DEC
     ;
     
bool_literal :                            // Boolean literal
       T_TRUE
     | T_FALSE
     ;
     
null_const :                              // NULL constant
       T_NULL
     ;
     
non_reserved_words :                      // Tokens that are not reserved words and can be used as identifiers
       T_ACTION 
     | T_ACTIVITY_COUNT
     | T_ADD
     | T_ALL 
     | T_ALLOCATE
     | T_ALTER
     | T_AND
     | T_ANSI_NULLS
     | T_ANSI_PADDING
     | T_AS     
     | T_ASC   
     | T_ASSOCIATE     
     | T_AT
     | T_AUTO_INCREMENT
     | T_AVG
     | T_BATCHSIZE
     | T_BEGIN   
     | T_BETWEEN
     | T_BIGINT  
     | T_BINARY_DOUBLE
     | T_BINARY_FLOAT
     | T_BIT
     | T_BODY
     | T_BREAK   
     | T_BY    
     | T_BYTE
     | T_CALL     
     | T_CALLER 
     | T_CASCADE     
     | T_CASE   
     | T_CASESPECIFIC
     | T_CAST
     | T_CHAR  
     | T_CHARACTER 
     | T_CHARSET     
     | T_CLIENT     
     | T_CLOSE 
     | T_CLUSTERED
     | T_CMP
     | T_COLLECT
     | T_COLLECTION  
     | T_COLUMN
     | T_COMMENT  
     | T_COMPRESS     
     | T_CONSTANT     
     | T_COPY
     | T_COMMIT
     | T_CONCAT 
     | T_CONDITION
     | T_CONSTRAINT
     | T_CONTINUE
     | T_COUNT   
     | T_COUNT_BIG   
     | T_CREATE
     | T_CREATION
     | T_CREATOR
     | T_CS
     | T_CUME_DIST
     | T_CURRENT 
     | T_CURRENT_DATE
     | T_CURRENT_SCHEMA
     | T_CURRENT_TIMESTAMP
     | T_CURRENT_USER
     | T_CURSOR  
     | T_DATA
     | T_DATABASE
     | T_DATE   
     | T_DATETIME     
     | T_DAY
     | T_DAYS
     | T_DEC      
     | T_DECIMAL  
     | T_DECLARE 
     | T_DEFAULT  
     | T_DEFERRED
     | T_DEFINED
     | T_DEFINER
     | T_DEFINITION
     | T_DELETE
     | T_DELIMITED
     | T_DELIMITER
     | T_DENSE_RANK
     | T_DESC   
     | T_DESCRIBE 
     | T_DIAGNOSTICS
     | T_DIR
     | T_DIRECTORY
     | T_DISTINCT 
     | T_DISTRIBUTE
     | T_DO        
     | T_DOUBLE     
     | T_DROP    
     | T_DYNAMIC      
     // T_ELSE reserved word         
     // T_ELSEIF reserved word       
     // T_ELSIF reserved word        
     // T_END reserved word
     | T_ENABLE
     | T_ENGINE     
     | T_ESCAPED     
     | T_EXCEPT       
     | T_EXEC         
     | T_EXECUTE      
     | T_EXCEPTION  
     | T_EXCLUSIVE     
     | T_EXISTS
     | T_EXIT 
     | T_FALLBACK     
     | T_FALSE     
     | T_FETCH  
     | T_FIELDS
     | T_FILE    
     | T_FILES 
     | T_FIRST_VALUE     
     | T_FLOAT        
     | T_FOR  
     | T_FOREIGN
     | T_FORMAT     
     | T_FOUND        
     // | T_FROM  reserved word
     | T_FULL     
     | T_FUNCTION
     | T_GET
     | T_GLOBAL
     | T_GO
     | T_GRANT
     //| T_GROUP        
     | T_HANDLER      
     | T_HASH
     | T_HAVING       
     | T_HDFS
     | T_HIVE         
     | T_HOST    
     | T_IDENTITY     
     | T_IF    
     | T_IGNORE     
     | T_IMMEDIATE    
     | T_IN   
     | T_INCLUDE
     | T_INDEX     
     | T_INITRANS
     | T_INNER
     | T_INOUT
     | T_INSERT
     | T_INT          
     | T_INT2
     | T_INT4
     | T_INT8
     | T_INTEGER      
     | T_INTERSECT  
     | T_INTO 
     | T_INVOKER     
     | T_ITEMS     
     | T_IS    
     | T_ISOPEN
     | T_JOIN  
     | T_KEEP     
     | T_KEY
     | T_KEYS
     | T_LAG
     | T_LANGUAGE
     | T_LAST_VALUE
     | T_LEAD
     | T_LEAVE     
     | T_LEFT     
     | T_LIKE 
     // | T_LIMIT  
     | T_LINES     
     | T_LOCAL    
     | T_LOCATION 
     | T_LOCATOR
     | T_LOCATORS
     | T_LOCKS
     | T_LOG
     | T_LOGGED    
     | T_LOGGING     
     | T_LOOP    
     | T_MATCHED     
     | T_MAX   
     | T_MAXTRANS     
     | T_MERGE
     | T_MESSAGE_TEXT
     | T_MICROSECOND
     | T_MICROSECONDS
     | T_MIN
     | T_MULTISET
     | T_NCHAR
     | T_NEW
     | T_NVARCHAR
     | T_NO
     | T_NOCOMPRESS
     | T_NOCOUNT
     | T_NOLOGGING
     | T_NONE
     | T_NOT         
     | T_NOTFOUND     
     // T_NULL reserved word       
     | T_NUMERIC
     | T_NUMBER   
     | T_OBJECT  
     | T_OFF     
     | T_ON
     | T_ONLY
     | T_OPEN         
     | T_OR           
     //| T_ORDER   
     | T_OUT     
     | T_OUTER
     // | T_OVER
     | T_OVERWRITE
     | T_OWNER
     | T_PACKAGE
     | T_PART_COUNT
     | T_PART_LOC 
     | T_PARTITION  
     | T_PCTFREE
     | T_PCTUSED  
     | T_PRECISION     
     | T_PRESERVE
     | T_PRIMARY
     | T_PRINT 
     | T_PROC
     | T_PROCEDURE 
     | T_PWD     
     | T_QUALIFY
     | T_QUERY_BAND
     | T_QUIT
     | T_QUOTED_IDENTIFIER
     | T_RAISE
     | T_RANK  
     | T_REAL
     | T_REFERENCES     
     | T_REGEXP
     | T_RR     
     | T_REPLACE
     | T_RESIGNAL
     | T_RESTRICT
     | T_RESULT
     | T_RESULT_SET_LOCATOR
     | T_RETURN       
     | T_RETURNS
     | T_REVERSE    
     | T_RIGHT
     | T_RLIKE
     | T_RS 
     | T_ROLE     
     | T_ROLLBACK
     | T_ROW
     | T_ROWS
     | T_ROW_COUNT
     | T_ROW_NUMBER
     | T_SCHEMA
     | T_SECOND
     | T_SECONDS
     | T_SECURITY
     | T_SEGMENT         
     | T_SELECT 
     | T_SESSION 
     | T_SESSIONS
     | T_SETS     
     | T_SHARE
     | T_SIGNAL
     | T_SIMPLE_DOUBLE
     | T_SIMPLE_FLOAT
     | T_SMALLDATETIME
     | T_SMALLINT     
     | T_SQL
     | T_SQLEXCEPTION 
     | T_SQLINSERT
     | T_SQLSTATE
     | T_SQLWARNING  
     | T_STATS
     | T_STATISTICS     
     | T_STEP    
     | T_STDEV   
     | T_STD
     | T_STORAGE
     | T_STORED
     | T_STRING   
     | T_SUBDIR	 
     | T_SUBSTRING
     | T_SUM
     | T_SUMMARY
     | T_SYSDATE 
     | T_SYS_REFCURSOR     
     | T_TABLE
     | T_TABLESPACE
     | T_TEMPORARY
     | T_TERMINATED
     | T_TEXTIMAGE_ON
     | T_THEN  
     | T_TIMESTAMP     
     | T_TITLE
     | T_TO     
     | T_TOP
     | T_TRANSACTION
     | T_TRIM
     | T_TRUE
     | T_TRUNCATE
     | T_UNIQUE     
     | T_UPDATE  
     | T_UR     
     | T_USE         
     | T_USER     
     | T_USING        
     | T_VALUE
     | T_VALUES
     | T_VAR
     | T_VARCHAR      
     | T_VARCHAR2
     | T_VARYING
     | T_VARIANCE
     | T_VOLATILE
     // T_WHEN reserved word         
     // T_WHERE reserved word        
     | T_WHILE     
     | T_WITH 
     | T_WITHOUT      
     | T_WORK
     | T_XACT_ABORT
     | T_XML
     | T_YES
     | T_T
     | T_S
     | T_SERDE
       
     | T_PURGE
     | T_BUCKETS
     | T_SKEWED
     | T_DIRECTORIES
     | T_SERDEPROPERTIES
     | T_RENAME
     | T_SORTED
     | T_SORT
     | T_CHANGE
     | T_EXCHANGE
     | T_RECOVER
     | T_PARTITIONS
     | T_PROTECTION
     | T_ARCHIVE
     | T_UNARCHIVE
     | T_TOUCH
     | T_OFFLINE
     | T_NO_DROP
     | T_COMPACT
     | T_CONCATENATE
     | T_WAIT
     | T_COLUMNS
     | T_FIRST
     | T_LAST
     | T_NULLS
     | T_AFTER
     | T_MATERIALIZED
     | T_REWRITE
     | T_PARTITIONED
     | T_DISTRIBUTED
     | T_MACRO
     | T_SHOW
     | T_EXTENDED
     | T_FORMATTED
     | T_SEMI
     | T_CROSS
     | T_LATERAL
     | T_RELOAD
     | T_LOAD
     | T_INPATH
     | T_PRINCIPALS
     | T_COMPACTIONS
     | T_CONF
     | T_ADMIN
     | T_OPTION
     | T_PRIVILEGES
     | T_LOCK
     | T_SHOW_DATABASE
     | T_COMPUTE
     | T_CACHE
     | T_METADATA
     | T_NOSCAN
     | T_UNIONTYPE
     | T_MAP
     | T_ARRAY
     | T_STRUCT
     | T_ANALYZE
     | T_EXPLAIN
     | T_CBO
     | T_AST
     | T_DEPENDENCY
     | T_AUTHORIZATION
     | T_VECTORIZATION
     | T_COST
     | T_JOINCOST
     | T_OPERATOR
     | T_EXPRESSION
     | T_DETAIL
     | T_UNBOUNDED
     | T_PRECEDING
     | T_FOLLOWING
     | T_RANGE
     | T_TYPE
     | T_FILEFORMAT
     | T_SEQUENCEFILE
     | T_TEXTFILE
     | T_RCFILE
     | T_ORC
     | T_PARQUET
     | T_AVRO
     | T_JSONFILE
     | T_INPUTFORMAT
     | T_YEAR
     | T_MONTH
     | T_MINUTE
     | T_TIME
     | T_ZONE
     ;

 /**
 * KingBase v7 Sql Lexer
 * Copyright (c) 2019 Jona <mblrwuzy@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

parser grammar KingbaseSqlParser;

import KingbaseQueryParser;

options {
    tokenVocab=KingbaseSqlLexer;
    superClass=KingbaseSqlBaseParser;
}

@parser::postinclude {
#include <KingbaseSqlBaseParser.h>
}

sql_script
    : SEMICOLON* unit_sql_statement* SEMICOLON* EOF
    ;

unit_sql_statement
    : (unit_statement | sql_plus_command) SEMICOLON?
    ;

unit_statement
    // database schema management
    : alter_database
    | alter_full_search_configuration
    | alter_full_search_dictionary
    | alter_full_search_parser
    | alter_full_search_template
    | alter_index
    | alter_materialized_view
    | alter_schema
    | alter_sequence
    | alter_synonym
    | alter_system
    | alter_table
    | alter_tablespace
    | analyze
    | checkpoint
    | cluster
    | comment
    | copy_datafile
      
    | create_database
    | create_full_search_configuration
    | create_full_search_dictionary
    | create_full_search_parser
    | create_full_search_template
    | create_index
    | create_full_index
    | create_materialized_view
    | create_schema
    | create_sequence
    | create_synonym
    | create_table
    | create_tablespace
    | create_view
      
    | create_rule
    | create_type
    | create_force_view
    | create_directory
      
    // DBCC operations
    | dbcc_checkallocate
    | dbcc_checkcatalog
    | dbcc_checktable
    | dbcc_checkindex
    | dbcc_checktablespace
    | dbcc_checkdb
                                               
    | drop_full_search
    | drop_index_schema_sequence_table_view
    | drop_materialize_view
    | drop_synonym
    | drop_tablespace
    | drop_directory
      
    // data manipulate, transaction, cursor manipulate
    | sql_statement
    
    // user previlege management
    | create_user
    | create_role
    | alter_user
    | alter_role
    | drop_user
    | drop_role
    | drop_owned
    | reassign_owned
    | grant_statement
    | revoke_statement
    | enable_user_ip
      
    // function and procedure, trigger
    // TODO
    | create_function_statement
    | drop_function
    | alter_function
    | create_procedure_statement
    | alter_procedure
    | drop_procedure
    | create_trigger //TODO
    | alter_trigger
    | drop_trigger
      
    | create_package
    | alter_package
    | drop_package

    | explain_statement
    
    // declare statement
    | declare_statement
    ;

alter_full_search_configuration
    : ALTER FULLTEXT SEARCH CONFIGURATION regular_id 
      ((ADD | ALTER) MAPPING FOR (COMMA? token_or_dictionary)+ WITH (COMMA? token_or_dictionary)+ 
      | ALTER MAPPING (FOR (COMMA? token_or_dictionary)+)? REPLACE token_or_dictionary WITH token_or_dictionary
      | DROP MAPPING (IF EXISTS)? FOR (COMMA? token_or_dictionary)+
      | (RENAME | OWNER) TO regular_id)
    ;

token_or_dictionary
    : regular_id
    ;

// I can not find more info about options, just language and stopwards
alter_full_search_dictionary
    : ALTER FULLTEXT SEARCH DICTIONARY regular_id
      (LEFT_PAREN expressions RIGHT_PAREN
      | (RENAME | OWNER) TO regular_id)
    ;

alter_full_search_parser
    : ALTER FULLTEXT SEARCH PARSER regular_id RENAME TO regular_id
    ;

alter_full_search_template
    : ALTER FULLTEXT SEARCH TEMPLATE regular_id RENAME TO regular_id
    ;

// DDL -> SQL Statements for Stored PL/SQL Units

// Function DDLs

drop_full_search
    : DROP FULLTEXT SEARCH (CONFIGURATION|DICTIONARY|PARSER|TEMPLATE) (IF EXISTS)? regular_id (CASCADE | RESTRICT)? 
    ;

drop_index_schema_sequence_table_view
    : DROP (INDEX|SCHEMA|SEQUENCE|TABLE) (COMMA? tableview_name)+ (CASCADE | RESTRICT)?
    ;

drop_materialize_view
    : DROP MATERIALIZED VIEW (IF EXISTS)? (COMMA? tableview_name)+ (CASCADE | RESTRICT)?
    ;

drop_synonym
    : DROP PUBLIC? SYNONYM tableview_name
    ;

drop_tablespace
    : DROP TABLESPACE regular_id
    ;

drop_directory
    : DROP DIRECTORY regular_id
    ;

alter_function
    : ALTER FUNCTION function_name paren_parameter_list?
      (RENAME TO function_name | COMPILE) SEMICOLON
    ;

drop_function
    : DROP FUNCTION function_name paren_parameter_list?
      (CASCADE | RESTRICT)? SEMICOLON
    ;

// create function
create_function_statement
    : CREATE (OR REPLACE)? INTERNAL? FUNCTION function_name paren_parameter_list?
      ((RETURN | RETURNS) datatype)? (IMMUTABLE | STABLE | VOLATILE | SECURITY (INVOKER | DEFINER))? ENCRYPTED?
      (IS | AS) (label_name? plsql_block label_name?)
    ;

// the documents does not tell sequence_of_statements
sequence_of_statements
    : sequence_of_statement (SEMICOLON sequence_of_statement)* SEMICOLON
    ;

sequence_of_statement
    : statement
    ;

// Create Package Specific Clauses

create_package
    : CREATE (OR REPLACE)? PACKAGE BODY package_name (AS | IS) package_body?
      (BEGIN initialization_statement?)? END package_name? SEMICOLON
    ;

alter_package
    : ALTER package_name (RENAME TO | OWNER TO | SET SCHEMA) identifier SEMICOLON
    ;

drop_package
    : DROP PACKAGE BODY? (IF EXISTS)? package_names (RESTRICT | CASCADE)? SEMICOLON
    ;

package_names
    : package_name (COMMA package_name)*
    ;

package_name
    : identifier
    ;

package_body
    : procedure_definition
    | function_definition
    ;

initialization_statement
    : plsql_block
    ;

procedure_definition
    : PROCEDURE procedure_name LEFT_PAREN parameter_list RIGHT_PAREN (AS | IS)
      plsql_block
    ;

function_definition
    : FUNCTION function_name LEFT_PAREN parameter_list RIGHT_PAREN ((RETURNS | RETURN) datatype?)?
      (IMMUTABLE | STABLE | VOLATILE)? (AS | IS) plsql_block
    ;

// Procedure DDLs

drop_procedure
    : DROP PROCEDURE procedure_name paren_parameter_list? (CASCADE | RESTRICT)? SEMICOLON
    ;

alter_procedure
    : ALTER PROCEDURE procedure_name paren_parameter_list? 
      (RENAME TO procedure_name | COMPILE) SEMICOLON
    ;

create_procedure_statement
    : CREATE (OR REPLACE)? PROCEDURE procedure_name paren_parameter_list
      (SECURITY (DEFINER | INVOKER))? ENCRYPTED? (IS | AS) label_name?
      DECLARE? variable_declarations? cursor_declarations? 
      plsql_block label_name? SEMICOLON
    ;

plsql_block
    : (DECLARE variable_declaration? cursor_declaration?)? BEGIN sequence_of_statements END
    ;

// declare statement
declare_statement
    : DECLARE cursor_name BINARY? INSENSITIVE? (NO? SCROLL)? CURSOR ((WITH | WITHOUT) HOLD)? FOR subquery
    ; 

// Trigger DDLs

drop_trigger
    : DROP TRIGGER (trigger_name ON)? tableview_name (CASCADE | RESTRICT)? SEMICOLON
    ;

alter_trigger
    : ALTER TRIGGER (trigger_name ON)? tableview_name
      (ENABLE | DISABLE | RENAME TO trigger_name) SEMICOLON
    ;

create_trigger
    : CREATE ( OR REPLACE )? TRIGGER trigger_name (ENABLE | DISABLE)? 
      (BEFORE | AFTER | INSTEAD OF) dml_event_clause
      (execute_procedure_statement | ENCRYPTED? (AS | IS) plsql_block) SEMICOLON
    ;

execute_procedure_statement
    : EXECUTE PROCEDURE identifier LEFT_PAREN RIGHT_PAREN
    ;

// Create Trigger Specific Clauses

dml_event_clause
    : dml_event_element (OR dml_event_element)* ON tableview_name FOR EACH (ROW | STATEMENT)
    ;

dml_event_element
    : (DELETE | INSERT | UPDATE) (OF column_list)?
    ;

// DDLs

drop_type
    : DROP TYPE BODY? type_name (FORCE | VALIDATE)? SEMICOLON
    ;

// Alter Type Specific Clauses

create_type
    : CREATE TYPE type_name LEFT_PAREN type_options RIGHT_PAREN SEMICOLON
    ;

type_options
    : INPUT EQUALS_OP expression COMMA
      OUTPUT EQUALS_OP expression COMMA
      INTERNALLENGTH EQUALS_OP (VARIABLE | UNSIGNED_INTEGER)
      (COMMA EXTERNALLENGTH EQUALS_OP (UNSIGNED_INTEGER | VARIABLE))?
      (COMMA DEFAULT EQUALS_OP expression)?
      (COMMA ELEMENT EQUALS_OP expression)?
      (COMMA DELIMITER EQUALS_OP expression)?
      (COMMA SEND EQUALS_OP expression)?
      (COMMA RECEIVE EQUALS_OP expression)?
      (COMMA PASSEDBYVALUE)?
    ;

type_elements_parameter
    : parameter_name datatype
    ;

// Sequence DDLs

drop_sequence
    : DROP SEQUENCE sequence_name SEMICOLON
    ;

alter_sequence
    : ALTER SEQUENCE sequence_name sequence_spec SEMICOLON
    ;

alter_synonym
    : ALTER PUBLIC? SYNONYM tableview_name OWNER TO regular_id
    ;

alter_system
    : ALTER SYSTEM system_spec
    ;

system_spec
    : ADD (TEMPFILE | GLOBAL DATAFILE) LEFT_PAREN NAME EQUALS_OP? regular_id 
      FILENAME EQUALS_OP? expression SIZE EQUALS_OP? UNSIGNED_INTEGER 
      MAXSIZE EQUALS_OP? UNSIGNED_INTEGER FILEGROWTH EQUALS_OP? expression RIGHT_PAREN
    | REMOVE (TEMPFILE | GLOBAL DATAFILE) regular_id
    | MODIFY (TEMPFILE | GLOBAL DATAFILE) regular_id 
      (SET MAXSIZE EQUALS_OP? UNSIGNED_INTEGER | SET FILEGROWTH EQUALS_OP? expression
      | RESIZE EQUALS_OP? UNSIGNED_INTEGER)
    | ADD LOGFILE LEFT_PAREN NAME EQUALS_OP? regular_id FILENAME EQUALS_OP? expression SIZE EQUALS_OP? UNSIGNED_INTEGER RIGHT_PAREN
    | REMOVE LOGFILE regular_id
    | SWITCH LOGFILE
    | KILL SESSION (BY USER | BY DATABASE)? UNSIGNED_INTEGER
    ;

create_sequence
    : CREATE TEMPORARY? SEQUENCE sequence_name (INCREMENT BY? UNSIGNED_INTEGER)? 
      (MAXVALUE UNSIGNED_INTEGER)? (MINVALUE UNSIGNED_INTEGER)? (NO? CYCLE)? 
      (CACHE UNSIGNED_INTEGER)? (RESTART WITH? UNSIGNED_INTEGER)? SEMICOLON
    ;

// Common Sequence

sequence_spec
    : INCREMENT BY UNSIGNED_INTEGER
    | MAXVALUE UNSIGNED_INTEGER
    | MINVALUE UNSIGNED_INTEGER
    | RESTART WITH? UNSIGNED_INTEGER
    | CACHE UNSIGNED_INTEGER
    | NO? CYCLE
    ;

create_index
    : CREATE UNIQUE? INDEX index_name
       ON tableview_name (USING (BTREE | HASH))? LEFT_PAREN 
       (COMMA? expression (ASC | DESC)? (NULLS | FIRST | LAST)?)+ RIGHT_PAREN
       (TABLESPACE regular_id)?
       SEMICOLON
    ;

create_full_index
    : CREATE FULLTEXT INDEX regular_id ON tableview_name LEFT_PAREN 
      expressions RIGHT_PAREN CONFIGURATION regular_id
    ;

index_expr
    : column_name
    | expression
    ;

indextype
    : (id_expression PERIOD)? id_expression
    ;

alter_index
    : ALTER INDEX index_name (RENAME TO index_name | SET TABLESPACE tablespace) SEMICOLON
    ;

alter_schema
    : ALTER SCHEMA schema_name RENAME TO schema_name
    ;

new_partition_name
    : partition_name
    ;

create_user
    : CREATE USER user_object_name (IDENTIFIED | EXTERNALLY)?
      (WITH? (CREATEDB | SUPERUSER | SSO | SAO | CREATEROLE | PASSWORD CHAR_STRING)
      | VALID UNTIL CHAR_STRING
      | PASSWORD EXPIRE CHAR_STRING
      | CONNECT INTERVAL CHAR_STRING
      | CONNECT DURATION CHAR_STRING
      | CONNECT IDLE TIME CHAR_STRING
      | CONNECTION LIMIT CHAR_STRING
      | IP LIMIT CHAR_STRING) SEMICOLON
    ;

create_role
    : CREATE ROLE id_expression WITH? (CREATEDB | SUPERUSER | CREATEROLE)?
    ;

// The standard clauses only permit one user per statement.
// The proxy clause allows multiple users for a proxy designation.
alter_user
    : ALTER USER user_object_name 
      (WITH? (CREATEDB | SUPERUSER | SSO | SAO | CREATEROLE | PASSWORD CHAR_STRING)
      | VALID UNTIL CHAR_STRING
      | PASSWORD EXPIRE CHAR_STRING
      | CONNECT INTERVAL CHAR_STRING
      | CONNECT DURATION CHAR_STRING
      | CONNECT IDLE TIME CHAR_STRING
      | CONNECTION LIMIT CHAR_STRING
      | IP LIMIT CHAR_STRING
      | DEFAULT ROLE (NONE | id_expression)
      | RENAME TO id_expression)
    ;

alter_role
    : ALTER ROLE id_expression 
      ((WITH? (SUPERUSER | NOSUPERUSER | CREATEDB | NOCREATEDB | CREATEROLE | NOCREATEROLE)?) 
       | RENAME TO id_expression)
    ;

drop_role
    : DROP ROLE (COMMA? id_expression)+
    ;

drop_user
    : DROP USER (COMMA? id_expression)+
    ;

drop_owned
    : DROP OWNED BY (COMMA? id_expression)+ (CASCADE | RESTRICT)?
    ;

reassign_owned
    : REASSIGN OWNED BY (COMMA? id_expression)+ TO id_expression
    ;

enable_user_ip
    : ENABLE (USER | IP) expression
    ;

identified_by
    : IDENTIFIED BY id_expression
    ;

identified_other_clause
    : IDENTIFIED (EXTERNALLY | GLOBALLY) (AS quoted_string)?
    ;

user_tablespace_clause
    : (DEFAULT | TEMPORARY) TABLESPACE id_expression
    ;

profile_clause
    : PROFILE id_expression
    ;

// https://docs.oracle.com/cd/E11882_01/server.112/e41084/statements_4005.htm#SQLRF01105
analyze
    : ANALYZE (tableview_name paren_column_list?)?
      SEMICOLON
    ;

checkpoint
    : CHECKPOINT
    ;

cluster
    : CLUSTER index_name TO tableview_name
    ;

comment
    : COMMENT ON comment_spec IS CHAR_STRING
    ;

comment_spec
    : TABLE tableview_name
    | COLUMN tableview_name
    | CAST LEFT_PAREN expression AS expression RIGHT_PAREN
    | CONSTRAINT regular_id ON tableview_name
    | (DATABASE | INDEX | SCHEMA | SEQUENCE | VIEW) regular_id
    | (FUNCTION | PROCEDURE) regular_id LEFT_PAREN expressions RIGHT_PAREN
    | TRIGGER regular_id ON tableview_name
    | MATERIALIZED VIEW regular_id
    ;

copy_datafile
    : COPY DATAFILE regular_id (TO | FROM) (CHAR_STRING | DEFAULT) FORCE?
    ;

create_database
    : CREATE DATABASE database_name WITH? (OWNER EQUALS_OP? regular_id)?
      (TEMPLATE EQUALS_OP? expression)? (ENCODING EQUALS_OP? expression)?
      (CONNECTION LIMIT EQUALS_OP? expression)?
    ;

create_full_search_configuration
    : CREATE FULLTEXT SEARCH CONFIGURATION regular_id LEFT_PAREN 
      (PARSER | COPY) EQUALS_OP expression RIGHT_PAREN
    ;

create_full_search_dictionary
    : CREATE FULLTEXT SEARCH DICTIONARY regular_id LEFT_PAREN
      expressions RIGHT_PAREN
    ;

create_full_search_parser
    : CREATE FULLTEXT SEARCH PARSER regular_id LEFT_PAREN expressions RIGHT_PAREN
    ;

create_full_search_template
    : CREATE FULLTEXT SEARCH TEMPLATE regular_id LEFT_PAREN expressions RIGHT_PAREN
    ;

drop_index
    : DROP INDEX index_name SEMICOLON
    ;

grant_statement
    : grant_object_privilege
    | grant_column_privilege
    | grant_role_privilege
//    | grant_system_privilege
    ;

grant_object_privilege
    : GRANT (object_privilege (COMMA object_privilege)* | ALL) 
      (ON (TABLE? | VIEW? | SEQUENCE? | DATABASE | PACKAGE | SCHEMA | TABLESPACE) identifier
      | ON PROCEDURE identifier (LEFT_PAREN parameter ( COMMA parameter )* RIGHT_PAREN)?
      | ON FUNCTION function_name (LEFT_PAREN type_elements_parameter (COMMA type_elements_parameter)* RIGHT_PAREN))
      TO (identifier | PUBLIC) (WITH GRANT OPTION)?
    ;

grant_column_privilege
    : GRANT (column_privilege paren_column_list | ALL PRIVILEGES? paren_column_list)
      ON (TABLE | VIEW)? tablename_list TO (identifier | PUBLIC) (WITH GRANT OPTION)?
    ;

grant_role_privilege
    : GRANT identifier (COMMA identifier)* TO (identifier | PUBLIC) (WITH GRANT OPTION)?
    ;

revoke_statement
    : revoke_object_privilege
    | revoke_role_privilege
//    | revoke_system_privilege
    ;

revoke_object_privilege
    : REVOKE (GRANT OPTION FOR)? (object_privilege (COMMA object_privilege)* | ALL)
      (ON (TABLE? | VIEW? | SEQUENCE? | DATABASE | PACKAGE | SCHEMA | TABLESPACE) identifier
      | ON PROCEDURE identifier (LEFT_PAREN parameter ( COMMA parameter )* RIGHT_PAREN)?
      | ON FUNCTION function_name (LEFT_PAREN type_elements_parameter (COMMA type_elements_parameter)* RIGHT_PAREN))
      FROM (identifier | PUBLIC) (COMMA (identifier | PUBLIC))* (RESTRICT | CASCADE)?
    ;

revoke_role_privilege
    : REVOKE (ADMIN OPTION FOR)? identifier (COMMA identifier)* FROM
      (identifier | PUBLIC) (COMMA (identifier | PUBLIC))* (RESTRICT | CASCADE)?
    ;

create_directory
    : CREATE (OR REPLACE)? DIRECTORY directory_name AS directory_path
      SEMICOLON
    ;

directory_name
    : regular_id
    ;

directory_path
    : CHAR_STRING
    ;

// DBCC operations
dbcc_checkallocate
    : DBCC CHECKALLOCATE (VERBOSE)?
    ;

dbcc_checkcatalog
    : DBCC CHECKCATALOG (VERBOSE)?
    ;

dbcc_checktable
    : DBCC CHECKTABLE tableview_name (VERBOSE)? (WITH NOINDEX? (COMMA NOALLOCATE)?)?
    ;

dbcc_checkindex
    : DBCC CHECKINDEX tableview_name (VERBOSE)
    ;

dbcc_checktablespace
    : DBCC CHECKTABLESPACE tableview_name (VERBOSE)? 
      (WITH NOINDEX? (COMMA NOCONSTRAINT)? (COMMA NOALLOCATE)?)?
    ;

dbcc_checkdb
    : DBCC CHECKDB (VERBOSE)? (WITH NOINDEX? (COMMA NOALLOCATE)?)?
    ;

create_view
    : CREATE (OR REPLACE)? VIEW tableview_name (paren_column_list)? 
      AS select_statement (WITH CASCADED? CHECK OPTION)? SEMICOLON
    ;

create_rule
    : CREATE RULE rulename AS ON event TO tableview_name where_clause? DO
      INSTEAD? (data_manipulation_language_statements | NOTHING)? SEMICOLON
    ;

rulename
    : regular_id
    ;

event
    : (SELECT | INSERT | UPDATE | DELETE) tableview_name
    ;

create_force_view
    : CREATE  (OR REPLACE)? FORCE? VIEW tableview_name paren_column_list? AS
      select_statement (WITH CASCADED? CHECK POINT)? SEMICOLON
    ;

alter_tablespace
    : ALTER TABLESPACE tablespace
       ( RENAME TO new_tablespace_name
       | OWNER TO regular_id
       | ONLINE
       | OFFLINE NORMAL?
       | READ ONLY
       | READ WRITE
       | ADD DATAFILE LEFT_PAREN NAME EQUALS_OP? regular_id FILENAME EQUALS_OP? 
         expression SIZE EQUALS_OP? UNSIGNED_INTEGER MAXSIZE EQUALS_OP? 
         UNSIGNED_INTEGER FILEGROWTH EQUALS_OP? expression RIGHT_PAREN
       | REMOVE DATAFILE regular_id
       | MODIFY DATAFILE regular_id 
         (SET MAXSIZE EQUALS_OP? UNSIGNED_INTEGER | SET FILEGROWTH EQUALS_OP? UNSIGNED_INTEGER
         | RESIZE EQUALS_OP? UNSIGNED_INTEGER | OFFLINE | ONLINE | TO expression)
       )
     SEMICOLON
    ;

tablespace_state_clauses
    : ONLINE
    | OFFLINE (NORMAL | TEMPORARY | IMMEDIATE)?
    | READ (ONLY | WRITE)
    | PERMANENT
    | TEMPORARY
    ;

new_tablespace_name
    : tablespace
    ;

create_tablespace
    : CREATE TABLESPACE tablespace (OWNER regular_id)? (COMMA? LEFT_PAREN NAME EQUALS_OP?
      regular_id FILENAME EQUALS_OP? expression SIZE EQUALS_OP? UNSIGNED_INTEGER
      MAXSIZE EQUALS_OP? UNSIGNED_INTEGER FILEGROWTH EQUALS_OP? expression 
      RIGHT_PAREN)+ (ENCRYPTED)? SEMICOLON
    ;

tablespace_retention_clause
    : RETENTION (GUARANTEE | NOGUARANTEE)
    ;

build_clause
    : BUILD (IMMEDIATE | DEFERRED)
    ;

alter_materialized_view
    : ALTER MATERIALIZED VIEW (IF EXISTS)? tableview_name
       ( ALTER COLUMN? column_name
         (SET STATISTICS UNSIGNED_INTEGER
         | (SET | RESET) expressions
         | SET STORAGE (PLAIN | EXTERNAL | EXTENDED | MAIN))
       | CLUSTER ON id_expression
       | SET WITHOUT CLUSTER
       | (SET | RESET) expressions
       | OWNER TO id_expression
       | RENAME COLUMN? id_expression TO id_expression
       | RENAME TO id_expression
       | SET SCHEMA id_expression
       | SET TABLESPACE id_expression
       )
     SEMICOLON
    ;

// Should bound this to just interval expr
interval_expr
    : expression
    ;

create_materialized_view
    : CREATE MATERIALIZED VIEW tableview_name (expressions)? 
      (WITH LEFT_PAREN expressions RIGHT_PAREN)? (TABLESPACE regular_id)? 
      AS select_statement (WITH NO? DATA)? SEMICOLON
    ;

create_schema
    : CREATE SCHEMA (regular_id (AUTHORIZATION regular_id)? | AUTHORIZATION regular_id)
      ((create_table | create_view | grant_statement)+)?
    ;

// create table statement
create_table
    : create_table_without_select
    | create_table_as_select
    | create_table_select_into
    ;
    
create_table_without_select
    : CREATE ((GLOBAL | LOCAL)? (TEMPORARY | TEMP))? TABLE tableview_name
      column_with_datatype_list /* TablePartitioningClauses?? */ 
      (WITHOUT OIDS)? (ON COMMIT (PRESERVE ROWS | DELETE ROWS DROP))?
      (TABLESPACE tablespace)? ENCRYPTED? SEMICOLON?
    ;

create_table_as_select
    : CREATE ((GLOBAL | LOCAL)? (TEMPORARY | TEMP))? TABLE tableview_name
      paren_column_list? AS subquery (WITH NO? DATA)?
    ;

create_table_select_into
    : SELECT selected_list INTO ((GLOBAL | LOCAL)? (TEMPORARY | TEMP))? tableview_name
      FROM (tableview_name | subquery AS table_alias)
    ;

column_with_datatype_list
    : LEFT_PAREN column_with_datatype (COMMA column_with_datatype)* RIGHT_PAREN
    ;

column_with_datatype
    : column_name datatype ENCRYPTED? (IDENTITY (LEFT_PAREN expression COMMA expression RIGHT_PAREN)?)?
      (DEFAULT (NULL_ | USER | expression))? column_constraint?
    | table_constraint?
    ;

column_constraint
    : (CONSTRAINT regular_id)? 
      (NOT NULL_ 
      | UNIQUE (INDEX expression /* OptColumnCompressInfo */)?
        (USING INDEX TABLESPACE tablespace)?
      | PRIMARY KEY (INDEX expression /* OptColumnCompressInfo */)?
        (USING INDEX TABLESPACE tablespace)?
      | CHECK LEFT_PAREN expression? RIGHT_PAREN
      | REFERENCES tableview_name column_name? (ON DELETE action)? (ON UPDATE action)?
        (NOVALIDATE | VALIDATE)?) (DEFERRABLE | NOT DEFERRABLE)?
      (INITIALLY DEFERRED | INITIALLY IMMEDIATE)?
    ;

table_constraint
    : (CONSTRAINT regular_id)?
      ((UNIQUE | PRIMARY KEY) 
      LEFT_PAREN (COMMA? column_name (INDEX expression /* OptColumnCompressInfo */)?)+  RIGHT_PAREN
      (USING INDEX TABLESPACE tablespace)?
       | CHECK expression
       | FOREIGN KEY paren_column_list REFERENCES tableview_name paren_column_list?
      (ON DELETE action)? (ON UPDATE action)? (NOVALIDATE | VALIDATE)?)
      (DEFERRABLE | NOT DEFERRABLE)? (INITIALLY DEFERRED | INITIALLY IMMEDIATE)?
    ;

action
    : NO ACTION
    | RESTRICT
    | CASCADE
    | SET NULL_
    | SET DEFAULT
    ;

subpartition_name
    : partition_name
    ;

drop_table
    : DROP TABLE tableview_name PURGE? SEMICOLON
    ;

allow_or_disallow
    : ALLOW
    | DISALLOW
    ;

// Synonym DDL Clauses

create_synonym
    // Synonym's schema cannot be specified for public synonyms
    : CREATE (OR REPLACE)? PUBLIC? SYNONYM synonym_name FOR (schema_name PERIOD)? schema_object_name
    ;

comment_on_table
    : COMMENT ON TABLE tableview_name IS quoted_string
    ;

database_name
    : regular_id
    ;

alter_database
    : ALTER DATABASE database_name
       ( SET regular_id (TO | EQUALS_OP) (DEFAULT | expression)
       | RESET regular_id
       | RENAME TO database_name
       | OWNER TO regular_id
       | (WITH? (COMMA? option=expression)+)?
       )
    ;

alter_table
    : ALTER TABLE tableview_name
      ( alter_table_add_properties
      | alter_table_change_properties
      | alter_table_drop_properties
      | alter_table_rename_properties
      | alter_table_truncate_properties
      | alter_table_others
      )
      SEMICOLON
    ;

alter_table_add_properties
    : ADD COLUMN? column_name datatype (expression)? 
      (IDENTITY (LEFT_PAREN expression COMMA expression RIGHT_PAREN)?)?
      (DEFAULT expression)? (column_constraint)?
    | ADD table_constraint
    | ADD PARTITION partition_name expressions (TABLESPACE tablespace)?
    ;

alter_table_change_properties
    : ALTER COLUMN? column_name 
      ( TYPE datatype 
      | SET DEFAULT expression
      | DROP DEFAULT
      | (SET | DROP) NOT NULL_
      | SET STORAGE (PLAIN | EXTERNAL | EXTENDED | MAIN))
    | MODIFY CONSTRAINT id_expression (ENABLE | DISABLE)
    ;

alter_table_drop_properties
    : DROP COLUMN? column_name (RESTRICT | CASCADE)?
    | DROP CONSTRAINT id_expression (RESTRICT | CASCADE)?
    | DROP PARTITION partition_name
    ;

alter_table_rename_properties
    : RENAME COLUMN? column_name (RESTRICT | CASCADE)?
    | RENAME TO tableview_name
    | RENAME PARTITION partition_name TO partition_name
    | RENAME SUBPARTITION subpartition_name TO subpartition_name
    ;

alter_table_truncate_properties
    : TRUNCATE PARTITION id_expression
    | TRUNCATE SUBPARTITION id_expression (UPDATE GLOBAL INDEXES)?
    ;

alter_table_others
    : SET TABLESPACE tablespace
    | SPLIT PARTITION partition_name 
      (AT | VALUES) LEFT_PAREN expressions RIGHT_PAREN
      INTO LEFT_PAREN PARTITION partition_name (TABLESPACE tablespace)? COMMA
      PARTITION partition_name (TABLESPACE tablespace)? RIGHT_PAREN (UPDATE GLOBAL INDEXES)?
    | MERGE PARTITIONS partition_name COMMA partition_name INTO PARTITION partition_name
      (TABLESPACE tablespace)? (UPDATE GLOBAL INDEXES)?
    | (ENABLE | DISABLE) TRIGGER (trigger_name | ALL | USER)
    ;

tablespace
    : regular_id
    ;

partition_name
    : regular_id
    ;

column_or_attribute
    : regular_id
    ;

// Common DDL Clauses

parameter
    : (IN | OUT | INOUT) parameter_name datatype? default_value_part?
    ;

default_value_part
    : (ASSIGN_OP | DEFAULT) expression
    ;

parameter_list
    : parameter (COMMA parameter)*
    ;

paren_parameter_list
    : LEFT_PAREN parameter_list? RIGHT_PAREN
    ;

// incorporates constant_declaration
variable_declaration
    : identifier CONSTANT? datatype (NOT NULL_)? default_value_part? SEMICOLON
    ;

variable_declarations
    : variable_declaration (SEMICOLON variable_declaration)* SEMICOLON
    ;

// cursor_declaration incorportates curscursor_body and cursor_spec

cursor_declaration
    : CURSOR cursor_name (LEFT_PAREN (COMMA? parameter_spec)+ RIGHT_PAREN )? FOR select_statement SEMICOLON
    ;

cursor_declarations
    : cursor_declaration (SEMICOLON cursor_declaration)* SEMICOLON
    ;

parameter_spec
    : parameter_name datatype
    ;

// Record Declaration Specific Clauses

// incorporates ref_cursor_type_definition

record_type_def
    : RECORD LEFT_PAREN (COMMA? field_spec)+ RIGHT_PAREN
    ;

field_spec
    : column_name datatype? (NOT NULL_)? default_value_part?
    ;

ref_cursor_type_def
    : REF CURSOR (RETURN datatype)?
    ;

type_declaration
    : TYPE identifier IS (table_type_def | varray_type_def | record_type_def | ref_cursor_type_def) SEMICOLON
    ;

table_type_def
    : TABLE OF datatype table_indexed_by_part? (NOT NULL_)?
    ;

table_indexed_by_part
    : (idx1=INDEXED | idx2=INDEX) BY datatype
    ;

varray_type_def
    : (VARRAY | VARYING ARRAY) LEFT_PAREN expression RIGHT_PAREN OF datatype (NOT NULL_)?
    ;

// Statements

seq_of_statements
    : (statement (SEMICOLON | EOF) | label_declaration)+
    ;

label_declaration
    : ltp1= LESS_THAN_OP LESS_THAN_OP label_name GREATER_THAN_OP GREATER_THAN_OP
    ;

statement
    : assignment_statement
    | continue_statement
    | exit_statement
    | goto_statement
    | if_statement
    | loop_statement
    | forall_statement
    | null_statement
    | raise_statement
    | return_statement
    | case_statement
    | sql_statement
    | function_call
    | pipe_row_statement
    | procedure_call
    ;

assignment_statement
    : (general_element | bind_variable) ASSIGN_OP expression
    ;

continue_statement
    : CONTINUE label_name? (WHEN condition)?
    ;

exit_statement
    : EXIT label_name? (WHEN condition)?
    ;

goto_statement
    : GOTO label_name
    ;

if_statement
    : IF condition THEN seq_of_statements elsif_part* else_part? END IF
    ;

elsif_part
    : ELSIF condition THEN seq_of_statements
    ;

else_part
    : ELSE seq_of_statements
    ;

loop_statement
    : label_declaration? (WHILE condition | FOR cursor_loop_param)? LOOP seq_of_statements END LOOP label_name?
    ;

// Loop Specific Clause

cursor_loop_param
    : index_name IN REVERSE? lower_bound range_separator=DOUBLE_PERIOD upper_bound
    | record_name IN (cursor_name (LEFT_PAREN expressions? RIGHT_PAREN)? | LEFT_PAREN select_statement RIGHT_PAREN)
    ;

forall_statement
    : FORALL index_name IN bounds_clause sql_statement (SAVE EXCEPTIONS)?
    ;

bounds_clause
    : lower_bound DOUBLE_PERIOD upper_bound
    | INDICES OF collection_name between_bound?
    | VALUES OF index_name
    ;

between_bound
    : BETWEEN lower_bound AND upper_bound
    ;

lower_bound
    : concatenation
    ;

upper_bound
    : concatenation
    ;

null_statement
    : NULL_
    ;

raise_statement
    : RAISE exception_name?
    ;

return_statement
    : RETURN expression?
    ;

function_call
    : CALL? routine_name function_argument?
    ;

procedure_call
    : CALL? routine_name function_argument?
    ;

pipe_row_statement
    : PIPE ROW LEFT_PAREN expression RIGHT_PAREN;

// SQL Statements

sql_statement
    : data_manipulation_language_statements
    | cursor_manipulation_statements
    | transaction_control_statements
    ;

// Cursor Manipulation Statements

cursor_manipulation_statements
    : close_statement
    | open_statement
    | fetch_statement
    | move_statement
    ;

close_statement
    : CLOSE cursor_name
    ;

open_statement
    : OPEN cursor_name (LEFT_PAREN expressions? RIGHT_PAREN)? SEMICOLON
    | OPEN cursor_name FOR EXECUTE? (subquery | expression) SEMICOLON
    ;

fetch_statement
    : FETCH cursor_name (it1=INTO (COMMA? variable_name)+ | BULK COLLECT INTO (COMMA? variable_name)+)
    | FETCH (direction (FROM | IN)?)? cursor_name
    ;

direction
    : NEXT
    | PRIOR
    | FIRST
    | LAST
    | (ABSOLUTE | RELATIVE) count
    | count
    | ALL
    | FORWARD (count | ALL)?
    | BACKWARD (count | ALL)?
    ;

count
    : UNSIGNED_INTEGER
    ;

move_statement
    : MOVE (direction (FROM | IN)?)? cursor_name
    ;

// Transaction Control SQL Statements

transaction_control_statements
    : transaction_command
    | savepoint_command
    ;

transaction_command
    : SET AUTOCOMMIT (EQUALS_OP | TO) ON 
    | (BEGIN | COMMIT | ROLLBACK) (WORK | TRANSACTION)?
    | SET TRANSACTION ISOLATION LEVEL (SERIALIZABLE | REPEATABLE READ
                                      | READ COMMITTED | READ UNCOMMITTED)
    | SET CONSTRAINTS (ALL | expressions) (DEFERRED | IMMEDIATE)
    | LOCK TABLE? tablename_list (IN lock_mode MODE)? NOWAIT?
    ;

lock_mode
    : ACCESS? (SHARE | EXCLUSIVE)
    | ROW (SHARE | EXCLUSIVE)
    | SHARE (UPDATE | ROW) EXCLUSIVE
    ;

savepoint_command
    : SAVEPOINT savepoint_name
    | RELEASE SAVEPOINT? savepoint_name
    | ROLLBACK (WORK | TRANSACTION)? TO SAVEPOINT? savepoint_name
    ;

explain_statement
    : EXPLAIN ANALYZE? VERBOSE? data_manipulation_language_statements
    | EXPLAIN LEFT_PAREN explain_elements RIGHT_PAREN data_manipulation_language_statements
    ;

explain_elements
    : explain_element (COMMA explain_element)*
    ;

explain_element
    : (ANALYZE | VERBOSE | COSTS) expression
    ;

// Common DDL Clauses

error_logging_into_part
    : INTO tableview_name
    ;

error_logging_reject_part
    : REJECT LIMIT (UNLIMITED | expression)
    ;

// SqlPlus

sql_plus_command
    : get_arguments_command
    | set_arguments_command
    ;

get_arguments_command
    : SHOW (identifier | ALL)
    ;

set_arguments_command
    : SET (SESSION | LOCAL)? regular_id (TO | EQUALS_OP) (expression | DEFAULT)
    | ALTER SYSTEM SET identifier (EQUALS_OP | TO) (expression | DEFAULT)
    | ALTER DATABASE database_name SET identifier (EQUALS_OP | TO) (expression | DEFAULT)
    ;

cost_class_name
    : identifier
    ;

savepoint_name
    : identifier
    ;

rollback_segment_name
    : identifier
    ;

table_var_name
    : identifier
    ;

schema_name
    : identifier
    ;

routine_name
    : identifier (PERIOD id_expression)* (AT_SIGN link_name)?
    ;

implementation_type_name
    : identifier (PERIOD id_expression)?
    ;

parameter_name
    : identifier
    ;

reference_model_name
    : identifier
    ;

main_model_name
    : identifier
    ;

container_tableview_name
    : identifier (PERIOD id_expression)?
    ;

grantee_name
    : id_expression identified_by?
    ;

role_name
    : id_expression
    | CONNECT
    ;

type_name
    : id_expression (PERIOD id_expression)*
    ;

sequence_name
    : id_expression (PERIOD id_expression)*
    ;

exception_name
    : identifier (PERIOD id_expression)*
    ;

function_name
    : identifier (PERIOD id_expression)?
    ;

procedure_name
    : identifier (PERIOD id_expression)?
    ;

trigger_name
    : identifier (PERIOD id_expression)?
    ;

variable_name
    : (INTRODUCER char_set_name)? id_expression (PERIOD id_expression)?
    | bind_variable
    ;

index_name
    : identifier (PERIOD id_expression)?
    ;

cursor_name
    : general_element
    | bind_variable
    ;

record_name
    : identifier
    | bind_variable
    ;

collection_name
    : identifier (PERIOD id_expression)?
    ;

char_set_name
    : id_expression (PERIOD id_expression)*
    ;

synonym_name
    : identifier
    ;

// Represents a valid DB object name in DDL commands which are valid for several DB (or schema) objects.
// For instance, create synonym ... for <DB object name>, or rename <old DB object name> to <new DB object name>.
// Both are valid for sequences, tables, views, etc.
schema_object_name
    : id_expression
    ;

dir_object_name
    : id_expression
    ;

user_object_name
    : id_expression
    ;

grant_object_name
    : tableview_name
    | USER (COMMA? user_object_name)+
    | DIRECTORY dir_object_name
    | EDITION schema_object_name
    | MINING MODEL schema_object_name
    | JAVA (SOURCE | RESOURCE) schema_object_name
    | SQL TRANSLATION PROFILE schema_object_name
    ;

tablename_list
    : container_tableview_name (COMMA container_tableview_name)*
    ;

// PL/SQL Specs

object_privilege
    : ALL
    | SELECT
    | INSERT
    | UPDATE
    | DELETE
    | REFERENCES
    | TRIGGER
    | USAGE
    | CREATE 
    | TEMPORARY
    | CONNECT
    | EXECUTE
    | WRITE
    | READ
    ;

column_privilege
    : SELECT
    | INSERT
    | UPDATE
    | REFERENCES
    ;

//Ordered by type rather than alphabetically
system_privilege
    : ALL PRIVILEGES
    | ADVISOR
    | ADMINISTER ANY? SQL TUNING SET
    | (ALTER | CREATE | DROP) ANY SQL PROFILE
    | ADMINISTER SQL MANAGEMENT OBJECT
    | CREATE ANY? CLUSTER
    | (ALTER | DROP) ANY CLUSTER
    | (CREATE | DROP) ANY CONTEXT
    | EXEMPT REDACTION POLICY
    | ALTER DATABASE
    | (ALTER | CREATE) PUBLIC? DATABASE LINK
    | DROP PUBLIC DATABASE LINK
    | DEBUG CONNECT SESSION
    | DEBUG ANY PROCEDURE
    | ANALYZE ANY DICTIONARY
    | CREATE ANY? DIMENSION
    | (ALTER | DROP) ANY DIMENSION
    | (CREATE | DROP) ANY DIRECTORY
    | (CREATE | DROP) ANY EDITION
    | FLASHBACK (ARCHIVE ADMINISTER | ANY TABLE)
    | (ALTER | CREATE | DROP) ANY INDEX
    | CREATE ANY? INDEXTYPE
    | (ALTER | DROP | EXECUTE) ANY INDEXTYPE
    | CREATE (ANY | EXTERNAL)? JOB
    | EXECUTE ANY (CLASS | PROGRAM)
    | MANAGE SCHEDULER
    | ADMINISTER KEY MANAGEMENT
    | CREATE ANY? LIBRARY
    | (ALTER | DROP | EXECUTE) ANY LIBRARY
    | LOGMINING
    | CREATE ANY? MATERIALIZED VIEW
    | (ALTER | DROP) ANY MATERIALIZED VIEW
    | GLOBAL? QUERY REWRITE
    | ON COMMIT REFRESH
    | CREATE ANY? MINING MODEL
    | (ALTER | DROP | SELECT | COMMENT) ANY MINING MODEL
    | CREATE ANY? CUBE
    | (ALTER | DROP | SELECT | UPDATE) ANY CUBE
    | CREATE ANY? MEASURE FOLDER
    | (DELETE | DROP | INSERT) ANY MEASURE FOLDER
    | CREATE ANY? CUBE DIMENSION
    | (ALTER | DELETE | DROP | INSERT | SELECT | UPDATE) ANY CUBE DIMENSION
    | CREATE ANY? CUBE BUILD PROCESS
    | (DROP | UPDATE) ANY CUBE BUILD PROCESS
    | CREATE ANY? OPERATOR
    | (ALTER | DROP | EXECUTE) ANY OPERATOR
    | (CREATE | ALTER | DROP) ANY OUTLINE
    | CREATE PLUGGABLE DATABASE
    | SET CONTAINER
    | CREATE ANY? PROCEDURE
    | (ALTER | DROP | EXECUTE) ANY PROCEDURE
    | (CREATE | ALTER | DROP ) PROFILE
    | CREATE ROLE
    | (ALTER | DROP | GRANT) ANY ROLE
    | (CREATE | ALTER | DROP) ROLLBACK SEGMENT
    | CREATE ANY? SEQUENCE
    | (ALTER | DROP | SELECT) ANY SEQUENCE
    | (ALTER | CREATE | RESTRICTED) SESSION
    | ALTER RESOURCE COST
    | CREATE ANY? SQL TRANSLATION PROFILE
    | (ALTER | DROP | USE) ANY SQL TRANSLATION PROFILE
    | TRANSLATE ANY SQL
    | CREATE ANY? SYNONYM
    | DROP ANY SYNONYM
    | (CREATE | DROP) PUBLIC SYNONYM
    | CREATE ANY? TABLE
    | (ALTER | BACKUP | COMMENT | DELETE | DROP | INSERT | LOCK | READ | SELECT | UPDATE) ANY TABLE
    | (CREATE | ALTER | DROP | MANAGE | UNLIMITED) TABLESPACE
    | CREATE ANY? TRIGGER
    | (ALTER | DROP) ANY TRIGGER
    | ADMINISTER DATABASE TRIGGER
    | CREATE ANY? TYPE
    | (ALTER | DROP | EXECUTE | UNDER) ANY TYPE
    | (CREATE | ALTER | DROP) USER
    | CREATE ANY? VIEW
    | (DROP | UNDER | MERGE) ANY VIEW
    | (ANALYZE | AUDIT) ANY
    | BECOME USER
    | CHANGE NOTIFICATION
    | EXEMPT ACCESS POLICY
    | FORCE ANY? TRANSACTION
    | GRANT ANY OBJECT? PRIVILEGE
    | INHERIT ANY PRIVILEGES
    | KEEP DATE TIME
    | KEEP SYSGUID
    | PURGE DBA_RECYCLEBIN
    | RESUMABLE
    | SELECT ANY (DICTIONARY | TRANSACTION)
    | SYSBACKUP
    | SYSDBA
    | SYSDG
    | SYSKM
    | SYSOPER
    ;

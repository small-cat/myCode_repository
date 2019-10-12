t /**
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

// DML Statements
// merge truncate update insert copy delete select
data_manipulation_language_statements
    : merge_statement
    | truncate_statement
    | select_statement
    | update_statement
    | delete_statement
    | insert_statement
    | copy_statement
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

select_statement
    : with_clause? subquery ( offset_clause | fetch_clause)*
    ;

// Select Specific Clauses

with_clause
    : WITH RECURSIVE? with_query (COMMA with_query)*
    ;

with_query
    : with_query_name paren_column_list? AS LEFT_PAREN subquery RIGHT_PAREN
    ;

subquery
    : subquery_basic_elements subquery_operation_part*
    ;

subquery_basic_elements
    : query_block
    | LEFT_PAREN subquery RIGHT_PAREN
    ;

subquery_operation_part
    : (UNION ALL? | INTERSECT | MINUS) subquery_basic_elements
    ;

// [DISTINCT | ALL] [TOP {...}] selected_list from_clause where_clause
// CONNECT BY -> hierarchical_query_clause
// group_by_clause having_clause window_clause 
// [UNION | INTERSECT | EXCEPT ...]
// order_by_clause limit_clause 
// FOR (UPDATE | SHARE) ...
query_block
    : SELECT top_clause? (DISTINCT | ALL)? 
      selected_list from_clause where_clause? hierarchical_query_clause? 
      group_by_clause? order_by_clause? limit_clause? for_update_clause?
    ;

top_clause
    : TOP (start_value COMMA)? line_count
    | TOP LEFT_PAREN expression (COMMA expression)? RIGHT_PAREN
    ;

start_value
    : UNSIGNED_INTEGER
    ;

line_count
    : UNSIGNED_INTEGER
    ;

selected_list
    : selected_list_element (COMMA selected_list_element)*
    ;

selected_list_element
    : (tableview_name PERIOD)? ASTERISK
    | (column_name | expression) (AS? column_alias)?
    ;

from_clause
    : FROM table_ref_list
    ;

table_ref_list
    : table_ref (COMMA table_ref)*
    ;

table_ref
    : table_ref_aux join_clause* (pivot_clause | unpivot_clause)?
    ;

// if PartitionName and SubPartitionName is name or not
table_ref_aux
    : table_ref_aux_internal (AS? table_alias)?
    //| tableview_name (PARTITION | SUBPARTITION) LEFT_PAREN column_name RIGHT_PAREN
    //| with_query_name (AS? column_name (paren_column_list)?)
    ;

table_ref_aux_internal
    : dml_table_expression_clause (pivot_clause | unpivot_clause)?                # table_ref_aux_internal_one
    | LEFT_PAREN table_ref subquery_operation_part* RIGHT_PAREN (pivot_clause | unpivot_clause)?  # table_ref_aux_internal_two
    | ONLY LEFT_PAREN dml_table_expression_clause RIGHT_PAREN                                     # table_ref_aux_internal_three
    ;

join_clause
    : query_partition_clause? NATURAL? (CROSS | INNER | outer_join_type)?
      JOIN table_ref_aux query_partition_clause? (join_on_part | join_using_part)*
    ;

join_on_part
    : ON condition
    ;

join_using_part
    : USING paren_column_list
    ;

outer_join_type
    : (FULL | LEFT | RIGHT) OUTER?
    ;

query_partition_clause
    : PARTITION BY ((LEFT_PAREN (subquery | expressions)? RIGHT_PAREN) | expressions)
    ;

pivot_clause
    : PIVOT XML? LEFT_PAREN (COMMA? pivot_element)+ pivot_for_clause pivot_in_clause RIGHT_PAREN
    ;

pivot_element
    : aggregate_function_name LEFT_PAREN expression RIGHT_PAREN (AS? column_alias)?
    ;

pivot_for_clause
    : FOR (column_name | paren_column_list)
    ;

pivot_in_clause
    : IN LEFT_PAREN (subquery | (COMMA? ANY)+ | (COMMA? pivot_in_clause_element)+) RIGHT_PAREN
    ;

pivot_in_clause_element
    : pivot_in_clause_elements (AS? column_alias)?
    ;

pivot_in_clause_elements
    : expression
    | LEFT_PAREN expressions? RIGHT_PAREN
    ;

unpivot_clause
    : UNPIVOT ((INCLUDE | EXCLUDE) NULLS)?
    LEFT_PAREN (column_name | paren_column_list) pivot_for_clause unpivot_in_clause RIGHT_PAREN
    ;

unpivot_in_clause
    : IN LEFT_PAREN (COMMA? unpivot_in_elements)+ RIGHT_PAREN
    ;

unpivot_in_elements
    : (column_name | paren_column_list)
      (AS (constant | LEFT_PAREN (COMMA? constant)+ RIGHT_PAREN))?
    ;

hierarchical_query_clause
    : CONNECT BY NOCYCLE? condition start_part?
    | start_part CONNECT BY NOCYCLE? condition
    ;

start_part
    : START WITH condition
    ;

group_by_clause
    : GROUP BY (COMMA? group_by_elements)+ having_clause?
    | having_clause (GROUP BY (COMMA? group_by_elements)+)?
    ;

group_by_elements
    : grouping_sets_expression
    | rollup_cube_expression
    | empty_expression
    | expression
    ;

rollup_cube_expression
    : (ROLLUP | CUBE) LEFT_PAREN expressions RIGHT_PAREN
    ;

empty_expression
    : LEFT_PAREN RIGHT_PAREN
    ;

grouping_sets_expression
    : GROUPING SETS LEFT_PAREN (COMMA? group_by_elements)+ RIGHT_PAREN
    ;

having_clause
    : HAVING expressions
    ;

cell_assignment
    : model_expression
    ;

until_part
    : UNTIL LEFT_PAREN condition RIGHT_PAREN
    ;

order_by_clause
    : ORDER SIBLINGS? BY (COMMA? order_by_elements)+
    ;

order_by_elements
    : expression (ASC | DESC)? (NULLS (FIRST | LAST))?
    ;

limit_clause
    : (LIMIT (ALL | expression))? (OFFSET expression)?
    ;

offset_clause
    : OFFSET expression (ROW | ROWS)
    ;

fetch_clause
    : FETCH (FIRST | NEXT) (expression PERCENT_KEYWORD?)? (ROW | ROWS) (ONLY | WITH TIES)
    ;

for_update_clause
    : FOR (UPDATE | SHARE) for_update_of_part? for_update_options?
    ;

for_update_of_part
    : OF column_list
    ;

for_update_options
    : SKIP_ LOCKED
    | NOWAIT
    | WAIT expression
    ;

update_statement
    : with_clause? UPDATE general_table_ref update_set_clause where_clause? static_returning_clause?
    ;

// Update Specific Clauses

update_set_clause
    : SET
      ((COMMA? column_based_update_set_clause)+ | VALUE LEFT_PAREN identifier RIGHT_PAREN EQUALS_OP expression)
    ;

column_based_update_set_clause
    : column_name EQUALS_OP expression
    | paren_column_list EQUALS_OP subquery
    ;

delete_statement
    : with_clause? DELETE FROM? general_table_ref where_clause? static_returning_clause? //((COMMA? placeholder)+)?
    ;

insert_statement
    : with_clause? INSERT (single_table_insert | multi_table_insert)
    ;

// Insert Specific Clauses

single_table_insert
    : insert_into_clause (values_clause static_returning_clause? | select_statement)
    ;

multi_table_insert
    : (ALL multi_table_element+ | conditional_insert_clause) select_statement
    ;

multi_table_element
    : insert_into_clause values_clause?
    ;

conditional_insert_clause
    : (ALL | FIRST)? conditional_insert_when_part+ conditional_insert_else_part?
    ;

conditional_insert_when_part
    : WHEN condition THEN multi_table_element+
    ;

conditional_insert_else_part
    : ELSE multi_table_element+
    ;

insert_into_clause
    : INTO general_table_ref paren_column_list?
    ;

values_clause
    : VALUES LEFT_PAREN expressions? RIGHT_PAREN
    ;

copy_statement
    : COPY (tableview_name paren_column_list? | LEFT_PAREN select_statement RIGHT_PAREN) 
      (TO | FROM) (expression | STDIN_ | STDOUT_) 
      (WITH? BINARY? OIDS? ((DELIMITER | NULL_) AS? expression)? 
      (CSV HEADER? ((QUOTED |ESCAPE) AS? expression)? (FORCE (NOT| QUOTED) NULL_ (COMMA? column_name)+)?))?
      (SKIP_ ERRORS)? (LOGFILE expression)? (MAXLINENUM UNSIGNED_INTEGER)?
    ;

merge_statement
    : MERGE INTO tableview_name table_alias? USING selected_tableview ON LEFT_PAREN condition RIGHT_PAREN
      (merge_update_clause merge_insert_clause? | merge_insert_clause merge_update_clause?)?
    ;

// Merge Specific Clauses

merge_update_clause
    : WHEN MATCHED THEN UPDATE SET merge_element (COMMA merge_element)* where_clause? merge_update_delete_part?
    ;

merge_element
    : column_name EQUALS_OP expression
    ;

merge_update_delete_part
    : DELETE where_clause
    ;

merge_insert_clause
    : WHEN NOT MATCHED THEN INSERT paren_column_list?
      VALUES LEFT_PAREN expressions? RIGHT_PAREN where_clause?
    ;

selected_tableview
    : (tableview_name | LEFT_PAREN select_statement RIGHT_PAREN) table_alias?
    ;

lock_table_statement
    : LOCK TABLE lock_table_element (COMMA lock_table_element)* IN lock_mode MODE wait_nowait_part?
    ;

wait_nowait_part
    : WAIT expression
    | NOWAIT
    ;

truncate_statement
    : TRUNCATE TABLE? (COMMA? tableview_name)+ (CASCADE | RESTRICT)?
    ;

// Lock Specific Clauses

lock_table_element
    : tableview_name partition_extension_clause?
    ;

// Common DDL Clauses

general_table_ref
    : (dml_table_expression_clause | ONLY LEFT_PAREN dml_table_expression_clause RIGHT_PAREN) table_alias?
    ;

static_returning_clause
    : RETURNING expressions
    ;

error_logging_into_part
    : INTO tableview_name
    ;

error_logging_reject_part
    : REJECT LIMIT (UNLIMITED | expression)
    ;

dml_table_expression_clause
    : table_collection_expression
    | LEFT_PAREN select_statement subquery_restriction_clause? RIGHT_PAREN
    | tableview_name sample_clause?
    ;

table_collection_expression
    : (TABLE | THE) (LEFT_PAREN subquery RIGHT_PAREN | LEFT_PAREN expression RIGHT_PAREN (LEFT_PAREN PLUS_SIGN RIGHT_PAREN)?)
    ;

subquery_restriction_clause
    : WITH (READ ONLY | CHECK OPTION (CONSTRAINT constraint_name)?)
    ;

sample_clause
    : SAMPLE BLOCK? LEFT_PAREN expression (COMMA expression)? RIGHT_PAREN seed_part?
    ;

seed_part
    : SEED LEFT_PAREN expression RIGHT_PAREN
    ;

// Expression & Condition

condition
    : LEFT_PAREN expression RIGHT_PAREN
    | expression
    ;

expressions
    : expression (COMMA expression)*
    ;

expression
    : cursor_expression
    | logical_expression
    ;

cursor_expression
    : CURSOR LEFT_PAREN subquery RIGHT_PAREN
    ;

logical_expression
    : multiset_expression (IS NOT?
        (NULL_ | NAN | PRESENT | INFINITE | A_LETTER SET | EMPTY | OF TYPE?
        LEFT_PAREN ONLY? datatype (COMMA datatype)* RIGHT_PAREN))*
    | NOT logical_expression
    | logical_expression AND logical_expression
    | logical_expression OR logical_expression
    ;

multiset_expression
    : relational_expression (multiset_type=(MEMBER | SUBMULTISET) OF? concatenation)?
    ;

relational_expression
    : relational_expression relational_operator relational_expression
    | compound_expression
    ;

compound_expression
    : concatenation
      (NOT? ( IN in_elements
            | BETWEEN between_elements
            | like_type=(LIKE | LIKEC | LIKE2 | LIKE4) concatenation (ESCAPE concatenation)?))?
    ;

relational_operator
    : EQUALS_OP
    | (NOT_EQUAL_OP | LESS_THAN_OP GREATER_THAN_OP | EXCLAMATION_OPERATOR_PART EQUALS_OP | CARRET_OPERATOR_PART EQUALS_OP)
    | (LESS_THAN_OP | GREATER_THAN_OP) EQUALS_OP? 
    ;

in_elements
    : LEFT_PAREN subquery RIGHT_PAREN
    | LEFT_PAREN concatenation (COMMA concatenation)* RIGHT_PAREN
    | constant
    | bind_variable
    | general_element
    ;

between_elements
    : concatenation AND concatenation
    ;

concatenation
    : model_expression
        (AT (LOCAL | TIME ZONE concatenation) | interval_expression)?
    | concatenation op=(ASTERISK | SOLIDUS) concatenation
    | concatenation op=(PLUS_SIGN | MINUS_SIGN) concatenation
    | concatenation BAR BAR concatenation
    ;

interval_expression
    : DAY (LEFT_PAREN concatenation RIGHT_PAREN)? TO SECOND (LEFT_PAREN concatenation RIGHT_PAREN)?
    | YEAR (LEFT_PAREN concatenation RIGHT_PAREN)? TO MONTH
    ;

model_expression
    : unary_expression (LEFT_BRACKET model_expression_element RIGHT_BRACKET)?
    ;

model_expression_element
    : (ANY | expression) (COMMA (ANY | expression))*
    | single_column_for_loop (COMMA single_column_for_loop)*
    | multi_column_for_loop
    ;

single_column_for_loop
    : FOR column_name
       ( IN LEFT_PAREN expressions? RIGHT_PAREN
       | (LIKE expression)? FROM fromExpr=expression TO toExpr=expression
         action_type=(INCREMENT | DECREMENT) action_expr=expression)
    ;

multi_column_for_loop
    : FOR paren_column_list
      IN  LEFT_PAREN (subquery | LEFT_PAREN expressions? RIGHT_PAREN) RIGHT_PAREN
    ;

unary_expression
    : (MINUS_SIGN | PLUS_SIGN) unary_expression
    | PRIOR unary_expression
    | CONNECT_BY_ROOT unary_expression
    | /*TODO {input.LT(1).getText().equalsIgnoreCase("new") && !input.LT(2).getText().equals(".")}?*/ NEW unary_expression
    |  DISTINCT unary_expression
    |  ALL unary_expression
    |  /*TODO{(input.LA(1) == CASE || input.LA(2) == CASE)}?*/ case_statement/*[false]*/
    |  quantified_expression
    |  standard_function
    |  atom
    ;

case_statement /*TODO [boolean isStatementParameter]
TODO scope    {
    boolean isStatement;
}
@init    {$case_statement::isStatement = $isStatementParameter;}*/
    : searched_case_statement
    | simple_case_statement
    ;

// CASE

simple_case_statement
    : label_name? ck1=CASE expression simple_case_when_part+  case_else_part? END CASE? label_name?
    ;

simple_case_when_part
    : WHEN expression THEN (/*TODO{$case_statement::isStatement}?*/ seq_of_statements | expression)
    ;

searched_case_statement
    : label_name? ck1=CASE searched_case_when_part+ case_else_part? END CASE? label_name?
    ;

searched_case_when_part
    : WHEN expression THEN (/*TODO{$case_statement::isStatement}?*/ seq_of_statements | expression)
    ;

case_else_part
    : ELSE (/*{$case_statement::isStatement}?*/ seq_of_statements | expression)
    ;

atom
    : table_element outer_join_sign
    | bind_variable
    | constant
    | general_element
    | LEFT_PAREN subquery RIGHT_PAREN subquery_operation_part*
    | LEFT_PAREN expressions RIGHT_PAREN
    ;

quantified_expression
    : (SOME | EXISTS | ALL | ANY) (LEFT_PAREN subquery RIGHT_PAREN | LEFT_PAREN expression RIGHT_PAREN)
    ;

string_function
    : SUBSTR LEFT_PAREN expression COMMA expression (COMMA expression)? RIGHT_PAREN
    | TO_CHAR LEFT_PAREN (table_element | standard_function | expression)
                  (COMMA quoted_string)? (COMMA quoted_string)? RIGHT_PAREN
    | DECODE LEFT_PAREN expressions  RIGHT_PAREN
    | CHR LEFT_PAREN concatenation USING NCHAR_CS RIGHT_PAREN
    | NVL LEFT_PAREN expression COMMA expression RIGHT_PAREN
    | TRIM LEFT_PAREN ((LEADING | TRAILING | BOTH)? quoted_string? FROM)? concatenation RIGHT_PAREN
    | TO_DATE LEFT_PAREN expression (COMMA quoted_string)? RIGHT_PAREN
    ;

standard_function
    : string_function
    | numeric_function_wrapper
    | other_function
    ;

numeric_function_wrapper
    : numeric_function (single_column_for_loop | multi_column_for_loop)?
    ;

numeric_function
   : SUM LEFT_PAREN (DISTINCT | ALL)? expression RIGHT_PAREN
   | COUNT LEFT_PAREN ( ASTERISK | ((DISTINCT | UNIQUE | ALL)? concatenation)? ) RIGHT_PAREN over_clause?
   | ROUND LEFT_PAREN expression (COMMA UNSIGNED_INTEGER)?  RIGHT_PAREN
   | AVG LEFT_PAREN (DISTINCT | ALL)? expression RIGHT_PAREN
   | MAX LEFT_PAREN (DISTINCT | ALL)? expression RIGHT_PAREN
   | LEAST LEFT_PAREN expressions RIGHT_PAREN
   | GREATEST LEFT_PAREN expressions RIGHT_PAREN
   ;

other_function
    : over_clause_keyword function_argument_analytic over_clause?
    | COUNT LEFT_PAREN ( ASTERISK | (DISTINCT | UNIQUE | ALL)? concatenation) RIGHT_PAREN over_clause?
    | (CAST | XMLCAST) LEFT_PAREN (MULTISET LEFT_PAREN subquery RIGHT_PAREN | concatenation) AS datatype RIGHT_PAREN
    | COALESCE LEFT_PAREN table_element (COMMA (numeric | quoted_string))? RIGHT_PAREN
    | COLLECT LEFT_PAREN (DISTINCT | UNIQUE)? concatenation collect_order_by_part? RIGHT_PAREN
    | within_or_over_clause_keyword function_argument within_or_over_part+
    | DECOMPOSE LEFT_PAREN concatenation (CANONICAL | COMPATIBILITY)? RIGHT_PAREN
    | EXTRACT LEFT_PAREN regular_id FROM concatenation RIGHT_PAREN
    | (FIRST_VALUE | LAST_VALUE) function_argument_analytic respect_or_ignore_nulls? over_clause
    | TRANSLATE LEFT_PAREN expression (USING (CHAR_CS | NCHAR_CS))? (COMMA expression)* RIGHT_PAREN
    | TREAT LEFT_PAREN expression AS REF? datatype RIGHT_PAREN
    | TRIM LEFT_PAREN ((LEADING | TRAILING | BOTH)? quoted_string? FROM)? concatenation RIGHT_PAREN
    | XMLAGG LEFT_PAREN expression order_by_clause? RIGHT_PAREN (PERIOD general_element_part)?
    | (XMLCOLATTVAL | XMLFOREST)
      LEFT_PAREN (COMMA? xml_multiuse_expression_element)+ RIGHT_PAREN (PERIOD general_element_part)?
    | XMLELEMENT
      LEFT_PAREN (ENTITYESCAPING | NOENTITYESCAPING)? (NAME | EVALNAME)? expression
       (/*TODO{input.LT(2).getText().equalsIgnoreCase("xmlattributes")}?*/ COMMA xml_attributes_clause)?
       (COMMA expression (AS? column_alias)?)* RIGHT_PAREN (PERIOD general_element_part)?
    | XMLEXISTS LEFT_PAREN expression xml_passing_clause? RIGHT_PAREN
    | XMLPARSE LEFT_PAREN (DOCUMENT | CONTENT) concatenation WELLFORMED? RIGHT_PAREN (PERIOD general_element_part)?
    | XMLPI
      LEFT_PAREN (NAME identifier | EVALNAME concatenation) (COMMA concatenation)? RIGHT_PAREN (PERIOD general_element_part)?
    | XMLQUERY
      LEFT_PAREN concatenation xml_passing_clause? RETURNING CONTENT (NULL_ ON EMPTY)? RIGHT_PAREN (PERIOD general_element_part)?
    | XMLROOT
      LEFT_PAREN concatenation (COMMA xmlroot_param_version_part)? (COMMA xmlroot_param_standalone_part)? RIGHT_PAREN (PERIOD general_element_part)?
    | XMLSERIALIZE
      LEFT_PAREN (DOCUMENT | CONTENT) concatenation (AS datatype)?
      xmlserialize_param_enconding_part? xmlserialize_param_version_part? xmlserialize_param_ident_part? ((HIDE | SHOW) DEFAULTS)? RIGHT_PAREN
      (PERIOD general_element_part)?
    | XMLTABLE
      LEFT_PAREN xml_namespaces_clause? concatenation xml_passing_clause? (COLUMNS xml_table_column (COMMA xml_table_column))? RIGHT_PAREN (PERIOD general_element_part)?
    ;

over_clause_keyword
    : AVG
    | CORR
    | LAG
    | LEAD
    | MAX
    | MEDIAN
    | MIN
    | NTILE
    | RATIO_TO_REPORT
    | ROW_NUMBER
    | SUM
    | VARIANCE
    | REGR_
    | STDDEV
    | VAR_
    | COVAR_
    ;

within_or_over_clause_keyword
    : CUME_DIST
    | DENSE_RANK
    | LISTAGG
    | PERCENT_RANK
    | PERCENTILE_CONT
    | PERCENTILE_DISC
    | RANK
    ;

standard_prediction_function_keyword
    : PREDICTION
    | PREDICTION_BOUNDS
    | PREDICTION_COST
    | PREDICTION_DETAILS
    | PREDICTION_PROBABILITY
    | PREDICTION_SET
    ;

over_clause
    : OVER LEFT_PAREN query_partition_clause? (order_by_clause windowing_clause?)? RIGHT_PAREN
    ;

windowing_clause
    : windowing_type
      (BETWEEN windowing_elements AND windowing_elements | windowing_elements)
    ;

windowing_type
    : ROWS
    | RANGE
    ;

windowing_elements
    : UNBOUNDED PRECEDING
    | CURRENT ROW
    | concatenation (PRECEDING | FOLLOWING)
    ;

collect_order_by_part
    : ORDER BY concatenation
    ;

within_or_over_part
    : WITHIN GROUP LEFT_PAREN order_by_clause RIGHT_PAREN
    | over_clause
    ;

cost_matrix_clause
    : COST (MODEL AUTO? | LEFT_PAREN (COMMA? cost_class_name)+ RIGHT_PAREN VALUES LEFT_PAREN expressions? RIGHT_PAREN)
    ;

xml_passing_clause
    : PASSING (BY VALUE)? expression (AS? column_alias)? (COMMA expression (AS? column_alias)?)
    ;

xml_attributes_clause
    : XMLATTRIBUTES
     LEFT_PAREN (ENTITYESCAPING | NOENTITYESCAPING)? (SCHEMACHECK | NOSCHEMACHECK)?
     (COMMA? xml_multiuse_expression_element)+ RIGHT_PAREN
    ;

xml_namespaces_clause
    : XMLNAMESPACES
      LEFT_PAREN (concatenation AS? column_alias)? (COMMA concatenation AS? column_alias)*
      xml_general_default_part? RIGHT_PAREN
    ;

xml_table_column
    : xml_column_name
      (FOR ORDINALITY | datatype (PATH concatenation)? xml_general_default_part?)
    ;

xml_general_default_part
    : DEFAULT concatenation
    ;

xml_multiuse_expression_element
    : expression (AS (id_expression | EVALNAME concatenation))?
    ;

xmlroot_param_version_part
    : VERSION (NO VALUE | expression)
    ;

xmlroot_param_standalone_part
    : STANDALONE (YES | NO VALUE?)
    ;

xmlserialize_param_enconding_part
    : ENCODING concatenation
    ;

xmlserialize_param_version_part
    : VERSION concatenation
    ;

xmlserialize_param_ident_part
    : NO INDENT
    | INDENT (SIZE EQUALS_OP concatenation)?
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

// Common

partition_extension_clause
    : (SUBPARTITION | PARTITION) FOR? LEFT_PAREN expressions? RIGHT_PAREN
    ;

// WTF: AS be regarded as column alias name
column_alias
    : identifier 
    | quoted_string
    ;

table_alias
    : identifier 
    | quoted_string
    ;

where_clause
    : WHERE expression
    ;

// Common Named Elements

xml_column_name
    : identifier
    | quoted_string
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

aggregate_function_name
    : identifier (PERIOD id_expression)*
    ;

with_query_name
    : identifier
    ;

grantee_name
    : id_expression identified_by?
    ;

role_name
    : id_expression
    | CONNECT
    ;

constraint_name
    : identifier (PERIOD id_expression)* (AT_SIGN link_name)?
    ;

label_name
    : id_expression
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

link_name
    : identifier
    ;

column_name
    : (identifier | quoted_string) (PERIOD (id_expression | quoted_string))*
    ;

tableview_name
    : table_name
      (AT_SIGN link_name | /*TODO{!(input.LA(2) == BY)}?*/ partition_extension_clause)?
    ;

table_name
    : (identifier | quoted_string) (PERIOD (id_expression | quoted_string))?
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

column_list
    : column_name (COMMA column_name)*
    ;

paren_column_list
    : LEFT_PAREN column_list RIGHT_PAREN
    ;

tablename_list
    : container_tableview_name (COMMA container_tableview_name)*
    ;

// PL/SQL Specs

// NOTE: In reality this applies to aggregate functions only
keep_clause
    : KEEP LEFT_PAREN DENSE_RANK (FIRST | LAST) order_by_clause RIGHT_PAREN over_clause?
    ;

function_argument
    : LEFT_PAREN (COMMA? argument)* RIGHT_PAREN keep_clause?
    ;

function_argument_analytic
    : LEFT_PAREN (COMMA? argument respect_or_ignore_nulls?)* RIGHT_PAREN keep_clause?
    ;

function_argument_modeling
    : LEFT_PAREN column_name (COMMA (numeric | NULL_) (COMMA (numeric | NULL_))?)?
      USING (tableview_name PERIOD ASTERISK | ASTERISK | (COMMA? expression (AS? column_alias)?)+)
      RIGHT_PAREN keep_clause?
    ;

respect_or_ignore_nulls
    : (RESPECT | IGNORE) NULLS
    ;

argument
    : (identifier EQUALS_OP GREATER_THAN_OP)? expression
    ;

datatype
    : native_datatype_element precision_part?
    | INTERVAL ((YEAR | DAY) TO (MONTH | SECOND) | YEAR | MONTH | DAY | HOUR
                | MINUTE | SECOND)
    ;

precision_part
    : LEFT_PAREN (numeric | ASTERISK) (COMMA numeric)? (CHAR | BYTE)? RIGHT_PAREN
    ;

native_datatype_element
    : TINYINT
    | SMALLINT
    | INTEGER
    | BIGINT
    | REAL
    | FLOAT
    | DOUBLE
    | DECIMAL
    | NUMERIC
    | CHAR
    | VARCHAR
    | VARCHAR2
    | BLOB
    | CLOB
    | BYTEA
    | TEXT 
    | BIT? VARYING
    | BOOLEAN
    | DATE
    | TIME (WITH TIME ZONE)?
    | TIMESTAMP (WITH TIME ZONE)?
    ;

bind_variable
    : (BINDVAR | COLON UNSIGNED_INTEGER)
      // Pro*C/C++ indicator variables
      (INDICATOR? (BINDVAR | COLON UNSIGNED_INTEGER))?
      (PERIOD general_element_part)*
    ;

general_element
    : general_element_part (PERIOD general_element_part)*
    ;

general_element_part
//    : (INTRODUCER char_set_name)? id_expression (PERIOD id_expression)* (AT_SIGN link_name)? function_argument?
    : (INTRODUCER char_set_name)? (id_expression | quoted_string) (PERIOD (id_expression | quoted_string))* (AT_SIGN link_name)? function_argument?
    ;

table_element
    : (INTRODUCER char_set_name)? id_expression (PERIOD id_expression)*
    ;

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

// $>

// $<Lexer Mappings

constant
    : TIMESTAMP (quoted_string | bind_variable) (AT TIME ZONE quoted_string)?
    | INTERVAL (quoted_string | bind_variable | general_element_part)
      (YEAR | MONTH | DAY | HOUR | MINUTE | SECOND)
      (LEFT_PAREN (UNSIGNED_INTEGER | bind_variable) (COMMA (UNSIGNED_INTEGER | bind_variable) )? RIGHT_PAREN)?
      (TO ( DAY | HOUR | MINUTE | SECOND (LEFT_PAREN (UNSIGNED_INTEGER | bind_variable) RIGHT_PAREN)?))?
    | numeric
    | DATE quoted_string
    | quoted_string
    | NULL_
    | TRUE
    | FALSE
    | DBTIMEZONE
    | SESSIONTIMEZONE
    | MINVALUE
    | MAXVALUE
    | DEFAULT
    ;

numeric
    : UNSIGNED_INTEGER
    | APPROXIMATE_NUM_LIT
    ;

numeric_negative
    : MINUS_SIGN numeric
    ;

quoted_string
    : CHAR_STRING
    //| CHAR_STRING_PERL
    | NATIONAL_CHAR_STRING_LIT
    | UNI_STRING
    | CHAR_DOUBLE_QUOTED_STRING
    ;

identifier
    : (INTRODUCER char_set_name)? id_expression
    ;

id_expression
    : regular_id
    | DELIMITED_ID
    ;

outer_join_sign
    : LEFT_PAREN PLUS_SIGN RIGHT_PAREN
    ;

regular_id
    : non_reserved_keywords_pre12c
    | non_reserved_keywords_in_12c
    | REGULAR_ID
    | A_LETTER
    | AGENT
    | AGGREGATE
    | ANALYZE
    | AUTONOMOUS_TRANSACTION
    | BATCH
    | BINARY_INTEGER
    | BOOLEAN
    | C_LETTER
    | CHAR
    | CLUSTER
    | CONSTRUCTOR
    | CUSTOMDATUM
    | DECIMAL
    | DELETE
    | DETERMINISTIC
    | DSINTERVAL_UNCONSTRAINED
    | ERR
    | EXCEPTION
    | EXCEPTION_INIT
    | EXCEPTIONS
    | EXIT
    | FLOAT
    | FORALL
    | INDICES
    | INOUT
    | INTEGER
    | LANGUAGE
    | LONG
    | LOOP
    | NUMBER
    | ORADATA
    | OSERROR
    | OUT
    | OVERRIDING
    | PARALLEL_ENABLE
    | PIPELINED
    | PLS_INTEGER
    | POSITIVE
    | POSITIVEN
    | PRAGMA
    | RAISE
    | RAW
    | RECORD
    | REF
    | RENAME
    | RESTRICT_REFERENCES
    | RESULT
    | SELF
    | SERIALLY_REUSABLE
    | SET
    | SIGNTYPE
    | SIMPLE_INTEGER
    | SMALLINT
    | SQLDATA
    | SQLERROR
    | SUBTYPE
    | TIMESTAMP_LTZ_UNCONSTRAINED
    | TIMESTAMP_TZ_UNCONSTRAINED
    | TIMESTAMP_UNCONSTRAINED
    | TRIGGER
    | VARCHAR
    | VARCHAR2
    | VARIABLE
    | WARNING
    | WHILE
    | XMLAGG
    | YMINTERVAL_UNCONSTRAINED
    | REGR_
    | VAR_
    | COVAR_
    | PUBLIC
    ;

non_reserved_keywords_in_12c
    : ACL
    | ACTION
    | ACTIONS
    | ACTIVE
    | ACTIVE_DATA
    | ACTIVITY
    | ADAPTIVE_PLAN
    | ADVANCED
    | AFD_DISKSTRING
    | ANOMALY
    | ANSI_REARCH
    | APPLICATION
    | APPROX_COUNT_DISTINCT
    | ARCHIVAL
    | ARCHIVED
    | ASIS
    | ASSIGN
    | AUTO_LOGIN
    | AUTO_REOPTIMIZE
    | AVRO
    | BACKGROUND
    | BATCHSIZE
    | BATCH_TABLE_ACCESS_BY_ROWID
    | BEGINNING
    | BEQUEATH
    | BITMAP_AND
    | BSON
    | CACHING
    | CALCULATED
    | CALLBACK
    | CAPACITY
    | CDBDEFAULT
    | CLASSIFIER
    | CLEANUP
    | CLIENT
    | CLUSTER_DETAILS
    | CLUSTER_DISTANCE
    | CLUSTERING
    | COMMON_DATA
    | COMPONENT
    | COMPONENTS
    | CON_DBID_TO_ID
    | CONDITION
    | CONDITIONAL
    | CON_GUID_TO_ID
    | CON_ID
    | CON_NAME_TO_ID
    | CONTAINER_DATA
    | CONTAINERS
    | CON_UID_TO_ID
    | COOKIE
    | COPY
    | CREATE_FILE_DEST
    | CREDENTIAL
    | CRITICAL
    | CUBE_AJ
    | CUBE_SJ
    | DATAMOVEMENT
    | DATAOBJ_TO_MAT_PARTITION
    | DATAPUMP
    | DATA_SECURITY_REWRITE_LIMIT
    | DAYS
    | DB_UNIQUE_NAME
    | DECORRELATE
    | DEFINE
    | DELEGATE
    | DELETE_ALL
    | DESTROY
    | DIMENSIONS
    | DISABLE_ALL
    | DISABLE_PARALLEL_DML
    | DISCARD
    | DISTRIBUTE
    | DUPLICATE
    | DV
    | EDITIONABLE
    | ELIM_GROUPBY
    | EM
    | ENABLE_ALL
    | ENABLE_PARALLEL_DML
    | EQUIPART
    | EVAL
    | EVALUATE
    | EXISTING
    | EXPRESS
    | EXTRACTCLOBXML
    | FACTOR
    | FAILOVER
    | FAILURE
    | FAMILY
    | FAR
    | FASTSTART
    | FEATURE_DETAILS
    | FETCH
    | FILE_NAME_CONVERT
    | FIXED_VIEW_DATA
    | FORMAT
    | GATHER_OPTIMIZER_STATISTICS
    | GET
    | ILM
    | INACTIVE
    | INDEXING
    | INHERIT
    | INMEMORY
    | INMEMORY_PRUNING
    | INPLACE
    | INTERLEAVED
    | JSON
    | JSON_ARRAY
    | JSON_ARRAYAGG
    | JSON_EQUAL
    | JSON_EXISTS
    | JSON_EXISTS2
    | JSONGET
    | JSON_OBJECT
    | JSON_OBJECTAGG
    | JSONPARSE
    | JSON_QUERY
    | JSON_SERIALIZE
    | JSON_TABLE
    | JSON_TEXTCONTAINS
    | JSON_TEXTCONTAINS2
    | JSON_VALUE
    | KEYSTORE
    | LABEL
    | LAX
    | LIFECYCLE
    | LINEAR
    | LOCKING
    | LOGMINING
    | MAP
    | MATCH
    | MATCHES
    | MATCH_NUMBER
    | MATCH_RECOGNIZE
    | MAX_SHARED_TEMP_SIZE
    | MEMCOMPRESS
    | METADATA
    | MODEL_NB
    | MODEL_SV
    | MODIFICATION
    | MODULE
    | MONTHS
    | MULTIDIMENSIONAL
    | NEG
    | NO_ADAPTIVE_PLAN
    | NO_ANSI_REARCH
    | NO_AUTO_REOPTIMIZE
    | NO_BATCH_TABLE_ACCESS_BY_ROWID
    | NO_CLUSTERING
    | NO_COMMON_DATA
    | NOCOPY
    | NO_DATA_SECURITY_REWRITE
    | NO_DECORRELATE
    | NO_ELIM_GROUPBY
    | NO_GATHER_OPTIMIZER_STATISTICS
    | NO_INMEMORY
    | NO_INMEMORY_PRUNING
    | NOKEEP
    | NONEDITIONABLE
    | NO_OBJECT_LINK
    | NO_PARTIAL_JOIN
    | NO_PARTIAL_ROLLUP_PUSHDOWN
    | NOPARTITION
    | NO_PQ_CONCURRENT_UNION
    | NO_PQ_REPLICATE
    | NO_PQ_SKEW
    | NO_PX_FAULT_TOLERANCE
    | NORELOCATE
    | NOREPLAY
    | NO_ROOT_SW_FOR_LOCAL
    | NO_SQL_TRANSLATION
    | NO_USE_CUBE
    | NO_USE_VECTOR_AGGREGATION
    | NO_VECTOR_TRANSFORM
    | NO_VECTOR_TRANSFORM_DIMS
    | NO_VECTOR_TRANSFORM_FACT
    | NO_ZONEMAP
    | OBJ_ID
    | OFFSET
    | OLS
    | OMIT
    | ONE
    | ORA_CHECK_ACL
    | ORA_CHECK_PRIVILEGE
    | ORA_CLUSTERING
    | ORA_INVOKING_USER
    | ORA_INVOKING_USERID
    | ORA_INVOKING_XS_USER
    | ORA_INVOKING_XS_USER_GUID
    | ORA_RAWCOMPARE
    | ORA_RAWCONCAT
    | ORA_WRITE_TIME
    | PARTIAL
    | PARTIAL_JOIN
    | PARTIAL_ROLLUP_PUSHDOWN
    | PAST
    | PATCH
    | PATH_PREFIX
    | PATTERN
    | PER
    | PERMUTE
    | PLUGGABLE
    | POOL_16K
    | POOL_2K
    | POOL_32K
    | POOL_4K
    | POOL_8K
    | PQ_CONCURRENT_UNION
    | PQ_DISTRIBUTE_WINDOW
    | PQ_FILTER
    | PQ_REPLICATE
    | PQ_SKEW
    | PRELOAD
    | PRETTY
    | PREV
    | PRINTBLOBTOCLOB
    | PRIORITY
    | PRIVILEGED
    | PROXY
    | PRUNING
    | PX_FAULT_TOLERANCE
    | REALM
    | REDEFINE
    | RELOCATE
    | RESTART
    | ROLESET
    | ROWID_MAPPING_TABLE
    | RUNNING
    | SAVE
    | SCRUB
    | SDO_GEOM_MBR
    | SECRET
    | SERIAL
    | SERVICE_NAME_CONVERT
    | SERVICES
    | SHARING
    | SHELFLIFE
    | SOURCE_FILE_DIRECTORY
    | SOURCE_FILE_NAME_CONVERT
    | SQL_TRANSLATION_PROFILE
    | STANDARD_HASH
    | STANDBYS
    | STATE
    | STATEMENT
    | STREAM
    | SUBSCRIBE
    | SUBSET
    | SUCCESS
    | SYSBACKUP
    | SYS_CHECK_PRIVILEGE
    | SYSDG
    | SYS_GET_COL_ACLIDS
    | SYSGUID
    | SYSKM
    | SYS_MKXTI
    | SYSOBJ
    | SYS_OP_CYCLED_SEQ
    | SYS_OP_HASH
    | SYS_OP_KEY_VECTOR_CREATE
    | SYS_OP_KEY_VECTOR_FILTER
    | SYS_OP_KEY_VECTOR_FILTER_LIST
    | SYS_OP_KEY_VECTOR_SUCCEEDED
    | SYS_OP_KEY_VECTOR_USE
    | SYS_OP_PART_ID
    | SYS_OP_ZONE_ID
    | SYS_RAW_TO_XSID
    | SYS_XSID_TO_RAW
    | SYS_ZMAP_FILTER
    | SYS_ZMAP_REFRESH
    | TAG
    | TEXT
    | TIER
    | TIES
    | TO_ACLID
    | TRANSLATION
    | TRUST
    | UCS2
    | UNCONDITIONAL
    | UNMATCHED
    | UNPLUG
    | UNSUBSCRIBE
    | USABLE
    | USE_CUBE
    | USE_HIDDEN_PARTITIONS
    | USER_DATA
    | USER_TABLESPACES
    | USE_VECTOR_AGGREGATION
    | USING_NO_EXPAND
    | UTF16BE
    | UTF16LE
    | UTF32
    | UTF8
    | V1
    | V2
    | VALID_TIME_END
    | VECTOR_TRANSFORM
    | VECTOR_TRANSFORM_DIMS
    | VECTOR_TRANSFORM_FACT
    | VERIFIER
    | VIOLATION
    | VISIBILITY
    | WEEK
    | WEEKS
    | WITH_PLSQL
    | WRAPPER
    | XS
    | YEARS
    | ZONEMAP
    ;

non_reserved_keywords_pre12c
    : ABORT
    | ABS
    | ACCESSED
    | ACCESS
    | ACCOUNT
    | ACOS
    | ACTIVATE
    | ACTIVE_COMPONENT
    | ACTIVE_FUNCTION
    | ACTIVE_TAG
    | ADD_COLUMN
    | ADD_GROUP
    | ADD_MONTHS
    | ADD
    | ADJ_DATE
    | ADMINISTER
    | ADMINISTRATOR
    | ADMIN
    | ADVISE
    | ADVISOR
    | AFTER
    | ALIAS
    | ALLOCATE
    | ALLOW
    | ALL_ROWS
    | ALWAYS
    | ANALYZE
    | ANCILLARY
    | AND_EQUAL
    | ANTIJOIN
    | ANYSCHEMA
    | APPENDCHILDXML
    | APPEND
    | APPEND_VALUES
    | APPLY
    | ARCHIVELOG
    | ARCHIVE
    | ARRAY
    | ASCII
    | ASCIISTR
    | ASIN
    | ASSEMBLY
    | ASSOCIATE
    | ASYNCHRONOUS
    | ASYNC
    | ATAN2
    | ATAN
    | AT
    | ATTRIBUTE
    | ATTRIBUTES
    | AUTHENTICATED
    | AUTHENTICATION
    | AUTHID
    | AUTHORIZATION
    | AUTOALLOCATE
    | AUTOEXTEND
    | AUTOMATIC
    | AUTO
    | AVAILABILITY
    | AVG
    | BACKUP
    | BASICFILE
    | BASIC
    | BATCH
    | BECOME
    | BEFORE
    | BEGIN
    | BEGIN_OUTLINE_DATA
    | BEHALF
    | BFILE
    | BFILENAME
    | BIGFILE
    | BINARY_DOUBLE_INFINITY
    | BINARY_DOUBLE
    | BINARY_DOUBLE_NAN
    | BINARY_FLOAT_INFINITY
    | BINARY_FLOAT
    | BINARY_FLOAT_NAN
    | BINARY
    | BIND_AWARE
    | BINDING
    | BIN_TO_NUM
    | BITAND
    | BITMAP
    | BITMAPS
    | BITMAP_TREE
    | BITS
    | BLOB
    | BLOCK
    | BLOCK_RANGE
    | BLOCKSIZE
    | BLOCKS
    | BODY
    | BOTH
    | BOUND
    | BRANCH
    | BREADTH
    | BROADCAST
    | BUFFER_CACHE
    | BUFFER
    | BUFFER_POOL
    | BUILD
    | BULK
    | BYPASS_RECURSIVE_CHECK
    | BYPASS_UJVC
    | BYTE
    | CACHE_CB
    | CACHE_INSTANCES
    | CACHE
    | CACHE_TEMP_TABLE
    | CALL
    | CANCEL
    | CARDINALITY
    | CASCADE
    | CASE
    | CAST
    | CATEGORY
    | CEIL
    | CELL_FLASH_CACHE
    | CERTIFICATE
    | CFILE
    | CHAINED
    | CHANGE_DUPKEY_ERROR_INDEX
    | CHANGE
    | CHARACTER
    | CHAR_CS
    | CHARTOROWID
    | CHECK_ACL_REWRITE
    | CHECKPOINT
    | CHILD
    | CHOOSE
    | CHR
    | CHUNK
    | CLASS
    | CLEAR
    | CLOB
    | CLONE
    | CLOSE_CACHED_OPEN_CURSORS
    | CLOSE
    | CLUSTER_BY_ROWID
    | CLUSTER_ID
    | CLUSTERING_FACTOR
    | CLUSTER_PROBABILITY
    | CLUSTER_SET
    | COALESCE
    | COALESCE_SQ
    | COARSE
    | CO_AUTH_IND
    | COLD
    | COLLECT
    | COLUMNAR
    | COLUMN_AUTH_INDICATOR
    | COLUMN
    | COLUMNS
    | COLUMN_STATS
    | COLUMN_VALUE
    | COMMENT
    | COMMIT
    | COMMITTED
    | COMPACT
    | COMPATIBILITY
    | COMPILE
    | COMPLETE
    | COMPLIANCE
    | COMPOSE
    | COMPOSITE_LIMIT
    | COMPOSITE
    | COMPOUND
    | COMPUTE
    | CONCAT
    | CONFIRM
    | CONFORMING
    | CONNECT_BY_CB_WHR_ONLY
    | CONNECT_BY_COMBINE_SW
    | CONNECT_BY_COST_BASED
    | CONNECT_BY_ELIM_DUPS
    | CONNECT_BY_FILTERING
    | CONNECT_BY_ISCYCLE
    | CONNECT_BY_ISLEAF
    | CONNECT_BY_ROOT
    | CONNECT_TIME
    | CONSIDER
    | CONSISTENT
    | CONSTANT
    | CONST
    | CONSTRAINT
    | CONSTRAINTS
    | CONTAINER
    | CONTENT
    | CONTENTS
    | CONTEXT
    | CONTINUE
    | CONTROLFILE
    | CONVERT
    | CORR_K
    | CORR
    | CORR_S
    | CORRUPTION
    | CORRUPT_XID_ALL
    | CORRUPT_XID
    | COSH
    | COS
    | COST
    | COST_XML_QUERY_REWRITE
    | COUNT
    | COVAR_POP
    | COVAR_SAMP
    | CPU_COSTING
    | CPU_PER_CALL
    | CPU_PER_SESSION
    | CRASH
    | CREATE_STORED_OUTLINES
    | CREATION
    | CROSSEDITION
    | CROSS
    | CSCONVERT
    | CUBE_GB
    | CUBE
    | CUME_DISTM
    | CUME_DIST
    | CURRENT_DATE
    | CURRENT
    | CURRENT_SCHEMA
    | CURRENT_TIME
    | CURRENT_TIMESTAMP
    | CURRENT_USER
    | CURRENTV
    | CURSOR
    | CURSOR_SHARING_EXACT
    | CURSOR_SPECIFIC_SEGMENT
    | CV
    | CYCLE
    | DANGLING
    | DATABASE
    | DATAFILE
    | DATAFILES
    | DATA
    | DATAOBJNO
    | DATAOBJ_TO_PARTITION
    | DATE_MODE
    | DAY
    | DBA
    | DBA_RECYCLEBIN
    | DBMS_STATS
    | DB_ROLE_CHANGE
    | DBTIMEZONE
    | DB_VERSION
    | DDL
    | DEALLOCATE
    | DEBUGGER
    | DEBUG
    | DECLARE
    | DEC
    | DECOMPOSE
    | DECREMENT
    | DECR
    | DECRYPT
    | DEDUPLICATE
    | DEFAULTS
    | DEFERRABLE
    | DEFERRED
    | DEFINED
    | DEFINER
    | DEGREE
    | DELAY
    | DELETEXML
    | DEMAND
    | DENSE_RANKM
    | DENSE_RANK
    | DEPENDENT
    | DEPTH
    | DEQUEUE
    | DEREF
    | DEREF_NO_REWRITE
    | DETACHED
    | DETERMINES
    | DICTIONARY
    | DIMENSION
    | DIRECT_LOAD
    | DIRECTORY
    | DIRECT_PATH
    | DISABLE
    | DISABLE_PRESET
    | DISABLE_RPKE
    | DISALLOW
    | DISASSOCIATE
    | DISCONNECT
    | DISKGROUP
    | DISK
    | DISKS
    | DISMOUNT
    | DISTINGUISHED
    | DISTRIBUTED
    | DML
    | DML_UPDATE
    | DOCFIDELITY
    | DOCUMENT
    | DOMAIN_INDEX_FILTER
    | DOMAIN_INDEX_NO_SORT
    | DOMAIN_INDEX_SORT
    | DOUBLE
    | DOWNGRADE
    | DRIVING_SITE
    | DROP_COLUMN
    | DROP_GROUP
    | DST_UPGRADE_INSERT_CONV
    | DUMP
    | DYNAMIC
    | DYNAMIC_SAMPLING_EST_CDN
    | DYNAMIC_SAMPLING
    | EACH
    | EDITIONING
    | EDITION
    | EDITIONS
    | ELEMENT
    | ELIMINATE_JOIN
    | ELIMINATE_OBY
    | ELIMINATE_OUTER_JOIN
    | EMPTY_BLOB
    | EMPTY_CLOB
    | EMPTY
    | ENABLE
    | ENABLE_PRESET
    | ENCODING
    | ENCRYPTION
    | ENCRYPT
    | END_OUTLINE_DATA
    | ENFORCED
    | ENFORCE
    | ENQUEUE
    | ENTERPRISE
    | ENTITYESCAPING
    | ENTRY
    | ERROR_ARGUMENT
    | ERROR
    | ERROR_ON_OVERLAP_TIME
    | ERRORS
    | ESCAPE
    | ESTIMATE
    | EVALNAME
    | EVALUATION
    | EVENTS
    | EVERY
    | EXCEPTIONS
    | EXCEPT
    | EXCHANGE
    | EXCLUDE
    | EXCLUDING
    | EXECUTE
    | EXEMPT
    | EXISTSNODE
    | EXPAND_GSET_TO_UNION
    | EXPAND_TABLE
    | EXPIRE
    | EXPLAIN
    | EXPLOSION
    | EXP
    | EXPORT
    | EXPR_CORR_CHECK
    | EXTENDS
    | EXTENT
    | EXTENTS
    | EXTERNALLY
    | EXTERNAL
    | EXTRACT
    | EXTRACTVALUE
    | EXTRA
    | FACILITY
    | FACT
    | FACTORIZE_JOIN
    | FAILED_LOGIN_ATTEMPTS
    | FAILED
    | FAILGROUP
    | FALSE
    | FAST
    | FBTSCAN
    | FEATURE_ID
    | FEATURE_SET
    | FEATURE_VALUE
    | FILE
    | FILESYSTEM_LIKE_LOGGING
    | FILTER
    | FINAL
    | FINE
    | FINISH
    | FIRSTM
    | FIRST
    | FIRST_ROWS
    | FIRST_VALUE
    | FLAGGER
    | FLASHBACK
    | FLASH_CACHE
    | FLOB
    | FLOOR
    | FLUSH
    | FOLDER
    | FOLLOWING
    | FOLLOWS
    | FORCE
    | FORCE_XML_QUERY_REWRITE
    | FOREIGN
    | FOREVER
    | FORWARD
    | FRAGMENT_NUMBER
    | FREELIST
    | FREELISTS
    | FREEPOOLS
    | FRESH
    | FROM_TZ
    | FULL
    | FULL_OUTER_JOIN_TO_OUTER
    | FUNCTION
    | FUNCTIONS
    | GATHER_PLAN_STATISTICS
    | GBY_CONC_ROLLUP
    | GBY_PUSHDOWN
    | GENERATED
    | GLOBALLY
    | GLOBAL
    | GLOBAL_NAME
    | GLOBAL_TOPIC_ENABLED
    | GREATEST
    | GROUP_BY
    | GROUP_ID
    | GROUPING_ID
    | GROUPING
    | GROUPS
    | GUARANTEED
    | GUARANTEE
    | GUARD
    | HASH_AJ
    | HASHKEYS
    | HASH
    | HASH_SJ
    | HEADER
    | HEAP
    | HELP
    | HEXTORAW
    | HEXTOREF
    | HIDDEN_KEYWORD
    | HIDE
    | HIERARCHY
    | HIGH
    | HINTSET_BEGIN
    | HINTSET_END
    | HOT
    | HOUR
    | HWM_BROKERED
    | HYBRID
    | IDENTIFIER
    | IDENTITY
    | IDGENERATORS
    | IDLE_TIME
    | ID
    | IF
    | IGNORE
    | IGNORE_OPTIM_EMBEDDED_HINTS
    | IGNORE_ROW_ON_DUPKEY_INDEX
    | IGNORE_WHERE_CLAUSE
    | IMMEDIATE
    | IMPACT
    | IMPORT
    | INCLUDE
    | INCLUDE_VERSION
    | INCLUDING
    | INCREMENTAL
    | INCREMENT
    | INCR
    | INDENT
    | INDEX_ASC
    | INDEX_COMBINE
    | INDEX_DESC
    | INDEXED
    | INDEXES
    | INDEX_FFS
    | INDEX_FILTER
    | INDEX_JOIN
    | INDEX_ROWS
    | INDEX_RRS
    | INDEX_RS_ASC
    | INDEX_RS_DESC
    | INDEX_RS
    | INDEX_SCAN
    | INDEX_SKIP_SCAN
    | INDEX_SS_ASC
    | INDEX_SS_DESC
    | INDEX_SS
    | INDEX_STATS
    | INDEXTYPE
    | INDEXTYPES
    | INDICATOR
    | INFINITE
    | INFORMATIONAL
    | INITCAP
    | INITIALIZED
    | INITIALLY
    | INITIAL
    | INITRANS
    | INLINE
    | INLINE_XMLTYPE_NT
    | IN_MEMORY_METADATA
    | INNER
    | INSERTCHILDXMLAFTER
    | INSERTCHILDXMLBEFORE
    | INSERTCHILDXML
    | INSERTXMLAFTER
    | INSERTXMLBEFORE
    | INSTANCE
    | INSTANCES
    | INSTANTIABLE
    | INSTANTLY
    | INSTEAD
    | INSTR2
    | INSTR4
    | INSTRB
    | INSTRC
    | INSTR
    | INTERMEDIATE
    | INTERNAL_CONVERT
    | INTERNAL_USE
    | INTERPRETED
    | INTERVAL
    | INT
    | INVALIDATE
    | INVISIBLE
    | IN_XQUERY
    | ISOLATION_LEVEL
    | ISOLATION
    | ITERATE
    | ITERATION_NUMBER
    | JAVA
    | JOB
    | JOIN
    | KEEP_DUPLICATES
    | KEEP
    | KERBEROS
    | KEY_LENGTH
    | KEY
    | KEYSIZE
    | KEYS
    | KILL
    | LAG
    | LAST_DAY
    | LAST
    | LAST_VALUE
    | LATERAL
    | LAYER
    | LDAP_REGISTRATION_ENABLED
    | LDAP_REGISTRATION
    | LDAP_REG_SYNC_INTERVAL
    | LEADING
    | LEAD
    | LEAST
    | LEFT
    | LENGTH2
    | LENGTH4
    | LENGTHB
    | LENGTHC
    | LENGTH
    | LESS
    | LEVEL
    | LEVELS
    | LIBRARY
    | LIFE
    | LIFETIME
    | LIKE2
    | LIKE4
    | LIKEC
    | LIKE_EXPAND
    | LIMIT
    | LINK
    | LISTAGG
    | LIST
    | LN
    | LNNVL
    | LOAD
    | LOB
    | LOBNVL
    | LOBS
    | LOCAL_INDEXES
    | LOCAL
    | LOCALTIME
    | LOCALTIMESTAMP
    | LOCATION
    | LOCATOR
    | LOCKED
    | LOGFILE
    | LOGFILES
    | LOGGING
    | LOGICAL
    | LOGICAL_READS_PER_CALL
    | LOGICAL_READS_PER_SESSION
    | LOG
    | LOGOFF
    | LOGON
    | LOG_READ_ONLY_VIOLATIONS
    | LOWER
    | LOW
    | LPAD
    | LTRIM
    | MAIN
    | MAKE_REF
    | MANAGED
    | MANAGEMENT
    | MANAGE
    | MANAGER
    | MANUAL
    | MAPPING
    | MASTER
    | MATCHED
    | MATERIALIZED
    | MATERIALIZE
    | MAXARCHLOGS
    | MAXDATAFILES
    | MAXEXTENTS
    | MAXIMIZE
    | MAXINSTANCES
    | MAXLOGFILES
    | MAXLOGHISTORY
    | MAXLOGMEMBERS
    | MAX
    | MAXSIZE
    | MAXTRANS
    | MAXVALUE
    | MEASURE
    | MEASURES
    | MEDIAN
    | MEDIUM
    | MEMBER
    | MEMORY
    | MERGEACTIONS
    | MERGE_AJ
    | MERGE_CONST_ON
    | MERGE
    | MERGE_SJ
    | METHOD
    | MIGRATE
    | MIGRATION
    | MINEXTENTS
    | MINIMIZE
    | MINIMUM
    | MINING
    | MIN
    | MINUS_NULL
    | MINUTE
    | MINVALUE
    | MIRRORCOLD
    | MIRRORHOT
    | MIRROR
    | MLSLABEL
    | MODEL_COMPILE_SUBQUERY
    | MODEL_DONTVERIFY_UNIQUENESS
    | MODEL_DYNAMIC_SUBQUERY
    | MODEL_MIN_ANALYSIS
    | MODEL
    | MODEL_NO_ANALYSIS
    | MODEL_PBY
    | MODEL_PUSH_REF
    | MODIFY_COLUMN_TYPE
    | MODIFY
    | MOD
    | MONITORING
    | MONITOR
    | MONTH
    | MONTHS_BETWEEN
    | MOUNT
    | MOUNTPATH
    | MOVEMENT
    | MOVE
    | MULTISET
    | MV_MERGE
    | NAMED
    | NAME
    | NAMESPACE
    | NAN
    | NANVL
    | NATIONAL
    | NATIVE_FULL_OUTER_JOIN
    | NATIVE
    | NATURAL
    | NAV
    | NCHAR_CS
    | NCHAR
    | NCHR
    | NCLOB
    | NEEDED
    | NESTED
    | NESTED_TABLE_FAST_INSERT
    | NESTED_TABLE_GET_REFS
    | NESTED_TABLE_ID
    | NESTED_TABLE_SET_REFS
    | NESTED_TABLE_SET_SETID
    | NETWORK
    | NEVER
    | NEW
    | NEW_TIME
    | NEXT_DAY
    | NEXT
    | NL_AJ
    | NLJ_BATCHING
    | NLJ_INDEX_FILTER
    | NLJ_INDEX_SCAN
    | NLJ_PREFETCH
    | NLS_CALENDAR
    | NLS_CHARACTERSET
    | NLS_CHARSET_DECL_LEN
    | NLS_CHARSET_ID
    | NLS_CHARSET_NAME
    | NLS_COMP
    | NLS_CURRENCY
    | NLS_DATE_FORMAT
    | NLS_DATE_LANGUAGE
    | NLS_INITCAP
    | NLS_ISO_CURRENCY
    | NL_SJ
    | NLS_LANG
    | NLS_LANGUAGE
    | NLS_LENGTH_SEMANTICS
    | NLS_LOWER
    | NLS_NCHAR_CONV_EXCP
    | NLS_NUMERIC_CHARACTERS
    | NLS_SORT
    | NLSSORT
    | NLS_SPECIAL_CHARS
    | NLS_TERRITORY
    | NLS_UPPER
    | NO_ACCESS
    | NOAPPEND
    | NOARCHIVELOG
    | NOAUDIT
    | NO_BASETABLE_MULTIMV_REWRITE
    | NO_BIND_AWARE
    | NO_BUFFER
    | NOCACHE
    | NO_CARTESIAN
    | NO_CHECK_ACL_REWRITE
    | NO_CLUSTER_BY_ROWID
    | NO_COALESCE_SQ
    | NO_CONNECT_BY_CB_WHR_ONLY
    | NO_CONNECT_BY_COMBINE_SW
    | NO_CONNECT_BY_COST_BASED
    | NO_CONNECT_BY_ELIM_DUPS
    | NO_CONNECT_BY_FILTERING
    | NO_COST_XML_QUERY_REWRITE
    | NO_CPU_COSTING
    | NOCPU_COSTING
    | NOCYCLE
    | NODELAY
    | NO_DOMAIN_INDEX_FILTER
    | NO_DST_UPGRADE_INSERT_CONV
    | NO_ELIMINATE_JOIN
    | NO_ELIMINATE_OBY
    | NO_ELIMINATE_OUTER_JOIN
    | NOENTITYESCAPING
    | NO_EXPAND_GSET_TO_UNION
    | NO_EXPAND
    | NO_EXPAND_TABLE
    | NO_FACT
    | NO_FACTORIZE_JOIN
    | NO_FILTERING
    | NOFORCE
    | NO_FULL_OUTER_JOIN_TO_OUTER
    | NO_GBY_PUSHDOWN
    | NOGUARANTEE
    | NO_INDEX_FFS
    | NO_INDEX
    | NO_INDEX_SS
    | NO_LOAD
    | NOLOCAL
    | NOLOGGING
    | NOMAPPING
    | NOMAXVALUE
    | NO_MERGE
    | NOMINIMIZE
    | NOMINVALUE
    | NO_MODEL_PUSH_REF
    | NO_MONITORING
    | NOMONITORING
    | NO_MONITOR
    | NO_MULTIMV_REWRITE
    | NO
    | NO_NATIVE_FULL_OUTER_JOIN
    | NONBLOCKING
    | NONE
    | NO_NLJ_BATCHING
    | NO_NLJ_PREFETCH
    | NONSCHEMA
    | NOORDER
    | NO_ORDER_ROLLUPS
    | NO_OUTER_JOIN_TO_ANTI
    | NO_OUTER_JOIN_TO_INNER
    | NOOVERRIDE
    | NO_PARALLEL_INDEX
    | NOPARALLEL_INDEX
    | NO_PARALLEL
    | NOPARALLEL
    | NO_PARTIAL_COMMIT
    | NO_PLACE_DISTINCT
    | NO_PLACE_GROUP_BY
    | NO_PQ_MAP
    | NO_PRUNE_GSETS
    | NO_PULL_PRED
    | NO_PUSH_PRED
    | NO_PUSH_SUBQ
    | NO_PX_JOIN_FILTER
    | NO_QKN_BUFF
    | NO_QUERY_TRANSFORMATION
    | NO_REF_CASCADE
    | NORELY
    | NOREPAIR
    | NORESETLOGS
    | NO_RESULT_CACHE
    | NOREVERSE
    | NO_REWRITE
    | NOREWRITE
    | NORMAL
    | NOROWDEPENDENCIES
    | NOSCHEMACHECK
    | NOSEGMENT
    | NO_SEMIJOIN
    | NO_SEMI_TO_INNER
    | NO_SET_TO_JOIN
    | NOSORT
    | NO_SQL_TUNE
    | NO_STAR_TRANSFORMATION
    | NO_STATEMENT_QUEUING
    | NO_STATS_GSETS
    | NOSTRICT
    | NO_SUBQUERY_PRUNING
    | NO_SUBSTRB_PAD
    | NO_SWAP_JOIN_INPUTS
    | NOSWITCH
    | NO_TABLE_LOOKUP_BY_NL
    | NO_TEMP_TABLE
    | NOTHING
    | NOTIFICATION
    | NO_TRANSFORM_DISTINCT_AGG
    | NO_UNNEST
    | NO_USE_HASH_AGGREGATION
    | NO_USE_HASH_GBY_FOR_PUSHDOWN
    | NO_USE_HASH
    | NO_USE_INVISIBLE_INDEXES
    | NO_USE_MERGE
    | NO_USE_NL
    | NOVALIDATE
    | NO_XDB_FASTPATH_INSERT
    | NO_XML_DML_REWRITE
    | NO_XMLINDEX_REWRITE_IN_SELECT
    | NO_XMLINDEX_REWRITE
    | NO_XML_QUERY_REWRITE
    | NTH_VALUE
    | NTILE
    | NULLIF
    | NULLS
    | NUMERIC
    | NUM_INDEX_KEYS
    | NUMTODSINTERVAL
    | NUMTOYMINTERVAL
    | NVARCHAR2
    | NVL2
    | NVL
    | OBJECT2XML
    | OBJECT
    | OBJNO
    | OBJNO_REUSE
    | OCCURENCES
    | OFFLINE
    | OFF
    | OIDINDEX
    | OID
    | OLAP
    | OLD
    | OLD_PUSH_PRED
    | OLTP
    | ONLINE
    | ONLY
    | OPAQUE
    | OPAQUE_TRANSFORM
    | OPAQUE_XCANONICAL
    | OPCODE
    | OPEN
    | OPERATIONS
    | OPERATOR
    | OPT_ESTIMATE
    | OPTIMAL
    | OPTIMIZE
    | OPTIMIZER_FEATURES_ENABLE
    | OPTIMIZER_GOAL
    | OPT_PARAM
    | ORA_BRANCH
    | ORADEBUG
    | ORA_DST_AFFECTED
    | ORA_DST_CONVERT
    | ORA_DST_ERROR
    | ORA_GET_ACLIDS
    | ORA_GET_PRIVILEGES
    | ORA_HASH
    | ORA_ROWSCN
    | ORA_ROWSCN_RAW
    | ORA_ROWVERSION
    | ORA_TABVERSION
    | ORDERED
    | ORDERED_PREDICATES
    | ORDINALITY
    | OR_EXPAND
    | ORGANIZATION
    | OR_PREDICATES
    | OTHER
    | OUTER_JOIN_TO_ANTI
    | OUTER_JOIN_TO_INNER
    | OUTER
    | OUTLINE_LEAF
    | OUTLINE
    | OUT_OF_LINE
    | OVERFLOW
    | OVERFLOW_NOMOVE
    | OVERLAPS
    | OVER
    | OWNER
    | OWNERSHIP
    | OWN
    | PACKAGE
    | PACKAGES
    | PARALLEL_INDEX
    | PARALLEL
    | PARAMETERS
    | PARAM
    | PARENT
    | PARITY
    | PARTIALLY
    | PARTITION_HASH
    | PARTITION_LIST
    | PARTITION
    | PARTITION_RANGE
    | PARTITIONS
    | PARTNUMINST
    | PASSING
    | PASSWORD_GRACE_TIME
    | PASSWORD_LIFE_TIME
    | PASSWORD_LOCK_TIME
    | PASSWORD
    | PASSWORD_REUSE_MAX
    | PASSWORD_REUSE_TIME
    | PASSWORD_VERIFY_FUNCTION
    | PATH
    | PATHS
    | PBL_HS_BEGIN
    | PBL_HS_END
    | PCTINCREASE
    | PCTTHRESHOLD
    | PCTUSED
    | PCTVERSION
    | PENDING
    | PERCENTILE_CONT
    | PERCENTILE_DISC
    | PERCENT_KEYWORD
    | PERCENT_RANKM
    | PERCENT_RANK
    | PERFORMANCE
    | PERMANENT
    | PERMISSION
    | PFILE
    | PHYSICAL
    | PIKEY
    | PIV_GB
    | PIVOT
    | PIV_SSF
    | PLACE_DISTINCT
    | PLACE_GROUP_BY
    | PLAN
    | PLSCOPE_SETTINGS
    | PLSQL_CCFLAGS
    | PLSQL_CODE_TYPE
    | PLSQL_DEBUG
    | PLSQL_OPTIMIZE_LEVEL
    | PLSQL_WARNINGS
    | POINT
    | POLICY
    | POST_TRANSACTION
    | POWERMULTISET_BY_CARDINALITY
    | POWERMULTISET
    | POWER
    | PQ_DISTRIBUTE
    | PQ_MAP
    | PQ_NOMAP
    | PREBUILT
    | PRECEDES
    | PRECEDING
    | PRECISION
    | PRECOMPUTE_SUBQUERY
    | PREDICATE_REORDERS
    | PREDICTION_BOUNDS
    | PREDICTION_COST
    | PREDICTION_DETAILS
    | PREDICTION
    | PREDICTION_PROBABILITY
    | PREDICTION_SET
    | PREPARE
    | PRESENT
    | PRESENTNNV
    | PRESENTV
    | PRESERVE
    | PRESERVE_OID
    | PREVIOUS
    | PRIMARY
    | PRIVATE
    | PRIVATE_SGA
    | PRIVILEGE
    | PRIVILEGES
    | PROCEDURAL
    | PROCEDURE
    | PROCESS
    | PROFILE
    | PROGRAM
    | PROJECT
    | PROPAGATE
    | PROTECTED
    | PROTECTION
    | PULL_PRED
    | PURGE
    | PUSH_PRED
    | PUSH_SUBQ
    | PX_GRANULE
    | PX_JOIN_FILTER
    | QB_NAME
    | QUERY_BLOCK
    | QUERY
    | QUEUE_CURR
    | QUEUE
    | QUEUE_ROWP
    | QUIESCE
    | QUORUM
    | QUOTA
    | RANDOM_LOCAL
    | RANDOM
    | RANGE
    | RANKM
    | RANK
    | RAPIDLY
    | RATIO_TO_REPORT
    | RAWTOHEX
    | RAWTONHEX
    | RBA
    | RBO_OUTLINE
    | RDBA
    | READ
    | READS
    | REAL
    | REBALANCE
    | REBUILD
    | RECORDS_PER_BLOCK
    | RECOVERABLE
    | RECOVER
    | RECOVERY
    | RECYCLEBIN
    | RECYCLE
    | REDACTION
    | REDO
    | REDUCED
    | REDUNDANCY
    | REF_CASCADE_CURSOR
    | REFERENCED
    | REFERENCE
    | REFERENCES
    | REFERENCING
    | REF
    | REFRESH
    | REFTOHEX
    | REGEXP_COUNT
    | REGEXP_INSTR
    | REGEXP_LIKE
    | REGEXP_REPLACE
    | REGEXP_SUBSTR
    | REGISTER
    | REGR_AVGX
    | REGR_AVGY
    | REGR_COUNT
    | REGR_INTERCEPT
    | REGR_R2
    | REGR_SLOPE
    | REGR_SXX
    | REGR_SXY
    | REGR_SYY
    | REGULAR
    | REJECT
    | REKEY
    | RELATIONAL
    | RELY
    | REMAINDER
    | REMOTE_MAPPED
    | REMOVE
    | REPAIR
    | REPEAT
    | REPLACE
    | REPLICATION
    | REQUIRED
    | RESETLOGS
    | RESET
    | RESIZE
    | RESOLVE
    | RESOLVER
    | RESPECT
    | RESTORE_AS_INTERVALS
    | RESTORE
    | RESTRICT_ALL_REF_CONS
    | RESTRICTED
    | RESTRICT
    | RESULT_CACHE
    | RESUMABLE
    | RESUME
    | RETENTION
    | RETRY_ON_ROW_CHANGE
    | RETURNING
    | RETURN
    | REUSE
    | REVERSE
    | REWRITE
    | REWRITE_OR_ERROR
    | RIGHT
    | ROLE
    | ROLES
    | ROLLBACK
    | ROLLING
    | ROLLUP
    | ROUND
    | ROWDEPENDENCIES
    | ROWID
    | ROWIDTOCHAR
    | ROWIDTONCHAR
    | ROW_LENGTH
    | ROW
    | ROW_NUMBER
    | ROWNUM
    | ROWS
    | RPAD
    | RTRIM
    | RULE
    | RULES
    | SALT
    | SAMPLE
    | SAVE_AS_INTERVALS
    | SAVEPOINT
    | SB4
    | SCALE
    | SCALE_ROWS
    | SCAN_INSTANCES
    | SCAN
    | SCHEDULER
    | SCHEMACHECK
    | SCHEMA
    | SCN_ASCENDING
    | SCN
    | SCOPE
    | SD_ALL
    | SD_INHIBIT
    | SD_SHOW
    | SEARCH
    | SECOND
    | SECUREFILE_DBA
    | SECUREFILE
    | SECURITY
    | SEED
    | SEG_BLOCK
    | SEG_FILE
    | SEGMENT
    | SELECTIVITY
    | SEMIJOIN_DRIVER
    | SEMIJOIN
    | SEMI_TO_INNER
    | SEQUENCED
    | SEQUENCE
    | SEQUENTIAL
    | SERIALIZABLE
    | SERVERERROR
    | SESSION_CACHED_CURSORS
    | SESSION
    | SESSIONS_PER_USER
    | SESSIONTIMEZONE
    | SESSIONTZNAME
    | SETS
    | SETTINGS
    | SET_TO_JOIN
    | SEVERE
    | SHARED
    | SHARED_POOL
    | SHOW
    | SHRINK
    | SHUTDOWN
    | SIBLINGS
    | SID
    | SIGNAL_COMPONENT
    | SIGNAL_FUNCTION
    | SIGN
    | SIMPLE
    | SINGLE
    | SINGLETASK
    | SINH
    | SIN
    | SKIP_EXT_OPTIMIZER
    | SKIP_
    | SKIP_UNQ_UNUSABLE_IDX
    | SKIP_UNUSABLE_INDEXES
    | SMALLFILE
    | SNAPSHOT
    | SOME
    | SORT
    | SOUNDEX
    | SOURCE
    | SPACE_KEYWORD
    | SPECIFICATION
    | SPFILE
    | SPLIT
    | SPREADSHEET
    | SQLLDR
    | SQL
    | SQL_TRACE
    | SQRT
    | STALE
    | STANDALONE
    | STANDBY_MAX_DATA_DELAY
    | STANDBY
    | STAR
    | STAR_TRANSFORMATION
    | STARTUP
    | STATEMENT_ID
    | STATEMENT_QUEUING
    | STATEMENTS
    | STATIC
    | STATISTICS
    | STATS_BINOMIAL_TEST
    | STATS_CROSSTAB
    | STATS_F_TEST
    | STATS_KS_TEST
    | STATS_MODE
    | STATS_MW_TEST
    | STATS_ONE_WAY_ANOVA
    | STATS_T_TEST_INDEP
    | STATS_T_TEST_INDEPU
    | STATS_T_TEST_ONE
    | STATS_T_TEST_PAIRED
    | STATS_WSR_TEST
    | STDDEV
    | STDDEV_POP
    | STDDEV_SAMP
    | STOP
    | STORAGE
    | STORE
    | STREAMS
    | STRICT
    | STRING
    | STRIPE_COLUMNS
    | STRIPE_WIDTH
    | STRIP
    | STRUCTURE
    | SUBMULTISET
    | SUBPARTITION
    | SUBPARTITION_REL
    | SUBPARTITIONS
    | SUBQUERIES
    | SUBQUERY_PRUNING
    | SUBSTITUTABLE
    | SUBSTR2
    | SUBSTR4
    | SUBSTRB
    | SUBSTRC
    | SUBSTR
    | SUCCESSFUL
    | SUMMARY
    | SUM
    | SUPPLEMENTAL
    | SUSPEND
    | SWAP_JOIN_INPUTS
    | SWITCH
    | SWITCHOVER
    | SYNCHRONOUS
    | SYNC
    | SYSASM
    | SYS_AUDIT
    | SYSAUX
    | SYS_CHECKACL
    | SYS_CONNECT_BY_PATH
    | SYS_CONTEXT
    | SYSDATE
    | SYSDBA
    | SYS_DBURIGEN
    | SYS_DL_CURSOR
    | SYS_DM_RXFORM_CHR
    | SYS_DM_RXFORM_NUM
    | SYS_DOM_COMPARE
    | SYS_DST_PRIM2SEC
    | SYS_DST_SEC2PRIM
    | SYS_ET_BFILE_TO_RAW
    | SYS_ET_BLOB_TO_IMAGE
    | SYS_ET_IMAGE_TO_BLOB
    | SYS_ET_RAW_TO_BFILE
    | SYS_EXTPDTXT
    | SYS_EXTRACT_UTC
    | SYS_FBT_INSDEL
    | SYS_FILTER_ACLS
    | SYS_FNMATCHES
    | SYS_FNREPLACE
    | SYS_GET_ACLIDS
    | SYS_GET_PRIVILEGES
    | SYS_GETTOKENID
    | SYS_GETXTIVAL
    | SYS_GUID
    | SYS_MAKEXML
    | SYS_MAKE_XMLNODEID
    | SYS_MKXMLATTR
    | SYS_OP_ADT2BIN
    | SYS_OP_ADTCONS
    | SYS_OP_ALSCRVAL
    | SYS_OP_ATG
    | SYS_OP_BIN2ADT
    | SYS_OP_BITVEC
    | SYS_OP_BL2R
    | SYS_OP_BLOOM_FILTER_LIST
    | SYS_OP_BLOOM_FILTER
    | SYS_OP_C2C
    | SYS_OP_CAST
    | SYS_OP_CEG
    | SYS_OP_CL2C
    | SYS_OP_COMBINED_HASH
    | SYS_OP_COMP
    | SYS_OP_CONVERT
    | SYS_OP_COUNTCHG
    | SYS_OP_CSCONV
    | SYS_OP_CSCONVTEST
    | SYS_OP_CSR
    | SYS_OP_CSX_PATCH
    | SYS_OP_DECOMP
    | SYS_OP_DESCEND
    | SYS_OP_DISTINCT
    | SYS_OP_DRA
    | SYS_OP_DUMP
    | SYS_OP_DV_CHECK
    | SYS_OP_ENFORCE_NOT_NULL
    | SYSOPER
    | SYS_OP_EXTRACT
    | SYS_OP_GROUPING
    | SYS_OP_GUID
    | SYS_OP_IIX
    | SYS_OP_ITR
    | SYS_OP_LBID
    | SYS_OP_LOBLOC2BLOB
    | SYS_OP_LOBLOC2CLOB
    | SYS_OP_LOBLOC2ID
    | SYS_OP_LOBLOC2NCLOB
    | SYS_OP_LOBLOC2TYP
    | SYS_OP_LSVI
    | SYS_OP_LVL
    | SYS_OP_MAKEOID
    | SYS_OP_MAP_NONNULL
    | SYS_OP_MSR
    | SYS_OP_NICOMBINE
    | SYS_OP_NIEXTRACT
    | SYS_OP_NII
    | SYS_OP_NIX
    | SYS_OP_NOEXPAND
    | SYS_OP_NTCIMG
    | SYS_OP_NUMTORAW
    | SYS_OP_OIDVALUE
    | SYS_OP_OPNSIZE
    | SYS_OP_PAR_1
    | SYS_OP_PARGID_1
    | SYS_OP_PARGID
    | SYS_OP_PAR
    | SYS_OP_PIVOT
    | SYS_OP_R2O
    | SYS_OP_RAWTONUM
    | SYS_OP_RDTM
    | SYS_OP_REF
    | SYS_OP_RMTD
    | SYS_OP_ROWIDTOOBJ
    | SYS_OP_RPB
    | SYS_OPTLOBPRBSC
    | SYS_OP_TOSETID
    | SYS_OP_TPR
    | SYS_OP_TRTB
    | SYS_OPTXICMP
    | SYS_OPTXQCASTASNQ
    | SYS_OP_UNDESCEND
    | SYS_OP_VECAND
    | SYS_OP_VECBIT
    | SYS_OP_VECOR
    | SYS_OP_VECXOR
    | SYS_OP_VERSION
    | SYS_OP_VREF
    | SYS_OP_VVD
    | SYS_OP_XMLCONS_FOR_CSX
    | SYS_OP_XPTHATG
    | SYS_OP_XPTHIDX
    | SYS_OP_XPTHOP
    | SYS_OP_XTXT2SQLT
    | SYS_ORDERKEY_DEPTH
    | SYS_ORDERKEY_MAXCHILD
    | SYS_ORDERKEY_PARENT
    | SYS_PARALLEL_TXN
    | SYS_PATHID_IS_ATTR
    | SYS_PATHID_IS_NMSPC
    | SYS_PATHID_LASTNAME
    | SYS_PATHID_LASTNMSPC
    | SYS_PATH_REVERSE
    | SYS_PXQEXTRACT
    | SYS_RID_ORDER
    | SYS_ROW_DELTA
    | SYS_SC_2_XMLT
    | SYS_SYNRCIREDO
    | SYSTEM_DEFINED
    | SYSTEM
    | SYSTIMESTAMP
    | SYS_TYPEID
    | SYS_UMAKEXML
    | SYS_XMLANALYZE
    | SYS_XMLCONTAINS
    | SYS_XMLCONV
    | SYS_XMLEXNSURI
    | SYS_XMLGEN
    | SYS_XMLI_LOC_ISNODE
    | SYS_XMLI_LOC_ISTEXT
    | SYS_XMLINSTR
    | SYS_XMLLOCATOR_GETSVAL
    | SYS_XMLNODEID_GETCID
    | SYS_XMLNODEID_GETLOCATOR
    | SYS_XMLNODEID_GETOKEY
    | SYS_XMLNODEID_GETPATHID
    | SYS_XMLNODEID_GETPTRID
    | SYS_XMLNODEID_GETRID
    | SYS_XMLNODEID_GETSVAL
    | SYS_XMLNODEID_GETTID
    | SYS_XMLNODEID
    | SYS_XMLT_2_SC
    | SYS_XMLTRANSLATE
    | SYS_XMLTYPE2SQL
    | SYS_XQ_ASQLCNV
    | SYS_XQ_ATOMCNVCHK
    | SYS_XQBASEURI
    | SYS_XQCASTABLEERRH
    | SYS_XQCODEP2STR
    | SYS_XQCODEPEQ
    | SYS_XQCON2SEQ
    | SYS_XQCONCAT
    | SYS_XQDELETE
    | SYS_XQDFLTCOLATION
    | SYS_XQDOC
    | SYS_XQDOCURI
    | SYS_XQDURDIV
    | SYS_XQED4URI
    | SYS_XQENDSWITH
    | SYS_XQERRH
    | SYS_XQERR
    | SYS_XQESHTMLURI
    | SYS_XQEXLOBVAL
    | SYS_XQEXSTWRP
    | SYS_XQEXTRACT
    | SYS_XQEXTRREF
    | SYS_XQEXVAL
    | SYS_XQFB2STR
    | SYS_XQFNBOOL
    | SYS_XQFNCMP
    | SYS_XQFNDATIM
    | SYS_XQFNLNAME
    | SYS_XQFNNM
    | SYS_XQFNNSURI
    | SYS_XQFNPREDTRUTH
    | SYS_XQFNQNM
    | SYS_XQFNROOT
    | SYS_XQFORMATNUM
    | SYS_XQFTCONTAIN
    | SYS_XQFUNCR
    | SYS_XQGETCONTENT
    | SYS_XQINDXOF
    | SYS_XQINSERT
    | SYS_XQINSPFX
    | SYS_XQIRI2URI
    | SYS_XQLANG
    | SYS_XQLLNMFRMQNM
    | SYS_XQMKNODEREF
    | SYS_XQNILLED
    | SYS_XQNODENAME
    | SYS_XQNORMSPACE
    | SYS_XQNORMUCODE
    | SYS_XQ_NRNG
    | SYS_XQNSP4PFX
    | SYS_XQNSPFRMQNM
    | SYS_XQPFXFRMQNM
    | SYS_XQ_PKSQL2XML
    | SYS_XQPOLYABS
    | SYS_XQPOLYADD
    | SYS_XQPOLYCEL
    | SYS_XQPOLYCSTBL
    | SYS_XQPOLYCST
    | SYS_XQPOLYDIV
    | SYS_XQPOLYFLR
    | SYS_XQPOLYMOD
    | SYS_XQPOLYMUL
    | SYS_XQPOLYRND
    | SYS_XQPOLYSQRT
    | SYS_XQPOLYSUB
    | SYS_XQPOLYUMUS
    | SYS_XQPOLYUPLS
    | SYS_XQPOLYVEQ
    | SYS_XQPOLYVGE
    | SYS_XQPOLYVGT
    | SYS_XQPOLYVLE
    | SYS_XQPOLYVLT
    | SYS_XQPOLYVNE
    | SYS_XQREF2VAL
    | SYS_XQRENAME
    | SYS_XQREPLACE
    | SYS_XQRESVURI
    | SYS_XQRNDHALF2EVN
    | SYS_XQRSLVQNM
    | SYS_XQRYENVPGET
    | SYS_XQRYVARGET
    | SYS_XQRYWRP
    | SYS_XQSEQ2CON4XC
    | SYS_XQSEQ2CON
    | SYS_XQSEQDEEPEQ
    | SYS_XQSEQINSB
    | SYS_XQSEQRM
    | SYS_XQSEQRVS
    | SYS_XQSEQSUB
    | SYS_XQSEQTYPMATCH
    | SYS_XQSTARTSWITH
    | SYS_XQSTATBURI
    | SYS_XQSTR2CODEP
    | SYS_XQSTRJOIN
    | SYS_XQSUBSTRAFT
    | SYS_XQSUBSTRBEF
    | SYS_XQTOKENIZE
    | SYS_XQTREATAS
    | SYS_XQ_UPKXML2SQL
    | SYS_XQXFORM
    | TABLE
    | TABLE_LOOKUP_BY_NL
    | TABLES
    | TABLESPACE
    | TABLESPACE_NO
    | TABLE_STATS
    | TABNO
    | TANH
    | TAN
    | TBLORIDXPARTNUM
    | TEMPFILE
    | TEMPLATE
    | TEMPORARY
    | TEMP_TABLE
    | TEST
    | THAN
    | THE
    | THEN
    | THREAD
    | THROUGH
    | TIME
    | TIMEOUT
    | TIMES
    | TIMESTAMP
    | TIMEZONE_ABBR
    | TIMEZONE_HOUR
    | TIMEZONE_MINUTE
    | TIME_ZONE
    | TIMEZONE_OFFSET
    | TIMEZONE_REGION
    | TIV_GB
    | TIV_SSF
    | TO_BINARY_DOUBLE
    | TO_BINARY_FLOAT
    | TO_BLOB
    | TO_CHAR
    | TO_CLOB
    | TO_DATE
    | TO_DSINTERVAL
    | TO_LOB
    | TO_MULTI_BYTE
    | TO_NCHAR
    | TO_NCLOB
    | TO_NUMBER
    | TOPLEVEL
    | TO_SINGLE_BYTE
    | TO_TIME
    | TO_TIMESTAMP
    | TO_TIMESTAMP_TZ
    | TO_TIME_TZ
    | TO_YMINTERVAL
    | TRACE
    | TRACING
    | TRACKING
    | TRAILING
    | TRANSACTION
    | TRANSFORM_DISTINCT_AGG
    | TRANSITIONAL
    | TRANSITION
    | TRANSLATE
    | TREAT
    | TRIGGERS
    | TRIM
    | TRUE
    | TRUNCATE
    | TRUNC
    | TRUSTED
    | TUNING
    | TX
    | TYPE
    | TYPES
    | TZ_OFFSET
    | UB2
    | UBA
    | UID
    | UNARCHIVED
    | UNBOUNDED
    | UNBOUND
    | UNDER
    | UNDO
    | UNDROP
    | UNIFORM
    | UNISTR
    | UNLIMITED
    | UNLOAD
    | UNLOCK
    | UNNEST_INNERJ_DISTINCT_VIEW
    | UNNEST
    | UNNEST_NOSEMIJ_NODISTINCTVIEW
    | UNNEST_SEMIJ_VIEW
    | UNPACKED
    | UNPIVOT
    | UNPROTECTED
    | UNQUIESCE
    | UNRECOVERABLE
    | UNRESTRICTED
    | UNTIL
    | UNUSABLE
    | UNUSED
    | UPDATABLE
    | UPDATED
    | UPDATEXML
    | UPD_INDEXES
    | UPD_JOININDEX
    | UPGRADE
    | UPPER
    | UPSERT
    | UROWID
    | USAGE
    | USE_ANTI
    | USE_CONCAT
    | USE_HASH_AGGREGATION
    | USE_HASH_GBY_FOR_PUSHDOWN
    | USE_HASH
    | USE_INVISIBLE_INDEXES
    | USE_MERGE_CARTESIAN
    | USE_MERGE
    | USE
    | USE_NL
    | USE_NL_WITH_INDEX
    | USE_PRIVATE_OUTLINES
    | USER_DEFINED
    | USERENV
    | USERGROUP
    | USER
    | USER_RECYCLEBIN
    | USERS
    | USE_SEMI
    | USE_STORED_OUTLINES
    | USE_TTT_FOR_GSETS
    | USE_WEAK_NAME_RESL
    | USING
    | VALIDATE
    | VALIDATION
    | VALUE
    | VARIANCE
    | VAR_POP
    | VARRAY
    | VARRAYS
    | VAR_SAMP
    | VARYING
    | VECTOR_READ
    | VECTOR_READ_TRACE
    | VERIFY
    | VERSIONING
    | VERSION
    | VERSIONS_ENDSCN
    | VERSIONS_ENDTIME
    | VERSIONS
    | VERSIONS_OPERATION
    | VERSIONS_STARTSCN
    | VERSIONS_STARTTIME
    | VERSIONS_XID
    | VIRTUAL
    | VISIBLE
    | VOLUME
    | VSIZE
    | WAIT
    | WALLET
    | WELLFORMED
    | WHENEVER
    | WHEN
    | WHITESPACE
    | WIDTH_BUCKET
    | WITHIN
    | WITHOUT
    | WORK
    | WRAPPED
    | WRITE
    | XDB_FASTPATH_INSERT
    | X_DYN_PRUNE
    | XID
    | XML2OBJECT
    | XMLATTRIBUTES
    | XMLCAST
    | XMLCDATA
    | XMLCOLATTVAL
    | XMLCOMMENT
    | XMLCONCAT
    | XMLDIFF
    | XML_DML_RWT_STMT
    | XMLELEMENT
    | XMLEXISTS2
    | XMLEXISTS
    | XMLFOREST
    | XMLINDEX_REWRITE_IN_SELECT
    | XMLINDEX_REWRITE
    | XMLINDEX_SEL_IDX_TBL
    | XMLISNODE
    | XMLISVALID
    | XML
    | XMLNAMESPACES
    | XMLPARSE
    | XMLPATCH
    | XMLPI
    | XMLQUERY
    | XMLQUERYVAL
    | XMLROOT
    | XMLSCHEMA
    | XMLSERIALIZE
    | XMLTABLE
    | XMLTRANSFORMBLOB
    | XMLTRANSFORM
    | XMLTYPE
    | XPATHTABLE
    | XS_SYS_CONTEXT
    | YEAR
    | YES
    | ZONE
    ;

 /**
 * DB2 Sql 11.0 Parser
 *
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
 
 parser grammar Db2SqlParser;
 
 options {
    tokenVocab=Db2SqlLexer;
}
 
 sql_statement
     : select_statement
     ;
 
 select_statement
     : (WITH common_table_expression_list)? fullselect (opt_clause)*
       SEMICOLON? EOF
     ;
 
 common_table_expression_list
     : common_table_expression (COMMA common_table_expression)?
     ;
 
 common_table_expression
     : table_identifier column_name_list? AS LEFT_PAREN fullselect RIGHT_PAREN
     ;
 
 fullselect
     : (subselect | LEFT_PAREN fullselect RIGHT_PAREN | BAR values_clause BAR) 
       (subselect_clause_list)? (order_by_clause)? (fetch_clause)?
     ;
 
 subselect
     : select_clause from_clause (where_clause)? (group_by_clause)?
       (having_clause)? (order_by_clause)? (fetch_first_clause)?
     ;
 
 values_clause
     : VALUES sequence_reference_list
     ;
 
 sequence_reference_list
     : sequence_reference
     | LEFT_PAREN sequence_reference (COMMA sequence_reference)? RIGHT_PAREN
     ;
 
 sequence_reference
     : identifier
     ;
 
 subselect_clause_list
     : (subselect_clause)+
     ;
 
 subselect_clause
     : (UNION | EXCEPT | INTERSECT) (DISTINCT | ALL)? (subselect | LEFT_PAREN fullselect RIGHT_PAREN)
     ;
 
 select_clause
     : SELECT (ALL | DISTINCT)? (ASTERISK | selected_element_list)
     ;
 
 selected_element_list
     : selected_element (COMMA selected_element)*
     | regular_id PERIOD ASTERISK
     ;
 
 selected_element
     : expression (AS? regular_id)
     ;
 
 from_clause
     :
     ;
 
 where_clause
     :
     ;
 
 group_by_clause
     :
     ;
 
 having_clause
     :
     ;
 
 fetch_first_clause
     :
     ;
 
 order_by_clause
     :
     ;
 
 fetch_clause
     :
     ;
 
 opt_clause
     : update_clause
     | read_only_clause
     | optimize_clause
     | isolation_clause
     | queryno_clause
     | SKIP LOCKED DATA
     ;
 
 update_clause
     : FOR UPDATE (OF column_name_list)?
     ;
 
 read_only_clause
     : FOR READ ONLY 
     ;
 
 optimize_clause
     : OPTIMIZE FOR UNSIGNED_INTEGER (ROWS | ROW) 
     ;
 
 isolation_clause
     : WITH opt_lock_clause
     ;
 
 opt_lock_clause
     : (RR | RS) (lock_clause)? 
     | (CS | UR) 
     ;
 
 lock_clause
     : USE AND KEEP (EXECUTIVE | UPDATE | SHARE) LOCKS 
     ;
 
 queryno_clause
     : QUERYNO UNSIGNED_INTEGER 
     ;
 
 expressions
     : expression (COMMA? expression)*
     ;
 
 expression
     : (PLUS_SIGN | MINUS_SIGN)? multi_expression (operator (PLUS_SIGN | MINUS_SIGN)? multi_expression)*
     ;
 
 operator
     : CONCAT
     | DOUBLE_BAR
     | SOLIDUS
     | ASTERISK
     | PLUS_SIGN
     | MINUS_SIGN
     ;
 
 multi_expression
     : function_invocation
     | LEFT_PAREN expression RIGHT_PAREN
     | constant
     | column_name
     | variable
     | special_register
     | scalar_fullselect
     | time_zone_specific_expression
     | labeled_duration
     | case_expression
     | cast_xmlcase_specification
     | array_element_specification
     | array_constructor
     | olap_specification
     | row_change_expression
     | sequence_reference
     ;
 
 function_invocation
     : regular_id LEFT_PAREN (ALL | DISTINCT)? (expressions | TABLE regular_id) RIGHT_PAREN
     ;
 
 constant
     : numeric
     | quoted_string
     | BIT_STRING_LIT
     | (DATE | TIME | TIMESTAMP) quoted_string 
     | quoted_string
       // logical_expression and value_expression and in_exist_expression
       // isof_expression 
     ;
 
 // should go more details about variable
 variable
     : identifier
     ;
 
 // I don't know what special_register is
 special_register
     :
     ;
 
 scalar_fullselect
     : LEFT_PAREN fullselect RIGHT_PAREN
     ;
 
 time_zone_specific_expression
     : multi_expression (AT LOCAL | AT TIME ZONE multi_expression)
     ;
 
 labeled_duration
     : multi_expression time_keys
     ;
 
 time_keys
     : (YEAR | YEARS)
     | (MONTH |MONTHS)
     | (DAY | DAYS)
     | (HOUR | HOURS) 
     | (MINUTE | MINUTES)
     | (SECOND | SECONDS)
     | (MICROSECOND | MICROSECONDS)
     ;
 
 case_expression
     : CASE (searched_when_clause | simple_when_clause) 
       (ELSE NULL_ | ELSE expression)? END
     ;
 
 searched_when_clause
     : (WHEN expression THEN (expression | NULL_))+ 
     ;
 
 simple_when_clause
     : expression (WHEN expression THEN (expression | NULL_))+
     ;
 
 // regard parameter-marker as an expression
 cast_xmlcase_specification
     : (CAST | XMLCAST) LEFT_PAREN (expression | NULL_) AS data_type RIGHT_PAREN
     ;
 
 array_element_specification
     : expression LEFT_BRACKET expression RIGHT_BRACKET
     ;
 
 array_constructor
     : ARRAY LEFT_BRACKET (fullselect | (expressions | NULL_)) RIGHT_BRACKET
     ;
 
 // TODO https://www.ibm.com/support/knowledgecenter/en/SSEPEK_11.0.0/sqlref/src/tpc/db2z_olapspecification.html#db2z_olapspecification
 olap_specification
     : 
     ;
 
 row_change_expression
     : ROW CHANGE (TIMESTAMP | TOKEN) FOR expression
     ;
 
 data_type
     : built_in_type
     | distinct_type_name
     | array_type
     ;
 
 built_in_type
     : (SMALLINT | INTEGER | INT | BIGINT)
     | (DECIMAL | DEC | NUMERIC) (LEFT_PAREN UNSIGNED_INTEGER (COMMA UNSIGNED_INTEGER)? RIGHT_PAREN)?
     | DECFLOAT (LEFT_PAREN UNSIGNED_INTEGER RIGHT_PAREN)?
     | (FLOAT (LEFT_PAREN UNSIGNED_INTEGER RIGHT_PAREN)? | REAL | DOUBLE (PRECISION)?)
     | (((CHARACTER | CHAR) (LEFT_PAREN lob_length RIGHT_PAREN)? | ((CHARACTER | CHAR) VARYING | VARCHAR) LEFT_PAREN lob_length RIGHT_PAREN) | 
        (((CHARACTER | CHAR) LARGE OBJECT) | CLOB) (LEFT_PAREN (lob_length | UNSIGNED_INTEGER M_LETTER OCTETS) RIGHT_PAREN)?) 
       ((CCSID (ASCII | EBCDIC | UNICODE))? (FOR (SBCS | MIXED | BIT) DATA)? | CCSID UNSIGNED_INTEGER)
     | (GRAPHIC (LEFT_PAREN (lob_length | UNSIGNED_INTEGER CODEUNITS16) RIGHT_PAREN)? | VARGRAPHIC 
       LEFT_PAREN lob_length RIGHT_PAREN | DBCLOB (LEFT_PAREN (lob_length | UNSIGNED_INTEGER M_LETTER CODEUNITS16) RIGHT_PAREN)?) 
       (CCSID (ASCII | EBCDIC | UNICODE | UNSIGNED_INTEGER))?
     | (BINARY (LEFT_PAREN UNSIGNED_INTEGER RIGHT_PAREN)? | (BINARY VARYING | VARBINARY) LEFT_PAREN UNSIGNED_INTEGER RIGHT_PAREN |
       (BINARY LARGE OBJECT | BLOB) (LEFT_PAREN UNSIGNED_INTEGER (M_LETTER | K_LETTER | G_LETTER) RIGHT_PAREN)?)
     | (DATE | TIME | TIMESTAMP (LEFT_PAREN UNSIGNED_INTEGER RIGHT_PAREN)? ((WITH | WITHOUT) TIME ZONE)?)
     | (ROWID | XML)
     ;
 
 lob_length
     : UNSIGNED_INTEGER (K_LETTER | M_LETTER | G_LETTER)? (CODEUNITS16 | CODEUNITS32 | OCTETS)?
     ;
 
 // distinct-type-name and array-type are user defined types
 distinct_type_name
     :
     ;
 
 array_type
     :
     ;
 
 table_identifier
     : identifier
     ;
 
 column_name_list
     : LEFT_PAREN column_name (COMMA column_name)* RIGHT_PAREN
     ;
 
 column_name
     : identifier
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
    | NATIONAL_CHAR_STRING_LIT 
    ;

 identifier
    : (regular_id PERIOD)? regular_id
    ;

 regular_id
    : REGULAR_ID 
//    | non_reserved_keywords_bd2 
    ;
 
 non_reserved_keywords_bd2
    : TIMESTAMP
    ;
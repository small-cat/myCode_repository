parser grammar VerticaSqlParser;

options {
    tokenVocab = VerticaSqlLexer;
}

// sql elements
// in vertica, hints like /*+ ... */, we just regard it as a comment and ignore it
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
    : func_name func_params func_options?
    ;

func_name
    : identifier
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
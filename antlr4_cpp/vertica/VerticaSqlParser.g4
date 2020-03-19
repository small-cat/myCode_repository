parser grammar VerticaSqlParser;

options {
    tokenVocab = VerticaSqlLexer;
}

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

// TODO
date_time_literal
    :
    ;

// expression definitions

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
    : concatenation AND concatenation
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
    |  V_DISTINCT unary_expression
    |  V_ALL unary_expression 
    |  case_expression
    |  standard_function
    |  atom
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
    : (V_ALL | V_DISTINCT)? expression (COMMA expression)?
    ;

func_options
    : V_OVER LEFT_PAREN func_window_clause* RIGHT_PAREN
    ;

func_window_clause
    : window_partition_clause
    | window_order_clause
    | window_frame_clause
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
    : (V_ASC | V_DESC) (V_NULLS? (V_FIRST | V_LAST | V_AUTO))?
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
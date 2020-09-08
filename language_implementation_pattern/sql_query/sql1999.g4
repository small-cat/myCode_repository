/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

grammar sql1999;

value_expression
    : numberic_value_expression
    | string_value_expression
    | datetime_value_expression
    | interval_value_expression
    | boolean_value_expression
    | value_expression_primary
    | row_value_expression
    ;

numberic_value_expression
    : term ((PLUS | MINUS) term)*
    ;

term 
    : factor ((ASTERISK | SOLIDUS) factor)*
    ;

factor
    : (sign)? numeric_primary
    ;

sign
    : PLUS | MINUS
    ;

numeric_primary
    : value_expression_primary
    | numeric_value_function
    ;

numeric_value_function
    : position_expression
    | extract_expression
    | length_expression
    | cardinality_expression
    | absolute_value_expression
    | modulus_expression
    ; 

position_expression
    : POSITION '(' string_blob_value_expression IN string_blob_value_expression ')'
    ;

string_blob_value_expression
    : string_value_expr
    | blob_value_expr
    ;

extract_expression
    : 
    ;

value_expression_primary
    : LEFT_PAREN value_expression RIGHT_PAREN
    | unsigned_value_specification
    | column_ref
    | set_function_specification
    | subquery
    | case_expression
    | cast_specification
    | subtype_treatment
    | attr_or_method_reference
    | ref_solution
    | collection_value_constructor
    | routine_invocation
    | field_ref
    | element_ref
    | method_invocation
    | static_method_invocation
    | new_specification
    ;

collection_value_constructor
    : array_value_expression
    ;
parser grammar expr;

a_expr
    : logical_expr
    ;
 
logical_expr
    : multiset_expr (IS NOT? 
    (NULL_P | DISTINCT FROM logical_expr | OF LEFT_PAREN type_list RIGHT_PAREN |
    DOCUMENT_P | TRUE_P | FALSE_P | UNKNOWN))?
    | multiset_expr (ISNULL | NOTNULL)
    | NOT logical_expr
    | logical_expr AND logical_expr
    | logical_expr OR logical_expr
    ;

multiset_expr
    : relational_expr
    ;

relational_expr
    : relational_expr relational_op relational_expr
    | compound_expr
    ;

relational_op
    : ('<' | '>') EQUALS_OP?
    | EQUALS_OP
    | NOT_EQUAL_OP
    ;

compound_expr
    : concatenation 
      (NOT? (IN_P in_expr 
            | BETWEEN (ASYMMETRIC? | SYMMETRIC) between_elements 
            | (LIKE | ILIKE | SIMILAR TO) concatenation (ESCAPE a_expr)?))?
    | concatenation_list OVERLAPS concatenation_list
    ;
    
between_elements
    : concatenation AND concatenation
    ;

concatenation_list
    : LEFT_PAREN concatenation (COMMA concatenation)* RIGHT_PAREN
    ;

concatenation
    : model_expr (AT TIME ZONE concatenation)?
    | concatenation CARRET_OPERATOR_PART concatenation
    | concatenation op=(ASTERISK | SOLIDUS | PERCENT_SIGN) concatenation
    | concatenation op=(PLUS_SIGN | MINUS_SIGN) concatenation
    | concatenation BAR BAR concatenation
    ;

model_expr
    : unary_expr
    ;

unary_expr
    : c_expr
    | a_expr TYPECAST typename_pg
    | (MINUS_SIGN | PLUS_SIGN) unary_expr
    ;
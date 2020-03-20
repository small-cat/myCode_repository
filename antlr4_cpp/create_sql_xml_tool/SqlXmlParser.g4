parser grammar SqlXmlParser;

options {
    tokenVocab = SqlXmlLexer;
}

stmts
    : stmt (SEMICOLON stmt)* SEMICOLON? EOF
    ;

stmt
    : CREATE (OR_ REPLACE)? (FUNCTION | PROCEDURE_) func_name something_else
    ;

func_name
    : identifier
    ; 

something_else
    : (identifier | UNDERLINE
    | INTEGERS
    | COLON | SEMICOLON | COMMA | PERIOD | LEFT_PAREN | RIGHT_PAREN
    | LEFT_BRACKET | RIGHT_BRACKET | FACTORIAL_SIGN | ADD_SIGN | BAR
    | SUB_SIGN | STAR_SIGN | DIV_SIGN | DOLLAR_SIGN | LESS_THAN | GREATER_THAN
    | EUQAL | REPLACE | OR_)+
    ;

identifier
    : REGULAR_ID
    | CHAR_STRINGS
    | DOUBLE_STRING
    ;
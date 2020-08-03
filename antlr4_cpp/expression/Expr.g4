grammar Expr;

/** The start rule; begin parsing here. */
prog:   stat+ ; 

stat:   expr NEWLINE?                
    |   ID '=' expr NEWLINE?        
    |   NEWLINE                   
    ;

expr:   expr '*' expr   # mul_expr
    |   expr '/' expr   # div_expr
    |   expr '+' expr   # add_expr
    |   expr '-' expr   # sub_expr
    |   atom            # atom_expr
    ;

atom:   INT
    |   ID
    |   '(' expr ')'
    ;

ID  :   [a-zA-Z]+ ;      // match identifiers <label id="code.tour.expr.3"/>
INT :   [0-9]+ ;         // match integers
NEWLINE:'\r'? '\n' ;     // return newlines to parser (is end-statement signal)
WS  :   [ \t]+ -> skip ; // toss out whitespace

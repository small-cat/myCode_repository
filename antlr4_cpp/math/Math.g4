grammar Math;

compileUnit
    : expr EOF
    ;

expr
    : '(' expr ')'                          # parenExpr
    | op=(ADD | SUB) expr                   # unaryExpr
    | left=expr op=(MUL | DIV) right=expr   # mulDivExpr
    | left=expr op=(ADD | SUB) right=expr   # addSubExpr
    | func=ID '(' expr (',' expr)? ')'      # funcExpr
    | NUM                                   # numExpr
    ;

ADD : '+';
SUB : '-';
MUL : '*';
DIV : '/';

ID  : [a-zA-Z]+ ;
NUM : [0-9]+ ('.' [0-9]+)? ([eE] [+-]? [0-9]+)? ;
WS  : [ \t\r\n] -> channel(HIDDEN) ;

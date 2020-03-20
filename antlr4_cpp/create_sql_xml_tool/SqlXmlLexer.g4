lexer grammar SqlXmlLexer;

CREATE : C R E A T E ;
OR_ : O R ;
REPLACE : R E P L A C E ;
FUNCTION : F U N C T I O N ;
PROCEDURE_ : P R O C E D U R E ;

DOUBLE_STRING: '"' (~('"' | '\r' | '\n') | '"' '"')+ '"' ;
CHAR_STRINGS : E? '\''  (~('\'' | '\r' | '\n') | '\'' '\'' | NEWLINE)* '\'' ;
REGULAR_ID: (SIMPLE_LETTER | UNI_CHAR) (SIMPLE_LETTER | UNI_CHAR | DIGIT | '$' | '_' | '#')* ;

COLON     : ':';
SEMICOLON : ';';
COMMA     : ',';
PERIOD    : '.';

LEFT_PAREN  : '(';
RIGHT_PAREN : ')';
LEFT_BRACKET: '[';
RIGHT_BRACKET: ']';

FACTORIAL_SIGN : '!';
ADD_SIGN       : '+';
SUB_SIGN       : '-';
STAR_SIGN      : '*';
DIV_SIGN       : '/';
UNDERLINE      : '_';
DOLLAR_SIGN    : '$';
BAR            : '|';
LESS_THAN      : '<';
GREATER_THAN   : '>';
EUQAL          : '=';

INTEGERS : DIGIT+;

SINGLE_LINE_COMMENT: '--' ~('\r' | '\n')* NEWLINE_EOF                 -> channel(HIDDEN);
MULTI_LINE_COMMENT:  '/*' .*? '*/'                                    -> channel(HIDDEN);
SPACES: [ \t\r\n]+ -> channel(HIDDEN);

// fragment rules
fragment SIMPLE_LETTER:   [a-zA-Z];
fragment DIGIT:     [0-9];
fragment FLOAT_FRAGMENT : (DIGIT+)? '.' DIGIT+ | (DIGIT+) '.' (DIGIT+)?;
fragment NEWLINE        : '\r'? '\n';
fragment NEWLINE_EOF    : NEWLINE | EOF;
fragment SPACE          : [ \t];
fragment UNI_CHAR       : '\u2E80-\u2FD5' | '\u3190-\u319F' | '\u3400-\u4DBF' | '\u4E00'..'\u9FEF' | '\uF900'..'\uFAAD';

fragment A		: 'A' | 'a';
fragment B		: 'B' | 'b';
fragment C		: 'C' | 'c';
fragment D		: 'D' | 'd';
fragment E		: 'E' | 'e';
fragment F		: 'F' | 'f';
fragment G		: 'G' | 'g';
fragment H		: 'H' | 'h';
fragment I		: 'I' | 'i';
fragment J		: 'J' | 'j';
fragment K		: 'K' | 'k';
fragment L		: 'L' | 'l';
fragment M		: 'M' | 'm';
fragment N		: 'N' | 'n';
fragment O		: 'O' | 'o';
fragment P		: 'P' | 'p';
fragment Q		: 'Q' | 'q';
fragment R		: 'R' | 'r';
fragment S		: 'S' | 's';
fragment T		: 'T' | 't';
fragment U		: 'U' | 'u';
fragment V		: 'V' | 'v';
fragment W		: 'W' | 'w';
fragment X		: 'X' | 'x';
fragment Y		: 'Y' | 'y';
fragment Z		: 'Z' | 'z';
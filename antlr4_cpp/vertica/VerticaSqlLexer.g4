lexer grammar VerticaSqlLexer;

// token definitions
V_NOT : N O T ;
V_AND : A N D ;
V_OR : O R ;
V_IS : I S ;
V_NULL : N U L L ;
V_ISNULL : I S N U L L ;
V_NOTNULL : N O T N U L L ;
V_IN : I N ;
V_BETWEEN : B E T W E E N ;
V_OVERLAPS : O V E R L A P S ;
V_LIKE : L I K E ; 
V_ILIKE : I L I K E ;
V_LIKEB : L I K E B ; 
V_ILIKEB : I L I K E B ;
V_TRUE : T R U E ;
V_FALSE : F A L S E ;
V_UNKNOWN : U N K N O W N ;
V_AT : A T ;
V_TIME : T I M E ;
V_ZONE : Z O N E ; 
V_LOCAL: L O C A L ;
V_DISTINCT : D I S T I N C T ;
V_ALL : A L L ;
V_CASE : C A S E ;
V_END : E N D ;
V_WHEN : W H E N ;
V_THEN : T H E N ;
V_ELSE : E L S E ;
V_OVER : O V E R;
V_PARTITION : P A R T I T I O N ;
V_BY : B Y ;
V_BEST : B E S T ;
V_NODES : N O D E S ;
V_ORDER : O R D E R;
V_ASC : A S C ;
V_DESC : D E S C ;
V_NULLS : N U L L S ;
V_FIRST : F I R S T ;
V_LAST : L A S T ;
V_AUTO : A U T O ;

UNSIGNED_INTEGER:    [0-9]+;
APPROXIMATE_NUM_LIT: (FLOAT_FRAGMENT | DIGIT+) E ('+' | '-')? DIGIT+;
HEX_STRING_LIT: '0' X ('\'' [A-Fa-f0-9]* '\'')+;
BIT_STRING_LIT: 'B' ('\'' [01]* '\'')+;
UNI_STRING: U '&' '\'' UNI_CHAR+ '\'' (U E S C A P E '\'' UNI_CHAR '\'')? ;

DOUBLE_STRING: '"' (~('"' | '\r' | '\n') | '"' '"')+ '"' ;
CHAR_STRING: E? '\''  (~('\'' | '\r' | '\n') | '\'' '\'' | NEWLINE)* '\'' ;
REGULAR_ID: (SIMPLE_LETTER | UNI_CHAR) (SIMPLE_LETTER | UNI_CHAR | DIGIT | '$' | '_' | '#')* ;
DOLLAR_STRING: '$' '$' (~ '$')* '$' '$';

// operators
// bitwise operators
AND_SIGN : '&';
BAR_SIGN : '|';
XOR_SIGN : '#';
NOT_SIGN : '~';
// >> << 

// boolean operators
// NOT AND OR

// comparison operators
GREATER_THAN   : '>';
LESS_THAN      : '<';
EQUAL_SIGN     : '=' | '<=>';
NOT_EQUAL_SIGN : '!=' | '<>';

// data type case
DATA_TYPE_CAST : '::';

// data/time and mathematical operators
FACTORIAL_SIGN : '!';
DOUBLE_FACTORIAL: '!!';
ADD_SIGN       : '+';
SUB_SIGN       : '-';
STAR_SIGN      : '*';
DIV_SIGN       : '/';
DOUBLE_DIV_SIGN: '//';
MOD_SIGN       : '%';
EXP_SIGN       : '^';
SQUARE_ROOT    : '|/';
CUBE_ROOT      : '||/';
AT_SIGN        : '@';

// other punctuations
COLON     : ':';
SEMICOLON : ';';
COMMA     : ',';
PERIOD    : '.';

LEFT_PAREN  : '(';
RIGHT_PAREN : ')';
LEFT_BRACKET: '[';
RIGHT_BRACKET: ']';

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
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
V_ROWS : R O W S;
V_RANGE : R A N G E ;
V_UNBOUNDED : U N B O U N D E D ; 
V_PRECEDING : P R E C E D I N G ;
V_FOLLOWING : F O L L O W I N G ;
V_CURRENT : C U R R E N T ; 
V_ROW : R O W ;
V_MAP : M A P ;
V_WINDOW : W I N D O W;
V_AS : A S ;
V_IGNORE : I G N O R E ;
V_WITHIN : W I T H I N ;
V_GROUP : G R O U P ;
V_ARRAY : A R R A Y ;
V_ESCAPE : E S C A P E ;
V_USING : U S I N G ; 
V_PARAMETERS : P A R A M E T E R S ;
V_AGO : A G O ;
V_TO : T O ;


// date type
V_WITH : W I T H ;
V_WITHOUT : W I T H O U T ;
V_TIMESTAMP : T I M E S T A M P ;
V_INTERVAL : I N T E R V A L ;
V_DAY : D A Y ;
V_BINARY : B I N A R Y ;
V_VARBINARY : V A R B I N A R Y ;
V_BOOLEAN : B O O L E A N ;
V_CHAR : C H A R ;
V_VARCHAR: V A R C H A R ;
V_CHARACTER : C H A R A C T E R ;
V_VARYING : V A R Y I N G ;
V_DATE : D A T E ;
V_DATETIME : D A T E T I M E ;
V_TIMESTAMPTZ : T I M E S T A M P T Z ;
V_SMALLDATETIME : S M A L L D A T E T I M E ;
V_MILLENNIUM : M I L L E N N I U M ;
V_CENTURY : C E N T U R Y ;
V_DECADE : D E C A D E ;
V_YEAR : Y E A R ;
V_QUARTER : Q U A R T E R ;
V_MONTH : M O N T H ;
V_WEEK : W E E K ;
V_HOUR : H O U R ;
V_MINUTE : M I N U T E ;
V_SECOND : S E C O N D ;
V_MILLISECOND : M I L L I S E C O N D ;
V_MICROSECOND : M I C R O S E C O N D ;
V_TIMETZ : T I M E T Z ;
V_LONG : L O N G ;
V_DOUBLE : D O U B L E ;
V_PRECISION : P R E C I S I O N ;
V_FLOAT : F L O A T ;
V_FLOAT8 : F L O A T '8';
V_REAL : R E A L ;
V_INTEGER : I N T E G E R ;
V_INT : I N T ;
V_INT8 : I N T '8';
V_BIGINT : B I G I N T ;
V_SMALLINT : S M A L L I N T ;
V_TINYINT : T I N Y I N T ;
V_NUMERIC : N U M E R I C ;
V_DECIMAL : D E C I M A L ;
V_NUMBER : N U M B E R ;
V_MONEY : M O N E Y ;
V_GEOMETRY : G E O M E T R Y ;
V_GEOGRAPHY : G E O G R A P H Y ;
V_UUID : U U I D ;

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
 /**
 * DB2 Sql 11.0 Parser
 *
 * Copyright (c) 2019 Jona <mblrwuzy@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
 
lexer grammar Db2SqlLexer;

AS      :                   'AS'|'as';
DATA    :                   'DATA'|'data';
FOR     :                   'FOR'|'for';
LOCKED  :                   'LOCKED'|'locked';
OF      :                   'OF'|'of';
ONLY    :                   'ONLY'|'only';
OPTIMIZE:                   'OPTIMIZE'|'optimize';
READ    :                   'READ'|'read';
ROW     :                   'ROW'|'row';
ROWS    :                   'ROWS'|'rows';
SKIP    :                   'SKIP'|'skip';
UPDATE  :                   'UPDATE'|'update';
WITH    :                   'WITH'|'with';
CHANGE  :                   'CHANGE';
TOKEN   :                   'TOKEN';

RR      :                   'RR'|'rr';
RS      :                   'RS'|'rs';
CS      :                   'CS'|'cs';
UR      :                   'UR'|'ur';

USE     :                   'USE';
AND     :                   'AND';
KEEP    :                   'KEEP';
EXECUTIVE:                   'EXECUTIVE';
SHARE   :                   'SHARE';
LOCKS   :                   'LOCKS';
QUERYNO :                   'QUERYNO';

VALUES  :                   'VALUES';
UNION   :                   'UNION';
EXCEPT  :                   'EXCEPT';
INTERSECT:                  'INTERSECT';
DISTINCT:                   'DISTINCT';
ALL     :                   'ALL';
SELECT  :                   'SELECT';
TABLE   :                   'TABLE';
CONCAT  :                   'CONCAT';

TIME    :                   'TIME';
DATE    :                   'DATE';
TIMESTAMP:                  'TIMESTAMP';

YEAR:			'YEAR';
YEARS:			'YEARS';
MONTH:			'MONTH';
MONTHS:			'MONTHS';
DAY:			'DAY';
DAYS:			'DAYS';
HOUR:			'HOUR';
HOURS:			'HOURS';
MINUTE:			'MINUTE';
MINUTES:		'MINUTES';
SECOND:			'SECOND';
SECONDS:		'SECONDS';
MICROSECOND:		'MICROSECOND';
MICROSECONDS:		'MICROSECONDS';

CASE:                   'CASE';
ELSE:                   'ELSE';
END :                   'END';
WHEN:                   'WHEN';
THEN:                   'THEN';

NULL_:                  'NULL';

CAST:                   'CAST';
ASCII:				'ASCII';
BIGINT:				'BIGINT';
BINARY:				'BINARY';
BIT:				'BIT';
BLOB:				'BLOB';
CCSID:				'CCSID';
CHAR:				'CHAR';
CHARACTER:			'CHARACTER';
CLOB:				'CLOB';
CODEUNITS:			'CODEUNITS';
DBCLOB:				'DBCLOB';
DEC:				'DEC';
DECFLOAT:			'DECFLOAT';
DECIMAL:			'DECIMAL';
DOUBLE:				'DOUBLE';
EBCDIC:				'EBCDIC';
FLOAT:				'FLOAT';
G_LETTER:			'G';
GRAPHIC:			'GRAPHIC';
INT:				'INT';
INTEGER:			'INTEGER';
K_LETTER:			'K';
LARGE:				'LARGE';
MIXED:				'MIXED';
M_LETTER:			'M';
NUMERIC:			'NUMERIC';
OBJECT:				'OBJECT';
OCTETS:				'OCTETS';
PRECISION:			'PRECISION';
REAL:				'REAL';
ROWID:				'ROWID';
SBCS:				'SBCS';
SMALLINT:			'SMALLINT';
UNICODE:			'UNICODE';
VARBINARY:			'VARBINARY';
VARCHAR:			'VARCHAR';
VARGRAPHIC:			'VARGRAPHIC';
VARYING:			'VARYING';
WITHOUT:			'WITHOUT';
XML:				'XML';
XMLCAST:                        'XMLCAST';
ZONE:				'ZONE';
CODEUNITS16:                    'CODEUNITS16';
CODEUNITS32:                    'CODEUNITS32';
ARRAY:				'ARRAY';

AT:				'AT';
LOCAL:				'LOCAL';

UNSIGNED_INTEGER:    [0-9]+;
APPROXIMATE_NUM_LIT: FLOAT_FRAGMENT (('E'|'e') ('+'|'-')? (FLOAT_FRAGMENT | [0-9]+))? (('D'|'d') | ('F'|'f'))?;

CHAR_STRING: '\''  (~('\'' | '\r' | '\n') | '\'' '\'' | NEWLINE)* '\'';
NATIONAL_CHAR_STRING_LIT: 'N' '\'' (~('\'' | '\r' | '\n' ) | '\'' '\'' | NEWLINE)* '\'';
BIT_STRING_LIT: 'BX' ('\'' [01]* '\'')+;

PERIOD:                    '.';

PERCENT:                   '%';
AMPERSAND:                 '&';
LEFT_PAREN:                '(';
RIGHT_PAREN:               ')';
DOUBLE_ASTERISK:           '**';
ASTERISK:                  '*';
PLUS_SIGN:                 '+';
MINUS_SIGN:                '-';
COMMA:                     ',';
SOLIDUS:                   '/';
AT_SIGN:                   '@';
ASSIGN_OP:                 ':=';

NOT_EQUAL_OP:              '!='
            |              '<>'
            |              '^='
            |              '~='
            ;
CARRET_OPERATOR_PART:      '^';
TILDE_OPERATOR_PART:       '~';
EXCLAMATION_OPERATOR_PART: '!';
GREATER_THAN_OP:           '>';
LESS_THAN_OP:              '<';
COLON:                     ':';
SEMICOLON:                 ';';

BAR:       '|';
DOUBLE_BAR:'||';
EQUALS_OP: '=';

LEFT_BRACKET:  '[';
RIGHT_BRACKET: ']';

REGULAR_ID: SIMPLE_LETTER (SIMPLE_LETTER | '$' | '_' | '#' | [0-9])*;
SPACES: [ \t\r\n]+ -> channel(HIDDEN);

// Fragment rules

fragment NEWLINE_EOF    : NEWLINE | EOF;
fragment QUESTION_MARK  : '?';
fragment SIMPLE_LETTER  : [a-zA-Z];
fragment FLOAT_FRAGMENT : UNSIGNED_INTEGER* '.'? UNSIGNED_INTEGER+;
fragment NEWLINE        : '\r'? '\n';
fragment SPACE          : [ \t];
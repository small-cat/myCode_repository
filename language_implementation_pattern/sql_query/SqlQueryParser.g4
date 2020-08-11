parser grammar SqlQueryParser;

options {
    tokenVocab=SqlQueryLexer;
}

<SQL-client module definition> ::=
		<module name clause>
		<language clause>
		<module authorization clause>
		[ <module path specification> ]
		[ <module transform group specification> ]
		[ <temporary table declaration>... ]
		<module contents>...

<module name clause> ::=
		MODULE [ <SQL-client module name> ] [ <module character set specification> ]

<SQL-client module name> ::= <identifier>

<identifier> ::= <actual identifier>

<actual identifier> ::= <regular identifier> | <delimited identifier>

<regular identifier> ::= <identifier body>

--p
--small
--i <identifier body> modified per ISO 9075:1999/Cor.1:2000(E).
--/i
--/p
--p
--i <identifier body> also rationalized by removing curly brackets
around <identifier part> because they are unnecessary and inconsistent
with other places where '...' modifies a single non-terminal.
--/i
--/small
--/small
--/p

<identifier body> ::= <identifier start> [ <identifier part>... ]

<identifier start> ::= <initial alphabetic character> | <ideographic character>

<initial alphabetic character> ::= !! (See the Syntax Rules)

<ideographic character> ::= !! (See the Syntax Rules)

<identifier part> ::=
		<alphabetic character>
	|	<ideographic character>
	|	<decimal digit character>
	|	<identifier combining character>
	|	<underscore>
	|	<alternate underscore>
	|	<extender character>
	|	<identifier ignorable character>
	|	<connector character>

<alphabetic character> ::= !! (See the Syntax Rules)

<decimal digit character> ::= !! (See the Syntax Rules)

<identifier combining character> ::= !! (See the Syntax Rules)

<alternate underscore> ::= !! (See the Syntax Rules)

<extender character> ::= !! (See the Syntax Rules)

<identifier ignorable character> ::= !! (See the Syntax Rules)

<connector character> ::= !! (See the Syntax Rules)

<delimited identifier> ::= <double quote> <delimited identifier body> <double quote>

<delimited identifier body> ::= <delimited identifier part>...

<delimited identifier part> ::= <nondoublequote character> | <doublequote symbol>

<nondoublequote character> ::= !! (See the Syntax Rules)

--p
--small
--i
Note that the two successive double quote characters must have no other
character (such as a space) between them.
The lexical analyzer would normally deal with this sort of issue.
--/i
--/small
--/p

<doublequote symbol> ::= <double quote> <double quote>

<module character set specification> ::= NAMES ARE <character set specification>

<character set specification> ::=
		<standard character set name>
	|	<implementation-defined character set name>
	|	<user-defined character set name>

<standard character set name> ::= <character set name>

<character set name> ::= [ <schema name> <period> ] <SQL language identifier>

<schema name> ::= [ <catalog name> <period> ] <unqualified schema name>

<catalog name> ::= <identifier>

<unqualified schema name> ::= <identifier>

<SQL language identifier> ::=
		<SQL language identifier start> [ { <underscore> | <SQL language identifier part> }... ]

<SQL language identifier start> ::= <simple Latin letter>

<SQL language identifier part> ::= <simple Latin letter> | <digit>

<implementation-defined character set name> ::= <character set name>

<user-defined character set name> ::= <character set name>

<language clause> ::= LANGUAGE <language name>

<language name> ::= ADA | C | COBOL | FORTRAN | MUMPS | PASCAL | PLI | SQL

--@@ This module authorization clause is superceded by a variant from 9075-5 SQL/Bindings.

--@@ <module authorization clause> ::=
--@@ 		SCHEMA <schema name>
--@@ 	|	AUTHORIZATION <module authorization identifier>
--@@ 	|	SCHEMA <schema name> AUTHORIZATION <module authorization identifier>

<module authorization identifier> ::= <authorization identifier>

<authorization identifier> ::= <role name> | <user identifier>

<role name> ::= <identifier>

<user identifier> ::= <identifier>

<module path specification> ::= <path specification>

<path specification> ::= PATH <schema name list>

<schema name list> ::= <schema name> [ { <comma> <schema name> }... ]

<module transform group specification> ::= <transform group specification>

<transform group specification> ::=
		TRANSFORM GROUP { <single group specification> | <multiple group specification> }

<single group specification> ::= <group name>

<group name> ::= <identifier>

<multiple group specification> ::= <group specification> [ { <comma> <group specification> }... ]

<group specification> ::= <group name> FOR TYPE <user-defined type>

<user-defined type> ::= <user-defined type name>

<user-defined type name> ::= <schema qualified type name>

<schema qualified type name> ::= [ <schema name> <period> ] <qualified identifier>

<qualified identifier> ::= <identifier>

<temporary table declaration> ::=
		DECLARE LOCAL TEMPORARY TABLE <table name>
		<table element list>
		[ ON COMMIT <table commit action> ROWS ]

<table name> ::= <local or schema qualified name>

<local or schema qualified name> ::= [ <local or schema qualifier> <period> ] <qualified identifier>

<local or schema qualifier> ::= <schema name> | MODULE

<table element list> ::=
		<left paren> <table element> [ { <comma> <table element> }... ] <right paren>

<table element> ::=
		<column definition>
	|	<table constraint definition>
	|	<like clause>
	|	<self-referencing column specification>
	|	<column options>

<column definition> ::=
		<column name>
		{ <data type> | <domain name> }
		[ <reference scope check> ]
		[ <default clause> ]
		[ <column constraint definition>... ]
		[ <collate clause> ]

<column name> ::= <identifier>

--hr
--h2 Data Types
--/h2

<data type> ::=
		<predefined type>
	|	<row type>
	|	<user-defined type>
	|	<reference type>
	|	<collection type>

<predefined type> ::=
		<character string type> [ CHARACTER SET <character set specification> ]
	|	<national character string type>
	|	<binary large object string type>
	|	<bit string type>
	|	<numeric type>
	|	<boolean type>
	|	<datetime type>
	|	<interval type>

<character string type> ::=
		CHARACTER [ <left paren> <length> <right paren> ]
	|	CHAR [ <left paren> <length> <right paren> ]
	|	CHARACTER VARYING <left paren> <length> <right paren>
	|	CHAR VARYING <left paren> <length> <right paren>
	|	VARCHAR <left paren> <length> <right paren>
	|	CHARACTER LARGE OBJECT [ <left paren> <large object length> <right paren> ]
	|	CHAR LARGE OBJECT [ <left paren> <large object length> <right paren> ]
	|	CLOB [ <left paren> <large object length> <right paren> ]

<length> ::= <unsigned integer>

<unsigned integer> ::= <digit>...

<large object length> ::= <unsigned integer> [ <multiplier> ] | <large object length token>

<multiplier> ::= K | M | G

<large object length token> ::= <digit>... <multiplier>

<national character string type> ::=
		NATIONAL CHARACTER [ <left paren> <length> <right paren> ]
	|	NATIONAL CHAR [ <left paren> <length> <right paren> ]
	|	NCHAR [ <left paren> <length> <right paren> ]
	|	NATIONAL CHARACTER VARYING <left paren> <length> <right paren>
	|	NATIONAL CHAR VARYING <left paren> <length> <right paren>
	|	NCHAR VARYING <left paren> <length> <right paren>
	|	NATIONAL CHARACTER LARGE OBJECT [ <left paren> <large object length> <right paren> ]
	|	NCHAR LARGE OBJECT [ <left paren> <large object length> <right paren> ]
	|	NCLOB [ <left paren> <large object length> <right paren> ]

<binary large object string type> ::=
		BINARY LARGE OBJECT [ <left paren> <large object length> <right paren> ]
	|	BLOB [ <left paren> <large object length> <right paren> ]

<bit string type> ::=
		BIT [ <left paren> <length> <right paren> ]
	|	BIT VARYING <left paren> <length> <right paren>

<numeric type> ::= <exact numeric type> | <approximate numeric type>

<exact numeric type> ::=
		NUMERIC [ <left paren> <precision> [ <comma> <scale> ] <right paren> ]
	|	DECIMAL [ <left paren> <precision> [ <comma> <scale> ] <right paren> ]
	|	DEC [ <left paren> <precision> [ <comma> <scale> ] <right paren> ]
	|	INTEGER
	|	INT
	|	SMALLINT

<precision> ::= <unsigned integer>

<scale> ::= <unsigned integer>

<approximate numeric type> ::=
		FLOAT [ <left paren> <precision> <right paren> ]
	|	REAL
	|	DOUBLE PRECISION

<boolean type> ::= BOOLEAN

<datetime type> ::=
		DATE
	|	TIME [ <left paren> <time precision> <right paren> ] [ <with or without time zone> ]
	|	TIMESTAMP [ <left paren> <timestamp precision> <right paren> ] [ <with or without time zone> ]

<time precision> ::= <time fractional seconds precision>

<time fractional seconds precision> ::= <unsigned integer>

<with or without time zone> ::= WITH TIME ZONE | WITHOUT TIME ZONE

<timestamp precision> ::= <time fractional seconds precision>

<interval type> ::= INTERVAL <interval qualifier>

<interval qualifier> ::= <start field> TO <end field> | <single datetime field>

<start field> ::=
		<non-second primary datetime field> [ <left paren> <interval leading field precision> <right paren> ]

<non-second primary datetime field> ::= YEAR | MONTH | DAY | HOUR | MINUTE

<interval leading field precision> ::= <unsigned integer>

<end field> ::=
		<non-second primary datetime field>
	|	SECOND [ <left paren> <interval fractional seconds precision> <right paren> ]

<interval fractional seconds precision> ::= <unsigned integer>

<single datetime field> ::=
		<non-second primary datetime field> [ <left paren> <interval leading field precision> <right paren> ]
	|	SECOND [ <left paren> <interval leading field precision> [ <comma> <interval fractional seconds precision> ] <right paren> ]

<row type> ::= ROW <row type body>

<row type body> ::= <left paren> <field definition> [ { <comma> <field definition> }... ] <right paren>

<field definition> ::= <field name> <data type> [ <reference scope check> ] [ <collate clause> ]

<field name> ::= <identifier>

<reference scope check> ::=
		REFERENCES ARE [ NOT ] CHECKED [ ON DELETE <reference scope check action> ]

<reference scope check action> ::= <referential action>

<referential action> ::=
		CASCADE
	|	SET NULL
	|	SET DEFAULT
	|	RESTRICT
	|	NO ACTION

<collate clause> ::= COLLATE <collation name>

<collation name> ::= <schema qualified name>

<schema qualified name> ::= [ <schema name> <period> ] <qualified identifier>

<reference type> ::= REF <left paren> <referenced type> <right paren> [ <scope clause> ]

<referenced type> ::= <user-defined type>

<scope clause> ::= SCOPE <table name>

<collection type> ::= <data type> <array specification>

<array specification> ::=
		<collection type constructor> <left bracket or trigraph> <unsigned integer> <right bracket or trigraph>

<collection type constructor> ::= ARRAY

<left bracket or trigraph> ::= <left bracket> | <left bracket trigraph>

--p
--small
--i
The trigraphs are strictly sequences of characters, not sequences of tokens.
There may not be any spaces between the characters.
Normally, the lexical analyzer would return the trigraphs as a simple symbol.
--/i
--/small
--/p

<left bracket trigraph> ::= <question mark> <question mark> <left paren>

<right bracket or trigraph> ::= <right bracket> | <right bracket trigraph>

<right bracket trigraph> ::= <question mark> <question mark> <right paren>

<domain name> ::= <schema qualified name>

<default clause> ::= DEFAULT <default option>

<default option> ::=
		<literal>
	|	<datetime value function>
	|	USER
	|	CURRENT_USER
	|	CURRENT_ROLE
	|	SESSION_USER
	|	SYSTEM_USER
	|	CURRENT_PATH
	|	<implicitly typed value specification>

--hr
--h2 Literals
--/h2

<literal> ::= <signed numeric literal> | <general literal>

<signed numeric literal> ::= [ <sign> ] <unsigned numeric literal>

<sign> ::= <plus sign> | <minus sign>

<unsigned numeric literal> ::= <exact numeric literal> | <approximate numeric literal>

<exact numeric literal> ::=
		<unsigned integer> [ <period> [ <unsigned integer> ] ]
	|	<period> <unsigned integer>

<approximate numeric literal> ::= <mantissa> E <exponent>

<mantissa> ::= <exact numeric literal>

<exponent> ::= <signed integer>

<signed integer> ::= [ <sign> ] <unsigned integer>

<general literal> ::=
		<character string literal>
	|	<national character string literal>
	|	<bit string literal>
	|	<hex string literal>
	|	<binary string literal>
	|	<datetime literal>
	|	<interval literal>
	|	<boolean literal>

<character string literal> ::=
		[ <introducer><character set specification> ]
		<quote> [ <character representation>... ] <quote>
		[ { <separator> <quote> [ <character representation>... ] <quote> }... ]

<introducer> ::= <underscore>

<character representation> ::= <nonquote character> | <quote symbol>

<nonquote character> ::= !! (See the Syntax Rules.)

--p
--small
--i
The <quote symbol> rule consists of two immediately adjacent <quote>
marks with no spaces.
As usual, this would be best handled in the lexical analyzer, not in the
grammar.
--/i
--/small
--/p

<quote symbol> ::= <quote><quote>

<separator> ::= { <comment> | <white space> }...

<comment> ::= <simple comment> | <bracketed comment>

<simple comment> ::= <simple comment introducer> [ <comment character>... ] <newline>

<simple comment introducer> ::= <minus sign><minus sign> [ <minus sign>... ]

<comment character> ::= <nonquote character> | <quote>

<newline> ::= !! (See the Syntax Rules)

--p
--small
--i
The <bracketed comment> rule included '!! (See the Syntax Rules)'.
This probably says something about the <slash> <asterisk> and <asterisk>
<slash> needing to be adjacent characters rather than adjacent tokens.
--/i
--/small
--/p

<bracketed comment> ::=
		<bracketed comment introducer> <bracketed comment contents> <bracketed comment terminator>

<bracketed comment introducer> ::= <slash> <asterisk>

<bracketed comment contents> ::= [ { <comment character> | <separator> }... ]

<bracketed comment terminator> ::= <asterisk> <slash>

<white space> ::= !! (See the Syntax Rules)

<national character string literal> ::=
		N <quote> [ <character representation>... ] <quote>
		[ { <separator> <quote> [ <character representation>... ] <quote> }... ]

<bit string literal> ::=
		B <quote> [ <bit>... ] <quote>
		[ { <separator> <quote> [ <bit>... ] <quote> }... ]

<bit> ::= 0 | 1

<hex string literal> ::=
		X <quote> [ <hexit>... ] <quote>
		[ { <separator> <quote> [ <hexit>... ] <quote> }... ]

<hexit> ::= <digit> | A | B | C | D | E | F | a | b | c | d | e | f

<binary string literal> ::=
		X <quote> [ { <hexit> <hexit> }... ] <quote>
		[ { <separator> <quote> [ { <hexit> <hexit> }... ] <quote> }... ]

<datetime literal> ::= <date literal> | <time literal> | <timestamp literal>

<date literal> ::= DATE <date string>

<date string> ::= <quote> <unquoted date string> <quote>

<unquoted date string> ::= <date value>

<date value> ::= <years value> <minus sign> <months value> <minus sign> <days value>

<years value> ::= <datetime value>

<datetime value> ::= <unsigned integer>

<months value> ::= <datetime value>

<days value> ::= <datetime value>

<time literal> ::= TIME <time string>

<time string> ::= <quote> <unquoted time string> <quote>

<unquoted time string> ::= <time value> [ <time zone interval> ]

<time value> ::= <hours value> <colon> <minutes value> <colon> <seconds value>

<hours value> ::= <datetime value>

<minutes value> ::= <datetime value>

<seconds value> ::= <seconds integer value> [ <period> [ <seconds fraction> ] ]

<seconds integer value> ::= <unsigned integer>

<seconds fraction> ::= <unsigned integer>

<time zone interval> ::= <sign> <hours value> <colon> <minutes value>

<timestamp literal> ::= TIMESTAMP <timestamp string>

<timestamp string> ::= <quote> <unquoted timestamp string> <quote>

<unquoted timestamp string> ::= <unquoted date string> <space> <unquoted time string>

<interval literal> ::= INTERVAL [ <sign> ] <interval string> <interval qualifier>

<interval string> ::= <quote> <unquoted interval string> <quote>

<unquoted interval string> ::= [ <sign> ] { <year-month literal> | <day-time literal> }

<year-month literal> ::= <years value> | [ <years value> <minus sign> ] <months value>

<day-time literal> ::= <day-time interval> | <time interval>

<day-time interval> ::=
		<days value> [ <space> <hours value> [ <colon> <minutes value> [ <colon> <seconds value> ] ] ]

<time interval> ::=
		<hours value> [ <colon> <minutes value> [ <colon> <seconds value> ] ]
	|	<minutes value> [ <colon> <seconds value> ]
	|	<seconds value>

<boolean literal> ::= TRUE | FALSE | UNKNOWN

<datetime value function> ::=
		<current date value function>
	|	<current time value function>
	|	<current timestamp value function>
	|	<current local time value function>
	|	<current local timestamp value function>

<current date value function> ::= CURRENT_DATE

<current time value function> ::=
		CURRENT_TIME [ <left paren> <time precision> <right paren> ]

<current timestamp value function> ::=
		CURRENT_TIMESTAMP [ <left paren> <timestamp precision> <right paren> ]

<current local time value function> ::=
		LOCALTIME [ <left paren> <time precision> <right paren> ]

<current local timestamp value function> ::=
		LOCALTIMESTAMP [ <left paren> <timestamp precision> <right paren> ]

<implicitly typed value specification> ::= <null specification> | <empty specification>

<null specification> ::= NULL

<empty specification> ::= ARRAY <left bracket or trigraph> <right bracket or trigraph>

--hr
--h2 Constraints
--/h2

<column constraint definition> ::=
		[ <constraint name definition> ] <column constraint> [ <constraint characteristics> ]

<constraint name definition> ::= CONSTRAINT <constraint name>

<constraint name> ::= <schema qualified name>

<column constraint> ::=
		NOT NULL
	|	<unique specification>
	|	<references specification>
	|	<check constraint definition>

<unique specification> ::= UNIQUE | PRIMARY KEY

<references specification> ::=
		REFERENCES <referenced table and columns>
		[ MATCH <match type> ] [ <referential triggered action> ]

<referenced table and columns> ::=
		<table name> [ <left paren> <reference column list> <right paren> ]

<reference column list> ::= <column name list>

<column name list> ::= <column name> [ { <comma> <column name> }... ]

<match type> ::= FULL | PARTIAL | SIMPLE

<referential triggered action> ::=
		<update rule> [ <delete rule> ]
	|	<delete rule> [ <update rule> ]

<update rule> ::= ON UPDATE <referential action>

<delete rule> ::= ON DELETE <referential action>

<check constraint definition> ::= CHECK <left paren> <search condition> <right paren>

--hr
--h2 Search Condition
--/h2

<search condition> ::= <boolean value expression>

<boolean value expression> ::=
		<boolean term>
	|	<boolean value expression> OR <boolean term>

<boolean term> ::=
		<boolean factor>
	|	<boolean term> AND <boolean factor>

<boolean factor> ::= [ NOT ] <boolean test>

<boolean test> ::= <boolean primary> [ IS [ NOT ] <truth value> ]

<boolean primary> ::=
		<predicate>
	|	<parenthesized boolean value expression>
	|	<nonparenthesized value expression primary>

<predicate> ::=
		<comparison predicate>
	|	<between predicate>
	|	<in predicate>
	|	<like predicate>
	|	<null predicate>
	|	<quantified comparison predicate>
	|	<exists predicate>
	|	<unique predicate>
	|	<match predicate>
	|	<overlaps predicate>
	|	<similar predicate>
	|	<distinct predicate>
	|	<type predicate>

<comparison predicate> ::= <row value expression> <comp op> <row value expression>

<row value expression> ::= <row value special case> | <row value constructor>

<row value special case> ::= <value specification> | <value expression>

<value specification> ::= <literal> | <general value specification>

<general value specification> ::=
		<host parameter specification>
	|	<SQL parameter reference>
	|	<SQL variable reference>
	|	<dynamic parameter specification>
	|	<embedded variable specification>
	|	CURRENT_DEFAULT_TRANSFORM_GROUP
	|	CURRENT_PATH
	|	CURRENT_ROLE
	|	CURRENT_TRANSFORM_GROUP_FOR_TYPE <user-defined type>
	|	CURRENT_USER
	|	SESSION_USER
	|	SYSTEM_USER
	|	USER
	|	VALUE

<host parameter specification> ::= <host parameter name> [ <indicator parameter> ]

<host parameter name> ::= <colon> <identifier>

<indicator parameter> ::= [ INDICATOR ] <host parameter name>

<SQL parameter reference> ::= <basic identifier chain>

<basic identifier chain> ::= <identifier chain>

<identifier chain> ::= <identifier> [ { <period> <identifier> }... ]

<value expression> ::=
		<numeric value expression>
	|	<string value expression>
	|	<datetime value expression>
	|	<interval value expression>
	|	<boolean value expression>
	|	<user-defined type value expression>
	|	<row value expression>
	|	<reference value expression>
	|	<collection value expression>

<numeric value expression> ::=
		<term>
	|	<numeric value expression> <plus sign> <term>
	|	<numeric value expression> <minus sign> <term>

<term> ::=
		<factor>
	|	<term> <asterisk> <factor>
	|	<term> <solidus> <factor>

<factor> ::= [ <sign> ] <numeric primary>

<numeric primary> ::=
		<value expression primary>
	|	<numeric value function>

<value expression primary> ::=
		<parenthesized value expression>
	|	<nonparenthesized value expression primary>

<parenthesized value expression> ::= <left paren> <value expression> <right paren>

<nonparenthesized value expression primary> ::=
		<unsigned value specification>
	|	<column reference>
	|	<set function specification>
	|	<query expression>
	|	<case expression>
	|	<cast specification>
	|	<subtype treatment>
	|	<attribute or method reference>
	|	<reference resolution>
	|	<collection value constructor>
	|	<routine invocation>
	|	<field reference>
	|	<element reference>
	|	<method invocation>
	|	<static method invocation>
	|	<new specification>

<unsigned value specification> ::= <unsigned literal> | <general value specification>

<unsigned literal> ::= <unsigned numeric literal> | <general literal>

<column reference> ::=
		<basic identifier chain>
	|	MODULE <period> <qualified identifier> <period> <column name>

<set function specification> ::=
		COUNT <left paren> <asterisk> <right paren>
	|	<general set function>
	|	<grouping operation>

<general set function> ::=
		<set function type> <left paren> [ <set quantifier> ] <value expression> <right paren>

<set function type> ::= <computational operation>

<computational operation> ::= AVG | MAX | MIN | SUM | EVERY | ANY | SOME | COUNT

<set quantifier> ::= DISTINCT | ALL

<grouping operation> ::= GROUPING <left paren> <column reference> <right paren>

--hr
--h2 Queries
--/h2

<subquery> ::= <left paren> <query expression> <right paren>

<query expression> ::= [ <with clause> ] <query expression body>

<with clause> ::= WITH [ RECURSIVE ] <with list>

<with list> ::= <with list element> [ { <comma> <with list element> }... ]

<with list element> ::=
		<query name>
		[ <left paren> <with column list> <right paren> ]
		AS <left paren> <query expression> <right paren>
		[ <search or cycle clause> ]

<query name> ::= <identifier>

<with column list> ::= <column name list>

<search or cycle clause> ::=
		<search clause>
	|	<cycle clause>
	|	<search clause> <cycle clause>

<search clause> ::=
		SEARCH <recursive search order> SET <sequence column>

<recursive search order> ::=
		DEPTH FIRST BY <sort specification list>
	|	BREADTH FIRST BY <sort specification list>

<sort specification list> ::= <sort specification> [ { <comma> <sort specification> }... ]

--p
--small
--i <sort specification> modified per ISO 9075:1999/Cor.1:2000(E)
--/i
--/small
--/p

<sort specification> ::= <sort key> [ <ordering specification> ]

<sort key> ::= <value expression>

<ordering specification> ::= ASC | DESC

<sequence column> ::= <column name>

<cycle clause> ::=
		CYCLE <cycle column list>
		SET <cycle mark column> TO <cycle mark value>
		DEFAULT <non-cycle mark value>
		USING <path column>

<cycle column list> ::= <cycle column> [ { <comma> <cycle column> }... ]

<cycle column> ::= <column name>

<cycle mark column> ::= <column name>

<cycle mark value> ::= <value expression>

<non-cycle mark value> ::= <value expression>

<path column> ::= <column name>

<query expression body> ::= <non-join query expression> | <joined table>

<non-join query expression> ::=
		<non-join query term>
	|	<query expression body> UNION  [ ALL | DISTINCT ] [ <corresponding spec> ] <query term>
	|	<query expression body> EXCEPT [ ALL | DISTINCT ] [ <corresponding spec> ] <query term>

<non-join query term> ::=
		<non-join query primary>
	|	<query term> INTERSECT [ ALL | DISTINCT ] [ <corresponding spec> ] <query primary>

<non-join query primary> ::=
		<simple table>
	|	<left paren> <non-join query expression> <right paren>

<simple table> ::= <query specification> | <table value constructor> | <explicit table>

<query specification> ::= SELECT [ <set quantifier> ] <select list> <table expression>

<select list> ::= <asterisk> | <select sublist> [ { <comma> <select sublist> }... ]

<select sublist> ::= <derived column> | <qualified asterisk>

<derived column> ::= <value expression> [ <as clause> ]

<as clause> ::= [ AS ] <column name>

<qualified asterisk> ::=
		<asterisked identifier chain> <period> <asterisk>
	|	<all fields reference>

<asterisked identifier chain> ::= <asterisked identifier> [ { <period> <asterisked identifier> }... ]

<asterisked identifier> ::= <identifier>

<all fields reference> ::= <value expression primary> <period> <asterisk>

<table expression> ::= <from clause> [ <where clause> ] [ <group by clause> ] [ <having clause> ]

<from clause> ::= FROM <table reference list>

<table reference list> ::= <table reference> [ { <comma> <table reference> }... ]

<table reference> ::= <table primary> | <joined table>

<table primary> ::=
		<table or query name> [ [ AS ] <correlation name> [ <left paren> <derived column list> <right paren> ] ]
	|	<derived table> [ AS ] <correlation name> [ <left paren> <derived column list> <right paren> ]
	|	<lateral derived table> [ AS ] <correlation name> [ <left paren> <derived column list> <right paren> ]
	|	<collection derived table> [ AS ] <correlation name> [ <left paren> <derived column list> <right paren> ]
	|	<only spec> [ [ AS ] <correlation name> [ <left paren> <derived column list> <right paren> ] ]
	|	<left paren> <joined table> <right paren>

<table or query name> ::= <table name> | <query name>

<correlation name> ::= <identifier>

<derived column list> ::= <column name list>

<derived table> ::= <table subquery>

<table subquery> ::= <subquery>

<lateral derived table> ::= LATERAL <left paren> <query expression> <right paren>

<collection derived table> ::=
		UNNEST <left paren> <collection value expression> <right paren> [ WITH ORDINALITY ]

<collection value expression> ::= <value expression primary>

<only spec> ::= ONLY <left paren> <table or query name> <right paren>

<joined table> ::= <cross join> | <qualified join> | <natural join> | <union join>

<cross join> ::= <table reference> CROSS JOIN <table primary>

<qualified join> ::= <table reference> [ <join type> ] JOIN <table reference> <join specification>

<join type> ::= INNER | <outer join type> [ OUTER ]

<outer join type> ::= LEFT | RIGHT | FULL

<join specification> ::= <join condition> | <named columns join>

<join condition> ::= ON <search condition>

<named columns join> ::= USING <left paren> <join column list> <right paren>

<join column list> ::= <column name list>

<natural join> ::= <table reference> NATURAL [ <join type> ] JOIN <table primary>

<union join> ::= <table reference> UNION JOIN <table primary>

<where clause> ::= WHERE <search condition>

--p
--small
--i Rules from <group by clause> to <grouping set> modified per ISO 9075:1999/Cor.1:2000(E)
--/i
--/small
--/p

<group by clause> ::= GROUP BY <grouping element list>

<grouping element list> ::= <grouping element> [ { <comma> <grouping element> }... ]

<grouping element> ::=
		<ordinary grouping set>
	|	<rollup list>
	|	<cube list>
	|	<grouping sets specification>
	|	<grand total>

<grouping column reference> ::= <column reference> [ <collate clause> ]

<rollup list> ::= ROLLUP <left paren> <grouping column reference list> <right paren>

<grouping column reference list> ::=
		<grouping column reference> [ { <comma> <grouping column reference> }... ]

<cube list> ::= CUBE <left paren> <grouping column reference list> <right paren>

<grouping sets specification> ::= GROUPING SETS <left paren> <grouping set list> <right paren>

<grouping set list> ::= <grouping set> [ { <comma> <grouping set> }... ]

<grouping set> ::=
		<ordinary grouping set>
	|	<rollup list>
	|	<cube list>
	|	<grouping sets specification>
	|	<grand total>

<ordinary grouping set> ::=
		<grouping column reference>
	|	<left paren> <grouping column reference list> <right paren>

<grand total> ::= <left paren> <right paren>

<concatenated grouping> ::= <grouping set> <comma> <grouping set list>

<having clause> ::= HAVING <search condition>

<table value constructor> ::= VALUES <row value expression list>

<row value expression list> ::= <row value expression> [ { <comma> <row value expression> }... ]

<explicit table> ::= TABLE <table name>

--hr
--h2 Query expression components
--/h2

<query term> ::= <non-join query term> | <joined table>

<corresponding spec> ::=
		CORRESPONDING [ BY <left paren> <corresponding column list> <right paren> ]

<corresponding column list> ::= <column name list>

<query primary> ::= <non-join query primary> | <joined table>

<case expression> ::= <case abbreviation> | <case specification>

<case abbreviation> ::=
		NULLIF <left paren> <value expression> <comma> <value expression> <right paren>
	|	COALESCE <left paren> <value expression> { <comma> <value expression> }... <right paren>

<case specification> ::= <simple case> | <searched case>

<simple case> ::= CASE <case operand> <simple when clause>... [ <else clause> ] END

<case operand> ::= <value expression>

<simple when clause> ::= WHEN <when operand> THEN <result>

<when operand> ::= <value expression>

<result> ::= <result expression> | NULL

<result expression> ::= <value expression>

<else clause> ::= ELSE <result>

<searched case> ::= CASE <searched when clause>... [ <else clause> ] END

<searched when clause> ::= WHEN <search condition> THEN <result>

<cast specification> ::= CAST <left paren> <cast operand> AS <cast target> <right paren>

<cast operand> ::= <value expression> | <implicitly typed value specification>

<cast target> ::= <domain name> | <data type>

--p
--small
--i <subtype treatment> to <target subtype> modified per ISO 9075:1999/Cor.1:2000(E)
--/i
--/small
--/p

<subtype treatment> ::=
		TREAT <left paren> <subtype operand> AS <target subtype> <right paren>

<subtype operand> ::= <value expression>

<target subtype> ::= <user-defined type>

<attribute or method reference> ::=
		<value expression primary> <dereference operator> <qualified identifier>
		[ <SQL argument list> ]

<dereference operator> ::= <right arrow>

<right arrow> ::= ->

<SQL argument list> ::=
		<left paren> [ <SQL argument> [ { <comma> <SQL argument> }... ] ] <right paren>

<SQL argument> ::= <value expression> | <generalized expression> | <target specification>

<generalized expression> ::= <value expression> AS <user-defined type>

<target specification> ::=
		<host parameter specification>
	|	<SQL parameter reference>
	|	<column reference>
	|	<SQL variable reference>
	|	<dynamic parameter specification>
	|	<embedded variable specification>

<reference resolution> ::= DEREF <left paren> <reference value expression> <right paren>

<reference value expression> ::= <value expression primary>

<collection value constructor> ::= <array value expression>

<array value expression> ::= <array value constructor> | <array concatenation> | <value expression primary>

<array value constructor> ::= <array value list constructor>

<array value list constructor> ::=
		ARRAY <left bracket or trigraph> <array element list> <right bracket or trigraph>

<array element list> ::= <array element> [ { <comma> <array element> }... ]

<array element> ::= <value expression>

<array concatenation> ::=
		<array value expression 1> <concatenation operator> <array value expression 2>

<array value expression 1> ::= <array value expression>

<concatenation operator> ::= ||

<array value expression 2> ::= <array value expression>

<routine invocation> ::= <routine name> <SQL argument list>

<routine name> ::= [ <schema name> <period> ] <qualified identifier>

<field reference> ::= <value expression primary> <period> <field name>

<element reference> ::=
		<array value expression> <left bracket or trigraph> <numeric value expression> <right bracket or trigraph>

<method invocation> ::= <direct invocation> | <generalized invocation>

<direct invocation> ::=
		<value expression primary> <period> <method name> [ <SQL argument list> ]

<method name> ::= <identifier>

<generalized invocation> ::=
		<left paren> <value expression primary>
		AS <data type> <right paren> <period> <method name>
		[ <SQL argument list> ]

--p
--small
--i It is not remotely clear why this was needed in this grammar.
--/i
--i <constructor method selection> added per ISO 9075:1999/Cor.1:2000(E)
--/i
--/small
--/p

<constructor method selection> ::= <routine invocation>

<static method invocation> ::=
		<user-defined type> <double colon> <method name> [ <SQL argument list> ]

--p
--small
--i
Note that <double colon> must be a pair of characters with no
intervening space, not a pair of colon symbols separated by arbitrary
white space.
Normally, the lexical analyzer would return <double colon> as a symbol.
--/i
--/small
--/p

<double colon> ::= <colon> <colon>

<new specification> ::= NEW <routine invocation>

<numeric value function> ::=
		<position expression>
	|	<extract expression>
	|	<length expression>
	|	<cardinality expression>
	|	<absolute value expression>
	|	<modulus expression>

<position expression> ::= <string position expression> | <blob position expression>

<string position expression> ::=
		POSITION <left paren> <string value expression> IN <string value expression> <right paren>

<string value expression> ::= <character value expression> | <bit value expression> | <blob value expression>

<character value expression> ::= <concatenation> | <character factor>

<concatenation> ::= <character value expression> <concatenation operator> <character factor>

<character factor> ::= <character primary> [ <collate clause> ]

<character primary> ::= <value expression primary> | <string value function>

<string value function> ::= <character value function> | <blob value function> | <bit value function>

<character value function> ::=
		<character substring function>
	|	<regular expression substring function>
	|	<fold>
	|	<form-of-use conversion>
	|	<character translation>
	|	<trim function>
	|	<character overlay function>
	|	<specific type method>

<character substring function> ::=
		SUBSTRING <left paren> <character value expression> FROM <start position>
		[ FOR <string length> ] <right paren>

<start position> ::= <numeric value expression>

<string length> ::= <numeric value expression>

--p
--small
--i <regular expression substring function> modified per ISO 9075:1999/Cor.1:2000(E)
--/i
--/small
--/p

<regular expression substring function> ::=
		SUBSTRING <left paren> <character value expression> SIMILAR
		<character value expression> ESCAPE <escape character> <right paren>

<escape character> ::= <character value expression>

<fold> ::= { UPPER | LOWER } <left paren> <character value expression> <right paren>

<form-of-use conversion> ::=
		CONVERT <left paren> <character value expression>
		USING <form-of-use conversion name> <right paren>

<form-of-use conversion name> ::= <schema qualified name>

<character translation> ::=
		TRANSLATE <left paren> <character value expression>
		USING <translation name> <right paren>

<translation name> ::= <schema qualified name>

<trim function> ::= TRIM <left paren> <trim operands> <right paren>

<trim operands> ::= [ [ <trim specification> ] [ <trim character> ] FROM ] <trim source>

<trim specification> ::= LEADING | TRAILING | BOTH

<trim character> ::= <character value expression>

<trim source> ::= <character value expression>

<character overlay function> ::=
		OVERLAY <left paren> <character value expression> PLACING <character value expression>
		FROM <start position> [ FOR <string length> ] <right paren>

<specific type method> ::= <user-defined type value expression> <period> SPECIFICTYPE

<user-defined type value expression> ::= <value expression primary>

<blob value function> ::= <blob substring function> | <blob trim function> | <blob overlay function>

<blob substring function> ::=
		SUBSTRING <left paren> <blob value expression> FROM <start position>
		[ FOR <string length> ] <right paren>

<blob value expression> ::= <blob concatenation> | <blob factor>

<blob concatenation> ::= <blob value expression> <concatenation operator> <blob factor>

<blob factor> ::= <blob primary>

<blob primary> ::= <value expression primary> | <string value function>

<blob trim function> ::= TRIM <left paren> <blob trim operands> <right paren>

<blob trim operands> ::= [ [ <trim specification> ] [ <trim octet> ] FROM ] <blob trim source>

<trim octet> ::= <blob value expression>

<blob trim source> ::= <blob value expression>

<blob overlay function> ::=
		OVERLAY <left paren> <blob value expression> PLACING <blob value expression>
		FROM <start position> [ FOR <string length> ] <right paren>

<bit value function> ::= <bit substring function>

<bit substring function> ::=
		SUBSTRING <left paren> <bit value expression> FROM <start position>
		[ FOR <string length> ] <right paren>

<bit value expression> ::= <bit concatenation> | <bit factor>

<bit concatenation> ::= <bit value expression> <concatenation operator> <bit factor>

<bit factor> ::= <bit primary>

<bit primary> ::= <value expression primary> | <string value function>

<blob position expression> ::=
		POSITION <left paren> <blob value expression> IN <blob value expression> <right paren>

<extract expression> ::=
		EXTRACT <left paren> <extract field> FROM <extract source> <right paren>

<extract field> ::= <primary datetime field> | <time zone field>

<primary datetime field> ::= <non-second primary datetime field> | SECOND

<time zone field> ::= TIMEZONE_HOUR | TIMEZONE_MINUTE

<extract source> ::= <datetime value expression> | <interval value expression>

<datetime value expression> ::=
		<datetime term>
	|	<interval value expression> <plus sign> <datetime term>
	|	<datetime value expression> <plus sign> <interval term>
	|	<datetime value expression> <minus sign> <interval term>

<interval term> ::=
		<interval factor>
	|	<interval term 2> <asterisk> <factor>
	|	<interval term 2> <solidus> <factor>
	|	<term> <asterisk> <interval factor>

<interval factor> ::= [ <sign> ] <interval primary>

--@@ This definition of interval primary is superceded by the version from 9075-5 SQL/Bindings
--@@ <interval primary> ::= <value expression primary> | <interval value function>

<interval value function> ::= <interval absolute value function>

<interval absolute value function> ::= ABS <left paren> <interval value expression> <right paren>

<interval value expression> ::=
		<interval term>
	|	<interval value expression 1> <plus sign> <interval term 1>
	|	<interval value expression 1> <minus sign> <interval term 1>
	|	<left paren> <datetime value expression> <minus sign>
		<datetime term> <right paren> <interval qualifier>

<interval value expression 1> ::= <interval value expression>

<interval term 1> ::= <interval term>

<datetime term> ::= <datetime factor>

<datetime factor> ::= <datetime primary> [ <time zone> ]

<datetime primary> ::= <value expression primary> | <datetime value function>

<time zone> ::= AT <time zone specifier>

<time zone specifier> ::= LOCAL | TIME ZONE <interval primary>

<interval term 2> ::= <interval term>

<length expression> ::= <char length expression> | <octet length expression> | <bit length expression>

<char length expression> ::=
		{ CHAR_LENGTH | CHARACTER_LENGTH } <left paren> <string value expression> <right paren>

<octet length expression> ::=
		OCTET_LENGTH <left paren> <string value expression> <right paren>

<bit length expression> ::=
		BIT_LENGTH <left paren> <string value expression> <right paren>

<cardinality expression> ::=
		CARDINALITY <left paren> <collection value expression> <right paren>

<absolute value expression> ::=
		ABS <left paren> <numeric value expression> <right paren>

<modulus expression> ::=
		MOD <left paren> <numeric value expression dividend> <comma> <numeric value expression divisor><right paren>

<numeric value expression dividend> ::= <numeric value expression>

<numeric value expression divisor> ::= <numeric value expression>

<row value constructor> ::=
		<row value constructor element>
	|	[ ROW ] <left paren> <row value constructor element list> <right paren>
	|	<row subquery>

<row value constructor element> ::= <value expression>

<row value constructor element list> ::=
		<row value constructor element> [ { <comma> <row value constructor element> }... ]

<row subquery> ::= <subquery>

<comp op> ::=
		<equals operator>
	|	<not equals operator>
	|	<less than operator>
	|	<greater than operator>
	|	<less than or equals operator>
	|	<greater than or equals operator>

--p
--small
--i
The <not equals>, <less than or equals operator> and <greater than or
equals operator> should be handled by the lexical analyzer as token
symbols, not by the grammar.
As usual, spaces are not allowed between the two characters.
--/i
--/small
--/p

<not equals operator> ::= <less than operator> <greater than operator>

<less than or equals operator> ::= <less than operator> <equals operator>

<greater than or equals operator> ::= <greater than operator> <equals operator>

<between predicate> ::=
		<row value expression> [ NOT ] BETWEEN [ ASYMMETRIC | SYMMETRIC ]
		<row value expression> AND <row value expression>

<in predicate> ::= <row value expression> [ NOT ] IN <in predicate value>

<in predicate value> ::= <table subquery> | <left paren> <in value list> <right paren>

--p
--small
--i Previously, the expression in curly braces was not in square brackets.
--/i
--i Consequently, every <in value list> had to have at least two items in it.
--/i
--/small
--/p

<in value list> ::= <row value expression> [ { <comma> <row value expression> }... ]

<like predicate> ::= <character like predicate> | <octet like predicate>

<character like predicate> ::=
		<character match value> [ NOT ] LIKE <character pattern> [ ESCAPE <escape character> ]

<character match value> ::= <character value expression>

<character pattern> ::= <character value expression>

<octet like predicate> ::=
		<octet match value> [ NOT ] LIKE <octet pattern> [ ESCAPE <escape octet> ]

<octet match value> ::= <blob value expression>

<octet pattern> ::= <blob value expression>

<escape octet> ::= <blob value expression>

<null predicate> ::= <row value expression> IS [ NOT ] NULL

<quantified comparison predicate> ::= <row value expression> <comp op> <quantifier> <table subquery>

<quantifier> ::= <all> | <some>

<all> ::= ALL

<some> ::= SOME | ANY

<exists predicate> ::= EXISTS <table subquery>

<unique predicate> ::= UNIQUE <table subquery>

<match predicate> ::=
		<row value expression> MATCH [ UNIQUE ] [ SIMPLE | PARTIAL | FULL ]
		<table subquery>

<overlaps predicate> ::= <row value expression 1> OVERLAPS <row value expression 2>

<row value expression 1> ::= <row value expression>

<row value expression 2> ::= <row value expression>

<similar predicate> ::=
		<character match value> [ NOT ] SIMILAR TO <similar pattern> [ ESCAPE <escape character> ]

<similar pattern> ::= <character value expression>

--hr
--h2 Regular Expressions for SIMILAR TO
--/h2

--p
These regular expressions are not referenced anywhere else in the
document, but define the structure that the <character value expression>
used in <similar pattern> must have.
Structurally, these regular expressions are similar to 'egrep'
expressions, except they use underscore in place of dot, and percent is
equivalent to dot star in 'egrep'.
The other omission is the use of caret (aka circumflex) to mark the
start of the matched text and dollar to mark the end of the matched
text.
--/p

<regular expression> ::=
		<regular term>
	|	<regular expression> <vertical bar> <regular term>

<regular term> ::=
		<regular factor>
	|	<regular term> <regular factor>

<regular factor> ::=
		<regular primary>
	|	<regular primary> <asterisk>
	|	<regular primary> <plus sign>

<regular primary> ::=
		<character specifier>
	|	<percent>
	|	<regular character set>
	|	<left paren> <regular expression> <right paren>

<character specifier> ::= <non-escaped character> | <escaped character>

<non-escaped character> ::= !! (See the Syntax Rules)

<escaped character> ::= !! (See the Syntax Rules)

<regular character set> ::=
		<underscore>
	|	<left bracket> <character enumeration>... <right bracket>
	|	<left bracket> <circumflex> <character enumeration>... <right bracket>
	|	<left bracket> <colon> <regular character set identifier> <colon> <right bracket>

<character enumeration> ::=
		<character specifier>
	|	<character specifier> <minus sign> <character specifier>

<regular character set identifier> ::= <identifier>

--hr

<distinct predicate> ::=
		<row value expression 3> IS DISTINCT FROM <row value expression 4>

<row value expression 3> ::= <row value expression>

<row value expression 4> ::= <row value expression>

<type predicate> ::=
		<user-defined type value expression> IS [ NOT ] OF <left paren> <type list> <right paren>

<type list> ::=
		<user-defined type specification> [ { <comma> <user-defined type specification> }... ]

<user-defined type specification> ::=
		<inclusive user-defined type specification>
	|	<exclusive user-defined type specification>

<inclusive user-defined type specification> ::= <user-defined type>

<exclusive user-defined type specification> ::= ONLY <user-defined type>

<parenthesized boolean value expression> ::= <left paren> <boolean value expression> <right paren>

<truth value> ::= TRUE | FALSE | UNKNOWN

--hr
--h2 More about constraints
--/h2

<constraint characteristics> ::=
		<constraint check time> [ [ NOT ] DEFERRABLE ]
	|	[ NOT ] DEFERRABLE [ <constraint check time> ]

<constraint check time> ::= INITIALLY DEFERRED | INITIALLY IMMEDIATE

<table constraint definition> ::=
		[ <constraint name definition> ] <table constraint> [ <constraint characteristics> ]

<table constraint> ::= <unique constraint definition> | <referential constraint definition> | <check constraint definition>

--p
--small
--i
The standard documents UNIQUE ( VALUE ) but there is no explanation of
why that is different from the UNIQUE <left paren> VALUE <right paren>
used here.
--/i
--/small
--/p

<unique constraint definition> ::=
		<unique specification> <left paren> <unique column list> <right paren>
	|	UNIQUE <left paren> VALUE <right paren>

<unique column list> ::= <column name list>

<referential constraint definition> ::=
		FOREIGN KEY <left paren> <referencing columns> <right paren> <references specification>

<referencing columns> ::= <reference column list>

<like clause> ::= LIKE <table name>

<self-referencing column specification> ::=
		REF IS <self-referencing column name> <reference generation>

<self-referencing column name> ::= <column name>

<reference generation> ::= SYSTEM GENERATED | USER GENERATED | DERIVED

<column options> ::= <column name> WITH OPTIONS <column option list>

<column option list> ::=
		[ <scope clause> ] [ <default clause> ] [ <column constraint definition>... ] [ <collate clause> ]

<table commit action> ::= PRESERVE | DELETE

--hr
--h2 Module contents
--/h2

<module contents> ::=
		<declare cursor>
	|	<externally-invoked procedure>
	|	<dynamic declare cursor>

<declare cursor> ::=
		DECLARE <cursor name> [ <cursor sensitivity> ] [ <cursor scrollability> ] CURSOR
		[ <cursor holdability> ] [ <cursor returnability> ] FOR <cursor specification>

<cursor name> ::= <local qualified name>

<local qualified name> ::= [ <local qualifier> <period> ] <qualified identifier>

<local qualifier> ::= MODULE

<cursor sensitivity> ::= SENSITIVE | INSENSITIVE | ASENSITIVE

<cursor scrollability> ::= SCROLL | NO SCROLL

<cursor holdability> ::= WITH HOLD | WITHOUT HOLD

<cursor returnability> ::= WITH RETURN | WITHOUT RETURN

<cursor specification> ::= <query expression> [ <order by clause> ] [ <updatability clause> ]

<order by clause> ::= ORDER BY <sort specification list>

<updatability clause> ::= FOR { READ ONLY | UPDATE [ OF <column name list> ] }

--hr
--h2 SQL Procedures
--/h2

<externally-invoked procedure> ::=
		PROCEDURE <procedure name>
		<host parameter declaration setup> <semicolon>
		<SQL procedure statement> <semicolon>

<procedure name> ::= <identifier>

--p
--small
--i <host parameter declaration setup> modified per ISO 9075:1999/Cor.1:2000(E)
--/i
--/small
--/p

<host parameter declaration setup> ::= <host parameter declaration list>

<host parameter declaration list> ::=
		<left paren> <host parameter declaration>
		[ { <comma> <host parameter declaration> }... ] <right paren>

<host parameter declaration> ::=
		<host parameter name> <host parameter data type>
	|	<status parameter>

<host parameter data type> ::= <data type> [ <locator indication> ]

<locator indication> ::= AS LOCATOR

<status parameter> ::= SQLSTATE

<SQL procedure statement> ::= <SQL executable statement>

<SQL executable statement> ::=
		<SQL schema statement>
	|	<SQL data statement>
	|	<SQL control statement>
	|	<SQL transaction statement>
	|	<SQL connection statement>
	|	<SQL session statement>
	|	<SQL diagnostics statement>
	|	<SQL dynamic statement>

--hr
--h2 SQL Schema Definition Statements
--/h2

<SQL schema statement> ::=
		<SQL schema definition statement>
	|	<SQL schema manipulation statement>

--p
--small
--i <SQL schema definition statement> modified per ISO 9075:1999/Cor.1:2000(E)
--/i
--/small
--/p

<SQL schema definition statement> ::=
		<schema definition>
	|	<table definition>
	|	<view definition>
	|	<SQL-invoked routine>
	|	<grant statement>
	|	<role definition>
	|	<domain definition>
	|	<character set definition>
	|	<collation definition>
	|	<translation definition>
	|	<assertion definition>
	|	<trigger definition>
	|	<user-defined type definition>
	|	<user-defined cast definition>
	|	<user-defined ordering definition>
	|	<transform definition>
	|	<SQL-server module definition>

<schema definition> ::=
		CREATE SCHEMA <schema name clause> [ <schema character set or path> ]
		[ <schema element>... ]

<schema name clause> ::=
		<schema name>
	|	AUTHORIZATION <schema authorization identifier>
	|	<schema name> AUTHORIZATION <schema authorization identifier>

<schema authorization identifier> ::= <authorization identifier>

<schema character set or path> ::=
		<schema character set specification>
	|	<schema path specification>
	|	<schema character set specification> <schema path specification>
	|	<schema path specification> <schema character set specification>

<schema character set specification> ::=
		DEFAULT CHARACTER SET <character set specification>

<schema path specification> ::= <path specification>

--p
--small
--i <schema element> modified per ISO 9075:1999/Cor.1:2000(E)
--/i
--/small
--/p

<schema element> ::=
		<table definition>
	|	<view definition>
	|	<domain definition>
	|	<character set definition>
	|	<collation definition>
	|	<translation definition>
	|	<assertion definition>
	|	<trigger definition>
	|	<user-defined type definition>
	|	<schema routine>
	|	<grant statement>
	|	<role definition>
	|	<user-defined cast definition>
	|	<user-defined ordering definition>
	|	<transform definition>

<table definition> ::=
		CREATE [ <table scope> ] TABLE <table name> <table contents source>
		[ ON COMMIT <table commit action> ROWS ]

<table scope> ::= <global or local> TEMPORARY

<global or local> ::= GLOBAL | LOCAL

<table contents source> ::=
		<table element list>
	|	OF <user-defined type> [ <subtable clause> ] [ <table element list> ]

<subtable clause> ::= UNDER <supertable clause>

<supertable clause> ::= <supertable name>

<supertable name> ::= <table name>

<view definition> ::=
		CREATE [ RECURSIVE ] VIEW <table name> <view specification>
		AS <query expression> [ WITH [ <levels clause> ] CHECK OPTION ]

<view specification> ::= <regular view specification> | <referenceable view specification>

<regular view specification> ::= [ <left paren> <view column list> <right paren> ]

<view column list> ::= <column name list>

<referenceable view specification> ::= OF <user-defined type> [ <subview clause> ] [ <view element list> ]

<subview clause> ::= UNDER <table name>

<view element list> ::=
		<left paren> [ <self-referencing column specification> <comma> ]
		<view element> [ { <comma> <view element> }... ] <right paren>

<view element> ::= <view column option>

<view column option> ::= <column name> WITH OPTIONS <scope clause>

<levels clause> ::= CASCADED | LOCAL

<domain definition> ::=
		CREATE DOMAIN <domain name> [ AS ] <data type>
		[ <default clause> ] [ <domain constraint>... ] [ <collate clause> ]

<domain constraint> ::=
		[ <constraint name definition> ] <check constraint definition> [ <constraint characteristics> ]

<character set definition> ::=
		CREATE CHARACTER SET <character set name>
		[ AS ] <character set source> [ <collate clause> ]

<character set source> ::= GET <character set specification>

<collation definition> ::=
		CREATE COLLATION <collation name> FOR <character set specification>
		FROM <existing collation name> [ <pad characteristic> ]

<existing collation name> ::= <collation name>

<pad characteristic> ::= NO PAD | PAD SPACE

<translation definition> ::=
		CREATE TRANSLATION <translation name> FOR <source character set specification>
		TO <target character set specification> FROM <translation source>

<source character set specification> ::= <character set specification>

<target character set specification> ::= <character set specification>

<translation source> ::= <existing translation name> | <translation routine>

<existing translation name> ::= <translation name>

<translation routine> ::= <specific routine designator>

--p
--small
--i <specific routine designator> modified per ISO 9075:1999/Cor.1:2000(E)
--/i
--/small
--/p

<specific routine designator> ::=
		SPECIFIC <routine type> <specific name>
	|	<routine type> <member name> [ FOR <user-defined type name> ]

--p
--small
--i <specific routine designator> modified per ISO 9075:1999/Cor.1:2000(E)
--/i
--/small
--/p

<routine type> ::=
		ROUTINE | FUNCTION | PROCEDURE
	|	[ INSTANCE | STATIC | CONSTRUCTOR ] METHOD

<specific name> ::= <schema qualified name>

<member name> ::= <schema qualified routine name> [ <data type list> ]

<schema qualified routine name> ::= <schema qualified name>

<data type list> ::=
		<left paren> [ <data type> [ { <comma> <data type> }... ] ] <right paren>

<assertion definition> ::=
		CREATE ASSERTION <constraint name>
		CHECK <left paren> <search condition> <right paren> [ <constraint characteristics> ]

<trigger definition> ::=
		CREATE TRIGGER <trigger name> <trigger action time> <trigger event>
		ON <table name> [ REFERENCING <old or new values alias list> ] <triggered action>

<trigger name> ::= <schema qualified name>

<trigger action time> ::= BEFORE | AFTER

<trigger event> ::= INSERT | DELETE | UPDATE [ OF <trigger column list> ]

<trigger column list> ::= <column name list>

<old or new values alias list> ::= <old or new values alias>...

<old or new values alias> ::=
		OLD [ ROW ] [ AS ] <old values correlation name>
	|	NEW [ ROW ] [ AS ] <new values correlation name>
	|	OLD TABLE [ AS ] <old values table alias>
	|	NEW TABLE [ AS ] <new values table alias>

<old values correlation name> ::= <correlation name>

<new values correlation name> ::= <correlation name>

<old values table alias> ::= <identifier>

<new values table alias> ::= <identifier>

<triggered action> ::=
		[ FOR EACH { ROW | STATEMENT } ]
		[ WHEN <left paren> <search condition> <right paren> ] <triggered SQL statement>

--@@ This definition of triggered SQL statement is superceded by the
--@@ variant from 9075-4 (SQL/PSM).
--@@ Consequently, this one is commented out.
--@@ <triggered SQL statement> ::=
--@@ 		<SQL procedure statement>
--@@ 	|	BEGIN ATOMIC { <SQL procedure statement> <semicolon> }...  END

<user-defined type definition> ::= CREATE TYPE <user-defined type body>

--p
--small
--i <user-defined type body> modified per ISO 9075:1999/Cor.1:2000(E)
--/i
--/small
--/p

<user-defined type body> ::=
		<user-defined type name> [ <subtype clause> ] [ AS <representation> ]
		[ <instantiable clause> ] <finality> [ <reference type specification> ]
		[ <ref cast option>] [ <cast option> ] [ <method specification list> ]

<subtype clause> ::= UNDER <supertype name>

<supertype name> ::= <user-defined type>

<representation> ::= <predefined type> | <member list>

<member list> ::= <left paren> <member> [ { <comma> <member> }... ] <right paren>

<member> ::= <attribute definition>

<attribute definition> ::=
		<attribute name> <data type> [ <reference scope check> ] [ <attribute default> ]
		[ <collate clause> ]

<attribute name> ::= <identifier>

<attribute default> ::= <default clause>

<instantiable clause> ::= INSTANTIABLE | NOT INSTANTIABLE

<finality> ::= FINAL | NOT FINAL

<reference type specification> ::= <user-defined representation> | <derived representation> | <system-generated representation>

<user-defined representation> ::= REF USING <predefined type>

<ref cast option> ::= [ <cast to ref> ] [ <cast to type> ]

<cast to ref> ::=
		CAST <left paren> SOURCE AS REF <right paren> WITH <cast to ref identifier>

<cast to ref identifier> ::= <identifier>

<cast to type> ::=
		CAST <left paren> REF AS SOURCE <right paren> WITH <cast to type identifier>

<cast to type identifier> ::= <identifier>

<derived representation> ::= REF FROM <list of attributes>

<list of attributes> ::=
		<left paren> <attribute name> [ { <comma> <attribute name> }...] <right paren>

<system-generated representation> ::= REF IS SYSTEM GENERATED

<cast option> ::= [ <cast to distinct> ] [ <cast to source> ]

<cast to distinct> ::=
		CAST <left paren> SOURCE AS DISTINCT <right paren> WITH <cast to distinct identifier>

<cast to distinct identifier> ::= <identifier>

<cast to source> ::=
		CAST <left paren> DISTINCT AS SOURCE <right paren> WITH <cast to source identifier>

<cast to source identifier> ::= <identifier>

<method specification list> ::= <method specification> [ { <comma> <method specification> }... ]

<method specification> ::= <original method specification> | <overriding method specification>

<original method specification> ::=
		<partial method specification> [ SELF AS RESULT ] [ SELF AS LOCATOR ]
		[ <method characteristics> ]

--p
--small
--i <partial method specification> modified per ISO 9075:1999/Cor.1:2000(E)
--/i
--/small
--/p

<partial method specification> ::=
		[ INSTANCE | STATIC | CONSTRUCTOR ] METHOD <method name>
		<SQL parameter declaration list> <returns clause> [ SPECIFIC <specific method name> ]

<SQL parameter declaration list> ::=
		<left paren> [ <SQL parameter declaration>
		[ { <comma> <SQL parameter declaration> }... ] ] <right paren>

<SQL parameter declaration> ::=
		[ <parameter mode> ] [ <SQL parameter name> ] <parameter type> [ RESULT ]

<parameter mode> ::= IN | OUT | INOUT

<SQL parameter name> ::= <identifier>

<parameter type> ::= <data type> [ <locator indication> ]

<returns clause> ::= RETURNS <returns data type> [ <result cast> ]

<returns data type> ::= <data type> [ <locator indication> ]

<result cast> ::= CAST FROM <result cast from type>

<result cast from type> ::= <data type> [ <locator indication> ]

--p
--small
--i <specific method name> added per ISO 9075:1999/Cor.1:2000(E)
--/i
--/small
--/p

<specific method name> ::= [ <schema name> <period> ] <qualified identifier>

<method characteristics> ::= <method characteristic>...

--p
--small
--i <method characteristic> modified per ISO 9075:1999/Cor.1:2000(E)
--/i
--/small
--/p

<method characteristic> ::=
		<language clause>
	|	<parameter style clause>
	|	<deterministic characteristic>
	|	<SQL-data access indication>
	|	<null-call clause>

<parameter style clause> ::= PARAMETER STYLE <parameter style>

<parameter style> ::= SQL | GENERAL

<deterministic characteristic> ::= DETERMINISTIC | NOT DETERMINISTIC

<SQL-data access indication> ::=
		NO SQL
	|	CONTAINS SQL
	|	READS SQL DATA
	|	MODIFIES SQL DATA

<null-call clause> ::=
		RETURNS NULL ON NULL INPUT
	|	CALLED ON NULL INPUT

<overriding method specification> ::= OVERRIDING <partial method specification>

<schema routine> ::= <schema procedure> | <schema function>

<schema procedure> ::= CREATE <SQL-invoked procedure>

<SQL-invoked procedure> ::=
		PROCEDURE <schema qualified routine name>
		<SQL parameter declaration list> <routine characteristics> <routine body>

<routine characteristics> ::= [ <routine characteristic>... ]

--p
--small
--i <routine characteristic> modified per ISO 9075:1999/Cor.1:2000(E)
--/i
--/small
--/p

<routine characteristic> ::=
		<language clause>
	|	<parameter style clause>
	|	SPECIFIC <specific name>
	|	<deterministic characteristic>
	|	<SQL-data access indication>
	|	<null-call clause>
	|	<dynamic result sets characteristic>

<dynamic result sets characteristic> ::=
		DYNAMIC RESULT SETS <maximum dynamic result sets>

<maximum dynamic result sets> ::= <unsigned integer>

<routine body> ::= <SQL routine body> | <external body reference>

<SQL routine body> ::= <SQL procedure statement>

--p
--small
--i <external body reference> modified per ISO 9075:1999/Cor.1:2000(E)
--/i
--/small
--/p

<external body reference> ::=
		EXTERNAL [ NAME <external routine name> ] [ <parameter style clause> ]
		[ <transform group specification> ] [ <external security clause> ]

<external routine name> ::= <identifier> | <character string literal>

<external security clause> ::=
		EXTERNAL SECURITY DEFINER
	|	EXTERNAL SECURITY INVOKER
	|	EXTERNAL SECURITY IMPLEMENTATION DEFINED

<schema function> ::= CREATE <SQL-invoked function>

<SQL-invoked function> ::=
		{ <function specification> | <method specification designator> } <routine body>

<function specification> ::=
		FUNCTION <schema qualified routine name> <SQL parameter declaration list>
		<returns clause> <routine characteristics> [ <dispatch clause> ]

<dispatch clause> ::= STATIC DISPATCH

--p
--small
--i <method specification designator> modified per ISO 9075:1999/Cor.1:2000(E)
--/i
--/small
--/p

<method specification designator> ::=
		[ INSTANCE | STATIC | CONSTRUCTOR ] METHOD <method name>
		<SQL parameter declaration list> [ <returns clause> ] FOR <user-defined type name>

<grant statement> ::= <grant privilege statement> | <grant role statement>

<grant privilege statement> ::=
		GRANT <privileges> TO <grantee> [ { <comma> <grantee> }... ]
		[ WITH HIERARCHY OPTION ] [ WITH GRANT OPTION ] [ GRANTED BY <grantor> ]

<privileges> ::= <object privileges> ON <object name>

<object privileges> ::= ALL PRIVILEGES | <action> [ { <comma> <action> }... ]

<action> ::=
		SELECT
	|	SELECT <left paren> <privilege column list> <right paren>
	|	SELECT <left paren> <privilege method list> <right paren>
	|	DELETE
	|	INSERT [ <left paren> <privilege column list> <right paren> ]
	|	UPDATE [ <left paren> <privilege column list> <right paren> ]
	|	REFERENCES [ <left paren> <privilege column list> <right paren> ]
	|	USAGE
	|	TRIGGER
	|	UNDER
	|	EXECUTE

<privilege column list> ::= <column name list>

<privilege method list> ::=
		<specific routine designator> [ { <comma> <specific routine designator> }... ]

<object name> ::=
		[ TABLE ] <table name>
	|	DOMAIN <domain name>
	|	COLLATION <collation name>
	|	CHARACTER SET <character set name>
	|	MODULE <module name>
	|	TRANSLATION <translation name>
	|	TYPE <user-defined type name>
	|	<specific routine designator>

<grantee> ::= PUBLIC | <authorization identifier>

<grantor> ::= CURRENT_USER | CURRENT_ROLE

<grant role statement> ::=
		GRANT <role granted> [ { <comma> <role granted> }... ] TO <grantee> [ { <comma> <grantee> }... ]
		[ WITH ADMIN OPTION ] [ GRANTED BY <grantor> ]

<role granted> ::= <role name>

<role definition> ::= CREATE ROLE <role name> [ WITH ADMIN <grantor> ]

<SQL-invoked routine> ::= <schema routine> | <module routine>

<user-defined cast definition> ::=
		CREATE CAST <left paren> <source data type> AS <target data type> <right paren>
		WITH <cast function> [ AS ASSIGNMENT ]

<source data type> ::= <data type>

<cast function> ::= <specific routine designator>

--p
--small
--i <user-defined ordering specification> modified per ISO 9075:1999/Cor.1:2000(E)
--/i
--/small
--/p

<user-defined ordering definition> ::=
		CREATE ORDERING FOR <user-defined type name> <ordering form>

<ordering form> ::= <equals ordering form> | <full ordering form>

<equals ordering form> ::= EQUALS ONLY BY <ordering category>

<ordering category> ::= <relative category> | <map category> | <state category>

<relative category> ::= RELATIVE WITH <relative function specification>

<relative function specification> ::= <specific routine designator>

<map category> ::= MAP WITH <map function specification>

<map function specification> ::= <specific routine designator>

<state category> ::= STATE [ <specific name> ]

<full ordering form> ::= ORDER FULL BY <ordering category>

--p
--small
--i <transform definition> modified per ISO 9075:1999/Cor.1:2000(E)
--/i
--/small
--/p

<transform definition> ::=
		CREATE { TRANSFORM | TRANSFORMS } FOR <user-defined type name>
		<transform group>...

<transform group> ::= <group name> <left paren> <transform element list> <right paren>

<transform element list> ::= <transform element> [ <comma> <transform element> ]

<transform element> ::= <to sql> | <from sql>

<to sql> ::= TO SQL WITH <to sql function>

<to sql function> ::= <specific routine designator>

<from sql> ::= FROM SQL WITH <from sql function>

<from sql function> ::= <specific routine designator>

--hr
--h2 SQL Schema Manipulation Statements
--/h2

<SQL schema manipulation statement> ::=
		<drop schema statement>
	|	<alter table statement>
	|	<drop table statement>
	|	<drop view statement>
	|	<alter routine statement>
	|	<drop routine statement>
	|	<drop user-defined cast statement>
	|	<revoke statement>
	|	<drop role statement>
	|	<alter domain statement>
	|	<drop domain statement>
	|	<drop character set statement>
	|	<drop collation statement>
	|	<drop translation statement>
	|	<drop assertion statement>
	|	<drop trigger statement>
	|	<alter type statement>
	|	<drop data type statement>
	|	<drop user-defined ordering statement>
	|	<drop transform statement>
	|	<drop module statement>

<drop schema statement> ::= DROP SCHEMA <schema name> <drop behavior>

<drop behavior> ::= CASCADE | RESTRICT

<alter table statement> ::= ALTER TABLE <table name> <alter table action>

<alter table action> ::=
		<add column definition>
	|	<alter column definition>
	|	<drop column definition>
	|	<add table constraint definition>
	|	<drop table constraint definition>

<add column definition> ::= ADD [ COLUMN ] <column definition>

<alter column definition> ::= ALTER [ COLUMN ] <column name> <alter column action>

<alter column action> ::=
		<set column default clause>
	|	<drop column default clause>
	|	<add column scope clause>
	|	<drop column scope clause>

<set column default clause> ::= SET <default clause>

<drop column default clause> ::= DROP DEFAULT

<add column scope clause> ::= ADD <scope clause>

<drop column scope clause> ::= DROP SCOPE <drop behavior>

<drop column definition> ::= DROP [ COLUMN ] <column name> <drop behavior>

<add table constraint definition> ::= ADD <table constraint definition>

<drop table constraint definition> ::= DROP CONSTRAINT <constraint name> <drop behavior>

<drop table statement> ::= DROP TABLE <table name> <drop behavior>

<drop view statement> ::= DROP VIEW <table name> <drop behavior>

<alter routine statement> ::=
		ALTER <specific routine designator> <alter routine characteristics> <alter routine behaviour>

<alter routine characteristics> ::= <alter routine characteristic>...

<alter routine characteristic> ::=
		<language clause>
	|	<parameter style clause>
	|	<SQL-data access indication>
	|	<null-call clause>
	|	<dynamic result sets characteristic>
	|	NAME <external routine name>

<alter routine behaviour> ::= RESTRICT

<drop routine statement> ::= DROP <specific routine designator> <drop behavior>

<drop user-defined cast statement> ::=
		DROP CAST <left paren> <source data type> AS <target data type> <right paren>
		<drop behavior>

<revoke statement> ::= <revoke privilege statement> | <revoke role statement>

<revoke privilege statement> ::=
		REVOKE [ <revoke option extension> ] <privileges> FROM <grantee>
		[ { <comma> <grantee> }... ] [ GRANTED BY <grantor> ] <drop behavior>

<revoke option extension> ::= GRANT OPTION FOR | HIERARCHY OPTION FOR

<revoke role statement> ::=
		REVOKE [ ADMIN OPTION FOR ] <role revoked> [ { <comma> <role revoked> }... ]
		FROM <grantee> [ { <comma> <grantee> }... ] [ GRANTED BY <grantor> ] <drop behavior>

<role revoked> ::= <role name>

<drop role statement> ::= DROP ROLE <role name>

<alter domain statement> ::= ALTER DOMAIN <domain name> <alter domain action>

<alter domain action> ::=
		<set domain default clause>
	|	<drop domain default clause>
	|	<add domain constraint definition>
	|	<drop domain constraint definition>

<set domain default clause> ::= SET <default clause>

<drop domain default clause> ::= DROP DEFAULT

<add domain constraint definition> ::= ADD <domain constraint>

<drop domain constraint definition> ::= DROP CONSTRAINT <constraint name>

<drop domain statement> ::= DROP DOMAIN <domain name> <drop behavior>

<drop character set statement> ::= DROP CHARACTER SET <character set name>

<drop collation statement> ::= DROP COLLATION <collation name> <drop behavior>

<drop translation statement> ::= DROP TRANSLATION <translation name>

<drop assertion statement> ::= DROP ASSERTION <constraint name>

<drop trigger statement> ::= DROP TRIGGER <trigger name>

<alter type statement> ::= ALTER TYPE <user-defined type name> <alter type action>

<alter type action> ::=
		<add attribute definition>
	|	<drop attribute definition>
	|	<add original method specification>
	|	<add overriding method specification>
	|	<drop method specification>

<add attribute definition> ::= ADD ATTRIBUTE <attribute definition>

<drop attribute definition> ::= DROP ATTRIBUTE <attribute name> RESTRICT

<add original method specification> ::= ADD <original method specification>

<add overriding method specification> ::= ADD <overriding method specification>

--p
--small
--i <drop method specification> modified per ISO 9075:1999/Cor.1:2000(E)
--/i
--/small
--/p

<drop method specification> ::= DROP <specific method specification designator> RESTRICT

--p
--small
--i <specific method specification designator> added per ISO 9075:1999/Cor.1:2000(E)
--/i
--/small
--/p

<specific method specification designator> ::=
		SPECIFIC METHOD <specific method name>
	|	[ INSTANCE | STATIC | CONSTRUCTOR ] METHOD <method name> [ <data type list> ]

<drop data type statement> ::= DROP TYPE <user-defined type name> <drop behavior>

--p
--small
--i <drop user-defined ordering statement> modified per ISO 9075:1999/Cor.1:2000(E)
--/i
--/small
--/p

<drop user-defined ordering statement> ::=
		DROP ORDERING FOR <user-defined type name> <drop behavior>

--p
--small
--i <drop transform statement> modified per ISO 9075:1999/Cor.1:2000(E)
--/i
--/small
--/p

<drop transform statement> ::=
		DROP { TRANSFORM | TRANSFORMS } <transforms to be dropped>
		FOR <user-defined type name> <drop behavior>

<transforms to be dropped> ::= ALL | <transform group element>

<transform group element> ::= <group name>

--hr
--h2 SQL Data Manipulation Statements
--/h2

<SQL data statement> ::=
		<open statement>
	|	<fetch statement>
	|	<close statement>
	|	<select statement: single row>
	|	<free locator statement>
	|	<hold locator statement>
	|	<SQL data change statement>

<open statement> ::= OPEN <cursor name>

<fetch statement> ::=
		FETCH [ [ <fetch orientation> ] FROM ] <cursor name> INTO <fetch target list>

<fetch orientation> ::=
		NEXT | PRIOR | FIRST | LAST
	|	{ ABSOLUTE | RELATIVE } <simple value specification>

<simple value specification> ::=
		<literal>
	|	<host parameter name>
	|	<SQL parameter reference>
	|	<SQL variable reference>
	|	<embedded variable name>

<fetch target list> ::= <target specification> [ { <comma> <target specification> }... ]

<close statement> ::= CLOSE <cursor name>

<select statement: single row> ::=
		SELECT [ <set quantifier> ] <select list> INTO <select target list> <table expression>

<select target list> ::= <target specification> [ { <comma> <target specification> }... ]

<free locator statement> ::=
		FREE LOCATOR <locator reference> [ { <comma> <locator reference> }... ]

<locator reference> ::= <host parameter name> | <embedded variable name>

<hold locator statement> ::=
		HOLD LOCATOR <locator reference> [ { <comma> <locator reference> }... ]

<SQL data change statement> ::=
		<delete statement: positioned>
	|	<delete statement: searched>
	|	<insert statement>
	|	<update statement: positioned>
	|	<update statement: searched>

<delete statement: positioned> ::=
		DELETE FROM <target table> WHERE CURRENT OF <cursor name>

--p
--small
--i <target table> modified per ISO 9075:1999/Cor.1:2000(E)
--/i
--/small
--/p

<target table> ::=
		<table name>
	|	[ ONLY ] <left paren> <table name> <right paren>

<delete statement: searched> ::=
		DELETE FROM <target table> [ WHERE <search condition> ]

<insert statement> ::=
		INSERT INTO <insertion target> <insert columns and source>

<insertion target> ::= <table name>

<insert columns and source> ::= <from subquery> | <from constructor> | <from default>

<from subquery> ::=
		[ <left paren> <insert column list> <right paren> ] [ <override clause> ] <query expression>

<insert column list> ::= <column name list>

<from constructor> ::=
		[ <left paren> <insert column list> <right paren> ] [ <override clause> ]
		<contextually typed table value constructor>

<override clause> ::= OVERRIDING USER VALUE | OVERRIDING SYSTEM VALUE

<contextually typed table value constructor> ::=
		VALUES <contextually typed row value expression list>

<contextually typed row value expression list> ::=
		<contextually typed row value expression>
		[ { <comma> <contextually typed row value expression> }... ]

<contextually typed row value expression> ::=
		<row value special case>
	|	<contextually typed row value constructor>

<contextually typed row value constructor> ::=
		<contextually typed row value constructor element>
	|	[ ROW ] <left paren> <contextually typed row value constructor element list> <right paren>

<contextually typed row value constructor element> ::=
		<value expression> | <contextually typed value specification>

<contextually typed value specification> ::=
		<implicitly typed value specification> | <default specification>

<default specification> ::= DEFAULT

<contextually typed row value constructor element list> ::=
		<contextually typed row value constructor element>
		[ { <comma> <contextually typed row value constructor element> }...  ]

<from default> ::= DEFAULT VALUES

<update statement: positioned> ::=
		UPDATE <target table> SET <set clause list> WHERE CURRENT OF <cursor name>

<set clause list> ::= <set clause> [ { <comma> <set clause> }... ]

<set clause> ::=
		<update target> <equals operator> <update source>
	|	<mutated set clause> <equals operator> <update source>

--p
--small
--i <update target> modified per ISO 9075:1999/Cor.1:2000(E)
--/i
--/small
--/p

<update target> ::=
		<object column>
	|	<object column> <left bracket or trigraph> <simple value specification> <right bracket or trigraph>

<object column> ::= <column name>

<update source> ::= <value expression> | <contextually typed value specification>

<mutated set clause> ::= <mutated target> <period> <method name>

<mutated target> ::= <object column> | <mutated set clause>

<update statement: searched> ::=
		UPDATE <target table> SET <set clause list> [ WHERE <search condition> ]

--hr
--h2 SQL Control Statements
--/h2

<SQL control statement> ::=
		<call statement>
	|	<return statement>
	|	<assignment statement>
	|	<compound statement>
	|	<case statement>
	|	<if statement>
	|	<iterate statement>
	|	<leave statement>
	|	<loop statement>
	|	<while statement>
	|	<repeat statement>
	|	<for statement>

<call statement> ::= CALL <routine invocation>

<return statement> ::= RETURN <return value>

<return value> ::= <value expression> | NULL

--hr
--h2 Transaction Management
--/h2

<SQL transaction statement> ::=
		<start transaction statement>
	|	<set transaction statement>
	|	<set constraints mode statement>
	|	<savepoint statement>
	|	<release savepoint statement>
	|	<commit statement>
	|	<rollback statement>

<start transaction statement> ::=
		START TRANSACTION <transaction mode> [ { <comma> <transaction mode> }...]

<transaction mode> ::= <isolation level> | <transaction access mode> | <diagnostics size>

<isolation level> ::= ISOLATION LEVEL <level of isolation>

<level of isolation> ::=
		READ UNCOMMITTED
	|	READ COMMITTED
	|	REPEATABLE READ
	|	SERIALIZABLE

<transaction access mode> ::= READ ONLY | READ WRITE

<diagnostics size> ::= DIAGNOSTICS SIZE <number of conditions>

<number of conditions> ::= <simple value specification>

<set transaction statement> ::= SET [ LOCAL ] <transaction characteristics>

<transaction characteristics> ::=
		TRANSACTION <transaction mode> [ { <comma> <transaction mode> }... ]

<set constraints mode statement> ::=
		SET CONSTRAINTS <constraint name list> { DEFERRED | IMMEDIATE }

<constraint name list> ::= ALL | <constraint name> [ { <comma> <constraint name> }... ]

<savepoint statement> ::= SAVEPOINT <savepoint specifier>

--p
--small
--i <savepoint specifier> modified per ISO 9075:1999/Cor.1:2000(E)
--/i
--/small
--/p

<savepoint specifier> ::= <savepoint name>

<savepoint name> ::= <identifier>

<simple target specification> ::=
		<host parameter specification>
	|	<SQL parameter reference>
	|	<column reference>
	|	<SQL variable reference>
	|	<embedded variable name>

<release savepoint statement> ::= RELEASE SAVEPOINT <savepoint specifier>

<commit statement> ::= COMMIT [ WORK ] [ AND [ NO ] CHAIN ]

<rollback statement> ::= ROLLBACK [ WORK ] [ AND [ NO ]  CHAIN ] [ <savepoint clause> ]

<savepoint clause> ::= TO SAVEPOINT <savepoint specifier>

--hr
--h2 Connection Management
--/h2

<SQL connection statement> ::= <connect statement> | <set connection statement> | <disconnect statement>

<connect statement> ::= CONNECT TO <connection target>

<connection target> ::=
		<SQL-server name> [ AS <connection name> ] [ USER <connection user name> ]
	|	DEFAULT

<SQL-server name> ::= <simple value specification>

<connection name> ::= <simple value specification>

<connection user name> ::= <simple value specification>

<set connection statement> ::= SET CONNECTION <connection object>

<connection object> ::= DEFAULT | <connection name>

<disconnect statement> ::= DISCONNECT <disconnect object>

<disconnect object> ::= <connection object> | ALL | CURRENT

--hr
--h2 Session Attributes
--/h2

<SQL session statement> ::=
		<set session user identifier statement>
	|	<set role statement>
	|	<set local time zone statement>
	|	<set session characteristics statement>
	|	<set catalog statement>
	|	<set schema statement>
	|	<set names statement>
	|	<set path statement>
	|	<set transform group statement>

<set session user identifier statement> ::=
		SET SESSION AUTHORIZATION <value specification>

<set role statement> ::= SET ROLE <role specification>

<role specification> ::= <value specification> | NONE

<set local time zone statement> ::= SET TIME ZONE <set time zone value>

<set time zone value> ::= <interval value expression> | LOCAL

<set session characteristics statement> ::=
		SET SESSION CHARACTERISTICS AS <session characteristic list>

<session characteristic list> ::= <session characteristic> [ { <comma> <session characteristic> }... ]

<session characteristic> ::= <transaction characteristics>

<SQL diagnostics statement> ::= <get diagnostics statement> | <signal statement> | <resignal statement>

<get diagnostics statement> ::= GET DIAGNOSTICS <SQL diagnostics information>

<SQL diagnostics information> ::= <statement information> | <condition information>

<statement information> ::=
		<statement information item> [ { <comma> <statement information item> }... ]

<statement information item> ::=
		<simple target specification> <equals operator> <statement information item name>

<statement information item name> ::=
		NUMBER
	|	MORE
	|	COMMAND_FUNCTION
	|	COMMAND_FUNCTION_CODE
	|	DYNAMIC_FUNCTION
	|	DYNAMIC_FUNCTION_CODE
	|	ROW_COUNT
	|	TRANSACTIONS_COMMITTED
	|	TRANSACTIONS_ROLLED_BACK
	|	TRANSACTION_ACTIVE

<condition information> ::=
		EXCEPTION <condition number>
		<condition information item> [ { <comma> <condition information item> }... ]

<condition number> ::= <simple value specification>

<condition information item> ::=
		<simple target specification> <equals operator> <condition information item name>

<condition information item name> ::=
		CATALOG_NAME
	|	CLASS_ORIGIN
	|	COLUMN_NAME
	|	CONDITION_IDENTIFIER
	|	CONDITION_NUMBER
	|	CONNECTION_NAME
	|	CONSTRAINT_CATALOG
	|	CONSTRAINT_NAME
	|	CONSTRAINT_SCHEMA
	|	CURSOR_NAME
	|	MESSAGE_LENGTH
	|	MESSAGE_OCTET_LENGTH
	|	MESSAGE_TEXT
	|	PARAMETER_MODE
	|	PARAMETER_NAME
	|	PARAMETER_ORDINAL_POSITION
	|	RETURNED_SQLSTATE
	|	ROUTINE_CATALOG
	|	ROUTINE_NAME
	|	ROUTINE_SCHEMA
	|	SCHEMA_NAME
	|	SERVER_NAME
	|	SPECIFIC_NAME
	|	SUBCLASS_ORIGIN
	|	TABLE_NAME
	|	TRIGGER_CATALOG
	|	TRIGGER_NAME
	|	TRIGGER_SCHEMA

<dereference operation> ::=
		<reference value expression> <dereference operator> <attribute name>

<method reference> ::=
		<value expression primary> <dereference operator> <method name> <SQL argument list>

<method selection> ::= <routine invocation>

--p
--small
--i <new invocation> modified per ISO 9075:1999/Cor.1:2000(E)
--/i
--/small
--/p

<new invocation> ::= <method invocation> | <routine invocation>

<static method selection> ::= <routine invocation>

<token> ::= <nondelimiter token> | <delimiter token>

<nondelimiter token> ::=
		<regular identifier>
	|	<key word>
	|	<unsigned numeric literal>
	|	<national character string literal>
	|	<bit string literal>
	|	<hex string literal>
	|	<large object length token>
	|	<multiplier>

<key word> ::= <reserved word> | <non-reserved word>

--p
--small
--i <reserved word> modified per ISO 9075:1999/Cor.1:2000(E)
--/i
--/small
--/p

<reserved word> ::=
		ABSOLUTE | ACTION | ADD | AFTER | ALL | ALLOCATE | ALTER | AND | ANY | ARE
	|	ARRAY | AS | ASC | ASSERTION | AT | AUTHORIZATION
	|	BEFORE | BEGIN | BETWEEN | BINARY | BIT | BLOB | BOOLEAN | BOTH
	|	BREADTH | BY
	|	CALL | CASCADE | CASCADED | CASE | CAST | CATALOG | CHAR | CHARACTER
	|	CHECK | CLOB | CLOSE | COLLATE | COLLATION | COLUMN | COMMIT
	|	CONDITION | CONNECT | CONNECTION | CONSTRAINT | CONSTRAINTS
	|	CONSTRUCTOR | CONTINUE | CORRESPONDING | CREATE | CROSS | CUBE
	|	CURRENT | CURRENT_DATE | CURRENT_DEFAULT_TRANSFORM_GROUP
	|	CURRENT_TRANSFORM_GROUP_FOR_TYPE | CURRENT_PATH | CURRENT_ROLE
	|	CURRENT_TIME | CURRENT_TIMESTAMP | CURRENT_USER | CURSOR | CYCLE
	|	DATA | DATE | DAY | DEALLOCATE | DEC | DECIMAL | DECLARE | DEFAULT
	|	DEFERRABLE | DEFERRED | DELETE | DEPTH | DEREF | DESC
	|	DESCRIBE | DESCRIPTOR | DETERMINISTIC
	|	DIAGNOSTICS | DISCONNECT | DISTINCT | DO | DOMAIN | DOUBLE
	|	DROP | DYNAMIC
	|	EACH | ELSE | ELSEIF | END | END-EXEC | EQUALS | ESCAPE | EXCEPT
	|	EXCEPTION | EXEC | EXECUTE | EXISTS | EXIT | EXTERNAL
	|	FALSE | FETCH | FIRST | FLOAT | FOR | FOREIGN | FOUND | FROM | FREE
	|	FULL | FUNCTION
	|	GENERAL | GET | GLOBAL | GO | GOTO | GRANT | GROUP | GROUPING
	|	HANDLE | HAVING | HOLD | HOUR
	|	IDENTITY | IF | IMMEDIATE | IN | INDICATOR
	|	INITIALLY | INNER | INOUT | INPUT | INSERT | INT | INTEGER
	|	INTERSECT | INTERVAL | INTO | IS | ISOLATION
	|	JOIN
	|	KEY
	|	LANGUAGE | LARGE | LAST | LATERAL | LEADING | LEAVE | LEFT
	|	LEVEL | LIKE | LOCAL | LOCALTIME | LOCALTIMESTAMP | LOCATOR | LOOP
	|	MAP | MATCH | METHOD | MINUTE | MODIFIES | MODULE | MONTH
	|	NAMES | NATIONAL | NATURAL | NCHAR | NCLOB | NESTING | NEW | NEXT
	|	NO | NONE | NOT | NULL | NUMERIC
	|	OBJECT | OF | OLD | ON | ONLY | OPEN | OPTION
	|	OR | ORDER | ORDINALITY | OUT | OUTER | OUTPUT | OVERLAPS
	|	PAD | PARAMETER | PARTIAL | PATH | PRECISION
	|	PREPARE | PRESERVE | PRIMARY | PRIOR | PRIVILEGES | PROCEDURE | PUBLIC
	|	READ | READS | REAL | RECURSIVE | REDO | REF | REFERENCES | REFERENCING
	|	RELATIVE | RELEASE | REPEAT | RESIGNAL | RESTRICT | RESULT | RETURN
	|	RETURNS | REVOKE | RIGHT | ROLE | ROLLBACK | ROLLUP | ROUTINE
	|	ROW | ROWS
	|	SAVEPOINT | SCHEMA | SCROLL | SEARCH | SECOND | SECTION | SELECT
	|	SESSION | SESSION_USER | SET | SETS | SIGNAL | SIMILAR | SIZE
	|	SMALLINT | SOME | SPACE | SPECIFIC | SPECIFICTYPE | SQL | SQLEXCEPTION
	|	SQLSTATE | SQLWARNING | START | STATE | STATIC | SYSTEM_USER
	|	TABLE | TEMPORARY | THEN | TIME | TIMESTAMP
	|	TIMEZONE_HOUR | TIMEZONE_MINUTE | TO | TRAILING | TRANSACTION
	|	TRANSLATION | TREAT | TRIGGER | TRUE
	|	UNDER | UNDO | UNION | UNIQUE | UNKNOWN | UNNEST | UNTIL | UPDATE
	|	USAGE | USER | USING
	|	VALUE | VALUES | VARCHAR | VARYING | VIEW
	|	WHEN | WHENEVER | WHERE | WHILE | WITH | WITHOUT | WORK | WRITE
	|	YEAR
	|	ZONE

--p
--small
--i <non-reserved word> modified per ISO 9075:1999/Cor.1:2000(E)
--/i
--/small
--/p

<non-reserved word> ::=
		ABS | ADA | ADMIN | ASENSITIVE | ASSIGNMENT | ASYMMETRIC | ATOMIC
	|	ATTRIBUTE | AVG
	|	BIT_LENGTH
	|	C | CALLED | CARDINALITY | CATALOG_NAME | CHAIN | CHAR_LENGTH
	|	CHARACTERISTICS | CHARACTER_LENGTH | CHARACTER_SET_CATALOG
	|	CHARACTER_SET_NAME | CHARACTER_SET_SCHEMA | CHECKED | CLASS_ORIGIN
	|	COALESCE | COBOL | COLLATION_CATALOG | COLLATION_NAME | COLLATION_SCHEMA
	|	COLUMN_NAME | COMMAND_FUNCTION | COMMAND_FUNCTION_CODE | COMMITTED
	|	CONDITION_IDENTIFIER | CONDITION_NUMBER | CONNECTION_NAME
	|	CONSTRAINT_CATALOG | CONSTRAINT_NAME | CONSTRAINT_SCHEMA | CONTAINS
	|	CONVERT | COUNT | CURSOR_NAME
	|	DATETIME_INTERVAL_CODE | DATETIME_INTERVAL_PRECISION | DEFINED
	|	DEFINER | DEGREE | DERIVED | DISPATCH
	|	EVERY | EXTRACT
	|	FINAL | FORTRAN
	|	G | GENERATED | GRANTED
	|	HIERARCHY
	|	IMPLEMENTATION | INSENSITIVE | INSTANCE | INSTANTIABLE | INVOKER
	|	K | KEY_MEMBER | KEY_TYPE
	|	LENGTH | LOWER
	|	M | MAX | MIN | MESSAGE_LENGTH | MESSAGE_OCTET_LENGTH | MESSAGE_TEXT
	|	MOD | MORE | MUMPS
	|	NAME | NULLABLE | NUMBER | NULLIF
	|	OCTET_LENGTH | ORDERING | OPTIONS | OVERLAY | OVERRIDING
	|	PASCAL | PARAMETER_MODE | PARAMETER_NAME
	|	PARAMETER_ORDINAL_POSITION | PARAMETER_SPECIFIC_CATALOG
	|	PARAMETER_SPECIFIC_NAME | PARAMETER_SPECIFIC_SCHEMA | PLI | POSITION
	|	REPEATABLE | RETURNED_CARDINALITY | RETURNED_LENGTH
	|	RETURNED_OCTET_LENGTH | RETURNED_SQLSTATE | ROUTINE_CATALOG
	|	ROUTINE_NAME | ROUTINE_SCHEMA | ROW_COUNT
	|	SCALE | SCHEMA_NAME | SCOPE | SECURITY | SELF | SENSITIVE | SERIALIZABLE
	|	SERVER_NAME | SIMPLE | SOURCE | SPECIFIC_NAME | STATEMENT | STRUCTURE
	|	STYLE | SUBCLASS_ORIGIN | SUBSTRING | SUM | SYMMETRIC | SYSTEM
	|	TABLE_NAME | TOP_LEVEL_COUNT | TRANSACTIONS_COMMITTED
	|	TRANSACTIONS_ROLLED_BACK | TRANSACTION_ACTIVE | TRANSFORM
	|	TRANSFORMS | TRANSLATE | TRIGGER_CATALOG | TRIGGER_SCHEMA
	|	TRIGGER_NAME | TRIM | TYPE
	|	UNCOMMITTED | UNNAMED | UPPER

<delimiter token> ::=
		<character string literal>
	|	<date string>
	|	<time string>
	|	<timestamp string>
	|	<interval string>
	|	<delimited identifier>
	|	<SQL special character>
	|	<not equals operator>
	|	<greater than or equals operator>
	|	<less than or equals operator>
	|	<concatenation operator>
	|	<right arrow>
	|	<left bracket trigraph>
	|	<right bracket trigraph>
	|	<double colon>
	|	<double period>

<CLI routine> ::= <CLI routine name> <CLI parameter list> [ <CLI returns clause> ]

<CLI routine name> ::= <CLI name prefix><CLI generic name>

<CLI name prefix> ::= <CLI by-reference prefix> | <CLI by-value prefix>

<CLI by-reference prefix> ::= SQLR

<CLI by-value prefix> ::= SQL

<CLI generic name> ::=
		AllocConnect | AllocEnv | AllocHandle | AllocStmt
	|	BindCol | BindParameter
	|	Cancel | CloseCursor | ColAttribute | ColumnPrivileges | Columns | Connect | CopyDesc
	|	DataSources | DescribeCol | Disconnect
	|	EndTran | Error | ExecDirect | Execute
	|	Fetch | FetchScroll | ForeignKeys | FreeConnect | FreeEnv | FreeHandle | FreeStmt
	|	GetConnectAttr | GetCursorName | GetData | GetDescField | GetDescRec | GetDiagField
	|	GetDiagRec | GetEnvAttr | GetFeatureInfo | GetFunctions | GetInfo | GetLength
	|	GetParamData | GetPosition | GetSessionInfo | GetStmtAttr | GetSubString | GetTypeInfo
	|	MoreResults
	|	NextResult | NumResultCols
	|	ParamData | Prepare | PrimaryKeys | PutData
	|	RowCount
	|	SetConnectAttr | SetCursorName | SetDescField | SetDescRec | SetEnvAttr | SetStmtAttr
	|	SpecialColumns | StartTran
	|	TablePrivileges | Tables
	|	<implementation-defined CLI generic name>

<implementation-defined CLI generic name> ::= !! (See the Syntax Rules)

<CLI parameter list> ::=
		<left paren> <CLI parameter declaration> [ { <comma> <CLI parameter declaration> }... ] <right paren>

<CLI parameter declaration> ::=
		<CLI parameter name> <CLI parameter mode> <CLI parameter data type>

<CLI parameter name> ::= !! (See the individual CLI routine definitions)

<CLI parameter mode> ::= IN | OUT | DEFIN | DEFOUT | DEF

<CLI parameter data type> ::=
		INTEGER
	|	SMALLINT
	|	ANY
	|	CHARACTER <left paren> <length> <right paren>

<CLI returns clause> ::= RETURNS SMALLINT

<assignment statement> ::=
		SET <assignment target> <equals operator> <assignment source>

<assignment target> ::= <target specification> | <modified field reference> | <mutator reference>

<SQL variable reference> ::= <basic identifier chain>

<modified field reference> ::= <modified field target> <period> <field name>

<modified field target> ::=
	<target specification> | <left paren> <target specification> <right paren> | <modified field reference>

<mutator reference> ::= <mutated target specification> <period> <method name>

<mutated target specification> ::=
		<target specification> | <left paren> <target specification> <right paren> | <mutator reference>

<assignment source> ::= <value expression> | <contextually typed source>

<contextually typed source> ::=
		<implicitly typed value specification> | <contextually typed row value expression>

<compound statement> ::=
		[ <beginning label> <colon> ] BEGIN [ [ NOT ] ATOMIC ]
		[ <local declaration list> ] [ <local cursor declaration list> ] [ <local handler declaration list> ]
		[ <SQL statement list> ] END [ <ending label> ]

<beginning label> ::= <statement label>

<statement label> ::= <identifier>

<local declaration list> ::= <terminated local declaration>...

<terminated local declaration> ::= <local declaration> <semicolon>

<local declaration> ::= <SQL variable declaration> | <condition declaration>

<SQL variable declaration> ::=
		DECLARE <SQL variable name list> <data type> [ <default clause> ]

<SQL variable name list> ::=
		<SQL variable name> [ { <comma> <SQL variable name> }... ]

<SQL variable name> ::= <identifier>

<condition declaration> ::=
		DECLARE <condition name> CONDITION [ FOR <sqlstate value> ]

<condition name> ::= <identifier>

<sqlstate value> ::= SQLSTATE [ VALUE ] <character string literal>

<local cursor declaration list> ::= <terminated local cursor declaration>...

<terminated local cursor declaration> ::= <declare cursor> <semicolon>

<local handler declaration list> ::= <terminated local handler declaration>...

<terminated local handler declaration> ::= <handler declaration> <semicolon>

<handler declaration> ::=
		DECLARE <handler type> HANDLER FOR <condition value list> <handler action>

<handler type> ::= CONTINUE | EXIT | UNDO

<condition value list> ::= <condition value> [ { <comma> <condition value> }... ]

<condition value> ::=
		<sqlstate value> | <condition name> | SQLEXCEPTION | SQLWARNING | NOT FOUND

<handler action> ::= <SQL procedure statement>

<SQL statement list> ::= <terminated SQL statement>...

<terminated SQL statement> ::= <SQL procedure statement> <semicolon>

<ending label> ::= <statement label>

<case statement> ::= <simple case statement> | <searched case statement>

<simple case statement> ::=
		CASE <simple case operand 1> <simple case statement when clause>...  [ <case statement else clause> ] END CASE

<simple case operand 1> ::= <value expression>

<simple case statement when clause> ::=
		WHEN <simple case operand 2> THEN <SQL statement list>

<simple case operand 2> ::= <value expression>

<case statement else clause> ::= ELSE <SQL statement list>

<searched case statement> ::=
		CASE <searched case statement when clause>...  [ <case statement else clause> ] END CASE

<searched case statement when clause> ::=
		WHEN <search condition> THEN <SQL statement list>

<if statement> ::=
		IF <search condition> <if statement then clause>
		[ <if statement elseif clause>... ] [ <if statement else clause> ]
		END IF

<if statement then clause> ::= THEN <SQL statement list>

<if statement elseif clause> ::= ELSEIF <search condition> THEN <SQL statement list>

<if statement else clause> ::= ELSE <SQL statement list>

<iterate statement> ::= ITERATE <statement label>

<leave statement> ::= LEAVE <statement label>

<loop statement> ::=
		[ <beginning label> <colon> ] LOOP <SQL statement list> END LOOP [ <ending label> ]

<while statement> ::=
		[ <beginning label> <colon> ] WHILE <search condition> DO <SQL statement list> END WHILE [ <ending label> ]

<repeat statement> ::=
		[ <beginning label> <colon> ] REPEAT <SQL statement list> UNTIL <search condition> END REPEAT [ <ending label> ]

<for statement> ::=
		[ <beginning label> <colon> ] FOR <for loop variable name> AS
		[ <cursor name> [ <cursor sensitivity> ] CURSOR FOR ] <cursor specification>
		DO <SQL statement list> END FOR [ <ending label> ]

<for loop variable name> ::= <identifier>

<signal statement> ::= SIGNAL <signal value> [ <set signal information> ]

<signal value> ::= <condition name> | <sqlstate value>

<set signal information> ::= SET <signal information item list>

<signal information item list> ::=
		<signal information item> [ { <comma> <signal information item> }... ]

<signal information item> ::=
		<condition information item name> <equals operator> <simple value specification>

<resignal statement> ::= RESIGNAL [ <signal value> ] [ <set signal information> ]

<SQL-server module definition> ::=
		CREATE MODULE <SQL-server module name> [ <SQL-server module character set specification> ]
		[ <SQL-server module schema clause> ] [ <SQL-server module path specification> ]
		[ <temporary table declaration> ]
		<SQL-server module contents>...
		END MODULE

<SQL-server module name> ::= <schema qualified name>

<SQL-server module character set specification> ::= NAMES ARE <character set specification>

<SQL-server module schema clause> ::= SCHEMA <default schema name>

<default schema name> ::= <schema name>

<SQL-server module path specification> ::= <path specification>

<SQL-server module contents> ::= <SQL-invoked routine> <semicolon>

<module routine> ::= <module procedure> | <module function>

<module procedure> ::= [ DECLARE ] <SQL-invoked procedure>

<module function> ::= [ DECLARE ] <SQL-invoked function>

<drop module statement> ::= DROP MODULE <SQL-server module name> <drop behavior>

--p
--small
--i
This definition of <triggered SQL statement> is from 9075-4 (SQL/PSM)
and is documented with:
--/i
NOTE 13 – The preceding production defining <triggered SQL statement> completely supersedes the
definition in ISO/IEC 9075-2.
--/small
--/p

<triggered SQL statement> ::= <SQL procedure statement>

--hr
--h2 Dynamic SQL
--/h2

--p
Much, if not all, of the following material comes from ISO/IEC 9075-5:1999, SQL/Bindings.
--/p

<SQL dynamic statement> ::=
		<system descriptor statement>
	|	<prepare statement>
	|	<deallocate prepared statement>
	|	<describe statement>
	|	<execute statement>
	|	<execute immediate statement>
	|	<SQL dynamic data statement>

<system descriptor statement> ::=
		<allocate descriptor statement>
	|	<deallocate descriptor statement>
	|	<set descriptor statement>
	|	<get descriptor statement>

<allocate descriptor statement> ::=
		ALLOCATE [ SQL ] DESCRIPTOR <descriptor name> [ WITH MAX <occurrences> ]

<descriptor name> ::= [ <scope option> ] <simple value specification>

<scope option> ::= GLOBAL | LOCAL

<embedded variable name> ::= <colon><host identifier>

<host identifier> ::=
		<Ada host identifier>
	|	<C host identifier>
	|	<COBOL host identifier>
	|	<Fortran host identifier>
	|	<MUMPS host identifier>
	|	<Pascal host identifier>
	|	<PL/I host identifier>

<Ada host identifier> ::= !! (See the Syntax Rules.)

<C host identifier> ::= !! (See the Syntax Rules.)

<COBOL host identifier> ::= !! (See the Syntax Rules.)

<Fortran host identifier> ::= !! (See the Syntax Rules.)

<MUMPS host identifier> ::= !! (See the Syntax Rules.)

<Pascal host identifier> ::= !! (See the Syntax Rules.)

<PL/I host identifier> ::= !! (See the Syntax Rules.)

<occurrences> ::= <simple value specification>

<deallocate descriptor statement> ::= DEALLOCATE [ SQL ] DESCRIPTOR <descriptor name>

<set descriptor statement> ::= SET [ SQL ] DESCRIPTOR <descriptor name> <set descriptor information>

<set descriptor information> ::=
		<set header information> [ { <comma> <set header information> }... ]
	|	VALUE <item number> <set item information> [ { <comma> <set item information> }... ]

<set header information> ::=
		<header item name> <equals operator> <simple value specification 1>

<header item name> ::=
		COUNT | KEY_TYPE | DYNAMIC_FUNCTION | DYNAMIC_FUNCTION_CODE
	|	TOP_LEVEL_COUNT

<simple value specification 1> ::= <simple value specification>

<item number> ::= <simple value specification>

<set item information> ::=
		<descriptor item name> <equals operator> <simple value specification 2>

<descriptor item name> ::=
		CARDINALITY
	|	CHARACTER_SET_CATALOG
	|	CHARACTER_SET_NAME
	|	CHARACTER_SET_SCHEMA
	|	COLLATION_CATALOG
	|	COLLATION_NAME
	|	COLLATION_SCHEMA
	|	DATA
	|	DATETIME_INTERVAL_CODE
	|	DATETIME_INTERVAL_PRECISION
	|	DEGREE
	|	INDICATOR
	|	KEY_MEMBER
	|	LENGTH
	|	LEVEL
	|	NAME
	|	NULLABLE
	|	OCTET_LENGTH
	|	PARAMETER_MODE
	|	PARAMETER_ORDINAL_POSITION
	|	PARAMETER_SPECIFIC_CATALOG
	|	PARAMETER_SPECIFIC_NAME
	|	PARAMETER_SPECIFIC_SCHEMA
	|	PRECISION
	|	RETURNED_CARDINALITY
	|	RETURNED_LENGTH
	|	RETURNED_OCTET_LENGTH
	|	SCALE
	|	SCOPE_CATALOG
	|	SCOPE_NAME
	|	SCOPE_SCHEMA
	|	TYPE
	|	UNNAMED
	|	USER_DEFINED_TYPE_CATALOG
	|	USER_DEFINED_TYPE_NAME
	|	USER_DEFINED_TYPE_SCHEMA

<simple value specification 2> ::= <simple value specification>

<get descriptor statement> ::=
		GET [ SQL ] DESCRIPTOR <descriptor name> <get descriptor information>

<get descriptor information> ::=
		<get header information> [ { <comma> <get header information> }... ]
	|	VALUE <item number> <get item information> [ { <comma> <get item information> }... ]

<get header information> ::=
		<simple target specification 1> <equals operator> <header item name>

<simple target specification 1> ::= <simple target specification>

<get item information> ::=
		<simple target specification 2> <equals operator> <descriptor item name>

<simple target specification 2> ::= <simple target specification>

<prepare statement> ::=
		PREPARE <SQL statement name> FROM <SQL statement variable>

<SQL statement name> ::=
		<statement name>
	|	<extended statement name>

<statement name> ::= <identifier>

<extended statement name> ::= [ <scope option> ] <simple value specification>

<SQL statement variable> ::= <simple value specification>

<deallocate prepared statement> ::= DEALLOCATE PREPARE <SQL statement name>

<describe statement> ::= <describe input statement> | <describe output statement>

<describe input statement> ::=
		DESCRIBE INPUT <SQL statement name> <using descriptor> [ <nesting option> ]

<using descriptor> ::= USING [ SQL ] DESCRIPTOR <descriptor name>

<nesting option> ::= WITH NESTING | WITHOUT NESTING

<describe output statement> ::=
		DESCRIBE [ OUTPUT ] <described object> <using descriptor> [ <nesting option> ]

<described object> ::=
		<SQL statement name> | CURSOR <extended cursor name> STRUCTURE

<extended cursor name> ::= [ <scope option> ] <simple value specification>

<execute statement> ::=
		EXECUTE <SQL statement name> [ <result using clause> ] [ <parameter using clause> ]

<result using clause> ::= <output using clause>

<output using clause> ::= <into arguments> | <into descriptor>

<into arguments> ::= INTO <into argument> [ { <comma> <into argument> }... ]

<into argument> ::= <target specification>

<dynamic parameter specification> ::= <question mark>

<embedded variable specification> ::= <embedded variable name> [ <indicator variable> ]

<indicator variable> ::= [ INDICATOR ] <embedded variable name>

<into descriptor> ::= INTO [ SQL ] DESCRIPTOR <descriptor name>

<parameter using clause> ::= <input using clause>

<input using clause> ::= <using arguments> | <using input descriptor>

<using arguments> ::= USING <using argument> [ { <comma> <using argument> }... ]

<using argument> ::= <general value specification>

<using input descriptor> ::= <using descriptor>

<execute immediate statement> ::= EXECUTE IMMEDIATE <SQL statement variable>

<SQL dynamic data statement> ::=
		<allocate cursor statement>
	|	<dynamic open statement>
	|	<dynamic fetch statement>
	|	<dynamic close statement>
	|	<dynamic delete statement: positioned>
	|	<dynamic update statement: positioned>

<allocate cursor statement> ::= ALLOCATE <extended cursor name> <cursor intent>

<cursor intent> ::= <statement cursor> | <result set cursor>

<statement cursor> ::=
		[ <cursor sensitivity> ] [ SCROLL ] CURSOR [ WITH HOLD ] [ WITH RETURN ]
		FOR <extended statement name>

<result set cursor> ::=
		FOR PROCEDURE <specific routine designator>

<dynamic open statement> ::=
		OPEN <dynamic cursor name> [ <input using clause> ]

<dynamic cursor name> ::= <cursor name> | <extended cursor name>

<dynamic fetch statement> ::=
		FETCH [ [ <fetch orientation> ] FROM ] <dynamic cursor name> <output using clause>

<dynamic close statement> ::= CLOSE <dynamic cursor name>

<dynamic delete statement: positioned> ::=
		DELETE FROM <target table> WHERE CURRENT OF <dynamic cursor name>

<dynamic update statement: positioned> ::=
		UPDATE <target table> SET <set clause list> WHERE CURRENT OF <dynamic cursor name>

--p
--small
--i
Note that <double period> must be a pair of period characters with no
intervening space, not a pair of period symbols separated by arbitrary
white space.
Normally, the lexical analyzer would return <double period> as a symbol.
--/i
--/small
--/p

<double period> ::= <period> <period>

<direct SQL statement> ::= <directly executable statement> <semicolon>

<directly executable statement> ::=
		<direct SQL data statement>
	|	<SQL schema statement>
	|	<SQL transaction statement>
	|	<SQL connection statement>
	|	<SQL session statement>
	|	<direct implementation-defined statement>

<direct SQL data statement> ::=
		<delete statement: searched>
	|	<direct select statement: multiple rows>
	|	<insert statement>
	|	<update statement: searched>
	|	<temporary table declaration>

<direct select statement: multiple rows> ::= <query expression> [ <order by clause> ]

<set catalog statement> ::= SET <catalog name characteristic>

<catalog name characteristic> ::= CATALOG <value specification>

<set schema statement> ::= SET <schema name characteristic>

<schema name characteristic> ::= SCHEMA <value specification>

<set names statement> ::= SET <character set name characteristic>

<character set name characteristic> ::= NAMES <value specification>

<set path statement> ::= SET <SQL-path characteristic>

<SQL-path characteristic> ::= PATH <value specification>

<set transform group statement> ::= SET <transform group characteristic>

<transform group characteristic> ::=
		DEFAULT TRANSFORM GROUP <value specification>
	|	TRANSFORM GROUP FOR TYPE <user-defined type> <value specification>

<direct implementation-defined statement> ::= !! (See the Syntax Rules)

<embedded SQL declare section> ::=
		<embedded SQL begin declare>
		[ <embedded character set declaration> ]
		[ <host variable definition>... ]
		<embedded SQL end declare>
	|	<embedded SQL MUMPS declare>

<embedded SQL begin declare> ::=
		<SQL prefix> BEGIN DECLARE SECTION [ <SQL terminator> ]

<SQL prefix> ::= EXEC SQL | <ampersand>SQL<left paren>

<SQL terminator> ::= END-EXEC | <semicolon> | <right paren>

<embedded character set declaration> ::=
		SQL NAMES ARE <character set specification>

<host variable definition> ::=
		<Ada variable definition>
	|	<C variable definition>
	|	<COBOL variable definition>
	|	<Fortran variable definition>
	|	<MUMPS variable definition>
	|	<Pascal variable definition>
	|	<PL/I variable definition>

<Ada variable definition> ::=
		<Ada host identifier> [ { <comma> <Ada host identifier> }... ] <colon>
		<Ada type specification> [ <Ada initial value> ]

<Ada type specification> ::=
		<Ada qualified type specification>
	|	<Ada unqualified type specification>
	|	<Ada derived type specification>

<Ada qualified type specification> ::=
		Interfaces.SQL <period> CHAR [ CHARACTER SET [ IS ] <character set specification> ]
		<left paren> 1 <double period> <length> <right paren>
	|	Interfaces.SQL <period> BIT <left paren> 1 <double period> <length> <right paren>
	|	Interfaces.SQL <period> SMALLINT
	|	Interfaces.SQL <period> INT
	|	Interfaces.SQL <period> REAL
	|	Interfaces.SQL <period> DOUBLE_PRECISION
	|	Interfaces.SQL <period> BOOLEAN
	|	Interfaces.SQL <period> SQLSTATE_TYPE
	|	Interfaces.SQL <period> INDICATOR_TYPE

<Ada unqualified type specification> ::=
		CHAR <left paren> 1 <double period> <length> <right paren>
	|	BIT <left paren> 1 <double period> <length> <right paren>
	|	SMALLINT
	|	INT
	|	REAL
	|	DOUBLE_PRECISION
	|	BOOLEAN
	|	SQLSTATE_TYPE
	|	INDICATOR_TYPE

<Ada derived type specification> ::=
		<Ada CLOB variable>
	|	<Ada BLOB variable>
	|	<Ada user-defined type variable>
	|	<Ada CLOB locator variable>
	|	<Ada BLOB locator variable>
	|	<Ada user-defined type locator variable>
	|	<Ada array locator variable>
	|	<Ada REF variable>

<Ada CLOB variable> ::=
		SQL TYPE IS CLOB <left paren> <large object length> <right paren>
		[ CHARACTER SET [ IS ] <character set specification> ]

<Ada BLOB variable> ::=
		SQL TYPE IS BLOB <left paren> <large object length> <right paren>

<Ada user-defined type variable> ::=
		SQL TYPE IS <user-defined type> AS <predefined type>

<Ada CLOB locator variable> ::=
		SQL TYPE IS CLOB AS LOCATOR

<Ada BLOB locator variable> ::=
		SQL TYPE IS BLOB AS LOCATOR

<Ada user-defined type locator variable> ::=
		SQL TYPE IS <user-defined type name> AS LOCATOR

<Ada array locator variable> ::=
		SQL TYPE IS <collection type> AS LOCATOR

<Ada REF variable> ::=
		SQL TYPE IS <reference type>

<Ada initial value> ::=
		<Ada assignment operator> <character representation>...

<Ada assignment operator> ::= <colon><equals operator>

<C variable definition> ::=
		[ <C storage class> ] [ <C class modifier> ] <C variable specification> <semicolon>

<C storage class> ::= auto | extern | static

<C class modifier> ::= const | volatile

<C variable specification> ::= <C numeric variable> | <C character variable> | <C derived variable>

<C numeric variable> ::=
		{ long | short | float | double } <C host identifier> [ <C initial value> ]
		[ { <comma> <C host identifier> [ <C initial value> ] }... ]

<C initial value> ::=
		<equals operator> <character representation>...

<C character variable> ::=
		<C character type> [ CHARACTER SET [ IS ] <character set specification> ]
		<C host identifier> <C array specification> [ <C initial value> ]
		[ { <comma> <C host identifier> <C array specification> [ <C initial value> ] }... ]

<C character type> ::= char | unsigned char | unsigned short

<C array specification> ::= <left bracket> <length> <right bracket>

<C derived variable> ::=
		<C VARCHAR variable>
	|	<C NCHAR variable>
	|	<C NCHAR VARYING variable>
	|	<C CLOB variable>
	|	<C NCLOB variable>
	|	<C BLOB variable>
	|	<C bit variable>
	|	<C user-defined type variable>
	|	<C CLOB locator variable>
	|	<C BLOB locator variable>
	|	<C array locator variable>
	|	<C user-defined type locator variable>
	|	<C REF variable>

<C VARCHAR variable> ::=
		VARCHAR [ CHARACTER SET [ IS ] <character set specification> ]
		<C host identifier> <C array specification> [ <C initial value> ]
		[ { <comma> <C host identifier> <C array specification> [ <C initial value> ] }... ]

<C NCHAR variable> ::=
		NCHAR [ CHARACTER SET [ IS ] <character set specification> ]
		<C host identifier> <C array specification> [ <C initial value> ]
		[ { <comma> <C host identifier> <C array specification> [ <C initial value> ] } ... ]

<C NCHAR VARYING variable> ::=
		NCHAR VARYING [ CHARACTER SET [ IS ] <character set specification> ]
		<C host identifier> <C array specification> [ <C initial value> ]
		[ { <comma> <C host identifier> <C array specification> [ <C initial value> ] } ... ]

<C CLOB variable> ::=
		SQL TYPE IS CLOB <left paren> <large object length> <right paren>
		[ CHARACTER SET [ IS ] <character set specification> ]
		<C host identifier> [ <C initial value> ] [ { <comma> <C host identifier> [ <C initial value> ] }... ]

<C NCLOB variable> ::=
		SQL TYPE IS NCLOB <left paren> <large object length> <right paren>
		[ CHARACTER SET [ IS ] <character set specification> ]
		<C host identifier> [ <C initial value> ] [ { <comma> <C host identifier> [ <C initial value> ] }... ]

<C BLOB variable> ::=
		SQL TYPE IS BLOB <left paren> <large object length> <right paren>
		<C host identifier> [ <C initial value> ] [ { <comma> <C host identifier> [ <C initial value> ] } ... ]

<C bit variable> ::=
		BIT <C host identifier> <C array specification> [ <C initial value> ]
		[ { <comma> <C host identifier> <C array specification> [ <C initial value> ] }... ]

<C user-defined type variable> ::=
		SQL TYPE IS <user-defined type> AS <predefined type>
		<C host identifier> [ <C initial value> ] [ { <comma> <C host identifier> [ <C initial value> ] } ... ]

<C CLOB locator variable> ::=
		SQL TYPE IS CLOB AS LOCATOR
		<C host identifier> [ <C initial value> ] [ { <comma> <C host identifier> [ <C initial value> ] } ... ]

<C BLOB locator variable> ::=
		SQL TYPE IS BLOB AS LOCATOR
		<C host identifier> [ <C initial value> ] [ { <comma> <C host identifier> [ <C initial value> ] } ... ]

<C array locator variable> ::=
		SQL TYPE IS <collection type> AS LOCATOR
		<C host identifier> [ <C initial value> ] [ { <comma> <C host identifier> [ <C initial value> ] } ... ]

<C user-defined type locator variable> ::=
		SQL TYPE IS <user-defined type> AS LOCATOR
		<C host identifier> [ <C initial value> ] [ { <comma> <C host identifier> [ <C initial value> ] }... ]

<C REF variable> ::=
		SQL TYPE IS <reference type>

<COBOL variable definition> ::=
		{01|77} <COBOL host identifier> <COBOL type specification>
		[ <character representation>... ] <period>

<COBOL type specification> ::=
		<COBOL character type>
	|	<COBOL national character type>
	|	<COBOL bit type>
	|	<COBOL numeric type>
	|	<COBOL integer type>
	|	<COBOL derived type specification>

<COBOL character type> ::=
		[ CHARACTER SET [ IS ] <character set specification> ]
		{ PIC | PICTURE } [ IS ] { X [ <left paren> <length> <right paren> ] }...

<COBOL national character type> ::=
		[ CHARACTER SET [ IS ] <character set specification> ]
		{ PIC | PICTURE } [ IS ] { N [ <left paren> <length> <right paren> ] }...

<COBOL bit type> ::=
		{ PIC | PICTURE } [ IS ] { X [ <left paren> <length> <right paren> ] }...
		USAGE [ IS ] BIT

<COBOL numeric type> ::=
		{ PIC | PICTURE } [ IS ] S <COBOL nines specification>
		[ USAGE [ IS ] ] DISPLAY SIGN LEADING SEPARATE

<COBOL nines specification> ::= <COBOL nines> [ V [ <COBOL nines> ] ] | V <COBOL nines>

<COBOL nines> ::= { 9 [ <left paren> <length> <right paren> ] }...

<COBOL integer type> ::= <COBOL binary integer>

<COBOL binary integer> ::=
		{ PIC | PICTURE } [ IS ] S<COBOL nines> [ USAGE [ IS ] ] BINARY

<COBOL derived type specification> ::=
		<COBOL CLOB variable>
	|	<COBOL NCLOB variable>
	|	<COBOL BLOB variable>
	|	<COBOL user-defined type variable>
	|	<COBOL CLOB locator variable>
	|	<COBOL BLOB locator variable>
	|	<COBOL array locator variable>
	|	<COBOL user-defined type locator variable>
	|	<COBOL REF variable>

<COBOL CLOB variable> ::=
		[ USAGE [ IS ] ] SQL TYPE IS CLOB <left paren> <large object length> <right paren>
		[ CHARACTER SET [ IS ] <character set specification> ]

<COBOL NCLOB variable> ::=
		[ USAGE [ IS ] ] SQL TYPE IS NCLOB <left paren> <large object length> <right paren>
		[ CHARACTER SET [ IS ] <character set specification> ]

<COBOL BLOB variable> ::=
		[ USAGE [ IS ] ] SQL TYPE IS BLOB <left paren> <large object length> <right paren>

<COBOL user-defined type variable> ::=
		[ USAGE [ IS ] ] SQL TYPE IS <user-defined type> AS <predefined type>

<COBOL CLOB locator variable> ::=
		[ USAGE [ IS ] ] SQL TYPE IS CLOB AS LOCATOR

<COBOL BLOB locator variable> ::=
		[ USAGE [ IS ] ] SQL TYPE IS BLOB AS LOCATOR

<COBOL array locator variable> ::=
		[ USAGE [ IS ] ] SQL TYPE IS <collection type> AS LOCATOR

<COBOL user-defined type locator variable> ::=
		[ USAGE [ IS ] ] SQL TYPE IS <user-defined type name> AS LOCATOR

<COBOL REF variable> ::=
		[ USAGE [ IS ] ] SQL TYPE IS <reference type>

<Fortran variable definition> ::=
		<Fortran type specification> <Fortran host identifier> [ { <comma> <Fortran host identifier> }... ]

--p
--small
--i
The standard documents 'CHARACTER KIND = n' but there is no explanation
of the italic 'n' that is used.
Presumably, it is an integer literal, hence <unsigned integer>.
--/i
--/small
--/p

<Fortran type specification> ::=
		CHARACTER [ <asterisk> <length> ] [ CHARACTER SET [ IS ] <character set specification> ]
	|	CHARACTER KIND <equals operator> <unsigned integer> [ <asterisk> <length> ] [ CHARACTER SET [ IS ] <character set specification> ]
	|	BIT [ <asterisk> <length> ]
	|	INTEGER
	|	REAL
	|	DOUBLE PRECISION
	|	LOGICAL
	|	<Fortran derived type specification>

<Fortran derived type specification> ::=
		<Fortran CLOB variable>
	|	<Fortran BLOB variable>
	|	<Fortran user-defined type variable>
	|	<Fortran CLOB locator variable>
	|	<Fortran BLOB locator variable>
	|	<Fortran user-defined type locator variable>
	|	<Fortran array locator variable>
	|	<Fortran REF variable>

<Fortran CLOB variable> ::=
		SQL TYPE IS CLOB <left paren> <large object length> <right paren>
		[ CHARACTER SET [ IS ] <character set specification> ]

<Fortran BLOB variable> ::=
		SQL TYPE IS BLOB <left paren> <large object length> <right paren>

<Fortran user-defined type variable> ::=
		SQL TYPE IS <user-defined type> AS <predefined type>

<Fortran CLOB locator variable> ::=
		SQL TYPE IS CLOB AS LOCATOR

<Fortran BLOB locator variable> ::=
		SQL TYPE IS BLOB AS LOCATOR

<Fortran user-defined type locator variable> ::=
		SQL TYPE IS <user-defined type name> AS LOCATOR

<Fortran array locator variable> ::=
		SQL TYPE IS <collection type> AS LOCATOR

<Fortran REF variable> ::=
		SQL TYPE IS <reference type>

<MUMPS variable definition> ::=
		<MUMPS numeric variable> <semicolon>
	|	<MUMPS character variable> <semicolon>
	|	<MUMPS derived type specification> <semicolon>

<MUMPS numeric variable> ::=
		<MUMPS type specification> <MUMPS host identifier>
		[ { <comma> <MUMPS host identifier> }... ]

<MUMPS type specification> ::=
		INT
	|	DEC [ <left paren> <precision> [ <comma> <scale> ] <right paren> ]
	|	REAL

<MUMPS character variable> ::=
		VARCHAR <MUMPS host identifier> <MUMPS length specification>
		[ { <comma> <MUMPS host identifier> <MUMPS length specification> }...  ]

<MUMPS length specification> ::=
		<left paren> <length> <right paren>

<MUMPS derived type specification> ::=
		<MUMPS CLOB variable>
	|	<MUMPS BLOB variable>
	|	<MUMPS user-defined type variable>
	|	<MUMPS CLOB locator variable>
	|	<MUMPS BLOB locator variable>
	|	<MUMPS user-defined type locator variable>
	|	<MUMPS array locator variable>
	|	<MUMPS REF variable>

<MUMPS CLOB variable> ::=
		SQL TYPE IS CLOB <left paren> <large object length> <right paren>
		[ CHARACTER SET [ IS ] <character set specification> ]

<MUMPS BLOB variable> ::=
		SQL TYPE IS BLOB <left paren> <large object length> <right paren>

<MUMPS user-defined type variable> ::=
		SQL TYPE IS <user-defined type> AS <predefined type>

<MUMPS CLOB locator variable> ::= SQL TYPE IS CLOB AS LOCATOR

<MUMPS BLOB locator variable> ::= SQL TYPE IS BLOB AS LOCATOR

<MUMPS user-defined type locator variable> ::=
		SQL TYPE IS <user-defined type name> AS LOCATOR

<MUMPS array locator variable> ::=
		SQL TYPE IS <collection type> AS LOCATOR

<MUMPS REF variable> ::= SQL TYPE IS <reference type>

<Pascal variable definition> ::=
		<Pascal host identifier> [ { <comma> <Pascal host identifier> }... ] <colon>
		<Pascal type specification> <semicolon>

<Pascal type specification> ::=
		PACKED ARRAY <left bracket> 1 <double period> <length> <right bracket>
		OF CHAR [ CHARACTER SET [ IS ] <character set specification> ]
	|	PACKED ARRAY <left bracket> 1 <double period> <length> <right bracket> OF BIT
	|	INTEGER
	|	REAL
	|	CHAR [ CHARACTER SET [ IS ] <character set specification> ]
	|	BIT
	|	BOOLEAN
	|	<Pascal derived type specification>

<Pascal derived type specification> ::=
		<Pascal CLOB variable>
	|	<Pascal BLOB variable>
	|	<Pascal user-defined type variable>
	|	<Pascal CLOB locator variable>
	|	<Pascal BLOB locator variable>
	|	<Pascal user-defined type locator variable>
	|	<Pascal array locator variable>
	|	<Pascal REF variable>

<Pascal CLOB variable> ::=
		SQL TYPE IS CLOB <left paren> <large object length> <right paren>
		[ CHARACTER SET [ IS ] <character set specification> ]

<Pascal BLOB variable> ::=
		SQL TYPE IS BLOB <left paren> <large object length> <right paren>

<Pascal user-defined type variable> ::=
		SQL TYPE IS <user-defined type> AS <predefined type>

<Pascal CLOB locator variable> ::= SQL TYPE IS CLOB AS LOCATOR

<Pascal BLOB locator variable> ::= SQL TYPE IS BLOB AS LOCATOR

<Pascal user-defined type locator variable> ::=
		SQL TYPE IS <user-defined type name> AS LOCATOR

<Pascal array locator variable> ::=
		SQL TYPE IS <collection type> AS LOCATOR

<Pascal REF variable> ::= SQL TYPE IS <reference type>

<PL/I variable definition> ::=
		{DCL | DECLARE }
		{ <PL/I host identifier> | <left paren> <PL/I host identifier> [ { <comma> <PL/I host identifier> }... ] <right paren> }
		<PL/I type specification> [ <character representation>... ] <semicolon>

<PL/I type specification> ::=
		{ CHAR | CHARACTER } [ VARYING ] <left paren><length><right paren>
		[ CHARACTER SET [ IS ] <character set specification> ]
	|	BIT [ VARYING ] <left paren><length><right paren>
	|	<PL/I type fixed decimal> <left paren> <precision> [ <comma> <scale> ] <right paren>
	|	<PL/I type fixed binary> [ <left paren> <precision> <right paren> ]
	|	<PL/I type float binary> <left paren> <precision> <right paren>
	|	<PL/I derived type specification>

<PL/I type fixed decimal> ::=
		{ DEC | DECIMAL } FIXED
	|	FIXED { DEC | DECIMAL }

<PL/I type fixed binary> ::=
		{ BIN | BINARY } FIXED
	|	FIXED { BIN | BINARY }

<PL/I type float binary> ::=
		{ BIN | BINARY } FLOAT
	|	FLOAT { BIN | BINARY }

<PL/I derived type specification> ::=
		<PL/I CLOB variable>
	|	<PL/I BLOB variable>
	|	<PL/I user-defined type variable>
	|	<PL/I CLOB locator variable>
	|	<PL/I BLOB locator variable>
	|	<PL/I user-defined type locator variable>
	|	<PL/I array locator variable>
	|	<PL/I REF variable>

<PL/I CLOB variable> ::=
		SQL TYPE IS CLOB <left paren> <large object length> <right paren>
		[ CHARACTER SET [ IS ] <character set specification> ]

<PL/I BLOB variable> ::=
		SQL TYPE IS BLOB <left paren> <large object length> <right paren>

<PL/I user-defined type variable> ::=
		SQL TYPE IS <user-defined type> AS <predefined type>

<PL/I CLOB locator variable> ::= SQL TYPE IS CLOB AS LOCATOR

<PL/I BLOB locator variable> ::= SQL TYPE IS BLOB AS LOCATOR

<PL/I user-defined type locator variable> ::=
		SQL TYPE IS <user-defined type name> AS LOCATOR

<PL/I array locator variable> ::= SQL TYPE IS <collection type> AS LOCATOR

<PL/I REF variable> ::= SQL TYPE IS <reference type>

<embedded SQL end declare> ::=
		<SQL prefix> END DECLARE SECTION [ <SQL terminator> ]

<embedded SQL MUMPS declare> ::=
		<SQL prefix> BEGIN DECLARE SECTION
		[ <embedded character set declaration> ] [ <host variable definition>... ]
		END DECLARE SECTION <SQL terminator>

<embedded SQL host program> ::=
		<embedded SQL Ada program>
	|	<embedded SQL C program>
	|	<embedded SQL COBOL program>
	|	<embedded SQL Fortran program>
	|	<embedded SQL MUMPS program>
	|	<embedded SQL Pascal program>
	|	<embedded SQL PL/I program>

<embedded SQL Ada program> ::= !! (See the Syntax Rules.)

<embedded SQL C program> ::= !! (See the Syntax Rules.)

<embedded SQL COBOL program> ::= !! (See the Syntax Rules.)

<embedded SQL Fortran program> ::= !! (See the Syntax Rules.)

<embedded SQL MUMPS program> ::= !! (See the Syntax Rules.)

<embedded SQL Pascal program> ::= !! (See the Syntax Rules.)

<embedded SQL PL/I program> ::= !! (See the Syntax Rules.)

<embedded SQL statement> ::= <SQL prefix> <statement or declaration> [ <SQL terminator> ]

<statement or declaration> ::=
		<declare cursor>
	|	<dynamic declare cursor>
	|	<temporary table declaration>
	|	<embedded authorization declaration>
	|	<embedded path specification>
	|	<embedded transform group specification>
	|	<embedded exception declaration>
	|	<handler declaration>
	|	<SQL-invoked routine>
	|	<SQL procedure statement>

<dynamic declare cursor> ::=
		DECLARE <cursor name> [ <cursor sensitivity>  ] [ <cursor scrollability> ] CURSOR
		[ <cursor holdability> ] [ <cursor returnability> ] FOR <statement name>

<embedded authorization declaration> ::= DECLARE <embedded authorization clause>

<embedded authorization clause> ::=
		SCHEMA <schema name>
	|	AUTHORIZATION <embedded authorization identifier>
		[ FOR STATIC { ONLY | AND DYNAMIC } ]
	|	SCHEMA <schema name> AUTHORIZATION <embedded authorization identifier>
		[ FOR STATIC { ONLY | AND DYNAMIC } ]

<embedded authorization identifier> ::= <module authorization identifier>

<embedded path specification> ::= <path specification>

<embedded transform group specification> ::= <transform group specification>

<embedded exception declaration> ::= WHENEVER <condition> <condition action>

<condition> ::= <SQL condition>

--p
--small
--i
The standard documents 'SQLSTATE ( <SQLSTATE class value> [ , <SQLSTATE
subclass value> ] )', but it is not clear why the <left paren>, <comma>
and <right paren> are not designated more accurately.
--/i
--/small
--/p

<SQL condition> ::=
		<major category>
	|	SQLSTATE <left paren> <SQLSTATE class value> [ <comma> <SQLSTATE subclass value> ] <right paren>
	|	CONSTRAINT <constraint name>

<major category> ::= SQLEXCEPTION | SQLWARNING | NOT FOUND

<SQLSTATE class value> ::= <SQLSTATE char><SQLSTATE char> !! (See the Syntax Rules.)

<SQLSTATE char> ::= <simple Latin upper case letter> | <digit>

<SQLSTATE subclass value> ::= <SQLSTATE char><SQLSTATE char><SQLSTATE char> !! (See the Syntax Rules.)

<condition action> ::= CONTINUE | <go to>

<go to> ::= { GOTO | GO TO } <goto target>

<goto target> ::= <host label identifier> | <unsigned integer> | <host PL/I label variable>

<host label identifier> ::= !! (See the Syntax Rules.)

<host PL/I label variable> ::= !! (See the Syntax Rules.)

--p
--small
--i
This interval primary definition from 9075-5 (SQL/Bindings) is very
similar to a previous occurrence from 9075-2 (SQL/Foundation), but adds
the optional interval qualifier.
The earlier definition is commented out.
--/i
--/small
--/p

<interval primary> ::=
		<value expression primary> [ <interval qualifier> ]
	|	<interval value function>

--p
--small
--i
This module authorization clause definition from 9075-5 (SQL/Bindings)
is similar to a previous occurrence from 9075-2 (SQL/Foundation) but the
optional 'FOR STATIC ONLY' and 'FOR STATIC AND DYNAMIC' clauses were not
present before.
The earlier definition is commented out.
--/i
--/small
--/p

<module authorization clause> ::=
		SCHEMA <schema name>
	|	AUTHORIZATION <module authorization identifier>
		[ FOR STATIC { ONLY | AND DYNAMIC } ]
	|	SCHEMA <schema name> AUTHORIZATION <module authorization identifier>
		[ FOR STATIC { ONLY | AND DYNAMIC } ]

<preparable statement> ::=
		<preparable SQL data statement>
	|	<preparable SQL schema statement>
	|	<preparable SQL transaction statement>
	|	<preparable SQL control statement>
	|	<preparable SQL session statement>
	|	<preparable implementation-defined statement>

<preparable SQL data statement> ::=
		<delete statement: searched>
	|	<dynamic single row select statement>
	|	<insert statement>
	|	<dynamic select statement>
	|	<update statement: searched>
	|	<preparable dynamic delete statement: positioned>
	|	<preparable dynamic update statement: positioned>

<dynamic single row select statement> ::= <query specification>

<dynamic select statement> ::= <cursor specification>

<preparable dynamic delete statement: positioned> ::=
		DELETE [ FROM <target table> ] WHERE CURRENT OF [ <scope option> ] <cursor name>

<preparable dynamic update statement: positioned> ::=
		UPDATE [ <target table> ] SET <set clause list> WHERE CURRENT OF [ <scope option> ] <cursor name>

<preparable SQL schema statement> ::= <SQL schema statement>

<preparable SQL transaction statement> ::= <SQL transaction statement>

<preparable SQL control statement> ::= <SQL control statement>

<preparable SQL session statement> ::= <SQL session statement>

<preparable implementation-defined statement> ::= !! (See the Syntax Rules.)

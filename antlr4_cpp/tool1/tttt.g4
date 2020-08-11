<packages> ::= <Package PKG(i)> ...

<Part (n)> ::= <Part (n) no> | <Part (n) yes>

<Part (n) no> ::= 0 | Part-(n)No <left paren> 0 <right paren>

<Part (n) yes> ::= !! (as specified in ISO/IEC 9075-(n))

<Package PKG(i)> ::= <Package PKG(i)Yes> | <Package PKG(i)No>

<Part 3 yes> ::= <Part 3 conformance>

<Part 3 conformance> ::= 3 | sqlcli1999 <left paren> 3 <right paren>

<Part 4 yes> ::= <Part 4 conformance> <Part 4 module>

<Part 4 conformance> ::= 4 | sqlpsm1999 <left paren> 4 <right paren>

<Part 4 module> ::= <Part 4 module yes> | <Part 4 module no>

<Part 4 module yes> ::= 1 | moduleyes <left paren> 1 <right paren>

<Part 4 module no> ::= 0 | moduleno <left paren> 0 <right paren>

<Part 5 yes> ::= <Part 5 conformance> <Part 5 direct> <Part 5 embedded>

--small
--i
The original used sqlbindings199x, but the x should clearly be a 9.
--/i
--/small

<Part 5 conformance> ::= 5 | sqlbindings1999 <left paren> 5 <right paren>

<Part 5 direct> ::= <Part 5 direct yes> | <Part 5 direct no>

<Part 5 direct yes> ::= 1 | directyes <left paren> 1 <right paren>

<Part 5 direct no> ::= 0 | directno <left paren> 0 <right paren>

<Part 5 embedded> ::= <Part 5 embedded no> | <Part 5 embedded languages>...

<Part 5 embedded no> ::= 0 | embeddedno <left paren> 0 <right paren>

<Part 5 embedded languages> ::=
		<Part 5 embedded Ada>
	|	<Part 5 embedded C>
	|	<Part 5 embedded COBOL>
	|	<Part 5 embedded Fortran>
	|	<Part 5 embedded MUMPS>
	|	<Part 5 embedded Pascal>
	|	<Part 5 embedded PL/I>

<Part 5 embedded Ada> ::= 1 | embeddedAda <left paren> 1 <right paren>

<Part 5 embedded C> ::= 2 | embeddedC <left paren> 2 <right paren>

<Part 5 embedded COBOL> ::= 3 | embeddedCOBOL <left paren> 3 <right paren>

<Part 5 embedded Fortran> ::= 4 | embeddedFortran <left paren> 4 <right paren>

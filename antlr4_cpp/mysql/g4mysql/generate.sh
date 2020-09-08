#!/bin/bash
java -jar ../../tools/antlr-4.7.1-complete.jar -Dlanguage=Cpp -listener -visitor -o ../generated/ MySQLLexer.g4 MySQLParser.g4

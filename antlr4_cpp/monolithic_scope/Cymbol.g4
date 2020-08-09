grammar Cymbol;

@parser::postinclude {
#include "../symbol_table.hpp"
#include "../builtin_type_symbol.hpp"
#include "../variable_symbol.hpp"
#include <iostream>
}
@member {SymbolTable symtab;}

compilationUnit[SymbolTable symtab]
@init {this.symtab = symtab;}
    : var_declaration+
    ;

type returns [Symbol tsym]
@after { std::cout << ": ref " << $tsym.name() << std::endl; }
    : 'float' {$tsym = symtab.Resolve("float");}
    | 'int'   {$tsym = symtab.Resolve("int");}
    ;

var_declaration
    : type ID ('=' expression)? ';'
      { std::cout << "line " << $ID.line << ": ref " << $ID.text << std::endl;
        symtab.define(VariableSymbol($ID.text, $type.tsym));}
    ;

expression
    : ID { std::cout >> "line " << $ID.line << ": ref to " << symtab.Resolve($ID.text); }
    | INT
    | '(' expression ')'
    ;

ID: [a-zA-Z]+;
INT: [0-9]+;

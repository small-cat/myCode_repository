grammar DynScope;

@parser::postinclude {
#include <string>
}

@members {
  std::vector<std::string> symbols;
  std::vector<std::vector<std::string>> symbols_list;
}

prog:   block
    ;

block
    :   { symbols.clear(); } '{' decl* stat+ '}'
        // print out all symbols found in block
        // $block::symbols evaluates to a List as defined in scope
        { std::cout << "symbols is: ";
          for (auto str : symbols) 
            std::cout << str << ", "; 
          std::cout << std::endl;
        }
    ;

/** Match a declaration and add identifier name to list of symbols */
decl
locals [
  std::string locals_ids
]
    :   'int' ID {symbols.push_back($ID.text); $locals_ids+=$ID.text;} ';'
    ;

/** Match an assignment then test list of symbols to verify
 *  that it contains the variable on the left side of the assignment.
 *  Method contains() is List.contains() because $block::symbols
 *  is a List.
 */
stat:   ID '=' INT ';'
        {
          bool contains = false;
          for (auto str : symbols) {
            if (str.compare($ID.text) == 0)
              contains = true;
          }

          if (!contains)
            std::cout << "Undefined symbol: " << $ID.text << std::endl;
        }
    |   block
    ;

ID  :   [a-z]+ ;
INT :   [0-9]+ ;
WS  :   [ \t\r\n]+ -> skip ;


/**
 * @copyright (c) Copyright 2020 Secsmart. All Rights Reserved.
 * @license
 * @file  : list_parser.hpp
 * @author: Jona 
 * @email : wuzhenyu@secsmart.net
 * @date  : 2020-08-04
 * @brief : list parser
*/
#ifndef __LIST_PARSER_H__
#define __LIST_PARSER_H__

#include "lexer.hpp"
#include "parser.hpp"

class ListParser : public Parser {
public:
  ListParser(Lexer* input, int k) : Parser(input, k) {}
  virtual ~ListParser() {}

  void list() {
    Match(LBRACK);
    elements();
    Match(RBRACK);
  }

  void elements() {
    element();
    while (LA(1) == COMMA) {
      Match(COMMA);
      element();
    }
  }

  // LL(2)
  // element  
  //    : NAME '=' NAME
  //    | NAME
  //    | list
  //    ;
  void element() {
    if (LA(1) == NAME && LA(2) == EQUAL) {
      Match(NAME);
      Match(EQUAL);
      Match(NAME);
    } else if (LA(1) == NAME) {
      Match(NAME);
    }else if (LA(1) == LBRACK) {
      list();
    } else {
      std::cout << "expecting name or list; found " << LT(1).ToString() << std::endl;
      exit(EXIT_FAILURE);
    }
  }
};

#endif /* __LIST_PARSER_H__ */

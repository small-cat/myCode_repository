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
  ListParser(Lexer* input) : Parser(input) {}
  virtual ~ListParser() {}

  void list() {
    std::cout << "list: " << std::endl;
    Match(LBRACK);
    elements();
    Match(RBRACK);
  }

  void elements() {
    std::cout << "elements: " << std::endl;
    element();
    while (lookahead_.GetType() == COMMA) {
      Match(COMMA);
      element();
    }
  }

  void element() {
    std::cout << "element: " << std::endl;
    if (lookahead_.GetType() == NAME) {
      Match(NAME);
    } else if (lookahead_.GetType() == LBRACK) {
      list();
    } else {
      std::cout << "expecting name or list; found " << lookahead_.ToString() << std::endl;
      exit(EXIT_FAILURE);
    }
  }
};

#endif /* __LIST_PARSER_H__ */

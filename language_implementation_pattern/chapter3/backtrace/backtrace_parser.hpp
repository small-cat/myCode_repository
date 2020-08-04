/**
 * @copyright (c) Copyright 2020 Secsmart. All Rights Reserved.
 * @license
 * @file  : backtrace_parser.hpp
 * @author: Jona 
 * @email : wuzhenyu@secsmart.net
 * @date  : 2020-08-04
 * @brief : list parser
*/
#ifndef __BACKTRACE_PARSER_H__
#define __BACKTRACE_PARSER_H__

#include "lexer.hpp"
#include "parser.hpp"

class ListParser : public Parser {
public:
  ListParser(Lexer* input) : Parser(input) {}
  virtual ~ListParser() {}

  void Stat() {
    if (SpeculateStatAlt1()) {
      List();
      Match(EOF_TYPE);
    } else if (SpeculateStatAlt2()) {
      Assign();
      Match(EOF_TYPE);
    } else {
      throw RuntimeException("no viable alt, expecting stat found " + LT(1).ToString());
    }
  }

  bool SpeculateStatAlt1() {
    bool success = true;
    Mark();
    try {
      List();
      Match(EOF_TYPE);
    } catch (RuntimeException& e) {
      std::cout << e.what() << std::endl;
      success = false;
    }

    Release();
    return success;
  }

  bool SpeculateStatAlt2() {
    bool success = true;
    Mark();
    try {
      Assign();
      Match(EOF_TYPE);
    } catch (RuntimeException& e) {
      std::cout << e.what() << std::endl;
      success = false;
    }

    Release();
    return success;
  }

  void Assign() {
    List();
    Match(EQUAL);
    List();
  }

  void List() {
    Match(LBRACK);
    Elements();
    Match(RBRACK);
  }

  void Elements() {
    Element();
    while (LA(1) == COMMA) {
      Match(COMMA);
      Element();
    }
  }

  // LL(2)
  // element  
  //    : NAME '=' NAME
  //    | NAME
  //    | list
  //    ;
  void Element() {
    if (LA(1) == NAME && LA(2) == EQUAL) {
      Match(NAME);
      Match(EQUAL);
      Match(NAME);
    } else if (LA(1) == NAME) {
      Match(NAME);
    }else if (LA(1) == LBRACK) {
      List();
    } else {
      throw RuntimeException("extraneous token, expecting name or list; found " + LT(1).ToString());
    }
  }
};

#endif /* __BACKTRACE_PARSER_H__ */

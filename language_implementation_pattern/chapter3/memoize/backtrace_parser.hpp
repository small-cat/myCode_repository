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

std::map<int, int> list_memo;
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
      std::cout << "no viable alt, expecting stat found " << LT(1).ToString() << std::endl;
    }
  }

  bool SpeculateStatAlt1() {
    std::cout << "attempt alternative 1" << std::endl;
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
    std::cout << "attempt alternative 2" << std::endl;
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
    bool failed = false;
    int start_token_idx = Index();  // get current token position
    if (IsSpeculating() && AlreadyParsedRule(list_memo)) {
      return;
    }

    try {
      _List();

      if (IsSpeculating()) { 
        Memoize(list_memo, start_token_idx, failed);
      }
    } catch (RuntimeException& e) {
      failed = true;

      if (IsSpeculating()) {
        Memoize(list_memo, start_token_idx, failed);
      }

    }

  }

  void _List() {
    std::cout << "parse list rule at token index: " << Index() << std::endl;
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

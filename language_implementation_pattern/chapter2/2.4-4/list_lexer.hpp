/**
 * @copyright (c) Copyright 2020 Secsmart. All Rights Reserved.
 * @license
 * @file  : list_lexer.hpp
 * @author: Jona 
 * @email : wuzhenyu@secsmart.net
 * @date  : 2020-08-03
 * @brief : list lexer
*/
#ifndef __LIST_LEXER_H__
#define __LIST_LEXER_H__

#include <ctype.h>
#include <vector>
#include <iostream>
#include "lexer.hpp"
#include "token.hpp"

const static int NAME = 2;
const static int COMMA = 3;
const static int LBRACK = 4;
const static int RBRACK = 5;
const static int EQUAL = 6;
std::string TokenNames[] = {
  "n/a", "<EOF>", "NAME", "COMMA", "LBRACK", "RBRACK", "EQUAL"
};

class ListLexer : public Lexer {
public:
  ListLexer(std::string input) : Lexer(input) {}
  virtual ~ListLexer() {}

  std::string GetTokenName(int token_type) {
    return TokenNames[token_type];
  }

  bool IsLetter() {
    return (c_>='a' && c_<='z') || (c_>='A' && c_<='Z');
  }

  Token NextToken() {
    while (c_ != EOF) {
      switch (c_) {
        case ' ': 
        case '\t':
        case '\n':
        case '\r':
          WS();
          continue;
        case ',':
          Consume();
          return Token(COMMA, ",");
        case '[':
          Consume();
          return Token(LBRACK, "[");
        case ']':
          Consume();
          return Token(RBRACK, "]");
        case '=':
          Consume();
          return Token(EQUAL, "=");
        default:
          if (IsLetter()) {
            return Name();
          } else {
            std::cout << "invalid character: " << c_ << std::endl;
            exit(EXIT_FAILURE);
          }
      }
    }

    return Token(EOF, "<EOF>");
  }

  Token Name() {
    std::string id;
    do {
      id.append(1, c_);
      Consume();
    } while (IsLetter());

    return Token(NAME, id);
  }

  void WS() {
    while (c_ == ' ' || c_ == '\n' || c_ == '\r' || c_ == '\t') {
      Consume();
    }
  }
};

#endif /* __LIST_LEXER_H__ */

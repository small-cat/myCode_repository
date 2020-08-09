/**
 * @copyright (c) Copyright 2020 Secsmart. All Rights Reserved.
 * @license
 * @file  : sqlquery_lexer.hpp
 * @author: Jona 
 * @email : wuzhenyu@secsmart.net
 * @date  : 2020-08-07
 * @brief : sqlquery lexer definition
*/

#ifndef __SQLQUERY_LEXER_H__
#define __SQLQUERY_LEXER_H__

#include <ctype.h>
#include <vector>
#include <iostream>

#include <string.h>

#include "lexer.hpp"
#include "token.hpp"

enum {
  IDENTIFIER=2,COMMA,SELECT,DISTINCT,ALL,AS,FROM,ASTERISK
};

std::vector<std::string> TokenNames = {
  "n/a", "<EOF>", "IDENTIFIER", "COMMA", "SELECT", "DISTINCT", "ALL", "AS", "FROM","ASTERISK"
};

class SqlQueryLexer : public Lexer {
public:
  SqlQueryLexer(std::string input) : Lexer(input) {}
  virtual ~SqlQueryLexer() {}

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
        default:
          if (IsLetter()) {
            return GetToken();
          } else {
            std::cout << "invalid character: " << c_ << std::endl;
            exit(EXIT_FAILURE);
          }
      }
    }

    return Token(EOF_TYPE, "EOF");
  }

  Token GetToken() {
    std::string text;
    do {
      text.append(1, c_);
      Consume();
    } while (IsLetter());

    for (int i = 3; i < TokenNames.size(); i++) {
      if (strcasecmp(TokenNames[i].c_str(), text.c_str()) == 0) {
        return Token(i, text);
      }
    }

    return Token(IDENTIFIER, text);
  }

  void WS() {
    while (c_ == ' ' || c_ == '\n' || c_ == '\r' || c_ == '\t') {
      Consume();
    }
  }
};

#endif /* __SQLQUERY_LEXER_H__ */

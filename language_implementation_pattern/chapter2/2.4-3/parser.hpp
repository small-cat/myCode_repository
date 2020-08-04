/**
 * @copyright (c) Copyright 2020 Secsmart. All Rights Reserved.
 * @license
 * @file  : parser.hpp
 * @author: Jona 
 * @email : wuzhenyu@secsmart.net
 * @date  : 2020-08-04
 * @brief : parser 
*/
#ifndef __PARSER_H__
#define __PARSER_H__

#include "lexer.hpp"
#include "token.hpp"

class Parser {
public:
  Parser(Lexer* lexer): lexer_(lexer) {
    lookahead_ = lexer_->NextToken();
  }
  virtual ~Parser() {}

  void Match(int x) {
    if (lookahead_.GetType() == x) {
      std::cout << "match " << lookahead_.ToString() << std::endl;
      Consume();
    } else {
      std::cout << "expecting " << lexer_->GetTokenName(x) << "; found " << lookahead_.ToString() << std::endl;
      exit(EXIT_FAILURE);
    }
  }

  void Consume() {
    lookahead_ = lexer_->NextToken();
  }

  Lexer* lexer_;
  Token lookahead_;
};

#endif /* __PARSER_H__ */

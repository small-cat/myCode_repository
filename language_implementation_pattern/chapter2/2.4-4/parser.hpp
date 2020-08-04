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
  Parser(Lexer* lexer, int k): lexer_(lexer), lookahead_num_(k), next_pos_(0) {
    lookahead_ = new Token[k];

    for (int i = 0; i < k; i++) {
      Consume();
    }
  }
  virtual ~Parser() {
    if (lookahead_) {
      delete[] lookahead_;
      lookahead_ = nullptr;
    }
  }

  void Match(int x) {
    if (LA(1) == x) {
      std::cout << "match " << LT(1).ToString() << std::endl;
      Consume();
    } else {
      std::cout << "expecting " << lexer_->GetTokenName(x) << "; found " << LT(1).ToString() << std::endl;
      exit(EXIT_FAILURE);
    }
  }

  void Consume() {
    lookahead_[next_pos_] = lexer_->NextToken();
    next_pos_ = (next_pos_ + 1) % lookahead_num_;
  }

  Token LT(int i) {
    return lookahead_[(next_pos_ + i - 1) % lookahead_num_];
  }

  int LA(int i) {
    return LT(i).GetType();
  }

  Lexer* lexer_;
  Token* lookahead_;
  int lookahead_num_;
  int next_pos_;
};

#endif /* __PARSER_H__ */

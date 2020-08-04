/**
 * @copyright (c) Copyright 2020 Secsmart. All Rights Reserved.
 * @license
 * @file  : lexer.hpp
 * @author: Jona 
 * @email : wuzhenyu@secsmart.net
 * @date  : 2020-08-03
 * @brief : abstract lexer 
*/

#ifndef __LEXER_H__
#define __LEXER_H__

#include <stdio.h>
#include <string>

#include "token.hpp"

const int EOF_TYPE = -1;

class Lexer {
public:
  Lexer(std::string input) : input_(input), p_(0) {
    c_ = input_.at(p_);
  }
  virtual ~Lexer() {}

  void Consume() {
    p_++;
    if (p_ >= input_.length()) {
      c_ = EOF;
    } else {
      c_ = input_.at(p_);
    }
  }

  void Match(char x) {
    if (c_ == x) {
      Consume();
    } else {
      std::cout << "expecting " << x << "; found " << c_ << std::endl;
      exit(EXIT_FAILURE);
    }
  }

  virtual Token NextToken() = 0;
  virtual std::string GetTokenName(int token_type) = 0;

  std::string input_;
  int p_;
  char c_;
};

#endif /* __LEXER_H__ */

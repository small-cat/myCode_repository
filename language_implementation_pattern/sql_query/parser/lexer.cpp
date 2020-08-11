/**
 * @copyright (c) Copyright 2020 Secsmart. All Rights Reserved.
 * @license
 * @file  : lexer.hpp
 * @author: Jona 
 * @email : wuzhenyu@secsmart.net
 * @date  : 2020-08-03
 * @brief : abstract lexer 
*/

#include <stdio.h>
#include <string>
#include <iostream>

#include "lexer.hpp"
#include "token.hpp"

Lexer::Lexer(std::string input) : input_(input), p_(0) {
  c_ = input_.at(p_);
}

Lexer::~Lexer() {}

void Lexer::Consume() {
  p_++;
  if (p_ >= input_.length()) {
    c_ = EOF;
  } else {
    c_ = input_.at(p_);
  }
}

void Lexer::Match(char x) {
  if (c_ == x) {
    Consume();
  } else {
    std::cout << "expecting " << x << "; found " << c_ << std::endl;
    exit(EXIT_FAILURE);
  }
}


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

#include <stack>
#include <vector>
#include "lexer.hpp"
#include "token.hpp"
#include "parser_exceptions.hpp"

// next_pos_ 应该是 current_pos_
class Parser {
public:
  Parser(Lexer* lexer): lexer_(lexer), next_pos_(0) {
    lookahead_.clear();
  }
  virtual ~Parser() {}

  void Match(int x) {
    if (LA(1) == x) {
      std::cout << "match " << LT(1).ToString() << std::endl;
      Consume();
    } else {
      throw RuntimeException("mismatched, excepting " + lexer_->GetTokenName(x) + " found " + LT(1).ToString());
    }
  }

  void Consume() {
    next_pos_ ++;
    if ((next_pos_ == lookahead_.size()) && !IsSpeculating()) {
      next_pos_ = 0;
      lookahead_.clear();
    }

    Sync(1); // get a new token
  }

  bool IsSpeculating() {
    return markers_.size() > 0;
  }

  Token LT(int i) {
    Sync(i);
    return lookahead_.at(next_pos_ + i - 1);
  }

  // n = next_pos_ + i - lookahead_.size()
  void Sync(int i) {
    int n = next_pos_ + i - 1;
    int len = lookahead_.size() - 1;
    if (n > len) {
      n = n - len;
      Fill(n);
    }
  }

  void Fill(int n) {
    for (int i = 0; i < n; i++) {
      lookahead_.push_back(lexer_->NextToken());
    }
  }

  int LA(int i) {
    return LT(i).GetType();
  }

  int Mark() {
    markers_.push(next_pos_);
    return next_pos_;
  }

  void Release() {
    int marker = markers_.top();
    markers_.pop();
    next_pos_ = marker;
  }

  Lexer* lexer_;
  std::stack<int> markers_;
  std::vector<Token> lookahead_;
  int next_pos_;
};

#endif /* __PARSER_H__ */

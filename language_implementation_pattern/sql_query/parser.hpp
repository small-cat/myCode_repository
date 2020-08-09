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
#include <map>
#include "lexer.hpp"
#include "token.hpp"
#include "parser_exceptions.hpp"

const static int FAILED = -1;
extern std::map<int, int> list_memo;

class Parser {
public:
  Parser(Lexer* lexer): lexer_(lexer), cur_pos_(0) {
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
    cur_pos_ ++;
    if ((cur_pos_ == lookahead_.size()) && !IsSpeculating()) {
      cur_pos_ = 0;
      lookahead_.clear();
      list_memo.clear();
    }

    Sync(1); // get a new token
  }

  bool IsSpeculating() {
    return markers_.size() > 0;
  }

  Token LT(int i) {
    Sync(i);
    return lookahead_.at(cur_pos_ + i - 1);
  }

  // n = cur_pos_ + i - lookahead_.size()
  void Sync(int i) {
    int n = cur_pos_ + i - 1;
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
    markers_.push(cur_pos_);
    return cur_pos_;
  }

  void Release() {
    int marker = markers_.top();
    markers_.pop();
    cur_pos_ = marker;
  }

  int Index() {
    return cur_pos_;
  }

  bool AlreadyParsedRule(std::map<int, int> memoization) {
    auto search = memoization.find(cur_pos_);
    if (search == memoization.end()) {
      return false;
    }

    int memo = search->second;

    if (memo == FAILED) {
      throw RuntimeException("Previous Parsed Failed");
    }

    std::cout << "parsed list before at index " << Index() << "; skip ahead to token index " << memo << ": " << lookahead_.at(memo).GetText() << std::endl;
    cur_pos_ = memo;
    return true;
  }

  void Memoize(std::map<int, int>& memoization, int start_token_index, bool failed) {
    int stop_token_index = failed ? FAILED : Index();
    memoization.emplace(std::make_pair(start_token_index, stop_token_index));
  } 

  Lexer* lexer_;
  std::stack<int> markers_;
  std::vector<Token> lookahead_;
  int cur_pos_;
};

#endif /* __PARSER_H__ */

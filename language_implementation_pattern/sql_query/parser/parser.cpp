/**
 * @copyright (c) Copyright 2020 Secsmart. All Rights Reserved.
 * @license
 * @file  : parser.cpp
 * @author: Jona 
 * @email : wuzhenyu@secsmart.net
 * @date  : 2020-08-04
 * @brief : parser 
 */

#include <iostream>
#include "parser.hpp"

Parser::Parser(CommonTokenStream* tokens): tokens_(tokens), cur_pos_(0) {
  lookahead_.clear();
  list_memo_.clear();
}
Parser::~Parser() {}

void Parser::Match(int x) {
  if (LA(1) == x) {
    std::cout << "match " << LT(1)->ToString() << std::endl;
    Consume();
  } else {
    throw RuntimeException("mismatched, excepting " + tokens_->GetTokenName(x) + " found " + LT(1)->ToString());
  }
}

void Parser::Consume() {
  cur_pos_ ++;
  if ((cur_pos_ == lookahead_.size()) && !IsSpeculating()) {
    cur_pos_ = 0;
    lookahead_.clear();
    list_memo_.clear();
  }

  Sync(1); // get a new token
}

bool Parser::IsSpeculating() {
  return markers_.size() > 0;
}

Token* Parser::LT(int i) {
  Sync(i);
  return lookahead_.at(cur_pos_ + i - 1);
}

// n = cur_pos_ + i - lookahead_.size()
void Parser::Sync(int i) {
  int n = cur_pos_ + i - 1;
  int len = lookahead_.size() - 1;
  if (n > len) {
    n = n - len;
    Fill(n);
  }
}

void Parser::Fill(int n) {
  for (int i = 0; i < n; i++) {
    lookahead_.push_back(tokens_->NextToken());
  }
}

int Parser::LA(int i) {
  return LT(i)->GetType();
}

int Parser::Mark() {
  markers_.push(cur_pos_);
  return cur_pos_;
}

void Parser::Release() {
  int marker = markers_.top();
  markers_.pop();
  cur_pos_ = marker;
}

int Parser::Index() {
  return cur_pos_;
}

bool Parser::AlreadyParsedRule() {
  auto search = list_memo_.find(cur_pos_);
  if (search == list_memo_.end()) {
    return false;
  }

  int memo = search->second;

  if (memo == FAILED) {
    throw RuntimeException("Previous Parsed Failed");
  }

  std::cout << "parsed list before at index " << Index() << "; skip ahead to token index " << memo << ": " << lookahead_.at(memo)->GetText() << std::endl;
  cur_pos_ = memo;
  return true;
}

void Parser::Memoize(int start_token_index, bool failed) {
  int stop_token_index = failed ? FAILED : Index();
  list_memo_.emplace(std::make_pair(start_token_index, stop_token_index));
} 

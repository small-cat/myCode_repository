/**
 * @copyright (c) Copyright 2020 Secsmart. All Rights Reserved.
 * @license
 * @file  : common_token_stream.hpp
 * @author: Jona 
 * @email : wuzhenyu@secsmart.net
 * @date  : 2020-08-10
 * @brief : get all tokens from lexer
 */
#include <vector>

#include "common_token_stream.hpp"

CommonTokenStream::CommonTokenStream(Lexer* lexer) : lexer_(lexer), cur_pos_(0) {
  Fill();
}

CommonTokenStream::~CommonTokenStream() {
  if (!tokens_.empty()) {
    for (auto iter = tokens_.begin(); iter != tokens_.end(); iter++) {
      if (*iter != nullptr) {
        delete (*iter);
        *iter = nullptr;
      }
    }
  }
}

void CommonTokenStream::Fill() {
  Token* t = lexer_->NextToken();
  while (t->GetType() != EOF_TYPE) {
    tokens_.push_back(t);
    t = lexer_->NextToken();
  }

  tokens_.push_back(t);
}

std::vector<Token*> CommonTokenStream::GetTokens() {
  return tokens_;
}

Token* CommonTokenStream::NextToken() {
  if (cur_pos_ < tokens_.size()) {
    return tokens_.at(cur_pos_++);
  }

  return new Token(EOF_TYPE, "EOF");
}

std::string CommonTokenStream::GetTokenName(int type) {
  return lexer_->GetTokenName(type);
}


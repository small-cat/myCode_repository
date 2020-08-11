/**
 * @copyright (c) Copyright 2020 Secsmart. All Rights Reserved.
 * @license
 * @file  : token.hpp
 * @author: Jona 
 * @email : wuzhenyu@secsmart.net
 * @date  : 2020-08-03
 * @brief : token definition
*/
#ifndef __TOKEN_H__
#define __TOKEN_H__

#include <string>
#include <vector>

class Token {
public:
  Token() {}
  Token(int type, std::string text) : type_(type), text_(text), start_(0), end_(0) {}
  Token(int type, char ch, int start, int end) : type_(type), text_(std::string(1, ch)), start_(start), end_(end) {}
  Token(int type, std::string text, int start, int end) : type_(type), text_(text), start_(start), end_(end) {}

  Token(const Token& t) {
    type_  = t.type_;
    text_  = t.text_;
    start_ = t.start_;
    end_   = t.end_;
  }

  Token& operator=(const Token& t) {
    if (this == &t) {
      return *this;
    }
    type_  = t.type_;
    text_  = t.text_;
    start_ = t.start_;
    end_   = t.end_;
  }

  virtual ~Token() {}

  std::string ToString() {
    return "<'" + text_ + "', " + std::to_string(type_) + ", " + std::to_string(start_) +  ":" + std::to_string(end_) + ">";
  }

  std::string GetText() {
    return text_;
  }

  int GetType() {
    return type_;
  }

  int GetStartPos() {
    return start_;
  }

  int GetEndPos() {
    return end_;
  }

private:
  int type_;
  std::string text_; 
  int start_;         // start position of token in stream
  int end_;           // end position
};

#endif /* __TOKEN_H__ */

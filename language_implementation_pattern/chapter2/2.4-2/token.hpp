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

extern std::string TokenNames[];
class Token {
public:
  Token(int type, std::string text) : type_(type), text_(text) {}
  virtual ~Token() {}

  std::string ToString() {
    return "<'" + text_ + "', " + TokenNames[type_] + ">";
  }

  int GetType() {
    return type_;
  }

private:
  int type_;
  std::string text_;
};

#endif /* __TOKEN_H__ */

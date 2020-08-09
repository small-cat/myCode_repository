/**
 * @copyright (c) Copyright 2020 Secsmart. All Rights Reserved.
 * @license
 * @file  : type.hpp
 * @author: Jona 
 * @email : wuzhenyu@secsmart.net
 * @date  : 2020-08-06
 * @brief : type is also a symbol
*/
#ifndef __TYPE_H__
#define __TYPE_H__

#include "abstract_symbol.hpp"

class Type : public ABSymbol {
public:
  Type(std::string name) : name_(name) {}
  virtual ~Type() {}

  std::string name() {
    return name_;
  }

private:
  std::string name_;
};

#endif /* __TYPE_H__ */

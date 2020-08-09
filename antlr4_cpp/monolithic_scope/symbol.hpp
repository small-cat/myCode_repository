/**
 * @copyright (c) Copyright 2020 Secsmart. All Rights Reserved.
 * @license
 * @file  : symbol.hpp
 * @author: Jona 
 * @email : wuzhenyu@secsmart.net
 * @date  : 2020-08-06
 * @brief : symbol definitions
*/
#ifndef __SYMBOL_H__
#define __SYMBOL_H__

#include <string>
#include "abstract_symbol.hpp"
#include "type.hpp"

class Symbol : public ABSymbol {
public:
  Symbol(std::string name, Type type) : name_(name), type_(type) {}
  virtual ~Symbol() {}

  std::string name() {
    return name_;
  }

  std::string ToString() {
    return "<" + name_ + ":" + type_.name() + ">";
  }

private:
  std::string name_;
  Type type_;
};

#endif /* __SYMBOL_H__ */

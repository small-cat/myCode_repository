/**
 * @copyright (c) Copyright 2020 Secsmart. All Rights Reserved.
 * @license
 * @file  : scope.hpp
 * @author: Jona 
 * @email : wuzhenyu@secsmart.net
 * @date  : 2020-08-06
 * @brief : scope definitions
*/
#ifndef __SCOPE_H__
#define __SCOPE_H__

#include "symbol.hpp"

class Scope  {
public:
  Scope() {}
  virtual ~Scope() {}

  virtual std::string GetScopeName() = 0;         // get scope name
  virtual Scope* GetEncolsingScope() = 0;          // get parent's scope
  virtual void Define(Symbol sym) = 0;            // define a new symbol in current scope
  virtual Symbol Resolve(std::string name) = 0;   // search symbol by name from current scope
};

#endif /* __SCOPE_H__ */

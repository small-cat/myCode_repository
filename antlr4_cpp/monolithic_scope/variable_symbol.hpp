/**
 * @copyright (c) Copyright 2020 Secsmart. All Rights Reserved.
 * @license
 * @file  : variable_symbol.hpp
 * @author: Jona 
 * @email : wuzhenyu@secsmart.net
 * @date  : 2020-08-06
 * @brief : variable definitions
*/
#ifndef __VARIABLE_SYMBOL_H__
#define __VARIABLE_SYMBOL_H__

#include "symbol.hpp"
#include "type.hpp"

class VariableSymbol : public Symbol {
public:
  VariableSymbol(std::string name, Type type) : Symbol(name, type) {}
  virtual ~VariableSymbol() {}

};

#endif /* __VARIABLE_SYMBOL_H__ */

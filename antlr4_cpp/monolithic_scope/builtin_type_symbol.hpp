/**
 * @copyright (c) Copyright 2020 Secsmart. All Rights Reserved.
 * @license
 * @file  : builtin_type_symbol.hpp
 * @author: Jona 
 * @email : wuzhenyu@secsmart.net
 * @date  : 2020-08-06
 * @brief : builtin type symbol definitions
*/
#ifndef __BUILTIN_TYPE_SYMBOL_H__
#define __BUILTIN_TYPE_SYMBOL_H__

#include "type.hpp"

class BuiltinTypeSymbol : public Type {
public:
  BuiltinTypeSymbol(std::string name) : Type(name) {}
  virtual ~BuiltinTypeSymbol() {}
};

#endif /* __BUILTIN_TYPE_SYMBOL_H__ */

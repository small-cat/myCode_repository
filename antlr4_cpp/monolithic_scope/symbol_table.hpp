/**
 * @copyright (c) Copyright 2020 Secsmart. All Rights Reserved.
 * @license
 * @file  : symbol_table.hpp
 * @author: Jona 
 * @email : wuzhenyu@secsmart.net
 * @date  : 2020-08-06
 * @brief : symbol table for saving all symbols
*/
#ifndef __SYMBOL_TABLE_H__
#define __SYMBOL_TABLE_H__

#include "scope.hpp"
#include "symbol.hpp"
#include "builtin_type_symbol.hpp"

#include <map>

class SymbolTable : public Scope {
public:
  SymbolTable() {
    InitTypeSystem();
  }
  virtual ~SymbolTable() {}

  void InitTypeSystem() {
    Define(BuiltinTypeSymbol("int"));
    Define(BuiltinTypeSymbol("float"));
  }

  virtual std::string GetScopeName {
    return "global";
  }

  virtual Scope* GetEnclosingScope() {
    return nullptr;
  }

  virtual void Define(Symbol sym) {
    auto sym_name = sym.name();
    symbols_[name] = sym;
  }

  virtual Symbol Resolve(std::string name) {
    auto search = symbols_.find(name);
    if (search == symbols_.end()) {
      return {};
    }
    return search->second;
  }

private:
  std::map<std::string, Symbol> symbols_;
};

#endif /* __SYMBOL_TABLE_H__ */

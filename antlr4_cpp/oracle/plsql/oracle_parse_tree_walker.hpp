/*****************************************************************************
 * @file  : oracle_parse_tree_walker.hpp - 
 * @brief : (c) Copyright 2020 . All Rights Reserved.
 * @author: Jona 
 * @email : mblrwuzy@gmail.com
 * @date  : 2020-01-16
*****************************************************************************/
#ifndef __ORACLE_PARSE_TREE_WALKER_H__
#define __ORACLE_PARSE_TREE_WALKER_H__

#include "antlr4-common.h"
#include "tree/ParseTreeWalker.h"

class OracleParseTreeWalker : public antlr4::tree::ParseTreeWalker {
  public:
    virtual void walk(antlr4::tree::ParseTreeListener *listener, antlr4::tree::ParseTree *t) const override;
    virtual bool excludeNode(antlr4::tree::ParseTree *t) const;
};

#endif /* __ORACLE_PARSE_TREE_WALKER_H__ */

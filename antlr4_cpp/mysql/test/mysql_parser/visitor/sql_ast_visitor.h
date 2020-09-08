/**
 * @copyright (c) Copyright 2020 Secsmart. All Rights Reserved.
 * @license
 * @file  : sql_ast_visitor.h
 * @author: Jona 
 * @email : wuzhenyu@secsmart.net
 * @date  : 2020-08-21
 * @brief : abstract interface for ast visitor
*/
#ifndef __SQL_AST_VISITOR_H__
#define __SQL_AST_VISITOR_H__

#include <string>

class SQLAstVisitor {
public:
  SQLAstVisitor();
  virtual ~SQLAstVisitor();

  SQLAstVisitor(const SQLAstVisitor&) = delete;
  SQLAstVisitor& operator=(const SQLAstVisitor&) = delete;
};

#endif /* __SQL_AST_VISITOR_H__ */

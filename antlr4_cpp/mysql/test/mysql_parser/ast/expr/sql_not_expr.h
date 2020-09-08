/**
 * @copyright (c) Copyright 2020 Secsmart. All Rights Reserved.
 * @license
 * @file  : sql_not_expr.h
 * @author: Jona 
 * @email : wuzhenyu@secsmart.net
 * @date  : 2020-08-20
 * @brief : NOT? expr
*/
#ifndef __SQL_NOT_EXPR_H__
#define __SQL_NOT_EXPR_H__

#include <string>

#include "sql_expr_impl.h"

class SQLNotExpr : public SQLExprImpl {
public:
  SQLNotExpr();
  virtual ~SQLNotExpr();

  SQLExpr* GetExpr();
  void SetExpr(SQLExpr* x);
  std::string GetText();
  void Accept(SQLAstVisitor* visitor);
private:
  SQLExpr* expr_;
};

#endif /* __SQL_NOT_EXPR_H__ */

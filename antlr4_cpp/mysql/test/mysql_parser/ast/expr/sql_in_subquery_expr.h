/**
 * @copyright (c) Copyright 2020 Secsmart. All Rights Reserved.
 * @license
 * @file  : sql_in_subquery_expr.h
 * @author: Jona 
 * @email : wuzhenyu@secsmart.net
 * @date  : 2020-08-21
 * @brief : in subquery expression
 * in '(' selectStatement ')'
*/
#ifndef __SQL_IN_SUBQUERY_EXPR_H__
#define __SQL_IN_SUBQUERY_EXPR_H__

#include "sql_expr_impl.h"

class SQLInSubqueryExpr : public SQLExprImpl {
public:
  SQLInSubqueryExpr();
  SQLInSubqueryExpr(SQLSelect* subq);
  virtual ~SQLInSubqueryExpr();

  void SetInNot(bool innot);
  bool GetInNot();
  void SetExpr(SQLExpr* x);
  SQLExpr* GetExpr();
  void SetSubquery(SQLSelect* subq);
  SQLSelect* GetSubquery();
  std::string GetText();
  void Accept();
private:
  bool in_not_;
  SQLExpr* expr_;
  SQLSelect* subquery_;
};

#endif /* __SQL_IN_SUBQUERY_EXPR_H__ */

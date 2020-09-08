/**
 * @copyright (c) Copyright 2020 Secsmart. All Rights Reserved.
 * @license
 * @file  : sql_in_list_expr.h
 * @author: Jona 
 * @email : wuzhenyu@secsmart.net
 * @date  : 2020-08-21
 * @brief : in list 
 * in_col=predicate NOT? IN '(' (selectStatement | expressions) ')'
*/

#ifndef __SQL_IN_LIST_EXPR_H__
#define __SQL_IN_LIST_EXPR_H__

#include <vector>
#include "sql_expr_impl.h"

class SQLInListExpr : public SQLExprImpl {
public:
  SQLInListExpr();
  SQLInListExpr(SQLExpr* x);
  SQLInListExpr(SQLExpr* x, bool innot);
  virtual ~SQLInListExpr();
  bool GetInNot();
  void SetInNot(bool innot);
  void SetExpr(SQLExpr* x);
  SQLExpr* GetExpr();
  void SetTargetList(std::vector<SQLExpr*> &target_list);
  void AddTargetExpr(SQLExpr* x);
  std::vector<SQLExpr*> GetTargetList();
  std::string GetText();
  void Accept(SQLAstVisitor* visitor);

private:
  bool in_not_;
  SQLExpr* expr_;
  std::vector<SQLExpr*> target_list_;
};

#endif /* __SQL_IN_LIST_EXPR_H__ */

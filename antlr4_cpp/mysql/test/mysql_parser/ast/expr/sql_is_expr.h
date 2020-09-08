/**
 * @copyright (c) Copyright 2020 Secsmart. All Rights Reserved.
 * @license
 * @file  : sql_is_expr.h
 * @author: Jona 
 * @email : wuzhenyu@secsmart.net
 * @date  : 2020-08-21
 * @brief : definitions for is expression
 * predicate IS NOT? testValue=(TRUE | FALSE | UNKNOWN)
 * predicate IS nullNotnull
*/

#ifndef __SQL_IS_EXPR_H__
#define __SQL_IS_EXPR_H__

#include <string>
#include "sql_expr_impl.h"

class SQLIsExpr : public SQLExprImpl {
public:
  SQLIsExpr();
  virtual ~SQLIsExpr();

  enum IsValue {IS_NULL, IS_TRUE, IS_FALSE, IS_UNKNOWN};

  void SetIsNot(bool isnot);
  bool GetIsNot();
  void SetIsValueLiteral(const std::string& lit);
  std::string GetIsValueLiteral();
  std::string GetText();
  void Accept(SQLAstVisitor* visitor);
private:
  bool is_not_;
  IsValue is_value_;
  std::string is_value_literal_;
};

#endif /* __SQL_IS_EXPR_H__ */


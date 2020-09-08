/**
 * @copyright (c) Copyright 2020 Secsmart. All Rights Reserved.
 * @license
 * @file  : sql_expr.h
 * @author: Jona 
 * @email : wuzhenyu@secsmart.net
 * @date  : 2020-08-20
 * @brief : abstract interface for sql expr
*/
#ifndef __SQL_EXPR_H__
#define __SQL_EXPR_H__

#include <string>
#include <vector>

#include "sql_object.h"

class SQLExpr : public SQLObject {
public:
  SQLExpr();
  virtual ~SQLExpr();

  virtual bool operator== (const SQLExpr &other) const;
};

#endif /* __SQL_EXPR_H__ */

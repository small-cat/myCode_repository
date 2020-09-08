/**
 * @copyright (c) Copyright 2020 Secsmart. All Rights Reserved.
 * @license
 * @file  : sql_expr_impl.h
 * @author: Jona 
 * @email : wuzhenyu@secsmart.net
 * @date  : 2020-08-20
 * @brief : implementation for sql expr
*/
#ifndef __SQL_EXPR_IMPL_H__
#define __SQL_EXPR_IMPL_H__

#include "sql_expr.h"
#include "sql_object.h"

class SQLExprImpl : public SQLExpr {
public:
  SQLExprImpl();
  virtual ~SQLExprImpl();
};

#endif /* __SQL_EXPR_IMPL_H__ */

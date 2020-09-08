/**
 * @copyright (c) Copyright 2020 Secsmart. All Rights Reserved.
 * @license
 * @file  : sql_expr.cpp
 * @author: Jona 
 * @email : wuzhenyu@secsmart.net
 * @date  : 2020-08-20
 * @brief : sql expr definitions
*/

#include "sql_expr.h"

SQLExpr::SQLExpr() {}

SQLExpr::~SQLExpr() {}

bool SQLExpr::operator==(const SQLExpr &other) const {
  return this == &other;
}

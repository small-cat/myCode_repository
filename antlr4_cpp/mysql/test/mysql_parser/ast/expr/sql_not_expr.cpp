/**
 * @copyright (c) Copyright 2020 Secsmart. All Rights Reserved.
 * @license
 * @file  : sql_not_expr.cpp
 * @author: Jona 
 * @email : wuzhenyu@secsmart.net
 * @date  : 2020-08-20
 * @brief : definitions for sql not expr
*/
#include "sql_not_expr.h"
#include "sql_object.h"

SQLNotExpr::SQLNotExpr() : expr_(nullptr) {}

SQLNotExpr::~SQLNotExpr() {}

SQLExpr* SQLNotExpr::GetExpr() {
  return expr_;
}

void SQLNotExpr::SetExpr(SQLExpr* x) {
  if (x != nullptr) {
    x->SetParent(this);
  }

  this->expr_ = x;
}

std::string SQLNotExpr::GetText() {
  return " NOT " + expr_->GetText();
}

void SQLNotExpr::Accept(SQLAstVisitor* visitor) {
  visitor->Visit(this);
}


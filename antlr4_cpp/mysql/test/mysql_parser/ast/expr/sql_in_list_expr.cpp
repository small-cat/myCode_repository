/**
 * @copyright (c) Copyright 2020 Secsmart. All Rights Reserved.
 * @license
 * @file  : sql_in_list_expr.cpp
 * @author: Jona 
 * @email : wuzhenyu@secsmart.net
 * @date  : 2020-08-21
 * @brief : in list expr definitions
*/

#include "sql_in_list_expr.h"

SQLInListExpr::SQLInListExpr() : in_not_(false), expr_(nullptr) {}
SQLInListExpr::SQLInListExpr(SQLExpr* x) : in_not_(false), expr_(x) {}
SQLInListExpr::SQLInListExpr(SQLExpr* x, bool innot) : in_not_(innot), expr_(x) {}

SQLInListExpr::~SQLInListExpr() {}

bool SQLInListExpr::GetInNot() {
  return in_not_;
}

void SQLInListExpr::SetInNot(bool innot) {
  in_not_ = innot;
}

void SQLInListExpr::SetExpr(SQLExpr* x) {
  if (x != nullptr) {
    x->SetParent(this);
  }

  this->expr_ = x;
}

SQLExpr* SQLInListExpr::GetExpr() {
  return expr_;
}

std::string SQLInListExpr::GetText() {
  std::string res = expr_->GetText() + (in_not_? " NOT IN " : " IN ") + " ( ";
  for (auto& exp : target_list_) {
    res += exp->GetText();
  }

  res += " ) ";
  return res;
}

void SQLInListExpr::Accept(SQLAstVisitor* visitor) {
  visitor->Visit(this);
}

void SQLInListExpr::SetTargetList(std::vector<SQLExpr*> &target_list) {
  target_list_ = target_list;
}

void SQLInListExpr::AddTargetExpr(SQLExpr* x) {
  if (x != nullptr) {
    x->SetParent(this);
  }

  target_list_.push_back(x);
}

std::vector<SQLExpr*> SQLInListExpr::GetTargetList() {
  return target_list_;
}

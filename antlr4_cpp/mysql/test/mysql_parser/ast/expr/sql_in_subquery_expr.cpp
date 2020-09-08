#include "sql_in_subquery_expr.h"

SQLInSubqueryExpr::SQLInSubqueryExpr() : in_not_(false), expr_(nullptr), subquery_(nullptr) {}

SQLInSubqueryExpr::SQLInSubqueryExpr(SQLSelect* subq) : in_not_(false), expr_(nullptr), subquery_(subq) {}

SQLInSubqueryExpr::~SQLInSubqueryExpr() {}

void SQLInSubqueryExpr::SetInNot(bool innot) {
  in_not_ = innot;
}

bool SQLInSubqueryExpr::GetInNot() {
  return in_not_;
}

void SQLInSubqueryExpr::SetExpr(SQLExpr* x) {
  if (x != nullptr) {
    x->SetParent(this);
  }

  expr_ = x;
}

SQLExpr* SQLInSubqueryExpr::GetExpr() {
  return expr_;
}

void SQLInSubqueryExpr::SetSubquery(SQLSelect* subq) {
  subquery_ = subq;
}

SQLSelect* SQLInSubqueryExpr::GetSubquery() {
  return subquery_;
}

std::string SQLInSubqueryExpr::GetText() {
  return expr_->GetText() + (in_not_? " NOT IN " : " IN ") + " ( " + subquery_->GetText() + " ) ";
}

void SQLInSubqueryExpr::Accept(SQLAstVisitor* visitor) {
  visitor->Visit(this);
}

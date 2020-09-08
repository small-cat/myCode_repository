#include "sql_is_expr.h"

SQLIsExpr::SQLIsExpr() : is_not_(false), is_value_(SQLIsExpr::IsValue::IS_UNKNOWN) {}
SQLIsExpr::~SQLIsExpr() {}

void SQLIsExpr::SetIsNot(bool isnot) {
  is_not_ = isnot;
}

bool SQLIsExpr::GetIsNot() {
  return is_not_;
}

std::string SQLIsExpr::GetText() {
  return (is_not_? " NOT " : " ") + is_value_literal_;
}

void SQLIsExpr::SetIsValueLiteral(const std::string &lit) {
  is_value_literal_ = lit;
}

std::string SQLIsExpr::GetIsValueLiteral() {
  return is_value_literal_;
}

void SQLIsExpr::Accept(SQLAstVisitor* visitor) {
  visitor->Visit(this);
}

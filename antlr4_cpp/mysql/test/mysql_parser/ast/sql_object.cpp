/**
 * @copyright (c) Copyright 2020 Secsmart. All Rights Reserved.
 * @license
 * @file  : sql_object.cpp
 * @author: Jona 
 * @email : wuzhenyu@secsmart.net
 * @date  : 2020-08-20
 * @brief : sql object definitions
*/
#include "sql_object.h"

SQLObject::SQLObject() {}

SQLObject::~SQLObject() {}

SQLObject* SQLObject::GetParent() {
  return parent_;
}

void SQLObject::SetParent(SQLObject* x) {
  parent_ = x;
}

void SQLObject::AddChildren(SQLObject* x) {
  children_.push_back(x);
}

std::vector<SQLObject*> SQLObject::GetChildren() {
  return children_;
}

/**
 * @copyright (c) Copyright 2020 Secsmart. All Rights Reserved.
 * @license
 * @file  : sql_object.h
 * @author: Jona 
 * @email : wuzhenyu@secsmart.net
 * @date  : 2020-08-20
 * @brief : abstract class for sql object definition
*/
#ifndef __SQL_OBJECT_H__
#define __SQL_OBJECT_H__

#include <string>
#include <vector>

class SQLObject {
public:
  SQLObject();
  virtual ~SQLObject();

  SQLObject(const SQLObject&) = delete;
  SQLObject& operator=(const SQLObject&) = delete;

  virtual void Accept(SQLAstVisitor* visitor) = 0;
  virtual std::string GetText() = 0;
  virtual void SetParent(SQLObject* p);
  virtual SQLObject* GetParent();
  virtual void AddChildren(SQLObject* x);
  virtual std::vector<SQLObject*> GetChildren();

  SQLObject* parent_;
  std::vector<SQLObject*> children_;
  
  // attributes operation
  // Reserved
  // virtual void AddAttribute(std::string attr_name, SQLObject* attr_val) = 0;
  // virtual std::map<std::string, SQLObject*> GetAttributes() = 0;
  // virtual SQLObject* GetAttribute(const std::string& attr_name) = 0;
  // virtual bool ContainsAttribute(const std::string& attr_name) = 0;
};

#endif /* __SQL_OBJECT_H__ */

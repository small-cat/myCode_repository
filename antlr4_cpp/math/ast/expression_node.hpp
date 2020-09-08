/**
 * @copyright (c) Copyright 2020 Secsmart. All Rights Reserved.
 * @license
 * @file  : expression_node.hpp
 * @author: Jona 
 * @email : wuzhenyu@secsmart.net
 * @date  : 2020-08-12
 * @brief : ast for expression
*/
#ifndef __EXPRESSION_NODE_H__
#define __EXPRESSION_NODE_H__

#include <string>
#include <iostream>
#include <vector>
#include "antlr4-runtime.h"
#include "abstract_expression_node.hpp"

class UnaryExprNode: public ExpressionNode {
public:
  UnaryExprNode() {}
  virtual ~UnaryExprNode() {}

  std::string sign() { return sign_; }
  void set_sign(std::string sign) { sign_ = sign; }
  void set_value(antlrcpp::Any val) { value_ = val; }
  antlrcpp::Any value() { return value_; }

  virtual void Accept(AbstractAstVisitor* visitor)  {
    visitor->Visit(this);
  }
private:
  std::string sign_;
  antlrcpp::Any value_;
};

class FuncExprNode : public ExpressionNode {
public:
  FuncExprNode() {}
  virtual ~FuncExprNode() {}
  std::string func_name() { return func_name_; }
  std::vector<antlrcpp::Any> arglist() { return arglist_; }
  void set_func_name(std::string func_name) { func_name_ = func_name; }
  void AddArg(antlrcpp::Any node) { arglist_.push_back(node); }

  virtual void Accept(AbstractAstVisitor* visitor) {
    visitor->Visit(this);
  }
private:
  std::string func_name_;
  std::vector<antlrcpp::Any> arglist_;
};

class TwoOperandExprNode : public ExpressionNode {
public:
  TwoOperandExprNode() : oper_(""), left_(nullptr), right_(nullptr) {} 
  TwoOperandExprNode(std::string oper) : oper_(oper), left_(nullptr), right_(nullptr) {} 
  virtual ~TwoOperandExprNode() {}
  std::string oper() { return oper_; }
  void set_oper(std::string oper) { oper_ = oper; }
  void set_left(antlrcpp::Any left) { left_ = left; }
  void set_right(antlrcpp::Any right) { right_ = right; }
  antlrcpp::Any left() { return left_; }
  antlrcpp::Any right() { return right_; }

  virtual void Accept(AbstractAstVisitor* visitor) {
    visitor->Visit(this);
  }
private:
  std::string oper_;
  antlrcpp::Any left_;
  antlrcpp::Any right_;
};

class NumExprNode : public ExpressionNode {
public:
  NumExprNode() : value_("") {}
  virtual ~NumExprNode() {}
  std::string value() { return value_; }
  void set_value(std::string val) { value_ = val; }
  
  virtual void Accept(AbstractAstVisitor* visitor) {
    visitor->Visit(this);
  }
private:
  std::string value_;
};

class ParenExprNode : public ExpressionNode {
public:
  ParenExprNode() {}
  virtual ~ParenExprNode() {}

  antlrcpp::Any value() { return value_; }
  void set_value(antlrcpp::Any val) { value_ = val; }

  virtual void Accept(AbstractAstVisitor* visitor) {
    visitor->Visit(this);
  }
private:
  antlrcpp::Any value_;
};

#endif /* __EXPRESSION_NODE_H__ */


/**
 * @copyright (c) Copyright 2020 Secsmart. All Rights Reserved.
 * @license
 * @file  : abstract_expression_node.hpp
 * @author: Jona 
 * @email : wuzhenyu@secsmart.net
 * @date  : 2020-08-13
 * @brief : abstract expression node
*/
#ifndef __ABSTRACT_EXPRESSION_NODE_H__
#define __ABSTRACT_EXPRESSION_NODE_H__

#include <string>
#include "abstract_ast_visitor.hpp"

class ExpressionNode {
public:
  enum ExprType {UNARY_EXPR, FUNC_EXPR, TWO_OPERAND_EXPR, NUM_EXPR, PAREN_EXPR};

  ExpressionNode() : has_parens_(false) {}
  virtual ~ExpressionNode() {}
  bool has_parens() { return has_parens_; }
  void set_parens(bool paren) { has_parens_ = paren; }
  ExprType type() { return type_; }
  void set_type(ExprType type) { type_ = type; }

  virtual void Accept(AbstractAstVisitor* visitor) = 0;

private:
  ExprType type_;
  bool has_parens_;
};

#endif /* __ABSTRACT_EXPRESSION_NODE_H__ */

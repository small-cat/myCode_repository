/**
 * @copyright (c) Copyright 2020 Secsmart. All Rights Reserved.
 * @license
 * @file  : ast_visitor.hpp
 * @author: Jona 
 * @email : wuzhenyu@secsmart.net
 * @date  : 2020-08-13
 * @brief : visitor for ast tree
*/
#ifndef __AST_VISITOR_H__
#define __AST_VISITOR_H__

#include <string>
#include "antlr4-runtime.h"
#include "expression_node.hpp"
#include "abstract_ast_visitor.hpp"

class ExpressionAstVisitor : public AbstractAstVisitor {
public:
  ExpressionAstVisitor() {}
  virtual ~ExpressionAstVisitor() {}

  void Visit(antlrcpp::Any node) {
    if (node.is<UnaryExprNode*>()) {
      node.as<UnaryExprNode*>()->Accept(this);
    } else if (node.is<FuncExprNode*>()) {
      node.as<FuncExprNode*>()->Accept(this);
    } else if (node.is<TwoOperandExprNode*>()) {
      node.as<TwoOperandExprNode*>()->Accept(this);
    } else if (node.is<NumExprNode*>()) {
      node.as<NumExprNode*>()->Accept(this);
    } else if (node.is<ParenExprNode*>()) {
      node.as<ParenExprNode*>()->Accept(this);
    } else {
      std::cout << "error" << std::endl;
    }
  }

  virtual void Visit(UnaryExprNode* node) {
    std::cout << "sign: " << node->sign() << std::endl;
    std::cout << "value is :" << std::endl;
    Visit(node->value());
  }
  virtual void Visit(FuncExprNode* node) {
    std::cout << "func name: " << node->func_name() << std::endl;
    std::cout << "arglist is:" << std::endl;
    auto arglist = node->arglist();
    for (auto& arg : arglist) {
      Visit(arg);
    }
  }

  virtual void Visit(TwoOperandExprNode* node) {
    std::cout << "left: " << std::endl;
    Visit(node->left());
    std::cout << "operator: " << node->oper() << std::endl;
    std::cout << "right: " << std::endl;
    Visit(node->right());
  }

  virtual void Visit(NumExprNode* node) {
    std::cout << "value: " << node->value() << std::endl;
  }

  virtual void Visit(ParenExprNode* node) {
    std::cout << "(" << std::endl;
    Visit(node->value());
    std::cout << ")" << std::endl;
  }
};

#endif /* __AST_VISITOR_H__ */

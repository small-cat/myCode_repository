/**
 * @copyright (c) Copyright 2020 Secsmart. All Rights Reserved.
 * @license
 * @file  : abstract_ast_visitor.hpp
 * @author: Jona 
 * @email : wuzhenyu@secsmart.net
 * @date  : 2020-08-13
 * @brief : abstract_ast_visitor
*/
#ifndef __ABSTRACT_AST_VISITOR_H__
#define __ABSTRACT_AST_VISITOR_H__

class UnaryExprNode;
class FuncExprNode;
class TwoOperandExprNode;
class NumExprNode;
class ParenExprNode;

class AbstractAstVisitor {
public:
  AbstractAstVisitor() {}
  virtual ~AbstractAstVisitor() {}

  virtual void Visit(UnaryExprNode* node) = 0;
  virtual void Visit(FuncExprNode* node) = 0;
  virtual void Visit(TwoOperandExprNode* node) = 0;
  virtual void Visit(NumExprNode* node) = 0;
  virtual void Visit(ParenExprNode* node) = 0;
  
};

#endif /* __ABSTRACT_AST_VISITOR_H__ */

/**
 * @copyright (c) Copyright 2020 Secsmart. All Rights Reserved.
 * @license
 * @file  : BuildMathAstVisitor.hpp
 * @author: Jona 
 * @email : wuzhenyu@secsmart.net
 * @date  : 2020-08-13
 * @brief : build math ast by antlr visitor
*/
#ifndef __BUILDMATHASTVISITOR_H__
#define __BUILDMATHASTVISITOR_H__

#include "MathParser.h"
#include "MathLexer.h"
#include "MathBaseVisitor.h"
#include "expression_node.hpp"

class BuildMathAstVisitor : public MathBaseVisitor {
public:
  BuildMathAstVisitor() {}
  virtual ~BuildMathAstVisitor() {}

  virtual antlrcpp::Any visitCompileUnit(MathParser::CompileUnitContext *ctx) {
    std::cout << "visitCompileUnit: expr->" << ctx->expr()->getText() << std::endl;
    return visit(ctx->expr());
  }

  virtual antlrcpp::Any visitUnaryExpr(MathParser::UnaryExprContext *ctx) {
    std::cout << "visitUnaryExpr: op->" << ctx->op->getText() << ", expr->" << ctx->expr()->getText() << std::endl;
    auto op = ctx->op;
    antlrcpp::Any node = new UnaryExprNode();
    node.as<UnaryExprNode*>()->set_type(ExpressionNode::UNARY_EXPR);
    switch (op->getType()) {
      case MathLexer::ADD: 
        node.as<UnaryExprNode*>()->set_sign("+");
        node.as<UnaryExprNode*>()->set_value(visit(ctx->expr()));
        break;
      case MathLexer::SUB: 
        node.as<UnaryExprNode*>()->set_sign("-");
        node.as<UnaryExprNode*>()->set_value(visit(ctx->expr()));
        break;
      default:
        return nullptr;
    }

    return node;
  }

  virtual antlrcpp::Any visitMulDivExpr(MathParser::MulDivExprContext *ctx) {
    std::cout << "visitMulDivExpr: op->" << ctx->op->getText() << ", left->" << ctx->left->getText() << ", right->" << ctx->right->getText() << std::endl;
    auto oper = ctx->op;
    antlrcpp::Any node = new TwoOperandExprNode();
    node.as<TwoOperandExprNode*>()->set_type(ExpressionNode::TWO_OPERAND_EXPR);
    switch (oper->getType()) {
      case MathLexer::MUL: 
        node.as<TwoOperandExprNode*>()->set_oper("*");
        node.as<TwoOperandExprNode*>()->set_left(visit(ctx->left));
        node.as<TwoOperandExprNode*>()->set_right(visit(ctx->right));
        break;
      case MathLexer::DIV: 
        node.as<TwoOperandExprNode*>()->set_oper("/");
        node.as<TwoOperandExprNode*>()->set_left(visit(ctx->left));
        node.as<TwoOperandExprNode*>()->set_right(visit(ctx->right));
        break;
      default:
        return nullptr;
    }

    return node;
  }

  virtual antlrcpp::Any visitAddSubExpr(MathParser::AddSubExprContext *ctx) {
    std::cout << "visitAddSubExpr: op->" << ctx->op->getText() << ", left->" << ctx->left->getText() << ", right->" << ctx->right->getText() << std::endl;
    auto oper = ctx->op;
    antlrcpp::Any node = new TwoOperandExprNode();
    node.as<TwoOperandExprNode*>()->set_type(ExpressionNode::TWO_OPERAND_EXPR);
    switch (oper->getType()) {
      case MathLexer::ADD: 
        node.as<TwoOperandExprNode*>()->set_oper("+");
        node.as<TwoOperandExprNode*>()->set_left(visit(ctx->left));
        node.as<TwoOperandExprNode*>()->set_right(visit(ctx->right));
        break;
      case MathLexer::SUB: 
        node.as<TwoOperandExprNode*>()->set_oper("-");
        node.as<TwoOperandExprNode*>()->set_left(visit(ctx->left));
        node.as<TwoOperandExprNode*>()->set_right(visit(ctx->right));
        break;
      default:
        return nullptr;
    }

    return node;
  }

  virtual antlrcpp::Any visitFuncExpr(MathParser::FuncExprContext *ctx) {
    std::cout << "visitFuncExpr: func->" << ctx->func->getText() << std::endl;
    antlrcpp::Any node = new FuncExprNode();
    node.as<FuncExprNode*>()->set_func_name(ctx->func->getText()); // get func name
    node.as<FuncExprNode*>()->set_type(ExpressionNode::FUNC_EXPR);

    auto exprs = ctx->expr();
    for (auto expr_ctx : exprs) {
      antlrcpp::Any arg = visit(expr_ctx);
      node.as<FuncExprNode*>()->AddArg(arg);
    }

    return node;
  }

  virtual antlrcpp::Any visitNumExpr(MathParser::NumExprContext *ctx) {
    std::cout << "visitNumExpr: NUM->" << ctx->NUM()->getText() << std::endl;
    antlrcpp::Any node = new NumExprNode();
    node.as<NumExprNode*>()->set_type(ExpressionNode::NUM_EXPR);
    node.as<NumExprNode*>()->set_value(ctx->NUM()->getText());
    return node;
  }

  virtual antlrcpp::Any visitParenExpr(MathParser::ParenExprContext *ctx) {
    std::cout << "visitParenExpr: '(' " << ctx->getText() << " ')'" << std::endl;
    antlrcpp::Any node = new ParenExprNode();
    node.as<ParenExprNode*>()->set_type(ExpressionNode::PAREN_EXPR);
    node.as<ParenExprNode*>()->set_parens(true);
    node.as<ParenExprNode*>()->set_value(visit(ctx->expr()));
    return node;
  }
};

#endif /* __BUILDMATHASTVISITOR_H__ */

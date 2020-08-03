/**
 * @copyright (c) Copyright 2020 Secsmart. All Rights Reserved.
 * @license
 * @file  : walker_listener.hpp
 * @author: Jona 
 * @email : wuzhenyu@secsmart.net
 * @date  : 2020-07-31
 * @brief : This is ...
*/
#ifndef __WALKER_LISTENER_H__
#define __WALKER_LISTENER_H__

#include <string>
#include "ExprParser.h"
#include "ExprBaseListener.h"

class WalkerListener : public ExprBaseListener {
public:
  WalkerListener() {}
  virtual ~WalkerListener() {}

  void exitMul_expr(ExprParser::Mul_exprContext* ctx) {
    expr_eles_.push_back("*");
  }

  void exitDiv_expr(ExprParser::Div_exprContext* ctx) {
    expr_eles_.push_back("/");
  }

  void exitAdd_expr(ExprParser::Add_exprContext* ctx) {
    expr_eles_.push_back("+");
  }

  void exitSub_expr(ExprParser::Sub_exprContext* ctx) {
    expr_eles_.push_back("-");
  }

  void enterAtom(ExprParser::AtomContext* ctx) {
    if (ctx->expr()) {
      expr_eles_.push_back("()");
    }
  }

  void exitAtom(ExprParser::AtomContext* ctx) {
    if (ctx->INT()) {
      expr_eles_.push_back(ctx->INT()->getText());
    } else if (ctx->ID()) {
      expr_eles_.push_back(ctx->ID()->getText());
    }  
  }

  std::vector<std::string> GetExpr() {
    return expr_eles_;
  }

private:
  std::vector<std::string> expr_eles_;
};

#endif /* __WALKER_LISTENER_H__ */

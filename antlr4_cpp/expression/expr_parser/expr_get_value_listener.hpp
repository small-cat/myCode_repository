/**
 * @copyright (c) Copyright 2020 Secsmart. All Rights Reserved.
 * @license
 * @file  : expr_get_value_listener.hpp
 * @author: Jona 
 * @email : wuzhenyu@secsmart.net
 * @date  : 2020-09-02
 * @brief : This is ...
*/
#ifndef __EXPR_GET_VALUE_LISTENER_H__
#define __EXPR_GET_VALUE_LISTENER_H__

#include "ExprParser.h"
#include "ExprBaseListener.h"

class ExprGetValue : public ExprBaseListener {
public:
  ExprGetValue(ExprParser* parser) : parser_(parser) {
    tokens_ = parser_->getTokenStream();
  }
  virtual ~ExprGetValue() {}

  virtual void enterMul_expr(ExprParser::Mul_exprContext* ctx) {
    std::cout << tokens_->getText(ctx) << std::endl;
  }

private:
  ExprParser* parser_;
  antlr4::TokenStream* tokens_;
};

#endif /* __EXPR_GET_VALUE_LISTENER_H__ */

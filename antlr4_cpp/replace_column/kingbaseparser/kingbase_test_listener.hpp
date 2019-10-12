/*************************************************************************
* @file kingbase_test_listener.hpp
* @brief 
* @author Jona
* @date 15/09/2019
*************************************************************************/
#ifndef __KINGBASE_TEST_LISTENER_HPP__ 
#define __KINGBASE_TEST_LISTENER_HPP__ 

#include <iostream>
#include <typeinfo>

#include "KingbaseSqlParser.h"
#include "KingbaseSqlParserBaseListener.h"

class KingbaseTestListener : public KingbaseSqlParserBaseListener {
  public:
    KingbaseTestListener() {}
    ~KingbaseTestListener() {}

    // the depth of "root" query block is 9
    void enterQuery_block(KingbaseSqlParser::Query_blockContext *ctx) {
      if (nullptr == ctx)
        return;

      std::cout << "enterQuery_block ---> depth: " << ctx->depth() << std::endl;
      std::cout << ctx->parent << std::endl;
    }
    void exitQuery_block(KingbaseSqlParser::Query_blockContext* ctx) {
    }

    void enterSelect_statement(KingbaseSqlParser::Select_statementContext* ctx) {
      if (nullptr == ctx)
        return;

      std::cout << "enterSelect_statement ---> depth: " << ctx->depth() << std::endl;
      std::cout << ctx->parent << std::endl;
    }

    void exitSelect_statement(KingbaseSqlParser::Select_statementContext* ctx) {
    }
  private:
};

#endif

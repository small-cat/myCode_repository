/*****************************************************************************
 * @file  : IParser.cpp - 
 * @brief : (c) Copyright 2019 . All Rights Reserved.
 * @author:  
 * @email : 
 * @date  : 2019-11-18
*****************************************************************************/
#include "IParser.h"

#include "error_verbose_listener.hpp"
#include "get_operate_info_listener.h"

#include "HqlsqlParser.h"
#include "HqlsqlLexer.h"

using namespace antlr4;
using namespace antlr4_hive_parser;

namespace parser {
IParser::IParser() {}

IParser::~IParser() {}

bool IParser::Init() {}

std::vector<OperateInfo> IParser::Parse(const std::string &operateStr) {
  if (operateStr.empty()) {
    return {};
  }

  std::vector<OperateInfo> operate_list_result;

  // call antlr functions to parse
  ANTLRInputStream input(operateStr);
  HqlsqlLexer lexer(&input);
  CommonTokenStream tokens(&lexer);

  tokens.fill();
  for (auto token : tokens.getTokens()) {
    std::cout << token->toString() << std::endl;
  }

  HqlsqlParser parser(&tokens);
  ErrorVerboseListener err_listener;
  parser.removeErrorListeners();
  parser.addErrorListener(&err_listener);

  auto prog_context = parser.program();
  tree::ParseTreeWalker walker;

  std::cout << prog_context->toStringTree(&parser) << std::endl;
  if (err_listener.has_error()) {
    std::cout << "Parse failed: " << operateStr << std::endl;
    std::cout << err_listener.err_message() << std::endl;
    return {};
  }

  auto block_content_ctx = prog_context->block()->block_content();
  for (auto block_ctx : block_content_ctx) {
    GetOperateInfoListener operate_info_listener(&parser);
    walker.walk(&operate_info_listener, block_ctx);

    for (auto info : operate_info_listener.operate_info_list()) {
      operate_list_result.push_back(info);
    }

    // check if column_dag is not empty, if so, get operate info from it
    auto column_dag = operate_info_listener.column_dag();
    if (column_dag.Empty()) {
      continue;
    }

    column_dag.Travel();
  }

  return operate_list_result;
}
}

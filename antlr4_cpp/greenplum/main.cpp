/* Copyright (c) 2012-2017 The ANTLR Project. All rights reserved.
 * Use of this file is governed by the BSD 3-clause license that
 * can be found in the LICENSE.txt file in the project root.
 */

//
//  main.cpp
//  antlr4-cpp-demo
//
//  Created by Mike Lischke on 13.03.16.
//

#include <stdlib.h>
#include <unistd.h>

#include <iostream>
#include <fstream>

#include "antlr4-runtime.h"
#include "GreenPlumLexer.h"
#include "GreenPlumParser.h"

#include "error_verbose_listener.hpp"
#include "greenplum_get_dag_listener.hpp"

using namespace antlr4;

void ParseFile(const char* filename);
void ParseString(std::string &sql);
std::string& string_toupper(std::string &str);

void ParseFile(const char* filename) {
  if (nullptr == filename) return; 
  std::string line;
  std::string sqlstmt;
  std::ifstream f(filename);
  if (!f)
    return;

  while (getline(f, line)) {
    if (line.rfind(";") == line.length()) {
      sqlstmt.append(line);
      ParseString(sqlstmt);
      sqlstmt.clear();
    } else {
      sqlstmt.append(line);
      sqlstmt.append("\n");
    }
  }

  if (!sqlstmt.empty()) {
    ParseString(sqlstmt);
  }
}

void ParseString(std::string &sql) {
  ANTLRInputStream input(string_toupper(sql));
  GreenPlumLexer lexer(&input);
  CommonTokenStream tokens(&lexer);

  // show all the tokens
  tokens.fill();
  for (auto token : tokens.getTokens()) {
    std::cout << token->toString() << std::endl;
  }

  GreenPlumParser parser(&tokens);
  // parser.setBuildParseTree(false);

  parser.removeErrorListeners();

  // add error listener
  ErrorVerboseListener err_verbose;
  parser.addErrorListener(&err_verbose);

  auto stmtblock_ctx = parser.stmtblock();
  std::cout << "sql: " << tokens.getText() << std::endl;
  std::cout << ((tree::ParseTree*)stmtblock_ctx)->toStringTree(&parser) << std::endl;

  // the following here is not apt
  if (err_verbose.has_error())
    std::cout << "Parse failed: " << err_verbose.err_message() << std::endl;

  auto stmtmulti_ctx = stmtblock_ctx->stmtmulti();
  if (stmtmulti_ctx == nullptr) {
    return;
  }

  auto stmts_ctx = stmtmulti_ctx->stmt();
  if (stmts_ctx.empty()) {
    return;
  }

  tree::ParseTreeWalker walker;

  std::cout << "========== DAG ============" << std::endl;
  for (auto& stmt_ctx : stmts_ctx) {
    auto variable_set_stmt_ctx = stmt_ctx->variable_set_stmt();
    if (variable_set_stmt_ctx) {
      auto set_rest_ctx = variable_set_stmt_ctx->set_rest();
      if (set_rest_ctx) {
        if (!set_rest_ctx->current_schema.empty()) {
          std::cout << "current schema change to: " << set_rest_ctx->current_schema << std::endl;
        }
      }
      continue;
    }

    auto select_stmt_ctx = stmt_ctx->select_stmt();
    if (select_stmt_ctx == nullptr) {
      continue;
    }
    GreenPlumGetColumnDAG gp_dag(&parser);
    walker.walk(&gp_dag, stmt_ctx);
    TravelColumnDag(gp_dag.column_dag());
  }
  
}

std::string& string_toupper(std::string &str) {
  std::transform(str.begin(), str.end(), str.begin(), 
      [](unsigned char c) -> unsigned char { return std::toupper(c); });
  return str;
}

int main(int argc, char *argv[]) {
  int ret;
  extern char *optarg;
  if (1 == argc) {
    std::cout << "Usage: " << argv[0] << " [-f filename] [-e sqlstatement]" << std::endl;
    return 0;
  }

  while ((ret = getopt(argc, argv, "f:e:")) != -1) {
    switch (ret) {
      case 'f':
        ParseFile(optarg);
        break;
      case 'e':
        {
          std::string sqlstmt(optarg);
          ParseString(sqlstmt);
        }
        break;
      case '?':
      default:
        std::cout << "Usage: " << argv[0] << " [-f filename] [-e sqlstatement]" << std::endl;
        break;
    }
  }

  return 0;
}

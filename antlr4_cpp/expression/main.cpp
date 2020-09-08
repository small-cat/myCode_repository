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
#include "ExprLexer.h"
#include "ExprParser.h"
#include "IterativeParseTreeWalker.h"
#include "expr_parser/error_verbose_listener.hpp"
#include "expr_parser/walker_listener.hpp"
#include "expr_parser/pre_order_parser_tree_walker.hpp"
#include "expr_parser/expr_get_value_listener.hpp"

using namespace antlr4;

void ParseFile(const char* filename);
void ParseString(std::string &sql);
static void _ParseString(ExprParser &parser, CommonTokenStream &tokens);
std::string string_toupper(std::string str);
bool ReplaceStarWithColumns(std::string &sql);

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
  ANTLRInputStream input(sql);
  ExprLexer lexer(&input);
  CommonTokenStream tokens(&lexer);

  // show all the tokens
  tokens.fill();
  for (auto token : tokens.getTokens()) {
    std::cout << token->toString() << std::endl;
  }

  ExprParser parser(&tokens);
  /*parser.setBuildParseTree(false);*/

  // PredictionMode: LL, SLL
  // try with simpler and faster SLL first
  parser.getInterpreter<atn::ParserATNSimulator>()->setPredictionMode(
      atn::PredictionMode::SLL);
  parser.removeErrorListeners();

  // add error listener
  ErrorVerboseListener err_verbose;
  parser.addErrorListener(&err_verbose);
  parser.setErrorHandler(std::make_shared<BailErrorStrategy>());

  try {
    std::cout << "Try with SLL(*)" << std::endl;
    _ParseString(parser, tokens);
  } catch (ParseCancellationException ex) {
    std::cout << "Syntax error, try with LL(*)" << std::endl;
    std::cout << ex.what() << std::endl;

    // rewind input stream
    tokens.reset();
    parser.reset();

    // back to default listener and strategy
    parser.addErrorListener(&ConsoleErrorListener::INSTANCE);
    parser.setErrorHandler(std::make_shared<DefaultErrorStrategy>());
    parser.getInterpreter<atn::ParserATNSimulator>()->setPredictionMode(
        atn::PredictionMode::LL);

    _ParseString(parser, tokens);
  }

  // the following here is not apt
  if (err_verbose.has_error())
    std::cout << "Parse failed: " << err_verbose.err_message() << std::endl;
}

static void _ParseString(ExprParser &parser, CommonTokenStream &tokens) {
  auto prog_ctx = parser.prog();
  std::cout << "expr: " << tokens.getText() << std::endl;
  std::cout << ((tree::ParseTree*)(prog_ctx))->toStringTree(&parser) << std::endl;
  
  tree::IterativeParseTreeWalker walker;

  // test
  ExprGetValue expr_val_listener(&parser);
  walker.walk(&expr_val_listener, prog_ctx);

  WalkerListener walker_listener;
  walker.walk(&walker_listener, prog_ctx);
  auto exprs = walker_listener.GetExpr();
  std::cout << "IterativeParseTreeWalker" << std::endl;
  for (auto& ele : exprs) {
    std::cout << ele << " ";
  }
  std::cout << std::endl;

  std::cout << "PreOrderParseTreeWalker" << std::endl;
  PreOrderParseTreeWalker walker2;
  WalkerListener walker_listener2;
  walker2.walk(&walker_listener2, prog_ctx);
  auto exprs2 = walker_listener2.GetExpr();
  for (auto& ele : exprs2) {
    std::cout << ele << " ";
  }
  std::cout << std::endl;
}

std::string string_toupper(std::string str) {
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

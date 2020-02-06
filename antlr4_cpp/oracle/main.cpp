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
#include "PlSqlLexer.h"
#include "PlSqlParser.h"
#include "from_clause_matcher_listener.h"
#include "get_table_listener.h"
#include "oracle_mask_listener.h"
#include "oracle_get_column_dag_listener.hpp"
#include "error_verbose_listener.hpp"
#include "oracle_replace_star_listener.hpp"
#include "oracle_parse_tree_walker.hpp"
#include "item.h"

using namespace antlr4;

void ParseFile(const char* filename);
void ParseString(std::string &sql);
static void _ParseString(PlSqlParser &parser, CommonTokenStream &tokens);
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
  std::string msql = string_toupper(sql);
  if (msql.find("SELECT") != std::string::npos
      && msql.find("*") != std::string::npos) {
    ReplaceStarWithColumns(msql);
  }

  ANTLRInputStream input(msql);
  PlSqlLexer lexer(&input);
  CommonTokenStream tokens(&lexer);

  // show all the tokens
  tokens.fill();
  for (auto token : tokens.getTokens()) {
    std::cout << token->toString() << std::endl;
  }

  PlSqlParser parser(&tokens);
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

static void _ParseString(PlSqlParser &parser, CommonTokenStream &tokens) {
  auto sql_script_ctx = parser.sql_script();
  std::cout << "sql: " << tokens.getText() << std::endl;
  std::cout << ((tree::ParseTree*)(sql_script_ctx))->toStringTree(&parser) << std::endl;

  std::cout << "total sqls in current cst: " << parser.sql_sentences << std::endl;

  auto unit_statements = sql_script_ctx->unit_statement();
  if (unit_statements.empty()) {
    return;
  }

  MaskItemList mask_item_list;
  MaskItem item1 = {"student", "name", "MASK_NAME"};
  MaskItem item2 = {"student", "place", "MASK_SEX"};
  MaskItem item3 = {"student", "number", "MASK_NUMBER"};
  mask_item_list.push_back(item1);
  mask_item_list.push_back(item2);
  mask_item_list.push_back(item3);

  for (auto unit_stmt : unit_statements) {
    auto data_manipulate_ctx = unit_stmt->data_manipulation_language_statements();
    if (data_manipulate_ctx) {
      if (data_manipulate_ctx->select_statement()) {
        // build column dag
        std::cout << "========GetColumnDag========\n\n";
        OracleParseTreeWalker walker;
        OracleGetColumnDAG oracle_dag(&parser);
        walker.walk(&oracle_dag, unit_stmt);
        TravelColumnDag(oracle_dag.column_dag());

        MaskItemList mask_item_list_for_dag;
        MaskItem item4 {"student", "name", "MASK_STUNAME"};
        MaskItem item5 {"dept", "name", "MASK_DEPTNAME"};
        MaskItem item6 = {"学生信息", "'性别'", "MASK_STU_SEX"};
        mask_item_list_for_dag.push_back(item4);
        mask_item_list_for_dag.push_back(item5);
        mask_item_list_for_dag.push_back(item6);
        std::map<ColumnItem, ColumnItemList> column_relation_map = 
          oracle_dag.GetColumnRelationsByMaskItemList(mask_item_list_for_dag);

        std::cout << "\n========show Column Relation Map========\n";
        for (auto iter=column_relation_map.begin(); iter!=column_relation_map.end(); ++iter) {
          std::cout << "[" << iter->first.table << ", " << iter->first.column << ", "
            << iter->first.alias << "]\n";

          std::cout << "[ ";
          for (auto col_item : iter->second) {
            std::cout << "(" << col_item.table << ", " << col_item.column << ", "
              << col_item.alias << "), ";
          }
          std::cout << " ]\n";
        }

        std::cout << "\n========Mask Listener========\n";
        OracleMaskListener oracle_mask_listener(&parser, &tokens, 
            oracle_dag.column_dag(), column_relation_map, mask_item_list_for_dag);
        walker.walk(&oracle_mask_listener, unit_stmt);
        std::cout << oracle_mask_listener.GetResult() << std::endl;
      }
    } // end if

    auto alter_session_ctx = unit_stmt->alter_session();
    if (alter_session_ctx) {
      auto alter_session_set_clause_ctx = alter_session_ctx->alter_session_set_clause();
      if (alter_session_set_clause_ctx) {
        if (!alter_session_set_clause_ctx->current_schema.empty()) {
          std::cout << "change current schema to: " << alter_session_set_clause_ctx->current_schema << std::endl;
        }
      }
    }
  }
}

std::string string_toupper(std::string str) {
  std::transform(str.begin(), str.end(), str.begin(), 
      [](unsigned char c) -> unsigned char { return std::toupper(c); });
  return str;
}

bool ReplaceStarWithColumns(std::string &sql) {
  std::cout << "before replacing star: " << sql << std::endl;
  ANTLRInputStream input(sql);
  PlSqlLexer lexer(&input);
  CommonTokenStream tokens(&lexer);
  PlSqlParser parser(&tokens);

  // add error listener
  ErrorVerboseListener err_verbose;
  parser.removeErrorListeners();
  parser.addErrorListener(&err_verbose);

  tree::ParseTree *tree = parser.sql_script();
  if (err_verbose.has_error()) {
    std::cout << "Parse failed: " << err_verbose.err_message() << std::endl;
    return false;
  }

  tree::ParseTreeWalker walker;
  OracleGetColumnDAG oracle_dag(&parser);
  walker.walk(&oracle_dag, tree);
  TravelColumnDag(oracle_dag.column_dag());

  OracleReplaceStarListener oracle_rp_star(&parser, &tokens, oracle_dag.column_dag());
  walker.walk(&oracle_rp_star, tree);

  sql = oracle_rp_star.GetResult();
  std::cout << "after replacing star: " << sql << std::endl;
  return true;
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

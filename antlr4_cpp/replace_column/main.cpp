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
#include "KingbaseSqlLexer.h"
#include "KingbaseSqlParser.h"
#include "kingbase_from_clause_matcher_listener.h"
#include "kingbase_get_table_listener.h"
#include "kingbase_mask_listener.h"
#include "kingbase_get_column_dag_listener.hpp"
#include "kingbase_test_listener.hpp"
#include "error_verbose_listener.hpp"
#include "item.h"

using namespace antlr4;

void ParseFile(const char* filename);
void ParseString(std::string &sql);
static void _ParseString(KingbaseSqlParser &parser, CommonTokenStream &tokens);
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
  KingbaseSqlLexer lexer(&input);
  CommonTokenStream tokens(&lexer);

  // show all the tokens
  tokens.fill();
  for (auto token : tokens.getTokens()) {
    std::cout << token->toString() << std::endl;
  }

  KingbaseSqlParser parser(&tokens);

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

static void _ParseString(KingbaseSqlParser &parser, CommonTokenStream &tokens) {
  tree::ParseTree *tree = parser.sql_script();
  std::cout << "sql: " << tokens.getText() << std::endl;
  std::cout << tree->toStringTree(&parser) << std::endl;

  tree::ParseTreeWalker walker;
  KingbaseFromClauseMatcherListener kingbase_fml(&parser, std::string("employee"));
  walker.walk(&kingbase_fml, tree);

  if (kingbase_fml.matched())
    std::cout << "matched table " << kingbase_fml.tablename() << std::endl;
  else
    std::cout << "unmatched\n";

  MaskItemList mask_item_list;
  MaskItem item1 = {"student", "name", "MASK_NAME"};
  MaskItem item2 = {"student", "place", "MASK_SEX"};
  MaskItem item3 = {"student", "number", "MASK_NUMBER"};
  mask_item_list.push_back(item1);
  mask_item_list.push_back(item2);
  mask_item_list.push_back(item3);

  KingbaseGetTableListener kingbase_gl(&parser);
  walker.walk(&kingbase_gl, tree);
  MaskColumnItemList mask_col_item_list = 
    kingbase_gl.getTable_Item_List(mask_item_list);

  for (auto item : mask_col_item_list) {
    std::cout << item.table_item.table << ", " << item.mask_item.column 
      << ", " << item.mask_item.mask_function << std::endl;
  }

  /*
     KingbaseMaskListener kingbase_mask_listener(&tokens, mask_col_item_list);
     walker.walk(&kingbase_mask_listener, tree);
     std::cout << kingbase_mask_listener.getResult() << std::endl;
     */

  // build column dag
  std::cout << "\n======================\n";
  std::cout << "========GetColumnDag========\n\n";
  KingbaseGetColumnDAG kingbase_dag(&parser);
  walker.walk(&kingbase_dag, tree);
  TravelColumnDag(kingbase_dag.column_dag());

  MaskItemList mask_item_list_for_dag;
  MaskItem item4 {"SYSDBA", "student", "name", "MASK_STUNAME"};
  MaskItem item5 {"SCOTT", "dept", "name", "MASK_DEPTNAME"};
  mask_item_list_for_dag.push_back(item4);
  mask_item_list_for_dag.push_back(item5);
  std::map<ColumnItem, ColumnItemList> column_relation_map = 
    kingbase_dag.GetColumnRelationsByMaskItemList(mask_item_list_for_dag);

  std::cout << "\n========show Column Relation Map========\n";
  for (auto iter=column_relation_map.begin(); iter!=column_relation_map.end(); ++iter) {
    std::cout << "[" << iter->first.schema << ", " << iter->first.table << ", " << iter->first.column << ", "
      << iter->first.alias << "]\n";

    std::cout << "[ ";
    for (auto col_item : iter->second) {
      std::cout << "(" << col_item.schema << ", " << col_item.table << ", " << col_item.column << ", "
        << col_item.alias << "), ";
    }
    std::cout << " ]\n";
  }

  std::cout << "\n========Mask Listener========\n";
  KingbaseMaskListener kingbase_mask_listener(&parser, &tokens, 
      kingbase_dag.column_dag(), column_relation_map, mask_item_list_for_dag);
  walker.walk(&kingbase_mask_listener, tree);
  std::cout << kingbase_mask_listener.GetResult() << std::endl;

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

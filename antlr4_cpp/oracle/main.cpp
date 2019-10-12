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
#include "item.h"
#include "mask_listener.h"

void ParseFile(const char* filename);
void ParseString(const std::string &sql);

using namespace oracle;
using namespace antlr4;

void ParseFile(const char* filename) {
    if (nullptr == filename)
        return;

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

void ParseString(const std::string &sql) {
    ANTLRInputStream input(sql);
    PlSqlLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    PlSqlParser parser(&tokens);

    tree::ParseTree *tree = parser.sql_script();
    std::cout << "sql: " << tokens.getText() << std::endl;
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
  /*
  ANTLRInputStream input(argv[1]);
  PlSqlLexer lexer(&input);
  CommonTokenStream tokens(&lexer);

  for (auto token : tokens.getTokens()) {
    std::cout << token->toString() << std::endl;
  }

  PlSqlParser parser(&tokens);
  tree::ParseTree* tree = parser.sql_script();
  std::cout << tree->getText() << std::endl;

  std::cout << tree->toStringTree(&parser) << std::endl << std::endl;

  tree::ParseTreeWalker walker;
  FromClauseMatcherListener fl(&parser, std::string("SCOTT.student"));
  walker.walk(&fl, tree);

  if (fl.isMatcher()) {
      std::cout << "matched\n";
  } else {
      std::cout << "not matched\n";
  }

  GetTableListener gl(&parser);
  walker.walk(&gl, tree);

  MaskItemList mask_item_list;
  MaskItem item1 = {"student", "name", "MASK_NAME"};
  MaskItem item2 = {"student", "sex", "MASK_SEX"};
  MaskItem item3 = {"student", "phone", "MASK_PHONE"};
  mask_item_list.push_back(item1);
  mask_item_list.push_back(item2);
  mask_item_list.push_back(item3);

  MaskColumnItemList mask_col_item_list = gl.get_table_item_list(mask_item_list);

  for (auto item : mask_col_item_list) {
      std::cout << item.table_item.table << ", " << item.mask_item.column << ", " << item.mask_item.mask_function << std::endl;
  }

  MaskListener ml(&tokens, mask_col_item_list);
  walker.walk(&ml, tree);
  std::cout << tokens.getText() << std::endl;
  */

  return 0;
}

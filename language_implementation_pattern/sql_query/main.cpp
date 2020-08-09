/**
 * @copyright (c) Copyright 2020 Secsmart. All Rights Reserved.
 * @license
 * @file  : main.cpp
 * @author: Jona 
 * @email : wuzhenyu@secsmart.net
 * @date  : 2020-08-04
 * @brief : main test for lexer testing
*/

#include <iostream>
#include "sqlquery_lexer.hpp"
#include "sqlquery_parser.hpp"
#include "token.hpp"

int main(int argc, char *argv[]) {
  if (argc == 1) {
    std::cout << "no input for lexer" << std::endl;
    return 0;
  }

  SqlQueryLexer lexer(argv[1]);
  SqlQueryParser parser(&lexer);

  try {
    parser.Simple_select();
  } catch (RuntimeException& e) {
    std::cout << "in main: " << e.what() << std::endl;
  }
  return 0;
}

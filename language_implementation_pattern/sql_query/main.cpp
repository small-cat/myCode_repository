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
#include "parser/sqlquery_lexer.hpp"
#include "parser/sqlquery_parser.hpp"

int main(int argc, char *argv[]) {
  if (argc == 1) {
    std::cout << "no input for lexer" << std::endl;
    return 0;
  }

  SqlQueryLexer lexer(argv[1]);
  CommonTokenStream tokens(&lexer);

  for (auto& token : tokens.GetTokens()) {
    std::cout << token->ToString() << std::endl;
  }

  SqlQueryParser parser(&tokens);

  try {
    parser.QuerySpecification();
  } catch (RuntimeException& e) {
    std::cout << "in main: " << e.what() << std::endl;
  }
  return 0;
}

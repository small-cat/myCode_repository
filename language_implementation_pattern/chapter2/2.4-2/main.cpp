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
#include "./lexer.hpp"
#include "./list_lexer.hpp"
#include "./token.hpp"

int main(int argc, char *argv[]) {
  if (argc == 1) {
    std::cout << "no input for lexer" << std::endl;
    return 0;
  }

  ListLexer lexer = ListLexer(argv[1]);
  Token t = lexer.NextToken();

  while (t.GetType() != EOF_TYPE) {
    std::cout << t.ToString() << std::endl;
    t = lexer.NextToken();
  }

  std::cout << std::endl;
  return 0;
}

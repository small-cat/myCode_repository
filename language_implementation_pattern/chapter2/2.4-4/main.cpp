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
#include "list_lexer.hpp"
#include "list_parser.hpp"
#include "token.hpp"

int main(int argc, char *argv[]) {
  if (argc == 1) {
    std::cout << "no input for lexer" << std::endl;
    return 0;
  }

  ListLexer lexer(argv[1]);
  ListParser parser(&lexer, 2);
  parser.list();
  return 0;
}

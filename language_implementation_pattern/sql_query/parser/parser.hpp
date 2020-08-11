/**
 * @copyright (c) Copyright 2020 Secsmart. All Rights Reserved.
 * @license
 * @file  : parser.hpp
 * @author: Jona 
 * @email : wuzhenyu@secsmart.net
 * @date  : 2020-08-04
 * @brief : parser 
*/
#ifndef __PARSER_H__
#define __PARSER_H__

#include <stack>
#include <vector>
#include <map>
#include "lexer.hpp"
#include "token.hpp"
#include "parser_exceptions.hpp"
#include "common_token_stream.hpp"

const static int FAILED = -1;

class Parser {
public:
  Parser(CommonTokenStream* tokens);
  virtual ~Parser();

  void Match(int x);
  void Consume();
  bool IsSpeculating();
  Token* LT(int i);
  void Sync(int i);
  virtual void Fill(int n);
  int LA(int i);
  int Mark();
  void Release();
  int Index();
  bool AlreadyParsedRule();
  void Memoize(int start_token_index, bool failed);

  CommonTokenStream* tokens_;
  std::stack<int> markers_;
  std::vector<Token*> lookahead_;
  int cur_pos_;
  std::map<int, int> list_memo_;
};

#endif /* __PARSER_H__ */

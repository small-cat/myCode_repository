/**
 * @copyright (c) Copyright 2020 Secsmart. All Rights Reserved.
 * @license
 * @file  : common_token_stream.hpp
 * @author: Jona 
 * @email : wuzhenyu@secsmart.net
 * @date  : 2020-08-10
 * @brief : get all tokens from lexer
*/
#ifndef __COMMON_TOKEN_STREAM_H__
#define __COMMON_TOKEN_STREAM_H__

#include <vector>

#include "lexer.hpp"

class CommonTokenStream {
public:
  CommonTokenStream(Lexer* lexer);
  virtual ~CommonTokenStream();

  void Fill();
  std::vector<Token*> GetTokens();
  Token* NextToken();
  std::string GetTokenName(int type);

private:
  Lexer* lexer_;
  int cur_pos_;
  std::vector<Token*> tokens_;
};

#endif /* __COMMON_TOKEN_STREAM_H__ */

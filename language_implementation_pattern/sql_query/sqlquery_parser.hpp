/**
 * @copyright (c) Copyright 2020 Secsmart. All Rights Reserved.
 * @license
 * @file  : sqlquery_parser.hpp
 * @author: Jona 
 * @email : wuzhenyu@secsmart.net
 * @date  : 2020-08-07
 * @brief : sqlquery parser definitions
*/
#ifndef __SQLQUERY_PARSER_H__
#define __SQLQUERY_PARSER_H__

#include <string.h>
#include "parser.hpp"
#include "token.hpp"
#include "sqlquery_lexer.hpp"

std::map<int, int> list_memo;
class SqlQueryParser : public Parser {
public:
  SqlQueryParser(Lexer* input) : Parser(input) {}
  virtual ~SqlQueryParser() {}

  void Simple_select() {
    Match(SELECT);

    // DISTINCT | ALL
    if (LA(1) == DISTINCT || LA(1) == ALL) {
      Opt_distinct();
    }

    Target_list();

    // FROM
    if (LA(1) == FROM) {
      From_clause();
    }

    Match(EOF_TYPE);
  }

  void Opt_distinct() {
    if (LA(1) == DISTINCT) {
      Match(DISTINCT);
    } else {
      Match(ALL);
    }
  }

  void Target_list() {
    Target_el();

    while (LA(1) == COMMA) {
      Match(COMMA);
      Target_el();
    }
  }

  void Target_el() {
    NameAndAlias();
  }

  // name (AS? name)?
  void NameAndAlias() {
    if (LA(1) == ASTERISK) {
      Match(ASTERISK);
    } else {
      Match(IDENTIFIER);

      if (LA(1) == AS) {
        Match(AS);
        Match(IDENTIFIER);
      } else if (LA(1) == IDENTIFIER) {
        Match(IDENTIFIER);
      }
    }
  }

  void From_clause() {
    Match(FROM);
    From_list();
  }

  void From_list() {
    Table_ref();

    while (LA(1) == COMMA) {
      Match(COMMA);
      Table_ref();
    }
  }

  void Table_ref() {
    NameAndAlias();
  }
};

#endif /* __SQLQUERY_PARSER_H__ */

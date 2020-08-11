/**
 * @copyright (c) Copyright 2020 Secsmart. All Rights Reserved.
 * @license
 * @file  : sqlquery_parser.cpp
 * @author: Jona 
 * @email : wuzhenyu@secsmart.net
 * @date  : 2020-08-11
 * @brief : parser for iso/iec sql:1999
*/
#include "sqlquery_parser.hpp"

SqlQueryParser::SqlQueryParser(CommonTokenStream* tokens) : Parser(tokens) {}
SqlQueryParser::~SqlQueryParser() {}

void SqlQueryParser::Fill(int n) {
  for (int i = 0; i < n; i++) {
    Token* t = tokens_->NextToken();
    while (t->GetType() == SPACE) {
      t = tokens_->NextToken();
    }

    lookahead_.push_back(t);
  }
}

void SqlQueryParser::QuerySpecification() {
  Match(SELECT);
  if (LA(1) == ALL) {
    Match(ALL);
  } else if (LA(1) == DISTINCT) {
    Match(DISTINCT);
  }

  SelectList();
  TableExpression();
}

void SqlQueryParser::SelectList() {
  if (LA(1) == ASTERISK) {
    Match(ASTERISK);
  } else {
    SelectListElement();
    while (LA(1) == COMMA) {
      Match(COMMA);
      SelectListElement();
    }
  }
}

// select_list_element
//  : derived_column
//  | qualified_asterisk
//  ;
//
// derived_column
//  : identifier attrs* as_clause?
//  ;
//
// qualified_asterisk
//  : identifier attrs* PERIOD ASTERISK
//  ;
void SqlQueryParser::SelectListElement() {
  Match(IDENTIFIER);
  while (LA(1) == PERIOD && LA(2) != ASTERISK) {
    Attrs();
  }

  if (LA(1) == PERIOD) {
    Match(PERIOD);
    Match(ASTERISK);
  } else if (LA(1) == AS || LA(1) == IDENTIFIER) {
    AsClause();
  }
}

// IDENTIFIER ('.' IDENTIFIER)*
void SqlQueryParser::Attrs() {
  while (LA(1) == PERIOD) {
    Match(PERIOD);
    Match(IDENTIFIER);
  }
}

void SqlQueryParser::AsClause() {
  if (LA(1) == AS) {
    Match(AS);
  }

  Match(IDENTIFIER);
}

void SqlQueryParser::TableExpression() {
  FromClause();
  /*
   * WhereClause();
   * GroupByClause();
   * HavingClause();
   */
}

void SqlQueryParser::FromClause() {
  Match(FROM);
  TableRef();
  while (LA(1) == COMMA) {
    Match(COMMA);
    TableRef();
  }
}

void SqlQueryParser::TableRef() {
  TablePrimary();
}

void SqlQueryParser::TablePrimary() {
  Match(IDENTIFIER);
  if (LA(1) == AS || LA(1) == IDENTIFIER) {
    AsClause();
  }
}

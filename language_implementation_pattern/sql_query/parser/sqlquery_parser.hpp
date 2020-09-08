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

class SqlQueryParser : public Parser {
public:
  SqlQueryParser(CommonTokenStream* tokens);
  virtual ~SqlQueryParser();

  virtual void Fill(int n);

  void QuerySpecification();
  void SelectList();
  void SelectListElement();
  bool SpeculateSelectListElement_Alt1();
  bool SpeculateSelectListElement_Alt2();
  void DerivedColumn();
  void QualifiedAsterisk();
  void Attrs();
  void AsClause();

  void ValueExpression();

  void TableExpression();
  void FromClause();
  void TableRef();
  void TablePrimary();
};

#endif /* __SQLQUERY_PARSER_H__ */

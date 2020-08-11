/**
 * @copyright (c) Copyright 2020 Secsmart. All Rights Reserved.
 * @license
 * @file  : sqlquery_lexer.hpp
 * @author: Jona 
 * @email : wuzhenyu@secsmart.net
 * @date  : 2020-08-07
 * @brief : sqlquery lexer definition
 */

#include "sqlquery_lexer.hpp"

SqlQueryLexer::SqlQueryLexer(std::string input) : Lexer(input) {}
SqlQueryLexer::~SqlQueryLexer() {}

std::string SqlQueryLexer::GetTokenName(int token_type) {
  return TokenNames[token_type];
}

bool SqlQueryLexer::IsLetter() {
  return (c_>='a' && c_<='z') || (c_>='A' && c_<='Z');
}

bool SqlQueryLexer::IsDigit() {
  return (c_>='0' && c_<='9');
}

Token* SqlQueryLexer::NextToken() {
  while (c_ != EOF) {
    switch (c_) {
      case ' ': 
      case '\t':
      case '\n':
      case '\r':
        return WS();
      case ',':
        Consume();
        return new Token(COMMA, ",", p_, p_);
      case '*':
        Consume();
        return new Token(ASTERISK, "*", p_, p_);
      case '(':
        Consume();
        return new Token(LEFT_PAREN, "(", p_, p_);
      case ')':
        Consume();
        return new Token(RIGHT_PAREN, ")", p_, p_);
      case ';':
        Consume();
        return new Token(SEMI, ";", p_, p_);
      case '"':
      case '\'':
        return GetStringToken();
      case '.':
        Consume();
        return new Token(PERIOD, ".", p_, p_);
      case '+':
        Consume();
        return new Token(PLUS, "+", p_, p_);
      case '-':
        Consume();
        return new Token(MINUS, "-", p_, p_);
      case '/':
        Consume();
        return new Token(SOLIDUS, "/", p_, p_);
      case '%':
        Consume();
        return new Token(PERCENT, "%", p_, p_);
      case '^':
        Consume();
        return new Token(CIRCUMFLEX, "^", p_, p_);
      case '>':
        Consume();
        return new Token(GREATER_THAN, ">", p_, p_);
      case '<':
        Consume();
        return new Token(LESS_THAN, "<", p_, p_);
      case '=':
        Consume();
        return new Token(EQUALS, "=", p_, p_);
      case '?':
        Consume();
        return new Token(QUESTION, "?", p_, p_);
      case '[':
        Consume();
        return new Token(LEFT_BRACKET, "[", p_, p_);
      case ']':
        Consume();
        return new Token(RIGHT_BRACKET, "]", p_, p_);
      case '{':
        Consume();
        return new Token(LEFT_BRACE, "{", p_, p_);
      case '}':
        Consume();
        return new Token(RIGHT_BRACE, "}", p_, p_);
      case '|':
        Consume();
        return new Token(BAR, "|", p_, p_);
      default:
        if (IsLetter()) {
          return GetToken();
        } else if (IsDigit()) {
          return GetDigitToken();
        } else {
          std::cout << "invalid character: " << c_ << std::endl;
          exit(EXIT_FAILURE);
        }
    }
  }

  return new Token(EOF_TYPE, "EOF");
}

Token* SqlQueryLexer::GetStringToken() {
  std::string text {""};
  int start = p_;
  text.append(1, c_);
  int string_type = c_ == '"' ? DOUBLE_STRINGS : STRINGS;
  Consume();

  while(c_ != '"' || c_ != '\'') {
    text.append(1, c_);
    Consume();
  } 

  int end = p_;
  text.append(1, c_);    // the last "
  Consume();          // skip "

  return new Token(string_type, text, start, end);
}

Token* SqlQueryLexer::GetToken() {
  std::string text;
  int start = p_;
  do {
    text.append(1, c_);
    Consume();
  } while (IsLetter() || IsDigit() || c_ == '_');
  int end = p_ - 1;

  for (int i = 3; i < TokenNames.size(); i++) {
    if (strcasecmp(TokenNames[i].c_str(), text.c_str()) == 0) {
      return new Token(i, text, start, end);
    }
  }

  return new Token(IDENTIFIER, text, start, end);
}

Token* SqlQueryLexer::GetDigitToken() {
  std::string text;
  int start = p_;
  do {
    text.append(1, c_);
    Consume();
  } while (IsDigit());
  int end = p_ - 1;

  return new Token(INTEGER, text, start, end);
}

Token* SqlQueryLexer::WS() {
  while (c_ == ' ' || c_ == '\n' || c_ == '\r' || c_ == '\t') {
    char ch = c_;
    Consume();
    return new Token(SPACE, ch, p_, p_);
  }
}


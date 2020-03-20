
// Generated from /home/jona/myGit/myCode_repository/antlr4_cpp/create_sql_xml_tool/SqlXmlParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  SqlXmlParser : public antlr4::Parser {
public:
  enum {
    CREATE = 1, OR_ = 2, REPLACE = 3, FUNCTION = 4, PROCEDURE_ = 5, DOUBLE_STRING = 6, 
    CHAR_STRINGS = 7, REGULAR_ID = 8, COLON = 9, SEMICOLON = 10, COMMA = 11, 
    PERIOD = 12, LEFT_PAREN = 13, RIGHT_PAREN = 14, LEFT_BRACKET = 15, RIGHT_BRACKET = 16, 
    FACTORIAL_SIGN = 17, ADD_SIGN = 18, SUB_SIGN = 19, STAR_SIGN = 20, DIV_SIGN = 21, 
    UNDERLINE = 22, DOLLAR_SIGN = 23, BAR = 24, LESS_THAN = 25, GREATER_THAN = 26, 
    EUQAL = 27, INTEGERS = 28, SINGLE_LINE_COMMENT = 29, MULTI_LINE_COMMENT = 30, 
    SPACES = 31
  };

  enum {
    RuleStmts = 0, RuleStmt = 1, RuleFunc_name = 2, RuleSomething_else = 3, 
    RuleIdentifier = 4
  };

  SqlXmlParser(antlr4::TokenStream *input);
  ~SqlXmlParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class StmtsContext;
  class StmtContext;
  class Func_nameContext;
  class Something_elseContext;
  class IdentifierContext; 

  class  StmtsContext : public antlr4::ParserRuleContext {
  public:
    StmtsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);
    antlr4::tree::TerminalNode *EOF();
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtsContext* stmts();

  class  StmtContext : public antlr4::ParserRuleContext {
  public:
    StmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    Func_nameContext *func_name();
    Something_elseContext *something_else();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *PROCEDURE_();
    antlr4::tree::TerminalNode *OR_();
    antlr4::tree::TerminalNode *REPLACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtContext* stmt();

  class  Func_nameContext : public antlr4::ParserRuleContext {
  public:
    Func_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_nameContext* func_name();

  class  Something_elseContext : public antlr4::ParserRuleContext {
  public:
    Something_elseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> UNDERLINE();
    antlr4::tree::TerminalNode* UNDERLINE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INTEGERS();
    antlr4::tree::TerminalNode* INTEGERS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PERIOD();
    antlr4::tree::TerminalNode* PERIOD(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LEFT_PAREN();
    antlr4::tree::TerminalNode* LEFT_PAREN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RIGHT_PAREN();
    antlr4::tree::TerminalNode* RIGHT_PAREN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LEFT_BRACKET();
    antlr4::tree::TerminalNode* LEFT_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RIGHT_BRACKET();
    antlr4::tree::TerminalNode* RIGHT_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FACTORIAL_SIGN();
    antlr4::tree::TerminalNode* FACTORIAL_SIGN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ADD_SIGN();
    antlr4::tree::TerminalNode* ADD_SIGN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BAR();
    antlr4::tree::TerminalNode* BAR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SUB_SIGN();
    antlr4::tree::TerminalNode* SUB_SIGN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STAR_SIGN();
    antlr4::tree::TerminalNode* STAR_SIGN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DIV_SIGN();
    antlr4::tree::TerminalNode* DIV_SIGN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOLLAR_SIGN();
    antlr4::tree::TerminalNode* DOLLAR_SIGN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LESS_THAN();
    antlr4::tree::TerminalNode* LESS_THAN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> GREATER_THAN();
    antlr4::tree::TerminalNode* GREATER_THAN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EUQAL();
    antlr4::tree::TerminalNode* EUQAL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> REPLACE();
    antlr4::tree::TerminalNode* REPLACE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Something_elseContext* something_else();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REGULAR_ID();
    antlr4::tree::TerminalNode *CHAR_STRINGS();
    antlr4::tree::TerminalNode *DOUBLE_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierContext* identifier();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};


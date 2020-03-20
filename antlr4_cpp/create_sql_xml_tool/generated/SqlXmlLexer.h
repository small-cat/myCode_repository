
// Generated from /home/jona/myGit/myCode_repository/antlr4_cpp/create_sql_xml_tool/SqlXmlLexer.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  SqlXmlLexer : public antlr4::Lexer {
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

  SqlXmlLexer(antlr4::CharStream *input);
  ~SqlXmlLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};


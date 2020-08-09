
// Generated from Cymbol.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"


#include "../symbol_table.hpp"
#include "../builtin_type_symbol.hpp"
#include "../variable_symbol.hpp"
#include <iostream>




class  CymbolParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, ID = 7, 
    INT = 8
  };

  enum {
    RuleCompilationUnit = 0, RuleType = 1, RuleVar_declaration = 2, RuleExpression = 3
  };

  CymbolParser(antlr4::TokenStream *input);
  ~CymbolParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class CompilationUnitContext;
  class TypeContext;
  class Var_declarationContext;
  class ExpressionContext; 

  class  CompilationUnitContext : public antlr4::ParserRuleContext {
  public:
    SymbolTable symtab;
    CompilationUnitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    CompilationUnitContext(antlr4::ParserRuleContext *parent, size_t invokingState, SymbolTable symtab);
    virtual size_t getRuleIndex() const override;
    std::vector<Var_declarationContext *> var_declaration();
    Var_declarationContext* var_declaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompilationUnitContext* compilationUnit(SymbolTable symtab);

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    Symbol tsym;
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();

  class  Var_declarationContext : public antlr4::ParserRuleContext {
  public:
    CymbolParser::TypeContext *typeContext = nullptr;;
    antlr4::Token *idToken = nullptr;;
    Var_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    antlr4::tree::TerminalNode *ID();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Var_declarationContext* var_declaration();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *idToken = nullptr;;
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *INT();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();


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


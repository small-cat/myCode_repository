
// Generated from Cymbol.g4 by ANTLR 4.7.1


#include "CymbolListener.h"
#include "CymbolVisitor.h"

#include "CymbolParser.h"


#include "../symbol_table.hpp"
#include "../builtin_type_symbol.hpp"
#include "../variable_symbol.hpp"
#include <iostream>


using namespace antlrcpp;
using namespace antlr4;

CymbolParser::CymbolParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

CymbolParser::~CymbolParser() {
  delete _interpreter;
}

std::string CymbolParser::getGrammarFileName() const {
  return "Cymbol.g4";
}

const std::vector<std::string>& CymbolParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& CymbolParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- CompilationUnitContext ------------------------------------------------------------------

CymbolParser::CompilationUnitContext::CompilationUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CymbolParser::CompilationUnitContext::CompilationUnitContext(ParserRuleContext *parent, size_t invokingState, SymbolTable symtab)
  : ParserRuleContext(parent, invokingState) {
  this->symtab = symtab;
}

std::vector<CymbolParser::Var_declarationContext *> CymbolParser::CompilationUnitContext::var_declaration() {
  return getRuleContexts<CymbolParser::Var_declarationContext>();
}

CymbolParser::Var_declarationContext* CymbolParser::CompilationUnitContext::var_declaration(size_t i) {
  return getRuleContext<CymbolParser::Var_declarationContext>(i);
}


size_t CymbolParser::CompilationUnitContext::getRuleIndex() const {
  return CymbolParser::RuleCompilationUnit;
}

void CymbolParser::CompilationUnitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CymbolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompilationUnit(this);
}

void CymbolParser::CompilationUnitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CymbolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompilationUnit(this);
}


antlrcpp::Any CymbolParser::CompilationUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CymbolVisitor*>(visitor))
    return parserVisitor->visitCompilationUnit(this);
  else
    return visitor->visitChildren(this);
}

CymbolParser::CompilationUnitContext* CymbolParser::compilationUnit(SymbolTable symtab) {
  CompilationUnitContext *_localctx = _tracker.createInstance<CompilationUnitContext>(_ctx, getState(), symtab);
  enterRule(_localctx, 0, CymbolParser::RuleCompilationUnit);
  this.symtab = symtab;
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(9); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(8);
      var_declaration();
      setState(11); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == CymbolParser::T__0

    || _la == CymbolParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

CymbolParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CymbolParser::TypeContext::getRuleIndex() const {
  return CymbolParser::RuleType;
}

void CymbolParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CymbolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void CymbolParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CymbolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}


antlrcpp::Any CymbolParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CymbolVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

CymbolParser::TypeContext* CymbolParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 2, CymbolParser::RuleType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(17);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CymbolParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(13);
        match(CymbolParser::T__0);
        dynamic_cast<TypeContext *>(_localctx)->tsym =  symtab.Resolve("float");
        break;
      }

      case CymbolParser::T__1: {
        enterOuterAlt(_localctx, 2);
        setState(15);
        match(CymbolParser::T__1);
        dynamic_cast<TypeContext *>(_localctx)->tsym =  symtab.Resolve("int");
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   _ctx->stop = _input->LT(-1);
     std::cout << ": ref " << _localctx->tsym.name() << std::endl; 
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_declarationContext ------------------------------------------------------------------

CymbolParser::Var_declarationContext::Var_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CymbolParser::TypeContext* CymbolParser::Var_declarationContext::type() {
  return getRuleContext<CymbolParser::TypeContext>(0);
}

tree::TerminalNode* CymbolParser::Var_declarationContext::ID() {
  return getToken(CymbolParser::ID, 0);
}

CymbolParser::ExpressionContext* CymbolParser::Var_declarationContext::expression() {
  return getRuleContext<CymbolParser::ExpressionContext>(0);
}


size_t CymbolParser::Var_declarationContext::getRuleIndex() const {
  return CymbolParser::RuleVar_declaration;
}

void CymbolParser::Var_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CymbolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar_declaration(this);
}

void CymbolParser::Var_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CymbolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar_declaration(this);
}


antlrcpp::Any CymbolParser::Var_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CymbolVisitor*>(visitor))
    return parserVisitor->visitVar_declaration(this);
  else
    return visitor->visitChildren(this);
}

CymbolParser::Var_declarationContext* CymbolParser::var_declaration() {
  Var_declarationContext *_localctx = _tracker.createInstance<Var_declarationContext>(_ctx, getState());
  enterRule(_localctx, 4, CymbolParser::RuleVar_declaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(19);
    dynamic_cast<Var_declarationContext *>(_localctx)->typeContext = type();
    setState(20);
    dynamic_cast<Var_declarationContext *>(_localctx)->idToken = match(CymbolParser::ID);
    setState(23);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CymbolParser::T__2) {
      setState(21);
      match(CymbolParser::T__2);
      setState(22);
      expression();
    }
    setState(25);
    match(CymbolParser::T__3);
     std::cout << "line " << (dynamic_cast<Var_declarationContext *>(_localctx)->idToken != nullptr ? dynamic_cast<Var_declarationContext *>(_localctx)->idToken->getLine() : 0) << ": ref " << (dynamic_cast<Var_declarationContext *>(_localctx)->idToken != nullptr ? dynamic_cast<Var_declarationContext *>(_localctx)->idToken->getText() : "") << std::endl;
            symtab.define(VariableSymbol((dynamic_cast<Var_declarationContext *>(_localctx)->idToken != nullptr ? dynamic_cast<Var_declarationContext *>(_localctx)->idToken->getText() : ""), dynamic_cast<Var_declarationContext *>(_localctx)->typeContext->tsym));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

CymbolParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CymbolParser::ExpressionContext::ID() {
  return getToken(CymbolParser::ID, 0);
}

tree::TerminalNode* CymbolParser::ExpressionContext::INT() {
  return getToken(CymbolParser::INT, 0);
}

CymbolParser::ExpressionContext* CymbolParser::ExpressionContext::expression() {
  return getRuleContext<CymbolParser::ExpressionContext>(0);
}


size_t CymbolParser::ExpressionContext::getRuleIndex() const {
  return CymbolParser::RuleExpression;
}

void CymbolParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CymbolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void CymbolParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CymbolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


antlrcpp::Any CymbolParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CymbolVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

CymbolParser::ExpressionContext* CymbolParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 6, CymbolParser::RuleExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(35);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CymbolParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(28);
        dynamic_cast<ExpressionContext *>(_localctx)->idToken = match(CymbolParser::ID);
         std::cout >> "line " << (dynamic_cast<ExpressionContext *>(_localctx)->idToken != nullptr ? dynamic_cast<ExpressionContext *>(_localctx)->idToken->getLine() : 0) << ": ref to " << symtab.Resolve((dynamic_cast<ExpressionContext *>(_localctx)->idToken != nullptr ? dynamic_cast<ExpressionContext *>(_localctx)->idToken->getText() : "")); 
        break;
      }

      case CymbolParser::INT: {
        enterOuterAlt(_localctx, 2);
        setState(30);
        match(CymbolParser::INT);
        break;
      }

      case CymbolParser::T__4: {
        enterOuterAlt(_localctx, 3);
        setState(31);
        match(CymbolParser::T__4);
        setState(32);
        expression();
        setState(33);
        match(CymbolParser::T__5);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> CymbolParser::_decisionToDFA;
atn::PredictionContextCache CymbolParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN CymbolParser::_atn;
std::vector<uint16_t> CymbolParser::_serializedATN;

std::vector<std::string> CymbolParser::_ruleNames = {
  "compilationUnit", "type", "var_declaration", "expression"
};

std::vector<std::string> CymbolParser::_literalNames = {
  "", "'float'", "'int'", "'='", "';'", "'('", "')'"
};

std::vector<std::string> CymbolParser::_symbolicNames = {
  "", "", "", "", "", "", "", "ID", "INT"
};

dfa::Vocabulary CymbolParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> CymbolParser::_tokenNames;

CymbolParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0xa, 0x28, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x3, 0x2, 0x6, 0x2, 0xc, 0xa, 0x2, 0xd, 0x2, 
    0xe, 0x2, 0xd, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x14, 
    0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x1a, 0xa, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x26, 0xa, 0x5, 0x3, 0x5, 
    0x2, 0x2, 0x6, 0x2, 0x4, 0x6, 0x8, 0x2, 0x2, 0x2, 0x28, 0x2, 0xb, 0x3, 
    0x2, 0x2, 0x2, 0x4, 0x13, 0x3, 0x2, 0x2, 0x2, 0x6, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0x8, 0x25, 0x3, 0x2, 0x2, 0x2, 0xa, 0xc, 0x5, 0x6, 0x4, 0x2, 0xb, 
    0xa, 0x3, 0x2, 0x2, 0x2, 0xc, 0xd, 0x3, 0x2, 0x2, 0x2, 0xd, 0xb, 0x3, 
    0x2, 0x2, 0x2, 0xd, 0xe, 0x3, 0x2, 0x2, 0x2, 0xe, 0x3, 0x3, 0x2, 0x2, 
    0x2, 0xf, 0x10, 0x7, 0x3, 0x2, 0x2, 0x10, 0x14, 0x8, 0x3, 0x1, 0x2, 
    0x11, 0x12, 0x7, 0x4, 0x2, 0x2, 0x12, 0x14, 0x8, 0x3, 0x1, 0x2, 0x13, 
    0xf, 0x3, 0x2, 0x2, 0x2, 0x13, 0x11, 0x3, 0x2, 0x2, 0x2, 0x14, 0x5, 
    0x3, 0x2, 0x2, 0x2, 0x15, 0x16, 0x5, 0x4, 0x3, 0x2, 0x16, 0x19, 0x7, 
    0x9, 0x2, 0x2, 0x17, 0x18, 0x7, 0x5, 0x2, 0x2, 0x18, 0x1a, 0x5, 0x8, 
    0x5, 0x2, 0x19, 0x17, 0x3, 0x2, 0x2, 0x2, 0x19, 0x1a, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x1c, 0x7, 0x6, 0x2, 0x2, 
    0x1c, 0x1d, 0x8, 0x4, 0x1, 0x2, 0x1d, 0x7, 0x3, 0x2, 0x2, 0x2, 0x1e, 
    0x1f, 0x7, 0x9, 0x2, 0x2, 0x1f, 0x26, 0x8, 0x5, 0x1, 0x2, 0x20, 0x26, 
    0x7, 0xa, 0x2, 0x2, 0x21, 0x22, 0x7, 0x7, 0x2, 0x2, 0x22, 0x23, 0x5, 
    0x8, 0x5, 0x2, 0x23, 0x24, 0x7, 0x8, 0x2, 0x2, 0x24, 0x26, 0x3, 0x2, 
    0x2, 0x2, 0x25, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x25, 0x20, 0x3, 0x2, 0x2, 
    0x2, 0x25, 0x21, 0x3, 0x2, 0x2, 0x2, 0x26, 0x9, 0x3, 0x2, 0x2, 0x2, 
    0x6, 0xd, 0x13, 0x19, 0x25, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

CymbolParser::Initializer CymbolParser::_init;

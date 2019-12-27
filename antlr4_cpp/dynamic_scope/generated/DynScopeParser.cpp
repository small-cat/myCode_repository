
// Generated from /home/jona/myGit/myCode_repository/antlr4_cpp/dynamic_scope/DynScope.g4 by ANTLR 4.7.1


#include "DynScopeListener.h"
#include "DynScopeVisitor.h"

#include "DynScopeParser.h"


#include <string>


using namespace antlrcpp;
using namespace antlr4;

DynScopeParser::DynScopeParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

DynScopeParser::~DynScopeParser() {
  delete _interpreter;
}

std::string DynScopeParser::getGrammarFileName() const {
  return "DynScope.g4";
}

const std::vector<std::string>& DynScopeParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& DynScopeParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgContext ------------------------------------------------------------------

DynScopeParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DynScopeParser::BlockContext* DynScopeParser::ProgContext::block() {
  return getRuleContext<DynScopeParser::BlockContext>(0);
}


size_t DynScopeParser::ProgContext::getRuleIndex() const {
  return DynScopeParser::RuleProg;
}

void DynScopeParser::ProgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DynScopeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProg(this);
}

void DynScopeParser::ProgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DynScopeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProg(this);
}


antlrcpp::Any DynScopeParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DynScopeVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

DynScopeParser::ProgContext* DynScopeParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, DynScopeParser::RuleProg);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(8);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

DynScopeParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<DynScopeParser::DeclContext *> DynScopeParser::BlockContext::decl() {
  return getRuleContexts<DynScopeParser::DeclContext>();
}

DynScopeParser::DeclContext* DynScopeParser::BlockContext::decl(size_t i) {
  return getRuleContext<DynScopeParser::DeclContext>(i);
}

std::vector<DynScopeParser::StatContext *> DynScopeParser::BlockContext::stat() {
  return getRuleContexts<DynScopeParser::StatContext>();
}

DynScopeParser::StatContext* DynScopeParser::BlockContext::stat(size_t i) {
  return getRuleContext<DynScopeParser::StatContext>(i);
}


size_t DynScopeParser::BlockContext::getRuleIndex() const {
  return DynScopeParser::RuleBlock;
}

void DynScopeParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DynScopeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void DynScopeParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DynScopeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


antlrcpp::Any DynScopeParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DynScopeVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

DynScopeParser::BlockContext* DynScopeParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 2, DynScopeParser::RuleBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
     symbols.clear(); 
    setState(11);
    match(DynScopeParser::T__0);
    setState(15);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DynScopeParser::T__2) {
      setState(12);
      decl();
      setState(17);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(19); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(18);
      stat();
      setState(21); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == DynScopeParser::T__0

    || _la == DynScopeParser::ID);
    setState(23);
    match(DynScopeParser::T__1);
     std::cout << "symbols is: ";
              for (auto str : symbols) 
                std::cout << str << ", "; 
              std::cout << std::endl;
            
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclContext ------------------------------------------------------------------

DynScopeParser::DeclContext::DeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DynScopeParser::DeclContext::ID() {
  return getToken(DynScopeParser::ID, 0);
}


size_t DynScopeParser::DeclContext::getRuleIndex() const {
  return DynScopeParser::RuleDecl;
}

void DynScopeParser::DeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DynScopeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecl(this);
}

void DynScopeParser::DeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DynScopeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecl(this);
}


antlrcpp::Any DynScopeParser::DeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DynScopeVisitor*>(visitor))
    return parserVisitor->visitDecl(this);
  else
    return visitor->visitChildren(this);
}

DynScopeParser::DeclContext* DynScopeParser::decl() {
  DeclContext *_localctx = _tracker.createInstance<DeclContext>(_ctx, getState());
  enterRule(_localctx, 4, DynScopeParser::RuleDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(26);
    match(DynScopeParser::T__2);
    setState(27);
    dynamic_cast<DeclContext *>(_localctx)->idToken = match(DynScopeParser::ID);
    symbols.push_back((dynamic_cast<DeclContext *>(_localctx)->idToken != nullptr ? dynamic_cast<DeclContext *>(_localctx)->idToken->getText() : "")); _localctx->locals_ids+=(dynamic_cast<DeclContext *>(_localctx)->idToken != nullptr ? dynamic_cast<DeclContext *>(_localctx)->idToken->getText() : "");
    setState(29);
    match(DynScopeParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatContext ------------------------------------------------------------------

DynScopeParser::StatContext::StatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DynScopeParser::StatContext::ID() {
  return getToken(DynScopeParser::ID, 0);
}

tree::TerminalNode* DynScopeParser::StatContext::INT() {
  return getToken(DynScopeParser::INT, 0);
}

DynScopeParser::BlockContext* DynScopeParser::StatContext::block() {
  return getRuleContext<DynScopeParser::BlockContext>(0);
}


size_t DynScopeParser::StatContext::getRuleIndex() const {
  return DynScopeParser::RuleStat;
}

void DynScopeParser::StatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DynScopeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStat(this);
}

void DynScopeParser::StatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DynScopeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStat(this);
}


antlrcpp::Any DynScopeParser::StatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DynScopeVisitor*>(visitor))
    return parserVisitor->visitStat(this);
  else
    return visitor->visitChildren(this);
}

DynScopeParser::StatContext* DynScopeParser::stat() {
  StatContext *_localctx = _tracker.createInstance<StatContext>(_ctx, getState());
  enterRule(_localctx, 6, DynScopeParser::RuleStat);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(37);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DynScopeParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(31);
        dynamic_cast<StatContext *>(_localctx)->idToken = match(DynScopeParser::ID);
        setState(32);
        match(DynScopeParser::T__4);
        setState(33);
        match(DynScopeParser::INT);
        setState(34);
        match(DynScopeParser::T__3);

                  bool contains = false;
                  for (auto str : symbols) {
                    if (str.compare((dynamic_cast<StatContext *>(_localctx)->idToken != nullptr ? dynamic_cast<StatContext *>(_localctx)->idToken->getText() : "")) == 0)
                      contains = true;
                  }

                  if (!contains)
                    std::cout << "Undefined symbol: " << (dynamic_cast<StatContext *>(_localctx)->idToken != nullptr ? dynamic_cast<StatContext *>(_localctx)->idToken->getText() : "") << std::endl;
                
        break;
      }

      case DynScopeParser::T__0: {
        enterOuterAlt(_localctx, 2);
        setState(36);
        block();
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
std::vector<dfa::DFA> DynScopeParser::_decisionToDFA;
atn::PredictionContextCache DynScopeParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN DynScopeParser::_atn;
std::vector<uint16_t> DynScopeParser::_serializedATN;

std::vector<std::string> DynScopeParser::_ruleNames = {
  "prog", "block", "decl", "stat"
};

std::vector<std::string> DynScopeParser::_literalNames = {
  "", "'{'", "'}'", "'int'", "';'", "'='"
};

std::vector<std::string> DynScopeParser::_symbolicNames = {
  "", "", "", "", "", "", "ID", "INT", "WS"
};

dfa::Vocabulary DynScopeParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> DynScopeParser::_tokenNames;

DynScopeParser::Initializer::Initializer() {
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
    0x3, 0xa, 0x2a, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x7, 0x3, 0x10, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x13, 0xb, 0x3, 0x3, 
    0x3, 0x6, 0x3, 0x16, 0xa, 0x3, 0xd, 0x3, 0xe, 0x3, 0x17, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x28, 
    0xa, 0x5, 0x3, 0x5, 0x2, 0x2, 0x6, 0x2, 0x4, 0x6, 0x8, 0x2, 0x2, 0x2, 
    0x28, 0x2, 0xa, 0x3, 0x2, 0x2, 0x2, 0x4, 0xc, 0x3, 0x2, 0x2, 0x2, 0x6, 
    0x1c, 0x3, 0x2, 0x2, 0x2, 0x8, 0x27, 0x3, 0x2, 0x2, 0x2, 0xa, 0xb, 0x5, 
    0x4, 0x3, 0x2, 0xb, 0x3, 0x3, 0x2, 0x2, 0x2, 0xc, 0xd, 0x8, 0x3, 0x1, 
    0x2, 0xd, 0x11, 0x7, 0x3, 0x2, 0x2, 0xe, 0x10, 0x5, 0x6, 0x4, 0x2, 0xf, 
    0xe, 0x3, 0x2, 0x2, 0x2, 0x10, 0x13, 0x3, 0x2, 0x2, 0x2, 0x11, 0xf, 
    0x3, 0x2, 0x2, 0x2, 0x11, 0x12, 0x3, 0x2, 0x2, 0x2, 0x12, 0x15, 0x3, 
    0x2, 0x2, 0x2, 0x13, 0x11, 0x3, 0x2, 0x2, 0x2, 0x14, 0x16, 0x5, 0x8, 
    0x5, 0x2, 0x15, 0x14, 0x3, 0x2, 0x2, 0x2, 0x16, 0x17, 0x3, 0x2, 0x2, 
    0x2, 0x17, 0x15, 0x3, 0x2, 0x2, 0x2, 0x17, 0x18, 0x3, 0x2, 0x2, 0x2, 
    0x18, 0x19, 0x3, 0x2, 0x2, 0x2, 0x19, 0x1a, 0x7, 0x4, 0x2, 0x2, 0x1a, 
    0x1b, 0x8, 0x3, 0x1, 0x2, 0x1b, 0x5, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1d, 
    0x7, 0x5, 0x2, 0x2, 0x1d, 0x1e, 0x7, 0x8, 0x2, 0x2, 0x1e, 0x1f, 0x8, 
    0x4, 0x1, 0x2, 0x1f, 0x20, 0x7, 0x6, 0x2, 0x2, 0x20, 0x7, 0x3, 0x2, 
    0x2, 0x2, 0x21, 0x22, 0x7, 0x8, 0x2, 0x2, 0x22, 0x23, 0x7, 0x7, 0x2, 
    0x2, 0x23, 0x24, 0x7, 0x9, 0x2, 0x2, 0x24, 0x25, 0x7, 0x6, 0x2, 0x2, 
    0x25, 0x28, 0x8, 0x5, 0x1, 0x2, 0x26, 0x28, 0x5, 0x4, 0x3, 0x2, 0x27, 
    0x21, 0x3, 0x2, 0x2, 0x2, 0x27, 0x26, 0x3, 0x2, 0x2, 0x2, 0x28, 0x9, 
    0x3, 0x2, 0x2, 0x2, 0x5, 0x11, 0x17, 0x27, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

DynScopeParser::Initializer DynScopeParser::_init;

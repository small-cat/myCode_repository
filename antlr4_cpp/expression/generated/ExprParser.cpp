
// Generated from Expr.g4 by ANTLR 4.7.1


#include "ExprListener.h"
#include "ExprVisitor.h"

#include "ExprParser.h"


using namespace antlrcpp;
using namespace antlr4;

ExprParser::ExprParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ExprParser::~ExprParser() {
  delete _interpreter;
}

std::string ExprParser::getGrammarFileName() const {
  return "Expr.g4";
}

const std::vector<std::string>& ExprParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& ExprParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgContext ------------------------------------------------------------------

ExprParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::StatContext *> ExprParser::ProgContext::stat() {
  return getRuleContexts<ExprParser::StatContext>();
}

ExprParser::StatContext* ExprParser::ProgContext::stat(size_t i) {
  return getRuleContext<ExprParser::StatContext>(i);
}


size_t ExprParser::ProgContext::getRuleIndex() const {
  return ExprParser::RuleProg;
}

void ExprParser::ProgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProg(this);
}

void ExprParser::ProgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProg(this);
}


antlrcpp::Any ExprParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ProgContext* ExprParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, ExprParser::RuleProg);
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
      stat();
      setState(11); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ExprParser::T__5)
      | (1ULL << ExprParser::ID)
      | (1ULL << ExprParser::INT)
      | (1ULL << ExprParser::NEWLINE))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatContext ------------------------------------------------------------------

ExprParser::StatContext::StatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::ExprContext* ExprParser::StatContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

tree::TerminalNode* ExprParser::StatContext::NEWLINE() {
  return getToken(ExprParser::NEWLINE, 0);
}

tree::TerminalNode* ExprParser::StatContext::ID() {
  return getToken(ExprParser::ID, 0);
}


size_t ExprParser::StatContext::getRuleIndex() const {
  return ExprParser::RuleStat;
}

void ExprParser::StatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStat(this);
}

void ExprParser::StatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStat(this);
}


antlrcpp::Any ExprParser::StatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitStat(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::StatContext* ExprParser::stat() {
  StatContext *_localctx = _tracker.createInstance<StatContext>(_ctx, getState());
  enterRule(_localctx, 2, ExprParser::RuleStat);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(24);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(13);
      expr(0);
      setState(15);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
      case 1: {
        setState(14);
        match(ExprParser::NEWLINE);
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(17);
      match(ExprParser::ID);
      setState(18);
      match(ExprParser::T__0);
      setState(19);
      expr(0);
      setState(21);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
      case 1: {
        setState(20);
        match(ExprParser::NEWLINE);
        break;
      }

      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(23);
      match(ExprParser::NEWLINE);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

ExprParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::ExprContext::getRuleIndex() const {
  return ExprParser::RuleExpr;
}

void ExprParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Sub_exprContext ------------------------------------------------------------------

std::vector<ExprParser::ExprContext *> ExprParser::Sub_exprContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::Sub_exprContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

ExprParser::Sub_exprContext::Sub_exprContext(ExprContext *ctx) { copyFrom(ctx); }

void ExprParser::Sub_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSub_expr(this);
}
void ExprParser::Sub_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSub_expr(this);
}

antlrcpp::Any ExprParser::Sub_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitSub_expr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Add_exprContext ------------------------------------------------------------------

std::vector<ExprParser::ExprContext *> ExprParser::Add_exprContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::Add_exprContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

ExprParser::Add_exprContext::Add_exprContext(ExprContext *ctx) { copyFrom(ctx); }

void ExprParser::Add_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdd_expr(this);
}
void ExprParser::Add_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdd_expr(this);
}

antlrcpp::Any ExprParser::Add_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitAdd_expr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Atom_exprContext ------------------------------------------------------------------

ExprParser::AtomContext* ExprParser::Atom_exprContext::atom() {
  return getRuleContext<ExprParser::AtomContext>(0);
}

ExprParser::Atom_exprContext::Atom_exprContext(ExprContext *ctx) { copyFrom(ctx); }

void ExprParser::Atom_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtom_expr(this);
}
void ExprParser::Atom_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtom_expr(this);
}

antlrcpp::Any ExprParser::Atom_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitAtom_expr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Div_exprContext ------------------------------------------------------------------

std::vector<ExprParser::ExprContext *> ExprParser::Div_exprContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::Div_exprContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

ExprParser::Div_exprContext::Div_exprContext(ExprContext *ctx) { copyFrom(ctx); }

void ExprParser::Div_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDiv_expr(this);
}
void ExprParser::Div_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDiv_expr(this);
}

antlrcpp::Any ExprParser::Div_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitDiv_expr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Mul_exprContext ------------------------------------------------------------------

std::vector<ExprParser::ExprContext *> ExprParser::Mul_exprContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::Mul_exprContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

ExprParser::Mul_exprContext::Mul_exprContext(ExprContext *ctx) { copyFrom(ctx); }

void ExprParser::Mul_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMul_expr(this);
}
void ExprParser::Mul_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMul_expr(this);
}

antlrcpp::Any ExprParser::Mul_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitMul_expr(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ExprContext* ExprParser::expr() {
   return expr(0);
}

ExprParser::ExprContext* ExprParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ExprParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  ExprParser::ExprContext *previousContext = _localctx;
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, ExprParser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<Atom_exprContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(27);
    atom();
    _ctx->stop = _input->LT(-1);
    setState(43);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(41);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<Mul_exprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(29);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(30);
          match(ExprParser::T__1);
          setState(31);
          expr(6);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<Div_exprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(32);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(33);
          match(ExprParser::T__2);
          setState(34);
          expr(5);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<Add_exprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(35);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(36);
          match(ExprParser::T__3);
          setState(37);
          expr(4);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<Sub_exprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(38);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(39);
          match(ExprParser::T__4);
          setState(40);
          expr(3);
          break;
        }

        } 
      }
      setState(45);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AtomContext ------------------------------------------------------------------

ExprParser::AtomContext::AtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::AtomContext::INT() {
  return getToken(ExprParser::INT, 0);
}

tree::TerminalNode* ExprParser::AtomContext::ID() {
  return getToken(ExprParser::ID, 0);
}

ExprParser::ExprContext* ExprParser::AtomContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}


size_t ExprParser::AtomContext::getRuleIndex() const {
  return ExprParser::RuleAtom;
}

void ExprParser::AtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtom(this);
}

void ExprParser::AtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtom(this);
}


antlrcpp::Any ExprParser::AtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitAtom(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::AtomContext* ExprParser::atom() {
  AtomContext *_localctx = _tracker.createInstance<AtomContext>(_ctx, getState());
  enterRule(_localctx, 6, ExprParser::RuleAtom);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(52);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::INT: {
        enterOuterAlt(_localctx, 1);
        setState(46);
        match(ExprParser::INT);
        break;
      }

      case ExprParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(47);
        match(ExprParser::ID);
        break;
      }

      case ExprParser::T__5: {
        enterOuterAlt(_localctx, 3);
        setState(48);
        match(ExprParser::T__5);
        setState(49);
        expr(0);
        setState(50);
        match(ExprParser::T__6);
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

bool ExprParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 2: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ExprParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 5);
    case 1: return precpred(_ctx, 4);
    case 2: return precpred(_ctx, 3);
    case 3: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> ExprParser::_decisionToDFA;
atn::PredictionContextCache ExprParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ExprParser::_atn;
std::vector<uint16_t> ExprParser::_serializedATN;

std::vector<std::string> ExprParser::_ruleNames = {
  "prog", "stat", "expr", "atom"
};

std::vector<std::string> ExprParser::_literalNames = {
  "", "'='", "'*'", "'/'", "'+'", "'-'", "'('", "')'"
};

std::vector<std::string> ExprParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "ID", "INT", "NEWLINE", "WS"
};

dfa::Vocabulary ExprParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ExprParser::_tokenNames;

ExprParser::Initializer::Initializer() {
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
    0x3, 0xd, 0x39, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x3, 0x2, 0x6, 0x2, 0xc, 0xa, 0x2, 0xd, 0x2, 
    0xe, 0x2, 0xd, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x12, 0xa, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x18, 0xa, 0x3, 0x3, 0x3, 0x5, 
    0x3, 0x1b, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x2c, 0xa, 0x4, 0xc, 0x4, 0xe, 
    0x4, 0x2f, 0xb, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x5, 0x5, 0x37, 0xa, 0x5, 0x3, 0x5, 0x2, 0x3, 0x6, 0x6, 0x2, 
    0x4, 0x6, 0x8, 0x2, 0x2, 0x2, 0x3f, 0x2, 0xb, 0x3, 0x2, 0x2, 0x2, 0x4, 
    0x1a, 0x3, 0x2, 0x2, 0x2, 0x6, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x8, 0x36, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0xc, 0x5, 0x4, 0x3, 0x2, 0xb, 0xa, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0xd, 0x3, 0x2, 0x2, 0x2, 0xd, 0xb, 0x3, 0x2, 0x2, 0x2, 
    0xd, 0xe, 0x3, 0x2, 0x2, 0x2, 0xe, 0x3, 0x3, 0x2, 0x2, 0x2, 0xf, 0x11, 
    0x5, 0x6, 0x4, 0x2, 0x10, 0x12, 0x7, 0xc, 0x2, 0x2, 0x11, 0x10, 0x3, 
    0x2, 0x2, 0x2, 0x11, 0x12, 0x3, 0x2, 0x2, 0x2, 0x12, 0x1b, 0x3, 0x2, 
    0x2, 0x2, 0x13, 0x14, 0x7, 0xa, 0x2, 0x2, 0x14, 0x15, 0x7, 0x3, 0x2, 
    0x2, 0x15, 0x17, 0x5, 0x6, 0x4, 0x2, 0x16, 0x18, 0x7, 0xc, 0x2, 0x2, 
    0x17, 0x16, 0x3, 0x2, 0x2, 0x2, 0x17, 0x18, 0x3, 0x2, 0x2, 0x2, 0x18, 
    0x1b, 0x3, 0x2, 0x2, 0x2, 0x19, 0x1b, 0x7, 0xc, 0x2, 0x2, 0x1a, 0xf, 
    0x3, 0x2, 0x2, 0x2, 0x1a, 0x13, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x19, 0x3, 
    0x2, 0x2, 0x2, 0x1b, 0x5, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1d, 0x8, 0x4, 
    0x1, 0x2, 0x1d, 0x1e, 0x5, 0x8, 0x5, 0x2, 0x1e, 0x2d, 0x3, 0x2, 0x2, 
    0x2, 0x1f, 0x20, 0xc, 0x7, 0x2, 0x2, 0x20, 0x21, 0x7, 0x4, 0x2, 0x2, 
    0x21, 0x2c, 0x5, 0x6, 0x4, 0x8, 0x22, 0x23, 0xc, 0x6, 0x2, 0x2, 0x23, 
    0x24, 0x7, 0x5, 0x2, 0x2, 0x24, 0x2c, 0x5, 0x6, 0x4, 0x7, 0x25, 0x26, 
    0xc, 0x5, 0x2, 0x2, 0x26, 0x27, 0x7, 0x6, 0x2, 0x2, 0x27, 0x2c, 0x5, 
    0x6, 0x4, 0x6, 0x28, 0x29, 0xc, 0x4, 0x2, 0x2, 0x29, 0x2a, 0x7, 0x7, 
    0x2, 0x2, 0x2a, 0x2c, 0x5, 0x6, 0x4, 0x5, 0x2b, 0x1f, 0x3, 0x2, 0x2, 
    0x2, 0x2b, 0x22, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x25, 0x3, 0x2, 0x2, 0x2, 
    0x2b, 0x28, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x2d, 
    0x2b, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x7, 
    0x3, 0x2, 0x2, 0x2, 0x2f, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x30, 0x37, 0x7, 
    0xb, 0x2, 0x2, 0x31, 0x37, 0x7, 0xa, 0x2, 0x2, 0x32, 0x33, 0x7, 0x8, 
    0x2, 0x2, 0x33, 0x34, 0x5, 0x6, 0x4, 0x2, 0x34, 0x35, 0x7, 0x9, 0x2, 
    0x2, 0x35, 0x37, 0x3, 0x2, 0x2, 0x2, 0x36, 0x30, 0x3, 0x2, 0x2, 0x2, 
    0x36, 0x31, 0x3, 0x2, 0x2, 0x2, 0x36, 0x32, 0x3, 0x2, 0x2, 0x2, 0x37, 
    0x9, 0x3, 0x2, 0x2, 0x2, 0x9, 0xd, 0x11, 0x17, 0x1a, 0x2b, 0x2d, 0x36, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ExprParser::Initializer ExprParser::_init;

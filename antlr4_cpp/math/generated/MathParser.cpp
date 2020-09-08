
// Generated from Math.g4 by ANTLR 4.7.1


#include "MathListener.h"
#include "MathVisitor.h"

#include "MathParser.h"


using namespace antlrcpp;
using namespace antlr4;

MathParser::MathParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

MathParser::~MathParser() {
  delete _interpreter;
}

std::string MathParser::getGrammarFileName() const {
  return "Math.g4";
}

const std::vector<std::string>& MathParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& MathParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- CompileUnitContext ------------------------------------------------------------------

MathParser::CompileUnitContext::CompileUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MathParser::ExprContext* MathParser::CompileUnitContext::expr() {
  return getRuleContext<MathParser::ExprContext>(0);
}

tree::TerminalNode* MathParser::CompileUnitContext::EOF() {
  return getToken(MathParser::EOF, 0);
}


size_t MathParser::CompileUnitContext::getRuleIndex() const {
  return MathParser::RuleCompileUnit;
}

void MathParser::CompileUnitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MathListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompileUnit(this);
}

void MathParser::CompileUnitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MathListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompileUnit(this);
}


antlrcpp::Any MathParser::CompileUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MathVisitor*>(visitor))
    return parserVisitor->visitCompileUnit(this);
  else
    return visitor->visitChildren(this);
}

MathParser::CompileUnitContext* MathParser::compileUnit() {
  CompileUnitContext *_localctx = _tracker.createInstance<CompileUnitContext>(_ctx, getState());
  enterRule(_localctx, 0, MathParser::RuleCompileUnit);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(4);
    expr(0);
    setState(5);
    match(MathParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

MathParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MathParser::ExprContext::getRuleIndex() const {
  return MathParser::RuleExpr;
}

void MathParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- UnaryExprContext ------------------------------------------------------------------

MathParser::ExprContext* MathParser::UnaryExprContext::expr() {
  return getRuleContext<MathParser::ExprContext>(0);
}

tree::TerminalNode* MathParser::UnaryExprContext::ADD() {
  return getToken(MathParser::ADD, 0);
}

tree::TerminalNode* MathParser::UnaryExprContext::SUB() {
  return getToken(MathParser::SUB, 0);
}

MathParser::UnaryExprContext::UnaryExprContext(ExprContext *ctx) { copyFrom(ctx); }

void MathParser::UnaryExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MathListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryExpr(this);
}
void MathParser::UnaryExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MathListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryExpr(this);
}

antlrcpp::Any MathParser::UnaryExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MathVisitor*>(visitor))
    return parserVisitor->visitUnaryExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FuncExprContext ------------------------------------------------------------------

std::vector<MathParser::ExprContext *> MathParser::FuncExprContext::expr() {
  return getRuleContexts<MathParser::ExprContext>();
}

MathParser::ExprContext* MathParser::FuncExprContext::expr(size_t i) {
  return getRuleContext<MathParser::ExprContext>(i);
}

tree::TerminalNode* MathParser::FuncExprContext::ID() {
  return getToken(MathParser::ID, 0);
}

MathParser::FuncExprContext::FuncExprContext(ExprContext *ctx) { copyFrom(ctx); }

void MathParser::FuncExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MathListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncExpr(this);
}
void MathParser::FuncExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MathListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncExpr(this);
}

antlrcpp::Any MathParser::FuncExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MathVisitor*>(visitor))
    return parserVisitor->visitFuncExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddSubExprContext ------------------------------------------------------------------

std::vector<MathParser::ExprContext *> MathParser::AddSubExprContext::expr() {
  return getRuleContexts<MathParser::ExprContext>();
}

MathParser::ExprContext* MathParser::AddSubExprContext::expr(size_t i) {
  return getRuleContext<MathParser::ExprContext>(i);
}

tree::TerminalNode* MathParser::AddSubExprContext::ADD() {
  return getToken(MathParser::ADD, 0);
}

tree::TerminalNode* MathParser::AddSubExprContext::SUB() {
  return getToken(MathParser::SUB, 0);
}

MathParser::AddSubExprContext::AddSubExprContext(ExprContext *ctx) { copyFrom(ctx); }

void MathParser::AddSubExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MathListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddSubExpr(this);
}
void MathParser::AddSubExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MathListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddSubExpr(this);
}

antlrcpp::Any MathParser::AddSubExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MathVisitor*>(visitor))
    return parserVisitor->visitAddSubExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulDivExprContext ------------------------------------------------------------------

std::vector<MathParser::ExprContext *> MathParser::MulDivExprContext::expr() {
  return getRuleContexts<MathParser::ExprContext>();
}

MathParser::ExprContext* MathParser::MulDivExprContext::expr(size_t i) {
  return getRuleContext<MathParser::ExprContext>(i);
}

tree::TerminalNode* MathParser::MulDivExprContext::MUL() {
  return getToken(MathParser::MUL, 0);
}

tree::TerminalNode* MathParser::MulDivExprContext::DIV() {
  return getToken(MathParser::DIV, 0);
}

MathParser::MulDivExprContext::MulDivExprContext(ExprContext *ctx) { copyFrom(ctx); }

void MathParser::MulDivExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MathListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulDivExpr(this);
}
void MathParser::MulDivExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MathListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulDivExpr(this);
}

antlrcpp::Any MathParser::MulDivExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MathVisitor*>(visitor))
    return parserVisitor->visitMulDivExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenExprContext ------------------------------------------------------------------

MathParser::ExprContext* MathParser::ParenExprContext::expr() {
  return getRuleContext<MathParser::ExprContext>(0);
}

MathParser::ParenExprContext::ParenExprContext(ExprContext *ctx) { copyFrom(ctx); }

void MathParser::ParenExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MathListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenExpr(this);
}
void MathParser::ParenExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MathListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenExpr(this);
}

antlrcpp::Any MathParser::ParenExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MathVisitor*>(visitor))
    return parserVisitor->visitParenExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumExprContext ------------------------------------------------------------------

tree::TerminalNode* MathParser::NumExprContext::NUM() {
  return getToken(MathParser::NUM, 0);
}

MathParser::NumExprContext::NumExprContext(ExprContext *ctx) { copyFrom(ctx); }

void MathParser::NumExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MathListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumExpr(this);
}
void MathParser::NumExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MathListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumExpr(this);
}

antlrcpp::Any MathParser::NumExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MathVisitor*>(visitor))
    return parserVisitor->visitNumExpr(this);
  else
    return visitor->visitChildren(this);
}

MathParser::ExprContext* MathParser::expr() {
   return expr(0);
}

MathParser::ExprContext* MathParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  MathParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  MathParser::ExprContext *previousContext = _localctx;
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, MathParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(24);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MathParser::T__0: {
        _localctx = _tracker.createInstance<ParenExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(8);
        match(MathParser::T__0);
        setState(9);
        expr(0);
        setState(10);
        match(MathParser::T__1);
        break;
      }

      case MathParser::ADD:
      case MathParser::SUB: {
        _localctx = _tracker.createInstance<UnaryExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(12);
        dynamic_cast<UnaryExprContext *>(_localctx)->op = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == MathParser::ADD

        || _la == MathParser::SUB)) {
          dynamic_cast<UnaryExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(13);
        expr(5);
        break;
      }

      case MathParser::ID: {
        _localctx = _tracker.createInstance<FuncExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(14);
        dynamic_cast<FuncExprContext *>(_localctx)->func = match(MathParser::ID);
        setState(15);
        match(MathParser::T__0);
        setState(16);
        expr(0);
        setState(19);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == MathParser::T__2) {
          setState(17);
          match(MathParser::T__2);
          setState(18);
          expr(0);
        }
        setState(21);
        match(MathParser::T__1);
        break;
      }

      case MathParser::NUM: {
        _localctx = _tracker.createInstance<NumExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(23);
        match(MathParser::NUM);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(34);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(32);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulDivExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(26);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(27);
          dynamic_cast<MulDivExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == MathParser::MUL

          || _la == MathParser::DIV)) {
            dynamic_cast<MulDivExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(28);
          dynamic_cast<MulDivExprContext *>(_localctx)->right = expr(5);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddSubExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(29);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(30);
          dynamic_cast<AddSubExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == MathParser::ADD

          || _la == MathParser::SUB)) {
            dynamic_cast<AddSubExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(31);
          dynamic_cast<AddSubExprContext *>(_localctx)->right = expr(4);
          break;
        }

        } 
      }
      setState(36);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool MathParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool MathParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);
    case 1: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> MathParser::_decisionToDFA;
atn::PredictionContextCache MathParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN MathParser::_atn;
std::vector<uint16_t> MathParser::_serializedATN;

std::vector<std::string> MathParser::_ruleNames = {
  "compileUnit", "expr"
};

std::vector<std::string> MathParser::_literalNames = {
  "", "'('", "')'", "','", "'+'", "'-'", "'*'", "'/'"
};

std::vector<std::string> MathParser::_symbolicNames = {
  "", "", "", "", "ADD", "SUB", "MUL", "DIV", "ID", "NUM", "WS"
};

dfa::Vocabulary MathParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> MathParser::_tokenNames;

MathParser::Initializer::Initializer() {
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
    0x3, 0xc, 0x28, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 
    0x3, 0x16, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x1b, 0xa, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 
    0x3, 0x23, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x26, 0xb, 0x3, 0x3, 0x3, 0x2, 
    0x3, 0x4, 0x4, 0x2, 0x4, 0x2, 0x4, 0x3, 0x2, 0x6, 0x7, 0x3, 0x2, 0x8, 
    0x9, 0x2, 0x2b, 0x2, 0x6, 0x3, 0x2, 0x2, 0x2, 0x4, 0x1a, 0x3, 0x2, 0x2, 
    0x2, 0x6, 0x7, 0x5, 0x4, 0x3, 0x2, 0x7, 0x8, 0x7, 0x2, 0x2, 0x3, 0x8, 
    0x3, 0x3, 0x2, 0x2, 0x2, 0x9, 0xa, 0x8, 0x3, 0x1, 0x2, 0xa, 0xb, 0x7, 
    0x3, 0x2, 0x2, 0xb, 0xc, 0x5, 0x4, 0x3, 0x2, 0xc, 0xd, 0x7, 0x4, 0x2, 
    0x2, 0xd, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xe, 0xf, 0x9, 0x2, 0x2, 0x2, 0xf, 
    0x1b, 0x5, 0x4, 0x3, 0x7, 0x10, 0x11, 0x7, 0xa, 0x2, 0x2, 0x11, 0x12, 
    0x7, 0x3, 0x2, 0x2, 0x12, 0x15, 0x5, 0x4, 0x3, 0x2, 0x13, 0x14, 0x7, 
    0x5, 0x2, 0x2, 0x14, 0x16, 0x5, 0x4, 0x3, 0x2, 0x15, 0x13, 0x3, 0x2, 
    0x2, 0x2, 0x15, 0x16, 0x3, 0x2, 0x2, 0x2, 0x16, 0x17, 0x3, 0x2, 0x2, 
    0x2, 0x17, 0x18, 0x7, 0x4, 0x2, 0x2, 0x18, 0x1b, 0x3, 0x2, 0x2, 0x2, 
    0x19, 0x1b, 0x7, 0xb, 0x2, 0x2, 0x1a, 0x9, 0x3, 0x2, 0x2, 0x2, 0x1a, 
    0xe, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x10, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x19, 
    0x3, 0x2, 0x2, 0x2, 0x1b, 0x24, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1d, 0xc, 
    0x6, 0x2, 0x2, 0x1d, 0x1e, 0x9, 0x3, 0x2, 0x2, 0x1e, 0x23, 0x5, 0x4, 
    0x3, 0x7, 0x1f, 0x20, 0xc, 0x5, 0x2, 0x2, 0x20, 0x21, 0x9, 0x2, 0x2, 
    0x2, 0x21, 0x23, 0x5, 0x4, 0x3, 0x6, 0x22, 0x1c, 0x3, 0x2, 0x2, 0x2, 
    0x22, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x23, 0x26, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0x22, 0x3, 0x2, 0x2, 0x2, 0x24, 0x25, 0x3, 0x2, 0x2, 0x2, 0x25, 0x5, 
    0x3, 0x2, 0x2, 0x2, 0x26, 0x24, 0x3, 0x2, 0x2, 0x2, 0x6, 0x15, 0x1a, 
    0x22, 0x24, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

MathParser::Initializer MathParser::_init;

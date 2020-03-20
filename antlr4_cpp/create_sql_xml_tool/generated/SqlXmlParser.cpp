
// Generated from /home/jona/myGit/myCode_repository/antlr4_cpp/create_sql_xml_tool/SqlXmlParser.g4 by ANTLR 4.7.1


#include "SqlXmlParserListener.h"
#include "SqlXmlParserVisitor.h"

#include "SqlXmlParser.h"


using namespace antlrcpp;
using namespace antlr4;

SqlXmlParser::SqlXmlParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

SqlXmlParser::~SqlXmlParser() {
  delete _interpreter;
}

std::string SqlXmlParser::getGrammarFileName() const {
  return "SqlXmlParser.g4";
}

const std::vector<std::string>& SqlXmlParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& SqlXmlParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- StmtsContext ------------------------------------------------------------------

SqlXmlParser::StmtsContext::StmtsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SqlXmlParser::StmtContext *> SqlXmlParser::StmtsContext::stmt() {
  return getRuleContexts<SqlXmlParser::StmtContext>();
}

SqlXmlParser::StmtContext* SqlXmlParser::StmtsContext::stmt(size_t i) {
  return getRuleContext<SqlXmlParser::StmtContext>(i);
}

tree::TerminalNode* SqlXmlParser::StmtsContext::EOF() {
  return getToken(SqlXmlParser::EOF, 0);
}

std::vector<tree::TerminalNode *> SqlXmlParser::StmtsContext::SEMICOLON() {
  return getTokens(SqlXmlParser::SEMICOLON);
}

tree::TerminalNode* SqlXmlParser::StmtsContext::SEMICOLON(size_t i) {
  return getToken(SqlXmlParser::SEMICOLON, i);
}


size_t SqlXmlParser::StmtsContext::getRuleIndex() const {
  return SqlXmlParser::RuleStmts;
}

void SqlXmlParser::StmtsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SqlXmlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStmts(this);
}

void SqlXmlParser::StmtsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SqlXmlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStmts(this);
}


antlrcpp::Any SqlXmlParser::StmtsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SqlXmlParserVisitor*>(visitor))
    return parserVisitor->visitStmts(this);
  else
    return visitor->visitChildren(this);
}

SqlXmlParser::StmtsContext* SqlXmlParser::stmts() {
  StmtsContext *_localctx = _tracker.createInstance<StmtsContext>(_ctx, getState());
  enterRule(_localctx, 0, SqlXmlParser::RuleStmts);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(10);
    stmt();
    setState(15);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(11);
        match(SqlXmlParser::SEMICOLON);
        setState(12);
        stmt(); 
      }
      setState(17);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
    setState(19);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SqlXmlParser::SEMICOLON) {
      setState(18);
      match(SqlXmlParser::SEMICOLON);
    }
    setState(21);
    match(SqlXmlParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContext ------------------------------------------------------------------

SqlXmlParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SqlXmlParser::StmtContext::CREATE() {
  return getToken(SqlXmlParser::CREATE, 0);
}

SqlXmlParser::Func_nameContext* SqlXmlParser::StmtContext::func_name() {
  return getRuleContext<SqlXmlParser::Func_nameContext>(0);
}

SqlXmlParser::Something_elseContext* SqlXmlParser::StmtContext::something_else() {
  return getRuleContext<SqlXmlParser::Something_elseContext>(0);
}

tree::TerminalNode* SqlXmlParser::StmtContext::FUNCTION() {
  return getToken(SqlXmlParser::FUNCTION, 0);
}

tree::TerminalNode* SqlXmlParser::StmtContext::PROCEDURE_() {
  return getToken(SqlXmlParser::PROCEDURE_, 0);
}

tree::TerminalNode* SqlXmlParser::StmtContext::OR_() {
  return getToken(SqlXmlParser::OR_, 0);
}

tree::TerminalNode* SqlXmlParser::StmtContext::REPLACE() {
  return getToken(SqlXmlParser::REPLACE, 0);
}


size_t SqlXmlParser::StmtContext::getRuleIndex() const {
  return SqlXmlParser::RuleStmt;
}

void SqlXmlParser::StmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SqlXmlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStmt(this);
}

void SqlXmlParser::StmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SqlXmlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStmt(this);
}


antlrcpp::Any SqlXmlParser::StmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SqlXmlParserVisitor*>(visitor))
    return parserVisitor->visitStmt(this);
  else
    return visitor->visitChildren(this);
}

SqlXmlParser::StmtContext* SqlXmlParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 2, SqlXmlParser::RuleStmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(23);
    match(SqlXmlParser::CREATE);
    setState(26);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SqlXmlParser::OR_) {
      setState(24);
      match(SqlXmlParser::OR_);
      setState(25);
      match(SqlXmlParser::REPLACE);
    }
    setState(28);
    _la = _input->LA(1);
    if (!(_la == SqlXmlParser::FUNCTION

    || _la == SqlXmlParser::PROCEDURE_)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(29);
    func_name();
    setState(30);
    something_else();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_nameContext ------------------------------------------------------------------

SqlXmlParser::Func_nameContext::Func_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SqlXmlParser::IdentifierContext* SqlXmlParser::Func_nameContext::identifier() {
  return getRuleContext<SqlXmlParser::IdentifierContext>(0);
}


size_t SqlXmlParser::Func_nameContext::getRuleIndex() const {
  return SqlXmlParser::RuleFunc_name;
}

void SqlXmlParser::Func_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SqlXmlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunc_name(this);
}

void SqlXmlParser::Func_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SqlXmlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunc_name(this);
}


antlrcpp::Any SqlXmlParser::Func_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SqlXmlParserVisitor*>(visitor))
    return parserVisitor->visitFunc_name(this);
  else
    return visitor->visitChildren(this);
}

SqlXmlParser::Func_nameContext* SqlXmlParser::func_name() {
  Func_nameContext *_localctx = _tracker.createInstance<Func_nameContext>(_ctx, getState());
  enterRule(_localctx, 4, SqlXmlParser::RuleFunc_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(32);
    identifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Something_elseContext ------------------------------------------------------------------

SqlXmlParser::Something_elseContext::Something_elseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SqlXmlParser::IdentifierContext *> SqlXmlParser::Something_elseContext::identifier() {
  return getRuleContexts<SqlXmlParser::IdentifierContext>();
}

SqlXmlParser::IdentifierContext* SqlXmlParser::Something_elseContext::identifier(size_t i) {
  return getRuleContext<SqlXmlParser::IdentifierContext>(i);
}

std::vector<tree::TerminalNode *> SqlXmlParser::Something_elseContext::UNDERLINE() {
  return getTokens(SqlXmlParser::UNDERLINE);
}

tree::TerminalNode* SqlXmlParser::Something_elseContext::UNDERLINE(size_t i) {
  return getToken(SqlXmlParser::UNDERLINE, i);
}

std::vector<tree::TerminalNode *> SqlXmlParser::Something_elseContext::INTEGERS() {
  return getTokens(SqlXmlParser::INTEGERS);
}

tree::TerminalNode* SqlXmlParser::Something_elseContext::INTEGERS(size_t i) {
  return getToken(SqlXmlParser::INTEGERS, i);
}

std::vector<tree::TerminalNode *> SqlXmlParser::Something_elseContext::COLON() {
  return getTokens(SqlXmlParser::COLON);
}

tree::TerminalNode* SqlXmlParser::Something_elseContext::COLON(size_t i) {
  return getToken(SqlXmlParser::COLON, i);
}

std::vector<tree::TerminalNode *> SqlXmlParser::Something_elseContext::SEMICOLON() {
  return getTokens(SqlXmlParser::SEMICOLON);
}

tree::TerminalNode* SqlXmlParser::Something_elseContext::SEMICOLON(size_t i) {
  return getToken(SqlXmlParser::SEMICOLON, i);
}

std::vector<tree::TerminalNode *> SqlXmlParser::Something_elseContext::COMMA() {
  return getTokens(SqlXmlParser::COMMA);
}

tree::TerminalNode* SqlXmlParser::Something_elseContext::COMMA(size_t i) {
  return getToken(SqlXmlParser::COMMA, i);
}

std::vector<tree::TerminalNode *> SqlXmlParser::Something_elseContext::PERIOD() {
  return getTokens(SqlXmlParser::PERIOD);
}

tree::TerminalNode* SqlXmlParser::Something_elseContext::PERIOD(size_t i) {
  return getToken(SqlXmlParser::PERIOD, i);
}

std::vector<tree::TerminalNode *> SqlXmlParser::Something_elseContext::LEFT_PAREN() {
  return getTokens(SqlXmlParser::LEFT_PAREN);
}

tree::TerminalNode* SqlXmlParser::Something_elseContext::LEFT_PAREN(size_t i) {
  return getToken(SqlXmlParser::LEFT_PAREN, i);
}

std::vector<tree::TerminalNode *> SqlXmlParser::Something_elseContext::RIGHT_PAREN() {
  return getTokens(SqlXmlParser::RIGHT_PAREN);
}

tree::TerminalNode* SqlXmlParser::Something_elseContext::RIGHT_PAREN(size_t i) {
  return getToken(SqlXmlParser::RIGHT_PAREN, i);
}

std::vector<tree::TerminalNode *> SqlXmlParser::Something_elseContext::LEFT_BRACKET() {
  return getTokens(SqlXmlParser::LEFT_BRACKET);
}

tree::TerminalNode* SqlXmlParser::Something_elseContext::LEFT_BRACKET(size_t i) {
  return getToken(SqlXmlParser::LEFT_BRACKET, i);
}

std::vector<tree::TerminalNode *> SqlXmlParser::Something_elseContext::RIGHT_BRACKET() {
  return getTokens(SqlXmlParser::RIGHT_BRACKET);
}

tree::TerminalNode* SqlXmlParser::Something_elseContext::RIGHT_BRACKET(size_t i) {
  return getToken(SqlXmlParser::RIGHT_BRACKET, i);
}

std::vector<tree::TerminalNode *> SqlXmlParser::Something_elseContext::FACTORIAL_SIGN() {
  return getTokens(SqlXmlParser::FACTORIAL_SIGN);
}

tree::TerminalNode* SqlXmlParser::Something_elseContext::FACTORIAL_SIGN(size_t i) {
  return getToken(SqlXmlParser::FACTORIAL_SIGN, i);
}

std::vector<tree::TerminalNode *> SqlXmlParser::Something_elseContext::ADD_SIGN() {
  return getTokens(SqlXmlParser::ADD_SIGN);
}

tree::TerminalNode* SqlXmlParser::Something_elseContext::ADD_SIGN(size_t i) {
  return getToken(SqlXmlParser::ADD_SIGN, i);
}

std::vector<tree::TerminalNode *> SqlXmlParser::Something_elseContext::BAR() {
  return getTokens(SqlXmlParser::BAR);
}

tree::TerminalNode* SqlXmlParser::Something_elseContext::BAR(size_t i) {
  return getToken(SqlXmlParser::BAR, i);
}

std::vector<tree::TerminalNode *> SqlXmlParser::Something_elseContext::SUB_SIGN() {
  return getTokens(SqlXmlParser::SUB_SIGN);
}

tree::TerminalNode* SqlXmlParser::Something_elseContext::SUB_SIGN(size_t i) {
  return getToken(SqlXmlParser::SUB_SIGN, i);
}

std::vector<tree::TerminalNode *> SqlXmlParser::Something_elseContext::STAR_SIGN() {
  return getTokens(SqlXmlParser::STAR_SIGN);
}

tree::TerminalNode* SqlXmlParser::Something_elseContext::STAR_SIGN(size_t i) {
  return getToken(SqlXmlParser::STAR_SIGN, i);
}

std::vector<tree::TerminalNode *> SqlXmlParser::Something_elseContext::DIV_SIGN() {
  return getTokens(SqlXmlParser::DIV_SIGN);
}

tree::TerminalNode* SqlXmlParser::Something_elseContext::DIV_SIGN(size_t i) {
  return getToken(SqlXmlParser::DIV_SIGN, i);
}

std::vector<tree::TerminalNode *> SqlXmlParser::Something_elseContext::DOLLAR_SIGN() {
  return getTokens(SqlXmlParser::DOLLAR_SIGN);
}

tree::TerminalNode* SqlXmlParser::Something_elseContext::DOLLAR_SIGN(size_t i) {
  return getToken(SqlXmlParser::DOLLAR_SIGN, i);
}

std::vector<tree::TerminalNode *> SqlXmlParser::Something_elseContext::LESS_THAN() {
  return getTokens(SqlXmlParser::LESS_THAN);
}

tree::TerminalNode* SqlXmlParser::Something_elseContext::LESS_THAN(size_t i) {
  return getToken(SqlXmlParser::LESS_THAN, i);
}

std::vector<tree::TerminalNode *> SqlXmlParser::Something_elseContext::GREATER_THAN() {
  return getTokens(SqlXmlParser::GREATER_THAN);
}

tree::TerminalNode* SqlXmlParser::Something_elseContext::GREATER_THAN(size_t i) {
  return getToken(SqlXmlParser::GREATER_THAN, i);
}

std::vector<tree::TerminalNode *> SqlXmlParser::Something_elseContext::EUQAL() {
  return getTokens(SqlXmlParser::EUQAL);
}

tree::TerminalNode* SqlXmlParser::Something_elseContext::EUQAL(size_t i) {
  return getToken(SqlXmlParser::EUQAL, i);
}

std::vector<tree::TerminalNode *> SqlXmlParser::Something_elseContext::REPLACE() {
  return getTokens(SqlXmlParser::REPLACE);
}

tree::TerminalNode* SqlXmlParser::Something_elseContext::REPLACE(size_t i) {
  return getToken(SqlXmlParser::REPLACE, i);
}

std::vector<tree::TerminalNode *> SqlXmlParser::Something_elseContext::OR_() {
  return getTokens(SqlXmlParser::OR_);
}

tree::TerminalNode* SqlXmlParser::Something_elseContext::OR_(size_t i) {
  return getToken(SqlXmlParser::OR_, i);
}


size_t SqlXmlParser::Something_elseContext::getRuleIndex() const {
  return SqlXmlParser::RuleSomething_else;
}

void SqlXmlParser::Something_elseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SqlXmlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSomething_else(this);
}

void SqlXmlParser::Something_elseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SqlXmlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSomething_else(this);
}


antlrcpp::Any SqlXmlParser::Something_elseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SqlXmlParserVisitor*>(visitor))
    return parserVisitor->visitSomething_else(this);
  else
    return visitor->visitChildren(this);
}

SqlXmlParser::Something_elseContext* SqlXmlParser::something_else() {
  Something_elseContext *_localctx = _tracker.createInstance<Something_elseContext>(_ctx, getState());
  enterRule(_localctx, 6, SqlXmlParser::RuleSomething_else);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(57); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(57);
              _errHandler->sync(this);
              switch (_input->LA(1)) {
                case SqlXmlParser::DOUBLE_STRING:
                case SqlXmlParser::CHAR_STRINGS:
                case SqlXmlParser::REGULAR_ID: {
                  setState(34);
                  identifier();
                  break;
                }

                case SqlXmlParser::UNDERLINE: {
                  setState(35);
                  match(SqlXmlParser::UNDERLINE);
                  break;
                }

                case SqlXmlParser::INTEGERS: {
                  setState(36);
                  match(SqlXmlParser::INTEGERS);
                  break;
                }

                case SqlXmlParser::COLON: {
                  setState(37);
                  match(SqlXmlParser::COLON);
                  break;
                }

                case SqlXmlParser::SEMICOLON: {
                  setState(38);
                  match(SqlXmlParser::SEMICOLON);
                  break;
                }

                case SqlXmlParser::COMMA: {
                  setState(39);
                  match(SqlXmlParser::COMMA);
                  break;
                }

                case SqlXmlParser::PERIOD: {
                  setState(40);
                  match(SqlXmlParser::PERIOD);
                  break;
                }

                case SqlXmlParser::LEFT_PAREN: {
                  setState(41);
                  match(SqlXmlParser::LEFT_PAREN);
                  break;
                }

                case SqlXmlParser::RIGHT_PAREN: {
                  setState(42);
                  match(SqlXmlParser::RIGHT_PAREN);
                  break;
                }

                case SqlXmlParser::LEFT_BRACKET: {
                  setState(43);
                  match(SqlXmlParser::LEFT_BRACKET);
                  break;
                }

                case SqlXmlParser::RIGHT_BRACKET: {
                  setState(44);
                  match(SqlXmlParser::RIGHT_BRACKET);
                  break;
                }

                case SqlXmlParser::FACTORIAL_SIGN: {
                  setState(45);
                  match(SqlXmlParser::FACTORIAL_SIGN);
                  break;
                }

                case SqlXmlParser::ADD_SIGN: {
                  setState(46);
                  match(SqlXmlParser::ADD_SIGN);
                  break;
                }

                case SqlXmlParser::BAR: {
                  setState(47);
                  match(SqlXmlParser::BAR);
                  break;
                }

                case SqlXmlParser::SUB_SIGN: {
                  setState(48);
                  match(SqlXmlParser::SUB_SIGN);
                  break;
                }

                case SqlXmlParser::STAR_SIGN: {
                  setState(49);
                  match(SqlXmlParser::STAR_SIGN);
                  break;
                }

                case SqlXmlParser::DIV_SIGN: {
                  setState(50);
                  match(SqlXmlParser::DIV_SIGN);
                  break;
                }

                case SqlXmlParser::DOLLAR_SIGN: {
                  setState(51);
                  match(SqlXmlParser::DOLLAR_SIGN);
                  break;
                }

                case SqlXmlParser::LESS_THAN: {
                  setState(52);
                  match(SqlXmlParser::LESS_THAN);
                  break;
                }

                case SqlXmlParser::GREATER_THAN: {
                  setState(53);
                  match(SqlXmlParser::GREATER_THAN);
                  break;
                }

                case SqlXmlParser::EUQAL: {
                  setState(54);
                  match(SqlXmlParser::EUQAL);
                  break;
                }

                case SqlXmlParser::REPLACE: {
                  setState(55);
                  match(SqlXmlParser::REPLACE);
                  break;
                }

                case SqlXmlParser::OR_: {
                  setState(56);
                  match(SqlXmlParser::OR_);
                  break;
                }

              default:
                throw NoViableAltException(this);
              }
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(59); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierContext ------------------------------------------------------------------

SqlXmlParser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SqlXmlParser::IdentifierContext::REGULAR_ID() {
  return getToken(SqlXmlParser::REGULAR_ID, 0);
}

tree::TerminalNode* SqlXmlParser::IdentifierContext::CHAR_STRINGS() {
  return getToken(SqlXmlParser::CHAR_STRINGS, 0);
}

tree::TerminalNode* SqlXmlParser::IdentifierContext::DOUBLE_STRING() {
  return getToken(SqlXmlParser::DOUBLE_STRING, 0);
}


size_t SqlXmlParser::IdentifierContext::getRuleIndex() const {
  return SqlXmlParser::RuleIdentifier;
}

void SqlXmlParser::IdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SqlXmlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifier(this);
}

void SqlXmlParser::IdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SqlXmlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifier(this);
}


antlrcpp::Any SqlXmlParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SqlXmlParserVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}

SqlXmlParser::IdentifierContext* SqlXmlParser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 8, SqlXmlParser::RuleIdentifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(61);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SqlXmlParser::DOUBLE_STRING)
      | (1ULL << SqlXmlParser::CHAR_STRINGS)
      | (1ULL << SqlXmlParser::REGULAR_ID))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
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
std::vector<dfa::DFA> SqlXmlParser::_decisionToDFA;
atn::PredictionContextCache SqlXmlParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN SqlXmlParser::_atn;
std::vector<uint16_t> SqlXmlParser::_serializedATN;

std::vector<std::string> SqlXmlParser::_ruleNames = {
  "stmts", "stmt", "func_name", "something_else", "identifier"
};

std::vector<std::string> SqlXmlParser::_literalNames = {
  "", "", "", "", "", "", "", "", "", "':'", "';'", "','", "'.'", "'('", 
  "')'", "'['", "']'", "'!'", "'+'", "'-'", "'*'", "'/'", "'_'", "'$'", 
  "'|'", "'<'", "'>'", "'='"
};

std::vector<std::string> SqlXmlParser::_symbolicNames = {
  "", "CREATE", "OR_", "REPLACE", "FUNCTION", "PROCEDURE_", "DOUBLE_STRING", 
  "CHAR_STRINGS", "REGULAR_ID", "COLON", "SEMICOLON", "COMMA", "PERIOD", 
  "LEFT_PAREN", "RIGHT_PAREN", "LEFT_BRACKET", "RIGHT_BRACKET", "FACTORIAL_SIGN", 
  "ADD_SIGN", "SUB_SIGN", "STAR_SIGN", "DIV_SIGN", "UNDERLINE", "DOLLAR_SIGN", 
  "BAR", "LESS_THAN", "GREATER_THAN", "EUQAL", "INTEGERS", "SINGLE_LINE_COMMENT", 
  "MULTI_LINE_COMMENT", "SPACES"
};

dfa::Vocabulary SqlXmlParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> SqlXmlParser::_tokenNames;

SqlXmlParser::Initializer::Initializer() {
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
    0x3, 0x21, 0x42, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x7, 0x2, 0x10, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x13, 0xb, 0x2, 0x3, 
    0x2, 0x5, 0x2, 0x16, 0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x5, 0x3, 0x1d, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x6, 0x5, 0x3c, 0xa, 0x5, 
    0xd, 0x5, 0xe, 0x5, 0x3d, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x2, 0x2, 0x7, 
    0x2, 0x4, 0x6, 0x8, 0xa, 0x2, 0x4, 0x3, 0x2, 0x6, 0x7, 0x3, 0x2, 0x8, 
    0xa, 0x2, 0x56, 0x2, 0xc, 0x3, 0x2, 0x2, 0x2, 0x4, 0x19, 0x3, 0x2, 0x2, 
    0x2, 0x6, 0x22, 0x3, 0x2, 0x2, 0x2, 0x8, 0x3b, 0x3, 0x2, 0x2, 0x2, 0xa, 
    0x3f, 0x3, 0x2, 0x2, 0x2, 0xc, 0x11, 0x5, 0x4, 0x3, 0x2, 0xd, 0xe, 0x7, 
    0xc, 0x2, 0x2, 0xe, 0x10, 0x5, 0x4, 0x3, 0x2, 0xf, 0xd, 0x3, 0x2, 0x2, 
    0x2, 0x10, 0x13, 0x3, 0x2, 0x2, 0x2, 0x11, 0xf, 0x3, 0x2, 0x2, 0x2, 
    0x11, 0x12, 0x3, 0x2, 0x2, 0x2, 0x12, 0x15, 0x3, 0x2, 0x2, 0x2, 0x13, 
    0x11, 0x3, 0x2, 0x2, 0x2, 0x14, 0x16, 0x7, 0xc, 0x2, 0x2, 0x15, 0x14, 
    0x3, 0x2, 0x2, 0x2, 0x15, 0x16, 0x3, 0x2, 0x2, 0x2, 0x16, 0x17, 0x3, 
    0x2, 0x2, 0x2, 0x17, 0x18, 0x7, 0x2, 0x2, 0x3, 0x18, 0x3, 0x3, 0x2, 
    0x2, 0x2, 0x19, 0x1c, 0x7, 0x3, 0x2, 0x2, 0x1a, 0x1b, 0x7, 0x4, 0x2, 
    0x2, 0x1b, 0x1d, 0x7, 0x5, 0x2, 0x2, 0x1c, 0x1a, 0x3, 0x2, 0x2, 0x2, 
    0x1c, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x1e, 
    0x1f, 0x9, 0x2, 0x2, 0x2, 0x1f, 0x20, 0x5, 0x6, 0x4, 0x2, 0x20, 0x21, 
    0x5, 0x8, 0x5, 0x2, 0x21, 0x5, 0x3, 0x2, 0x2, 0x2, 0x22, 0x23, 0x5, 
    0xa, 0x6, 0x2, 0x23, 0x7, 0x3, 0x2, 0x2, 0x2, 0x24, 0x3c, 0x5, 0xa, 
    0x6, 0x2, 0x25, 0x3c, 0x7, 0x18, 0x2, 0x2, 0x26, 0x3c, 0x7, 0x1e, 0x2, 
    0x2, 0x27, 0x3c, 0x7, 0xb, 0x2, 0x2, 0x28, 0x3c, 0x7, 0xc, 0x2, 0x2, 
    0x29, 0x3c, 0x7, 0xd, 0x2, 0x2, 0x2a, 0x3c, 0x7, 0xe, 0x2, 0x2, 0x2b, 
    0x3c, 0x7, 0xf, 0x2, 0x2, 0x2c, 0x3c, 0x7, 0x10, 0x2, 0x2, 0x2d, 0x3c, 
    0x7, 0x11, 0x2, 0x2, 0x2e, 0x3c, 0x7, 0x12, 0x2, 0x2, 0x2f, 0x3c, 0x7, 
    0x13, 0x2, 0x2, 0x30, 0x3c, 0x7, 0x14, 0x2, 0x2, 0x31, 0x3c, 0x7, 0x1a, 
    0x2, 0x2, 0x32, 0x3c, 0x7, 0x15, 0x2, 0x2, 0x33, 0x3c, 0x7, 0x16, 0x2, 
    0x2, 0x34, 0x3c, 0x7, 0x17, 0x2, 0x2, 0x35, 0x3c, 0x7, 0x19, 0x2, 0x2, 
    0x36, 0x3c, 0x7, 0x1b, 0x2, 0x2, 0x37, 0x3c, 0x7, 0x1c, 0x2, 0x2, 0x38, 
    0x3c, 0x7, 0x1d, 0x2, 0x2, 0x39, 0x3c, 0x7, 0x5, 0x2, 0x2, 0x3a, 0x3c, 
    0x7, 0x4, 0x2, 0x2, 0x3b, 0x24, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x25, 0x3, 
    0x2, 0x2, 0x2, 0x3b, 0x26, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x27, 0x3, 0x2, 
    0x2, 0x2, 0x3b, 0x28, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x29, 0x3, 0x2, 0x2, 
    0x2, 0x3b, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x2b, 0x3, 0x2, 0x2, 0x2, 
    0x3b, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x3b, 
    0x2e, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x30, 
    0x3, 0x2, 0x2, 0x2, 0x3b, 0x31, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x32, 0x3, 
    0x2, 0x2, 0x2, 0x3b, 0x33, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x34, 0x3, 0x2, 
    0x2, 0x2, 0x3b, 0x35, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x36, 0x3, 0x2, 0x2, 
    0x2, 0x3b, 0x37, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x38, 0x3, 0x2, 0x2, 0x2, 
    0x3b, 0x39, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3c, 
    0x3d, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3e, 
    0x3, 0x2, 0x2, 0x2, 0x3e, 0x9, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x40, 0x9, 
    0x3, 0x2, 0x2, 0x40, 0xb, 0x3, 0x2, 0x2, 0x2, 0x7, 0x11, 0x15, 0x1c, 
    0x3b, 0x3d, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

SqlXmlParser::Initializer SqlXmlParser::_init;

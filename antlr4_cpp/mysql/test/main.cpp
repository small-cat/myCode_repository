// Copyright (C) 2019 secsmart
// author: owen lee

#include <unistd.h>
#include <iostream>
#include "../generated/MySQLLexer.h"
#include "../generated/MySQLParser.h"
#include "../generated/MySQLParserBaseVisitor.h"
#include <fstream>
#include "mysql_parser/error_verbose_listener.h"
#include <vector>
#include <thread>

#define ENCRYPTED_STRING(val) ("ENCRYPTED_STRING(" + val + ")")
#define DECRYPTED_STRING(val) ("DECRYPTED_STRING(" + val + ")")
using namespace antlr4;

void PrintUsage(const char* str);
void ParseString(std::string sql);
void ParseFile(const std::string& file_name);
void _ParseSQL(ANTLRInputStream* input);

int main(int argc, char *argv[]) {
  if (1 == argc) {
    PrintUsage(argv[0]);
  }
  int opt = 0;
  while ((opt = getopt(argc, argv, "f:e:")) != -1) {
    if (opt == 'f') {
      ParseFile(optarg);
    } else if (opt == 'e') {
      ParseString(optarg);
      // std::thread t1(ParseString, optarg);
      // std::thread t2(ParseString, optarg);
      // std::thread t3(ParseString, optarg);
      // std::thread t4(ParseString, optarg);
      // std::thread t5(ParseString, optarg);
      // std::thread t6(ParseString, optarg);
      // std::thread t7(ParseString, optarg);
      // std::thread t8(ParseString, optarg);

      // t1.join();
      // t2.join();
      // t3.join();
      // t4.join();
      // t5.join();
      // t6.join();
      // t7.join();
      // t8.join();
    } else {
      PrintUsage(argv[0]);
    }
  }
  
  return 0;
}

void PrintUsage(const char* str) {
  std::cout << "Usage: " << str
            << " [-f filename] [-e sqlstatment]" << "\n";
}

void _ParseSQL(ANTLRInputStream* input) {
  std::cout << std::endl;
  std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
  std::cout << "++++++++++++++++++++++++ start parsing ++++++++++++++++++++++++++++++++++++" << std::endl;
  MySQLLexer lexer(input);
  CommonTokenStream tokens(&lexer);
  antlr4::TokenStreamRewriter rewriter(&tokens);

  tokens.fill();
  for (auto token : tokens.getTokens()) {
    std::cout << token->toString() << "\n";
  }

  MySQLParser parser(&tokens);
  parser.getInterpreter<atn::ParserATNSimulator>()->setPredictionMode(atn::PredictionMode::SLL);
    // add a new error listener
  ErrorVerboseListener err_listener;
  parser.removeErrorListeners();
  parser.setErrorHandler(std::make_shared<BailErrorStrategy>());

  tree::ParseTree* root_ctx = nullptr;
  try {
    root_ctx = parser.root();
  } catch (ParseCancellationException& ex) {
    tokens.reset();
    parser.reset();

    parser.addErrorListener(&err_listener);
    parser.setErrorHandler(std::make_shared<DefaultErrorStrategy>());
    parser.getInterpreter<atn::ParserATNSimulator>()->setPredictionMode(atn::PredictionMode::LL);
    root_ctx = parser.root();
  }

  std::cout << ((tree::ParseTree*)(root_ctx))->toStringTree(&parser) << "\n";
  if (err_listener.has_error()) {
    std::cout << err_listener.get_err_message() << "\n";
    return;
  }

  // auto sql_stmts_ctx = root_ctx->sqlStatements();
  // if (sql_stmts_ctx == nullptr) {
  //   return;
  // }

  // std::cout << std::endl;
  // std::cout << "sql: " << sql << std::endl;

  // auto sql_stmt_ctx = sql_stmts_ctx->sqlStatement();
  // tree::ParseTreeWalker walker;
  // for (auto& sql_ctx : sql_stmt_ctx) {
  //   auto dml_ctx = sql_ctx->dmlStatement();
  //   if (dml_ctx == nullptr) {
  //     continue;
  //   }
  // }
}

void ParseString(std::string sql) {
  ANTLRInputStream input(sql);
  _ParseSQL(&input);
}

void ParseFile(const std::string& file_name) {
  ANTLRFileStream input(file_name);
  _ParseSQL(&input);
}



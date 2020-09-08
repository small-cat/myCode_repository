/*************************************************************************
 *  * Copyright (c) 2019 Secsmart All Reserved 
 *   * Created by Jona 2019-08-19 11:02:06
 *    * listener for error informations
 *    *************************************************************************/

#ifndef __ERROR_VERBOSE_LISTENER_H__
#define __ERROR_VERBOSE_LISTENER_H__

#include <string>
#include "BaseErrorListener.h"

class ErrorVerboseListener : public antlr4::BaseErrorListener {
 public:
  ErrorVerboseListener() {
    err_message_.clear();
    has_error_ = false;
  }
  ~ErrorVerboseListener() {}

  void syntaxError(antlr4::Recognizer *recognizer, antlr4::Token * offendingSymbol, size_t line, 
                   size_t charPositionInLine, const std::string &msg, std::exception_ptr e) {
    has_error_ = true;
    err_message_ += "line " + std::to_string(line) + ":" + std::to_string(charPositionInLine) +
        " at token[" + offendingSymbol->getText() + "]: " + msg;
  }

  bool has_error() {
    return has_error_;
  }

  std::string get_err_message() {
    return err_message_;
  }

 private:
  std::string err_message_;
  bool has_error_;
};

#endif

#ifndef KINGBASESQLBASELEXER_H
#define KINGBASESQLBASELEXER_H

#include "antlr4-runtime.h"

class KingbaseSqlBaseLexer : public antlr4::Lexer
{
public:
  KingbaseSqlBaseLexer(antlr4::CharStream *input) : Lexer(input) {}

protected:
  bool IsNewlineAtPos(int pos)
  {
    int la = _input->LA(pos);
    return la == -1 || la == '\n';
  }
};

#endif

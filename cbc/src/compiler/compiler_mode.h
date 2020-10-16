#ifndef __COMPILER_MODE_H__
#define __COMPILER_MODE_H__

#include <string>
#include <map>

namespace compiler {
class CompilerMode  {
public:
  enum Mode {
    UNKNOWN = 0,
    CheckSyntax = 1,
    DumpTokens,
    DumpAST,
    DumpStmt,
    DumpExpr,
    DumpSemantic,
    DumpReference,
    DumpIR,
    DumpAsm,
    PrintAsm,
    Compile,
    Assemble,
    Link
  };

  CompilerMode(Mode m);
  virtual ~CompilerMode();

  void Init();
  bool IsModeOption(const std::string& opt);
  Mode FromOption(const std::string& opt);
  Mode mode();
  bool Requires(Mode m);
private:
  Mode mode_;
  std::map<std::string, Mode> modes_map_;
};
}

#endif /* __COMPILER_MODE_H__ */

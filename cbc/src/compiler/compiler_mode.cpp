#include "compiler_mode.h"

#include <string.h>

namespace compiler {

CompilerMode::CompilerMode(Mode m) : mode_(m){
  Init();
}

CompilerMode::~CompilerMode() {}

void CompilerMode::Init() {
  modes_map_.emplace(std::make_pair("--check-syntax", CheckSyntax));
  modes_map_.emplace(std::make_pair("--dump-tokens", DumpTokens));
  modes_map_.emplace(std::make_pair("--dump-ast", DumpAST));
  modes_map_.emplace(std::make_pair("--dump-stmt", DumpStmt));
  modes_map_.emplace(std::make_pair("--dump-expr", DumpExpr));
  modes_map_.emplace(std::make_pair("--dump-semantic", DumpSemantic));
  modes_map_.emplace(std::make_pair("--dump-reference", DumpReference));
  modes_map_.emplace(std::make_pair("--dump-ir", DumpIR));
  modes_map_.emplace(std::make_pair("--dump-asm", DumpAsm));
  modes_map_.emplace(std::make_pair("--print-asm", PrintAsm));
  modes_map_.emplace(std::make_pair("-S", Compile));
  modes_map_.emplace(std::make_pair("-c", Assemble));
}

bool CompilerMode::IsModeOption(const std::string& opt) {
  for (auto iter = modes_map_.begin(); iter != modes_map_.end(); iter++) {
    if (strcmp(iter->first.c_str(), opt.c_str())) {
      return true;
    }
  }

  return false;
}

CompilerMode::Mode CompilerMode::FromOption(const std::string& opt) {
  auto search = modes_map_.find(opt);
  if (search != modes_map_.end()) {
    return search->second;
  } else {
    return CompilerMode::Mode::UNKNOWN;
  }
}

CompilerMode::Mode CompilerMode::mode() {
  return mode_;
}

bool CompilerMode::Requires(CompilerMode::Mode m) {
  return mode_ > m;
}

} /* end compiler */

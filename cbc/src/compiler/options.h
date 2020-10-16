/**
 * @copyright (c) Copyright 2020 . All Rights Reserved.
 * @license
 * @file  : options.h
 * @author: Jona 
 * @email : wuzhenyu@secsmart.net
 * @date  : 2020-10-16
 * @brief : parse options commands
*/
#ifndef __OPTIONS_H__
#define __OPTIONS_H__

#include <iostream>
#include <vector>

#include "compiler_mode.h"
#include "source_file.h"

namespace compiler {

class Options {
public:
  Options();
  virtual ~Options();

  CompilerMode mode();
  bool IsAssembleRequired();
  bool IsLinkRequired();
  std::vector<SourceFile> source_file();

  std::string AsmFileNameOf(SourceFile* src);
  std::string ObjFileNameOf(SourceFile* src);
  std::string ExeFileName();
  std::string SoFileName();

  const static std::string DEFAULT_LINKER_OUTPUT;

  std::string LinkedFileName(std::string new_ext);
  std::string output_filename();
  bool IsVerboseMode();
  bool DoesDebugParser();

  // @todo { not implement }
  // LibraryLoader* loader();
  // TypeTable GetTypeTable();
  // CodeGenerator* GetCodeGenerator();
  // Assembler* GetAssembler();
  // AssemblerOptions asm_options();
  // Linker* GetLinker();
  // LinkerOptions ld_options();
  // std::list<LdArg> ld_args();
  // void AddLdArg(std::string arg);
  void ParseArgs(const std::string& args);
  void PrintUsage();
private:
  CompilerMode mode_;
  //Platform platform_;
  std::string output_filename_;
  bool verbose_;
  bool debug_parser_;
  //LibraryLoader* loader_;
  //CodeGeneratorOptions gen_options_;
  //AssemblerOptions asm_options_;
  //LinkerOptions ld_options_;
  //std::list<LdArg> ld_args_;
  std::vector<SourceFile> src_files_;
};
}

#endif /* __OPTIONS_H__ */

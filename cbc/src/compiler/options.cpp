#include "options.h"

namespace compiler {

const std::string Options::DEFAULT_LINKER_OUTPUT = "a.out";

Options::Options() : mode_(CompilerMode::Mode::UNKNOWN),
                     output_filename_(""),
                     verbose_(false),
                     debug_parser_(false) {}

Options::~Options() {}

CompilerMode Options::mode() {
  return mode_;
}

bool Options::IsAssembleRequired() {
  return mode_.Requires(CompilerMode::Mode::Assemble);
}

bool Options::IsLinkRequired() {
  return mode_.Requires(CompilerMode::Mode::Link);
}

std::vector<SourceFile> Options::source_file() {
  return src_files_;
}

/**
 * @fn AsmFileNameOf
 * @brief return file name with assembly extensions
 *  test.cbc -> test.s
 * @param 
 * @author Jona
 * @date 16/10/2020 17:17:35 
*/ 
std::string Options::AsmFileNameOf(SourceFile* src) {
  if (!output_filename_.empty() && mode_.mode() == CompilerMode::Mode::Compile) {
    return output_filename_;
  }

  return src->AsmFileName();
}

std::string Options::ObjFileNameOf(SourceFile* src) {
  if (!output_filename_.empty() && mode_.mode() == CompilerMode::Mode::Assemble) {
    return output_filename_;
  }

  return src->ObjFileName();
}

std::string Options::ExeFileName() {
  return LinkedFileName("");
}

std::string Options::SoFileName() {
  return LinkedFileName(".so");
}

/**
 * @fn LinkedFileName
 * @brief file name with new extension named new_ext 
 * @param 
 * @author Jona
 * @date 16/10/2020 17:25:47 
*/ 
std::string Options::LinkedFileName(std::string new_ext) {
  if (!output_filename_.empty()) {
    return output_filename_;
  }

  if (src_files_.size() == 1) {
    return src_files_.at(0).LinkedFileName(new_ext);
  } else {
    return DEFAULT_LINKER_OUTPUT;
  }
}

std::string Options::output_filename() {
  return output_filename_;
}

bool Options::IsVerboseMode() {
  return verbose_;
}

bool Options::DoesDebugParser() {
  return debug_parser_;
}

void Options::ParseArgs(const std::string& args) {
  // @todo {  things to be done }
}

void PrintUsage() {
  // @todo {  things to be done }
}

} /* end compiler */

/* Copyright (c) 2012-2017 The ANTLR Project. All rights reserved.
 * Use of this file is governed by the BSD 3-clause license that
 * can be found in the LICENSE.txt file in the project root.
 */

//
//  main.cpp
//  antlr4-cpp-demo
//
//  Created by Mike Lischke on 13.03.16.
//

#include <stdlib.h>
#include <unistd.h>

#include <iostream>
#include <fstream>

#include <HplsqlParser.h>
#include <HplsqlLexer.h>

#include "antlr4-runtime.h"
#include "error_verbose_listener.hpp"
#include "IParser.h"

using namespace antlr4;

void ParseFile(const char* filename);
void ParseString(std::string &sql);
std::string& string_toupper(std::string &str);
void TravelOperateInfo(std::vector<parser::OperateInfo> operateinfo_list);

void ParseFile(const char* filename) {
  if (nullptr == filename) return; 
  std::string line;
  std::string sqlstmt;
  std::ifstream f(filename);
  if (!f)
    return;

  while (getline(f, line)) {
    if (line.rfind(";") == line.length()) {
      sqlstmt.append(line);
      ParseString(sqlstmt);
      sqlstmt.clear();
    } else {
      sqlstmt.append(line);
      sqlstmt.append("\n");
    }
  }

  if (!sqlstmt.empty()) {
    ParseString(sqlstmt);
  }
}

void ParseString(std::string &sql) {
  parser::IParser iparser;
  std::vector<parser::OperateInfo> opinfo_list = iparser.Parse(sql);
  TravelOperateInfo(opinfo_list);
}

void TravelOperateInfo(std::vector<parser::OperateInfo> operateinfo_list) {
  for (auto opinfo : operateinfo_list) {
    std::cout << "[" << std::endl;
    std::cout << "  operate: " << opinfo.operate << ", objectType: " << opinfo.objectType << std::endl;
    std::cout << "  objects: " << std::endl;
    for (auto obj : opinfo.objects) {
      std::cout << "    objectName: " << obj.objectName << std::endl;

      for (auto objname : obj.subObjectName) {
        std::cout << "    " << objname << ", ";
      }
      std::cout << std::endl;
    }
    std::cout << "]" << std::endl;
  }
}

int main(int argc, char *argv[]) {
  int ret;
  extern char *optarg;
  if (1 == argc) {
    std::cout << "Usage: " << argv[0] << " [-f filename] [-e sqlstatement]" << std::endl;
    return 0;
  }

  while ((ret = getopt(argc, argv, "f:e:")) != -1) {
    switch (ret) {
      case 'f':
        ParseFile(optarg);
        break;
      case 'e':
        {
          std::string sqlstmt(optarg);
          ParseString(sqlstmt);
        }
        break;
      case '?':
      default:
        std::cout << "Usage: " << argv[0] << " [-f filename] [-e sqlstatement]" << std::endl;
        break;
    }
  }

  return 0;
}

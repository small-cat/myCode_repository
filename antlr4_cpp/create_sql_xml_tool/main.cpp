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
#include <string.h>

#include <iostream>
#include <fstream>
#include <vector>

#include "antlr4-runtime.h"
#include "SqlXmlLexer.h"
#include "SqlXmlParser.h"

#include "error_verbose_listener.hpp"

using namespace antlr4;

static std::map<std::string, std::string> function_map = {
  {"instr", "内置算法, builtin, builtin, instr"},
  {"MASK_BANK_CARD_RANDOM", "内置算法, 银行卡号, 随机脱敏, 随机替换"},
  {"CHAR_TO_NUMBER", "内置算法, builtin, builtin, CHAR_TO_NUMBER"},
  {"MASK_SOCIAL_ID_SHADOW_RANDOM", "内置算法, 三证合一码, 随机脱敏, 随机替换"},
  {"MASK_SOCIAL_ID_SHADOW_ORG", "内置算法, 三证合一码, 遮蔽脱敏, 常量替换机构类别1-2位"},
  {"MASK_SOCIAL_ID_SHADOW_DISTRICT", "内置算法, 三证合一码, 遮蔽脱敏, 常量替换行政区3-8位"},
  {"MASK_SOCIAL_ID_SHADOW_MIDDLE", "内置算法, 三证合一码, 遮蔽脱敏, 常量替换中间（保留前后各4位）"},
  {"MASK_CALCULATE_CHECKSUM", "内置算法, builtin, builtin, checksum"},
  {"MASK_CAMPANY_NAME_RANDOM", "内置算法, 企业单位名称, 随机脱敏, 随机替换"},
  {"MASK_EMAIL_RANDOM_EMAIL", "内置算法, 电子邮箱, 随机脱敏, 随机替换"},
  {"MASK_CAMPANY_NAME_SHADOW_MID", "内置算法, 企业单位名称, 遮蔽脱敏, 常量替换中间（保留前后各2中文字符）"},
  {"MASK_EMAIL_SHADOW_USERNAME", "内置算法, 电子邮箱, 遮蔽脱敏, 常量替换用户名"},
  {"MASK_ADDRESS_SHADOW_NUMBER", "内置算法, 中文地址, 遮蔽脱敏, 常量替换数字"},
  {"MASK_BANK_CARD_SHADOW_BANK_NO", "内置算法, 银行卡号, 遮蔽脱敏, 常量替换发卡单位编号"},
  {"MASK_BANK_CARD_SHADOW_MIDDLE", "内置算法, 银行卡号, 遮蔽脱敏, 常量替换中6位"},
  {"MASK_ADDRESS_SHADOW_CITY_NAME", "内置算法, 中文地址, 遮蔽脱敏, 常量替换市名"},
  {"MASK_ADDRESS_SHADOW_MIDDLE", "内置算法, 中文地址, 遮蔽脱敏, 常量替换中间"},
  {"MASK_PLATE_SHADOW_PROVINCE", "内置算法, 车牌号, 遮蔽脱敏, 常量替换省名"},
  {"MASK_CELLPHONE_NUMBER_AREACODE", "内置算法, 手机号, 遮蔽脱敏, 常量替换手机号码1-3位"},
  {"MASK_CELLPHONE_NUMBER_OPERATOR", "内置算法, 手机号, 遮蔽脱敏, 常量替换手机号码前4-7位"},
  {"MASK_PHONE_NUMBER_MIDDLE", "内置算法, 固定电话, 遮蔽脱敏, 部分遮蔽"},
  {"MASK_ID_SHADOW_ZONE", "内置算法, 身份证号, 遮蔽脱敏, 常量替换地区码（前6位）"},
  {"MASK_ID_SHADOW_BIRTHDAY_YEAR", "内置算法, 身份证号, 遮蔽脱敏, 常量替换生日年"},
  {"MASK_ID_SHADOW_MIDDLE", "内置算法, 身份证号, 遮蔽脱敏, 部分遮蔽"},
  {"MASK_ID_SHADOW_SEX", "内置算法, 身份证号, 遮蔽脱敏, 常量替换性别"},
  {"MASK_ID_SHADOW_BIRTHDAY_MONTH", "内置算法, 身份证号, 遮蔽脱敏, 常量替换生日月"},
  {"MASK_PHONE_NUMBER_AREA_CODE", "内置算法, 固定电话, 遮蔽脱敏, 常量替换区号1-4位"},
  {"MASK_CHINESE_NAME_SHADOW_LAST", "内置算法, 中文姓名, 遮蔽脱敏, 常量替换名"},
  {"MASK_CHINESE_NAME_SHADOW_MID", "内置算法, 中文姓名, 遮蔽脱敏, 常量替换中文姓名中间"},
  {"MASK_CHINESE_NAME_SHADOW_FIRST", "内置算法, 中文姓名, 遮蔽脱敏, 常量替换姓"},
  {"MASK_STRING_RANDOM", "内置算法, 字符串, 随机脱敏, 随机替换"},
  {"MASK_STRING_SHADOW_ALL", "内置算法, 字符串, 遮蔽脱敏, 全常量替换"},
  {"MASK_STRING_SHADOW_MIDDLE", "内置算法, 字符串, 遮蔽脱敏, 常量替换中间第4到6位"},
  {"MASK_ZIP_CODE_SHADOW_ALL", "内置算法, 邮政编码, 遮蔽脱敏, 全常量替换"},
  {"MASK_ZIP_CODE_SHADOW_MIDDLE", "内置算法, 邮政编码, 遮蔽脱敏, 部分遮蔽"},
  {"MASK_ZIP_CODE_SHADOW_AREACODE", "内置算法, 邮政编码, 遮蔽脱敏, 常量替换地区1-2位"},
  {"MASK_TAIWAN_CODE_SHADOW_ALL", "内置算法, 台湾居民来往大陆通行证, 遮蔽脱敏, 全常量替换"},
  {"MASK_TAIWAN_CODE_SHADOW_MIDDLE", "内置算法, 台湾居民来往大陆通行证, 遮蔽脱敏, 部分遮蔽"},
  {"MASK_GANGAO_CODE_SHADOW_ALL", "内置算法, 港澳居民来往大陆通行证, 遮蔽脱敏, 全常量替换"},
  {"MASK_GANGAO_CODE_SHADOW_IDENT", "内置算法, 港澳居民来往大陆通行证, 遮蔽脱敏, 常量替换港澳标识1位"},
  {"MASK_GANGAO_CODE_SHADOW_MIDDLE", "内置算法, 港澳居民来往大陆通行证, 遮蔽脱敏, 部分遮蔽"},
  {"MASK_VIN_NO_SHADOW_ALL", "内置算法, 车架号, 遮蔽脱敏, 全常量替换"},
  {"MASK_VIN_NO_SHADOW_WMI", "内置算法, 车架号, 遮蔽脱敏, 常量替换wmi(1-3位)"},
  {"MASK_VIN_NO_SHADOW_VDS", "内置算法, 车架号, 遮蔽脱敏, 常量替换vds(4-8位)"},
  {"MASK_VIN_NO_SHADOW_MIDDLE", "内置算法, 车架号, 遮蔽脱敏, 部分遮蔽"},
  {"MASK_MILITARY_ID_SHADOW_ALL", "内置算法, 军队证件, 遮蔽脱敏, 全常量替换"},
  {"MASK_MILITARY_ID_SHADOW_MID", "内置算法, 军队证件, 遮蔽脱敏, 部分遮蔽"},
  {"MASK_PASSPORT_SHADOW_MIDDLE", "内置算法, 护照号, 遮蔽脱敏, 部分遮蔽"},
  {"MASK_PLATE_SHADOW_MIDDLE", "内置算法, 车牌号, 遮蔽脱敏, 部分遮蔽"},
  {"MASK_STRING_NULL", "内置算法, 字符串, 遮蔽脱敏, 设置为空"},
  {"MASK_STRING_NULL", "内置算法, 台湾居民来往大陆通行证, 遮蔽脱敏, 设置为空"},
  {"MASK_STRING_NULL", "内置算法, 港澳居民来往大陆通行证, 遮蔽脱敏, 设置为空"},
  {"MASK_STRING_NULL", "内置算法, 车架号, 遮蔽脱敏, 设置为空"},
  {"MASK_STRING_NULL", "内置算法, 邮政编码, 遮蔽脱敏, 设置为空"},
  {"MASK_STRING_NULL", "内置算法, 军队证件, 遮蔽脱敏, 设置为空"},
  {"MASK_STRING_NULL", "内置算法, 护照号, 遮蔽脱敏, 设置为空"},
  {"MASK_STRING_NULL", "内置算法, 中文姓名, 遮蔽脱敏, 设置为空"},
  {"MASK_STRING_NULL", "内置算法, 身份证号, 遮蔽脱敏, 设置为空"},
  {"MASK_STRING_NULL", "内置算法, 固定电话, 遮蔽脱敏, 设置为空"},
  {"MASK_CELLPHONE_NUMBER_MIDDLE", "内置算法, 手机号, 遮蔽脱敏, 常量替换手机号码中间"},
  {"MASK_STRING_NULL", "内置算法, 手机号, 遮蔽脱敏, 设置为空"},
  {"MASK_STRING_NULL", "内置算法, 车牌号, 遮蔽脱敏, 设置为空"},
  {"MASK_STRING_NULL", "内置算法, 中文地址, 遮蔽脱敏, 设置为空"},
  {"MASK_STRING_NULL", "内置算法, 银行卡号, 遮蔽脱敏, 设置为空"},
  {"MASK_STRING_NULL", "内置算法, 电子邮箱, 遮蔽脱敏, 设置为空"},
  {"MASK_STRING_NULL", "内置算法, 企业单位名称, 遮蔽脱敏, 设置为空"},
  {"MASK_STRING_NULL", "内置算法, 三证合一码, 遮蔽脱敏, 设置为空"}
};

typedef struct FuncInfo {
  std::string function_name;
  std::string category;
  std::string data_type;
  std::string mask_type;
  std::string algname;
  std::string content;
  int func_tool;

  FuncInfo() : func_tool(0) {}
} FuncInfo_s;

void ParseFile(const char* filename);
void ParseString(std::string &sql);
std::string& string_toupper(std::string &str);
void GetFuncInfo(FuncInfo_s &func_info, std::string name);
void Split(const std::string &s, std::vector<std::string> &sv, const char flag);
void PrintHead();
void PrintSqlXml(FuncInfo_s &func_info);
void PrintTail();
std::string Trim(std::string& str, const char delim);

// delete delim in the head and tail
std::string Trim(std::string& str, const char delim) {
  if (str.at(0) == delim) {
    str.erase(0, 1);
  }

  if (str.at(str.length() - 1) == delim) {
    str.erase(str.length() - 1, 1);
  }

  return str;
}

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
  ANTLRInputStream input(string_toupper(sql));
  SqlXmlLexer lexer(&input);
  CommonTokenStream tokens(&lexer);

  // show all the tokens
  /*
  tokens.fill();
  for (auto token : tokens.getTokens()) {
    std::cout << token->toString() << std::endl;
  }
  */

  SqlXmlParser parser(&tokens);

  parser.removeErrorListeners();

  // add error listener
  ErrorVerboseListener err_verbose;
  parser.addErrorListener(&err_verbose);

  auto stmts_ctx = parser.stmts();
  //std::cout << "sql: " << tokens.getText() << std::endl;
  //std::cout << ((tree::ParseTree*)stmts_ctx)->toStringTree(&parser) << std::endl;

  // the following here is not apt
  if (err_verbose.has_error())
    std::cout << "Parse failed: " << err_verbose.err_message() << std::endl;

  PrintHead();
  for (auto stmt_ctx : stmts_ctx->stmt()) {
    std::string function_name = stmt_ctx->func_name()->getText();
    FuncInfo_s func_info;
    GetFuncInfo(func_info, Trim(function_name, '"'));
    auto tokens = parser.getTokenStream();
    func_info.content = tokens->getText(stmt_ctx);

    PrintSqlXml(func_info);
  }
  PrintTail();
}

std::string& string_toupper(std::string &str) {
  std::transform(str.begin(), str.end(), str.begin(), 
      [](unsigned char c) -> unsigned char { return std::toupper(c); });
  return str;
}

void Split(const std::string &s, std::vector<std::string> &sv, const char flag=' ') {
  sv.clear();
  std::istringstream iss(s);
  std::string temp;

  while (std::getline(iss, temp, flag)) {
    sv.push_back(temp);
  }
}

void GetFuncInfo(FuncInfo_s &func_info, std::string name) {
  for (auto iter = function_map.begin(); iter != function_map.end(); iter++) {
    if (strcasecmp(iter->first.c_str(), name.c_str()) == 0) {
      std::vector<std::string> sv;
      Split(iter->second, sv, ',');
      func_info.function_name = name;
      func_info.category = Trim(sv[0], ' ');
      func_info.data_type = Trim(sv[1], ' ');
      func_info.mask_type = Trim(sv[2], ' ');
      func_info.algname = Trim(sv[3], ' ');
      func_info.func_tool = 0;

      return;
    }
  }

  func_info.function_name = "unknown"; // function is not standard
  func_info.func_tool = 1;
}

// <alg category="内置算法" dataType="电子邮箱,身份证" maskType="遮蔽脱敏"  algName="设置为空" isTemplate="0" dbType="ORACLE" dbVersion="">
//     <functionName>MASK_STRING_NULL</functionName>
//     <functionTool>0</functionTool>
//     <functionContent>
//     <![CDATA[
//         CREATE OR REPLACE FUNCTION MASK_STRING_NULL (a_in_1 VARCHAR2)
//             RETURN VARCHAR2 AS
//         BEGIN
//             RETURN NULL;
//         END;
//     ]]>
//     </functionContent>
// </alg>
void PrintSqlXml(FuncInfo_s &func_info) {
  std::cout << "    <alg category=\"" << func_info.category << "\" dataType=\""
    << func_info.data_type << "\" maskType=\"" << func_info.mask_type 
    << "\" algName=\"" << func_info.algname << "\" isTemplate=\"0\" dbType=\"XXXX\" dbVersion=\"\">" << std::endl;
  std::cout << "      <functionName>" << func_info.function_name << "</functionName>" << std::endl;
  std::cout << "      <functionTool>" << func_info.func_tool << "</functionTool>" << std::endl;
  std::cout << "      <functionContent>" << std::endl;
  std::cout << "      <![CDATA[" << std::endl;
  std::cout << "          " << func_info.content << std::endl;
  std::cout << "      ]]" << std::endl;
  std::cout << "      </functionContent>" << std::endl;
  std::cout << "    </alg>" << std::endl;
}

void PrintHead() {
  std::cout << "<algs>" << std::endl;
  std::cout << "  <upgradeInfo version=\"1.3.1\"><![CDATA[add function for XXXX]]></upgradeInfo>" << std::endl;
  std::cout << "  <rdms>" << std::endl;
}

void PrintTail() {
  std::cout << "  </rdms>" << std::endl;
  std::cout << "</algs>" << std::endl;
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

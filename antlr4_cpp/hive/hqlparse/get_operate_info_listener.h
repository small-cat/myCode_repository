/*****************************************************************************
 * @file  : get_operate_info_listener.h - 
 * @brief : (c) Copyright 2019 . All Rights Reserved.
 * @author:  
 * @email : 
 * @date  : 2019-11-18
*****************************************************************************/
#ifndef __GET_OPERATE_INFO_LISTENER_H__
#define __GET_OPERATE_INFO_LISTENER_H__

#include <string.h>

#include "HplsqlParser.h"
#include "HplsqlBaseListener.h"

#include "IParser.h"

namespace antlr4_hive_parser {

class GetOperateInfoListener : public HplsqlBaseListener {
public:
  GetOperateInfoListener(HplsqlParser *parser);
  virtual ~GetOperateInfoListener();

  std::vector<parser::OperateInfo> operate_info_list();

  void enterCreate_database_stmt(HplsqlParser::Create_database_stmtContext* ctx);
  void enterCreate_function_stmt(HplsqlParser::Create_function_stmtContext* ctx);
private:
  HplsqlParser *parser_;
  parser::OperateObject operate_object_;
  parser::OperateInfo operate_info_;
  std::vector<parser::OperateInfo> operate_info_list_;
};
} // antlr4_hive_parser

#endif /* __GET_OPERATE_INFO_LISTENER_H__ */

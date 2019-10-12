/*****************************************************************************
 * @file  : column_item.h - 
 * @brief : (c) Copyright 2019 . All Rights Reserved.
 * @author: Jona 
 * @email : mblrwuzy@gmail.com
 * @date  : 2019-10-08
*****************************************************************************/
#include <string>
#include <vector>
#include <iostream>
#include <sstream>

typedef enum class ColumnType {
  REGULAR,
  FUNCTION,
  UNARY,
  OTHER
} ColumnType;

typedef struct RegularColumn {
  std::string schema;
  std::string table;
  std::string column;

  void clear() {
    schema.clear();
    table.clear();
    column.clear();
  }
} RegularColumn;

typedef struct Column {
  ColumnType column_type;
  RegularColumn regular_column;
} Column;

typedef struct ColumnItem {
  std::vector<Column> expr_list;
  std::vector<std::string> operator_list;
  std::string alias_name;

  void clear() {
    column_list.clear();
    operator_list.clear();
    alias_name.clear();
  }
} ColumnItem;

typedef std::vector<ColumnItem> ColumnItemList;

static void split(const std::string &s, std::vector<std::string> &sv, const char flag = ' ') {
  sv.clear();
  std::istringstream iss(s);
  std::string temp;

  while (std::getline(iss, temp, flag)) {
    sv.push_back(temp);
  }
}

static RegularColumn get_regular_column(const std::string &str) {
  std::vector<std::string> sv;
  RegularColumn item;
  item.clear();

  split(str, sv, '.');
  switch (sv.size()) {
    case 1:
      item.column = sv[0];
      break;
    case 2:
      item.table  = sv[0];
      item.column = sv[1];
      break;
    case 3:
      item.schema = sv[0];
      item.table  = sv[1];
      item.column = sv[2];
      break;
    default:
      // error
      item.column = "error column";
      break;
  }

  return item;
}

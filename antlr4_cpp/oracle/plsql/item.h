/*************************************************************************
  > File Name: table_item.h
  > Author: 
  > Mail: 
  > Created Time: 2019-08-13 21:52:57
  > Description: 
 ************************************************************************/
#ifndef __TABLE_ITEM_H__
#define __TABLE_ITEM_H__

#include <string>
#include <vector>
#include <iostream>
#include <sstream>

#include <strings.h>

struct TableItem {
  std::string database;
  std::string schema;
  std::string table;
  std::string alias;

  void clear() {
    database.clear();
    schema.clear();
    table.clear();
    alias.clear();
  }
};

struct ColumnItem {
  std::string schema;
  std::string table;
  std::string column;
  std::string alias;
  bool hasAs;

  ColumnItem() : hasAs(false) {
  }

  void clear() {
    schema.clear();
    table.clear();
    column.clear();
    alias.clear();
    hasAs = false;
  }

  friend bool operator<(const ColumnItem& col1, const ColumnItem& col2) {
    int res = strcasecmp(col1.table.c_str(), col2.table.c_str());
    if (res == 0) {
      return strcasecmp(col1.column.c_str(), col2.column.c_str()) < 0;
    } else
      return res < 0;
  }
};

struct MaskItem {
  std::string table;
  std::string column;
  std::string mask_function;

  void clear() {
    table.clear();
    column.clear();
    mask_function.clear();
  }
};

/* get from get_table_listener.h */
struct MaskColumnItem {
  TableItem table_item;
  MaskItem mask_item;
};

typedef std::vector<TableItem> TableItemList;
typedef std::vector<MaskItem> MaskItemList;
typedef std::vector<ColumnItem> ColumnItemList;
typedef std::vector<MaskColumnItem> MaskColumnItemList;

static void split(const std::string &s, std::vector<std::string> &sv, const char flag = ' ') {
  sv.clear();
  std::istringstream iss(s);
  std::string temp;

  while (std::getline(iss, temp, flag)) {
    sv.push_back(temp);
  }
}

static ColumnItem get_column(const std::string &str) {
  std::vector<std::string> sv;
  ColumnItem item;
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

#endif

/*************************************************************************
* @file column_relation_dag.h
* @brief data structure for column dag
* 遍历 column_dag 算法，生成 map
* 1. 查询之前，先加载一次等价条件，因为有时候给出的 mask_item 可能不会出现在子查询
*    中,仅仅作为等价条件出现在 join_on_part 中
* 2. 在 table_to_column_list 中查询表是否存在，如果存在，说明在当前子查询中使用
*    了该表，同时，查找列是否存在，如果存在，将该列信息加入到 map_columns_list
* 3. 根据第 2 步中的子查询名称 subquery_name，在 table_to_subquery_list 中查询 
*    子查询是否存在，如果存在，说明该子查询存在别名(比如from (...) t) 或者该
*    子查询是在 with clause 中。
* 4. 根据 map_columns_list，在 equivalent_cond_list 中查询等价条件，并将等价
*    条件加入到 map_columns_list
* 5. 每增加一个新的等价条件，都需要重复 2 - 4 步骤
* @author Jona
* @date 10/09/2019
*************************************************************************/
#ifndef __COLUMN_RELATION_DAG_H__ 
#define __COLUMN_RELATION_DAG_H__ 

#include <string>
#include <vector>

#include <string.h>

#include "item.h"
#include "get_operate_info_from_dag.h"

namespace sqlparse {
void ColumnDAG::Travel() {
  Table2Subquery tb2subquery;
  Tables2Columns tb2column;
  EquivalentCond equ_cond;

  std::cout << "\n===========table to subquery list===========\n";
  for (auto tb2subquery : table_to_subquery_list) {
    std::cout << tb2subquery.table_name << " <--> " << tb2subquery.subquery_name << std::endl;
  }

  std::cout << "\n===========table to column list===========\n";
  for (auto tb2column : table_to_column_list) {
    std::cout << "subquery_name: " << tb2column.subquery_name << std::endl;
    std::cout << "table list [schema, table, alias]---> \n";
    for (auto table_item : tb2column.from) {
      std::cout << "[" << table_item.schema << ", " 
        << table_item.table << ", " << table_item.alias << "], ";
    }
    std::cout << std::endl;

    std::cout << "column list --> ";
    for (auto column_item : tb2column.to) {
      std::cout << "[" << column_item.schema<< ", " 
        << column_item.table << ", " << column_item.column << ", " 
        << column_item.alias << "],    ";
    }
    std::cout << std::endl << std::endl;
  }
}

Tables2Columns ColumnDAG::GetTopLevelQueryFromDag() {
  for (auto tb2col : table_to_column_list) {
    if (tb2col.subquery_name.empty()) {
      return tb2col;
    }
  }

  return {};
}

/***********************************************************
 * get OperateInfo from query, start from select list in top
 * level query.
 * 1. find top level query and get its table list
 * 2. for each table in table list, get its columns appear in 
 *    select list, if a column contains table name, it belong 
 *    to current table, otherwise, it doesn't. But if a column 
 *    does not contains all the table, we regard it belong to
 *    all tables in table list.
 * 3. if table name is a subquery, get its original name and 
 *    columns
 * just consider top level query
 * @author Jona
 * @param 
 * @date 03/12/2019 
***********************************************************/ 
parser::OperateInfo ColumnDAG::GetOperateInfoFromQuery() {
  // find top level query
  auto top_level_query = GetTopLevelQueryFromDag();
  
  std::vector<TableInfo> target_table_infos;         // for tables
  std::vector<int> count_for_cols;                  // for columns
  auto table_list = top_level_query.from;
  auto column_list = top_level_query.to;
  int index = 0;

  // initialize
  count_for_cols.assign(column_list.size(), 0);

  // if count_for_cols.at(i) equal to table_list.size(), shows that we can not
  // decide col's owner, so append it to all the tables.
  for (auto tb : table_list) {
    TableInfo tb_info {tb, {}};

    for (auto col : column_list) {
      if (ColumnBelongtoTable(col, tb)) {
        tb_info.column_list.push_back(col);
      } else {
        count_for_cols.at(index)++;
      }
      index = (index + 1) % column_list.size();
    }

    target_table_infos.push_back(tb_info);
  }

  // index should be 0 here
  for (auto count : count_for_cols) {
    if (count == column_list.size()) {
      // can not decide table_list.at(k)'s owner
      // append it to all tables
      for (auto tb_info : target_table_infos) {
        tb_info.column_list.push_back(column_list.at(index));
      }
    }
    index++;
  }

  return GetOperateInfoByTableInfos(target_table_infos);
}

/***********************************************************
 * 1. if table_info has a column '*', ignore its other columns
 *    in table_info, and try to get all columns by table from 
 *    dag again
 * 2. if table is a subquery, repeat GetOperateInfoFromQuery
 * @author Jona
 * @param 
 * @date 04/12/2019 
***********************************************************/ 
parser::OperateInfo ColumnDAG::GetOperateInfoByTableInfos(std::vector<TableInfo>& table_infos) {
  parser::OperateInfo operate_info;
  operate_info.operate = "SELECT";
  operate_info.objectType = "TABLE";

  for (auto tb_info : table_infos) {
    parser::OperateObject obj;
    
    for (auto col : tb_info.column_list) {
      if (0 != strcmp(col.column.c_str(), "*")) {
        // column is not *
        obj.subObjectName.push_back(col.column);
      } else {
        obj.subObjectName.clear();
        break;
      }
    }

    if (obj.subObjectName.empty()) {
      // get columns by table from dag 
      ColumnItemList column_list;
      GetColumnsByTable(column_list, tb_info.table);

      for (auto col_tmp : column_list) {
        if (obj.objectName.empty()) {
          obj.objectName = col_tmp.table;
          obj.subObjectName.push_back(col_tmp.column);
        } else {
          if (strcmp(obj.objectName.c_str(), col_tmp.table.c_str()) == 0) {
            // add col_tmp to the same table
            obj.subObjectName.push_back(col_tmp.column);
          } else {
            // different table, add to a new obj
            operate_info.objects.push_back(obj);
            obj.clear();
            obj.objectName = col_tmp.table;
            obj.subObjectName.push_back(col_tmp.column);
          }
        }
      }
    } else {
      // table maybe a subquery 
      // 1. subquery, get all columns and tables from subquery, and compare current
      //    columns saved in obj.subObjectName, get original columns 
      // 2. not a subquery
      if (!TableIsSubquery(tb_info.table)) {
        obj.objectName = (tb_info.table.schema.empty()? "" : tb_info.table.schema + ".")
          + tb_info.table.table;
        operate_info.objects.push_back(obj);
      } else {
        // TODO
        
        ColumnItemList column_list;
        GetColumnsByTable(column_list, tb_info.table);
        
      }
    }
  }
}

bool ColumnDAG::TableIsSubquery(TableItem table_item) {
  for (auto tb2subquery : table_to_subquery_list) {
    if (StringCompare(tb2subquery.table_name, table_item.table)) {
        return true;
    }
  }

  return false;
}

/***********************************************************
 * get all table columns from dag
 * @author Jona
 * @param 
 *  @column_list: save column info 
 *  @table_item: table which we want to get its columns
 * @date 15/10/2019 
***********************************************************/ 
void ColumnDAG::GetColumnsByTable(ColumnItemList& column_list, 
    TableItem table_item) {

  // find subquery_name if table_item is a subquery
  std::string subquery_name;
  for (auto tb2subquery : table_to_subquery_list) {
    if (StringCompare(tb2subquery.table_name, table_item.table)) {
      subquery_name = tb2subquery.subquery_name;
      break;
    }
  }

  if (subquery_name.empty()) {
    // table_item is not a subquery, load it from physical table
    // TODO: Not Implementes
  } else {
    for (auto tb2col : table_to_column_list) {
      if (!StringCompare(tb2col.subquery_name, subquery_name)) {
        continue;
      }

      // all the columns in current subquery are table_item's columns
      for (auto col_tmp : tb2col.to) {
        if (strcmp(col_tmp.column.c_str(), "*") != 0) {
          // if col_tmp has an alias name, its name in table_item should be alias
          ColumnItem col_item_tmp;
          col_item_tmp.column = col_tmp.alias.empty()? col_tmp.column : col_tmp.alias;
          col_item_tmp.table = table_item.table;
          column_list.push_back(col_item_tmp);
        } else {
          // col_tmp also contains '*'
          // find its table and recursive
          // its table should be in tb2col.from, also in 2 situation
          // 1. only '*'
          if (col_tmp.table.empty()) {
            for (auto table_tmp : tb2col.from) {
              GetColumnsByTable(column_list, table_tmp);
            }
          } else {
            // 2. tableA.*
            for (auto table_tmp : tb2col.from) {
              if (StringCompare(table_tmp.table, col_tmp.table)
                  || StringCompare(table_tmp.alias, col_tmp.table)) {

                GetColumnsByTable(column_list, table_tmp);
              }
            }
          } // end else tableA.*
        } // end else col_tmp also contains '*'
      } 
      break;
    } // end for (auto tb2col : dag.table_to_column_list)
  }
}

/***********************************************************
 * if col is belong to table
 * 1. if col.column is * and col.table is empty, return true
 * 2. if col.column is * and col.table is not empty, return compare(col.table, table) 
 * 3. otherwise, if col.column.find(table+"."), return true;
 *
 * NOTE: in hive, select scott.table.name from scott.table; syntax error
 * select table.name from scott.table; syntax right
 *
 * @author Jona
 * @param 
 * @date 04/12/2019 
***********************************************************/ 
bool ColumnDAG::ColumnBelongtoTable(const ColumnItem& col, const TableItem& table_item) {
  if (strcmp(col.column.c_str(), "*") == 0) {
    if (col.table.empty()) {
      return true;
    } else {
      return StringCompare(col.table, table_item.table);
    }
  }

  // column is not *
  // if column contains table, it should be like table.column
  std::string col_prefix = table_item.table + ".";
  if (strncmp(col.column.c_str(), col_prefix.c_str(), col_prefix.length()) == 0) {
    return true;
  }

  return false;
}

/***********************************************************
 * if str1 and str2 aren't const strings, strcasecmp, otherwise, strcmp
 * @author Jona
 * @param 
 * @date 04/12/2019 
***********************************************************/ 
bool ColumnDAG::StringCompare(const std::string& str1, const std::string& str2) {
  if (str1.at(0) != '\'' && str1.at(0) != '"'
      && str2.at(0) != '\'' && str2.at(0) != '"') {
    return strcasecmp(str1.c_str(), str2.c_str()) == 0;
  } else {
    return strcmp(str1.c_str(), str2.c_str()) == 0;
  }
}

/***********************************************************
 * table_to_column_list is empty shows query does not exist.
 * @author Jona
 * @param 
 * @date 04/12/2019 
***********************************************************/ 
bool ColumnDAG::Empty() {
  if (table_to_column_list.empty()) {
    return true;
  }

  return false;
}

} /* end sqlparse */
#endif

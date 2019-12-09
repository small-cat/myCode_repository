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

Tables2ColumnsList ColumnDAG::GetTopLevelQueryFromDag() {
  // if query contain union..., several top level query exist.
  Tables2ColumnsList top_level_query_list;
  for (auto tb2col : table_to_column_list) {
    if (tb2col.subquery_name.empty()) {
      top_level_query_list.push_back(tb2col);
    }
  }

  return top_level_query_list;
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
parser::OperateInfo ColumnDAG::GetOperateInfoFromTopLevelQuery() {
  // find top level query
  auto top_level_query_list = GetTopLevelQueryFromDag();
  
  std::vector<TableInfo> target_table_infos;         

  // if count_for_cols.at(i) equal to table_list.size(), shows that we can not
  // decide col's owner, so append it to all the tables.
  for (auto top_level_query : top_level_query_list) {
    GetTableInfoByTable2Columns(target_table_infos, top_level_query);
  }

  return GetOperateInfoByTableInfos(target_table_infos);
}

void ColumnDAG::GetTableInfoByTable2Columns(std::vector<TableInfo>& target_table_infos,
    Tables2Columns& tables_to_columns) {

  auto column_list = tables_to_columns.to;
  int column_list_size = column_list.size();
  int index = 0;

  std::vector<int> count_for_cols;                  // for columns
  count_for_cols.assign(column_list_size, 0);

  std::vector<TableInfo> table_infos;

  for (auto tb : tables_to_columns.from) {
    TableInfo tb_info {tb, {}};

    for (auto col : column_list) {
      if (ColumnBelongtoTable(col, tb)) {
        tb_info.column_list.push_back(col);
      } else {
        count_for_cols.at(index)++;
      }
      index = (index + 1) % column_list_size;
    }

    table_infos.push_back(tb_info);
  }

  // index should be 0 here
  for (auto count : count_for_cols) {
    if (count == tables_to_columns.from.size()) {
      // can not decide table_list.at(k)'s owner
      // append it to all tables
      for (auto& tb_info : table_infos) {
        tb_info.column_list.push_back(column_list.at(index));
      }
    }
    index = (index + 1) % column_list_size;
  }

  for (auto tb_info : table_infos) {
    target_table_infos.push_back(tb_info);
  }
}

/***********************************************************
 * 1. table is not a subquery, get OperateObject directly
 * 2. table is a subquery, get TableInfos for it first and then
 *    to scan its TableInfos to get OperateObjects
 * @author Jona
 * @param 
 * @date 04/12/2019 
***********************************************************/ 
parser::OperateInfo ColumnDAG::GetOperateInfoByTableInfos(std::vector<TableInfo>& table_infos) {
  parser::OperateInfo operate_info;
  operate_info.operate = "SELECT";
  operate_info.objectType = "TABLE";

  for (auto table_info : table_infos) {
    auto current_table_infos = GetTableInfoByTableItem(table_info.table);

    if (current_table_infos.empty()) {
      // not a subquery
      parser::OperateObject obj;
      obj.objectName = (table_info.table.schema.empty()? "" : table_info.table.schema + ".") + table_info.table.table;
      for (auto col : table_info.column_list) {
        obj.subObjectName.push_back(col.column);
      }
      operate_info.objects.push_back(obj);
    } else {
      // subquery
      for (auto cur_info : current_table_infos) {
        auto new_info = ReplaceSubqueryToGetOriginTableInfo(table_info, cur_info);
        parser::OperateObject obj;
        obj.objectName = (new_info.table.schema.empty()? "" : new_info.table.schema + ".") + new_info.table.table;

        for (auto col : new_info.column_list) {
          obj.subObjectName.push_back(col.column);
        }
        operate_info.objects.push_back(obj);
      }
    }
  } // end for

  return operate_info;
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
 * get table infos by table_item if table_item is a subquery, 
 * otherwise returns empty
 * @author Jona
 * @param 
 *  @column_list: save column info 
 *  @table_item: table which we want to get its columns
 * @date 15/10/2019 
***********************************************************/ 
std::vector<TableInfo> ColumnDAG::GetTableInfoByTableItem(const TableItem& table_item) {

  // find subquery_name if table_item is a subquery
  std::string subquery_name;
  for (auto tb2subquery : table_to_subquery_list) {
    if (StringCompare(tb2subquery.table_name, table_item.table)) {
      subquery_name = tb2subquery.subquery_name;
      break;
    }
  }

  if (subquery_name.empty()) {
    // table_item is not a subquery
    return {};
  } else {

    for (auto tb2col : table_to_column_list) {
      if (!StringCompare(tb2col.subquery_name, subquery_name)) {
        continue;
      }

      // table_item is a subquery, save its TableInfo
      std::vector<TableInfo> table_info_in_subquery;
      GetTableInfoByTable2Columns(table_info_in_subquery, tb2col);

      // we replaced subquery_name in tableinfo.table with physical table,
      // replace column names(maybe just an alias name) with physical column name
      // for example:
      // select myname from (select name myname from student) ts;
      // in top level we get TableInfo {"ts", {{"myname"}}}, 
      // ts is a subquery, and its TableInfos is {"student", {{"name", "myname"}}}, "myname" is 
      // an alias name of column "name", here we can get the real TableInfo
      // {"student", {"name"}}
      //
      // finally, the sql shows that the result set is student.name
      std::vector<TableInfo> table_info_replaced_by_subquery;

      for (auto& info : table_info_in_subquery) {
        // get structure TableInfo for info.table if info.table is a subquery
        auto current_table_infos = GetTableInfoByTableItem(info.table);
        if (current_table_infos.empty()) {
          table_info_replaced_by_subquery.push_back(info);
          // info.table is not a subquery 
          continue;
        } else {
          // info.table is also a subquery, we get the subquery's TableInfos from
          // current_table_infos

          // for example:
          // select aname from (select bname aname from (select cname bname from student)) t;
          // TableInfos in top level query is {"t", {{"aname"}}}, 
          // t -> {"TABLE_REF", {{"bname", "aname"}}}
          // TABLE_REF -> {"student", {{"cname", "bname"}}}
          //
          // when get TableInfos for TABLE_REF, bname is an alias in its subquery, 
          // get real TableInfo {"student", {{"cname", "aname"}}}, 
          //
          // when get TableInfos for t is {"student", {{"cname", "aname"}}}
          // get real TableInfo for top level query {"student", {{"cname"}}}
          for (auto cur_info : current_table_infos) {
            auto info_tmp = ReplaceSubqueryToGetOriginTableInfo(info, cur_info);

            if (!info_tmp.column_list.empty()) {
              table_info_replaced_by_subquery.push_back(info_tmp);
            }
          } // end for
        }
      }
       
      return table_info_replaced_by_subquery;
    } // end for (auto tb2col : dag.table_to_column_list)
  }

  return {};
}

/******************************************************************************
 * find all the columns in tableinfo_subquery.column_list which belong to 
 * tableinfo_origin.table, and save them into origin
 * @author Jona
 * @param 
 * @date 06/12/2019 
******************************************************************************/ 
TableInfo ColumnDAG::ReplaceSubqueryToGetOriginTableInfo(const TableInfo& tableinfo_subquery, 
    const TableInfo& tableinfo_origin) {
  TableInfo origin {tableinfo_origin.table, {}};

  for (auto subquery_info_col : tableinfo_subquery.column_list) {
    if (strcmp(subquery_info_col.column.c_str(), "*") == 0) {
      // selece name, *, phone from (select stu_name name, phone from student) t;
      for (auto col_tmp : tableinfo_origin.column_list) {
        origin.column_list.push_back(col_tmp);
      }

      continue;
    }

    // select name from (select n name from stu) t;
    // {"t", {{"name"}}} -> {"stu", {{"n", "name"}}}
    for (auto origin_info_col : tableinfo_origin.column_list) {
      if (strcmp(origin_info_col.column.c_str(), "*") == 0) {
        origin.column_list.push_back(subquery_info_col);
        break;
      }

      if (IsColumnStringMatched(subquery_info_col.column, origin_info_col.column)
          || IsColumnStringMatched(subquery_info_col.column, origin_info_col.alias)) {
        if (subquery_info_col.alias.empty()) {
          subquery_info_col.alias = subquery_info_col.column;
        }
        subquery_info_col.column = origin_info_col.column;
        origin.column_list.push_back(subquery_info_col);
        break;
      }
    }
  }

  return origin;
}

/******************************************************************************
 * select myfunc(name) || "KO" from (select name from student) t;
 * str1 is {myfunc(name) || "KO"}, and str2 is {name}
 * @author Jona
 * @param 
 * @date 06/12/2019 
******************************************************************************/ 
bool ColumnDAG::IsColumnStringMatched(const std::string& str1, const std::string& str2) {
  if (str1.empty() || str2.empty()) {
    return false;
  }

  std::string::size_type n = 0;
  std::string dest = str1;
  while ((n = dest.find(str2)) != std::string::npos) {
    if (n == 0) {
      return true;
    }

    if (n > 0 && !std::isalpha(dest.at(n-1))) {
      return true;
    }

    dest = dest.substr(n);
  }

  return false;
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
      return StringCompare(col.table, table_item.table) ||
        StringCompare(col.table, table_item.alias);
    }
  }

  // column is not *
  // if column contains table, it should be like table.column, or myfunc(table.column, ...)
  //
  // it is not precious
  // if col.column is st.name, table_item.table is student, and alias is t, also matched
  // unless the previous char is not alpha
  std::string col_string1 = table_item.table + ".";
  std::string col_string2 = table_item.alias + ".";
  std::string col_str_dest= col.column;
  std::string::size_type n = 0;
  while ((n = col_str_dest.find(col_string1)) != std::string::npos
      || (n = col_str_dest.find(col_string2))!= std::string::npos) {
    if (n == 0) {
      return true;
    }

    if (n > 0 && !std::isalpha(col.column.at(n-1))) {
      return true;
    } 

    col_str_dest = col_str_dest.substr(n);
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
  if (str1.empty() || str2.empty()) {
    return false;
  }

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

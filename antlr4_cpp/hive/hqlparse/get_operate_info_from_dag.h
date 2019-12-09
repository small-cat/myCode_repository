/*************************************************************************
 * @file get_operate_info_from_dag.h
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
#ifndef __GET_OPERATE_INFO_FROM_DAG__
#define __GET_OPERATE_INFO_FROM_DAG__

#include <string>
#include <vector>
#include <map>

#include "item.h"
#include "IParser.h"

namespace sqlparse {

// relationships with table and subquery
struct Table2Subquery {
  std::string table_name;
  std::string subquery_name;
};

// from table_list to column_list
struct Tables2Columns {
  std::string subquery_name;  // pointer out which subquery it is
  TableItemList from;
  ColumnItemList to;
};

// equivalent conditions 
struct EquivalentCond {
  ColumnItem from;
  ColumnItem to;
};

typedef std::vector<Table2Subquery> Table2SubqueryList;
typedef std::vector<Tables2Columns> Tables2ColumnsList;
typedef std::vector<EquivalentCond> EquivalentCondList;

struct TableInfo {
  TableItem table;
  ColumnItemList column_list;
};

class ColumnDAG {
  public:
    Table2SubqueryList table_to_subquery_list;
    Tables2ColumnsList table_to_column_list;
    EquivalentCondList equivalent_cond_list;

    void Travel();
    Tables2ColumnsList GetTopLevelQueryFromDag();
    parser::OperateInfo GetOperateInfoFromTopLevelQuery();
    void GetTableInfoByTable2Columns(std::vector<TableInfo>& target_table_infos, 
        Tables2Columns& tables_to_columns);
    parser::OperateInfo GetOperateInfoByTableInfos(std::vector<TableInfo>& table_infos);
    bool Empty();
    bool ColumnBelongtoTable(const ColumnItem& col, const TableItem& table);
    bool StringCompare(const std::string& str1, const std::string& str2);
    std::vector<TableInfo> GetTableInfoByTableItem(const TableItem& table_item);
    bool TableIsSubquery(TableItem table_item);
    TableInfo ReplaceSubqueryToGetOriginTableInfo(const TableInfo& tableinfo_subquery, 
        const TableInfo& tableinfo_origin);

    void clear() {
      table_to_subquery_list.clear();
      table_to_column_list.clear();
      equivalent_cond_list.clear();
    }

  private:
    bool IsColumnStringMatched(const std::string& str1, const std::string& str2);
};

static const int SUBQUERY_SUFFIX = 0;
static const int SUBQUERY_WITHCLAUSE = 1;
static const int SUBQUERY_TABLE_PREFIX = 2;
static const int SUBQUERY_IN_ELEMENTS_PREFIX = 3;
static const int SUBQUERY_ATOM_PREFIX = 4;

static std::map<int, std::string> SUBQUERY_NAMES_PART = {
  {SUBQUERY_SUFFIX, "_SUBQUERY_SECSMART"}, 
  {SUBQUERY_WITHCLAUSE, "_WITHCLAUSE_SECSMART"}, 
  {SUBQUERY_TABLE_PREFIX, "TABLE_REF_SECSMART_"}, 
  {SUBQUERY_IN_ELEMENTS_PREFIX, "IN_ELEMENTS_SECSMART_"}, 
  {SUBQUERY_ATOM_PREFIX, "ATOM_SECSMART_"}
};

} /* end sqlparse */
#endif

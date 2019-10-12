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

struct MaskItem {
    std::string table;
    std::string column;
    std::string mask_function;
};

/* get from get_table_listener.h */
struct MaskColumnItem {
    TableItem table_item;
    MaskItem mask_item;
};

typedef std::vector<TableItem> TableItemList;
typedef std::vector<MaskItem> MaskItemList;
typedef std::vector<MaskColumnItem> MaskColumnItemList;

#endif

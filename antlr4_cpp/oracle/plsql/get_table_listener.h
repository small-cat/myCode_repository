/*************************************************************************
  > File Name: get_table_listener.h
  > Author: 
  > Mail: 
  > Created Time: 2019-08-13 21:50:12
  > Description: 
 ************************************************************************/
#ifndef __GET_TABLE_LISTENER_H__
#define __GET_TABLE_LISTENER_H__

#include <string.h>

#include "PlSqlParser.h"
#include "PlSqlParserBaseListener.h"
#include "item.h"

namespace oracle {
class GetTableListener : public PlSqlParserBaseListener {
  public:
    GetTableListener(PlSqlParser *parser) : parser_(parser) {}

    // mask_item get from xml file, table name and column name don't
    // contain schema
    MaskColumnItemList get_table_item_list(const MaskItemList& mask_item_list) {
      MaskColumnItemList mask_column_item_list;
      MaskColumnItem mask_col_item;
      if (mask_item_list.size()<=0 || table_item_list_.size()<=0)
        return mask_column_item_list;

      for (auto mask_item : mask_item_list) {
        for (auto table_item : table_item_list_) {
          if (0 == strcasecmp(table_item.table.c_str(), mask_item.table.c_str())) {
            mask_col_item.table_item = table_item;
            mask_col_item.mask_item = mask_item;
            mask_column_item_list.push_back(mask_col_item);
          }
        }
      }

      return mask_column_item_list;
    }

    // get table list from ParseTree
    void enterTableview_name(PlSqlParser::Tableview_nameContext *ctx) {
      if (nullptr == ctx) {
        table_item_.clear();
        return;
      }

      TokenStream *tokens = parser_->getTokenStream();
      std::string tableinfo = tokens->getText(ctx); // table name with database and schema if exist
      std::vector<std::string> sv;
      split(tableinfo, sv, '.');
      if (1 == sv.size()) {   // tablename
        table_item_.table = sv[0];
      } else if (2 == sv.size()) { // schema.tablename
        table_item_.schema = sv[0];
        table_item_.table = sv[1];
      }

      table_item_list_.push_back(table_item_);
    }

    void exitTableview_name(PlSqlParser::Tableview_nameContext *ctx) {}

    // table_ref_aux is the ancestor of tableview_name and table_alias
    void enterTable_ref_aux(PlSqlParser::Table_ref_auxContext *ctx) {
      if (nullptr == ctx)
        return;
      TokenStream *tokens = parser_->getTokenStream();
      table_item_.clear();
      auto table_alias_context = ctx->table_alias();
      if (nullptr == table_alias_context)
        return;
      table_item_.alias = tokens->getText(table_alias_context);
    }

    void exitTable_ref_aux(PlSqlParser::Table_ref_auxContext *ctx) {}
  private:
    PlSqlParser *parser_;
    TableItemList table_item_list_;
    TableItem table_item_;
};
}

#endif

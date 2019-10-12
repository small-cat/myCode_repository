/*************************************************************************
* @file kingbase_get_table_listener.h
* @brief file to get all the table information
* @author Jona 
* @date 25/08/2019
*************************************************************************/

#ifndef __KINGBASE_GET_TABLE_LISTENER_H__
#define __KINGBASE_GET_TABLE_LISTENER_H__

#include <string>
#include <vector>

#include "KingbaseSqlParser.h"
#include "KingbaseSqlParserBaseListener.h"
#include "item.h"

class KingbaseGetTableListener : public KingbaseSqlParserBaseListener {
    public:
        KingbaseGetTableListener(KingbaseSqlParser *parser) {
            parser_ = parser;
        }

        /***********************************************************
         * table_ref_aux is the ancestor of table_alias and table_name
         * we must enter table_ref_aux first
         * @author Jona
         * @param 
         * @date 25/08/2019 
         ***********************************************************/ 
        void enterTable_ref_aux(KingbaseSqlParser::Table_ref_auxContext *ctx) {
            if (nullptr == ctx)
                return;

            antlr4::TokenStream *tokens = parser_->getTokenStream();
            table_item_.clear();
            if (nullptr != ctx->table_alias()) {
                table_item_.alias = tokens->getText(ctx->table_alias());
            }
        }
        void exitTable_ref_aux(KingbaseSqlParser::Table_ref_auxContext *ctx) {
        }

        void enterTable_name(KingbaseSqlParser::Table_nameContext *ctx) {
            if (nullptr == ctx)
                return;

            antlr4::TokenStream *tokens = parser_->getTokenStream();
            std::string tableinfo = tokens->getText(ctx);
            std::vector<std::string> sv;
            split(tableinfo, sv, '.');

            switch (sv.size()) {
            case 1:
                // tablename
                table_item_.table = sv[0];
                break;
            case 2:
                // schema.tablename
                table_item_.schema = sv[0];
                table_item_.table = sv[1];
                break;
            case 3:
                // database.schema.table
                table_item_.database = sv[0];
                table_item_.schema = sv[1];
                table_item_.table = sv[2];
                break;
            default:
                /* there must be an error */
                break;
            }

            table_item_list_.push_back(table_item_);
        }
        void exitTable_name(KingbaseSqlParser::Table_nameContext *ctx) {
        }

        /***********************************************************
         * get table list which matched the condition given by mask_item_list.
         * mask_item_list are load from xml files and contains tableinfo without
         * schema
         * @author Jona
         * @param 
         * @date 25/08/2019 
         ***********************************************************/ 
        MaskColumnItemList getTable_Item_List(const MaskItemList &mask_item_list) {
            MaskColumnItemList mask_col_item_list;
            MaskColumnItem mask_col_item;

            if (mask_item_list.size() <=0 || table_item_list_.size() <= 0)
                return mask_col_item_list;

            for (auto table_item : table_item_list_) {
                for (auto mask_item : mask_item_list) {
                    if (0 == strcasecmp(table_item.table.c_str(), mask_item.table.c_str())) {
                        // matched
                        mask_col_item.table_item = table_item;
                        mask_col_item.mask_item = mask_item;
                        mask_col_item_list.push_back(mask_col_item);
                    }
                }
            }

            return mask_col_item_list;
        }

    private:
        KingbaseSqlParser *parser_;
        TableItemList table_item_list_;
        TableItem table_item_;
};

#endif

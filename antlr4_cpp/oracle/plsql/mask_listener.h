/*************************************************************************
	> File Name: mask_listener.h
	> Author: 
	> Mail: 
	> Created Time: 2019-08-14 22:55:01
	> Description: 
 ************************************************************************/

#ifndef __MASK_LISTENER_H__
#define __MASK_LISTENER_H__

#include <string.h>

#include "PlSqlParser.h"
#include "PlSqlParserBaseListener.h"
#include "item.h"

using namespace antlr4;

namespace oracle {
    struct ColumnItem {
        std::string schema;
        std::string table;
        std::string column;

        void clear() {
            schema.clear();
            table.clear();
            column.clear();
        }
    };

    class MaskListener : public PlSqlParserBaseListener {
        public:
            MaskListener(TokenStream *tokens, MaskColumnItemList &mask_col_item_list)
                : rewriter_(tokens),
                  mask_column_item_list_(mask_col_item_list) {}

            void enterSelected_list_element(PlSqlParser::Selected_list_elementContext *ctx) {
                if (nullptr != ctx->tableview_name()) {
                  // tablename.*, ignore this case
                    return;
                }

                auto expr_ctx = ctx->expression();
                auto column_alias_ctx = ctx->column_alias();
                std::string select_ele = expr_ctx->getText();

                // schema.tablename.column
                std::vector<std::string> sv;
                ColumnItem column_item;
                column_item.clear();
                split(select_ele, sv, '.');
                if (1 == sv.size()) {           // column
                    column_item.column = sv[0];
                } else if (2 == sv.size()) {    // table.column
                    column_item.table = sv[0];
                    column_item.column = sv[1];
                } else if (3 == sv.size()) {    // schema.table.column
                    column_item.schema = sv[0];
                    column_item.table = sv[1];
                    column_item.column = sv[2];
                }

                // compare column_item with mask_column_item_list_
                bool matched = false;
                MaskColumnItem mask_col_item;
                for (auto item : mask_column_item_list_) {
                    if (!StrcaseCmp(column_item.column, item.mask_item.column)) {        // column not matched
                        continue;
                    }

                    if (column_item.table.empty()) {
                        // in the case, some situations can not be parsed correctly 
                        // TODO get a better algorithm
                        matched = true;
                        mask_col_item = item;
                        break;
                    } else {
                        // tablename maybe alias
                        if (StrcaseCmp(column_item.table, item.table_item.table)
                                || StrcaseCmp(column_item.table, item.table_item.alias)) {
                            matched = true;
                            mask_col_item = item;
                            break;
                        }
                    }

                    if (!column_item.schema.empty()) {
                        if (StrcaseCmp(column_item.schema, item.table_item.schema)
                                && StrcaseCmp(column_item.table, item.table_item.table)) {
                            matched = true;
                            mask_col_item = item;
                            break;
                        }
                    }
                }

                // rewrite tokens
                if (matched) {
                    rewriter_.insertBefore(ctx->start, mask_col_item.mask_item.mask_function + "(");
                    rewriter_.insertAfter(ctx->stop, ")");
                }
            }
            void exitSelected_list_element(PlSqlParser::Selected_list_elementContext *ctx) {}
        private:
            int StrcaseCmp(const std::string &s1, const std::string &s2) {
                return strcasecmp(s1.c_str(), s2.c_str()) == 0;
            }
            TokenStreamRewriter rewriter_;
            MaskColumnItemList mask_column_item_list_;
    };
}

#endif

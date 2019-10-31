/*************************************************************************
	> File Name: PlSqlGetSentenceListener.h
	> Author: 
	> Mail: 
	> Created Time: 2019-08-09 09:48:08
	> Description: 
 ************************************************************************/
#ifndef __FROM_CLAUSE_MATCHER_LISTERNER_H__
#define __FROM_CLAUSE_MATCHER_LISTERNER_H__

#include <iostream>

#include "PlSqlParserBaseListener.h"
#include "PlSqlParser.h"
using namespace antlr4;
using namespace oracle;

namespace oracle {
class FromClauseMatcherListener : public PlSqlParserBaseListener {
    public:
        FromClauseMatcherListener(PlSqlParser *parser, std::string strings);
        void enterTableview_name(PlSqlParser::Tableview_nameContext * /*ctx*/);
        void exitTableview_name(PlSqlParser::Tableview_nameContext * /*ctx*/);

        // for test
        void enterTable_ref_aux(PlSqlParser::Table_ref_auxContext* ctx) {
            TokenStream *tokens = _parser->getTokenStream();
            std::cout << "Table_ref_aux: " << tokens->getText(ctx);
            if (nullptr != ctx->table_alias())
                std::cout << ", table_alias: " << tokens->getText(ctx->table_alias());
            std::cout << std::endl;
        }
        void exitTable_ref_aux(PlSqlParser::Table_ref_auxContext* ctx) {}

        void enterSelected_list(PlSqlParser::Selected_listContext *ctx) {
            std::cout << "Selected_list: ";
            if (ctx->ASTERISK()) 
                std::cout << ctx->ASTERISK()->getText() << ", ";

            std::cout << ctx->getText() << std::endl;
        }
        void exitSelected_list(PlSqlParser::Selected_listContext *ctx) {}

        void enterSelected_list_element(PlSqlParser::Selected_list_elementContext *ctx) {
            TokenStream *tokens = _parser->getTokenStream();
            auto tableview_name_ctx = ctx->tableview_name();
            auto expr_ctx = ctx->expression();
            auto column_alias_ctx = ctx->column_alias();

            if (nullptr != tableview_name_ctx) {
                std::cout << "Selected_list_element: " << tokens->getText(ctx) << "\n";
                return;
            }

            std::cout << "Selected_list_element: " << tokens->getText(expr_ctx) << ", ";
            if (nullptr != column_alias_ctx)
                std::cout << "column_alias: " << tokens->getText(column_alias_ctx);
            std::cout << "\n";
        }
        void exitSelected_list_element(PlSqlParser::Selected_list_elementContext *ctx) {}

        bool matcher();
        std::string table_name();
    private:
        PlSqlParser *_parser;
        std::string _strings;
        bool _matcher;
};

}

#endif

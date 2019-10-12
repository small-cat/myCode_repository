/*************************************************************************
* @file from_clause_matcher_listener.h
* @brief matcher for tablename 
* @author 
* @date 25/08/2019
*************************************************************************/

#ifndef __KINGBASE_FROM_CLAUSE_MATCHER_LISTENER_H__
#define __KINGBASE_FROM_CLAUSE_MATCHER_LISTENER_H__

#include <string>

#include <string.h>

#include "KingbaseSqlParser.h"
#include "KingbaseSqlParserBaseListener.h"

class KingbaseFromClauseMatcherListener : public KingbaseSqlParserBaseListener {
    public:
        KingbaseFromClauseMatcherListener(KingbaseSqlParser *parser, std::string string) {
            parser_ = parser;
            tablename_ = string;
            matched_ = false;
        }
        ~KingbaseFromClauseMatcherListener(){}

       void enterTable_name(KingbaseSqlParser::Table_nameContext *ctx) {
           if (nullptr == ctx)
               matched_ = false;

           antlr4::TokenStream *tokens = parser_->getTokenStream();
           std::string tablename = tokens->getText(ctx);

           if (0 == strcasecmp(tablename.c_str(), tablename_.c_str()))
               matched_ = true;
       } 
       void exitTable_name(KingbaseSqlParser::Table_nameContext *ctx) {
           // DO NOTHING
       }

        bool matched() {
            return matched_;
        }

        std::string tablename() {
            return tablename_;
        }

    private:
        bool matched_;
        std::string tablename_;
        KingbaseSqlParser *parser_;
};

#endif

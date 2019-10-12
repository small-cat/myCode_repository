/*************************************************************************
	> File Name: from_clause_matcher_listerner.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019-08-11 21:45:29
	> Description: 
 ************************************************************************/

#include <string.h>
#include "from_clause_matcher_listener.h"
#include "PlSqlParser.h"

using namespace antlr4;
using namespace oracle;

namespace oracle {
FromClauseMatcherListener::FromClauseMatcherListener(PlSqlParser *parser, std::string strings) {
    this->_parser = parser;
    this->_matcher = false;
    this->_strings = strings;
}

/* 
 * matcher:
 * tablename
 * schem.tablename
 * schema.tablename.columnname
 */
void FromClauseMatcherListener::enterTableview_name(PlSqlParser::Tableview_nameContext *ctx) {
    TokenStream *tokens = _parser->getTokenStream();

    if (nullptr == ctx)
        _matcher = false;

    std::string tablename = tokens->getText(ctx);
    if (0 == strcasecmp(_strings.c_str(), tablename.c_str()))
        _matcher = true;
}

bool FromClauseMatcherListener::isMatcher() {
    return _matcher;
}

void FromClauseMatcherListener::exitTableview_name(PlSqlParser::Tableview_nameContext *ctx)  {
}

}

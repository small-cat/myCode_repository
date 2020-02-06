/*****************************************************************************
 * @file  : oracle_parse_tree_walker.cpp - 
 * @brief : (c) Copyright 2020 . All Rights Reserved.
 * @author: Jona 
 * @email : mblrwuzy@gmail.com
 * @date  : 2020-01-16
*****************************************************************************/
#include "oracle_parse_tree_walker.hpp"
#include "support/CPPUtils.h"
#include "tree/ErrorNode.h"
#include "PlSqlParser.h"

using namespace antlr4::tree;
using namespace oracle;

void OracleParseTreeWalker::walk(ParseTreeListener *listener, ParseTree *t) const {
  std::vector<ParseTree *> nodeStack;
  std::vector<size_t> indexStack;

  ParseTree *currentNode = t;
  size_t currentIndex = 0;

  while (currentNode != nullptr) {
    if (antlrcpp::is<ErrorNode *>(currentNode)) {
      listener->visitErrorNode(dynamic_cast<ErrorNode *>(currentNode));
    } else if (antlrcpp::is<TerminalNode *>(currentNode)) {
      listener->visitTerminal((TerminalNode*)currentNode);
    } else if (!excludeNode(currentNode)) {
      enterRule(listener, currentNode);
    }

    if (!excludeNode(currentNode) && !currentNode->children.empty()) {
      nodeStack.push_back(currentNode);
      indexStack.push_back(currentIndex);
      currentIndex = 0;
      currentNode = currentNode->children[0];
      continue;
    }

    do {
      if (!excludeNode(currentNode) && !antlrcpp::is<TerminalNode *>(currentNode)) {
        exitRule(listener, currentNode);
      }

      if (nodeStack.empty()) {
        currentNode = nullptr;
        currentIndex = 0;
        break;
      }

      if (nodeStack.back()->children.size() > ++currentIndex) {
        currentNode = nodeStack.back()->children[currentIndex];
        break;
      }

      currentNode = nodeStack.back();
      nodeStack.pop_back();
      currentIndex = indexStack.back();
      indexStack.pop_back();

    } while (currentNode != nullptr);
  }
}

bool OracleParseTreeWalker::excludeNode(ParseTree *t) const {
  if (antlrcpp::is<PlSqlParser::Where_clauseContext *>(t)) {
    return true;
  } else if (antlrcpp::is<PlSqlParser::Pivot_clauseContext *>(t)) {
    return true;
  } else if (antlrcpp::is<PlSqlParser::Unpivot_clauseContext *>(t)) {
    return true;
  }

  return false;
}

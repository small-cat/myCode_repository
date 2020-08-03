/**
 * @copyright (c) Copyright 2020 Secsmart. All Rights Reserved.
 * @license
 * @file  : pre_order_parser_tree_walker.hpp
 * @author: Jona 
 * @email : wuzhenyu@secsmart.net
 * @date  : 2020-07-31
 * @brief : pre order parse tree walker
*/
#ifndef __PRE_ORDER_PARSER_TREE_WALKER_H__
#define __PRE_ORDER_PARSER_TREE_WALKER_H__

#include "antlr4-runtime.h"
#include "tree/ParseTreeWalker.h"
#include "tree/ParseTreeListener.h"

class PreOrderParseTreeWalker : public antlr4::tree::ParseTreeWalker {
public:
  PreOrderParseTreeWalker() {}
  virtual ~PreOrderParseTreeWalker() {}

  virtual void walk(antlr4::tree::ParseTreeListener* listener, antlr4::tree::ParseTree *t) const override {
    std::stack<antlr4::tree::ParseTree *> nodeStack;
    std::stack<size_t> indexStack;

    antlr4::tree::ParseTree *currentNode = t;
    size_t currentIndex = 0;

    while (currentNode!=nullptr || !nodeStack.empty()) {
      while (currentNode != nullptr) {
        // visit root node first
        if (antlrcpp::is<antlr4::tree::ErrorNode *>(currentNode)) {
          listener->visitErrorNode(dynamic_cast<antlr4::tree::ErrorNode *>(currentNode));
        } else if (antlrcpp::is<antlr4::tree::TerminalNode *>(currentNode)) {
          listener->visitTerminal((antlr4::tree::TerminalNode*)currentNode);
        } else {
          enterRule(listener, currentNode);
        }

        nodeStack.push(currentNode);
        indexStack.push(currentIndex);

        if (!currentNode->children.empty()) {
          currentNode = currentNode->children[0];
          currentIndex = 0;
        } else {
          currentNode = nullptr;
          currentIndex = 0;
        }
      }

      // go the most left

      if (!nodeStack.empty()) {
        currentNode = nodeStack.top();
        nodeStack.pop();
        currentIndex = indexStack.top();
        indexStack.pop();

        if (currentNode->children.size() > ++currentIndex) {
          nodeStack.push(currentNode);
          indexStack.push(currentIndex);
          currentNode = currentNode->children[currentIndex];
        } else {
          if (!antlrcpp::is<antlr4::tree::TerminalNode *>(currentNode)) {
            exitRule(listener, currentNode);
          }
          currentNode = nullptr;
          currentIndex = 0;
        }
      }
    } // end while
  }
};

#endif /* __PRE_ORDER_PARSER_TREE_WALKER_H__ */

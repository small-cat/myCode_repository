#include <iostream>                                                                                                                                   
                                                                                  
#include "antlr4-runtime.h"                                                       
#include "DynScopeLexer.h"                                                              
#include "DynScopeParser.h"                                                              
                                                                                  
using namespace antlr4;                                                           
                                                                                  
int main(int , const char **) {                                                  
  ANTLRInputStream input("{ int i; int j; int z; y = 100; z = 101; }");
  DynScopeLexer lexer(&input);                                                           
  CommonTokenStream tokens(&lexer);                                               
                                                                                  
  tokens.fill();                                                                  
  for (auto token : tokens.getTokens()) {                                         
    std::cout << token->toString() << std::endl;                                  
  }                                                                               
                                                                                  
  DynScopeParser parser(&tokens);                                                        
  tree::ParseTree* tree = parser.prog();                                         
                                                                                 
  std::cout << tree->toStringTree(&parser) << std::endl << std::endl;            
                                                                                 
  return 0;                                                                      
}  

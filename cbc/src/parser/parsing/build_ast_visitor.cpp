#include "build_ast_visitor.h"
#include "ast/ast.hpp"

namespace parser {

BuildAstVistor::BuildAstVistor(SesameParser* parser, LibraryLoader* loader, 
                               const std::string& sname, ErrorHandler* handler) 
                              : parser_(parser), 
                                loader_(loader), 
                                source_name_(sname), 
                                err_handler_(handler) {
  tokens_ = parser_->getTokenStream();
}

BuildAstVistor::~BuildAstVistor() {}

void BuildAstVistor::AddKnownTypedefs(std::vector<TypedefNode*> typedefs) {
  for (auto t : typedefs) {
    known_typedefs_.push_back(t.name());
  }
}

antlrcpp::Any visitCompilation_unit(SesameParser::Compilation_unitContext* ctx) {
  ast::ASTNode* ast = new ast::ASTNode();
  auto import_stmt_ctxs = ctx->import_stmt();

  for (auto import_stmt_ctx : import_stmt_ctxs) {
    std::string imp = tokens_->getText(import_stmt_ctx->import_name());
    ast::Declarations* import_decl = loader_->LoadLibrary(imp);
    ast->AddDeclarations(import_decl);
    AddKnownTypedefs(import_decl.typedefs());   // add all typedef definitions
  }

  auto top_def_ctxs = ctx->top_def();
  for (auto top_ctx : top_def_ctxs) {
    Declarations* decl = (Declarations*)visit(top_ctx);
    ast->AddDeclarations(decl);
  }

  return (antlrcpp::Any)ast;
}

} /* end parser */

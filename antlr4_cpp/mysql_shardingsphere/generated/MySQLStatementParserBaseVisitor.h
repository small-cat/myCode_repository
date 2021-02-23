
// Generated from MySQLStatementParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "MySQLStatementParserVisitor.h"


/**
 * This class provides an empty implementation of MySQLStatementParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  MySQLStatementParserBaseVisitor : public MySQLStatementParserVisitor {
public:

  virtual antlrcpp::Any visitExecute(MySQLStatementParser::ExecuteContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsert(MySQLStatementParser::InsertContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsertSpecification(MySQLStatementParser::InsertSpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsertValuesClause(MySQLStatementParser::InsertValuesClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFields(MySQLStatementParser::FieldsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsertIdentifier(MySQLStatementParser::InsertIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableWild(MySQLStatementParser::TableWildContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsertSelectClause(MySQLStatementParser::InsertSelectClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOnDuplicateKeyClause(MySQLStatementParser::OnDuplicateKeyClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValueReference(MySQLStatementParser::ValueReferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDerivedColumns(MySQLStatementParser::DerivedColumnsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReplace(MySQLStatementParser::ReplaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReplaceSpecification(MySQLStatementParser::ReplaceSpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReplaceValuesClause(MySQLStatementParser::ReplaceValuesClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReplaceSelectClause(MySQLStatementParser::ReplaceSelectClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUpdate(MySQLStatementParser::UpdateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUpdateSpecification_(MySQLStatementParser::UpdateSpecification_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignment(MySQLStatementParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetAssignmentsClause(MySQLStatementParser::SetAssignmentsClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignmentValues(MySQLStatementParser::AssignmentValuesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignmentValue(MySQLStatementParser::AssignmentValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlobValue(MySQLStatementParser::BlobValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDelete_stmt(MySQLStatementParser::Delete_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeleteSpecification(MySQLStatementParser::DeleteSpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSingleTableClause(MySQLStatementParser::SingleTableClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultipleTablesClause(MySQLStatementParser::MultipleTablesClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelect(MySQLStatementParser::SelectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectWithInto(MySQLStatementParser::SelectWithIntoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQueryExpression(MySQLStatementParser::QueryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQueryExpressionBody(MySQLStatementParser::QueryExpressionBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQueryExpressionParens(MySQLStatementParser::QueryExpressionParensContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQueryPrimary(MySQLStatementParser::QueryPrimaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQuerySpecification(MySQLStatementParser::QuerySpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCall(MySQLStatementParser::CallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDoStatement(MySQLStatementParser::DoStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHandlerStatement(MySQLStatementParser::HandlerStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHandlerOpenStatement(MySQLStatementParser::HandlerOpenStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHandlerReadIndexStatement(MySQLStatementParser::HandlerReadIndexStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHandlerReadStatement(MySQLStatementParser::HandlerReadStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHandlerCloseStatement(MySQLStatementParser::HandlerCloseStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitImportStatement(MySQLStatementParser::ImportStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLoadStatement(MySQLStatementParser::LoadStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLoadDataStatement(MySQLStatementParser::LoadDataStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLoadXmlStatement(MySQLStatementParser::LoadXmlStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExplicitTable(MySQLStatementParser::ExplicitTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableValueConstructor(MySQLStatementParser::TableValueConstructorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRowConstructorList(MySQLStatementParser::RowConstructorListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWithClause(MySQLStatementParser::WithClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCteClause(MySQLStatementParser::CteClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectSpecification(MySQLStatementParser::SelectSpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDuplicateSpecification(MySQLStatementParser::DuplicateSpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProjections(MySQLStatementParser::ProjectionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProjection(MySQLStatementParser::ProjectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnqualifiedShorthand(MySQLStatementParser::UnqualifiedShorthandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQualifiedShorthand(MySQLStatementParser::QualifiedShorthandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFromClause(MySQLStatementParser::FromClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableReferences(MySQLStatementParser::TableReferencesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEscapedTableReference(MySQLStatementParser::EscapedTableReferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableReference(MySQLStatementParser::TableReferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableFactor(MySQLStatementParser::TableFactorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartitionNames(MySQLStatementParser::PartitionNamesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndexHintList(MySQLStatementParser::IndexHintListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndexHint(MySQLStatementParser::IndexHintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitJoinedTable(MySQLStatementParser::JoinedTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInnerJoinType(MySQLStatementParser::InnerJoinTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOuterJoinType(MySQLStatementParser::OuterJoinTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNaturalJoinType(MySQLStatementParser::NaturalJoinTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitJoinSpecification(MySQLStatementParser::JoinSpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhereClause(MySQLStatementParser::WhereClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGroupByClause(MySQLStatementParser::GroupByClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHavingClause(MySQLStatementParser::HavingClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLimitClause(MySQLStatementParser::LimitClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLimitRowCount(MySQLStatementParser::LimitRowCountContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLimitOffset(MySQLStatementParser::LimitOffsetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWindowClause(MySQLStatementParser::WindowClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWindowItem(MySQLStatementParser::WindowItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubquery(MySQLStatementParser::SubqueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectLinesInto(MySQLStatementParser::SelectLinesIntoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectFieldsInto(MySQLStatementParser::SelectFieldsIntoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectIntoExpression(MySQLStatementParser::SelectIntoExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLockClause(MySQLStatementParser::LockClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLockClauseList(MySQLStatementParser::LockClauseListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLockStrength(MySQLStatementParser::LockStrengthContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLockedRowAction(MySQLStatementParser::LockedRowActionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableLockingList(MySQLStatementParser::TableLockingListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableIdentOptWild(MySQLStatementParser::TableIdentOptWildContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableAliasRefList(MySQLStatementParser::TableAliasRefListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterStatement(MySQLStatementParser::AlterStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateTable(MySQLStatementParser::CreateTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartitionClause(MySQLStatementParser::PartitionClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartitionTypeDef(MySQLStatementParser::PartitionTypeDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubPartitions(MySQLStatementParser::SubPartitionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartitionKeyAlgorithm(MySQLStatementParser::PartitionKeyAlgorithmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDuplicateAsQueryExpression(MySQLStatementParser::DuplicateAsQueryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterTable(MySQLStatementParser::AlterTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStandaloneAlterTableAction(MySQLStatementParser::StandaloneAlterTableActionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterTableActions(MySQLStatementParser::AlterTableActionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterTablePartitionOptions(MySQLStatementParser::AlterTablePartitionOptionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterCommandList(MySQLStatementParser::AlterCommandListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterList(MySQLStatementParser::AlterListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateTableOptionsSpaceSeparated(MySQLStatementParser::CreateTableOptionsSpaceSeparatedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddColumn(MySQLStatementParser::AddColumnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddTableConstraint(MySQLStatementParser::AddTableConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChangeColumn(MySQLStatementParser::ChangeColumnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModifyColumn(MySQLStatementParser::ModifyColumnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterTableDrop(MySQLStatementParser::AlterTableDropContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDisableKeys(MySQLStatementParser::DisableKeysContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnableKeys(MySQLStatementParser::EnableKeysContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterColumn(MySQLStatementParser::AlterColumnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterIndex(MySQLStatementParser::AlterIndexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterCheck(MySQLStatementParser::AlterCheckContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterConstraint(MySQLStatementParser::AlterConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRenameColumn(MySQLStatementParser::RenameColumnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterRenameTable(MySQLStatementParser::AlterRenameTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRenameIndex(MySQLStatementParser::RenameIndexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterConvert(MySQLStatementParser::AlterConvertContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterTableForce(MySQLStatementParser::AlterTableForceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterTableOrder(MySQLStatementParser::AlterTableOrderContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterOrderList(MySQLStatementParser::AlterOrderListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableConstraintDef(MySQLStatementParser::TableConstraintDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterCommandsModifierList(MySQLStatementParser::AlterCommandsModifierListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterCommandsModifier(MySQLStatementParser::AlterCommandsModifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWithValidation(MySQLStatementParser::WithValidationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStandaloneAlterCommands(MySQLStatementParser::StandaloneAlterCommandsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterPartition(MySQLStatementParser::AlterPartitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstraintName(MySQLStatementParser::ConstraintNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableElementList(MySQLStatementParser::TableElementListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableElement(MySQLStatementParser::TableElementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRestrict(MySQLStatementParser::RestrictContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFulltextIndexOption(MySQLStatementParser::FulltextIndexOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropTable(MySQLStatementParser::DropTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropIndex(MySQLStatementParser::DropIndexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterAlgorithmOption(MySQLStatementParser::AlterAlgorithmOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterLockOption(MySQLStatementParser::AlterLockOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTruncateTable(MySQLStatementParser::TruncateTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateIndex(MySQLStatementParser::CreateIndexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateDatabase(MySQLStatementParser::CreateDatabaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterDatabase(MySQLStatementParser::AlterDatabaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateDatabaseSpecification_(MySQLStatementParser::CreateDatabaseSpecification_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterDatabaseSpecification_(MySQLStatementParser::AlterDatabaseSpecification_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropDatabase(MySQLStatementParser::DropDatabaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterInstance(MySQLStatementParser::AlterInstanceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInstanceAction(MySQLStatementParser::InstanceActionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChannel(MySQLStatementParser::ChannelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateEvent(MySQLStatementParser::CreateEventContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterEvent(MySQLStatementParser::AlterEventContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropEvent(MySQLStatementParser::DropEventContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateFunction(MySQLStatementParser::CreateFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterFunction(MySQLStatementParser::AlterFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropFunction(MySQLStatementParser::DropFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateProcedure(MySQLStatementParser::CreateProcedureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterProcedure(MySQLStatementParser::AlterProcedureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropProcedure(MySQLStatementParser::DropProcedureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateServer(MySQLStatementParser::CreateServerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterServer(MySQLStatementParser::AlterServerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropServer(MySQLStatementParser::DropServerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateView(MySQLStatementParser::CreateViewContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterView(MySQLStatementParser::AlterViewContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropView(MySQLStatementParser::DropViewContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateTablespaceInnodb(MySQLStatementParser::CreateTablespaceInnodbContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateTablespaceNdb(MySQLStatementParser::CreateTablespaceNdbContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterTablespaceNdb(MySQLStatementParser::AlterTablespaceNdbContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterTablespaceInnodb(MySQLStatementParser::AlterTablespaceInnodbContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropTablespace(MySQLStatementParser::DropTablespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateLogfileGroup(MySQLStatementParser::CreateLogfileGroupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterLogfileGroup(MySQLStatementParser::AlterLogfileGroupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropLogfileGroup(MySQLStatementParser::DropLogfileGroupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateTrigger(MySQLStatementParser::CreateTriggerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropTrigger(MySQLStatementParser::DropTriggerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRenameTable(MySQLStatementParser::RenameTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateDefinitionClause(MySQLStatementParser::CreateDefinitionClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumnDefinition(MySQLStatementParser::ColumnDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFieldDefinition(MySQLStatementParser::FieldDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumnAttribute(MySQLStatementParser::ColumnAttributeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCheckConstraint(MySQLStatementParser::CheckConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstraintEnforcement(MySQLStatementParser::ConstraintEnforcementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGeneratedOption(MySQLStatementParser::GeneratedOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReferenceDefinition(MySQLStatementParser::ReferenceDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOnUpdateDelete(MySQLStatementParser::OnUpdateDeleteContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReferenceOption(MySQLStatementParser::ReferenceOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndexNameAndType(MySQLStatementParser::IndexNameAndTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndexType(MySQLStatementParser::IndexTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndexTypeClause(MySQLStatementParser::IndexTypeClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyParts(MySQLStatementParser::KeyPartsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyPart(MySQLStatementParser::KeyPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyPartWithExpression(MySQLStatementParser::KeyPartWithExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyListWithExpression(MySQLStatementParser::KeyListWithExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndexOption(MySQLStatementParser::IndexOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCommonIndexOption(MySQLStatementParser::CommonIndexOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVisibility(MySQLStatementParser::VisibilityContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateLikeClause(MySQLStatementParser::CreateLikeClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateIndexSpecification(MySQLStatementParser::CreateIndexSpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateTableOptions(MySQLStatementParser::CreateTableOptionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateTableOption(MySQLStatementParser::CreateTableOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateSRSStatement(MySQLStatementParser::CreateSRSStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropSRSStatement(MySQLStatementParser::DropSRSStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSrsAttribute(MySQLStatementParser::SrsAttributeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPlace(MySQLStatementParser::PlaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartitionDefinitions(MySQLStatementParser::PartitionDefinitionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartitionDefinition(MySQLStatementParser::PartitionDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartitionLessThanValue(MySQLStatementParser::PartitionLessThanValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartitionValueList(MySQLStatementParser::PartitionValueListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartitionDefinitionOption(MySQLStatementParser::PartitionDefinitionOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubpartitionDefinition(MySQLStatementParser::SubpartitionDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOwnerStatement(MySQLStatementParser::OwnerStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitScheduleExpression(MySQLStatementParser::ScheduleExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTimestampValue(MySQLStatementParser::TimestampValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRoutineBody(MySQLStatementParser::RoutineBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitServerOption(MySQLStatementParser::ServerOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRoutineOption(MySQLStatementParser::RoutineOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProcedureParameter(MySQLStatementParser::ProcedureParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFileSizeLiteral(MySQLStatementParser::FileSizeLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleStatement(MySQLStatementParser::SimpleStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompoundStatement(MySQLStatementParser::CompoundStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValidStatement(MySQLStatementParser::ValidStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBeginStatement(MySQLStatementParser::BeginStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclareStatement(MySQLStatementParser::DeclareStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFlowControlStatement(MySQLStatementParser::FlowControlStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCaseStatement(MySQLStatementParser::CaseStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfStatement(MySQLStatementParser::IfStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIterateStatement(MySQLStatementParser::IterateStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLeaveStatement(MySQLStatementParser::LeaveStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLoopStatement(MySQLStatementParser::LoopStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRepeatStatement(MySQLStatementParser::RepeatStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturnStatement(MySQLStatementParser::ReturnStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhileStatement(MySQLStatementParser::WhileStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCursorStatement(MySQLStatementParser::CursorStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCursorCloseStatement(MySQLStatementParser::CursorCloseStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCursorDeclareStatement(MySQLStatementParser::CursorDeclareStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCursorFetchStatement(MySQLStatementParser::CursorFetchStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCursorOpenStatement(MySQLStatementParser::CursorOpenStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditionHandlingStatement(MySQLStatementParser::ConditionHandlingStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclareConditionStatement(MySQLStatementParser::DeclareConditionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclareHandlerStatement(MySQLStatementParser::DeclareHandlerStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGetDiagnosticsStatement(MySQLStatementParser::GetDiagnosticsStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatementInformationItem(MySQLStatementParser::StatementInformationItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditionInformationItem(MySQLStatementParser::ConditionInformationItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditionNumber(MySQLStatementParser::ConditionNumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatementInformationItemName(MySQLStatementParser::StatementInformationItemNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditionInformationItemName(MySQLStatementParser::ConditionInformationItemNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHandlerAction(MySQLStatementParser::HandlerActionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditionValue(MySQLStatementParser::ConditionValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitResignalStatement(MySQLStatementParser::ResignalStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSignalStatement(MySQLStatementParser::SignalStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSignalInformationItem(MySQLStatementParser::SignalInformationItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetTransaction(MySQLStatementParser::SetTransactionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetAutoCommit(MySQLStatementParser::SetAutoCommitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAutoCommitValue(MySQLStatementParser::AutoCommitValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBeginTransaction(MySQLStatementParser::BeginTransactionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCommit(MySQLStatementParser::CommitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRollback(MySQLStatementParser::RollbackContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSavepoint(MySQLStatementParser::SavepointContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBegin(MySQLStatementParser::BeginContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLock(MySQLStatementParser::LockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnlock(MySQLStatementParser::UnlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReleaseSavepoint(MySQLStatementParser::ReleaseSavepointContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXa(MySQLStatementParser::XaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTransactionCharacteristic(MySQLStatementParser::TransactionCharacteristicContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLevel(MySQLStatementParser::LevelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAccessMode(MySQLStatementParser::AccessModeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOptionChain(MySQLStatementParser::OptionChainContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOptionRelease(MySQLStatementParser::OptionReleaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableLock(MySQLStatementParser::TableLockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLockOption(MySQLStatementParser::LockOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXid(MySQLStatementParser::XidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGrant(MySQLStatementParser::GrantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRevoke(MySQLStatementParser::RevokeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProxyClause(MySQLStatementParser::ProxyClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrivilegeClause(MySQLStatementParser::PrivilegeClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRoleClause(MySQLStatementParser::RoleClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAllClause(MySQLStatementParser::AllClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrivileges(MySQLStatementParser::PrivilegesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrivilege(MySQLStatementParser::PrivilegeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrivilegeType(MySQLStatementParser::PrivilegeTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOnObjectClause(MySQLStatementParser::OnObjectClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitObjectType(MySQLStatementParser::ObjectTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrivilegeLevel(MySQLStatementParser::PrivilegeLevelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateUser(MySQLStatementParser::CreateUserContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefaultRoleClause(MySQLStatementParser::DefaultRoleClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRequireClause(MySQLStatementParser::RequireClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConnectOptions(MySQLStatementParser::ConnectOptionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAccountLockPasswordExpireOptions(MySQLStatementParser::AccountLockPasswordExpireOptionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAccountLockPasswordExpireOption(MySQLStatementParser::AccountLockPasswordExpireOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterUser(MySQLStatementParser::AlterUserContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterUserEntry(MySQLStatementParser::AlterUserEntryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterUserList(MySQLStatementParser::AlterUserListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropUser(MySQLStatementParser::DropUserContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateRole(MySQLStatementParser::CreateRoleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropRole(MySQLStatementParser::DropRoleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRenameUser(MySQLStatementParser::RenameUserContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetDefaultRole(MySQLStatementParser::SetDefaultRoleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetRole(MySQLStatementParser::SetRoleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetPassword(MySQLStatementParser::SetPasswordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAuthOption(MySQLStatementParser::AuthOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWithGrantOption(MySQLStatementParser::WithGrantOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUserOrRoles(MySQLStatementParser::UserOrRolesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRoles(MySQLStatementParser::RolesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGrantOption(MySQLStatementParser::GrantOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUserAuthOption(MySQLStatementParser::UserAuthOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifiedBy(MySQLStatementParser::IdentifiedByContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifiedWith(MySQLStatementParser::IdentifiedWithContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConnectOption(MySQLStatementParser::ConnectOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTlsOption(MySQLStatementParser::TlsOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUserFuncAuthOption(MySQLStatementParser::UserFuncAuthOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUse(MySQLStatementParser::UseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHelp(MySQLStatementParser::HelpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExplain(MySQLStatementParser::ExplainContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowDatabases(MySQLStatementParser::ShowDatabasesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowTables(MySQLStatementParser::ShowTablesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowTableStatus(MySQLStatementParser::ShowTableStatusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowColumns(MySQLStatementParser::ShowColumnsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowIndex(MySQLStatementParser::ShowIndexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowCreateTable(MySQLStatementParser::ShowCreateTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFromSchema(MySQLStatementParser::FromSchemaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFromTable(MySQLStatementParser::FromTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowLike(MySQLStatementParser::ShowLikeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowColumnLike(MySQLStatementParser::ShowColumnLikeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowWhereClause(MySQLStatementParser::ShowWhereClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowFilter(MySQLStatementParser::ShowFilterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowProfileType(MySQLStatementParser::ShowProfileTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetVariable(MySQLStatementParser::SetVariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableAssign(MySQLStatementParser::VariableAssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowBinaryLogs(MySQLStatementParser::ShowBinaryLogsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowBinlogEvents(MySQLStatementParser::ShowBinlogEventsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowCharacterSet(MySQLStatementParser::ShowCharacterSetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowCollation(MySQLStatementParser::ShowCollationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowCreateDatabase(MySQLStatementParser::ShowCreateDatabaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowCreateEvent(MySQLStatementParser::ShowCreateEventContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowCreateFunction(MySQLStatementParser::ShowCreateFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowCreateProcedure(MySQLStatementParser::ShowCreateProcedureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowCreateTrigger(MySQLStatementParser::ShowCreateTriggerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowCreateUser(MySQLStatementParser::ShowCreateUserContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowCreateView(MySQLStatementParser::ShowCreateViewContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowEngine(MySQLStatementParser::ShowEngineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowEngines(MySQLStatementParser::ShowEnginesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowErrors(MySQLStatementParser::ShowErrorsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowEvents(MySQLStatementParser::ShowEventsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowFunctionCode(MySQLStatementParser::ShowFunctionCodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowFunctionStatus(MySQLStatementParser::ShowFunctionStatusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowGrant(MySQLStatementParser::ShowGrantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowMasterStatus(MySQLStatementParser::ShowMasterStatusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowOpenTables(MySQLStatementParser::ShowOpenTablesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowPlugins(MySQLStatementParser::ShowPluginsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowPrivileges(MySQLStatementParser::ShowPrivilegesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowProcedureCode(MySQLStatementParser::ShowProcedureCodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowProcedureStatus(MySQLStatementParser::ShowProcedureStatusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowProcesslist(MySQLStatementParser::ShowProcesslistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowProfile(MySQLStatementParser::ShowProfileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowProfiles(MySQLStatementParser::ShowProfilesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowRelaylogEvent(MySQLStatementParser::ShowRelaylogEventContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowSlavehost(MySQLStatementParser::ShowSlavehostContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowSlaveStatus(MySQLStatementParser::ShowSlaveStatusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowStatus(MySQLStatementParser::ShowStatusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowTrriggers(MySQLStatementParser::ShowTrriggersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowVariables(MySQLStatementParser::ShowVariablesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowWarnings(MySQLStatementParser::ShowWarningsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetCharacter(MySQLStatementParser::SetCharacterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetName(MySQLStatementParser::SetNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClone(MySQLStatementParser::CloneContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCloneAction(MySQLStatementParser::CloneActionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateUdf(MySQLStatementParser::CreateUdfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInstall(MySQLStatementParser::InstallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUninstall(MySQLStatementParser::UninstallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInstallComponent(MySQLStatementParser::InstallComponentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInstallPlugin(MySQLStatementParser::InstallPluginContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUninstallComponent(MySQLStatementParser::UninstallComponentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUninstallPlugin(MySQLStatementParser::UninstallPluginContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAnalyzeTable(MySQLStatementParser::AnalyzeTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHistogram(MySQLStatementParser::HistogramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCheckTable(MySQLStatementParser::CheckTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCheckTableOption(MySQLStatementParser::CheckTableOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChecksumTable(MySQLStatementParser::ChecksumTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOptimizeTable(MySQLStatementParser::OptimizeTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRepairTable(MySQLStatementParser::RepairTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterResourceGroup(MySQLStatementParser::AlterResourceGroupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVcpuSpec(MySQLStatementParser::VcpuSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateResourceGroup(MySQLStatementParser::CreateResourceGroupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropResourceGroup(MySQLStatementParser::DropResourceGroupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetResourceGroup(MySQLStatementParser::SetResourceGroupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinlog(MySQLStatementParser::BinlogContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCacheIndex(MySQLStatementParser::CacheIndexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableIndexList(MySQLStatementParser::TableIndexListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartitionList(MySQLStatementParser::PartitionListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFlush(MySQLStatementParser::FlushContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFlushOption(MySQLStatementParser::FlushOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTablesOption(MySQLStatementParser::TablesOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKill(MySQLStatementParser::KillContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLoadIndexInfo(MySQLStatementParser::LoadIndexInfoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitResetStatement(MySQLStatementParser::ResetStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitResetOption(MySQLStatementParser::ResetOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitResetPersist(MySQLStatementParser::ResetPersistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRestart(MySQLStatementParser::RestartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShutdown(MySQLStatementParser::ShutdownContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExplainType(MySQLStatementParser::ExplainTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExplainableStatement(MySQLStatementParser::ExplainableStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFormatName(MySQLStatementParser::FormatNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShow(MySQLStatementParser::ShowContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChange(MySQLStatementParser::ChangeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChangeMasterTo(MySQLStatementParser::ChangeMasterToContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChangeReplicationFilter(MySQLStatementParser::ChangeReplicationFilterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStartSlave(MySQLStatementParser::StartSlaveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStopSlave(MySQLStatementParser::StopSlaveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGroupReplication(MySQLStatementParser::GroupReplicationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStartGroupReplication(MySQLStatementParser::StartGroupReplicationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStopGroupReplication(MySQLStatementParser::StopGroupReplicationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPurgeBinaryLog(MySQLStatementParser::PurgeBinaryLogContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitThreadTypes(MySQLStatementParser::ThreadTypesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitThreadType(MySQLStatementParser::ThreadTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUtilOption(MySQLStatementParser::UtilOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConnectionOptions(MySQLStatementParser::ConnectionOptionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMasterDefs(MySQLStatementParser::MasterDefsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMasterDef(MySQLStatementParser::MasterDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIgnoreServerIds(MySQLStatementParser::IgnoreServerIdsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIgnoreServerId(MySQLStatementParser::IgnoreServerIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFilterDefs(MySQLStatementParser::FilterDefsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFilterDef(MySQLStatementParser::FilterDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWildTables(MySQLStatementParser::WildTablesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWildTable(MySQLStatementParser::WildTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameterMarker(MySQLStatementParser::ParameterMarkerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCustomKeyword(MySQLStatementParser::CustomKeywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLiterals(MySQLStatementParser::LiteralsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitString_(MySQLStatementParser::String_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStringLiterals(MySQLStatementParser::StringLiteralsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumberLiterals(MySQLStatementParser::NumberLiteralsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTemporalLiterals(MySQLStatementParser::TemporalLiteralsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHexadecimalLiterals(MySQLStatementParser::HexadecimalLiteralsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBitValueLiterals(MySQLStatementParser::BitValueLiteralsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBooleanLiterals(MySQLStatementParser::BooleanLiteralsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNullValueLiterals(MySQLStatementParser::NullValueLiteralsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCollationName(MySQLStatementParser::CollationNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifier(MySQLStatementParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnreservedWord(MySQLStatementParser::UnreservedWordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTextOrIdentifier(MySQLStatementParser::TextOrIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable(MySQLStatementParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUserVariable(MySQLStatementParser::UserVariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSystemVariable(MySQLStatementParser::SystemVariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitScope(MySQLStatementParser::ScopeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInternalVariableName(MySQLStatementParser::InternalVariableNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetExprOrDefault(MySQLStatementParser::SetExprOrDefaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSchemaName(MySQLStatementParser::SchemaNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSchemaNames(MySQLStatementParser::SchemaNamesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCharsetName(MySQLStatementParser::CharsetNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSchemaPairs(MySQLStatementParser::SchemaPairsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSchemaPair(MySQLStatementParser::SchemaPairContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableName(MySQLStatementParser::TableNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumnName(MySQLStatementParser::ColumnNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndexName(MySQLStatementParser::IndexNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUserIdentifierOrText(MySQLStatementParser::UserIdentifierOrTextContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUserName(MySQLStatementParser::UserNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEventName(MySQLStatementParser::EventNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitServerName(MySQLStatementParser::ServerNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWrapperName(MySQLStatementParser::WrapperNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionName(MySQLStatementParser::FunctionNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitViewName(MySQLStatementParser::ViewNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOwner(MySQLStatementParser::OwnerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlias(MySQLStatementParser::AliasContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitName(MySQLStatementParser::NameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableList(MySQLStatementParser::TableListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitViewNames(MySQLStatementParser::ViewNamesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumnNames(MySQLStatementParser::ColumnNamesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGroupName(MySQLStatementParser::GroupNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRoutineName(MySQLStatementParser::RoutineNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShardLibraryName(MySQLStatementParser::ShardLibraryNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComponentName(MySQLStatementParser::ComponentNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPluginName(MySQLStatementParser::PluginNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHostName(MySQLStatementParser::HostNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPort(MySQLStatementParser::PortContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCloneInstance(MySQLStatementParser::CloneInstanceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCloneDir(MySQLStatementParser::CloneDirContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChannelName(MySQLStatementParser::ChannelNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogName(MySQLStatementParser::LogNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRoleName(MySQLStatementParser::RoleNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEngineRef(MySQLStatementParser::EngineRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTriggerName(MySQLStatementParser::TriggerNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTriggerTime(MySQLStatementParser::TriggerTimeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableOrTables(MySQLStatementParser::TableOrTablesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUserOrRole(MySQLStatementParser::UserOrRoleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartitionName(MySQLStatementParser::PartitionNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifierList(MySQLStatementParser::IdentifierListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAllOrPartitionNameList(MySQLStatementParser::AllOrPartitionNameListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTriggerEvent(MySQLStatementParser::TriggerEventContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTriggerOrder(MySQLStatementParser::TriggerOrderContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr(MySQLStatementParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalOperator(MySQLStatementParser::LogicalOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNotOperator(MySQLStatementParser::NotOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBooleanPrimary(MySQLStatementParser::BooleanPrimaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComparisonOperator(MySQLStatementParser::ComparisonOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPredicate(MySQLStatementParser::PredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBitExpr(MySQLStatementParser::BitExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleExpr(MySQLStatementParser::SimpleExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumnRef(MySQLStatementParser::ColumnRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumnRefList(MySQLStatementParser::ColumnRefListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionCall(MySQLStatementParser::FunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAggregationFunction(MySQLStatementParser::AggregationFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAggregationFunctionName(MySQLStatementParser::AggregationFunctionNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDistinct(MySQLStatementParser::DistinctContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOverClause(MySQLStatementParser::OverClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWindowSpecification(MySQLStatementParser::WindowSpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFrameClause(MySQLStatementParser::FrameClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFrameStart(MySQLStatementParser::FrameStartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFrameEnd(MySQLStatementParser::FrameEndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFrameBetween(MySQLStatementParser::FrameBetweenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSpecialFunction(MySQLStatementParser::SpecialFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCurrentUserFunction(MySQLStatementParser::CurrentUserFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGroupConcatFunction(MySQLStatementParser::GroupConcatFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWindowFunction(MySQLStatementParser::WindowFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWindowingClause(MySQLStatementParser::WindowingClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLeadLagInfo(MySQLStatementParser::LeadLagInfoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNullTreatment(MySQLStatementParser::NullTreatmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCheckType(MySQLStatementParser::CheckTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRepairType(MySQLStatementParser::RepairTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCastFunction(MySQLStatementParser::CastFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConvertFunction(MySQLStatementParser::ConvertFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCastType(MySQLStatementParser::CastTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNchar(MySQLStatementParser::NcharContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPositionFunction(MySQLStatementParser::PositionFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubstringFunction(MySQLStatementParser::SubstringFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExtractFunction(MySQLStatementParser::ExtractFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCharFunction(MySQLStatementParser::CharFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTrimFunction(MySQLStatementParser::TrimFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValuesFunction(MySQLStatementParser::ValuesFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWeightStringFunction(MySQLStatementParser::WeightStringFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLevelClause(MySQLStatementParser::LevelClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLevelInWeightListElement(MySQLStatementParser::LevelInWeightListElementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRegularFunction(MySQLStatementParser::RegularFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShorthandRegularFunction(MySQLStatementParser::ShorthandRegularFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompleteRegularFunction(MySQLStatementParser::CompleteRegularFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRegularFunctionName(MySQLStatementParser::RegularFunctionNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMatchExpression(MySQLStatementParser::MatchExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMatchSearchModifier(MySQLStatementParser::MatchSearchModifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCaseExpression(MySQLStatementParser::CaseExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDatetimeExpr(MySQLStatementParser::DatetimeExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinaryLogFileIndexNumber(MySQLStatementParser::BinaryLogFileIndexNumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCaseWhen(MySQLStatementParser::CaseWhenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCaseElse(MySQLStatementParser::CaseElseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntervalExpression(MySQLStatementParser::IntervalExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntervalValue(MySQLStatementParser::IntervalValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntervalUnit(MySQLStatementParser::IntervalUnitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOrderByClause(MySQLStatementParser::OrderByClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOrderByItem(MySQLStatementParser::OrderByItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDataType(MySQLStatementParser::DataTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStringList(MySQLStatementParser::StringListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTextString(MySQLStatementParser::TextStringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTextStringHash(MySQLStatementParser::TextStringHashContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFieldOptions(MySQLStatementParser::FieldOptionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrecision(MySQLStatementParser::PrecisionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeDatetimePrecision(MySQLStatementParser::TypeDatetimePrecisionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCharsetWithOptBinary(MySQLStatementParser::CharsetWithOptBinaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAscii(MySQLStatementParser::AsciiContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnicode(MySQLStatementParser::UnicodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCharset(MySQLStatementParser::CharsetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefaultCollation(MySQLStatementParser::DefaultCollationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefaultEncryption(MySQLStatementParser::DefaultEncryptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefaultCharset(MySQLStatementParser::DefaultCharsetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSignedLiteral(MySQLStatementParser::SignedLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNow(MySQLStatementParser::NowContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumnFormat(MySQLStatementParser::ColumnFormatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStorageMedia(MySQLStatementParser::StorageMediaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDirection(MySQLStatementParser::DirectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyOrIndex(MySQLStatementParser::KeyOrIndexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFieldLength(MySQLStatementParser::FieldLengthContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCharacterSet(MySQLStatementParser::CharacterSetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCollateClause(MySQLStatementParser::CollateClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFieldOrVarSpec(MySQLStatementParser::FieldOrVarSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNotExistClause(MySQLStatementParser::NotExistClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExistClause(MySQLStatementParser::ExistClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConnectionId(MySQLStatementParser::ConnectionIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLabelName(MySQLStatementParser::LabelNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCursorName(MySQLStatementParser::CursorNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditionName(MySQLStatementParser::ConditionNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnionOption(MySQLStatementParser::UnionOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNoWriteToBinLog(MySQLStatementParser::NoWriteToBinLogContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChannelOption(MySQLStatementParser::ChannelOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPreparedStatement(MySQLStatementParser::PreparedStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExecuteStatement(MySQLStatementParser::ExecuteStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExecuteVarList(MySQLStatementParser::ExecuteVarListContext *ctx) override {
    return visitChildren(ctx);
  }


};


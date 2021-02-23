
// Generated from MySQLStatementParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "MySQLStatementParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by MySQLStatementParser.
 */
class  MySQLStatementParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterExecute(MySQLStatementParser::ExecuteContext *ctx) = 0;
  virtual void exitExecute(MySQLStatementParser::ExecuteContext *ctx) = 0;

  virtual void enterInsert(MySQLStatementParser::InsertContext *ctx) = 0;
  virtual void exitInsert(MySQLStatementParser::InsertContext *ctx) = 0;

  virtual void enterInsertSpecification(MySQLStatementParser::InsertSpecificationContext *ctx) = 0;
  virtual void exitInsertSpecification(MySQLStatementParser::InsertSpecificationContext *ctx) = 0;

  virtual void enterInsertValuesClause(MySQLStatementParser::InsertValuesClauseContext *ctx) = 0;
  virtual void exitInsertValuesClause(MySQLStatementParser::InsertValuesClauseContext *ctx) = 0;

  virtual void enterFields(MySQLStatementParser::FieldsContext *ctx) = 0;
  virtual void exitFields(MySQLStatementParser::FieldsContext *ctx) = 0;

  virtual void enterInsertIdentifier(MySQLStatementParser::InsertIdentifierContext *ctx) = 0;
  virtual void exitInsertIdentifier(MySQLStatementParser::InsertIdentifierContext *ctx) = 0;

  virtual void enterTableWild(MySQLStatementParser::TableWildContext *ctx) = 0;
  virtual void exitTableWild(MySQLStatementParser::TableWildContext *ctx) = 0;

  virtual void enterInsertSelectClause(MySQLStatementParser::InsertSelectClauseContext *ctx) = 0;
  virtual void exitInsertSelectClause(MySQLStatementParser::InsertSelectClauseContext *ctx) = 0;

  virtual void enterOnDuplicateKeyClause(MySQLStatementParser::OnDuplicateKeyClauseContext *ctx) = 0;
  virtual void exitOnDuplicateKeyClause(MySQLStatementParser::OnDuplicateKeyClauseContext *ctx) = 0;

  virtual void enterValueReference(MySQLStatementParser::ValueReferenceContext *ctx) = 0;
  virtual void exitValueReference(MySQLStatementParser::ValueReferenceContext *ctx) = 0;

  virtual void enterDerivedColumns(MySQLStatementParser::DerivedColumnsContext *ctx) = 0;
  virtual void exitDerivedColumns(MySQLStatementParser::DerivedColumnsContext *ctx) = 0;

  virtual void enterReplace(MySQLStatementParser::ReplaceContext *ctx) = 0;
  virtual void exitReplace(MySQLStatementParser::ReplaceContext *ctx) = 0;

  virtual void enterReplaceSpecification(MySQLStatementParser::ReplaceSpecificationContext *ctx) = 0;
  virtual void exitReplaceSpecification(MySQLStatementParser::ReplaceSpecificationContext *ctx) = 0;

  virtual void enterReplaceValuesClause(MySQLStatementParser::ReplaceValuesClauseContext *ctx) = 0;
  virtual void exitReplaceValuesClause(MySQLStatementParser::ReplaceValuesClauseContext *ctx) = 0;

  virtual void enterReplaceSelectClause(MySQLStatementParser::ReplaceSelectClauseContext *ctx) = 0;
  virtual void exitReplaceSelectClause(MySQLStatementParser::ReplaceSelectClauseContext *ctx) = 0;

  virtual void enterUpdate(MySQLStatementParser::UpdateContext *ctx) = 0;
  virtual void exitUpdate(MySQLStatementParser::UpdateContext *ctx) = 0;

  virtual void enterUpdateSpecification_(MySQLStatementParser::UpdateSpecification_Context *ctx) = 0;
  virtual void exitUpdateSpecification_(MySQLStatementParser::UpdateSpecification_Context *ctx) = 0;

  virtual void enterAssignment(MySQLStatementParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(MySQLStatementParser::AssignmentContext *ctx) = 0;

  virtual void enterSetAssignmentsClause(MySQLStatementParser::SetAssignmentsClauseContext *ctx) = 0;
  virtual void exitSetAssignmentsClause(MySQLStatementParser::SetAssignmentsClauseContext *ctx) = 0;

  virtual void enterAssignmentValues(MySQLStatementParser::AssignmentValuesContext *ctx) = 0;
  virtual void exitAssignmentValues(MySQLStatementParser::AssignmentValuesContext *ctx) = 0;

  virtual void enterAssignmentValue(MySQLStatementParser::AssignmentValueContext *ctx) = 0;
  virtual void exitAssignmentValue(MySQLStatementParser::AssignmentValueContext *ctx) = 0;

  virtual void enterBlobValue(MySQLStatementParser::BlobValueContext *ctx) = 0;
  virtual void exitBlobValue(MySQLStatementParser::BlobValueContext *ctx) = 0;

  virtual void enterDelete_stmt(MySQLStatementParser::Delete_stmtContext *ctx) = 0;
  virtual void exitDelete_stmt(MySQLStatementParser::Delete_stmtContext *ctx) = 0;

  virtual void enterDeleteSpecification(MySQLStatementParser::DeleteSpecificationContext *ctx) = 0;
  virtual void exitDeleteSpecification(MySQLStatementParser::DeleteSpecificationContext *ctx) = 0;

  virtual void enterSingleTableClause(MySQLStatementParser::SingleTableClauseContext *ctx) = 0;
  virtual void exitSingleTableClause(MySQLStatementParser::SingleTableClauseContext *ctx) = 0;

  virtual void enterMultipleTablesClause(MySQLStatementParser::MultipleTablesClauseContext *ctx) = 0;
  virtual void exitMultipleTablesClause(MySQLStatementParser::MultipleTablesClauseContext *ctx) = 0;

  virtual void enterSelect(MySQLStatementParser::SelectContext *ctx) = 0;
  virtual void exitSelect(MySQLStatementParser::SelectContext *ctx) = 0;

  virtual void enterSelectWithInto(MySQLStatementParser::SelectWithIntoContext *ctx) = 0;
  virtual void exitSelectWithInto(MySQLStatementParser::SelectWithIntoContext *ctx) = 0;

  virtual void enterQueryExpression(MySQLStatementParser::QueryExpressionContext *ctx) = 0;
  virtual void exitQueryExpression(MySQLStatementParser::QueryExpressionContext *ctx) = 0;

  virtual void enterQueryExpressionBody(MySQLStatementParser::QueryExpressionBodyContext *ctx) = 0;
  virtual void exitQueryExpressionBody(MySQLStatementParser::QueryExpressionBodyContext *ctx) = 0;

  virtual void enterQueryExpressionParens(MySQLStatementParser::QueryExpressionParensContext *ctx) = 0;
  virtual void exitQueryExpressionParens(MySQLStatementParser::QueryExpressionParensContext *ctx) = 0;

  virtual void enterQueryPrimary(MySQLStatementParser::QueryPrimaryContext *ctx) = 0;
  virtual void exitQueryPrimary(MySQLStatementParser::QueryPrimaryContext *ctx) = 0;

  virtual void enterQuerySpecification(MySQLStatementParser::QuerySpecificationContext *ctx) = 0;
  virtual void exitQuerySpecification(MySQLStatementParser::QuerySpecificationContext *ctx) = 0;

  virtual void enterCall(MySQLStatementParser::CallContext *ctx) = 0;
  virtual void exitCall(MySQLStatementParser::CallContext *ctx) = 0;

  virtual void enterDoStatement(MySQLStatementParser::DoStatementContext *ctx) = 0;
  virtual void exitDoStatement(MySQLStatementParser::DoStatementContext *ctx) = 0;

  virtual void enterHandlerStatement(MySQLStatementParser::HandlerStatementContext *ctx) = 0;
  virtual void exitHandlerStatement(MySQLStatementParser::HandlerStatementContext *ctx) = 0;

  virtual void enterHandlerOpenStatement(MySQLStatementParser::HandlerOpenStatementContext *ctx) = 0;
  virtual void exitHandlerOpenStatement(MySQLStatementParser::HandlerOpenStatementContext *ctx) = 0;

  virtual void enterHandlerReadIndexStatement(MySQLStatementParser::HandlerReadIndexStatementContext *ctx) = 0;
  virtual void exitHandlerReadIndexStatement(MySQLStatementParser::HandlerReadIndexStatementContext *ctx) = 0;

  virtual void enterHandlerReadStatement(MySQLStatementParser::HandlerReadStatementContext *ctx) = 0;
  virtual void exitHandlerReadStatement(MySQLStatementParser::HandlerReadStatementContext *ctx) = 0;

  virtual void enterHandlerCloseStatement(MySQLStatementParser::HandlerCloseStatementContext *ctx) = 0;
  virtual void exitHandlerCloseStatement(MySQLStatementParser::HandlerCloseStatementContext *ctx) = 0;

  virtual void enterImportStatement(MySQLStatementParser::ImportStatementContext *ctx) = 0;
  virtual void exitImportStatement(MySQLStatementParser::ImportStatementContext *ctx) = 0;

  virtual void enterLoadStatement(MySQLStatementParser::LoadStatementContext *ctx) = 0;
  virtual void exitLoadStatement(MySQLStatementParser::LoadStatementContext *ctx) = 0;

  virtual void enterLoadDataStatement(MySQLStatementParser::LoadDataStatementContext *ctx) = 0;
  virtual void exitLoadDataStatement(MySQLStatementParser::LoadDataStatementContext *ctx) = 0;

  virtual void enterLoadXmlStatement(MySQLStatementParser::LoadXmlStatementContext *ctx) = 0;
  virtual void exitLoadXmlStatement(MySQLStatementParser::LoadXmlStatementContext *ctx) = 0;

  virtual void enterExplicitTable(MySQLStatementParser::ExplicitTableContext *ctx) = 0;
  virtual void exitExplicitTable(MySQLStatementParser::ExplicitTableContext *ctx) = 0;

  virtual void enterTableValueConstructor(MySQLStatementParser::TableValueConstructorContext *ctx) = 0;
  virtual void exitTableValueConstructor(MySQLStatementParser::TableValueConstructorContext *ctx) = 0;

  virtual void enterRowConstructorList(MySQLStatementParser::RowConstructorListContext *ctx) = 0;
  virtual void exitRowConstructorList(MySQLStatementParser::RowConstructorListContext *ctx) = 0;

  virtual void enterWithClause(MySQLStatementParser::WithClauseContext *ctx) = 0;
  virtual void exitWithClause(MySQLStatementParser::WithClauseContext *ctx) = 0;

  virtual void enterCteClause(MySQLStatementParser::CteClauseContext *ctx) = 0;
  virtual void exitCteClause(MySQLStatementParser::CteClauseContext *ctx) = 0;

  virtual void enterSelectSpecification(MySQLStatementParser::SelectSpecificationContext *ctx) = 0;
  virtual void exitSelectSpecification(MySQLStatementParser::SelectSpecificationContext *ctx) = 0;

  virtual void enterDuplicateSpecification(MySQLStatementParser::DuplicateSpecificationContext *ctx) = 0;
  virtual void exitDuplicateSpecification(MySQLStatementParser::DuplicateSpecificationContext *ctx) = 0;

  virtual void enterProjections(MySQLStatementParser::ProjectionsContext *ctx) = 0;
  virtual void exitProjections(MySQLStatementParser::ProjectionsContext *ctx) = 0;

  virtual void enterProjection(MySQLStatementParser::ProjectionContext *ctx) = 0;
  virtual void exitProjection(MySQLStatementParser::ProjectionContext *ctx) = 0;

  virtual void enterUnqualifiedShorthand(MySQLStatementParser::UnqualifiedShorthandContext *ctx) = 0;
  virtual void exitUnqualifiedShorthand(MySQLStatementParser::UnqualifiedShorthandContext *ctx) = 0;

  virtual void enterQualifiedShorthand(MySQLStatementParser::QualifiedShorthandContext *ctx) = 0;
  virtual void exitQualifiedShorthand(MySQLStatementParser::QualifiedShorthandContext *ctx) = 0;

  virtual void enterFromClause(MySQLStatementParser::FromClauseContext *ctx) = 0;
  virtual void exitFromClause(MySQLStatementParser::FromClauseContext *ctx) = 0;

  virtual void enterTableReferences(MySQLStatementParser::TableReferencesContext *ctx) = 0;
  virtual void exitTableReferences(MySQLStatementParser::TableReferencesContext *ctx) = 0;

  virtual void enterEscapedTableReference(MySQLStatementParser::EscapedTableReferenceContext *ctx) = 0;
  virtual void exitEscapedTableReference(MySQLStatementParser::EscapedTableReferenceContext *ctx) = 0;

  virtual void enterTableReference(MySQLStatementParser::TableReferenceContext *ctx) = 0;
  virtual void exitTableReference(MySQLStatementParser::TableReferenceContext *ctx) = 0;

  virtual void enterTableFactor(MySQLStatementParser::TableFactorContext *ctx) = 0;
  virtual void exitTableFactor(MySQLStatementParser::TableFactorContext *ctx) = 0;

  virtual void enterPartitionNames(MySQLStatementParser::PartitionNamesContext *ctx) = 0;
  virtual void exitPartitionNames(MySQLStatementParser::PartitionNamesContext *ctx) = 0;

  virtual void enterIndexHintList(MySQLStatementParser::IndexHintListContext *ctx) = 0;
  virtual void exitIndexHintList(MySQLStatementParser::IndexHintListContext *ctx) = 0;

  virtual void enterIndexHint(MySQLStatementParser::IndexHintContext *ctx) = 0;
  virtual void exitIndexHint(MySQLStatementParser::IndexHintContext *ctx) = 0;

  virtual void enterJoinedTable(MySQLStatementParser::JoinedTableContext *ctx) = 0;
  virtual void exitJoinedTable(MySQLStatementParser::JoinedTableContext *ctx) = 0;

  virtual void enterInnerJoinType(MySQLStatementParser::InnerJoinTypeContext *ctx) = 0;
  virtual void exitInnerJoinType(MySQLStatementParser::InnerJoinTypeContext *ctx) = 0;

  virtual void enterOuterJoinType(MySQLStatementParser::OuterJoinTypeContext *ctx) = 0;
  virtual void exitOuterJoinType(MySQLStatementParser::OuterJoinTypeContext *ctx) = 0;

  virtual void enterNaturalJoinType(MySQLStatementParser::NaturalJoinTypeContext *ctx) = 0;
  virtual void exitNaturalJoinType(MySQLStatementParser::NaturalJoinTypeContext *ctx) = 0;

  virtual void enterJoinSpecification(MySQLStatementParser::JoinSpecificationContext *ctx) = 0;
  virtual void exitJoinSpecification(MySQLStatementParser::JoinSpecificationContext *ctx) = 0;

  virtual void enterWhereClause(MySQLStatementParser::WhereClauseContext *ctx) = 0;
  virtual void exitWhereClause(MySQLStatementParser::WhereClauseContext *ctx) = 0;

  virtual void enterGroupByClause(MySQLStatementParser::GroupByClauseContext *ctx) = 0;
  virtual void exitGroupByClause(MySQLStatementParser::GroupByClauseContext *ctx) = 0;

  virtual void enterHavingClause(MySQLStatementParser::HavingClauseContext *ctx) = 0;
  virtual void exitHavingClause(MySQLStatementParser::HavingClauseContext *ctx) = 0;

  virtual void enterLimitClause(MySQLStatementParser::LimitClauseContext *ctx) = 0;
  virtual void exitLimitClause(MySQLStatementParser::LimitClauseContext *ctx) = 0;

  virtual void enterLimitRowCount(MySQLStatementParser::LimitRowCountContext *ctx) = 0;
  virtual void exitLimitRowCount(MySQLStatementParser::LimitRowCountContext *ctx) = 0;

  virtual void enterLimitOffset(MySQLStatementParser::LimitOffsetContext *ctx) = 0;
  virtual void exitLimitOffset(MySQLStatementParser::LimitOffsetContext *ctx) = 0;

  virtual void enterWindowClause(MySQLStatementParser::WindowClauseContext *ctx) = 0;
  virtual void exitWindowClause(MySQLStatementParser::WindowClauseContext *ctx) = 0;

  virtual void enterWindowItem(MySQLStatementParser::WindowItemContext *ctx) = 0;
  virtual void exitWindowItem(MySQLStatementParser::WindowItemContext *ctx) = 0;

  virtual void enterSubquery(MySQLStatementParser::SubqueryContext *ctx) = 0;
  virtual void exitSubquery(MySQLStatementParser::SubqueryContext *ctx) = 0;

  virtual void enterSelectLinesInto(MySQLStatementParser::SelectLinesIntoContext *ctx) = 0;
  virtual void exitSelectLinesInto(MySQLStatementParser::SelectLinesIntoContext *ctx) = 0;

  virtual void enterSelectFieldsInto(MySQLStatementParser::SelectFieldsIntoContext *ctx) = 0;
  virtual void exitSelectFieldsInto(MySQLStatementParser::SelectFieldsIntoContext *ctx) = 0;

  virtual void enterSelectIntoExpression(MySQLStatementParser::SelectIntoExpressionContext *ctx) = 0;
  virtual void exitSelectIntoExpression(MySQLStatementParser::SelectIntoExpressionContext *ctx) = 0;

  virtual void enterLockClause(MySQLStatementParser::LockClauseContext *ctx) = 0;
  virtual void exitLockClause(MySQLStatementParser::LockClauseContext *ctx) = 0;

  virtual void enterLockClauseList(MySQLStatementParser::LockClauseListContext *ctx) = 0;
  virtual void exitLockClauseList(MySQLStatementParser::LockClauseListContext *ctx) = 0;

  virtual void enterLockStrength(MySQLStatementParser::LockStrengthContext *ctx) = 0;
  virtual void exitLockStrength(MySQLStatementParser::LockStrengthContext *ctx) = 0;

  virtual void enterLockedRowAction(MySQLStatementParser::LockedRowActionContext *ctx) = 0;
  virtual void exitLockedRowAction(MySQLStatementParser::LockedRowActionContext *ctx) = 0;

  virtual void enterTableLockingList(MySQLStatementParser::TableLockingListContext *ctx) = 0;
  virtual void exitTableLockingList(MySQLStatementParser::TableLockingListContext *ctx) = 0;

  virtual void enterTableIdentOptWild(MySQLStatementParser::TableIdentOptWildContext *ctx) = 0;
  virtual void exitTableIdentOptWild(MySQLStatementParser::TableIdentOptWildContext *ctx) = 0;

  virtual void enterTableAliasRefList(MySQLStatementParser::TableAliasRefListContext *ctx) = 0;
  virtual void exitTableAliasRefList(MySQLStatementParser::TableAliasRefListContext *ctx) = 0;

  virtual void enterAlterStatement(MySQLStatementParser::AlterStatementContext *ctx) = 0;
  virtual void exitAlterStatement(MySQLStatementParser::AlterStatementContext *ctx) = 0;

  virtual void enterCreateTable(MySQLStatementParser::CreateTableContext *ctx) = 0;
  virtual void exitCreateTable(MySQLStatementParser::CreateTableContext *ctx) = 0;

  virtual void enterPartitionClause(MySQLStatementParser::PartitionClauseContext *ctx) = 0;
  virtual void exitPartitionClause(MySQLStatementParser::PartitionClauseContext *ctx) = 0;

  virtual void enterPartitionTypeDef(MySQLStatementParser::PartitionTypeDefContext *ctx) = 0;
  virtual void exitPartitionTypeDef(MySQLStatementParser::PartitionTypeDefContext *ctx) = 0;

  virtual void enterSubPartitions(MySQLStatementParser::SubPartitionsContext *ctx) = 0;
  virtual void exitSubPartitions(MySQLStatementParser::SubPartitionsContext *ctx) = 0;

  virtual void enterPartitionKeyAlgorithm(MySQLStatementParser::PartitionKeyAlgorithmContext *ctx) = 0;
  virtual void exitPartitionKeyAlgorithm(MySQLStatementParser::PartitionKeyAlgorithmContext *ctx) = 0;

  virtual void enterDuplicateAsQueryExpression(MySQLStatementParser::DuplicateAsQueryExpressionContext *ctx) = 0;
  virtual void exitDuplicateAsQueryExpression(MySQLStatementParser::DuplicateAsQueryExpressionContext *ctx) = 0;

  virtual void enterAlterTable(MySQLStatementParser::AlterTableContext *ctx) = 0;
  virtual void exitAlterTable(MySQLStatementParser::AlterTableContext *ctx) = 0;

  virtual void enterStandaloneAlterTableAction(MySQLStatementParser::StandaloneAlterTableActionContext *ctx) = 0;
  virtual void exitStandaloneAlterTableAction(MySQLStatementParser::StandaloneAlterTableActionContext *ctx) = 0;

  virtual void enterAlterTableActions(MySQLStatementParser::AlterTableActionsContext *ctx) = 0;
  virtual void exitAlterTableActions(MySQLStatementParser::AlterTableActionsContext *ctx) = 0;

  virtual void enterAlterTablePartitionOptions(MySQLStatementParser::AlterTablePartitionOptionsContext *ctx) = 0;
  virtual void exitAlterTablePartitionOptions(MySQLStatementParser::AlterTablePartitionOptionsContext *ctx) = 0;

  virtual void enterAlterCommandList(MySQLStatementParser::AlterCommandListContext *ctx) = 0;
  virtual void exitAlterCommandList(MySQLStatementParser::AlterCommandListContext *ctx) = 0;

  virtual void enterAlterList(MySQLStatementParser::AlterListContext *ctx) = 0;
  virtual void exitAlterList(MySQLStatementParser::AlterListContext *ctx) = 0;

  virtual void enterCreateTableOptionsSpaceSeparated(MySQLStatementParser::CreateTableOptionsSpaceSeparatedContext *ctx) = 0;
  virtual void exitCreateTableOptionsSpaceSeparated(MySQLStatementParser::CreateTableOptionsSpaceSeparatedContext *ctx) = 0;

  virtual void enterAddColumn(MySQLStatementParser::AddColumnContext *ctx) = 0;
  virtual void exitAddColumn(MySQLStatementParser::AddColumnContext *ctx) = 0;

  virtual void enterAddTableConstraint(MySQLStatementParser::AddTableConstraintContext *ctx) = 0;
  virtual void exitAddTableConstraint(MySQLStatementParser::AddTableConstraintContext *ctx) = 0;

  virtual void enterChangeColumn(MySQLStatementParser::ChangeColumnContext *ctx) = 0;
  virtual void exitChangeColumn(MySQLStatementParser::ChangeColumnContext *ctx) = 0;

  virtual void enterModifyColumn(MySQLStatementParser::ModifyColumnContext *ctx) = 0;
  virtual void exitModifyColumn(MySQLStatementParser::ModifyColumnContext *ctx) = 0;

  virtual void enterAlterTableDrop(MySQLStatementParser::AlterTableDropContext *ctx) = 0;
  virtual void exitAlterTableDrop(MySQLStatementParser::AlterTableDropContext *ctx) = 0;

  virtual void enterDisableKeys(MySQLStatementParser::DisableKeysContext *ctx) = 0;
  virtual void exitDisableKeys(MySQLStatementParser::DisableKeysContext *ctx) = 0;

  virtual void enterEnableKeys(MySQLStatementParser::EnableKeysContext *ctx) = 0;
  virtual void exitEnableKeys(MySQLStatementParser::EnableKeysContext *ctx) = 0;

  virtual void enterAlterColumn(MySQLStatementParser::AlterColumnContext *ctx) = 0;
  virtual void exitAlterColumn(MySQLStatementParser::AlterColumnContext *ctx) = 0;

  virtual void enterAlterIndex(MySQLStatementParser::AlterIndexContext *ctx) = 0;
  virtual void exitAlterIndex(MySQLStatementParser::AlterIndexContext *ctx) = 0;

  virtual void enterAlterCheck(MySQLStatementParser::AlterCheckContext *ctx) = 0;
  virtual void exitAlterCheck(MySQLStatementParser::AlterCheckContext *ctx) = 0;

  virtual void enterAlterConstraint(MySQLStatementParser::AlterConstraintContext *ctx) = 0;
  virtual void exitAlterConstraint(MySQLStatementParser::AlterConstraintContext *ctx) = 0;

  virtual void enterRenameColumn(MySQLStatementParser::RenameColumnContext *ctx) = 0;
  virtual void exitRenameColumn(MySQLStatementParser::RenameColumnContext *ctx) = 0;

  virtual void enterAlterRenameTable(MySQLStatementParser::AlterRenameTableContext *ctx) = 0;
  virtual void exitAlterRenameTable(MySQLStatementParser::AlterRenameTableContext *ctx) = 0;

  virtual void enterRenameIndex(MySQLStatementParser::RenameIndexContext *ctx) = 0;
  virtual void exitRenameIndex(MySQLStatementParser::RenameIndexContext *ctx) = 0;

  virtual void enterAlterConvert(MySQLStatementParser::AlterConvertContext *ctx) = 0;
  virtual void exitAlterConvert(MySQLStatementParser::AlterConvertContext *ctx) = 0;

  virtual void enterAlterTableForce(MySQLStatementParser::AlterTableForceContext *ctx) = 0;
  virtual void exitAlterTableForce(MySQLStatementParser::AlterTableForceContext *ctx) = 0;

  virtual void enterAlterTableOrder(MySQLStatementParser::AlterTableOrderContext *ctx) = 0;
  virtual void exitAlterTableOrder(MySQLStatementParser::AlterTableOrderContext *ctx) = 0;

  virtual void enterAlterOrderList(MySQLStatementParser::AlterOrderListContext *ctx) = 0;
  virtual void exitAlterOrderList(MySQLStatementParser::AlterOrderListContext *ctx) = 0;

  virtual void enterTableConstraintDef(MySQLStatementParser::TableConstraintDefContext *ctx) = 0;
  virtual void exitTableConstraintDef(MySQLStatementParser::TableConstraintDefContext *ctx) = 0;

  virtual void enterAlterCommandsModifierList(MySQLStatementParser::AlterCommandsModifierListContext *ctx) = 0;
  virtual void exitAlterCommandsModifierList(MySQLStatementParser::AlterCommandsModifierListContext *ctx) = 0;

  virtual void enterAlterCommandsModifier(MySQLStatementParser::AlterCommandsModifierContext *ctx) = 0;
  virtual void exitAlterCommandsModifier(MySQLStatementParser::AlterCommandsModifierContext *ctx) = 0;

  virtual void enterWithValidation(MySQLStatementParser::WithValidationContext *ctx) = 0;
  virtual void exitWithValidation(MySQLStatementParser::WithValidationContext *ctx) = 0;

  virtual void enterStandaloneAlterCommands(MySQLStatementParser::StandaloneAlterCommandsContext *ctx) = 0;
  virtual void exitStandaloneAlterCommands(MySQLStatementParser::StandaloneAlterCommandsContext *ctx) = 0;

  virtual void enterAlterPartition(MySQLStatementParser::AlterPartitionContext *ctx) = 0;
  virtual void exitAlterPartition(MySQLStatementParser::AlterPartitionContext *ctx) = 0;

  virtual void enterConstraintName(MySQLStatementParser::ConstraintNameContext *ctx) = 0;
  virtual void exitConstraintName(MySQLStatementParser::ConstraintNameContext *ctx) = 0;

  virtual void enterTableElementList(MySQLStatementParser::TableElementListContext *ctx) = 0;
  virtual void exitTableElementList(MySQLStatementParser::TableElementListContext *ctx) = 0;

  virtual void enterTableElement(MySQLStatementParser::TableElementContext *ctx) = 0;
  virtual void exitTableElement(MySQLStatementParser::TableElementContext *ctx) = 0;

  virtual void enterRestrict(MySQLStatementParser::RestrictContext *ctx) = 0;
  virtual void exitRestrict(MySQLStatementParser::RestrictContext *ctx) = 0;

  virtual void enterFulltextIndexOption(MySQLStatementParser::FulltextIndexOptionContext *ctx) = 0;
  virtual void exitFulltextIndexOption(MySQLStatementParser::FulltextIndexOptionContext *ctx) = 0;

  virtual void enterDropTable(MySQLStatementParser::DropTableContext *ctx) = 0;
  virtual void exitDropTable(MySQLStatementParser::DropTableContext *ctx) = 0;

  virtual void enterDropIndex(MySQLStatementParser::DropIndexContext *ctx) = 0;
  virtual void exitDropIndex(MySQLStatementParser::DropIndexContext *ctx) = 0;

  virtual void enterAlterAlgorithmOption(MySQLStatementParser::AlterAlgorithmOptionContext *ctx) = 0;
  virtual void exitAlterAlgorithmOption(MySQLStatementParser::AlterAlgorithmOptionContext *ctx) = 0;

  virtual void enterAlterLockOption(MySQLStatementParser::AlterLockOptionContext *ctx) = 0;
  virtual void exitAlterLockOption(MySQLStatementParser::AlterLockOptionContext *ctx) = 0;

  virtual void enterTruncateTable(MySQLStatementParser::TruncateTableContext *ctx) = 0;
  virtual void exitTruncateTable(MySQLStatementParser::TruncateTableContext *ctx) = 0;

  virtual void enterCreateIndex(MySQLStatementParser::CreateIndexContext *ctx) = 0;
  virtual void exitCreateIndex(MySQLStatementParser::CreateIndexContext *ctx) = 0;

  virtual void enterCreateDatabase(MySQLStatementParser::CreateDatabaseContext *ctx) = 0;
  virtual void exitCreateDatabase(MySQLStatementParser::CreateDatabaseContext *ctx) = 0;

  virtual void enterAlterDatabase(MySQLStatementParser::AlterDatabaseContext *ctx) = 0;
  virtual void exitAlterDatabase(MySQLStatementParser::AlterDatabaseContext *ctx) = 0;

  virtual void enterCreateDatabaseSpecification_(MySQLStatementParser::CreateDatabaseSpecification_Context *ctx) = 0;
  virtual void exitCreateDatabaseSpecification_(MySQLStatementParser::CreateDatabaseSpecification_Context *ctx) = 0;

  virtual void enterAlterDatabaseSpecification_(MySQLStatementParser::AlterDatabaseSpecification_Context *ctx) = 0;
  virtual void exitAlterDatabaseSpecification_(MySQLStatementParser::AlterDatabaseSpecification_Context *ctx) = 0;

  virtual void enterDropDatabase(MySQLStatementParser::DropDatabaseContext *ctx) = 0;
  virtual void exitDropDatabase(MySQLStatementParser::DropDatabaseContext *ctx) = 0;

  virtual void enterAlterInstance(MySQLStatementParser::AlterInstanceContext *ctx) = 0;
  virtual void exitAlterInstance(MySQLStatementParser::AlterInstanceContext *ctx) = 0;

  virtual void enterInstanceAction(MySQLStatementParser::InstanceActionContext *ctx) = 0;
  virtual void exitInstanceAction(MySQLStatementParser::InstanceActionContext *ctx) = 0;

  virtual void enterChannel(MySQLStatementParser::ChannelContext *ctx) = 0;
  virtual void exitChannel(MySQLStatementParser::ChannelContext *ctx) = 0;

  virtual void enterCreateEvent(MySQLStatementParser::CreateEventContext *ctx) = 0;
  virtual void exitCreateEvent(MySQLStatementParser::CreateEventContext *ctx) = 0;

  virtual void enterAlterEvent(MySQLStatementParser::AlterEventContext *ctx) = 0;
  virtual void exitAlterEvent(MySQLStatementParser::AlterEventContext *ctx) = 0;

  virtual void enterDropEvent(MySQLStatementParser::DropEventContext *ctx) = 0;
  virtual void exitDropEvent(MySQLStatementParser::DropEventContext *ctx) = 0;

  virtual void enterCreateFunction(MySQLStatementParser::CreateFunctionContext *ctx) = 0;
  virtual void exitCreateFunction(MySQLStatementParser::CreateFunctionContext *ctx) = 0;

  virtual void enterAlterFunction(MySQLStatementParser::AlterFunctionContext *ctx) = 0;
  virtual void exitAlterFunction(MySQLStatementParser::AlterFunctionContext *ctx) = 0;

  virtual void enterDropFunction(MySQLStatementParser::DropFunctionContext *ctx) = 0;
  virtual void exitDropFunction(MySQLStatementParser::DropFunctionContext *ctx) = 0;

  virtual void enterCreateProcedure(MySQLStatementParser::CreateProcedureContext *ctx) = 0;
  virtual void exitCreateProcedure(MySQLStatementParser::CreateProcedureContext *ctx) = 0;

  virtual void enterAlterProcedure(MySQLStatementParser::AlterProcedureContext *ctx) = 0;
  virtual void exitAlterProcedure(MySQLStatementParser::AlterProcedureContext *ctx) = 0;

  virtual void enterDropProcedure(MySQLStatementParser::DropProcedureContext *ctx) = 0;
  virtual void exitDropProcedure(MySQLStatementParser::DropProcedureContext *ctx) = 0;

  virtual void enterCreateServer(MySQLStatementParser::CreateServerContext *ctx) = 0;
  virtual void exitCreateServer(MySQLStatementParser::CreateServerContext *ctx) = 0;

  virtual void enterAlterServer(MySQLStatementParser::AlterServerContext *ctx) = 0;
  virtual void exitAlterServer(MySQLStatementParser::AlterServerContext *ctx) = 0;

  virtual void enterDropServer(MySQLStatementParser::DropServerContext *ctx) = 0;
  virtual void exitDropServer(MySQLStatementParser::DropServerContext *ctx) = 0;

  virtual void enterCreateView(MySQLStatementParser::CreateViewContext *ctx) = 0;
  virtual void exitCreateView(MySQLStatementParser::CreateViewContext *ctx) = 0;

  virtual void enterAlterView(MySQLStatementParser::AlterViewContext *ctx) = 0;
  virtual void exitAlterView(MySQLStatementParser::AlterViewContext *ctx) = 0;

  virtual void enterDropView(MySQLStatementParser::DropViewContext *ctx) = 0;
  virtual void exitDropView(MySQLStatementParser::DropViewContext *ctx) = 0;

  virtual void enterCreateTablespaceInnodb(MySQLStatementParser::CreateTablespaceInnodbContext *ctx) = 0;
  virtual void exitCreateTablespaceInnodb(MySQLStatementParser::CreateTablespaceInnodbContext *ctx) = 0;

  virtual void enterCreateTablespaceNdb(MySQLStatementParser::CreateTablespaceNdbContext *ctx) = 0;
  virtual void exitCreateTablespaceNdb(MySQLStatementParser::CreateTablespaceNdbContext *ctx) = 0;

  virtual void enterAlterTablespaceNdb(MySQLStatementParser::AlterTablespaceNdbContext *ctx) = 0;
  virtual void exitAlterTablespaceNdb(MySQLStatementParser::AlterTablespaceNdbContext *ctx) = 0;

  virtual void enterAlterTablespaceInnodb(MySQLStatementParser::AlterTablespaceInnodbContext *ctx) = 0;
  virtual void exitAlterTablespaceInnodb(MySQLStatementParser::AlterTablespaceInnodbContext *ctx) = 0;

  virtual void enterDropTablespace(MySQLStatementParser::DropTablespaceContext *ctx) = 0;
  virtual void exitDropTablespace(MySQLStatementParser::DropTablespaceContext *ctx) = 0;

  virtual void enterCreateLogfileGroup(MySQLStatementParser::CreateLogfileGroupContext *ctx) = 0;
  virtual void exitCreateLogfileGroup(MySQLStatementParser::CreateLogfileGroupContext *ctx) = 0;

  virtual void enterAlterLogfileGroup(MySQLStatementParser::AlterLogfileGroupContext *ctx) = 0;
  virtual void exitAlterLogfileGroup(MySQLStatementParser::AlterLogfileGroupContext *ctx) = 0;

  virtual void enterDropLogfileGroup(MySQLStatementParser::DropLogfileGroupContext *ctx) = 0;
  virtual void exitDropLogfileGroup(MySQLStatementParser::DropLogfileGroupContext *ctx) = 0;

  virtual void enterCreateTrigger(MySQLStatementParser::CreateTriggerContext *ctx) = 0;
  virtual void exitCreateTrigger(MySQLStatementParser::CreateTriggerContext *ctx) = 0;

  virtual void enterDropTrigger(MySQLStatementParser::DropTriggerContext *ctx) = 0;
  virtual void exitDropTrigger(MySQLStatementParser::DropTriggerContext *ctx) = 0;

  virtual void enterRenameTable(MySQLStatementParser::RenameTableContext *ctx) = 0;
  virtual void exitRenameTable(MySQLStatementParser::RenameTableContext *ctx) = 0;

  virtual void enterCreateDefinitionClause(MySQLStatementParser::CreateDefinitionClauseContext *ctx) = 0;
  virtual void exitCreateDefinitionClause(MySQLStatementParser::CreateDefinitionClauseContext *ctx) = 0;

  virtual void enterColumnDefinition(MySQLStatementParser::ColumnDefinitionContext *ctx) = 0;
  virtual void exitColumnDefinition(MySQLStatementParser::ColumnDefinitionContext *ctx) = 0;

  virtual void enterFieldDefinition(MySQLStatementParser::FieldDefinitionContext *ctx) = 0;
  virtual void exitFieldDefinition(MySQLStatementParser::FieldDefinitionContext *ctx) = 0;

  virtual void enterColumnAttribute(MySQLStatementParser::ColumnAttributeContext *ctx) = 0;
  virtual void exitColumnAttribute(MySQLStatementParser::ColumnAttributeContext *ctx) = 0;

  virtual void enterCheckConstraint(MySQLStatementParser::CheckConstraintContext *ctx) = 0;
  virtual void exitCheckConstraint(MySQLStatementParser::CheckConstraintContext *ctx) = 0;

  virtual void enterConstraintEnforcement(MySQLStatementParser::ConstraintEnforcementContext *ctx) = 0;
  virtual void exitConstraintEnforcement(MySQLStatementParser::ConstraintEnforcementContext *ctx) = 0;

  virtual void enterGeneratedOption(MySQLStatementParser::GeneratedOptionContext *ctx) = 0;
  virtual void exitGeneratedOption(MySQLStatementParser::GeneratedOptionContext *ctx) = 0;

  virtual void enterReferenceDefinition(MySQLStatementParser::ReferenceDefinitionContext *ctx) = 0;
  virtual void exitReferenceDefinition(MySQLStatementParser::ReferenceDefinitionContext *ctx) = 0;

  virtual void enterOnUpdateDelete(MySQLStatementParser::OnUpdateDeleteContext *ctx) = 0;
  virtual void exitOnUpdateDelete(MySQLStatementParser::OnUpdateDeleteContext *ctx) = 0;

  virtual void enterReferenceOption(MySQLStatementParser::ReferenceOptionContext *ctx) = 0;
  virtual void exitReferenceOption(MySQLStatementParser::ReferenceOptionContext *ctx) = 0;

  virtual void enterIndexNameAndType(MySQLStatementParser::IndexNameAndTypeContext *ctx) = 0;
  virtual void exitIndexNameAndType(MySQLStatementParser::IndexNameAndTypeContext *ctx) = 0;

  virtual void enterIndexType(MySQLStatementParser::IndexTypeContext *ctx) = 0;
  virtual void exitIndexType(MySQLStatementParser::IndexTypeContext *ctx) = 0;

  virtual void enterIndexTypeClause(MySQLStatementParser::IndexTypeClauseContext *ctx) = 0;
  virtual void exitIndexTypeClause(MySQLStatementParser::IndexTypeClauseContext *ctx) = 0;

  virtual void enterKeyParts(MySQLStatementParser::KeyPartsContext *ctx) = 0;
  virtual void exitKeyParts(MySQLStatementParser::KeyPartsContext *ctx) = 0;

  virtual void enterKeyPart(MySQLStatementParser::KeyPartContext *ctx) = 0;
  virtual void exitKeyPart(MySQLStatementParser::KeyPartContext *ctx) = 0;

  virtual void enterKeyPartWithExpression(MySQLStatementParser::KeyPartWithExpressionContext *ctx) = 0;
  virtual void exitKeyPartWithExpression(MySQLStatementParser::KeyPartWithExpressionContext *ctx) = 0;

  virtual void enterKeyListWithExpression(MySQLStatementParser::KeyListWithExpressionContext *ctx) = 0;
  virtual void exitKeyListWithExpression(MySQLStatementParser::KeyListWithExpressionContext *ctx) = 0;

  virtual void enterIndexOption(MySQLStatementParser::IndexOptionContext *ctx) = 0;
  virtual void exitIndexOption(MySQLStatementParser::IndexOptionContext *ctx) = 0;

  virtual void enterCommonIndexOption(MySQLStatementParser::CommonIndexOptionContext *ctx) = 0;
  virtual void exitCommonIndexOption(MySQLStatementParser::CommonIndexOptionContext *ctx) = 0;

  virtual void enterVisibility(MySQLStatementParser::VisibilityContext *ctx) = 0;
  virtual void exitVisibility(MySQLStatementParser::VisibilityContext *ctx) = 0;

  virtual void enterCreateLikeClause(MySQLStatementParser::CreateLikeClauseContext *ctx) = 0;
  virtual void exitCreateLikeClause(MySQLStatementParser::CreateLikeClauseContext *ctx) = 0;

  virtual void enterCreateIndexSpecification(MySQLStatementParser::CreateIndexSpecificationContext *ctx) = 0;
  virtual void exitCreateIndexSpecification(MySQLStatementParser::CreateIndexSpecificationContext *ctx) = 0;

  virtual void enterCreateTableOptions(MySQLStatementParser::CreateTableOptionsContext *ctx) = 0;
  virtual void exitCreateTableOptions(MySQLStatementParser::CreateTableOptionsContext *ctx) = 0;

  virtual void enterCreateTableOption(MySQLStatementParser::CreateTableOptionContext *ctx) = 0;
  virtual void exitCreateTableOption(MySQLStatementParser::CreateTableOptionContext *ctx) = 0;

  virtual void enterCreateSRSStatement(MySQLStatementParser::CreateSRSStatementContext *ctx) = 0;
  virtual void exitCreateSRSStatement(MySQLStatementParser::CreateSRSStatementContext *ctx) = 0;

  virtual void enterDropSRSStatement(MySQLStatementParser::DropSRSStatementContext *ctx) = 0;
  virtual void exitDropSRSStatement(MySQLStatementParser::DropSRSStatementContext *ctx) = 0;

  virtual void enterSrsAttribute(MySQLStatementParser::SrsAttributeContext *ctx) = 0;
  virtual void exitSrsAttribute(MySQLStatementParser::SrsAttributeContext *ctx) = 0;

  virtual void enterPlace(MySQLStatementParser::PlaceContext *ctx) = 0;
  virtual void exitPlace(MySQLStatementParser::PlaceContext *ctx) = 0;

  virtual void enterPartitionDefinitions(MySQLStatementParser::PartitionDefinitionsContext *ctx) = 0;
  virtual void exitPartitionDefinitions(MySQLStatementParser::PartitionDefinitionsContext *ctx) = 0;

  virtual void enterPartitionDefinition(MySQLStatementParser::PartitionDefinitionContext *ctx) = 0;
  virtual void exitPartitionDefinition(MySQLStatementParser::PartitionDefinitionContext *ctx) = 0;

  virtual void enterPartitionLessThanValue(MySQLStatementParser::PartitionLessThanValueContext *ctx) = 0;
  virtual void exitPartitionLessThanValue(MySQLStatementParser::PartitionLessThanValueContext *ctx) = 0;

  virtual void enterPartitionValueList(MySQLStatementParser::PartitionValueListContext *ctx) = 0;
  virtual void exitPartitionValueList(MySQLStatementParser::PartitionValueListContext *ctx) = 0;

  virtual void enterPartitionDefinitionOption(MySQLStatementParser::PartitionDefinitionOptionContext *ctx) = 0;
  virtual void exitPartitionDefinitionOption(MySQLStatementParser::PartitionDefinitionOptionContext *ctx) = 0;

  virtual void enterSubpartitionDefinition(MySQLStatementParser::SubpartitionDefinitionContext *ctx) = 0;
  virtual void exitSubpartitionDefinition(MySQLStatementParser::SubpartitionDefinitionContext *ctx) = 0;

  virtual void enterOwnerStatement(MySQLStatementParser::OwnerStatementContext *ctx) = 0;
  virtual void exitOwnerStatement(MySQLStatementParser::OwnerStatementContext *ctx) = 0;

  virtual void enterScheduleExpression(MySQLStatementParser::ScheduleExpressionContext *ctx) = 0;
  virtual void exitScheduleExpression(MySQLStatementParser::ScheduleExpressionContext *ctx) = 0;

  virtual void enterTimestampValue(MySQLStatementParser::TimestampValueContext *ctx) = 0;
  virtual void exitTimestampValue(MySQLStatementParser::TimestampValueContext *ctx) = 0;

  virtual void enterRoutineBody(MySQLStatementParser::RoutineBodyContext *ctx) = 0;
  virtual void exitRoutineBody(MySQLStatementParser::RoutineBodyContext *ctx) = 0;

  virtual void enterServerOption(MySQLStatementParser::ServerOptionContext *ctx) = 0;
  virtual void exitServerOption(MySQLStatementParser::ServerOptionContext *ctx) = 0;

  virtual void enterRoutineOption(MySQLStatementParser::RoutineOptionContext *ctx) = 0;
  virtual void exitRoutineOption(MySQLStatementParser::RoutineOptionContext *ctx) = 0;

  virtual void enterProcedureParameter(MySQLStatementParser::ProcedureParameterContext *ctx) = 0;
  virtual void exitProcedureParameter(MySQLStatementParser::ProcedureParameterContext *ctx) = 0;

  virtual void enterFileSizeLiteral(MySQLStatementParser::FileSizeLiteralContext *ctx) = 0;
  virtual void exitFileSizeLiteral(MySQLStatementParser::FileSizeLiteralContext *ctx) = 0;

  virtual void enterSimpleStatement(MySQLStatementParser::SimpleStatementContext *ctx) = 0;
  virtual void exitSimpleStatement(MySQLStatementParser::SimpleStatementContext *ctx) = 0;

  virtual void enterCompoundStatement(MySQLStatementParser::CompoundStatementContext *ctx) = 0;
  virtual void exitCompoundStatement(MySQLStatementParser::CompoundStatementContext *ctx) = 0;

  virtual void enterValidStatement(MySQLStatementParser::ValidStatementContext *ctx) = 0;
  virtual void exitValidStatement(MySQLStatementParser::ValidStatementContext *ctx) = 0;

  virtual void enterBeginStatement(MySQLStatementParser::BeginStatementContext *ctx) = 0;
  virtual void exitBeginStatement(MySQLStatementParser::BeginStatementContext *ctx) = 0;

  virtual void enterDeclareStatement(MySQLStatementParser::DeclareStatementContext *ctx) = 0;
  virtual void exitDeclareStatement(MySQLStatementParser::DeclareStatementContext *ctx) = 0;

  virtual void enterFlowControlStatement(MySQLStatementParser::FlowControlStatementContext *ctx) = 0;
  virtual void exitFlowControlStatement(MySQLStatementParser::FlowControlStatementContext *ctx) = 0;

  virtual void enterCaseStatement(MySQLStatementParser::CaseStatementContext *ctx) = 0;
  virtual void exitCaseStatement(MySQLStatementParser::CaseStatementContext *ctx) = 0;

  virtual void enterIfStatement(MySQLStatementParser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(MySQLStatementParser::IfStatementContext *ctx) = 0;

  virtual void enterIterateStatement(MySQLStatementParser::IterateStatementContext *ctx) = 0;
  virtual void exitIterateStatement(MySQLStatementParser::IterateStatementContext *ctx) = 0;

  virtual void enterLeaveStatement(MySQLStatementParser::LeaveStatementContext *ctx) = 0;
  virtual void exitLeaveStatement(MySQLStatementParser::LeaveStatementContext *ctx) = 0;

  virtual void enterLoopStatement(MySQLStatementParser::LoopStatementContext *ctx) = 0;
  virtual void exitLoopStatement(MySQLStatementParser::LoopStatementContext *ctx) = 0;

  virtual void enterRepeatStatement(MySQLStatementParser::RepeatStatementContext *ctx) = 0;
  virtual void exitRepeatStatement(MySQLStatementParser::RepeatStatementContext *ctx) = 0;

  virtual void enterReturnStatement(MySQLStatementParser::ReturnStatementContext *ctx) = 0;
  virtual void exitReturnStatement(MySQLStatementParser::ReturnStatementContext *ctx) = 0;

  virtual void enterWhileStatement(MySQLStatementParser::WhileStatementContext *ctx) = 0;
  virtual void exitWhileStatement(MySQLStatementParser::WhileStatementContext *ctx) = 0;

  virtual void enterCursorStatement(MySQLStatementParser::CursorStatementContext *ctx) = 0;
  virtual void exitCursorStatement(MySQLStatementParser::CursorStatementContext *ctx) = 0;

  virtual void enterCursorCloseStatement(MySQLStatementParser::CursorCloseStatementContext *ctx) = 0;
  virtual void exitCursorCloseStatement(MySQLStatementParser::CursorCloseStatementContext *ctx) = 0;

  virtual void enterCursorDeclareStatement(MySQLStatementParser::CursorDeclareStatementContext *ctx) = 0;
  virtual void exitCursorDeclareStatement(MySQLStatementParser::CursorDeclareStatementContext *ctx) = 0;

  virtual void enterCursorFetchStatement(MySQLStatementParser::CursorFetchStatementContext *ctx) = 0;
  virtual void exitCursorFetchStatement(MySQLStatementParser::CursorFetchStatementContext *ctx) = 0;

  virtual void enterCursorOpenStatement(MySQLStatementParser::CursorOpenStatementContext *ctx) = 0;
  virtual void exitCursorOpenStatement(MySQLStatementParser::CursorOpenStatementContext *ctx) = 0;

  virtual void enterConditionHandlingStatement(MySQLStatementParser::ConditionHandlingStatementContext *ctx) = 0;
  virtual void exitConditionHandlingStatement(MySQLStatementParser::ConditionHandlingStatementContext *ctx) = 0;

  virtual void enterDeclareConditionStatement(MySQLStatementParser::DeclareConditionStatementContext *ctx) = 0;
  virtual void exitDeclareConditionStatement(MySQLStatementParser::DeclareConditionStatementContext *ctx) = 0;

  virtual void enterDeclareHandlerStatement(MySQLStatementParser::DeclareHandlerStatementContext *ctx) = 0;
  virtual void exitDeclareHandlerStatement(MySQLStatementParser::DeclareHandlerStatementContext *ctx) = 0;

  virtual void enterGetDiagnosticsStatement(MySQLStatementParser::GetDiagnosticsStatementContext *ctx) = 0;
  virtual void exitGetDiagnosticsStatement(MySQLStatementParser::GetDiagnosticsStatementContext *ctx) = 0;

  virtual void enterStatementInformationItem(MySQLStatementParser::StatementInformationItemContext *ctx) = 0;
  virtual void exitStatementInformationItem(MySQLStatementParser::StatementInformationItemContext *ctx) = 0;

  virtual void enterConditionInformationItem(MySQLStatementParser::ConditionInformationItemContext *ctx) = 0;
  virtual void exitConditionInformationItem(MySQLStatementParser::ConditionInformationItemContext *ctx) = 0;

  virtual void enterConditionNumber(MySQLStatementParser::ConditionNumberContext *ctx) = 0;
  virtual void exitConditionNumber(MySQLStatementParser::ConditionNumberContext *ctx) = 0;

  virtual void enterStatementInformationItemName(MySQLStatementParser::StatementInformationItemNameContext *ctx) = 0;
  virtual void exitStatementInformationItemName(MySQLStatementParser::StatementInformationItemNameContext *ctx) = 0;

  virtual void enterConditionInformationItemName(MySQLStatementParser::ConditionInformationItemNameContext *ctx) = 0;
  virtual void exitConditionInformationItemName(MySQLStatementParser::ConditionInformationItemNameContext *ctx) = 0;

  virtual void enterHandlerAction(MySQLStatementParser::HandlerActionContext *ctx) = 0;
  virtual void exitHandlerAction(MySQLStatementParser::HandlerActionContext *ctx) = 0;

  virtual void enterConditionValue(MySQLStatementParser::ConditionValueContext *ctx) = 0;
  virtual void exitConditionValue(MySQLStatementParser::ConditionValueContext *ctx) = 0;

  virtual void enterResignalStatement(MySQLStatementParser::ResignalStatementContext *ctx) = 0;
  virtual void exitResignalStatement(MySQLStatementParser::ResignalStatementContext *ctx) = 0;

  virtual void enterSignalStatement(MySQLStatementParser::SignalStatementContext *ctx) = 0;
  virtual void exitSignalStatement(MySQLStatementParser::SignalStatementContext *ctx) = 0;

  virtual void enterSignalInformationItem(MySQLStatementParser::SignalInformationItemContext *ctx) = 0;
  virtual void exitSignalInformationItem(MySQLStatementParser::SignalInformationItemContext *ctx) = 0;

  virtual void enterSetTransaction(MySQLStatementParser::SetTransactionContext *ctx) = 0;
  virtual void exitSetTransaction(MySQLStatementParser::SetTransactionContext *ctx) = 0;

  virtual void enterSetAutoCommit(MySQLStatementParser::SetAutoCommitContext *ctx) = 0;
  virtual void exitSetAutoCommit(MySQLStatementParser::SetAutoCommitContext *ctx) = 0;

  virtual void enterAutoCommitValue(MySQLStatementParser::AutoCommitValueContext *ctx) = 0;
  virtual void exitAutoCommitValue(MySQLStatementParser::AutoCommitValueContext *ctx) = 0;

  virtual void enterBeginTransaction(MySQLStatementParser::BeginTransactionContext *ctx) = 0;
  virtual void exitBeginTransaction(MySQLStatementParser::BeginTransactionContext *ctx) = 0;

  virtual void enterCommit(MySQLStatementParser::CommitContext *ctx) = 0;
  virtual void exitCommit(MySQLStatementParser::CommitContext *ctx) = 0;

  virtual void enterRollback(MySQLStatementParser::RollbackContext *ctx) = 0;
  virtual void exitRollback(MySQLStatementParser::RollbackContext *ctx) = 0;

  virtual void enterSavepoint(MySQLStatementParser::SavepointContext *ctx) = 0;
  virtual void exitSavepoint(MySQLStatementParser::SavepointContext *ctx) = 0;

  virtual void enterBegin(MySQLStatementParser::BeginContext *ctx) = 0;
  virtual void exitBegin(MySQLStatementParser::BeginContext *ctx) = 0;

  virtual void enterLock(MySQLStatementParser::LockContext *ctx) = 0;
  virtual void exitLock(MySQLStatementParser::LockContext *ctx) = 0;

  virtual void enterUnlock(MySQLStatementParser::UnlockContext *ctx) = 0;
  virtual void exitUnlock(MySQLStatementParser::UnlockContext *ctx) = 0;

  virtual void enterReleaseSavepoint(MySQLStatementParser::ReleaseSavepointContext *ctx) = 0;
  virtual void exitReleaseSavepoint(MySQLStatementParser::ReleaseSavepointContext *ctx) = 0;

  virtual void enterXa(MySQLStatementParser::XaContext *ctx) = 0;
  virtual void exitXa(MySQLStatementParser::XaContext *ctx) = 0;

  virtual void enterTransactionCharacteristic(MySQLStatementParser::TransactionCharacteristicContext *ctx) = 0;
  virtual void exitTransactionCharacteristic(MySQLStatementParser::TransactionCharacteristicContext *ctx) = 0;

  virtual void enterLevel(MySQLStatementParser::LevelContext *ctx) = 0;
  virtual void exitLevel(MySQLStatementParser::LevelContext *ctx) = 0;

  virtual void enterAccessMode(MySQLStatementParser::AccessModeContext *ctx) = 0;
  virtual void exitAccessMode(MySQLStatementParser::AccessModeContext *ctx) = 0;

  virtual void enterOptionChain(MySQLStatementParser::OptionChainContext *ctx) = 0;
  virtual void exitOptionChain(MySQLStatementParser::OptionChainContext *ctx) = 0;

  virtual void enterOptionRelease(MySQLStatementParser::OptionReleaseContext *ctx) = 0;
  virtual void exitOptionRelease(MySQLStatementParser::OptionReleaseContext *ctx) = 0;

  virtual void enterTableLock(MySQLStatementParser::TableLockContext *ctx) = 0;
  virtual void exitTableLock(MySQLStatementParser::TableLockContext *ctx) = 0;

  virtual void enterLockOption(MySQLStatementParser::LockOptionContext *ctx) = 0;
  virtual void exitLockOption(MySQLStatementParser::LockOptionContext *ctx) = 0;

  virtual void enterXid(MySQLStatementParser::XidContext *ctx) = 0;
  virtual void exitXid(MySQLStatementParser::XidContext *ctx) = 0;

  virtual void enterGrant(MySQLStatementParser::GrantContext *ctx) = 0;
  virtual void exitGrant(MySQLStatementParser::GrantContext *ctx) = 0;

  virtual void enterRevoke(MySQLStatementParser::RevokeContext *ctx) = 0;
  virtual void exitRevoke(MySQLStatementParser::RevokeContext *ctx) = 0;

  virtual void enterProxyClause(MySQLStatementParser::ProxyClauseContext *ctx) = 0;
  virtual void exitProxyClause(MySQLStatementParser::ProxyClauseContext *ctx) = 0;

  virtual void enterPrivilegeClause(MySQLStatementParser::PrivilegeClauseContext *ctx) = 0;
  virtual void exitPrivilegeClause(MySQLStatementParser::PrivilegeClauseContext *ctx) = 0;

  virtual void enterRoleClause(MySQLStatementParser::RoleClauseContext *ctx) = 0;
  virtual void exitRoleClause(MySQLStatementParser::RoleClauseContext *ctx) = 0;

  virtual void enterAllClause(MySQLStatementParser::AllClauseContext *ctx) = 0;
  virtual void exitAllClause(MySQLStatementParser::AllClauseContext *ctx) = 0;

  virtual void enterPrivileges(MySQLStatementParser::PrivilegesContext *ctx) = 0;
  virtual void exitPrivileges(MySQLStatementParser::PrivilegesContext *ctx) = 0;

  virtual void enterPrivilege(MySQLStatementParser::PrivilegeContext *ctx) = 0;
  virtual void exitPrivilege(MySQLStatementParser::PrivilegeContext *ctx) = 0;

  virtual void enterPrivilegeType(MySQLStatementParser::PrivilegeTypeContext *ctx) = 0;
  virtual void exitPrivilegeType(MySQLStatementParser::PrivilegeTypeContext *ctx) = 0;

  virtual void enterOnObjectClause(MySQLStatementParser::OnObjectClauseContext *ctx) = 0;
  virtual void exitOnObjectClause(MySQLStatementParser::OnObjectClauseContext *ctx) = 0;

  virtual void enterObjectType(MySQLStatementParser::ObjectTypeContext *ctx) = 0;
  virtual void exitObjectType(MySQLStatementParser::ObjectTypeContext *ctx) = 0;

  virtual void enterPrivilegeLevel(MySQLStatementParser::PrivilegeLevelContext *ctx) = 0;
  virtual void exitPrivilegeLevel(MySQLStatementParser::PrivilegeLevelContext *ctx) = 0;

  virtual void enterCreateUser(MySQLStatementParser::CreateUserContext *ctx) = 0;
  virtual void exitCreateUser(MySQLStatementParser::CreateUserContext *ctx) = 0;

  virtual void enterDefaultRoleClause(MySQLStatementParser::DefaultRoleClauseContext *ctx) = 0;
  virtual void exitDefaultRoleClause(MySQLStatementParser::DefaultRoleClauseContext *ctx) = 0;

  virtual void enterRequireClause(MySQLStatementParser::RequireClauseContext *ctx) = 0;
  virtual void exitRequireClause(MySQLStatementParser::RequireClauseContext *ctx) = 0;

  virtual void enterConnectOptions(MySQLStatementParser::ConnectOptionsContext *ctx) = 0;
  virtual void exitConnectOptions(MySQLStatementParser::ConnectOptionsContext *ctx) = 0;

  virtual void enterAccountLockPasswordExpireOptions(MySQLStatementParser::AccountLockPasswordExpireOptionsContext *ctx) = 0;
  virtual void exitAccountLockPasswordExpireOptions(MySQLStatementParser::AccountLockPasswordExpireOptionsContext *ctx) = 0;

  virtual void enterAccountLockPasswordExpireOption(MySQLStatementParser::AccountLockPasswordExpireOptionContext *ctx) = 0;
  virtual void exitAccountLockPasswordExpireOption(MySQLStatementParser::AccountLockPasswordExpireOptionContext *ctx) = 0;

  virtual void enterAlterUser(MySQLStatementParser::AlterUserContext *ctx) = 0;
  virtual void exitAlterUser(MySQLStatementParser::AlterUserContext *ctx) = 0;

  virtual void enterAlterUserEntry(MySQLStatementParser::AlterUserEntryContext *ctx) = 0;
  virtual void exitAlterUserEntry(MySQLStatementParser::AlterUserEntryContext *ctx) = 0;

  virtual void enterAlterUserList(MySQLStatementParser::AlterUserListContext *ctx) = 0;
  virtual void exitAlterUserList(MySQLStatementParser::AlterUserListContext *ctx) = 0;

  virtual void enterDropUser(MySQLStatementParser::DropUserContext *ctx) = 0;
  virtual void exitDropUser(MySQLStatementParser::DropUserContext *ctx) = 0;

  virtual void enterCreateRole(MySQLStatementParser::CreateRoleContext *ctx) = 0;
  virtual void exitCreateRole(MySQLStatementParser::CreateRoleContext *ctx) = 0;

  virtual void enterDropRole(MySQLStatementParser::DropRoleContext *ctx) = 0;
  virtual void exitDropRole(MySQLStatementParser::DropRoleContext *ctx) = 0;

  virtual void enterRenameUser(MySQLStatementParser::RenameUserContext *ctx) = 0;
  virtual void exitRenameUser(MySQLStatementParser::RenameUserContext *ctx) = 0;

  virtual void enterSetDefaultRole(MySQLStatementParser::SetDefaultRoleContext *ctx) = 0;
  virtual void exitSetDefaultRole(MySQLStatementParser::SetDefaultRoleContext *ctx) = 0;

  virtual void enterSetRole(MySQLStatementParser::SetRoleContext *ctx) = 0;
  virtual void exitSetRole(MySQLStatementParser::SetRoleContext *ctx) = 0;

  virtual void enterSetPassword(MySQLStatementParser::SetPasswordContext *ctx) = 0;
  virtual void exitSetPassword(MySQLStatementParser::SetPasswordContext *ctx) = 0;

  virtual void enterAuthOption(MySQLStatementParser::AuthOptionContext *ctx) = 0;
  virtual void exitAuthOption(MySQLStatementParser::AuthOptionContext *ctx) = 0;

  virtual void enterWithGrantOption(MySQLStatementParser::WithGrantOptionContext *ctx) = 0;
  virtual void exitWithGrantOption(MySQLStatementParser::WithGrantOptionContext *ctx) = 0;

  virtual void enterUserOrRoles(MySQLStatementParser::UserOrRolesContext *ctx) = 0;
  virtual void exitUserOrRoles(MySQLStatementParser::UserOrRolesContext *ctx) = 0;

  virtual void enterRoles(MySQLStatementParser::RolesContext *ctx) = 0;
  virtual void exitRoles(MySQLStatementParser::RolesContext *ctx) = 0;

  virtual void enterGrantOption(MySQLStatementParser::GrantOptionContext *ctx) = 0;
  virtual void exitGrantOption(MySQLStatementParser::GrantOptionContext *ctx) = 0;

  virtual void enterUserAuthOption(MySQLStatementParser::UserAuthOptionContext *ctx) = 0;
  virtual void exitUserAuthOption(MySQLStatementParser::UserAuthOptionContext *ctx) = 0;

  virtual void enterIdentifiedBy(MySQLStatementParser::IdentifiedByContext *ctx) = 0;
  virtual void exitIdentifiedBy(MySQLStatementParser::IdentifiedByContext *ctx) = 0;

  virtual void enterIdentifiedWith(MySQLStatementParser::IdentifiedWithContext *ctx) = 0;
  virtual void exitIdentifiedWith(MySQLStatementParser::IdentifiedWithContext *ctx) = 0;

  virtual void enterConnectOption(MySQLStatementParser::ConnectOptionContext *ctx) = 0;
  virtual void exitConnectOption(MySQLStatementParser::ConnectOptionContext *ctx) = 0;

  virtual void enterTlsOption(MySQLStatementParser::TlsOptionContext *ctx) = 0;
  virtual void exitTlsOption(MySQLStatementParser::TlsOptionContext *ctx) = 0;

  virtual void enterUserFuncAuthOption(MySQLStatementParser::UserFuncAuthOptionContext *ctx) = 0;
  virtual void exitUserFuncAuthOption(MySQLStatementParser::UserFuncAuthOptionContext *ctx) = 0;

  virtual void enterUse(MySQLStatementParser::UseContext *ctx) = 0;
  virtual void exitUse(MySQLStatementParser::UseContext *ctx) = 0;

  virtual void enterHelp(MySQLStatementParser::HelpContext *ctx) = 0;
  virtual void exitHelp(MySQLStatementParser::HelpContext *ctx) = 0;

  virtual void enterExplain(MySQLStatementParser::ExplainContext *ctx) = 0;
  virtual void exitExplain(MySQLStatementParser::ExplainContext *ctx) = 0;

  virtual void enterShowDatabases(MySQLStatementParser::ShowDatabasesContext *ctx) = 0;
  virtual void exitShowDatabases(MySQLStatementParser::ShowDatabasesContext *ctx) = 0;

  virtual void enterShowTables(MySQLStatementParser::ShowTablesContext *ctx) = 0;
  virtual void exitShowTables(MySQLStatementParser::ShowTablesContext *ctx) = 0;

  virtual void enterShowTableStatus(MySQLStatementParser::ShowTableStatusContext *ctx) = 0;
  virtual void exitShowTableStatus(MySQLStatementParser::ShowTableStatusContext *ctx) = 0;

  virtual void enterShowColumns(MySQLStatementParser::ShowColumnsContext *ctx) = 0;
  virtual void exitShowColumns(MySQLStatementParser::ShowColumnsContext *ctx) = 0;

  virtual void enterShowIndex(MySQLStatementParser::ShowIndexContext *ctx) = 0;
  virtual void exitShowIndex(MySQLStatementParser::ShowIndexContext *ctx) = 0;

  virtual void enterShowCreateTable(MySQLStatementParser::ShowCreateTableContext *ctx) = 0;
  virtual void exitShowCreateTable(MySQLStatementParser::ShowCreateTableContext *ctx) = 0;

  virtual void enterFromSchema(MySQLStatementParser::FromSchemaContext *ctx) = 0;
  virtual void exitFromSchema(MySQLStatementParser::FromSchemaContext *ctx) = 0;

  virtual void enterFromTable(MySQLStatementParser::FromTableContext *ctx) = 0;
  virtual void exitFromTable(MySQLStatementParser::FromTableContext *ctx) = 0;

  virtual void enterShowLike(MySQLStatementParser::ShowLikeContext *ctx) = 0;
  virtual void exitShowLike(MySQLStatementParser::ShowLikeContext *ctx) = 0;

  virtual void enterShowColumnLike(MySQLStatementParser::ShowColumnLikeContext *ctx) = 0;
  virtual void exitShowColumnLike(MySQLStatementParser::ShowColumnLikeContext *ctx) = 0;

  virtual void enterShowWhereClause(MySQLStatementParser::ShowWhereClauseContext *ctx) = 0;
  virtual void exitShowWhereClause(MySQLStatementParser::ShowWhereClauseContext *ctx) = 0;

  virtual void enterShowFilter(MySQLStatementParser::ShowFilterContext *ctx) = 0;
  virtual void exitShowFilter(MySQLStatementParser::ShowFilterContext *ctx) = 0;

  virtual void enterShowProfileType(MySQLStatementParser::ShowProfileTypeContext *ctx) = 0;
  virtual void exitShowProfileType(MySQLStatementParser::ShowProfileTypeContext *ctx) = 0;

  virtual void enterSetVariable(MySQLStatementParser::SetVariableContext *ctx) = 0;
  virtual void exitSetVariable(MySQLStatementParser::SetVariableContext *ctx) = 0;

  virtual void enterVariableAssign(MySQLStatementParser::VariableAssignContext *ctx) = 0;
  virtual void exitVariableAssign(MySQLStatementParser::VariableAssignContext *ctx) = 0;

  virtual void enterShowBinaryLogs(MySQLStatementParser::ShowBinaryLogsContext *ctx) = 0;
  virtual void exitShowBinaryLogs(MySQLStatementParser::ShowBinaryLogsContext *ctx) = 0;

  virtual void enterShowBinlogEvents(MySQLStatementParser::ShowBinlogEventsContext *ctx) = 0;
  virtual void exitShowBinlogEvents(MySQLStatementParser::ShowBinlogEventsContext *ctx) = 0;

  virtual void enterShowCharacterSet(MySQLStatementParser::ShowCharacterSetContext *ctx) = 0;
  virtual void exitShowCharacterSet(MySQLStatementParser::ShowCharacterSetContext *ctx) = 0;

  virtual void enterShowCollation(MySQLStatementParser::ShowCollationContext *ctx) = 0;
  virtual void exitShowCollation(MySQLStatementParser::ShowCollationContext *ctx) = 0;

  virtual void enterShowCreateDatabase(MySQLStatementParser::ShowCreateDatabaseContext *ctx) = 0;
  virtual void exitShowCreateDatabase(MySQLStatementParser::ShowCreateDatabaseContext *ctx) = 0;

  virtual void enterShowCreateEvent(MySQLStatementParser::ShowCreateEventContext *ctx) = 0;
  virtual void exitShowCreateEvent(MySQLStatementParser::ShowCreateEventContext *ctx) = 0;

  virtual void enterShowCreateFunction(MySQLStatementParser::ShowCreateFunctionContext *ctx) = 0;
  virtual void exitShowCreateFunction(MySQLStatementParser::ShowCreateFunctionContext *ctx) = 0;

  virtual void enterShowCreateProcedure(MySQLStatementParser::ShowCreateProcedureContext *ctx) = 0;
  virtual void exitShowCreateProcedure(MySQLStatementParser::ShowCreateProcedureContext *ctx) = 0;

  virtual void enterShowCreateTrigger(MySQLStatementParser::ShowCreateTriggerContext *ctx) = 0;
  virtual void exitShowCreateTrigger(MySQLStatementParser::ShowCreateTriggerContext *ctx) = 0;

  virtual void enterShowCreateUser(MySQLStatementParser::ShowCreateUserContext *ctx) = 0;
  virtual void exitShowCreateUser(MySQLStatementParser::ShowCreateUserContext *ctx) = 0;

  virtual void enterShowCreateView(MySQLStatementParser::ShowCreateViewContext *ctx) = 0;
  virtual void exitShowCreateView(MySQLStatementParser::ShowCreateViewContext *ctx) = 0;

  virtual void enterShowEngine(MySQLStatementParser::ShowEngineContext *ctx) = 0;
  virtual void exitShowEngine(MySQLStatementParser::ShowEngineContext *ctx) = 0;

  virtual void enterShowEngines(MySQLStatementParser::ShowEnginesContext *ctx) = 0;
  virtual void exitShowEngines(MySQLStatementParser::ShowEnginesContext *ctx) = 0;

  virtual void enterShowErrors(MySQLStatementParser::ShowErrorsContext *ctx) = 0;
  virtual void exitShowErrors(MySQLStatementParser::ShowErrorsContext *ctx) = 0;

  virtual void enterShowEvents(MySQLStatementParser::ShowEventsContext *ctx) = 0;
  virtual void exitShowEvents(MySQLStatementParser::ShowEventsContext *ctx) = 0;

  virtual void enterShowFunctionCode(MySQLStatementParser::ShowFunctionCodeContext *ctx) = 0;
  virtual void exitShowFunctionCode(MySQLStatementParser::ShowFunctionCodeContext *ctx) = 0;

  virtual void enterShowFunctionStatus(MySQLStatementParser::ShowFunctionStatusContext *ctx) = 0;
  virtual void exitShowFunctionStatus(MySQLStatementParser::ShowFunctionStatusContext *ctx) = 0;

  virtual void enterShowGrant(MySQLStatementParser::ShowGrantContext *ctx) = 0;
  virtual void exitShowGrant(MySQLStatementParser::ShowGrantContext *ctx) = 0;

  virtual void enterShowMasterStatus(MySQLStatementParser::ShowMasterStatusContext *ctx) = 0;
  virtual void exitShowMasterStatus(MySQLStatementParser::ShowMasterStatusContext *ctx) = 0;

  virtual void enterShowOpenTables(MySQLStatementParser::ShowOpenTablesContext *ctx) = 0;
  virtual void exitShowOpenTables(MySQLStatementParser::ShowOpenTablesContext *ctx) = 0;

  virtual void enterShowPlugins(MySQLStatementParser::ShowPluginsContext *ctx) = 0;
  virtual void exitShowPlugins(MySQLStatementParser::ShowPluginsContext *ctx) = 0;

  virtual void enterShowPrivileges(MySQLStatementParser::ShowPrivilegesContext *ctx) = 0;
  virtual void exitShowPrivileges(MySQLStatementParser::ShowPrivilegesContext *ctx) = 0;

  virtual void enterShowProcedureCode(MySQLStatementParser::ShowProcedureCodeContext *ctx) = 0;
  virtual void exitShowProcedureCode(MySQLStatementParser::ShowProcedureCodeContext *ctx) = 0;

  virtual void enterShowProcedureStatus(MySQLStatementParser::ShowProcedureStatusContext *ctx) = 0;
  virtual void exitShowProcedureStatus(MySQLStatementParser::ShowProcedureStatusContext *ctx) = 0;

  virtual void enterShowProcesslist(MySQLStatementParser::ShowProcesslistContext *ctx) = 0;
  virtual void exitShowProcesslist(MySQLStatementParser::ShowProcesslistContext *ctx) = 0;

  virtual void enterShowProfile(MySQLStatementParser::ShowProfileContext *ctx) = 0;
  virtual void exitShowProfile(MySQLStatementParser::ShowProfileContext *ctx) = 0;

  virtual void enterShowProfiles(MySQLStatementParser::ShowProfilesContext *ctx) = 0;
  virtual void exitShowProfiles(MySQLStatementParser::ShowProfilesContext *ctx) = 0;

  virtual void enterShowRelaylogEvent(MySQLStatementParser::ShowRelaylogEventContext *ctx) = 0;
  virtual void exitShowRelaylogEvent(MySQLStatementParser::ShowRelaylogEventContext *ctx) = 0;

  virtual void enterShowSlavehost(MySQLStatementParser::ShowSlavehostContext *ctx) = 0;
  virtual void exitShowSlavehost(MySQLStatementParser::ShowSlavehostContext *ctx) = 0;

  virtual void enterShowSlaveStatus(MySQLStatementParser::ShowSlaveStatusContext *ctx) = 0;
  virtual void exitShowSlaveStatus(MySQLStatementParser::ShowSlaveStatusContext *ctx) = 0;

  virtual void enterShowStatus(MySQLStatementParser::ShowStatusContext *ctx) = 0;
  virtual void exitShowStatus(MySQLStatementParser::ShowStatusContext *ctx) = 0;

  virtual void enterShowTrriggers(MySQLStatementParser::ShowTrriggersContext *ctx) = 0;
  virtual void exitShowTrriggers(MySQLStatementParser::ShowTrriggersContext *ctx) = 0;

  virtual void enterShowVariables(MySQLStatementParser::ShowVariablesContext *ctx) = 0;
  virtual void exitShowVariables(MySQLStatementParser::ShowVariablesContext *ctx) = 0;

  virtual void enterShowWarnings(MySQLStatementParser::ShowWarningsContext *ctx) = 0;
  virtual void exitShowWarnings(MySQLStatementParser::ShowWarningsContext *ctx) = 0;

  virtual void enterSetCharacter(MySQLStatementParser::SetCharacterContext *ctx) = 0;
  virtual void exitSetCharacter(MySQLStatementParser::SetCharacterContext *ctx) = 0;

  virtual void enterSetName(MySQLStatementParser::SetNameContext *ctx) = 0;
  virtual void exitSetName(MySQLStatementParser::SetNameContext *ctx) = 0;

  virtual void enterClone(MySQLStatementParser::CloneContext *ctx) = 0;
  virtual void exitClone(MySQLStatementParser::CloneContext *ctx) = 0;

  virtual void enterCloneAction(MySQLStatementParser::CloneActionContext *ctx) = 0;
  virtual void exitCloneAction(MySQLStatementParser::CloneActionContext *ctx) = 0;

  virtual void enterCreateUdf(MySQLStatementParser::CreateUdfContext *ctx) = 0;
  virtual void exitCreateUdf(MySQLStatementParser::CreateUdfContext *ctx) = 0;

  virtual void enterInstall(MySQLStatementParser::InstallContext *ctx) = 0;
  virtual void exitInstall(MySQLStatementParser::InstallContext *ctx) = 0;

  virtual void enterUninstall(MySQLStatementParser::UninstallContext *ctx) = 0;
  virtual void exitUninstall(MySQLStatementParser::UninstallContext *ctx) = 0;

  virtual void enterInstallComponent(MySQLStatementParser::InstallComponentContext *ctx) = 0;
  virtual void exitInstallComponent(MySQLStatementParser::InstallComponentContext *ctx) = 0;

  virtual void enterInstallPlugin(MySQLStatementParser::InstallPluginContext *ctx) = 0;
  virtual void exitInstallPlugin(MySQLStatementParser::InstallPluginContext *ctx) = 0;

  virtual void enterUninstallComponent(MySQLStatementParser::UninstallComponentContext *ctx) = 0;
  virtual void exitUninstallComponent(MySQLStatementParser::UninstallComponentContext *ctx) = 0;

  virtual void enterUninstallPlugin(MySQLStatementParser::UninstallPluginContext *ctx) = 0;
  virtual void exitUninstallPlugin(MySQLStatementParser::UninstallPluginContext *ctx) = 0;

  virtual void enterAnalyzeTable(MySQLStatementParser::AnalyzeTableContext *ctx) = 0;
  virtual void exitAnalyzeTable(MySQLStatementParser::AnalyzeTableContext *ctx) = 0;

  virtual void enterHistogram(MySQLStatementParser::HistogramContext *ctx) = 0;
  virtual void exitHistogram(MySQLStatementParser::HistogramContext *ctx) = 0;

  virtual void enterCheckTable(MySQLStatementParser::CheckTableContext *ctx) = 0;
  virtual void exitCheckTable(MySQLStatementParser::CheckTableContext *ctx) = 0;

  virtual void enterCheckTableOption(MySQLStatementParser::CheckTableOptionContext *ctx) = 0;
  virtual void exitCheckTableOption(MySQLStatementParser::CheckTableOptionContext *ctx) = 0;

  virtual void enterChecksumTable(MySQLStatementParser::ChecksumTableContext *ctx) = 0;
  virtual void exitChecksumTable(MySQLStatementParser::ChecksumTableContext *ctx) = 0;

  virtual void enterOptimizeTable(MySQLStatementParser::OptimizeTableContext *ctx) = 0;
  virtual void exitOptimizeTable(MySQLStatementParser::OptimizeTableContext *ctx) = 0;

  virtual void enterRepairTable(MySQLStatementParser::RepairTableContext *ctx) = 0;
  virtual void exitRepairTable(MySQLStatementParser::RepairTableContext *ctx) = 0;

  virtual void enterAlterResourceGroup(MySQLStatementParser::AlterResourceGroupContext *ctx) = 0;
  virtual void exitAlterResourceGroup(MySQLStatementParser::AlterResourceGroupContext *ctx) = 0;

  virtual void enterVcpuSpec(MySQLStatementParser::VcpuSpecContext *ctx) = 0;
  virtual void exitVcpuSpec(MySQLStatementParser::VcpuSpecContext *ctx) = 0;

  virtual void enterCreateResourceGroup(MySQLStatementParser::CreateResourceGroupContext *ctx) = 0;
  virtual void exitCreateResourceGroup(MySQLStatementParser::CreateResourceGroupContext *ctx) = 0;

  virtual void enterDropResourceGroup(MySQLStatementParser::DropResourceGroupContext *ctx) = 0;
  virtual void exitDropResourceGroup(MySQLStatementParser::DropResourceGroupContext *ctx) = 0;

  virtual void enterSetResourceGroup(MySQLStatementParser::SetResourceGroupContext *ctx) = 0;
  virtual void exitSetResourceGroup(MySQLStatementParser::SetResourceGroupContext *ctx) = 0;

  virtual void enterBinlog(MySQLStatementParser::BinlogContext *ctx) = 0;
  virtual void exitBinlog(MySQLStatementParser::BinlogContext *ctx) = 0;

  virtual void enterCacheIndex(MySQLStatementParser::CacheIndexContext *ctx) = 0;
  virtual void exitCacheIndex(MySQLStatementParser::CacheIndexContext *ctx) = 0;

  virtual void enterTableIndexList(MySQLStatementParser::TableIndexListContext *ctx) = 0;
  virtual void exitTableIndexList(MySQLStatementParser::TableIndexListContext *ctx) = 0;

  virtual void enterPartitionList(MySQLStatementParser::PartitionListContext *ctx) = 0;
  virtual void exitPartitionList(MySQLStatementParser::PartitionListContext *ctx) = 0;

  virtual void enterFlush(MySQLStatementParser::FlushContext *ctx) = 0;
  virtual void exitFlush(MySQLStatementParser::FlushContext *ctx) = 0;

  virtual void enterFlushOption(MySQLStatementParser::FlushOptionContext *ctx) = 0;
  virtual void exitFlushOption(MySQLStatementParser::FlushOptionContext *ctx) = 0;

  virtual void enterTablesOption(MySQLStatementParser::TablesOptionContext *ctx) = 0;
  virtual void exitTablesOption(MySQLStatementParser::TablesOptionContext *ctx) = 0;

  virtual void enterKill(MySQLStatementParser::KillContext *ctx) = 0;
  virtual void exitKill(MySQLStatementParser::KillContext *ctx) = 0;

  virtual void enterLoadIndexInfo(MySQLStatementParser::LoadIndexInfoContext *ctx) = 0;
  virtual void exitLoadIndexInfo(MySQLStatementParser::LoadIndexInfoContext *ctx) = 0;

  virtual void enterResetStatement(MySQLStatementParser::ResetStatementContext *ctx) = 0;
  virtual void exitResetStatement(MySQLStatementParser::ResetStatementContext *ctx) = 0;

  virtual void enterResetOption(MySQLStatementParser::ResetOptionContext *ctx) = 0;
  virtual void exitResetOption(MySQLStatementParser::ResetOptionContext *ctx) = 0;

  virtual void enterResetPersist(MySQLStatementParser::ResetPersistContext *ctx) = 0;
  virtual void exitResetPersist(MySQLStatementParser::ResetPersistContext *ctx) = 0;

  virtual void enterRestart(MySQLStatementParser::RestartContext *ctx) = 0;
  virtual void exitRestart(MySQLStatementParser::RestartContext *ctx) = 0;

  virtual void enterShutdown(MySQLStatementParser::ShutdownContext *ctx) = 0;
  virtual void exitShutdown(MySQLStatementParser::ShutdownContext *ctx) = 0;

  virtual void enterExplainType(MySQLStatementParser::ExplainTypeContext *ctx) = 0;
  virtual void exitExplainType(MySQLStatementParser::ExplainTypeContext *ctx) = 0;

  virtual void enterExplainableStatement(MySQLStatementParser::ExplainableStatementContext *ctx) = 0;
  virtual void exitExplainableStatement(MySQLStatementParser::ExplainableStatementContext *ctx) = 0;

  virtual void enterFormatName(MySQLStatementParser::FormatNameContext *ctx) = 0;
  virtual void exitFormatName(MySQLStatementParser::FormatNameContext *ctx) = 0;

  virtual void enterShow(MySQLStatementParser::ShowContext *ctx) = 0;
  virtual void exitShow(MySQLStatementParser::ShowContext *ctx) = 0;

  virtual void enterChange(MySQLStatementParser::ChangeContext *ctx) = 0;
  virtual void exitChange(MySQLStatementParser::ChangeContext *ctx) = 0;

  virtual void enterChangeMasterTo(MySQLStatementParser::ChangeMasterToContext *ctx) = 0;
  virtual void exitChangeMasterTo(MySQLStatementParser::ChangeMasterToContext *ctx) = 0;

  virtual void enterChangeReplicationFilter(MySQLStatementParser::ChangeReplicationFilterContext *ctx) = 0;
  virtual void exitChangeReplicationFilter(MySQLStatementParser::ChangeReplicationFilterContext *ctx) = 0;

  virtual void enterStartSlave(MySQLStatementParser::StartSlaveContext *ctx) = 0;
  virtual void exitStartSlave(MySQLStatementParser::StartSlaveContext *ctx) = 0;

  virtual void enterStopSlave(MySQLStatementParser::StopSlaveContext *ctx) = 0;
  virtual void exitStopSlave(MySQLStatementParser::StopSlaveContext *ctx) = 0;

  virtual void enterGroupReplication(MySQLStatementParser::GroupReplicationContext *ctx) = 0;
  virtual void exitGroupReplication(MySQLStatementParser::GroupReplicationContext *ctx) = 0;

  virtual void enterStartGroupReplication(MySQLStatementParser::StartGroupReplicationContext *ctx) = 0;
  virtual void exitStartGroupReplication(MySQLStatementParser::StartGroupReplicationContext *ctx) = 0;

  virtual void enterStopGroupReplication(MySQLStatementParser::StopGroupReplicationContext *ctx) = 0;
  virtual void exitStopGroupReplication(MySQLStatementParser::StopGroupReplicationContext *ctx) = 0;

  virtual void enterPurgeBinaryLog(MySQLStatementParser::PurgeBinaryLogContext *ctx) = 0;
  virtual void exitPurgeBinaryLog(MySQLStatementParser::PurgeBinaryLogContext *ctx) = 0;

  virtual void enterThreadTypes(MySQLStatementParser::ThreadTypesContext *ctx) = 0;
  virtual void exitThreadTypes(MySQLStatementParser::ThreadTypesContext *ctx) = 0;

  virtual void enterThreadType(MySQLStatementParser::ThreadTypeContext *ctx) = 0;
  virtual void exitThreadType(MySQLStatementParser::ThreadTypeContext *ctx) = 0;

  virtual void enterUtilOption(MySQLStatementParser::UtilOptionContext *ctx) = 0;
  virtual void exitUtilOption(MySQLStatementParser::UtilOptionContext *ctx) = 0;

  virtual void enterConnectionOptions(MySQLStatementParser::ConnectionOptionsContext *ctx) = 0;
  virtual void exitConnectionOptions(MySQLStatementParser::ConnectionOptionsContext *ctx) = 0;

  virtual void enterMasterDefs(MySQLStatementParser::MasterDefsContext *ctx) = 0;
  virtual void exitMasterDefs(MySQLStatementParser::MasterDefsContext *ctx) = 0;

  virtual void enterMasterDef(MySQLStatementParser::MasterDefContext *ctx) = 0;
  virtual void exitMasterDef(MySQLStatementParser::MasterDefContext *ctx) = 0;

  virtual void enterIgnoreServerIds(MySQLStatementParser::IgnoreServerIdsContext *ctx) = 0;
  virtual void exitIgnoreServerIds(MySQLStatementParser::IgnoreServerIdsContext *ctx) = 0;

  virtual void enterIgnoreServerId(MySQLStatementParser::IgnoreServerIdContext *ctx) = 0;
  virtual void exitIgnoreServerId(MySQLStatementParser::IgnoreServerIdContext *ctx) = 0;

  virtual void enterFilterDefs(MySQLStatementParser::FilterDefsContext *ctx) = 0;
  virtual void exitFilterDefs(MySQLStatementParser::FilterDefsContext *ctx) = 0;

  virtual void enterFilterDef(MySQLStatementParser::FilterDefContext *ctx) = 0;
  virtual void exitFilterDef(MySQLStatementParser::FilterDefContext *ctx) = 0;

  virtual void enterWildTables(MySQLStatementParser::WildTablesContext *ctx) = 0;
  virtual void exitWildTables(MySQLStatementParser::WildTablesContext *ctx) = 0;

  virtual void enterWildTable(MySQLStatementParser::WildTableContext *ctx) = 0;
  virtual void exitWildTable(MySQLStatementParser::WildTableContext *ctx) = 0;

  virtual void enterParameterMarker(MySQLStatementParser::ParameterMarkerContext *ctx) = 0;
  virtual void exitParameterMarker(MySQLStatementParser::ParameterMarkerContext *ctx) = 0;

  virtual void enterCustomKeyword(MySQLStatementParser::CustomKeywordContext *ctx) = 0;
  virtual void exitCustomKeyword(MySQLStatementParser::CustomKeywordContext *ctx) = 0;

  virtual void enterLiterals(MySQLStatementParser::LiteralsContext *ctx) = 0;
  virtual void exitLiterals(MySQLStatementParser::LiteralsContext *ctx) = 0;

  virtual void enterString_(MySQLStatementParser::String_Context *ctx) = 0;
  virtual void exitString_(MySQLStatementParser::String_Context *ctx) = 0;

  virtual void enterStringLiterals(MySQLStatementParser::StringLiteralsContext *ctx) = 0;
  virtual void exitStringLiterals(MySQLStatementParser::StringLiteralsContext *ctx) = 0;

  virtual void enterNumberLiterals(MySQLStatementParser::NumberLiteralsContext *ctx) = 0;
  virtual void exitNumberLiterals(MySQLStatementParser::NumberLiteralsContext *ctx) = 0;

  virtual void enterTemporalLiterals(MySQLStatementParser::TemporalLiteralsContext *ctx) = 0;
  virtual void exitTemporalLiterals(MySQLStatementParser::TemporalLiteralsContext *ctx) = 0;

  virtual void enterHexadecimalLiterals(MySQLStatementParser::HexadecimalLiteralsContext *ctx) = 0;
  virtual void exitHexadecimalLiterals(MySQLStatementParser::HexadecimalLiteralsContext *ctx) = 0;

  virtual void enterBitValueLiterals(MySQLStatementParser::BitValueLiteralsContext *ctx) = 0;
  virtual void exitBitValueLiterals(MySQLStatementParser::BitValueLiteralsContext *ctx) = 0;

  virtual void enterBooleanLiterals(MySQLStatementParser::BooleanLiteralsContext *ctx) = 0;
  virtual void exitBooleanLiterals(MySQLStatementParser::BooleanLiteralsContext *ctx) = 0;

  virtual void enterNullValueLiterals(MySQLStatementParser::NullValueLiteralsContext *ctx) = 0;
  virtual void exitNullValueLiterals(MySQLStatementParser::NullValueLiteralsContext *ctx) = 0;

  virtual void enterCollationName(MySQLStatementParser::CollationNameContext *ctx) = 0;
  virtual void exitCollationName(MySQLStatementParser::CollationNameContext *ctx) = 0;

  virtual void enterIdentifier(MySQLStatementParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(MySQLStatementParser::IdentifierContext *ctx) = 0;

  virtual void enterUnreservedWord(MySQLStatementParser::UnreservedWordContext *ctx) = 0;
  virtual void exitUnreservedWord(MySQLStatementParser::UnreservedWordContext *ctx) = 0;

  virtual void enterTextOrIdentifier(MySQLStatementParser::TextOrIdentifierContext *ctx) = 0;
  virtual void exitTextOrIdentifier(MySQLStatementParser::TextOrIdentifierContext *ctx) = 0;

  virtual void enterVariable(MySQLStatementParser::VariableContext *ctx) = 0;
  virtual void exitVariable(MySQLStatementParser::VariableContext *ctx) = 0;

  virtual void enterUserVariable(MySQLStatementParser::UserVariableContext *ctx) = 0;
  virtual void exitUserVariable(MySQLStatementParser::UserVariableContext *ctx) = 0;

  virtual void enterSystemVariable(MySQLStatementParser::SystemVariableContext *ctx) = 0;
  virtual void exitSystemVariable(MySQLStatementParser::SystemVariableContext *ctx) = 0;

  virtual void enterScope(MySQLStatementParser::ScopeContext *ctx) = 0;
  virtual void exitScope(MySQLStatementParser::ScopeContext *ctx) = 0;

  virtual void enterInternalVariableName(MySQLStatementParser::InternalVariableNameContext *ctx) = 0;
  virtual void exitInternalVariableName(MySQLStatementParser::InternalVariableNameContext *ctx) = 0;

  virtual void enterSetExprOrDefault(MySQLStatementParser::SetExprOrDefaultContext *ctx) = 0;
  virtual void exitSetExprOrDefault(MySQLStatementParser::SetExprOrDefaultContext *ctx) = 0;

  virtual void enterSchemaName(MySQLStatementParser::SchemaNameContext *ctx) = 0;
  virtual void exitSchemaName(MySQLStatementParser::SchemaNameContext *ctx) = 0;

  virtual void enterSchemaNames(MySQLStatementParser::SchemaNamesContext *ctx) = 0;
  virtual void exitSchemaNames(MySQLStatementParser::SchemaNamesContext *ctx) = 0;

  virtual void enterCharsetName(MySQLStatementParser::CharsetNameContext *ctx) = 0;
  virtual void exitCharsetName(MySQLStatementParser::CharsetNameContext *ctx) = 0;

  virtual void enterSchemaPairs(MySQLStatementParser::SchemaPairsContext *ctx) = 0;
  virtual void exitSchemaPairs(MySQLStatementParser::SchemaPairsContext *ctx) = 0;

  virtual void enterSchemaPair(MySQLStatementParser::SchemaPairContext *ctx) = 0;
  virtual void exitSchemaPair(MySQLStatementParser::SchemaPairContext *ctx) = 0;

  virtual void enterTableName(MySQLStatementParser::TableNameContext *ctx) = 0;
  virtual void exitTableName(MySQLStatementParser::TableNameContext *ctx) = 0;

  virtual void enterColumnName(MySQLStatementParser::ColumnNameContext *ctx) = 0;
  virtual void exitColumnName(MySQLStatementParser::ColumnNameContext *ctx) = 0;

  virtual void enterIndexName(MySQLStatementParser::IndexNameContext *ctx) = 0;
  virtual void exitIndexName(MySQLStatementParser::IndexNameContext *ctx) = 0;

  virtual void enterUserIdentifierOrText(MySQLStatementParser::UserIdentifierOrTextContext *ctx) = 0;
  virtual void exitUserIdentifierOrText(MySQLStatementParser::UserIdentifierOrTextContext *ctx) = 0;

  virtual void enterUserName(MySQLStatementParser::UserNameContext *ctx) = 0;
  virtual void exitUserName(MySQLStatementParser::UserNameContext *ctx) = 0;

  virtual void enterEventName(MySQLStatementParser::EventNameContext *ctx) = 0;
  virtual void exitEventName(MySQLStatementParser::EventNameContext *ctx) = 0;

  virtual void enterServerName(MySQLStatementParser::ServerNameContext *ctx) = 0;
  virtual void exitServerName(MySQLStatementParser::ServerNameContext *ctx) = 0;

  virtual void enterWrapperName(MySQLStatementParser::WrapperNameContext *ctx) = 0;
  virtual void exitWrapperName(MySQLStatementParser::WrapperNameContext *ctx) = 0;

  virtual void enterFunctionName(MySQLStatementParser::FunctionNameContext *ctx) = 0;
  virtual void exitFunctionName(MySQLStatementParser::FunctionNameContext *ctx) = 0;

  virtual void enterViewName(MySQLStatementParser::ViewNameContext *ctx) = 0;
  virtual void exitViewName(MySQLStatementParser::ViewNameContext *ctx) = 0;

  virtual void enterOwner(MySQLStatementParser::OwnerContext *ctx) = 0;
  virtual void exitOwner(MySQLStatementParser::OwnerContext *ctx) = 0;

  virtual void enterAlias(MySQLStatementParser::AliasContext *ctx) = 0;
  virtual void exitAlias(MySQLStatementParser::AliasContext *ctx) = 0;

  virtual void enterName(MySQLStatementParser::NameContext *ctx) = 0;
  virtual void exitName(MySQLStatementParser::NameContext *ctx) = 0;

  virtual void enterTableList(MySQLStatementParser::TableListContext *ctx) = 0;
  virtual void exitTableList(MySQLStatementParser::TableListContext *ctx) = 0;

  virtual void enterViewNames(MySQLStatementParser::ViewNamesContext *ctx) = 0;
  virtual void exitViewNames(MySQLStatementParser::ViewNamesContext *ctx) = 0;

  virtual void enterColumnNames(MySQLStatementParser::ColumnNamesContext *ctx) = 0;
  virtual void exitColumnNames(MySQLStatementParser::ColumnNamesContext *ctx) = 0;

  virtual void enterGroupName(MySQLStatementParser::GroupNameContext *ctx) = 0;
  virtual void exitGroupName(MySQLStatementParser::GroupNameContext *ctx) = 0;

  virtual void enterRoutineName(MySQLStatementParser::RoutineNameContext *ctx) = 0;
  virtual void exitRoutineName(MySQLStatementParser::RoutineNameContext *ctx) = 0;

  virtual void enterShardLibraryName(MySQLStatementParser::ShardLibraryNameContext *ctx) = 0;
  virtual void exitShardLibraryName(MySQLStatementParser::ShardLibraryNameContext *ctx) = 0;

  virtual void enterComponentName(MySQLStatementParser::ComponentNameContext *ctx) = 0;
  virtual void exitComponentName(MySQLStatementParser::ComponentNameContext *ctx) = 0;

  virtual void enterPluginName(MySQLStatementParser::PluginNameContext *ctx) = 0;
  virtual void exitPluginName(MySQLStatementParser::PluginNameContext *ctx) = 0;

  virtual void enterHostName(MySQLStatementParser::HostNameContext *ctx) = 0;
  virtual void exitHostName(MySQLStatementParser::HostNameContext *ctx) = 0;

  virtual void enterPort(MySQLStatementParser::PortContext *ctx) = 0;
  virtual void exitPort(MySQLStatementParser::PortContext *ctx) = 0;

  virtual void enterCloneInstance(MySQLStatementParser::CloneInstanceContext *ctx) = 0;
  virtual void exitCloneInstance(MySQLStatementParser::CloneInstanceContext *ctx) = 0;

  virtual void enterCloneDir(MySQLStatementParser::CloneDirContext *ctx) = 0;
  virtual void exitCloneDir(MySQLStatementParser::CloneDirContext *ctx) = 0;

  virtual void enterChannelName(MySQLStatementParser::ChannelNameContext *ctx) = 0;
  virtual void exitChannelName(MySQLStatementParser::ChannelNameContext *ctx) = 0;

  virtual void enterLogName(MySQLStatementParser::LogNameContext *ctx) = 0;
  virtual void exitLogName(MySQLStatementParser::LogNameContext *ctx) = 0;

  virtual void enterRoleName(MySQLStatementParser::RoleNameContext *ctx) = 0;
  virtual void exitRoleName(MySQLStatementParser::RoleNameContext *ctx) = 0;

  virtual void enterEngineRef(MySQLStatementParser::EngineRefContext *ctx) = 0;
  virtual void exitEngineRef(MySQLStatementParser::EngineRefContext *ctx) = 0;

  virtual void enterTriggerName(MySQLStatementParser::TriggerNameContext *ctx) = 0;
  virtual void exitTriggerName(MySQLStatementParser::TriggerNameContext *ctx) = 0;

  virtual void enterTriggerTime(MySQLStatementParser::TriggerTimeContext *ctx) = 0;
  virtual void exitTriggerTime(MySQLStatementParser::TriggerTimeContext *ctx) = 0;

  virtual void enterTableOrTables(MySQLStatementParser::TableOrTablesContext *ctx) = 0;
  virtual void exitTableOrTables(MySQLStatementParser::TableOrTablesContext *ctx) = 0;

  virtual void enterUserOrRole(MySQLStatementParser::UserOrRoleContext *ctx) = 0;
  virtual void exitUserOrRole(MySQLStatementParser::UserOrRoleContext *ctx) = 0;

  virtual void enterPartitionName(MySQLStatementParser::PartitionNameContext *ctx) = 0;
  virtual void exitPartitionName(MySQLStatementParser::PartitionNameContext *ctx) = 0;

  virtual void enterIdentifierList(MySQLStatementParser::IdentifierListContext *ctx) = 0;
  virtual void exitIdentifierList(MySQLStatementParser::IdentifierListContext *ctx) = 0;

  virtual void enterAllOrPartitionNameList(MySQLStatementParser::AllOrPartitionNameListContext *ctx) = 0;
  virtual void exitAllOrPartitionNameList(MySQLStatementParser::AllOrPartitionNameListContext *ctx) = 0;

  virtual void enterTriggerEvent(MySQLStatementParser::TriggerEventContext *ctx) = 0;
  virtual void exitTriggerEvent(MySQLStatementParser::TriggerEventContext *ctx) = 0;

  virtual void enterTriggerOrder(MySQLStatementParser::TriggerOrderContext *ctx) = 0;
  virtual void exitTriggerOrder(MySQLStatementParser::TriggerOrderContext *ctx) = 0;

  virtual void enterExpr(MySQLStatementParser::ExprContext *ctx) = 0;
  virtual void exitExpr(MySQLStatementParser::ExprContext *ctx) = 0;

  virtual void enterLogicalOperator(MySQLStatementParser::LogicalOperatorContext *ctx) = 0;
  virtual void exitLogicalOperator(MySQLStatementParser::LogicalOperatorContext *ctx) = 0;

  virtual void enterNotOperator(MySQLStatementParser::NotOperatorContext *ctx) = 0;
  virtual void exitNotOperator(MySQLStatementParser::NotOperatorContext *ctx) = 0;

  virtual void enterBooleanPrimary(MySQLStatementParser::BooleanPrimaryContext *ctx) = 0;
  virtual void exitBooleanPrimary(MySQLStatementParser::BooleanPrimaryContext *ctx) = 0;

  virtual void enterComparisonOperator(MySQLStatementParser::ComparisonOperatorContext *ctx) = 0;
  virtual void exitComparisonOperator(MySQLStatementParser::ComparisonOperatorContext *ctx) = 0;

  virtual void enterPredicate(MySQLStatementParser::PredicateContext *ctx) = 0;
  virtual void exitPredicate(MySQLStatementParser::PredicateContext *ctx) = 0;

  virtual void enterBitExpr(MySQLStatementParser::BitExprContext *ctx) = 0;
  virtual void exitBitExpr(MySQLStatementParser::BitExprContext *ctx) = 0;

  virtual void enterSimpleExpr(MySQLStatementParser::SimpleExprContext *ctx) = 0;
  virtual void exitSimpleExpr(MySQLStatementParser::SimpleExprContext *ctx) = 0;

  virtual void enterColumnRef(MySQLStatementParser::ColumnRefContext *ctx) = 0;
  virtual void exitColumnRef(MySQLStatementParser::ColumnRefContext *ctx) = 0;

  virtual void enterColumnRefList(MySQLStatementParser::ColumnRefListContext *ctx) = 0;
  virtual void exitColumnRefList(MySQLStatementParser::ColumnRefListContext *ctx) = 0;

  virtual void enterFunctionCall(MySQLStatementParser::FunctionCallContext *ctx) = 0;
  virtual void exitFunctionCall(MySQLStatementParser::FunctionCallContext *ctx) = 0;

  virtual void enterAggregationFunction(MySQLStatementParser::AggregationFunctionContext *ctx) = 0;
  virtual void exitAggregationFunction(MySQLStatementParser::AggregationFunctionContext *ctx) = 0;

  virtual void enterAggregationFunctionName(MySQLStatementParser::AggregationFunctionNameContext *ctx) = 0;
  virtual void exitAggregationFunctionName(MySQLStatementParser::AggregationFunctionNameContext *ctx) = 0;

  virtual void enterDistinct(MySQLStatementParser::DistinctContext *ctx) = 0;
  virtual void exitDistinct(MySQLStatementParser::DistinctContext *ctx) = 0;

  virtual void enterOverClause(MySQLStatementParser::OverClauseContext *ctx) = 0;
  virtual void exitOverClause(MySQLStatementParser::OverClauseContext *ctx) = 0;

  virtual void enterWindowSpecification(MySQLStatementParser::WindowSpecificationContext *ctx) = 0;
  virtual void exitWindowSpecification(MySQLStatementParser::WindowSpecificationContext *ctx) = 0;

  virtual void enterFrameClause(MySQLStatementParser::FrameClauseContext *ctx) = 0;
  virtual void exitFrameClause(MySQLStatementParser::FrameClauseContext *ctx) = 0;

  virtual void enterFrameStart(MySQLStatementParser::FrameStartContext *ctx) = 0;
  virtual void exitFrameStart(MySQLStatementParser::FrameStartContext *ctx) = 0;

  virtual void enterFrameEnd(MySQLStatementParser::FrameEndContext *ctx) = 0;
  virtual void exitFrameEnd(MySQLStatementParser::FrameEndContext *ctx) = 0;

  virtual void enterFrameBetween(MySQLStatementParser::FrameBetweenContext *ctx) = 0;
  virtual void exitFrameBetween(MySQLStatementParser::FrameBetweenContext *ctx) = 0;

  virtual void enterSpecialFunction(MySQLStatementParser::SpecialFunctionContext *ctx) = 0;
  virtual void exitSpecialFunction(MySQLStatementParser::SpecialFunctionContext *ctx) = 0;

  virtual void enterCurrentUserFunction(MySQLStatementParser::CurrentUserFunctionContext *ctx) = 0;
  virtual void exitCurrentUserFunction(MySQLStatementParser::CurrentUserFunctionContext *ctx) = 0;

  virtual void enterGroupConcatFunction(MySQLStatementParser::GroupConcatFunctionContext *ctx) = 0;
  virtual void exitGroupConcatFunction(MySQLStatementParser::GroupConcatFunctionContext *ctx) = 0;

  virtual void enterWindowFunction(MySQLStatementParser::WindowFunctionContext *ctx) = 0;
  virtual void exitWindowFunction(MySQLStatementParser::WindowFunctionContext *ctx) = 0;

  virtual void enterWindowingClause(MySQLStatementParser::WindowingClauseContext *ctx) = 0;
  virtual void exitWindowingClause(MySQLStatementParser::WindowingClauseContext *ctx) = 0;

  virtual void enterLeadLagInfo(MySQLStatementParser::LeadLagInfoContext *ctx) = 0;
  virtual void exitLeadLagInfo(MySQLStatementParser::LeadLagInfoContext *ctx) = 0;

  virtual void enterNullTreatment(MySQLStatementParser::NullTreatmentContext *ctx) = 0;
  virtual void exitNullTreatment(MySQLStatementParser::NullTreatmentContext *ctx) = 0;

  virtual void enterCheckType(MySQLStatementParser::CheckTypeContext *ctx) = 0;
  virtual void exitCheckType(MySQLStatementParser::CheckTypeContext *ctx) = 0;

  virtual void enterRepairType(MySQLStatementParser::RepairTypeContext *ctx) = 0;
  virtual void exitRepairType(MySQLStatementParser::RepairTypeContext *ctx) = 0;

  virtual void enterCastFunction(MySQLStatementParser::CastFunctionContext *ctx) = 0;
  virtual void exitCastFunction(MySQLStatementParser::CastFunctionContext *ctx) = 0;

  virtual void enterConvertFunction(MySQLStatementParser::ConvertFunctionContext *ctx) = 0;
  virtual void exitConvertFunction(MySQLStatementParser::ConvertFunctionContext *ctx) = 0;

  virtual void enterCastType(MySQLStatementParser::CastTypeContext *ctx) = 0;
  virtual void exitCastType(MySQLStatementParser::CastTypeContext *ctx) = 0;

  virtual void enterNchar(MySQLStatementParser::NcharContext *ctx) = 0;
  virtual void exitNchar(MySQLStatementParser::NcharContext *ctx) = 0;

  virtual void enterPositionFunction(MySQLStatementParser::PositionFunctionContext *ctx) = 0;
  virtual void exitPositionFunction(MySQLStatementParser::PositionFunctionContext *ctx) = 0;

  virtual void enterSubstringFunction(MySQLStatementParser::SubstringFunctionContext *ctx) = 0;
  virtual void exitSubstringFunction(MySQLStatementParser::SubstringFunctionContext *ctx) = 0;

  virtual void enterExtractFunction(MySQLStatementParser::ExtractFunctionContext *ctx) = 0;
  virtual void exitExtractFunction(MySQLStatementParser::ExtractFunctionContext *ctx) = 0;

  virtual void enterCharFunction(MySQLStatementParser::CharFunctionContext *ctx) = 0;
  virtual void exitCharFunction(MySQLStatementParser::CharFunctionContext *ctx) = 0;

  virtual void enterTrimFunction(MySQLStatementParser::TrimFunctionContext *ctx) = 0;
  virtual void exitTrimFunction(MySQLStatementParser::TrimFunctionContext *ctx) = 0;

  virtual void enterValuesFunction(MySQLStatementParser::ValuesFunctionContext *ctx) = 0;
  virtual void exitValuesFunction(MySQLStatementParser::ValuesFunctionContext *ctx) = 0;

  virtual void enterWeightStringFunction(MySQLStatementParser::WeightStringFunctionContext *ctx) = 0;
  virtual void exitWeightStringFunction(MySQLStatementParser::WeightStringFunctionContext *ctx) = 0;

  virtual void enterLevelClause(MySQLStatementParser::LevelClauseContext *ctx) = 0;
  virtual void exitLevelClause(MySQLStatementParser::LevelClauseContext *ctx) = 0;

  virtual void enterLevelInWeightListElement(MySQLStatementParser::LevelInWeightListElementContext *ctx) = 0;
  virtual void exitLevelInWeightListElement(MySQLStatementParser::LevelInWeightListElementContext *ctx) = 0;

  virtual void enterRegularFunction(MySQLStatementParser::RegularFunctionContext *ctx) = 0;
  virtual void exitRegularFunction(MySQLStatementParser::RegularFunctionContext *ctx) = 0;

  virtual void enterShorthandRegularFunction(MySQLStatementParser::ShorthandRegularFunctionContext *ctx) = 0;
  virtual void exitShorthandRegularFunction(MySQLStatementParser::ShorthandRegularFunctionContext *ctx) = 0;

  virtual void enterCompleteRegularFunction(MySQLStatementParser::CompleteRegularFunctionContext *ctx) = 0;
  virtual void exitCompleteRegularFunction(MySQLStatementParser::CompleteRegularFunctionContext *ctx) = 0;

  virtual void enterRegularFunctionName(MySQLStatementParser::RegularFunctionNameContext *ctx) = 0;
  virtual void exitRegularFunctionName(MySQLStatementParser::RegularFunctionNameContext *ctx) = 0;

  virtual void enterMatchExpression(MySQLStatementParser::MatchExpressionContext *ctx) = 0;
  virtual void exitMatchExpression(MySQLStatementParser::MatchExpressionContext *ctx) = 0;

  virtual void enterMatchSearchModifier(MySQLStatementParser::MatchSearchModifierContext *ctx) = 0;
  virtual void exitMatchSearchModifier(MySQLStatementParser::MatchSearchModifierContext *ctx) = 0;

  virtual void enterCaseExpression(MySQLStatementParser::CaseExpressionContext *ctx) = 0;
  virtual void exitCaseExpression(MySQLStatementParser::CaseExpressionContext *ctx) = 0;

  virtual void enterDatetimeExpr(MySQLStatementParser::DatetimeExprContext *ctx) = 0;
  virtual void exitDatetimeExpr(MySQLStatementParser::DatetimeExprContext *ctx) = 0;

  virtual void enterBinaryLogFileIndexNumber(MySQLStatementParser::BinaryLogFileIndexNumberContext *ctx) = 0;
  virtual void exitBinaryLogFileIndexNumber(MySQLStatementParser::BinaryLogFileIndexNumberContext *ctx) = 0;

  virtual void enterCaseWhen(MySQLStatementParser::CaseWhenContext *ctx) = 0;
  virtual void exitCaseWhen(MySQLStatementParser::CaseWhenContext *ctx) = 0;

  virtual void enterCaseElse(MySQLStatementParser::CaseElseContext *ctx) = 0;
  virtual void exitCaseElse(MySQLStatementParser::CaseElseContext *ctx) = 0;

  virtual void enterIntervalExpression(MySQLStatementParser::IntervalExpressionContext *ctx) = 0;
  virtual void exitIntervalExpression(MySQLStatementParser::IntervalExpressionContext *ctx) = 0;

  virtual void enterIntervalValue(MySQLStatementParser::IntervalValueContext *ctx) = 0;
  virtual void exitIntervalValue(MySQLStatementParser::IntervalValueContext *ctx) = 0;

  virtual void enterIntervalUnit(MySQLStatementParser::IntervalUnitContext *ctx) = 0;
  virtual void exitIntervalUnit(MySQLStatementParser::IntervalUnitContext *ctx) = 0;

  virtual void enterOrderByClause(MySQLStatementParser::OrderByClauseContext *ctx) = 0;
  virtual void exitOrderByClause(MySQLStatementParser::OrderByClauseContext *ctx) = 0;

  virtual void enterOrderByItem(MySQLStatementParser::OrderByItemContext *ctx) = 0;
  virtual void exitOrderByItem(MySQLStatementParser::OrderByItemContext *ctx) = 0;

  virtual void enterDataType(MySQLStatementParser::DataTypeContext *ctx) = 0;
  virtual void exitDataType(MySQLStatementParser::DataTypeContext *ctx) = 0;

  virtual void enterStringList(MySQLStatementParser::StringListContext *ctx) = 0;
  virtual void exitStringList(MySQLStatementParser::StringListContext *ctx) = 0;

  virtual void enterTextString(MySQLStatementParser::TextStringContext *ctx) = 0;
  virtual void exitTextString(MySQLStatementParser::TextStringContext *ctx) = 0;

  virtual void enterTextStringHash(MySQLStatementParser::TextStringHashContext *ctx) = 0;
  virtual void exitTextStringHash(MySQLStatementParser::TextStringHashContext *ctx) = 0;

  virtual void enterFieldOptions(MySQLStatementParser::FieldOptionsContext *ctx) = 0;
  virtual void exitFieldOptions(MySQLStatementParser::FieldOptionsContext *ctx) = 0;

  virtual void enterPrecision(MySQLStatementParser::PrecisionContext *ctx) = 0;
  virtual void exitPrecision(MySQLStatementParser::PrecisionContext *ctx) = 0;

  virtual void enterTypeDatetimePrecision(MySQLStatementParser::TypeDatetimePrecisionContext *ctx) = 0;
  virtual void exitTypeDatetimePrecision(MySQLStatementParser::TypeDatetimePrecisionContext *ctx) = 0;

  virtual void enterCharsetWithOptBinary(MySQLStatementParser::CharsetWithOptBinaryContext *ctx) = 0;
  virtual void exitCharsetWithOptBinary(MySQLStatementParser::CharsetWithOptBinaryContext *ctx) = 0;

  virtual void enterAscii(MySQLStatementParser::AsciiContext *ctx) = 0;
  virtual void exitAscii(MySQLStatementParser::AsciiContext *ctx) = 0;

  virtual void enterUnicode(MySQLStatementParser::UnicodeContext *ctx) = 0;
  virtual void exitUnicode(MySQLStatementParser::UnicodeContext *ctx) = 0;

  virtual void enterCharset(MySQLStatementParser::CharsetContext *ctx) = 0;
  virtual void exitCharset(MySQLStatementParser::CharsetContext *ctx) = 0;

  virtual void enterDefaultCollation(MySQLStatementParser::DefaultCollationContext *ctx) = 0;
  virtual void exitDefaultCollation(MySQLStatementParser::DefaultCollationContext *ctx) = 0;

  virtual void enterDefaultEncryption(MySQLStatementParser::DefaultEncryptionContext *ctx) = 0;
  virtual void exitDefaultEncryption(MySQLStatementParser::DefaultEncryptionContext *ctx) = 0;

  virtual void enterDefaultCharset(MySQLStatementParser::DefaultCharsetContext *ctx) = 0;
  virtual void exitDefaultCharset(MySQLStatementParser::DefaultCharsetContext *ctx) = 0;

  virtual void enterSignedLiteral(MySQLStatementParser::SignedLiteralContext *ctx) = 0;
  virtual void exitSignedLiteral(MySQLStatementParser::SignedLiteralContext *ctx) = 0;

  virtual void enterNow(MySQLStatementParser::NowContext *ctx) = 0;
  virtual void exitNow(MySQLStatementParser::NowContext *ctx) = 0;

  virtual void enterColumnFormat(MySQLStatementParser::ColumnFormatContext *ctx) = 0;
  virtual void exitColumnFormat(MySQLStatementParser::ColumnFormatContext *ctx) = 0;

  virtual void enterStorageMedia(MySQLStatementParser::StorageMediaContext *ctx) = 0;
  virtual void exitStorageMedia(MySQLStatementParser::StorageMediaContext *ctx) = 0;

  virtual void enterDirection(MySQLStatementParser::DirectionContext *ctx) = 0;
  virtual void exitDirection(MySQLStatementParser::DirectionContext *ctx) = 0;

  virtual void enterKeyOrIndex(MySQLStatementParser::KeyOrIndexContext *ctx) = 0;
  virtual void exitKeyOrIndex(MySQLStatementParser::KeyOrIndexContext *ctx) = 0;

  virtual void enterFieldLength(MySQLStatementParser::FieldLengthContext *ctx) = 0;
  virtual void exitFieldLength(MySQLStatementParser::FieldLengthContext *ctx) = 0;

  virtual void enterCharacterSet(MySQLStatementParser::CharacterSetContext *ctx) = 0;
  virtual void exitCharacterSet(MySQLStatementParser::CharacterSetContext *ctx) = 0;

  virtual void enterCollateClause(MySQLStatementParser::CollateClauseContext *ctx) = 0;
  virtual void exitCollateClause(MySQLStatementParser::CollateClauseContext *ctx) = 0;

  virtual void enterFieldOrVarSpec(MySQLStatementParser::FieldOrVarSpecContext *ctx) = 0;
  virtual void exitFieldOrVarSpec(MySQLStatementParser::FieldOrVarSpecContext *ctx) = 0;

  virtual void enterNotExistClause(MySQLStatementParser::NotExistClauseContext *ctx) = 0;
  virtual void exitNotExistClause(MySQLStatementParser::NotExistClauseContext *ctx) = 0;

  virtual void enterExistClause(MySQLStatementParser::ExistClauseContext *ctx) = 0;
  virtual void exitExistClause(MySQLStatementParser::ExistClauseContext *ctx) = 0;

  virtual void enterConnectionId(MySQLStatementParser::ConnectionIdContext *ctx) = 0;
  virtual void exitConnectionId(MySQLStatementParser::ConnectionIdContext *ctx) = 0;

  virtual void enterLabelName(MySQLStatementParser::LabelNameContext *ctx) = 0;
  virtual void exitLabelName(MySQLStatementParser::LabelNameContext *ctx) = 0;

  virtual void enterCursorName(MySQLStatementParser::CursorNameContext *ctx) = 0;
  virtual void exitCursorName(MySQLStatementParser::CursorNameContext *ctx) = 0;

  virtual void enterConditionName(MySQLStatementParser::ConditionNameContext *ctx) = 0;
  virtual void exitConditionName(MySQLStatementParser::ConditionNameContext *ctx) = 0;

  virtual void enterUnionOption(MySQLStatementParser::UnionOptionContext *ctx) = 0;
  virtual void exitUnionOption(MySQLStatementParser::UnionOptionContext *ctx) = 0;

  virtual void enterNoWriteToBinLog(MySQLStatementParser::NoWriteToBinLogContext *ctx) = 0;
  virtual void exitNoWriteToBinLog(MySQLStatementParser::NoWriteToBinLogContext *ctx) = 0;

  virtual void enterChannelOption(MySQLStatementParser::ChannelOptionContext *ctx) = 0;
  virtual void exitChannelOption(MySQLStatementParser::ChannelOptionContext *ctx) = 0;

  virtual void enterPreparedStatement(MySQLStatementParser::PreparedStatementContext *ctx) = 0;
  virtual void exitPreparedStatement(MySQLStatementParser::PreparedStatementContext *ctx) = 0;

  virtual void enterExecuteStatement(MySQLStatementParser::ExecuteStatementContext *ctx) = 0;
  virtual void exitExecuteStatement(MySQLStatementParser::ExecuteStatementContext *ctx) = 0;

  virtual void enterExecuteVarList(MySQLStatementParser::ExecuteVarListContext *ctx) = 0;
  virtual void exitExecuteVarList(MySQLStatementParser::ExecuteVarListContext *ctx) = 0;


};


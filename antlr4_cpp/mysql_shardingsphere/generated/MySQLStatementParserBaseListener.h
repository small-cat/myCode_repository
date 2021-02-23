
// Generated from MySQLStatementParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "MySQLStatementParserListener.h"


/**
 * This class provides an empty implementation of MySQLStatementParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  MySQLStatementParserBaseListener : public MySQLStatementParserListener {
public:

  virtual void enterExecute(MySQLStatementParser::ExecuteContext * /*ctx*/) override { }
  virtual void exitExecute(MySQLStatementParser::ExecuteContext * /*ctx*/) override { }

  virtual void enterInsert(MySQLStatementParser::InsertContext * /*ctx*/) override { }
  virtual void exitInsert(MySQLStatementParser::InsertContext * /*ctx*/) override { }

  virtual void enterInsertSpecification(MySQLStatementParser::InsertSpecificationContext * /*ctx*/) override { }
  virtual void exitInsertSpecification(MySQLStatementParser::InsertSpecificationContext * /*ctx*/) override { }

  virtual void enterInsertValuesClause(MySQLStatementParser::InsertValuesClauseContext * /*ctx*/) override { }
  virtual void exitInsertValuesClause(MySQLStatementParser::InsertValuesClauseContext * /*ctx*/) override { }

  virtual void enterFields(MySQLStatementParser::FieldsContext * /*ctx*/) override { }
  virtual void exitFields(MySQLStatementParser::FieldsContext * /*ctx*/) override { }

  virtual void enterInsertIdentifier(MySQLStatementParser::InsertIdentifierContext * /*ctx*/) override { }
  virtual void exitInsertIdentifier(MySQLStatementParser::InsertIdentifierContext * /*ctx*/) override { }

  virtual void enterTableWild(MySQLStatementParser::TableWildContext * /*ctx*/) override { }
  virtual void exitTableWild(MySQLStatementParser::TableWildContext * /*ctx*/) override { }

  virtual void enterInsertSelectClause(MySQLStatementParser::InsertSelectClauseContext * /*ctx*/) override { }
  virtual void exitInsertSelectClause(MySQLStatementParser::InsertSelectClauseContext * /*ctx*/) override { }

  virtual void enterOnDuplicateKeyClause(MySQLStatementParser::OnDuplicateKeyClauseContext * /*ctx*/) override { }
  virtual void exitOnDuplicateKeyClause(MySQLStatementParser::OnDuplicateKeyClauseContext * /*ctx*/) override { }

  virtual void enterValueReference(MySQLStatementParser::ValueReferenceContext * /*ctx*/) override { }
  virtual void exitValueReference(MySQLStatementParser::ValueReferenceContext * /*ctx*/) override { }

  virtual void enterDerivedColumns(MySQLStatementParser::DerivedColumnsContext * /*ctx*/) override { }
  virtual void exitDerivedColumns(MySQLStatementParser::DerivedColumnsContext * /*ctx*/) override { }

  virtual void enterReplace(MySQLStatementParser::ReplaceContext * /*ctx*/) override { }
  virtual void exitReplace(MySQLStatementParser::ReplaceContext * /*ctx*/) override { }

  virtual void enterReplaceSpecification(MySQLStatementParser::ReplaceSpecificationContext * /*ctx*/) override { }
  virtual void exitReplaceSpecification(MySQLStatementParser::ReplaceSpecificationContext * /*ctx*/) override { }

  virtual void enterReplaceValuesClause(MySQLStatementParser::ReplaceValuesClauseContext * /*ctx*/) override { }
  virtual void exitReplaceValuesClause(MySQLStatementParser::ReplaceValuesClauseContext * /*ctx*/) override { }

  virtual void enterReplaceSelectClause(MySQLStatementParser::ReplaceSelectClauseContext * /*ctx*/) override { }
  virtual void exitReplaceSelectClause(MySQLStatementParser::ReplaceSelectClauseContext * /*ctx*/) override { }

  virtual void enterUpdate(MySQLStatementParser::UpdateContext * /*ctx*/) override { }
  virtual void exitUpdate(MySQLStatementParser::UpdateContext * /*ctx*/) override { }

  virtual void enterUpdateSpecification_(MySQLStatementParser::UpdateSpecification_Context * /*ctx*/) override { }
  virtual void exitUpdateSpecification_(MySQLStatementParser::UpdateSpecification_Context * /*ctx*/) override { }

  virtual void enterAssignment(MySQLStatementParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(MySQLStatementParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterSetAssignmentsClause(MySQLStatementParser::SetAssignmentsClauseContext * /*ctx*/) override { }
  virtual void exitSetAssignmentsClause(MySQLStatementParser::SetAssignmentsClauseContext * /*ctx*/) override { }

  virtual void enterAssignmentValues(MySQLStatementParser::AssignmentValuesContext * /*ctx*/) override { }
  virtual void exitAssignmentValues(MySQLStatementParser::AssignmentValuesContext * /*ctx*/) override { }

  virtual void enterAssignmentValue(MySQLStatementParser::AssignmentValueContext * /*ctx*/) override { }
  virtual void exitAssignmentValue(MySQLStatementParser::AssignmentValueContext * /*ctx*/) override { }

  virtual void enterBlobValue(MySQLStatementParser::BlobValueContext * /*ctx*/) override { }
  virtual void exitBlobValue(MySQLStatementParser::BlobValueContext * /*ctx*/) override { }

  virtual void enterDelete_stmt(MySQLStatementParser::Delete_stmtContext * /*ctx*/) override { }
  virtual void exitDelete_stmt(MySQLStatementParser::Delete_stmtContext * /*ctx*/) override { }

  virtual void enterDeleteSpecification(MySQLStatementParser::DeleteSpecificationContext * /*ctx*/) override { }
  virtual void exitDeleteSpecification(MySQLStatementParser::DeleteSpecificationContext * /*ctx*/) override { }

  virtual void enterSingleTableClause(MySQLStatementParser::SingleTableClauseContext * /*ctx*/) override { }
  virtual void exitSingleTableClause(MySQLStatementParser::SingleTableClauseContext * /*ctx*/) override { }

  virtual void enterMultipleTablesClause(MySQLStatementParser::MultipleTablesClauseContext * /*ctx*/) override { }
  virtual void exitMultipleTablesClause(MySQLStatementParser::MultipleTablesClauseContext * /*ctx*/) override { }

  virtual void enterSelect(MySQLStatementParser::SelectContext * /*ctx*/) override { }
  virtual void exitSelect(MySQLStatementParser::SelectContext * /*ctx*/) override { }

  virtual void enterSelectWithInto(MySQLStatementParser::SelectWithIntoContext * /*ctx*/) override { }
  virtual void exitSelectWithInto(MySQLStatementParser::SelectWithIntoContext * /*ctx*/) override { }

  virtual void enterQueryExpression(MySQLStatementParser::QueryExpressionContext * /*ctx*/) override { }
  virtual void exitQueryExpression(MySQLStatementParser::QueryExpressionContext * /*ctx*/) override { }

  virtual void enterQueryExpressionBody(MySQLStatementParser::QueryExpressionBodyContext * /*ctx*/) override { }
  virtual void exitQueryExpressionBody(MySQLStatementParser::QueryExpressionBodyContext * /*ctx*/) override { }

  virtual void enterQueryExpressionParens(MySQLStatementParser::QueryExpressionParensContext * /*ctx*/) override { }
  virtual void exitQueryExpressionParens(MySQLStatementParser::QueryExpressionParensContext * /*ctx*/) override { }

  virtual void enterQueryPrimary(MySQLStatementParser::QueryPrimaryContext * /*ctx*/) override { }
  virtual void exitQueryPrimary(MySQLStatementParser::QueryPrimaryContext * /*ctx*/) override { }

  virtual void enterQuerySpecification(MySQLStatementParser::QuerySpecificationContext * /*ctx*/) override { }
  virtual void exitQuerySpecification(MySQLStatementParser::QuerySpecificationContext * /*ctx*/) override { }

  virtual void enterCall(MySQLStatementParser::CallContext * /*ctx*/) override { }
  virtual void exitCall(MySQLStatementParser::CallContext * /*ctx*/) override { }

  virtual void enterDoStatement(MySQLStatementParser::DoStatementContext * /*ctx*/) override { }
  virtual void exitDoStatement(MySQLStatementParser::DoStatementContext * /*ctx*/) override { }

  virtual void enterHandlerStatement(MySQLStatementParser::HandlerStatementContext * /*ctx*/) override { }
  virtual void exitHandlerStatement(MySQLStatementParser::HandlerStatementContext * /*ctx*/) override { }

  virtual void enterHandlerOpenStatement(MySQLStatementParser::HandlerOpenStatementContext * /*ctx*/) override { }
  virtual void exitHandlerOpenStatement(MySQLStatementParser::HandlerOpenStatementContext * /*ctx*/) override { }

  virtual void enterHandlerReadIndexStatement(MySQLStatementParser::HandlerReadIndexStatementContext * /*ctx*/) override { }
  virtual void exitHandlerReadIndexStatement(MySQLStatementParser::HandlerReadIndexStatementContext * /*ctx*/) override { }

  virtual void enterHandlerReadStatement(MySQLStatementParser::HandlerReadStatementContext * /*ctx*/) override { }
  virtual void exitHandlerReadStatement(MySQLStatementParser::HandlerReadStatementContext * /*ctx*/) override { }

  virtual void enterHandlerCloseStatement(MySQLStatementParser::HandlerCloseStatementContext * /*ctx*/) override { }
  virtual void exitHandlerCloseStatement(MySQLStatementParser::HandlerCloseStatementContext * /*ctx*/) override { }

  virtual void enterImportStatement(MySQLStatementParser::ImportStatementContext * /*ctx*/) override { }
  virtual void exitImportStatement(MySQLStatementParser::ImportStatementContext * /*ctx*/) override { }

  virtual void enterLoadStatement(MySQLStatementParser::LoadStatementContext * /*ctx*/) override { }
  virtual void exitLoadStatement(MySQLStatementParser::LoadStatementContext * /*ctx*/) override { }

  virtual void enterLoadDataStatement(MySQLStatementParser::LoadDataStatementContext * /*ctx*/) override { }
  virtual void exitLoadDataStatement(MySQLStatementParser::LoadDataStatementContext * /*ctx*/) override { }

  virtual void enterLoadXmlStatement(MySQLStatementParser::LoadXmlStatementContext * /*ctx*/) override { }
  virtual void exitLoadXmlStatement(MySQLStatementParser::LoadXmlStatementContext * /*ctx*/) override { }

  virtual void enterExplicitTable(MySQLStatementParser::ExplicitTableContext * /*ctx*/) override { }
  virtual void exitExplicitTable(MySQLStatementParser::ExplicitTableContext * /*ctx*/) override { }

  virtual void enterTableValueConstructor(MySQLStatementParser::TableValueConstructorContext * /*ctx*/) override { }
  virtual void exitTableValueConstructor(MySQLStatementParser::TableValueConstructorContext * /*ctx*/) override { }

  virtual void enterRowConstructorList(MySQLStatementParser::RowConstructorListContext * /*ctx*/) override { }
  virtual void exitRowConstructorList(MySQLStatementParser::RowConstructorListContext * /*ctx*/) override { }

  virtual void enterWithClause(MySQLStatementParser::WithClauseContext * /*ctx*/) override { }
  virtual void exitWithClause(MySQLStatementParser::WithClauseContext * /*ctx*/) override { }

  virtual void enterCteClause(MySQLStatementParser::CteClauseContext * /*ctx*/) override { }
  virtual void exitCteClause(MySQLStatementParser::CteClauseContext * /*ctx*/) override { }

  virtual void enterSelectSpecification(MySQLStatementParser::SelectSpecificationContext * /*ctx*/) override { }
  virtual void exitSelectSpecification(MySQLStatementParser::SelectSpecificationContext * /*ctx*/) override { }

  virtual void enterDuplicateSpecification(MySQLStatementParser::DuplicateSpecificationContext * /*ctx*/) override { }
  virtual void exitDuplicateSpecification(MySQLStatementParser::DuplicateSpecificationContext * /*ctx*/) override { }

  virtual void enterProjections(MySQLStatementParser::ProjectionsContext * /*ctx*/) override { }
  virtual void exitProjections(MySQLStatementParser::ProjectionsContext * /*ctx*/) override { }

  virtual void enterProjection(MySQLStatementParser::ProjectionContext * /*ctx*/) override { }
  virtual void exitProjection(MySQLStatementParser::ProjectionContext * /*ctx*/) override { }

  virtual void enterUnqualifiedShorthand(MySQLStatementParser::UnqualifiedShorthandContext * /*ctx*/) override { }
  virtual void exitUnqualifiedShorthand(MySQLStatementParser::UnqualifiedShorthandContext * /*ctx*/) override { }

  virtual void enterQualifiedShorthand(MySQLStatementParser::QualifiedShorthandContext * /*ctx*/) override { }
  virtual void exitQualifiedShorthand(MySQLStatementParser::QualifiedShorthandContext * /*ctx*/) override { }

  virtual void enterFromClause(MySQLStatementParser::FromClauseContext * /*ctx*/) override { }
  virtual void exitFromClause(MySQLStatementParser::FromClauseContext * /*ctx*/) override { }

  virtual void enterTableReferences(MySQLStatementParser::TableReferencesContext * /*ctx*/) override { }
  virtual void exitTableReferences(MySQLStatementParser::TableReferencesContext * /*ctx*/) override { }

  virtual void enterEscapedTableReference(MySQLStatementParser::EscapedTableReferenceContext * /*ctx*/) override { }
  virtual void exitEscapedTableReference(MySQLStatementParser::EscapedTableReferenceContext * /*ctx*/) override { }

  virtual void enterTableReference(MySQLStatementParser::TableReferenceContext * /*ctx*/) override { }
  virtual void exitTableReference(MySQLStatementParser::TableReferenceContext * /*ctx*/) override { }

  virtual void enterTableFactor(MySQLStatementParser::TableFactorContext * /*ctx*/) override { }
  virtual void exitTableFactor(MySQLStatementParser::TableFactorContext * /*ctx*/) override { }

  virtual void enterPartitionNames(MySQLStatementParser::PartitionNamesContext * /*ctx*/) override { }
  virtual void exitPartitionNames(MySQLStatementParser::PartitionNamesContext * /*ctx*/) override { }

  virtual void enterIndexHintList(MySQLStatementParser::IndexHintListContext * /*ctx*/) override { }
  virtual void exitIndexHintList(MySQLStatementParser::IndexHintListContext * /*ctx*/) override { }

  virtual void enterIndexHint(MySQLStatementParser::IndexHintContext * /*ctx*/) override { }
  virtual void exitIndexHint(MySQLStatementParser::IndexHintContext * /*ctx*/) override { }

  virtual void enterJoinedTable(MySQLStatementParser::JoinedTableContext * /*ctx*/) override { }
  virtual void exitJoinedTable(MySQLStatementParser::JoinedTableContext * /*ctx*/) override { }

  virtual void enterInnerJoinType(MySQLStatementParser::InnerJoinTypeContext * /*ctx*/) override { }
  virtual void exitInnerJoinType(MySQLStatementParser::InnerJoinTypeContext * /*ctx*/) override { }

  virtual void enterOuterJoinType(MySQLStatementParser::OuterJoinTypeContext * /*ctx*/) override { }
  virtual void exitOuterJoinType(MySQLStatementParser::OuterJoinTypeContext * /*ctx*/) override { }

  virtual void enterNaturalJoinType(MySQLStatementParser::NaturalJoinTypeContext * /*ctx*/) override { }
  virtual void exitNaturalJoinType(MySQLStatementParser::NaturalJoinTypeContext * /*ctx*/) override { }

  virtual void enterJoinSpecification(MySQLStatementParser::JoinSpecificationContext * /*ctx*/) override { }
  virtual void exitJoinSpecification(MySQLStatementParser::JoinSpecificationContext * /*ctx*/) override { }

  virtual void enterWhereClause(MySQLStatementParser::WhereClauseContext * /*ctx*/) override { }
  virtual void exitWhereClause(MySQLStatementParser::WhereClauseContext * /*ctx*/) override { }

  virtual void enterGroupByClause(MySQLStatementParser::GroupByClauseContext * /*ctx*/) override { }
  virtual void exitGroupByClause(MySQLStatementParser::GroupByClauseContext * /*ctx*/) override { }

  virtual void enterHavingClause(MySQLStatementParser::HavingClauseContext * /*ctx*/) override { }
  virtual void exitHavingClause(MySQLStatementParser::HavingClauseContext * /*ctx*/) override { }

  virtual void enterLimitClause(MySQLStatementParser::LimitClauseContext * /*ctx*/) override { }
  virtual void exitLimitClause(MySQLStatementParser::LimitClauseContext * /*ctx*/) override { }

  virtual void enterLimitRowCount(MySQLStatementParser::LimitRowCountContext * /*ctx*/) override { }
  virtual void exitLimitRowCount(MySQLStatementParser::LimitRowCountContext * /*ctx*/) override { }

  virtual void enterLimitOffset(MySQLStatementParser::LimitOffsetContext * /*ctx*/) override { }
  virtual void exitLimitOffset(MySQLStatementParser::LimitOffsetContext * /*ctx*/) override { }

  virtual void enterWindowClause(MySQLStatementParser::WindowClauseContext * /*ctx*/) override { }
  virtual void exitWindowClause(MySQLStatementParser::WindowClauseContext * /*ctx*/) override { }

  virtual void enterWindowItem(MySQLStatementParser::WindowItemContext * /*ctx*/) override { }
  virtual void exitWindowItem(MySQLStatementParser::WindowItemContext * /*ctx*/) override { }

  virtual void enterSubquery(MySQLStatementParser::SubqueryContext * /*ctx*/) override { }
  virtual void exitSubquery(MySQLStatementParser::SubqueryContext * /*ctx*/) override { }

  virtual void enterSelectLinesInto(MySQLStatementParser::SelectLinesIntoContext * /*ctx*/) override { }
  virtual void exitSelectLinesInto(MySQLStatementParser::SelectLinesIntoContext * /*ctx*/) override { }

  virtual void enterSelectFieldsInto(MySQLStatementParser::SelectFieldsIntoContext * /*ctx*/) override { }
  virtual void exitSelectFieldsInto(MySQLStatementParser::SelectFieldsIntoContext * /*ctx*/) override { }

  virtual void enterSelectIntoExpression(MySQLStatementParser::SelectIntoExpressionContext * /*ctx*/) override { }
  virtual void exitSelectIntoExpression(MySQLStatementParser::SelectIntoExpressionContext * /*ctx*/) override { }

  virtual void enterLockClause(MySQLStatementParser::LockClauseContext * /*ctx*/) override { }
  virtual void exitLockClause(MySQLStatementParser::LockClauseContext * /*ctx*/) override { }

  virtual void enterLockClauseList(MySQLStatementParser::LockClauseListContext * /*ctx*/) override { }
  virtual void exitLockClauseList(MySQLStatementParser::LockClauseListContext * /*ctx*/) override { }

  virtual void enterLockStrength(MySQLStatementParser::LockStrengthContext * /*ctx*/) override { }
  virtual void exitLockStrength(MySQLStatementParser::LockStrengthContext * /*ctx*/) override { }

  virtual void enterLockedRowAction(MySQLStatementParser::LockedRowActionContext * /*ctx*/) override { }
  virtual void exitLockedRowAction(MySQLStatementParser::LockedRowActionContext * /*ctx*/) override { }

  virtual void enterTableLockingList(MySQLStatementParser::TableLockingListContext * /*ctx*/) override { }
  virtual void exitTableLockingList(MySQLStatementParser::TableLockingListContext * /*ctx*/) override { }

  virtual void enterTableIdentOptWild(MySQLStatementParser::TableIdentOptWildContext * /*ctx*/) override { }
  virtual void exitTableIdentOptWild(MySQLStatementParser::TableIdentOptWildContext * /*ctx*/) override { }

  virtual void enterTableAliasRefList(MySQLStatementParser::TableAliasRefListContext * /*ctx*/) override { }
  virtual void exitTableAliasRefList(MySQLStatementParser::TableAliasRefListContext * /*ctx*/) override { }

  virtual void enterAlterStatement(MySQLStatementParser::AlterStatementContext * /*ctx*/) override { }
  virtual void exitAlterStatement(MySQLStatementParser::AlterStatementContext * /*ctx*/) override { }

  virtual void enterCreateTable(MySQLStatementParser::CreateTableContext * /*ctx*/) override { }
  virtual void exitCreateTable(MySQLStatementParser::CreateTableContext * /*ctx*/) override { }

  virtual void enterPartitionClause(MySQLStatementParser::PartitionClauseContext * /*ctx*/) override { }
  virtual void exitPartitionClause(MySQLStatementParser::PartitionClauseContext * /*ctx*/) override { }

  virtual void enterPartitionTypeDef(MySQLStatementParser::PartitionTypeDefContext * /*ctx*/) override { }
  virtual void exitPartitionTypeDef(MySQLStatementParser::PartitionTypeDefContext * /*ctx*/) override { }

  virtual void enterSubPartitions(MySQLStatementParser::SubPartitionsContext * /*ctx*/) override { }
  virtual void exitSubPartitions(MySQLStatementParser::SubPartitionsContext * /*ctx*/) override { }

  virtual void enterPartitionKeyAlgorithm(MySQLStatementParser::PartitionKeyAlgorithmContext * /*ctx*/) override { }
  virtual void exitPartitionKeyAlgorithm(MySQLStatementParser::PartitionKeyAlgorithmContext * /*ctx*/) override { }

  virtual void enterDuplicateAsQueryExpression(MySQLStatementParser::DuplicateAsQueryExpressionContext * /*ctx*/) override { }
  virtual void exitDuplicateAsQueryExpression(MySQLStatementParser::DuplicateAsQueryExpressionContext * /*ctx*/) override { }

  virtual void enterAlterTable(MySQLStatementParser::AlterTableContext * /*ctx*/) override { }
  virtual void exitAlterTable(MySQLStatementParser::AlterTableContext * /*ctx*/) override { }

  virtual void enterStandaloneAlterTableAction(MySQLStatementParser::StandaloneAlterTableActionContext * /*ctx*/) override { }
  virtual void exitStandaloneAlterTableAction(MySQLStatementParser::StandaloneAlterTableActionContext * /*ctx*/) override { }

  virtual void enterAlterTableActions(MySQLStatementParser::AlterTableActionsContext * /*ctx*/) override { }
  virtual void exitAlterTableActions(MySQLStatementParser::AlterTableActionsContext * /*ctx*/) override { }

  virtual void enterAlterTablePartitionOptions(MySQLStatementParser::AlterTablePartitionOptionsContext * /*ctx*/) override { }
  virtual void exitAlterTablePartitionOptions(MySQLStatementParser::AlterTablePartitionOptionsContext * /*ctx*/) override { }

  virtual void enterAlterCommandList(MySQLStatementParser::AlterCommandListContext * /*ctx*/) override { }
  virtual void exitAlterCommandList(MySQLStatementParser::AlterCommandListContext * /*ctx*/) override { }

  virtual void enterAlterList(MySQLStatementParser::AlterListContext * /*ctx*/) override { }
  virtual void exitAlterList(MySQLStatementParser::AlterListContext * /*ctx*/) override { }

  virtual void enterCreateTableOptionsSpaceSeparated(MySQLStatementParser::CreateTableOptionsSpaceSeparatedContext * /*ctx*/) override { }
  virtual void exitCreateTableOptionsSpaceSeparated(MySQLStatementParser::CreateTableOptionsSpaceSeparatedContext * /*ctx*/) override { }

  virtual void enterAddColumn(MySQLStatementParser::AddColumnContext * /*ctx*/) override { }
  virtual void exitAddColumn(MySQLStatementParser::AddColumnContext * /*ctx*/) override { }

  virtual void enterAddTableConstraint(MySQLStatementParser::AddTableConstraintContext * /*ctx*/) override { }
  virtual void exitAddTableConstraint(MySQLStatementParser::AddTableConstraintContext * /*ctx*/) override { }

  virtual void enterChangeColumn(MySQLStatementParser::ChangeColumnContext * /*ctx*/) override { }
  virtual void exitChangeColumn(MySQLStatementParser::ChangeColumnContext * /*ctx*/) override { }

  virtual void enterModifyColumn(MySQLStatementParser::ModifyColumnContext * /*ctx*/) override { }
  virtual void exitModifyColumn(MySQLStatementParser::ModifyColumnContext * /*ctx*/) override { }

  virtual void enterAlterTableDrop(MySQLStatementParser::AlterTableDropContext * /*ctx*/) override { }
  virtual void exitAlterTableDrop(MySQLStatementParser::AlterTableDropContext * /*ctx*/) override { }

  virtual void enterDisableKeys(MySQLStatementParser::DisableKeysContext * /*ctx*/) override { }
  virtual void exitDisableKeys(MySQLStatementParser::DisableKeysContext * /*ctx*/) override { }

  virtual void enterEnableKeys(MySQLStatementParser::EnableKeysContext * /*ctx*/) override { }
  virtual void exitEnableKeys(MySQLStatementParser::EnableKeysContext * /*ctx*/) override { }

  virtual void enterAlterColumn(MySQLStatementParser::AlterColumnContext * /*ctx*/) override { }
  virtual void exitAlterColumn(MySQLStatementParser::AlterColumnContext * /*ctx*/) override { }

  virtual void enterAlterIndex(MySQLStatementParser::AlterIndexContext * /*ctx*/) override { }
  virtual void exitAlterIndex(MySQLStatementParser::AlterIndexContext * /*ctx*/) override { }

  virtual void enterAlterCheck(MySQLStatementParser::AlterCheckContext * /*ctx*/) override { }
  virtual void exitAlterCheck(MySQLStatementParser::AlterCheckContext * /*ctx*/) override { }

  virtual void enterAlterConstraint(MySQLStatementParser::AlterConstraintContext * /*ctx*/) override { }
  virtual void exitAlterConstraint(MySQLStatementParser::AlterConstraintContext * /*ctx*/) override { }

  virtual void enterRenameColumn(MySQLStatementParser::RenameColumnContext * /*ctx*/) override { }
  virtual void exitRenameColumn(MySQLStatementParser::RenameColumnContext * /*ctx*/) override { }

  virtual void enterAlterRenameTable(MySQLStatementParser::AlterRenameTableContext * /*ctx*/) override { }
  virtual void exitAlterRenameTable(MySQLStatementParser::AlterRenameTableContext * /*ctx*/) override { }

  virtual void enterRenameIndex(MySQLStatementParser::RenameIndexContext * /*ctx*/) override { }
  virtual void exitRenameIndex(MySQLStatementParser::RenameIndexContext * /*ctx*/) override { }

  virtual void enterAlterConvert(MySQLStatementParser::AlterConvertContext * /*ctx*/) override { }
  virtual void exitAlterConvert(MySQLStatementParser::AlterConvertContext * /*ctx*/) override { }

  virtual void enterAlterTableForce(MySQLStatementParser::AlterTableForceContext * /*ctx*/) override { }
  virtual void exitAlterTableForce(MySQLStatementParser::AlterTableForceContext * /*ctx*/) override { }

  virtual void enterAlterTableOrder(MySQLStatementParser::AlterTableOrderContext * /*ctx*/) override { }
  virtual void exitAlterTableOrder(MySQLStatementParser::AlterTableOrderContext * /*ctx*/) override { }

  virtual void enterAlterOrderList(MySQLStatementParser::AlterOrderListContext * /*ctx*/) override { }
  virtual void exitAlterOrderList(MySQLStatementParser::AlterOrderListContext * /*ctx*/) override { }

  virtual void enterTableConstraintDef(MySQLStatementParser::TableConstraintDefContext * /*ctx*/) override { }
  virtual void exitTableConstraintDef(MySQLStatementParser::TableConstraintDefContext * /*ctx*/) override { }

  virtual void enterAlterCommandsModifierList(MySQLStatementParser::AlterCommandsModifierListContext * /*ctx*/) override { }
  virtual void exitAlterCommandsModifierList(MySQLStatementParser::AlterCommandsModifierListContext * /*ctx*/) override { }

  virtual void enterAlterCommandsModifier(MySQLStatementParser::AlterCommandsModifierContext * /*ctx*/) override { }
  virtual void exitAlterCommandsModifier(MySQLStatementParser::AlterCommandsModifierContext * /*ctx*/) override { }

  virtual void enterWithValidation(MySQLStatementParser::WithValidationContext * /*ctx*/) override { }
  virtual void exitWithValidation(MySQLStatementParser::WithValidationContext * /*ctx*/) override { }

  virtual void enterStandaloneAlterCommands(MySQLStatementParser::StandaloneAlterCommandsContext * /*ctx*/) override { }
  virtual void exitStandaloneAlterCommands(MySQLStatementParser::StandaloneAlterCommandsContext * /*ctx*/) override { }

  virtual void enterAlterPartition(MySQLStatementParser::AlterPartitionContext * /*ctx*/) override { }
  virtual void exitAlterPartition(MySQLStatementParser::AlterPartitionContext * /*ctx*/) override { }

  virtual void enterConstraintName(MySQLStatementParser::ConstraintNameContext * /*ctx*/) override { }
  virtual void exitConstraintName(MySQLStatementParser::ConstraintNameContext * /*ctx*/) override { }

  virtual void enterTableElementList(MySQLStatementParser::TableElementListContext * /*ctx*/) override { }
  virtual void exitTableElementList(MySQLStatementParser::TableElementListContext * /*ctx*/) override { }

  virtual void enterTableElement(MySQLStatementParser::TableElementContext * /*ctx*/) override { }
  virtual void exitTableElement(MySQLStatementParser::TableElementContext * /*ctx*/) override { }

  virtual void enterRestrict(MySQLStatementParser::RestrictContext * /*ctx*/) override { }
  virtual void exitRestrict(MySQLStatementParser::RestrictContext * /*ctx*/) override { }

  virtual void enterFulltextIndexOption(MySQLStatementParser::FulltextIndexOptionContext * /*ctx*/) override { }
  virtual void exitFulltextIndexOption(MySQLStatementParser::FulltextIndexOptionContext * /*ctx*/) override { }

  virtual void enterDropTable(MySQLStatementParser::DropTableContext * /*ctx*/) override { }
  virtual void exitDropTable(MySQLStatementParser::DropTableContext * /*ctx*/) override { }

  virtual void enterDropIndex(MySQLStatementParser::DropIndexContext * /*ctx*/) override { }
  virtual void exitDropIndex(MySQLStatementParser::DropIndexContext * /*ctx*/) override { }

  virtual void enterAlterAlgorithmOption(MySQLStatementParser::AlterAlgorithmOptionContext * /*ctx*/) override { }
  virtual void exitAlterAlgorithmOption(MySQLStatementParser::AlterAlgorithmOptionContext * /*ctx*/) override { }

  virtual void enterAlterLockOption(MySQLStatementParser::AlterLockOptionContext * /*ctx*/) override { }
  virtual void exitAlterLockOption(MySQLStatementParser::AlterLockOptionContext * /*ctx*/) override { }

  virtual void enterTruncateTable(MySQLStatementParser::TruncateTableContext * /*ctx*/) override { }
  virtual void exitTruncateTable(MySQLStatementParser::TruncateTableContext * /*ctx*/) override { }

  virtual void enterCreateIndex(MySQLStatementParser::CreateIndexContext * /*ctx*/) override { }
  virtual void exitCreateIndex(MySQLStatementParser::CreateIndexContext * /*ctx*/) override { }

  virtual void enterCreateDatabase(MySQLStatementParser::CreateDatabaseContext * /*ctx*/) override { }
  virtual void exitCreateDatabase(MySQLStatementParser::CreateDatabaseContext * /*ctx*/) override { }

  virtual void enterAlterDatabase(MySQLStatementParser::AlterDatabaseContext * /*ctx*/) override { }
  virtual void exitAlterDatabase(MySQLStatementParser::AlterDatabaseContext * /*ctx*/) override { }

  virtual void enterCreateDatabaseSpecification_(MySQLStatementParser::CreateDatabaseSpecification_Context * /*ctx*/) override { }
  virtual void exitCreateDatabaseSpecification_(MySQLStatementParser::CreateDatabaseSpecification_Context * /*ctx*/) override { }

  virtual void enterAlterDatabaseSpecification_(MySQLStatementParser::AlterDatabaseSpecification_Context * /*ctx*/) override { }
  virtual void exitAlterDatabaseSpecification_(MySQLStatementParser::AlterDatabaseSpecification_Context * /*ctx*/) override { }

  virtual void enterDropDatabase(MySQLStatementParser::DropDatabaseContext * /*ctx*/) override { }
  virtual void exitDropDatabase(MySQLStatementParser::DropDatabaseContext * /*ctx*/) override { }

  virtual void enterAlterInstance(MySQLStatementParser::AlterInstanceContext * /*ctx*/) override { }
  virtual void exitAlterInstance(MySQLStatementParser::AlterInstanceContext * /*ctx*/) override { }

  virtual void enterInstanceAction(MySQLStatementParser::InstanceActionContext * /*ctx*/) override { }
  virtual void exitInstanceAction(MySQLStatementParser::InstanceActionContext * /*ctx*/) override { }

  virtual void enterChannel(MySQLStatementParser::ChannelContext * /*ctx*/) override { }
  virtual void exitChannel(MySQLStatementParser::ChannelContext * /*ctx*/) override { }

  virtual void enterCreateEvent(MySQLStatementParser::CreateEventContext * /*ctx*/) override { }
  virtual void exitCreateEvent(MySQLStatementParser::CreateEventContext * /*ctx*/) override { }

  virtual void enterAlterEvent(MySQLStatementParser::AlterEventContext * /*ctx*/) override { }
  virtual void exitAlterEvent(MySQLStatementParser::AlterEventContext * /*ctx*/) override { }

  virtual void enterDropEvent(MySQLStatementParser::DropEventContext * /*ctx*/) override { }
  virtual void exitDropEvent(MySQLStatementParser::DropEventContext * /*ctx*/) override { }

  virtual void enterCreateFunction(MySQLStatementParser::CreateFunctionContext * /*ctx*/) override { }
  virtual void exitCreateFunction(MySQLStatementParser::CreateFunctionContext * /*ctx*/) override { }

  virtual void enterAlterFunction(MySQLStatementParser::AlterFunctionContext * /*ctx*/) override { }
  virtual void exitAlterFunction(MySQLStatementParser::AlterFunctionContext * /*ctx*/) override { }

  virtual void enterDropFunction(MySQLStatementParser::DropFunctionContext * /*ctx*/) override { }
  virtual void exitDropFunction(MySQLStatementParser::DropFunctionContext * /*ctx*/) override { }

  virtual void enterCreateProcedure(MySQLStatementParser::CreateProcedureContext * /*ctx*/) override { }
  virtual void exitCreateProcedure(MySQLStatementParser::CreateProcedureContext * /*ctx*/) override { }

  virtual void enterAlterProcedure(MySQLStatementParser::AlterProcedureContext * /*ctx*/) override { }
  virtual void exitAlterProcedure(MySQLStatementParser::AlterProcedureContext * /*ctx*/) override { }

  virtual void enterDropProcedure(MySQLStatementParser::DropProcedureContext * /*ctx*/) override { }
  virtual void exitDropProcedure(MySQLStatementParser::DropProcedureContext * /*ctx*/) override { }

  virtual void enterCreateServer(MySQLStatementParser::CreateServerContext * /*ctx*/) override { }
  virtual void exitCreateServer(MySQLStatementParser::CreateServerContext * /*ctx*/) override { }

  virtual void enterAlterServer(MySQLStatementParser::AlterServerContext * /*ctx*/) override { }
  virtual void exitAlterServer(MySQLStatementParser::AlterServerContext * /*ctx*/) override { }

  virtual void enterDropServer(MySQLStatementParser::DropServerContext * /*ctx*/) override { }
  virtual void exitDropServer(MySQLStatementParser::DropServerContext * /*ctx*/) override { }

  virtual void enterCreateView(MySQLStatementParser::CreateViewContext * /*ctx*/) override { }
  virtual void exitCreateView(MySQLStatementParser::CreateViewContext * /*ctx*/) override { }

  virtual void enterAlterView(MySQLStatementParser::AlterViewContext * /*ctx*/) override { }
  virtual void exitAlterView(MySQLStatementParser::AlterViewContext * /*ctx*/) override { }

  virtual void enterDropView(MySQLStatementParser::DropViewContext * /*ctx*/) override { }
  virtual void exitDropView(MySQLStatementParser::DropViewContext * /*ctx*/) override { }

  virtual void enterCreateTablespaceInnodb(MySQLStatementParser::CreateTablespaceInnodbContext * /*ctx*/) override { }
  virtual void exitCreateTablespaceInnodb(MySQLStatementParser::CreateTablespaceInnodbContext * /*ctx*/) override { }

  virtual void enterCreateTablespaceNdb(MySQLStatementParser::CreateTablespaceNdbContext * /*ctx*/) override { }
  virtual void exitCreateTablespaceNdb(MySQLStatementParser::CreateTablespaceNdbContext * /*ctx*/) override { }

  virtual void enterAlterTablespaceNdb(MySQLStatementParser::AlterTablespaceNdbContext * /*ctx*/) override { }
  virtual void exitAlterTablespaceNdb(MySQLStatementParser::AlterTablespaceNdbContext * /*ctx*/) override { }

  virtual void enterAlterTablespaceInnodb(MySQLStatementParser::AlterTablespaceInnodbContext * /*ctx*/) override { }
  virtual void exitAlterTablespaceInnodb(MySQLStatementParser::AlterTablespaceInnodbContext * /*ctx*/) override { }

  virtual void enterDropTablespace(MySQLStatementParser::DropTablespaceContext * /*ctx*/) override { }
  virtual void exitDropTablespace(MySQLStatementParser::DropTablespaceContext * /*ctx*/) override { }

  virtual void enterCreateLogfileGroup(MySQLStatementParser::CreateLogfileGroupContext * /*ctx*/) override { }
  virtual void exitCreateLogfileGroup(MySQLStatementParser::CreateLogfileGroupContext * /*ctx*/) override { }

  virtual void enterAlterLogfileGroup(MySQLStatementParser::AlterLogfileGroupContext * /*ctx*/) override { }
  virtual void exitAlterLogfileGroup(MySQLStatementParser::AlterLogfileGroupContext * /*ctx*/) override { }

  virtual void enterDropLogfileGroup(MySQLStatementParser::DropLogfileGroupContext * /*ctx*/) override { }
  virtual void exitDropLogfileGroup(MySQLStatementParser::DropLogfileGroupContext * /*ctx*/) override { }

  virtual void enterCreateTrigger(MySQLStatementParser::CreateTriggerContext * /*ctx*/) override { }
  virtual void exitCreateTrigger(MySQLStatementParser::CreateTriggerContext * /*ctx*/) override { }

  virtual void enterDropTrigger(MySQLStatementParser::DropTriggerContext * /*ctx*/) override { }
  virtual void exitDropTrigger(MySQLStatementParser::DropTriggerContext * /*ctx*/) override { }

  virtual void enterRenameTable(MySQLStatementParser::RenameTableContext * /*ctx*/) override { }
  virtual void exitRenameTable(MySQLStatementParser::RenameTableContext * /*ctx*/) override { }

  virtual void enterCreateDefinitionClause(MySQLStatementParser::CreateDefinitionClauseContext * /*ctx*/) override { }
  virtual void exitCreateDefinitionClause(MySQLStatementParser::CreateDefinitionClauseContext * /*ctx*/) override { }

  virtual void enterColumnDefinition(MySQLStatementParser::ColumnDefinitionContext * /*ctx*/) override { }
  virtual void exitColumnDefinition(MySQLStatementParser::ColumnDefinitionContext * /*ctx*/) override { }

  virtual void enterFieldDefinition(MySQLStatementParser::FieldDefinitionContext * /*ctx*/) override { }
  virtual void exitFieldDefinition(MySQLStatementParser::FieldDefinitionContext * /*ctx*/) override { }

  virtual void enterColumnAttribute(MySQLStatementParser::ColumnAttributeContext * /*ctx*/) override { }
  virtual void exitColumnAttribute(MySQLStatementParser::ColumnAttributeContext * /*ctx*/) override { }

  virtual void enterCheckConstraint(MySQLStatementParser::CheckConstraintContext * /*ctx*/) override { }
  virtual void exitCheckConstraint(MySQLStatementParser::CheckConstraintContext * /*ctx*/) override { }

  virtual void enterConstraintEnforcement(MySQLStatementParser::ConstraintEnforcementContext * /*ctx*/) override { }
  virtual void exitConstraintEnforcement(MySQLStatementParser::ConstraintEnforcementContext * /*ctx*/) override { }

  virtual void enterGeneratedOption(MySQLStatementParser::GeneratedOptionContext * /*ctx*/) override { }
  virtual void exitGeneratedOption(MySQLStatementParser::GeneratedOptionContext * /*ctx*/) override { }

  virtual void enterReferenceDefinition(MySQLStatementParser::ReferenceDefinitionContext * /*ctx*/) override { }
  virtual void exitReferenceDefinition(MySQLStatementParser::ReferenceDefinitionContext * /*ctx*/) override { }

  virtual void enterOnUpdateDelete(MySQLStatementParser::OnUpdateDeleteContext * /*ctx*/) override { }
  virtual void exitOnUpdateDelete(MySQLStatementParser::OnUpdateDeleteContext * /*ctx*/) override { }

  virtual void enterReferenceOption(MySQLStatementParser::ReferenceOptionContext * /*ctx*/) override { }
  virtual void exitReferenceOption(MySQLStatementParser::ReferenceOptionContext * /*ctx*/) override { }

  virtual void enterIndexNameAndType(MySQLStatementParser::IndexNameAndTypeContext * /*ctx*/) override { }
  virtual void exitIndexNameAndType(MySQLStatementParser::IndexNameAndTypeContext * /*ctx*/) override { }

  virtual void enterIndexType(MySQLStatementParser::IndexTypeContext * /*ctx*/) override { }
  virtual void exitIndexType(MySQLStatementParser::IndexTypeContext * /*ctx*/) override { }

  virtual void enterIndexTypeClause(MySQLStatementParser::IndexTypeClauseContext * /*ctx*/) override { }
  virtual void exitIndexTypeClause(MySQLStatementParser::IndexTypeClauseContext * /*ctx*/) override { }

  virtual void enterKeyParts(MySQLStatementParser::KeyPartsContext * /*ctx*/) override { }
  virtual void exitKeyParts(MySQLStatementParser::KeyPartsContext * /*ctx*/) override { }

  virtual void enterKeyPart(MySQLStatementParser::KeyPartContext * /*ctx*/) override { }
  virtual void exitKeyPart(MySQLStatementParser::KeyPartContext * /*ctx*/) override { }

  virtual void enterKeyPartWithExpression(MySQLStatementParser::KeyPartWithExpressionContext * /*ctx*/) override { }
  virtual void exitKeyPartWithExpression(MySQLStatementParser::KeyPartWithExpressionContext * /*ctx*/) override { }

  virtual void enterKeyListWithExpression(MySQLStatementParser::KeyListWithExpressionContext * /*ctx*/) override { }
  virtual void exitKeyListWithExpression(MySQLStatementParser::KeyListWithExpressionContext * /*ctx*/) override { }

  virtual void enterIndexOption(MySQLStatementParser::IndexOptionContext * /*ctx*/) override { }
  virtual void exitIndexOption(MySQLStatementParser::IndexOptionContext * /*ctx*/) override { }

  virtual void enterCommonIndexOption(MySQLStatementParser::CommonIndexOptionContext * /*ctx*/) override { }
  virtual void exitCommonIndexOption(MySQLStatementParser::CommonIndexOptionContext * /*ctx*/) override { }

  virtual void enterVisibility(MySQLStatementParser::VisibilityContext * /*ctx*/) override { }
  virtual void exitVisibility(MySQLStatementParser::VisibilityContext * /*ctx*/) override { }

  virtual void enterCreateLikeClause(MySQLStatementParser::CreateLikeClauseContext * /*ctx*/) override { }
  virtual void exitCreateLikeClause(MySQLStatementParser::CreateLikeClauseContext * /*ctx*/) override { }

  virtual void enterCreateIndexSpecification(MySQLStatementParser::CreateIndexSpecificationContext * /*ctx*/) override { }
  virtual void exitCreateIndexSpecification(MySQLStatementParser::CreateIndexSpecificationContext * /*ctx*/) override { }

  virtual void enterCreateTableOptions(MySQLStatementParser::CreateTableOptionsContext * /*ctx*/) override { }
  virtual void exitCreateTableOptions(MySQLStatementParser::CreateTableOptionsContext * /*ctx*/) override { }

  virtual void enterCreateTableOption(MySQLStatementParser::CreateTableOptionContext * /*ctx*/) override { }
  virtual void exitCreateTableOption(MySQLStatementParser::CreateTableOptionContext * /*ctx*/) override { }

  virtual void enterCreateSRSStatement(MySQLStatementParser::CreateSRSStatementContext * /*ctx*/) override { }
  virtual void exitCreateSRSStatement(MySQLStatementParser::CreateSRSStatementContext * /*ctx*/) override { }

  virtual void enterDropSRSStatement(MySQLStatementParser::DropSRSStatementContext * /*ctx*/) override { }
  virtual void exitDropSRSStatement(MySQLStatementParser::DropSRSStatementContext * /*ctx*/) override { }

  virtual void enterSrsAttribute(MySQLStatementParser::SrsAttributeContext * /*ctx*/) override { }
  virtual void exitSrsAttribute(MySQLStatementParser::SrsAttributeContext * /*ctx*/) override { }

  virtual void enterPlace(MySQLStatementParser::PlaceContext * /*ctx*/) override { }
  virtual void exitPlace(MySQLStatementParser::PlaceContext * /*ctx*/) override { }

  virtual void enterPartitionDefinitions(MySQLStatementParser::PartitionDefinitionsContext * /*ctx*/) override { }
  virtual void exitPartitionDefinitions(MySQLStatementParser::PartitionDefinitionsContext * /*ctx*/) override { }

  virtual void enterPartitionDefinition(MySQLStatementParser::PartitionDefinitionContext * /*ctx*/) override { }
  virtual void exitPartitionDefinition(MySQLStatementParser::PartitionDefinitionContext * /*ctx*/) override { }

  virtual void enterPartitionLessThanValue(MySQLStatementParser::PartitionLessThanValueContext * /*ctx*/) override { }
  virtual void exitPartitionLessThanValue(MySQLStatementParser::PartitionLessThanValueContext * /*ctx*/) override { }

  virtual void enterPartitionValueList(MySQLStatementParser::PartitionValueListContext * /*ctx*/) override { }
  virtual void exitPartitionValueList(MySQLStatementParser::PartitionValueListContext * /*ctx*/) override { }

  virtual void enterPartitionDefinitionOption(MySQLStatementParser::PartitionDefinitionOptionContext * /*ctx*/) override { }
  virtual void exitPartitionDefinitionOption(MySQLStatementParser::PartitionDefinitionOptionContext * /*ctx*/) override { }

  virtual void enterSubpartitionDefinition(MySQLStatementParser::SubpartitionDefinitionContext * /*ctx*/) override { }
  virtual void exitSubpartitionDefinition(MySQLStatementParser::SubpartitionDefinitionContext * /*ctx*/) override { }

  virtual void enterOwnerStatement(MySQLStatementParser::OwnerStatementContext * /*ctx*/) override { }
  virtual void exitOwnerStatement(MySQLStatementParser::OwnerStatementContext * /*ctx*/) override { }

  virtual void enterScheduleExpression(MySQLStatementParser::ScheduleExpressionContext * /*ctx*/) override { }
  virtual void exitScheduleExpression(MySQLStatementParser::ScheduleExpressionContext * /*ctx*/) override { }

  virtual void enterTimestampValue(MySQLStatementParser::TimestampValueContext * /*ctx*/) override { }
  virtual void exitTimestampValue(MySQLStatementParser::TimestampValueContext * /*ctx*/) override { }

  virtual void enterRoutineBody(MySQLStatementParser::RoutineBodyContext * /*ctx*/) override { }
  virtual void exitRoutineBody(MySQLStatementParser::RoutineBodyContext * /*ctx*/) override { }

  virtual void enterServerOption(MySQLStatementParser::ServerOptionContext * /*ctx*/) override { }
  virtual void exitServerOption(MySQLStatementParser::ServerOptionContext * /*ctx*/) override { }

  virtual void enterRoutineOption(MySQLStatementParser::RoutineOptionContext * /*ctx*/) override { }
  virtual void exitRoutineOption(MySQLStatementParser::RoutineOptionContext * /*ctx*/) override { }

  virtual void enterProcedureParameter(MySQLStatementParser::ProcedureParameterContext * /*ctx*/) override { }
  virtual void exitProcedureParameter(MySQLStatementParser::ProcedureParameterContext * /*ctx*/) override { }

  virtual void enterFileSizeLiteral(MySQLStatementParser::FileSizeLiteralContext * /*ctx*/) override { }
  virtual void exitFileSizeLiteral(MySQLStatementParser::FileSizeLiteralContext * /*ctx*/) override { }

  virtual void enterSimpleStatement(MySQLStatementParser::SimpleStatementContext * /*ctx*/) override { }
  virtual void exitSimpleStatement(MySQLStatementParser::SimpleStatementContext * /*ctx*/) override { }

  virtual void enterCompoundStatement(MySQLStatementParser::CompoundStatementContext * /*ctx*/) override { }
  virtual void exitCompoundStatement(MySQLStatementParser::CompoundStatementContext * /*ctx*/) override { }

  virtual void enterValidStatement(MySQLStatementParser::ValidStatementContext * /*ctx*/) override { }
  virtual void exitValidStatement(MySQLStatementParser::ValidStatementContext * /*ctx*/) override { }

  virtual void enterBeginStatement(MySQLStatementParser::BeginStatementContext * /*ctx*/) override { }
  virtual void exitBeginStatement(MySQLStatementParser::BeginStatementContext * /*ctx*/) override { }

  virtual void enterDeclareStatement(MySQLStatementParser::DeclareStatementContext * /*ctx*/) override { }
  virtual void exitDeclareStatement(MySQLStatementParser::DeclareStatementContext * /*ctx*/) override { }

  virtual void enterFlowControlStatement(MySQLStatementParser::FlowControlStatementContext * /*ctx*/) override { }
  virtual void exitFlowControlStatement(MySQLStatementParser::FlowControlStatementContext * /*ctx*/) override { }

  virtual void enterCaseStatement(MySQLStatementParser::CaseStatementContext * /*ctx*/) override { }
  virtual void exitCaseStatement(MySQLStatementParser::CaseStatementContext * /*ctx*/) override { }

  virtual void enterIfStatement(MySQLStatementParser::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(MySQLStatementParser::IfStatementContext * /*ctx*/) override { }

  virtual void enterIterateStatement(MySQLStatementParser::IterateStatementContext * /*ctx*/) override { }
  virtual void exitIterateStatement(MySQLStatementParser::IterateStatementContext * /*ctx*/) override { }

  virtual void enterLeaveStatement(MySQLStatementParser::LeaveStatementContext * /*ctx*/) override { }
  virtual void exitLeaveStatement(MySQLStatementParser::LeaveStatementContext * /*ctx*/) override { }

  virtual void enterLoopStatement(MySQLStatementParser::LoopStatementContext * /*ctx*/) override { }
  virtual void exitLoopStatement(MySQLStatementParser::LoopStatementContext * /*ctx*/) override { }

  virtual void enterRepeatStatement(MySQLStatementParser::RepeatStatementContext * /*ctx*/) override { }
  virtual void exitRepeatStatement(MySQLStatementParser::RepeatStatementContext * /*ctx*/) override { }

  virtual void enterReturnStatement(MySQLStatementParser::ReturnStatementContext * /*ctx*/) override { }
  virtual void exitReturnStatement(MySQLStatementParser::ReturnStatementContext * /*ctx*/) override { }

  virtual void enterWhileStatement(MySQLStatementParser::WhileStatementContext * /*ctx*/) override { }
  virtual void exitWhileStatement(MySQLStatementParser::WhileStatementContext * /*ctx*/) override { }

  virtual void enterCursorStatement(MySQLStatementParser::CursorStatementContext * /*ctx*/) override { }
  virtual void exitCursorStatement(MySQLStatementParser::CursorStatementContext * /*ctx*/) override { }

  virtual void enterCursorCloseStatement(MySQLStatementParser::CursorCloseStatementContext * /*ctx*/) override { }
  virtual void exitCursorCloseStatement(MySQLStatementParser::CursorCloseStatementContext * /*ctx*/) override { }

  virtual void enterCursorDeclareStatement(MySQLStatementParser::CursorDeclareStatementContext * /*ctx*/) override { }
  virtual void exitCursorDeclareStatement(MySQLStatementParser::CursorDeclareStatementContext * /*ctx*/) override { }

  virtual void enterCursorFetchStatement(MySQLStatementParser::CursorFetchStatementContext * /*ctx*/) override { }
  virtual void exitCursorFetchStatement(MySQLStatementParser::CursorFetchStatementContext * /*ctx*/) override { }

  virtual void enterCursorOpenStatement(MySQLStatementParser::CursorOpenStatementContext * /*ctx*/) override { }
  virtual void exitCursorOpenStatement(MySQLStatementParser::CursorOpenStatementContext * /*ctx*/) override { }

  virtual void enterConditionHandlingStatement(MySQLStatementParser::ConditionHandlingStatementContext * /*ctx*/) override { }
  virtual void exitConditionHandlingStatement(MySQLStatementParser::ConditionHandlingStatementContext * /*ctx*/) override { }

  virtual void enterDeclareConditionStatement(MySQLStatementParser::DeclareConditionStatementContext * /*ctx*/) override { }
  virtual void exitDeclareConditionStatement(MySQLStatementParser::DeclareConditionStatementContext * /*ctx*/) override { }

  virtual void enterDeclareHandlerStatement(MySQLStatementParser::DeclareHandlerStatementContext * /*ctx*/) override { }
  virtual void exitDeclareHandlerStatement(MySQLStatementParser::DeclareHandlerStatementContext * /*ctx*/) override { }

  virtual void enterGetDiagnosticsStatement(MySQLStatementParser::GetDiagnosticsStatementContext * /*ctx*/) override { }
  virtual void exitGetDiagnosticsStatement(MySQLStatementParser::GetDiagnosticsStatementContext * /*ctx*/) override { }

  virtual void enterStatementInformationItem(MySQLStatementParser::StatementInformationItemContext * /*ctx*/) override { }
  virtual void exitStatementInformationItem(MySQLStatementParser::StatementInformationItemContext * /*ctx*/) override { }

  virtual void enterConditionInformationItem(MySQLStatementParser::ConditionInformationItemContext * /*ctx*/) override { }
  virtual void exitConditionInformationItem(MySQLStatementParser::ConditionInformationItemContext * /*ctx*/) override { }

  virtual void enterConditionNumber(MySQLStatementParser::ConditionNumberContext * /*ctx*/) override { }
  virtual void exitConditionNumber(MySQLStatementParser::ConditionNumberContext * /*ctx*/) override { }

  virtual void enterStatementInformationItemName(MySQLStatementParser::StatementInformationItemNameContext * /*ctx*/) override { }
  virtual void exitStatementInformationItemName(MySQLStatementParser::StatementInformationItemNameContext * /*ctx*/) override { }

  virtual void enterConditionInformationItemName(MySQLStatementParser::ConditionInformationItemNameContext * /*ctx*/) override { }
  virtual void exitConditionInformationItemName(MySQLStatementParser::ConditionInformationItemNameContext * /*ctx*/) override { }

  virtual void enterHandlerAction(MySQLStatementParser::HandlerActionContext * /*ctx*/) override { }
  virtual void exitHandlerAction(MySQLStatementParser::HandlerActionContext * /*ctx*/) override { }

  virtual void enterConditionValue(MySQLStatementParser::ConditionValueContext * /*ctx*/) override { }
  virtual void exitConditionValue(MySQLStatementParser::ConditionValueContext * /*ctx*/) override { }

  virtual void enterResignalStatement(MySQLStatementParser::ResignalStatementContext * /*ctx*/) override { }
  virtual void exitResignalStatement(MySQLStatementParser::ResignalStatementContext * /*ctx*/) override { }

  virtual void enterSignalStatement(MySQLStatementParser::SignalStatementContext * /*ctx*/) override { }
  virtual void exitSignalStatement(MySQLStatementParser::SignalStatementContext * /*ctx*/) override { }

  virtual void enterSignalInformationItem(MySQLStatementParser::SignalInformationItemContext * /*ctx*/) override { }
  virtual void exitSignalInformationItem(MySQLStatementParser::SignalInformationItemContext * /*ctx*/) override { }

  virtual void enterSetTransaction(MySQLStatementParser::SetTransactionContext * /*ctx*/) override { }
  virtual void exitSetTransaction(MySQLStatementParser::SetTransactionContext * /*ctx*/) override { }

  virtual void enterSetAutoCommit(MySQLStatementParser::SetAutoCommitContext * /*ctx*/) override { }
  virtual void exitSetAutoCommit(MySQLStatementParser::SetAutoCommitContext * /*ctx*/) override { }

  virtual void enterAutoCommitValue(MySQLStatementParser::AutoCommitValueContext * /*ctx*/) override { }
  virtual void exitAutoCommitValue(MySQLStatementParser::AutoCommitValueContext * /*ctx*/) override { }

  virtual void enterBeginTransaction(MySQLStatementParser::BeginTransactionContext * /*ctx*/) override { }
  virtual void exitBeginTransaction(MySQLStatementParser::BeginTransactionContext * /*ctx*/) override { }

  virtual void enterCommit(MySQLStatementParser::CommitContext * /*ctx*/) override { }
  virtual void exitCommit(MySQLStatementParser::CommitContext * /*ctx*/) override { }

  virtual void enterRollback(MySQLStatementParser::RollbackContext * /*ctx*/) override { }
  virtual void exitRollback(MySQLStatementParser::RollbackContext * /*ctx*/) override { }

  virtual void enterSavepoint(MySQLStatementParser::SavepointContext * /*ctx*/) override { }
  virtual void exitSavepoint(MySQLStatementParser::SavepointContext * /*ctx*/) override { }

  virtual void enterBegin(MySQLStatementParser::BeginContext * /*ctx*/) override { }
  virtual void exitBegin(MySQLStatementParser::BeginContext * /*ctx*/) override { }

  virtual void enterLock(MySQLStatementParser::LockContext * /*ctx*/) override { }
  virtual void exitLock(MySQLStatementParser::LockContext * /*ctx*/) override { }

  virtual void enterUnlock(MySQLStatementParser::UnlockContext * /*ctx*/) override { }
  virtual void exitUnlock(MySQLStatementParser::UnlockContext * /*ctx*/) override { }

  virtual void enterReleaseSavepoint(MySQLStatementParser::ReleaseSavepointContext * /*ctx*/) override { }
  virtual void exitReleaseSavepoint(MySQLStatementParser::ReleaseSavepointContext * /*ctx*/) override { }

  virtual void enterXa(MySQLStatementParser::XaContext * /*ctx*/) override { }
  virtual void exitXa(MySQLStatementParser::XaContext * /*ctx*/) override { }

  virtual void enterTransactionCharacteristic(MySQLStatementParser::TransactionCharacteristicContext * /*ctx*/) override { }
  virtual void exitTransactionCharacteristic(MySQLStatementParser::TransactionCharacteristicContext * /*ctx*/) override { }

  virtual void enterLevel(MySQLStatementParser::LevelContext * /*ctx*/) override { }
  virtual void exitLevel(MySQLStatementParser::LevelContext * /*ctx*/) override { }

  virtual void enterAccessMode(MySQLStatementParser::AccessModeContext * /*ctx*/) override { }
  virtual void exitAccessMode(MySQLStatementParser::AccessModeContext * /*ctx*/) override { }

  virtual void enterOptionChain(MySQLStatementParser::OptionChainContext * /*ctx*/) override { }
  virtual void exitOptionChain(MySQLStatementParser::OptionChainContext * /*ctx*/) override { }

  virtual void enterOptionRelease(MySQLStatementParser::OptionReleaseContext * /*ctx*/) override { }
  virtual void exitOptionRelease(MySQLStatementParser::OptionReleaseContext * /*ctx*/) override { }

  virtual void enterTableLock(MySQLStatementParser::TableLockContext * /*ctx*/) override { }
  virtual void exitTableLock(MySQLStatementParser::TableLockContext * /*ctx*/) override { }

  virtual void enterLockOption(MySQLStatementParser::LockOptionContext * /*ctx*/) override { }
  virtual void exitLockOption(MySQLStatementParser::LockOptionContext * /*ctx*/) override { }

  virtual void enterXid(MySQLStatementParser::XidContext * /*ctx*/) override { }
  virtual void exitXid(MySQLStatementParser::XidContext * /*ctx*/) override { }

  virtual void enterGrant(MySQLStatementParser::GrantContext * /*ctx*/) override { }
  virtual void exitGrant(MySQLStatementParser::GrantContext * /*ctx*/) override { }

  virtual void enterRevoke(MySQLStatementParser::RevokeContext * /*ctx*/) override { }
  virtual void exitRevoke(MySQLStatementParser::RevokeContext * /*ctx*/) override { }

  virtual void enterProxyClause(MySQLStatementParser::ProxyClauseContext * /*ctx*/) override { }
  virtual void exitProxyClause(MySQLStatementParser::ProxyClauseContext * /*ctx*/) override { }

  virtual void enterPrivilegeClause(MySQLStatementParser::PrivilegeClauseContext * /*ctx*/) override { }
  virtual void exitPrivilegeClause(MySQLStatementParser::PrivilegeClauseContext * /*ctx*/) override { }

  virtual void enterRoleClause(MySQLStatementParser::RoleClauseContext * /*ctx*/) override { }
  virtual void exitRoleClause(MySQLStatementParser::RoleClauseContext * /*ctx*/) override { }

  virtual void enterAllClause(MySQLStatementParser::AllClauseContext * /*ctx*/) override { }
  virtual void exitAllClause(MySQLStatementParser::AllClauseContext * /*ctx*/) override { }

  virtual void enterPrivileges(MySQLStatementParser::PrivilegesContext * /*ctx*/) override { }
  virtual void exitPrivileges(MySQLStatementParser::PrivilegesContext * /*ctx*/) override { }

  virtual void enterPrivilege(MySQLStatementParser::PrivilegeContext * /*ctx*/) override { }
  virtual void exitPrivilege(MySQLStatementParser::PrivilegeContext * /*ctx*/) override { }

  virtual void enterPrivilegeType(MySQLStatementParser::PrivilegeTypeContext * /*ctx*/) override { }
  virtual void exitPrivilegeType(MySQLStatementParser::PrivilegeTypeContext * /*ctx*/) override { }

  virtual void enterOnObjectClause(MySQLStatementParser::OnObjectClauseContext * /*ctx*/) override { }
  virtual void exitOnObjectClause(MySQLStatementParser::OnObjectClauseContext * /*ctx*/) override { }

  virtual void enterObjectType(MySQLStatementParser::ObjectTypeContext * /*ctx*/) override { }
  virtual void exitObjectType(MySQLStatementParser::ObjectTypeContext * /*ctx*/) override { }

  virtual void enterPrivilegeLevel(MySQLStatementParser::PrivilegeLevelContext * /*ctx*/) override { }
  virtual void exitPrivilegeLevel(MySQLStatementParser::PrivilegeLevelContext * /*ctx*/) override { }

  virtual void enterCreateUser(MySQLStatementParser::CreateUserContext * /*ctx*/) override { }
  virtual void exitCreateUser(MySQLStatementParser::CreateUserContext * /*ctx*/) override { }

  virtual void enterDefaultRoleClause(MySQLStatementParser::DefaultRoleClauseContext * /*ctx*/) override { }
  virtual void exitDefaultRoleClause(MySQLStatementParser::DefaultRoleClauseContext * /*ctx*/) override { }

  virtual void enterRequireClause(MySQLStatementParser::RequireClauseContext * /*ctx*/) override { }
  virtual void exitRequireClause(MySQLStatementParser::RequireClauseContext * /*ctx*/) override { }

  virtual void enterConnectOptions(MySQLStatementParser::ConnectOptionsContext * /*ctx*/) override { }
  virtual void exitConnectOptions(MySQLStatementParser::ConnectOptionsContext * /*ctx*/) override { }

  virtual void enterAccountLockPasswordExpireOptions(MySQLStatementParser::AccountLockPasswordExpireOptionsContext * /*ctx*/) override { }
  virtual void exitAccountLockPasswordExpireOptions(MySQLStatementParser::AccountLockPasswordExpireOptionsContext * /*ctx*/) override { }

  virtual void enterAccountLockPasswordExpireOption(MySQLStatementParser::AccountLockPasswordExpireOptionContext * /*ctx*/) override { }
  virtual void exitAccountLockPasswordExpireOption(MySQLStatementParser::AccountLockPasswordExpireOptionContext * /*ctx*/) override { }

  virtual void enterAlterUser(MySQLStatementParser::AlterUserContext * /*ctx*/) override { }
  virtual void exitAlterUser(MySQLStatementParser::AlterUserContext * /*ctx*/) override { }

  virtual void enterAlterUserEntry(MySQLStatementParser::AlterUserEntryContext * /*ctx*/) override { }
  virtual void exitAlterUserEntry(MySQLStatementParser::AlterUserEntryContext * /*ctx*/) override { }

  virtual void enterAlterUserList(MySQLStatementParser::AlterUserListContext * /*ctx*/) override { }
  virtual void exitAlterUserList(MySQLStatementParser::AlterUserListContext * /*ctx*/) override { }

  virtual void enterDropUser(MySQLStatementParser::DropUserContext * /*ctx*/) override { }
  virtual void exitDropUser(MySQLStatementParser::DropUserContext * /*ctx*/) override { }

  virtual void enterCreateRole(MySQLStatementParser::CreateRoleContext * /*ctx*/) override { }
  virtual void exitCreateRole(MySQLStatementParser::CreateRoleContext * /*ctx*/) override { }

  virtual void enterDropRole(MySQLStatementParser::DropRoleContext * /*ctx*/) override { }
  virtual void exitDropRole(MySQLStatementParser::DropRoleContext * /*ctx*/) override { }

  virtual void enterRenameUser(MySQLStatementParser::RenameUserContext * /*ctx*/) override { }
  virtual void exitRenameUser(MySQLStatementParser::RenameUserContext * /*ctx*/) override { }

  virtual void enterSetDefaultRole(MySQLStatementParser::SetDefaultRoleContext * /*ctx*/) override { }
  virtual void exitSetDefaultRole(MySQLStatementParser::SetDefaultRoleContext * /*ctx*/) override { }

  virtual void enterSetRole(MySQLStatementParser::SetRoleContext * /*ctx*/) override { }
  virtual void exitSetRole(MySQLStatementParser::SetRoleContext * /*ctx*/) override { }

  virtual void enterSetPassword(MySQLStatementParser::SetPasswordContext * /*ctx*/) override { }
  virtual void exitSetPassword(MySQLStatementParser::SetPasswordContext * /*ctx*/) override { }

  virtual void enterAuthOption(MySQLStatementParser::AuthOptionContext * /*ctx*/) override { }
  virtual void exitAuthOption(MySQLStatementParser::AuthOptionContext * /*ctx*/) override { }

  virtual void enterWithGrantOption(MySQLStatementParser::WithGrantOptionContext * /*ctx*/) override { }
  virtual void exitWithGrantOption(MySQLStatementParser::WithGrantOptionContext * /*ctx*/) override { }

  virtual void enterUserOrRoles(MySQLStatementParser::UserOrRolesContext * /*ctx*/) override { }
  virtual void exitUserOrRoles(MySQLStatementParser::UserOrRolesContext * /*ctx*/) override { }

  virtual void enterRoles(MySQLStatementParser::RolesContext * /*ctx*/) override { }
  virtual void exitRoles(MySQLStatementParser::RolesContext * /*ctx*/) override { }

  virtual void enterGrantOption(MySQLStatementParser::GrantOptionContext * /*ctx*/) override { }
  virtual void exitGrantOption(MySQLStatementParser::GrantOptionContext * /*ctx*/) override { }

  virtual void enterUserAuthOption(MySQLStatementParser::UserAuthOptionContext * /*ctx*/) override { }
  virtual void exitUserAuthOption(MySQLStatementParser::UserAuthOptionContext * /*ctx*/) override { }

  virtual void enterIdentifiedBy(MySQLStatementParser::IdentifiedByContext * /*ctx*/) override { }
  virtual void exitIdentifiedBy(MySQLStatementParser::IdentifiedByContext * /*ctx*/) override { }

  virtual void enterIdentifiedWith(MySQLStatementParser::IdentifiedWithContext * /*ctx*/) override { }
  virtual void exitIdentifiedWith(MySQLStatementParser::IdentifiedWithContext * /*ctx*/) override { }

  virtual void enterConnectOption(MySQLStatementParser::ConnectOptionContext * /*ctx*/) override { }
  virtual void exitConnectOption(MySQLStatementParser::ConnectOptionContext * /*ctx*/) override { }

  virtual void enterTlsOption(MySQLStatementParser::TlsOptionContext * /*ctx*/) override { }
  virtual void exitTlsOption(MySQLStatementParser::TlsOptionContext * /*ctx*/) override { }

  virtual void enterUserFuncAuthOption(MySQLStatementParser::UserFuncAuthOptionContext * /*ctx*/) override { }
  virtual void exitUserFuncAuthOption(MySQLStatementParser::UserFuncAuthOptionContext * /*ctx*/) override { }

  virtual void enterUse(MySQLStatementParser::UseContext * /*ctx*/) override { }
  virtual void exitUse(MySQLStatementParser::UseContext * /*ctx*/) override { }

  virtual void enterHelp(MySQLStatementParser::HelpContext * /*ctx*/) override { }
  virtual void exitHelp(MySQLStatementParser::HelpContext * /*ctx*/) override { }

  virtual void enterExplain(MySQLStatementParser::ExplainContext * /*ctx*/) override { }
  virtual void exitExplain(MySQLStatementParser::ExplainContext * /*ctx*/) override { }

  virtual void enterShowDatabases(MySQLStatementParser::ShowDatabasesContext * /*ctx*/) override { }
  virtual void exitShowDatabases(MySQLStatementParser::ShowDatabasesContext * /*ctx*/) override { }

  virtual void enterShowTables(MySQLStatementParser::ShowTablesContext * /*ctx*/) override { }
  virtual void exitShowTables(MySQLStatementParser::ShowTablesContext * /*ctx*/) override { }

  virtual void enterShowTableStatus(MySQLStatementParser::ShowTableStatusContext * /*ctx*/) override { }
  virtual void exitShowTableStatus(MySQLStatementParser::ShowTableStatusContext * /*ctx*/) override { }

  virtual void enterShowColumns(MySQLStatementParser::ShowColumnsContext * /*ctx*/) override { }
  virtual void exitShowColumns(MySQLStatementParser::ShowColumnsContext * /*ctx*/) override { }

  virtual void enterShowIndex(MySQLStatementParser::ShowIndexContext * /*ctx*/) override { }
  virtual void exitShowIndex(MySQLStatementParser::ShowIndexContext * /*ctx*/) override { }

  virtual void enterShowCreateTable(MySQLStatementParser::ShowCreateTableContext * /*ctx*/) override { }
  virtual void exitShowCreateTable(MySQLStatementParser::ShowCreateTableContext * /*ctx*/) override { }

  virtual void enterFromSchema(MySQLStatementParser::FromSchemaContext * /*ctx*/) override { }
  virtual void exitFromSchema(MySQLStatementParser::FromSchemaContext * /*ctx*/) override { }

  virtual void enterFromTable(MySQLStatementParser::FromTableContext * /*ctx*/) override { }
  virtual void exitFromTable(MySQLStatementParser::FromTableContext * /*ctx*/) override { }

  virtual void enterShowLike(MySQLStatementParser::ShowLikeContext * /*ctx*/) override { }
  virtual void exitShowLike(MySQLStatementParser::ShowLikeContext * /*ctx*/) override { }

  virtual void enterShowColumnLike(MySQLStatementParser::ShowColumnLikeContext * /*ctx*/) override { }
  virtual void exitShowColumnLike(MySQLStatementParser::ShowColumnLikeContext * /*ctx*/) override { }

  virtual void enterShowWhereClause(MySQLStatementParser::ShowWhereClauseContext * /*ctx*/) override { }
  virtual void exitShowWhereClause(MySQLStatementParser::ShowWhereClauseContext * /*ctx*/) override { }

  virtual void enterShowFilter(MySQLStatementParser::ShowFilterContext * /*ctx*/) override { }
  virtual void exitShowFilter(MySQLStatementParser::ShowFilterContext * /*ctx*/) override { }

  virtual void enterShowProfileType(MySQLStatementParser::ShowProfileTypeContext * /*ctx*/) override { }
  virtual void exitShowProfileType(MySQLStatementParser::ShowProfileTypeContext * /*ctx*/) override { }

  virtual void enterSetVariable(MySQLStatementParser::SetVariableContext * /*ctx*/) override { }
  virtual void exitSetVariable(MySQLStatementParser::SetVariableContext * /*ctx*/) override { }

  virtual void enterVariableAssign(MySQLStatementParser::VariableAssignContext * /*ctx*/) override { }
  virtual void exitVariableAssign(MySQLStatementParser::VariableAssignContext * /*ctx*/) override { }

  virtual void enterShowBinaryLogs(MySQLStatementParser::ShowBinaryLogsContext * /*ctx*/) override { }
  virtual void exitShowBinaryLogs(MySQLStatementParser::ShowBinaryLogsContext * /*ctx*/) override { }

  virtual void enterShowBinlogEvents(MySQLStatementParser::ShowBinlogEventsContext * /*ctx*/) override { }
  virtual void exitShowBinlogEvents(MySQLStatementParser::ShowBinlogEventsContext * /*ctx*/) override { }

  virtual void enterShowCharacterSet(MySQLStatementParser::ShowCharacterSetContext * /*ctx*/) override { }
  virtual void exitShowCharacterSet(MySQLStatementParser::ShowCharacterSetContext * /*ctx*/) override { }

  virtual void enterShowCollation(MySQLStatementParser::ShowCollationContext * /*ctx*/) override { }
  virtual void exitShowCollation(MySQLStatementParser::ShowCollationContext * /*ctx*/) override { }

  virtual void enterShowCreateDatabase(MySQLStatementParser::ShowCreateDatabaseContext * /*ctx*/) override { }
  virtual void exitShowCreateDatabase(MySQLStatementParser::ShowCreateDatabaseContext * /*ctx*/) override { }

  virtual void enterShowCreateEvent(MySQLStatementParser::ShowCreateEventContext * /*ctx*/) override { }
  virtual void exitShowCreateEvent(MySQLStatementParser::ShowCreateEventContext * /*ctx*/) override { }

  virtual void enterShowCreateFunction(MySQLStatementParser::ShowCreateFunctionContext * /*ctx*/) override { }
  virtual void exitShowCreateFunction(MySQLStatementParser::ShowCreateFunctionContext * /*ctx*/) override { }

  virtual void enterShowCreateProcedure(MySQLStatementParser::ShowCreateProcedureContext * /*ctx*/) override { }
  virtual void exitShowCreateProcedure(MySQLStatementParser::ShowCreateProcedureContext * /*ctx*/) override { }

  virtual void enterShowCreateTrigger(MySQLStatementParser::ShowCreateTriggerContext * /*ctx*/) override { }
  virtual void exitShowCreateTrigger(MySQLStatementParser::ShowCreateTriggerContext * /*ctx*/) override { }

  virtual void enterShowCreateUser(MySQLStatementParser::ShowCreateUserContext * /*ctx*/) override { }
  virtual void exitShowCreateUser(MySQLStatementParser::ShowCreateUserContext * /*ctx*/) override { }

  virtual void enterShowCreateView(MySQLStatementParser::ShowCreateViewContext * /*ctx*/) override { }
  virtual void exitShowCreateView(MySQLStatementParser::ShowCreateViewContext * /*ctx*/) override { }

  virtual void enterShowEngine(MySQLStatementParser::ShowEngineContext * /*ctx*/) override { }
  virtual void exitShowEngine(MySQLStatementParser::ShowEngineContext * /*ctx*/) override { }

  virtual void enterShowEngines(MySQLStatementParser::ShowEnginesContext * /*ctx*/) override { }
  virtual void exitShowEngines(MySQLStatementParser::ShowEnginesContext * /*ctx*/) override { }

  virtual void enterShowErrors(MySQLStatementParser::ShowErrorsContext * /*ctx*/) override { }
  virtual void exitShowErrors(MySQLStatementParser::ShowErrorsContext * /*ctx*/) override { }

  virtual void enterShowEvents(MySQLStatementParser::ShowEventsContext * /*ctx*/) override { }
  virtual void exitShowEvents(MySQLStatementParser::ShowEventsContext * /*ctx*/) override { }

  virtual void enterShowFunctionCode(MySQLStatementParser::ShowFunctionCodeContext * /*ctx*/) override { }
  virtual void exitShowFunctionCode(MySQLStatementParser::ShowFunctionCodeContext * /*ctx*/) override { }

  virtual void enterShowFunctionStatus(MySQLStatementParser::ShowFunctionStatusContext * /*ctx*/) override { }
  virtual void exitShowFunctionStatus(MySQLStatementParser::ShowFunctionStatusContext * /*ctx*/) override { }

  virtual void enterShowGrant(MySQLStatementParser::ShowGrantContext * /*ctx*/) override { }
  virtual void exitShowGrant(MySQLStatementParser::ShowGrantContext * /*ctx*/) override { }

  virtual void enterShowMasterStatus(MySQLStatementParser::ShowMasterStatusContext * /*ctx*/) override { }
  virtual void exitShowMasterStatus(MySQLStatementParser::ShowMasterStatusContext * /*ctx*/) override { }

  virtual void enterShowOpenTables(MySQLStatementParser::ShowOpenTablesContext * /*ctx*/) override { }
  virtual void exitShowOpenTables(MySQLStatementParser::ShowOpenTablesContext * /*ctx*/) override { }

  virtual void enterShowPlugins(MySQLStatementParser::ShowPluginsContext * /*ctx*/) override { }
  virtual void exitShowPlugins(MySQLStatementParser::ShowPluginsContext * /*ctx*/) override { }

  virtual void enterShowPrivileges(MySQLStatementParser::ShowPrivilegesContext * /*ctx*/) override { }
  virtual void exitShowPrivileges(MySQLStatementParser::ShowPrivilegesContext * /*ctx*/) override { }

  virtual void enterShowProcedureCode(MySQLStatementParser::ShowProcedureCodeContext * /*ctx*/) override { }
  virtual void exitShowProcedureCode(MySQLStatementParser::ShowProcedureCodeContext * /*ctx*/) override { }

  virtual void enterShowProcedureStatus(MySQLStatementParser::ShowProcedureStatusContext * /*ctx*/) override { }
  virtual void exitShowProcedureStatus(MySQLStatementParser::ShowProcedureStatusContext * /*ctx*/) override { }

  virtual void enterShowProcesslist(MySQLStatementParser::ShowProcesslistContext * /*ctx*/) override { }
  virtual void exitShowProcesslist(MySQLStatementParser::ShowProcesslistContext * /*ctx*/) override { }

  virtual void enterShowProfile(MySQLStatementParser::ShowProfileContext * /*ctx*/) override { }
  virtual void exitShowProfile(MySQLStatementParser::ShowProfileContext * /*ctx*/) override { }

  virtual void enterShowProfiles(MySQLStatementParser::ShowProfilesContext * /*ctx*/) override { }
  virtual void exitShowProfiles(MySQLStatementParser::ShowProfilesContext * /*ctx*/) override { }

  virtual void enterShowRelaylogEvent(MySQLStatementParser::ShowRelaylogEventContext * /*ctx*/) override { }
  virtual void exitShowRelaylogEvent(MySQLStatementParser::ShowRelaylogEventContext * /*ctx*/) override { }

  virtual void enterShowSlavehost(MySQLStatementParser::ShowSlavehostContext * /*ctx*/) override { }
  virtual void exitShowSlavehost(MySQLStatementParser::ShowSlavehostContext * /*ctx*/) override { }

  virtual void enterShowSlaveStatus(MySQLStatementParser::ShowSlaveStatusContext * /*ctx*/) override { }
  virtual void exitShowSlaveStatus(MySQLStatementParser::ShowSlaveStatusContext * /*ctx*/) override { }

  virtual void enterShowStatus(MySQLStatementParser::ShowStatusContext * /*ctx*/) override { }
  virtual void exitShowStatus(MySQLStatementParser::ShowStatusContext * /*ctx*/) override { }

  virtual void enterShowTrriggers(MySQLStatementParser::ShowTrriggersContext * /*ctx*/) override { }
  virtual void exitShowTrriggers(MySQLStatementParser::ShowTrriggersContext * /*ctx*/) override { }

  virtual void enterShowVariables(MySQLStatementParser::ShowVariablesContext * /*ctx*/) override { }
  virtual void exitShowVariables(MySQLStatementParser::ShowVariablesContext * /*ctx*/) override { }

  virtual void enterShowWarnings(MySQLStatementParser::ShowWarningsContext * /*ctx*/) override { }
  virtual void exitShowWarnings(MySQLStatementParser::ShowWarningsContext * /*ctx*/) override { }

  virtual void enterSetCharacter(MySQLStatementParser::SetCharacterContext * /*ctx*/) override { }
  virtual void exitSetCharacter(MySQLStatementParser::SetCharacterContext * /*ctx*/) override { }

  virtual void enterSetName(MySQLStatementParser::SetNameContext * /*ctx*/) override { }
  virtual void exitSetName(MySQLStatementParser::SetNameContext * /*ctx*/) override { }

  virtual void enterClone(MySQLStatementParser::CloneContext * /*ctx*/) override { }
  virtual void exitClone(MySQLStatementParser::CloneContext * /*ctx*/) override { }

  virtual void enterCloneAction(MySQLStatementParser::CloneActionContext * /*ctx*/) override { }
  virtual void exitCloneAction(MySQLStatementParser::CloneActionContext * /*ctx*/) override { }

  virtual void enterCreateUdf(MySQLStatementParser::CreateUdfContext * /*ctx*/) override { }
  virtual void exitCreateUdf(MySQLStatementParser::CreateUdfContext * /*ctx*/) override { }

  virtual void enterInstall(MySQLStatementParser::InstallContext * /*ctx*/) override { }
  virtual void exitInstall(MySQLStatementParser::InstallContext * /*ctx*/) override { }

  virtual void enterUninstall(MySQLStatementParser::UninstallContext * /*ctx*/) override { }
  virtual void exitUninstall(MySQLStatementParser::UninstallContext * /*ctx*/) override { }

  virtual void enterInstallComponent(MySQLStatementParser::InstallComponentContext * /*ctx*/) override { }
  virtual void exitInstallComponent(MySQLStatementParser::InstallComponentContext * /*ctx*/) override { }

  virtual void enterInstallPlugin(MySQLStatementParser::InstallPluginContext * /*ctx*/) override { }
  virtual void exitInstallPlugin(MySQLStatementParser::InstallPluginContext * /*ctx*/) override { }

  virtual void enterUninstallComponent(MySQLStatementParser::UninstallComponentContext * /*ctx*/) override { }
  virtual void exitUninstallComponent(MySQLStatementParser::UninstallComponentContext * /*ctx*/) override { }

  virtual void enterUninstallPlugin(MySQLStatementParser::UninstallPluginContext * /*ctx*/) override { }
  virtual void exitUninstallPlugin(MySQLStatementParser::UninstallPluginContext * /*ctx*/) override { }

  virtual void enterAnalyzeTable(MySQLStatementParser::AnalyzeTableContext * /*ctx*/) override { }
  virtual void exitAnalyzeTable(MySQLStatementParser::AnalyzeTableContext * /*ctx*/) override { }

  virtual void enterHistogram(MySQLStatementParser::HistogramContext * /*ctx*/) override { }
  virtual void exitHistogram(MySQLStatementParser::HistogramContext * /*ctx*/) override { }

  virtual void enterCheckTable(MySQLStatementParser::CheckTableContext * /*ctx*/) override { }
  virtual void exitCheckTable(MySQLStatementParser::CheckTableContext * /*ctx*/) override { }

  virtual void enterCheckTableOption(MySQLStatementParser::CheckTableOptionContext * /*ctx*/) override { }
  virtual void exitCheckTableOption(MySQLStatementParser::CheckTableOptionContext * /*ctx*/) override { }

  virtual void enterChecksumTable(MySQLStatementParser::ChecksumTableContext * /*ctx*/) override { }
  virtual void exitChecksumTable(MySQLStatementParser::ChecksumTableContext * /*ctx*/) override { }

  virtual void enterOptimizeTable(MySQLStatementParser::OptimizeTableContext * /*ctx*/) override { }
  virtual void exitOptimizeTable(MySQLStatementParser::OptimizeTableContext * /*ctx*/) override { }

  virtual void enterRepairTable(MySQLStatementParser::RepairTableContext * /*ctx*/) override { }
  virtual void exitRepairTable(MySQLStatementParser::RepairTableContext * /*ctx*/) override { }

  virtual void enterAlterResourceGroup(MySQLStatementParser::AlterResourceGroupContext * /*ctx*/) override { }
  virtual void exitAlterResourceGroup(MySQLStatementParser::AlterResourceGroupContext * /*ctx*/) override { }

  virtual void enterVcpuSpec(MySQLStatementParser::VcpuSpecContext * /*ctx*/) override { }
  virtual void exitVcpuSpec(MySQLStatementParser::VcpuSpecContext * /*ctx*/) override { }

  virtual void enterCreateResourceGroup(MySQLStatementParser::CreateResourceGroupContext * /*ctx*/) override { }
  virtual void exitCreateResourceGroup(MySQLStatementParser::CreateResourceGroupContext * /*ctx*/) override { }

  virtual void enterDropResourceGroup(MySQLStatementParser::DropResourceGroupContext * /*ctx*/) override { }
  virtual void exitDropResourceGroup(MySQLStatementParser::DropResourceGroupContext * /*ctx*/) override { }

  virtual void enterSetResourceGroup(MySQLStatementParser::SetResourceGroupContext * /*ctx*/) override { }
  virtual void exitSetResourceGroup(MySQLStatementParser::SetResourceGroupContext * /*ctx*/) override { }

  virtual void enterBinlog(MySQLStatementParser::BinlogContext * /*ctx*/) override { }
  virtual void exitBinlog(MySQLStatementParser::BinlogContext * /*ctx*/) override { }

  virtual void enterCacheIndex(MySQLStatementParser::CacheIndexContext * /*ctx*/) override { }
  virtual void exitCacheIndex(MySQLStatementParser::CacheIndexContext * /*ctx*/) override { }

  virtual void enterTableIndexList(MySQLStatementParser::TableIndexListContext * /*ctx*/) override { }
  virtual void exitTableIndexList(MySQLStatementParser::TableIndexListContext * /*ctx*/) override { }

  virtual void enterPartitionList(MySQLStatementParser::PartitionListContext * /*ctx*/) override { }
  virtual void exitPartitionList(MySQLStatementParser::PartitionListContext * /*ctx*/) override { }

  virtual void enterFlush(MySQLStatementParser::FlushContext * /*ctx*/) override { }
  virtual void exitFlush(MySQLStatementParser::FlushContext * /*ctx*/) override { }

  virtual void enterFlushOption(MySQLStatementParser::FlushOptionContext * /*ctx*/) override { }
  virtual void exitFlushOption(MySQLStatementParser::FlushOptionContext * /*ctx*/) override { }

  virtual void enterTablesOption(MySQLStatementParser::TablesOptionContext * /*ctx*/) override { }
  virtual void exitTablesOption(MySQLStatementParser::TablesOptionContext * /*ctx*/) override { }

  virtual void enterKill(MySQLStatementParser::KillContext * /*ctx*/) override { }
  virtual void exitKill(MySQLStatementParser::KillContext * /*ctx*/) override { }

  virtual void enterLoadIndexInfo(MySQLStatementParser::LoadIndexInfoContext * /*ctx*/) override { }
  virtual void exitLoadIndexInfo(MySQLStatementParser::LoadIndexInfoContext * /*ctx*/) override { }

  virtual void enterResetStatement(MySQLStatementParser::ResetStatementContext * /*ctx*/) override { }
  virtual void exitResetStatement(MySQLStatementParser::ResetStatementContext * /*ctx*/) override { }

  virtual void enterResetOption(MySQLStatementParser::ResetOptionContext * /*ctx*/) override { }
  virtual void exitResetOption(MySQLStatementParser::ResetOptionContext * /*ctx*/) override { }

  virtual void enterResetPersist(MySQLStatementParser::ResetPersistContext * /*ctx*/) override { }
  virtual void exitResetPersist(MySQLStatementParser::ResetPersistContext * /*ctx*/) override { }

  virtual void enterRestart(MySQLStatementParser::RestartContext * /*ctx*/) override { }
  virtual void exitRestart(MySQLStatementParser::RestartContext * /*ctx*/) override { }

  virtual void enterShutdown(MySQLStatementParser::ShutdownContext * /*ctx*/) override { }
  virtual void exitShutdown(MySQLStatementParser::ShutdownContext * /*ctx*/) override { }

  virtual void enterExplainType(MySQLStatementParser::ExplainTypeContext * /*ctx*/) override { }
  virtual void exitExplainType(MySQLStatementParser::ExplainTypeContext * /*ctx*/) override { }

  virtual void enterExplainableStatement(MySQLStatementParser::ExplainableStatementContext * /*ctx*/) override { }
  virtual void exitExplainableStatement(MySQLStatementParser::ExplainableStatementContext * /*ctx*/) override { }

  virtual void enterFormatName(MySQLStatementParser::FormatNameContext * /*ctx*/) override { }
  virtual void exitFormatName(MySQLStatementParser::FormatNameContext * /*ctx*/) override { }

  virtual void enterShow(MySQLStatementParser::ShowContext * /*ctx*/) override { }
  virtual void exitShow(MySQLStatementParser::ShowContext * /*ctx*/) override { }

  virtual void enterChange(MySQLStatementParser::ChangeContext * /*ctx*/) override { }
  virtual void exitChange(MySQLStatementParser::ChangeContext * /*ctx*/) override { }

  virtual void enterChangeMasterTo(MySQLStatementParser::ChangeMasterToContext * /*ctx*/) override { }
  virtual void exitChangeMasterTo(MySQLStatementParser::ChangeMasterToContext * /*ctx*/) override { }

  virtual void enterChangeReplicationFilter(MySQLStatementParser::ChangeReplicationFilterContext * /*ctx*/) override { }
  virtual void exitChangeReplicationFilter(MySQLStatementParser::ChangeReplicationFilterContext * /*ctx*/) override { }

  virtual void enterStartSlave(MySQLStatementParser::StartSlaveContext * /*ctx*/) override { }
  virtual void exitStartSlave(MySQLStatementParser::StartSlaveContext * /*ctx*/) override { }

  virtual void enterStopSlave(MySQLStatementParser::StopSlaveContext * /*ctx*/) override { }
  virtual void exitStopSlave(MySQLStatementParser::StopSlaveContext * /*ctx*/) override { }

  virtual void enterGroupReplication(MySQLStatementParser::GroupReplicationContext * /*ctx*/) override { }
  virtual void exitGroupReplication(MySQLStatementParser::GroupReplicationContext * /*ctx*/) override { }

  virtual void enterStartGroupReplication(MySQLStatementParser::StartGroupReplicationContext * /*ctx*/) override { }
  virtual void exitStartGroupReplication(MySQLStatementParser::StartGroupReplicationContext * /*ctx*/) override { }

  virtual void enterStopGroupReplication(MySQLStatementParser::StopGroupReplicationContext * /*ctx*/) override { }
  virtual void exitStopGroupReplication(MySQLStatementParser::StopGroupReplicationContext * /*ctx*/) override { }

  virtual void enterPurgeBinaryLog(MySQLStatementParser::PurgeBinaryLogContext * /*ctx*/) override { }
  virtual void exitPurgeBinaryLog(MySQLStatementParser::PurgeBinaryLogContext * /*ctx*/) override { }

  virtual void enterThreadTypes(MySQLStatementParser::ThreadTypesContext * /*ctx*/) override { }
  virtual void exitThreadTypes(MySQLStatementParser::ThreadTypesContext * /*ctx*/) override { }

  virtual void enterThreadType(MySQLStatementParser::ThreadTypeContext * /*ctx*/) override { }
  virtual void exitThreadType(MySQLStatementParser::ThreadTypeContext * /*ctx*/) override { }

  virtual void enterUtilOption(MySQLStatementParser::UtilOptionContext * /*ctx*/) override { }
  virtual void exitUtilOption(MySQLStatementParser::UtilOptionContext * /*ctx*/) override { }

  virtual void enterConnectionOptions(MySQLStatementParser::ConnectionOptionsContext * /*ctx*/) override { }
  virtual void exitConnectionOptions(MySQLStatementParser::ConnectionOptionsContext * /*ctx*/) override { }

  virtual void enterMasterDefs(MySQLStatementParser::MasterDefsContext * /*ctx*/) override { }
  virtual void exitMasterDefs(MySQLStatementParser::MasterDefsContext * /*ctx*/) override { }

  virtual void enterMasterDef(MySQLStatementParser::MasterDefContext * /*ctx*/) override { }
  virtual void exitMasterDef(MySQLStatementParser::MasterDefContext * /*ctx*/) override { }

  virtual void enterIgnoreServerIds(MySQLStatementParser::IgnoreServerIdsContext * /*ctx*/) override { }
  virtual void exitIgnoreServerIds(MySQLStatementParser::IgnoreServerIdsContext * /*ctx*/) override { }

  virtual void enterIgnoreServerId(MySQLStatementParser::IgnoreServerIdContext * /*ctx*/) override { }
  virtual void exitIgnoreServerId(MySQLStatementParser::IgnoreServerIdContext * /*ctx*/) override { }

  virtual void enterFilterDefs(MySQLStatementParser::FilterDefsContext * /*ctx*/) override { }
  virtual void exitFilterDefs(MySQLStatementParser::FilterDefsContext * /*ctx*/) override { }

  virtual void enterFilterDef(MySQLStatementParser::FilterDefContext * /*ctx*/) override { }
  virtual void exitFilterDef(MySQLStatementParser::FilterDefContext * /*ctx*/) override { }

  virtual void enterWildTables(MySQLStatementParser::WildTablesContext * /*ctx*/) override { }
  virtual void exitWildTables(MySQLStatementParser::WildTablesContext * /*ctx*/) override { }

  virtual void enterWildTable(MySQLStatementParser::WildTableContext * /*ctx*/) override { }
  virtual void exitWildTable(MySQLStatementParser::WildTableContext * /*ctx*/) override { }

  virtual void enterParameterMarker(MySQLStatementParser::ParameterMarkerContext * /*ctx*/) override { }
  virtual void exitParameterMarker(MySQLStatementParser::ParameterMarkerContext * /*ctx*/) override { }

  virtual void enterCustomKeyword(MySQLStatementParser::CustomKeywordContext * /*ctx*/) override { }
  virtual void exitCustomKeyword(MySQLStatementParser::CustomKeywordContext * /*ctx*/) override { }

  virtual void enterLiterals(MySQLStatementParser::LiteralsContext * /*ctx*/) override { }
  virtual void exitLiterals(MySQLStatementParser::LiteralsContext * /*ctx*/) override { }

  virtual void enterString_(MySQLStatementParser::String_Context * /*ctx*/) override { }
  virtual void exitString_(MySQLStatementParser::String_Context * /*ctx*/) override { }

  virtual void enterStringLiterals(MySQLStatementParser::StringLiteralsContext * /*ctx*/) override { }
  virtual void exitStringLiterals(MySQLStatementParser::StringLiteralsContext * /*ctx*/) override { }

  virtual void enterNumberLiterals(MySQLStatementParser::NumberLiteralsContext * /*ctx*/) override { }
  virtual void exitNumberLiterals(MySQLStatementParser::NumberLiteralsContext * /*ctx*/) override { }

  virtual void enterTemporalLiterals(MySQLStatementParser::TemporalLiteralsContext * /*ctx*/) override { }
  virtual void exitTemporalLiterals(MySQLStatementParser::TemporalLiteralsContext * /*ctx*/) override { }

  virtual void enterHexadecimalLiterals(MySQLStatementParser::HexadecimalLiteralsContext * /*ctx*/) override { }
  virtual void exitHexadecimalLiterals(MySQLStatementParser::HexadecimalLiteralsContext * /*ctx*/) override { }

  virtual void enterBitValueLiterals(MySQLStatementParser::BitValueLiteralsContext * /*ctx*/) override { }
  virtual void exitBitValueLiterals(MySQLStatementParser::BitValueLiteralsContext * /*ctx*/) override { }

  virtual void enterBooleanLiterals(MySQLStatementParser::BooleanLiteralsContext * /*ctx*/) override { }
  virtual void exitBooleanLiterals(MySQLStatementParser::BooleanLiteralsContext * /*ctx*/) override { }

  virtual void enterNullValueLiterals(MySQLStatementParser::NullValueLiteralsContext * /*ctx*/) override { }
  virtual void exitNullValueLiterals(MySQLStatementParser::NullValueLiteralsContext * /*ctx*/) override { }

  virtual void enterCollationName(MySQLStatementParser::CollationNameContext * /*ctx*/) override { }
  virtual void exitCollationName(MySQLStatementParser::CollationNameContext * /*ctx*/) override { }

  virtual void enterIdentifier(MySQLStatementParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(MySQLStatementParser::IdentifierContext * /*ctx*/) override { }

  virtual void enterUnreservedWord(MySQLStatementParser::UnreservedWordContext * /*ctx*/) override { }
  virtual void exitUnreservedWord(MySQLStatementParser::UnreservedWordContext * /*ctx*/) override { }

  virtual void enterTextOrIdentifier(MySQLStatementParser::TextOrIdentifierContext * /*ctx*/) override { }
  virtual void exitTextOrIdentifier(MySQLStatementParser::TextOrIdentifierContext * /*ctx*/) override { }

  virtual void enterVariable(MySQLStatementParser::VariableContext * /*ctx*/) override { }
  virtual void exitVariable(MySQLStatementParser::VariableContext * /*ctx*/) override { }

  virtual void enterUserVariable(MySQLStatementParser::UserVariableContext * /*ctx*/) override { }
  virtual void exitUserVariable(MySQLStatementParser::UserVariableContext * /*ctx*/) override { }

  virtual void enterSystemVariable(MySQLStatementParser::SystemVariableContext * /*ctx*/) override { }
  virtual void exitSystemVariable(MySQLStatementParser::SystemVariableContext * /*ctx*/) override { }

  virtual void enterScope(MySQLStatementParser::ScopeContext * /*ctx*/) override { }
  virtual void exitScope(MySQLStatementParser::ScopeContext * /*ctx*/) override { }

  virtual void enterInternalVariableName(MySQLStatementParser::InternalVariableNameContext * /*ctx*/) override { }
  virtual void exitInternalVariableName(MySQLStatementParser::InternalVariableNameContext * /*ctx*/) override { }

  virtual void enterSetExprOrDefault(MySQLStatementParser::SetExprOrDefaultContext * /*ctx*/) override { }
  virtual void exitSetExprOrDefault(MySQLStatementParser::SetExprOrDefaultContext * /*ctx*/) override { }

  virtual void enterSchemaName(MySQLStatementParser::SchemaNameContext * /*ctx*/) override { }
  virtual void exitSchemaName(MySQLStatementParser::SchemaNameContext * /*ctx*/) override { }

  virtual void enterSchemaNames(MySQLStatementParser::SchemaNamesContext * /*ctx*/) override { }
  virtual void exitSchemaNames(MySQLStatementParser::SchemaNamesContext * /*ctx*/) override { }

  virtual void enterCharsetName(MySQLStatementParser::CharsetNameContext * /*ctx*/) override { }
  virtual void exitCharsetName(MySQLStatementParser::CharsetNameContext * /*ctx*/) override { }

  virtual void enterSchemaPairs(MySQLStatementParser::SchemaPairsContext * /*ctx*/) override { }
  virtual void exitSchemaPairs(MySQLStatementParser::SchemaPairsContext * /*ctx*/) override { }

  virtual void enterSchemaPair(MySQLStatementParser::SchemaPairContext * /*ctx*/) override { }
  virtual void exitSchemaPair(MySQLStatementParser::SchemaPairContext * /*ctx*/) override { }

  virtual void enterTableName(MySQLStatementParser::TableNameContext * /*ctx*/) override { }
  virtual void exitTableName(MySQLStatementParser::TableNameContext * /*ctx*/) override { }

  virtual void enterColumnName(MySQLStatementParser::ColumnNameContext * /*ctx*/) override { }
  virtual void exitColumnName(MySQLStatementParser::ColumnNameContext * /*ctx*/) override { }

  virtual void enterIndexName(MySQLStatementParser::IndexNameContext * /*ctx*/) override { }
  virtual void exitIndexName(MySQLStatementParser::IndexNameContext * /*ctx*/) override { }

  virtual void enterUserIdentifierOrText(MySQLStatementParser::UserIdentifierOrTextContext * /*ctx*/) override { }
  virtual void exitUserIdentifierOrText(MySQLStatementParser::UserIdentifierOrTextContext * /*ctx*/) override { }

  virtual void enterUserName(MySQLStatementParser::UserNameContext * /*ctx*/) override { }
  virtual void exitUserName(MySQLStatementParser::UserNameContext * /*ctx*/) override { }

  virtual void enterEventName(MySQLStatementParser::EventNameContext * /*ctx*/) override { }
  virtual void exitEventName(MySQLStatementParser::EventNameContext * /*ctx*/) override { }

  virtual void enterServerName(MySQLStatementParser::ServerNameContext * /*ctx*/) override { }
  virtual void exitServerName(MySQLStatementParser::ServerNameContext * /*ctx*/) override { }

  virtual void enterWrapperName(MySQLStatementParser::WrapperNameContext * /*ctx*/) override { }
  virtual void exitWrapperName(MySQLStatementParser::WrapperNameContext * /*ctx*/) override { }

  virtual void enterFunctionName(MySQLStatementParser::FunctionNameContext * /*ctx*/) override { }
  virtual void exitFunctionName(MySQLStatementParser::FunctionNameContext * /*ctx*/) override { }

  virtual void enterViewName(MySQLStatementParser::ViewNameContext * /*ctx*/) override { }
  virtual void exitViewName(MySQLStatementParser::ViewNameContext * /*ctx*/) override { }

  virtual void enterOwner(MySQLStatementParser::OwnerContext * /*ctx*/) override { }
  virtual void exitOwner(MySQLStatementParser::OwnerContext * /*ctx*/) override { }

  virtual void enterAlias(MySQLStatementParser::AliasContext * /*ctx*/) override { }
  virtual void exitAlias(MySQLStatementParser::AliasContext * /*ctx*/) override { }

  virtual void enterName(MySQLStatementParser::NameContext * /*ctx*/) override { }
  virtual void exitName(MySQLStatementParser::NameContext * /*ctx*/) override { }

  virtual void enterTableList(MySQLStatementParser::TableListContext * /*ctx*/) override { }
  virtual void exitTableList(MySQLStatementParser::TableListContext * /*ctx*/) override { }

  virtual void enterViewNames(MySQLStatementParser::ViewNamesContext * /*ctx*/) override { }
  virtual void exitViewNames(MySQLStatementParser::ViewNamesContext * /*ctx*/) override { }

  virtual void enterColumnNames(MySQLStatementParser::ColumnNamesContext * /*ctx*/) override { }
  virtual void exitColumnNames(MySQLStatementParser::ColumnNamesContext * /*ctx*/) override { }

  virtual void enterGroupName(MySQLStatementParser::GroupNameContext * /*ctx*/) override { }
  virtual void exitGroupName(MySQLStatementParser::GroupNameContext * /*ctx*/) override { }

  virtual void enterRoutineName(MySQLStatementParser::RoutineNameContext * /*ctx*/) override { }
  virtual void exitRoutineName(MySQLStatementParser::RoutineNameContext * /*ctx*/) override { }

  virtual void enterShardLibraryName(MySQLStatementParser::ShardLibraryNameContext * /*ctx*/) override { }
  virtual void exitShardLibraryName(MySQLStatementParser::ShardLibraryNameContext * /*ctx*/) override { }

  virtual void enterComponentName(MySQLStatementParser::ComponentNameContext * /*ctx*/) override { }
  virtual void exitComponentName(MySQLStatementParser::ComponentNameContext * /*ctx*/) override { }

  virtual void enterPluginName(MySQLStatementParser::PluginNameContext * /*ctx*/) override { }
  virtual void exitPluginName(MySQLStatementParser::PluginNameContext * /*ctx*/) override { }

  virtual void enterHostName(MySQLStatementParser::HostNameContext * /*ctx*/) override { }
  virtual void exitHostName(MySQLStatementParser::HostNameContext * /*ctx*/) override { }

  virtual void enterPort(MySQLStatementParser::PortContext * /*ctx*/) override { }
  virtual void exitPort(MySQLStatementParser::PortContext * /*ctx*/) override { }

  virtual void enterCloneInstance(MySQLStatementParser::CloneInstanceContext * /*ctx*/) override { }
  virtual void exitCloneInstance(MySQLStatementParser::CloneInstanceContext * /*ctx*/) override { }

  virtual void enterCloneDir(MySQLStatementParser::CloneDirContext * /*ctx*/) override { }
  virtual void exitCloneDir(MySQLStatementParser::CloneDirContext * /*ctx*/) override { }

  virtual void enterChannelName(MySQLStatementParser::ChannelNameContext * /*ctx*/) override { }
  virtual void exitChannelName(MySQLStatementParser::ChannelNameContext * /*ctx*/) override { }

  virtual void enterLogName(MySQLStatementParser::LogNameContext * /*ctx*/) override { }
  virtual void exitLogName(MySQLStatementParser::LogNameContext * /*ctx*/) override { }

  virtual void enterRoleName(MySQLStatementParser::RoleNameContext * /*ctx*/) override { }
  virtual void exitRoleName(MySQLStatementParser::RoleNameContext * /*ctx*/) override { }

  virtual void enterEngineRef(MySQLStatementParser::EngineRefContext * /*ctx*/) override { }
  virtual void exitEngineRef(MySQLStatementParser::EngineRefContext * /*ctx*/) override { }

  virtual void enterTriggerName(MySQLStatementParser::TriggerNameContext * /*ctx*/) override { }
  virtual void exitTriggerName(MySQLStatementParser::TriggerNameContext * /*ctx*/) override { }

  virtual void enterTriggerTime(MySQLStatementParser::TriggerTimeContext * /*ctx*/) override { }
  virtual void exitTriggerTime(MySQLStatementParser::TriggerTimeContext * /*ctx*/) override { }

  virtual void enterTableOrTables(MySQLStatementParser::TableOrTablesContext * /*ctx*/) override { }
  virtual void exitTableOrTables(MySQLStatementParser::TableOrTablesContext * /*ctx*/) override { }

  virtual void enterUserOrRole(MySQLStatementParser::UserOrRoleContext * /*ctx*/) override { }
  virtual void exitUserOrRole(MySQLStatementParser::UserOrRoleContext * /*ctx*/) override { }

  virtual void enterPartitionName(MySQLStatementParser::PartitionNameContext * /*ctx*/) override { }
  virtual void exitPartitionName(MySQLStatementParser::PartitionNameContext * /*ctx*/) override { }

  virtual void enterIdentifierList(MySQLStatementParser::IdentifierListContext * /*ctx*/) override { }
  virtual void exitIdentifierList(MySQLStatementParser::IdentifierListContext * /*ctx*/) override { }

  virtual void enterAllOrPartitionNameList(MySQLStatementParser::AllOrPartitionNameListContext * /*ctx*/) override { }
  virtual void exitAllOrPartitionNameList(MySQLStatementParser::AllOrPartitionNameListContext * /*ctx*/) override { }

  virtual void enterTriggerEvent(MySQLStatementParser::TriggerEventContext * /*ctx*/) override { }
  virtual void exitTriggerEvent(MySQLStatementParser::TriggerEventContext * /*ctx*/) override { }

  virtual void enterTriggerOrder(MySQLStatementParser::TriggerOrderContext * /*ctx*/) override { }
  virtual void exitTriggerOrder(MySQLStatementParser::TriggerOrderContext * /*ctx*/) override { }

  virtual void enterExpr(MySQLStatementParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(MySQLStatementParser::ExprContext * /*ctx*/) override { }

  virtual void enterLogicalOperator(MySQLStatementParser::LogicalOperatorContext * /*ctx*/) override { }
  virtual void exitLogicalOperator(MySQLStatementParser::LogicalOperatorContext * /*ctx*/) override { }

  virtual void enterNotOperator(MySQLStatementParser::NotOperatorContext * /*ctx*/) override { }
  virtual void exitNotOperator(MySQLStatementParser::NotOperatorContext * /*ctx*/) override { }

  virtual void enterBooleanPrimary(MySQLStatementParser::BooleanPrimaryContext * /*ctx*/) override { }
  virtual void exitBooleanPrimary(MySQLStatementParser::BooleanPrimaryContext * /*ctx*/) override { }

  virtual void enterComparisonOperator(MySQLStatementParser::ComparisonOperatorContext * /*ctx*/) override { }
  virtual void exitComparisonOperator(MySQLStatementParser::ComparisonOperatorContext * /*ctx*/) override { }

  virtual void enterPredicate(MySQLStatementParser::PredicateContext * /*ctx*/) override { }
  virtual void exitPredicate(MySQLStatementParser::PredicateContext * /*ctx*/) override { }

  virtual void enterBitExpr(MySQLStatementParser::BitExprContext * /*ctx*/) override { }
  virtual void exitBitExpr(MySQLStatementParser::BitExprContext * /*ctx*/) override { }

  virtual void enterSimpleExpr(MySQLStatementParser::SimpleExprContext * /*ctx*/) override { }
  virtual void exitSimpleExpr(MySQLStatementParser::SimpleExprContext * /*ctx*/) override { }

  virtual void enterColumnRef(MySQLStatementParser::ColumnRefContext * /*ctx*/) override { }
  virtual void exitColumnRef(MySQLStatementParser::ColumnRefContext * /*ctx*/) override { }

  virtual void enterColumnRefList(MySQLStatementParser::ColumnRefListContext * /*ctx*/) override { }
  virtual void exitColumnRefList(MySQLStatementParser::ColumnRefListContext * /*ctx*/) override { }

  virtual void enterFunctionCall(MySQLStatementParser::FunctionCallContext * /*ctx*/) override { }
  virtual void exitFunctionCall(MySQLStatementParser::FunctionCallContext * /*ctx*/) override { }

  virtual void enterAggregationFunction(MySQLStatementParser::AggregationFunctionContext * /*ctx*/) override { }
  virtual void exitAggregationFunction(MySQLStatementParser::AggregationFunctionContext * /*ctx*/) override { }

  virtual void enterAggregationFunctionName(MySQLStatementParser::AggregationFunctionNameContext * /*ctx*/) override { }
  virtual void exitAggregationFunctionName(MySQLStatementParser::AggregationFunctionNameContext * /*ctx*/) override { }

  virtual void enterDistinct(MySQLStatementParser::DistinctContext * /*ctx*/) override { }
  virtual void exitDistinct(MySQLStatementParser::DistinctContext * /*ctx*/) override { }

  virtual void enterOverClause(MySQLStatementParser::OverClauseContext * /*ctx*/) override { }
  virtual void exitOverClause(MySQLStatementParser::OverClauseContext * /*ctx*/) override { }

  virtual void enterWindowSpecification(MySQLStatementParser::WindowSpecificationContext * /*ctx*/) override { }
  virtual void exitWindowSpecification(MySQLStatementParser::WindowSpecificationContext * /*ctx*/) override { }

  virtual void enterFrameClause(MySQLStatementParser::FrameClauseContext * /*ctx*/) override { }
  virtual void exitFrameClause(MySQLStatementParser::FrameClauseContext * /*ctx*/) override { }

  virtual void enterFrameStart(MySQLStatementParser::FrameStartContext * /*ctx*/) override { }
  virtual void exitFrameStart(MySQLStatementParser::FrameStartContext * /*ctx*/) override { }

  virtual void enterFrameEnd(MySQLStatementParser::FrameEndContext * /*ctx*/) override { }
  virtual void exitFrameEnd(MySQLStatementParser::FrameEndContext * /*ctx*/) override { }

  virtual void enterFrameBetween(MySQLStatementParser::FrameBetweenContext * /*ctx*/) override { }
  virtual void exitFrameBetween(MySQLStatementParser::FrameBetweenContext * /*ctx*/) override { }

  virtual void enterSpecialFunction(MySQLStatementParser::SpecialFunctionContext * /*ctx*/) override { }
  virtual void exitSpecialFunction(MySQLStatementParser::SpecialFunctionContext * /*ctx*/) override { }

  virtual void enterCurrentUserFunction(MySQLStatementParser::CurrentUserFunctionContext * /*ctx*/) override { }
  virtual void exitCurrentUserFunction(MySQLStatementParser::CurrentUserFunctionContext * /*ctx*/) override { }

  virtual void enterGroupConcatFunction(MySQLStatementParser::GroupConcatFunctionContext * /*ctx*/) override { }
  virtual void exitGroupConcatFunction(MySQLStatementParser::GroupConcatFunctionContext * /*ctx*/) override { }

  virtual void enterWindowFunction(MySQLStatementParser::WindowFunctionContext * /*ctx*/) override { }
  virtual void exitWindowFunction(MySQLStatementParser::WindowFunctionContext * /*ctx*/) override { }

  virtual void enterWindowingClause(MySQLStatementParser::WindowingClauseContext * /*ctx*/) override { }
  virtual void exitWindowingClause(MySQLStatementParser::WindowingClauseContext * /*ctx*/) override { }

  virtual void enterLeadLagInfo(MySQLStatementParser::LeadLagInfoContext * /*ctx*/) override { }
  virtual void exitLeadLagInfo(MySQLStatementParser::LeadLagInfoContext * /*ctx*/) override { }

  virtual void enterNullTreatment(MySQLStatementParser::NullTreatmentContext * /*ctx*/) override { }
  virtual void exitNullTreatment(MySQLStatementParser::NullTreatmentContext * /*ctx*/) override { }

  virtual void enterCheckType(MySQLStatementParser::CheckTypeContext * /*ctx*/) override { }
  virtual void exitCheckType(MySQLStatementParser::CheckTypeContext * /*ctx*/) override { }

  virtual void enterRepairType(MySQLStatementParser::RepairTypeContext * /*ctx*/) override { }
  virtual void exitRepairType(MySQLStatementParser::RepairTypeContext * /*ctx*/) override { }

  virtual void enterCastFunction(MySQLStatementParser::CastFunctionContext * /*ctx*/) override { }
  virtual void exitCastFunction(MySQLStatementParser::CastFunctionContext * /*ctx*/) override { }

  virtual void enterConvertFunction(MySQLStatementParser::ConvertFunctionContext * /*ctx*/) override { }
  virtual void exitConvertFunction(MySQLStatementParser::ConvertFunctionContext * /*ctx*/) override { }

  virtual void enterCastType(MySQLStatementParser::CastTypeContext * /*ctx*/) override { }
  virtual void exitCastType(MySQLStatementParser::CastTypeContext * /*ctx*/) override { }

  virtual void enterNchar(MySQLStatementParser::NcharContext * /*ctx*/) override { }
  virtual void exitNchar(MySQLStatementParser::NcharContext * /*ctx*/) override { }

  virtual void enterPositionFunction(MySQLStatementParser::PositionFunctionContext * /*ctx*/) override { }
  virtual void exitPositionFunction(MySQLStatementParser::PositionFunctionContext * /*ctx*/) override { }

  virtual void enterSubstringFunction(MySQLStatementParser::SubstringFunctionContext * /*ctx*/) override { }
  virtual void exitSubstringFunction(MySQLStatementParser::SubstringFunctionContext * /*ctx*/) override { }

  virtual void enterExtractFunction(MySQLStatementParser::ExtractFunctionContext * /*ctx*/) override { }
  virtual void exitExtractFunction(MySQLStatementParser::ExtractFunctionContext * /*ctx*/) override { }

  virtual void enterCharFunction(MySQLStatementParser::CharFunctionContext * /*ctx*/) override { }
  virtual void exitCharFunction(MySQLStatementParser::CharFunctionContext * /*ctx*/) override { }

  virtual void enterTrimFunction(MySQLStatementParser::TrimFunctionContext * /*ctx*/) override { }
  virtual void exitTrimFunction(MySQLStatementParser::TrimFunctionContext * /*ctx*/) override { }

  virtual void enterValuesFunction(MySQLStatementParser::ValuesFunctionContext * /*ctx*/) override { }
  virtual void exitValuesFunction(MySQLStatementParser::ValuesFunctionContext * /*ctx*/) override { }

  virtual void enterWeightStringFunction(MySQLStatementParser::WeightStringFunctionContext * /*ctx*/) override { }
  virtual void exitWeightStringFunction(MySQLStatementParser::WeightStringFunctionContext * /*ctx*/) override { }

  virtual void enterLevelClause(MySQLStatementParser::LevelClauseContext * /*ctx*/) override { }
  virtual void exitLevelClause(MySQLStatementParser::LevelClauseContext * /*ctx*/) override { }

  virtual void enterLevelInWeightListElement(MySQLStatementParser::LevelInWeightListElementContext * /*ctx*/) override { }
  virtual void exitLevelInWeightListElement(MySQLStatementParser::LevelInWeightListElementContext * /*ctx*/) override { }

  virtual void enterRegularFunction(MySQLStatementParser::RegularFunctionContext * /*ctx*/) override { }
  virtual void exitRegularFunction(MySQLStatementParser::RegularFunctionContext * /*ctx*/) override { }

  virtual void enterShorthandRegularFunction(MySQLStatementParser::ShorthandRegularFunctionContext * /*ctx*/) override { }
  virtual void exitShorthandRegularFunction(MySQLStatementParser::ShorthandRegularFunctionContext * /*ctx*/) override { }

  virtual void enterCompleteRegularFunction(MySQLStatementParser::CompleteRegularFunctionContext * /*ctx*/) override { }
  virtual void exitCompleteRegularFunction(MySQLStatementParser::CompleteRegularFunctionContext * /*ctx*/) override { }

  virtual void enterRegularFunctionName(MySQLStatementParser::RegularFunctionNameContext * /*ctx*/) override { }
  virtual void exitRegularFunctionName(MySQLStatementParser::RegularFunctionNameContext * /*ctx*/) override { }

  virtual void enterMatchExpression(MySQLStatementParser::MatchExpressionContext * /*ctx*/) override { }
  virtual void exitMatchExpression(MySQLStatementParser::MatchExpressionContext * /*ctx*/) override { }

  virtual void enterMatchSearchModifier(MySQLStatementParser::MatchSearchModifierContext * /*ctx*/) override { }
  virtual void exitMatchSearchModifier(MySQLStatementParser::MatchSearchModifierContext * /*ctx*/) override { }

  virtual void enterCaseExpression(MySQLStatementParser::CaseExpressionContext * /*ctx*/) override { }
  virtual void exitCaseExpression(MySQLStatementParser::CaseExpressionContext * /*ctx*/) override { }

  virtual void enterDatetimeExpr(MySQLStatementParser::DatetimeExprContext * /*ctx*/) override { }
  virtual void exitDatetimeExpr(MySQLStatementParser::DatetimeExprContext * /*ctx*/) override { }

  virtual void enterBinaryLogFileIndexNumber(MySQLStatementParser::BinaryLogFileIndexNumberContext * /*ctx*/) override { }
  virtual void exitBinaryLogFileIndexNumber(MySQLStatementParser::BinaryLogFileIndexNumberContext * /*ctx*/) override { }

  virtual void enterCaseWhen(MySQLStatementParser::CaseWhenContext * /*ctx*/) override { }
  virtual void exitCaseWhen(MySQLStatementParser::CaseWhenContext * /*ctx*/) override { }

  virtual void enterCaseElse(MySQLStatementParser::CaseElseContext * /*ctx*/) override { }
  virtual void exitCaseElse(MySQLStatementParser::CaseElseContext * /*ctx*/) override { }

  virtual void enterIntervalExpression(MySQLStatementParser::IntervalExpressionContext * /*ctx*/) override { }
  virtual void exitIntervalExpression(MySQLStatementParser::IntervalExpressionContext * /*ctx*/) override { }

  virtual void enterIntervalValue(MySQLStatementParser::IntervalValueContext * /*ctx*/) override { }
  virtual void exitIntervalValue(MySQLStatementParser::IntervalValueContext * /*ctx*/) override { }

  virtual void enterIntervalUnit(MySQLStatementParser::IntervalUnitContext * /*ctx*/) override { }
  virtual void exitIntervalUnit(MySQLStatementParser::IntervalUnitContext * /*ctx*/) override { }

  virtual void enterOrderByClause(MySQLStatementParser::OrderByClauseContext * /*ctx*/) override { }
  virtual void exitOrderByClause(MySQLStatementParser::OrderByClauseContext * /*ctx*/) override { }

  virtual void enterOrderByItem(MySQLStatementParser::OrderByItemContext * /*ctx*/) override { }
  virtual void exitOrderByItem(MySQLStatementParser::OrderByItemContext * /*ctx*/) override { }

  virtual void enterDataType(MySQLStatementParser::DataTypeContext * /*ctx*/) override { }
  virtual void exitDataType(MySQLStatementParser::DataTypeContext * /*ctx*/) override { }

  virtual void enterStringList(MySQLStatementParser::StringListContext * /*ctx*/) override { }
  virtual void exitStringList(MySQLStatementParser::StringListContext * /*ctx*/) override { }

  virtual void enterTextString(MySQLStatementParser::TextStringContext * /*ctx*/) override { }
  virtual void exitTextString(MySQLStatementParser::TextStringContext * /*ctx*/) override { }

  virtual void enterTextStringHash(MySQLStatementParser::TextStringHashContext * /*ctx*/) override { }
  virtual void exitTextStringHash(MySQLStatementParser::TextStringHashContext * /*ctx*/) override { }

  virtual void enterFieldOptions(MySQLStatementParser::FieldOptionsContext * /*ctx*/) override { }
  virtual void exitFieldOptions(MySQLStatementParser::FieldOptionsContext * /*ctx*/) override { }

  virtual void enterPrecision(MySQLStatementParser::PrecisionContext * /*ctx*/) override { }
  virtual void exitPrecision(MySQLStatementParser::PrecisionContext * /*ctx*/) override { }

  virtual void enterTypeDatetimePrecision(MySQLStatementParser::TypeDatetimePrecisionContext * /*ctx*/) override { }
  virtual void exitTypeDatetimePrecision(MySQLStatementParser::TypeDatetimePrecisionContext * /*ctx*/) override { }

  virtual void enterCharsetWithOptBinary(MySQLStatementParser::CharsetWithOptBinaryContext * /*ctx*/) override { }
  virtual void exitCharsetWithOptBinary(MySQLStatementParser::CharsetWithOptBinaryContext * /*ctx*/) override { }

  virtual void enterAscii(MySQLStatementParser::AsciiContext * /*ctx*/) override { }
  virtual void exitAscii(MySQLStatementParser::AsciiContext * /*ctx*/) override { }

  virtual void enterUnicode(MySQLStatementParser::UnicodeContext * /*ctx*/) override { }
  virtual void exitUnicode(MySQLStatementParser::UnicodeContext * /*ctx*/) override { }

  virtual void enterCharset(MySQLStatementParser::CharsetContext * /*ctx*/) override { }
  virtual void exitCharset(MySQLStatementParser::CharsetContext * /*ctx*/) override { }

  virtual void enterDefaultCollation(MySQLStatementParser::DefaultCollationContext * /*ctx*/) override { }
  virtual void exitDefaultCollation(MySQLStatementParser::DefaultCollationContext * /*ctx*/) override { }

  virtual void enterDefaultEncryption(MySQLStatementParser::DefaultEncryptionContext * /*ctx*/) override { }
  virtual void exitDefaultEncryption(MySQLStatementParser::DefaultEncryptionContext * /*ctx*/) override { }

  virtual void enterDefaultCharset(MySQLStatementParser::DefaultCharsetContext * /*ctx*/) override { }
  virtual void exitDefaultCharset(MySQLStatementParser::DefaultCharsetContext * /*ctx*/) override { }

  virtual void enterSignedLiteral(MySQLStatementParser::SignedLiteralContext * /*ctx*/) override { }
  virtual void exitSignedLiteral(MySQLStatementParser::SignedLiteralContext * /*ctx*/) override { }

  virtual void enterNow(MySQLStatementParser::NowContext * /*ctx*/) override { }
  virtual void exitNow(MySQLStatementParser::NowContext * /*ctx*/) override { }

  virtual void enterColumnFormat(MySQLStatementParser::ColumnFormatContext * /*ctx*/) override { }
  virtual void exitColumnFormat(MySQLStatementParser::ColumnFormatContext * /*ctx*/) override { }

  virtual void enterStorageMedia(MySQLStatementParser::StorageMediaContext * /*ctx*/) override { }
  virtual void exitStorageMedia(MySQLStatementParser::StorageMediaContext * /*ctx*/) override { }

  virtual void enterDirection(MySQLStatementParser::DirectionContext * /*ctx*/) override { }
  virtual void exitDirection(MySQLStatementParser::DirectionContext * /*ctx*/) override { }

  virtual void enterKeyOrIndex(MySQLStatementParser::KeyOrIndexContext * /*ctx*/) override { }
  virtual void exitKeyOrIndex(MySQLStatementParser::KeyOrIndexContext * /*ctx*/) override { }

  virtual void enterFieldLength(MySQLStatementParser::FieldLengthContext * /*ctx*/) override { }
  virtual void exitFieldLength(MySQLStatementParser::FieldLengthContext * /*ctx*/) override { }

  virtual void enterCharacterSet(MySQLStatementParser::CharacterSetContext * /*ctx*/) override { }
  virtual void exitCharacterSet(MySQLStatementParser::CharacterSetContext * /*ctx*/) override { }

  virtual void enterCollateClause(MySQLStatementParser::CollateClauseContext * /*ctx*/) override { }
  virtual void exitCollateClause(MySQLStatementParser::CollateClauseContext * /*ctx*/) override { }

  virtual void enterFieldOrVarSpec(MySQLStatementParser::FieldOrVarSpecContext * /*ctx*/) override { }
  virtual void exitFieldOrVarSpec(MySQLStatementParser::FieldOrVarSpecContext * /*ctx*/) override { }

  virtual void enterNotExistClause(MySQLStatementParser::NotExistClauseContext * /*ctx*/) override { }
  virtual void exitNotExistClause(MySQLStatementParser::NotExistClauseContext * /*ctx*/) override { }

  virtual void enterExistClause(MySQLStatementParser::ExistClauseContext * /*ctx*/) override { }
  virtual void exitExistClause(MySQLStatementParser::ExistClauseContext * /*ctx*/) override { }

  virtual void enterConnectionId(MySQLStatementParser::ConnectionIdContext * /*ctx*/) override { }
  virtual void exitConnectionId(MySQLStatementParser::ConnectionIdContext * /*ctx*/) override { }

  virtual void enterLabelName(MySQLStatementParser::LabelNameContext * /*ctx*/) override { }
  virtual void exitLabelName(MySQLStatementParser::LabelNameContext * /*ctx*/) override { }

  virtual void enterCursorName(MySQLStatementParser::CursorNameContext * /*ctx*/) override { }
  virtual void exitCursorName(MySQLStatementParser::CursorNameContext * /*ctx*/) override { }

  virtual void enterConditionName(MySQLStatementParser::ConditionNameContext * /*ctx*/) override { }
  virtual void exitConditionName(MySQLStatementParser::ConditionNameContext * /*ctx*/) override { }

  virtual void enterUnionOption(MySQLStatementParser::UnionOptionContext * /*ctx*/) override { }
  virtual void exitUnionOption(MySQLStatementParser::UnionOptionContext * /*ctx*/) override { }

  virtual void enterNoWriteToBinLog(MySQLStatementParser::NoWriteToBinLogContext * /*ctx*/) override { }
  virtual void exitNoWriteToBinLog(MySQLStatementParser::NoWriteToBinLogContext * /*ctx*/) override { }

  virtual void enterChannelOption(MySQLStatementParser::ChannelOptionContext * /*ctx*/) override { }
  virtual void exitChannelOption(MySQLStatementParser::ChannelOptionContext * /*ctx*/) override { }

  virtual void enterPreparedStatement(MySQLStatementParser::PreparedStatementContext * /*ctx*/) override { }
  virtual void exitPreparedStatement(MySQLStatementParser::PreparedStatementContext * /*ctx*/) override { }

  virtual void enterExecuteStatement(MySQLStatementParser::ExecuteStatementContext * /*ctx*/) override { }
  virtual void exitExecuteStatement(MySQLStatementParser::ExecuteStatementContext * /*ctx*/) override { }

  virtual void enterExecuteVarList(MySQLStatementParser::ExecuteVarListContext * /*ctx*/) override { }
  virtual void exitExecuteVarList(MySQLStatementParser::ExecuteVarListContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};


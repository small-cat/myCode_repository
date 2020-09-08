
// Generated from MySQLParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "MySQLParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by MySQLParser.
 */
class  MySQLParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by MySQLParser.
   */
    virtual antlrcpp::Any visitRoot(MySQLParser::RootContext *context) = 0;

    virtual antlrcpp::Any visitSqlStatements(MySQLParser::SqlStatementsContext *context) = 0;

    virtual antlrcpp::Any visitSqlStatement(MySQLParser::SqlStatementContext *context) = 0;

    virtual antlrcpp::Any visitEmptyStatement(MySQLParser::EmptyStatementContext *context) = 0;

    virtual antlrcpp::Any visitDdlStatement(MySQLParser::DdlStatementContext *context) = 0;

    virtual antlrcpp::Any visitDmlStatement(MySQLParser::DmlStatementContext *context) = 0;

    virtual antlrcpp::Any visitTransactionStatement(MySQLParser::TransactionStatementContext *context) = 0;

    virtual antlrcpp::Any visitReplicationStatement(MySQLParser::ReplicationStatementContext *context) = 0;

    virtual antlrcpp::Any visitPreparedStatement(MySQLParser::PreparedStatementContext *context) = 0;

    virtual antlrcpp::Any visitCompoundStatement(MySQLParser::CompoundStatementContext *context) = 0;

    virtual antlrcpp::Any visitAdministrationStatement(MySQLParser::AdministrationStatementContext *context) = 0;

    virtual antlrcpp::Any visitUtilityStatement(MySQLParser::UtilityStatementContext *context) = 0;

    virtual antlrcpp::Any visitCreateDatabase(MySQLParser::CreateDatabaseContext *context) = 0;

    virtual antlrcpp::Any visitCreateEvent(MySQLParser::CreateEventContext *context) = 0;

    virtual antlrcpp::Any visitCreateIndex(MySQLParser::CreateIndexContext *context) = 0;

    virtual antlrcpp::Any visitCreateLogfileGroup(MySQLParser::CreateLogfileGroupContext *context) = 0;

    virtual antlrcpp::Any visitCreateProcedure(MySQLParser::CreateProcedureContext *context) = 0;

    virtual antlrcpp::Any visitCreateFunction(MySQLParser::CreateFunctionContext *context) = 0;

    virtual antlrcpp::Any visitCreateServer(MySQLParser::CreateServerContext *context) = 0;

    virtual antlrcpp::Any visitCopyCreateTable(MySQLParser::CopyCreateTableContext *context) = 0;

    virtual antlrcpp::Any visitQueryCreateTable(MySQLParser::QueryCreateTableContext *context) = 0;

    virtual antlrcpp::Any visitColumnCreateTable(MySQLParser::ColumnCreateTableContext *context) = 0;

    virtual antlrcpp::Any visitCreateTablespaceInnodb(MySQLParser::CreateTablespaceInnodbContext *context) = 0;

    virtual antlrcpp::Any visitCreateTablespaceNdb(MySQLParser::CreateTablespaceNdbContext *context) = 0;

    virtual antlrcpp::Any visitCreateTrigger(MySQLParser::CreateTriggerContext *context) = 0;

    virtual antlrcpp::Any visitCreateView(MySQLParser::CreateViewContext *context) = 0;

    virtual antlrcpp::Any visitCreateDatabaseOption(MySQLParser::CreateDatabaseOptionContext *context) = 0;

    virtual antlrcpp::Any visitOwnerStatement(MySQLParser::OwnerStatementContext *context) = 0;

    virtual antlrcpp::Any visitPreciseSchedule(MySQLParser::PreciseScheduleContext *context) = 0;

    virtual antlrcpp::Any visitIntervalSchedule(MySQLParser::IntervalScheduleContext *context) = 0;

    virtual antlrcpp::Any visitTimestampValue(MySQLParser::TimestampValueContext *context) = 0;

    virtual antlrcpp::Any visitIntervalExpr(MySQLParser::IntervalExprContext *context) = 0;

    virtual antlrcpp::Any visitIntervalType(MySQLParser::IntervalTypeContext *context) = 0;

    virtual antlrcpp::Any visitEnableType(MySQLParser::EnableTypeContext *context) = 0;

    virtual antlrcpp::Any visitIndexType(MySQLParser::IndexTypeContext *context) = 0;

    virtual antlrcpp::Any visitIndexOption(MySQLParser::IndexOptionContext *context) = 0;

    virtual antlrcpp::Any visitProcedureParameter(MySQLParser::ProcedureParameterContext *context) = 0;

    virtual antlrcpp::Any visitFunctionParameter(MySQLParser::FunctionParameterContext *context) = 0;

    virtual antlrcpp::Any visitRoutineComment(MySQLParser::RoutineCommentContext *context) = 0;

    virtual antlrcpp::Any visitRoutineLanguage(MySQLParser::RoutineLanguageContext *context) = 0;

    virtual antlrcpp::Any visitRoutineBehavior(MySQLParser::RoutineBehaviorContext *context) = 0;

    virtual antlrcpp::Any visitRoutineData(MySQLParser::RoutineDataContext *context) = 0;

    virtual antlrcpp::Any visitRoutineSecurity(MySQLParser::RoutineSecurityContext *context) = 0;

    virtual antlrcpp::Any visitServerOption(MySQLParser::ServerOptionContext *context) = 0;

    virtual antlrcpp::Any visitCreateDefinitions(MySQLParser::CreateDefinitionsContext *context) = 0;

    virtual antlrcpp::Any visitColumnDeclaration(MySQLParser::ColumnDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitConstraintDeclaration(MySQLParser::ConstraintDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitIndexDeclaration(MySQLParser::IndexDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitColumnDefinition(MySQLParser::ColumnDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitNullColumnConstraint(MySQLParser::NullColumnConstraintContext *context) = 0;

    virtual antlrcpp::Any visitDefaultColumnConstraint(MySQLParser::DefaultColumnConstraintContext *context) = 0;

    virtual antlrcpp::Any visitAutoIncrementColumnConstraint(MySQLParser::AutoIncrementColumnConstraintContext *context) = 0;

    virtual antlrcpp::Any visitPrimaryKeyColumnConstraint(MySQLParser::PrimaryKeyColumnConstraintContext *context) = 0;

    virtual antlrcpp::Any visitUniqueKeyColumnConstraint(MySQLParser::UniqueKeyColumnConstraintContext *context) = 0;

    virtual antlrcpp::Any visitCommentColumnConstraint(MySQLParser::CommentColumnConstraintContext *context) = 0;

    virtual antlrcpp::Any visitFormatColumnConstraint(MySQLParser::FormatColumnConstraintContext *context) = 0;

    virtual antlrcpp::Any visitStorageColumnConstraint(MySQLParser::StorageColumnConstraintContext *context) = 0;

    virtual antlrcpp::Any visitReferenceColumnConstraint(MySQLParser::ReferenceColumnConstraintContext *context) = 0;

    virtual antlrcpp::Any visitCollateColumnConstraint(MySQLParser::CollateColumnConstraintContext *context) = 0;

    virtual antlrcpp::Any visitGeneratedColumnConstraint(MySQLParser::GeneratedColumnConstraintContext *context) = 0;

    virtual antlrcpp::Any visitSerialDefaultColumnConstraint(MySQLParser::SerialDefaultColumnConstraintContext *context) = 0;

    virtual antlrcpp::Any visitPrimaryKeyTableConstraint(MySQLParser::PrimaryKeyTableConstraintContext *context) = 0;

    virtual antlrcpp::Any visitUniqueKeyTableConstraint(MySQLParser::UniqueKeyTableConstraintContext *context) = 0;

    virtual antlrcpp::Any visitForeignKeyTableConstraint(MySQLParser::ForeignKeyTableConstraintContext *context) = 0;

    virtual antlrcpp::Any visitCheckTableConstraint(MySQLParser::CheckTableConstraintContext *context) = 0;

    virtual antlrcpp::Any visitReferenceDefinition(MySQLParser::ReferenceDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitReferenceAction(MySQLParser::ReferenceActionContext *context) = 0;

    virtual antlrcpp::Any visitReferenceControlType(MySQLParser::ReferenceControlTypeContext *context) = 0;

    virtual antlrcpp::Any visitSimpleIndexDeclaration(MySQLParser::SimpleIndexDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitSpecialIndexDeclaration(MySQLParser::SpecialIndexDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitTableOptionEngine(MySQLParser::TableOptionEngineContext *context) = 0;

    virtual antlrcpp::Any visitTableOptionAutoIncrement(MySQLParser::TableOptionAutoIncrementContext *context) = 0;

    virtual antlrcpp::Any visitTableOptionAverage(MySQLParser::TableOptionAverageContext *context) = 0;

    virtual antlrcpp::Any visitTableOptionCharset(MySQLParser::TableOptionCharsetContext *context) = 0;

    virtual antlrcpp::Any visitTableOptionChecksum(MySQLParser::TableOptionChecksumContext *context) = 0;

    virtual antlrcpp::Any visitTableOptionCollate(MySQLParser::TableOptionCollateContext *context) = 0;

    virtual antlrcpp::Any visitTableOptionComment(MySQLParser::TableOptionCommentContext *context) = 0;

    virtual antlrcpp::Any visitTableOptionCompression(MySQLParser::TableOptionCompressionContext *context) = 0;

    virtual antlrcpp::Any visitTableOptionConnection(MySQLParser::TableOptionConnectionContext *context) = 0;

    virtual antlrcpp::Any visitTableOptionDataDirectory(MySQLParser::TableOptionDataDirectoryContext *context) = 0;

    virtual antlrcpp::Any visitTableOptionDelay(MySQLParser::TableOptionDelayContext *context) = 0;

    virtual antlrcpp::Any visitTableOptionEncryption(MySQLParser::TableOptionEncryptionContext *context) = 0;

    virtual antlrcpp::Any visitTableOptionIndexDirectory(MySQLParser::TableOptionIndexDirectoryContext *context) = 0;

    virtual antlrcpp::Any visitTableOptionInsertMethod(MySQLParser::TableOptionInsertMethodContext *context) = 0;

    virtual antlrcpp::Any visitTableOptionKeyBlockSize(MySQLParser::TableOptionKeyBlockSizeContext *context) = 0;

    virtual antlrcpp::Any visitTableOptionMaxRows(MySQLParser::TableOptionMaxRowsContext *context) = 0;

    virtual antlrcpp::Any visitTableOptionMinRows(MySQLParser::TableOptionMinRowsContext *context) = 0;

    virtual antlrcpp::Any visitTableOptionPackKeys(MySQLParser::TableOptionPackKeysContext *context) = 0;

    virtual antlrcpp::Any visitTableOptionPassword(MySQLParser::TableOptionPasswordContext *context) = 0;

    virtual antlrcpp::Any visitTableOptionRowFormat(MySQLParser::TableOptionRowFormatContext *context) = 0;

    virtual antlrcpp::Any visitTableOptionRecalculation(MySQLParser::TableOptionRecalculationContext *context) = 0;

    virtual antlrcpp::Any visitTableOptionPersistent(MySQLParser::TableOptionPersistentContext *context) = 0;

    virtual antlrcpp::Any visitTableOptionSamplePage(MySQLParser::TableOptionSamplePageContext *context) = 0;

    virtual antlrcpp::Any visitTableOptionTablespace(MySQLParser::TableOptionTablespaceContext *context) = 0;

    virtual antlrcpp::Any visitTableOptionUnion(MySQLParser::TableOptionUnionContext *context) = 0;

    virtual antlrcpp::Any visitTablespaceStorage(MySQLParser::TablespaceStorageContext *context) = 0;

    virtual antlrcpp::Any visitPartitionDefinitions(MySQLParser::PartitionDefinitionsContext *context) = 0;

    virtual antlrcpp::Any visitPartitionFunctionHash(MySQLParser::PartitionFunctionHashContext *context) = 0;

    virtual antlrcpp::Any visitPartitionFunctionKey(MySQLParser::PartitionFunctionKeyContext *context) = 0;

    virtual antlrcpp::Any visitPartitionFunctionRange(MySQLParser::PartitionFunctionRangeContext *context) = 0;

    virtual antlrcpp::Any visitPartitionFunctionList(MySQLParser::PartitionFunctionListContext *context) = 0;

    virtual antlrcpp::Any visitSubPartitionFunctionHash(MySQLParser::SubPartitionFunctionHashContext *context) = 0;

    virtual antlrcpp::Any visitSubPartitionFunctionKey(MySQLParser::SubPartitionFunctionKeyContext *context) = 0;

    virtual antlrcpp::Any visitPartitionComparision(MySQLParser::PartitionComparisionContext *context) = 0;

    virtual antlrcpp::Any visitPartitionListAtom(MySQLParser::PartitionListAtomContext *context) = 0;

    virtual antlrcpp::Any visitPartitionListVector(MySQLParser::PartitionListVectorContext *context) = 0;

    virtual antlrcpp::Any visitPartitionSimple(MySQLParser::PartitionSimpleContext *context) = 0;

    virtual antlrcpp::Any visitPartitionDefinerAtom(MySQLParser::PartitionDefinerAtomContext *context) = 0;

    virtual antlrcpp::Any visitPartitionDefinerVector(MySQLParser::PartitionDefinerVectorContext *context) = 0;

    virtual antlrcpp::Any visitSubpartitionDefinition(MySQLParser::SubpartitionDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitPartitionOptionEngine(MySQLParser::PartitionOptionEngineContext *context) = 0;

    virtual antlrcpp::Any visitPartitionOptionComment(MySQLParser::PartitionOptionCommentContext *context) = 0;

    virtual antlrcpp::Any visitPartitionOptionDataDirectory(MySQLParser::PartitionOptionDataDirectoryContext *context) = 0;

    virtual antlrcpp::Any visitPartitionOptionIndexDirectory(MySQLParser::PartitionOptionIndexDirectoryContext *context) = 0;

    virtual antlrcpp::Any visitPartitionOptionMaxRows(MySQLParser::PartitionOptionMaxRowsContext *context) = 0;

    virtual antlrcpp::Any visitPartitionOptionMinRows(MySQLParser::PartitionOptionMinRowsContext *context) = 0;

    virtual antlrcpp::Any visitPartitionOptionTablespace(MySQLParser::PartitionOptionTablespaceContext *context) = 0;

    virtual antlrcpp::Any visitPartitionOptionNodeGroup(MySQLParser::PartitionOptionNodeGroupContext *context) = 0;

    virtual antlrcpp::Any visitAlterSimpleDatabase(MySQLParser::AlterSimpleDatabaseContext *context) = 0;

    virtual antlrcpp::Any visitAlterUpgradeName(MySQLParser::AlterUpgradeNameContext *context) = 0;

    virtual antlrcpp::Any visitAlterEvent(MySQLParser::AlterEventContext *context) = 0;

    virtual antlrcpp::Any visitAlterFunction(MySQLParser::AlterFunctionContext *context) = 0;

    virtual antlrcpp::Any visitAlterInstance(MySQLParser::AlterInstanceContext *context) = 0;

    virtual antlrcpp::Any visitAlterLogfileGroup(MySQLParser::AlterLogfileGroupContext *context) = 0;

    virtual antlrcpp::Any visitAlterProcedure(MySQLParser::AlterProcedureContext *context) = 0;

    virtual antlrcpp::Any visitAlterServer(MySQLParser::AlterServerContext *context) = 0;

    virtual antlrcpp::Any visitAlterTable(MySQLParser::AlterTableContext *context) = 0;

    virtual antlrcpp::Any visitAlterTablespace(MySQLParser::AlterTablespaceContext *context) = 0;

    virtual antlrcpp::Any visitAlterView(MySQLParser::AlterViewContext *context) = 0;

    virtual antlrcpp::Any visitAlterByTableOption(MySQLParser::AlterByTableOptionContext *context) = 0;

    virtual antlrcpp::Any visitAlterByAddColumn(MySQLParser::AlterByAddColumnContext *context) = 0;

    virtual antlrcpp::Any visitAlterByAddColumns(MySQLParser::AlterByAddColumnsContext *context) = 0;

    virtual antlrcpp::Any visitAlterByAddIndex(MySQLParser::AlterByAddIndexContext *context) = 0;

    virtual antlrcpp::Any visitAlterByAddPrimaryKey(MySQLParser::AlterByAddPrimaryKeyContext *context) = 0;

    virtual antlrcpp::Any visitAlterByAddUniqueKey(MySQLParser::AlterByAddUniqueKeyContext *context) = 0;

    virtual antlrcpp::Any visitAlterByAddSpecialIndex(MySQLParser::AlterByAddSpecialIndexContext *context) = 0;

    virtual antlrcpp::Any visitAlterByAddForeignKey(MySQLParser::AlterByAddForeignKeyContext *context) = 0;

    virtual antlrcpp::Any visitAlterByAddCheckTableConstraint(MySQLParser::AlterByAddCheckTableConstraintContext *context) = 0;

    virtual antlrcpp::Any visitAlterBySetAlgorithm(MySQLParser::AlterBySetAlgorithmContext *context) = 0;

    virtual antlrcpp::Any visitAlterByChangeDefault(MySQLParser::AlterByChangeDefaultContext *context) = 0;

    virtual antlrcpp::Any visitAlterByChangeColumn(MySQLParser::AlterByChangeColumnContext *context) = 0;

    virtual antlrcpp::Any visitAlterByRenameColumn(MySQLParser::AlterByRenameColumnContext *context) = 0;

    virtual antlrcpp::Any visitAlterByLock(MySQLParser::AlterByLockContext *context) = 0;

    virtual antlrcpp::Any visitAlterByModifyColumn(MySQLParser::AlterByModifyColumnContext *context) = 0;

    virtual antlrcpp::Any visitAlterByDropColumn(MySQLParser::AlterByDropColumnContext *context) = 0;

    virtual antlrcpp::Any visitAlterByDropPrimaryKey(MySQLParser::AlterByDropPrimaryKeyContext *context) = 0;

    virtual antlrcpp::Any visitAlterByRenameIndex(MySQLParser::AlterByRenameIndexContext *context) = 0;

    virtual antlrcpp::Any visitAlterByDropIndex(MySQLParser::AlterByDropIndexContext *context) = 0;

    virtual antlrcpp::Any visitAlterByDropForeignKey(MySQLParser::AlterByDropForeignKeyContext *context) = 0;

    virtual antlrcpp::Any visitAlterByDisableKeys(MySQLParser::AlterByDisableKeysContext *context) = 0;

    virtual antlrcpp::Any visitAlterByEnableKeys(MySQLParser::AlterByEnableKeysContext *context) = 0;

    virtual antlrcpp::Any visitAlterByRename(MySQLParser::AlterByRenameContext *context) = 0;

    virtual antlrcpp::Any visitAlterByOrder(MySQLParser::AlterByOrderContext *context) = 0;

    virtual antlrcpp::Any visitAlterByConvertCharset(MySQLParser::AlterByConvertCharsetContext *context) = 0;

    virtual antlrcpp::Any visitAlterByDefaultCharset(MySQLParser::AlterByDefaultCharsetContext *context) = 0;

    virtual antlrcpp::Any visitAlterByDiscardTablespace(MySQLParser::AlterByDiscardTablespaceContext *context) = 0;

    virtual antlrcpp::Any visitAlterByImportTablespace(MySQLParser::AlterByImportTablespaceContext *context) = 0;

    virtual antlrcpp::Any visitAlterByForce(MySQLParser::AlterByForceContext *context) = 0;

    virtual antlrcpp::Any visitAlterByValidate(MySQLParser::AlterByValidateContext *context) = 0;

    virtual antlrcpp::Any visitAlterByAddPartition(MySQLParser::AlterByAddPartitionContext *context) = 0;

    virtual antlrcpp::Any visitAlterByDropPartition(MySQLParser::AlterByDropPartitionContext *context) = 0;

    virtual antlrcpp::Any visitAlterByDiscardPartition(MySQLParser::AlterByDiscardPartitionContext *context) = 0;

    virtual antlrcpp::Any visitAlterByImportPartition(MySQLParser::AlterByImportPartitionContext *context) = 0;

    virtual antlrcpp::Any visitAlterByTruncatePartition(MySQLParser::AlterByTruncatePartitionContext *context) = 0;

    virtual antlrcpp::Any visitAlterByCoalescePartition(MySQLParser::AlterByCoalescePartitionContext *context) = 0;

    virtual antlrcpp::Any visitAlterByReorganizePartition(MySQLParser::AlterByReorganizePartitionContext *context) = 0;

    virtual antlrcpp::Any visitAlterByExchangePartition(MySQLParser::AlterByExchangePartitionContext *context) = 0;

    virtual antlrcpp::Any visitAlterByAnalyzePartition(MySQLParser::AlterByAnalyzePartitionContext *context) = 0;

    virtual antlrcpp::Any visitAlterByCheckPartition(MySQLParser::AlterByCheckPartitionContext *context) = 0;

    virtual antlrcpp::Any visitAlterByOptimizePartition(MySQLParser::AlterByOptimizePartitionContext *context) = 0;

    virtual antlrcpp::Any visitAlterByRebuildPartition(MySQLParser::AlterByRebuildPartitionContext *context) = 0;

    virtual antlrcpp::Any visitAlterByRepairPartition(MySQLParser::AlterByRepairPartitionContext *context) = 0;

    virtual antlrcpp::Any visitAlterByRemovePartitioning(MySQLParser::AlterByRemovePartitioningContext *context) = 0;

    virtual antlrcpp::Any visitAlterByUpgradePartitioning(MySQLParser::AlterByUpgradePartitioningContext *context) = 0;

    virtual antlrcpp::Any visitDropDatabase(MySQLParser::DropDatabaseContext *context) = 0;

    virtual antlrcpp::Any visitDropEvent(MySQLParser::DropEventContext *context) = 0;

    virtual antlrcpp::Any visitDropIndex(MySQLParser::DropIndexContext *context) = 0;

    virtual antlrcpp::Any visitDropLogfileGroup(MySQLParser::DropLogfileGroupContext *context) = 0;

    virtual antlrcpp::Any visitDropProcedure(MySQLParser::DropProcedureContext *context) = 0;

    virtual antlrcpp::Any visitDropFunction(MySQLParser::DropFunctionContext *context) = 0;

    virtual antlrcpp::Any visitDropServer(MySQLParser::DropServerContext *context) = 0;

    virtual antlrcpp::Any visitDropTable(MySQLParser::DropTableContext *context) = 0;

    virtual antlrcpp::Any visitDropTablespace(MySQLParser::DropTablespaceContext *context) = 0;

    virtual antlrcpp::Any visitDropTrigger(MySQLParser::DropTriggerContext *context) = 0;

    virtual antlrcpp::Any visitDropView(MySQLParser::DropViewContext *context) = 0;

    virtual antlrcpp::Any visitRenameTable(MySQLParser::RenameTableContext *context) = 0;

    virtual antlrcpp::Any visitRenameTableClause(MySQLParser::RenameTableClauseContext *context) = 0;

    virtual antlrcpp::Any visitTruncateTable(MySQLParser::TruncateTableContext *context) = 0;

    virtual antlrcpp::Any visitCallStatement(MySQLParser::CallStatementContext *context) = 0;

    virtual antlrcpp::Any visitDeleteStatement(MySQLParser::DeleteStatementContext *context) = 0;

    virtual antlrcpp::Any visitDoStatement(MySQLParser::DoStatementContext *context) = 0;

    virtual antlrcpp::Any visitHandlerStatement(MySQLParser::HandlerStatementContext *context) = 0;

    virtual antlrcpp::Any visitInsertStatement(MySQLParser::InsertStatementContext *context) = 0;

    virtual antlrcpp::Any visitLoadDataStatement(MySQLParser::LoadDataStatementContext *context) = 0;

    virtual antlrcpp::Any visitLoadXmlStatement(MySQLParser::LoadXmlStatementContext *context) = 0;

    virtual antlrcpp::Any visitReplaceStatement(MySQLParser::ReplaceStatementContext *context) = 0;

    virtual antlrcpp::Any visitSimpleSelect(MySQLParser::SimpleSelectContext *context) = 0;

    virtual antlrcpp::Any visitParenthesisSelect(MySQLParser::ParenthesisSelectContext *context) = 0;

    virtual antlrcpp::Any visitUnionSelect(MySQLParser::UnionSelectContext *context) = 0;

    virtual antlrcpp::Any visitUnionParenthesisSelect(MySQLParser::UnionParenthesisSelectContext *context) = 0;

    virtual antlrcpp::Any visitUpdateStatement(MySQLParser::UpdateStatementContext *context) = 0;

    virtual antlrcpp::Any visitInsertStatementValue(MySQLParser::InsertStatementValueContext *context) = 0;

    virtual antlrcpp::Any visitUpdatedElement(MySQLParser::UpdatedElementContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentField(MySQLParser::AssignmentFieldContext *context) = 0;

    virtual antlrcpp::Any visitLockClause(MySQLParser::LockClauseContext *context) = 0;

    virtual antlrcpp::Any visitSingleDeleteStatement(MySQLParser::SingleDeleteStatementContext *context) = 0;

    virtual antlrcpp::Any visitMultipleDeleteStatement(MySQLParser::MultipleDeleteStatementContext *context) = 0;

    virtual antlrcpp::Any visitDelete_stmt_table(MySQLParser::Delete_stmt_tableContext *context) = 0;

    virtual antlrcpp::Any visitHandlerOpenStatement(MySQLParser::HandlerOpenStatementContext *context) = 0;

    virtual antlrcpp::Any visitHandlerReadIndexStatement(MySQLParser::HandlerReadIndexStatementContext *context) = 0;

    virtual antlrcpp::Any visitHandlerReadStatement(MySQLParser::HandlerReadStatementContext *context) = 0;

    virtual antlrcpp::Any visitHandlerCloseStatement(MySQLParser::HandlerCloseStatementContext *context) = 0;

    virtual antlrcpp::Any visitSingleUpdateStatement(MySQLParser::SingleUpdateStatementContext *context) = 0;

    virtual antlrcpp::Any visitMultipleUpdateStatement(MySQLParser::MultipleUpdateStatementContext *context) = 0;

    virtual antlrcpp::Any visitOrderByClause(MySQLParser::OrderByClauseContext *context) = 0;

    virtual antlrcpp::Any visitOrderByExpression(MySQLParser::OrderByExpressionContext *context) = 0;

    virtual antlrcpp::Any visitTableSources(MySQLParser::TableSourcesContext *context) = 0;

    virtual antlrcpp::Any visitTableSourceBase(MySQLParser::TableSourceBaseContext *context) = 0;

    virtual antlrcpp::Any visitTableSourceNested(MySQLParser::TableSourceNestedContext *context) = 0;

    virtual antlrcpp::Any visitAtomTableItem(MySQLParser::AtomTableItemContext *context) = 0;

    virtual antlrcpp::Any visitSubqueryTableItem(MySQLParser::SubqueryTableItemContext *context) = 0;

    virtual antlrcpp::Any visitTableSourcesItem(MySQLParser::TableSourcesItemContext *context) = 0;

    virtual antlrcpp::Any visitIndexHint(MySQLParser::IndexHintContext *context) = 0;

    virtual antlrcpp::Any visitIndexHintType(MySQLParser::IndexHintTypeContext *context) = 0;

    virtual antlrcpp::Any visitInnerJoin(MySQLParser::InnerJoinContext *context) = 0;

    virtual antlrcpp::Any visitStraightJoin(MySQLParser::StraightJoinContext *context) = 0;

    virtual antlrcpp::Any visitOuterJoin(MySQLParser::OuterJoinContext *context) = 0;

    virtual antlrcpp::Any visitNaturalJoin(MySQLParser::NaturalJoinContext *context) = 0;

    virtual antlrcpp::Any visitJoinPartOnClause(MySQLParser::JoinPartOnClauseContext *context) = 0;

    virtual antlrcpp::Any visitJoinPartUsingClause(MySQLParser::JoinPartUsingClauseContext *context) = 0;

    virtual antlrcpp::Any visitQueryExpression(MySQLParser::QueryExpressionContext *context) = 0;

    virtual antlrcpp::Any visitQueryExpressionNointo(MySQLParser::QueryExpressionNointoContext *context) = 0;

    virtual antlrcpp::Any visitQuerySpecification(MySQLParser::QuerySpecificationContext *context) = 0;

    virtual antlrcpp::Any visitQuerySpecificationNointo(MySQLParser::QuerySpecificationNointoContext *context) = 0;

    virtual antlrcpp::Any visitUnionParenthesis(MySQLParser::UnionParenthesisContext *context) = 0;

    virtual antlrcpp::Any visitUnionStatement(MySQLParser::UnionStatementContext *context) = 0;

    virtual antlrcpp::Any visitSelectSpec(MySQLParser::SelectSpecContext *context) = 0;

    virtual antlrcpp::Any visitSelectElements(MySQLParser::SelectElementsContext *context) = 0;

    virtual antlrcpp::Any visitSelectStarElement(MySQLParser::SelectStarElementContext *context) = 0;

    virtual antlrcpp::Any visitSelectColumnElement(MySQLParser::SelectColumnElementContext *context) = 0;

    virtual antlrcpp::Any visitSelectFunctionElement(MySQLParser::SelectFunctionElementContext *context) = 0;

    virtual antlrcpp::Any visitSelectExpressionElement(MySQLParser::SelectExpressionElementContext *context) = 0;

    virtual antlrcpp::Any visitSelectIntoVariables(MySQLParser::SelectIntoVariablesContext *context) = 0;

    virtual antlrcpp::Any visitSelectIntoDumpFile(MySQLParser::SelectIntoDumpFileContext *context) = 0;

    virtual antlrcpp::Any visitSelectIntoTextFile(MySQLParser::SelectIntoTextFileContext *context) = 0;

    virtual antlrcpp::Any visitSelectFieldsInto(MySQLParser::SelectFieldsIntoContext *context) = 0;

    virtual antlrcpp::Any visitSelectLinesInto(MySQLParser::SelectLinesIntoContext *context) = 0;

    virtual antlrcpp::Any visitFromClause(MySQLParser::FromClauseContext *context) = 0;

    virtual antlrcpp::Any visitWhereClause(MySQLParser::WhereClauseContext *context) = 0;

    virtual antlrcpp::Any visitGroupClause(MySQLParser::GroupClauseContext *context) = 0;

    virtual antlrcpp::Any visitHavingClause(MySQLParser::HavingClauseContext *context) = 0;

    virtual antlrcpp::Any visitGroupByItem(MySQLParser::GroupByItemContext *context) = 0;

    virtual antlrcpp::Any visitLimitClause(MySQLParser::LimitClauseContext *context) = 0;

    virtual antlrcpp::Any visitLimitClauseAtom(MySQLParser::LimitClauseAtomContext *context) = 0;

    virtual antlrcpp::Any visitStartTransaction(MySQLParser::StartTransactionContext *context) = 0;

    virtual antlrcpp::Any visitBeginWork(MySQLParser::BeginWorkContext *context) = 0;

    virtual antlrcpp::Any visitCommitWork(MySQLParser::CommitWorkContext *context) = 0;

    virtual antlrcpp::Any visitRollbackWork(MySQLParser::RollbackWorkContext *context) = 0;

    virtual antlrcpp::Any visitSavepointStatement(MySQLParser::SavepointStatementContext *context) = 0;

    virtual antlrcpp::Any visitRollbackStatement(MySQLParser::RollbackStatementContext *context) = 0;

    virtual antlrcpp::Any visitReleaseStatement(MySQLParser::ReleaseStatementContext *context) = 0;

    virtual antlrcpp::Any visitLockTables(MySQLParser::LockTablesContext *context) = 0;

    virtual antlrcpp::Any visitUnlockTables(MySQLParser::UnlockTablesContext *context) = 0;

    virtual antlrcpp::Any visitSetAutocommitStatement(MySQLParser::SetAutocommitStatementContext *context) = 0;

    virtual antlrcpp::Any visitSetTransactionStatement(MySQLParser::SetTransactionStatementContext *context) = 0;

    virtual antlrcpp::Any visitTransactionMode(MySQLParser::TransactionModeContext *context) = 0;

    virtual antlrcpp::Any visitLockTableElement(MySQLParser::LockTableElementContext *context) = 0;

    virtual antlrcpp::Any visitLockAction(MySQLParser::LockActionContext *context) = 0;

    virtual antlrcpp::Any visitTransactionOption(MySQLParser::TransactionOptionContext *context) = 0;

    virtual antlrcpp::Any visitTransactionLevel(MySQLParser::TransactionLevelContext *context) = 0;

    virtual antlrcpp::Any visitChangeMaster(MySQLParser::ChangeMasterContext *context) = 0;

    virtual antlrcpp::Any visitChangeReplicationFilter(MySQLParser::ChangeReplicationFilterContext *context) = 0;

    virtual antlrcpp::Any visitPurgeBinaryLogs(MySQLParser::PurgeBinaryLogsContext *context) = 0;

    virtual antlrcpp::Any visitResetMaster(MySQLParser::ResetMasterContext *context) = 0;

    virtual antlrcpp::Any visitResetSlave(MySQLParser::ResetSlaveContext *context) = 0;

    virtual antlrcpp::Any visitStartSlave(MySQLParser::StartSlaveContext *context) = 0;

    virtual antlrcpp::Any visitStopSlave(MySQLParser::StopSlaveContext *context) = 0;

    virtual antlrcpp::Any visitStartGroupReplication(MySQLParser::StartGroupReplicationContext *context) = 0;

    virtual antlrcpp::Any visitStopGroupReplication(MySQLParser::StopGroupReplicationContext *context) = 0;

    virtual antlrcpp::Any visitMasterStringOption(MySQLParser::MasterStringOptionContext *context) = 0;

    virtual antlrcpp::Any visitMasterDecimalOption(MySQLParser::MasterDecimalOptionContext *context) = 0;

    virtual antlrcpp::Any visitMasterBoolOption(MySQLParser::MasterBoolOptionContext *context) = 0;

    virtual antlrcpp::Any visitMasterRealOption(MySQLParser::MasterRealOptionContext *context) = 0;

    virtual antlrcpp::Any visitMasterUidListOption(MySQLParser::MasterUidListOptionContext *context) = 0;

    virtual antlrcpp::Any visitStringMasterOption(MySQLParser::StringMasterOptionContext *context) = 0;

    virtual antlrcpp::Any visitDecimalMasterOption(MySQLParser::DecimalMasterOptionContext *context) = 0;

    virtual antlrcpp::Any visitBoolMasterOption(MySQLParser::BoolMasterOptionContext *context) = 0;

    virtual antlrcpp::Any visitChannelOption(MySQLParser::ChannelOptionContext *context) = 0;

    virtual antlrcpp::Any visitDoDbReplication(MySQLParser::DoDbReplicationContext *context) = 0;

    virtual antlrcpp::Any visitIgnoreDbReplication(MySQLParser::IgnoreDbReplicationContext *context) = 0;

    virtual antlrcpp::Any visitDoTableReplication(MySQLParser::DoTableReplicationContext *context) = 0;

    virtual antlrcpp::Any visitIgnoreTableReplication(MySQLParser::IgnoreTableReplicationContext *context) = 0;

    virtual antlrcpp::Any visitWildDoTableReplication(MySQLParser::WildDoTableReplicationContext *context) = 0;

    virtual antlrcpp::Any visitWildIgnoreTableReplication(MySQLParser::WildIgnoreTableReplicationContext *context) = 0;

    virtual antlrcpp::Any visitRewriteDbReplication(MySQLParser::RewriteDbReplicationContext *context) = 0;

    virtual antlrcpp::Any visitTablePair(MySQLParser::TablePairContext *context) = 0;

    virtual antlrcpp::Any visitThreadType(MySQLParser::ThreadTypeContext *context) = 0;

    virtual antlrcpp::Any visitGtidsUntilOption(MySQLParser::GtidsUntilOptionContext *context) = 0;

    virtual antlrcpp::Any visitMasterLogUntilOption(MySQLParser::MasterLogUntilOptionContext *context) = 0;

    virtual antlrcpp::Any visitRelayLogUntilOption(MySQLParser::RelayLogUntilOptionContext *context) = 0;

    virtual antlrcpp::Any visitSqlGapsUntilOption(MySQLParser::SqlGapsUntilOptionContext *context) = 0;

    virtual antlrcpp::Any visitUserConnectionOption(MySQLParser::UserConnectionOptionContext *context) = 0;

    virtual antlrcpp::Any visitPasswordConnectionOption(MySQLParser::PasswordConnectionOptionContext *context) = 0;

    virtual antlrcpp::Any visitDefaultAuthConnectionOption(MySQLParser::DefaultAuthConnectionOptionContext *context) = 0;

    virtual antlrcpp::Any visitPluginDirConnectionOption(MySQLParser::PluginDirConnectionOptionContext *context) = 0;

    virtual antlrcpp::Any visitGtuidSet(MySQLParser::GtuidSetContext *context) = 0;

    virtual antlrcpp::Any visitXaStartTransaction(MySQLParser::XaStartTransactionContext *context) = 0;

    virtual antlrcpp::Any visitXaEndTransaction(MySQLParser::XaEndTransactionContext *context) = 0;

    virtual antlrcpp::Any visitXaPrepareStatement(MySQLParser::XaPrepareStatementContext *context) = 0;

    virtual antlrcpp::Any visitXaCommitWork(MySQLParser::XaCommitWorkContext *context) = 0;

    virtual antlrcpp::Any visitXaRollbackWork(MySQLParser::XaRollbackWorkContext *context) = 0;

    virtual antlrcpp::Any visitXaRecoverWork(MySQLParser::XaRecoverWorkContext *context) = 0;

    virtual antlrcpp::Any visitPrepareStatement(MySQLParser::PrepareStatementContext *context) = 0;

    virtual antlrcpp::Any visitExecuteStatement(MySQLParser::ExecuteStatementContext *context) = 0;

    virtual antlrcpp::Any visitDeallocatePrepare(MySQLParser::DeallocatePrepareContext *context) = 0;

    virtual antlrcpp::Any visitRoutineBody(MySQLParser::RoutineBodyContext *context) = 0;

    virtual antlrcpp::Any visitBlockStatement(MySQLParser::BlockStatementContext *context) = 0;

    virtual antlrcpp::Any visitCaseStatement(MySQLParser::CaseStatementContext *context) = 0;

    virtual antlrcpp::Any visitIfStatement(MySQLParser::IfStatementContext *context) = 0;

    virtual antlrcpp::Any visitIterateStatement(MySQLParser::IterateStatementContext *context) = 0;

    virtual antlrcpp::Any visitLeaveStatement(MySQLParser::LeaveStatementContext *context) = 0;

    virtual antlrcpp::Any visitLoopStatement(MySQLParser::LoopStatementContext *context) = 0;

    virtual antlrcpp::Any visitRepeatStatement(MySQLParser::RepeatStatementContext *context) = 0;

    virtual antlrcpp::Any visitReturnStatement(MySQLParser::ReturnStatementContext *context) = 0;

    virtual antlrcpp::Any visitWhileStatement(MySQLParser::WhileStatementContext *context) = 0;

    virtual antlrcpp::Any visitCloseCursor(MySQLParser::CloseCursorContext *context) = 0;

    virtual antlrcpp::Any visitFetchCursor(MySQLParser::FetchCursorContext *context) = 0;

    virtual antlrcpp::Any visitOpenCursor(MySQLParser::OpenCursorContext *context) = 0;

    virtual antlrcpp::Any visitDeclareVariable(MySQLParser::DeclareVariableContext *context) = 0;

    virtual antlrcpp::Any visitDeclareCondition(MySQLParser::DeclareConditionContext *context) = 0;

    virtual antlrcpp::Any visitDeclareCursor(MySQLParser::DeclareCursorContext *context) = 0;

    virtual antlrcpp::Any visitDeclareHandler(MySQLParser::DeclareHandlerContext *context) = 0;

    virtual antlrcpp::Any visitHandlerConditionCode(MySQLParser::HandlerConditionCodeContext *context) = 0;

    virtual antlrcpp::Any visitHandlerConditionState(MySQLParser::HandlerConditionStateContext *context) = 0;

    virtual antlrcpp::Any visitHandlerConditionName(MySQLParser::HandlerConditionNameContext *context) = 0;

    virtual antlrcpp::Any visitHandlerConditionWarning(MySQLParser::HandlerConditionWarningContext *context) = 0;

    virtual antlrcpp::Any visitHandlerConditionNotfound(MySQLParser::HandlerConditionNotfoundContext *context) = 0;

    virtual antlrcpp::Any visitHandlerConditionException(MySQLParser::HandlerConditionExceptionContext *context) = 0;

    virtual antlrcpp::Any visitProcedureSqlStatement(MySQLParser::ProcedureSqlStatementContext *context) = 0;

    virtual antlrcpp::Any visitCaseAlternative(MySQLParser::CaseAlternativeContext *context) = 0;

    virtual antlrcpp::Any visitElifAlternative(MySQLParser::ElifAlternativeContext *context) = 0;

    virtual antlrcpp::Any visitAlterUserMysqlV56(MySQLParser::AlterUserMysqlV56Context *context) = 0;

    virtual antlrcpp::Any visitAlterUserMysqlV57(MySQLParser::AlterUserMysqlV57Context *context) = 0;

    virtual antlrcpp::Any visitCreateUserMysqlV56(MySQLParser::CreateUserMysqlV56Context *context) = 0;

    virtual antlrcpp::Any visitCreateUserMysqlV57(MySQLParser::CreateUserMysqlV57Context *context) = 0;

    virtual antlrcpp::Any visitDropUser(MySQLParser::DropUserContext *context) = 0;

    virtual antlrcpp::Any visitGrantStatement(MySQLParser::GrantStatementContext *context) = 0;

    virtual antlrcpp::Any visitGrantProxy(MySQLParser::GrantProxyContext *context) = 0;

    virtual antlrcpp::Any visitRenameUser(MySQLParser::RenameUserContext *context) = 0;

    virtual antlrcpp::Any visitDetailRevoke(MySQLParser::DetailRevokeContext *context) = 0;

    virtual antlrcpp::Any visitShortRevoke(MySQLParser::ShortRevokeContext *context) = 0;

    virtual antlrcpp::Any visitRevokeProxy(MySQLParser::RevokeProxyContext *context) = 0;

    virtual antlrcpp::Any visitSetPasswordStatement(MySQLParser::SetPasswordStatementContext *context) = 0;

    virtual antlrcpp::Any visitUserSpecification(MySQLParser::UserSpecificationContext *context) = 0;

    virtual antlrcpp::Any visitPasswordAuthOption(MySQLParser::PasswordAuthOptionContext *context) = 0;

    virtual antlrcpp::Any visitStringAuthOption(MySQLParser::StringAuthOptionContext *context) = 0;

    virtual antlrcpp::Any visitHashAuthOption(MySQLParser::HashAuthOptionContext *context) = 0;

    virtual antlrcpp::Any visitSimpleAuthOption(MySQLParser::SimpleAuthOptionContext *context) = 0;

    virtual antlrcpp::Any visitTlsOption(MySQLParser::TlsOptionContext *context) = 0;

    virtual antlrcpp::Any visitUserResourceOption(MySQLParser::UserResourceOptionContext *context) = 0;

    virtual antlrcpp::Any visitUserPasswordOption(MySQLParser::UserPasswordOptionContext *context) = 0;

    virtual antlrcpp::Any visitUserLockOption(MySQLParser::UserLockOptionContext *context) = 0;

    virtual antlrcpp::Any visitPrivelegeClause(MySQLParser::PrivelegeClauseContext *context) = 0;

    virtual antlrcpp::Any visitPrivilege(MySQLParser::PrivilegeContext *context) = 0;

    virtual antlrcpp::Any visitCurrentSchemaPriviLevel(MySQLParser::CurrentSchemaPriviLevelContext *context) = 0;

    virtual antlrcpp::Any visitGlobalPrivLevel(MySQLParser::GlobalPrivLevelContext *context) = 0;

    virtual antlrcpp::Any visitDefiniteSchemaPrivLevel(MySQLParser::DefiniteSchemaPrivLevelContext *context) = 0;

    virtual antlrcpp::Any visitDefiniteFullTablePrivLevel(MySQLParser::DefiniteFullTablePrivLevelContext *context) = 0;

    virtual antlrcpp::Any visitDefiniteTablePrivLevel(MySQLParser::DefiniteTablePrivLevelContext *context) = 0;

    virtual antlrcpp::Any visitRenameUserClause(MySQLParser::RenameUserClauseContext *context) = 0;

    virtual antlrcpp::Any visitAnalyzeTable(MySQLParser::AnalyzeTableContext *context) = 0;

    virtual antlrcpp::Any visitCheckTable(MySQLParser::CheckTableContext *context) = 0;

    virtual antlrcpp::Any visitChecksumTable(MySQLParser::ChecksumTableContext *context) = 0;

    virtual antlrcpp::Any visitOptimizeTable(MySQLParser::OptimizeTableContext *context) = 0;

    virtual antlrcpp::Any visitRepairTable(MySQLParser::RepairTableContext *context) = 0;

    virtual antlrcpp::Any visitCheckTableOption(MySQLParser::CheckTableOptionContext *context) = 0;

    virtual antlrcpp::Any visitCreateUdfunction(MySQLParser::CreateUdfunctionContext *context) = 0;

    virtual antlrcpp::Any visitInstallPlugin(MySQLParser::InstallPluginContext *context) = 0;

    virtual antlrcpp::Any visitUninstallPlugin(MySQLParser::UninstallPluginContext *context) = 0;

    virtual antlrcpp::Any visitSetVariable(MySQLParser::SetVariableContext *context) = 0;

    virtual antlrcpp::Any visitSetCharset(MySQLParser::SetCharsetContext *context) = 0;

    virtual antlrcpp::Any visitSetNames(MySQLParser::SetNamesContext *context) = 0;

    virtual antlrcpp::Any visitSetPassword(MySQLParser::SetPasswordContext *context) = 0;

    virtual antlrcpp::Any visitSetTransaction(MySQLParser::SetTransactionContext *context) = 0;

    virtual antlrcpp::Any visitSetAutocommit(MySQLParser::SetAutocommitContext *context) = 0;

    virtual antlrcpp::Any visitSetNewValueInsideTrigger(MySQLParser::SetNewValueInsideTriggerContext *context) = 0;

    virtual antlrcpp::Any visitShowMasterLogs(MySQLParser::ShowMasterLogsContext *context) = 0;

    virtual antlrcpp::Any visitShowLogEvents(MySQLParser::ShowLogEventsContext *context) = 0;

    virtual antlrcpp::Any visitShowObjectFilter(MySQLParser::ShowObjectFilterContext *context) = 0;

    virtual antlrcpp::Any visitShowColumns(MySQLParser::ShowColumnsContext *context) = 0;

    virtual antlrcpp::Any visitShowCreateDb(MySQLParser::ShowCreateDbContext *context) = 0;

    virtual antlrcpp::Any visitShowCreateFullIdObject(MySQLParser::ShowCreateFullIdObjectContext *context) = 0;

    virtual antlrcpp::Any visitShowCreateUser(MySQLParser::ShowCreateUserContext *context) = 0;

    virtual antlrcpp::Any visitShowEngine(MySQLParser::ShowEngineContext *context) = 0;

    virtual antlrcpp::Any visitShowGlobalInfo(MySQLParser::ShowGlobalInfoContext *context) = 0;

    virtual antlrcpp::Any visitShowErrors(MySQLParser::ShowErrorsContext *context) = 0;

    virtual antlrcpp::Any visitShowCountErrors(MySQLParser::ShowCountErrorsContext *context) = 0;

    virtual antlrcpp::Any visitShowSchemaFilter(MySQLParser::ShowSchemaFilterContext *context) = 0;

    virtual antlrcpp::Any visitShowRoutine(MySQLParser::ShowRoutineContext *context) = 0;

    virtual antlrcpp::Any visitShowGrants(MySQLParser::ShowGrantsContext *context) = 0;

    virtual antlrcpp::Any visitShowIndexes(MySQLParser::ShowIndexesContext *context) = 0;

    virtual antlrcpp::Any visitShowOpenTables(MySQLParser::ShowOpenTablesContext *context) = 0;

    virtual antlrcpp::Any visitShowProfile(MySQLParser::ShowProfileContext *context) = 0;

    virtual antlrcpp::Any visitShowSlaveStatus(MySQLParser::ShowSlaveStatusContext *context) = 0;

    virtual antlrcpp::Any visitVariableClause(MySQLParser::VariableClauseContext *context) = 0;

    virtual antlrcpp::Any visitShowCommonEntity(MySQLParser::ShowCommonEntityContext *context) = 0;

    virtual antlrcpp::Any visitShowFilter(MySQLParser::ShowFilterContext *context) = 0;

    virtual antlrcpp::Any visitShowGlobalInfoClause(MySQLParser::ShowGlobalInfoClauseContext *context) = 0;

    virtual antlrcpp::Any visitShowSchemaEntity(MySQLParser::ShowSchemaEntityContext *context) = 0;

    virtual antlrcpp::Any visitShowProfileType(MySQLParser::ShowProfileTypeContext *context) = 0;

    virtual antlrcpp::Any visitBinlogStatement(MySQLParser::BinlogStatementContext *context) = 0;

    virtual antlrcpp::Any visitCacheIndexStatement(MySQLParser::CacheIndexStatementContext *context) = 0;

    virtual antlrcpp::Any visitFlushStatement(MySQLParser::FlushStatementContext *context) = 0;

    virtual antlrcpp::Any visitKillStatement(MySQLParser::KillStatementContext *context) = 0;

    virtual antlrcpp::Any visitLoadIndexIntoCache(MySQLParser::LoadIndexIntoCacheContext *context) = 0;

    virtual antlrcpp::Any visitResetStatement(MySQLParser::ResetStatementContext *context) = 0;

    virtual antlrcpp::Any visitShutdownStatement(MySQLParser::ShutdownStatementContext *context) = 0;

    virtual antlrcpp::Any visitTableIndexes(MySQLParser::TableIndexesContext *context) = 0;

    virtual antlrcpp::Any visitSimpleFlushOption(MySQLParser::SimpleFlushOptionContext *context) = 0;

    virtual antlrcpp::Any visitChannelFlushOption(MySQLParser::ChannelFlushOptionContext *context) = 0;

    virtual antlrcpp::Any visitTableFlushOption(MySQLParser::TableFlushOptionContext *context) = 0;

    virtual antlrcpp::Any visitFlushTableOption(MySQLParser::FlushTableOptionContext *context) = 0;

    virtual antlrcpp::Any visitLoadedTableIndexes(MySQLParser::LoadedTableIndexesContext *context) = 0;

    virtual antlrcpp::Any visitSimpleDescribeStatement(MySQLParser::SimpleDescribeStatementContext *context) = 0;

    virtual antlrcpp::Any visitFullDescribeStatement(MySQLParser::FullDescribeStatementContext *context) = 0;

    virtual antlrcpp::Any visitHelpStatement(MySQLParser::HelpStatementContext *context) = 0;

    virtual antlrcpp::Any visitUseStatement(MySQLParser::UseStatementContext *context) = 0;

    virtual antlrcpp::Any visitDescribeStatements(MySQLParser::DescribeStatementsContext *context) = 0;

    virtual antlrcpp::Any visitDescribeConnection(MySQLParser::DescribeConnectionContext *context) = 0;

    virtual antlrcpp::Any visitFullId(MySQLParser::FullIdContext *context) = 0;

    virtual antlrcpp::Any visitTableName(MySQLParser::TableNameContext *context) = 0;

    virtual antlrcpp::Any visitFullColumnName(MySQLParser::FullColumnNameContext *context) = 0;

    virtual antlrcpp::Any visitIndexColumnName(MySQLParser::IndexColumnNameContext *context) = 0;

    virtual antlrcpp::Any visitUserName(MySQLParser::UserNameContext *context) = 0;

    virtual antlrcpp::Any visitMysqlVariable(MySQLParser::MysqlVariableContext *context) = 0;

    virtual antlrcpp::Any visitCharsetName(MySQLParser::CharsetNameContext *context) = 0;

    virtual antlrcpp::Any visitCollationName(MySQLParser::CollationNameContext *context) = 0;

    virtual antlrcpp::Any visitEngineName(MySQLParser::EngineNameContext *context) = 0;

    virtual antlrcpp::Any visitUuidSet(MySQLParser::UuidSetContext *context) = 0;

    virtual antlrcpp::Any visitXid(MySQLParser::XidContext *context) = 0;

    virtual antlrcpp::Any visitXuidStringId(MySQLParser::XuidStringIdContext *context) = 0;

    virtual antlrcpp::Any visitAuthPlugin(MySQLParser::AuthPluginContext *context) = 0;

    virtual antlrcpp::Any visitUid(MySQLParser::UidContext *context) = 0;

    virtual antlrcpp::Any visitSimpleId(MySQLParser::SimpleIdContext *context) = 0;

    virtual antlrcpp::Any visitDecimalLiteral(MySQLParser::DecimalLiteralContext *context) = 0;

    virtual antlrcpp::Any visitFileSizeLiteral(MySQLParser::FileSizeLiteralContext *context) = 0;

    virtual antlrcpp::Any visitStringLiteral(MySQLParser::StringLiteralContext *context) = 0;

    virtual antlrcpp::Any visitBooleanLiteral(MySQLParser::BooleanLiteralContext *context) = 0;

    virtual antlrcpp::Any visitHexadecimalLiteral(MySQLParser::HexadecimalLiteralContext *context) = 0;

    virtual antlrcpp::Any visitNullNotnull(MySQLParser::NullNotnullContext *context) = 0;

    virtual antlrcpp::Any visitConstant(MySQLParser::ConstantContext *context) = 0;

    virtual antlrcpp::Any visitStringDataType(MySQLParser::StringDataTypeContext *context) = 0;

    virtual antlrcpp::Any visitNationalStringDataType(MySQLParser::NationalStringDataTypeContext *context) = 0;

    virtual antlrcpp::Any visitNationalVaryingStringDataType(MySQLParser::NationalVaryingStringDataTypeContext *context) = 0;

    virtual antlrcpp::Any visitDimensionDataType(MySQLParser::DimensionDataTypeContext *context) = 0;

    virtual antlrcpp::Any visitSimpleDataType(MySQLParser::SimpleDataTypeContext *context) = 0;

    virtual antlrcpp::Any visitCollectionDataType(MySQLParser::CollectionDataTypeContext *context) = 0;

    virtual antlrcpp::Any visitSpatialDataType(MySQLParser::SpatialDataTypeContext *context) = 0;

    virtual antlrcpp::Any visitCollectionOptions(MySQLParser::CollectionOptionsContext *context) = 0;

    virtual antlrcpp::Any visitConvertedDataType(MySQLParser::ConvertedDataTypeContext *context) = 0;

    virtual antlrcpp::Any visitLengthOneDimension(MySQLParser::LengthOneDimensionContext *context) = 0;

    virtual antlrcpp::Any visitLengthTwoDimension(MySQLParser::LengthTwoDimensionContext *context) = 0;

    virtual antlrcpp::Any visitLengthTwoOptionalDimension(MySQLParser::LengthTwoOptionalDimensionContext *context) = 0;

    virtual antlrcpp::Any visitUidList(MySQLParser::UidListContext *context) = 0;

    virtual antlrcpp::Any visitTables(MySQLParser::TablesContext *context) = 0;

    virtual antlrcpp::Any visitIndexColumnNames(MySQLParser::IndexColumnNamesContext *context) = 0;

    virtual antlrcpp::Any visitExpressions(MySQLParser::ExpressionsContext *context) = 0;

    virtual antlrcpp::Any visitExpressionsWithDefaults(MySQLParser::ExpressionsWithDefaultsContext *context) = 0;

    virtual antlrcpp::Any visitConstants(MySQLParser::ConstantsContext *context) = 0;

    virtual antlrcpp::Any visitSimpleStrings(MySQLParser::SimpleStringsContext *context) = 0;

    virtual antlrcpp::Any visitUserVariables(MySQLParser::UserVariablesContext *context) = 0;

    virtual antlrcpp::Any visitDefaultValue(MySQLParser::DefaultValueContext *context) = 0;

    virtual antlrcpp::Any visitCurrentTimestamp(MySQLParser::CurrentTimestampContext *context) = 0;

    virtual antlrcpp::Any visitExpressionOrDefault(MySQLParser::ExpressionOrDefaultContext *context) = 0;

    virtual antlrcpp::Any visitIfExists(MySQLParser::IfExistsContext *context) = 0;

    virtual antlrcpp::Any visitIfNotExists(MySQLParser::IfNotExistsContext *context) = 0;

    virtual antlrcpp::Any visitSpecificFunctionCall(MySQLParser::SpecificFunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitAggregateFunctionCall(MySQLParser::AggregateFunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitScalarFunctionCall(MySQLParser::ScalarFunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitUdfFunctionCall(MySQLParser::UdfFunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitPasswordFunctionCall(MySQLParser::PasswordFunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitSimpleFunctionCall(MySQLParser::SimpleFunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitDataTypeFunctionCall(MySQLParser::DataTypeFunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitValuesFunctionCall(MySQLParser::ValuesFunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitCaseFunctionCall(MySQLParser::CaseFunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitCharFunctionCall(MySQLParser::CharFunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitPositionFunctionCall(MySQLParser::PositionFunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitSubstrFunctionCall(MySQLParser::SubstrFunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitTrimFunctionCall(MySQLParser::TrimFunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitWeightFunctionCall(MySQLParser::WeightFunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitExtractFunctionCall(MySQLParser::ExtractFunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitGetFormatFunctionCall(MySQLParser::GetFormatFunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitCaseFuncAlternative(MySQLParser::CaseFuncAlternativeContext *context) = 0;

    virtual antlrcpp::Any visitLevelWeightList(MySQLParser::LevelWeightListContext *context) = 0;

    virtual antlrcpp::Any visitLevelWeightRange(MySQLParser::LevelWeightRangeContext *context) = 0;

    virtual antlrcpp::Any visitLevelInWeightListElement(MySQLParser::LevelInWeightListElementContext *context) = 0;

    virtual antlrcpp::Any visitAggregateWindowedFunction(MySQLParser::AggregateWindowedFunctionContext *context) = 0;

    virtual antlrcpp::Any visitScalarFunctionName(MySQLParser::ScalarFunctionNameContext *context) = 0;

    virtual antlrcpp::Any visitPasswordFunctionClause(MySQLParser::PasswordFunctionClauseContext *context) = 0;

    virtual antlrcpp::Any visitFunctionArgs(MySQLParser::FunctionArgsContext *context) = 0;

    virtual antlrcpp::Any visitFunctionArg(MySQLParser::FunctionArgContext *context) = 0;

    virtual antlrcpp::Any visitExpression(MySQLParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitPredicate(MySQLParser::PredicateContext *context) = 0;

    virtual antlrcpp::Any visitExpressionAtom(MySQLParser::ExpressionAtomContext *context) = 0;

    virtual antlrcpp::Any visitUnaryOperator(MySQLParser::UnaryOperatorContext *context) = 0;

    virtual antlrcpp::Any visitComparisonOperator(MySQLParser::ComparisonOperatorContext *context) = 0;

    virtual antlrcpp::Any visitLogicalOperator(MySQLParser::LogicalOperatorContext *context) = 0;

    virtual antlrcpp::Any visitBitOperator(MySQLParser::BitOperatorContext *context) = 0;

    virtual antlrcpp::Any visitMathOperator(MySQLParser::MathOperatorContext *context) = 0;

    virtual antlrcpp::Any visitCharsetNameBase(MySQLParser::CharsetNameBaseContext *context) = 0;

    virtual antlrcpp::Any visitTransactionLevelBase(MySQLParser::TransactionLevelBaseContext *context) = 0;

    virtual antlrcpp::Any visitPrivilegesBase(MySQLParser::PrivilegesBaseContext *context) = 0;

    virtual antlrcpp::Any visitIntervalTypeBase(MySQLParser::IntervalTypeBaseContext *context) = 0;

    virtual antlrcpp::Any visitDataTypeBase(MySQLParser::DataTypeBaseContext *context) = 0;

    virtual antlrcpp::Any visitKeywordsCanBeId(MySQLParser::KeywordsCanBeIdContext *context) = 0;

    virtual antlrcpp::Any visitFunctionNameBase(MySQLParser::FunctionNameBaseContext *context) = 0;


};


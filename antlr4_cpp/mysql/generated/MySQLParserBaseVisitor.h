
// Generated from MySQLParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "MySQLParserVisitor.h"


/**
 * This class provides an empty implementation of MySQLParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  MySQLParserBaseVisitor : public MySQLParserVisitor {
public:

  virtual antlrcpp::Any visitRoot(MySQLParser::RootContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSqlStatements(MySQLParser::SqlStatementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSqlStatement(MySQLParser::SqlStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEmptyStatement(MySQLParser::EmptyStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDdlStatement(MySQLParser::DdlStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDmlStatement(MySQLParser::DmlStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTransactionStatement(MySQLParser::TransactionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReplicationStatement(MySQLParser::ReplicationStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPreparedStatement(MySQLParser::PreparedStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompoundStatement(MySQLParser::CompoundStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdministrationStatement(MySQLParser::AdministrationStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUtilityStatement(MySQLParser::UtilityStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateDatabase(MySQLParser::CreateDatabaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateEvent(MySQLParser::CreateEventContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateIndex(MySQLParser::CreateIndexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateLogfileGroup(MySQLParser::CreateLogfileGroupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateProcedure(MySQLParser::CreateProcedureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateFunction(MySQLParser::CreateFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateServer(MySQLParser::CreateServerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCopyCreateTable(MySQLParser::CopyCreateTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQueryCreateTable(MySQLParser::QueryCreateTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumnCreateTable(MySQLParser::ColumnCreateTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateTablespaceInnodb(MySQLParser::CreateTablespaceInnodbContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateTablespaceNdb(MySQLParser::CreateTablespaceNdbContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateTrigger(MySQLParser::CreateTriggerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateView(MySQLParser::CreateViewContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateDatabaseOption(MySQLParser::CreateDatabaseOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOwnerStatement(MySQLParser::OwnerStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPreciseSchedule(MySQLParser::PreciseScheduleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntervalSchedule(MySQLParser::IntervalScheduleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTimestampValue(MySQLParser::TimestampValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntervalExpr(MySQLParser::IntervalExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntervalType(MySQLParser::IntervalTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnableType(MySQLParser::EnableTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndexType(MySQLParser::IndexTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndexOption(MySQLParser::IndexOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProcedureParameter(MySQLParser::ProcedureParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionParameter(MySQLParser::FunctionParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRoutineComment(MySQLParser::RoutineCommentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRoutineLanguage(MySQLParser::RoutineLanguageContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRoutineBehavior(MySQLParser::RoutineBehaviorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRoutineData(MySQLParser::RoutineDataContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRoutineSecurity(MySQLParser::RoutineSecurityContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitServerOption(MySQLParser::ServerOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateDefinitions(MySQLParser::CreateDefinitionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumnDeclaration(MySQLParser::ColumnDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstraintDeclaration(MySQLParser::ConstraintDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndexDeclaration(MySQLParser::IndexDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumnDefinition(MySQLParser::ColumnDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNullColumnConstraint(MySQLParser::NullColumnConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefaultColumnConstraint(MySQLParser::DefaultColumnConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAutoIncrementColumnConstraint(MySQLParser::AutoIncrementColumnConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimaryKeyColumnConstraint(MySQLParser::PrimaryKeyColumnConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUniqueKeyColumnConstraint(MySQLParser::UniqueKeyColumnConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCommentColumnConstraint(MySQLParser::CommentColumnConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFormatColumnConstraint(MySQLParser::FormatColumnConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStorageColumnConstraint(MySQLParser::StorageColumnConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReferenceColumnConstraint(MySQLParser::ReferenceColumnConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCollateColumnConstraint(MySQLParser::CollateColumnConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGeneratedColumnConstraint(MySQLParser::GeneratedColumnConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSerialDefaultColumnConstraint(MySQLParser::SerialDefaultColumnConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimaryKeyTableConstraint(MySQLParser::PrimaryKeyTableConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUniqueKeyTableConstraint(MySQLParser::UniqueKeyTableConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForeignKeyTableConstraint(MySQLParser::ForeignKeyTableConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCheckTableConstraint(MySQLParser::CheckTableConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReferenceDefinition(MySQLParser::ReferenceDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReferenceAction(MySQLParser::ReferenceActionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReferenceControlType(MySQLParser::ReferenceControlTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleIndexDeclaration(MySQLParser::SimpleIndexDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSpecialIndexDeclaration(MySQLParser::SpecialIndexDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableOptionEngine(MySQLParser::TableOptionEngineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableOptionAutoIncrement(MySQLParser::TableOptionAutoIncrementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableOptionAverage(MySQLParser::TableOptionAverageContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableOptionCharset(MySQLParser::TableOptionCharsetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableOptionChecksum(MySQLParser::TableOptionChecksumContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableOptionCollate(MySQLParser::TableOptionCollateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableOptionComment(MySQLParser::TableOptionCommentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableOptionCompression(MySQLParser::TableOptionCompressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableOptionConnection(MySQLParser::TableOptionConnectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableOptionDataDirectory(MySQLParser::TableOptionDataDirectoryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableOptionDelay(MySQLParser::TableOptionDelayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableOptionEncryption(MySQLParser::TableOptionEncryptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableOptionIndexDirectory(MySQLParser::TableOptionIndexDirectoryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableOptionInsertMethod(MySQLParser::TableOptionInsertMethodContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableOptionKeyBlockSize(MySQLParser::TableOptionKeyBlockSizeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableOptionMaxRows(MySQLParser::TableOptionMaxRowsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableOptionMinRows(MySQLParser::TableOptionMinRowsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableOptionPackKeys(MySQLParser::TableOptionPackKeysContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableOptionPassword(MySQLParser::TableOptionPasswordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableOptionRowFormat(MySQLParser::TableOptionRowFormatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableOptionRecalculation(MySQLParser::TableOptionRecalculationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableOptionPersistent(MySQLParser::TableOptionPersistentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableOptionSamplePage(MySQLParser::TableOptionSamplePageContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableOptionTablespace(MySQLParser::TableOptionTablespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableOptionUnion(MySQLParser::TableOptionUnionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTablespaceStorage(MySQLParser::TablespaceStorageContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartitionDefinitions(MySQLParser::PartitionDefinitionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartitionFunctionHash(MySQLParser::PartitionFunctionHashContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartitionFunctionKey(MySQLParser::PartitionFunctionKeyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartitionFunctionRange(MySQLParser::PartitionFunctionRangeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartitionFunctionList(MySQLParser::PartitionFunctionListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubPartitionFunctionHash(MySQLParser::SubPartitionFunctionHashContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubPartitionFunctionKey(MySQLParser::SubPartitionFunctionKeyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartitionComparision(MySQLParser::PartitionComparisionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartitionListAtom(MySQLParser::PartitionListAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartitionListVector(MySQLParser::PartitionListVectorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartitionSimple(MySQLParser::PartitionSimpleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartitionDefinerAtom(MySQLParser::PartitionDefinerAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartitionDefinerVector(MySQLParser::PartitionDefinerVectorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubpartitionDefinition(MySQLParser::SubpartitionDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartitionOptionEngine(MySQLParser::PartitionOptionEngineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartitionOptionComment(MySQLParser::PartitionOptionCommentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartitionOptionDataDirectory(MySQLParser::PartitionOptionDataDirectoryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartitionOptionIndexDirectory(MySQLParser::PartitionOptionIndexDirectoryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartitionOptionMaxRows(MySQLParser::PartitionOptionMaxRowsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartitionOptionMinRows(MySQLParser::PartitionOptionMinRowsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartitionOptionTablespace(MySQLParser::PartitionOptionTablespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartitionOptionNodeGroup(MySQLParser::PartitionOptionNodeGroupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterSimpleDatabase(MySQLParser::AlterSimpleDatabaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterUpgradeName(MySQLParser::AlterUpgradeNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterEvent(MySQLParser::AlterEventContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterFunction(MySQLParser::AlterFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterInstance(MySQLParser::AlterInstanceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterLogfileGroup(MySQLParser::AlterLogfileGroupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterProcedure(MySQLParser::AlterProcedureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterServer(MySQLParser::AlterServerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterTable(MySQLParser::AlterTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterTablespace(MySQLParser::AlterTablespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterView(MySQLParser::AlterViewContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterByTableOption(MySQLParser::AlterByTableOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterByAddColumn(MySQLParser::AlterByAddColumnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterByAddColumns(MySQLParser::AlterByAddColumnsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterByAddIndex(MySQLParser::AlterByAddIndexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterByAddPrimaryKey(MySQLParser::AlterByAddPrimaryKeyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterByAddUniqueKey(MySQLParser::AlterByAddUniqueKeyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterByAddSpecialIndex(MySQLParser::AlterByAddSpecialIndexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterByAddForeignKey(MySQLParser::AlterByAddForeignKeyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterByAddCheckTableConstraint(MySQLParser::AlterByAddCheckTableConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterBySetAlgorithm(MySQLParser::AlterBySetAlgorithmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterByChangeDefault(MySQLParser::AlterByChangeDefaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterByChangeColumn(MySQLParser::AlterByChangeColumnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterByRenameColumn(MySQLParser::AlterByRenameColumnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterByLock(MySQLParser::AlterByLockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterByModifyColumn(MySQLParser::AlterByModifyColumnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterByDropColumn(MySQLParser::AlterByDropColumnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterByDropPrimaryKey(MySQLParser::AlterByDropPrimaryKeyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterByRenameIndex(MySQLParser::AlterByRenameIndexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterByDropIndex(MySQLParser::AlterByDropIndexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterByDropForeignKey(MySQLParser::AlterByDropForeignKeyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterByDisableKeys(MySQLParser::AlterByDisableKeysContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterByEnableKeys(MySQLParser::AlterByEnableKeysContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterByRename(MySQLParser::AlterByRenameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterByOrder(MySQLParser::AlterByOrderContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterByConvertCharset(MySQLParser::AlterByConvertCharsetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterByDefaultCharset(MySQLParser::AlterByDefaultCharsetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterByDiscardTablespace(MySQLParser::AlterByDiscardTablespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterByImportTablespace(MySQLParser::AlterByImportTablespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterByForce(MySQLParser::AlterByForceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterByValidate(MySQLParser::AlterByValidateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterByAddPartition(MySQLParser::AlterByAddPartitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterByDropPartition(MySQLParser::AlterByDropPartitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterByDiscardPartition(MySQLParser::AlterByDiscardPartitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterByImportPartition(MySQLParser::AlterByImportPartitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterByTruncatePartition(MySQLParser::AlterByTruncatePartitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterByCoalescePartition(MySQLParser::AlterByCoalescePartitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterByReorganizePartition(MySQLParser::AlterByReorganizePartitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterByExchangePartition(MySQLParser::AlterByExchangePartitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterByAnalyzePartition(MySQLParser::AlterByAnalyzePartitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterByCheckPartition(MySQLParser::AlterByCheckPartitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterByOptimizePartition(MySQLParser::AlterByOptimizePartitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterByRebuildPartition(MySQLParser::AlterByRebuildPartitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterByRepairPartition(MySQLParser::AlterByRepairPartitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterByRemovePartitioning(MySQLParser::AlterByRemovePartitioningContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterByUpgradePartitioning(MySQLParser::AlterByUpgradePartitioningContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropDatabase(MySQLParser::DropDatabaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropEvent(MySQLParser::DropEventContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropIndex(MySQLParser::DropIndexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropLogfileGroup(MySQLParser::DropLogfileGroupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropProcedure(MySQLParser::DropProcedureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropFunction(MySQLParser::DropFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropServer(MySQLParser::DropServerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropTable(MySQLParser::DropTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropTablespace(MySQLParser::DropTablespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropTrigger(MySQLParser::DropTriggerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropView(MySQLParser::DropViewContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRenameTable(MySQLParser::RenameTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRenameTableClause(MySQLParser::RenameTableClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTruncateTable(MySQLParser::TruncateTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCallStatement(MySQLParser::CallStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeleteStatement(MySQLParser::DeleteStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDoStatement(MySQLParser::DoStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHandlerStatement(MySQLParser::HandlerStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsertStatement(MySQLParser::InsertStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLoadDataStatement(MySQLParser::LoadDataStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLoadXmlStatement(MySQLParser::LoadXmlStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReplaceStatement(MySQLParser::ReplaceStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleSelect(MySQLParser::SimpleSelectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParenthesisSelect(MySQLParser::ParenthesisSelectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnionSelect(MySQLParser::UnionSelectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnionParenthesisSelect(MySQLParser::UnionParenthesisSelectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUpdateStatement(MySQLParser::UpdateStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsertStatementValue(MySQLParser::InsertStatementValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUpdatedElement(MySQLParser::UpdatedElementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignmentField(MySQLParser::AssignmentFieldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLockClause(MySQLParser::LockClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSingleDeleteStatement(MySQLParser::SingleDeleteStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultipleDeleteStatement(MySQLParser::MultipleDeleteStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDelete_stmt_table(MySQLParser::Delete_stmt_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHandlerOpenStatement(MySQLParser::HandlerOpenStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHandlerReadIndexStatement(MySQLParser::HandlerReadIndexStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHandlerReadStatement(MySQLParser::HandlerReadStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHandlerCloseStatement(MySQLParser::HandlerCloseStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSingleUpdateStatement(MySQLParser::SingleUpdateStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultipleUpdateStatement(MySQLParser::MultipleUpdateStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOrderByClause(MySQLParser::OrderByClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOrderByExpression(MySQLParser::OrderByExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableSources(MySQLParser::TableSourcesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableSourceBase(MySQLParser::TableSourceBaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableSourceNested(MySQLParser::TableSourceNestedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAtomTableItem(MySQLParser::AtomTableItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubqueryTableItem(MySQLParser::SubqueryTableItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableSourcesItem(MySQLParser::TableSourcesItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndexHint(MySQLParser::IndexHintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndexHintType(MySQLParser::IndexHintTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInnerJoin(MySQLParser::InnerJoinContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStraightJoin(MySQLParser::StraightJoinContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOuterJoin(MySQLParser::OuterJoinContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNaturalJoin(MySQLParser::NaturalJoinContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitJoinPartOnClause(MySQLParser::JoinPartOnClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitJoinPartUsingClause(MySQLParser::JoinPartUsingClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQueryExpression(MySQLParser::QueryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQueryExpressionNointo(MySQLParser::QueryExpressionNointoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQuerySpecification(MySQLParser::QuerySpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQuerySpecificationNointo(MySQLParser::QuerySpecificationNointoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnionParenthesis(MySQLParser::UnionParenthesisContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnionStatement(MySQLParser::UnionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectSpec(MySQLParser::SelectSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectElements(MySQLParser::SelectElementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectStarElement(MySQLParser::SelectStarElementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectColumnElement(MySQLParser::SelectColumnElementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectFunctionElement(MySQLParser::SelectFunctionElementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectExpressionElement(MySQLParser::SelectExpressionElementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectIntoVariables(MySQLParser::SelectIntoVariablesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectIntoDumpFile(MySQLParser::SelectIntoDumpFileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectIntoTextFile(MySQLParser::SelectIntoTextFileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectFieldsInto(MySQLParser::SelectFieldsIntoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectLinesInto(MySQLParser::SelectLinesIntoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFromClause(MySQLParser::FromClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhereClause(MySQLParser::WhereClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGroupClause(MySQLParser::GroupClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHavingClause(MySQLParser::HavingClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGroupByItem(MySQLParser::GroupByItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLimitClause(MySQLParser::LimitClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLimitClauseAtom(MySQLParser::LimitClauseAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStartTransaction(MySQLParser::StartTransactionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBeginWork(MySQLParser::BeginWorkContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCommitWork(MySQLParser::CommitWorkContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRollbackWork(MySQLParser::RollbackWorkContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSavepointStatement(MySQLParser::SavepointStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRollbackStatement(MySQLParser::RollbackStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReleaseStatement(MySQLParser::ReleaseStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLockTables(MySQLParser::LockTablesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnlockTables(MySQLParser::UnlockTablesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetAutocommitStatement(MySQLParser::SetAutocommitStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetTransactionStatement(MySQLParser::SetTransactionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTransactionMode(MySQLParser::TransactionModeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLockTableElement(MySQLParser::LockTableElementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLockAction(MySQLParser::LockActionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTransactionOption(MySQLParser::TransactionOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTransactionLevel(MySQLParser::TransactionLevelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChangeMaster(MySQLParser::ChangeMasterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChangeReplicationFilter(MySQLParser::ChangeReplicationFilterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPurgeBinaryLogs(MySQLParser::PurgeBinaryLogsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitResetMaster(MySQLParser::ResetMasterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitResetSlave(MySQLParser::ResetSlaveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStartSlave(MySQLParser::StartSlaveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStopSlave(MySQLParser::StopSlaveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStartGroupReplication(MySQLParser::StartGroupReplicationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStopGroupReplication(MySQLParser::StopGroupReplicationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMasterStringOption(MySQLParser::MasterStringOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMasterDecimalOption(MySQLParser::MasterDecimalOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMasterBoolOption(MySQLParser::MasterBoolOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMasterRealOption(MySQLParser::MasterRealOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMasterUidListOption(MySQLParser::MasterUidListOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStringMasterOption(MySQLParser::StringMasterOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDecimalMasterOption(MySQLParser::DecimalMasterOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBoolMasterOption(MySQLParser::BoolMasterOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChannelOption(MySQLParser::ChannelOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDoDbReplication(MySQLParser::DoDbReplicationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIgnoreDbReplication(MySQLParser::IgnoreDbReplicationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDoTableReplication(MySQLParser::DoTableReplicationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIgnoreTableReplication(MySQLParser::IgnoreTableReplicationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWildDoTableReplication(MySQLParser::WildDoTableReplicationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWildIgnoreTableReplication(MySQLParser::WildIgnoreTableReplicationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRewriteDbReplication(MySQLParser::RewriteDbReplicationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTablePair(MySQLParser::TablePairContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitThreadType(MySQLParser::ThreadTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGtidsUntilOption(MySQLParser::GtidsUntilOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMasterLogUntilOption(MySQLParser::MasterLogUntilOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelayLogUntilOption(MySQLParser::RelayLogUntilOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSqlGapsUntilOption(MySQLParser::SqlGapsUntilOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUserConnectionOption(MySQLParser::UserConnectionOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPasswordConnectionOption(MySQLParser::PasswordConnectionOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefaultAuthConnectionOption(MySQLParser::DefaultAuthConnectionOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPluginDirConnectionOption(MySQLParser::PluginDirConnectionOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGtuidSet(MySQLParser::GtuidSetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXaStartTransaction(MySQLParser::XaStartTransactionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXaEndTransaction(MySQLParser::XaEndTransactionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXaPrepareStatement(MySQLParser::XaPrepareStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXaCommitWork(MySQLParser::XaCommitWorkContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXaRollbackWork(MySQLParser::XaRollbackWorkContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXaRecoverWork(MySQLParser::XaRecoverWorkContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrepareStatement(MySQLParser::PrepareStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExecuteStatement(MySQLParser::ExecuteStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeallocatePrepare(MySQLParser::DeallocatePrepareContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRoutineBody(MySQLParser::RoutineBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlockStatement(MySQLParser::BlockStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCaseStatement(MySQLParser::CaseStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfStatement(MySQLParser::IfStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIterateStatement(MySQLParser::IterateStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLeaveStatement(MySQLParser::LeaveStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLoopStatement(MySQLParser::LoopStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRepeatStatement(MySQLParser::RepeatStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturnStatement(MySQLParser::ReturnStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhileStatement(MySQLParser::WhileStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCloseCursor(MySQLParser::CloseCursorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFetchCursor(MySQLParser::FetchCursorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOpenCursor(MySQLParser::OpenCursorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclareVariable(MySQLParser::DeclareVariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclareCondition(MySQLParser::DeclareConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclareCursor(MySQLParser::DeclareCursorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclareHandler(MySQLParser::DeclareHandlerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHandlerConditionCode(MySQLParser::HandlerConditionCodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHandlerConditionState(MySQLParser::HandlerConditionStateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHandlerConditionName(MySQLParser::HandlerConditionNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHandlerConditionWarning(MySQLParser::HandlerConditionWarningContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHandlerConditionNotfound(MySQLParser::HandlerConditionNotfoundContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHandlerConditionException(MySQLParser::HandlerConditionExceptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProcedureSqlStatement(MySQLParser::ProcedureSqlStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCaseAlternative(MySQLParser::CaseAlternativeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElifAlternative(MySQLParser::ElifAlternativeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterUserMysqlV56(MySQLParser::AlterUserMysqlV56Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterUserMysqlV57(MySQLParser::AlterUserMysqlV57Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateUserMysqlV56(MySQLParser::CreateUserMysqlV56Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateUserMysqlV57(MySQLParser::CreateUserMysqlV57Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropUser(MySQLParser::DropUserContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGrantStatement(MySQLParser::GrantStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGrantProxy(MySQLParser::GrantProxyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRenameUser(MySQLParser::RenameUserContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDetailRevoke(MySQLParser::DetailRevokeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShortRevoke(MySQLParser::ShortRevokeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRevokeProxy(MySQLParser::RevokeProxyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetPasswordStatement(MySQLParser::SetPasswordStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUserSpecification(MySQLParser::UserSpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPasswordAuthOption(MySQLParser::PasswordAuthOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStringAuthOption(MySQLParser::StringAuthOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHashAuthOption(MySQLParser::HashAuthOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleAuthOption(MySQLParser::SimpleAuthOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTlsOption(MySQLParser::TlsOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUserResourceOption(MySQLParser::UserResourceOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUserPasswordOption(MySQLParser::UserPasswordOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUserLockOption(MySQLParser::UserLockOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrivelegeClause(MySQLParser::PrivelegeClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrivilege(MySQLParser::PrivilegeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCurrentSchemaPriviLevel(MySQLParser::CurrentSchemaPriviLevelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGlobalPrivLevel(MySQLParser::GlobalPrivLevelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefiniteSchemaPrivLevel(MySQLParser::DefiniteSchemaPrivLevelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefiniteFullTablePrivLevel(MySQLParser::DefiniteFullTablePrivLevelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefiniteTablePrivLevel(MySQLParser::DefiniteTablePrivLevelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRenameUserClause(MySQLParser::RenameUserClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAnalyzeTable(MySQLParser::AnalyzeTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCheckTable(MySQLParser::CheckTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChecksumTable(MySQLParser::ChecksumTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOptimizeTable(MySQLParser::OptimizeTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRepairTable(MySQLParser::RepairTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCheckTableOption(MySQLParser::CheckTableOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateUdfunction(MySQLParser::CreateUdfunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInstallPlugin(MySQLParser::InstallPluginContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUninstallPlugin(MySQLParser::UninstallPluginContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetVariable(MySQLParser::SetVariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetCharset(MySQLParser::SetCharsetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetNames(MySQLParser::SetNamesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetPassword(MySQLParser::SetPasswordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetTransaction(MySQLParser::SetTransactionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetAutocommit(MySQLParser::SetAutocommitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetNewValueInsideTrigger(MySQLParser::SetNewValueInsideTriggerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowMasterLogs(MySQLParser::ShowMasterLogsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowLogEvents(MySQLParser::ShowLogEventsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowObjectFilter(MySQLParser::ShowObjectFilterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowColumns(MySQLParser::ShowColumnsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowCreateDb(MySQLParser::ShowCreateDbContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowCreateFullIdObject(MySQLParser::ShowCreateFullIdObjectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowCreateUser(MySQLParser::ShowCreateUserContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowEngine(MySQLParser::ShowEngineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowGlobalInfo(MySQLParser::ShowGlobalInfoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowErrors(MySQLParser::ShowErrorsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowCountErrors(MySQLParser::ShowCountErrorsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowSchemaFilter(MySQLParser::ShowSchemaFilterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowRoutine(MySQLParser::ShowRoutineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowGrants(MySQLParser::ShowGrantsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowIndexes(MySQLParser::ShowIndexesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowOpenTables(MySQLParser::ShowOpenTablesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowProfile(MySQLParser::ShowProfileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowSlaveStatus(MySQLParser::ShowSlaveStatusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableClause(MySQLParser::VariableClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowCommonEntity(MySQLParser::ShowCommonEntityContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowFilter(MySQLParser::ShowFilterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowGlobalInfoClause(MySQLParser::ShowGlobalInfoClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowSchemaEntity(MySQLParser::ShowSchemaEntityContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowProfileType(MySQLParser::ShowProfileTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinlogStatement(MySQLParser::BinlogStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCacheIndexStatement(MySQLParser::CacheIndexStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFlushStatement(MySQLParser::FlushStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKillStatement(MySQLParser::KillStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLoadIndexIntoCache(MySQLParser::LoadIndexIntoCacheContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitResetStatement(MySQLParser::ResetStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShutdownStatement(MySQLParser::ShutdownStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableIndexes(MySQLParser::TableIndexesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleFlushOption(MySQLParser::SimpleFlushOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChannelFlushOption(MySQLParser::ChannelFlushOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableFlushOption(MySQLParser::TableFlushOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFlushTableOption(MySQLParser::FlushTableOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLoadedTableIndexes(MySQLParser::LoadedTableIndexesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleDescribeStatement(MySQLParser::SimpleDescribeStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFullDescribeStatement(MySQLParser::FullDescribeStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHelpStatement(MySQLParser::HelpStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUseStatement(MySQLParser::UseStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDescribeStatements(MySQLParser::DescribeStatementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDescribeConnection(MySQLParser::DescribeConnectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFullId(MySQLParser::FullIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableName(MySQLParser::TableNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFullColumnName(MySQLParser::FullColumnNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndexColumnName(MySQLParser::IndexColumnNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUserName(MySQLParser::UserNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMysqlVariable(MySQLParser::MysqlVariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCharsetName(MySQLParser::CharsetNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCollationName(MySQLParser::CollationNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEngineName(MySQLParser::EngineNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUuidSet(MySQLParser::UuidSetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXid(MySQLParser::XidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXuidStringId(MySQLParser::XuidStringIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAuthPlugin(MySQLParser::AuthPluginContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUid(MySQLParser::UidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleId(MySQLParser::SimpleIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDecimalLiteral(MySQLParser::DecimalLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFileSizeLiteral(MySQLParser::FileSizeLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStringLiteral(MySQLParser::StringLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBooleanLiteral(MySQLParser::BooleanLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHexadecimalLiteral(MySQLParser::HexadecimalLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNullNotnull(MySQLParser::NullNotnullContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstant(MySQLParser::ConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStringDataType(MySQLParser::StringDataTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNationalStringDataType(MySQLParser::NationalStringDataTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNationalVaryingStringDataType(MySQLParser::NationalVaryingStringDataTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDimensionDataType(MySQLParser::DimensionDataTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleDataType(MySQLParser::SimpleDataTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCollectionDataType(MySQLParser::CollectionDataTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSpatialDataType(MySQLParser::SpatialDataTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCollectionOptions(MySQLParser::CollectionOptionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConvertedDataType(MySQLParser::ConvertedDataTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLengthOneDimension(MySQLParser::LengthOneDimensionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLengthTwoDimension(MySQLParser::LengthTwoDimensionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLengthTwoOptionalDimension(MySQLParser::LengthTwoOptionalDimensionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUidList(MySQLParser::UidListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTables(MySQLParser::TablesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndexColumnNames(MySQLParser::IndexColumnNamesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressions(MySQLParser::ExpressionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionsWithDefaults(MySQLParser::ExpressionsWithDefaultsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstants(MySQLParser::ConstantsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleStrings(MySQLParser::SimpleStringsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUserVariables(MySQLParser::UserVariablesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefaultValue(MySQLParser::DefaultValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCurrentTimestamp(MySQLParser::CurrentTimestampContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionOrDefault(MySQLParser::ExpressionOrDefaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfExists(MySQLParser::IfExistsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfNotExists(MySQLParser::IfNotExistsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSpecificFunctionCall(MySQLParser::SpecificFunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAggregateFunctionCall(MySQLParser::AggregateFunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitScalarFunctionCall(MySQLParser::ScalarFunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUdfFunctionCall(MySQLParser::UdfFunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPasswordFunctionCall(MySQLParser::PasswordFunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleFunctionCall(MySQLParser::SimpleFunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDataTypeFunctionCall(MySQLParser::DataTypeFunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValuesFunctionCall(MySQLParser::ValuesFunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCaseFunctionCall(MySQLParser::CaseFunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCharFunctionCall(MySQLParser::CharFunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPositionFunctionCall(MySQLParser::PositionFunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubstrFunctionCall(MySQLParser::SubstrFunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTrimFunctionCall(MySQLParser::TrimFunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWeightFunctionCall(MySQLParser::WeightFunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExtractFunctionCall(MySQLParser::ExtractFunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGetFormatFunctionCall(MySQLParser::GetFormatFunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCaseFuncAlternative(MySQLParser::CaseFuncAlternativeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLevelWeightList(MySQLParser::LevelWeightListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLevelWeightRange(MySQLParser::LevelWeightRangeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLevelInWeightListElement(MySQLParser::LevelInWeightListElementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAggregateWindowedFunction(MySQLParser::AggregateWindowedFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitScalarFunctionName(MySQLParser::ScalarFunctionNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPasswordFunctionClause(MySQLParser::PasswordFunctionClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionArgs(MySQLParser::FunctionArgsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionArg(MySQLParser::FunctionArgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(MySQLParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPredicate(MySQLParser::PredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionAtom(MySQLParser::ExpressionAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnaryOperator(MySQLParser::UnaryOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComparisonOperator(MySQLParser::ComparisonOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalOperator(MySQLParser::LogicalOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBitOperator(MySQLParser::BitOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMathOperator(MySQLParser::MathOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCharsetNameBase(MySQLParser::CharsetNameBaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTransactionLevelBase(MySQLParser::TransactionLevelBaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrivilegesBase(MySQLParser::PrivilegesBaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntervalTypeBase(MySQLParser::IntervalTypeBaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDataTypeBase(MySQLParser::DataTypeBaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeywordsCanBeId(MySQLParser::KeywordsCanBeIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionNameBase(MySQLParser::FunctionNameBaseContext *ctx) override {
    return visitChildren(ctx);
  }


};


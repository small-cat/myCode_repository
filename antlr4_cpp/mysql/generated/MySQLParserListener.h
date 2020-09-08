
// Generated from MySQLParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "MySQLParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by MySQLParser.
 */
class  MySQLParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterRoot(MySQLParser::RootContext *ctx) = 0;
  virtual void exitRoot(MySQLParser::RootContext *ctx) = 0;

  virtual void enterSqlStatements(MySQLParser::SqlStatementsContext *ctx) = 0;
  virtual void exitSqlStatements(MySQLParser::SqlStatementsContext *ctx) = 0;

  virtual void enterSqlStatement(MySQLParser::SqlStatementContext *ctx) = 0;
  virtual void exitSqlStatement(MySQLParser::SqlStatementContext *ctx) = 0;

  virtual void enterEmptyStatement(MySQLParser::EmptyStatementContext *ctx) = 0;
  virtual void exitEmptyStatement(MySQLParser::EmptyStatementContext *ctx) = 0;

  virtual void enterDdlStatement(MySQLParser::DdlStatementContext *ctx) = 0;
  virtual void exitDdlStatement(MySQLParser::DdlStatementContext *ctx) = 0;

  virtual void enterDmlStatement(MySQLParser::DmlStatementContext *ctx) = 0;
  virtual void exitDmlStatement(MySQLParser::DmlStatementContext *ctx) = 0;

  virtual void enterTransactionStatement(MySQLParser::TransactionStatementContext *ctx) = 0;
  virtual void exitTransactionStatement(MySQLParser::TransactionStatementContext *ctx) = 0;

  virtual void enterReplicationStatement(MySQLParser::ReplicationStatementContext *ctx) = 0;
  virtual void exitReplicationStatement(MySQLParser::ReplicationStatementContext *ctx) = 0;

  virtual void enterPreparedStatement(MySQLParser::PreparedStatementContext *ctx) = 0;
  virtual void exitPreparedStatement(MySQLParser::PreparedStatementContext *ctx) = 0;

  virtual void enterCompoundStatement(MySQLParser::CompoundStatementContext *ctx) = 0;
  virtual void exitCompoundStatement(MySQLParser::CompoundStatementContext *ctx) = 0;

  virtual void enterAdministrationStatement(MySQLParser::AdministrationStatementContext *ctx) = 0;
  virtual void exitAdministrationStatement(MySQLParser::AdministrationStatementContext *ctx) = 0;

  virtual void enterUtilityStatement(MySQLParser::UtilityStatementContext *ctx) = 0;
  virtual void exitUtilityStatement(MySQLParser::UtilityStatementContext *ctx) = 0;

  virtual void enterCreateDatabase(MySQLParser::CreateDatabaseContext *ctx) = 0;
  virtual void exitCreateDatabase(MySQLParser::CreateDatabaseContext *ctx) = 0;

  virtual void enterCreateEvent(MySQLParser::CreateEventContext *ctx) = 0;
  virtual void exitCreateEvent(MySQLParser::CreateEventContext *ctx) = 0;

  virtual void enterCreateIndex(MySQLParser::CreateIndexContext *ctx) = 0;
  virtual void exitCreateIndex(MySQLParser::CreateIndexContext *ctx) = 0;

  virtual void enterCreateLogfileGroup(MySQLParser::CreateLogfileGroupContext *ctx) = 0;
  virtual void exitCreateLogfileGroup(MySQLParser::CreateLogfileGroupContext *ctx) = 0;

  virtual void enterCreateProcedure(MySQLParser::CreateProcedureContext *ctx) = 0;
  virtual void exitCreateProcedure(MySQLParser::CreateProcedureContext *ctx) = 0;

  virtual void enterCreateFunction(MySQLParser::CreateFunctionContext *ctx) = 0;
  virtual void exitCreateFunction(MySQLParser::CreateFunctionContext *ctx) = 0;

  virtual void enterCreateServer(MySQLParser::CreateServerContext *ctx) = 0;
  virtual void exitCreateServer(MySQLParser::CreateServerContext *ctx) = 0;

  virtual void enterCopyCreateTable(MySQLParser::CopyCreateTableContext *ctx) = 0;
  virtual void exitCopyCreateTable(MySQLParser::CopyCreateTableContext *ctx) = 0;

  virtual void enterQueryCreateTable(MySQLParser::QueryCreateTableContext *ctx) = 0;
  virtual void exitQueryCreateTable(MySQLParser::QueryCreateTableContext *ctx) = 0;

  virtual void enterColumnCreateTable(MySQLParser::ColumnCreateTableContext *ctx) = 0;
  virtual void exitColumnCreateTable(MySQLParser::ColumnCreateTableContext *ctx) = 0;

  virtual void enterCreateTablespaceInnodb(MySQLParser::CreateTablespaceInnodbContext *ctx) = 0;
  virtual void exitCreateTablespaceInnodb(MySQLParser::CreateTablespaceInnodbContext *ctx) = 0;

  virtual void enterCreateTablespaceNdb(MySQLParser::CreateTablespaceNdbContext *ctx) = 0;
  virtual void exitCreateTablespaceNdb(MySQLParser::CreateTablespaceNdbContext *ctx) = 0;

  virtual void enterCreateTrigger(MySQLParser::CreateTriggerContext *ctx) = 0;
  virtual void exitCreateTrigger(MySQLParser::CreateTriggerContext *ctx) = 0;

  virtual void enterCreateView(MySQLParser::CreateViewContext *ctx) = 0;
  virtual void exitCreateView(MySQLParser::CreateViewContext *ctx) = 0;

  virtual void enterCreateDatabaseOption(MySQLParser::CreateDatabaseOptionContext *ctx) = 0;
  virtual void exitCreateDatabaseOption(MySQLParser::CreateDatabaseOptionContext *ctx) = 0;

  virtual void enterOwnerStatement(MySQLParser::OwnerStatementContext *ctx) = 0;
  virtual void exitOwnerStatement(MySQLParser::OwnerStatementContext *ctx) = 0;

  virtual void enterPreciseSchedule(MySQLParser::PreciseScheduleContext *ctx) = 0;
  virtual void exitPreciseSchedule(MySQLParser::PreciseScheduleContext *ctx) = 0;

  virtual void enterIntervalSchedule(MySQLParser::IntervalScheduleContext *ctx) = 0;
  virtual void exitIntervalSchedule(MySQLParser::IntervalScheduleContext *ctx) = 0;

  virtual void enterTimestampValue(MySQLParser::TimestampValueContext *ctx) = 0;
  virtual void exitTimestampValue(MySQLParser::TimestampValueContext *ctx) = 0;

  virtual void enterIntervalExpr(MySQLParser::IntervalExprContext *ctx) = 0;
  virtual void exitIntervalExpr(MySQLParser::IntervalExprContext *ctx) = 0;

  virtual void enterIntervalType(MySQLParser::IntervalTypeContext *ctx) = 0;
  virtual void exitIntervalType(MySQLParser::IntervalTypeContext *ctx) = 0;

  virtual void enterEnableType(MySQLParser::EnableTypeContext *ctx) = 0;
  virtual void exitEnableType(MySQLParser::EnableTypeContext *ctx) = 0;

  virtual void enterIndexType(MySQLParser::IndexTypeContext *ctx) = 0;
  virtual void exitIndexType(MySQLParser::IndexTypeContext *ctx) = 0;

  virtual void enterIndexOption(MySQLParser::IndexOptionContext *ctx) = 0;
  virtual void exitIndexOption(MySQLParser::IndexOptionContext *ctx) = 0;

  virtual void enterProcedureParameter(MySQLParser::ProcedureParameterContext *ctx) = 0;
  virtual void exitProcedureParameter(MySQLParser::ProcedureParameterContext *ctx) = 0;

  virtual void enterFunctionParameter(MySQLParser::FunctionParameterContext *ctx) = 0;
  virtual void exitFunctionParameter(MySQLParser::FunctionParameterContext *ctx) = 0;

  virtual void enterRoutineComment(MySQLParser::RoutineCommentContext *ctx) = 0;
  virtual void exitRoutineComment(MySQLParser::RoutineCommentContext *ctx) = 0;

  virtual void enterRoutineLanguage(MySQLParser::RoutineLanguageContext *ctx) = 0;
  virtual void exitRoutineLanguage(MySQLParser::RoutineLanguageContext *ctx) = 0;

  virtual void enterRoutineBehavior(MySQLParser::RoutineBehaviorContext *ctx) = 0;
  virtual void exitRoutineBehavior(MySQLParser::RoutineBehaviorContext *ctx) = 0;

  virtual void enterRoutineData(MySQLParser::RoutineDataContext *ctx) = 0;
  virtual void exitRoutineData(MySQLParser::RoutineDataContext *ctx) = 0;

  virtual void enterRoutineSecurity(MySQLParser::RoutineSecurityContext *ctx) = 0;
  virtual void exitRoutineSecurity(MySQLParser::RoutineSecurityContext *ctx) = 0;

  virtual void enterServerOption(MySQLParser::ServerOptionContext *ctx) = 0;
  virtual void exitServerOption(MySQLParser::ServerOptionContext *ctx) = 0;

  virtual void enterCreateDefinitions(MySQLParser::CreateDefinitionsContext *ctx) = 0;
  virtual void exitCreateDefinitions(MySQLParser::CreateDefinitionsContext *ctx) = 0;

  virtual void enterColumnDeclaration(MySQLParser::ColumnDeclarationContext *ctx) = 0;
  virtual void exitColumnDeclaration(MySQLParser::ColumnDeclarationContext *ctx) = 0;

  virtual void enterConstraintDeclaration(MySQLParser::ConstraintDeclarationContext *ctx) = 0;
  virtual void exitConstraintDeclaration(MySQLParser::ConstraintDeclarationContext *ctx) = 0;

  virtual void enterIndexDeclaration(MySQLParser::IndexDeclarationContext *ctx) = 0;
  virtual void exitIndexDeclaration(MySQLParser::IndexDeclarationContext *ctx) = 0;

  virtual void enterColumnDefinition(MySQLParser::ColumnDefinitionContext *ctx) = 0;
  virtual void exitColumnDefinition(MySQLParser::ColumnDefinitionContext *ctx) = 0;

  virtual void enterNullColumnConstraint(MySQLParser::NullColumnConstraintContext *ctx) = 0;
  virtual void exitNullColumnConstraint(MySQLParser::NullColumnConstraintContext *ctx) = 0;

  virtual void enterDefaultColumnConstraint(MySQLParser::DefaultColumnConstraintContext *ctx) = 0;
  virtual void exitDefaultColumnConstraint(MySQLParser::DefaultColumnConstraintContext *ctx) = 0;

  virtual void enterAutoIncrementColumnConstraint(MySQLParser::AutoIncrementColumnConstraintContext *ctx) = 0;
  virtual void exitAutoIncrementColumnConstraint(MySQLParser::AutoIncrementColumnConstraintContext *ctx) = 0;

  virtual void enterPrimaryKeyColumnConstraint(MySQLParser::PrimaryKeyColumnConstraintContext *ctx) = 0;
  virtual void exitPrimaryKeyColumnConstraint(MySQLParser::PrimaryKeyColumnConstraintContext *ctx) = 0;

  virtual void enterUniqueKeyColumnConstraint(MySQLParser::UniqueKeyColumnConstraintContext *ctx) = 0;
  virtual void exitUniqueKeyColumnConstraint(MySQLParser::UniqueKeyColumnConstraintContext *ctx) = 0;

  virtual void enterCommentColumnConstraint(MySQLParser::CommentColumnConstraintContext *ctx) = 0;
  virtual void exitCommentColumnConstraint(MySQLParser::CommentColumnConstraintContext *ctx) = 0;

  virtual void enterFormatColumnConstraint(MySQLParser::FormatColumnConstraintContext *ctx) = 0;
  virtual void exitFormatColumnConstraint(MySQLParser::FormatColumnConstraintContext *ctx) = 0;

  virtual void enterStorageColumnConstraint(MySQLParser::StorageColumnConstraintContext *ctx) = 0;
  virtual void exitStorageColumnConstraint(MySQLParser::StorageColumnConstraintContext *ctx) = 0;

  virtual void enterReferenceColumnConstraint(MySQLParser::ReferenceColumnConstraintContext *ctx) = 0;
  virtual void exitReferenceColumnConstraint(MySQLParser::ReferenceColumnConstraintContext *ctx) = 0;

  virtual void enterCollateColumnConstraint(MySQLParser::CollateColumnConstraintContext *ctx) = 0;
  virtual void exitCollateColumnConstraint(MySQLParser::CollateColumnConstraintContext *ctx) = 0;

  virtual void enterGeneratedColumnConstraint(MySQLParser::GeneratedColumnConstraintContext *ctx) = 0;
  virtual void exitGeneratedColumnConstraint(MySQLParser::GeneratedColumnConstraintContext *ctx) = 0;

  virtual void enterSerialDefaultColumnConstraint(MySQLParser::SerialDefaultColumnConstraintContext *ctx) = 0;
  virtual void exitSerialDefaultColumnConstraint(MySQLParser::SerialDefaultColumnConstraintContext *ctx) = 0;

  virtual void enterPrimaryKeyTableConstraint(MySQLParser::PrimaryKeyTableConstraintContext *ctx) = 0;
  virtual void exitPrimaryKeyTableConstraint(MySQLParser::PrimaryKeyTableConstraintContext *ctx) = 0;

  virtual void enterUniqueKeyTableConstraint(MySQLParser::UniqueKeyTableConstraintContext *ctx) = 0;
  virtual void exitUniqueKeyTableConstraint(MySQLParser::UniqueKeyTableConstraintContext *ctx) = 0;

  virtual void enterForeignKeyTableConstraint(MySQLParser::ForeignKeyTableConstraintContext *ctx) = 0;
  virtual void exitForeignKeyTableConstraint(MySQLParser::ForeignKeyTableConstraintContext *ctx) = 0;

  virtual void enterCheckTableConstraint(MySQLParser::CheckTableConstraintContext *ctx) = 0;
  virtual void exitCheckTableConstraint(MySQLParser::CheckTableConstraintContext *ctx) = 0;

  virtual void enterReferenceDefinition(MySQLParser::ReferenceDefinitionContext *ctx) = 0;
  virtual void exitReferenceDefinition(MySQLParser::ReferenceDefinitionContext *ctx) = 0;

  virtual void enterReferenceAction(MySQLParser::ReferenceActionContext *ctx) = 0;
  virtual void exitReferenceAction(MySQLParser::ReferenceActionContext *ctx) = 0;

  virtual void enterReferenceControlType(MySQLParser::ReferenceControlTypeContext *ctx) = 0;
  virtual void exitReferenceControlType(MySQLParser::ReferenceControlTypeContext *ctx) = 0;

  virtual void enterSimpleIndexDeclaration(MySQLParser::SimpleIndexDeclarationContext *ctx) = 0;
  virtual void exitSimpleIndexDeclaration(MySQLParser::SimpleIndexDeclarationContext *ctx) = 0;

  virtual void enterSpecialIndexDeclaration(MySQLParser::SpecialIndexDeclarationContext *ctx) = 0;
  virtual void exitSpecialIndexDeclaration(MySQLParser::SpecialIndexDeclarationContext *ctx) = 0;

  virtual void enterTableOptionEngine(MySQLParser::TableOptionEngineContext *ctx) = 0;
  virtual void exitTableOptionEngine(MySQLParser::TableOptionEngineContext *ctx) = 0;

  virtual void enterTableOptionAutoIncrement(MySQLParser::TableOptionAutoIncrementContext *ctx) = 0;
  virtual void exitTableOptionAutoIncrement(MySQLParser::TableOptionAutoIncrementContext *ctx) = 0;

  virtual void enterTableOptionAverage(MySQLParser::TableOptionAverageContext *ctx) = 0;
  virtual void exitTableOptionAverage(MySQLParser::TableOptionAverageContext *ctx) = 0;

  virtual void enterTableOptionCharset(MySQLParser::TableOptionCharsetContext *ctx) = 0;
  virtual void exitTableOptionCharset(MySQLParser::TableOptionCharsetContext *ctx) = 0;

  virtual void enterTableOptionChecksum(MySQLParser::TableOptionChecksumContext *ctx) = 0;
  virtual void exitTableOptionChecksum(MySQLParser::TableOptionChecksumContext *ctx) = 0;

  virtual void enterTableOptionCollate(MySQLParser::TableOptionCollateContext *ctx) = 0;
  virtual void exitTableOptionCollate(MySQLParser::TableOptionCollateContext *ctx) = 0;

  virtual void enterTableOptionComment(MySQLParser::TableOptionCommentContext *ctx) = 0;
  virtual void exitTableOptionComment(MySQLParser::TableOptionCommentContext *ctx) = 0;

  virtual void enterTableOptionCompression(MySQLParser::TableOptionCompressionContext *ctx) = 0;
  virtual void exitTableOptionCompression(MySQLParser::TableOptionCompressionContext *ctx) = 0;

  virtual void enterTableOptionConnection(MySQLParser::TableOptionConnectionContext *ctx) = 0;
  virtual void exitTableOptionConnection(MySQLParser::TableOptionConnectionContext *ctx) = 0;

  virtual void enterTableOptionDataDirectory(MySQLParser::TableOptionDataDirectoryContext *ctx) = 0;
  virtual void exitTableOptionDataDirectory(MySQLParser::TableOptionDataDirectoryContext *ctx) = 0;

  virtual void enterTableOptionDelay(MySQLParser::TableOptionDelayContext *ctx) = 0;
  virtual void exitTableOptionDelay(MySQLParser::TableOptionDelayContext *ctx) = 0;

  virtual void enterTableOptionEncryption(MySQLParser::TableOptionEncryptionContext *ctx) = 0;
  virtual void exitTableOptionEncryption(MySQLParser::TableOptionEncryptionContext *ctx) = 0;

  virtual void enterTableOptionIndexDirectory(MySQLParser::TableOptionIndexDirectoryContext *ctx) = 0;
  virtual void exitTableOptionIndexDirectory(MySQLParser::TableOptionIndexDirectoryContext *ctx) = 0;

  virtual void enterTableOptionInsertMethod(MySQLParser::TableOptionInsertMethodContext *ctx) = 0;
  virtual void exitTableOptionInsertMethod(MySQLParser::TableOptionInsertMethodContext *ctx) = 0;

  virtual void enterTableOptionKeyBlockSize(MySQLParser::TableOptionKeyBlockSizeContext *ctx) = 0;
  virtual void exitTableOptionKeyBlockSize(MySQLParser::TableOptionKeyBlockSizeContext *ctx) = 0;

  virtual void enterTableOptionMaxRows(MySQLParser::TableOptionMaxRowsContext *ctx) = 0;
  virtual void exitTableOptionMaxRows(MySQLParser::TableOptionMaxRowsContext *ctx) = 0;

  virtual void enterTableOptionMinRows(MySQLParser::TableOptionMinRowsContext *ctx) = 0;
  virtual void exitTableOptionMinRows(MySQLParser::TableOptionMinRowsContext *ctx) = 0;

  virtual void enterTableOptionPackKeys(MySQLParser::TableOptionPackKeysContext *ctx) = 0;
  virtual void exitTableOptionPackKeys(MySQLParser::TableOptionPackKeysContext *ctx) = 0;

  virtual void enterTableOptionPassword(MySQLParser::TableOptionPasswordContext *ctx) = 0;
  virtual void exitTableOptionPassword(MySQLParser::TableOptionPasswordContext *ctx) = 0;

  virtual void enterTableOptionRowFormat(MySQLParser::TableOptionRowFormatContext *ctx) = 0;
  virtual void exitTableOptionRowFormat(MySQLParser::TableOptionRowFormatContext *ctx) = 0;

  virtual void enterTableOptionRecalculation(MySQLParser::TableOptionRecalculationContext *ctx) = 0;
  virtual void exitTableOptionRecalculation(MySQLParser::TableOptionRecalculationContext *ctx) = 0;

  virtual void enterTableOptionPersistent(MySQLParser::TableOptionPersistentContext *ctx) = 0;
  virtual void exitTableOptionPersistent(MySQLParser::TableOptionPersistentContext *ctx) = 0;

  virtual void enterTableOptionSamplePage(MySQLParser::TableOptionSamplePageContext *ctx) = 0;
  virtual void exitTableOptionSamplePage(MySQLParser::TableOptionSamplePageContext *ctx) = 0;

  virtual void enterTableOptionTablespace(MySQLParser::TableOptionTablespaceContext *ctx) = 0;
  virtual void exitTableOptionTablespace(MySQLParser::TableOptionTablespaceContext *ctx) = 0;

  virtual void enterTableOptionUnion(MySQLParser::TableOptionUnionContext *ctx) = 0;
  virtual void exitTableOptionUnion(MySQLParser::TableOptionUnionContext *ctx) = 0;

  virtual void enterTablespaceStorage(MySQLParser::TablespaceStorageContext *ctx) = 0;
  virtual void exitTablespaceStorage(MySQLParser::TablespaceStorageContext *ctx) = 0;

  virtual void enterPartitionDefinitions(MySQLParser::PartitionDefinitionsContext *ctx) = 0;
  virtual void exitPartitionDefinitions(MySQLParser::PartitionDefinitionsContext *ctx) = 0;

  virtual void enterPartitionFunctionHash(MySQLParser::PartitionFunctionHashContext *ctx) = 0;
  virtual void exitPartitionFunctionHash(MySQLParser::PartitionFunctionHashContext *ctx) = 0;

  virtual void enterPartitionFunctionKey(MySQLParser::PartitionFunctionKeyContext *ctx) = 0;
  virtual void exitPartitionFunctionKey(MySQLParser::PartitionFunctionKeyContext *ctx) = 0;

  virtual void enterPartitionFunctionRange(MySQLParser::PartitionFunctionRangeContext *ctx) = 0;
  virtual void exitPartitionFunctionRange(MySQLParser::PartitionFunctionRangeContext *ctx) = 0;

  virtual void enterPartitionFunctionList(MySQLParser::PartitionFunctionListContext *ctx) = 0;
  virtual void exitPartitionFunctionList(MySQLParser::PartitionFunctionListContext *ctx) = 0;

  virtual void enterSubPartitionFunctionHash(MySQLParser::SubPartitionFunctionHashContext *ctx) = 0;
  virtual void exitSubPartitionFunctionHash(MySQLParser::SubPartitionFunctionHashContext *ctx) = 0;

  virtual void enterSubPartitionFunctionKey(MySQLParser::SubPartitionFunctionKeyContext *ctx) = 0;
  virtual void exitSubPartitionFunctionKey(MySQLParser::SubPartitionFunctionKeyContext *ctx) = 0;

  virtual void enterPartitionComparision(MySQLParser::PartitionComparisionContext *ctx) = 0;
  virtual void exitPartitionComparision(MySQLParser::PartitionComparisionContext *ctx) = 0;

  virtual void enterPartitionListAtom(MySQLParser::PartitionListAtomContext *ctx) = 0;
  virtual void exitPartitionListAtom(MySQLParser::PartitionListAtomContext *ctx) = 0;

  virtual void enterPartitionListVector(MySQLParser::PartitionListVectorContext *ctx) = 0;
  virtual void exitPartitionListVector(MySQLParser::PartitionListVectorContext *ctx) = 0;

  virtual void enterPartitionSimple(MySQLParser::PartitionSimpleContext *ctx) = 0;
  virtual void exitPartitionSimple(MySQLParser::PartitionSimpleContext *ctx) = 0;

  virtual void enterPartitionDefinerAtom(MySQLParser::PartitionDefinerAtomContext *ctx) = 0;
  virtual void exitPartitionDefinerAtom(MySQLParser::PartitionDefinerAtomContext *ctx) = 0;

  virtual void enterPartitionDefinerVector(MySQLParser::PartitionDefinerVectorContext *ctx) = 0;
  virtual void exitPartitionDefinerVector(MySQLParser::PartitionDefinerVectorContext *ctx) = 0;

  virtual void enterSubpartitionDefinition(MySQLParser::SubpartitionDefinitionContext *ctx) = 0;
  virtual void exitSubpartitionDefinition(MySQLParser::SubpartitionDefinitionContext *ctx) = 0;

  virtual void enterPartitionOptionEngine(MySQLParser::PartitionOptionEngineContext *ctx) = 0;
  virtual void exitPartitionOptionEngine(MySQLParser::PartitionOptionEngineContext *ctx) = 0;

  virtual void enterPartitionOptionComment(MySQLParser::PartitionOptionCommentContext *ctx) = 0;
  virtual void exitPartitionOptionComment(MySQLParser::PartitionOptionCommentContext *ctx) = 0;

  virtual void enterPartitionOptionDataDirectory(MySQLParser::PartitionOptionDataDirectoryContext *ctx) = 0;
  virtual void exitPartitionOptionDataDirectory(MySQLParser::PartitionOptionDataDirectoryContext *ctx) = 0;

  virtual void enterPartitionOptionIndexDirectory(MySQLParser::PartitionOptionIndexDirectoryContext *ctx) = 0;
  virtual void exitPartitionOptionIndexDirectory(MySQLParser::PartitionOptionIndexDirectoryContext *ctx) = 0;

  virtual void enterPartitionOptionMaxRows(MySQLParser::PartitionOptionMaxRowsContext *ctx) = 0;
  virtual void exitPartitionOptionMaxRows(MySQLParser::PartitionOptionMaxRowsContext *ctx) = 0;

  virtual void enterPartitionOptionMinRows(MySQLParser::PartitionOptionMinRowsContext *ctx) = 0;
  virtual void exitPartitionOptionMinRows(MySQLParser::PartitionOptionMinRowsContext *ctx) = 0;

  virtual void enterPartitionOptionTablespace(MySQLParser::PartitionOptionTablespaceContext *ctx) = 0;
  virtual void exitPartitionOptionTablespace(MySQLParser::PartitionOptionTablespaceContext *ctx) = 0;

  virtual void enterPartitionOptionNodeGroup(MySQLParser::PartitionOptionNodeGroupContext *ctx) = 0;
  virtual void exitPartitionOptionNodeGroup(MySQLParser::PartitionOptionNodeGroupContext *ctx) = 0;

  virtual void enterAlterSimpleDatabase(MySQLParser::AlterSimpleDatabaseContext *ctx) = 0;
  virtual void exitAlterSimpleDatabase(MySQLParser::AlterSimpleDatabaseContext *ctx) = 0;

  virtual void enterAlterUpgradeName(MySQLParser::AlterUpgradeNameContext *ctx) = 0;
  virtual void exitAlterUpgradeName(MySQLParser::AlterUpgradeNameContext *ctx) = 0;

  virtual void enterAlterEvent(MySQLParser::AlterEventContext *ctx) = 0;
  virtual void exitAlterEvent(MySQLParser::AlterEventContext *ctx) = 0;

  virtual void enterAlterFunction(MySQLParser::AlterFunctionContext *ctx) = 0;
  virtual void exitAlterFunction(MySQLParser::AlterFunctionContext *ctx) = 0;

  virtual void enterAlterInstance(MySQLParser::AlterInstanceContext *ctx) = 0;
  virtual void exitAlterInstance(MySQLParser::AlterInstanceContext *ctx) = 0;

  virtual void enterAlterLogfileGroup(MySQLParser::AlterLogfileGroupContext *ctx) = 0;
  virtual void exitAlterLogfileGroup(MySQLParser::AlterLogfileGroupContext *ctx) = 0;

  virtual void enterAlterProcedure(MySQLParser::AlterProcedureContext *ctx) = 0;
  virtual void exitAlterProcedure(MySQLParser::AlterProcedureContext *ctx) = 0;

  virtual void enterAlterServer(MySQLParser::AlterServerContext *ctx) = 0;
  virtual void exitAlterServer(MySQLParser::AlterServerContext *ctx) = 0;

  virtual void enterAlterTable(MySQLParser::AlterTableContext *ctx) = 0;
  virtual void exitAlterTable(MySQLParser::AlterTableContext *ctx) = 0;

  virtual void enterAlterTablespace(MySQLParser::AlterTablespaceContext *ctx) = 0;
  virtual void exitAlterTablespace(MySQLParser::AlterTablespaceContext *ctx) = 0;

  virtual void enterAlterView(MySQLParser::AlterViewContext *ctx) = 0;
  virtual void exitAlterView(MySQLParser::AlterViewContext *ctx) = 0;

  virtual void enterAlterByTableOption(MySQLParser::AlterByTableOptionContext *ctx) = 0;
  virtual void exitAlterByTableOption(MySQLParser::AlterByTableOptionContext *ctx) = 0;

  virtual void enterAlterByAddColumn(MySQLParser::AlterByAddColumnContext *ctx) = 0;
  virtual void exitAlterByAddColumn(MySQLParser::AlterByAddColumnContext *ctx) = 0;

  virtual void enterAlterByAddColumns(MySQLParser::AlterByAddColumnsContext *ctx) = 0;
  virtual void exitAlterByAddColumns(MySQLParser::AlterByAddColumnsContext *ctx) = 0;

  virtual void enterAlterByAddIndex(MySQLParser::AlterByAddIndexContext *ctx) = 0;
  virtual void exitAlterByAddIndex(MySQLParser::AlterByAddIndexContext *ctx) = 0;

  virtual void enterAlterByAddPrimaryKey(MySQLParser::AlterByAddPrimaryKeyContext *ctx) = 0;
  virtual void exitAlterByAddPrimaryKey(MySQLParser::AlterByAddPrimaryKeyContext *ctx) = 0;

  virtual void enterAlterByAddUniqueKey(MySQLParser::AlterByAddUniqueKeyContext *ctx) = 0;
  virtual void exitAlterByAddUniqueKey(MySQLParser::AlterByAddUniqueKeyContext *ctx) = 0;

  virtual void enterAlterByAddSpecialIndex(MySQLParser::AlterByAddSpecialIndexContext *ctx) = 0;
  virtual void exitAlterByAddSpecialIndex(MySQLParser::AlterByAddSpecialIndexContext *ctx) = 0;

  virtual void enterAlterByAddForeignKey(MySQLParser::AlterByAddForeignKeyContext *ctx) = 0;
  virtual void exitAlterByAddForeignKey(MySQLParser::AlterByAddForeignKeyContext *ctx) = 0;

  virtual void enterAlterByAddCheckTableConstraint(MySQLParser::AlterByAddCheckTableConstraintContext *ctx) = 0;
  virtual void exitAlterByAddCheckTableConstraint(MySQLParser::AlterByAddCheckTableConstraintContext *ctx) = 0;

  virtual void enterAlterBySetAlgorithm(MySQLParser::AlterBySetAlgorithmContext *ctx) = 0;
  virtual void exitAlterBySetAlgorithm(MySQLParser::AlterBySetAlgorithmContext *ctx) = 0;

  virtual void enterAlterByChangeDefault(MySQLParser::AlterByChangeDefaultContext *ctx) = 0;
  virtual void exitAlterByChangeDefault(MySQLParser::AlterByChangeDefaultContext *ctx) = 0;

  virtual void enterAlterByChangeColumn(MySQLParser::AlterByChangeColumnContext *ctx) = 0;
  virtual void exitAlterByChangeColumn(MySQLParser::AlterByChangeColumnContext *ctx) = 0;

  virtual void enterAlterByRenameColumn(MySQLParser::AlterByRenameColumnContext *ctx) = 0;
  virtual void exitAlterByRenameColumn(MySQLParser::AlterByRenameColumnContext *ctx) = 0;

  virtual void enterAlterByLock(MySQLParser::AlterByLockContext *ctx) = 0;
  virtual void exitAlterByLock(MySQLParser::AlterByLockContext *ctx) = 0;

  virtual void enterAlterByModifyColumn(MySQLParser::AlterByModifyColumnContext *ctx) = 0;
  virtual void exitAlterByModifyColumn(MySQLParser::AlterByModifyColumnContext *ctx) = 0;

  virtual void enterAlterByDropColumn(MySQLParser::AlterByDropColumnContext *ctx) = 0;
  virtual void exitAlterByDropColumn(MySQLParser::AlterByDropColumnContext *ctx) = 0;

  virtual void enterAlterByDropPrimaryKey(MySQLParser::AlterByDropPrimaryKeyContext *ctx) = 0;
  virtual void exitAlterByDropPrimaryKey(MySQLParser::AlterByDropPrimaryKeyContext *ctx) = 0;

  virtual void enterAlterByRenameIndex(MySQLParser::AlterByRenameIndexContext *ctx) = 0;
  virtual void exitAlterByRenameIndex(MySQLParser::AlterByRenameIndexContext *ctx) = 0;

  virtual void enterAlterByDropIndex(MySQLParser::AlterByDropIndexContext *ctx) = 0;
  virtual void exitAlterByDropIndex(MySQLParser::AlterByDropIndexContext *ctx) = 0;

  virtual void enterAlterByDropForeignKey(MySQLParser::AlterByDropForeignKeyContext *ctx) = 0;
  virtual void exitAlterByDropForeignKey(MySQLParser::AlterByDropForeignKeyContext *ctx) = 0;

  virtual void enterAlterByDisableKeys(MySQLParser::AlterByDisableKeysContext *ctx) = 0;
  virtual void exitAlterByDisableKeys(MySQLParser::AlterByDisableKeysContext *ctx) = 0;

  virtual void enterAlterByEnableKeys(MySQLParser::AlterByEnableKeysContext *ctx) = 0;
  virtual void exitAlterByEnableKeys(MySQLParser::AlterByEnableKeysContext *ctx) = 0;

  virtual void enterAlterByRename(MySQLParser::AlterByRenameContext *ctx) = 0;
  virtual void exitAlterByRename(MySQLParser::AlterByRenameContext *ctx) = 0;

  virtual void enterAlterByOrder(MySQLParser::AlterByOrderContext *ctx) = 0;
  virtual void exitAlterByOrder(MySQLParser::AlterByOrderContext *ctx) = 0;

  virtual void enterAlterByConvertCharset(MySQLParser::AlterByConvertCharsetContext *ctx) = 0;
  virtual void exitAlterByConvertCharset(MySQLParser::AlterByConvertCharsetContext *ctx) = 0;

  virtual void enterAlterByDefaultCharset(MySQLParser::AlterByDefaultCharsetContext *ctx) = 0;
  virtual void exitAlterByDefaultCharset(MySQLParser::AlterByDefaultCharsetContext *ctx) = 0;

  virtual void enterAlterByDiscardTablespace(MySQLParser::AlterByDiscardTablespaceContext *ctx) = 0;
  virtual void exitAlterByDiscardTablespace(MySQLParser::AlterByDiscardTablespaceContext *ctx) = 0;

  virtual void enterAlterByImportTablespace(MySQLParser::AlterByImportTablespaceContext *ctx) = 0;
  virtual void exitAlterByImportTablespace(MySQLParser::AlterByImportTablespaceContext *ctx) = 0;

  virtual void enterAlterByForce(MySQLParser::AlterByForceContext *ctx) = 0;
  virtual void exitAlterByForce(MySQLParser::AlterByForceContext *ctx) = 0;

  virtual void enterAlterByValidate(MySQLParser::AlterByValidateContext *ctx) = 0;
  virtual void exitAlterByValidate(MySQLParser::AlterByValidateContext *ctx) = 0;

  virtual void enterAlterByAddPartition(MySQLParser::AlterByAddPartitionContext *ctx) = 0;
  virtual void exitAlterByAddPartition(MySQLParser::AlterByAddPartitionContext *ctx) = 0;

  virtual void enterAlterByDropPartition(MySQLParser::AlterByDropPartitionContext *ctx) = 0;
  virtual void exitAlterByDropPartition(MySQLParser::AlterByDropPartitionContext *ctx) = 0;

  virtual void enterAlterByDiscardPartition(MySQLParser::AlterByDiscardPartitionContext *ctx) = 0;
  virtual void exitAlterByDiscardPartition(MySQLParser::AlterByDiscardPartitionContext *ctx) = 0;

  virtual void enterAlterByImportPartition(MySQLParser::AlterByImportPartitionContext *ctx) = 0;
  virtual void exitAlterByImportPartition(MySQLParser::AlterByImportPartitionContext *ctx) = 0;

  virtual void enterAlterByTruncatePartition(MySQLParser::AlterByTruncatePartitionContext *ctx) = 0;
  virtual void exitAlterByTruncatePartition(MySQLParser::AlterByTruncatePartitionContext *ctx) = 0;

  virtual void enterAlterByCoalescePartition(MySQLParser::AlterByCoalescePartitionContext *ctx) = 0;
  virtual void exitAlterByCoalescePartition(MySQLParser::AlterByCoalescePartitionContext *ctx) = 0;

  virtual void enterAlterByReorganizePartition(MySQLParser::AlterByReorganizePartitionContext *ctx) = 0;
  virtual void exitAlterByReorganizePartition(MySQLParser::AlterByReorganizePartitionContext *ctx) = 0;

  virtual void enterAlterByExchangePartition(MySQLParser::AlterByExchangePartitionContext *ctx) = 0;
  virtual void exitAlterByExchangePartition(MySQLParser::AlterByExchangePartitionContext *ctx) = 0;

  virtual void enterAlterByAnalyzePartition(MySQLParser::AlterByAnalyzePartitionContext *ctx) = 0;
  virtual void exitAlterByAnalyzePartition(MySQLParser::AlterByAnalyzePartitionContext *ctx) = 0;

  virtual void enterAlterByCheckPartition(MySQLParser::AlterByCheckPartitionContext *ctx) = 0;
  virtual void exitAlterByCheckPartition(MySQLParser::AlterByCheckPartitionContext *ctx) = 0;

  virtual void enterAlterByOptimizePartition(MySQLParser::AlterByOptimizePartitionContext *ctx) = 0;
  virtual void exitAlterByOptimizePartition(MySQLParser::AlterByOptimizePartitionContext *ctx) = 0;

  virtual void enterAlterByRebuildPartition(MySQLParser::AlterByRebuildPartitionContext *ctx) = 0;
  virtual void exitAlterByRebuildPartition(MySQLParser::AlterByRebuildPartitionContext *ctx) = 0;

  virtual void enterAlterByRepairPartition(MySQLParser::AlterByRepairPartitionContext *ctx) = 0;
  virtual void exitAlterByRepairPartition(MySQLParser::AlterByRepairPartitionContext *ctx) = 0;

  virtual void enterAlterByRemovePartitioning(MySQLParser::AlterByRemovePartitioningContext *ctx) = 0;
  virtual void exitAlterByRemovePartitioning(MySQLParser::AlterByRemovePartitioningContext *ctx) = 0;

  virtual void enterAlterByUpgradePartitioning(MySQLParser::AlterByUpgradePartitioningContext *ctx) = 0;
  virtual void exitAlterByUpgradePartitioning(MySQLParser::AlterByUpgradePartitioningContext *ctx) = 0;

  virtual void enterDropDatabase(MySQLParser::DropDatabaseContext *ctx) = 0;
  virtual void exitDropDatabase(MySQLParser::DropDatabaseContext *ctx) = 0;

  virtual void enterDropEvent(MySQLParser::DropEventContext *ctx) = 0;
  virtual void exitDropEvent(MySQLParser::DropEventContext *ctx) = 0;

  virtual void enterDropIndex(MySQLParser::DropIndexContext *ctx) = 0;
  virtual void exitDropIndex(MySQLParser::DropIndexContext *ctx) = 0;

  virtual void enterDropLogfileGroup(MySQLParser::DropLogfileGroupContext *ctx) = 0;
  virtual void exitDropLogfileGroup(MySQLParser::DropLogfileGroupContext *ctx) = 0;

  virtual void enterDropProcedure(MySQLParser::DropProcedureContext *ctx) = 0;
  virtual void exitDropProcedure(MySQLParser::DropProcedureContext *ctx) = 0;

  virtual void enterDropFunction(MySQLParser::DropFunctionContext *ctx) = 0;
  virtual void exitDropFunction(MySQLParser::DropFunctionContext *ctx) = 0;

  virtual void enterDropServer(MySQLParser::DropServerContext *ctx) = 0;
  virtual void exitDropServer(MySQLParser::DropServerContext *ctx) = 0;

  virtual void enterDropTable(MySQLParser::DropTableContext *ctx) = 0;
  virtual void exitDropTable(MySQLParser::DropTableContext *ctx) = 0;

  virtual void enterDropTablespace(MySQLParser::DropTablespaceContext *ctx) = 0;
  virtual void exitDropTablespace(MySQLParser::DropTablespaceContext *ctx) = 0;

  virtual void enterDropTrigger(MySQLParser::DropTriggerContext *ctx) = 0;
  virtual void exitDropTrigger(MySQLParser::DropTriggerContext *ctx) = 0;

  virtual void enterDropView(MySQLParser::DropViewContext *ctx) = 0;
  virtual void exitDropView(MySQLParser::DropViewContext *ctx) = 0;

  virtual void enterRenameTable(MySQLParser::RenameTableContext *ctx) = 0;
  virtual void exitRenameTable(MySQLParser::RenameTableContext *ctx) = 0;

  virtual void enterRenameTableClause(MySQLParser::RenameTableClauseContext *ctx) = 0;
  virtual void exitRenameTableClause(MySQLParser::RenameTableClauseContext *ctx) = 0;

  virtual void enterTruncateTable(MySQLParser::TruncateTableContext *ctx) = 0;
  virtual void exitTruncateTable(MySQLParser::TruncateTableContext *ctx) = 0;

  virtual void enterCallStatement(MySQLParser::CallStatementContext *ctx) = 0;
  virtual void exitCallStatement(MySQLParser::CallStatementContext *ctx) = 0;

  virtual void enterDeleteStatement(MySQLParser::DeleteStatementContext *ctx) = 0;
  virtual void exitDeleteStatement(MySQLParser::DeleteStatementContext *ctx) = 0;

  virtual void enterDoStatement(MySQLParser::DoStatementContext *ctx) = 0;
  virtual void exitDoStatement(MySQLParser::DoStatementContext *ctx) = 0;

  virtual void enterHandlerStatement(MySQLParser::HandlerStatementContext *ctx) = 0;
  virtual void exitHandlerStatement(MySQLParser::HandlerStatementContext *ctx) = 0;

  virtual void enterInsertStatement(MySQLParser::InsertStatementContext *ctx) = 0;
  virtual void exitInsertStatement(MySQLParser::InsertStatementContext *ctx) = 0;

  virtual void enterLoadDataStatement(MySQLParser::LoadDataStatementContext *ctx) = 0;
  virtual void exitLoadDataStatement(MySQLParser::LoadDataStatementContext *ctx) = 0;

  virtual void enterLoadXmlStatement(MySQLParser::LoadXmlStatementContext *ctx) = 0;
  virtual void exitLoadXmlStatement(MySQLParser::LoadXmlStatementContext *ctx) = 0;

  virtual void enterReplaceStatement(MySQLParser::ReplaceStatementContext *ctx) = 0;
  virtual void exitReplaceStatement(MySQLParser::ReplaceStatementContext *ctx) = 0;

  virtual void enterSimpleSelect(MySQLParser::SimpleSelectContext *ctx) = 0;
  virtual void exitSimpleSelect(MySQLParser::SimpleSelectContext *ctx) = 0;

  virtual void enterParenthesisSelect(MySQLParser::ParenthesisSelectContext *ctx) = 0;
  virtual void exitParenthesisSelect(MySQLParser::ParenthesisSelectContext *ctx) = 0;

  virtual void enterUnionSelect(MySQLParser::UnionSelectContext *ctx) = 0;
  virtual void exitUnionSelect(MySQLParser::UnionSelectContext *ctx) = 0;

  virtual void enterUnionParenthesisSelect(MySQLParser::UnionParenthesisSelectContext *ctx) = 0;
  virtual void exitUnionParenthesisSelect(MySQLParser::UnionParenthesisSelectContext *ctx) = 0;

  virtual void enterUpdateStatement(MySQLParser::UpdateStatementContext *ctx) = 0;
  virtual void exitUpdateStatement(MySQLParser::UpdateStatementContext *ctx) = 0;

  virtual void enterInsertStatementValue(MySQLParser::InsertStatementValueContext *ctx) = 0;
  virtual void exitInsertStatementValue(MySQLParser::InsertStatementValueContext *ctx) = 0;

  virtual void enterUpdatedElement(MySQLParser::UpdatedElementContext *ctx) = 0;
  virtual void exitUpdatedElement(MySQLParser::UpdatedElementContext *ctx) = 0;

  virtual void enterAssignmentField(MySQLParser::AssignmentFieldContext *ctx) = 0;
  virtual void exitAssignmentField(MySQLParser::AssignmentFieldContext *ctx) = 0;

  virtual void enterLockClause(MySQLParser::LockClauseContext *ctx) = 0;
  virtual void exitLockClause(MySQLParser::LockClauseContext *ctx) = 0;

  virtual void enterSingleDeleteStatement(MySQLParser::SingleDeleteStatementContext *ctx) = 0;
  virtual void exitSingleDeleteStatement(MySQLParser::SingleDeleteStatementContext *ctx) = 0;

  virtual void enterMultipleDeleteStatement(MySQLParser::MultipleDeleteStatementContext *ctx) = 0;
  virtual void exitMultipleDeleteStatement(MySQLParser::MultipleDeleteStatementContext *ctx) = 0;

  virtual void enterDelete_stmt_table(MySQLParser::Delete_stmt_tableContext *ctx) = 0;
  virtual void exitDelete_stmt_table(MySQLParser::Delete_stmt_tableContext *ctx) = 0;

  virtual void enterHandlerOpenStatement(MySQLParser::HandlerOpenStatementContext *ctx) = 0;
  virtual void exitHandlerOpenStatement(MySQLParser::HandlerOpenStatementContext *ctx) = 0;

  virtual void enterHandlerReadIndexStatement(MySQLParser::HandlerReadIndexStatementContext *ctx) = 0;
  virtual void exitHandlerReadIndexStatement(MySQLParser::HandlerReadIndexStatementContext *ctx) = 0;

  virtual void enterHandlerReadStatement(MySQLParser::HandlerReadStatementContext *ctx) = 0;
  virtual void exitHandlerReadStatement(MySQLParser::HandlerReadStatementContext *ctx) = 0;

  virtual void enterHandlerCloseStatement(MySQLParser::HandlerCloseStatementContext *ctx) = 0;
  virtual void exitHandlerCloseStatement(MySQLParser::HandlerCloseStatementContext *ctx) = 0;

  virtual void enterSingleUpdateStatement(MySQLParser::SingleUpdateStatementContext *ctx) = 0;
  virtual void exitSingleUpdateStatement(MySQLParser::SingleUpdateStatementContext *ctx) = 0;

  virtual void enterMultipleUpdateStatement(MySQLParser::MultipleUpdateStatementContext *ctx) = 0;
  virtual void exitMultipleUpdateStatement(MySQLParser::MultipleUpdateStatementContext *ctx) = 0;

  virtual void enterOrderByClause(MySQLParser::OrderByClauseContext *ctx) = 0;
  virtual void exitOrderByClause(MySQLParser::OrderByClauseContext *ctx) = 0;

  virtual void enterOrderByExpression(MySQLParser::OrderByExpressionContext *ctx) = 0;
  virtual void exitOrderByExpression(MySQLParser::OrderByExpressionContext *ctx) = 0;

  virtual void enterTableSources(MySQLParser::TableSourcesContext *ctx) = 0;
  virtual void exitTableSources(MySQLParser::TableSourcesContext *ctx) = 0;

  virtual void enterTableSourceBase(MySQLParser::TableSourceBaseContext *ctx) = 0;
  virtual void exitTableSourceBase(MySQLParser::TableSourceBaseContext *ctx) = 0;

  virtual void enterTableSourceNested(MySQLParser::TableSourceNestedContext *ctx) = 0;
  virtual void exitTableSourceNested(MySQLParser::TableSourceNestedContext *ctx) = 0;

  virtual void enterAtomTableItem(MySQLParser::AtomTableItemContext *ctx) = 0;
  virtual void exitAtomTableItem(MySQLParser::AtomTableItemContext *ctx) = 0;

  virtual void enterSubqueryTableItem(MySQLParser::SubqueryTableItemContext *ctx) = 0;
  virtual void exitSubqueryTableItem(MySQLParser::SubqueryTableItemContext *ctx) = 0;

  virtual void enterTableSourcesItem(MySQLParser::TableSourcesItemContext *ctx) = 0;
  virtual void exitTableSourcesItem(MySQLParser::TableSourcesItemContext *ctx) = 0;

  virtual void enterIndexHint(MySQLParser::IndexHintContext *ctx) = 0;
  virtual void exitIndexHint(MySQLParser::IndexHintContext *ctx) = 0;

  virtual void enterIndexHintType(MySQLParser::IndexHintTypeContext *ctx) = 0;
  virtual void exitIndexHintType(MySQLParser::IndexHintTypeContext *ctx) = 0;

  virtual void enterInnerJoin(MySQLParser::InnerJoinContext *ctx) = 0;
  virtual void exitInnerJoin(MySQLParser::InnerJoinContext *ctx) = 0;

  virtual void enterStraightJoin(MySQLParser::StraightJoinContext *ctx) = 0;
  virtual void exitStraightJoin(MySQLParser::StraightJoinContext *ctx) = 0;

  virtual void enterOuterJoin(MySQLParser::OuterJoinContext *ctx) = 0;
  virtual void exitOuterJoin(MySQLParser::OuterJoinContext *ctx) = 0;

  virtual void enterNaturalJoin(MySQLParser::NaturalJoinContext *ctx) = 0;
  virtual void exitNaturalJoin(MySQLParser::NaturalJoinContext *ctx) = 0;

  virtual void enterJoinPartOnClause(MySQLParser::JoinPartOnClauseContext *ctx) = 0;
  virtual void exitJoinPartOnClause(MySQLParser::JoinPartOnClauseContext *ctx) = 0;

  virtual void enterJoinPartUsingClause(MySQLParser::JoinPartUsingClauseContext *ctx) = 0;
  virtual void exitJoinPartUsingClause(MySQLParser::JoinPartUsingClauseContext *ctx) = 0;

  virtual void enterQueryExpression(MySQLParser::QueryExpressionContext *ctx) = 0;
  virtual void exitQueryExpression(MySQLParser::QueryExpressionContext *ctx) = 0;

  virtual void enterQueryExpressionNointo(MySQLParser::QueryExpressionNointoContext *ctx) = 0;
  virtual void exitQueryExpressionNointo(MySQLParser::QueryExpressionNointoContext *ctx) = 0;

  virtual void enterQuerySpecification(MySQLParser::QuerySpecificationContext *ctx) = 0;
  virtual void exitQuerySpecification(MySQLParser::QuerySpecificationContext *ctx) = 0;

  virtual void enterQuerySpecificationNointo(MySQLParser::QuerySpecificationNointoContext *ctx) = 0;
  virtual void exitQuerySpecificationNointo(MySQLParser::QuerySpecificationNointoContext *ctx) = 0;

  virtual void enterUnionParenthesis(MySQLParser::UnionParenthesisContext *ctx) = 0;
  virtual void exitUnionParenthesis(MySQLParser::UnionParenthesisContext *ctx) = 0;

  virtual void enterUnionStatement(MySQLParser::UnionStatementContext *ctx) = 0;
  virtual void exitUnionStatement(MySQLParser::UnionStatementContext *ctx) = 0;

  virtual void enterSelectSpec(MySQLParser::SelectSpecContext *ctx) = 0;
  virtual void exitSelectSpec(MySQLParser::SelectSpecContext *ctx) = 0;

  virtual void enterSelectElements(MySQLParser::SelectElementsContext *ctx) = 0;
  virtual void exitSelectElements(MySQLParser::SelectElementsContext *ctx) = 0;

  virtual void enterSelectStarElement(MySQLParser::SelectStarElementContext *ctx) = 0;
  virtual void exitSelectStarElement(MySQLParser::SelectStarElementContext *ctx) = 0;

  virtual void enterSelectColumnElement(MySQLParser::SelectColumnElementContext *ctx) = 0;
  virtual void exitSelectColumnElement(MySQLParser::SelectColumnElementContext *ctx) = 0;

  virtual void enterSelectFunctionElement(MySQLParser::SelectFunctionElementContext *ctx) = 0;
  virtual void exitSelectFunctionElement(MySQLParser::SelectFunctionElementContext *ctx) = 0;

  virtual void enterSelectExpressionElement(MySQLParser::SelectExpressionElementContext *ctx) = 0;
  virtual void exitSelectExpressionElement(MySQLParser::SelectExpressionElementContext *ctx) = 0;

  virtual void enterSelectIntoVariables(MySQLParser::SelectIntoVariablesContext *ctx) = 0;
  virtual void exitSelectIntoVariables(MySQLParser::SelectIntoVariablesContext *ctx) = 0;

  virtual void enterSelectIntoDumpFile(MySQLParser::SelectIntoDumpFileContext *ctx) = 0;
  virtual void exitSelectIntoDumpFile(MySQLParser::SelectIntoDumpFileContext *ctx) = 0;

  virtual void enterSelectIntoTextFile(MySQLParser::SelectIntoTextFileContext *ctx) = 0;
  virtual void exitSelectIntoTextFile(MySQLParser::SelectIntoTextFileContext *ctx) = 0;

  virtual void enterSelectFieldsInto(MySQLParser::SelectFieldsIntoContext *ctx) = 0;
  virtual void exitSelectFieldsInto(MySQLParser::SelectFieldsIntoContext *ctx) = 0;

  virtual void enterSelectLinesInto(MySQLParser::SelectLinesIntoContext *ctx) = 0;
  virtual void exitSelectLinesInto(MySQLParser::SelectLinesIntoContext *ctx) = 0;

  virtual void enterFromClause(MySQLParser::FromClauseContext *ctx) = 0;
  virtual void exitFromClause(MySQLParser::FromClauseContext *ctx) = 0;

  virtual void enterWhereClause(MySQLParser::WhereClauseContext *ctx) = 0;
  virtual void exitWhereClause(MySQLParser::WhereClauseContext *ctx) = 0;

  virtual void enterGroupClause(MySQLParser::GroupClauseContext *ctx) = 0;
  virtual void exitGroupClause(MySQLParser::GroupClauseContext *ctx) = 0;

  virtual void enterHavingClause(MySQLParser::HavingClauseContext *ctx) = 0;
  virtual void exitHavingClause(MySQLParser::HavingClauseContext *ctx) = 0;

  virtual void enterGroupByItem(MySQLParser::GroupByItemContext *ctx) = 0;
  virtual void exitGroupByItem(MySQLParser::GroupByItemContext *ctx) = 0;

  virtual void enterLimitClause(MySQLParser::LimitClauseContext *ctx) = 0;
  virtual void exitLimitClause(MySQLParser::LimitClauseContext *ctx) = 0;

  virtual void enterLimitClauseAtom(MySQLParser::LimitClauseAtomContext *ctx) = 0;
  virtual void exitLimitClauseAtom(MySQLParser::LimitClauseAtomContext *ctx) = 0;

  virtual void enterStartTransaction(MySQLParser::StartTransactionContext *ctx) = 0;
  virtual void exitStartTransaction(MySQLParser::StartTransactionContext *ctx) = 0;

  virtual void enterBeginWork(MySQLParser::BeginWorkContext *ctx) = 0;
  virtual void exitBeginWork(MySQLParser::BeginWorkContext *ctx) = 0;

  virtual void enterCommitWork(MySQLParser::CommitWorkContext *ctx) = 0;
  virtual void exitCommitWork(MySQLParser::CommitWorkContext *ctx) = 0;

  virtual void enterRollbackWork(MySQLParser::RollbackWorkContext *ctx) = 0;
  virtual void exitRollbackWork(MySQLParser::RollbackWorkContext *ctx) = 0;

  virtual void enterSavepointStatement(MySQLParser::SavepointStatementContext *ctx) = 0;
  virtual void exitSavepointStatement(MySQLParser::SavepointStatementContext *ctx) = 0;

  virtual void enterRollbackStatement(MySQLParser::RollbackStatementContext *ctx) = 0;
  virtual void exitRollbackStatement(MySQLParser::RollbackStatementContext *ctx) = 0;

  virtual void enterReleaseStatement(MySQLParser::ReleaseStatementContext *ctx) = 0;
  virtual void exitReleaseStatement(MySQLParser::ReleaseStatementContext *ctx) = 0;

  virtual void enterLockTables(MySQLParser::LockTablesContext *ctx) = 0;
  virtual void exitLockTables(MySQLParser::LockTablesContext *ctx) = 0;

  virtual void enterUnlockTables(MySQLParser::UnlockTablesContext *ctx) = 0;
  virtual void exitUnlockTables(MySQLParser::UnlockTablesContext *ctx) = 0;

  virtual void enterSetAutocommitStatement(MySQLParser::SetAutocommitStatementContext *ctx) = 0;
  virtual void exitSetAutocommitStatement(MySQLParser::SetAutocommitStatementContext *ctx) = 0;

  virtual void enterSetTransactionStatement(MySQLParser::SetTransactionStatementContext *ctx) = 0;
  virtual void exitSetTransactionStatement(MySQLParser::SetTransactionStatementContext *ctx) = 0;

  virtual void enterTransactionMode(MySQLParser::TransactionModeContext *ctx) = 0;
  virtual void exitTransactionMode(MySQLParser::TransactionModeContext *ctx) = 0;

  virtual void enterLockTableElement(MySQLParser::LockTableElementContext *ctx) = 0;
  virtual void exitLockTableElement(MySQLParser::LockTableElementContext *ctx) = 0;

  virtual void enterLockAction(MySQLParser::LockActionContext *ctx) = 0;
  virtual void exitLockAction(MySQLParser::LockActionContext *ctx) = 0;

  virtual void enterTransactionOption(MySQLParser::TransactionOptionContext *ctx) = 0;
  virtual void exitTransactionOption(MySQLParser::TransactionOptionContext *ctx) = 0;

  virtual void enterTransactionLevel(MySQLParser::TransactionLevelContext *ctx) = 0;
  virtual void exitTransactionLevel(MySQLParser::TransactionLevelContext *ctx) = 0;

  virtual void enterChangeMaster(MySQLParser::ChangeMasterContext *ctx) = 0;
  virtual void exitChangeMaster(MySQLParser::ChangeMasterContext *ctx) = 0;

  virtual void enterChangeReplicationFilter(MySQLParser::ChangeReplicationFilterContext *ctx) = 0;
  virtual void exitChangeReplicationFilter(MySQLParser::ChangeReplicationFilterContext *ctx) = 0;

  virtual void enterPurgeBinaryLogs(MySQLParser::PurgeBinaryLogsContext *ctx) = 0;
  virtual void exitPurgeBinaryLogs(MySQLParser::PurgeBinaryLogsContext *ctx) = 0;

  virtual void enterResetMaster(MySQLParser::ResetMasterContext *ctx) = 0;
  virtual void exitResetMaster(MySQLParser::ResetMasterContext *ctx) = 0;

  virtual void enterResetSlave(MySQLParser::ResetSlaveContext *ctx) = 0;
  virtual void exitResetSlave(MySQLParser::ResetSlaveContext *ctx) = 0;

  virtual void enterStartSlave(MySQLParser::StartSlaveContext *ctx) = 0;
  virtual void exitStartSlave(MySQLParser::StartSlaveContext *ctx) = 0;

  virtual void enterStopSlave(MySQLParser::StopSlaveContext *ctx) = 0;
  virtual void exitStopSlave(MySQLParser::StopSlaveContext *ctx) = 0;

  virtual void enterStartGroupReplication(MySQLParser::StartGroupReplicationContext *ctx) = 0;
  virtual void exitStartGroupReplication(MySQLParser::StartGroupReplicationContext *ctx) = 0;

  virtual void enterStopGroupReplication(MySQLParser::StopGroupReplicationContext *ctx) = 0;
  virtual void exitStopGroupReplication(MySQLParser::StopGroupReplicationContext *ctx) = 0;

  virtual void enterMasterStringOption(MySQLParser::MasterStringOptionContext *ctx) = 0;
  virtual void exitMasterStringOption(MySQLParser::MasterStringOptionContext *ctx) = 0;

  virtual void enterMasterDecimalOption(MySQLParser::MasterDecimalOptionContext *ctx) = 0;
  virtual void exitMasterDecimalOption(MySQLParser::MasterDecimalOptionContext *ctx) = 0;

  virtual void enterMasterBoolOption(MySQLParser::MasterBoolOptionContext *ctx) = 0;
  virtual void exitMasterBoolOption(MySQLParser::MasterBoolOptionContext *ctx) = 0;

  virtual void enterMasterRealOption(MySQLParser::MasterRealOptionContext *ctx) = 0;
  virtual void exitMasterRealOption(MySQLParser::MasterRealOptionContext *ctx) = 0;

  virtual void enterMasterUidListOption(MySQLParser::MasterUidListOptionContext *ctx) = 0;
  virtual void exitMasterUidListOption(MySQLParser::MasterUidListOptionContext *ctx) = 0;

  virtual void enterStringMasterOption(MySQLParser::StringMasterOptionContext *ctx) = 0;
  virtual void exitStringMasterOption(MySQLParser::StringMasterOptionContext *ctx) = 0;

  virtual void enterDecimalMasterOption(MySQLParser::DecimalMasterOptionContext *ctx) = 0;
  virtual void exitDecimalMasterOption(MySQLParser::DecimalMasterOptionContext *ctx) = 0;

  virtual void enterBoolMasterOption(MySQLParser::BoolMasterOptionContext *ctx) = 0;
  virtual void exitBoolMasterOption(MySQLParser::BoolMasterOptionContext *ctx) = 0;

  virtual void enterChannelOption(MySQLParser::ChannelOptionContext *ctx) = 0;
  virtual void exitChannelOption(MySQLParser::ChannelOptionContext *ctx) = 0;

  virtual void enterDoDbReplication(MySQLParser::DoDbReplicationContext *ctx) = 0;
  virtual void exitDoDbReplication(MySQLParser::DoDbReplicationContext *ctx) = 0;

  virtual void enterIgnoreDbReplication(MySQLParser::IgnoreDbReplicationContext *ctx) = 0;
  virtual void exitIgnoreDbReplication(MySQLParser::IgnoreDbReplicationContext *ctx) = 0;

  virtual void enterDoTableReplication(MySQLParser::DoTableReplicationContext *ctx) = 0;
  virtual void exitDoTableReplication(MySQLParser::DoTableReplicationContext *ctx) = 0;

  virtual void enterIgnoreTableReplication(MySQLParser::IgnoreTableReplicationContext *ctx) = 0;
  virtual void exitIgnoreTableReplication(MySQLParser::IgnoreTableReplicationContext *ctx) = 0;

  virtual void enterWildDoTableReplication(MySQLParser::WildDoTableReplicationContext *ctx) = 0;
  virtual void exitWildDoTableReplication(MySQLParser::WildDoTableReplicationContext *ctx) = 0;

  virtual void enterWildIgnoreTableReplication(MySQLParser::WildIgnoreTableReplicationContext *ctx) = 0;
  virtual void exitWildIgnoreTableReplication(MySQLParser::WildIgnoreTableReplicationContext *ctx) = 0;

  virtual void enterRewriteDbReplication(MySQLParser::RewriteDbReplicationContext *ctx) = 0;
  virtual void exitRewriteDbReplication(MySQLParser::RewriteDbReplicationContext *ctx) = 0;

  virtual void enterTablePair(MySQLParser::TablePairContext *ctx) = 0;
  virtual void exitTablePair(MySQLParser::TablePairContext *ctx) = 0;

  virtual void enterThreadType(MySQLParser::ThreadTypeContext *ctx) = 0;
  virtual void exitThreadType(MySQLParser::ThreadTypeContext *ctx) = 0;

  virtual void enterGtidsUntilOption(MySQLParser::GtidsUntilOptionContext *ctx) = 0;
  virtual void exitGtidsUntilOption(MySQLParser::GtidsUntilOptionContext *ctx) = 0;

  virtual void enterMasterLogUntilOption(MySQLParser::MasterLogUntilOptionContext *ctx) = 0;
  virtual void exitMasterLogUntilOption(MySQLParser::MasterLogUntilOptionContext *ctx) = 0;

  virtual void enterRelayLogUntilOption(MySQLParser::RelayLogUntilOptionContext *ctx) = 0;
  virtual void exitRelayLogUntilOption(MySQLParser::RelayLogUntilOptionContext *ctx) = 0;

  virtual void enterSqlGapsUntilOption(MySQLParser::SqlGapsUntilOptionContext *ctx) = 0;
  virtual void exitSqlGapsUntilOption(MySQLParser::SqlGapsUntilOptionContext *ctx) = 0;

  virtual void enterUserConnectionOption(MySQLParser::UserConnectionOptionContext *ctx) = 0;
  virtual void exitUserConnectionOption(MySQLParser::UserConnectionOptionContext *ctx) = 0;

  virtual void enterPasswordConnectionOption(MySQLParser::PasswordConnectionOptionContext *ctx) = 0;
  virtual void exitPasswordConnectionOption(MySQLParser::PasswordConnectionOptionContext *ctx) = 0;

  virtual void enterDefaultAuthConnectionOption(MySQLParser::DefaultAuthConnectionOptionContext *ctx) = 0;
  virtual void exitDefaultAuthConnectionOption(MySQLParser::DefaultAuthConnectionOptionContext *ctx) = 0;

  virtual void enterPluginDirConnectionOption(MySQLParser::PluginDirConnectionOptionContext *ctx) = 0;
  virtual void exitPluginDirConnectionOption(MySQLParser::PluginDirConnectionOptionContext *ctx) = 0;

  virtual void enterGtuidSet(MySQLParser::GtuidSetContext *ctx) = 0;
  virtual void exitGtuidSet(MySQLParser::GtuidSetContext *ctx) = 0;

  virtual void enterXaStartTransaction(MySQLParser::XaStartTransactionContext *ctx) = 0;
  virtual void exitXaStartTransaction(MySQLParser::XaStartTransactionContext *ctx) = 0;

  virtual void enterXaEndTransaction(MySQLParser::XaEndTransactionContext *ctx) = 0;
  virtual void exitXaEndTransaction(MySQLParser::XaEndTransactionContext *ctx) = 0;

  virtual void enterXaPrepareStatement(MySQLParser::XaPrepareStatementContext *ctx) = 0;
  virtual void exitXaPrepareStatement(MySQLParser::XaPrepareStatementContext *ctx) = 0;

  virtual void enterXaCommitWork(MySQLParser::XaCommitWorkContext *ctx) = 0;
  virtual void exitXaCommitWork(MySQLParser::XaCommitWorkContext *ctx) = 0;

  virtual void enterXaRollbackWork(MySQLParser::XaRollbackWorkContext *ctx) = 0;
  virtual void exitXaRollbackWork(MySQLParser::XaRollbackWorkContext *ctx) = 0;

  virtual void enterXaRecoverWork(MySQLParser::XaRecoverWorkContext *ctx) = 0;
  virtual void exitXaRecoverWork(MySQLParser::XaRecoverWorkContext *ctx) = 0;

  virtual void enterPrepareStatement(MySQLParser::PrepareStatementContext *ctx) = 0;
  virtual void exitPrepareStatement(MySQLParser::PrepareStatementContext *ctx) = 0;

  virtual void enterExecuteStatement(MySQLParser::ExecuteStatementContext *ctx) = 0;
  virtual void exitExecuteStatement(MySQLParser::ExecuteStatementContext *ctx) = 0;

  virtual void enterDeallocatePrepare(MySQLParser::DeallocatePrepareContext *ctx) = 0;
  virtual void exitDeallocatePrepare(MySQLParser::DeallocatePrepareContext *ctx) = 0;

  virtual void enterRoutineBody(MySQLParser::RoutineBodyContext *ctx) = 0;
  virtual void exitRoutineBody(MySQLParser::RoutineBodyContext *ctx) = 0;

  virtual void enterBlockStatement(MySQLParser::BlockStatementContext *ctx) = 0;
  virtual void exitBlockStatement(MySQLParser::BlockStatementContext *ctx) = 0;

  virtual void enterCaseStatement(MySQLParser::CaseStatementContext *ctx) = 0;
  virtual void exitCaseStatement(MySQLParser::CaseStatementContext *ctx) = 0;

  virtual void enterIfStatement(MySQLParser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(MySQLParser::IfStatementContext *ctx) = 0;

  virtual void enterIterateStatement(MySQLParser::IterateStatementContext *ctx) = 0;
  virtual void exitIterateStatement(MySQLParser::IterateStatementContext *ctx) = 0;

  virtual void enterLeaveStatement(MySQLParser::LeaveStatementContext *ctx) = 0;
  virtual void exitLeaveStatement(MySQLParser::LeaveStatementContext *ctx) = 0;

  virtual void enterLoopStatement(MySQLParser::LoopStatementContext *ctx) = 0;
  virtual void exitLoopStatement(MySQLParser::LoopStatementContext *ctx) = 0;

  virtual void enterRepeatStatement(MySQLParser::RepeatStatementContext *ctx) = 0;
  virtual void exitRepeatStatement(MySQLParser::RepeatStatementContext *ctx) = 0;

  virtual void enterReturnStatement(MySQLParser::ReturnStatementContext *ctx) = 0;
  virtual void exitReturnStatement(MySQLParser::ReturnStatementContext *ctx) = 0;

  virtual void enterWhileStatement(MySQLParser::WhileStatementContext *ctx) = 0;
  virtual void exitWhileStatement(MySQLParser::WhileStatementContext *ctx) = 0;

  virtual void enterCloseCursor(MySQLParser::CloseCursorContext *ctx) = 0;
  virtual void exitCloseCursor(MySQLParser::CloseCursorContext *ctx) = 0;

  virtual void enterFetchCursor(MySQLParser::FetchCursorContext *ctx) = 0;
  virtual void exitFetchCursor(MySQLParser::FetchCursorContext *ctx) = 0;

  virtual void enterOpenCursor(MySQLParser::OpenCursorContext *ctx) = 0;
  virtual void exitOpenCursor(MySQLParser::OpenCursorContext *ctx) = 0;

  virtual void enterDeclareVariable(MySQLParser::DeclareVariableContext *ctx) = 0;
  virtual void exitDeclareVariable(MySQLParser::DeclareVariableContext *ctx) = 0;

  virtual void enterDeclareCondition(MySQLParser::DeclareConditionContext *ctx) = 0;
  virtual void exitDeclareCondition(MySQLParser::DeclareConditionContext *ctx) = 0;

  virtual void enterDeclareCursor(MySQLParser::DeclareCursorContext *ctx) = 0;
  virtual void exitDeclareCursor(MySQLParser::DeclareCursorContext *ctx) = 0;

  virtual void enterDeclareHandler(MySQLParser::DeclareHandlerContext *ctx) = 0;
  virtual void exitDeclareHandler(MySQLParser::DeclareHandlerContext *ctx) = 0;

  virtual void enterHandlerConditionCode(MySQLParser::HandlerConditionCodeContext *ctx) = 0;
  virtual void exitHandlerConditionCode(MySQLParser::HandlerConditionCodeContext *ctx) = 0;

  virtual void enterHandlerConditionState(MySQLParser::HandlerConditionStateContext *ctx) = 0;
  virtual void exitHandlerConditionState(MySQLParser::HandlerConditionStateContext *ctx) = 0;

  virtual void enterHandlerConditionName(MySQLParser::HandlerConditionNameContext *ctx) = 0;
  virtual void exitHandlerConditionName(MySQLParser::HandlerConditionNameContext *ctx) = 0;

  virtual void enterHandlerConditionWarning(MySQLParser::HandlerConditionWarningContext *ctx) = 0;
  virtual void exitHandlerConditionWarning(MySQLParser::HandlerConditionWarningContext *ctx) = 0;

  virtual void enterHandlerConditionNotfound(MySQLParser::HandlerConditionNotfoundContext *ctx) = 0;
  virtual void exitHandlerConditionNotfound(MySQLParser::HandlerConditionNotfoundContext *ctx) = 0;

  virtual void enterHandlerConditionException(MySQLParser::HandlerConditionExceptionContext *ctx) = 0;
  virtual void exitHandlerConditionException(MySQLParser::HandlerConditionExceptionContext *ctx) = 0;

  virtual void enterProcedureSqlStatement(MySQLParser::ProcedureSqlStatementContext *ctx) = 0;
  virtual void exitProcedureSqlStatement(MySQLParser::ProcedureSqlStatementContext *ctx) = 0;

  virtual void enterCaseAlternative(MySQLParser::CaseAlternativeContext *ctx) = 0;
  virtual void exitCaseAlternative(MySQLParser::CaseAlternativeContext *ctx) = 0;

  virtual void enterElifAlternative(MySQLParser::ElifAlternativeContext *ctx) = 0;
  virtual void exitElifAlternative(MySQLParser::ElifAlternativeContext *ctx) = 0;

  virtual void enterAlterUserMysqlV56(MySQLParser::AlterUserMysqlV56Context *ctx) = 0;
  virtual void exitAlterUserMysqlV56(MySQLParser::AlterUserMysqlV56Context *ctx) = 0;

  virtual void enterAlterUserMysqlV57(MySQLParser::AlterUserMysqlV57Context *ctx) = 0;
  virtual void exitAlterUserMysqlV57(MySQLParser::AlterUserMysqlV57Context *ctx) = 0;

  virtual void enterCreateUserMysqlV56(MySQLParser::CreateUserMysqlV56Context *ctx) = 0;
  virtual void exitCreateUserMysqlV56(MySQLParser::CreateUserMysqlV56Context *ctx) = 0;

  virtual void enterCreateUserMysqlV57(MySQLParser::CreateUserMysqlV57Context *ctx) = 0;
  virtual void exitCreateUserMysqlV57(MySQLParser::CreateUserMysqlV57Context *ctx) = 0;

  virtual void enterDropUser(MySQLParser::DropUserContext *ctx) = 0;
  virtual void exitDropUser(MySQLParser::DropUserContext *ctx) = 0;

  virtual void enterGrantStatement(MySQLParser::GrantStatementContext *ctx) = 0;
  virtual void exitGrantStatement(MySQLParser::GrantStatementContext *ctx) = 0;

  virtual void enterGrantProxy(MySQLParser::GrantProxyContext *ctx) = 0;
  virtual void exitGrantProxy(MySQLParser::GrantProxyContext *ctx) = 0;

  virtual void enterRenameUser(MySQLParser::RenameUserContext *ctx) = 0;
  virtual void exitRenameUser(MySQLParser::RenameUserContext *ctx) = 0;

  virtual void enterDetailRevoke(MySQLParser::DetailRevokeContext *ctx) = 0;
  virtual void exitDetailRevoke(MySQLParser::DetailRevokeContext *ctx) = 0;

  virtual void enterShortRevoke(MySQLParser::ShortRevokeContext *ctx) = 0;
  virtual void exitShortRevoke(MySQLParser::ShortRevokeContext *ctx) = 0;

  virtual void enterRevokeProxy(MySQLParser::RevokeProxyContext *ctx) = 0;
  virtual void exitRevokeProxy(MySQLParser::RevokeProxyContext *ctx) = 0;

  virtual void enterSetPasswordStatement(MySQLParser::SetPasswordStatementContext *ctx) = 0;
  virtual void exitSetPasswordStatement(MySQLParser::SetPasswordStatementContext *ctx) = 0;

  virtual void enterUserSpecification(MySQLParser::UserSpecificationContext *ctx) = 0;
  virtual void exitUserSpecification(MySQLParser::UserSpecificationContext *ctx) = 0;

  virtual void enterPasswordAuthOption(MySQLParser::PasswordAuthOptionContext *ctx) = 0;
  virtual void exitPasswordAuthOption(MySQLParser::PasswordAuthOptionContext *ctx) = 0;

  virtual void enterStringAuthOption(MySQLParser::StringAuthOptionContext *ctx) = 0;
  virtual void exitStringAuthOption(MySQLParser::StringAuthOptionContext *ctx) = 0;

  virtual void enterHashAuthOption(MySQLParser::HashAuthOptionContext *ctx) = 0;
  virtual void exitHashAuthOption(MySQLParser::HashAuthOptionContext *ctx) = 0;

  virtual void enterSimpleAuthOption(MySQLParser::SimpleAuthOptionContext *ctx) = 0;
  virtual void exitSimpleAuthOption(MySQLParser::SimpleAuthOptionContext *ctx) = 0;

  virtual void enterTlsOption(MySQLParser::TlsOptionContext *ctx) = 0;
  virtual void exitTlsOption(MySQLParser::TlsOptionContext *ctx) = 0;

  virtual void enterUserResourceOption(MySQLParser::UserResourceOptionContext *ctx) = 0;
  virtual void exitUserResourceOption(MySQLParser::UserResourceOptionContext *ctx) = 0;

  virtual void enterUserPasswordOption(MySQLParser::UserPasswordOptionContext *ctx) = 0;
  virtual void exitUserPasswordOption(MySQLParser::UserPasswordOptionContext *ctx) = 0;

  virtual void enterUserLockOption(MySQLParser::UserLockOptionContext *ctx) = 0;
  virtual void exitUserLockOption(MySQLParser::UserLockOptionContext *ctx) = 0;

  virtual void enterPrivelegeClause(MySQLParser::PrivelegeClauseContext *ctx) = 0;
  virtual void exitPrivelegeClause(MySQLParser::PrivelegeClauseContext *ctx) = 0;

  virtual void enterPrivilege(MySQLParser::PrivilegeContext *ctx) = 0;
  virtual void exitPrivilege(MySQLParser::PrivilegeContext *ctx) = 0;

  virtual void enterCurrentSchemaPriviLevel(MySQLParser::CurrentSchemaPriviLevelContext *ctx) = 0;
  virtual void exitCurrentSchemaPriviLevel(MySQLParser::CurrentSchemaPriviLevelContext *ctx) = 0;

  virtual void enterGlobalPrivLevel(MySQLParser::GlobalPrivLevelContext *ctx) = 0;
  virtual void exitGlobalPrivLevel(MySQLParser::GlobalPrivLevelContext *ctx) = 0;

  virtual void enterDefiniteSchemaPrivLevel(MySQLParser::DefiniteSchemaPrivLevelContext *ctx) = 0;
  virtual void exitDefiniteSchemaPrivLevel(MySQLParser::DefiniteSchemaPrivLevelContext *ctx) = 0;

  virtual void enterDefiniteFullTablePrivLevel(MySQLParser::DefiniteFullTablePrivLevelContext *ctx) = 0;
  virtual void exitDefiniteFullTablePrivLevel(MySQLParser::DefiniteFullTablePrivLevelContext *ctx) = 0;

  virtual void enterDefiniteTablePrivLevel(MySQLParser::DefiniteTablePrivLevelContext *ctx) = 0;
  virtual void exitDefiniteTablePrivLevel(MySQLParser::DefiniteTablePrivLevelContext *ctx) = 0;

  virtual void enterRenameUserClause(MySQLParser::RenameUserClauseContext *ctx) = 0;
  virtual void exitRenameUserClause(MySQLParser::RenameUserClauseContext *ctx) = 0;

  virtual void enterAnalyzeTable(MySQLParser::AnalyzeTableContext *ctx) = 0;
  virtual void exitAnalyzeTable(MySQLParser::AnalyzeTableContext *ctx) = 0;

  virtual void enterCheckTable(MySQLParser::CheckTableContext *ctx) = 0;
  virtual void exitCheckTable(MySQLParser::CheckTableContext *ctx) = 0;

  virtual void enterChecksumTable(MySQLParser::ChecksumTableContext *ctx) = 0;
  virtual void exitChecksumTable(MySQLParser::ChecksumTableContext *ctx) = 0;

  virtual void enterOptimizeTable(MySQLParser::OptimizeTableContext *ctx) = 0;
  virtual void exitOptimizeTable(MySQLParser::OptimizeTableContext *ctx) = 0;

  virtual void enterRepairTable(MySQLParser::RepairTableContext *ctx) = 0;
  virtual void exitRepairTable(MySQLParser::RepairTableContext *ctx) = 0;

  virtual void enterCheckTableOption(MySQLParser::CheckTableOptionContext *ctx) = 0;
  virtual void exitCheckTableOption(MySQLParser::CheckTableOptionContext *ctx) = 0;

  virtual void enterCreateUdfunction(MySQLParser::CreateUdfunctionContext *ctx) = 0;
  virtual void exitCreateUdfunction(MySQLParser::CreateUdfunctionContext *ctx) = 0;

  virtual void enterInstallPlugin(MySQLParser::InstallPluginContext *ctx) = 0;
  virtual void exitInstallPlugin(MySQLParser::InstallPluginContext *ctx) = 0;

  virtual void enterUninstallPlugin(MySQLParser::UninstallPluginContext *ctx) = 0;
  virtual void exitUninstallPlugin(MySQLParser::UninstallPluginContext *ctx) = 0;

  virtual void enterSetVariable(MySQLParser::SetVariableContext *ctx) = 0;
  virtual void exitSetVariable(MySQLParser::SetVariableContext *ctx) = 0;

  virtual void enterSetCharset(MySQLParser::SetCharsetContext *ctx) = 0;
  virtual void exitSetCharset(MySQLParser::SetCharsetContext *ctx) = 0;

  virtual void enterSetNames(MySQLParser::SetNamesContext *ctx) = 0;
  virtual void exitSetNames(MySQLParser::SetNamesContext *ctx) = 0;

  virtual void enterSetPassword(MySQLParser::SetPasswordContext *ctx) = 0;
  virtual void exitSetPassword(MySQLParser::SetPasswordContext *ctx) = 0;

  virtual void enterSetTransaction(MySQLParser::SetTransactionContext *ctx) = 0;
  virtual void exitSetTransaction(MySQLParser::SetTransactionContext *ctx) = 0;

  virtual void enterSetAutocommit(MySQLParser::SetAutocommitContext *ctx) = 0;
  virtual void exitSetAutocommit(MySQLParser::SetAutocommitContext *ctx) = 0;

  virtual void enterSetNewValueInsideTrigger(MySQLParser::SetNewValueInsideTriggerContext *ctx) = 0;
  virtual void exitSetNewValueInsideTrigger(MySQLParser::SetNewValueInsideTriggerContext *ctx) = 0;

  virtual void enterShowMasterLogs(MySQLParser::ShowMasterLogsContext *ctx) = 0;
  virtual void exitShowMasterLogs(MySQLParser::ShowMasterLogsContext *ctx) = 0;

  virtual void enterShowLogEvents(MySQLParser::ShowLogEventsContext *ctx) = 0;
  virtual void exitShowLogEvents(MySQLParser::ShowLogEventsContext *ctx) = 0;

  virtual void enterShowObjectFilter(MySQLParser::ShowObjectFilterContext *ctx) = 0;
  virtual void exitShowObjectFilter(MySQLParser::ShowObjectFilterContext *ctx) = 0;

  virtual void enterShowColumns(MySQLParser::ShowColumnsContext *ctx) = 0;
  virtual void exitShowColumns(MySQLParser::ShowColumnsContext *ctx) = 0;

  virtual void enterShowCreateDb(MySQLParser::ShowCreateDbContext *ctx) = 0;
  virtual void exitShowCreateDb(MySQLParser::ShowCreateDbContext *ctx) = 0;

  virtual void enterShowCreateFullIdObject(MySQLParser::ShowCreateFullIdObjectContext *ctx) = 0;
  virtual void exitShowCreateFullIdObject(MySQLParser::ShowCreateFullIdObjectContext *ctx) = 0;

  virtual void enterShowCreateUser(MySQLParser::ShowCreateUserContext *ctx) = 0;
  virtual void exitShowCreateUser(MySQLParser::ShowCreateUserContext *ctx) = 0;

  virtual void enterShowEngine(MySQLParser::ShowEngineContext *ctx) = 0;
  virtual void exitShowEngine(MySQLParser::ShowEngineContext *ctx) = 0;

  virtual void enterShowGlobalInfo(MySQLParser::ShowGlobalInfoContext *ctx) = 0;
  virtual void exitShowGlobalInfo(MySQLParser::ShowGlobalInfoContext *ctx) = 0;

  virtual void enterShowErrors(MySQLParser::ShowErrorsContext *ctx) = 0;
  virtual void exitShowErrors(MySQLParser::ShowErrorsContext *ctx) = 0;

  virtual void enterShowCountErrors(MySQLParser::ShowCountErrorsContext *ctx) = 0;
  virtual void exitShowCountErrors(MySQLParser::ShowCountErrorsContext *ctx) = 0;

  virtual void enterShowSchemaFilter(MySQLParser::ShowSchemaFilterContext *ctx) = 0;
  virtual void exitShowSchemaFilter(MySQLParser::ShowSchemaFilterContext *ctx) = 0;

  virtual void enterShowRoutine(MySQLParser::ShowRoutineContext *ctx) = 0;
  virtual void exitShowRoutine(MySQLParser::ShowRoutineContext *ctx) = 0;

  virtual void enterShowGrants(MySQLParser::ShowGrantsContext *ctx) = 0;
  virtual void exitShowGrants(MySQLParser::ShowGrantsContext *ctx) = 0;

  virtual void enterShowIndexes(MySQLParser::ShowIndexesContext *ctx) = 0;
  virtual void exitShowIndexes(MySQLParser::ShowIndexesContext *ctx) = 0;

  virtual void enterShowOpenTables(MySQLParser::ShowOpenTablesContext *ctx) = 0;
  virtual void exitShowOpenTables(MySQLParser::ShowOpenTablesContext *ctx) = 0;

  virtual void enterShowProfile(MySQLParser::ShowProfileContext *ctx) = 0;
  virtual void exitShowProfile(MySQLParser::ShowProfileContext *ctx) = 0;

  virtual void enterShowSlaveStatus(MySQLParser::ShowSlaveStatusContext *ctx) = 0;
  virtual void exitShowSlaveStatus(MySQLParser::ShowSlaveStatusContext *ctx) = 0;

  virtual void enterVariableClause(MySQLParser::VariableClauseContext *ctx) = 0;
  virtual void exitVariableClause(MySQLParser::VariableClauseContext *ctx) = 0;

  virtual void enterShowCommonEntity(MySQLParser::ShowCommonEntityContext *ctx) = 0;
  virtual void exitShowCommonEntity(MySQLParser::ShowCommonEntityContext *ctx) = 0;

  virtual void enterShowFilter(MySQLParser::ShowFilterContext *ctx) = 0;
  virtual void exitShowFilter(MySQLParser::ShowFilterContext *ctx) = 0;

  virtual void enterShowGlobalInfoClause(MySQLParser::ShowGlobalInfoClauseContext *ctx) = 0;
  virtual void exitShowGlobalInfoClause(MySQLParser::ShowGlobalInfoClauseContext *ctx) = 0;

  virtual void enterShowSchemaEntity(MySQLParser::ShowSchemaEntityContext *ctx) = 0;
  virtual void exitShowSchemaEntity(MySQLParser::ShowSchemaEntityContext *ctx) = 0;

  virtual void enterShowProfileType(MySQLParser::ShowProfileTypeContext *ctx) = 0;
  virtual void exitShowProfileType(MySQLParser::ShowProfileTypeContext *ctx) = 0;

  virtual void enterBinlogStatement(MySQLParser::BinlogStatementContext *ctx) = 0;
  virtual void exitBinlogStatement(MySQLParser::BinlogStatementContext *ctx) = 0;

  virtual void enterCacheIndexStatement(MySQLParser::CacheIndexStatementContext *ctx) = 0;
  virtual void exitCacheIndexStatement(MySQLParser::CacheIndexStatementContext *ctx) = 0;

  virtual void enterFlushStatement(MySQLParser::FlushStatementContext *ctx) = 0;
  virtual void exitFlushStatement(MySQLParser::FlushStatementContext *ctx) = 0;

  virtual void enterKillStatement(MySQLParser::KillStatementContext *ctx) = 0;
  virtual void exitKillStatement(MySQLParser::KillStatementContext *ctx) = 0;

  virtual void enterLoadIndexIntoCache(MySQLParser::LoadIndexIntoCacheContext *ctx) = 0;
  virtual void exitLoadIndexIntoCache(MySQLParser::LoadIndexIntoCacheContext *ctx) = 0;

  virtual void enterResetStatement(MySQLParser::ResetStatementContext *ctx) = 0;
  virtual void exitResetStatement(MySQLParser::ResetStatementContext *ctx) = 0;

  virtual void enterShutdownStatement(MySQLParser::ShutdownStatementContext *ctx) = 0;
  virtual void exitShutdownStatement(MySQLParser::ShutdownStatementContext *ctx) = 0;

  virtual void enterTableIndexes(MySQLParser::TableIndexesContext *ctx) = 0;
  virtual void exitTableIndexes(MySQLParser::TableIndexesContext *ctx) = 0;

  virtual void enterSimpleFlushOption(MySQLParser::SimpleFlushOptionContext *ctx) = 0;
  virtual void exitSimpleFlushOption(MySQLParser::SimpleFlushOptionContext *ctx) = 0;

  virtual void enterChannelFlushOption(MySQLParser::ChannelFlushOptionContext *ctx) = 0;
  virtual void exitChannelFlushOption(MySQLParser::ChannelFlushOptionContext *ctx) = 0;

  virtual void enterTableFlushOption(MySQLParser::TableFlushOptionContext *ctx) = 0;
  virtual void exitTableFlushOption(MySQLParser::TableFlushOptionContext *ctx) = 0;

  virtual void enterFlushTableOption(MySQLParser::FlushTableOptionContext *ctx) = 0;
  virtual void exitFlushTableOption(MySQLParser::FlushTableOptionContext *ctx) = 0;

  virtual void enterLoadedTableIndexes(MySQLParser::LoadedTableIndexesContext *ctx) = 0;
  virtual void exitLoadedTableIndexes(MySQLParser::LoadedTableIndexesContext *ctx) = 0;

  virtual void enterSimpleDescribeStatement(MySQLParser::SimpleDescribeStatementContext *ctx) = 0;
  virtual void exitSimpleDescribeStatement(MySQLParser::SimpleDescribeStatementContext *ctx) = 0;

  virtual void enterFullDescribeStatement(MySQLParser::FullDescribeStatementContext *ctx) = 0;
  virtual void exitFullDescribeStatement(MySQLParser::FullDescribeStatementContext *ctx) = 0;

  virtual void enterHelpStatement(MySQLParser::HelpStatementContext *ctx) = 0;
  virtual void exitHelpStatement(MySQLParser::HelpStatementContext *ctx) = 0;

  virtual void enterUseStatement(MySQLParser::UseStatementContext *ctx) = 0;
  virtual void exitUseStatement(MySQLParser::UseStatementContext *ctx) = 0;

  virtual void enterDescribeStatements(MySQLParser::DescribeStatementsContext *ctx) = 0;
  virtual void exitDescribeStatements(MySQLParser::DescribeStatementsContext *ctx) = 0;

  virtual void enterDescribeConnection(MySQLParser::DescribeConnectionContext *ctx) = 0;
  virtual void exitDescribeConnection(MySQLParser::DescribeConnectionContext *ctx) = 0;

  virtual void enterFullId(MySQLParser::FullIdContext *ctx) = 0;
  virtual void exitFullId(MySQLParser::FullIdContext *ctx) = 0;

  virtual void enterTableName(MySQLParser::TableNameContext *ctx) = 0;
  virtual void exitTableName(MySQLParser::TableNameContext *ctx) = 0;

  virtual void enterFullColumnName(MySQLParser::FullColumnNameContext *ctx) = 0;
  virtual void exitFullColumnName(MySQLParser::FullColumnNameContext *ctx) = 0;

  virtual void enterIndexColumnName(MySQLParser::IndexColumnNameContext *ctx) = 0;
  virtual void exitIndexColumnName(MySQLParser::IndexColumnNameContext *ctx) = 0;

  virtual void enterUserName(MySQLParser::UserNameContext *ctx) = 0;
  virtual void exitUserName(MySQLParser::UserNameContext *ctx) = 0;

  virtual void enterMysqlVariable(MySQLParser::MysqlVariableContext *ctx) = 0;
  virtual void exitMysqlVariable(MySQLParser::MysqlVariableContext *ctx) = 0;

  virtual void enterCharsetName(MySQLParser::CharsetNameContext *ctx) = 0;
  virtual void exitCharsetName(MySQLParser::CharsetNameContext *ctx) = 0;

  virtual void enterCollationName(MySQLParser::CollationNameContext *ctx) = 0;
  virtual void exitCollationName(MySQLParser::CollationNameContext *ctx) = 0;

  virtual void enterEngineName(MySQLParser::EngineNameContext *ctx) = 0;
  virtual void exitEngineName(MySQLParser::EngineNameContext *ctx) = 0;

  virtual void enterUuidSet(MySQLParser::UuidSetContext *ctx) = 0;
  virtual void exitUuidSet(MySQLParser::UuidSetContext *ctx) = 0;

  virtual void enterXid(MySQLParser::XidContext *ctx) = 0;
  virtual void exitXid(MySQLParser::XidContext *ctx) = 0;

  virtual void enterXuidStringId(MySQLParser::XuidStringIdContext *ctx) = 0;
  virtual void exitXuidStringId(MySQLParser::XuidStringIdContext *ctx) = 0;

  virtual void enterAuthPlugin(MySQLParser::AuthPluginContext *ctx) = 0;
  virtual void exitAuthPlugin(MySQLParser::AuthPluginContext *ctx) = 0;

  virtual void enterUid(MySQLParser::UidContext *ctx) = 0;
  virtual void exitUid(MySQLParser::UidContext *ctx) = 0;

  virtual void enterSimpleId(MySQLParser::SimpleIdContext *ctx) = 0;
  virtual void exitSimpleId(MySQLParser::SimpleIdContext *ctx) = 0;

  virtual void enterDecimalLiteral(MySQLParser::DecimalLiteralContext *ctx) = 0;
  virtual void exitDecimalLiteral(MySQLParser::DecimalLiteralContext *ctx) = 0;

  virtual void enterFileSizeLiteral(MySQLParser::FileSizeLiteralContext *ctx) = 0;
  virtual void exitFileSizeLiteral(MySQLParser::FileSizeLiteralContext *ctx) = 0;

  virtual void enterStringLiteral(MySQLParser::StringLiteralContext *ctx) = 0;
  virtual void exitStringLiteral(MySQLParser::StringLiteralContext *ctx) = 0;

  virtual void enterBooleanLiteral(MySQLParser::BooleanLiteralContext *ctx) = 0;
  virtual void exitBooleanLiteral(MySQLParser::BooleanLiteralContext *ctx) = 0;

  virtual void enterHexadecimalLiteral(MySQLParser::HexadecimalLiteralContext *ctx) = 0;
  virtual void exitHexadecimalLiteral(MySQLParser::HexadecimalLiteralContext *ctx) = 0;

  virtual void enterNullNotnull(MySQLParser::NullNotnullContext *ctx) = 0;
  virtual void exitNullNotnull(MySQLParser::NullNotnullContext *ctx) = 0;

  virtual void enterConstant(MySQLParser::ConstantContext *ctx) = 0;
  virtual void exitConstant(MySQLParser::ConstantContext *ctx) = 0;

  virtual void enterStringDataType(MySQLParser::StringDataTypeContext *ctx) = 0;
  virtual void exitStringDataType(MySQLParser::StringDataTypeContext *ctx) = 0;

  virtual void enterNationalStringDataType(MySQLParser::NationalStringDataTypeContext *ctx) = 0;
  virtual void exitNationalStringDataType(MySQLParser::NationalStringDataTypeContext *ctx) = 0;

  virtual void enterNationalVaryingStringDataType(MySQLParser::NationalVaryingStringDataTypeContext *ctx) = 0;
  virtual void exitNationalVaryingStringDataType(MySQLParser::NationalVaryingStringDataTypeContext *ctx) = 0;

  virtual void enterDimensionDataType(MySQLParser::DimensionDataTypeContext *ctx) = 0;
  virtual void exitDimensionDataType(MySQLParser::DimensionDataTypeContext *ctx) = 0;

  virtual void enterSimpleDataType(MySQLParser::SimpleDataTypeContext *ctx) = 0;
  virtual void exitSimpleDataType(MySQLParser::SimpleDataTypeContext *ctx) = 0;

  virtual void enterCollectionDataType(MySQLParser::CollectionDataTypeContext *ctx) = 0;
  virtual void exitCollectionDataType(MySQLParser::CollectionDataTypeContext *ctx) = 0;

  virtual void enterSpatialDataType(MySQLParser::SpatialDataTypeContext *ctx) = 0;
  virtual void exitSpatialDataType(MySQLParser::SpatialDataTypeContext *ctx) = 0;

  virtual void enterCollectionOptions(MySQLParser::CollectionOptionsContext *ctx) = 0;
  virtual void exitCollectionOptions(MySQLParser::CollectionOptionsContext *ctx) = 0;

  virtual void enterConvertedDataType(MySQLParser::ConvertedDataTypeContext *ctx) = 0;
  virtual void exitConvertedDataType(MySQLParser::ConvertedDataTypeContext *ctx) = 0;

  virtual void enterLengthOneDimension(MySQLParser::LengthOneDimensionContext *ctx) = 0;
  virtual void exitLengthOneDimension(MySQLParser::LengthOneDimensionContext *ctx) = 0;

  virtual void enterLengthTwoDimension(MySQLParser::LengthTwoDimensionContext *ctx) = 0;
  virtual void exitLengthTwoDimension(MySQLParser::LengthTwoDimensionContext *ctx) = 0;

  virtual void enterLengthTwoOptionalDimension(MySQLParser::LengthTwoOptionalDimensionContext *ctx) = 0;
  virtual void exitLengthTwoOptionalDimension(MySQLParser::LengthTwoOptionalDimensionContext *ctx) = 0;

  virtual void enterUidList(MySQLParser::UidListContext *ctx) = 0;
  virtual void exitUidList(MySQLParser::UidListContext *ctx) = 0;

  virtual void enterTables(MySQLParser::TablesContext *ctx) = 0;
  virtual void exitTables(MySQLParser::TablesContext *ctx) = 0;

  virtual void enterIndexColumnNames(MySQLParser::IndexColumnNamesContext *ctx) = 0;
  virtual void exitIndexColumnNames(MySQLParser::IndexColumnNamesContext *ctx) = 0;

  virtual void enterExpressions(MySQLParser::ExpressionsContext *ctx) = 0;
  virtual void exitExpressions(MySQLParser::ExpressionsContext *ctx) = 0;

  virtual void enterExpressionsWithDefaults(MySQLParser::ExpressionsWithDefaultsContext *ctx) = 0;
  virtual void exitExpressionsWithDefaults(MySQLParser::ExpressionsWithDefaultsContext *ctx) = 0;

  virtual void enterConstants(MySQLParser::ConstantsContext *ctx) = 0;
  virtual void exitConstants(MySQLParser::ConstantsContext *ctx) = 0;

  virtual void enterSimpleStrings(MySQLParser::SimpleStringsContext *ctx) = 0;
  virtual void exitSimpleStrings(MySQLParser::SimpleStringsContext *ctx) = 0;

  virtual void enterUserVariables(MySQLParser::UserVariablesContext *ctx) = 0;
  virtual void exitUserVariables(MySQLParser::UserVariablesContext *ctx) = 0;

  virtual void enterDefaultValue(MySQLParser::DefaultValueContext *ctx) = 0;
  virtual void exitDefaultValue(MySQLParser::DefaultValueContext *ctx) = 0;

  virtual void enterCurrentTimestamp(MySQLParser::CurrentTimestampContext *ctx) = 0;
  virtual void exitCurrentTimestamp(MySQLParser::CurrentTimestampContext *ctx) = 0;

  virtual void enterExpressionOrDefault(MySQLParser::ExpressionOrDefaultContext *ctx) = 0;
  virtual void exitExpressionOrDefault(MySQLParser::ExpressionOrDefaultContext *ctx) = 0;

  virtual void enterIfExists(MySQLParser::IfExistsContext *ctx) = 0;
  virtual void exitIfExists(MySQLParser::IfExistsContext *ctx) = 0;

  virtual void enterIfNotExists(MySQLParser::IfNotExistsContext *ctx) = 0;
  virtual void exitIfNotExists(MySQLParser::IfNotExistsContext *ctx) = 0;

  virtual void enterSpecificFunctionCall(MySQLParser::SpecificFunctionCallContext *ctx) = 0;
  virtual void exitSpecificFunctionCall(MySQLParser::SpecificFunctionCallContext *ctx) = 0;

  virtual void enterAggregateFunctionCall(MySQLParser::AggregateFunctionCallContext *ctx) = 0;
  virtual void exitAggregateFunctionCall(MySQLParser::AggregateFunctionCallContext *ctx) = 0;

  virtual void enterScalarFunctionCall(MySQLParser::ScalarFunctionCallContext *ctx) = 0;
  virtual void exitScalarFunctionCall(MySQLParser::ScalarFunctionCallContext *ctx) = 0;

  virtual void enterUdfFunctionCall(MySQLParser::UdfFunctionCallContext *ctx) = 0;
  virtual void exitUdfFunctionCall(MySQLParser::UdfFunctionCallContext *ctx) = 0;

  virtual void enterPasswordFunctionCall(MySQLParser::PasswordFunctionCallContext *ctx) = 0;
  virtual void exitPasswordFunctionCall(MySQLParser::PasswordFunctionCallContext *ctx) = 0;

  virtual void enterSimpleFunctionCall(MySQLParser::SimpleFunctionCallContext *ctx) = 0;
  virtual void exitSimpleFunctionCall(MySQLParser::SimpleFunctionCallContext *ctx) = 0;

  virtual void enterDataTypeFunctionCall(MySQLParser::DataTypeFunctionCallContext *ctx) = 0;
  virtual void exitDataTypeFunctionCall(MySQLParser::DataTypeFunctionCallContext *ctx) = 0;

  virtual void enterValuesFunctionCall(MySQLParser::ValuesFunctionCallContext *ctx) = 0;
  virtual void exitValuesFunctionCall(MySQLParser::ValuesFunctionCallContext *ctx) = 0;

  virtual void enterCaseFunctionCall(MySQLParser::CaseFunctionCallContext *ctx) = 0;
  virtual void exitCaseFunctionCall(MySQLParser::CaseFunctionCallContext *ctx) = 0;

  virtual void enterCharFunctionCall(MySQLParser::CharFunctionCallContext *ctx) = 0;
  virtual void exitCharFunctionCall(MySQLParser::CharFunctionCallContext *ctx) = 0;

  virtual void enterPositionFunctionCall(MySQLParser::PositionFunctionCallContext *ctx) = 0;
  virtual void exitPositionFunctionCall(MySQLParser::PositionFunctionCallContext *ctx) = 0;

  virtual void enterSubstrFunctionCall(MySQLParser::SubstrFunctionCallContext *ctx) = 0;
  virtual void exitSubstrFunctionCall(MySQLParser::SubstrFunctionCallContext *ctx) = 0;

  virtual void enterTrimFunctionCall(MySQLParser::TrimFunctionCallContext *ctx) = 0;
  virtual void exitTrimFunctionCall(MySQLParser::TrimFunctionCallContext *ctx) = 0;

  virtual void enterWeightFunctionCall(MySQLParser::WeightFunctionCallContext *ctx) = 0;
  virtual void exitWeightFunctionCall(MySQLParser::WeightFunctionCallContext *ctx) = 0;

  virtual void enterExtractFunctionCall(MySQLParser::ExtractFunctionCallContext *ctx) = 0;
  virtual void exitExtractFunctionCall(MySQLParser::ExtractFunctionCallContext *ctx) = 0;

  virtual void enterGetFormatFunctionCall(MySQLParser::GetFormatFunctionCallContext *ctx) = 0;
  virtual void exitGetFormatFunctionCall(MySQLParser::GetFormatFunctionCallContext *ctx) = 0;

  virtual void enterCaseFuncAlternative(MySQLParser::CaseFuncAlternativeContext *ctx) = 0;
  virtual void exitCaseFuncAlternative(MySQLParser::CaseFuncAlternativeContext *ctx) = 0;

  virtual void enterLevelWeightList(MySQLParser::LevelWeightListContext *ctx) = 0;
  virtual void exitLevelWeightList(MySQLParser::LevelWeightListContext *ctx) = 0;

  virtual void enterLevelWeightRange(MySQLParser::LevelWeightRangeContext *ctx) = 0;
  virtual void exitLevelWeightRange(MySQLParser::LevelWeightRangeContext *ctx) = 0;

  virtual void enterLevelInWeightListElement(MySQLParser::LevelInWeightListElementContext *ctx) = 0;
  virtual void exitLevelInWeightListElement(MySQLParser::LevelInWeightListElementContext *ctx) = 0;

  virtual void enterAggregateWindowedFunction(MySQLParser::AggregateWindowedFunctionContext *ctx) = 0;
  virtual void exitAggregateWindowedFunction(MySQLParser::AggregateWindowedFunctionContext *ctx) = 0;

  virtual void enterScalarFunctionName(MySQLParser::ScalarFunctionNameContext *ctx) = 0;
  virtual void exitScalarFunctionName(MySQLParser::ScalarFunctionNameContext *ctx) = 0;

  virtual void enterPasswordFunctionClause(MySQLParser::PasswordFunctionClauseContext *ctx) = 0;
  virtual void exitPasswordFunctionClause(MySQLParser::PasswordFunctionClauseContext *ctx) = 0;

  virtual void enterFunctionArgs(MySQLParser::FunctionArgsContext *ctx) = 0;
  virtual void exitFunctionArgs(MySQLParser::FunctionArgsContext *ctx) = 0;

  virtual void enterFunctionArg(MySQLParser::FunctionArgContext *ctx) = 0;
  virtual void exitFunctionArg(MySQLParser::FunctionArgContext *ctx) = 0;

  virtual void enterExpression(MySQLParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(MySQLParser::ExpressionContext *ctx) = 0;

  virtual void enterPredicate(MySQLParser::PredicateContext *ctx) = 0;
  virtual void exitPredicate(MySQLParser::PredicateContext *ctx) = 0;

  virtual void enterExpressionAtom(MySQLParser::ExpressionAtomContext *ctx) = 0;
  virtual void exitExpressionAtom(MySQLParser::ExpressionAtomContext *ctx) = 0;

  virtual void enterUnaryOperator(MySQLParser::UnaryOperatorContext *ctx) = 0;
  virtual void exitUnaryOperator(MySQLParser::UnaryOperatorContext *ctx) = 0;

  virtual void enterComparisonOperator(MySQLParser::ComparisonOperatorContext *ctx) = 0;
  virtual void exitComparisonOperator(MySQLParser::ComparisonOperatorContext *ctx) = 0;

  virtual void enterLogicalOperator(MySQLParser::LogicalOperatorContext *ctx) = 0;
  virtual void exitLogicalOperator(MySQLParser::LogicalOperatorContext *ctx) = 0;

  virtual void enterBitOperator(MySQLParser::BitOperatorContext *ctx) = 0;
  virtual void exitBitOperator(MySQLParser::BitOperatorContext *ctx) = 0;

  virtual void enterMathOperator(MySQLParser::MathOperatorContext *ctx) = 0;
  virtual void exitMathOperator(MySQLParser::MathOperatorContext *ctx) = 0;

  virtual void enterCharsetNameBase(MySQLParser::CharsetNameBaseContext *ctx) = 0;
  virtual void exitCharsetNameBase(MySQLParser::CharsetNameBaseContext *ctx) = 0;

  virtual void enterTransactionLevelBase(MySQLParser::TransactionLevelBaseContext *ctx) = 0;
  virtual void exitTransactionLevelBase(MySQLParser::TransactionLevelBaseContext *ctx) = 0;

  virtual void enterPrivilegesBase(MySQLParser::PrivilegesBaseContext *ctx) = 0;
  virtual void exitPrivilegesBase(MySQLParser::PrivilegesBaseContext *ctx) = 0;

  virtual void enterIntervalTypeBase(MySQLParser::IntervalTypeBaseContext *ctx) = 0;
  virtual void exitIntervalTypeBase(MySQLParser::IntervalTypeBaseContext *ctx) = 0;

  virtual void enterDataTypeBase(MySQLParser::DataTypeBaseContext *ctx) = 0;
  virtual void exitDataTypeBase(MySQLParser::DataTypeBaseContext *ctx) = 0;

  virtual void enterKeywordsCanBeId(MySQLParser::KeywordsCanBeIdContext *ctx) = 0;
  virtual void exitKeywordsCanBeId(MySQLParser::KeywordsCanBeIdContext *ctx) = 0;

  virtual void enterFunctionNameBase(MySQLParser::FunctionNameBaseContext *ctx) = 0;
  virtual void exitFunctionNameBase(MySQLParser::FunctionNameBaseContext *ctx) = 0;


};


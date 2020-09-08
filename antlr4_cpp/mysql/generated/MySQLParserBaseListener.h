
// Generated from MySQLParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "MySQLParserListener.h"


/**
 * This class provides an empty implementation of MySQLParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  MySQLParserBaseListener : public MySQLParserListener {
public:

  virtual void enterRoot(MySQLParser::RootContext * /*ctx*/) override { }
  virtual void exitRoot(MySQLParser::RootContext * /*ctx*/) override { }

  virtual void enterSqlStatements(MySQLParser::SqlStatementsContext * /*ctx*/) override { }
  virtual void exitSqlStatements(MySQLParser::SqlStatementsContext * /*ctx*/) override { }

  virtual void enterSqlStatement(MySQLParser::SqlStatementContext * /*ctx*/) override { }
  virtual void exitSqlStatement(MySQLParser::SqlStatementContext * /*ctx*/) override { }

  virtual void enterEmptyStatement(MySQLParser::EmptyStatementContext * /*ctx*/) override { }
  virtual void exitEmptyStatement(MySQLParser::EmptyStatementContext * /*ctx*/) override { }

  virtual void enterDdlStatement(MySQLParser::DdlStatementContext * /*ctx*/) override { }
  virtual void exitDdlStatement(MySQLParser::DdlStatementContext * /*ctx*/) override { }

  virtual void enterDmlStatement(MySQLParser::DmlStatementContext * /*ctx*/) override { }
  virtual void exitDmlStatement(MySQLParser::DmlStatementContext * /*ctx*/) override { }

  virtual void enterTransactionStatement(MySQLParser::TransactionStatementContext * /*ctx*/) override { }
  virtual void exitTransactionStatement(MySQLParser::TransactionStatementContext * /*ctx*/) override { }

  virtual void enterReplicationStatement(MySQLParser::ReplicationStatementContext * /*ctx*/) override { }
  virtual void exitReplicationStatement(MySQLParser::ReplicationStatementContext * /*ctx*/) override { }

  virtual void enterPreparedStatement(MySQLParser::PreparedStatementContext * /*ctx*/) override { }
  virtual void exitPreparedStatement(MySQLParser::PreparedStatementContext * /*ctx*/) override { }

  virtual void enterCompoundStatement(MySQLParser::CompoundStatementContext * /*ctx*/) override { }
  virtual void exitCompoundStatement(MySQLParser::CompoundStatementContext * /*ctx*/) override { }

  virtual void enterAdministrationStatement(MySQLParser::AdministrationStatementContext * /*ctx*/) override { }
  virtual void exitAdministrationStatement(MySQLParser::AdministrationStatementContext * /*ctx*/) override { }

  virtual void enterUtilityStatement(MySQLParser::UtilityStatementContext * /*ctx*/) override { }
  virtual void exitUtilityStatement(MySQLParser::UtilityStatementContext * /*ctx*/) override { }

  virtual void enterCreateDatabase(MySQLParser::CreateDatabaseContext * /*ctx*/) override { }
  virtual void exitCreateDatabase(MySQLParser::CreateDatabaseContext * /*ctx*/) override { }

  virtual void enterCreateEvent(MySQLParser::CreateEventContext * /*ctx*/) override { }
  virtual void exitCreateEvent(MySQLParser::CreateEventContext * /*ctx*/) override { }

  virtual void enterCreateIndex(MySQLParser::CreateIndexContext * /*ctx*/) override { }
  virtual void exitCreateIndex(MySQLParser::CreateIndexContext * /*ctx*/) override { }

  virtual void enterCreateLogfileGroup(MySQLParser::CreateLogfileGroupContext * /*ctx*/) override { }
  virtual void exitCreateLogfileGroup(MySQLParser::CreateLogfileGroupContext * /*ctx*/) override { }

  virtual void enterCreateProcedure(MySQLParser::CreateProcedureContext * /*ctx*/) override { }
  virtual void exitCreateProcedure(MySQLParser::CreateProcedureContext * /*ctx*/) override { }

  virtual void enterCreateFunction(MySQLParser::CreateFunctionContext * /*ctx*/) override { }
  virtual void exitCreateFunction(MySQLParser::CreateFunctionContext * /*ctx*/) override { }

  virtual void enterCreateServer(MySQLParser::CreateServerContext * /*ctx*/) override { }
  virtual void exitCreateServer(MySQLParser::CreateServerContext * /*ctx*/) override { }

  virtual void enterCopyCreateTable(MySQLParser::CopyCreateTableContext * /*ctx*/) override { }
  virtual void exitCopyCreateTable(MySQLParser::CopyCreateTableContext * /*ctx*/) override { }

  virtual void enterQueryCreateTable(MySQLParser::QueryCreateTableContext * /*ctx*/) override { }
  virtual void exitQueryCreateTable(MySQLParser::QueryCreateTableContext * /*ctx*/) override { }

  virtual void enterColumnCreateTable(MySQLParser::ColumnCreateTableContext * /*ctx*/) override { }
  virtual void exitColumnCreateTable(MySQLParser::ColumnCreateTableContext * /*ctx*/) override { }

  virtual void enterCreateTablespaceInnodb(MySQLParser::CreateTablespaceInnodbContext * /*ctx*/) override { }
  virtual void exitCreateTablespaceInnodb(MySQLParser::CreateTablespaceInnodbContext * /*ctx*/) override { }

  virtual void enterCreateTablespaceNdb(MySQLParser::CreateTablespaceNdbContext * /*ctx*/) override { }
  virtual void exitCreateTablespaceNdb(MySQLParser::CreateTablespaceNdbContext * /*ctx*/) override { }

  virtual void enterCreateTrigger(MySQLParser::CreateTriggerContext * /*ctx*/) override { }
  virtual void exitCreateTrigger(MySQLParser::CreateTriggerContext * /*ctx*/) override { }

  virtual void enterCreateView(MySQLParser::CreateViewContext * /*ctx*/) override { }
  virtual void exitCreateView(MySQLParser::CreateViewContext * /*ctx*/) override { }

  virtual void enterCreateDatabaseOption(MySQLParser::CreateDatabaseOptionContext * /*ctx*/) override { }
  virtual void exitCreateDatabaseOption(MySQLParser::CreateDatabaseOptionContext * /*ctx*/) override { }

  virtual void enterOwnerStatement(MySQLParser::OwnerStatementContext * /*ctx*/) override { }
  virtual void exitOwnerStatement(MySQLParser::OwnerStatementContext * /*ctx*/) override { }

  virtual void enterPreciseSchedule(MySQLParser::PreciseScheduleContext * /*ctx*/) override { }
  virtual void exitPreciseSchedule(MySQLParser::PreciseScheduleContext * /*ctx*/) override { }

  virtual void enterIntervalSchedule(MySQLParser::IntervalScheduleContext * /*ctx*/) override { }
  virtual void exitIntervalSchedule(MySQLParser::IntervalScheduleContext * /*ctx*/) override { }

  virtual void enterTimestampValue(MySQLParser::TimestampValueContext * /*ctx*/) override { }
  virtual void exitTimestampValue(MySQLParser::TimestampValueContext * /*ctx*/) override { }

  virtual void enterIntervalExpr(MySQLParser::IntervalExprContext * /*ctx*/) override { }
  virtual void exitIntervalExpr(MySQLParser::IntervalExprContext * /*ctx*/) override { }

  virtual void enterIntervalType(MySQLParser::IntervalTypeContext * /*ctx*/) override { }
  virtual void exitIntervalType(MySQLParser::IntervalTypeContext * /*ctx*/) override { }

  virtual void enterEnableType(MySQLParser::EnableTypeContext * /*ctx*/) override { }
  virtual void exitEnableType(MySQLParser::EnableTypeContext * /*ctx*/) override { }

  virtual void enterIndexType(MySQLParser::IndexTypeContext * /*ctx*/) override { }
  virtual void exitIndexType(MySQLParser::IndexTypeContext * /*ctx*/) override { }

  virtual void enterIndexOption(MySQLParser::IndexOptionContext * /*ctx*/) override { }
  virtual void exitIndexOption(MySQLParser::IndexOptionContext * /*ctx*/) override { }

  virtual void enterProcedureParameter(MySQLParser::ProcedureParameterContext * /*ctx*/) override { }
  virtual void exitProcedureParameter(MySQLParser::ProcedureParameterContext * /*ctx*/) override { }

  virtual void enterFunctionParameter(MySQLParser::FunctionParameterContext * /*ctx*/) override { }
  virtual void exitFunctionParameter(MySQLParser::FunctionParameterContext * /*ctx*/) override { }

  virtual void enterRoutineComment(MySQLParser::RoutineCommentContext * /*ctx*/) override { }
  virtual void exitRoutineComment(MySQLParser::RoutineCommentContext * /*ctx*/) override { }

  virtual void enterRoutineLanguage(MySQLParser::RoutineLanguageContext * /*ctx*/) override { }
  virtual void exitRoutineLanguage(MySQLParser::RoutineLanguageContext * /*ctx*/) override { }

  virtual void enterRoutineBehavior(MySQLParser::RoutineBehaviorContext * /*ctx*/) override { }
  virtual void exitRoutineBehavior(MySQLParser::RoutineBehaviorContext * /*ctx*/) override { }

  virtual void enterRoutineData(MySQLParser::RoutineDataContext * /*ctx*/) override { }
  virtual void exitRoutineData(MySQLParser::RoutineDataContext * /*ctx*/) override { }

  virtual void enterRoutineSecurity(MySQLParser::RoutineSecurityContext * /*ctx*/) override { }
  virtual void exitRoutineSecurity(MySQLParser::RoutineSecurityContext * /*ctx*/) override { }

  virtual void enterServerOption(MySQLParser::ServerOptionContext * /*ctx*/) override { }
  virtual void exitServerOption(MySQLParser::ServerOptionContext * /*ctx*/) override { }

  virtual void enterCreateDefinitions(MySQLParser::CreateDefinitionsContext * /*ctx*/) override { }
  virtual void exitCreateDefinitions(MySQLParser::CreateDefinitionsContext * /*ctx*/) override { }

  virtual void enterColumnDeclaration(MySQLParser::ColumnDeclarationContext * /*ctx*/) override { }
  virtual void exitColumnDeclaration(MySQLParser::ColumnDeclarationContext * /*ctx*/) override { }

  virtual void enterConstraintDeclaration(MySQLParser::ConstraintDeclarationContext * /*ctx*/) override { }
  virtual void exitConstraintDeclaration(MySQLParser::ConstraintDeclarationContext * /*ctx*/) override { }

  virtual void enterIndexDeclaration(MySQLParser::IndexDeclarationContext * /*ctx*/) override { }
  virtual void exitIndexDeclaration(MySQLParser::IndexDeclarationContext * /*ctx*/) override { }

  virtual void enterColumnDefinition(MySQLParser::ColumnDefinitionContext * /*ctx*/) override { }
  virtual void exitColumnDefinition(MySQLParser::ColumnDefinitionContext * /*ctx*/) override { }

  virtual void enterNullColumnConstraint(MySQLParser::NullColumnConstraintContext * /*ctx*/) override { }
  virtual void exitNullColumnConstraint(MySQLParser::NullColumnConstraintContext * /*ctx*/) override { }

  virtual void enterDefaultColumnConstraint(MySQLParser::DefaultColumnConstraintContext * /*ctx*/) override { }
  virtual void exitDefaultColumnConstraint(MySQLParser::DefaultColumnConstraintContext * /*ctx*/) override { }

  virtual void enterAutoIncrementColumnConstraint(MySQLParser::AutoIncrementColumnConstraintContext * /*ctx*/) override { }
  virtual void exitAutoIncrementColumnConstraint(MySQLParser::AutoIncrementColumnConstraintContext * /*ctx*/) override { }

  virtual void enterPrimaryKeyColumnConstraint(MySQLParser::PrimaryKeyColumnConstraintContext * /*ctx*/) override { }
  virtual void exitPrimaryKeyColumnConstraint(MySQLParser::PrimaryKeyColumnConstraintContext * /*ctx*/) override { }

  virtual void enterUniqueKeyColumnConstraint(MySQLParser::UniqueKeyColumnConstraintContext * /*ctx*/) override { }
  virtual void exitUniqueKeyColumnConstraint(MySQLParser::UniqueKeyColumnConstraintContext * /*ctx*/) override { }

  virtual void enterCommentColumnConstraint(MySQLParser::CommentColumnConstraintContext * /*ctx*/) override { }
  virtual void exitCommentColumnConstraint(MySQLParser::CommentColumnConstraintContext * /*ctx*/) override { }

  virtual void enterFormatColumnConstraint(MySQLParser::FormatColumnConstraintContext * /*ctx*/) override { }
  virtual void exitFormatColumnConstraint(MySQLParser::FormatColumnConstraintContext * /*ctx*/) override { }

  virtual void enterStorageColumnConstraint(MySQLParser::StorageColumnConstraintContext * /*ctx*/) override { }
  virtual void exitStorageColumnConstraint(MySQLParser::StorageColumnConstraintContext * /*ctx*/) override { }

  virtual void enterReferenceColumnConstraint(MySQLParser::ReferenceColumnConstraintContext * /*ctx*/) override { }
  virtual void exitReferenceColumnConstraint(MySQLParser::ReferenceColumnConstraintContext * /*ctx*/) override { }

  virtual void enterCollateColumnConstraint(MySQLParser::CollateColumnConstraintContext * /*ctx*/) override { }
  virtual void exitCollateColumnConstraint(MySQLParser::CollateColumnConstraintContext * /*ctx*/) override { }

  virtual void enterGeneratedColumnConstraint(MySQLParser::GeneratedColumnConstraintContext * /*ctx*/) override { }
  virtual void exitGeneratedColumnConstraint(MySQLParser::GeneratedColumnConstraintContext * /*ctx*/) override { }

  virtual void enterSerialDefaultColumnConstraint(MySQLParser::SerialDefaultColumnConstraintContext * /*ctx*/) override { }
  virtual void exitSerialDefaultColumnConstraint(MySQLParser::SerialDefaultColumnConstraintContext * /*ctx*/) override { }

  virtual void enterPrimaryKeyTableConstraint(MySQLParser::PrimaryKeyTableConstraintContext * /*ctx*/) override { }
  virtual void exitPrimaryKeyTableConstraint(MySQLParser::PrimaryKeyTableConstraintContext * /*ctx*/) override { }

  virtual void enterUniqueKeyTableConstraint(MySQLParser::UniqueKeyTableConstraintContext * /*ctx*/) override { }
  virtual void exitUniqueKeyTableConstraint(MySQLParser::UniqueKeyTableConstraintContext * /*ctx*/) override { }

  virtual void enterForeignKeyTableConstraint(MySQLParser::ForeignKeyTableConstraintContext * /*ctx*/) override { }
  virtual void exitForeignKeyTableConstraint(MySQLParser::ForeignKeyTableConstraintContext * /*ctx*/) override { }

  virtual void enterCheckTableConstraint(MySQLParser::CheckTableConstraintContext * /*ctx*/) override { }
  virtual void exitCheckTableConstraint(MySQLParser::CheckTableConstraintContext * /*ctx*/) override { }

  virtual void enterReferenceDefinition(MySQLParser::ReferenceDefinitionContext * /*ctx*/) override { }
  virtual void exitReferenceDefinition(MySQLParser::ReferenceDefinitionContext * /*ctx*/) override { }

  virtual void enterReferenceAction(MySQLParser::ReferenceActionContext * /*ctx*/) override { }
  virtual void exitReferenceAction(MySQLParser::ReferenceActionContext * /*ctx*/) override { }

  virtual void enterReferenceControlType(MySQLParser::ReferenceControlTypeContext * /*ctx*/) override { }
  virtual void exitReferenceControlType(MySQLParser::ReferenceControlTypeContext * /*ctx*/) override { }

  virtual void enterSimpleIndexDeclaration(MySQLParser::SimpleIndexDeclarationContext * /*ctx*/) override { }
  virtual void exitSimpleIndexDeclaration(MySQLParser::SimpleIndexDeclarationContext * /*ctx*/) override { }

  virtual void enterSpecialIndexDeclaration(MySQLParser::SpecialIndexDeclarationContext * /*ctx*/) override { }
  virtual void exitSpecialIndexDeclaration(MySQLParser::SpecialIndexDeclarationContext * /*ctx*/) override { }

  virtual void enterTableOptionEngine(MySQLParser::TableOptionEngineContext * /*ctx*/) override { }
  virtual void exitTableOptionEngine(MySQLParser::TableOptionEngineContext * /*ctx*/) override { }

  virtual void enterTableOptionAutoIncrement(MySQLParser::TableOptionAutoIncrementContext * /*ctx*/) override { }
  virtual void exitTableOptionAutoIncrement(MySQLParser::TableOptionAutoIncrementContext * /*ctx*/) override { }

  virtual void enterTableOptionAverage(MySQLParser::TableOptionAverageContext * /*ctx*/) override { }
  virtual void exitTableOptionAverage(MySQLParser::TableOptionAverageContext * /*ctx*/) override { }

  virtual void enterTableOptionCharset(MySQLParser::TableOptionCharsetContext * /*ctx*/) override { }
  virtual void exitTableOptionCharset(MySQLParser::TableOptionCharsetContext * /*ctx*/) override { }

  virtual void enterTableOptionChecksum(MySQLParser::TableOptionChecksumContext * /*ctx*/) override { }
  virtual void exitTableOptionChecksum(MySQLParser::TableOptionChecksumContext * /*ctx*/) override { }

  virtual void enterTableOptionCollate(MySQLParser::TableOptionCollateContext * /*ctx*/) override { }
  virtual void exitTableOptionCollate(MySQLParser::TableOptionCollateContext * /*ctx*/) override { }

  virtual void enterTableOptionComment(MySQLParser::TableOptionCommentContext * /*ctx*/) override { }
  virtual void exitTableOptionComment(MySQLParser::TableOptionCommentContext * /*ctx*/) override { }

  virtual void enterTableOptionCompression(MySQLParser::TableOptionCompressionContext * /*ctx*/) override { }
  virtual void exitTableOptionCompression(MySQLParser::TableOptionCompressionContext * /*ctx*/) override { }

  virtual void enterTableOptionConnection(MySQLParser::TableOptionConnectionContext * /*ctx*/) override { }
  virtual void exitTableOptionConnection(MySQLParser::TableOptionConnectionContext * /*ctx*/) override { }

  virtual void enterTableOptionDataDirectory(MySQLParser::TableOptionDataDirectoryContext * /*ctx*/) override { }
  virtual void exitTableOptionDataDirectory(MySQLParser::TableOptionDataDirectoryContext * /*ctx*/) override { }

  virtual void enterTableOptionDelay(MySQLParser::TableOptionDelayContext * /*ctx*/) override { }
  virtual void exitTableOptionDelay(MySQLParser::TableOptionDelayContext * /*ctx*/) override { }

  virtual void enterTableOptionEncryption(MySQLParser::TableOptionEncryptionContext * /*ctx*/) override { }
  virtual void exitTableOptionEncryption(MySQLParser::TableOptionEncryptionContext * /*ctx*/) override { }

  virtual void enterTableOptionIndexDirectory(MySQLParser::TableOptionIndexDirectoryContext * /*ctx*/) override { }
  virtual void exitTableOptionIndexDirectory(MySQLParser::TableOptionIndexDirectoryContext * /*ctx*/) override { }

  virtual void enterTableOptionInsertMethod(MySQLParser::TableOptionInsertMethodContext * /*ctx*/) override { }
  virtual void exitTableOptionInsertMethod(MySQLParser::TableOptionInsertMethodContext * /*ctx*/) override { }

  virtual void enterTableOptionKeyBlockSize(MySQLParser::TableOptionKeyBlockSizeContext * /*ctx*/) override { }
  virtual void exitTableOptionKeyBlockSize(MySQLParser::TableOptionKeyBlockSizeContext * /*ctx*/) override { }

  virtual void enterTableOptionMaxRows(MySQLParser::TableOptionMaxRowsContext * /*ctx*/) override { }
  virtual void exitTableOptionMaxRows(MySQLParser::TableOptionMaxRowsContext * /*ctx*/) override { }

  virtual void enterTableOptionMinRows(MySQLParser::TableOptionMinRowsContext * /*ctx*/) override { }
  virtual void exitTableOptionMinRows(MySQLParser::TableOptionMinRowsContext * /*ctx*/) override { }

  virtual void enterTableOptionPackKeys(MySQLParser::TableOptionPackKeysContext * /*ctx*/) override { }
  virtual void exitTableOptionPackKeys(MySQLParser::TableOptionPackKeysContext * /*ctx*/) override { }

  virtual void enterTableOptionPassword(MySQLParser::TableOptionPasswordContext * /*ctx*/) override { }
  virtual void exitTableOptionPassword(MySQLParser::TableOptionPasswordContext * /*ctx*/) override { }

  virtual void enterTableOptionRowFormat(MySQLParser::TableOptionRowFormatContext * /*ctx*/) override { }
  virtual void exitTableOptionRowFormat(MySQLParser::TableOptionRowFormatContext * /*ctx*/) override { }

  virtual void enterTableOptionRecalculation(MySQLParser::TableOptionRecalculationContext * /*ctx*/) override { }
  virtual void exitTableOptionRecalculation(MySQLParser::TableOptionRecalculationContext * /*ctx*/) override { }

  virtual void enterTableOptionPersistent(MySQLParser::TableOptionPersistentContext * /*ctx*/) override { }
  virtual void exitTableOptionPersistent(MySQLParser::TableOptionPersistentContext * /*ctx*/) override { }

  virtual void enterTableOptionSamplePage(MySQLParser::TableOptionSamplePageContext * /*ctx*/) override { }
  virtual void exitTableOptionSamplePage(MySQLParser::TableOptionSamplePageContext * /*ctx*/) override { }

  virtual void enterTableOptionTablespace(MySQLParser::TableOptionTablespaceContext * /*ctx*/) override { }
  virtual void exitTableOptionTablespace(MySQLParser::TableOptionTablespaceContext * /*ctx*/) override { }

  virtual void enterTableOptionUnion(MySQLParser::TableOptionUnionContext * /*ctx*/) override { }
  virtual void exitTableOptionUnion(MySQLParser::TableOptionUnionContext * /*ctx*/) override { }

  virtual void enterTablespaceStorage(MySQLParser::TablespaceStorageContext * /*ctx*/) override { }
  virtual void exitTablespaceStorage(MySQLParser::TablespaceStorageContext * /*ctx*/) override { }

  virtual void enterPartitionDefinitions(MySQLParser::PartitionDefinitionsContext * /*ctx*/) override { }
  virtual void exitPartitionDefinitions(MySQLParser::PartitionDefinitionsContext * /*ctx*/) override { }

  virtual void enterPartitionFunctionHash(MySQLParser::PartitionFunctionHashContext * /*ctx*/) override { }
  virtual void exitPartitionFunctionHash(MySQLParser::PartitionFunctionHashContext * /*ctx*/) override { }

  virtual void enterPartitionFunctionKey(MySQLParser::PartitionFunctionKeyContext * /*ctx*/) override { }
  virtual void exitPartitionFunctionKey(MySQLParser::PartitionFunctionKeyContext * /*ctx*/) override { }

  virtual void enterPartitionFunctionRange(MySQLParser::PartitionFunctionRangeContext * /*ctx*/) override { }
  virtual void exitPartitionFunctionRange(MySQLParser::PartitionFunctionRangeContext * /*ctx*/) override { }

  virtual void enterPartitionFunctionList(MySQLParser::PartitionFunctionListContext * /*ctx*/) override { }
  virtual void exitPartitionFunctionList(MySQLParser::PartitionFunctionListContext * /*ctx*/) override { }

  virtual void enterSubPartitionFunctionHash(MySQLParser::SubPartitionFunctionHashContext * /*ctx*/) override { }
  virtual void exitSubPartitionFunctionHash(MySQLParser::SubPartitionFunctionHashContext * /*ctx*/) override { }

  virtual void enterSubPartitionFunctionKey(MySQLParser::SubPartitionFunctionKeyContext * /*ctx*/) override { }
  virtual void exitSubPartitionFunctionKey(MySQLParser::SubPartitionFunctionKeyContext * /*ctx*/) override { }

  virtual void enterPartitionComparision(MySQLParser::PartitionComparisionContext * /*ctx*/) override { }
  virtual void exitPartitionComparision(MySQLParser::PartitionComparisionContext * /*ctx*/) override { }

  virtual void enterPartitionListAtom(MySQLParser::PartitionListAtomContext * /*ctx*/) override { }
  virtual void exitPartitionListAtom(MySQLParser::PartitionListAtomContext * /*ctx*/) override { }

  virtual void enterPartitionListVector(MySQLParser::PartitionListVectorContext * /*ctx*/) override { }
  virtual void exitPartitionListVector(MySQLParser::PartitionListVectorContext * /*ctx*/) override { }

  virtual void enterPartitionSimple(MySQLParser::PartitionSimpleContext * /*ctx*/) override { }
  virtual void exitPartitionSimple(MySQLParser::PartitionSimpleContext * /*ctx*/) override { }

  virtual void enterPartitionDefinerAtom(MySQLParser::PartitionDefinerAtomContext * /*ctx*/) override { }
  virtual void exitPartitionDefinerAtom(MySQLParser::PartitionDefinerAtomContext * /*ctx*/) override { }

  virtual void enterPartitionDefinerVector(MySQLParser::PartitionDefinerVectorContext * /*ctx*/) override { }
  virtual void exitPartitionDefinerVector(MySQLParser::PartitionDefinerVectorContext * /*ctx*/) override { }

  virtual void enterSubpartitionDefinition(MySQLParser::SubpartitionDefinitionContext * /*ctx*/) override { }
  virtual void exitSubpartitionDefinition(MySQLParser::SubpartitionDefinitionContext * /*ctx*/) override { }

  virtual void enterPartitionOptionEngine(MySQLParser::PartitionOptionEngineContext * /*ctx*/) override { }
  virtual void exitPartitionOptionEngine(MySQLParser::PartitionOptionEngineContext * /*ctx*/) override { }

  virtual void enterPartitionOptionComment(MySQLParser::PartitionOptionCommentContext * /*ctx*/) override { }
  virtual void exitPartitionOptionComment(MySQLParser::PartitionOptionCommentContext * /*ctx*/) override { }

  virtual void enterPartitionOptionDataDirectory(MySQLParser::PartitionOptionDataDirectoryContext * /*ctx*/) override { }
  virtual void exitPartitionOptionDataDirectory(MySQLParser::PartitionOptionDataDirectoryContext * /*ctx*/) override { }

  virtual void enterPartitionOptionIndexDirectory(MySQLParser::PartitionOptionIndexDirectoryContext * /*ctx*/) override { }
  virtual void exitPartitionOptionIndexDirectory(MySQLParser::PartitionOptionIndexDirectoryContext * /*ctx*/) override { }

  virtual void enterPartitionOptionMaxRows(MySQLParser::PartitionOptionMaxRowsContext * /*ctx*/) override { }
  virtual void exitPartitionOptionMaxRows(MySQLParser::PartitionOptionMaxRowsContext * /*ctx*/) override { }

  virtual void enterPartitionOptionMinRows(MySQLParser::PartitionOptionMinRowsContext * /*ctx*/) override { }
  virtual void exitPartitionOptionMinRows(MySQLParser::PartitionOptionMinRowsContext * /*ctx*/) override { }

  virtual void enterPartitionOptionTablespace(MySQLParser::PartitionOptionTablespaceContext * /*ctx*/) override { }
  virtual void exitPartitionOptionTablespace(MySQLParser::PartitionOptionTablespaceContext * /*ctx*/) override { }

  virtual void enterPartitionOptionNodeGroup(MySQLParser::PartitionOptionNodeGroupContext * /*ctx*/) override { }
  virtual void exitPartitionOptionNodeGroup(MySQLParser::PartitionOptionNodeGroupContext * /*ctx*/) override { }

  virtual void enterAlterSimpleDatabase(MySQLParser::AlterSimpleDatabaseContext * /*ctx*/) override { }
  virtual void exitAlterSimpleDatabase(MySQLParser::AlterSimpleDatabaseContext * /*ctx*/) override { }

  virtual void enterAlterUpgradeName(MySQLParser::AlterUpgradeNameContext * /*ctx*/) override { }
  virtual void exitAlterUpgradeName(MySQLParser::AlterUpgradeNameContext * /*ctx*/) override { }

  virtual void enterAlterEvent(MySQLParser::AlterEventContext * /*ctx*/) override { }
  virtual void exitAlterEvent(MySQLParser::AlterEventContext * /*ctx*/) override { }

  virtual void enterAlterFunction(MySQLParser::AlterFunctionContext * /*ctx*/) override { }
  virtual void exitAlterFunction(MySQLParser::AlterFunctionContext * /*ctx*/) override { }

  virtual void enterAlterInstance(MySQLParser::AlterInstanceContext * /*ctx*/) override { }
  virtual void exitAlterInstance(MySQLParser::AlterInstanceContext * /*ctx*/) override { }

  virtual void enterAlterLogfileGroup(MySQLParser::AlterLogfileGroupContext * /*ctx*/) override { }
  virtual void exitAlterLogfileGroup(MySQLParser::AlterLogfileGroupContext * /*ctx*/) override { }

  virtual void enterAlterProcedure(MySQLParser::AlterProcedureContext * /*ctx*/) override { }
  virtual void exitAlterProcedure(MySQLParser::AlterProcedureContext * /*ctx*/) override { }

  virtual void enterAlterServer(MySQLParser::AlterServerContext * /*ctx*/) override { }
  virtual void exitAlterServer(MySQLParser::AlterServerContext * /*ctx*/) override { }

  virtual void enterAlterTable(MySQLParser::AlterTableContext * /*ctx*/) override { }
  virtual void exitAlterTable(MySQLParser::AlterTableContext * /*ctx*/) override { }

  virtual void enterAlterTablespace(MySQLParser::AlterTablespaceContext * /*ctx*/) override { }
  virtual void exitAlterTablespace(MySQLParser::AlterTablespaceContext * /*ctx*/) override { }

  virtual void enterAlterView(MySQLParser::AlterViewContext * /*ctx*/) override { }
  virtual void exitAlterView(MySQLParser::AlterViewContext * /*ctx*/) override { }

  virtual void enterAlterByTableOption(MySQLParser::AlterByTableOptionContext * /*ctx*/) override { }
  virtual void exitAlterByTableOption(MySQLParser::AlterByTableOptionContext * /*ctx*/) override { }

  virtual void enterAlterByAddColumn(MySQLParser::AlterByAddColumnContext * /*ctx*/) override { }
  virtual void exitAlterByAddColumn(MySQLParser::AlterByAddColumnContext * /*ctx*/) override { }

  virtual void enterAlterByAddColumns(MySQLParser::AlterByAddColumnsContext * /*ctx*/) override { }
  virtual void exitAlterByAddColumns(MySQLParser::AlterByAddColumnsContext * /*ctx*/) override { }

  virtual void enterAlterByAddIndex(MySQLParser::AlterByAddIndexContext * /*ctx*/) override { }
  virtual void exitAlterByAddIndex(MySQLParser::AlterByAddIndexContext * /*ctx*/) override { }

  virtual void enterAlterByAddPrimaryKey(MySQLParser::AlterByAddPrimaryKeyContext * /*ctx*/) override { }
  virtual void exitAlterByAddPrimaryKey(MySQLParser::AlterByAddPrimaryKeyContext * /*ctx*/) override { }

  virtual void enterAlterByAddUniqueKey(MySQLParser::AlterByAddUniqueKeyContext * /*ctx*/) override { }
  virtual void exitAlterByAddUniqueKey(MySQLParser::AlterByAddUniqueKeyContext * /*ctx*/) override { }

  virtual void enterAlterByAddSpecialIndex(MySQLParser::AlterByAddSpecialIndexContext * /*ctx*/) override { }
  virtual void exitAlterByAddSpecialIndex(MySQLParser::AlterByAddSpecialIndexContext * /*ctx*/) override { }

  virtual void enterAlterByAddForeignKey(MySQLParser::AlterByAddForeignKeyContext * /*ctx*/) override { }
  virtual void exitAlterByAddForeignKey(MySQLParser::AlterByAddForeignKeyContext * /*ctx*/) override { }

  virtual void enterAlterByAddCheckTableConstraint(MySQLParser::AlterByAddCheckTableConstraintContext * /*ctx*/) override { }
  virtual void exitAlterByAddCheckTableConstraint(MySQLParser::AlterByAddCheckTableConstraintContext * /*ctx*/) override { }

  virtual void enterAlterBySetAlgorithm(MySQLParser::AlterBySetAlgorithmContext * /*ctx*/) override { }
  virtual void exitAlterBySetAlgorithm(MySQLParser::AlterBySetAlgorithmContext * /*ctx*/) override { }

  virtual void enterAlterByChangeDefault(MySQLParser::AlterByChangeDefaultContext * /*ctx*/) override { }
  virtual void exitAlterByChangeDefault(MySQLParser::AlterByChangeDefaultContext * /*ctx*/) override { }

  virtual void enterAlterByChangeColumn(MySQLParser::AlterByChangeColumnContext * /*ctx*/) override { }
  virtual void exitAlterByChangeColumn(MySQLParser::AlterByChangeColumnContext * /*ctx*/) override { }

  virtual void enterAlterByRenameColumn(MySQLParser::AlterByRenameColumnContext * /*ctx*/) override { }
  virtual void exitAlterByRenameColumn(MySQLParser::AlterByRenameColumnContext * /*ctx*/) override { }

  virtual void enterAlterByLock(MySQLParser::AlterByLockContext * /*ctx*/) override { }
  virtual void exitAlterByLock(MySQLParser::AlterByLockContext * /*ctx*/) override { }

  virtual void enterAlterByModifyColumn(MySQLParser::AlterByModifyColumnContext * /*ctx*/) override { }
  virtual void exitAlterByModifyColumn(MySQLParser::AlterByModifyColumnContext * /*ctx*/) override { }

  virtual void enterAlterByDropColumn(MySQLParser::AlterByDropColumnContext * /*ctx*/) override { }
  virtual void exitAlterByDropColumn(MySQLParser::AlterByDropColumnContext * /*ctx*/) override { }

  virtual void enterAlterByDropPrimaryKey(MySQLParser::AlterByDropPrimaryKeyContext * /*ctx*/) override { }
  virtual void exitAlterByDropPrimaryKey(MySQLParser::AlterByDropPrimaryKeyContext * /*ctx*/) override { }

  virtual void enterAlterByRenameIndex(MySQLParser::AlterByRenameIndexContext * /*ctx*/) override { }
  virtual void exitAlterByRenameIndex(MySQLParser::AlterByRenameIndexContext * /*ctx*/) override { }

  virtual void enterAlterByDropIndex(MySQLParser::AlterByDropIndexContext * /*ctx*/) override { }
  virtual void exitAlterByDropIndex(MySQLParser::AlterByDropIndexContext * /*ctx*/) override { }

  virtual void enterAlterByDropForeignKey(MySQLParser::AlterByDropForeignKeyContext * /*ctx*/) override { }
  virtual void exitAlterByDropForeignKey(MySQLParser::AlterByDropForeignKeyContext * /*ctx*/) override { }

  virtual void enterAlterByDisableKeys(MySQLParser::AlterByDisableKeysContext * /*ctx*/) override { }
  virtual void exitAlterByDisableKeys(MySQLParser::AlterByDisableKeysContext * /*ctx*/) override { }

  virtual void enterAlterByEnableKeys(MySQLParser::AlterByEnableKeysContext * /*ctx*/) override { }
  virtual void exitAlterByEnableKeys(MySQLParser::AlterByEnableKeysContext * /*ctx*/) override { }

  virtual void enterAlterByRename(MySQLParser::AlterByRenameContext * /*ctx*/) override { }
  virtual void exitAlterByRename(MySQLParser::AlterByRenameContext * /*ctx*/) override { }

  virtual void enterAlterByOrder(MySQLParser::AlterByOrderContext * /*ctx*/) override { }
  virtual void exitAlterByOrder(MySQLParser::AlterByOrderContext * /*ctx*/) override { }

  virtual void enterAlterByConvertCharset(MySQLParser::AlterByConvertCharsetContext * /*ctx*/) override { }
  virtual void exitAlterByConvertCharset(MySQLParser::AlterByConvertCharsetContext * /*ctx*/) override { }

  virtual void enterAlterByDefaultCharset(MySQLParser::AlterByDefaultCharsetContext * /*ctx*/) override { }
  virtual void exitAlterByDefaultCharset(MySQLParser::AlterByDefaultCharsetContext * /*ctx*/) override { }

  virtual void enterAlterByDiscardTablespace(MySQLParser::AlterByDiscardTablespaceContext * /*ctx*/) override { }
  virtual void exitAlterByDiscardTablespace(MySQLParser::AlterByDiscardTablespaceContext * /*ctx*/) override { }

  virtual void enterAlterByImportTablespace(MySQLParser::AlterByImportTablespaceContext * /*ctx*/) override { }
  virtual void exitAlterByImportTablespace(MySQLParser::AlterByImportTablespaceContext * /*ctx*/) override { }

  virtual void enterAlterByForce(MySQLParser::AlterByForceContext * /*ctx*/) override { }
  virtual void exitAlterByForce(MySQLParser::AlterByForceContext * /*ctx*/) override { }

  virtual void enterAlterByValidate(MySQLParser::AlterByValidateContext * /*ctx*/) override { }
  virtual void exitAlterByValidate(MySQLParser::AlterByValidateContext * /*ctx*/) override { }

  virtual void enterAlterByAddPartition(MySQLParser::AlterByAddPartitionContext * /*ctx*/) override { }
  virtual void exitAlterByAddPartition(MySQLParser::AlterByAddPartitionContext * /*ctx*/) override { }

  virtual void enterAlterByDropPartition(MySQLParser::AlterByDropPartitionContext * /*ctx*/) override { }
  virtual void exitAlterByDropPartition(MySQLParser::AlterByDropPartitionContext * /*ctx*/) override { }

  virtual void enterAlterByDiscardPartition(MySQLParser::AlterByDiscardPartitionContext * /*ctx*/) override { }
  virtual void exitAlterByDiscardPartition(MySQLParser::AlterByDiscardPartitionContext * /*ctx*/) override { }

  virtual void enterAlterByImportPartition(MySQLParser::AlterByImportPartitionContext * /*ctx*/) override { }
  virtual void exitAlterByImportPartition(MySQLParser::AlterByImportPartitionContext * /*ctx*/) override { }

  virtual void enterAlterByTruncatePartition(MySQLParser::AlterByTruncatePartitionContext * /*ctx*/) override { }
  virtual void exitAlterByTruncatePartition(MySQLParser::AlterByTruncatePartitionContext * /*ctx*/) override { }

  virtual void enterAlterByCoalescePartition(MySQLParser::AlterByCoalescePartitionContext * /*ctx*/) override { }
  virtual void exitAlterByCoalescePartition(MySQLParser::AlterByCoalescePartitionContext * /*ctx*/) override { }

  virtual void enterAlterByReorganizePartition(MySQLParser::AlterByReorganizePartitionContext * /*ctx*/) override { }
  virtual void exitAlterByReorganizePartition(MySQLParser::AlterByReorganizePartitionContext * /*ctx*/) override { }

  virtual void enterAlterByExchangePartition(MySQLParser::AlterByExchangePartitionContext * /*ctx*/) override { }
  virtual void exitAlterByExchangePartition(MySQLParser::AlterByExchangePartitionContext * /*ctx*/) override { }

  virtual void enterAlterByAnalyzePartition(MySQLParser::AlterByAnalyzePartitionContext * /*ctx*/) override { }
  virtual void exitAlterByAnalyzePartition(MySQLParser::AlterByAnalyzePartitionContext * /*ctx*/) override { }

  virtual void enterAlterByCheckPartition(MySQLParser::AlterByCheckPartitionContext * /*ctx*/) override { }
  virtual void exitAlterByCheckPartition(MySQLParser::AlterByCheckPartitionContext * /*ctx*/) override { }

  virtual void enterAlterByOptimizePartition(MySQLParser::AlterByOptimizePartitionContext * /*ctx*/) override { }
  virtual void exitAlterByOptimizePartition(MySQLParser::AlterByOptimizePartitionContext * /*ctx*/) override { }

  virtual void enterAlterByRebuildPartition(MySQLParser::AlterByRebuildPartitionContext * /*ctx*/) override { }
  virtual void exitAlterByRebuildPartition(MySQLParser::AlterByRebuildPartitionContext * /*ctx*/) override { }

  virtual void enterAlterByRepairPartition(MySQLParser::AlterByRepairPartitionContext * /*ctx*/) override { }
  virtual void exitAlterByRepairPartition(MySQLParser::AlterByRepairPartitionContext * /*ctx*/) override { }

  virtual void enterAlterByRemovePartitioning(MySQLParser::AlterByRemovePartitioningContext * /*ctx*/) override { }
  virtual void exitAlterByRemovePartitioning(MySQLParser::AlterByRemovePartitioningContext * /*ctx*/) override { }

  virtual void enterAlterByUpgradePartitioning(MySQLParser::AlterByUpgradePartitioningContext * /*ctx*/) override { }
  virtual void exitAlterByUpgradePartitioning(MySQLParser::AlterByUpgradePartitioningContext * /*ctx*/) override { }

  virtual void enterDropDatabase(MySQLParser::DropDatabaseContext * /*ctx*/) override { }
  virtual void exitDropDatabase(MySQLParser::DropDatabaseContext * /*ctx*/) override { }

  virtual void enterDropEvent(MySQLParser::DropEventContext * /*ctx*/) override { }
  virtual void exitDropEvent(MySQLParser::DropEventContext * /*ctx*/) override { }

  virtual void enterDropIndex(MySQLParser::DropIndexContext * /*ctx*/) override { }
  virtual void exitDropIndex(MySQLParser::DropIndexContext * /*ctx*/) override { }

  virtual void enterDropLogfileGroup(MySQLParser::DropLogfileGroupContext * /*ctx*/) override { }
  virtual void exitDropLogfileGroup(MySQLParser::DropLogfileGroupContext * /*ctx*/) override { }

  virtual void enterDropProcedure(MySQLParser::DropProcedureContext * /*ctx*/) override { }
  virtual void exitDropProcedure(MySQLParser::DropProcedureContext * /*ctx*/) override { }

  virtual void enterDropFunction(MySQLParser::DropFunctionContext * /*ctx*/) override { }
  virtual void exitDropFunction(MySQLParser::DropFunctionContext * /*ctx*/) override { }

  virtual void enterDropServer(MySQLParser::DropServerContext * /*ctx*/) override { }
  virtual void exitDropServer(MySQLParser::DropServerContext * /*ctx*/) override { }

  virtual void enterDropTable(MySQLParser::DropTableContext * /*ctx*/) override { }
  virtual void exitDropTable(MySQLParser::DropTableContext * /*ctx*/) override { }

  virtual void enterDropTablespace(MySQLParser::DropTablespaceContext * /*ctx*/) override { }
  virtual void exitDropTablespace(MySQLParser::DropTablespaceContext * /*ctx*/) override { }

  virtual void enterDropTrigger(MySQLParser::DropTriggerContext * /*ctx*/) override { }
  virtual void exitDropTrigger(MySQLParser::DropTriggerContext * /*ctx*/) override { }

  virtual void enterDropView(MySQLParser::DropViewContext * /*ctx*/) override { }
  virtual void exitDropView(MySQLParser::DropViewContext * /*ctx*/) override { }

  virtual void enterRenameTable(MySQLParser::RenameTableContext * /*ctx*/) override { }
  virtual void exitRenameTable(MySQLParser::RenameTableContext * /*ctx*/) override { }

  virtual void enterRenameTableClause(MySQLParser::RenameTableClauseContext * /*ctx*/) override { }
  virtual void exitRenameTableClause(MySQLParser::RenameTableClauseContext * /*ctx*/) override { }

  virtual void enterTruncateTable(MySQLParser::TruncateTableContext * /*ctx*/) override { }
  virtual void exitTruncateTable(MySQLParser::TruncateTableContext * /*ctx*/) override { }

  virtual void enterCallStatement(MySQLParser::CallStatementContext * /*ctx*/) override { }
  virtual void exitCallStatement(MySQLParser::CallStatementContext * /*ctx*/) override { }

  virtual void enterDeleteStatement(MySQLParser::DeleteStatementContext * /*ctx*/) override { }
  virtual void exitDeleteStatement(MySQLParser::DeleteStatementContext * /*ctx*/) override { }

  virtual void enterDoStatement(MySQLParser::DoStatementContext * /*ctx*/) override { }
  virtual void exitDoStatement(MySQLParser::DoStatementContext * /*ctx*/) override { }

  virtual void enterHandlerStatement(MySQLParser::HandlerStatementContext * /*ctx*/) override { }
  virtual void exitHandlerStatement(MySQLParser::HandlerStatementContext * /*ctx*/) override { }

  virtual void enterInsertStatement(MySQLParser::InsertStatementContext * /*ctx*/) override { }
  virtual void exitInsertStatement(MySQLParser::InsertStatementContext * /*ctx*/) override { }

  virtual void enterLoadDataStatement(MySQLParser::LoadDataStatementContext * /*ctx*/) override { }
  virtual void exitLoadDataStatement(MySQLParser::LoadDataStatementContext * /*ctx*/) override { }

  virtual void enterLoadXmlStatement(MySQLParser::LoadXmlStatementContext * /*ctx*/) override { }
  virtual void exitLoadXmlStatement(MySQLParser::LoadXmlStatementContext * /*ctx*/) override { }

  virtual void enterReplaceStatement(MySQLParser::ReplaceStatementContext * /*ctx*/) override { }
  virtual void exitReplaceStatement(MySQLParser::ReplaceStatementContext * /*ctx*/) override { }

  virtual void enterSimpleSelect(MySQLParser::SimpleSelectContext * /*ctx*/) override { }
  virtual void exitSimpleSelect(MySQLParser::SimpleSelectContext * /*ctx*/) override { }

  virtual void enterParenthesisSelect(MySQLParser::ParenthesisSelectContext * /*ctx*/) override { }
  virtual void exitParenthesisSelect(MySQLParser::ParenthesisSelectContext * /*ctx*/) override { }

  virtual void enterUnionSelect(MySQLParser::UnionSelectContext * /*ctx*/) override { }
  virtual void exitUnionSelect(MySQLParser::UnionSelectContext * /*ctx*/) override { }

  virtual void enterUnionParenthesisSelect(MySQLParser::UnionParenthesisSelectContext * /*ctx*/) override { }
  virtual void exitUnionParenthesisSelect(MySQLParser::UnionParenthesisSelectContext * /*ctx*/) override { }

  virtual void enterUpdateStatement(MySQLParser::UpdateStatementContext * /*ctx*/) override { }
  virtual void exitUpdateStatement(MySQLParser::UpdateStatementContext * /*ctx*/) override { }

  virtual void enterInsertStatementValue(MySQLParser::InsertStatementValueContext * /*ctx*/) override { }
  virtual void exitInsertStatementValue(MySQLParser::InsertStatementValueContext * /*ctx*/) override { }

  virtual void enterUpdatedElement(MySQLParser::UpdatedElementContext * /*ctx*/) override { }
  virtual void exitUpdatedElement(MySQLParser::UpdatedElementContext * /*ctx*/) override { }

  virtual void enterAssignmentField(MySQLParser::AssignmentFieldContext * /*ctx*/) override { }
  virtual void exitAssignmentField(MySQLParser::AssignmentFieldContext * /*ctx*/) override { }

  virtual void enterLockClause(MySQLParser::LockClauseContext * /*ctx*/) override { }
  virtual void exitLockClause(MySQLParser::LockClauseContext * /*ctx*/) override { }

  virtual void enterSingleDeleteStatement(MySQLParser::SingleDeleteStatementContext * /*ctx*/) override { }
  virtual void exitSingleDeleteStatement(MySQLParser::SingleDeleteStatementContext * /*ctx*/) override { }

  virtual void enterMultipleDeleteStatement(MySQLParser::MultipleDeleteStatementContext * /*ctx*/) override { }
  virtual void exitMultipleDeleteStatement(MySQLParser::MultipleDeleteStatementContext * /*ctx*/) override { }

  virtual void enterDelete_stmt_table(MySQLParser::Delete_stmt_tableContext * /*ctx*/) override { }
  virtual void exitDelete_stmt_table(MySQLParser::Delete_stmt_tableContext * /*ctx*/) override { }

  virtual void enterHandlerOpenStatement(MySQLParser::HandlerOpenStatementContext * /*ctx*/) override { }
  virtual void exitHandlerOpenStatement(MySQLParser::HandlerOpenStatementContext * /*ctx*/) override { }

  virtual void enterHandlerReadIndexStatement(MySQLParser::HandlerReadIndexStatementContext * /*ctx*/) override { }
  virtual void exitHandlerReadIndexStatement(MySQLParser::HandlerReadIndexStatementContext * /*ctx*/) override { }

  virtual void enterHandlerReadStatement(MySQLParser::HandlerReadStatementContext * /*ctx*/) override { }
  virtual void exitHandlerReadStatement(MySQLParser::HandlerReadStatementContext * /*ctx*/) override { }

  virtual void enterHandlerCloseStatement(MySQLParser::HandlerCloseStatementContext * /*ctx*/) override { }
  virtual void exitHandlerCloseStatement(MySQLParser::HandlerCloseStatementContext * /*ctx*/) override { }

  virtual void enterSingleUpdateStatement(MySQLParser::SingleUpdateStatementContext * /*ctx*/) override { }
  virtual void exitSingleUpdateStatement(MySQLParser::SingleUpdateStatementContext * /*ctx*/) override { }

  virtual void enterMultipleUpdateStatement(MySQLParser::MultipleUpdateStatementContext * /*ctx*/) override { }
  virtual void exitMultipleUpdateStatement(MySQLParser::MultipleUpdateStatementContext * /*ctx*/) override { }

  virtual void enterOrderByClause(MySQLParser::OrderByClauseContext * /*ctx*/) override { }
  virtual void exitOrderByClause(MySQLParser::OrderByClauseContext * /*ctx*/) override { }

  virtual void enterOrderByExpression(MySQLParser::OrderByExpressionContext * /*ctx*/) override { }
  virtual void exitOrderByExpression(MySQLParser::OrderByExpressionContext * /*ctx*/) override { }

  virtual void enterTableSources(MySQLParser::TableSourcesContext * /*ctx*/) override { }
  virtual void exitTableSources(MySQLParser::TableSourcesContext * /*ctx*/) override { }

  virtual void enterTableSourceBase(MySQLParser::TableSourceBaseContext * /*ctx*/) override { }
  virtual void exitTableSourceBase(MySQLParser::TableSourceBaseContext * /*ctx*/) override { }

  virtual void enterTableSourceNested(MySQLParser::TableSourceNestedContext * /*ctx*/) override { }
  virtual void exitTableSourceNested(MySQLParser::TableSourceNestedContext * /*ctx*/) override { }

  virtual void enterAtomTableItem(MySQLParser::AtomTableItemContext * /*ctx*/) override { }
  virtual void exitAtomTableItem(MySQLParser::AtomTableItemContext * /*ctx*/) override { }

  virtual void enterSubqueryTableItem(MySQLParser::SubqueryTableItemContext * /*ctx*/) override { }
  virtual void exitSubqueryTableItem(MySQLParser::SubqueryTableItemContext * /*ctx*/) override { }

  virtual void enterTableSourcesItem(MySQLParser::TableSourcesItemContext * /*ctx*/) override { }
  virtual void exitTableSourcesItem(MySQLParser::TableSourcesItemContext * /*ctx*/) override { }

  virtual void enterIndexHint(MySQLParser::IndexHintContext * /*ctx*/) override { }
  virtual void exitIndexHint(MySQLParser::IndexHintContext * /*ctx*/) override { }

  virtual void enterIndexHintType(MySQLParser::IndexHintTypeContext * /*ctx*/) override { }
  virtual void exitIndexHintType(MySQLParser::IndexHintTypeContext * /*ctx*/) override { }

  virtual void enterInnerJoin(MySQLParser::InnerJoinContext * /*ctx*/) override { }
  virtual void exitInnerJoin(MySQLParser::InnerJoinContext * /*ctx*/) override { }

  virtual void enterStraightJoin(MySQLParser::StraightJoinContext * /*ctx*/) override { }
  virtual void exitStraightJoin(MySQLParser::StraightJoinContext * /*ctx*/) override { }

  virtual void enterOuterJoin(MySQLParser::OuterJoinContext * /*ctx*/) override { }
  virtual void exitOuterJoin(MySQLParser::OuterJoinContext * /*ctx*/) override { }

  virtual void enterNaturalJoin(MySQLParser::NaturalJoinContext * /*ctx*/) override { }
  virtual void exitNaturalJoin(MySQLParser::NaturalJoinContext * /*ctx*/) override { }

  virtual void enterJoinPartOnClause(MySQLParser::JoinPartOnClauseContext * /*ctx*/) override { }
  virtual void exitJoinPartOnClause(MySQLParser::JoinPartOnClauseContext * /*ctx*/) override { }

  virtual void enterJoinPartUsingClause(MySQLParser::JoinPartUsingClauseContext * /*ctx*/) override { }
  virtual void exitJoinPartUsingClause(MySQLParser::JoinPartUsingClauseContext * /*ctx*/) override { }

  virtual void enterQueryExpression(MySQLParser::QueryExpressionContext * /*ctx*/) override { }
  virtual void exitQueryExpression(MySQLParser::QueryExpressionContext * /*ctx*/) override { }

  virtual void enterQueryExpressionNointo(MySQLParser::QueryExpressionNointoContext * /*ctx*/) override { }
  virtual void exitQueryExpressionNointo(MySQLParser::QueryExpressionNointoContext * /*ctx*/) override { }

  virtual void enterQuerySpecification(MySQLParser::QuerySpecificationContext * /*ctx*/) override { }
  virtual void exitQuerySpecification(MySQLParser::QuerySpecificationContext * /*ctx*/) override { }

  virtual void enterQuerySpecificationNointo(MySQLParser::QuerySpecificationNointoContext * /*ctx*/) override { }
  virtual void exitQuerySpecificationNointo(MySQLParser::QuerySpecificationNointoContext * /*ctx*/) override { }

  virtual void enterUnionParenthesis(MySQLParser::UnionParenthesisContext * /*ctx*/) override { }
  virtual void exitUnionParenthesis(MySQLParser::UnionParenthesisContext * /*ctx*/) override { }

  virtual void enterUnionStatement(MySQLParser::UnionStatementContext * /*ctx*/) override { }
  virtual void exitUnionStatement(MySQLParser::UnionStatementContext * /*ctx*/) override { }

  virtual void enterSelectSpec(MySQLParser::SelectSpecContext * /*ctx*/) override { }
  virtual void exitSelectSpec(MySQLParser::SelectSpecContext * /*ctx*/) override { }

  virtual void enterSelectElements(MySQLParser::SelectElementsContext * /*ctx*/) override { }
  virtual void exitSelectElements(MySQLParser::SelectElementsContext * /*ctx*/) override { }

  virtual void enterSelectStarElement(MySQLParser::SelectStarElementContext * /*ctx*/) override { }
  virtual void exitSelectStarElement(MySQLParser::SelectStarElementContext * /*ctx*/) override { }

  virtual void enterSelectColumnElement(MySQLParser::SelectColumnElementContext * /*ctx*/) override { }
  virtual void exitSelectColumnElement(MySQLParser::SelectColumnElementContext * /*ctx*/) override { }

  virtual void enterSelectFunctionElement(MySQLParser::SelectFunctionElementContext * /*ctx*/) override { }
  virtual void exitSelectFunctionElement(MySQLParser::SelectFunctionElementContext * /*ctx*/) override { }

  virtual void enterSelectExpressionElement(MySQLParser::SelectExpressionElementContext * /*ctx*/) override { }
  virtual void exitSelectExpressionElement(MySQLParser::SelectExpressionElementContext * /*ctx*/) override { }

  virtual void enterSelectIntoVariables(MySQLParser::SelectIntoVariablesContext * /*ctx*/) override { }
  virtual void exitSelectIntoVariables(MySQLParser::SelectIntoVariablesContext * /*ctx*/) override { }

  virtual void enterSelectIntoDumpFile(MySQLParser::SelectIntoDumpFileContext * /*ctx*/) override { }
  virtual void exitSelectIntoDumpFile(MySQLParser::SelectIntoDumpFileContext * /*ctx*/) override { }

  virtual void enterSelectIntoTextFile(MySQLParser::SelectIntoTextFileContext * /*ctx*/) override { }
  virtual void exitSelectIntoTextFile(MySQLParser::SelectIntoTextFileContext * /*ctx*/) override { }

  virtual void enterSelectFieldsInto(MySQLParser::SelectFieldsIntoContext * /*ctx*/) override { }
  virtual void exitSelectFieldsInto(MySQLParser::SelectFieldsIntoContext * /*ctx*/) override { }

  virtual void enterSelectLinesInto(MySQLParser::SelectLinesIntoContext * /*ctx*/) override { }
  virtual void exitSelectLinesInto(MySQLParser::SelectLinesIntoContext * /*ctx*/) override { }

  virtual void enterFromClause(MySQLParser::FromClauseContext * /*ctx*/) override { }
  virtual void exitFromClause(MySQLParser::FromClauseContext * /*ctx*/) override { }

  virtual void enterWhereClause(MySQLParser::WhereClauseContext * /*ctx*/) override { }
  virtual void exitWhereClause(MySQLParser::WhereClauseContext * /*ctx*/) override { }

  virtual void enterGroupClause(MySQLParser::GroupClauseContext * /*ctx*/) override { }
  virtual void exitGroupClause(MySQLParser::GroupClauseContext * /*ctx*/) override { }

  virtual void enterHavingClause(MySQLParser::HavingClauseContext * /*ctx*/) override { }
  virtual void exitHavingClause(MySQLParser::HavingClauseContext * /*ctx*/) override { }

  virtual void enterGroupByItem(MySQLParser::GroupByItemContext * /*ctx*/) override { }
  virtual void exitGroupByItem(MySQLParser::GroupByItemContext * /*ctx*/) override { }

  virtual void enterLimitClause(MySQLParser::LimitClauseContext * /*ctx*/) override { }
  virtual void exitLimitClause(MySQLParser::LimitClauseContext * /*ctx*/) override { }

  virtual void enterLimitClauseAtom(MySQLParser::LimitClauseAtomContext * /*ctx*/) override { }
  virtual void exitLimitClauseAtom(MySQLParser::LimitClauseAtomContext * /*ctx*/) override { }

  virtual void enterStartTransaction(MySQLParser::StartTransactionContext * /*ctx*/) override { }
  virtual void exitStartTransaction(MySQLParser::StartTransactionContext * /*ctx*/) override { }

  virtual void enterBeginWork(MySQLParser::BeginWorkContext * /*ctx*/) override { }
  virtual void exitBeginWork(MySQLParser::BeginWorkContext * /*ctx*/) override { }

  virtual void enterCommitWork(MySQLParser::CommitWorkContext * /*ctx*/) override { }
  virtual void exitCommitWork(MySQLParser::CommitWorkContext * /*ctx*/) override { }

  virtual void enterRollbackWork(MySQLParser::RollbackWorkContext * /*ctx*/) override { }
  virtual void exitRollbackWork(MySQLParser::RollbackWorkContext * /*ctx*/) override { }

  virtual void enterSavepointStatement(MySQLParser::SavepointStatementContext * /*ctx*/) override { }
  virtual void exitSavepointStatement(MySQLParser::SavepointStatementContext * /*ctx*/) override { }

  virtual void enterRollbackStatement(MySQLParser::RollbackStatementContext * /*ctx*/) override { }
  virtual void exitRollbackStatement(MySQLParser::RollbackStatementContext * /*ctx*/) override { }

  virtual void enterReleaseStatement(MySQLParser::ReleaseStatementContext * /*ctx*/) override { }
  virtual void exitReleaseStatement(MySQLParser::ReleaseStatementContext * /*ctx*/) override { }

  virtual void enterLockTables(MySQLParser::LockTablesContext * /*ctx*/) override { }
  virtual void exitLockTables(MySQLParser::LockTablesContext * /*ctx*/) override { }

  virtual void enterUnlockTables(MySQLParser::UnlockTablesContext * /*ctx*/) override { }
  virtual void exitUnlockTables(MySQLParser::UnlockTablesContext * /*ctx*/) override { }

  virtual void enterSetAutocommitStatement(MySQLParser::SetAutocommitStatementContext * /*ctx*/) override { }
  virtual void exitSetAutocommitStatement(MySQLParser::SetAutocommitStatementContext * /*ctx*/) override { }

  virtual void enterSetTransactionStatement(MySQLParser::SetTransactionStatementContext * /*ctx*/) override { }
  virtual void exitSetTransactionStatement(MySQLParser::SetTransactionStatementContext * /*ctx*/) override { }

  virtual void enterTransactionMode(MySQLParser::TransactionModeContext * /*ctx*/) override { }
  virtual void exitTransactionMode(MySQLParser::TransactionModeContext * /*ctx*/) override { }

  virtual void enterLockTableElement(MySQLParser::LockTableElementContext * /*ctx*/) override { }
  virtual void exitLockTableElement(MySQLParser::LockTableElementContext * /*ctx*/) override { }

  virtual void enterLockAction(MySQLParser::LockActionContext * /*ctx*/) override { }
  virtual void exitLockAction(MySQLParser::LockActionContext * /*ctx*/) override { }

  virtual void enterTransactionOption(MySQLParser::TransactionOptionContext * /*ctx*/) override { }
  virtual void exitTransactionOption(MySQLParser::TransactionOptionContext * /*ctx*/) override { }

  virtual void enterTransactionLevel(MySQLParser::TransactionLevelContext * /*ctx*/) override { }
  virtual void exitTransactionLevel(MySQLParser::TransactionLevelContext * /*ctx*/) override { }

  virtual void enterChangeMaster(MySQLParser::ChangeMasterContext * /*ctx*/) override { }
  virtual void exitChangeMaster(MySQLParser::ChangeMasterContext * /*ctx*/) override { }

  virtual void enterChangeReplicationFilter(MySQLParser::ChangeReplicationFilterContext * /*ctx*/) override { }
  virtual void exitChangeReplicationFilter(MySQLParser::ChangeReplicationFilterContext * /*ctx*/) override { }

  virtual void enterPurgeBinaryLogs(MySQLParser::PurgeBinaryLogsContext * /*ctx*/) override { }
  virtual void exitPurgeBinaryLogs(MySQLParser::PurgeBinaryLogsContext * /*ctx*/) override { }

  virtual void enterResetMaster(MySQLParser::ResetMasterContext * /*ctx*/) override { }
  virtual void exitResetMaster(MySQLParser::ResetMasterContext * /*ctx*/) override { }

  virtual void enterResetSlave(MySQLParser::ResetSlaveContext * /*ctx*/) override { }
  virtual void exitResetSlave(MySQLParser::ResetSlaveContext * /*ctx*/) override { }

  virtual void enterStartSlave(MySQLParser::StartSlaveContext * /*ctx*/) override { }
  virtual void exitStartSlave(MySQLParser::StartSlaveContext * /*ctx*/) override { }

  virtual void enterStopSlave(MySQLParser::StopSlaveContext * /*ctx*/) override { }
  virtual void exitStopSlave(MySQLParser::StopSlaveContext * /*ctx*/) override { }

  virtual void enterStartGroupReplication(MySQLParser::StartGroupReplicationContext * /*ctx*/) override { }
  virtual void exitStartGroupReplication(MySQLParser::StartGroupReplicationContext * /*ctx*/) override { }

  virtual void enterStopGroupReplication(MySQLParser::StopGroupReplicationContext * /*ctx*/) override { }
  virtual void exitStopGroupReplication(MySQLParser::StopGroupReplicationContext * /*ctx*/) override { }

  virtual void enterMasterStringOption(MySQLParser::MasterStringOptionContext * /*ctx*/) override { }
  virtual void exitMasterStringOption(MySQLParser::MasterStringOptionContext * /*ctx*/) override { }

  virtual void enterMasterDecimalOption(MySQLParser::MasterDecimalOptionContext * /*ctx*/) override { }
  virtual void exitMasterDecimalOption(MySQLParser::MasterDecimalOptionContext * /*ctx*/) override { }

  virtual void enterMasterBoolOption(MySQLParser::MasterBoolOptionContext * /*ctx*/) override { }
  virtual void exitMasterBoolOption(MySQLParser::MasterBoolOptionContext * /*ctx*/) override { }

  virtual void enterMasterRealOption(MySQLParser::MasterRealOptionContext * /*ctx*/) override { }
  virtual void exitMasterRealOption(MySQLParser::MasterRealOptionContext * /*ctx*/) override { }

  virtual void enterMasterUidListOption(MySQLParser::MasterUidListOptionContext * /*ctx*/) override { }
  virtual void exitMasterUidListOption(MySQLParser::MasterUidListOptionContext * /*ctx*/) override { }

  virtual void enterStringMasterOption(MySQLParser::StringMasterOptionContext * /*ctx*/) override { }
  virtual void exitStringMasterOption(MySQLParser::StringMasterOptionContext * /*ctx*/) override { }

  virtual void enterDecimalMasterOption(MySQLParser::DecimalMasterOptionContext * /*ctx*/) override { }
  virtual void exitDecimalMasterOption(MySQLParser::DecimalMasterOptionContext * /*ctx*/) override { }

  virtual void enterBoolMasterOption(MySQLParser::BoolMasterOptionContext * /*ctx*/) override { }
  virtual void exitBoolMasterOption(MySQLParser::BoolMasterOptionContext * /*ctx*/) override { }

  virtual void enterChannelOption(MySQLParser::ChannelOptionContext * /*ctx*/) override { }
  virtual void exitChannelOption(MySQLParser::ChannelOptionContext * /*ctx*/) override { }

  virtual void enterDoDbReplication(MySQLParser::DoDbReplicationContext * /*ctx*/) override { }
  virtual void exitDoDbReplication(MySQLParser::DoDbReplicationContext * /*ctx*/) override { }

  virtual void enterIgnoreDbReplication(MySQLParser::IgnoreDbReplicationContext * /*ctx*/) override { }
  virtual void exitIgnoreDbReplication(MySQLParser::IgnoreDbReplicationContext * /*ctx*/) override { }

  virtual void enterDoTableReplication(MySQLParser::DoTableReplicationContext * /*ctx*/) override { }
  virtual void exitDoTableReplication(MySQLParser::DoTableReplicationContext * /*ctx*/) override { }

  virtual void enterIgnoreTableReplication(MySQLParser::IgnoreTableReplicationContext * /*ctx*/) override { }
  virtual void exitIgnoreTableReplication(MySQLParser::IgnoreTableReplicationContext * /*ctx*/) override { }

  virtual void enterWildDoTableReplication(MySQLParser::WildDoTableReplicationContext * /*ctx*/) override { }
  virtual void exitWildDoTableReplication(MySQLParser::WildDoTableReplicationContext * /*ctx*/) override { }

  virtual void enterWildIgnoreTableReplication(MySQLParser::WildIgnoreTableReplicationContext * /*ctx*/) override { }
  virtual void exitWildIgnoreTableReplication(MySQLParser::WildIgnoreTableReplicationContext * /*ctx*/) override { }

  virtual void enterRewriteDbReplication(MySQLParser::RewriteDbReplicationContext * /*ctx*/) override { }
  virtual void exitRewriteDbReplication(MySQLParser::RewriteDbReplicationContext * /*ctx*/) override { }

  virtual void enterTablePair(MySQLParser::TablePairContext * /*ctx*/) override { }
  virtual void exitTablePair(MySQLParser::TablePairContext * /*ctx*/) override { }

  virtual void enterThreadType(MySQLParser::ThreadTypeContext * /*ctx*/) override { }
  virtual void exitThreadType(MySQLParser::ThreadTypeContext * /*ctx*/) override { }

  virtual void enterGtidsUntilOption(MySQLParser::GtidsUntilOptionContext * /*ctx*/) override { }
  virtual void exitGtidsUntilOption(MySQLParser::GtidsUntilOptionContext * /*ctx*/) override { }

  virtual void enterMasterLogUntilOption(MySQLParser::MasterLogUntilOptionContext * /*ctx*/) override { }
  virtual void exitMasterLogUntilOption(MySQLParser::MasterLogUntilOptionContext * /*ctx*/) override { }

  virtual void enterRelayLogUntilOption(MySQLParser::RelayLogUntilOptionContext * /*ctx*/) override { }
  virtual void exitRelayLogUntilOption(MySQLParser::RelayLogUntilOptionContext * /*ctx*/) override { }

  virtual void enterSqlGapsUntilOption(MySQLParser::SqlGapsUntilOptionContext * /*ctx*/) override { }
  virtual void exitSqlGapsUntilOption(MySQLParser::SqlGapsUntilOptionContext * /*ctx*/) override { }

  virtual void enterUserConnectionOption(MySQLParser::UserConnectionOptionContext * /*ctx*/) override { }
  virtual void exitUserConnectionOption(MySQLParser::UserConnectionOptionContext * /*ctx*/) override { }

  virtual void enterPasswordConnectionOption(MySQLParser::PasswordConnectionOptionContext * /*ctx*/) override { }
  virtual void exitPasswordConnectionOption(MySQLParser::PasswordConnectionOptionContext * /*ctx*/) override { }

  virtual void enterDefaultAuthConnectionOption(MySQLParser::DefaultAuthConnectionOptionContext * /*ctx*/) override { }
  virtual void exitDefaultAuthConnectionOption(MySQLParser::DefaultAuthConnectionOptionContext * /*ctx*/) override { }

  virtual void enterPluginDirConnectionOption(MySQLParser::PluginDirConnectionOptionContext * /*ctx*/) override { }
  virtual void exitPluginDirConnectionOption(MySQLParser::PluginDirConnectionOptionContext * /*ctx*/) override { }

  virtual void enterGtuidSet(MySQLParser::GtuidSetContext * /*ctx*/) override { }
  virtual void exitGtuidSet(MySQLParser::GtuidSetContext * /*ctx*/) override { }

  virtual void enterXaStartTransaction(MySQLParser::XaStartTransactionContext * /*ctx*/) override { }
  virtual void exitXaStartTransaction(MySQLParser::XaStartTransactionContext * /*ctx*/) override { }

  virtual void enterXaEndTransaction(MySQLParser::XaEndTransactionContext * /*ctx*/) override { }
  virtual void exitXaEndTransaction(MySQLParser::XaEndTransactionContext * /*ctx*/) override { }

  virtual void enterXaPrepareStatement(MySQLParser::XaPrepareStatementContext * /*ctx*/) override { }
  virtual void exitXaPrepareStatement(MySQLParser::XaPrepareStatementContext * /*ctx*/) override { }

  virtual void enterXaCommitWork(MySQLParser::XaCommitWorkContext * /*ctx*/) override { }
  virtual void exitXaCommitWork(MySQLParser::XaCommitWorkContext * /*ctx*/) override { }

  virtual void enterXaRollbackWork(MySQLParser::XaRollbackWorkContext * /*ctx*/) override { }
  virtual void exitXaRollbackWork(MySQLParser::XaRollbackWorkContext * /*ctx*/) override { }

  virtual void enterXaRecoverWork(MySQLParser::XaRecoverWorkContext * /*ctx*/) override { }
  virtual void exitXaRecoverWork(MySQLParser::XaRecoverWorkContext * /*ctx*/) override { }

  virtual void enterPrepareStatement(MySQLParser::PrepareStatementContext * /*ctx*/) override { }
  virtual void exitPrepareStatement(MySQLParser::PrepareStatementContext * /*ctx*/) override { }

  virtual void enterExecuteStatement(MySQLParser::ExecuteStatementContext * /*ctx*/) override { }
  virtual void exitExecuteStatement(MySQLParser::ExecuteStatementContext * /*ctx*/) override { }

  virtual void enterDeallocatePrepare(MySQLParser::DeallocatePrepareContext * /*ctx*/) override { }
  virtual void exitDeallocatePrepare(MySQLParser::DeallocatePrepareContext * /*ctx*/) override { }

  virtual void enterRoutineBody(MySQLParser::RoutineBodyContext * /*ctx*/) override { }
  virtual void exitRoutineBody(MySQLParser::RoutineBodyContext * /*ctx*/) override { }

  virtual void enterBlockStatement(MySQLParser::BlockStatementContext * /*ctx*/) override { }
  virtual void exitBlockStatement(MySQLParser::BlockStatementContext * /*ctx*/) override { }

  virtual void enterCaseStatement(MySQLParser::CaseStatementContext * /*ctx*/) override { }
  virtual void exitCaseStatement(MySQLParser::CaseStatementContext * /*ctx*/) override { }

  virtual void enterIfStatement(MySQLParser::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(MySQLParser::IfStatementContext * /*ctx*/) override { }

  virtual void enterIterateStatement(MySQLParser::IterateStatementContext * /*ctx*/) override { }
  virtual void exitIterateStatement(MySQLParser::IterateStatementContext * /*ctx*/) override { }

  virtual void enterLeaveStatement(MySQLParser::LeaveStatementContext * /*ctx*/) override { }
  virtual void exitLeaveStatement(MySQLParser::LeaveStatementContext * /*ctx*/) override { }

  virtual void enterLoopStatement(MySQLParser::LoopStatementContext * /*ctx*/) override { }
  virtual void exitLoopStatement(MySQLParser::LoopStatementContext * /*ctx*/) override { }

  virtual void enterRepeatStatement(MySQLParser::RepeatStatementContext * /*ctx*/) override { }
  virtual void exitRepeatStatement(MySQLParser::RepeatStatementContext * /*ctx*/) override { }

  virtual void enterReturnStatement(MySQLParser::ReturnStatementContext * /*ctx*/) override { }
  virtual void exitReturnStatement(MySQLParser::ReturnStatementContext * /*ctx*/) override { }

  virtual void enterWhileStatement(MySQLParser::WhileStatementContext * /*ctx*/) override { }
  virtual void exitWhileStatement(MySQLParser::WhileStatementContext * /*ctx*/) override { }

  virtual void enterCloseCursor(MySQLParser::CloseCursorContext * /*ctx*/) override { }
  virtual void exitCloseCursor(MySQLParser::CloseCursorContext * /*ctx*/) override { }

  virtual void enterFetchCursor(MySQLParser::FetchCursorContext * /*ctx*/) override { }
  virtual void exitFetchCursor(MySQLParser::FetchCursorContext * /*ctx*/) override { }

  virtual void enterOpenCursor(MySQLParser::OpenCursorContext * /*ctx*/) override { }
  virtual void exitOpenCursor(MySQLParser::OpenCursorContext * /*ctx*/) override { }

  virtual void enterDeclareVariable(MySQLParser::DeclareVariableContext * /*ctx*/) override { }
  virtual void exitDeclareVariable(MySQLParser::DeclareVariableContext * /*ctx*/) override { }

  virtual void enterDeclareCondition(MySQLParser::DeclareConditionContext * /*ctx*/) override { }
  virtual void exitDeclareCondition(MySQLParser::DeclareConditionContext * /*ctx*/) override { }

  virtual void enterDeclareCursor(MySQLParser::DeclareCursorContext * /*ctx*/) override { }
  virtual void exitDeclareCursor(MySQLParser::DeclareCursorContext * /*ctx*/) override { }

  virtual void enterDeclareHandler(MySQLParser::DeclareHandlerContext * /*ctx*/) override { }
  virtual void exitDeclareHandler(MySQLParser::DeclareHandlerContext * /*ctx*/) override { }

  virtual void enterHandlerConditionCode(MySQLParser::HandlerConditionCodeContext * /*ctx*/) override { }
  virtual void exitHandlerConditionCode(MySQLParser::HandlerConditionCodeContext * /*ctx*/) override { }

  virtual void enterHandlerConditionState(MySQLParser::HandlerConditionStateContext * /*ctx*/) override { }
  virtual void exitHandlerConditionState(MySQLParser::HandlerConditionStateContext * /*ctx*/) override { }

  virtual void enterHandlerConditionName(MySQLParser::HandlerConditionNameContext * /*ctx*/) override { }
  virtual void exitHandlerConditionName(MySQLParser::HandlerConditionNameContext * /*ctx*/) override { }

  virtual void enterHandlerConditionWarning(MySQLParser::HandlerConditionWarningContext * /*ctx*/) override { }
  virtual void exitHandlerConditionWarning(MySQLParser::HandlerConditionWarningContext * /*ctx*/) override { }

  virtual void enterHandlerConditionNotfound(MySQLParser::HandlerConditionNotfoundContext * /*ctx*/) override { }
  virtual void exitHandlerConditionNotfound(MySQLParser::HandlerConditionNotfoundContext * /*ctx*/) override { }

  virtual void enterHandlerConditionException(MySQLParser::HandlerConditionExceptionContext * /*ctx*/) override { }
  virtual void exitHandlerConditionException(MySQLParser::HandlerConditionExceptionContext * /*ctx*/) override { }

  virtual void enterProcedureSqlStatement(MySQLParser::ProcedureSqlStatementContext * /*ctx*/) override { }
  virtual void exitProcedureSqlStatement(MySQLParser::ProcedureSqlStatementContext * /*ctx*/) override { }

  virtual void enterCaseAlternative(MySQLParser::CaseAlternativeContext * /*ctx*/) override { }
  virtual void exitCaseAlternative(MySQLParser::CaseAlternativeContext * /*ctx*/) override { }

  virtual void enterElifAlternative(MySQLParser::ElifAlternativeContext * /*ctx*/) override { }
  virtual void exitElifAlternative(MySQLParser::ElifAlternativeContext * /*ctx*/) override { }

  virtual void enterAlterUserMysqlV56(MySQLParser::AlterUserMysqlV56Context * /*ctx*/) override { }
  virtual void exitAlterUserMysqlV56(MySQLParser::AlterUserMysqlV56Context * /*ctx*/) override { }

  virtual void enterAlterUserMysqlV57(MySQLParser::AlterUserMysqlV57Context * /*ctx*/) override { }
  virtual void exitAlterUserMysqlV57(MySQLParser::AlterUserMysqlV57Context * /*ctx*/) override { }

  virtual void enterCreateUserMysqlV56(MySQLParser::CreateUserMysqlV56Context * /*ctx*/) override { }
  virtual void exitCreateUserMysqlV56(MySQLParser::CreateUserMysqlV56Context * /*ctx*/) override { }

  virtual void enterCreateUserMysqlV57(MySQLParser::CreateUserMysqlV57Context * /*ctx*/) override { }
  virtual void exitCreateUserMysqlV57(MySQLParser::CreateUserMysqlV57Context * /*ctx*/) override { }

  virtual void enterDropUser(MySQLParser::DropUserContext * /*ctx*/) override { }
  virtual void exitDropUser(MySQLParser::DropUserContext * /*ctx*/) override { }

  virtual void enterGrantStatement(MySQLParser::GrantStatementContext * /*ctx*/) override { }
  virtual void exitGrantStatement(MySQLParser::GrantStatementContext * /*ctx*/) override { }

  virtual void enterGrantProxy(MySQLParser::GrantProxyContext * /*ctx*/) override { }
  virtual void exitGrantProxy(MySQLParser::GrantProxyContext * /*ctx*/) override { }

  virtual void enterRenameUser(MySQLParser::RenameUserContext * /*ctx*/) override { }
  virtual void exitRenameUser(MySQLParser::RenameUserContext * /*ctx*/) override { }

  virtual void enterDetailRevoke(MySQLParser::DetailRevokeContext * /*ctx*/) override { }
  virtual void exitDetailRevoke(MySQLParser::DetailRevokeContext * /*ctx*/) override { }

  virtual void enterShortRevoke(MySQLParser::ShortRevokeContext * /*ctx*/) override { }
  virtual void exitShortRevoke(MySQLParser::ShortRevokeContext * /*ctx*/) override { }

  virtual void enterRevokeProxy(MySQLParser::RevokeProxyContext * /*ctx*/) override { }
  virtual void exitRevokeProxy(MySQLParser::RevokeProxyContext * /*ctx*/) override { }

  virtual void enterSetPasswordStatement(MySQLParser::SetPasswordStatementContext * /*ctx*/) override { }
  virtual void exitSetPasswordStatement(MySQLParser::SetPasswordStatementContext * /*ctx*/) override { }

  virtual void enterUserSpecification(MySQLParser::UserSpecificationContext * /*ctx*/) override { }
  virtual void exitUserSpecification(MySQLParser::UserSpecificationContext * /*ctx*/) override { }

  virtual void enterPasswordAuthOption(MySQLParser::PasswordAuthOptionContext * /*ctx*/) override { }
  virtual void exitPasswordAuthOption(MySQLParser::PasswordAuthOptionContext * /*ctx*/) override { }

  virtual void enterStringAuthOption(MySQLParser::StringAuthOptionContext * /*ctx*/) override { }
  virtual void exitStringAuthOption(MySQLParser::StringAuthOptionContext * /*ctx*/) override { }

  virtual void enterHashAuthOption(MySQLParser::HashAuthOptionContext * /*ctx*/) override { }
  virtual void exitHashAuthOption(MySQLParser::HashAuthOptionContext * /*ctx*/) override { }

  virtual void enterSimpleAuthOption(MySQLParser::SimpleAuthOptionContext * /*ctx*/) override { }
  virtual void exitSimpleAuthOption(MySQLParser::SimpleAuthOptionContext * /*ctx*/) override { }

  virtual void enterTlsOption(MySQLParser::TlsOptionContext * /*ctx*/) override { }
  virtual void exitTlsOption(MySQLParser::TlsOptionContext * /*ctx*/) override { }

  virtual void enterUserResourceOption(MySQLParser::UserResourceOptionContext * /*ctx*/) override { }
  virtual void exitUserResourceOption(MySQLParser::UserResourceOptionContext * /*ctx*/) override { }

  virtual void enterUserPasswordOption(MySQLParser::UserPasswordOptionContext * /*ctx*/) override { }
  virtual void exitUserPasswordOption(MySQLParser::UserPasswordOptionContext * /*ctx*/) override { }

  virtual void enterUserLockOption(MySQLParser::UserLockOptionContext * /*ctx*/) override { }
  virtual void exitUserLockOption(MySQLParser::UserLockOptionContext * /*ctx*/) override { }

  virtual void enterPrivelegeClause(MySQLParser::PrivelegeClauseContext * /*ctx*/) override { }
  virtual void exitPrivelegeClause(MySQLParser::PrivelegeClauseContext * /*ctx*/) override { }

  virtual void enterPrivilege(MySQLParser::PrivilegeContext * /*ctx*/) override { }
  virtual void exitPrivilege(MySQLParser::PrivilegeContext * /*ctx*/) override { }

  virtual void enterCurrentSchemaPriviLevel(MySQLParser::CurrentSchemaPriviLevelContext * /*ctx*/) override { }
  virtual void exitCurrentSchemaPriviLevel(MySQLParser::CurrentSchemaPriviLevelContext * /*ctx*/) override { }

  virtual void enterGlobalPrivLevel(MySQLParser::GlobalPrivLevelContext * /*ctx*/) override { }
  virtual void exitGlobalPrivLevel(MySQLParser::GlobalPrivLevelContext * /*ctx*/) override { }

  virtual void enterDefiniteSchemaPrivLevel(MySQLParser::DefiniteSchemaPrivLevelContext * /*ctx*/) override { }
  virtual void exitDefiniteSchemaPrivLevel(MySQLParser::DefiniteSchemaPrivLevelContext * /*ctx*/) override { }

  virtual void enterDefiniteFullTablePrivLevel(MySQLParser::DefiniteFullTablePrivLevelContext * /*ctx*/) override { }
  virtual void exitDefiniteFullTablePrivLevel(MySQLParser::DefiniteFullTablePrivLevelContext * /*ctx*/) override { }

  virtual void enterDefiniteTablePrivLevel(MySQLParser::DefiniteTablePrivLevelContext * /*ctx*/) override { }
  virtual void exitDefiniteTablePrivLevel(MySQLParser::DefiniteTablePrivLevelContext * /*ctx*/) override { }

  virtual void enterRenameUserClause(MySQLParser::RenameUserClauseContext * /*ctx*/) override { }
  virtual void exitRenameUserClause(MySQLParser::RenameUserClauseContext * /*ctx*/) override { }

  virtual void enterAnalyzeTable(MySQLParser::AnalyzeTableContext * /*ctx*/) override { }
  virtual void exitAnalyzeTable(MySQLParser::AnalyzeTableContext * /*ctx*/) override { }

  virtual void enterCheckTable(MySQLParser::CheckTableContext * /*ctx*/) override { }
  virtual void exitCheckTable(MySQLParser::CheckTableContext * /*ctx*/) override { }

  virtual void enterChecksumTable(MySQLParser::ChecksumTableContext * /*ctx*/) override { }
  virtual void exitChecksumTable(MySQLParser::ChecksumTableContext * /*ctx*/) override { }

  virtual void enterOptimizeTable(MySQLParser::OptimizeTableContext * /*ctx*/) override { }
  virtual void exitOptimizeTable(MySQLParser::OptimizeTableContext * /*ctx*/) override { }

  virtual void enterRepairTable(MySQLParser::RepairTableContext * /*ctx*/) override { }
  virtual void exitRepairTable(MySQLParser::RepairTableContext * /*ctx*/) override { }

  virtual void enterCheckTableOption(MySQLParser::CheckTableOptionContext * /*ctx*/) override { }
  virtual void exitCheckTableOption(MySQLParser::CheckTableOptionContext * /*ctx*/) override { }

  virtual void enterCreateUdfunction(MySQLParser::CreateUdfunctionContext * /*ctx*/) override { }
  virtual void exitCreateUdfunction(MySQLParser::CreateUdfunctionContext * /*ctx*/) override { }

  virtual void enterInstallPlugin(MySQLParser::InstallPluginContext * /*ctx*/) override { }
  virtual void exitInstallPlugin(MySQLParser::InstallPluginContext * /*ctx*/) override { }

  virtual void enterUninstallPlugin(MySQLParser::UninstallPluginContext * /*ctx*/) override { }
  virtual void exitUninstallPlugin(MySQLParser::UninstallPluginContext * /*ctx*/) override { }

  virtual void enterSetVariable(MySQLParser::SetVariableContext * /*ctx*/) override { }
  virtual void exitSetVariable(MySQLParser::SetVariableContext * /*ctx*/) override { }

  virtual void enterSetCharset(MySQLParser::SetCharsetContext * /*ctx*/) override { }
  virtual void exitSetCharset(MySQLParser::SetCharsetContext * /*ctx*/) override { }

  virtual void enterSetNames(MySQLParser::SetNamesContext * /*ctx*/) override { }
  virtual void exitSetNames(MySQLParser::SetNamesContext * /*ctx*/) override { }

  virtual void enterSetPassword(MySQLParser::SetPasswordContext * /*ctx*/) override { }
  virtual void exitSetPassword(MySQLParser::SetPasswordContext * /*ctx*/) override { }

  virtual void enterSetTransaction(MySQLParser::SetTransactionContext * /*ctx*/) override { }
  virtual void exitSetTransaction(MySQLParser::SetTransactionContext * /*ctx*/) override { }

  virtual void enterSetAutocommit(MySQLParser::SetAutocommitContext * /*ctx*/) override { }
  virtual void exitSetAutocommit(MySQLParser::SetAutocommitContext * /*ctx*/) override { }

  virtual void enterSetNewValueInsideTrigger(MySQLParser::SetNewValueInsideTriggerContext * /*ctx*/) override { }
  virtual void exitSetNewValueInsideTrigger(MySQLParser::SetNewValueInsideTriggerContext * /*ctx*/) override { }

  virtual void enterShowMasterLogs(MySQLParser::ShowMasterLogsContext * /*ctx*/) override { }
  virtual void exitShowMasterLogs(MySQLParser::ShowMasterLogsContext * /*ctx*/) override { }

  virtual void enterShowLogEvents(MySQLParser::ShowLogEventsContext * /*ctx*/) override { }
  virtual void exitShowLogEvents(MySQLParser::ShowLogEventsContext * /*ctx*/) override { }

  virtual void enterShowObjectFilter(MySQLParser::ShowObjectFilterContext * /*ctx*/) override { }
  virtual void exitShowObjectFilter(MySQLParser::ShowObjectFilterContext * /*ctx*/) override { }

  virtual void enterShowColumns(MySQLParser::ShowColumnsContext * /*ctx*/) override { }
  virtual void exitShowColumns(MySQLParser::ShowColumnsContext * /*ctx*/) override { }

  virtual void enterShowCreateDb(MySQLParser::ShowCreateDbContext * /*ctx*/) override { }
  virtual void exitShowCreateDb(MySQLParser::ShowCreateDbContext * /*ctx*/) override { }

  virtual void enterShowCreateFullIdObject(MySQLParser::ShowCreateFullIdObjectContext * /*ctx*/) override { }
  virtual void exitShowCreateFullIdObject(MySQLParser::ShowCreateFullIdObjectContext * /*ctx*/) override { }

  virtual void enterShowCreateUser(MySQLParser::ShowCreateUserContext * /*ctx*/) override { }
  virtual void exitShowCreateUser(MySQLParser::ShowCreateUserContext * /*ctx*/) override { }

  virtual void enterShowEngine(MySQLParser::ShowEngineContext * /*ctx*/) override { }
  virtual void exitShowEngine(MySQLParser::ShowEngineContext * /*ctx*/) override { }

  virtual void enterShowGlobalInfo(MySQLParser::ShowGlobalInfoContext * /*ctx*/) override { }
  virtual void exitShowGlobalInfo(MySQLParser::ShowGlobalInfoContext * /*ctx*/) override { }

  virtual void enterShowErrors(MySQLParser::ShowErrorsContext * /*ctx*/) override { }
  virtual void exitShowErrors(MySQLParser::ShowErrorsContext * /*ctx*/) override { }

  virtual void enterShowCountErrors(MySQLParser::ShowCountErrorsContext * /*ctx*/) override { }
  virtual void exitShowCountErrors(MySQLParser::ShowCountErrorsContext * /*ctx*/) override { }

  virtual void enterShowSchemaFilter(MySQLParser::ShowSchemaFilterContext * /*ctx*/) override { }
  virtual void exitShowSchemaFilter(MySQLParser::ShowSchemaFilterContext * /*ctx*/) override { }

  virtual void enterShowRoutine(MySQLParser::ShowRoutineContext * /*ctx*/) override { }
  virtual void exitShowRoutine(MySQLParser::ShowRoutineContext * /*ctx*/) override { }

  virtual void enterShowGrants(MySQLParser::ShowGrantsContext * /*ctx*/) override { }
  virtual void exitShowGrants(MySQLParser::ShowGrantsContext * /*ctx*/) override { }

  virtual void enterShowIndexes(MySQLParser::ShowIndexesContext * /*ctx*/) override { }
  virtual void exitShowIndexes(MySQLParser::ShowIndexesContext * /*ctx*/) override { }

  virtual void enterShowOpenTables(MySQLParser::ShowOpenTablesContext * /*ctx*/) override { }
  virtual void exitShowOpenTables(MySQLParser::ShowOpenTablesContext * /*ctx*/) override { }

  virtual void enterShowProfile(MySQLParser::ShowProfileContext * /*ctx*/) override { }
  virtual void exitShowProfile(MySQLParser::ShowProfileContext * /*ctx*/) override { }

  virtual void enterShowSlaveStatus(MySQLParser::ShowSlaveStatusContext * /*ctx*/) override { }
  virtual void exitShowSlaveStatus(MySQLParser::ShowSlaveStatusContext * /*ctx*/) override { }

  virtual void enterVariableClause(MySQLParser::VariableClauseContext * /*ctx*/) override { }
  virtual void exitVariableClause(MySQLParser::VariableClauseContext * /*ctx*/) override { }

  virtual void enterShowCommonEntity(MySQLParser::ShowCommonEntityContext * /*ctx*/) override { }
  virtual void exitShowCommonEntity(MySQLParser::ShowCommonEntityContext * /*ctx*/) override { }

  virtual void enterShowFilter(MySQLParser::ShowFilterContext * /*ctx*/) override { }
  virtual void exitShowFilter(MySQLParser::ShowFilterContext * /*ctx*/) override { }

  virtual void enterShowGlobalInfoClause(MySQLParser::ShowGlobalInfoClauseContext * /*ctx*/) override { }
  virtual void exitShowGlobalInfoClause(MySQLParser::ShowGlobalInfoClauseContext * /*ctx*/) override { }

  virtual void enterShowSchemaEntity(MySQLParser::ShowSchemaEntityContext * /*ctx*/) override { }
  virtual void exitShowSchemaEntity(MySQLParser::ShowSchemaEntityContext * /*ctx*/) override { }

  virtual void enterShowProfileType(MySQLParser::ShowProfileTypeContext * /*ctx*/) override { }
  virtual void exitShowProfileType(MySQLParser::ShowProfileTypeContext * /*ctx*/) override { }

  virtual void enterBinlogStatement(MySQLParser::BinlogStatementContext * /*ctx*/) override { }
  virtual void exitBinlogStatement(MySQLParser::BinlogStatementContext * /*ctx*/) override { }

  virtual void enterCacheIndexStatement(MySQLParser::CacheIndexStatementContext * /*ctx*/) override { }
  virtual void exitCacheIndexStatement(MySQLParser::CacheIndexStatementContext * /*ctx*/) override { }

  virtual void enterFlushStatement(MySQLParser::FlushStatementContext * /*ctx*/) override { }
  virtual void exitFlushStatement(MySQLParser::FlushStatementContext * /*ctx*/) override { }

  virtual void enterKillStatement(MySQLParser::KillStatementContext * /*ctx*/) override { }
  virtual void exitKillStatement(MySQLParser::KillStatementContext * /*ctx*/) override { }

  virtual void enterLoadIndexIntoCache(MySQLParser::LoadIndexIntoCacheContext * /*ctx*/) override { }
  virtual void exitLoadIndexIntoCache(MySQLParser::LoadIndexIntoCacheContext * /*ctx*/) override { }

  virtual void enterResetStatement(MySQLParser::ResetStatementContext * /*ctx*/) override { }
  virtual void exitResetStatement(MySQLParser::ResetStatementContext * /*ctx*/) override { }

  virtual void enterShutdownStatement(MySQLParser::ShutdownStatementContext * /*ctx*/) override { }
  virtual void exitShutdownStatement(MySQLParser::ShutdownStatementContext * /*ctx*/) override { }

  virtual void enterTableIndexes(MySQLParser::TableIndexesContext * /*ctx*/) override { }
  virtual void exitTableIndexes(MySQLParser::TableIndexesContext * /*ctx*/) override { }

  virtual void enterSimpleFlushOption(MySQLParser::SimpleFlushOptionContext * /*ctx*/) override { }
  virtual void exitSimpleFlushOption(MySQLParser::SimpleFlushOptionContext * /*ctx*/) override { }

  virtual void enterChannelFlushOption(MySQLParser::ChannelFlushOptionContext * /*ctx*/) override { }
  virtual void exitChannelFlushOption(MySQLParser::ChannelFlushOptionContext * /*ctx*/) override { }

  virtual void enterTableFlushOption(MySQLParser::TableFlushOptionContext * /*ctx*/) override { }
  virtual void exitTableFlushOption(MySQLParser::TableFlushOptionContext * /*ctx*/) override { }

  virtual void enterFlushTableOption(MySQLParser::FlushTableOptionContext * /*ctx*/) override { }
  virtual void exitFlushTableOption(MySQLParser::FlushTableOptionContext * /*ctx*/) override { }

  virtual void enterLoadedTableIndexes(MySQLParser::LoadedTableIndexesContext * /*ctx*/) override { }
  virtual void exitLoadedTableIndexes(MySQLParser::LoadedTableIndexesContext * /*ctx*/) override { }

  virtual void enterSimpleDescribeStatement(MySQLParser::SimpleDescribeStatementContext * /*ctx*/) override { }
  virtual void exitSimpleDescribeStatement(MySQLParser::SimpleDescribeStatementContext * /*ctx*/) override { }

  virtual void enterFullDescribeStatement(MySQLParser::FullDescribeStatementContext * /*ctx*/) override { }
  virtual void exitFullDescribeStatement(MySQLParser::FullDescribeStatementContext * /*ctx*/) override { }

  virtual void enterHelpStatement(MySQLParser::HelpStatementContext * /*ctx*/) override { }
  virtual void exitHelpStatement(MySQLParser::HelpStatementContext * /*ctx*/) override { }

  virtual void enterUseStatement(MySQLParser::UseStatementContext * /*ctx*/) override { }
  virtual void exitUseStatement(MySQLParser::UseStatementContext * /*ctx*/) override { }

  virtual void enterDescribeStatements(MySQLParser::DescribeStatementsContext * /*ctx*/) override { }
  virtual void exitDescribeStatements(MySQLParser::DescribeStatementsContext * /*ctx*/) override { }

  virtual void enterDescribeConnection(MySQLParser::DescribeConnectionContext * /*ctx*/) override { }
  virtual void exitDescribeConnection(MySQLParser::DescribeConnectionContext * /*ctx*/) override { }

  virtual void enterFullId(MySQLParser::FullIdContext * /*ctx*/) override { }
  virtual void exitFullId(MySQLParser::FullIdContext * /*ctx*/) override { }

  virtual void enterTableName(MySQLParser::TableNameContext * /*ctx*/) override { }
  virtual void exitTableName(MySQLParser::TableNameContext * /*ctx*/) override { }

  virtual void enterFullColumnName(MySQLParser::FullColumnNameContext * /*ctx*/) override { }
  virtual void exitFullColumnName(MySQLParser::FullColumnNameContext * /*ctx*/) override { }

  virtual void enterIndexColumnName(MySQLParser::IndexColumnNameContext * /*ctx*/) override { }
  virtual void exitIndexColumnName(MySQLParser::IndexColumnNameContext * /*ctx*/) override { }

  virtual void enterUserName(MySQLParser::UserNameContext * /*ctx*/) override { }
  virtual void exitUserName(MySQLParser::UserNameContext * /*ctx*/) override { }

  virtual void enterMysqlVariable(MySQLParser::MysqlVariableContext * /*ctx*/) override { }
  virtual void exitMysqlVariable(MySQLParser::MysqlVariableContext * /*ctx*/) override { }

  virtual void enterCharsetName(MySQLParser::CharsetNameContext * /*ctx*/) override { }
  virtual void exitCharsetName(MySQLParser::CharsetNameContext * /*ctx*/) override { }

  virtual void enterCollationName(MySQLParser::CollationNameContext * /*ctx*/) override { }
  virtual void exitCollationName(MySQLParser::CollationNameContext * /*ctx*/) override { }

  virtual void enterEngineName(MySQLParser::EngineNameContext * /*ctx*/) override { }
  virtual void exitEngineName(MySQLParser::EngineNameContext * /*ctx*/) override { }

  virtual void enterUuidSet(MySQLParser::UuidSetContext * /*ctx*/) override { }
  virtual void exitUuidSet(MySQLParser::UuidSetContext * /*ctx*/) override { }

  virtual void enterXid(MySQLParser::XidContext * /*ctx*/) override { }
  virtual void exitXid(MySQLParser::XidContext * /*ctx*/) override { }

  virtual void enterXuidStringId(MySQLParser::XuidStringIdContext * /*ctx*/) override { }
  virtual void exitXuidStringId(MySQLParser::XuidStringIdContext * /*ctx*/) override { }

  virtual void enterAuthPlugin(MySQLParser::AuthPluginContext * /*ctx*/) override { }
  virtual void exitAuthPlugin(MySQLParser::AuthPluginContext * /*ctx*/) override { }

  virtual void enterUid(MySQLParser::UidContext * /*ctx*/) override { }
  virtual void exitUid(MySQLParser::UidContext * /*ctx*/) override { }

  virtual void enterSimpleId(MySQLParser::SimpleIdContext * /*ctx*/) override { }
  virtual void exitSimpleId(MySQLParser::SimpleIdContext * /*ctx*/) override { }

  virtual void enterDecimalLiteral(MySQLParser::DecimalLiteralContext * /*ctx*/) override { }
  virtual void exitDecimalLiteral(MySQLParser::DecimalLiteralContext * /*ctx*/) override { }

  virtual void enterFileSizeLiteral(MySQLParser::FileSizeLiteralContext * /*ctx*/) override { }
  virtual void exitFileSizeLiteral(MySQLParser::FileSizeLiteralContext * /*ctx*/) override { }

  virtual void enterStringLiteral(MySQLParser::StringLiteralContext * /*ctx*/) override { }
  virtual void exitStringLiteral(MySQLParser::StringLiteralContext * /*ctx*/) override { }

  virtual void enterBooleanLiteral(MySQLParser::BooleanLiteralContext * /*ctx*/) override { }
  virtual void exitBooleanLiteral(MySQLParser::BooleanLiteralContext * /*ctx*/) override { }

  virtual void enterHexadecimalLiteral(MySQLParser::HexadecimalLiteralContext * /*ctx*/) override { }
  virtual void exitHexadecimalLiteral(MySQLParser::HexadecimalLiteralContext * /*ctx*/) override { }

  virtual void enterNullNotnull(MySQLParser::NullNotnullContext * /*ctx*/) override { }
  virtual void exitNullNotnull(MySQLParser::NullNotnullContext * /*ctx*/) override { }

  virtual void enterConstant(MySQLParser::ConstantContext * /*ctx*/) override { }
  virtual void exitConstant(MySQLParser::ConstantContext * /*ctx*/) override { }

  virtual void enterStringDataType(MySQLParser::StringDataTypeContext * /*ctx*/) override { }
  virtual void exitStringDataType(MySQLParser::StringDataTypeContext * /*ctx*/) override { }

  virtual void enterNationalStringDataType(MySQLParser::NationalStringDataTypeContext * /*ctx*/) override { }
  virtual void exitNationalStringDataType(MySQLParser::NationalStringDataTypeContext * /*ctx*/) override { }

  virtual void enterNationalVaryingStringDataType(MySQLParser::NationalVaryingStringDataTypeContext * /*ctx*/) override { }
  virtual void exitNationalVaryingStringDataType(MySQLParser::NationalVaryingStringDataTypeContext * /*ctx*/) override { }

  virtual void enterDimensionDataType(MySQLParser::DimensionDataTypeContext * /*ctx*/) override { }
  virtual void exitDimensionDataType(MySQLParser::DimensionDataTypeContext * /*ctx*/) override { }

  virtual void enterSimpleDataType(MySQLParser::SimpleDataTypeContext * /*ctx*/) override { }
  virtual void exitSimpleDataType(MySQLParser::SimpleDataTypeContext * /*ctx*/) override { }

  virtual void enterCollectionDataType(MySQLParser::CollectionDataTypeContext * /*ctx*/) override { }
  virtual void exitCollectionDataType(MySQLParser::CollectionDataTypeContext * /*ctx*/) override { }

  virtual void enterSpatialDataType(MySQLParser::SpatialDataTypeContext * /*ctx*/) override { }
  virtual void exitSpatialDataType(MySQLParser::SpatialDataTypeContext * /*ctx*/) override { }

  virtual void enterCollectionOptions(MySQLParser::CollectionOptionsContext * /*ctx*/) override { }
  virtual void exitCollectionOptions(MySQLParser::CollectionOptionsContext * /*ctx*/) override { }

  virtual void enterConvertedDataType(MySQLParser::ConvertedDataTypeContext * /*ctx*/) override { }
  virtual void exitConvertedDataType(MySQLParser::ConvertedDataTypeContext * /*ctx*/) override { }

  virtual void enterLengthOneDimension(MySQLParser::LengthOneDimensionContext * /*ctx*/) override { }
  virtual void exitLengthOneDimension(MySQLParser::LengthOneDimensionContext * /*ctx*/) override { }

  virtual void enterLengthTwoDimension(MySQLParser::LengthTwoDimensionContext * /*ctx*/) override { }
  virtual void exitLengthTwoDimension(MySQLParser::LengthTwoDimensionContext * /*ctx*/) override { }

  virtual void enterLengthTwoOptionalDimension(MySQLParser::LengthTwoOptionalDimensionContext * /*ctx*/) override { }
  virtual void exitLengthTwoOptionalDimension(MySQLParser::LengthTwoOptionalDimensionContext * /*ctx*/) override { }

  virtual void enterUidList(MySQLParser::UidListContext * /*ctx*/) override { }
  virtual void exitUidList(MySQLParser::UidListContext * /*ctx*/) override { }

  virtual void enterTables(MySQLParser::TablesContext * /*ctx*/) override { }
  virtual void exitTables(MySQLParser::TablesContext * /*ctx*/) override { }

  virtual void enterIndexColumnNames(MySQLParser::IndexColumnNamesContext * /*ctx*/) override { }
  virtual void exitIndexColumnNames(MySQLParser::IndexColumnNamesContext * /*ctx*/) override { }

  virtual void enterExpressions(MySQLParser::ExpressionsContext * /*ctx*/) override { }
  virtual void exitExpressions(MySQLParser::ExpressionsContext * /*ctx*/) override { }

  virtual void enterExpressionsWithDefaults(MySQLParser::ExpressionsWithDefaultsContext * /*ctx*/) override { }
  virtual void exitExpressionsWithDefaults(MySQLParser::ExpressionsWithDefaultsContext * /*ctx*/) override { }

  virtual void enterConstants(MySQLParser::ConstantsContext * /*ctx*/) override { }
  virtual void exitConstants(MySQLParser::ConstantsContext * /*ctx*/) override { }

  virtual void enterSimpleStrings(MySQLParser::SimpleStringsContext * /*ctx*/) override { }
  virtual void exitSimpleStrings(MySQLParser::SimpleStringsContext * /*ctx*/) override { }

  virtual void enterUserVariables(MySQLParser::UserVariablesContext * /*ctx*/) override { }
  virtual void exitUserVariables(MySQLParser::UserVariablesContext * /*ctx*/) override { }

  virtual void enterDefaultValue(MySQLParser::DefaultValueContext * /*ctx*/) override { }
  virtual void exitDefaultValue(MySQLParser::DefaultValueContext * /*ctx*/) override { }

  virtual void enterCurrentTimestamp(MySQLParser::CurrentTimestampContext * /*ctx*/) override { }
  virtual void exitCurrentTimestamp(MySQLParser::CurrentTimestampContext * /*ctx*/) override { }

  virtual void enterExpressionOrDefault(MySQLParser::ExpressionOrDefaultContext * /*ctx*/) override { }
  virtual void exitExpressionOrDefault(MySQLParser::ExpressionOrDefaultContext * /*ctx*/) override { }

  virtual void enterIfExists(MySQLParser::IfExistsContext * /*ctx*/) override { }
  virtual void exitIfExists(MySQLParser::IfExistsContext * /*ctx*/) override { }

  virtual void enterIfNotExists(MySQLParser::IfNotExistsContext * /*ctx*/) override { }
  virtual void exitIfNotExists(MySQLParser::IfNotExistsContext * /*ctx*/) override { }

  virtual void enterSpecificFunctionCall(MySQLParser::SpecificFunctionCallContext * /*ctx*/) override { }
  virtual void exitSpecificFunctionCall(MySQLParser::SpecificFunctionCallContext * /*ctx*/) override { }

  virtual void enterAggregateFunctionCall(MySQLParser::AggregateFunctionCallContext * /*ctx*/) override { }
  virtual void exitAggregateFunctionCall(MySQLParser::AggregateFunctionCallContext * /*ctx*/) override { }

  virtual void enterScalarFunctionCall(MySQLParser::ScalarFunctionCallContext * /*ctx*/) override { }
  virtual void exitScalarFunctionCall(MySQLParser::ScalarFunctionCallContext * /*ctx*/) override { }

  virtual void enterUdfFunctionCall(MySQLParser::UdfFunctionCallContext * /*ctx*/) override { }
  virtual void exitUdfFunctionCall(MySQLParser::UdfFunctionCallContext * /*ctx*/) override { }

  virtual void enterPasswordFunctionCall(MySQLParser::PasswordFunctionCallContext * /*ctx*/) override { }
  virtual void exitPasswordFunctionCall(MySQLParser::PasswordFunctionCallContext * /*ctx*/) override { }

  virtual void enterSimpleFunctionCall(MySQLParser::SimpleFunctionCallContext * /*ctx*/) override { }
  virtual void exitSimpleFunctionCall(MySQLParser::SimpleFunctionCallContext * /*ctx*/) override { }

  virtual void enterDataTypeFunctionCall(MySQLParser::DataTypeFunctionCallContext * /*ctx*/) override { }
  virtual void exitDataTypeFunctionCall(MySQLParser::DataTypeFunctionCallContext * /*ctx*/) override { }

  virtual void enterValuesFunctionCall(MySQLParser::ValuesFunctionCallContext * /*ctx*/) override { }
  virtual void exitValuesFunctionCall(MySQLParser::ValuesFunctionCallContext * /*ctx*/) override { }

  virtual void enterCaseFunctionCall(MySQLParser::CaseFunctionCallContext * /*ctx*/) override { }
  virtual void exitCaseFunctionCall(MySQLParser::CaseFunctionCallContext * /*ctx*/) override { }

  virtual void enterCharFunctionCall(MySQLParser::CharFunctionCallContext * /*ctx*/) override { }
  virtual void exitCharFunctionCall(MySQLParser::CharFunctionCallContext * /*ctx*/) override { }

  virtual void enterPositionFunctionCall(MySQLParser::PositionFunctionCallContext * /*ctx*/) override { }
  virtual void exitPositionFunctionCall(MySQLParser::PositionFunctionCallContext * /*ctx*/) override { }

  virtual void enterSubstrFunctionCall(MySQLParser::SubstrFunctionCallContext * /*ctx*/) override { }
  virtual void exitSubstrFunctionCall(MySQLParser::SubstrFunctionCallContext * /*ctx*/) override { }

  virtual void enterTrimFunctionCall(MySQLParser::TrimFunctionCallContext * /*ctx*/) override { }
  virtual void exitTrimFunctionCall(MySQLParser::TrimFunctionCallContext * /*ctx*/) override { }

  virtual void enterWeightFunctionCall(MySQLParser::WeightFunctionCallContext * /*ctx*/) override { }
  virtual void exitWeightFunctionCall(MySQLParser::WeightFunctionCallContext * /*ctx*/) override { }

  virtual void enterExtractFunctionCall(MySQLParser::ExtractFunctionCallContext * /*ctx*/) override { }
  virtual void exitExtractFunctionCall(MySQLParser::ExtractFunctionCallContext * /*ctx*/) override { }

  virtual void enterGetFormatFunctionCall(MySQLParser::GetFormatFunctionCallContext * /*ctx*/) override { }
  virtual void exitGetFormatFunctionCall(MySQLParser::GetFormatFunctionCallContext * /*ctx*/) override { }

  virtual void enterCaseFuncAlternative(MySQLParser::CaseFuncAlternativeContext * /*ctx*/) override { }
  virtual void exitCaseFuncAlternative(MySQLParser::CaseFuncAlternativeContext * /*ctx*/) override { }

  virtual void enterLevelWeightList(MySQLParser::LevelWeightListContext * /*ctx*/) override { }
  virtual void exitLevelWeightList(MySQLParser::LevelWeightListContext * /*ctx*/) override { }

  virtual void enterLevelWeightRange(MySQLParser::LevelWeightRangeContext * /*ctx*/) override { }
  virtual void exitLevelWeightRange(MySQLParser::LevelWeightRangeContext * /*ctx*/) override { }

  virtual void enterLevelInWeightListElement(MySQLParser::LevelInWeightListElementContext * /*ctx*/) override { }
  virtual void exitLevelInWeightListElement(MySQLParser::LevelInWeightListElementContext * /*ctx*/) override { }

  virtual void enterAggregateWindowedFunction(MySQLParser::AggregateWindowedFunctionContext * /*ctx*/) override { }
  virtual void exitAggregateWindowedFunction(MySQLParser::AggregateWindowedFunctionContext * /*ctx*/) override { }

  virtual void enterScalarFunctionName(MySQLParser::ScalarFunctionNameContext * /*ctx*/) override { }
  virtual void exitScalarFunctionName(MySQLParser::ScalarFunctionNameContext * /*ctx*/) override { }

  virtual void enterPasswordFunctionClause(MySQLParser::PasswordFunctionClauseContext * /*ctx*/) override { }
  virtual void exitPasswordFunctionClause(MySQLParser::PasswordFunctionClauseContext * /*ctx*/) override { }

  virtual void enterFunctionArgs(MySQLParser::FunctionArgsContext * /*ctx*/) override { }
  virtual void exitFunctionArgs(MySQLParser::FunctionArgsContext * /*ctx*/) override { }

  virtual void enterFunctionArg(MySQLParser::FunctionArgContext * /*ctx*/) override { }
  virtual void exitFunctionArg(MySQLParser::FunctionArgContext * /*ctx*/) override { }

  virtual void enterExpression(MySQLParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(MySQLParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterPredicate(MySQLParser::PredicateContext * /*ctx*/) override { }
  virtual void exitPredicate(MySQLParser::PredicateContext * /*ctx*/) override { }

  virtual void enterExpressionAtom(MySQLParser::ExpressionAtomContext * /*ctx*/) override { }
  virtual void exitExpressionAtom(MySQLParser::ExpressionAtomContext * /*ctx*/) override { }

  virtual void enterUnaryOperator(MySQLParser::UnaryOperatorContext * /*ctx*/) override { }
  virtual void exitUnaryOperator(MySQLParser::UnaryOperatorContext * /*ctx*/) override { }

  virtual void enterComparisonOperator(MySQLParser::ComparisonOperatorContext * /*ctx*/) override { }
  virtual void exitComparisonOperator(MySQLParser::ComparisonOperatorContext * /*ctx*/) override { }

  virtual void enterLogicalOperator(MySQLParser::LogicalOperatorContext * /*ctx*/) override { }
  virtual void exitLogicalOperator(MySQLParser::LogicalOperatorContext * /*ctx*/) override { }

  virtual void enterBitOperator(MySQLParser::BitOperatorContext * /*ctx*/) override { }
  virtual void exitBitOperator(MySQLParser::BitOperatorContext * /*ctx*/) override { }

  virtual void enterMathOperator(MySQLParser::MathOperatorContext * /*ctx*/) override { }
  virtual void exitMathOperator(MySQLParser::MathOperatorContext * /*ctx*/) override { }

  virtual void enterCharsetNameBase(MySQLParser::CharsetNameBaseContext * /*ctx*/) override { }
  virtual void exitCharsetNameBase(MySQLParser::CharsetNameBaseContext * /*ctx*/) override { }

  virtual void enterTransactionLevelBase(MySQLParser::TransactionLevelBaseContext * /*ctx*/) override { }
  virtual void exitTransactionLevelBase(MySQLParser::TransactionLevelBaseContext * /*ctx*/) override { }

  virtual void enterPrivilegesBase(MySQLParser::PrivilegesBaseContext * /*ctx*/) override { }
  virtual void exitPrivilegesBase(MySQLParser::PrivilegesBaseContext * /*ctx*/) override { }

  virtual void enterIntervalTypeBase(MySQLParser::IntervalTypeBaseContext * /*ctx*/) override { }
  virtual void exitIntervalTypeBase(MySQLParser::IntervalTypeBaseContext * /*ctx*/) override { }

  virtual void enterDataTypeBase(MySQLParser::DataTypeBaseContext * /*ctx*/) override { }
  virtual void exitDataTypeBase(MySQLParser::DataTypeBaseContext * /*ctx*/) override { }

  virtual void enterKeywordsCanBeId(MySQLParser::KeywordsCanBeIdContext * /*ctx*/) override { }
  virtual void exitKeywordsCanBeId(MySQLParser::KeywordsCanBeIdContext * /*ctx*/) override { }

  virtual void enterFunctionNameBase(MySQLParser::FunctionNameBaseContext * /*ctx*/) override { }
  virtual void exitFunctionNameBase(MySQLParser::FunctionNameBaseContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};



// Generated from MySQLStatementParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "MySQLStatementParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by MySQLStatementParser.
 */
class  MySQLStatementParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by MySQLStatementParser.
   */
    virtual antlrcpp::Any visitExecute(MySQLStatementParser::ExecuteContext *context) = 0;

    virtual antlrcpp::Any visitInsert(MySQLStatementParser::InsertContext *context) = 0;

    virtual antlrcpp::Any visitInsertSpecification(MySQLStatementParser::InsertSpecificationContext *context) = 0;

    virtual antlrcpp::Any visitInsertValuesClause(MySQLStatementParser::InsertValuesClauseContext *context) = 0;

    virtual antlrcpp::Any visitFields(MySQLStatementParser::FieldsContext *context) = 0;

    virtual antlrcpp::Any visitInsertIdentifier(MySQLStatementParser::InsertIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitTableWild(MySQLStatementParser::TableWildContext *context) = 0;

    virtual antlrcpp::Any visitInsertSelectClause(MySQLStatementParser::InsertSelectClauseContext *context) = 0;

    virtual antlrcpp::Any visitOnDuplicateKeyClause(MySQLStatementParser::OnDuplicateKeyClauseContext *context) = 0;

    virtual antlrcpp::Any visitValueReference(MySQLStatementParser::ValueReferenceContext *context) = 0;

    virtual antlrcpp::Any visitDerivedColumns(MySQLStatementParser::DerivedColumnsContext *context) = 0;

    virtual antlrcpp::Any visitReplace(MySQLStatementParser::ReplaceContext *context) = 0;

    virtual antlrcpp::Any visitReplaceSpecification(MySQLStatementParser::ReplaceSpecificationContext *context) = 0;

    virtual antlrcpp::Any visitReplaceValuesClause(MySQLStatementParser::ReplaceValuesClauseContext *context) = 0;

    virtual antlrcpp::Any visitReplaceSelectClause(MySQLStatementParser::ReplaceSelectClauseContext *context) = 0;

    virtual antlrcpp::Any visitUpdate(MySQLStatementParser::UpdateContext *context) = 0;

    virtual antlrcpp::Any visitUpdateSpecification_(MySQLStatementParser::UpdateSpecification_Context *context) = 0;

    virtual antlrcpp::Any visitAssignment(MySQLStatementParser::AssignmentContext *context) = 0;

    virtual antlrcpp::Any visitSetAssignmentsClause(MySQLStatementParser::SetAssignmentsClauseContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentValues(MySQLStatementParser::AssignmentValuesContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentValue(MySQLStatementParser::AssignmentValueContext *context) = 0;

    virtual antlrcpp::Any visitBlobValue(MySQLStatementParser::BlobValueContext *context) = 0;

    virtual antlrcpp::Any visitDelete_stmt(MySQLStatementParser::Delete_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDeleteSpecification(MySQLStatementParser::DeleteSpecificationContext *context) = 0;

    virtual antlrcpp::Any visitSingleTableClause(MySQLStatementParser::SingleTableClauseContext *context) = 0;

    virtual antlrcpp::Any visitMultipleTablesClause(MySQLStatementParser::MultipleTablesClauseContext *context) = 0;

    virtual antlrcpp::Any visitSelect(MySQLStatementParser::SelectContext *context) = 0;

    virtual antlrcpp::Any visitSelectWithInto(MySQLStatementParser::SelectWithIntoContext *context) = 0;

    virtual antlrcpp::Any visitQueryExpression(MySQLStatementParser::QueryExpressionContext *context) = 0;

    virtual antlrcpp::Any visitQueryExpressionBody(MySQLStatementParser::QueryExpressionBodyContext *context) = 0;

    virtual antlrcpp::Any visitQueryExpressionParens(MySQLStatementParser::QueryExpressionParensContext *context) = 0;

    virtual antlrcpp::Any visitQueryPrimary(MySQLStatementParser::QueryPrimaryContext *context) = 0;

    virtual antlrcpp::Any visitQuerySpecification(MySQLStatementParser::QuerySpecificationContext *context) = 0;

    virtual antlrcpp::Any visitCall(MySQLStatementParser::CallContext *context) = 0;

    virtual antlrcpp::Any visitDoStatement(MySQLStatementParser::DoStatementContext *context) = 0;

    virtual antlrcpp::Any visitHandlerStatement(MySQLStatementParser::HandlerStatementContext *context) = 0;

    virtual antlrcpp::Any visitHandlerOpenStatement(MySQLStatementParser::HandlerOpenStatementContext *context) = 0;

    virtual antlrcpp::Any visitHandlerReadIndexStatement(MySQLStatementParser::HandlerReadIndexStatementContext *context) = 0;

    virtual antlrcpp::Any visitHandlerReadStatement(MySQLStatementParser::HandlerReadStatementContext *context) = 0;

    virtual antlrcpp::Any visitHandlerCloseStatement(MySQLStatementParser::HandlerCloseStatementContext *context) = 0;

    virtual antlrcpp::Any visitImportStatement(MySQLStatementParser::ImportStatementContext *context) = 0;

    virtual antlrcpp::Any visitLoadStatement(MySQLStatementParser::LoadStatementContext *context) = 0;

    virtual antlrcpp::Any visitLoadDataStatement(MySQLStatementParser::LoadDataStatementContext *context) = 0;

    virtual antlrcpp::Any visitLoadXmlStatement(MySQLStatementParser::LoadXmlStatementContext *context) = 0;

    virtual antlrcpp::Any visitExplicitTable(MySQLStatementParser::ExplicitTableContext *context) = 0;

    virtual antlrcpp::Any visitTableValueConstructor(MySQLStatementParser::TableValueConstructorContext *context) = 0;

    virtual antlrcpp::Any visitRowConstructorList(MySQLStatementParser::RowConstructorListContext *context) = 0;

    virtual antlrcpp::Any visitWithClause(MySQLStatementParser::WithClauseContext *context) = 0;

    virtual antlrcpp::Any visitCteClause(MySQLStatementParser::CteClauseContext *context) = 0;

    virtual antlrcpp::Any visitSelectSpecification(MySQLStatementParser::SelectSpecificationContext *context) = 0;

    virtual antlrcpp::Any visitDuplicateSpecification(MySQLStatementParser::DuplicateSpecificationContext *context) = 0;

    virtual antlrcpp::Any visitProjections(MySQLStatementParser::ProjectionsContext *context) = 0;

    virtual antlrcpp::Any visitProjection(MySQLStatementParser::ProjectionContext *context) = 0;

    virtual antlrcpp::Any visitUnqualifiedShorthand(MySQLStatementParser::UnqualifiedShorthandContext *context) = 0;

    virtual antlrcpp::Any visitQualifiedShorthand(MySQLStatementParser::QualifiedShorthandContext *context) = 0;

    virtual antlrcpp::Any visitFromClause(MySQLStatementParser::FromClauseContext *context) = 0;

    virtual antlrcpp::Any visitTableReferences(MySQLStatementParser::TableReferencesContext *context) = 0;

    virtual antlrcpp::Any visitEscapedTableReference(MySQLStatementParser::EscapedTableReferenceContext *context) = 0;

    virtual antlrcpp::Any visitTableReference(MySQLStatementParser::TableReferenceContext *context) = 0;

    virtual antlrcpp::Any visitTableFactor(MySQLStatementParser::TableFactorContext *context) = 0;

    virtual antlrcpp::Any visitPartitionNames(MySQLStatementParser::PartitionNamesContext *context) = 0;

    virtual antlrcpp::Any visitIndexHintList(MySQLStatementParser::IndexHintListContext *context) = 0;

    virtual antlrcpp::Any visitIndexHint(MySQLStatementParser::IndexHintContext *context) = 0;

    virtual antlrcpp::Any visitJoinedTable(MySQLStatementParser::JoinedTableContext *context) = 0;

    virtual antlrcpp::Any visitInnerJoinType(MySQLStatementParser::InnerJoinTypeContext *context) = 0;

    virtual antlrcpp::Any visitOuterJoinType(MySQLStatementParser::OuterJoinTypeContext *context) = 0;

    virtual antlrcpp::Any visitNaturalJoinType(MySQLStatementParser::NaturalJoinTypeContext *context) = 0;

    virtual antlrcpp::Any visitJoinSpecification(MySQLStatementParser::JoinSpecificationContext *context) = 0;

    virtual antlrcpp::Any visitWhereClause(MySQLStatementParser::WhereClauseContext *context) = 0;

    virtual antlrcpp::Any visitGroupByClause(MySQLStatementParser::GroupByClauseContext *context) = 0;

    virtual antlrcpp::Any visitHavingClause(MySQLStatementParser::HavingClauseContext *context) = 0;

    virtual antlrcpp::Any visitLimitClause(MySQLStatementParser::LimitClauseContext *context) = 0;

    virtual antlrcpp::Any visitLimitRowCount(MySQLStatementParser::LimitRowCountContext *context) = 0;

    virtual antlrcpp::Any visitLimitOffset(MySQLStatementParser::LimitOffsetContext *context) = 0;

    virtual antlrcpp::Any visitWindowClause(MySQLStatementParser::WindowClauseContext *context) = 0;

    virtual antlrcpp::Any visitWindowItem(MySQLStatementParser::WindowItemContext *context) = 0;

    virtual antlrcpp::Any visitSubquery(MySQLStatementParser::SubqueryContext *context) = 0;

    virtual antlrcpp::Any visitSelectLinesInto(MySQLStatementParser::SelectLinesIntoContext *context) = 0;

    virtual antlrcpp::Any visitSelectFieldsInto(MySQLStatementParser::SelectFieldsIntoContext *context) = 0;

    virtual antlrcpp::Any visitSelectIntoExpression(MySQLStatementParser::SelectIntoExpressionContext *context) = 0;

    virtual antlrcpp::Any visitLockClause(MySQLStatementParser::LockClauseContext *context) = 0;

    virtual antlrcpp::Any visitLockClauseList(MySQLStatementParser::LockClauseListContext *context) = 0;

    virtual antlrcpp::Any visitLockStrength(MySQLStatementParser::LockStrengthContext *context) = 0;

    virtual antlrcpp::Any visitLockedRowAction(MySQLStatementParser::LockedRowActionContext *context) = 0;

    virtual antlrcpp::Any visitTableLockingList(MySQLStatementParser::TableLockingListContext *context) = 0;

    virtual antlrcpp::Any visitTableIdentOptWild(MySQLStatementParser::TableIdentOptWildContext *context) = 0;

    virtual antlrcpp::Any visitTableAliasRefList(MySQLStatementParser::TableAliasRefListContext *context) = 0;

    virtual antlrcpp::Any visitAlterStatement(MySQLStatementParser::AlterStatementContext *context) = 0;

    virtual antlrcpp::Any visitCreateTable(MySQLStatementParser::CreateTableContext *context) = 0;

    virtual antlrcpp::Any visitPartitionClause(MySQLStatementParser::PartitionClauseContext *context) = 0;

    virtual antlrcpp::Any visitPartitionTypeDef(MySQLStatementParser::PartitionTypeDefContext *context) = 0;

    virtual antlrcpp::Any visitSubPartitions(MySQLStatementParser::SubPartitionsContext *context) = 0;

    virtual antlrcpp::Any visitPartitionKeyAlgorithm(MySQLStatementParser::PartitionKeyAlgorithmContext *context) = 0;

    virtual antlrcpp::Any visitDuplicateAsQueryExpression(MySQLStatementParser::DuplicateAsQueryExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAlterTable(MySQLStatementParser::AlterTableContext *context) = 0;

    virtual antlrcpp::Any visitStandaloneAlterTableAction(MySQLStatementParser::StandaloneAlterTableActionContext *context) = 0;

    virtual antlrcpp::Any visitAlterTableActions(MySQLStatementParser::AlterTableActionsContext *context) = 0;

    virtual antlrcpp::Any visitAlterTablePartitionOptions(MySQLStatementParser::AlterTablePartitionOptionsContext *context) = 0;

    virtual antlrcpp::Any visitAlterCommandList(MySQLStatementParser::AlterCommandListContext *context) = 0;

    virtual antlrcpp::Any visitAlterList(MySQLStatementParser::AlterListContext *context) = 0;

    virtual antlrcpp::Any visitCreateTableOptionsSpaceSeparated(MySQLStatementParser::CreateTableOptionsSpaceSeparatedContext *context) = 0;

    virtual antlrcpp::Any visitAddColumn(MySQLStatementParser::AddColumnContext *context) = 0;

    virtual antlrcpp::Any visitAddTableConstraint(MySQLStatementParser::AddTableConstraintContext *context) = 0;

    virtual antlrcpp::Any visitChangeColumn(MySQLStatementParser::ChangeColumnContext *context) = 0;

    virtual antlrcpp::Any visitModifyColumn(MySQLStatementParser::ModifyColumnContext *context) = 0;

    virtual antlrcpp::Any visitAlterTableDrop(MySQLStatementParser::AlterTableDropContext *context) = 0;

    virtual antlrcpp::Any visitDisableKeys(MySQLStatementParser::DisableKeysContext *context) = 0;

    virtual antlrcpp::Any visitEnableKeys(MySQLStatementParser::EnableKeysContext *context) = 0;

    virtual antlrcpp::Any visitAlterColumn(MySQLStatementParser::AlterColumnContext *context) = 0;

    virtual antlrcpp::Any visitAlterIndex(MySQLStatementParser::AlterIndexContext *context) = 0;

    virtual antlrcpp::Any visitAlterCheck(MySQLStatementParser::AlterCheckContext *context) = 0;

    virtual antlrcpp::Any visitAlterConstraint(MySQLStatementParser::AlterConstraintContext *context) = 0;

    virtual antlrcpp::Any visitRenameColumn(MySQLStatementParser::RenameColumnContext *context) = 0;

    virtual antlrcpp::Any visitAlterRenameTable(MySQLStatementParser::AlterRenameTableContext *context) = 0;

    virtual antlrcpp::Any visitRenameIndex(MySQLStatementParser::RenameIndexContext *context) = 0;

    virtual antlrcpp::Any visitAlterConvert(MySQLStatementParser::AlterConvertContext *context) = 0;

    virtual antlrcpp::Any visitAlterTableForce(MySQLStatementParser::AlterTableForceContext *context) = 0;

    virtual antlrcpp::Any visitAlterTableOrder(MySQLStatementParser::AlterTableOrderContext *context) = 0;

    virtual antlrcpp::Any visitAlterOrderList(MySQLStatementParser::AlterOrderListContext *context) = 0;

    virtual antlrcpp::Any visitTableConstraintDef(MySQLStatementParser::TableConstraintDefContext *context) = 0;

    virtual antlrcpp::Any visitAlterCommandsModifierList(MySQLStatementParser::AlterCommandsModifierListContext *context) = 0;

    virtual antlrcpp::Any visitAlterCommandsModifier(MySQLStatementParser::AlterCommandsModifierContext *context) = 0;

    virtual antlrcpp::Any visitWithValidation(MySQLStatementParser::WithValidationContext *context) = 0;

    virtual antlrcpp::Any visitStandaloneAlterCommands(MySQLStatementParser::StandaloneAlterCommandsContext *context) = 0;

    virtual antlrcpp::Any visitAlterPartition(MySQLStatementParser::AlterPartitionContext *context) = 0;

    virtual antlrcpp::Any visitConstraintName(MySQLStatementParser::ConstraintNameContext *context) = 0;

    virtual antlrcpp::Any visitTableElementList(MySQLStatementParser::TableElementListContext *context) = 0;

    virtual antlrcpp::Any visitTableElement(MySQLStatementParser::TableElementContext *context) = 0;

    virtual antlrcpp::Any visitRestrict(MySQLStatementParser::RestrictContext *context) = 0;

    virtual antlrcpp::Any visitFulltextIndexOption(MySQLStatementParser::FulltextIndexOptionContext *context) = 0;

    virtual antlrcpp::Any visitDropTable(MySQLStatementParser::DropTableContext *context) = 0;

    virtual antlrcpp::Any visitDropIndex(MySQLStatementParser::DropIndexContext *context) = 0;

    virtual antlrcpp::Any visitAlterAlgorithmOption(MySQLStatementParser::AlterAlgorithmOptionContext *context) = 0;

    virtual antlrcpp::Any visitAlterLockOption(MySQLStatementParser::AlterLockOptionContext *context) = 0;

    virtual antlrcpp::Any visitTruncateTable(MySQLStatementParser::TruncateTableContext *context) = 0;

    virtual antlrcpp::Any visitCreateIndex(MySQLStatementParser::CreateIndexContext *context) = 0;

    virtual antlrcpp::Any visitCreateDatabase(MySQLStatementParser::CreateDatabaseContext *context) = 0;

    virtual antlrcpp::Any visitAlterDatabase(MySQLStatementParser::AlterDatabaseContext *context) = 0;

    virtual antlrcpp::Any visitCreateDatabaseSpecification_(MySQLStatementParser::CreateDatabaseSpecification_Context *context) = 0;

    virtual antlrcpp::Any visitAlterDatabaseSpecification_(MySQLStatementParser::AlterDatabaseSpecification_Context *context) = 0;

    virtual antlrcpp::Any visitDropDatabase(MySQLStatementParser::DropDatabaseContext *context) = 0;

    virtual antlrcpp::Any visitAlterInstance(MySQLStatementParser::AlterInstanceContext *context) = 0;

    virtual antlrcpp::Any visitInstanceAction(MySQLStatementParser::InstanceActionContext *context) = 0;

    virtual antlrcpp::Any visitChannel(MySQLStatementParser::ChannelContext *context) = 0;

    virtual antlrcpp::Any visitCreateEvent(MySQLStatementParser::CreateEventContext *context) = 0;

    virtual antlrcpp::Any visitAlterEvent(MySQLStatementParser::AlterEventContext *context) = 0;

    virtual antlrcpp::Any visitDropEvent(MySQLStatementParser::DropEventContext *context) = 0;

    virtual antlrcpp::Any visitCreateFunction(MySQLStatementParser::CreateFunctionContext *context) = 0;

    virtual antlrcpp::Any visitAlterFunction(MySQLStatementParser::AlterFunctionContext *context) = 0;

    virtual antlrcpp::Any visitDropFunction(MySQLStatementParser::DropFunctionContext *context) = 0;

    virtual antlrcpp::Any visitCreateProcedure(MySQLStatementParser::CreateProcedureContext *context) = 0;

    virtual antlrcpp::Any visitAlterProcedure(MySQLStatementParser::AlterProcedureContext *context) = 0;

    virtual antlrcpp::Any visitDropProcedure(MySQLStatementParser::DropProcedureContext *context) = 0;

    virtual antlrcpp::Any visitCreateServer(MySQLStatementParser::CreateServerContext *context) = 0;

    virtual antlrcpp::Any visitAlterServer(MySQLStatementParser::AlterServerContext *context) = 0;

    virtual antlrcpp::Any visitDropServer(MySQLStatementParser::DropServerContext *context) = 0;

    virtual antlrcpp::Any visitCreateView(MySQLStatementParser::CreateViewContext *context) = 0;

    virtual antlrcpp::Any visitAlterView(MySQLStatementParser::AlterViewContext *context) = 0;

    virtual antlrcpp::Any visitDropView(MySQLStatementParser::DropViewContext *context) = 0;

    virtual antlrcpp::Any visitCreateTablespaceInnodb(MySQLStatementParser::CreateTablespaceInnodbContext *context) = 0;

    virtual antlrcpp::Any visitCreateTablespaceNdb(MySQLStatementParser::CreateTablespaceNdbContext *context) = 0;

    virtual antlrcpp::Any visitAlterTablespaceNdb(MySQLStatementParser::AlterTablespaceNdbContext *context) = 0;

    virtual antlrcpp::Any visitAlterTablespaceInnodb(MySQLStatementParser::AlterTablespaceInnodbContext *context) = 0;

    virtual antlrcpp::Any visitDropTablespace(MySQLStatementParser::DropTablespaceContext *context) = 0;

    virtual antlrcpp::Any visitCreateLogfileGroup(MySQLStatementParser::CreateLogfileGroupContext *context) = 0;

    virtual antlrcpp::Any visitAlterLogfileGroup(MySQLStatementParser::AlterLogfileGroupContext *context) = 0;

    virtual antlrcpp::Any visitDropLogfileGroup(MySQLStatementParser::DropLogfileGroupContext *context) = 0;

    virtual antlrcpp::Any visitCreateTrigger(MySQLStatementParser::CreateTriggerContext *context) = 0;

    virtual antlrcpp::Any visitDropTrigger(MySQLStatementParser::DropTriggerContext *context) = 0;

    virtual antlrcpp::Any visitRenameTable(MySQLStatementParser::RenameTableContext *context) = 0;

    virtual antlrcpp::Any visitCreateDefinitionClause(MySQLStatementParser::CreateDefinitionClauseContext *context) = 0;

    virtual antlrcpp::Any visitColumnDefinition(MySQLStatementParser::ColumnDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitFieldDefinition(MySQLStatementParser::FieldDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitColumnAttribute(MySQLStatementParser::ColumnAttributeContext *context) = 0;

    virtual antlrcpp::Any visitCheckConstraint(MySQLStatementParser::CheckConstraintContext *context) = 0;

    virtual antlrcpp::Any visitConstraintEnforcement(MySQLStatementParser::ConstraintEnforcementContext *context) = 0;

    virtual antlrcpp::Any visitGeneratedOption(MySQLStatementParser::GeneratedOptionContext *context) = 0;

    virtual antlrcpp::Any visitReferenceDefinition(MySQLStatementParser::ReferenceDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitOnUpdateDelete(MySQLStatementParser::OnUpdateDeleteContext *context) = 0;

    virtual antlrcpp::Any visitReferenceOption(MySQLStatementParser::ReferenceOptionContext *context) = 0;

    virtual antlrcpp::Any visitIndexNameAndType(MySQLStatementParser::IndexNameAndTypeContext *context) = 0;

    virtual antlrcpp::Any visitIndexType(MySQLStatementParser::IndexTypeContext *context) = 0;

    virtual antlrcpp::Any visitIndexTypeClause(MySQLStatementParser::IndexTypeClauseContext *context) = 0;

    virtual antlrcpp::Any visitKeyParts(MySQLStatementParser::KeyPartsContext *context) = 0;

    virtual antlrcpp::Any visitKeyPart(MySQLStatementParser::KeyPartContext *context) = 0;

    virtual antlrcpp::Any visitKeyPartWithExpression(MySQLStatementParser::KeyPartWithExpressionContext *context) = 0;

    virtual antlrcpp::Any visitKeyListWithExpression(MySQLStatementParser::KeyListWithExpressionContext *context) = 0;

    virtual antlrcpp::Any visitIndexOption(MySQLStatementParser::IndexOptionContext *context) = 0;

    virtual antlrcpp::Any visitCommonIndexOption(MySQLStatementParser::CommonIndexOptionContext *context) = 0;

    virtual antlrcpp::Any visitVisibility(MySQLStatementParser::VisibilityContext *context) = 0;

    virtual antlrcpp::Any visitCreateLikeClause(MySQLStatementParser::CreateLikeClauseContext *context) = 0;

    virtual antlrcpp::Any visitCreateIndexSpecification(MySQLStatementParser::CreateIndexSpecificationContext *context) = 0;

    virtual antlrcpp::Any visitCreateTableOptions(MySQLStatementParser::CreateTableOptionsContext *context) = 0;

    virtual antlrcpp::Any visitCreateTableOption(MySQLStatementParser::CreateTableOptionContext *context) = 0;

    virtual antlrcpp::Any visitCreateSRSStatement(MySQLStatementParser::CreateSRSStatementContext *context) = 0;

    virtual antlrcpp::Any visitDropSRSStatement(MySQLStatementParser::DropSRSStatementContext *context) = 0;

    virtual antlrcpp::Any visitSrsAttribute(MySQLStatementParser::SrsAttributeContext *context) = 0;

    virtual antlrcpp::Any visitPlace(MySQLStatementParser::PlaceContext *context) = 0;

    virtual antlrcpp::Any visitPartitionDefinitions(MySQLStatementParser::PartitionDefinitionsContext *context) = 0;

    virtual antlrcpp::Any visitPartitionDefinition(MySQLStatementParser::PartitionDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitPartitionLessThanValue(MySQLStatementParser::PartitionLessThanValueContext *context) = 0;

    virtual antlrcpp::Any visitPartitionValueList(MySQLStatementParser::PartitionValueListContext *context) = 0;

    virtual antlrcpp::Any visitPartitionDefinitionOption(MySQLStatementParser::PartitionDefinitionOptionContext *context) = 0;

    virtual antlrcpp::Any visitSubpartitionDefinition(MySQLStatementParser::SubpartitionDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitOwnerStatement(MySQLStatementParser::OwnerStatementContext *context) = 0;

    virtual antlrcpp::Any visitScheduleExpression(MySQLStatementParser::ScheduleExpressionContext *context) = 0;

    virtual antlrcpp::Any visitTimestampValue(MySQLStatementParser::TimestampValueContext *context) = 0;

    virtual antlrcpp::Any visitRoutineBody(MySQLStatementParser::RoutineBodyContext *context) = 0;

    virtual antlrcpp::Any visitServerOption(MySQLStatementParser::ServerOptionContext *context) = 0;

    virtual antlrcpp::Any visitRoutineOption(MySQLStatementParser::RoutineOptionContext *context) = 0;

    virtual antlrcpp::Any visitProcedureParameter(MySQLStatementParser::ProcedureParameterContext *context) = 0;

    virtual antlrcpp::Any visitFileSizeLiteral(MySQLStatementParser::FileSizeLiteralContext *context) = 0;

    virtual antlrcpp::Any visitSimpleStatement(MySQLStatementParser::SimpleStatementContext *context) = 0;

    virtual antlrcpp::Any visitCompoundStatement(MySQLStatementParser::CompoundStatementContext *context) = 0;

    virtual antlrcpp::Any visitValidStatement(MySQLStatementParser::ValidStatementContext *context) = 0;

    virtual antlrcpp::Any visitBeginStatement(MySQLStatementParser::BeginStatementContext *context) = 0;

    virtual antlrcpp::Any visitDeclareStatement(MySQLStatementParser::DeclareStatementContext *context) = 0;

    virtual antlrcpp::Any visitFlowControlStatement(MySQLStatementParser::FlowControlStatementContext *context) = 0;

    virtual antlrcpp::Any visitCaseStatement(MySQLStatementParser::CaseStatementContext *context) = 0;

    virtual antlrcpp::Any visitIfStatement(MySQLStatementParser::IfStatementContext *context) = 0;

    virtual antlrcpp::Any visitIterateStatement(MySQLStatementParser::IterateStatementContext *context) = 0;

    virtual antlrcpp::Any visitLeaveStatement(MySQLStatementParser::LeaveStatementContext *context) = 0;

    virtual antlrcpp::Any visitLoopStatement(MySQLStatementParser::LoopStatementContext *context) = 0;

    virtual antlrcpp::Any visitRepeatStatement(MySQLStatementParser::RepeatStatementContext *context) = 0;

    virtual antlrcpp::Any visitReturnStatement(MySQLStatementParser::ReturnStatementContext *context) = 0;

    virtual antlrcpp::Any visitWhileStatement(MySQLStatementParser::WhileStatementContext *context) = 0;

    virtual antlrcpp::Any visitCursorStatement(MySQLStatementParser::CursorStatementContext *context) = 0;

    virtual antlrcpp::Any visitCursorCloseStatement(MySQLStatementParser::CursorCloseStatementContext *context) = 0;

    virtual antlrcpp::Any visitCursorDeclareStatement(MySQLStatementParser::CursorDeclareStatementContext *context) = 0;

    virtual antlrcpp::Any visitCursorFetchStatement(MySQLStatementParser::CursorFetchStatementContext *context) = 0;

    virtual antlrcpp::Any visitCursorOpenStatement(MySQLStatementParser::CursorOpenStatementContext *context) = 0;

    virtual antlrcpp::Any visitConditionHandlingStatement(MySQLStatementParser::ConditionHandlingStatementContext *context) = 0;

    virtual antlrcpp::Any visitDeclareConditionStatement(MySQLStatementParser::DeclareConditionStatementContext *context) = 0;

    virtual antlrcpp::Any visitDeclareHandlerStatement(MySQLStatementParser::DeclareHandlerStatementContext *context) = 0;

    virtual antlrcpp::Any visitGetDiagnosticsStatement(MySQLStatementParser::GetDiagnosticsStatementContext *context) = 0;

    virtual antlrcpp::Any visitStatementInformationItem(MySQLStatementParser::StatementInformationItemContext *context) = 0;

    virtual antlrcpp::Any visitConditionInformationItem(MySQLStatementParser::ConditionInformationItemContext *context) = 0;

    virtual antlrcpp::Any visitConditionNumber(MySQLStatementParser::ConditionNumberContext *context) = 0;

    virtual antlrcpp::Any visitStatementInformationItemName(MySQLStatementParser::StatementInformationItemNameContext *context) = 0;

    virtual antlrcpp::Any visitConditionInformationItemName(MySQLStatementParser::ConditionInformationItemNameContext *context) = 0;

    virtual antlrcpp::Any visitHandlerAction(MySQLStatementParser::HandlerActionContext *context) = 0;

    virtual antlrcpp::Any visitConditionValue(MySQLStatementParser::ConditionValueContext *context) = 0;

    virtual antlrcpp::Any visitResignalStatement(MySQLStatementParser::ResignalStatementContext *context) = 0;

    virtual antlrcpp::Any visitSignalStatement(MySQLStatementParser::SignalStatementContext *context) = 0;

    virtual antlrcpp::Any visitSignalInformationItem(MySQLStatementParser::SignalInformationItemContext *context) = 0;

    virtual antlrcpp::Any visitSetTransaction(MySQLStatementParser::SetTransactionContext *context) = 0;

    virtual antlrcpp::Any visitSetAutoCommit(MySQLStatementParser::SetAutoCommitContext *context) = 0;

    virtual antlrcpp::Any visitAutoCommitValue(MySQLStatementParser::AutoCommitValueContext *context) = 0;

    virtual antlrcpp::Any visitBeginTransaction(MySQLStatementParser::BeginTransactionContext *context) = 0;

    virtual antlrcpp::Any visitCommit(MySQLStatementParser::CommitContext *context) = 0;

    virtual antlrcpp::Any visitRollback(MySQLStatementParser::RollbackContext *context) = 0;

    virtual antlrcpp::Any visitSavepoint(MySQLStatementParser::SavepointContext *context) = 0;

    virtual antlrcpp::Any visitBegin(MySQLStatementParser::BeginContext *context) = 0;

    virtual antlrcpp::Any visitLock(MySQLStatementParser::LockContext *context) = 0;

    virtual antlrcpp::Any visitUnlock(MySQLStatementParser::UnlockContext *context) = 0;

    virtual antlrcpp::Any visitReleaseSavepoint(MySQLStatementParser::ReleaseSavepointContext *context) = 0;

    virtual antlrcpp::Any visitXa(MySQLStatementParser::XaContext *context) = 0;

    virtual antlrcpp::Any visitTransactionCharacteristic(MySQLStatementParser::TransactionCharacteristicContext *context) = 0;

    virtual antlrcpp::Any visitLevel(MySQLStatementParser::LevelContext *context) = 0;

    virtual antlrcpp::Any visitAccessMode(MySQLStatementParser::AccessModeContext *context) = 0;

    virtual antlrcpp::Any visitOptionChain(MySQLStatementParser::OptionChainContext *context) = 0;

    virtual antlrcpp::Any visitOptionRelease(MySQLStatementParser::OptionReleaseContext *context) = 0;

    virtual antlrcpp::Any visitTableLock(MySQLStatementParser::TableLockContext *context) = 0;

    virtual antlrcpp::Any visitLockOption(MySQLStatementParser::LockOptionContext *context) = 0;

    virtual antlrcpp::Any visitXid(MySQLStatementParser::XidContext *context) = 0;

    virtual antlrcpp::Any visitGrant(MySQLStatementParser::GrantContext *context) = 0;

    virtual antlrcpp::Any visitRevoke(MySQLStatementParser::RevokeContext *context) = 0;

    virtual antlrcpp::Any visitProxyClause(MySQLStatementParser::ProxyClauseContext *context) = 0;

    virtual antlrcpp::Any visitPrivilegeClause(MySQLStatementParser::PrivilegeClauseContext *context) = 0;

    virtual antlrcpp::Any visitRoleClause(MySQLStatementParser::RoleClauseContext *context) = 0;

    virtual antlrcpp::Any visitAllClause(MySQLStatementParser::AllClauseContext *context) = 0;

    virtual antlrcpp::Any visitPrivileges(MySQLStatementParser::PrivilegesContext *context) = 0;

    virtual antlrcpp::Any visitPrivilege(MySQLStatementParser::PrivilegeContext *context) = 0;

    virtual antlrcpp::Any visitPrivilegeType(MySQLStatementParser::PrivilegeTypeContext *context) = 0;

    virtual antlrcpp::Any visitOnObjectClause(MySQLStatementParser::OnObjectClauseContext *context) = 0;

    virtual antlrcpp::Any visitObjectType(MySQLStatementParser::ObjectTypeContext *context) = 0;

    virtual antlrcpp::Any visitPrivilegeLevel(MySQLStatementParser::PrivilegeLevelContext *context) = 0;

    virtual antlrcpp::Any visitCreateUser(MySQLStatementParser::CreateUserContext *context) = 0;

    virtual antlrcpp::Any visitDefaultRoleClause(MySQLStatementParser::DefaultRoleClauseContext *context) = 0;

    virtual antlrcpp::Any visitRequireClause(MySQLStatementParser::RequireClauseContext *context) = 0;

    virtual antlrcpp::Any visitConnectOptions(MySQLStatementParser::ConnectOptionsContext *context) = 0;

    virtual antlrcpp::Any visitAccountLockPasswordExpireOptions(MySQLStatementParser::AccountLockPasswordExpireOptionsContext *context) = 0;

    virtual antlrcpp::Any visitAccountLockPasswordExpireOption(MySQLStatementParser::AccountLockPasswordExpireOptionContext *context) = 0;

    virtual antlrcpp::Any visitAlterUser(MySQLStatementParser::AlterUserContext *context) = 0;

    virtual antlrcpp::Any visitAlterUserEntry(MySQLStatementParser::AlterUserEntryContext *context) = 0;

    virtual antlrcpp::Any visitAlterUserList(MySQLStatementParser::AlterUserListContext *context) = 0;

    virtual antlrcpp::Any visitDropUser(MySQLStatementParser::DropUserContext *context) = 0;

    virtual antlrcpp::Any visitCreateRole(MySQLStatementParser::CreateRoleContext *context) = 0;

    virtual antlrcpp::Any visitDropRole(MySQLStatementParser::DropRoleContext *context) = 0;

    virtual antlrcpp::Any visitRenameUser(MySQLStatementParser::RenameUserContext *context) = 0;

    virtual antlrcpp::Any visitSetDefaultRole(MySQLStatementParser::SetDefaultRoleContext *context) = 0;

    virtual antlrcpp::Any visitSetRole(MySQLStatementParser::SetRoleContext *context) = 0;

    virtual antlrcpp::Any visitSetPassword(MySQLStatementParser::SetPasswordContext *context) = 0;

    virtual antlrcpp::Any visitAuthOption(MySQLStatementParser::AuthOptionContext *context) = 0;

    virtual antlrcpp::Any visitWithGrantOption(MySQLStatementParser::WithGrantOptionContext *context) = 0;

    virtual antlrcpp::Any visitUserOrRoles(MySQLStatementParser::UserOrRolesContext *context) = 0;

    virtual antlrcpp::Any visitRoles(MySQLStatementParser::RolesContext *context) = 0;

    virtual antlrcpp::Any visitGrantOption(MySQLStatementParser::GrantOptionContext *context) = 0;

    virtual antlrcpp::Any visitUserAuthOption(MySQLStatementParser::UserAuthOptionContext *context) = 0;

    virtual antlrcpp::Any visitIdentifiedBy(MySQLStatementParser::IdentifiedByContext *context) = 0;

    virtual antlrcpp::Any visitIdentifiedWith(MySQLStatementParser::IdentifiedWithContext *context) = 0;

    virtual antlrcpp::Any visitConnectOption(MySQLStatementParser::ConnectOptionContext *context) = 0;

    virtual antlrcpp::Any visitTlsOption(MySQLStatementParser::TlsOptionContext *context) = 0;

    virtual antlrcpp::Any visitUserFuncAuthOption(MySQLStatementParser::UserFuncAuthOptionContext *context) = 0;

    virtual antlrcpp::Any visitUse(MySQLStatementParser::UseContext *context) = 0;

    virtual antlrcpp::Any visitHelp(MySQLStatementParser::HelpContext *context) = 0;

    virtual antlrcpp::Any visitExplain(MySQLStatementParser::ExplainContext *context) = 0;

    virtual antlrcpp::Any visitShowDatabases(MySQLStatementParser::ShowDatabasesContext *context) = 0;

    virtual antlrcpp::Any visitShowTables(MySQLStatementParser::ShowTablesContext *context) = 0;

    virtual antlrcpp::Any visitShowTableStatus(MySQLStatementParser::ShowTableStatusContext *context) = 0;

    virtual antlrcpp::Any visitShowColumns(MySQLStatementParser::ShowColumnsContext *context) = 0;

    virtual antlrcpp::Any visitShowIndex(MySQLStatementParser::ShowIndexContext *context) = 0;

    virtual antlrcpp::Any visitShowCreateTable(MySQLStatementParser::ShowCreateTableContext *context) = 0;

    virtual antlrcpp::Any visitFromSchema(MySQLStatementParser::FromSchemaContext *context) = 0;

    virtual antlrcpp::Any visitFromTable(MySQLStatementParser::FromTableContext *context) = 0;

    virtual antlrcpp::Any visitShowLike(MySQLStatementParser::ShowLikeContext *context) = 0;

    virtual antlrcpp::Any visitShowColumnLike(MySQLStatementParser::ShowColumnLikeContext *context) = 0;

    virtual antlrcpp::Any visitShowWhereClause(MySQLStatementParser::ShowWhereClauseContext *context) = 0;

    virtual antlrcpp::Any visitShowFilter(MySQLStatementParser::ShowFilterContext *context) = 0;

    virtual antlrcpp::Any visitShowProfileType(MySQLStatementParser::ShowProfileTypeContext *context) = 0;

    virtual antlrcpp::Any visitSetVariable(MySQLStatementParser::SetVariableContext *context) = 0;

    virtual antlrcpp::Any visitVariableAssign(MySQLStatementParser::VariableAssignContext *context) = 0;

    virtual antlrcpp::Any visitShowBinaryLogs(MySQLStatementParser::ShowBinaryLogsContext *context) = 0;

    virtual antlrcpp::Any visitShowBinlogEvents(MySQLStatementParser::ShowBinlogEventsContext *context) = 0;

    virtual antlrcpp::Any visitShowCharacterSet(MySQLStatementParser::ShowCharacterSetContext *context) = 0;

    virtual antlrcpp::Any visitShowCollation(MySQLStatementParser::ShowCollationContext *context) = 0;

    virtual antlrcpp::Any visitShowCreateDatabase(MySQLStatementParser::ShowCreateDatabaseContext *context) = 0;

    virtual antlrcpp::Any visitShowCreateEvent(MySQLStatementParser::ShowCreateEventContext *context) = 0;

    virtual antlrcpp::Any visitShowCreateFunction(MySQLStatementParser::ShowCreateFunctionContext *context) = 0;

    virtual antlrcpp::Any visitShowCreateProcedure(MySQLStatementParser::ShowCreateProcedureContext *context) = 0;

    virtual antlrcpp::Any visitShowCreateTrigger(MySQLStatementParser::ShowCreateTriggerContext *context) = 0;

    virtual antlrcpp::Any visitShowCreateUser(MySQLStatementParser::ShowCreateUserContext *context) = 0;

    virtual antlrcpp::Any visitShowCreateView(MySQLStatementParser::ShowCreateViewContext *context) = 0;

    virtual antlrcpp::Any visitShowEngine(MySQLStatementParser::ShowEngineContext *context) = 0;

    virtual antlrcpp::Any visitShowEngines(MySQLStatementParser::ShowEnginesContext *context) = 0;

    virtual antlrcpp::Any visitShowErrors(MySQLStatementParser::ShowErrorsContext *context) = 0;

    virtual antlrcpp::Any visitShowEvents(MySQLStatementParser::ShowEventsContext *context) = 0;

    virtual antlrcpp::Any visitShowFunctionCode(MySQLStatementParser::ShowFunctionCodeContext *context) = 0;

    virtual antlrcpp::Any visitShowFunctionStatus(MySQLStatementParser::ShowFunctionStatusContext *context) = 0;

    virtual antlrcpp::Any visitShowGrant(MySQLStatementParser::ShowGrantContext *context) = 0;

    virtual antlrcpp::Any visitShowMasterStatus(MySQLStatementParser::ShowMasterStatusContext *context) = 0;

    virtual antlrcpp::Any visitShowOpenTables(MySQLStatementParser::ShowOpenTablesContext *context) = 0;

    virtual antlrcpp::Any visitShowPlugins(MySQLStatementParser::ShowPluginsContext *context) = 0;

    virtual antlrcpp::Any visitShowPrivileges(MySQLStatementParser::ShowPrivilegesContext *context) = 0;

    virtual antlrcpp::Any visitShowProcedureCode(MySQLStatementParser::ShowProcedureCodeContext *context) = 0;

    virtual antlrcpp::Any visitShowProcedureStatus(MySQLStatementParser::ShowProcedureStatusContext *context) = 0;

    virtual antlrcpp::Any visitShowProcesslist(MySQLStatementParser::ShowProcesslistContext *context) = 0;

    virtual antlrcpp::Any visitShowProfile(MySQLStatementParser::ShowProfileContext *context) = 0;

    virtual antlrcpp::Any visitShowProfiles(MySQLStatementParser::ShowProfilesContext *context) = 0;

    virtual antlrcpp::Any visitShowRelaylogEvent(MySQLStatementParser::ShowRelaylogEventContext *context) = 0;

    virtual antlrcpp::Any visitShowSlavehost(MySQLStatementParser::ShowSlavehostContext *context) = 0;

    virtual antlrcpp::Any visitShowSlaveStatus(MySQLStatementParser::ShowSlaveStatusContext *context) = 0;

    virtual antlrcpp::Any visitShowStatus(MySQLStatementParser::ShowStatusContext *context) = 0;

    virtual antlrcpp::Any visitShowTrriggers(MySQLStatementParser::ShowTrriggersContext *context) = 0;

    virtual antlrcpp::Any visitShowVariables(MySQLStatementParser::ShowVariablesContext *context) = 0;

    virtual antlrcpp::Any visitShowWarnings(MySQLStatementParser::ShowWarningsContext *context) = 0;

    virtual antlrcpp::Any visitSetCharacter(MySQLStatementParser::SetCharacterContext *context) = 0;

    virtual antlrcpp::Any visitSetName(MySQLStatementParser::SetNameContext *context) = 0;

    virtual antlrcpp::Any visitClone(MySQLStatementParser::CloneContext *context) = 0;

    virtual antlrcpp::Any visitCloneAction(MySQLStatementParser::CloneActionContext *context) = 0;

    virtual antlrcpp::Any visitCreateUdf(MySQLStatementParser::CreateUdfContext *context) = 0;

    virtual antlrcpp::Any visitInstall(MySQLStatementParser::InstallContext *context) = 0;

    virtual antlrcpp::Any visitUninstall(MySQLStatementParser::UninstallContext *context) = 0;

    virtual antlrcpp::Any visitInstallComponent(MySQLStatementParser::InstallComponentContext *context) = 0;

    virtual antlrcpp::Any visitInstallPlugin(MySQLStatementParser::InstallPluginContext *context) = 0;

    virtual antlrcpp::Any visitUninstallComponent(MySQLStatementParser::UninstallComponentContext *context) = 0;

    virtual antlrcpp::Any visitUninstallPlugin(MySQLStatementParser::UninstallPluginContext *context) = 0;

    virtual antlrcpp::Any visitAnalyzeTable(MySQLStatementParser::AnalyzeTableContext *context) = 0;

    virtual antlrcpp::Any visitHistogram(MySQLStatementParser::HistogramContext *context) = 0;

    virtual antlrcpp::Any visitCheckTable(MySQLStatementParser::CheckTableContext *context) = 0;

    virtual antlrcpp::Any visitCheckTableOption(MySQLStatementParser::CheckTableOptionContext *context) = 0;

    virtual antlrcpp::Any visitChecksumTable(MySQLStatementParser::ChecksumTableContext *context) = 0;

    virtual antlrcpp::Any visitOptimizeTable(MySQLStatementParser::OptimizeTableContext *context) = 0;

    virtual antlrcpp::Any visitRepairTable(MySQLStatementParser::RepairTableContext *context) = 0;

    virtual antlrcpp::Any visitAlterResourceGroup(MySQLStatementParser::AlterResourceGroupContext *context) = 0;

    virtual antlrcpp::Any visitVcpuSpec(MySQLStatementParser::VcpuSpecContext *context) = 0;

    virtual antlrcpp::Any visitCreateResourceGroup(MySQLStatementParser::CreateResourceGroupContext *context) = 0;

    virtual antlrcpp::Any visitDropResourceGroup(MySQLStatementParser::DropResourceGroupContext *context) = 0;

    virtual antlrcpp::Any visitSetResourceGroup(MySQLStatementParser::SetResourceGroupContext *context) = 0;

    virtual antlrcpp::Any visitBinlog(MySQLStatementParser::BinlogContext *context) = 0;

    virtual antlrcpp::Any visitCacheIndex(MySQLStatementParser::CacheIndexContext *context) = 0;

    virtual antlrcpp::Any visitTableIndexList(MySQLStatementParser::TableIndexListContext *context) = 0;

    virtual antlrcpp::Any visitPartitionList(MySQLStatementParser::PartitionListContext *context) = 0;

    virtual antlrcpp::Any visitFlush(MySQLStatementParser::FlushContext *context) = 0;

    virtual antlrcpp::Any visitFlushOption(MySQLStatementParser::FlushOptionContext *context) = 0;

    virtual antlrcpp::Any visitTablesOption(MySQLStatementParser::TablesOptionContext *context) = 0;

    virtual antlrcpp::Any visitKill(MySQLStatementParser::KillContext *context) = 0;

    virtual antlrcpp::Any visitLoadIndexInfo(MySQLStatementParser::LoadIndexInfoContext *context) = 0;

    virtual antlrcpp::Any visitResetStatement(MySQLStatementParser::ResetStatementContext *context) = 0;

    virtual antlrcpp::Any visitResetOption(MySQLStatementParser::ResetOptionContext *context) = 0;

    virtual antlrcpp::Any visitResetPersist(MySQLStatementParser::ResetPersistContext *context) = 0;

    virtual antlrcpp::Any visitRestart(MySQLStatementParser::RestartContext *context) = 0;

    virtual antlrcpp::Any visitShutdown(MySQLStatementParser::ShutdownContext *context) = 0;

    virtual antlrcpp::Any visitExplainType(MySQLStatementParser::ExplainTypeContext *context) = 0;

    virtual antlrcpp::Any visitExplainableStatement(MySQLStatementParser::ExplainableStatementContext *context) = 0;

    virtual antlrcpp::Any visitFormatName(MySQLStatementParser::FormatNameContext *context) = 0;

    virtual antlrcpp::Any visitShow(MySQLStatementParser::ShowContext *context) = 0;

    virtual antlrcpp::Any visitChange(MySQLStatementParser::ChangeContext *context) = 0;

    virtual antlrcpp::Any visitChangeMasterTo(MySQLStatementParser::ChangeMasterToContext *context) = 0;

    virtual antlrcpp::Any visitChangeReplicationFilter(MySQLStatementParser::ChangeReplicationFilterContext *context) = 0;

    virtual antlrcpp::Any visitStartSlave(MySQLStatementParser::StartSlaveContext *context) = 0;

    virtual antlrcpp::Any visitStopSlave(MySQLStatementParser::StopSlaveContext *context) = 0;

    virtual antlrcpp::Any visitGroupReplication(MySQLStatementParser::GroupReplicationContext *context) = 0;

    virtual antlrcpp::Any visitStartGroupReplication(MySQLStatementParser::StartGroupReplicationContext *context) = 0;

    virtual antlrcpp::Any visitStopGroupReplication(MySQLStatementParser::StopGroupReplicationContext *context) = 0;

    virtual antlrcpp::Any visitPurgeBinaryLog(MySQLStatementParser::PurgeBinaryLogContext *context) = 0;

    virtual antlrcpp::Any visitThreadTypes(MySQLStatementParser::ThreadTypesContext *context) = 0;

    virtual antlrcpp::Any visitThreadType(MySQLStatementParser::ThreadTypeContext *context) = 0;

    virtual antlrcpp::Any visitUtilOption(MySQLStatementParser::UtilOptionContext *context) = 0;

    virtual antlrcpp::Any visitConnectionOptions(MySQLStatementParser::ConnectionOptionsContext *context) = 0;

    virtual antlrcpp::Any visitMasterDefs(MySQLStatementParser::MasterDefsContext *context) = 0;

    virtual antlrcpp::Any visitMasterDef(MySQLStatementParser::MasterDefContext *context) = 0;

    virtual antlrcpp::Any visitIgnoreServerIds(MySQLStatementParser::IgnoreServerIdsContext *context) = 0;

    virtual antlrcpp::Any visitIgnoreServerId(MySQLStatementParser::IgnoreServerIdContext *context) = 0;

    virtual antlrcpp::Any visitFilterDefs(MySQLStatementParser::FilterDefsContext *context) = 0;

    virtual antlrcpp::Any visitFilterDef(MySQLStatementParser::FilterDefContext *context) = 0;

    virtual antlrcpp::Any visitWildTables(MySQLStatementParser::WildTablesContext *context) = 0;

    virtual antlrcpp::Any visitWildTable(MySQLStatementParser::WildTableContext *context) = 0;

    virtual antlrcpp::Any visitParameterMarker(MySQLStatementParser::ParameterMarkerContext *context) = 0;

    virtual antlrcpp::Any visitCustomKeyword(MySQLStatementParser::CustomKeywordContext *context) = 0;

    virtual antlrcpp::Any visitLiterals(MySQLStatementParser::LiteralsContext *context) = 0;

    virtual antlrcpp::Any visitString_(MySQLStatementParser::String_Context *context) = 0;

    virtual antlrcpp::Any visitStringLiterals(MySQLStatementParser::StringLiteralsContext *context) = 0;

    virtual antlrcpp::Any visitNumberLiterals(MySQLStatementParser::NumberLiteralsContext *context) = 0;

    virtual antlrcpp::Any visitTemporalLiterals(MySQLStatementParser::TemporalLiteralsContext *context) = 0;

    virtual antlrcpp::Any visitHexadecimalLiterals(MySQLStatementParser::HexadecimalLiteralsContext *context) = 0;

    virtual antlrcpp::Any visitBitValueLiterals(MySQLStatementParser::BitValueLiteralsContext *context) = 0;

    virtual antlrcpp::Any visitBooleanLiterals(MySQLStatementParser::BooleanLiteralsContext *context) = 0;

    virtual antlrcpp::Any visitNullValueLiterals(MySQLStatementParser::NullValueLiteralsContext *context) = 0;

    virtual antlrcpp::Any visitCollationName(MySQLStatementParser::CollationNameContext *context) = 0;

    virtual antlrcpp::Any visitIdentifier(MySQLStatementParser::IdentifierContext *context) = 0;

    virtual antlrcpp::Any visitUnreservedWord(MySQLStatementParser::UnreservedWordContext *context) = 0;

    virtual antlrcpp::Any visitTextOrIdentifier(MySQLStatementParser::TextOrIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitVariable(MySQLStatementParser::VariableContext *context) = 0;

    virtual antlrcpp::Any visitUserVariable(MySQLStatementParser::UserVariableContext *context) = 0;

    virtual antlrcpp::Any visitSystemVariable(MySQLStatementParser::SystemVariableContext *context) = 0;

    virtual antlrcpp::Any visitScope(MySQLStatementParser::ScopeContext *context) = 0;

    virtual antlrcpp::Any visitInternalVariableName(MySQLStatementParser::InternalVariableNameContext *context) = 0;

    virtual antlrcpp::Any visitSetExprOrDefault(MySQLStatementParser::SetExprOrDefaultContext *context) = 0;

    virtual antlrcpp::Any visitSchemaName(MySQLStatementParser::SchemaNameContext *context) = 0;

    virtual antlrcpp::Any visitSchemaNames(MySQLStatementParser::SchemaNamesContext *context) = 0;

    virtual antlrcpp::Any visitCharsetName(MySQLStatementParser::CharsetNameContext *context) = 0;

    virtual antlrcpp::Any visitSchemaPairs(MySQLStatementParser::SchemaPairsContext *context) = 0;

    virtual antlrcpp::Any visitSchemaPair(MySQLStatementParser::SchemaPairContext *context) = 0;

    virtual antlrcpp::Any visitTableName(MySQLStatementParser::TableNameContext *context) = 0;

    virtual antlrcpp::Any visitColumnName(MySQLStatementParser::ColumnNameContext *context) = 0;

    virtual antlrcpp::Any visitIndexName(MySQLStatementParser::IndexNameContext *context) = 0;

    virtual antlrcpp::Any visitUserIdentifierOrText(MySQLStatementParser::UserIdentifierOrTextContext *context) = 0;

    virtual antlrcpp::Any visitUserName(MySQLStatementParser::UserNameContext *context) = 0;

    virtual antlrcpp::Any visitEventName(MySQLStatementParser::EventNameContext *context) = 0;

    virtual antlrcpp::Any visitServerName(MySQLStatementParser::ServerNameContext *context) = 0;

    virtual antlrcpp::Any visitWrapperName(MySQLStatementParser::WrapperNameContext *context) = 0;

    virtual antlrcpp::Any visitFunctionName(MySQLStatementParser::FunctionNameContext *context) = 0;

    virtual antlrcpp::Any visitViewName(MySQLStatementParser::ViewNameContext *context) = 0;

    virtual antlrcpp::Any visitOwner(MySQLStatementParser::OwnerContext *context) = 0;

    virtual antlrcpp::Any visitAlias(MySQLStatementParser::AliasContext *context) = 0;

    virtual antlrcpp::Any visitName(MySQLStatementParser::NameContext *context) = 0;

    virtual antlrcpp::Any visitTableList(MySQLStatementParser::TableListContext *context) = 0;

    virtual antlrcpp::Any visitViewNames(MySQLStatementParser::ViewNamesContext *context) = 0;

    virtual antlrcpp::Any visitColumnNames(MySQLStatementParser::ColumnNamesContext *context) = 0;

    virtual antlrcpp::Any visitGroupName(MySQLStatementParser::GroupNameContext *context) = 0;

    virtual antlrcpp::Any visitRoutineName(MySQLStatementParser::RoutineNameContext *context) = 0;

    virtual antlrcpp::Any visitShardLibraryName(MySQLStatementParser::ShardLibraryNameContext *context) = 0;

    virtual antlrcpp::Any visitComponentName(MySQLStatementParser::ComponentNameContext *context) = 0;

    virtual antlrcpp::Any visitPluginName(MySQLStatementParser::PluginNameContext *context) = 0;

    virtual antlrcpp::Any visitHostName(MySQLStatementParser::HostNameContext *context) = 0;

    virtual antlrcpp::Any visitPort(MySQLStatementParser::PortContext *context) = 0;

    virtual antlrcpp::Any visitCloneInstance(MySQLStatementParser::CloneInstanceContext *context) = 0;

    virtual antlrcpp::Any visitCloneDir(MySQLStatementParser::CloneDirContext *context) = 0;

    virtual antlrcpp::Any visitChannelName(MySQLStatementParser::ChannelNameContext *context) = 0;

    virtual antlrcpp::Any visitLogName(MySQLStatementParser::LogNameContext *context) = 0;

    virtual antlrcpp::Any visitRoleName(MySQLStatementParser::RoleNameContext *context) = 0;

    virtual antlrcpp::Any visitEngineRef(MySQLStatementParser::EngineRefContext *context) = 0;

    virtual antlrcpp::Any visitTriggerName(MySQLStatementParser::TriggerNameContext *context) = 0;

    virtual antlrcpp::Any visitTriggerTime(MySQLStatementParser::TriggerTimeContext *context) = 0;

    virtual antlrcpp::Any visitTableOrTables(MySQLStatementParser::TableOrTablesContext *context) = 0;

    virtual antlrcpp::Any visitUserOrRole(MySQLStatementParser::UserOrRoleContext *context) = 0;

    virtual antlrcpp::Any visitPartitionName(MySQLStatementParser::PartitionNameContext *context) = 0;

    virtual antlrcpp::Any visitIdentifierList(MySQLStatementParser::IdentifierListContext *context) = 0;

    virtual antlrcpp::Any visitAllOrPartitionNameList(MySQLStatementParser::AllOrPartitionNameListContext *context) = 0;

    virtual antlrcpp::Any visitTriggerEvent(MySQLStatementParser::TriggerEventContext *context) = 0;

    virtual antlrcpp::Any visitTriggerOrder(MySQLStatementParser::TriggerOrderContext *context) = 0;

    virtual antlrcpp::Any visitExpr(MySQLStatementParser::ExprContext *context) = 0;

    virtual antlrcpp::Any visitLogicalOperator(MySQLStatementParser::LogicalOperatorContext *context) = 0;

    virtual antlrcpp::Any visitNotOperator(MySQLStatementParser::NotOperatorContext *context) = 0;

    virtual antlrcpp::Any visitBooleanPrimary(MySQLStatementParser::BooleanPrimaryContext *context) = 0;

    virtual antlrcpp::Any visitComparisonOperator(MySQLStatementParser::ComparisonOperatorContext *context) = 0;

    virtual antlrcpp::Any visitPredicate(MySQLStatementParser::PredicateContext *context) = 0;

    virtual antlrcpp::Any visitBitExpr(MySQLStatementParser::BitExprContext *context) = 0;

    virtual antlrcpp::Any visitSimpleExpr(MySQLStatementParser::SimpleExprContext *context) = 0;

    virtual antlrcpp::Any visitColumnRef(MySQLStatementParser::ColumnRefContext *context) = 0;

    virtual antlrcpp::Any visitColumnRefList(MySQLStatementParser::ColumnRefListContext *context) = 0;

    virtual antlrcpp::Any visitFunctionCall(MySQLStatementParser::FunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitAggregationFunction(MySQLStatementParser::AggregationFunctionContext *context) = 0;

    virtual antlrcpp::Any visitAggregationFunctionName(MySQLStatementParser::AggregationFunctionNameContext *context) = 0;

    virtual antlrcpp::Any visitDistinct(MySQLStatementParser::DistinctContext *context) = 0;

    virtual antlrcpp::Any visitOverClause(MySQLStatementParser::OverClauseContext *context) = 0;

    virtual antlrcpp::Any visitWindowSpecification(MySQLStatementParser::WindowSpecificationContext *context) = 0;

    virtual antlrcpp::Any visitFrameClause(MySQLStatementParser::FrameClauseContext *context) = 0;

    virtual antlrcpp::Any visitFrameStart(MySQLStatementParser::FrameStartContext *context) = 0;

    virtual antlrcpp::Any visitFrameEnd(MySQLStatementParser::FrameEndContext *context) = 0;

    virtual antlrcpp::Any visitFrameBetween(MySQLStatementParser::FrameBetweenContext *context) = 0;

    virtual antlrcpp::Any visitSpecialFunction(MySQLStatementParser::SpecialFunctionContext *context) = 0;

    virtual antlrcpp::Any visitCurrentUserFunction(MySQLStatementParser::CurrentUserFunctionContext *context) = 0;

    virtual antlrcpp::Any visitGroupConcatFunction(MySQLStatementParser::GroupConcatFunctionContext *context) = 0;

    virtual antlrcpp::Any visitWindowFunction(MySQLStatementParser::WindowFunctionContext *context) = 0;

    virtual antlrcpp::Any visitWindowingClause(MySQLStatementParser::WindowingClauseContext *context) = 0;

    virtual antlrcpp::Any visitLeadLagInfo(MySQLStatementParser::LeadLagInfoContext *context) = 0;

    virtual antlrcpp::Any visitNullTreatment(MySQLStatementParser::NullTreatmentContext *context) = 0;

    virtual antlrcpp::Any visitCheckType(MySQLStatementParser::CheckTypeContext *context) = 0;

    virtual antlrcpp::Any visitRepairType(MySQLStatementParser::RepairTypeContext *context) = 0;

    virtual antlrcpp::Any visitCastFunction(MySQLStatementParser::CastFunctionContext *context) = 0;

    virtual antlrcpp::Any visitConvertFunction(MySQLStatementParser::ConvertFunctionContext *context) = 0;

    virtual antlrcpp::Any visitCastType(MySQLStatementParser::CastTypeContext *context) = 0;

    virtual antlrcpp::Any visitNchar(MySQLStatementParser::NcharContext *context) = 0;

    virtual antlrcpp::Any visitPositionFunction(MySQLStatementParser::PositionFunctionContext *context) = 0;

    virtual antlrcpp::Any visitSubstringFunction(MySQLStatementParser::SubstringFunctionContext *context) = 0;

    virtual antlrcpp::Any visitExtractFunction(MySQLStatementParser::ExtractFunctionContext *context) = 0;

    virtual antlrcpp::Any visitCharFunction(MySQLStatementParser::CharFunctionContext *context) = 0;

    virtual antlrcpp::Any visitTrimFunction(MySQLStatementParser::TrimFunctionContext *context) = 0;

    virtual antlrcpp::Any visitValuesFunction(MySQLStatementParser::ValuesFunctionContext *context) = 0;

    virtual antlrcpp::Any visitWeightStringFunction(MySQLStatementParser::WeightStringFunctionContext *context) = 0;

    virtual antlrcpp::Any visitLevelClause(MySQLStatementParser::LevelClauseContext *context) = 0;

    virtual antlrcpp::Any visitLevelInWeightListElement(MySQLStatementParser::LevelInWeightListElementContext *context) = 0;

    virtual antlrcpp::Any visitRegularFunction(MySQLStatementParser::RegularFunctionContext *context) = 0;

    virtual antlrcpp::Any visitShorthandRegularFunction(MySQLStatementParser::ShorthandRegularFunctionContext *context) = 0;

    virtual antlrcpp::Any visitCompleteRegularFunction(MySQLStatementParser::CompleteRegularFunctionContext *context) = 0;

    virtual antlrcpp::Any visitRegularFunctionName(MySQLStatementParser::RegularFunctionNameContext *context) = 0;

    virtual antlrcpp::Any visitMatchExpression(MySQLStatementParser::MatchExpressionContext *context) = 0;

    virtual antlrcpp::Any visitMatchSearchModifier(MySQLStatementParser::MatchSearchModifierContext *context) = 0;

    virtual antlrcpp::Any visitCaseExpression(MySQLStatementParser::CaseExpressionContext *context) = 0;

    virtual antlrcpp::Any visitDatetimeExpr(MySQLStatementParser::DatetimeExprContext *context) = 0;

    virtual antlrcpp::Any visitBinaryLogFileIndexNumber(MySQLStatementParser::BinaryLogFileIndexNumberContext *context) = 0;

    virtual antlrcpp::Any visitCaseWhen(MySQLStatementParser::CaseWhenContext *context) = 0;

    virtual antlrcpp::Any visitCaseElse(MySQLStatementParser::CaseElseContext *context) = 0;

    virtual antlrcpp::Any visitIntervalExpression(MySQLStatementParser::IntervalExpressionContext *context) = 0;

    virtual antlrcpp::Any visitIntervalValue(MySQLStatementParser::IntervalValueContext *context) = 0;

    virtual antlrcpp::Any visitIntervalUnit(MySQLStatementParser::IntervalUnitContext *context) = 0;

    virtual antlrcpp::Any visitOrderByClause(MySQLStatementParser::OrderByClauseContext *context) = 0;

    virtual antlrcpp::Any visitOrderByItem(MySQLStatementParser::OrderByItemContext *context) = 0;

    virtual antlrcpp::Any visitDataType(MySQLStatementParser::DataTypeContext *context) = 0;

    virtual antlrcpp::Any visitStringList(MySQLStatementParser::StringListContext *context) = 0;

    virtual antlrcpp::Any visitTextString(MySQLStatementParser::TextStringContext *context) = 0;

    virtual antlrcpp::Any visitTextStringHash(MySQLStatementParser::TextStringHashContext *context) = 0;

    virtual antlrcpp::Any visitFieldOptions(MySQLStatementParser::FieldOptionsContext *context) = 0;

    virtual antlrcpp::Any visitPrecision(MySQLStatementParser::PrecisionContext *context) = 0;

    virtual antlrcpp::Any visitTypeDatetimePrecision(MySQLStatementParser::TypeDatetimePrecisionContext *context) = 0;

    virtual antlrcpp::Any visitCharsetWithOptBinary(MySQLStatementParser::CharsetWithOptBinaryContext *context) = 0;

    virtual antlrcpp::Any visitAscii(MySQLStatementParser::AsciiContext *context) = 0;

    virtual antlrcpp::Any visitUnicode(MySQLStatementParser::UnicodeContext *context) = 0;

    virtual antlrcpp::Any visitCharset(MySQLStatementParser::CharsetContext *context) = 0;

    virtual antlrcpp::Any visitDefaultCollation(MySQLStatementParser::DefaultCollationContext *context) = 0;

    virtual antlrcpp::Any visitDefaultEncryption(MySQLStatementParser::DefaultEncryptionContext *context) = 0;

    virtual antlrcpp::Any visitDefaultCharset(MySQLStatementParser::DefaultCharsetContext *context) = 0;

    virtual antlrcpp::Any visitSignedLiteral(MySQLStatementParser::SignedLiteralContext *context) = 0;

    virtual antlrcpp::Any visitNow(MySQLStatementParser::NowContext *context) = 0;

    virtual antlrcpp::Any visitColumnFormat(MySQLStatementParser::ColumnFormatContext *context) = 0;

    virtual antlrcpp::Any visitStorageMedia(MySQLStatementParser::StorageMediaContext *context) = 0;

    virtual antlrcpp::Any visitDirection(MySQLStatementParser::DirectionContext *context) = 0;

    virtual antlrcpp::Any visitKeyOrIndex(MySQLStatementParser::KeyOrIndexContext *context) = 0;

    virtual antlrcpp::Any visitFieldLength(MySQLStatementParser::FieldLengthContext *context) = 0;

    virtual antlrcpp::Any visitCharacterSet(MySQLStatementParser::CharacterSetContext *context) = 0;

    virtual antlrcpp::Any visitCollateClause(MySQLStatementParser::CollateClauseContext *context) = 0;

    virtual antlrcpp::Any visitFieldOrVarSpec(MySQLStatementParser::FieldOrVarSpecContext *context) = 0;

    virtual antlrcpp::Any visitNotExistClause(MySQLStatementParser::NotExistClauseContext *context) = 0;

    virtual antlrcpp::Any visitExistClause(MySQLStatementParser::ExistClauseContext *context) = 0;

    virtual antlrcpp::Any visitConnectionId(MySQLStatementParser::ConnectionIdContext *context) = 0;

    virtual antlrcpp::Any visitLabelName(MySQLStatementParser::LabelNameContext *context) = 0;

    virtual antlrcpp::Any visitCursorName(MySQLStatementParser::CursorNameContext *context) = 0;

    virtual antlrcpp::Any visitConditionName(MySQLStatementParser::ConditionNameContext *context) = 0;

    virtual antlrcpp::Any visitUnionOption(MySQLStatementParser::UnionOptionContext *context) = 0;

    virtual antlrcpp::Any visitNoWriteToBinLog(MySQLStatementParser::NoWriteToBinLogContext *context) = 0;

    virtual antlrcpp::Any visitChannelOption(MySQLStatementParser::ChannelOptionContext *context) = 0;

    virtual antlrcpp::Any visitPreparedStatement(MySQLStatementParser::PreparedStatementContext *context) = 0;

    virtual antlrcpp::Any visitExecuteStatement(MySQLStatementParser::ExecuteStatementContext *context) = 0;

    virtual antlrcpp::Any visitExecuteVarList(MySQLStatementParser::ExecuteVarListContext *context) = 0;


};


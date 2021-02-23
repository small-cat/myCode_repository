/*
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

parser grammar MySQLStatementParser;

options {
    tokenVocab=MySQLStatementLexer;
}

execute
    : (select
    | insert
    | update
    | delete_stmt
    | replace
    | binlog
    | createTable
    | alterStatement
    | repairTable
    | dropTable
    | truncateTable
    | createIndex
    | dropIndex
    | createProcedure
    | dropProcedure
    | createFunction
    | dropFunction
    | createDatabase
    | dropDatabase
    | createEvent
    | dropEvent
    | createLogfileGroup
    | dropLogfileGroup
    | createServer
    | dropServer
    | createView
    | dropView
    | createTrigger
    | dropTrigger
    | alterResourceGroup
    | createResourceGroup
    | dropResourceGroup
    | preparedStatement
    | setTransaction
    | beginTransaction
    | setAutoCommit
    | commit
    | rollback
    | savepoint
    | grant
    | revoke
    | createUser
    | dropUser
    | alterUser
    | renameUser
    | createRole
    | dropRole
    | setDefaultRole
    | setRole
    | createTablespaceInnodb
    | createTablespaceNdb
    | dropTablespace
    | createSRSStatement
    | dropSRSStatement
    | flush
    | getDiagnosticsStatement
    | groupReplication
    | handlerStatement
    | help
    | importStatement
    | install
    | kill
    | loadStatement
    | lock
    | cacheIndex
    | loadIndexInfo
    | optimizeTable
    | purgeBinaryLog
    | releaseSavepoint
    | resetStatement
    | setPassword
    | setTransaction
    | setResourceGroup
    | resignalStatement
    | signalStatement
    | restart
    | shutdown
    | begin
    | use
    | explain
    | doStatement
    | show
    | setVariable
    | setName
    | setCharacter
    | call
    | change
    | checkTable
    | checksumTable
    | clone
    | startSlave
    | stopSlave
    | analyzeTable
    | renameTable
    | uninstall
    | unlock
    | xa
    ) (SEMI_ EOF? | EOF)
    ;

// dml statement
insert
    : INSERT insertSpecification INTO? tableName partitionNames? (insertValuesClause | setAssignmentsClause | insertSelectClause) onDuplicateKeyClause?
    ;

insertSpecification
    : (LOW_PRIORITY | DELAYED | HIGH_PRIORITY)? IGNORE?
    ;

insertValuesClause
    : (LP_ fields? RP_ )? (VALUES | VALUE) (assignmentValues (COMMA_ assignmentValues)* | rowConstructorList) valueReference?
    ;

fields
    : insertIdentifier (COMMA_ insertIdentifier)*
    ;

insertIdentifier
    : columnRef | tableWild
    ;

tableWild
    : identifier DOT_ (identifier DOT_)? ASTERISK_
    ;

insertSelectClause
    : valueReference? (LP_ fields? RP_)? select
    ;

onDuplicateKeyClause
    : ON DUPLICATE KEY UPDATE assignment (COMMA_ assignment)*
    ;

valueReference
    : AS alias derivedColumns?
    ;

derivedColumns
    : LP_ alias (COMMA_ alias)* RP_
    ;

replace
    : REPLACE replaceSpecification? INTO? tableName partitionNames? (replaceValuesClause | setAssignmentsClause | replaceSelectClause)
    ;

replaceSpecification
    : LOW_PRIORITY | DELAYED
    ;

replaceValuesClause
    : (LP_ fields? RP_)? (VALUES | VALUE) (assignmentValues (COMMA_ assignmentValues)* | rowConstructorList) valueReference?
    ;

replaceSelectClause
    : valueReference? (LP_ fields? RP_)? select
    ;

update
    : withClause? UPDATE updateSpecification_ tableReferences setAssignmentsClause whereClause? orderByClause? limitClause?
    ;

updateSpecification_
    : LOW_PRIORITY? IGNORE?
    ;

assignment
    : columnRef EQ_ assignmentValue
    ;

setAssignmentsClause
    : valueReference? SET assignment (COMMA_ assignment)*
    ;

assignmentValues
    : LP_ assignmentValue (COMMA_ assignmentValue)* RP_
    | LP_ RP_
    ;

assignmentValue
    : expr | DEFAULT | blobValue
    ;

blobValue
    : UL_BINARY string_
    ;

delete_stmt
    : DELETE deleteSpecification (singleTableClause | multipleTablesClause) whereClause? orderByClause? limitClause?
    ;

deleteSpecification
    : LOW_PRIORITY? QUICK? IGNORE?
    ;

singleTableClause
    : FROM tableName (AS? alias)? partitionNames?
    ;

multipleTablesClause
    : tableAliasRefList FROM tableReferences | FROM tableAliasRefList USING tableReferences
    ;

select
    : queryExpression lockClauseList?
    | queryExpressionParens
    | selectWithInto
    ;

selectWithInto
    : LP_ selectWithInto RP_
    | queryExpression selectIntoExpression lockClauseList?
    | queryExpression lockClauseList selectIntoExpression
    ;

queryExpression
    : withClause? (queryExpressionBody | queryExpressionParens) orderByClause? limitClause?
    ;

queryExpressionBody
    : queryPrimary
    | queryExpressionParens UNION unionOption? (queryPrimary | queryExpressionParens)
    | queryExpressionBody UNION unionOption? (queryPrimary | queryExpressionParens)
    ;

queryExpressionParens
    : LP_ (queryExpressionParens | queryExpression lockClauseList?) RP_
    ;

queryPrimary
    : querySpecification
    | tableValueConstructor
    | explicitTable
    ;

querySpecification
    : SELECT selectSpecification* projections selectIntoExpression? fromClause? whereClause? groupByClause? havingClause? windowClause?
    ;

call
    : CALL identifier (LP_ (expr (COMMA_ expr)*)? RP_)?
    ;

doStatement
    : DO expr (COMMA_ expr)*
    ;

handlerStatement
    : handlerOpenStatement | handlerReadIndexStatement | handlerReadStatement | handlerCloseStatement
    ;

handlerOpenStatement
    : HANDLER tableName OPEN (AS? identifier)?
    ;

handlerReadIndexStatement
    : HANDLER tableName READ indexName ( comparisonOperator LP_ identifier RP_ | (FIRST | NEXT | PREV | LAST) )
    whereClause? limitClause?
    ;

handlerReadStatement
    : HANDLER tableName READ (FIRST | NEXT)
    whereClause? limitClause?
    ;

handlerCloseStatement
    : HANDLER tableName CLOSE
    ;

importStatement
    : IMPORT TABLE FROM string_ (COMMA_ string_)?
    ;

loadStatement
    : loadDataStatement | loadXmlStatement
    ;

loadDataStatement
    : LOAD DATA
      (LOW_PRIORITY | CONCURRENT)? LOCAL? 
      INFILE string_
      (REPLACE | IGNORE)?
      INTO TABLE tableName partitionNames?
      (CHARACTER SET identifier)?
      ((FIELDS | COLUMNS) selectFieldsInto+ )?
      ( LINES selectLinesInto+ )?
      ( IGNORE numberLiterals (LINES | ROWS) )?
      fieldOrVarSpec?
      (setAssignmentsClause)?
    ;

loadXmlStatement
    : LOAD XML
      (LOW_PRIORITY | CONCURRENT)? LOCAL? 
      INFILE string_
      (REPLACE | IGNORE)?
      INTO TABLE tableName
      (CHARACTER SET identifier)?
      (ROWS IDENTIFIED BY LT_ string_ GT_)?
      ( IGNORE numberLiterals (LINES | ROWS) )?
      fieldOrVarSpec?
      (setAssignmentsClause)?
    ;

explicitTable
    : TABLE tableName
    ;

tableValueConstructor
    : VALUES rowConstructorList
    ;

rowConstructorList
    : ROW assignmentValues (COMMA_ ROW assignmentValues)*
    ;

withClause
    : WITH RECURSIVE? cteClause (COMMA_ cteClause)*
    ;

cteClause
    : identifier (LP_ columnNames RP_)? AS subquery
    ;

selectSpecification
    : duplicateSpecification | HIGH_PRIORITY | STRAIGHT_JOIN | SQL_SMALL_RESULT | SQL_BIG_RESULT | SQL_BUFFER_RESULT | (SQL_CACHE | SQL_NO_CACHE) | SQL_CALC_FOUND_ROWS
    ;

duplicateSpecification
    : ALL | DISTINCT | DISTINCTROW
    ;

projections
    : (unqualifiedShorthand | projection) (COMMA_ projection)*
    ;

projection
    : expr (AS? alias)? | qualifiedShorthand
    ;

unqualifiedShorthand
    : ASTERISK_
    ;

qualifiedShorthand
    : identifier DOT_ASTERISK_
    ;

fromClause
    : FROM (DUAL | tableReferences)
    ;

tableReferences
    : tableReference (COMMA_ tableReference)*
    ;

escapedTableReference
    : tableFactor joinedTable*
    ;

tableReference
    : (tableFactor | LBE_ OJ escapedTableReference RBE_) joinedTable*
    ;

tableFactor
    : tableName partitionNames? (AS? alias)? indexHintList? | subquery AS? alias (LP_ columnNames RP_)? | LP_ tableReferences RP_
    ;

partitionNames
    : PARTITION LP_ identifier (COMMA_ identifier)* RP_
    ;

indexHintList
    : indexHint (COMMA_ indexHint)*
    ;

indexHint
    : (USE | IGNORE | FORCE) (INDEX | KEY) (FOR (JOIN | ORDER BY | GROUP BY))? LP_ indexName (COMMA_ indexName)* RP_
    ;

joinedTable
    : innerJoinType tableReference joinSpecification?
    | outerJoinType tableReference joinSpecification
    | naturalJoinType tableFactor
    ;

innerJoinType
    : (INNER | CROSS)? JOIN
    | STRAIGHT_JOIN
    ;

outerJoinType
    : (LEFT | RIGHT) OUTER? JOIN
    ;

naturalJoinType
    : NATURAL INNER? JOIN
    | NATURAL (LEFT | RIGHT) OUTER? JOIN
    ;

joinSpecification
    : ON expr | USING LP_ columnNames RP_
    ;

whereClause
    : WHERE expr
    ;

groupByClause
    : GROUP BY orderByItem (COMMA_ orderByItem)* (WITH ROLLUP)?
    ;

havingClause
    : HAVING expr
    ;

limitClause
    : LIMIT ((limitOffset COMMA_)? limitRowCount | limitRowCount OFFSET limitOffset)
    ;

limitRowCount
    : numberLiterals | parameterMarker
    ;
    
limitOffset
    : numberLiterals | parameterMarker
    ;

windowClause
    : WINDOW windowItem (COMMA_ windowItem)*
    ;

windowItem
    : identifier AS LP_ windowSpecification RP_
    ;

subquery
    : queryExpressionParens
    ;

selectLinesInto
    : STARTING BY string_ | TERMINATED BY string_
    ;

selectFieldsInto
    : TERMINATED BY string_ | OPTIONALLY? ENCLOSED BY string_ | ESCAPED BY string_
    ;

selectIntoExpression
    : INTO variable (COMMA_ variable )* | INTO DUMPFILE string_
    | (INTO OUTFILE string_ (CHARACTER SET charsetName)?((FIELDS | COLUMNS) selectFieldsInto+)? (LINES selectLinesInto+)?)
    ;

lockClause
    : FOR lockStrength tableLockingList? lockedRowAction?
    | LOCK IN SHARE MODE
    ;

lockClauseList
    : lockClause+
    ;

lockStrength
    : UPDATE | SHARE
    ;

lockedRowAction
    : SKIP_SYMBOL LOCKED | NOWAIT
    ;

tableLockingList
    : OF tableAliasRefList
    ;

tableIdentOptWild
    : tableName DOT_ASTERISK_?
    ;

tableAliasRefList
    : tableIdentOptWild (COMMA_ tableIdentOptWild)*
    ;

// ddl statement
alterStatement
    : alterTable
    | alterDatabase
    | alterProcedure
    | alterFunction
    | alterEvent
    | alterView
    | alterTablespaceInnodb
    | alterTablespaceNdb
    | alterLogfileGroup
    | alterInstance
    | alterServer
    ;

createTable
    : CREATE TEMPORARY? TABLE notExistClause? tableName (createDefinitionClause? createTableOptions? partitionClause? duplicateAsQueryExpression? | createLikeClause)
    ;

partitionClause
    : PARTITION BY partitionTypeDef (PARTITIONS NUMBER_)? subPartitions? partitionDefinitions?
    ;

partitionTypeDef
    : LINEAR? KEY partitionKeyAlgorithm? LP_ columnNames? RP_
    | LINEAR? HASH LP_ bitExpr RP_
    | (RANGE | LIST) (LP_ bitExpr RP_ | COLUMNS LP_ columnNames RP_ )
    ;

subPartitions
    : SUBPARTITION BY LINEAR? ( HASH LP_ bitExpr RP_ | KEY partitionKeyAlgorithm? LP_ columnNames RP_ ) (SUBPARTITIONS NUMBER_)?
    ;

partitionKeyAlgorithm
    : ALGORITHM EQ_ NUMBER_
    ;

duplicateAsQueryExpression
    : (REPLACE | IGNORE)? AS? LP_? select RP_?
    ;

alterTable
    : ALTER TABLE tableName alterTableActions?
    | ALTER TABLE tableName standaloneAlterTableAction
    ;

standaloneAlterTableAction
    : (alterCommandsModifierList COMMA_)? standaloneAlterCommands
    ;

alterTableActions
    : alterCommandList alterTablePartitionOptions?
    | alterTablePartitionOptions
    ;

alterTablePartitionOptions
    : partitionClause | REMOVE PARTITIONING
    ;

alterCommandList
    : alterCommandsModifierList
    | (alterCommandsModifierList COMMA_)? alterList
    ;

alterList
    : (alterListItem | createTableOptionsSpaceSeparated) (COMMA_ (alterListItem | alterCommandsModifier| createTableOptionsSpaceSeparated))*
    ;

createTableOptionsSpaceSeparated
    : createTableOption+
    ;

alterListItem
    : ADD COLUMN? (columnDefinition place? | LP_ tableElementList RP_)  # addColumn
    | ADD tableConstraintDef  # addTableConstraint
    | CHANGE COLUMN? columnInternalRef=identifier columnDefinition place?  # changeColumn
    | MODIFY COLUMN? columnInternalRef=identifier fieldDefinition place?   # modifyColumn
    | DROP (COLUMN? columnInternalRef=identifier restrict? | FOREIGN KEY columnInternalRef=identifier | PRIMARY KEY | keyOrIndex indexName | CHECK identifier | CONSTRAINT identifier)  # alterTableDrop
    | DISABLE KEYS  # disableKeys
    | ENABLE KEYS   # enableKeys
    | ALTER COLUMN? columnInternalRef=identifier (SET DEFAULT (LP_ expr RP_| signedLiteral)| DROP DEFAULT) # alterColumn
    | ALTER INDEX indexName visibility  # alterIndex
    | ALTER CHECK identifier constraintEnforcement  # alterCheck
    | ALTER CONSTRAINT identifier constraintEnforcement # alterConstraint
    | RENAME COLUMN columnInternalRef=identifier TO identifier  # renameColumn
    | RENAME (TO | AS)? tableName # alterRenameTable
    | RENAME keyOrIndex indexName TO indexName  # renameIndex
    | CONVERT TO charset charsetName collateClause?  # alterConvert
    | FORCE  # alterTableForce
    | ORDER BY alterOrderList  # alterTableOrder
    ;

alterOrderList
    : identifier direction? (COMMA_ identifier direction?)*
    ;

tableConstraintDef
    : keyOrIndex indexNameAndType? keyListWithExpression indexOption*
    | FULLTEXT keyOrIndex? indexName? keyListWithExpression fulltextIndexOption*
    | SPATIAL keyOrIndex? indexName? keyListWithExpression commonIndexOption*
    | constraintName? (PRIMARY KEY | UNIQUE keyOrIndex?) indexNameAndType? keyListWithExpression indexOption*
    | constraintName? FOREIGN KEY indexName? keyParts referenceDefinition
    | constraintName? checkConstraint (constraintEnforcement)?
    ;

alterCommandsModifierList
    : alterCommandsModifier (COMMA_ alterCommandsModifier)*
    ;

alterCommandsModifier
    : alterAlgorithmOption
    | alterLockOption
    | withValidation
    ;

withValidation
    : (WITH | WITHOUT) VALIDATION
    ;

standaloneAlterCommands
    : DISCARD TABLESPACE
    | IMPORT TABLESPACE
    | alterPartition
    | (SECONDARY_LOAD | SECONDARY_UNLOAD)
    ;

alterPartition
    : ADD PARTITION noWriteToBinLog? (partitionDefinitions | PARTITIONS NUMBER_)
    | DROP PARTITION identifierList
    | REBUILD PARTITION noWriteToBinLog? allOrPartitionNameList
    | OPTIMIZE PARTITION noWriteToBinLog? allOrPartitionNameList noWriteToBinLog?
    | ANALYZE PARTITION noWriteToBinLog? allOrPartitionNameList
    | CHECK PARTITION allOrPartitionNameList checkType*
    | REPAIR PARTITION noWriteToBinLog? allOrPartitionNameList repairType*
    | COALESCE PARTITION noWriteToBinLog? NUMBER_
    | TRUNCATE PARTITION allOrPartitionNameList
    | REORGANIZE PARTITION noWriteToBinLog? (identifierList INTO partitionDefinitions)?
    | EXCHANGE PARTITION identifier WITH TABLE tableName withValidation?
    | DISCARD PARTITION allOrPartitionNameList TABLESPACE
    | IMPORT PARTITION allOrPartitionNameList TABLESPACE
    ;

constraintName
    : CONSTRAINT identifier?
    ;

tableElementList
    : tableElement (COMMA_ tableElement)*
    ;

tableElement
    : columnDefinition
    | tableConstraintDef
    ;

restrict
    : RESTRICT | CASCADE
    ;

fulltextIndexOption
    : commonIndexOption
    | WITH PARSER identifier
    ;

//partitionNames
//    : partitionName (COMMA_ partitionName)*
//    ;

dropTable
    : DROP TEMPORARY? tableOrTables existClause? tableList restrict?
    ;

dropIndex
    : DROP INDEX indexName (ON tableName)?
    (alterAlgorithmOption | alterLockOption)*
    ;

alterAlgorithmOption
    : ALGORITHM EQ_? (DEFAULT | INSTANT | INPLACE | COPY)
    ;

alterLockOption
    : LOCK EQ_? (DEFAULT | NONE | M_SHARED | M_EXCLUSIVE)
    ;

truncateTable
    : TRUNCATE TABLE? tableName
    ;

createIndex
    : CREATE createIndexSpecification? INDEX indexName indexTypeClause? ON tableName keyListWithExpression indexOption?
    (alterAlgorithmOption | alterLockOption)*
    ;

createDatabase
    : CREATE (DATABASE | SCHEMA) notExistClause? schemaName createDatabaseSpecification_*
    ;

alterDatabase
    : ALTER (DATABASE | SCHEMA) schemaName? alterDatabaseSpecification_*
    ;

createDatabaseSpecification_
    : defaultCharset
    | defaultCollation
    | defaultEncryption
    ;
    
alterDatabaseSpecification_
    : createDatabaseSpecification_ 
    | READ ONLY EQ_? (DEFAULT | NUMBER_)
    ;

dropDatabase
    : DROP (DATABASE | SCHEMA) existClause? schemaName
    ;

alterInstance
    : ALTER INSTANCE instanceAction
    ;

instanceAction
    : (ENABLE | DISABLE) INNODB REDO_LOG
    | ROTATE INNODB MASTER KEY
    | ROTATE BINLOG MASTER KEY
    | RELOAD TLS (FOR CHANNEL channel)? (NO ROLLBACK ON ERROR)?
    ;

channel
    : MYSQL_MAIN | MYSQL_ADMIN
    ;

createEvent
    : CREATE ownerStatement? EVENT notExistClause? eventName
      ON SCHEDULE scheduleExpression
      (ON COMPLETION NOT? PRESERVE)? 
      (ENABLE | DISABLE | DISABLE ON SLAVE)?
      (COMMENT string_)?
      DO routineBody
    ;

alterEvent
    : ALTER ownerStatement? EVENT eventName
      (ON SCHEDULE scheduleExpression)?
      (ON COMPLETION NOT? PRESERVE)?
      (RENAME TO eventName)? (ENABLE | DISABLE | DISABLE ON SLAVE)?
      (COMMENT string_)?
      (DO routineBody)?
    ;

dropEvent
    :  DROP EVENT existClause? eventName
    ;

createFunction
    : CREATE ownerStatement?
      FUNCTION functionName LP_ (identifier dataType)? (COMMA_ identifier dataType)* RP_
      RETURNS dataType
      routineOption*
      routineBody
    ;

alterFunction
    : ALTER FUNCTION functionName routineOption*
    ;

dropFunction
    : DROP FUNCTION existClause? functionName
    ;

createProcedure
    : CREATE ownerStatement?
      PROCEDURE functionName LP_ procedureParameter? (COMMA_ procedureParameter)* RP_
      routineOption*
      routineBody
    ;

alterProcedure
    : ALTER PROCEDURE functionName routineOption*
    ;

dropProcedure
    : DROP PROCEDURE existClause? functionName
    ;

createServer
    : CREATE SERVER serverName
      FOREIGN DATA WRAPPER wrapperName
      OPTIONS LP_ serverOption (COMMA_ serverOption)* RP_
    ;

alterServer
    : ALTER SERVER serverName OPTIONS
      LP_ serverOption (COMMA_ serverOption)* RP_
    ;

dropServer
    : DROP SERVER existClause? serverName
    ;

createView
    : CREATE (OR REPLACE)?
      (ALGORITHM EQ_ (UNDEFINED | MERGE | TEMPTABLE))?
      ownerStatement?
      (SQL SECURITY (DEFINER | INVOKER))?
      VIEW viewName (LP_ columnNames RP_)?
      AS select
      (WITH (CASCADED | LOCAL)? CHECK OPTION)?
    ;

alterView
    : ALTER (ALGORITHM EQ_ (UNDEFINED | MERGE | TEMPTABLE))?
      ownerStatement?
      (SQL SECURITY (DEFINER | INVOKER))?
      VIEW viewName (LP_ columnNames RP_)?
      AS select
      (WITH (CASCADED | LOCAL)? CHECK OPTION)?
    ;

dropView
    : DROP VIEW existClause? viewNames restrict?
    ;

createTablespaceInnodb
    : CREATE (UNDO)? TABLESPACE identifier
      ADD DATAFILE string_
      (FILE_BLOCK_SIZE EQ_ fileSizeLiteral)?
      (ENCRYPTION EQ_ y_or_n=string_)?
      (ENGINE EQ_? string_)?
    ;

createTablespaceNdb
    : CREATE ( UNDO )? TABLESPACE identifier
      ADD DATAFILE string_
      USE LOGFILE GROUP identifier
      (EXTENT_SIZE EQ_? fileSizeLiteral)?
      (INITIAL_SIZE EQ_? fileSizeLiteral)?
      (AUTOEXTEND_SIZE EQ_? fileSizeLiteral)?
      (MAX_SIZE EQ_? fileSizeLiteral)?
      (NODEGROUP EQ_? identifier)?
      WAIT?
      (COMMENT EQ_? string_)?
      (ENGINE EQ_? identifier)?
    ;

alterTablespaceNdb
    : ALTER UNDO? TABLESPACE identifier
      (ADD | DROP) DATAFILE string_
      (INITIAL_SIZE EQ_ fileSizeLiteral)?
      WAIT? (RENAME TO identifier)?
      (ENGINE EQ_? identifier)?
    ;

alterTablespaceInnodb
    : ALTER UNDO? TABLESPACE identifier
      (SET (ACTIVE | INACTIVE))? (ENCRYPTION EQ_? y_or_n=string_)
      (RENAME TO identifier)?
      (ENGINE EQ_? identifier)?
    ;

dropTablespace
    : DROP UNDO? TABLESPACE identifier (ENGINE EQ_? identifier)?
    ;

createLogfileGroup
    : CREATE LOGFILE GROUP identifier
      ADD UNDOFILE string_
      (INITIAL_SIZE EQ_? fileSizeLiteral)?
      (UNDO_BUFFER_SIZE EQ_? fileSizeLiteral)?
      (REDO_BUFFER_SIZE EQ_? fileSizeLiteral)?
      (NODEGROUP EQ_? identifier)?
      WAIT?
      (COMMENT EQ_? string_)?
      (ENGINE EQ_? identifier)?
    ;

alterLogfileGroup
    : ALTER LOGFILE GROUP identifier
      ADD UNDOFILE string_
      (INITIAL_SIZE EQ_? fileSizeLiteral)?
      WAIT? 
      (ENGINE EQ_? identifier)?
    ;

dropLogfileGroup
    : DROP LOGFILE GROUP identifier (ENGINE EQ_? identifier)?
    ;

createTrigger
    :  CREATE ownerStatement? TRIGGER triggerName triggerTime triggerEvent ON tableName FOR EACH ROW triggerOrder? routineBody
    ;

dropTrigger
    : DROP TRIGGER existClause? (schemaName DOT_)? triggerName
    ;

renameTable
    : RENAME TABLE tableName TO tableName (tableName TO tableName)*
    ;

createDefinitionClause
    : LP_ tableElementList RP_
    ;

columnDefinition
    : column_name=identifier fieldDefinition referenceDefinition?
    ;

fieldDefinition
    : dataType (columnAttribute* | collateClause? generatedOption? AS LP_ expr RP_ storedAttribute=(VIRTUAL | STORED)? columnAttribute*)
    ;

columnAttribute
    : NOT? NULL
    | NOT SECONDARY
    | value = DEFAULT (signedLiteral | now | LP_ expr RP_)
    | value = ON UPDATE now
    | value = AUTO_INCREMENT
    | value = SERIAL DEFAULT VALUE
    | PRIMARY? value = KEY
    | value = UNIQUE KEY?
    | value = COMMENT string_
    | collateClause
    | value = COLUMN_FORMAT columnFormat
    | value = STORAGE storageMedia
    | value = SRID NUMBER_
    | constraintName? checkConstraint
    | constraintEnforcement
    ;

checkConstraint
    : CHECK LP_ expr RP_
    ;

constraintEnforcement
    : NOT? ENFORCED
    ;

generatedOption
    : GENERATED ALWAYS
    ;

referenceDefinition
    : REFERENCES tableName keyParts (MATCH FULL | MATCH PARTIAL | MATCH SIMPLE)? onUpdateDelete?
    ;

onUpdateDelete
    : ON UPDATE referenceOption (ON DELETE referenceOption)?
    | ON DELETE referenceOption (ON UPDATE referenceOption)?
    ;

referenceOption
    : RESTRICT | CASCADE | SET NULL | NO ACTION | SET DEFAULT
    ;

indexNameAndType
    : indexName indexTypeClause?
    ;

indexType
    : BTREE | RTREE | HASH
    ;

indexTypeClause
    : (USING | TYPE) indexType
    ;

keyParts
    : LP_ keyPart (COMMA_ keyPart)* RP_
    ;

keyPart
    : columnName fieldLength? direction?
    ;

keyPartWithExpression
    : keyPart | LP_ expr RP_ direction?
    ;

keyListWithExpression
    : LP_ keyPartWithExpression (COMMA_ keyPartWithExpression)* RP_
    ;

indexOption
    : commonIndexOption | indexTypeClause
    ;

commonIndexOption
    : KEY_BLOCK_SIZE EQ_? NUMBER_
    | COMMENT stringLiterals
    | visibility
    ;

visibility
    : VISIBLE | INVISIBLE
    ;

createLikeClause
    : LP_? LIKE tableName RP_?
    ;

createIndexSpecification
    : UNIQUE | FULLTEXT | SPATIAL
    ;

createTableOptions
    : createTableOption (COMMA_? createTableOption)*
    ;

createTableOption
    : option = ENGINE EQ_? engineRef
    | option = SECONDARY_ENGINE EQ_? (NULL | string_ | identifier)
    | option = MAX_ROWS EQ_? NUMBER_
    | option = MIN_ROWS EQ_? NUMBER_
    | option = AVG_ROW_LENGTH EQ_? NUMBER_
    | option = PASSWORD EQ_? string_
    | option = COMMENT EQ_? string_
    | option = COMPRESSION EQ_? textString
    | option = ENCRYPTION EQ_? textString
    | option = AUTO_INCREMENT EQ_? NUMBER_
    | option = PACK_KEYS EQ_? ternaryOption=(NUMBER_ | DEFAULT)
    | option = (STATS_AUTO_RECALC | STATS_PERSISTENT | STATS_SAMPLE_PAGES) EQ_? ternaryOption=(NUMBER_ | DEFAULT)
    | option = (CHECKSUM | TABLE_CHECKSUM) EQ_? NUMBER_
    | option = DELAY_KEY_WRITE EQ_? NUMBER_
    | option = ROW_FORMAT EQ_? format = (DEFAULT | DYNAMIC | FIXED | COMPRESSED | REDUNDANT | COMPACT)
    | option = UNION EQ_? LP_ tableList RP_
    | defaultCharset
    | defaultCollation
    | option = INSERT_METHOD EQ_? method = (NO| FIRST| LAST)
    | option = DATA DIRECTORY EQ_? textString
    | option = INDEX DIRECTORY EQ_? textString
    | option = TABLESPACE EQ_? identifier
    | option = STORAGE (DISK | MEMORY)
    | option = CONNECTION EQ_? textString
    | option = KEY_BLOCK_SIZE EQ_? NUMBER_
    | option = ENGINE_ATTRIBUTE EQ_? jsonAttribute = string_
    | option = SECONDARY_ENGINE_ATTRIBUTE EQ_ jsonAttribute = string_
    ;

createSRSStatement
    : CREATE OR REPLACE SPATIAL REFERENCE SYSTEM NUMBER_ srsAttribute*
    | CREATE SPATIAL REFERENCE SYSTEM notExistClause? NUMBER_ srsAttribute*
    ;

dropSRSStatement
    : DROP SPATIAL REFERENCE SYSTEM notExistClause? NUMBER_
    ;

srsAttribute
    : NAME string_
    | DEFINITION string_
    | ORGANIZATION string_ IDENTIFIED BY NUMBER_
    | DESCRIPTION string_
    ;

place
    : FIRST | AFTER columnName
    ;

partitionDefinitions
    : LP_ partitionDefinition (COMMA_ partitionDefinition)* RP_
    ;

partitionDefinition
    : PARTITION partitionName
    (VALUES (LESS THAN partitionLessThanValue | IN LP_ partitionValueList RP_))?
    partitionDefinitionOption*
    (LP_ subpartitionDefinition (COMMA_ subpartitionDefinition)* RP_)?
    ;

partitionLessThanValue
    : LP_ (expr | partitionValueList) RP_ | MAXVALUE
    ;

partitionValueList
    : expr (COMMA_ expr)*
    ;

partitionDefinitionOption
    : STORAGE? ENGINE EQ_? identifier
    | COMMENT EQ_? string_
    | DATA DIRECTORY EQ_? string_
    | INDEX DIRECTORY EQ_? string_
    | MAX_ROWS EQ_? NUMBER_
    | MIN_ROWS EQ_? NUMBER_
    | TABLESPACE EQ_? identifier
    ;

subpartitionDefinition
    : SUBPARTITION identifier partitionDefinitionOption*
    ;

ownerStatement
    : DEFINER EQ_ (userName | CURRENT_USER ( LP_ RP_)?)
    ;

scheduleExpression
    : AT timestampValue (PLUS_ intervalExpression)*
    | EVERY intervalValue
      (STARTS timestampValue (PLUS_ intervalExpression)*)?
      (ENDS timestampValue (PLUS_ intervalExpression)*)?     
    ;

timestampValue
    : CURRENT_TIMESTAMP | stringLiterals | numberLiterals | expr
    ;

routineBody
    : simpleStatement | compoundStatement
    ;

serverOption
    : HOST string_
    | DATABASE string_
    | USER string_
    | PASSWORD string_
    | SOCKET string_
    | OWNER string_
    | PORT numberLiterals 
    ;

routineOption
    : COMMENT string_
    | LANGUAGE SQL                                              
    | NOT? DETERMINISTIC                                          
    | (CONTAINS SQL | NO SQL | READS SQL DATA | MODIFIES SQL DATA)
    | SQL SECURITY (DEFINER | INVOKER)                    
    ;

procedureParameter
    : (IN | OUT | INOUT)? identifier dataType
    ;

fileSizeLiteral
    : FILESIZE_LITERAL | numberLiterals
    ; 
    
simpleStatement
    : validStatement
    ;
    
compoundStatement
    : beginStatement
    ;

validStatement
    : (createTable | alterTable | dropTable | truncateTable 
    | insert | replace | update | delete_stmt | select | call
    | setVariable | beginStatement | declareStatement | flowControlStatement | cursorStatement | conditionHandlingStatement) SEMI_?
    ;

beginStatement
    : (labelName COLON_)? BEGIN validStatement* END labelName? SEMI_?
    ;

declareStatement
    : DECLARE variable (COMMA_ variable)* dataType (DEFAULT simpleExpr)*
    ;

flowControlStatement
    : caseStatement | ifStatement | iterateStatement | leaveStatement | loopStatement | repeatStatement | returnStatement | whileStatement
    ;
    
caseStatement
    : CASE expr? 
      (WHEN expr THEN validStatement+)+ 
      (ELSE validStatement+)? 
      END CASE
    ;
    
ifStatement
    : IF expr THEN validStatement+
      (ELSEIF expr THEN validStatement+)*
      (ELSE validStatement+)?
      END IF
    ;
    
iterateStatement
    : ITERATE labelName
    ;

leaveStatement
    : LEAVE labelName
    ;
    
loopStatement
    : (labelName COLON_)? LOOP
      validStatement+
      END LOOP labelName?
    ;
    
repeatStatement
    : (labelName COLON_)? REPEAT
      validStatement+
      UNTIL expr
      END REPEAT labelName?
    ;
    
returnStatement
    : RETURN expr
    ;   
    
whileStatement
    : (labelName COLON_)? WHILE expr DO
      validStatement+
      END WHILE labelName?
    ;
    
cursorStatement
    : cursorCloseStatement | cursorDeclareStatement | cursorFetchStatement | cursorOpenStatement 
    ;
    
cursorCloseStatement
    : CLOSE cursorName
    ;
    
cursorDeclareStatement
    : DECLARE cursorName CURSOR FOR select
    ;
    
cursorFetchStatement
    : FETCH ((NEXT)? FROM)? cursorName INTO variable (COMMA_ variable)*
    ;
    
cursorOpenStatement
    : OPEN cursorName
    ;
    
conditionHandlingStatement
    : declareConditionStatement | declareHandlerStatement | getDiagnosticsStatement | resignalStatement | signalStatement 
    ;
    
declareConditionStatement
    : DECLARE conditionName CONDITION FOR conditionValue
    ;
    
declareHandlerStatement
    : DECLARE handlerAction HANDLER FOR conditionValue (COMMA_ conditionValue)* validStatement
    ;

getDiagnosticsStatement
    : GET (CURRENT | STACKED)? DIAGNOSTICS (
        (statementInformationItem (COMMA_ statementInformationItem)*
        | (CONDITION conditionNumber conditionInformationItem (COMMA_ conditionInformationItem)*))
    )
    ;

statementInformationItem
    : variable EQ_ statementInformationItemName
    ;
    
conditionInformationItem
    : variable EQ_ conditionInformationItemName
    ;
    
conditionNumber
    : variable | numberLiterals 
    ;

statementInformationItemName
    : NUMBER
    | ROW_COUNT
    ;
    
conditionInformationItemName
    : CLASS_ORIGIN
    | SUBCLASS_ORIGIN
    | RETURNED_SQLSTATE
    | MESSAGE_TEXT
    | MYSQL_ERRNO
    | CONSTRAINT_CATALOG
    | CONSTRAINT_SCHEMA
    | CONSTRAINT_NAME
    | CATALOG_NAME
    | SCHEMA_NAME
    | TABLE_NAME
    | COLUMN_NAME
    | CURSOR_NAME
    ;
    
handlerAction
    : CONTINUE | EXIT | UNDO
    ;
    
conditionValue
    : numberLiterals | SQLSTATE (VALUE)? stringLiterals | conditionName | SQLWARNING | NOT FOUND | SQLEXCEPTION
    ;
    
resignalStatement
    : RESIGNAL conditionValue?
      (SET signalInformationItem (COMMA_ signalInformationItem)*)?
    ;
    
signalStatement
    : SIGNAL conditionValue
      (SET signalInformationItem (COMMA_ signalInformationItem)*)?
    ;
    
signalInformationItem
    : conditionInformationItemName EQ_ expr
    ;

// tcl statement
setTransaction
    : SET scope? TRANSACTION transactionCharacteristic (COMMA_ transactionCharacteristic)*
    ;

setAutoCommit
    : SET (AT_? AT_)? scope? DOT_? AUTOCOMMIT EQ_ autoCommitValue
    ;

autoCommitValue
    : NUMBER_ | ON | OFF
    ;

beginTransaction
    : BEGIN | START TRANSACTION (transactionCharacteristic (COMMA_ transactionCharacteristic)*)?
    ;

commit
    : COMMIT WORK? optionChain? optionRelease?
    ;

rollback
    : ROLLBACK (WORK? TO SAVEPOINT? identifier | WORK? optionChain? optionRelease?)
    ;

savepoint
    : SAVEPOINT identifier
    ;

begin
    : BEGIN WORK?
    ;

lock
    : LOCK (INSTANCE FOR BACKUP | (TABLE | TABLES) tableLock (COMMA_ tableLock)* )
    ;

unlock
    : UNLOCK (INSTANCE | TABLE | TABLES)
    ;

releaseSavepoint
    : RELEASE SAVEPOINT identifier
    ;

xa
    : XA ((START | BEGIN) xid (JOIN | RESUME)
        | END xid (SUSPEND (FOR MIGRATE)?)?
        | PREPARE xid
        | COMMIT xid (ONE PHASE)?
        | ROLLBACK xid
        | RECOVER (CONVERT xid)?
    )
    ;

transactionCharacteristic
   : ISOLATION LEVEL level | accessMode | WITH CONSISTENT SNAPSHOT
   ;

level
   : REPEATABLE READ | READ COMMITTED | READ UNCOMMITTED | SERIALIZABLE
   ;

accessMode
   : READ (WRITE | ONLY)
   ;

optionChain
    : AND NO? CHAIN
    ;

optionRelease
    : NO? RELEASE
    ;

tableLock
    : tableName (AS? alias)? lockOption
    ;

lockOption
    : READ LOCAL? | LOW_PRIORITY? WRITE
    ;

xid
    : string_ (COMMA_ string_)* numberLiterals?
    ;

// dcl statement
grant
    : GRANT (proxyClause | privilegeClause | roleClause)
    ;

revoke
    : REVOKE (proxyClause | privilegeClause | allClause | roleClause)
    ;

proxyClause
    : PROXY ON userOrRole TO userOrRoles withGrantOption?
    ;

privilegeClause
    : privileges ON onObjectClause (TO | FROM) userOrRoles withGrantOption? grantOption?
    ;

roleClause
    : roles ( TO| FROM) userOrRoles withGrantOption?
    ;

allClause
    : ALL PRIVILEGES? COMMA_ GRANT OPTION FROM userOrRoles
    ;

privileges
    : privilege (COMMA_ privilege)*
    ;

privilege
    : privilegeType (LP_ columnNames RP_)?
    ;

privilegeType
    : ALL PRIVILEGES?
    | ALTER ROUTINE?
    | CREATE
    | CREATE ROUTINE
    | CREATE TABLESPACE
    | CREATE TEMPORARY TABLES
    | CREATE USER
    | CREATE VIEW
    | DELETE
    | DROP
    | DROP ROLE
    | EVENT
    | EXECUTE
    | FILE
    | GRANT OPTION
    | INDEX
    | INSERT
    | LOCK TABLES
    | PROCESS
    | PROXY
    | REFERENCES
    | RELOAD
    | REPLICATION CLIENT
    | REPLICATION SLAVE
    | SELECT
    | SHOW DATABASES
    | SHOW VIEW
    | SHUTDOWN
    | SUPER
    | TRIGGER
    | UPDATE
    | USAGE
    | identifier
    ;

onObjectClause
    : objectType? privilegeLevel
    ;

objectType
    : TABLE | FUNCTION | PROCEDURE
    ;

privilegeLevel
    : ASTERISK_ | ASTERISK_ DOT_ASTERISK_ | identifier DOT_ASTERISK_ | tableName  | schemaName DOT_ routineName
    ;

createUser
    : CREATE USER (IF NOT EXISTS)? alterUserList defaultRoleClause? requireClause? connectOptions? accountLockPasswordExpireOptions?
    ;

defaultRoleClause
    : DEFAULT ROLE roleName (COMMA_ roleName)*
    ;

requireClause
    : REQUIRE (NONE | tlsOption (AND? tlsOption)*)
    ;

connectOptions
    : WITH connectOption connectOption*
    ;

accountLockPasswordExpireOptions
    : accountLockPasswordExpireOption+
    ;

accountLockPasswordExpireOption
    : ACCOUNT (LOCK | UNLOCK)
    | PASSWORD EXPIRE (DEFAULT | NEVER | INTERVAL NUMBER_ DAY)?
    | PASSWORD HISTORY (DEFAULT | NUMBER_)
    | PASSWORD REUSE INTERVAL (DEFAULT | NUMBER_ DAY)
    | PASSWORD REQUIRE CURRENT (DEFAULT | OPTIONAL)?
    | FAILED_LOGIN_ATTEMPTS NUMBER_
    | PASSWORD_LOCK_TIME (NUMBER_ | UNBOUNDED)
    ;

alterUser
    : ALTER USER (IF EXISTS)? alterUserList requireClause? connectOptions? accountLockPasswordExpireOptions?
    | ALTER USER (IF EXISTS)? USER LP_ RP_ userFuncAuthOption
    | ALTER USER (IF EXISTS)? userName DEFAULT ROLE (NONE | ALL | roleName (COMMA_ roleName)*)
    ;

alterUserEntry
    : userName userAuthOption?
    ;

alterUserList
    : alterUserEntry (COMMA_ alterUserEntry)*
    ;

dropUser
    : DROP USER (IF EXISTS)? userName (COMMA_ userName)*
    ;

createRole
    : CREATE ROLE (IF NOT EXISTS)? roleName (COMMA_ roleName)*
    ;

dropRole
    : DROP ROLE (IF EXISTS)? roleName (COMMA_ roleName)*
    ;

renameUser
    : RENAME USER userName TO userName (COMMA_ userName TO userName)*
    ;

setDefaultRole
    : SET DEFAULT ROLE (NONE | ALL | roleName (COMMA_ roleName)*) TO userName (COMMA_ userName)*
    ;

setRole
    : SET ROLE (DEFAULT | NONE | ALL | ALL EXCEPT roles | roles)
    ;

setPassword
    : SET PASSWORD (FOR userName)? authOption (REPLACE string_)? (RETAIN CURRENT PASSWORD)?
    ;

authOption
    : EQ_ stringLiterals | TO RANDOM | EQ_ PASSWORD LP_ stringLiterals RP_
    ;

withGrantOption
    : WITH GRANT OPTION
    ;

userOrRoles
    : userOrRole (COMMA_ userOrRole)*
    ;

roles
    : roleName (COMMA_ roleName)*
    ;

grantOption
    : AS userName (WITH ROLE DEFAULT | NONE | ALL | ALL EXCEPT roles | roles )?
    ;

userAuthOption
    : identifiedBy
    | identifiedWith
    | DISCARD OLD PASSWORD
    ;

identifiedBy
    : IDENTIFIED BY (string_ | RANDOM PASSWORD) (REPLACE string_)? (RETAIN CURRENT PASSWORD)?
    ;

identifiedWith
    : IDENTIFIED WITH pluginName
    | IDENTIFIED WITH pluginName BY (string_ | RANDOM PASSWORD) (REPLACE stringLiterals)? (RETAIN CURRENT PASSWORD)?
    | IDENTIFIED WITH pluginName AS textStringHash (RETAIN CURRENT PASSWORD)?
    ;

connectOption
    : MAX_QUERIES_PER_HOUR NUMBER_
    | MAX_UPDATES_PER_HOUR NUMBER_
    | MAX_CONNECTIONS_PER_HOUR NUMBER_
    | MAX_USER_CONNECTIONS NUMBER_
    ;

tlsOption
    : SSL | X509 | CIPHER string_ | ISSUER string_ | SUBJECT string_
    ;

userFuncAuthOption
    : identifiedBy | DISCARD OLD PASSWORD
    ;

// dal statement
use
    : USE schemaName
    ;

help
    : HELP string_
    ;

explain
    : (DESC | DESCRIBE | EXPLAIN)
    (tableName (columnRef | textString)?
    | explainType? (explainableStatement | FOR CONNECTION connectionId)
    | ANALYZE select)
    ;

showDatabases
    : SHOW (DATABASES | SCHEMAS) showFilter?
    ;

showTables
    : SHOW EXTENDED? FULL? TABLES fromSchema? showFilter?
    ;

showTableStatus
    : SHOW TABLE STATUS fromSchema? showFilter?
    ;

showColumns
    : SHOW EXTENDED? FULL? (COLUMNS | FIELDS) fromTable fromSchema? (showColumnLike | showWhereClause)?
    ;

showIndex
    : SHOW EXTENDED? (INDEX | INDEXES | KEYS) fromTable fromSchema? showWhereClause?
    ;

showCreateTable
    : SHOW CREATE TABLE tableName
    ;

fromSchema
    : (FROM | IN) schemaName
    ;

fromTable
    : (FROM | IN) tableName
    ;

showLike
    : LIKE stringLiterals
    ;

showColumnLike
    : LIKE stringLiterals
    ;

showWhereClause
    : WHERE expr
    ;

showFilter
    : showLike | showWhereClause
    ;

showProfileType
    : ALL | BLOCK IO | CONTEXT SWITCHES | CPU | IPC | MEMORY | PAGE FAULTS | SOURCE | SWAPS
    ;

setVariable
    : SET variableAssign (COMMA_ variableAssign)*
    ;

variableAssign
    : variable EQ_ setExprOrDefault
    ;

showBinaryLogs
    : SHOW (BINARY | MASTER) LOGS
    ;

showBinlogEvents
    : SHOW BINLOG EVENTS (IN DEFINER)? (FROM NUMBER_)? (LIMIT (NUMBER_ COMMA_)? NUMBER_)?
    ;

showCharacterSet
    : SHOW CHARACTER SET showFilter?
    ;

showCollation
    : SHOW COLLATION showFilter?
    ;

showCreateDatabase
    : SHOW CREATE (DATABASE | SCHEMA) notExistClause? schemaName
    ;

showCreateEvent
    : SHOW CREATE EVENT eventName 
    ;

showCreateFunction
    : SHOW CREATE FUNCTION functionName
    ;

showCreateProcedure
    : SHOW CREATE PROCEDURE functionName
    ;

showCreateTrigger
    : SHOW CREATE TRIGGER triggerName
    ;

showCreateUser
    : SHOW CREATE USER userName
    ;

showCreateView
    : SHOW CREATE VIEW viewName
    ;

showEngine
    : SHOW ENGINE engineRef (STATUS | MUTEX)
    ;

showEngines
    : SHOW STORAGE? ENGINES
    ;

showErrors
    : SHOW (COUNT LP_ ASTERISK_ RP_)? ERRORS (LIMIT (NUMBER_ COMMA_)? NUMBER_)?
    ;

showEvents
    : SHOW EVENTS fromSchema? showFilter?
    ;

showFunctionCode
    : SHOW FUNCTION CODE functionName
    ;

showFunctionStatus
    : SHOW FUNCTION STATUS showFilter?
    ;

showGrant
    : SHOW GRANTS (FOR userOrRole (USING userName (COMMA_ userName)+)?)?
    ;

showMasterStatus
    : SHOW MASTER STATUS
    ;

showOpenTables
    : SHOW OPEN TABLES fromSchema? showFilter?
    ;

showPlugins
    : SHOW PLUGINS
    ;

showPrivileges
    : SHOW PRIVILEGES
    ;

showProcedureCode
    : SHOW PROCEDURE CODE functionName
    ;

showProcedureStatus
    : SHOW PROCEDURE STATUS showFilter
    ;

showProcesslist
    : SHOW FULL? PROCESSLIST
    ;

showProfile
    : SHOW PROFILE ( showProfileType (COMMA_ showProfileType)*)? (FOR QUERY NUMBER_)? (LIMIT NUMBER_ (OFFSET NUMBER_)?)?
    ;

showProfiles
    : SHOW PROFILES
    ;

showRelaylogEvent
    : SHOW RELAYLOG EVENTS (IN logName)? (FROM NUMBER_)? (LIMIT (NUMBER_ COMMA_)? NUMBER_)? FOR CHANNEL channelName
    ;

showSlavehost
    : SHOW SLAVE HOST
    ;

showSlaveStatus
    : SHOW SLAVE STATUS (FOR CHANNEL channelName)?
    ;

showStatus
    : SHOW (GLOBAL | SESSION)? STATUS showFilter?
    ;

showTrriggers
    : SHOW TRIGGER fromSchema? showFilter?
    ;

showVariables
    : SHOW (GLOBAL | SESSION)? VARIABLES showFilter?
    ;

showWarnings
    : SHOW (COUNT LP_ ASTERISK_ RP_)? WARNINGS (LIMIT (NUMBER_ COMMA_)? NUMBER_)?
    ;

setCharacter
    : SET (CHARACTER SET | CHARSET) (charsetName | DEFAULT)
    ;

setName
    : SET NAMES (EQ_ expr | charsetName collateClause? | DEFAULT)
    ;

clone
    : CLONE cloneAction
    ;

cloneAction
    : LOCAL DATA DIRECTORY EQ_? cloneDir
    | INSTANCE FROM cloneInstance IDENTIFIED BY string_ (DATA DIRECTORY EQ_? cloneDir)? (REQUIRE NO? SSL)?
    ;

createUdf
    : CREATE AGGREGATE? FUNCTION functionName RETURNS (STRING | INTEGER | REAL | DECIMAL) SONAME shardLibraryName
    ;

install
    : installComponent | installPlugin
    ;

uninstall
    :uninstallComponent | uninstallPlugin
    ;

installComponent
    : INSTALL COMPONENT componentName (COMMA_ componentName)*
    ;

installPlugin
    : INSTALL PLUGIN pluginName SONAME shardLibraryName
    ;

uninstallComponent
    : UNINSTALL COMPONENT componentName (COMMA_ componentName)*
    ;

uninstallPlugin
    : UNINSTALL PLUGIN pluginName
    ;

analyzeTable
    : ANALYZE (NO_WRITE_TO_BINLOG | LOCAL)? tableOrTables tableList histogram?
    ;

histogram
    : UPDATE HISTOGRAM ON columnNames (WITH NUMBER_ BUCKETS)?
    | DROP HISTOGRAM ON columnNames
    ;

checkTable
    : CHECK tableOrTables tableList checkTableOption?
    ;

checkTableOption
    : FOR UPGRADE | QUICK | FAST | MEDIUM | EXTENDED | CHANGE
    ;

checksumTable
    : CHECKSUM tableOrTables tableList (QUICK | EXTENDED)?
    ;
optimizeTable
    : OPTIMIZE (NO_WRITE_TO_BINLOG | LOCAL)? tableOrTables tableList
    ;

repairTable
    : REPAIR (NO_WRITE_TO_BINLOG | LOCAL)? tableOrTables tableList QUICK? EXTENDED? USE_FRM?
    ;

alterResourceGroup
    : ALTER RESOURCE GROUP groupName (VCPU EQ_? vcpuSpec (COMMA_ vcpuSpec)*)? (THREAD_PRIORITY EQ_? NUMBER_)?
    (ENABLE | DISABLE FORCE?)?
    ;

vcpuSpec
    : NUMBER_ | NUMBER_ MINUS_ NUMBER_
    ;

createResourceGroup
    : CREATE RESOURCE GROUP groupName TYPE EQ_ (SYSTEM | USER) (VCPU EQ_? vcpuSpec (COMMA_ vcpuSpec)*)?
    (THREAD_PRIORITY EQ_? NUMBER_)? (ENABLE | DISABLE )?
    ;

dropResourceGroup
    : DROP RESOURCE GROUP groupName FORCE?
    ;

setResourceGroup
    : SET RESOURCE GROUP groupName (FOR NUMBER_ (COMMA_ NUMBER_)*)?
    ;

binlog
    : BINLOG stringLiterals
    ;

cacheIndex
    : CACHE INDEX (tableIndexList (COMMA_ tableIndexList)* | tableName PARTITION LP_ partitionList RP_) IN (identifier | DEFAULT)
    ;

tableIndexList
    : tableName (PARTITION LP_ partitionList RP_)? ((INDEX | KEY) LP_ indexName (COMMA_ indexName)* RP_)? (IGNORE LEAVES)?
    ;

partitionList
    : partitionName (COMMA_ partitionName)* | ALL
    ;

flush
    : FLUSH (NO_WRITE_TO_BINLOG | LOCAL)? (flushOption (COMMA_ flushOption)* | tablesOption)
    ;

flushOption
    : BINARY LOGS | ENGINE LOGS | ERROR LOGS | GENERAL LOGS | HOSTS | LOGS | PRIVILEGES | OPTIMIZER_COSTS
    | RELAY LOGS (FOR CHANNEL channelName)? | SLOW LOGS | STATUS | USER_RESOURCES 
    ;

tablesOption
    : TABLES |TABLES tableName (COMMA_ tableName)* | TABLES WITH READ LOCK | TABLES tableName (COMMA_ tableName)* WITH READ LOCK
    | TABLES tableName (COMMA_ tableName)* FOR EXPORT
    ;

kill
    : KILL (CONNECTION | QUERY)? NUMBER_+
    ;

loadIndexInfo
    : LOAD INDEX INTO CACHE tableIndexList (COMMA_ tableIndexList)*
    ;

resetStatement
    : RESET resetOption (COMMA_ resetOption)*
    | resetPersist
    ;

resetOption
    : MASTER (TO binaryLogFileIndexNumber)?
    | SLAVE ALL? channelOption?
    ;

resetPersist
    : RESET PERSIST (existClause? identifier)?
    ;

restart
    : RESTART
    ;

shutdown
    : SHUTDOWN
    ;

explainType
    : FORMAT EQ_ formatName
    ;

explainableStatement
    : select | delete_stmt | insert | replace | update
    ;

formatName
    : TRADITIONAL | JSON | TREE
    ;

show
    : showDatabases
    | showTables
    | showTableStatus
    | showBinaryLogs
    | showColumns
    | showIndex
    | showCreateDatabase
    | showCreateTable
    | showBinlogEvents
    | showCharacterSet
    | showCollation
    | showCreateEvent
    | showCreateFunction
    | showCreateProcedure
    | showCreateTrigger
    | showCreateUser
    | showCreateView
    | showEngine
    | showEngines
    | showErrors
    | showEvents
    | showFunctionCode
    | showFunctionStatus
    | showGrant
    | showMasterStatus
    | showPlugins
    | showOpenTables
    | showPrivileges
    | showProcedureCode
    | showProcesslist
    | showProfile
    | showProcedureStatus
    | showProfiles
    | showSlavehost
    | showSlaveStatus
    | showRelaylogEvent
    | showStatus
    | showTrriggers
    | showWarnings
    | showVariables
    ;

// rl statement
change
    : changeMasterTo | changeReplicationFilter
    ;

changeMasterTo
    : CHANGE MASTER TO masterDefs  channelOption?
    ;

changeReplicationFilter
    : CHANGE REPLICATION FILTER filterDefs channelOption?
    ;

startSlave
    : START SLAVE threadTypes? utilOption? connectionOptions channelOption?
    ;

stopSlave
    : STOP SLAVE threadTypes channelOption*
    ;

groupReplication
    : startGroupReplication | stopGroupReplication
    ;

startGroupReplication
    : START GROUP_REPLICATION
    ;

stopGroupReplication
    : STOP GROUP_REPLICATION
    ;

purgeBinaryLog
    : PURGE (BINARY | MASTER) LOGS (TO logName | BEFORE datetimeExpr)
    ;

threadTypes
    : threadType+
    ;

threadType
    : IO_THREAD | SQL_THREAD
    ;

utilOption
    : UNTIL ((SQL_BEFORE_GTIDS | SQL_AFTER_GTIDS) EQ_ identifier
    | MASTER_LOG_FILE EQ_ string_ COMMA_ MASTER_LOG_POS EQ_ NUMBER_
    | RELAY_LOG_FILE EQ_ string_ COMMA_ RELAY_LOG_POS  EQ_ NUMBER_
    | SQL_AFTER_MTS_GAPS)
    ;

connectionOptions
    : (USER EQ_ string_)? (PASSWORD EQ_ string_)? (DEFAULT_AUTH EQ_ string_)? (PLUGIN_DIR EQ_ string_)?
    ;

masterDefs
    : masterDef (COMMA_ masterDef)*
    ;

masterDef
    : MASTER_BIND EQ_ string_
    | MASTER_HOST EQ_ string_
    | MASTER_USER EQ_ string_
    | MASTER_PASSWORD EQ_ string_
    | MASTER_PORT EQ_ NUMBER_
    | PRIVILEGE_CHECKS_USER EQ_ (ACCOUNT | NULL)
    | REQUIRE_ROW_FORMAT EQ_ NUMBER_
    | MASTER_CONNECT_RETRY EQ_ NUMBER_
    | MASTER_RETRY_COUNT EQ_ NUMBER_
    | MASTER_DELAY EQ_ NUMBER_
    | MASTER_HEARTBEAT_PERIOD EQ_ NUMBER_
    | MASTER_LOG_FILE EQ_ string_
    | MASTER_LOG_POS EQ_ NUMBER_
    | MASTER_AUTO_POSITION EQ_ NUMBER_
    | RELAY_LOG_FILE EQ_ string_
    | RELAY_LOG_POS EQ_ NUMBER_
    | MASTER_COMPRESSION_ALGORITHMS EQ_ string_
    | MASTER_ZSTD_COMPRESSION_LEVEL EQ_ NUMBER_
    | MASTER_SSL EQ_ NUMBER_
    | MASTER_SSL_CA EQ_ string_
    | MASTER_SSL_CAPATH EQ_ string_
    | MASTER_SSL_CERT EQ_ string_
    | MASTER_SSL_CRL EQ_ string_
    | MASTER_SSL_CRLPATH EQ_ string_
    | MASTER_SSL_KEY EQ_ string_
    | MASTER_SSL_CIPHER EQ_ string_
    | MASTER_SSL_VERIFY_SERVER_CERT EQ_ NUMBER_
    | MASTER_TLS_VERSION EQ_ string_
    | MASTER_TLS_CIPHERSUITES EQ_ string_
    | MASTER_PUBLIC_KEY_PATH EQ_ string_
    | GET_MASTER_PUBLIC_KEY EQ_ NUMBER_
    | IGNORE_SERVER_IDS EQ_ LP_ ignoreServerIds RP_
    ;

ignoreServerIds
    : ignoreServerId (COMMA_ ignoreServerId)
    ;

ignoreServerId
    : NUMBER_
    ;

filterDefs
    : filterDef (COMMA_ filterDef)*
    ;

filterDef
    : REPLICATE_DO_DB EQ_ LP_ schemaNames? RP_
    | REPLICATE_IGNORE_DB EQ_ LP_ schemaNames? RP_
    | REPLICATE_DO_TABLE EQ_ LP_ tableList? RP_
    | REPLICATE_IGNORE_TABLE EQ_ LP_ tableList? RP_
    | REPLICATE_WILD_DO_TABLE EQ_ LP_ wildTables? RP_
    | REPLICATE_WILD_IGNORE_TABLE EQ_ LP_ wildTables? RP_
    | REPLICATE_REWRITE_DB EQ_ LP_ schemaPairs? RP_
    ;

wildTables
    : wildTable (COMMA_ wildTable)*
    ;

wildTable
    : string_
    ;

// base rule
parameterMarker
    : QUESTION_
    ;

customKeyword
    : MAX
    | MIN
    | SUM
    | COUNT
    | GROUP_CONCAT
    | CAST
    | POSITION
    | SUBSTRING
    | SUBSTR
    | EXTRACT
    | TRIM
    | LAST_DAY
    | TRADITIONAL
    | TREE
    | MYSQL_ADMIN
    | INSTANT
    | INPLACE
    | COPY
    | UL_BINARY
    | AUTOCOMMIT
    | INNODB
    | REDO_LOG
    ;

literals
    : stringLiterals
    | numberLiterals
    | temporalLiterals
    | hexadecimalLiterals
    | bitValueLiterals
    | booleanLiterals
    | nullValueLiterals
    ;

string_
    : DOUBLE_QUOTED_TEXT | SINGLE_QUOTED_TEXT
    ;

stringLiterals
    : UNDERSCORE_CHARSET? string_ | NCHAR_TEXT
    ;

numberLiterals
   : NUMBER_
   ;

temporalLiterals
    : (DATE | TIME | TIMESTAMP) SINGLE_QUOTED_TEXT
    ;

hexadecimalLiterals
    : UNDERSCORE_CHARSET? HEX_DIGIT_ collateClause?
    ;

bitValueLiterals
    : UNDERSCORE_CHARSET? BIT_NUM_ collateClause?
    ;

booleanLiterals
    : TRUE | FALSE
    ;

nullValueLiterals
    : NULL
    ;

collationName
   : textOrIdentifier | BINARY
   ;

identifier
    : IDENTIFIER_ | unreservedWord | customKeyword | DOUBLE_QUOTED_TEXT
    ;

unreservedWord
    : ACCOUNT | ACTION | ACTIVE | ADMIN | AFTER | AGAINST | AGGREGATE | ALGORITHM | ALWAYS |  ANY
    | ASCII | AT | ATTRIBUTE | AUTOEXTEND_SIZE | AUTO_INCREMENT | AVG
    | AVG_ROW_LENGTH | BACKUP | BEGIN | BINLOG | BIT | BLOCK | BOOL | BOOLEAN | BTREE | BUCKETS | BYTE
    | CACHE | CASCADED | CATALOG_NAME | CHAIN | CHANGED | CHANNEL | CHARSET | CHECKSUM | CIPHER | CLASS_ORIGIN
    | CLIENT | CLONE | CLOSE | COALESCE | CODE | COLLATION | COLUMNS | COLUMN_FORMAT | COLUMN_NAME | COMMENT | COMMIT | COMMITTED
    | COMPACT | COMPLETION | COMPONENT | COMPRESSED | COMPRESSION | CONCURRENT | CONNECTION | CONSISTENT
    | CONSTRAINT_CATALOG | CONSTRAINT_NAME | CONSTRAINT_SCHEMA | CONTAINS | CONTEXT | CPU | CURRENT | CURSOR_NAME
    | DATA | DATAFILE | DATE | DATETIME | DAY | DEFAULT_AUTH | DEFINER | DEFINITION | DEALLOCATE | DELAY_KEY_WRITE
    | DESCRIPTION | DIAGNOSTICS | DIRECTORY | DISABLE | DISCARD | DISK | DO | DUMPFILE | DUPLICATE | DYNAMIC | ENABLE
    | ENCRYPTION | ENFORCED | END | ENDS | ENGINE | ENGINES | ENGINE_ATTRIBUTE | ENUM | ERROR | ERRORS
    | ESCAPE | EVENT | EVENTS | EVERY | EXCHANGE | EXCLUDE | EXECUTE | EXPANSION | EXPIRE | EXPORT | EXTENDED
    | EXTENT_SIZE | FAILED_LOGIN_ATTEMPTS | FAST | FAULTS | FIELDS | FILE | FILE_BLOCK_SIZE | FILTER | FIRST
    | FIXED | FLUSH | FOLLOWING | FOLLOWS | FORMAT | FULL | GENERAL | GEOMCOLLECTION | GEOMETRY | GEOMETRYCOLLECTION
    | GET_FORMAT | GET_MASTER_PUBLIC_KEY | GLOBAL | GRANTS | GROUP_REPLICATION | HANDLER | HASH | HELP | HISTOGRAM | HISTORY | HOST
    | HOSTS | HOUR | IDENTIFIED | IGNORE_SERVER_IDS | IMPORT | INACTIVE | INDEXES | INITIAL_SIZE
    | INSERT_METHOD | INSTALL | INSTANCE | INVISIBLE | INVOKER | IO | IO_THREAD | IPC | ISOLATION | ISSUER
    | JSON | JSON_VALUE | KEY_BLOCK_SIZE | LANGUAGE | LAST | LEAVES | LESS
    | LEVEL | LINESTRING | LIST | LOCAL | LOCKED | LOCKS | LOGFILE | LOGS | MANAGED | MASTER | MASTER_AUTO_POSITION
    | MASTER_COMPRESSION_ALGORITHMS | MASTER_CONNECT_RETRY | MASTER_DELAY | MASTER_HEARTBEAT_PERIOD | MASTER_HOST
    | MASTER_LOG_FILE | MASTER_LOG_POS | MASTER_PASSWORD | MASTER_PUBLIC_KEY_PATH | MASTER_PORT | MASTER_RETRY_COUNT
    | MASTER_SERVER_ID | MASTER_SSL | MASTER_SSL_CA | MASTER_SSL_CAPATH | MASTER_SSL_CERT | MASTER_SSL_CIPHER
    | MASTER_SSL_CRL | MASTER_SSL_CRLPATH | MASTER_SSL_KEY | MASTER_TLS_CIPHERSUITES | MASTER_TLS_VERSION | MASTER_USER
    | MASTER_ZSTD_COMPRESSION_LEVEL | MAX_CONNECTIONS_PER_HOUR | MAX_QUERIES_PER_HOUR | MAX_ROWS | MAX_SIZE | MAX_UPDATES_PER_HOUR
    | MAX_USER_CONNECTIONS | MEDIUM | MEMORY | MERGE | MESSAGE_TEXT | MICROSECOND | MIGRATE | MINUTE | MIN_ROWS | MODE
    | MODIFY | MONTH | MULTILINESTRING | MULTIPOINT | MULTIPOLYGON | MUTEX | MYSQL_ERRNO | NAME | NAMES
    | NATIONAL | NCHAR | NDB | NDBCLUSTER | NESTED | NETWORK_NAMESPACE | NEVER | NEW | NEXT | NO | NODEGROUP
    | NONE | NOWAIT | NO_WAIT | NULLS | NUMBER | NVARCHAR | OFFSET | OFF | OJ | OLD | ONE | ONLY | OPEN | OPTIONAL | OPTIONS
    | ORDINALITY | OTHERS | OWNER | PACK_KEYS | PAGE | PARSER | PARTIAL | PARTITIONING | PASSWORD | PASSWORD_LOCK_TIME
    | PATH | PERSIST | PERSIST_ONLY | PHASE | PLUGIN | PLUGINS | PLUGIN_DIR | POINT | POLYGON | PORT | PRECEDES
    | PRECEDING | PREPARE | PRESERVE | PREV | PRIVILEGES | PRIVILEGE_CHECKS_USER | PROCESS | PROCESSLIST | PROFILE
    | PROFILES | PROXY | QUARTER | QUERY| QUICK | RANDOM | READ_ONLY | REBUILD | RECOVER | REDO_BUFFER_SIZE
    | REDUNDANT | REFERENCE | RELAY | RELAYLOG | RELAY_LOG_FILE | RELAY_LOG_POS | RELAY_THREAD
    | RELOAD | REMOVE | REORGANIZE | REPAIR | REPEATABLE | REPLICATE_DO_DB | REPLICATE_DO_TABLE | REPLICATE_IGNORE_DB
    | REPLICATE_IGNORE_TABLE | REPLICATE_REWRITE_DB | REPLICATE_WILD_DO_TABLE | REPLICATE_WILD_IGNORE_TABLE | REPLICATION
    | REQUIRE_ROW_FORMAT | RESET | RESOURCE | RESPECT | RESTART | RESTORE | RESUME | RETAIN | RETURNED_SQLSTATE
    | RETURNING | RETURNS | REUSE | REVERSE | ROLE | ROLLBACK | ROLLUP | ROTATE | ROUTINE | ROW_COUNT
    | ROW_FORMAT | RTREE | SAVEPOINT | SCHEDULE | SCHEMA_NAME | SECOND | SECONDARY | SECONDARY_ENGINE
    | SECONDARY_ENGINE_ATTRIBUTE | SECONDARY_LOAD | SECONDARY_UNLOAD | SECURITY | SERIAL | SERIALIZABLE | SERVER
    | SESSION | SHARE | SHUTDOWN | SIGNED | SIMPLE | SLAVE | SLOW | SNAPSHOT | SOCKET | SOME | SONAME
    | SOUNDS | SOURCE | SQL_AFTER_GTIDS | SQL_AFTER_MTS_GAPS | SQL_BEFORE_GTIDS | SQL_BUFFER_RESULT | SQL_NO_CACHE
    | SQL_THREAD | SQL_TSI_DAY | SQL_TSI_HOUR | SQL_TSI_MINUTE | SQL_TSI_MONTH | SQL_TSI_QUARTER | SQL_TSI_SECOND
    | SQL_TSI_WEEK | SQL_TSI_YEAR | SRID | STACKED | START | STARTS | STATS_AUTO_RECALC | STATS_PERSISTENT
    | STATS_SAMPLE_PAGES | STATUS | STOP | STORAGE | STREAM | STRING | SUBCLASS_ORIGIN | SUBJECT | SUBPARTITION
    | SUBPARTITIONS | SUPER | SUSPEND | SWAPS | SWITCHES | SQL_CACHE | TABLES | TABLESPACE | TABLE_CHECKSUM
    | TABLE_NAME | TEMPORARY | TEMPTABLE | TEXT | THAN | THREAD_PRIORITY | TIES | TIME | TIMESTAMP | TIMESTAMPADD
    | TIMESTAMPDIFF | TLS | TRANSACTION | TRIGGERS | TRUNCATE | TYPE | TYPES | UNBOUNDED | UNCOMMITTED | UNDEFINED
    | UNDOFILE | UNDO_BUFFER_SIZE | UNICODE | UNINSTALL | UNKNOWN | UNTIL
    | UPGRADE | USER | USER_RESOURCES | USE_FRM | VALIDATION | VALUE | VARIABLES | VCPU | VIEW | VISIBLE
    | WAIT | WARNINGS | WEEK | WEIGHT_STRING | WITHOUT | WORK | WRAPPER | X509 | XA | XID | XML | YEAR | COLUMN_NAME 
    | MEMBER
    ;

textOrIdentifier
    : identifier | string_
    ;

variable
    : (AT_? AT_)? scope? DOT_? internalVariableName
    ;

userVariable
    : AT_ textOrIdentifier
    ;

systemVariable
    : AT_ AT_ scope? textOrIdentifier (DOT_ identifier)?
    ;

scope
    : GLOBAL | PERSIST | PERSIST_ONLY | SESSION | LOCAL
    ;

internalVariableName
    : identifier
    | DEFAULT DOT_ identifier
    | identifier DOT_ identifier
    ;

setExprOrDefault
    : expr | DEFAULT | ALL | ON | BINARY | ROW | SYSTEM
    ;

schemaName
    : identifier
    ;

schemaNames
    : schemaName (COMMA_ schemaName)*
    ;

charsetName
    : textOrIdentifier | BINARY
    ;

schemaPairs
    : schemaPair (COMMA_ schemaPair)*
    ;

schemaPair
    : LP_ schemaName COMMA_ schemaName RP_
    ;

tableName
    : (owner DOT_)? name
    ;

columnName
    : identifier
    ;

indexName
    : identifier
    ;

userIdentifierOrText
    : textOrIdentifier (AT_ textOrIdentifier)?
    ;

userName
    : userIdentifierOrText | CURRENT_USER (LP_ RP_)?
    ;

eventName
    : identifier (DOT_ identifier)?
    ;

serverName
    : textOrIdentifier
    ; 

wrapperName
    : textOrIdentifier
    ;

functionName
    : identifier
    | (owner DOT_)? identifier
    ;

viewName
    : identifier
    | (owner DOT_)? identifier
    ;

owner
    : identifier
    ;

alias
    : textOrIdentifier
    ;

name
    : identifier
    ;

tableList
    : tableName (COMMA_ tableName)*
    ;
    
viewNames
    : viewName (COMMA_ viewName)*
    ;

columnNames
    : columnName (COMMA_ columnName)*
    ;

groupName
    : identifier
    ;

routineName
    : identifier
    ;

shardLibraryName
    : stringLiterals
    ;

componentName
    : string_
    ;

pluginName
    : identifier
    ;

hostName
    : string_
    ;

port
    : NUMBER_
    ;

cloneInstance
    : userName AT_ hostName COLON_ port
    ;

cloneDir
    : string_
    ;

channelName
    : identifier (DOT_ identifier)?
    ;

logName
    : stringLiterals
    ;

roleName
    : (string_ | IDENTIFIER_) AT_ (string_ | IDENTIFIER_) | IDENTIFIER_
    ;

engineRef
    : textOrIdentifier
    ;

triggerName
    : identifier (DOT_ identifier)?
    ;

triggerTime
    : BEFORE | AFTER
    ;

tableOrTables
    : TABLE | TABLES
    ;

userOrRole
    : userName | roleName
    ;

partitionName
    : identifier
    ;

identifierList
    : identifier (COMMA_ identifier)*
    ;

allOrPartitionNameList
    : ALL | identifierList
    ;

triggerEvent
    : INSERT | UPDATE | DELETE
    ;

triggerOrder
    : (FOLLOWS | PRECEDES) triggerName
    ;

expr
    : booleanPrimary
    | expr logicalOperator expr
    | expr XOR expr
    | notOperator expr
    ;

logicalOperator
    : OR | OR_ | AND | AND_
    ;

notOperator
    : NOT | NOT_
    ;

booleanPrimary
    : booleanPrimary IS NOT? (TRUE | FALSE | UNKNOWN | NULL)
    | booleanPrimary SAFE_EQ_ predicate
    | booleanPrimary comparisonOperator predicate
    | booleanPrimary comparisonOperator (ALL | ANY) subquery
    | predicate
    ;

comparisonOperator
    : EQ_ | GTE_ | GT_ | LTE_ | LT_ | NEQ_
    ;

predicate
    : bitExpr NOT? IN subquery
    | bitExpr NOT? IN LP_ expr (COMMA_ expr)* RP_
    | bitExpr NOT? BETWEEN bitExpr AND predicate
    | bitExpr SOUNDS LIKE bitExpr
    | bitExpr NOT? LIKE simpleExpr (ESCAPE simpleExpr)?
    | bitExpr NOT? REGEXP bitExpr
    | bitExpr
    ;

bitExpr
    : bitExpr VERTICAL_BAR_ bitExpr
    | bitExpr AMPERSAND_ bitExpr
    | bitExpr SIGNED_LEFT_SHIFT_ bitExpr
    | bitExpr SIGNED_RIGHT_SHIFT_ bitExpr
    | bitExpr PLUS_ bitExpr
    | bitExpr MINUS_ bitExpr
    | bitExpr ASTERISK_ bitExpr
    | bitExpr SLASH_ bitExpr
    | bitExpr DIV bitExpr
    | bitExpr MOD bitExpr
    | bitExpr MOD_ bitExpr
    | bitExpr CARET_ bitExpr
    | bitExpr PLUS_ intervalExpression
    | bitExpr MINUS_ intervalExpression
    | simpleExpr
    ;

simpleExpr
    : functionCall
    | parameterMarker
    | literals
    | columnRef
    | simpleExpr COLLATE textOrIdentifier
    | variable
    | simpleExpr OR_ simpleExpr
    | (PLUS_ | MINUS_ | TILDE_ | notOperator | BINARY) simpleExpr
    | ROW? LP_ expr (COMMA_ expr)* RP_
    | EXISTS? subquery
    | LBE_ identifier expr RBE_
    | identifier (JSON_SEPARATOR | JSON_UNQUOTED_SEPARATOR) string_
    | matchExpression
    | caseExpression
    | intervalExpression
    ;

columnRef
    : identifier (DOT_ identifier)? (DOT_ identifier)?
    ;

columnRefList
    : columnRef (COMMA_ columnRef)*
    ;

functionCall
    : aggregationFunction | specialFunction | regularFunction 
    ;

aggregationFunction
    : aggregationFunctionName LP_ distinct? (expr (COMMA_ expr)* | ASTERISK_)? RP_ overClause?
    ;

aggregationFunctionName
    : MAX | MIN | SUM | COUNT | AVG
    ;

distinct
    : DISTINCT
    ;

overClause
    : OVER (LP_ windowSpecification RP_ | identifier)
    ;

windowSpecification
    : LP_ identifier? (PARTITION BY expr (COMMA_ expr)*)? orderByClause? frameClause? RP_
    ;

frameClause
    : (ROWS | RANGE) (frameStart | frameBetween)
    ;

frameStart
    : CURRENT ROW | UNBOUNDED PRECEDING | UNBOUNDED FOLLOWING | expr PRECEDING | expr FOLLOWING
    ;

frameEnd
    : frameStart
    ;

frameBetween
    : BETWEEN frameStart AND frameEnd
    ;

specialFunction
    : groupConcatFunction | windowFunction | castFunction | convertFunction | positionFunction | substringFunction | extractFunction 
    | charFunction | trimFunction | weightStringFunction | valuesFunction | currentUserFunction
    ;

currentUserFunction
    : CURRENT_USER (LP_ RP_)?
    ;

groupConcatFunction
    : GROUP_CONCAT LP_ distinct? (expr (COMMA_ expr)* | ASTERISK_)? (orderByClause)? (SEPARATOR expr)? RP_
    ;

windowFunction
    : funcName = (ROW_NUMBER | RANK | DENSE_RANK | CUME_DIST | PERCENT_RANK) LP_ RP_ windowingClause
    | funcName = NTILE (simpleExpr) windowingClause
    | funcName = (LEAD | LAG) LP_ expr leadLagInfo? RP_ nullTreatment? windowingClause
    | funcName = (FIRST_VALUE | LAST_VALUE) LP_ expr RP_ nullTreatment? windowingClause
    | funcName = NTH_VALUE LP_ expr COMMA_ simpleExpr RP_ (FROM (FIRST | LAST))? nullTreatment? windowingClause
    ;

windowingClause
    : OVER (windowName=identifier | windowSpecification)
    ;

leadLagInfo
    : COMMA_ (NUMBER_ | QUESTION_) (COMMA_ expr)?
    ;

nullTreatment
    : (RESPECT | IGNORE) NULLS
    ;

checkType
    : FOR UPGRADE | QUICK | FAST | MEDIUM | EXTENDED | CHANGED
    ;

repairType
    : QUICK | EXTENDED | USE_FRM
    ;

castFunction
    : CAST LP_ expr AS dataType RP_
    ;

convertFunction
    : CONVERT LP_ expr COMMA_ castType RP_
    | CONVERT LP_ expr USING charsetName RP_
    ;
    
castType
    : BINARY fieldLength?
    | CHAR fieldLength? charsetWithOptBinary?
    | nchar fieldLength?
    | SIGNED INT?
    | UNSIGNED INT?
    | DATE
    | TIME typeDatetimePrecision?
    | DATETIME typeDatetimePrecision?
    | DECIMAL (fieldLength | precision)?
    | JSON
    | REAL
    | DOUBLE PRECISION
    | FLOAT precision?
    ;

nchar
    : NCHAR | NATIONAL CHAR
    ;

positionFunction
    : POSITION LP_ expr IN expr RP_
    ;

substringFunction
    : (SUBSTRING | SUBSTR) LP_ expr FROM NUMBER_ (FOR NUMBER_)? RP_
    | (SUBSTRING | SUBSTR) LP_ expr COMMA_ NUMBER_ (COMMA_ NUMBER_)? RP_
    ;

extractFunction
    : EXTRACT LP_ identifier FROM expr RP_
    ;

charFunction
    : CHAR LP_ expr (COMMA_ expr)* (USING charsetName)? RP_
    ;

trimFunction
    : TRIM LP_ (LEADING | BOTH | TRAILING) string_ FROM string_ RP_
    ;

valuesFunction
    : VALUES LP_ columnRefList RP_
    ;

weightStringFunction
    : WEIGHT_STRING LP_ expr (AS dataType)? levelClause? RP_
    ;

levelClause
    : LEVEL (levelInWeightListElement (COMMA_ levelInWeightListElement)* | NUMBER_ MINUS_ NUMBER_)
    ;

levelInWeightListElement
    : NUMBER_ direction? REVERSE?
    ;

regularFunction
    : completeRegularFunction
    | shorthandRegularFunction
    ;
    
shorthandRegularFunction
    : CURRENT_DATE | CURRENT_TIME (LP_ NUMBER_? RP_)? | CURRENT_TIMESTAMP | LAST_DAY | LOCALTIME | LOCALTIMESTAMP
    ;
  
completeRegularFunction
    : regularFunctionName (LP_ (expr (COMMA_ expr)* | ASTERISK_)? RP_)
    ;
    
regularFunctionName
    : IF | LOCALTIME | LOCALTIMESTAMP | REPLACE | INTERVAL | MOD
    | DATABASE | LEFT | RIGHT | DATE | DAY | GEOMCOLLECTION | GEOMETRYCOLLECTION
    | LINESTRING | MULTILINESTRING | MULTIPOINT | MULTIPOLYGON | POINT | POLYGON
    | TIME | TIMESTAMP | TIMESTAMPADD | TIMESTAMPDIFF | DATE | CURRENT_TIMESTAMP | identifier
    ;

matchExpression
    : MATCH (columnRefList | LP_ columnRefList RP_ ) AGAINST LP_ expr matchSearchModifier? RP_
    ;

matchSearchModifier
    : IN NATURAL LANGUAGE MODE | IN NATURAL LANGUAGE MODE WITH QUERY EXPANSION | IN BOOLEAN MODE | WITH QUERY EXPANSION
    ;

caseExpression
    : CASE simpleExpr? caseWhen+ caseElse? END
    ;

datetimeExpr
    : expr
    ;

binaryLogFileIndexNumber
    : NUMBER_
    ;

caseWhen
    : WHEN expr THEN expr
    ;

caseElse
    : ELSE expr
    ;

intervalExpression
    : INTERVAL intervalValue
    ;
    
intervalValue
    : expr intervalUnit
    ;

intervalUnit
    : MICROSECOND | SECOND | MINUTE | HOUR | DAY | WEEK | MONTH
    | QUARTER | YEAR | SECOND_MICROSECOND | MINUTE_MICROSECOND | MINUTE_SECOND | HOUR_MICROSECOND | HOUR_SECOND
    | HOUR_MINUTE | DAY_MICROSECOND | DAY_SECOND | DAY_MINUTE | DAY_HOUR | YEAR_MONTH
    ;

orderByClause
    : ORDER BY orderByItem (COMMA_ orderByItem)*
    ;

orderByItem
    : (numberLiterals | expr) direction?
    ;

dataType
    : dataTypeName = (INTEGER | INT | TINYINT | SMALLINT | MIDDLEINT | MEDIUMINT | BIGINT) fieldLength? fieldOptions?
    | (dataTypeName = REAL | dataTypeName = DOUBLE PRECISION?) precision? fieldOptions?
    | dataTypeName = (FLOAT | DECIMAL | NUMERIC | FIXED) (fieldLength | precision)? fieldOptions?
    | dataTypeName = BIT fieldLength?
    | dataTypeName = (BOOL | BOOLEAN)
    | dataTypeName = CHAR fieldLength? charsetWithOptBinary?
    | (dataTypeName = NCHAR | dataTypeName = NATIONAL CHAR) fieldLength? BINARY?
    | dataTypeName = BINARY fieldLength?
    | (dataTypeName = CHAR VARYING | dataTypeName = VARCHAR) fieldLength charsetWithOptBinary?
    | (dataTypeName = NATIONAL VARCHAR | dataTypeName = NVARCHAR | dataTypeName = NCHAR VARCHAR | dataTypeName = NATIONAL CHAR VARYING | dataTypeName = NCHAR VARYING) fieldLength BINARY?
    | dataTypeName = VARBINARY fieldLength?
    | dataTypeName = YEAR fieldLength? fieldOptions?
    | dataTypeName = DATE
    | dataTypeName = TIME typeDatetimePrecision?
    | dataTypeName = TIMESTAMP typeDatetimePrecision?
    | dataTypeName = DATETIME typeDatetimePrecision?
    | dataTypeName = TINYBLOB
    | dataTypeName = BLOB fieldLength?
    | dataTypeName = (MEDIUMBLOB | LONGBLOB)
    | dataTypeName = LONG VARBINARY
    | dataTypeName = LONG (CHAR VARYING | VARCHAR)? charsetWithOptBinary?
    | dataTypeName = TINYTEXT charsetWithOptBinary?
    | dataTypeName = TEXT fieldLength? charsetWithOptBinary?
    | dataTypeName = MEDIUMTEXT charsetWithOptBinary?
    | dataTypeName = LONGTEXT charsetWithOptBinary?
    | dataTypeName = ENUM stringList charsetWithOptBinary?
    | dataTypeName = SET stringList charsetWithOptBinary?
    | dataTypeName = (SERIAL | JSON | GEOMETRY | GEOMETRYCOLLECTION | POINT | MULTIPOINT | LINESTRING | MULTILINESTRING | POLYGON | MULTIPOLYGON)
    ;

stringList
    : LP_ textString (COMMA_ textString)* RP_
    ;

textString
    : string_
    | HEX_DIGIT_
    | BIT_NUM_
    ;

textStringHash
    : string_ | HEX_DIGIT_
    ;

fieldOptions
    : (UNSIGNED | SIGNED | ZEROFILL)+
    ;
    
precision
    : LP_ NUMBER_ COMMA_ NUMBER_ RP_
    ;

typeDatetimePrecision
    : LP_ NUMBER_ RP_
    ;
    
charsetWithOptBinary
    : ascii
    | unicode
    | BYTE
    | charset charsetName BINARY?
    | BINARY (charset charsetName)?
    ;
    
ascii
    : ASCII BINARY?
    | BINARY ASCII
    ;

unicode
    : UNICODE BINARY?
    | BINARY UNICODE
    ;
    
charset
    : (CHAR | CHARACTER) SET
    | CHARSET
    ;

defaultCollation
    : DEFAULT? COLLATE EQ_? collationName
    ;

defaultEncryption
    : DEFAULT? ENCRYPTION EQ_? string_
    ;

defaultCharset
    : DEFAULT? charset EQ_? charsetName
    ;

signedLiteral
    : literals
    | (PLUS_ | MINUS_) numberLiterals
    ;

now
    : (CURRENT_TIMESTAMP | LOCALTIME | LOCALTIMESTAMP) (LP_ NUMBER_? RP_)?
    ;

columnFormat
    : FIXED
    | DYNAMIC
    | DEFAULT
    ;

storageMedia
    : DISK
    | MEMORY
    | DEFAULT
    ;

direction
    : ASC | DESC
    ;

keyOrIndex
    : KEY | INDEX
    ;

fieldLength
    : LP_ length=NUMBER_ RP_
    ;

characterSet
    : charset charsetName
    ;

collateClause
    : COLLATE collationName
    ;

fieldOrVarSpec
    : LP_ (identifier (COMMA_ identifier)*)? RP_
    ;

notExistClause
    : IF NOT EXISTS
    ;

existClause
    : IF EXISTS
    ;

connectionId
    : NUMBER_
    ;
    
labelName
    : identifier
    ;
    
cursorName
    : identifier
    ;
    
conditionName
    : identifier
    ;

unionOption
    : ALL | DISTINCT
    ;

noWriteToBinLog
    : LOCAL
    | NO_WRITE_TO_BINLOG
    ;

channelOption
    : FOR CHANNEL string_
    ;

preparedStatement
    : PREPARE identifier FROM (stringLiterals | userVariable)
    | executeStatement
    | (DEALLOCATE | DROP) PREPARE identifier
    ;

executeStatement
    : EXECUTE identifier (USING executeVarList)?
    ;

executeVarList
    : userVariable (COMMA_ userVariable)*
    ;
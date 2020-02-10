parser grammar GreenPlumParser;

options {
    tokenVocab=GreenPlumLexer;
}

/*
 *  Handle comment-only lines, and ;; SELECT * FROM pg_class ;;;
 *  psql already handles such cases, but other interfaces don't.
 */
stmtblock
    :  stmtmulti
    ;

/* the thrashing around here is to discard "empty" statements... */
stmtmulti
    : stmt (SEMICOLON stmt)*
    ;

stmt 
    : alter_database_stmt
    | alter_database_set_stmt
    | alter_domain_stmt
    | alter_extension_stmt
    | alter_extension_content_stmt
    | alter_function_stmt
    | alter_group_stmt
    | alter_object_schema_stmt
    | alter_owner_stmt
    | alter_queue_stmt
    | alter_resource_group_stmt
    | alter_role_set_stmt
    | alter_role_stmt
    | alter_tsconfiguration_stmt
    | alter_tsdictionary_stmt
    | alter_seq_stmt
    | alter_table_stmt
    | alter_type_stmt
    | alter_user_set_stmt
    | alter_user_stmt
    | AnalyzeStmt
    | CheckPointStmt
    | ClosePortalStmt
    | ClusterStmt
    | CommentStmt
    | ConstraintsSetStmt
    | CopyStmt
    | CreateAsStmt
    | CreateAssertStmt
    | CreateCastStmt
    | CreateConversionStmt
    | CreateDomainStmt
    | CreateExtensionStmt
    | CreateExternalStmt
    | CreateFileSpaceStmt
    | CreateFunctionStmt
    | CreateGroupStmt
    | CreateOpClassStmt
    | CreateOpFamilyStmt
    | AlterOpFamilyStmt
    | CreatePLangStmt
    | CreateQueueStmt
    | CreateResourceGroupStmt
    | CreateSchemaStmt
    | CreateSeqStmt
    | CreateStmt
    | CreateTableSpaceStmt
    | CreateTrigStmt
    | CreateRoleStmt
    | CreateUserStmt
    | CreatedbStmt
    | DeallocateStmt
    | DeclareCursorStmt
    | DefineStmt
    | DeleteStmt
    | DiscardStmt
    | DoStmt
    | DropAssertStmt
    | DropCastStmt
    | DropGroupStmt
    | DropOpClassStmt
    | DropOpFamilyStmt
    | DropOwnedStmt
    | DropPLangStmt
    | DropQueueStmt
    | DropResourceGroupStmt
    | DropRuleStmt
    | DropStmt
    | DropTrigStmt
    | DropRoleStmt
    | DropUserStmt
    | DropdbStmt
    | ExecuteStmt
    | ExplainStmt
    | FetchStmt
    | GrantStmt
    | GrantRoleStmt
    | IndexStmt
    | InsertStmt
    | ListenStmt
    | LoadStmt
    | LockStmt
    | NotifyStmt
    | PrepareStmt
    | ReassignOwnedStmt
    | ReindexStmt
    | RemoveAggrStmt
    | RemoveFuncStmt
    | RemoveOperStmt
    | RenameStmt
    | RevokeStmt
    | RevokeRoleStmt
    | RuleStmt
    | SelectStmt
    | TransactionStmt
    | TruncateStmt
    | UnlistenStmt
    | UpdateStmt
    | VacuumStmt
    | VariableResetStmt
    | VariableSetStmt
    | VariableShowStmt
    | ViewStmt
    ;

/*****************************************************************************
 *
 * Create a new Postgres Resource Queue
 *
 *****************************************************************************/
create_queue_stmt
    : CREATE RESOURCE QUEUE QueueId OptQueueElem*
    | CREATE RESOURCE QUEUE QueueId OptQueueElem* WITH definition
    ;

/*
 * Options for CREATE and ALTER RESOURCE QUEUE 
 */

OptQueueElem 
    : ACTIVE THRESHOLD NumericOnly
    | COST THRESHOLD NumericOnly
    | IGNORE_P THRESHOLD NumericOnly /* enforce float type in queue.c */
    | OVERCOMMIT
    | NOOVERCOMMIT
    ;

/*****************************************************************************
 *
 * Alter a postgres Resource Queue
 *
 *****************************************************************************/
alter_queue_stmt
    : ALTER RESOURCE QUEUE QueueId OptQueueElem* with_out_definition*
    ;

with_out_definition
    : (WITH | WITHOUT) definition
    ;

/*****************************************************************************
 *
 * Drop a postgres Resource Queue
 *
 *****************************************************************************/
DropQueueStmt 
    : DROP RESOURCE QUEUE QueueId
    ;

/*****************************************************************************
 *
 * Create a new GPDB Resource Group
 *
 *****************************************************************************/
CreateResourceGroupStmt
    : CREATE RESOURCE GROUP_P name with_out_definition
    ;

/*****************************************************************************
 *
 * Drop a GPDB Resource Group
 *
 *****************************************************************************/
DropResourceGroupStmt 
    : DROP RESOURCE GROUP_P name
    ;

/*****************************************************************************
 *
 * Alter a GPDB Resource Group
 *
 *****************************************************************************/
alter_resource_group_stmt 
    : ALTER RESOURCE GROUP_P name SET OptResourceGroupList
    ;

/*
 * Option for ALTER RESOURCE GROUP
 */
OptResourceGroupList 
    : OptResourceGroupElem
    ;

OptResourceGroupElem 
    : CONCURRENCY IntegerOnly
    | CPU_RATE_LIMIT IntegerOnly
    | CPUSET Sconst
    | MEMORY_SHARED_QUOTA IntegerOnly
    | MEMORY_LIMIT IntegerOnly
    | MEMORY_SPILL_RATIO IntegerOnly
    ;

/*****************************************************************************
 *
 * Create a new Postgres DBMS role
 *
 *****************************************************************************/
CreateRoleStmt 
    : CREATE ROLE RoleId opt_with? OptRoleList
    ;


opt_with
    :  WITH
    ;

/*
 * Options for CREATE ROLE and ALTER ROLE (also used by CREATE/ALTER USER
 * for backwards compatibility).  Note: the only option required by SQL99
 * is "WITH ADMIN name".
 */
OptRoleList
    : OptRoleList OptRoleElem
    ;

OptRoleElem 
    : PASSWORD Sconst
    | PASSWORD NULL_P
    | ENCRYPTED PASSWORD Sconst
    | UNENCRYPTED PASSWORD Sconst
    | SUPERUSER_P
    | NOSUPERUSER
    | INHERIT
    | NOINHERIT
    | CREATEDB
    | NOCREATEDB
    | CREATEROLE
    | NOCREATEROLE
    | CREATEUSER
    | NOCREATEUSER
    | LOGIN_P
    | NOLOGIN_P
    | CONNECTION LIMIT SignedIconst
    | VALID UNTIL Sconst
    | RESOURCE QUEUE any_name
    | RESOURCE GROUP_P any_name
    /* Supported but not documented for roles, for use by ALTER GROUP. */
    | USER name_list
    /* The following are not supported by ALTER ROLE/USER/GROUP */
    | SYSID Iconst
    | ADMIN name_list
    | ROLE name_list
    | IN_P ROLE name_list
    | IN_P GROUP_P name_list
    | CREATEEXTTABLE exttab_auth_list
    | NOCREATEEXTTABLE exttab_auth_list
    | deny_login_role
    ;

deny_login_role 
    : DENY deny_interval
    | DENY deny_point
    ;

deny_interval
    : BETWEEN deny_point AND deny_point
    ;

deny_day_specifier
    : Sconst 
    | Iconst
    ;

deny_point
    : DAY_P deny_day_specifier opt_time
    ;

opt_time 
    : TIME Sconst
    ;

exttab_auth_list
    : LEFT_PAREN keyvalue_list RIGHT_PAREN
    ;

keyvalue_list
    : keyvalue_pair (COMMA keyvalue_pair)*
    ;

keyvalue_pair
    : ColLabel EQUALS_OP Sconst
    ;

/*****************************************************************************
 *
 * Create a new Postgres DBMS user (role with implied login ability)
 *
 *****************************************************************************/
CreateUserStmt
    : CREATE USER RoleId opt_with? OptRoleList
    ;

/*****************************************************************************
 *
 * Alter a postgresql DBMS role
 *
 *****************************************************************************/
alter_role_stmt 
    : ALTER ROLE RoleId opt_with? OptAlterRoleList
    ;

alter_role_set_stmt 
    : ALTER ROLE RoleId SetResetClause
    ;

/* OptAlterRoleList is effectively OptRoleList with additional support for DROP DENY FOR. */
OptAlterRoleList
    : OptAlterRoleList OptAlterRoleElem
    ;

OptAlterRoleElem
    : OptRoleElem
    | DROP DENY FOR deny_point
    ;

/*****************************************************************************
 *
 * Alter a postgresql DBMS user
 *
 *****************************************************************************/
alter_user_stmt 
    : ALTER USER RoleId opt_with? OptAlterRoleList
    ;


alter_user_set_stmt
    : ALTER USER RoleId SetResetClause
    ;

/*****************************************************************************
 *
 * Drop a postgresql DBMS role
 *
 * XXX Ideally this would have CASCADE/RESTRICT options, but since a role
 * might own objects in multiple databases, there is presently no way to
 * implement either cascading or restricting.  Caveat DBA.
 *****************************************************************************/
DropRoleStmt
    : DROP ROLE name_list
    | DROP ROLE IF_P EXISTS name_list
    ;

/*****************************************************************************
 *
 * Drop a postgresql DBMS user
 *
 * XXX Ideally this would have CASCADE/RESTRICT options, but since a user
 * might own objects in multiple databases, there is presently no way to
 * implement either cascading or restricting.  Caveat DBA.
 *****************************************************************************/
DropUserStmt 
    : DROP USER name_list
    | DROP USER IF_P EXISTS name_list
    ;

/*****************************************************************************
 *
 * Create a postgresql group (role without login ability)
 *
 *****************************************************************************/
CreateGroupStmt
    : CREATE GROUP_P RoleId opt_with? OptRoleList
    ;


/*****************************************************************************
 *
 * Alter a postgresql group
 *
 *****************************************************************************/
alter_group_stmt
    : ALTER GROUP_P RoleId add_drop USER name_list
    ;

add_drop
    :  ADD_P
    | DROP
    ;


/*****************************************************************************
 *
 * Drop a postgresql group
 *
 * XXX see above notes about cascading DROP USER; groups have same problem.
 *****************************************************************************/
DropGroupStmt
    : DROP GROUP_P name_list
    | DROP GROUP_P IF_P EXISTS name_list
    ;


/*****************************************************************************
 *
 * Manipulate a schema
 *
 *****************************************************************************/
CreateSchemaStmt
    : CREATE SCHEMA OptSchemaName? AUTHORIZATION RoleId OptSchemaEltList?
    | CREATE SCHEMA ColId OptSchemaEltList?
    ;

OptSchemaName
    : ColId
    ;

OptSchemaEltList
    : OptSchemaEltList schema_stmt
    ;

/*
 *  schema_stmt are the ones that can show up inside a CREATE SCHEMA
 *  statement (in addition to by themselves).
 */
schema_stmt
    : CreateStmt
    | IndexStmt
    | CreateSeqStmt
    | CreateTrigStmt
    | GrantStmt
    | ViewStmt
    ;

/*****************************************************************************
 *
 * Set PG internal variable
 *    SET name TO 'var_value'
 * Include SQL92 syntax (thomas 1997-10-22):
 *    SET TIME ZONE 'var_value'
 *
 *****************************************************************************/

VariableSetStmt
    : SET (LOCAL | SESSION)? set_rest
    ;

/* Generic SET syntaxes: */
set_rest
    : var_name TO (var_list | DEFAULT)
    | var_name EQUALS_OP (var_list | DEFAULT)
    | var_name FROM CURRENT_P
    /* Special syntaxes mandated by SQL standard: */
    | TIME ZONE zone_value
    | TRANSACTION transaction_mode_list
    | SESSION CHARACTERISTICS AS TRANSACTION transaction_mode_list
    | NAMES opt_encoding?
    | ROLE ColId_or_Sconst
    | SESSION AUTHORIZATION (ColId_or_Sconst | DEFAULT)
    | XML_P OPTION document_or_content
    ;

var_name
    :  ColId
    | var_name PERIOD ColId
    ;

var_list
    :  var_value (COMMA var_value)*
    ;

var_value
    :  opt_boolean
    | ColId_or_Sconst
    | NumericOnly
    ;

iso_level
    :  READ (COMMITED | UNCOMMITTED)
    | REPEATABLE READ
    | SERIALIZABLE
    ;

opt_boolean
    : TRUE_P
    | FALSE_P
    | ON
    | OFF
    ;

/* Timezone values can be:
 * - a string such as 'pst8pdt'
 * - an identifier such as "pst8pdt"
 * - an integer or floating point number
 * - a time interval per SQL99
 * ColId gives reduce/reduce errors against ConstInterval and LOCAL,
 * so use IDENT and reject anything which is a reserved word.
 */
zone_value
    : Sconst
    | IDENT
    | ConstInterval paren_iconst? Sconst opt_interval?
    | NumericOnly
    | DEFAULT
    | LOCAL
    ;

paren_iconst
    : LEFT_PAREN Iconst RIGHT_PAREN
    ;

opt_encoding
    : Sconst
    | DEFAULT
    ;

ColId_or_Sconst
    : ColId
    | SCONST
    ;

VariableResetStmt
    : RESET var_name
    | RESET TIME ZONE
    | RESET TRANSACTION ISOLATION LEVEL
    | RESET SESSION AUTHORIZATION
    | RESET ALL
    ;

/* SetResetClause allows SET or RESET without LOCAL */
SetResetClause
    : SET set_rest
    | VariableResetStmt
    ;


VariableShowStmt
    : SHOW var_name
    | SHOW TIME ZONE
    | SHOW TRANSACTION ISOLATION LEVEL
    | SHOW SESSION AUTHORIZATION
    | SHOW ALL
    ;


ConstraintsSetStmt
    : SET CONSTRAINTS constraints_set_list constraints_set_mode
    ;

constraints_set_list
    : ALL
    | qualified_name_list
    ;

constraints_set_mode
    : DEFERRED
    | IMMEDIATE
    ;

/*
 * Checkpoint statement
 */
CheckPointStmt
    : CHECKPOINT
    ;

/*****************************************************************************
 *
 * DISCARD { ALL | TEMP | PLANS }
 *
 *****************************************************************************/
DiscardStmt
    : DISCARD (ALL | TEMP | TEMPORARY | PLANS)
    ;

/*****************************************************************************
 *
 *  ALTER [ TABLE | INDEX ] variations
 *
 *****************************************************************************/
alter_table_stmt
    : ALTER EXTERNAL? TABLE relation_expr alter_table_cmds
    |  ALTER INDEX relation_expr alter_rel_cmds
    ;

alter_table_cmds
    : alter_table_cmd (COMMA alter_table_cmd)*
    ;

/* Subcommands that are for ALTER TABLE only */
/* ALTER TABLE <relation> ADD [COLUMN] <coldef> */
alter_table_cmd
    : ADD_P opt_column? columnDef

    /* ALTER TABLE <relation> ALTER [COLUMN] <colname> {SET DEFAULT <expr>|DROP DEFAULT} */
    | ALTER opt_column? ColId alter_column_default

    /* ALTER TABLE <relation> ALTER [COLUMN] <colname> DROP NOT NULL */
    | ALTER opt_column? ColId DROP NOT NULL_P

    /* ALTER TABLE <relation> ALTER [COLUMN] <colname> SET NOT NULL */
    | ALTER opt_column? ColId SET NOT NULL_P
      
    /* ALTER TABLE <relation> ALTER [COLUMN] <colname> SET STATISTICS <IntegerOnly> */
    | ALTER opt_column? ColId SET STATISTICS IntegerOnly
      
    /* ALTER TABLE <relation> ALTER [COLUMN] <colname> SET STORAGE <storagemode> */
    | ALTER opt_column? ColId SET STORAGE ColId
      
    /* ALTER TABLE <relation> DROP [COLUMN] <colname> [RESTRICT|CASCADE] */
    | DROP opt_column? ColId opt_drop_behavior?
      
    /*
     * ALTER TABLE <relation> ALTER [COLUMN] <colname> TYPE <typename>
     *    [ USING <expression> ]
     */
    | ALTER opt_column? ColId TYPE_P Typename alter_using?
      
    /* ALTER TABLE <relation> ADD CONSTRAINT ... */
    | ADD_P TableConstraint
      
    /* ALTER TABLE <relation> DROP CONSTRAINT <name> [RESTRICT|CASCADE] */
    | DROP CONSTRAINT name opt_drop_behavior?
      
    /* ALTER TABLE <relation> SET WITHOUT OIDS  */
    | SET WITHOUT OIDS
      
    /* ALTER TABLE <name> CLUSTER ON <indexname> */
    | CLUSTER ON name
      
    /* ALTER TABLE <name> SET WITHOUT CLUSTER */
    | SET WITHOUT CLUSTER
      
    /* ALTER TABLE <name> ENABLE TRIGGER <trig> */
    /* ALTER TABLE <name> ENABLE ALWAYS TRIGGER <trig> */
    /* ALTER TABLE <name> ENABLE REPLICA TRIGGER <trig> */
    | ENABLE_P (ALWAYS | REPLICA)? TRIGGER name
      
    /* ALTER TABLE <name> ENABLE TRIGGER ALL */
    /* ALTER TABLE <name> ENABLE TRIGGER USER */
    | ENABLE_P TRIGGER (ALL | USER)
      
    /* ALTER TABLE <name> DISABLE TRIGGER <trig> */
    /* ALTER TABLE <name> DISABLE TRIGGER ALL */
    /* ALTER TABLE <name> DISABLE TRIGGER USER */
    | DISABLE_P TRIGGER (name | ALL | USER)
      
    /* ALTER TABLE <name> ENABLE RULE <rule> */
    /* ALTER TABLE <name> ENABLE ALWAYS RULE <rule> */
    /* ALTER TABLE <name> ENABLE REPLICA RULE <rule> */
    | ENABLE_P (ALWAYS | REPLICA)? RULE name
      
    /* ALTER TABLE <name> DISABLE RULE <rule> */
    | DISABLE_P RULE name
      
    /* ALTER TABLE <name> INHERIT <parent> */
    /* ALTER TABLE <name> NO INHERIT <parent> */
    | NO? INHERIT qualified_name
      
    /* ALTER TABLE <name> SET [WITH] [DISTRIBUTED BY] */
    /* distro only */
    /* storage and distro */
    /* storage only */
    | SET with_out_definition? DistributedBy
    | SET with_out_definition
      
    | alter_table_partition_cmd
      
    | alter_rel_cmd
    ;

opt_table_partition_split_into
    : INTO LEFT_PAREN 
            alter_table_partition_id_spec_with_opt_default COMMA
            alter_table_partition_id_spec_with_opt_default RIGHT_PAREN  
    ;

opt_table_partition_merge_into
    : INTO alter_table_partition_id_spec_with_opt_default
    ;

table_partition_modify
    : TabPartitionBoundarySpecStart TabPartitionBoundarySpecEnd? 
      OptTabPartitionBoundarySpecEvery?  
    | TabPartitionBoundarySpecEnd OptTabPartitionBoundarySpecEvery?  
    | add_drop part_values_clause
    ;

opt_table_partition_exchange_validate 
    : (WITH | WITHOUT) VALIDATION
    ;

alter_table_partition_id_spec 
    : PartitionColId
    | FOR LEFT_PAREN TabPartitionBoundarySpecValList RIGHT_PAREN  
      /*
       * What we'd really want here is:
       *
       * FOR LEFT_PAREN RANK LEFT_PAREN NumericOnly RIGHT_PAREN RIGHT_PAREN
       *
       * But we don't want to make RANK a reserved keyword. Also,
       * just replacing RANK with IDENT creates a conflict with this
       * AexprConst rule:
       *
       * func_name paren_expr_list Sconst
       *
       * I.e. after the parser has shifted "func_name LEFT_PAREN", it doesn't
       * know whether there's the Sconst at the end, which implies an
       * AexprConst, or not.
       *
       * To avoid that conflict, this rule (after FOR LEFT_PAREN) matches
       * exactly the AexprConst rule except for the final Sconst.
       * That way, the parser doesn't need to decide which one this is,
       * until it has shifted the whole thing. Then we check in the
       * code that func_name was RANK, and that the expr_list was a
       * NumericOnly.
        */
    | FOR LEFT_PAREN func_name paren_expr_list RIGHT_PAREN
    ;

alter_table_partition_id_spec_with_opt_default 
    : PARTITION alter_table_partition_id_spec
    | DEFAULT PARTITION alter_table_partition_id_spec
    | DEFAULT PARTITION 
    ;

alter_table_partition_cmd
    : ADD_P PARTITION TabPartitionBoundarySpec? OptTabPartitionStorageAttr?
      OptTabSubPartitionSpec?

    | ADD_P DEFAULT PARTITION alter_table_partition_id_spec 
      TabPartitionBoundarySpec? OptTabPartitionStorageAttr? OptTabSubPartitionSpec? 

    | ADD_P PARTITION alter_table_partition_id_spec TabPartitionBoundarySpec?
      OptTabPartitionStorageAttr? OptTabSubPartitionSpec? 
    | ALTER alter_table_partition_id_spec_with_opt_default alter_table_cmd
    | COALESCE PARTITION    
    | COALESCE PARTITION alter_table_partition_id_spec 
    | DROP PARTITION IF_P EXISTS alter_table_partition_id_spec opt_drop_behavior?
    | DROP DEFAULT PARTITION IF_P EXISTS opt_drop_behavior?
    | DROP alter_table_partition_id_spec_with_opt_default opt_drop_behavior?
    | DROP PARTITION 
    | EXCHANGE alter_table_partition_id_spec_with_opt_default WITH TABLE qualified_name
      opt_table_partition_exchange_validate?  
      
    | MERGE alter_table_partition_id_spec_with_opt_default COMMA alter_table_partition_id_spec_with_opt_default
      opt_table_partition_merge_into?

    | MODIFY alter_table_partition_id_spec_with_opt_default table_partition_modify
    | RENAME alter_table_partition_id_spec_with_opt_default TO IDENT  
    | SET SUBPARTITION TEMPLATE LEFT_PAREN TabSubPartitionElemList RIGHT_PAREN 
    | SET SUBPARTITION TEMPLATE LEFT_PAREN  RIGHT_PAREN 
    | SPLIT DEFAULT PARTITION TabPartitionBoundarySpecStart
      TabPartitionBoundarySpecEnd opt_table_partition_split_into?

    | SPLIT alter_table_partition_id_spec_with_opt_default AT 
      LEFT_PAREN part_values_or_spec_list RIGHT_PAREN opt_table_partition_split_into?
    | TRUNCATE alter_table_partition_id_spec_with_opt_default opt_drop_behavior?
    ;

alter_rel_cmds 
    : alter_rel_cmd (COMMA alter_rel_cmd)*
    ;

/* Subcommands that are for ALTER TABLE or ALTER INDEX */
/* ALTER [TABLE|INDEX] <name> OWNER TO RoleId */
alter_rel_cmd 
    : OWNER TO RoleId

    /* ALTER [TABLE|INDEX] <name> SET TABLESPACE <tablespacename> */
    | SET TABLESPACE name
      
    /* ALTER [TABLE|INDEX] <name> SET (...) */
    /* ALTER [TABLE|INDEX] <name> RESET (...) */
    | (SET | RESET) definition
    ;

alter_column_default 
    : SET DEFAULT a_expr
    | DROP DEFAULT
    ;

opt_drop_behavior 
    : CASCADE
    | RESTRICT
    ;

alter_using
    : USING a_expr
    ;



/*****************************************************************************
 *
 *    QUERY :
 *        close <portalname>
 *
 *****************************************************************************/
ClosePortalStmt
    : CLOSE (name | ALL)
    ;


/*****************************************************************************
 *
 *    QUERY :
 *        COPY relname [paren_column_list] FROM/TO file [WITH options]
 *
 *        BINARY, OIDS, and DELIMITERS kept in old locations
 *        for backward compatibility.  2002-06-18
 *
 *        COPY ( SELECT ... ) TO file [WITH options]
 *
 *        where 'file' can be one of:
 *        { PROGRAM 'command' | STDIN | STDOUT | 'filename' }
 *
 *        This form doesn't have the backwards-compatible option
 *        syntax.
 *
 *****************************************************************************/
CopyStmt
    :  COPY BINARY? qualified_name paren_column_list? opt_oids?
      copy_from PROGRAM? copy_file_name copy_delimiter? opt_with? copy_opt_list?
      OptSingleRowErrorHandling? skip_external_partition?

    | COPY select_with_parens TO PROGRAM? copy_file_name opt_with?
      copy_opt_list?
    ;

copy_from
    : FROM
    | TO
    ;

skip_external_partition
    : IGNORE_P EXTERNAL PARTITIONS
    ;
/*
 * copy_file_name NULL indicates stdio is used. Whether stdin or stdout is
 * used depends on the direction. (It really doesn't make sense to copy from
 * stdout. We silently correct the "typo".)     - AY 9/94
 */
copy_file_name 
    : Sconst
    | STDIN
    | STDOUT
    ;



copy_opt_list
    : copy_opt_list copy_opt_item
    ;


copy_opt_item
    : BINARY
    | OIDS
    | (DELIMITER | NULL_P | QUOTE | ESCAPE | NEWLINE) AS? Sconst
    | CSV
    | HEADER_P
    | FORCE QUOTE columnList
    | FORCE NOT NULL_P columnList
    | FILL MISSING FIELDS
    | ON SEGMENT
    ;

/* The following exist for backward compatibility */
opt_oids 
    : WITH OIDS
    ;

/* USING DELIMITERS kept for backward compatibility. 2002-06-15 */
copy_delimiter
    : USING? DELIMITERS Sconst
    ;

/*****************************************************************************
 *
 *    QUERY :
 *        CREATE TABLE relname
 *
 *****************************************************************************/

CreateStmt
    :  CREATE OptTemp? TABLE qualified_name LEFT_PAREN TableElementList? RIGHT_PAREN
      OptInherit? OptWith? OnCommitOption? OptTableSpace? OptDistributedBy? 
      OptTabPartitionBy?

    | CREATE OptTemp? TABLE qualified_name OF qualified_name
      LEFT_PAREN TableElementList? RIGHT_PAREN OptWith? OnCommitOption? OptTableSpace? OptDistributedBy? OptTabPartitionBy?
    ;

/*
 * Redundancy here is needed to avoid shift/reduce conflicts,
 * since TEMP is not a reserved word.  See also OptTempTableName.
 *
 * NOTE: we accept both GLOBAL and LOCAL options; since we have no modules
 * the LOCAL keyword is really meaningless.
 */
OptTemp
    : (LOCAL? | GLOBAL) (TEMPORARY | TEMP)
    ;

TableElementList
    : TableElement (COMMA TableElement)*
    ;

TableElement 
    : columnDef
    | TableLikeClause
    | TableConstraint
    | column_reference_storage_directive
    ;

column_reference_storage_directive 
    : COLUMN ColId ENCODING definition
    | DEFAULT COLUMN ENCODING definition
    ;

columnDef
    :  ColId Typename ColQualList? opt_storage_encoding?
    ;

ColQualList
    : ColConstraint*
    ;

ColConstraint 
    : CONSTRAINT name ColConstraintElem
    | ColConstraintElem
    | ConstraintAttr
    ;

opt_storage_encoding 
    : ENCODING definition
    ;

/* DEFAULT NULL is already the default for Postgres.
 * But define it here and carry it forward into the system
 * to make it explicit.
 * - thomas 1998-09-13
 *
 * WITH NULL and NULL are not SQL92-standard syntax elements,
 * so leave them out. Use DEFAULT NULL to explicitly indicate
 * that a column may have that value. WITH NULL leads to
 * shift/reduce conflicts with WITH TIME ZONE anyway.
 * - thomas 1999-01-08
 *
 * DEFAULT expression must be b_expr not a_expr to prevent shift/reduce
 * conflict on NOT (since NOT might start a subsequent NOT NULL constraint,
 * or be part of a_expr NOT LIKE or similar constructs).
 */
ColConstraintElem 
    : NOT NULL_P
    | NULL_P
    | UNIQUE with_out_definition? OptConsTableSpace?
    | PRIMARY KEY with_out_definition? OptConsTableSpace?
    | CHECK LEFT_PAREN a_expr RIGHT_PAREN
    | DEFAULT b_expr
    | REFERENCES qualified_name paren_column_list? key_match? key_actions?
    ;

/*
 * ConstraintAttr represents constraint attributes, which we parse as if
 * they were independent constraint clauses, in order to avoid shift/reduce
 * conflicts (since NOT might start either an independent NOT NULL clause
 * or an attribute).  parse_utilcmd.c is responsible for attaching the
 * attribute information to the preceding "real" constraint node, and for
 * complaining if attribute clauses appear in the wrong place or wrong
 * combinations.
 *
 * See also ConstraintAttributeSpec, which can be used in places where
 * there is no parsing conflict.
 */
ConstraintAttr 
    : NOT? DEFERRABLE
    | INITIALLY (DEFERRED | IMMEDIATE)
    ;

/*
 * SQL99 supports wholesale borrowing of a table definition via the LIKE clause.
 * This seems to be a poor man's inheritance capability, with the resulting
 * tables completely decoupled except for the original commonality in definitions.
 *
 * This is very similar to CREATE TABLE AS except for the INCLUDING DEFAULTS extension
 * which is a part of SQL:2003.
 */
TableLikeClause 
    : LIKE qualified_name TableLikeOption*
    ;

TableLikeOption 
    : (INCLUDING | EXCLUDING) DEFAULTS
    | (INCLUDING | EXCLUDING) CONSTRAINTS
    | (INCLUDING | EXCLUDING) INDEXES
    ;


/* ConstraintElem specifies constraint syntax which is not embedded into
 *  a column definition. ColConstraintElem specifies the embedded form.
 * - thomas 1997-12-03
 */
TableConstraint 
    : (CONSTRAINT name)? ConstraintElem
    ;

ConstraintElem 
    : CHECK LEFT_PAREN a_expr RIGHT_PAREN
    | (UNIQUE | PRIMARY KEY) paren_column_list with_out_definition? OptConsTableSpace?
    | FOREIGN KEY paren_column_list REFERENCES qualified_name
      paren_column_list? key_match? key_actions? ConstraintAttributeSpec?
    ;

paren_column_list
    : LEFT_PAREN columnList RIGHT_PAREN
    ;

columnList 
    : columnElem (COMMA columnElem)*
    ;

columnElem 
    : ColId
    ;

key_match 
    : MATCH (FULL | PARTIAL | SIMPLE)
    ;

/*
 * We combine the update and delete actions into one value temporarily
 * for simplicity of parsing, and then break them down again in the
 * calling production.  update is in the left 8 bits, delete in the right.
 * Note that NOACTION is the default.
 */
key_actions 
    : key_update
    | key_delete
    | key_update key_delete
    | key_delete key_update
    ;

key_update 
    : ON UPDATE key_action
    ;

key_delete 
    : ON DELETE_P key_action
    ;

key_action 
    : NO ACTION
    | RESTRICT
    | CASCADE
    | SET (NULL_P | DEFAULT)
    ;

OptInherit 
    : INHERITS LEFT_PAREN qualified_name_list RIGHT_PAREN
    ;

/* WITH (options) is preferred, WITH OIDS and WITHOUT OIDS are legacy forms */
OptWith 
    : WITH definition
    | (WITH | WITHOUT) OIDS
    ;

OnCommitOption 
    : ON COMMIT DROP
    | ON COMMIT (DELETE_P | PRESERVE) ROWS
    ;

OptTableSpace 
    : TABLESPACE name
    ;

OptConsTableSpace 
    : USING INDEX TABLESPACE name
    ;

DistributedBy
    : DISTRIBUTED BY paren_column_list
    | DISTRIBUTED RANDOMLY
    ;

OptDistributedBy 
    : DistributedBy
    ;

/* START PARTITION RULES */
TabPartitionColumnEncList 
    : column_reference_storage_directive+ 
    ;

OptTabPartitionStorageAttr
    : WITH definition (TABLESPACE name)? 
    | TABLESPACE name 
    ;

OptTabPartitionsNumber 
    : PARTITIONS IntegerOnly     
    ;

OptTabSubPartitionsNumber 
    : SUBPARTITIONS IntegerOnly 
    ;

OptTabPartitionSpec 
    : LEFT_PAREN TabPartitionElemList RIGHT_PAREN
    ;

OptTabSubPartitionSpec 
    : LEFT_PAREN TabSubPartitionElemList RIGHT_PAREN 
    ;

TabPartitionElemList 
    : TabPartitionElem (COMMA TabPartitionElem)*
    ;

TabSubPartitionElemList 
    : TabSubPartitionElem (COMMA TabSubPartitionElem)*
    ;

tab_part_val_no_paran 
    : AexprConst 
    | CAST LEFT_PAREN tab_part_val AS Typename RIGHT_PAREN
    | tab_part_val_no_paran TYPECAST Typename
    | MINUS_SIGN tab_part_val_no_paran 
    ;

tab_part_val 
    : tab_part_val_no_paran 
    | LEFT_PAREN tab_part_val_no_paran RIGHT_PAREN 
    | LEFT_PAREN tab_part_val_no_paran RIGHT_PAREN TYPECAST Typename
    ; 
    

TabPartitionBoundarySpecValList 
    : tab_part_val (COMMA tab_part_val)*
    ;

/* only optional for START and END in ALTER TABLE...MODIFY PARTITION */
OptTabPartitionRangeInclusive 
    : INCLUSIVE
    | EXCLUSIVE
    ;

TabPartitionBoundarySpecStart 
    : START LEFT_PAREN TabPartitionBoundarySpecValList? RIGHT_PAREN OptTabPartitionRangeInclusive?
    ;

TabPartitionBoundarySpecEnd
    : END_P LEFT_PAREN TabPartitionBoundarySpecValList? RIGHT_PAREN OptTabPartitionRangeInclusive?
    ;

OptTabPartitionBoundarySpecEvery 
    : EVERY LEFT_PAREN TabPartitionBoundarySpecValList RIGHT_PAREN 
    ;

/* VALUES for LIST, start..end for RANGE. */
TabPartitionBoundarySpec 
    : part_values_clause
    | TabPartitionBoundarySpecStart TabPartitionBoundarySpecEnd?
      OptTabPartitionBoundarySpecEvery?  
    | TabPartitionBoundarySpecEnd
      OptTabPartitionBoundarySpecEvery?  
    ;

paren_part_values_single
    : LEFT_PAREN part_values_single RIGHT_PAREN
    ;

multi_spec_value_list 
    : paren_part_values_single (COMMA paren_part_values_single)*
    ;

part_values_single 
    : tab_part_val_no_paran (COMMA tab_part_val_no_paran)*
    ;

part_values_clause 
    : VALUES paren_part_values_single
    | VALUES LEFT_PAREN multi_spec_value_list RIGHT_PAREN
    ;

part_values_or_spec_list 
    : TabPartitionBoundarySpecValList
    | part_values_clause
    ;

/* a "Partition Element" closely corresponds to a "Partition Declaration" */
TabPartitionElem 
    : (TabPartitionNameDecl | TabPartitionDefaultNameDecl) TabPartitionBoundarySpec? 
      OptTabPartitionStorageAttr? TabPartitionColumnEncList? OptTabSubPartitionSpec? 

    /* allow boundary spec for default partition in parser, but complain later */
    | TabPartitionElemOption 
    | column_reference_storage_directive
    ;

TabSubPartitionElem 
    : (TabSubPartitionNameDecl | TabSubPartitionDefaultNameDecl) TabPartitionBoundarySpec? 
      OptTabPartitionStorageAttr? TabPartitionColumnEncList? OptTabSubPartitionSpec?

    /* allow boundary spec for default partition in parser, but complain later */
    | TabPartitionElemOption 
    | column_reference_storage_directive
    ;

TabPartitionElemOption
    : TabPartitionBoundarySpec OptTabPartitionStorageAttr? TabPartitionColumnEncList?
       OptTabSubPartitionSpec?
    ;

TabPartitionNameDecl 
    : PARTITION PartitionColId
    ;
TabPartitionDefaultNameDecl 
    : DEFAULT PARTITION PartitionColId
    ;

TabSubPartitionNameDecl 
    : SUBPARTITION PartitionColId
    ;

TabSubPartitionDefaultNameDecl 
    : DEFAULT SUBPARTITION PartitionColId
    ;

TabPartitionByType
    : RANGE
    | HASH
    | LIST
    ;

OptTabPartitionBy
    : PARTITION BY TabPartitionByType? paren_column_list OptTabPartitionsNumber? 
      list_subparts? OptTabPartitionSpec?
    ;

TabSubPartitionTemplate 
    : SUBPARTITION TEMPLATE LEFT_PAREN TabSubPartitionElemList RIGHT_PAREN 
    ;

list_subparts
    : TabSubPartitionBy (COMMA? TabSubPartitionBy)*
    ;

TabSubPartitionBy
    : SUBPARTITION BY TabPartitionByType? paren_column_list OptTabSubPartitionsNumber? 
    | TabSubPartitionTemplate
    ;
/* END PARTITION RULES */

/*
 * Note: CREATE TABLE ... AS SELECT ... is just another spelling for
 * SELECT ... INTO.
 */
CreateAsStmt 
    : CREATE OptTemp? TABLE create_as_target AS SelectStmt opt_with_data? 
      OptDistributedBy? OptTabPartitionBy?
    ;

create_as_target
    : qualified_name OptCreateAs? OptWith? OnCommitOption? OptTableSpace?
    ;

OptCreateAs 
    : LEFT_PAREN CreateAsList RIGHT_PAREN
    ;

CreateAsList
    : CreateAsElement (COMMA CreateAsElement)*
    ;

CreateAsElement 
    : ColId
    ;

opt_with_data
    : WITH NO? DATA_P
      | WITH NO DATA_P
    ;

/*****************************************************************************
 *
 *    QUERY :
 *        CREATE EXTERNAL [WEB] TABLE relname
 *
 *****************************************************************************/
CreateExternalStmt
    : CREATE OptWritable? EXTERNAL WEB? OptTemp? TABLE qualified_name LEFT_PAREN ExtTableElementList? RIGHT_PAREN 
      ExtTypedesc FORMAT Sconst format_opt? ext_options_opt? ext_opt_encoding_list 
      OptSingleRowErrorHandling? OptDistributedBy?
    ;

OptWritable
    :  WRITABLE
    | READABLE
        ;

ExtTypedesc
    : LOCATION LEFT_PAREN cdb_string_list RIGHT_PAREN ext_on_clause_item*
    | EXECUTE Sconst ext_on_clause_item*
    ;

ext_on_clause_item 
    : ON ALL  
    | ON HOST Sconst?
    | ON MASTER
    | ON SEGMENT? Iconst
    ;

double_parens
    : LEFT_PAREN RIGHT_PAREN
    ;

format_opt  
    : LEFT_PAREN format_opt_list RIGHT_PAREN
    | LEFT_PAREN format_def_list RIGHT_PAREN
    | double_parens
    ;

format_opt_list
    : format_opt_item+    
    ;

format_def_list 
    : format_def_item  (COMMA format_def_item)*
    ;
      

format_def_item 
    : ColLabel EQUALS_OP def_arg
    | ColLabel EQUALS_OP paren_column_list
    ;

format_opt_item 
    : DELIMITER AS? Sconst
    | (NULL_P | QUOTE | ESCAPE | NEWLINE) AS? Sconst
    | CSV
    | HEADER_P
    | FORCE (NOT NULL_P | QUOTE) columnList
    | FILL MISSING FIELDS
    ;

ext_options_opt 
    : OPTIONS ext_options
    ;

ext_options 
    : LEFT_PAREN ext_options_list RIGHT_PAREN
    | double_parens
    ;

ext_options_list 
    : ext_options_item (COMMA ext_options_item)*
    ;

ext_options_item 
    : ColLabel Sconst
    ;

ExtTableElementList 
    : ExtTableElement (COMMA ExtTableElement)*
    ;

ExtTableElement 
    : ExtcolumnDef
    | TableLikeClause
    ;

/* column def for ext table - doesn't have room for constraints */
ExtcolumnDef 
    :  ColId Typename
    ;
  
/*
 * Single row error handling SQL
 */
OptSingleRowErrorHandling 
    : OptLogErrorTable? SEGMENT REJECT_P LIMIT Iconst OptSrehLimitType?
    ;
  
OptLogErrorTable 
    : LOG_P ERRORS INTO qualified_name
    | LOG_P ERRORS
    ;
  
OptSrehLimitType 
    : ROWS
    | PERCENT
    ;

/*
 * ENCODING. (we cheat a little and use a list, even though it's 1 item max).
 */
ext_opt_encoding_list 
    : ext_opt_encoding_item+
    ;
  
ext_opt_encoding_item 
    : ENCODING EQUALS_OP? (Sconst | Iconst)
    ;

/*****************************************************************************
 *
 *    QUERY :
 *        CREATE SEQUENCE seqname
 *        ALTER SEQUENCE seqname
 *
 *****************************************************************************/
CreateSeqStmt 
    : CREATE OptTemp? SEQUENCE qualified_name OptSeqList?
    ;

alter_seq_stmt 
    : ALTER SEQUENCE qualified_name OptSeqList?
    ;

OptSeqList 
    : OptSeqElem+
    ;

OptSeqElem 
    : CACHE NumericOnly
    | NO? CYCLE
    | NO CYCLE
    | INCREMENT BY? NumericOnly
    | (MAXVALUE | MINVALUE) NumericOnly
    | NO (MAXVALUE | MINVALUE)
    | OWNED BY any_name
    | (START | RESTART) opt_with? NumericOnly
    ;

NumericOnly 
    : FloatOnly
    | IntegerOnly
    ;

FloatOnly
    : MINUS_SIGN? FCONST
    ;

IntegerOnly
    : SignedIconst
    ;

/*****************************************************************************
 *
 *    QUERIES :
 *        CREATE PROCEDURAL LANGUAGE ...
 *        DROP PROCEDURAL LANGUAGE ...
 *
 *****************************************************************************/

CreatePLangStmt 
    : CREATE TRUSTED? PROCEDURAL? LANGUAGE ColId_or_Sconst CreatePLangStmtOption?
    ;

CreatePLangStmtOption
    : HANDLER handler_name opt_inline_handler? opt_validator?
    ;

/* This ought to be just func_name, but that causes reduce/reduce conflicts
 * (CREATE LANGUAGE is the only place where func_name isn't followed by LEFT_PAREN).
 * Work around by using simple names, instead.
 */
handler_name 
    : name
    | name attrs
    ;

opt_inline_handler 
    : INLINE_P handler_name
    ;

validator_clause 
    : VALIDATOR handler_name
    | NO VALIDATOR
    ;

opt_validator 
    : validator_clause
    ;

DropPLangStmt 
    : DROP PROCEDURAL? LANGUAGE (IF_P EXISTS)? ColId_or_Sconst opt_drop_behavior?
    ;

/*****************************************************************************
 *
 *     QUERY:
 *             CREATE FILESPACE filespace ( ... )
 *
 *****************************************************************************/

CreateFileSpaceStmt 
    : CREATE FILESPACE name OptOwner? LEFT_PAREN FileSpaceSegList RIGHT_PAREN 
    ;

FileSpaceSegList
    : FileSpaceSeg (COMMA FileSpaceSeg)*
    ;

FileSpaceSeg 
    : Iconst SEMICOLON Sconst
    ;

OptOwner 
    : OWNER name
    ;

/*****************************************************************************
 *
 *     QUERY:
 *             CREATE TABLESPACE tablespace FILESPACE filespace
 *
 *****************************************************************************/

CreateTableSpaceStmt 
    : CREATE TABLESPACE name OptOwner? FILESPACE name
    ;

/*****************************************************************************
 *
 *    QUERY:
 *             CREATE EXTENSION extension
 *             [ WITH ] [ SCHEMA schema ] [ VERSION version ] [ FROM oldversion ]
 *
 *****************************************************************************/

CreateExtensionStmt 
    : CREATE EXTENSION (IF_P NOT EXISTS)? name opt_with? create_extension_opt_list?
    ;

create_extension_opt_list 
    : create_extension_opt_item+
    ;

create_extension_opt_item 
    : SCHEMA name
    | VERSION_P Sconst
    | FROM Sconst
    ;


/*****************************************************************************
 *
 * ALTER EXTENSION name UPDATE [ TO version ]
 *
 *****************************************************************************/

alter_extension_stmt 
    : ALTER EXTENSION name UPDATE alter_extension_opt_list?
    ;

alter_extension_opt_list 
    : alter_extension_opt_item+
    ;

alter_extension_opt_item  
    : TO Sconst
    ;

/*****************************************************************************
 *
 * ALTER EXTENSION name ADD/DROP object-identifier
 *
 *****************************************************************************/

alter_extension_content_stmt 
    : ALTER EXTENSION name add_drop alter_extension_content_stmtOption
    ;

alter_extension_content_stmtOption
    : AGGREGATE func_name aggr_args
    | CAST LEFT_PAREN Typename AS Typename RIGHT_PAREN
    | CONVERSION_P any_name
    | DOMAIN_P any_name
    | FUNCTION function_with_argtypes
    | PROCEDURAL? LANGUAGE name
    | OPERATOR any_operator oper_argtypes
    | OPERATOR CLASS any_name USING access_method
    | OPERATOR FAMILY any_name USING access_method
    | SCHEMA name
    | TABLE any_name
    | TEXT_P SEARCH PARSER any_name
    | TEXT_P SEARCH DICTIONARY any_name
    | TEXT_P SEARCH TEMPLATE any_name
    | TEXT_P SEARCH CONFIGURATION any_name
    | SEQUENCE any_name
    | VIEW any_name
    | TYPE_P any_name
    ;

/*****************************************************************************
 *
 *    QUERIES :
 *        CREATE TRIGGER ...
 *        DROP TRIGGER ...
 *
 *****************************************************************************/

CreateTrigStmt 
    : CREATE TRIGGER name TriggerActionTime TriggerEvents ON
      qualified_name TriggerForSpec? 
      EXECUTE PROCEDURE func_name LEFT_PAREN TriggerFuncArgs? RIGHT_PAREN

    | CREATE CONSTRAINT TRIGGER name AFTER TriggerEvents ON
      qualified_name OptConstrFromTable?
      ConstraintAttributeSpec? FOR EACH ROW 
      EXECUTE PROCEDURE func_name LEFT_PAREN TriggerFuncArgs? RIGHT_PAREN
    ;

TriggerActionTime 
    : BEFORE
    | AFTER
    ;

TriggerEvents 
    : TriggerOneEvent (OR TriggerOneEvent)*
    ;

TriggerOneEvent 
    : INSERT
    | DELETE_P
    | UPDATE
    ;

TriggerForSpec 
    : FOR EACH? TriggerForType
    ;

TriggerForType 
    : ROW
    | STATEMENT
    ;

TriggerFuncArgs 
    : TriggerFuncArg (COMMA TriggerFuncArg)*
    ;

TriggerFuncArg 
    : ICONST
    | FCONST
    | Sconst
    | BCONST
    | XCONST
    | ColId
    ;

OptConstrFromTable 
    : FROM qualified_name
    ;

ConstraintAttributeSpec 
    : ConstraintDeferrabilitySpec ConstraintTimeSpec?
    | ConstraintTimeSpec ConstraintDeferrabilitySpec?
    ;

ConstraintDeferrabilitySpec 
    : NOT? DEFERRABLE
    ;

ConstraintTimeSpec 
    : INITIALLY (IMMEDIATE | DEFERRED)
    ;


DropTrigStmt 
    : DROP TRIGGER name ON qualified_name opt_drop_behavior?
    | DROP TRIGGER IF_P EXISTS name ON qualified_name opt_drop_behavior?
    ;


/*****************************************************************************
 *
 *    QUERIES :
 *        CREATE ASSERTION ...
 *        DROP ASSERTION ...
 *
 *****************************************************************************/

CreateAssertStmt 
    : CREATE ASSERTION name CHECK LEFT_PAREN a_expr RIGHT_PAREN ConstraintAttributeSpec?
    ;

DropAssertStmt 
    : DROP ASSERTION name opt_drop_behavior?
    ;


/*****************************************************************************
 *
 *    QUERY :
 *        define (aggregate,operator,type)
 *
 *****************************************************************************/

DefineStmt 
    : CREATE ORDERED? AGGREGATE func_name (aggr_args definition | old_aggr_definition)
    | CREATE OPERATOR any_operator definition
    | CREATE TYPE_P any_name definition
    | CREATE TYPE_P any_name
    | CREATE TYPE_P any_name AS LEFT_PAREN TableFuncElementList RIGHT_PAREN
    | CREATE TRUSTED? PROTOCOL name definition
    | CREATE TYPE_P any_name AS ENUM_P LEFT_PAREN enum_val_list? RIGHT_PAREN
    | CREATE TEXT_P SEARCH (PARSER | DICTIONARY | TEMPLATE | CONFIGURATION) any_name definition
    ;

definition 
    : LEFT_PAREN def_list RIGHT_PAREN
    ;

def_list 
    :    def_elem (COMMA def_elem)*
    ;

def_elem 
    : ColLabel EQUALS_OP def_arg
    | ColLabel
    ;

/* Note: any simple identifier will be returned as a type name! */
def_arg 
    :  func_type
      /* MPP-6685: allow unquoted ROW keyword as "orientation" option */
      | ROW
      | reserved_keyword
      | qual_all_Op
      | NumericOnly
      | Sconst

      /* 
       * For compresstype=none in ENCODING clauses. Allows us to avoid
       * promoting that to a reserved word or adding the column reserved
       * list here which could get tricky.
       */
      | NONE
    ;

aggr_args 
    :  paren_type_list
    | LEFT_PAREN ASTERISK RIGHT_PAREN
    ;

old_aggr_definition 
    : LEFT_PAREN old_aggr_list RIGHT_PAREN
    ;

old_aggr_list 
    : old_aggr_elem (COMMA old_aggr_elem)*
    ;

/*
 * Must use IDENT here to avoid reduce/reduce conflicts; fortunately none of
 * the item names needed in old aggregate definitions are likely to become
 * SQL keywords.
 */
old_aggr_elem 
    :  IDENT EQUALS_OP def_arg
    ;

enum_val_list 
    :  Sconst (COMMA Sconst)*
    ;


/*****************************************************************************
 *
 *    QUERIES :
 *        CREATE OPERATOR CLASS ...
 *        CREATE OPERATOR FAMILY ...
 *        ALTER OPERATOR FAMILY ...
 *        DROP OPERATOR CLASS ...
 *        DROP OPERATOR FAMILY ...
 *
 *****************************************************************************/

CreateOpClassStmt 
    : CREATE OPERATOR CLASS any_name DEFAULT? FOR TYPE_P Typename
      USING access_method opt_opfamily? AS opclass_item_list
    ;

opclass_item_list 
    : opclass_item (COMMA opclass_item)*
    ;

opclass_item 
    : OPERATOR Iconst any_operator oper_argtypes? RECHECK?
    | FUNCTION Iconst func_name func_args
    | FUNCTION Iconst paren_type_list func_name func_args
    | STORAGE Typename
    ;

opt_opfamily 
    :  FAMILY any_name
    ;

CreateOpFamilyStmt 
    : CREATE OPERATOR FAMILY any_name USING access_method
    ;

AlterOpFamilyStmt   
    : ALTER OPERATOR FAMILY any_name USING access_method ADD_P opclass_item_list
    | ALTER OPERATOR FAMILY any_name USING access_method DROP opclass_drop_list
    ;

opclass_drop_list 
    : opclass_drop (COMMA opclass_drop)*
    ;

opclass_drop 
    : (OPERATOR | FUNCTION) Iconst paren_type_list
    ;


DropOpClassStmt 
    : DROP OPERATOR CLASS (IF_P EXISTS)? any_name USING access_method opt_drop_behavior?
    ;

DropOpFamilyStmt 
    : DROP OPERATOR FAMILY (IF_P EXISTS)? any_name USING access_method opt_drop_behavior?
    ;


/*****************************************************************************
 *
 *    QUERY:
 *
 *    DROP OWNED BY username [, username ...] [ RESTRICT | CASCADE ]
 *    REASSIGN OWNED BY username [, username ...] TO username
 *
 *****************************************************************************/
DropOwnedStmt 
    : DROP OWNED BY name_list opt_drop_behavior?
    ;

ReassignOwnedStmt 
    : REASSIGN OWNED BY name_list TO name
    ;

/*****************************************************************************
 *
 *    QUERY:
 *
 *    DROP itemtype [ IF EXISTS ] itemname [, itemname ...]
 *           [ RESTRICT | CASCADE ]
 *
 *****************************************************************************/

DropStmt 
    :  DROP drop_type (IF_P EXISTS)? any_name_list opt_drop_behavior?
    ;


drop_type 
    :  TABLE
    | EXTERNAL WEB? TABLE
    | SEQUENCE
    | VIEW
    | INDEX
    | TYPE_P
    | DOMAIN_P
    | CONVERSION_P
    | SCHEMA
    | EXTENSION
    | TEXT_P SEARCH (PARSER | DICTIONARY | TEMPLATE | CONFIGURATION)
    | FILESPACE
    | TABLESPACE
    | PROTOCOL
    ;

any_name_list 
    : any_name (COMMA any_name)*
    ;

any_name 
    :  ColId attrs?
    ;

attrs 
    :    (PERIOD attr_name)+
    ;


/*****************************************************************************
 *
 *    QUERY:
 *        truncate table relname1, relname2, ...
 *
 *****************************************************************************/

TruncateStmt 
    : TRUNCATE TABLE? qualified_name_list opt_drop_behavior?
    ;

/*****************************************************************************
 *
 *  The COMMENT ON statement can take different forms based upon the type of
 *  the object associated with the comment. The form of the statement is:
 *
 *  COMMENT ON [ [ DATABASE | DOMAIN | EXTENSION | INDEX | SEQUENCE | TABLE | TYPE | VIEW |
 *           CONVERSION | LANGUAGE | OPERATOR CLASS | LARGE OBJECT |
 *           CAST | COLUMN | SCHEMA | TABLESPACE | EXTENSION | ROLE |
 *           TEXT SEARCH PARSER | TEXT SEARCH DICTIONARY |
 *           TEXT SEARCH TEMPLATE |
 *           TEXT SEARCH CONFIGURATION ] <objname> |
 *         AGGREGATE <aggname> (arg1, ...) |
 *         FUNCTION <funcname> (arg1, arg2, ...) |
 *         OPERATOR <op> (leftoperand_typ, rightoperand_typ) |
 *         TRIGGER <triggername> ON <relname> |
 *         CONSTRAINT <constraintname> ON <relname> |
 *         RULE <rulename> ON <relname> ]
 *         IS 'text'
 *
 *****************************************************************************/

CommentStmt 
    : COMMENT ON CommentStmtOption
    ;

CommentStmtOption
    : CommentOption IS comment_text
    ;

CommentOption
    : comment_type any_name
    | AGGREGATE func_name aggr_args
    | FUNCTION func_name func_args 
    | OPERATOR any_operator oper_argtypes 
    | CONSTRAINT name ON any_name 
    | RULE name 
    | (TRIGGER | RULE) name ON any_name 
    | OPERATOR (CLASS | FAMILY) any_name USING access_method 
    | LARGE_P OBJECT_P NumericOnly 
    | CAST LEFT_PAREN Typename AS Typename RIGHT_PAREN 
    | PROCEDURAL? LANGUAGE any_name 
    | TEXT_P SEARCH (PARSER | DICTIONARY | TEMPLATE | CONFIGURATION) any_name 
    ;

comment_type 
    : COLUMN
    | DATABASE
    | SCHEMA
    | INDEX
    | SEQUENCE
    | TABLE
    | DOMAIN_P
    | TYPE_P
    | VIEW
    | CONVERSION_P
    | TABLESPACE
    | EXTENSION
    | ROLE
    | FILESPACE
    | RESOURCE QUEUE
    ;

comment_text  
    : Sconst
    | NULL_P
    ;

/*****************************************************************************
 *
 *    QUERY:
 *      fetch/move
 *
 *****************************************************************************/

FetchStmt 
    : FETCH (fetch_direction? (FROM | IN))? name
    ;

fetch_direction
    : NEXT
    | PRIOR
    | FIRST_P
    | LAST_P
    | ABSOLUTE_P SignedIconst
    | RELATIVE_P SignedIconst
    | SignedIconst
    | ALL
    | FORWARD
    | FORWARD SignedIconst
    | FORWARD ALL
    | BACKWARD
    | BACKWARD SignedIconst
    | BACKWARD ALL
    ;

/*****************************************************************************
 *
 * GRANT and REVOKE statements
 *
 *****************************************************************************/

GrantStmt
    : GRANT privileges ON privilege_target TO grantee_list
      opt_grant_grant_option?
    ;

RevokeStmt 
    : REVOKE (GRANT OPTION FOR)? privileges ON privilege_target
      FROM grantee_list opt_drop_behavior?
    ;


/*
 * A privilege list is represented as a list of strings; the validity of
 * the privilege names gets checked at execution.  This is a bit annoying
 * but we have little choice because of the syntactic conflict with lists
 * of role names in GRANT/REVOKE.  What's more, we have to call out in
 * the "privilege" production any reserved keywords that need to be usable
 * as privilege names.
 */

/* either ALL [PRIVILEGES] or a list of individual privileges */
privileges 
    : privilege_list
    | ALL PRIVILEGES?
    ;

privilege_list
    :  privilege (COMMA privilege)*
    ;

privilege 
    : SELECT
    | INSERT
    | UPDATE
    | DELETE
    | REFERENCES
    | TRIGGER
    | TRUNCATE
    | USAGE
    | CREATE
    | CONNECT 
    | TEMPORARY
    | TEMP
    | EXECUTE
    ;


/* Don't bother trying to fold the first two rules into one using
 * opt_table.  You're going to get conflicts.
 */
privilege_target
    : qualified_name_list
    | TABLE? qualified_name_list
    | SEQUENCE qualified_name_list
    | FUNCTION function_with_argtypes_list
    | DATABASE name_list
    | LANGUAGE name_list
    | SCHEMA name_list
    | TABLESPACE name_list
    | PROTOCOL name_list
    ;


grantee_list
    : grantee (COMMA grantee)*
    ;

grantee
    : RoleId
    | PUBLIC
    ;


opt_grant_grant_option
    : WITH GRANT OPTION
    ;

function_with_argtypes_list
    : function_with_argtypes (COMMA function_with_argtypes)*
    ;

function_with_argtypes
    : func_name func_args
    ;

/*****************************************************************************
 *
 * GRANT and REVOKE ROLE statements
 *
 *****************************************************************************/

GrantRoleStmt
    : GRANT privilege_list TO name_list opt_grant_admin_option? opt_granted_by?
    ;

RevokeRoleStmt
    : REVOKE (ADMIN OPTION FOR)? privilege_list FROM name_list opt_granted_by? opt_drop_behavior?
    ;

opt_grant_admin_option
    : WITH ADMIN OPTION
    ;

opt_granted_by
    : GRANTED BY RoleId
    ;


/*****************************************************************************
 *
 *    QUERY: CREATE INDEX
 *
 * Note: we can't factor CONCURRENTLY into a separate production without
 * making it a reserved word.
 *
 * Note: we cannot put TABLESPACE clause after WHERE clause unless we are
 * willing to make TABLESPACE a fully reserved word.
 *****************************************************************************/

IndexStmt
    : CREATE UNIQUE? INDEX index_name
      ON qualified_name (USING access_method)? LEFT_PAREN index_params RIGHT_PAREN
      with_out_definition? OptTableSpace? where_clause?
    ;

index_params
    : index_elem (COMMA index_elem)*
    ;

/*
 * Index attributes can be either simple column references, or arbitrary
 * expressions in parens.  For backwards-compatibility reasons, we allow
 * an expression that's just a function call to be written without parens.
 */
index_elem
    : ColId opt_class? opt_asc_desc? opt_nulls_order?
    | func_expr opt_class? opt_asc_desc? opt_nulls_order?
    | LEFT_PAREN a_expr RIGHT_PAREN opt_class? opt_asc_desc? opt_nulls_order?
    ;

opt_class
    : USING? any_name
    ;

opt_asc_desc
    : ASC
    | DESC
    ;

opt_nulls_order
    : NULLS_FIRST
    | NULLS_LAST
    ;


/*****************************************************************************
 *
 *    QUERY:
 *        create [or replace] function <fname>
 *            [(<type-1> { , <type-n>})]
 *            returns <type-r>
 *            as <filename or code in language as appropriate>
 *            language <lang> [with parameters]
 *
 *****************************************************************************/

CreateFunctionStmt
    : CREATE opt_or_replace? FUNCTION func_name func_args_with_defaults
      (RETURNS func_return)? createfunc_opt_list (with_out_definition (COMMA with_out_definition))? 
    ;

opt_or_replace
    : OR REPLACE
    ;

func_args
    : LEFT_PAREN func_args_list? RIGHT_PAREN
    ;

func_args_list
    : func_arg (COMMA func_arg)*
    ;

/*
 * func_args_with_defaults is separate because we only want to accept
 * defaults in CREATE FUNCTION, not in ALTER etc.
 */
func_args_with_defaults
    : LEFT_PAREN func_args_with_defaults_list? RIGHT_PAREN
    ;

func_args_with_defaults_list
    : func_arg_with_default (COMMA func_arg_with_default)*
    ;

/*
 * The style with arg_class first is SQL99 standard, but Oracle puts
 * param_name first; accept both since it's likely people will try both
 * anyway.  Don't bother trying to save productions by letting arg_class
 * have an empty alternative ... you'll get shift/reduce conflicts.
 *
 * We can catch over-specified arguments here if we want to,
 * but for now better to silently swallow typmod, etc.
 * - thomas 2000-03-22
 */
func_arg
    : arg_class? param_name? func_type
    ;

func_arg_with_default
    : func_arg ((DEFAULT | EQUALS_OP) a_expr)?
    ;

/* INOUT is SQL99 standard, IN OUT is for Oracle compatibility */
arg_class
    : IN_P
    | OUT_P
    | INOUT
    | VARIADIC
    ;

/*
 * Ideally param_name should be ColId, but that causes too many conflicts.
 */
param_name
    : type_function_name
    ;

func_return
    : func_type
    ;

/*
 * We would like to make the %TYPE productions here be ColId attrs etc,
 * but that causes reduce/reduce conflicts.  type_function_name
 * is next best choice.
 */
func_type
    : Typename
    | type_function_name attrs PERCENT_SIGN TYPE_P
    | SETOF type_function_name attrs PERCENT_SIGN TYPE_P
    ;

/* Must be at least one to prevent conflict */
createfunc_opt_list
    : createfunc_opt_item+
    ;

/*
 * Options common to both CREATE FUNCTION and ALTER FUNCTION
 */
common_func_opt_item
    : CALLED ON NULL_P INPUT_P
    | RETURNS NULL_P ON NULL_P INPUT_P
    | STRICT_P
    | IMMUTABLE
    | STABLE
    | VOLATILE
    | EXTERNAL SECURITY DEFINER
    | EXTERNAL SECURITY INVOKER
    | SECURITY DEFINER
    | SECURITY INVOKER
    | COST NumericOnly
    | ROWS NumericOnly
    | SetResetClause
    | NO SQL
    | CONTAINS SQL
    | READS SQL DATA_P
    | MODIFIES SQL DATA_P
    ;

createfunc_opt_item
    : AS func_as
    | LANGUAGE ColId_or_Sconst
    | common_func_opt_item
    ;

func_as
    : Sconst (COMMA Sconst)?
    ;

table_func_column
    : param_name func_type
    ;

table_func_column_list
    : table_func_column (COMMA table_func_column)*
    ;

/*****************************************************************************
 * ALTER FUNCTION
 *
 * RENAME and OWNER subcommands are already provided by the generic
 * ALTER infrastructure, here we just specify alterations that can
 * only be applied to functions.
 *
 *****************************************************************************/
alter_function_stmt
    : ALTER FUNCTION function_with_argtypes alterfunc_opt_list RESTRICT?
    ;

alterfunc_opt_list
    : common_func_opt_item (COMMA common_func_opt_item)*
    | RENAME TO name
    | OWNER TO name
    | SET SCHEMA name
    ;


/*****************************************************************************
 *
 *    QUERY:
 *
 *    DROP FUNCTION funcname (arg1, arg2, ...) [ RESTRICT | CASCADE ]
 *    DROP AGGREGATE aggname (arg1, ...) [ RESTRICT | CASCADE ]
 *    DROP OPERATOR opname (leftoperand_typ, rightoperand_typ) [ RESTRICT | CASCADE ]
 *
 *****************************************************************************/

RemoveFuncStmt
    : DROP FUNCTION (IF_P EXISTS)? func_name func_args opt_drop_behavior?
    ;

RemoveAggrStmt
    : DROP AGGREGATE (IF_P EXISTS)? func_name aggr_args opt_drop_behavior?
    ;

RemoveOperStmt
    : DROP OPERATOR (IF_P EXISTS)? any_operator oper_argtypes opt_drop_behavior?
    ;

oper_argtypes
    : LEFT_PAREN Typename (COMMA Typename)? RIGHT_PAREN
    | LEFT_PAREN NONE COMMA Typename RIGHT_PAREN          /* left unary */
    | LEFT_PAREN Typename COMMA NONE RIGHT_PAREN          /* right unary */
    ;

any_operator
    : all_Op
    | ColId PERIOD any_operator
    ;


/*****************************************************************************
 *
 *    DO <anonymous code block> [ LANGUAGE language ]
 *
 * We use a DefElem list for future extensibility, and to allow flexibility
 * in the clause order.
 *
 *****************************************************************************/

DoStmt
    : DO dostmt_opt_item+
    ;

dostmt_opt_item
    : LANGUAGE? ColId_or_Sconst 
    ;


/*****************************************************************************
 *
 *    CREATE CAST / DROP CAST
 *
 *****************************************************************************/

CreateCastStmt
    : CREATE CAST LEFT_PAREN Typename AS Typename RIGHT_PAREN WITH FUNCTION 
      function_with_argtypes? cast_context?
    ;

cast_context
    : AS IMPLICIT_P
    | AS ASSIGNMENT
    ;


DropCastStmt
    : DROP CAST (IF_P EXISTS)? LEFT_PAREN Typename AS Typename RIGHT_PAREN opt_drop_behavior?
    ;


/*****************************************************************************
 *
 *    QUERY:
 *
 *    REINDEX type <name> [FORCE]
 *
 * FORCE no longer does anything, but we accept it for backwards compatibility
 *****************************************************************************/

ReindexStmt
    : REINDEX (INDEX | TABLE | SYSTEM_P | DATABASE) qualified_name FORCE?
    ;


/*
 * ALTER TYPE ... SET DEFAULT ENCODING
 *
 * Used to set storage parameter defaults for types.
 */
alter_type_stmt
    : ALTER TYPE_P SimpleTypename SET DEFAULT ENCODING definition
    ;

/*****************************************************************************
 *
 * ALTER THING name RENAME TO newname
 *
 *****************************************************************************/

RenameStmt
    : ALTER AGGREGATE func_name aggr_args RENAME TO name
    | ALTER CONVERSION_P any_name RENAME TO name
    | ALTER DATABASE database_name RENAME TO database_name
    | ALTER FILESPACE name RENAME TO name
    | ALTER FUNCTION function_with_argtypes RENAME TO name
    | ALTER GROUP_P RoleId RENAME TO RoleId
    | ALTER PROCEDURAL? LANGUAGE name RENAME TO name
    | ALTER OPERATOR (CLASS | FAMILY) any_name USING access_method RENAME TO name
    | ALTER SCHEMA name RENAME TO name
    | ALTER (TABLE | SEQUENCE | VIEW | INDEX) relation_expr RENAME TO name
    | ALTER TABLE relation_expr RENAME opt_column? name TO name
    | ALTER TRIGGER name ON relation_expr RENAME TO name
    | ALTER (ROLE | USER) RoleId RENAME TO RoleId
    | ALTER TABLESPACE name RENAME TO name
    | ALTER TEXT_P SEARCH (PARSER | DICTIONARY | TEMPLATE | CONFIGURATION) any_name RENAME TO name
    | ALTER PROTOCOL name RENAME TO name
    ;

opt_column 
    : COLUMN
    ;

/*****************************************************************************
 *
 * ALTER THING name SET SCHEMA name
 *
 *****************************************************************************/

alter_object_schema_stmt
    : ALTER AGGREGATE func_name aggr_args SET SCHEMA name
    | ALTER (DOMAIN_P | EXTENSION) any_name SET SCHEMA name
    | ALTER FUNCTION function_with_argtypes SET SCHEMA name
    | ALTER (SEQUENCE | TABLE) relation_expr SET SCHEMA name
    | ALTER TYPE_P SimpleTypename SET SCHEMA name
    ;

/*****************************************************************************
 *
 * ALTER THING name OWNER TO newname
 *
 *****************************************************************************/

alter_owner_stmt
    : ALTER AGGREGATE func_name aggr_args OWNER TO RoleId
    | ALTER (CONVERSION_P | DOMAIN_P) any_name OWNER TO RoleId
    | ALTER (DATABASE | FILESPACE | SCHEMA | TABLESPACE | PROTOCOL) name OWNER TO RoleId
    | ALTER FUNCTION function_with_argtypes OWNER TO RoleId
    | ALTER PROCEDURAL? LANGUAGE name OWNER TO RoleId
    | ALTER OPERATOR any_operator oper_argtypes OWNER TO RoleId
    | ALTER OPERATOR (CLASS | FAMILY) any_name USING access_method OWNER TO RoleId
    | ALTER TYPE_P SimpleTypename OWNER TO RoleId
    | ALTER TEXT_P SEARCH (DICTIONARY | CONFIGURATION) any_name OWNER TO RoleId
    ;


/*****************************************************************************
 *
 *    QUERY:  Define Rewrite Rule
 *
 *****************************************************************************/

RuleStmt
    : CREATE opt_or_replace? RULE name AS
      ON event TO qualified_name where_clause?
      DO opt_instead? RuleActionList
    ;

RuleActionList
    : NOTHING
    | RuleActionStmt
    | LEFT_PAREN RuleActionMulti? RIGHT_PAREN
    ;

/* the thrashing around here is to discard "empty" statements... */
RuleActionMulti
    : RuleActionStmt (SEMICOLON RuleActionStmt)*
    ;

RuleActionStmt
    : SelectStmt 
    | InsertStmt
    | UpdateStmt
    | DeleteStmt
    | NotifyStmt
    ;

event
    : SELECT
    | UPDATE
    | DELETE_P
    | INSERT
    ;

opt_instead
    : INSTEAD
    | ALSO
    ;


DropRuleStmt
    : DROP RULE (IF_P EXISTS)? name ON qualified_name opt_drop_behavior?
    ;


/*****************************************************************************
 *
 *    QUERY:
 *        NOTIFY <qualified_name> can appear both in rule bodies and
 *        as a query-level command
 *
 *****************************************************************************/

NotifyStmt
    : NOTIFY ColId
    ;

ListenStmt
    : LISTEN ColId
    ;

UnlistenStmt
    : UNLISTEN ColId
    | UNLISTEN ASTERISK
    ;


/*****************************************************************************
 *
 *    Transactions:
 *
 *    BEGIN / COMMIT / ROLLBACK
 *    (also older versions END / ABORT)
 *
 *****************************************************************************/

TransactionStmt
    : (ABORT_P | COMMIT | END_P | ROLLBACK) opt_transaction?
    | BEGIN_P opt_transaction? transaction_mode_list?
    | START TRANSACTION transaction_mode_list?
    | SAVEPOINT ColId
    | RELEASE SAVEPOINT? ColId
    | ROLLBACK opt_transaction TO SAVEPOINT? ColId
    | PREPARE TRANSACTION Sconst
    | (COMMIT | ROLLBACK) PREPARED Sconst
    ;

opt_transaction
    : WORK
    | TRANSACTION
    ;

transaction_mode_item
    : ISOLATION LEVEL iso_level
    | READ (ONLY | WRITE)
    ;

/* Syntax with commas is SQL-spec, without commas is Postgres historical */
transaction_mode_list
    : transaction_mode_item (COMMA transaction_mode_item)*
    | transaction_mode_item+
    ;


/*****************************************************************************
 *
 *  QUERY:
 *    CREATE [ OR REPLACE ] [ TEMP ] VIEW <viewname> LEFT_PARENtarget-list RIGHT_PAREN
 *      AS <query> [ WITH [ CASCADED | LOCAL ] CHECK OPTION ]
 *
 *****************************************************************************/

ViewStmt
    : CREATE (OR REPLACE)? OptTemp? VIEW qualified_name paren_column_list? AS SelectStmt opt_check_option?
    ;

/*
 * We use merged tokens here to avoid creating shift/reduce conflicts against
 * a whole lot of other uses of WITH.
 */
opt_check_option
    : (LOCAL | CASCADED)? CHECK OPTION
    ;

/*****************************************************************************
 *
 *    QUERY:
 *        LOAD "filename"
 *
 *****************************************************************************/

LoadStmt
    : LOAD file_name
    ;


/*****************************************************************************
 *
 *    CREATE DATABASE
 *
 *****************************************************************************/

CreatedbStmt
    : CREATE DATABASE database_name opt_with? createdb_opt_item*
    ;

createdb_opt_item
    : TABLESPACE EQUALS_OP? (name | DEFAULT)
    | LOCATION EQUALS_OP? (Sconst | DEFAULT)
    | TEMPLATE EQUALS_OP? (name | DEFAULT)
    | ENCODING EQUALS_OP? (Sconst | Iconst | DEFAULT)
    | CONNECTION LIMIT EQUALS_OP? SignedIconst
    | OWNER EQUALS_OP? (name | DEFAULT)
    ;


/*****************************************************************************
 *
 *    ALTER DATABASE
 *
 *****************************************************************************/

alter_database_stmt
    : ALTER DATABASE database_name opt_with? alterdb_opt_item*
    ;

alter_database_set_stmt
    : ALTER DATABASE database_name SetResetClause
    ;

alterdb_opt_item
    : CONNECTION LIMIT EQUALS_OP? SignedIconst
    ;


/*****************************************************************************
 *
 *    DROP DATABASE [ IF EXISTS ]
 *
 * This is implicitly CASCADE, no need for drop behavior
 *****************************************************************************/

DropdbStmt
    : DROP DATABASE (IF_P EXISTS)? database_name
    ;


/*****************************************************************************
 *
 * Manipulate a domain
 *
 *****************************************************************************/

CreateDomainStmt
    : CREATE DOMAIN_P any_name AS? Typename ColQualList?
    ;

/* ALTER DOMAIN <domain> {SET DEFAULT <expr>|DROP DEFAULT} */
alter_domain_stmt
    : ALTER DOMAIN_P any_name alter_domain_option
    ;

alter_domain_option
    : alter_column_default
    | (DROP | SET) NOT NULL_P 
    | ADD_P TableConstraint
    | DROP CONSTRAINT name opt_drop_behavior?
    ;

/*****************************************************************************
 *
 * Manipulate a text search dictionary or configuration
 *
 *****************************************************************************/

alter_tsdictionary_stmt
    : ALTER TEXT_P SEARCH DICTIONARY any_name definition
    ;

alter_tsconfiguration_stmt
    : ALTER TEXT_P SEARCH CONFIGURATION any_name alter_txt_search_conf_option 
    ;

alter_txt_search_conf_option
    : (ADD_P | ALTER) MAPPING FOR name_list WITH any_name_list
    | ALTER MAPPING (FOR name_list)? REPLACE any_name WITH any_name
    | DROP MAPPING (IF_P EXISTS)? FOR name_list
    ;


/*****************************************************************************
 *
 * Manipulate a conversion
 *
 *    CREATE [DEFAULT] CONVERSION <conversion_name>
 *    FOR <encoding_name> TO <encoding_name> FROM <func_name>
 *
 *****************************************************************************/

CreateConversionStmt
    : CREATE DEFAULT? CONVERSION_P any_name FOR Sconst
      TO Sconst FROM any_name
    ;

/*****************************************************************************
 *
 *    QUERY:
 *        CLUSTER <qualified_name> [ USING <index_name> ]
 *        CLUSTER
 *        CLUSTER <index_name> ON <qualified_name> (for pre-8.3)
 *
 *****************************************************************************/

ClusterStmt
    : CLUSTER cluster_option?
    ;

cluster_option
    : qualified_name (USING index_name)?
    | index_name ON qualified_name
    ;


/*****************************************************************************
 *
 *    QUERY:
 *        VACUUM
 *        ANALYZE
 *
 *****************************************************************************/

VacuumStmt
    : VACUUM FULL? FREEZE? VERBOSE? qualified_name?
    | VACUUM FULL? FREEZE? VERBOSE? AnalyzeStmt
    ;

AnalyzeStmt
    : analyze_keyword VERBOSE? (ROOTPARTITION ALL)?
    | analyze_keyword VERBOSE? ROOTPARTITION? (qualified_name paren_name_list?)?
    ;

analyze_keyword
    : ANALYZE
    | ANALYSE   /*British*/
    ;

paren_name_list
    : LEFT_PAREN name_list RIGHT_PAREN
    ;

/*****************************************************************************
 *
 *    QUERY:
 *        EXPLAIN [ANALYZE] [VERBOSE] query
 *
 *****************************************************************************/

ExplainStmt
    : EXPLAIN analyze_keyword? VERBOSE? DXL? FORCE? ExplainableStmt
    ;

ExplainableStmt
    : SelectStmt
    | InsertStmt
    | UpdateStmt
    | DeleteStmt
    | DeclareCursorStmt
    | ExecuteStmt
    | CreateAsStmt
    | CreateStmt
    ;

/*****************************************************************************
 *
 *    QUERY:
 *        PREPARE <plan_name> [(args, ...)] AS <query>
 *
 *****************************************************************************/

PrepareStmt
    : PREPARE name paren_type_list? AS PreparableStmt
    ;

paren_type_list
    : LEFT_PAREN type_list RIGHT_PAREN
    ;

PreparableStmt
    : SelectStmt
    | InsertStmt
    | UpdateStmt
    | DeleteStmt          /* by default all are $$=$1 */
    ;

/*****************************************************************************
 *
 * EXECUTE <plan_name> [(params, ...)]
 * CREATE TABLE <name> AS EXECUTE <plan_name> [(params, ...)]
 *
 *****************************************************************************/

ExecuteStmt
    : (CREATE OptTemp? TABLE create_as_target AS)? EXECUTE name paren_expr_list?
    ;

/*****************************************************************************
 *
 *    QUERY:
 *        DEALLOCATE [PREPARE] <plan_name>
 *
 *****************************************************************************/

DeallocateStmt
    : DEALLOCATE PREPARE? (name | ALL)
    ;

cdb_string_list
    : cdb_string (COMMA cdb_string)*
    ;


cdb_string
    : Sconst
    ;

/*****************************************************************************
 *
 *    QUERY:
 *        INSERT STATEMENTS
 *
 *****************************************************************************/

InsertStmt
    : INSERT INTO qualified_name insert_rest returning_clause
    ;

insert_rest
    : SelectStmt
    | LEFT_PAREN insert_column_list RIGHT_PAREN SelectStmt
    | DEFAULT VALUES
    ;

insert_column_list
    : insert_column_item (COMMA insert_column_item)*
    ;

insert_column_item
    : ColId indirection?
    ;

returning_clause
    : RETURNING target_list
    ;


/*****************************************************************************
 *
 *    QUERY:
 *        DELETE STATEMENTS
 *
 *****************************************************************************/

DeleteStmt
    : DELETE_P FROM ONLY? relation_expr_opt_alias
      (USING from_list)? where_or_current_clause? returning_clause?
    ;


/*****************************************************************************
 *
 *    QUERY:
 *        LOCK TABLE
 *
 *****************************************************************************/

LockStmt
    : LOCK_P TABLE? qualified_name_list opt_lock? NOWAIT?
    ;

opt_lock
    : IN_P lock_type MODE
    ;

lock_type
    : (ACCESS | ROW)? SHARE
    | (ROW | SHARE (UPDATE | ROW) | ACCESS)? EXCLUSIVE
    ;


/*****************************************************************************
 *
 *    QUERY:
 *        UpdateStmt (UPDATE)
 *
 *****************************************************************************/

UpdateStmt
    : UPDATE ONLY? relation_expr_opt_alias SET set_clause_list from_clause?
      where_or_current_clause? returning_clause?
    ;

set_clause_list
    : set_clause (COMMA set_clause)*
    ;

set_clause
    : single_set_clause
    | multiple_set_clause
    ;

single_set_clause
    : set_target EQUALS_OP ctext_expr
    ;

multiple_set_clause
    : LEFT_PAREN set_target_list RIGHT_PAREN EQUALS_OP ctext_row
    ;

set_target
    : ColId indirection?
    ;

set_target_list
    : set_target (COMMA set_target)*
    ;


/*****************************************************************************
 *
 *    QUERY:
 *        CURSOR STATEMENTS
 *
 *****************************************************************************/
DeclareCursorStmt
    : DECLARE name cursor_options? CURSOR opt_hold? FOR SelectStmt
    ;

cursor_options
    : cursor_options (NO? SCROLL | BINARY | INSENSITIVE)
    ;

opt_hold
    : (WITH | WITHOUT) HOLD
    ;

/*****************************************************************************
 *
 *    QUERY:
 *        SELECT STATEMENTS
 *
 *****************************************************************************/

/* A complete SELECT statement looks like this.
 *
 * The rule returns either a single SelectStmt node or a tree of them,
 * representing a set-operation tree.
 *
 * There is an ambiguity when a sub-SELECT is within an a_expr and there
 * are excess parentheses: do the parentheses belong to the sub-SELECT or
 * to the surrounding a_expr?  We don't really care, but yacc wants to know.
 * To resolve the ambiguity, we are careful to define the grammar so that
 * the decision is staved off as long as possible: as long as we can keep
 * absorbing parentheses into the sub-SELECT, we will do so, and only when
 * it's no longer possible to do that will we decide that parens belong to
 * the expression.  For example, in "SELECT (((SELECT 2)) + 3)" the extra
 * parentheses are treated as part of the sub-select.  The necessity of doing
 * it that way is shown by "SELECT (((SELECT 2)) UNION SELECT 2)".  Had we
 * parsed "((SELECT 2))" as an a_expr, it'd be too late to go back to the
 * SELECT viewpoint when we see the UNION.
 *
 * This approach is implemented by defining a nonterminal select_with_parens,
 * which represents a SELECT with at least one outer layer of parentheses,
 * and being careful to use select_with_parens, never LEFT_PAREN SelectStmt RIGHT_PAREN,
 * in the expression grammar.  We will then have shift-reduce conflicts
 * which we can resolve in favor of always treating LEFT_PAREN <select> RIGHT_PAREN as
 * a select_with_parens.  To resolve the conflicts, the productions that
 * conflict with the select_with_parens productions are manually given
 * precedences lower than the precedence of RIGHT_PAREN, thereby ensuring that we
 * shift RIGHT_PAREN (and then reduce to select_with_parens) rather than trying to
 * reduce the inner <select> nonterminal to something else.  We use UMINUS
 * precedence for this, which is a fairly arbitrary choice.
 *
 * To be able to define select_with_parens itself without ambiguity, we need
 * a nonterminal select_no_parens that represents a SELECT structure with no
 * outermost parentheses.  This is a little bit tedious, but it works.
 *
 * In non-expression contexts, we use SelectStmt which can represent a SELECT
 * with or without outer parentheses.
 */

SelectStmt
    : select_no_parens
    | LEFT_PAREN select_with_parens RIGHT_PAREN
    ;

/*
 * This rule parses the equivalent of the standard's <query expression>.
 * The duplicative productions are annoying, but hard to get rid of without
 * creating shift/reduce conflicts.
 *
 *  FOR UPDATE/SHARE may be before or after LIMIT/OFFSET.
 *  In <=7.2.X, LIMIT/OFFSET had to be after FOR UPDATE
 *  We now support both orderings, but prefer LIMIT/OFFSET before FOR UPDATE/SHARE
 *  2002-08-28 bjm
 */

select_with_parens
    : LEFT_PAREN select_no_parens RIGHT_PAREN
    | LEFT_PAREN select_with_parens RIGHT_PAREN
    ;

select_no_parens
    : with_clause? select_clause sort_clause? select_limit? for_locking_clause?
    ;

select_clause
    : simple_select
    | select_with_parens
    ;

/*
 * This rule parses SELECT statements that can appear within set operations,
 * including UNION, INTERSECT and EXCEPT.  LEFT_PAREN and RIGHT_PAREN can be used to specify
 * the ordering of the set operations.  Without LEFT_PAREN and RIGHT_PAREN we want the
 * operations to be ordered per the precedence specs at the head of this file.
 *
 * As with select_no_parens, simple_select cannot have outer parentheses,
 * but can have parenthesized subclauses.
 *
 * Note that sort clauses cannot be included at this level --- SQL92 requires
 *    SELECT foo UNION SELECT bar ORDER BY baz
 * to be parsed as
 *    (SELECT foo UNION SELECT bar) ORDER BY baz
 * not
 *    SELECT foo UNION (SELECT bar ORDER BY baz)
 * Likewise for WITH, FOR UPDATE and LIMIT.  Therefore, those clauses are
 * described as part of the select_no_parens production, not simple_select.
 * This does not limit functionality, because you can reintroduce these
 * clauses inside parentheses.
 *
 * NOTE: only the leftmost component SelectStmt should have INTO.
 * However, this is not checked by the grammar; parse analysis must check it.
 */
simple_select
    : SELECT opt_distinct target_list
      into_clause? from_clause? where_clause?
      group_clause? having_clause? window_clause?
    | values_clause
    | select_clause (UNION | INTERSECT | EXCEPT) ALL? select_clause
    ;

/*
 * SQL standard WITH clause looks like:
 *
 * WITH [ RECURSIVE ] <query name> [ (<column>,...) ]
 *    AS (query) [ SEARCH or CYCLE clause ]
 *
 * We don't currently support the SEARCH or CYCLE clause.
 */
with_clause
    : WITH RECURSIVE? cte_list
    ;

cte_list
    : common_table_expr (COMMA common_table_expr)*
    ;

common_table_expr
    : name paren_name_list? AS select_with_parens
    ;

into_clause
    : INTO OptTempTableName?
    ;

/*
 * Redundancy here is needed to avoid shift/reduce conflicts,
 * since TEMP is not a reserved word.  See also OptTemp.
 */
OptTempTableName
    : ((LOCAL | GLOBAL)? (TEMPORARY | TEMP))? TABLE? qualified_name
    ;

/* We use (NIL) as a placeholder to indicate that all target expressions
 * should be placed in the DISTINCT list during parsetree analysis.
 */
opt_distinct
    : DISTINCT (ON paren_expr_list)?
    | ALL
    ;

sort_clause
    : ORDER BY sortby_list
    ;

sortby_list
    : sortby (COMMA sortby)*
    ;

sortby
    : a_expr USING qual_all_Op opt_nulls_order?
    | a_expr opt_asc_desc? opt_nulls_order?
    ;


select_limit
    : LIMIT select_limit_value OFFSET select_offset_value
    | OFFSET select_offset_value LIMIT select_limit_value
    | LIMIT select_limit_value
    | OFFSET select_offset_value
    | LIMIT select_limit_value COMMA select_offset_value
    | OFFSET select_offset_value2 row_or_rows
    | FETCH first_or_next opt_select_fetch_first_value? row_or_rows ONLY
    | OFFSET select_offset_value2 row_or_rows FETCH first_or_next opt_select_fetch_first_value? row_or_rows ONLY
    ;

select_limit_value
    : a_expr
    | ALL
    ;

/*
 * Allowing full expressions without parentheses causes various parsing
 * problems with the trailing ROW/ROWS key words.  SQL only calls for
 * constants, so we allow the rest only with parentheses.
 */
opt_select_fetch_first_value
    : SignedIconst
    | LEFT_PAREN a_expr RIGHT_PAREN
    ;

select_offset_value
    : a_expr
    ;

/*
 * Again, the trailing ROW/ROWS in this case prevent the full expression
 * syntax.  c_expr is the best we can do.
 */
select_offset_value2
    : c_expr
    ;

/* noise words */
row_or_rows
    : ROW
    | ROWS
    ;

/* noise words */
first_or_next
    : FIRST_P
    | NEXT
    ;

group_clause
    : GROUP_P BY group_elem_list
    ;

group_elem_list
    : group_elem (COMMA group_elem)*
    ;

group_elem
    : a_expr
    | ROLLUP paren_expr_list
    | CUBE paren_expr_list
    | GROUPING SETS LEFT_PAREN group_elem_list RIGHT_PAREN
    | double_parens
    ;

having_clause
    : HAVING a_expr
    ;

for_locking_clause
    : for_locking_item+
    | FOR READ ONLY
    ;

for_locking_item
    : FOR (UPDATE | SHARE) locked_rels_list? NOWAIT?
    ;

locked_rels_list
    : OF name_list
    ;


values_clause
    : VALUES ctext_row
    | values_clause COMMA ctext_row
    ;


/*****************************************************************************
 *
 *  clauses common to all Optimizable Stmts:
 *    from_clause    - allow list of both JOIN expressions and table names
 *    where_clause  - qualifications for joins or restrictions
 *
 *****************************************************************************/

from_clause
    : FROM from_list
    ;

from_list
    : table_ref (COMMA table_ref)*
    ;

/*
 * table_ref is where an alias clause can be attached.  Note we cannot make
 * alias_clause have an empty production because that causes parse conflicts
 * between table_ref := LEFT_PAREN joined_table RIGHT_PAREN alias_clause
 * and joined_table := LEFT_PAREN joined_table RIGHT_PAREN.  So, we must have the
 * redundant-looking productions here instead.
 */
table_ref
    : relation_expr alias_clause?
    | func_table alias_clause?
    | func_table AS? ColId? LEFT_PAREN TableFuncElementList RIGHT_PAREN
    | select_with_parens alias_clause?
    | LEFT_PAREN joined_table RIGHT_PAREN alias_clause?
    ;


/*
 * It may seem silly to separate joined_table from table_ref, but there is
 * method in SQL92's madness: if you don't do it this way you get reduce-
 * reduce conflicts, because it's not clear to the parser generator whether
 * to expect alias_clause after RIGHT_PAREN or not.  For the same reason we must
 * treat 'JOIN' and 'join_type JOIN' separately, rather than allowing
 * join_type to expand to empty; if we try it, the parser generator can't
 * figure out when to reduce an empty join_type right after table_ref.
 *
 * Note that a CROSS JOIN is the same as an unqualified
 * INNER JOIN, and an INNER JOIN/ON has the same shape
 * but a qualification expression to limit membership.
 * A NATURAL JOIN implicitly matches column names between
 * tables and the shape is determined by which columns are
 * in common. We'll collect columns during the later transformations.
 */

joined_table
    : LEFT_PAREN joined_table RIGHT_PAREN
    | table_ref CROSS JOIN table_ref
    | table_ref join_type? JOIN table_ref join_qual
    | table_ref NATURAL join_type? JOIN table_ref
    ;

alias_clause
    : AS? ColId paren_name_list?
    ;

join_type
    : (FULL | LEFT | RIGHT) OUTER_P?
    | INNER_P
    ;

/* JOIN qualification clauses
 * Possibilities are:
 *  USING ( column list ) allows only unqualified column names,
 *              which must match between tables.
 *  ON expr allows more general qualifications.
 *
 * We return USING as a List node, while an ON-expr will not be a List.
 */

join_qual
    : USING paren_name_list
    | ON a_expr
    ;


relation_expr
    : qualified_name ASTERISK?
    | ONLY qualified_name
    | ONLY LEFT_PAREN qualified_name RIGHT_PAREN
    ;


/*
 * Given "UPDATE foo set set ...", we have to decide without looking any
 * further ahead whether the first "set" is an alias or the UPDATE's SET
 * keyword.  Since "set" is allowed as a column name both interpretations
 * are feasible.  We resolve the shift/reduce conflict by giving the first
 * relation_expr_opt_alias production a higher precedence than the SET token
 * has, causing the parser to prefer to reduce, in effect assuming that the
 * SET is not an alias.
 */
relation_expr_opt_alias
    : relation_expr (AS? ColId)?
    ;


func_table
    : func_expr 
    ;


where_clause
    : WHERE a_expr
    ;

/* variant for UPDATE and DELETE */
where_or_current_clause
    : WHERE a_expr
    | WHERE CURRENT_P OF (name | PARAM)
    ;


TableFuncElementList
    : TableFuncElement (COMMA TableFuncElement)*
    ;

TableFuncElement
    : ColId Typename
    ;

/*****************************************************************************
 *
 *  Type syntax
 *    SQL92 introduces a large amount of type-specific syntax.
 *    Define individual clauses to handle these cases, and use
 *     the generic case to handle regular type-extensible Postgres syntax.
 *    - thomas 1997-10-10
 *
 *****************************************************************************/

Typename
    : SimpleTypename opt_array_bounds
    | SETOF SimpleTypename opt_array_bounds
    | SimpleTypename ARRAY LEFT_BRACKET Iconst RIGHT_BRACKET
    | SETOF SimpleTypename ARRAY LEFT_BRACKET Iconst RIGHT_BRACKET
    ;

opt_array_bounds
    : opt_array_bounds LEFT_BRACKET RIGHT_BRACKET
    | opt_array_bounds LEFT_BRACKET Iconst RIGHT_BRACKET
    ;

SimpleTypename
    : GenericType
    | Numeric
    | Bit
    | Character
    | ConstDatetime
    | ConstInterval paren_iconst? opt_interval?
    ;

/* We have a separate ConstTypename to allow defaulting fixed-length
 * types such as CHAR() and BIT() to an unspecified length.
 * SQL9x requires that these default to a length of one, but this
 * makes no sense for constructs like CHAR 'hi' and BIT '0101',
 * where there is an obvious better choice to make.
 * Note that ConstInterval is not included here since it must
 * be pushed up higher in the rules to accomodate the postfix
 * options (e.g. INTERVAL '1' YEAR). Likewise, we have to handle
 * the generic-type-name case in AExprConst to avoid premature
 * reduce/reduce conflicts against function names.
 */
ConstTypename
    : Numeric
    | ConstBit
    | ConstCharacter
    | ConstDatetime 
    ;

/*
 * GenericType covers all type names that don't have special syntax mandated
 * by the standard, including qualified names.  We also allow type modifiers.
 * To avoid parsing conflicts against function invocations, the modifiers
 * have to be shown as expr_list here, but parse analysis will only accept
 * constants for them.
 */
GenericType
    : type_function_name attrs? paren_expr_list?
    ;

/*
 * SQL92 numeric data types
 */
Numeric
    : INT_P
    | INTEGER
    | SMALLINT
    | BIGINT
    | REAL
    | FLOAT_P paren_iconst?
    | DOUBLE_P PRECISION
    | DECIMAL_P paren_expr_list?
    | DEC paren_expr_list?
    | NUMERIC paren_expr_list?
    | BOOLEAN_P
    ;

/*
 * SQL92 bit-field data types
 * The following implements BIT() and BIT VARYING().
 */
Bit
    : BitWithLength
    | BitWithoutLength
    ;

/* ConstBit is like Bit except "BIT" defaults to unspecified length */
/* See notes for ConstCharacter, which addresses same issue for "CHAR" */
ConstBit
    : BitWithLength
    | BitWithoutLength
    ;

BitWithLength
    : BIT VARYING? paren_expr_list
    ;

BitWithoutLength
    : BIT VARYING?
    ;


/*
 * SQL92 character data types
 * The following implements CHAR() and VARCHAR().
 */
Character
    : CharacterWithLength
    | CharacterWithoutLength
    ;

ConstCharacter
    : CharacterWithLength
    | CharacterWithoutLength
    ;

CharacterWithLength
    : character paren_iconst opt_charset?
    ;

CharacterWithoutLength
    : character opt_charset?
    ;

character
    : (CHARACTER | CHAR_P | NCHAR) VARYING?
    | VARCHAR
    | NATIONAL (CHARACTER | CHAR_P) VARYING?
    ;

opt_charset
    : CHARACTER SET ColId
    ;

/*
 * SQL92 date/time types
 */
ConstDatetime
    : (TIMESTAMP | TIME) paren_iconst? opt_timezone?
    ;

ConstInterval
    : INTERVAL
    ;

opt_timezone 
    : (WITH | WITHOUT) TIME ZONE
    ;

opt_interval
    : YEAR_P 
    | MONTH_P
    | DAY_P 
    | HOUR_P 
    | MINUTE_P
    | SECOND_P 
    | YEAR_P TO MONTH_P
    | DAY_P TO HOUR_P
    | DAY_P TO MINUTE_P
    | DAY_P TO SECOND_P
    | HOUR_P TO MINUTE_P
    | HOUR_P TO SECOND_P
    | MINUTE_P TO SECOND_P
    ;


/*****************************************************************************
 *
 *  expression grammar
 *
 *****************************************************************************/

/*
 * General expressions
 * This is the heart of the expression syntax.
 *
 * We have two expression types: a_expr is the unrestricted kind, and
 * b_expr is a subset that must be used in some places to avoid shift/reduce
 * conflicts.  For example, we can't do BETWEEN as "BETWEEN a_expr AND a_expr"
 * because that use of AND conflicts with AND as a boolean operator.  So,
 * b_expr is used in BETWEEN and we remove boolean keywords from b_expr.
 *
 * Note that LEFT_PAREN a_expr RIGHT_PAREN is a b_expr, so an unrestricted expression can
 * always be used by surrounding it with parens.
 *
 * c_expr is all the productions that are common to a_expr and b_expr;
 * it's factored out just to eliminate redundant coding.
 */
a_expr
    : PLUS_SIGN a_expr
    | MINUS_SIGN a_expr
    | c_expr
    | a_expr TYPECAST Typename
    | a_expr AT TIME ZONE a_expr
    /*
     * These operators must be called out explicitly in order to make use
     * of yacc/bison's automatic operator-precedence handling.  All other
     * operator names are handled by the generic productions using "OP",
     * below; and all those operators will have the same precedence.
     *
     * If you add more explicitly-known operators, be sure to add them
     * also to b_expr and to the MathOp list above.
     */
    | a_expr qual_Op a_expr
    | qual_Op a_expr
    | a_expr qual_Op
    | a_expr AND a_expr
    | a_expr OR a_expr
    | NOT a_expr
    | a_expr NOT? (LIKE | ILIKE | SIMILAR) a_expr
    | a_expr NOT? (LIKE | ILIKE | SIMILAR) a_expr ESCAPE a_expr
      /* NullTest clause
       * Define SQL92-style Null test clause.
       * Allow two forms described in the standard:
       *  a IS NULL
       *  a IS NOT NULL
       * Allow two SQL extensions
       *  a ISNULL
       *  a NOTNULL
       */
    | a_expr IS NOT? NULL_P
    | a_expr ISNULL
    | a_expr NOTNULL
    | row OVERLAPS row
    | a_expr IS NOT? (TRUE_P | FALSE_P | UNKNOWN)
    | a_expr IS NOT? DISTINCT FROM a_expr
    | a_expr IS NOT? OF paren_type_list
    | a_expr NOT? BETWEEN ASYMMETRIC? b_expr AND b_expr
    | a_expr NOT? BETWEEN SYMMETRIC b_expr AND b_expr
    | a_expr NOT? IN_P in_expr
    | a_expr subquery_Op sub_type select_with_parens 
    | a_expr subquery_Op sub_type LEFT_PAREN a_expr RIGHT_PAREN
    | UNIQUE select_with_parens  
    | a_expr IS NOT? DOCUMENT_P
    ;

/*
 * Restricted expressions
 *
 * b_expr is a subset of the complete expression syntax defined by a_expr.
 *
 * Presently, AND, NOT, IS, and IN are the a_expr keywords that would
 * cause trouble in the places where b_expr is used.  For simplicity, we
 * just eliminate all the boolean-keyword-operator productions from b_expr.
 */
b_expr
    : c_expr
    | b_expr TYPECAST Typename
    | PLUS_SIGN b_expr 
    | MINUS_SIGN b_expr
    | b_expr qual_Op b_expr
    | qual_Op b_expr
    | b_expr qual_Op
    | b_expr IS NOT? DISTINCT FROM b_expr
    | b_expr IS NOT? OF paren_type_list  
    | b_expr IS NOT? DOCUMENT_P
    ;

/*
 * Productions that can be used in both a_expr and b_expr.
 *
 * Note: productions that refer recursively to a_expr or b_expr mostly
 * cannot appear here.  However, it's OK to refer to a_exprs that occur
 * inside parentheses, such as function arguments; that cannot introduce
 * ambiguity to the b_expr syntax.
 */
c_expr
    : columnref 
    | func_expr OVER window_specification
    | AexprConst  
    | PARAM indirection?
    | LEFT_PAREN a_expr RIGHT_PAREN indirection?
    | case_expr
    | decode_expr
    | func_expr
    | select_with_parens
    | select_with_parens indirection
    | EXISTS select_with_parens
    | ARRAY select_with_parens
    | ARRAY array_expr
    | row
    ;

scatter_clause
    : SCATTER (RANDOMLY | BY expr_list)
    ;

table_value_select_clause 
    : SelectStmt scatter_clause?
    ;

simple_func
    : func_name simple_func_params
    ;

simple_func_params
    : LEFT_PAREN ASTERISK? RIGHT_PAREN
    | paren_expr_list
    | LEFT_PAREN VARIADIC a_expr RIGHT_PAREN
    | LEFT_PAREN expr_list COMMA VARIADIC a_expr RIGHT_PAREN
    | LEFT_PAREN opt_distinct? expr_list sort_clause? RIGHT_PAREN
    ;

/*
 * func_expr is split out from c_expr just so that we have a classification
 * for "everything that is a function call or looks like one".  This isn't
 * very important, but it saves us having to document which variants are
 * legal in the backwards-compatible functional-index syntax for CREATE INDEX.
 * (Note that many of the special SQL functions wouldn't actually make any
 * sense as functional index entries, but we ignore that consideration here.)
 */
func_expr
    : simple_func FILTER LEFT_PAREN WHERE a_expr RIGHT_PAREN
    | simple_func
    | CURRENT_DATE
    | (CURRENT_TIME | CURRENT_TIMESTAMP | LOCALTIME | LOCALTIMESTAMP) paren_iconst?
    | CURRENT_ROLE
    | CURRENT_USER
    | SESSION_USER
    | USER
    | CURRENT_CATALOG
    | CURRENT_SCHEMA
    | CAST LEFT_PAREN a_expr AS Typename RIGHT_PAREN
    | EXTRACT LEFT_PAREN extract_list? RIGHT_PAREN
    | OVERLAY LEFT_PAREN overlay_list RIGHT_PAREN
    | POSITION LEFT_PAREN position_list? RIGHT_PAREN
    | SUBSTRING LEFT_PAREN substr_list? RIGHT_PAREN
    | TREAT LEFT_PAREN a_expr AS Typename RIGHT_PAREN
    | TRIM LEFT_PAREN BOTH trim_list RIGHT_PAREN
    | TRIM LEFT_PAREN LEADING trim_list RIGHT_PAREN
    | TRIM LEFT_PAREN TRAILING trim_list RIGHT_PAREN
    | TRIM LEFT_PAREN trim_list RIGHT_PAREN
    | NULLIF LEFT_PAREN a_expr COMMA a_expr RIGHT_PAREN
    | COALESCE paren_expr_list
    | GREATEST paren_expr_list
    | LEAST paren_expr_list
    | GROUPING paren_expr_list
    | GROUP_ID double_parens
    | MEDIAN LEFT_PAREN a_expr RIGHT_PAREN
    | PERCENTILE_CONT LEFT_PAREN a_expr RIGHT_PAREN WITHIN GROUP_P LEFT_PAREN ORDER BY sortby_list RIGHT_PAREN
    | PERCENTILE_DISC LEFT_PAREN a_expr RIGHT_PAREN WITHIN GROUP_P LEFT_PAREN ORDER BY sortby_list RIGHT_PAREN
    | DECODE LEFT_PAREN a_expr COMMA a_expr RIGHT_PAREN
    | XMLCONCAT paren_expr_list
    | XMLELEMENT LEFT_PAREN NAME_P ColLabel RIGHT_PAREN
    | XMLELEMENT LEFT_PAREN NAME_P ColLabel COMMA xml_attributes RIGHT_PAREN
    | XMLELEMENT LEFT_PAREN NAME_P ColLabel COMMA expr_list RIGHT_PAREN
    | XMLELEMENT LEFT_PAREN NAME_P ColLabel COMMA xml_attributes COMMA expr_list RIGHT_PAREN
    | XMLEXISTS LEFT_PAREN c_expr xmlexists_argument RIGHT_PAREN
    | XMLEXISTS LEFT_PAREN a_expr COMMA a_expr RIGHT_PAREN
    | XMLFOREST LEFT_PAREN xml_attribute_list RIGHT_PAREN
    | XMLPARSE LEFT_PAREN document_or_content a_expr xml_whitespace_option? RIGHT_PAREN
    | XMLPI LEFT_PAREN NAME_P ColLabel RIGHT_PAREN
    | XMLPI LEFT_PAREN NAME_P ColLabel COMMA a_expr RIGHT_PAREN
    | XMLROOT LEFT_PAREN a_expr COMMA xml_root_version opt_xml_root_standalone? RIGHT_PAREN
    | XMLSERIALIZE LEFT_PAREN document_or_content a_expr AS SimpleTypename RIGHT_PAREN
    ;

/*
 * SQL/XML support
 */
xml_root_version
    : VERSION_P a_expr
    | VERSION_P NO VALUE_P
    ;

opt_xml_root_standalone
    : COMMA STANDALONE_P (YES_P | NO VALUE_P?)
    ;

xml_attributes
    : XMLATTRIBUTES LEFT_PAREN xml_attribute_list RIGHT_PAREN
    ;

xml_attribute_list
    : xml_attribute_el (COMMA xml_attribute_el)*
    ;

xml_attribute_el
    : a_expr (AS ColLabel)?
    | a_expr
    ;

document_or_content
    : DOCUMENT_P
    | CONTENT_P
    ;

xml_whitespace_option
    : (PRESERVE | STRIP_P) WHITESPACE_P
    ;

/* We allow several variants for SQL and other compatibility. */
xmlexists_argument
    : PASSING c_expr (BY REF)?
    | PASSING BY REF c_expr (BY REF)?
    ;


/*
 * Window Definitions
 */
window_clause
    : WINDOW window_definition_list
    ;

window_definition_list
    : window_definition (COMMA window_definition)*
    ;

window_definition
    : ColId AS window_specification
    ;

window_specification
    : LEFT_PAREN ColId? opt_partition_clause? sort_clause? window_frame_clause? RIGHT_PAREN
    ;

opt_partition_clause
    : PARTITION BY sortby_list
    ;

window_frame_clause
    : window_frame_units window_frame_extent window_frame_exclusion?
    ;

/* units are either rows (true) otherwise false */
window_frame_units
    : ROWS
    | RANGE
    ;

window_frame_extent
    : window_frame_start
    | window_frame_between
    ;

window_frame_start
    : UNBOUNDED PRECEDING
    | a_expr PRECEDING
    | CURRENT_P ROW
    ;

window_frame_between
    : BETWEEN window_frame_bound AND window_frame_bound
    ;

/*
 * Be careful that we don't allow BETWEEN UNBOUND PRECEDING AND
 * UNBOUND PRECEDING
 */

window_frame_bound
    : window_frame_start
    | UNBOUNDED FOLLOWING
    | a_expr FOLLOWING
    ;

window_frame_exclusion
    : EXCLUDE CURRENT_P ROW
    | EXCLUDE GROUP_P
    | EXCLUDE TIES
    | EXCLUDE NO OTHERS
    ;


/*
 * Supporting nonterminals for expressions.
 */

/* Explicit row production.
 *
 * SQL99 allows an optional ROW keyword, so we can now do single-element rows
 * without conflicting with the parenthesized a_expr production.  Without the
 * ROW keyword, there must be more than one a_expr inside the parens.
 */
row
    : LEFT_PAREN expr_list? RIGHT_PAREN
    ;

sub_type
    : ANY 
    | SOME
    | ALL   
    ;

all_Op
    : OP  
    ;

qual_Op
    : OP
    | OPERATOR LEFT_PAREN any_operator RIGHT_PAREN
    ;

qual_all_Op
    : all_Op
    | OPERATOR LEFT_PAREN any_operator RIGHT_PAREN
    ;

subquery_Op
    : all_Op
    | OPERATOR LEFT_PAREN any_operator RIGHT_PAREN
    | NOT? LIKE
    | NOT? ILIKE
    ;

paren_expr_list
    : LEFT_PAREN expr_list RIGHT_PAREN
    ;

expr_list
    : a_expr (COMMA a_expr)*
    ;

type_list
    : Typename (COMMA Typename)* 
    ;

array_expr
    : LEFT_BRACKET expr_list? RIGHT_BRACKET
    | LEFT_BRACKET array_expr_list RIGHT_BRACKET
    ;

array_expr_list
    : array_expr (COMMA array_expr)*
    ;


extract_list
    : extract_arg FROM a_expr
    ;

/* Allow delimited string SCONST in extract_arg as an SQL extension.
 * - thomas 2001-04-12
 */

extract_arg 
    : IDENT
    | YEAR_P
    | MONTH_P 
    | DAY_P   
    | HOUR_P 
    | MINUTE_P   
    | SECOND_P   
    | SCONST   
    ;

/* OVERLAY() arguments
 * SQL99 defines the OVERLAY() function:
 * o overlay(text placing text from int for int)
 * o overlay(text placing text from int)
 */
overlay_list
    : a_expr overlay_placing substr_from substr_for?
    ;

overlay_placing
    : PLACING a_expr
    ;

/* position_list uses b_expr not a_expr to avoid conflict with general IN */

position_list
    : b_expr IN_P b_expr
    ;

/* SUBSTRING() arguments
 * SQL9x defines a specific syntax for arguments to SUBSTRING():
 * o substring(text from int for int)
 * o substring(text from int) get entire string from starting point "int"
 * o substring(text for int) get first "int" characters of string
 * o substring(text from pattern) get entire string matching pattern
 * o substring(text from pattern for escape) same with specified escape char
 * We also want to support generic substring functions which accept
 * the usual generic list of arguments. So we will accept both styles
 * here, and convert the SQL9x style to the generic list for further
 * processing. - thomas 2000-11-28
 */
substr_list
    : a_expr substr_from substr_for
    | a_expr substr_for substr_from
    | a_expr substr_from
    | a_expr substr_for
    | expr_list
    ;

substr_from 
    : FROM a_expr 
    ;

substr_for
    : FOR a_expr   
    ;

trim_list
    : a_expr FROM expr_list 
    | FROM expr_list
    | expr_list
    ;

in_expr
    : select_with_parens
    | paren_expr_list      
    ;

/*
 * Define SQL92-style case clause.
 * - Full specification
 *  CASE WHEN a = b THEN c ... ELSE d END
 * - Implicit argument
 *  CASE a WHEN b THEN c ... ELSE d END
 */
case_expr
    : CASE case_arg? when_clause+ case_default? END_P
    ;

when_clause
    : WHEN when_operand THEN a_expr
    ;

when_operand
    : a_expr
    | IS NOT DISTINCT FROM a_expr
    ;

case_default
    : ELSE a_expr 
    ;

case_arg
    : a_expr
    ;


/*
 * Oracle-compatible DECODE function:
 * DECODE(lhs, rhs, res [, rhs2, res2 ]... [, def_res]): 
 *     returns resX if lhs = rhsX, or def_res if no match found
 * It is transformed into: 
 *    CASE lhs WHEN IS NOT DISTINCT FROM rhs THEN res
 *        [WHEN IS NOT DISTINCT FROM rhs2 THEN res2] ... 
 *      ELSE def_res END
 */
decode_expr
    : DECODE LEFT_PAREN a_expr search_result+ decode_default? RIGHT_PAREN
    ;

search_result
    : COMMA a_expr COMMA a_expr
    ;
        
decode_default
    : COMMA a_expr
    ;


/*
 * columnref starts with relation_name not ColId, so that OLD and NEW
 * references can be accepted.  Note that when there are more than two
 * dotted names, the first name is not actually a relation name...
 */
columnref
    :  relation_name indirection?
    ;

indirection_el
    : PERIOD attr_name
    | PERIOD ASTERISK
    | LEFT_BRACKET a_expr RIGHT_BRACKET
    | LEFT_BRACKET a_expr SEMICOLON a_expr RIGHT_BRACKET
    ;

indirection
    : indirection_el+
    ;

/*
 * The SQL spec defines "contextually typed value expressions" and
 * "contextually typed row value constructors", which for our purposes
 * are the same as "a_expr" and "row" except that DEFAULT can appear at
 * the top level.
 */

ctext_expr
    : a_expr
    | DEFAULT
    ;

ctext_expr_list
    : ctext_expr (COMMA ctext_expr)*
    ;

/*
 * We should allow ROW LEFT_PAREN ctext_expr_list RIGHT_PAREN too, but that seems to require
 * making VALUES a fully reserved word, which will probably break more apps
 * than allowing the noise-word is worth.
 */
ctext_row
    : LEFT_PAREN ctext_expr_list RIGHT_PAREN
    ;


/*****************************************************************************
 *
 *  target list for SELECT
 *
 *****************************************************************************/

target_list
    : target_el (COMMA target_el)*
    ;

target_el
    : a_expr AS ColLabel
      /*
       * Postgres supports omitting AS only for column labels that aren't
       * any known keyword.  There is an ambiguity against postfix
       * operators: is "a ! b" an infix expression, or a postfix
       * expression and a column label?  We prefer to resolve this
       * as an infix expression, which we accomplish by assigning
       * IDENT a precedence higher than POSTFIXOP.
       *
       * In GPDB, we extend this to allow most unreserved_keywords by
       * also assigning them a precedence.  There are certain keywords
       * that can't work without the as: reserved_keywords, the date
       * modifier suffixes (DAY, MONTH, YEAR, etc) and a few other
       * obscure cases.
       */
    | a_expr IDENT
    | a_expr ColLabelNoAs
    | a_expr
    | ASTERISK
    ;


/*****************************************************************************
 *
 *  Names and constants
 *
 *****************************************************************************/

relation_name
    : SpecialRuleRelation
    | ColId
    ;

qualified_name_list
    : qualified_name (COMMA qualified_name)*
    ;

/*
 * The production for a qualified relation name has to exactly match the
 * production for a qualified func_name, because in a FROM clause we cannot
 * tell which we are parsing until we see what comes after it (LEFT_PAREN for a
 * func_name, something else for a relation). Therefore we allow 'indirection'
 * which may contain subscripts, and reject that case in the C code.
 */
qualified_name
    : relation_name indirection?
    ;

name_list
    : name (COMMA name)*
    ;


name
    : ColId
    ;

database_name
    : ColId
    ;

access_method
    : ColId
    ;

attr_name:  ColLabel;

index_name: ColId;

file_name:  Sconst;

/*
 * The production for a qualified func_name has to exactly match the
 * production for a qualified columnref, because we cannot tell which we
 * are parsing until we see what comes after it (LEFT_PAREN or Sconst for a func_name,
 * anything else for a columnref).  Therefore we allow 'indirection' which
 * may contain subscripts, and reject that case in the C code.  (If we
 * ever implement SQL99-like methods, such syntax may actually become legal!)
 */
func_name
    : type_function_name
    | relation_name indirection
    ;


/*
 * Constants
 */
AexprConst
    : Iconst
    | FCONST
    | Sconst
    | BCONST
    | XCONST
    | func_name paren_expr_list? Sconst
    | ConstTypename Sconst
    | ConstInterval paren_iconst? Sconst opt_interval?
    | TRUE_P
    | FALSE_P
    | NULL_P
    ;

Iconst
    : ICONST
    ;

Sconst
    : SCONST
    ;

RoleId
    : ColId
    ;

QueueId
    : ColId
    ;

SignedIconst
    : (PLUS_SIGN | MINUS_SIGN)? ICONST
    ;

/*
 * Name classification hierarchy.
 *
 * IDENT is the lexeme returned by the lexer for identifiers that match
 * no known keyword.  In most cases, we can accept certain keywords as
 * names, not only IDENTs.  We prefer to accept as many such keywords
 * as possible to minimize the impact of "reserved words" on programmers.
 * So, we divide names into several possible classes.  The classification
 * is chosen in part to make keywords acceptable as names wherever possible.
 */

/* Column identifier --- names that can be column, table, etc names.
 */
ColId
    : IDENT
    | unreserved_keyword
    | col_name_keyword 
    ;

/* Type/function identifier --- names that can be type or function names.
 */
type_function_name
    : IDENT
    | unreserved_keyword
    | type_func_name_keyword
    ;

/* Column label --- allowed labels in "AS" clauses.
 * This presently includes *all* Postgres keywords.
 */
ColLabel
    : IDENT
    | unreserved_keyword     
    | col_name_keyword
    | type_func_name_keyword
    | reserved_keyword   
    ;

/*
 * Keyword category lists.  Generally, every keyword present in
 * the Postgres grammar should appear in exactly one of these lists.
 *
 * Put a new keyword into the first list that it can go into without causing
 * shift or reduce conflicts.  The earlier lists define "less reserved"
 * categories of keywords.
 *
 * Make sure that each keyword's category in parser/kwlist.h matches where
 * it is listed here.  (Someday we may be able to generate these lists and
 * kwlist.h's table from a common master list.)
 */

/* "Unreserved" keywords --- available for use as any kind of name.
 */
unreserved_keyword
      : ABORT_P
      | ABSOLUTE_P
      | ACCESS
      | ACTION
      | ACTIVE
      | ADD_P
      | ADMIN
      | AFTER
      | AGGREGATE
      | ALSO
      | ALTER
      | ALWAYS
      | ASSERTION
      | ASSIGNMENT
      | AT
      | BACKWARD
      | BEFORE
      | BEGIN_P
      | BY
      | CACHE
      | CALLED
      | CASCADE
      | CASCADED
      | CHAIN
      | CHARACTERISTICS
      | CHECKPOINT
      | CLASS
      | CLOSE
      | CLUSTER
      | COMMENT
      | COMMIT
      | COMMITTED
      | CONCURRENCY
      | CONCURRENTLY
      | CONFIGURATION
      | CONNECTION
      | CONSTRAINTS
      | CONTAINS
      | CONTENT_P
      | CONTINUE_P
      | CONVERSION_P
      | COPY
      | COST
      | CPUSET
      | CPU_RATE_LIMIT
      | CREATEDB
      | CREATEEXTTABLE
      | CREATEROLE
      | CREATEUSER
      | CSV
      | CURRENT_P
      | CURSOR
      | CYCLE
      | DATA_P
      | DATABASE
      | DAY_P
      | DEALLOCATE
      | DECLARE
      | DEFAULTS
      | DEFERRED
      | DEFINER
      | DELETE_P
      | DELIMITER
      | DELIMITERS
      | DENY
      | DICTIONARY
      | DISABLE_P
      | DISCARD
      | DOCUMENT_P
      | DOMAIN_P
      | DOUBLE_P
      | DROP
      | DXL
      | EACH
      | ENABLE_P
      | ENCODING
      | ENCRYPTED
      | ENUM_P
      | ERRORS
      | ESCAPE
      | EVERY
      | EXCHANGE
      | EXCLUDING
      | EXCLUSIVE
      | EXECUTE
      | EXPLAIN
      | EXTENSION
      | EXTERNAL
      | FAMILY
      | FIELDS
      | FILESPACE
      | FILL
      | FIRST_P
      | FORCE
      | FORMAT
      | FORWARD
      | FUNCTION
      | GLOBAL
      | GRANTED
      | HANDLER
      | HASH
      | HEADER_P
      | HOLD
      | HOST
      | HOUR_P
      | IDENTITY_P
      | IF_P
      | IGNORE_P
      | IMMEDIATE
      | IMMUTABLE
      | IMPLICIT_P
      | INCLUDING
      | INCLUSIVE
      | INCREMENT
      | INDEX
      | INDEXES
      | INHERIT
      | INHERITS
      | INLINE_P
      | INPUT_P
      | INSENSITIVE
      | INSERT
      | INSTEAD
      | INVOKER
      | ISOLATION
      | KEY
      | LANGUAGE
      | LARGE_P
      | LAST_P
      | LEVEL
      | LIST
      | LISTEN
      | LOAD
      | LOCAL
      | LOCATION
      | LOCK_P
      | LOGIN_P
      | MAPPING
      | MASTER
      | MATCH
      | MAXVALUE
      | MEMORY_LIMIT
      | MEMORY_SHARED_QUOTA
      | MEMORY_SPILL_RATIO
      | MERGE
      | MINUTE_P
      | MINVALUE
      | MISSING
      | MODE
      | MODIFIES
      | MODIFY
      | MONTH_P
      | MOVE
      | NAME_P
      | NAMES
      | NEWLINE
      | NEXT
      | NO
      | NOCREATEDB
      | NOCREATEEXTTABLE
      | NOCREATEROLE
      | NOCREATEUSER
      | NOINHERIT
      | NOLOGIN_P
      | NOOVERCOMMIT
      | NOSUPERUSER
      | NOTHING
      | NOTIFY
      | NOWAIT
      | NULLS_P
      | OBJECT_P
      | OF
      | OIDS
      | OPERATOR
      | OPTION
      | OPTIONS
      | ORDERED
      | OTHERS
      | OVER
      | OVERCOMMIT
      | OWNED
      | OWNER
      | PARSER
      | PARTIAL
      | PARTITIONS
      | PASSING
      | PASSWORD
      | PERCENT
      | PLANS
      | PREPARE
      | PREPARED
      | PRESERVE
      | PRIOR
      | PRIVILEGES
      | PROCEDURAL
      | PROCEDURE
      | PROGRAM
      | PROTOCOL
      | QUEUE
      | QUOTE
      | RANDOMLY /* gp */
      | READ
      | READABLE
      | READS
      | REASSIGN
      | RECHECK
      | RECURSIVE
      | REF
      | REINDEX
      | REJECT_P /* gp */
      | RELATIVE_P
      | RELEASE
      | RENAME
      | REPEATABLE
      | REPLACE
      | REPLICA
      | RESET
      | RESOURCE
      | RESTART
      | RESTRICT
      | RETURNS
      | REVOKE
      | ROLE
      | ROLLBACK
      | ROOTPARTITION
      | RULE
      | SAVEPOINT
      | SCHEMA
      | SCROLL
      | SEARCH
      | SECOND_P
      | SECURITY
      | SEGMENT
      | SEQUENCE
      | SERIALIZABLE
      | SESSION
      | SET
      | SHARE
      | SHOW
      | SIMPLE
      | SPLIT
      | SQL
      | STABLE
      | STANDALONE_P
      | START
      | STATEMENT
      | STATISTICS
      | STDIN
      | STDOUT
      | STORAGE
      | STRICT_P
      | STRIP_P
      | SUBPARTITION
      | SUBPARTITIONS
      | SUPERUSER_P
      | SYSID
      | SYSTEM_P
      | TABLESPACE
      | TEMP
      | TEMPLATE
      | TEMPORARY
      | TEXT_P
      | THRESHOLD
      | TIES
      | TRANSACTION
      | TRIGGER
      | TRUNCATE
      | TRUSTED
      | TYPE_P
      | UNCOMMITTED
      | UNENCRYPTED
      | UNKNOWN
      | UNLISTEN
      | UNTIL
      | UPDATE
      | VACUUM
      | VALID
      | VALIDATION /* gp */
      | VALIDATOR
      | VALUE_P
      | VARYING
      | VERSION_P
      | VIEW
      | VOLATILE
      | WEB /* gp */
      | WHITESPACE_P
      | WITHIN
      | WITHOUT
      | WORK
      | WRITABLE
      | WRITE
      | XML_P
      | YEAR_P
      | YES_P
      | ZONE
    ;

/*
 * ColLabelNoAs is used for SELECT element aliases that don't have the
 * AS keyword.  We always allow IDENT, so anything in double-quotes is
 * also OK.  Beyond that, any keywords listed here can be a column
 * alias even when you omit the AS keyword.
 *
 * We could add some of the reserved_keywords to this list, but I'm
 * reluctant to do so because it might restrict future enhancements to
 * the grammar.
 */

ColLabelNoAs
    : keywords_ok_in_alias_no_as
    ;

keywords_ok_in_alias_no_as
    : PartitionIdentKeyword
    | TABLESPACE
    | ADD_P
    | ALTER
    | AT
    ;

PartitionColId
    : PartitionIdentKeyword
    | IDENT
    ;

PartitionIdentKeyword
      : ABORT_P
      | ABSOLUTE_P
      | ACCESS
      | ACTION
      | ACTIVE
      | ADMIN
      | AFTER
      | AGGREGATE
      | ALSO
      | ASSERTION
      | ASSIGNMENT
      | BACKWARD
      | BEFORE
      | BEGIN_P
      | BY
      | CACHE
      | CALLED
      | CASCADE
      | CASCADED
      | CHAIN
      | CHARACTERISTICS
      | CHECKPOINT
      | CLASS
      | CLOSE
      | CLUSTER
      | COMMENT
      | COMMIT
      | COMMITTED
      | CONCURRENCY
      | CONCURRENTLY
      | CONNECTION
      | CONSTRAINTS
      | CONTAINS
      | CONTENT_P
      | CONVERSION_P
      | COPY
      | COST
      | CPU_RATE_LIMIT
      | CPUSET
      | CREATEDB
      | CREATEEXTTABLE
      | CREATEROLE
      | CREATEUSER
      | CSV
      | CURSOR
      | CYCLE
      | DATABASE
      | DEALLOCATE
      | DECLARE
      | DEFAULTS
      | DEFERRED
      | DEFINER
      | DELETE_P
      | DELIMITER
      | DELIMITERS
      | DISABLE_P
      | DOMAIN_P
      | DOUBLE_P
      | DROP
      | EACH
      | ENABLE_P
      | ENCODING
      | ENCRYPTED
      | ERRORS
      | ENUM_P
      | ESCAPE
      | EVERY
      | EXCHANGE
      | EXCLUDING
      | EXCLUSIVE
      | EXECUTE
      | EXPLAIN
      | EXTERNAL
      | FIELDS
      | FILL
      | FIRST_P
      | FORCE
      | FORMAT
      | FORWARD
      | FUNCTION
      | GLOBAL
      | GRANTED
      | HANDLER
      | HASH
      | HEADER_P
      | HOLD
      | HOST
      | IF_P
      | IMMEDIATE
      | IMMUTABLE
      | IMPLICIT_P
      | INCLUDING
      | INCLUSIVE
      | INCREMENT
      | INDEX
      | INDEXES
      | INHERIT
      | INHERITS
      | INPUT_P
      | INSENSITIVE
      | INSERT
      | INSTEAD
      | INVOKER
      | ISOLATION
      | KEY
      | LANGUAGE
      | LARGE_P
      | LAST_P
      | LEVEL
      | LIST
      | LISTEN
      | LOAD
      | LOCAL
      | LOCATION
      | LOCK_P
      | LOGIN_P
      | MASTER
      | MATCH
      | MAXVALUE
      | MEMORY_LIMIT
      | MEMORY_SHARED_QUOTA
      | MEMORY_SPILL_RATIO
      | MERGE
      | MINVALUE
      | MISSING
      | MODE
      | MODIFIES
      | MODIFY
      | MOVE
      | NAME_P
      | NAMES
      | NEWLINE
      | NEXT
      | NO
      | NOCREATEDB
      | NOCREATEROLE
      | NOCREATEUSER
      | NOINHERIT
      | NOLOGIN_P
      | NOOVERCOMMIT
      | NOSUPERUSER
      | NOTHING
      | NOTIFY
      | NOWAIT
      | NULLS_P
      | OBJECT_P
      | OF
      | OIDS
      | OPERATOR
      | OPTION
      | OPTIONS
      | OTHERS
      | OVERCOMMIT
      | OWNED
      | OWNER
      | PARTIAL
      | PARTITIONS
      | PASSWORD
      | PERCENT
      | PREPARE
      | PREPARED
      | PRESERVE
      | PRIOR
      | PRIVILEGES
      | PROCEDURAL
      | PROCEDURE
      | PROTOCOL
      | QUEUE
      | QUOTE
      | READ
      | REASSIGN
      | RECHECK
      | REINDEX
      | RELATIVE_P
      | RELEASE
      | RENAME
      | REPEATABLE
      | REPLACE
      | RESET
      | RESOURCE
      | RESTART
      | RESTRICT
      | RETURNS
      | REVOKE
      | ROLE
      | ROLLBACK
      | RULE
      | SAVEPOINT
      | SCHEMA
      | SCROLL
      | SEARCH
      | SECURITY
      | SEGMENT
      | SEQUENCE
      | SERIALIZABLE
      | SESSION
      | SET
      | SHARE
      | SHOW
      | SIMPLE
      | SPLIT
      | SQL
      | STABLE
      | START
      | STATEMENT
      | STATISTICS
      | STDIN
      | STDOUT
      | STORAGE
      | STRICT_P
      | SUBPARTITION
      | SUBPARTITIONS
      | SUPERUSER_P
      | SYSID
      | SYSTEM_P
      | TEMP
      | TEMPLATE
      | TEMPORARY
      | THRESHOLD
      | TIES
      | TRANSACTION
      | TRIGGER
      | TRUNCATE
      | TRUSTED
      | TYPE_P
      | UNCOMMITTED
      | UNENCRYPTED
      | UNKNOWN
      | UNLISTEN
      | UNTIL
      | UPDATE
      | VACUUM
      | VALID
      | VALIDATOR
      | VERSION_P
      | VIEW
      | VALUE_P
      | VOLATILE
      | WORK
      | WRITE
      | ZONE
      | BIGINT
      | BIT
      | BOOLEAN_P
      | COALESCE
      | CUBE
      | DEC
      | DECIMAL_P
      | EXISTS
      | EXTRACT
      | FLOAT_P
      | GREATEST
      | GROUP_ID
      | GROUPING
      | INOUT
      | INT_P
      | INTEGER
      | INTERVAL
      | LEAST
      | NATIONAL
      | NCHAR
      | NONE
      | NULLIF
      | NUMERIC
      | OUT_P
      | OVERLAY
      | POSITION
      | PRECISION
      | REAL
      | ROLLUP
      | ROW
      | SETOF
      | SETS
      | SMALLINT
      | SUBSTRING
      | TIME
      | TIMESTAMP
      | TREAT
      | TRIM
      | VALUES
      | VARCHAR
      | AUTHORIZATION
      | BINARY
      | FREEZE
      | LOG_P
      | OUTER_P
      | VERBOSE
      ;

/* Column identifier --- keywords that can be column, table, etc names.
 *
 * Many of these keywords will in fact be recognized as type or function
 * names too; but they have special productions for the purpose, and so
 * can't be treated as "generic" type or function names.
 *
 * The type names appearing here are not usable as function names
 * because they can be followed by LEFT_PAREN in typename productions, which
 * looks too much like a function call for an LR(1) parser.
 */
col_name_keyword
      : BIGINT
      | BIT
      | BOOLEAN_P
      | CHAR_P
      | CHARACTER
      | COALESCE
      | CUBE
      | DEC
      | DECIMAL_P
      | EXISTS
      | EXTRACT
      | FLOAT_P
      | GREATEST
      | GROUPING
      | GROUP_ID
      | INOUT
      | INT_P
      | INTEGER
      | INTERVAL
      | LEAST
      | MEDIAN
      | NATIONAL
      | NCHAR
      | NONE
      | NULLIF
      | NUMERIC
      | OUT_P
      | OVERLAY
      | PERCENTILE_CONT
      | PERCENTILE_DISC
      | POSITION
      | PRECISION
      | REAL
      | ROLLUP
      | ROW
      | SETOF
      | SETS
      | SMALLINT
      | SUBSTRING
      | TIME
      | TIMESTAMP
      | TREAT
      | TRIM
      | VALUES
      | VARCHAR
      | XMLATTRIBUTES
      | XMLCONCAT
      | XMLELEMENT
      | XMLEXISTS
      | XMLFOREST
      | XMLPARSE
      | XMLPI
      | XMLROOT
      | XMLSERIALIZE
    ;

/* Type/function identifier --- keywords that can be type or function names.
 *
 * Most of these are keywords that are used as operators in expressions;
 * in general such keywords can't be column names because they would be
 * ambiguous with variables, but they are unambiguous as function identifiers.
 *
 * Do not include POSITION, SUBSTRING, etc here since they have explicit
 * productions in a_expr to support the goofy SQL9x argument syntax.
 * - thomas 2000-11-28
 */
type_func_name_keyword
      : AUTHORIZATION
      | BINARY
      | CROSS
      | CURRENT_SCHEMA
      | FREEZE
      | FULL
      | ILIKE
      | INNER_P
      | IS
      | ISNULL
      | JOIN
      | LEFT
      | LIKE
      | LOG_P
      | NATURAL
      | NOTNULL
      | OUTER_P
      | OVERLAPS
      | RIGHT
      | SIMILAR
      | VERBOSE
    ;

/* Reserved keyword --- these keywords are usable only as a ColLabel.
 *
 * Keywords appear here if they could not be distinguished from variable,
 * type, or function names in some contexts.  Don't put things here unless
 * forced to.
 */
reserved_keyword
      : ALL
      | ANALYSE
      | ANALYZE
      | AND
      | ANY
      | ARRAY
      | AS
      | ASC
      | ASYMMETRIC
      | BETWEEN
      | BOTH
      | CASE
      | CAST
      | CHECK
      | COLLATE
      | COLUMN
      | CONSTRAINT
      | CREATE
      | CURRENT_CATALOG
      | CURRENT_DATE
      | CURRENT_ROLE
      | CURRENT_TIME
      | CURRENT_TIMESTAMP
      | CURRENT_USER
      | DECODE
      | DEFAULT
      | DEFERRABLE
      | DESC
      | DISTINCT
      | DISTRIBUTED /* gp */
      | DO
      | ELSE
      | END_P
      | EXCEPT
      | EXCLUDE 
      | FALSE_P
      | FETCH
      | FILTER
      | FOLLOWING
      | FOR
      | FOREIGN
      | FROM
      | GRANT
      | GROUP_P
      | HAVING
      | IN_P
      | INITIALLY
      | INTERSECT
      | INTO
      | LEADING
      | LIMIT
      | LOCALTIME
      | LOCALTIMESTAMP
      | NEW
      | NOT
      | NULL_P
      | OFF
      | OFFSET
      | OLD
      | ON
      | ONLY
      | OR
      | ORDER
      | PARTITION
      | PLACING
      | PRECEDING
      | PRIMARY
      | RANGE
      | REFERENCES
      | RETURNING
      | ROWS
      | SCATTER  /* gp */
      | SELECT
      | SESSION_USER
      | SOME
      | SYMMETRIC
      | TABLE
      | THEN
      | TO
      | TRAILING
      | TRUE_P
      | UNBOUNDED
      | UNION
      | UNIQUE
      | USER
      | USING
      | VARIADIC
      | WHEN
      | WHERE
      | WINDOW
      | WITH
      ;


SpecialRuleRelation
    : OLD
    | NEW
    ;

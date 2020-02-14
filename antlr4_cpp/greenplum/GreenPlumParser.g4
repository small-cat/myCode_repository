parser grammar GreenPlumParser;

options {
    tokenVocab=GreenPlumLexer;
}

/*
 *  psql already handles such cases, but other interfaces don't.
 *  here, the rules can only support such cases:
 *  1. select 1;
 *  2. select 1;;
 *  3. select 1;;;;
 *  but can not support select 1;;; <--- here three semicolons at the end
 */
stmtblock
    :  stmtmulti SEMICOLON? EOF
    ;

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
    | analyze_stmt
    | check_point_stmt
    | close_portal_stmt
    | cluster_stmt
    | comment_stmt
    | constraints_set_stmt
    | copy_stmt
    | create_as_stmt
    | create_assert_stmt
    | create_cast_stmt
    | create_conversion_stmt
    | create_domain_stmt
    | create_extension_stmt
    | create_external_stmt
    | create_file_space_stmt
    | create_function_stmt
    | create_group_stmt
    | create_op_class_stmt
    | create_op_family_stmt
    | alter_op_family_stmt
    | create_p_lang_stmt
    | create_queue_stmt
    | create_resource_group_stmt
    | create_schema_stmt
    | create_seq_stmt
    | create_stmt
    | create_table_space_stmt
    | create_trig_stmt
    | create_role_stmt
    | create_user_stmt
    | createdb_stmt
    | deallocate_stmt
    | declare_cursor_stmt
    | define_stmt
    | delete_stmt
    | discard_stmt
    | do_stmt
    | drop_assert_stmt
    | drop_cast_stmt
    | drop_group_stmt
    | drop_op_class_stmt
    | drop_op_family_stmt
    | drop_owned_stmt
    | drop_p_lang_stmt
    | drop_queue_stmt
    | drop_resource_group_stmt
    | drop_rule_stmt
    | drop_stmt
    | drop_trig_stmt
    | drop_role_stmt
    | drop_user_stmt
    | dropdb_stmt
    | execute_stmt
    | explain_stmt
    | fetch_stmt
    | grant_stmt
    | grant_role_stmt
    | index_stmt
    | insert_stmt
    | listen_stmt
    | load_stmt
    | lock_stmt
    | notify_stmt
    | prepare_stmt
    | reassign_owned_stmt
    | reindex_stmt
    | remove_aggr_stmt
    | remove_func_stmt
    | remove_oper_stmt
    | rename_stmt
    | revoke_stmt
    | revoke_role_stmt
    | rule_stmt
    | select_stmt
    | transaction_stmt
    | truncate_stmt
    | unlisten_stmt
    | update_stmt
    | vacuum_stmt
    | variable_reset_stmt
    | variable_set_stmt
    | variable_show_stmt
    | view_stmt
    | SEMICOLON
    ;

/*****************************************************************************
 *
 * Create a new Postgres Resource Queue
 *
 *****************************************************************************/
create_queue_stmt
    : CREATE RESOURCE QUEUE queue_id opt_queue_elem*
    | CREATE RESOURCE QUEUE queue_id opt_queue_elem* WITH definition
    ;

/*
 * Options for CREATE and ALTER RESOURCE QUEUE 
 */

opt_queue_elem 
    : ACTIVE THRESHOLD numberic_only
    | COST THRESHOLD numberic_only
    | IGNORE_P THRESHOLD numberic_only /* enforce float type in queue.c */
    | OVERCOMMIT
    | NOOVERCOMMIT
    ;

/*****************************************************************************
 *
 * Alter a postgres Resource Queue
 *
 *****************************************************************************/
alter_queue_stmt
    : ALTER RESOURCE QUEUE queue_id opt_queue_elem* with_out_definition*
    ;

with_out_definition
    : (WITH | WITHOUT) definition
    ;

/*****************************************************************************
 *
 * Drop a postgres Resource Queue
 *
 *****************************************************************************/
drop_queue_stmt 
    : DROP RESOURCE QUEUE queue_id
    ;

/*****************************************************************************
 *
 * Create a new GPDB Resource Group
 *
 *****************************************************************************/
create_resource_group_stmt
    : CREATE RESOURCE GROUP_P name with_out_definition
    ;

/*****************************************************************************
 *
 * Drop a GPDB Resource Group
 *
 *****************************************************************************/
drop_resource_group_stmt 
    : DROP RESOURCE GROUP_P name
    ;

/*****************************************************************************
 *
 * Alter a GPDB Resource Group
 *
 *****************************************************************************/
alter_resource_group_stmt 
    : ALTER RESOURCE GROUP_P name SET resource_group_elem?
    ;

/*
 * Option for ALTER RESOURCE GROUP
 */

resource_group_elem 
    : CONCURRENCY integer_only
    | CPU_RATE_LIMIT integer_only
    | CPUSET sconst
    | MEMORY_SHARED_QUOTA integer_only
    | MEMORY_LIMIT integer_only
    | MEMORY_SPILL_RATIO integer_only
    ;

/*****************************************************************************
 *
 * Create a new Postgres DBMS role
 *
 *****************************************************************************/
create_role_stmt 
    : CREATE ROLE role_id opt_with? role_elem*
    ;


opt_with
    :  WITH
    ;

/*
 * Options for CREATE ROLE and ALTER ROLE (also used by CREATE/ALTER USER
 * for backwards compatibility).  Note: the only option required by SQL99
 * is "WITH ADMIN name".
 */

role_elem 
    : PASSWORD sconst
    | PASSWORD NULL_P
    | ENCRYPTED PASSWORD sconst
    | UNENCRYPTED PASSWORD sconst
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
    | CONNECTION LIMIT signed_iconst
    | VALID UNTIL sconst
    | RESOURCE QUEUE any_name
    | RESOURCE GROUP_P any_name
    /* Supported but not documented for roles, for use by ALTER GROUP. */
    | USER name_list
    /* The following are not supported by ALTER ROLE/USER/GROUP */
    | SYSID iconst
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
    : sconst 
    | iconst
    ;

deny_point
    : DAY_P deny_day_specifier opt_time
    ;

opt_time 
    : TIME sconst
    ;

exttab_auth_list
    : LEFT_PAREN keyvalue_list RIGHT_PAREN
    ;

keyvalue_list
    : keyvalue_pair (COMMA keyvalue_pair)*
    ;

keyvalue_pair
    : col_label EQUALS_OP sconst
    ;

/*****************************************************************************
 *
 * Create a new Postgres DBMS user (role with implied login ability)
 *
 *****************************************************************************/
create_user_stmt
    : CREATE USER role_id opt_with? role_elem*
    ;

/*****************************************************************************
 *
 * Alter a postgresql DBMS role
 *
 *****************************************************************************/
alter_role_stmt 
    : ALTER ROLE role_id opt_with? alter_role_elem*
    ;

alter_role_set_stmt 
    : ALTER ROLE role_id set_reset_clause
    ;

/* alter_role_elem* is effectively role_elem* with additional support for DROP DENY FOR. */

alter_role_elem
    : role_elem
    | DROP DENY FOR deny_point
    ;

/*****************************************************************************
 *
 * Alter a postgresql DBMS user
 *
 *****************************************************************************/
alter_user_stmt 
    : ALTER USER role_id opt_with? alter_role_elem*
    ;


alter_user_set_stmt
    : ALTER USER role_id set_reset_clause
    ;

/*****************************************************************************
 *
 * Drop a postgresql DBMS role
 *
 * XXX Ideally this would have CASCADE/RESTRICT options, but since a role
 * might own objects in multiple databases, there is presently no way to
 * implement either cascading or restricting.  Caveat DBA.
 *****************************************************************************/
drop_role_stmt
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
drop_user_stmt 
    : DROP USER name_list
    | DROP USER IF_P EXISTS name_list
    ;

/*****************************************************************************
 *
 * Create a postgresql group (role without login ability)
 *
 *****************************************************************************/
create_group_stmt
    : CREATE GROUP_P role_id opt_with? role_elem*
    ;


/*****************************************************************************
 *
 * Alter a postgresql group
 *
 *****************************************************************************/
alter_group_stmt
    : ALTER GROUP_P role_id add_drop USER name_list
    ;

add_drop
    : ADD_P
    | DROP
    ;


/*****************************************************************************
 *
 * Drop a postgresql group
 *
 * XXX see above notes about cascading DROP USER; groups have same problem.
 *****************************************************************************/
drop_group_stmt
    : DROP GROUP_P (IF_P EXISTS)? name_list
    ;


/*****************************************************************************
 *
 * Manipulate a schema
 *
 *****************************************************************************/
create_schema_stmt
    : CREATE SCHEMA schema_name? AUTHORIZATION role_id schema_stmt*?
    | CREATE SCHEMA colid schema_stmt*?
    ;

schema_name
    : colid
    ;

/*
 *  schema_stmt are the ones that can show up inside a CREATE SCHEMA
 *  statement (in addition to by themselves).
 */
schema_stmt
    : create_stmt
    | index_stmt
    | create_seq_stmt
    | create_trig_stmt
    | grant_stmt
    | view_stmt
    ;

/*****************************************************************************
 *
 * Set PG internal variable
 *    SET name TO 'var_value'
 * Include SQL92 syntax (thomas 1997-10-22):
 *    SET TIME ZONE 'var_value'
 *
 *****************************************************************************/

variable_set_stmt
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
    | ROLE colid_or_sconst
    | SESSION AUTHORIZATION (colid_or_sconst | DEFAULT)
    | XML_P OPTION document_or_content
    ;

var_name
    :  colid
    | var_name PERIOD colid
    ;

var_list
    :  var_value (COMMA var_value)*
    ;

var_value
    : opt_boolean
    | colid_or_sconst
    | numberic_only
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
 * colid gives reduce/reduce errors against const_interval and LOCAL,
 * so use IDENT and reject anything which is a reserved word.
 */
zone_value
    : sconst
    | identifier
    | const_interval paren_iconst? sconst opt_interval?
    | numberic_only
    | DEFAULT
    | LOCAL
    ;

paren_iconst
    : LEFT_PAREN iconst RIGHT_PAREN
    ;

opt_encoding
    : sconst
    | DEFAULT
    ;

colid_or_sconst
    : colid
    | sconst
    ;

variable_reset_stmt
    : RESET var_name
    | RESET TIME ZONE
    | RESET TRANSACTION ISOLATION LEVEL
    | RESET SESSION AUTHORIZATION
    | RESET ALL
    ;

/* set_reset_clause allows SET or RESET without LOCAL */
set_reset_clause
    : SET set_rest
    | variable_reset_stmt
    ;


variable_show_stmt
    : SHOW var_name
    | SHOW TIME ZONE
    | SHOW TRANSACTION ISOLATION LEVEL
    | SHOW SESSION AUTHORIZATION
    | SHOW ALL
    ;


constraints_set_stmt
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
check_point_stmt
    : CHECKPOINT
    ;

/*****************************************************************************
 *
 * DISCARD { ALL | TEMP | PLANS }
 *
 *****************************************************************************/
discard_stmt
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
    : ADD_P opt_column? column_def

    /* ALTER TABLE <relation> ALTER [COLUMN] <colname> {SET DEFAULT <expr>|DROP DEFAULT} */
    | ALTER opt_column? colid alter_column_default

    /* ALTER TABLE <relation> ALTER [COLUMN] <colname> DROP NOT NULL */
    | ALTER opt_column? colid DROP NOT NULL_P

    /* ALTER TABLE <relation> ALTER [COLUMN] <colname> SET NOT NULL */
    | ALTER opt_column? colid SET NOT NULL_P
      
    /* ALTER TABLE <relation> ALTER [COLUMN] <colname> SET STATISTICS <integer_only> */
    | ALTER opt_column? colid SET STATISTICS integer_only
      
    /* ALTER TABLE <relation> ALTER [COLUMN] <colname> SET STORAGE <storagemode> */
    | ALTER opt_column? colid SET STORAGE colid
      
    /* ALTER TABLE <relation> DROP [COLUMN] <colname> [RESTRICT|CASCADE] */
    | DROP opt_column? colid opt_drop_behavior?
      
    /*
     * ALTER TABLE <relation> ALTER [COLUMN] <colname> TYPE <typename>
     *    [ USING <expression> ]
     */
    | ALTER opt_column? colid TYPE_P typename_pg alter_using?
      
    /* ALTER TABLE <relation> ADD CONSTRAINT ... */
    | ADD_P table_constraint
      
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
    | SET with_out_definition? distributed_by
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
    : tab_partition_boundary_spec_start tab_partition_boundary_spec_end? 
      opt_tab_partition_boundary_spec_every?  
    | tab_partition_boundary_spec_end opt_tab_partition_boundary_spec_every?  
    | add_drop part_values_clause
    ;

opt_table_partition_exchange_validate 
    : (WITH | WITHOUT) VALIDATION
    ;

alter_table_partition_id_spec 
    : partition_colid
    | FOR LEFT_PAREN tab_partition_boundary_spec_val_list RIGHT_PAREN  
      /*
       * What we'd really want here is:
       *
       * FOR LEFT_PAREN RANK LEFT_PAREN numberic_only RIGHT_PAREN RIGHT_PAREN
       *
       * But we don't want to make RANK a reserved keyword. Also,
       * just replacing RANK with IDENT creates a conflict with this
       * a_expr_const rule:
       *
       * func_name paren_expr_list sconst
       *
       * I.e. after the parser has shifted "func_name LEFT_PAREN", it doesn't
       * know whether there's the sconst at the end, which implies an
       * a_expr_const, or not.
       *
       * To avoid that conflict, this rule (after FOR LEFT_PAREN) matches
       * exactly the a_expr_const rule except for the final sconst.
       * That way, the parser doesn't need to decide which one this is,
       * until it has shifted the whole thing. Then we check in the
       * code that func_name was RANK, and that the expr_list was a
       * numberic_only.
        */
    | FOR LEFT_PAREN func_name paren_expr_list RIGHT_PAREN
    ;

alter_table_partition_id_spec_with_opt_default 
    : PARTITION alter_table_partition_id_spec
    | DEFAULT PARTITION alter_table_partition_id_spec
    | DEFAULT PARTITION 
    ;

alter_table_partition_cmd
    : ADD_P PARTITION tab_partition_boundary_spec? opt_tab_partition_storage_attr?
      opt_tab_sub_partition_spec?

    | ADD_P DEFAULT PARTITION alter_table_partition_id_spec 
      tab_partition_boundary_spec? opt_tab_partition_storage_attr? opt_tab_sub_partition_spec? 

    | ADD_P PARTITION alter_table_partition_id_spec tab_partition_boundary_spec?
      opt_tab_partition_storage_attr? opt_tab_sub_partition_spec? 
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
    | RENAME alter_table_partition_id_spec_with_opt_default TO identifier  
    | SET SUBPARTITION TEMPLATE LEFT_PAREN tab_sub_partition_elem_list RIGHT_PAREN 
    | SET SUBPARTITION TEMPLATE LEFT_PAREN  RIGHT_PAREN 
    | SPLIT DEFAULT PARTITION tab_partition_boundary_spec_start
      tab_partition_boundary_spec_end opt_table_partition_split_into?

    | SPLIT alter_table_partition_id_spec_with_opt_default AT 
      LEFT_PAREN part_values_or_spec_list RIGHT_PAREN opt_table_partition_split_into?
    | TRUNCATE alter_table_partition_id_spec_with_opt_default opt_drop_behavior?
    ;

alter_rel_cmds 
    : alter_rel_cmd (COMMA alter_rel_cmd)*
    ;

/* Subcommands that are for ALTER TABLE or ALTER INDEX */
/* ALTER [TABLE|INDEX] <name> OWNER TO role_id */
alter_rel_cmd 
    : OWNER TO role_id

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
close_portal_stmt
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
copy_stmt
    : COPY BINARY? qualified_name paren_column_list? opt_oids?
      copy_from PROGRAM? copy_file_name copy_delimiter? opt_with? copy_opt_item*
      opt_single_row_error_handling? skip_external_partition?

    | COPY select_with_parens TO PROGRAM? copy_file_name opt_with?
      copy_opt_item*
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
    : sconst
    | STDIN
    | STDOUT
    ;

copy_opt_item
    : BINARY
    | OIDS
    | (DELIMITER | NULL_P | QUOTE | ESCAPE) AS? sconst
    | CSV
    | HEADER_P
    | FORCE QUOTE column_list
    | FORCE NOT NULL_P column_list
    | FILL MISSING FIELDS
    | ON SEGMENT
    ;

/* The following exist for backward compatibility */
opt_oids 
    : WITH OIDS
    ;

/* USING DELIMITERS kept for backward compatibility. 2002-06-15 */
copy_delimiter
    : USING? DELIMITERS sconst
    ;

/*****************************************************************************
 *
 *    QUERY :
 *        CREATE TABLE relname
 *
 *****************************************************************************/

create_stmt
    : CREATE opt_temp? TABLE qualified_name LEFT_PAREN table_element_list? RIGHT_PAREN
      opt_inherit? opt_with_def_oids? on_commit_option? opt_table_space? opt_distributed_by? 
      opt_tab_partition_by?
    ;

/*
 * Redundancy here is needed to avoid shift/reduce conflicts,
 * since TEMP is not a reserved word.  See also opt_tempTableName.
 *
 * NOTE: we accept both GLOBAL and LOCAL options; since we have no modules
 * the LOCAL keyword is really meaningless.
 */
opt_temp
    : (LOCAL | GLOBAL)? (TEMPORARY | TEMP)
    ;

table_element_list
    : table_element (COMMA table_element)*
    ;

table_element 
    : column_def
    | table_like_clause
    | table_constraint
    | column_reference_storage_directive
    ;

column_reference_storage_directive 
    : COLUMN colid ENCODING definition
    | DEFAULT COLUMN ENCODING definition
    ;

column_def
    :  colid typename_pg col_constraint* opt_storage_encoding?
    ;

col_constraint 
    : CONSTRAINT name col_constraint_elem
    | col_constraint_elem
    | constraint_attr
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
 * DEFAULT expression must be a_expr not a_expr to prevent shift/reduce
 * conflict on NOT (since NOT might start a subsequent NOT NULL constraint,
 * or be part of a_expr NOT LIKE or similar constructs).
 */
col_constraint_elem 
    : NOT NULL_P
    | NULL_P
    | UNIQUE with_out_definition? constraint_table_space?
    | PRIMARY KEY with_out_definition? constraint_table_space?
    | CHECK LEFT_PAREN a_expr RIGHT_PAREN
    | DEFAULT a_expr
    | REFERENCES qualified_name paren_column_list? key_match? key_actions?
    ;

/*
 * constraint_attr represents constraint attributes, which we parse as if
 * they were independent constraint clauses, in order to avoid shift/reduce
 * conflicts (since NOT might start either an independent NOT NULL clause
 * or an attribute).  parse_utilcmd.c is responsible for attaching the
 * attribute information to the preceding "real" constraint node, and for
 * complaining if attribute clauses appear in the wrong place or wrong
 * combinations.
 *
 * See also constraint_attr_spec, which can be used in places where
 * there is no parsing conflict.
 */
constraint_attr 
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
table_like_clause 
    : LIKE qualified_name table_list_option*
    ;

table_list_option 
    : (INCLUDING | EXCLUDING) DEFAULTS
    | (INCLUDING | EXCLUDING) CONSTRAINTS
    | (INCLUDING | EXCLUDING) INDEXES
    ;


/* constraint_elem specifies constraint syntax which is not embedded into
 *  a column definition. col_constraint_elem specifies the embedded form.
 * - thomas 1997-12-03
 */
table_constraint 
    : (CONSTRAINT name)? constraint_elem
    ;

constraint_elem 
    : CHECK LEFT_PAREN a_expr RIGHT_PAREN
    | (UNIQUE | PRIMARY KEY) paren_column_list with_out_definition? constraint_table_space?
    | FOREIGN KEY paren_column_list REFERENCES qualified_name
      paren_column_list? key_match? key_actions? constraint_attr_spec?
    ;

paren_column
    : LEFT_PAREN column_elem RIGHT_PAREN
    ;

paren_column_list
    : LEFT_PAREN column_list RIGHT_PAREN
    ;

column_list 
    : column_elem (COMMA column_elem)*
    ;

column_elem 
    : colid
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

opt_inherit 
    : INHERITS LEFT_PAREN qualified_name_list RIGHT_PAREN
    ;

/* WITH (options) is preferred, WITH OIDS and WITHOUT OIDS are legacy forms */
opt_with_def_oids 
    : WITH definition
    | (WITH | WITHOUT) OIDS
    ;

on_commit_option 
    : ON COMMIT DROP
    | ON COMMIT (DELETE_P | PRESERVE) ROWS
    ;

opt_table_space 
    : TABLESPACE name
    ;

constraint_table_space 
    : USING INDEX TABLESPACE name
    ;

distributed_by
    : DISTRIBUTED BY paren_column_list 
    | DISTRIBUTED RANDOMLY 
    ;

opt_distributed_by 
    : distributed_by
    ;

/* START PARTITION RULES */
tab_partition_column_enc_list 
    : column_reference_storage_directive+ 
    ;

opt_tab_partition_storage_attr
    : WITH definition (TABLESPACE name)? 
    | TABLESPACE name 
    ;

opt_tab_partition_spec 
    : LEFT_PAREN tab_partition_elem_list RIGHT_PAREN
    ;

opt_tab_sub_partition_spec 
    : LEFT_PAREN tab_sub_partition_elem_list RIGHT_PAREN 
    ;

tab_partition_elem_list 
    : tab_partition_elem (COMMA tab_partition_elem)*
    ;

tab_sub_partition_elem_list 
    : tab_sub_partition_elem (COMMA tab_sub_partition_elem)*
    ;

tab_part_val_no_paran 
    : a_expr_const 
    | CAST LEFT_PAREN tab_part_val AS typename_pg RIGHT_PAREN
    | tab_part_val_no_paran TYPECAST typename_pg
    | MINUS_SIGN tab_part_val_no_paran 
    ;

tab_part_val 
    : tab_part_val_no_paran 
    | LEFT_PAREN tab_part_val_no_paran RIGHT_PAREN 
    | LEFT_PAREN tab_part_val_no_paran RIGHT_PAREN TYPECAST typename_pg
    ; 
    

tab_partition_boundary_spec_val_list 
    : tab_part_val (COMMA tab_part_val)*
    ;

/* only optional for START and END in ALTER TABLE...MODIFY PARTITION */
opt_tab_partition_range_inclusive 
    : INCLUSIVE
    | EXCLUSIVE
    ;

tab_partition_boundary_spec_start 
    : START LEFT_PAREN tab_partition_boundary_spec_val_list? RIGHT_PAREN opt_tab_partition_range_inclusive?
    ;

tab_partition_boundary_spec_end
    : END_P LEFT_PAREN tab_partition_boundary_spec_val_list? RIGHT_PAREN opt_tab_partition_range_inclusive?
    ;

opt_tab_partition_boundary_spec_every 
    : EVERY LEFT_PAREN tab_partition_boundary_spec_val_list RIGHT_PAREN 
    ;

/* VALUES for LIST, start..end for RANGE. */
tab_partition_boundary_spec 
    : part_values_clause
    | tab_partition_boundary_spec_start tab_partition_boundary_spec_end?
      opt_tab_partition_boundary_spec_every?  
    | tab_partition_boundary_spec_end
      opt_tab_partition_boundary_spec_every?  
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
    : tab_partition_boundary_spec_val_list
    | part_values_clause
    ;

/* a "Partition Element" closely corresponds to a "Partition Declaration" */
tab_partition_elem 
    : (tab_partition_name_decl | tab_partition_default_name_decl) tab_partition_boundary_spec? 
      opt_tab_partition_storage_attr? tab_partition_column_enc_list? opt_tab_sub_partition_spec? 

    /* allow boundary spec for default partition in parser, but complain later */
    | tab_partition_elemOption 
    | column_reference_storage_directive
    ;

tab_sub_partition_elem 
    : (tab_sub_partition_name_decl | tab_sub_partition_default_name_decl) tab_partition_boundary_spec? 
      opt_tab_partition_storage_attr? tab_partition_column_enc_list? opt_tab_sub_partition_spec?

    /* allow boundary spec for default partition in parser, but complain later */
    | tab_partition_elemOption 
    | column_reference_storage_directive
    ;

tab_partition_elemOption
    : tab_partition_boundary_spec opt_tab_partition_storage_attr? tab_partition_column_enc_list?
       opt_tab_sub_partition_spec?
    ;

tab_partition_name_decl 
    : PARTITION partition_colid
    ;
tab_partition_default_name_decl 
    : DEFAULT PARTITION partition_colid
    ;

tab_sub_partition_name_decl 
    : SUBPARTITION partition_colid
    ;

tab_sub_partition_default_name_decl 
    : DEFAULT SUBPARTITION partition_colid
    ;

tab_partition_by_type
    : RANGE
    | HASH
    | LIST
    ;

opt_tab_partition_by
    : PARTITION BY tab_partition_by_type? paren_column_list opt_partitions_number?
      tab_sub_partition_by_list? opt_tab_partition_spec?
    ;

tab_sub_partition_by_list
    : tab_sub_partition_by (COMMA? tab_sub_partition_by)*
    ;

tab_sub_partition_template
    : SUBPARTITION TEMPLATE LEFT_PAREN tab_sub_partition_elem_list RIGHT_PAREN 
    ;

tab_sub_partition_by
    : SUBPARTITION BY tab_partition_by_type paren_column_list opt_partitions_number?
    | tab_sub_partition_template
    ;

opt_partitions_number
    : (PARTITIONS | SUBPARTITIONS) integer_only
    ;
/* END PARTITION RULES */

/*
 * Note: CREATE TABLE ... AS SELECT ... is just another spelling for
 * SELECT ... INTO.
 */
create_as_stmt 
    : CREATE opt_temp? TABLE create_as_target AS select_stmt opt_with_data? 
      opt_distributed_by? opt_tab_partition_by?
    ;

create_as_target
    : qualified_name opt_create_as? opt_with_def_oids? on_commit_option? opt_table_space?
    ;

opt_create_as 
    : LEFT_PAREN create_as_list RIGHT_PAREN
    ;

create_as_list
    : create_as_element (COMMA create_as_element)*
    ;

create_as_element 
    : colid
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
create_external_stmt
    : CREATE opt_writable? EXTERNAL WEB? opt_temp? TABLE qualified_name LEFT_PAREN ext_table_element_list? RIGHT_PAREN 
      ext_type_desc FORMAT sconst format_opt? ext_options_opt? ext_opt_encoding_list? 
      opt_single_row_error_handling? opt_distributed_by?
    ;

opt_writable
    : WRITABLE
    | READABLE
        ;

ext_type_desc
    : LOCATION LEFT_PAREN cdb_string_list RIGHT_PAREN ext_on_clause_item*
    | EXECUTE sconst ext_on_clause_item*
    ;

ext_on_clause_item 
    : ON ALL  
    | ON HOST sconst?
    | ON MASTER
    | ON SEGMENT? iconst
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
    : col_label EQUALS_OP def_arg
    | col_label EQUALS_OP paren_column_list
    ;

format_opt_item 
    : DELIMITER AS? sconst
    | (NULL_P | QUOTE | ESCAPE) AS? sconst
    | CSV
    | HEADER_P
    | FORCE (NOT NULL_P | QUOTE) column_list
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
    : col_label sconst
    ;

ext_table_element_list 
    : ext_table_element (COMMA ext_table_element)*
    ;

ext_table_element 
    : ext_column_def
    | table_like_clause
    ;

/* column def for ext table - doesn't have room for constraints */
ext_column_def 
    :  colid typename_pg
    ;
  
/*
 * Single row error handling SQL
 */
opt_single_row_error_handling 
    : opt_log_error_table? SEGMENT REJECT_P LIMIT iconst opt_sreh_limit_type?
    ;
  
opt_log_error_table 
    : LOG_P ERRORS INTO qualified_name
    | LOG_P ERRORS
    ;
  
opt_sreh_limit_type 
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
    : ENCODING EQUALS_OP? (sconst | iconst)
    ;

/*****************************************************************************
 *
 *    QUERY :
 *        CREATE SEQUENCE seqname
 *        ALTER SEQUENCE seqname
 *
 *****************************************************************************/
create_seq_stmt 
    : CREATE opt_temp? SEQUENCE qualified_name opt_seq_list?
    ;

alter_seq_stmt 
    : ALTER SEQUENCE qualified_name opt_seq_list?
    ;

opt_seq_list 
    : opt_seq_elem+
    ;

opt_seq_elem 
    : CACHE numberic_only
    | NO? CYCLE
    | NO CYCLE
    | INCREMENT BY? numberic_only
    | (MAXVALUE | MINVALUE) numberic_only
    | NO (MAXVALUE | MINVALUE)
    | OWNED BY any_name
    | (START | RESTART) opt_with? numberic_only
    ;

numberic_only 
    : float_only
    | integer_only
    ;

float_only
    : MINUS_SIGN? FCONST
    ;

integer_only
    : signed_iconst
    ;

/*****************************************************************************
 *
 *    QUERIES :
 *        CREATE PROCEDURAL LANGUAGE ...
 *        DROP PROCEDURAL LANGUAGE ...
 *
 *****************************************************************************/

create_p_lang_stmt 
    : CREATE TRUSTED? PROCEDURAL? LANGUAGE colid_or_sconst create_p_lang_stmtOption?
    ;

create_p_lang_stmtOption
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

drop_p_lang_stmt 
    : DROP PROCEDURAL? LANGUAGE (IF_P EXISTS)? colid_or_sconst opt_drop_behavior?
    ;

/*****************************************************************************
 *
 *     QUERY:
 *             CREATE FILESPACE filespace ( ... )
 *
 *****************************************************************************/

create_file_space_stmt 
    : CREATE FILESPACE name opt_owner? LEFT_PAREN file_space_seg_list RIGHT_PAREN 
    ;

file_space_seg_list
    : file_space_seg (COMMA file_space_seg)*
    ;

file_space_seg 
    : iconst SEMICOLON sconst
    ;

opt_owner 
    : OWNER name
    ;

/*****************************************************************************
 *
 *     QUERY:
 *             CREATE TABLESPACE tablespace FILESPACE filespace
 *
 *****************************************************************************/

create_table_space_stmt 
    : CREATE TABLESPACE name opt_owner? FILESPACE name
    ;

/*****************************************************************************
 *
 *    QUERY:
 *             CREATE EXTENSION extension
 *             [ WITH ] [ SCHEMA schema ] [ VERSION version ] [ FROM oldversion ]
 *
 *****************************************************************************/

create_extension_stmt 
    : CREATE EXTENSION (IF_P NOT EXISTS)? name opt_with? create_extension_opt_list?
    ;

create_extension_opt_list 
    : create_extension_opt_item+
    ;

create_extension_opt_item 
    : SCHEMA name
    | VERSION_P sconst
    | FROM sconst
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
    : TO sconst
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
    | CAST LEFT_PAREN typename_pg AS typename_pg RIGHT_PAREN
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

create_trig_stmt 
    : CREATE TRIGGER name trigger_action_time trigger_events ON
      qualified_name trigger_for_spec? 
      EXECUTE PROCEDURE func_name LEFT_PAREN trigger_func_args? RIGHT_PAREN

    | CREATE CONSTRAINT TRIGGER name AFTER trigger_events ON
      qualified_name opt_constr_from_table?
      constraint_attr_spec? FOR EACH ROW 
      EXECUTE PROCEDURE func_name LEFT_PAREN trigger_func_args? RIGHT_PAREN
    ;

trigger_action_time 
    : BEFORE
    | AFTER
    ;

trigger_events 
    : trigger_one_event (OR trigger_one_event)*
    ;

trigger_one_event 
    : INSERT
    | DELETE_P
    | UPDATE
    ;

trigger_for_spec 
    : FOR EACH? trigger_for_type
    ;

trigger_for_type 
    : ROW
    | STATEMENT
    ;

trigger_func_args 
    : trigger_func_arg (COMMA trigger_func_arg)*
    ;

trigger_func_arg 
    : ICONST
    | FCONST
    | sconst
    | BCONST
    | XCONST
    | colid
    ;

opt_constr_from_table 
    : FROM qualified_name
    ;

constraint_attr_spec 
    : constraint_deferrability_spec constraint_time_spec?
    | constraint_time_spec constraint_deferrability_spec?
    ;

constraint_deferrability_spec 
    : NOT? DEFERRABLE
    ;

constraint_time_spec 
    : INITIALLY (IMMEDIATE | DEFERRED)
    ;


drop_trig_stmt 
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

create_assert_stmt 
    : CREATE ASSERTION name CHECK LEFT_PAREN a_expr RIGHT_PAREN constraint_attr_spec?
    ;

drop_assert_stmt 
    : DROP ASSERTION name opt_drop_behavior?
    ;


/*****************************************************************************
 *
 *    QUERY :
 *        define (aggregate,operator,type)
 *
 *****************************************************************************/

define_stmt 
    : CREATE ORDERED? AGGREGATE func_name (aggr_args definition | old_aggr_definition)
    | CREATE OPERATOR any_operator definition
    | CREATE TYPE_P any_name definition
    | CREATE TYPE_P any_name
    | CREATE TYPE_P any_name AS LEFT_PAREN table_func_element_list RIGHT_PAREN
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
    : col_label EQUALS_OP def_arg
    | col_label
    ;

/* Note: any simple identifier will be returned as a type name! */
def_arg 
    :  func_type
      /* MPP-6685: allow unquoted ROW keyword as "orientation" option */
      | ROW
      | reserved_keyword
      | qual_all_Op
      | numberic_only
      | sconst

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
    :  identifier EQUALS_OP def_arg
    ;

enum_val_list 
    :  sconst (COMMA sconst)*
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

create_op_class_stmt 
    : CREATE OPERATOR CLASS any_name DEFAULT? FOR TYPE_P typename_pg
      USING access_method opt_opfamily? AS opclass_item_list
    ;

opclass_item_list 
    : opclass_item (COMMA opclass_item)*
    ;

opclass_item 
    : OPERATOR iconst any_operator oper_argtypes? RECHECK?
    | FUNCTION iconst func_name func_args
    | FUNCTION iconst paren_type_list func_name func_args
    | STORAGE typename_pg
    ;

opt_opfamily 
    :  FAMILY any_name
    ;

create_op_family_stmt 
    : CREATE OPERATOR FAMILY any_name USING access_method
    ;

alter_op_family_stmt   
    : ALTER OPERATOR FAMILY any_name USING access_method ADD_P opclass_item_list
    | ALTER OPERATOR FAMILY any_name USING access_method DROP opclass_drop_list
    ;

opclass_drop_list 
    : opclass_drop (COMMA opclass_drop)*
    ;

opclass_drop 
    : (OPERATOR | FUNCTION) iconst paren_type_list
    ;


drop_op_class_stmt 
    : DROP OPERATOR CLASS (IF_P EXISTS)? any_name USING access_method opt_drop_behavior?
    ;

drop_op_family_stmt 
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
drop_owned_stmt 
    : DROP OWNED BY name_list opt_drop_behavior?
    ;

reassign_owned_stmt 
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

drop_stmt 
    :  DROP drop_type (IF_P EXISTS)? any_name_list opt_drop_behavior?
    ;


drop_type 
    : TABLE
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
    :  colid attrs?
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

truncate_stmt 
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

comment_stmt 
    : COMMENT ON comment_stmtOption
    ;

comment_stmtOption
    : comment_option IS comment_text
    ;

comment_option
    : comment_type any_name
    | AGGREGATE func_name aggr_args
    | FUNCTION func_name func_args
    | OPERATOR any_operator oper_argtypes
    | CONSTRAINT name ON any_name
    | RULE name
    | (TRIGGER | RULE) name ON any_name
    | OPERATOR (CLASS | FAMILY) any_name USING access_method
    | LARGE_P OBJECT_P numberic_only
    | CAST LEFT_PAREN typename_pg AS typename_pg RIGHT_PAREN
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
    : sconst
    | NULL_P
    ;

/*****************************************************************************
 *
 *    QUERY:
 *      fetch/move
 *
 *****************************************************************************/

fetch_stmt 
    : FETCH (fetch_direction? (FROM | IN_P))? name
    ;

fetch_direction
    : NEXT
    | PRIOR
    | FIRST_P
    | LAST_P
    | ABSOLUTE_P signed_iconst
    | RELATIVE_P signed_iconst
    | signed_iconst
    | ALL
    | FORWARD
    | FORWARD signed_iconst
    | FORWARD ALL
    | BACKWARD
    | BACKWARD signed_iconst
    | BACKWARD ALL
    ;

/*****************************************************************************
 *
 * GRANT and REVOKE statements
 *
 *****************************************************************************/

grant_stmt
    : GRANT privileges ON privilege_target TO grantee_list
      opt_grant_grant_option?
    ;

revoke_stmt 
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
    | DELETE_P
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
    : role_id
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

grant_role_stmt
    : GRANT privilege_list TO name_list opt_grant_admin_option? opt_granted_by?
    ;

revoke_role_stmt
    : REVOKE (ADMIN OPTION FOR)? privilege_list FROM name_list opt_granted_by? opt_drop_behavior?
    ;

opt_grant_admin_option
    : WITH ADMIN OPTION
    ;

opt_granted_by
    : GRANTED BY role_id
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

index_stmt
    : CREATE UNIQUE? INDEX index_name
      ON qualified_name (USING access_method)? LEFT_PAREN index_params RIGHT_PAREN
      with_out_definition? opt_table_space? where_clause?
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
    : colid opt_class? opt_asc_desc? opt_nulls_order?
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

create_function_stmt
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
 * Ideally param_name should be colid, but that causes too many conflicts.
 */
param_name
    : type_function_name
    ;

func_return
    : func_type
    ;

/*
 * We would like to make the %TYPE productions here be colid attrs etc,
 * but that causes reduce/reduce conflicts.  type_function_name
 * is next best choice.
 */
func_type
    : SETOF? typename_pg
    | TABLE LEFT_PAREN func_type_table_option_list? RIGHT_PAREN
    ;

func_type_table_option_list
    : func_type_table_option (COMMA func_type_table_option)*
    ;

func_type_table_option
    : type_function_name typename_pg
    | LIKE name
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
    | EXTERNAL? SECURITY (DEFINER | INVOKER)
    | COST numberic_only
    | ROWS numberic_only
    | set_reset_clause
    | NO SQL
    | CONTAINS SQL
    | READS SQL DATA_P
    | MODIFIES SQL DATA_P
    ;

createfunc_opt_item
    : AS func_as
    | LANGUAGE colid_or_sconst
    | common_func_opt_item
    ;

func_as
    : sconst (COMMA sconst)?
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

remove_func_stmt
    : DROP FUNCTION (IF_P EXISTS)? func_name func_args opt_drop_behavior?
    ;

remove_aggr_stmt
    : DROP AGGREGATE (IF_P EXISTS)? func_name aggr_args opt_drop_behavior?
    ;

remove_oper_stmt
    : DROP OPERATOR (IF_P EXISTS)? any_operator oper_argtypes opt_drop_behavior?
    ;

oper_argtypes
    : LEFT_PAREN typename_pg (COMMA typename_pg)? RIGHT_PAREN
    | LEFT_PAREN NONE COMMA typename_pg RIGHT_PAREN          /* left unary */
    | LEFT_PAREN typename_pg COMMA NONE RIGHT_PAREN          /* right unary */
    ;

any_operator
    : all_Op
    | colid PERIOD any_operator
    ;


/*****************************************************************************
 *
 *    DO <anonymous code block> [ LANGUAGE language ]
 *
 * We use a DefElem list for future extensibility, and to allow flexibility
 * in the clause order.
 *
 *****************************************************************************/

do_stmt
    : DO dostmt_opt_item+
    ;

dostmt_opt_item
    : LANGUAGE? colid_or_sconst 
    ;


/*****************************************************************************
 *
 *    CREATE CAST / DROP CAST
 *
 *****************************************************************************/

create_cast_stmt
    : CREATE CAST LEFT_PAREN typename_pg AS typename_pg RIGHT_PAREN WITH FUNCTION 
      function_with_argtypes? cast_context?
    ;

cast_context
    : AS IMPLICIT_P
    | AS ASSIGNMENT
    ;


drop_cast_stmt
    : DROP CAST (IF_P EXISTS)? LEFT_PAREN typename_pg AS typename_pg RIGHT_PAREN opt_drop_behavior?
    ;


/*****************************************************************************
 *
 *    QUERY:
 *
 *    REINDEX type <name> [FORCE]
 *
 * FORCE no longer does anything, but we accept it for backwards compatibility
 *****************************************************************************/

reindex_stmt
    : REINDEX (INDEX | TABLE | SYSTEM_P | DATABASE) qualified_name FORCE?
    ;


/*
 * ALTER TYPE ... SET DEFAULT ENCODING
 *
 * Used to set storage parameter defaults for types.
 */
alter_type_stmt
    : ALTER TYPE_P simple_typename SET DEFAULT ENCODING definition
    ;

/*****************************************************************************
 *
 * ALTER THING name RENAME TO newname
 *
 *****************************************************************************/

rename_stmt
    : ALTER AGGREGATE func_name aggr_args RENAME TO name
    | ALTER CONVERSION_P any_name RENAME TO name
    | ALTER DATABASE database_name RENAME TO database_name
    | ALTER FILESPACE name RENAME TO name
    | ALTER FUNCTION function_with_argtypes RENAME TO name
    | ALTER GROUP_P role_id RENAME TO role_id
    | ALTER PROCEDURAL? LANGUAGE name RENAME TO name
    | ALTER OPERATOR (CLASS | FAMILY) any_name USING access_method RENAME TO name
    | ALTER SCHEMA name RENAME TO name
    | ALTER (TABLE | SEQUENCE | VIEW | INDEX) relation_expr RENAME TO name
    | ALTER TABLE relation_expr RENAME opt_column? name TO name
    | ALTER TRIGGER name ON relation_expr RENAME TO name
    | ALTER (ROLE | USER) role_id RENAME TO role_id
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
    | ALTER TYPE_P simple_typename SET SCHEMA name
    ;

/*****************************************************************************
 *
 * ALTER THING name OWNER TO newname
 *
 *****************************************************************************/

alter_owner_stmt
    : ALTER AGGREGATE func_name aggr_args OWNER TO role_id
    | ALTER (CONVERSION_P | DOMAIN_P) any_name OWNER TO role_id
    | ALTER (DATABASE | FILESPACE | SCHEMA | TABLESPACE | PROTOCOL) name OWNER TO role_id
    | ALTER FUNCTION function_with_argtypes OWNER TO role_id
    | ALTER PROCEDURAL? LANGUAGE name OWNER TO role_id
    | ALTER OPERATOR any_operator oper_argtypes OWNER TO role_id
    | ALTER OPERATOR (CLASS | FAMILY) any_name USING access_method OWNER TO role_id
    | ALTER TYPE_P simple_typename OWNER TO role_id
    | ALTER TEXT_P SEARCH (DICTIONARY | CONFIGURATION) any_name OWNER TO role_id
    ;


/*****************************************************************************
 *
 *    QUERY:  Define Rewrite Rule
 *
 *****************************************************************************/

rule_stmt
    : CREATE opt_or_replace? RULE name AS
      ON event TO qualified_name where_clause?
      DO opt_instead? rule_action_list
    ;

rule_action_list
    : NOTHING
    | rule_action_stmt
    | LEFT_PAREN rule_action_multi? RIGHT_PAREN
    ;

/* the thrashing around here is to discard "empty" statements... */
rule_action_multi
    : rule_action_stmt (SEMICOLON rule_action_stmt)*
    ;

rule_action_stmt
    : select_stmt 
    | insert_stmt
    | update_stmt
    | delete_stmt
    | notify_stmt
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


drop_rule_stmt
    : DROP RULE (IF_P EXISTS)? name ON qualified_name opt_drop_behavior?
    ;


/*****************************************************************************
 *
 *    QUERY:
 *        NOTIFY <qualified_name> can appear both in rule bodies and
 *        as a query-level command
 *
 *****************************************************************************/

notify_stmt
    : NOTIFY colid
    ;

listen_stmt
    : LISTEN colid
    ;

unlisten_stmt
    : UNLISTEN colid
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

transaction_stmt
    : (ABORT_P | COMMIT | END_P | ROLLBACK) opt_transaction?
    | BEGIN_P opt_transaction? transaction_mode_list?
    | START TRANSACTION transaction_mode_list?
    | SAVEPOINT colid
    | RELEASE SAVEPOINT? colid
    | ROLLBACK opt_transaction? TO SAVEPOINT? colid
    | PREPARE TRANSACTION sconst
    | (COMMIT | ROLLBACK) PREPARED sconst
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

view_stmt
    : CREATE (OR REPLACE)? opt_temp? VIEW qualified_name paren_column_list? AS select_stmt opt_check_option?
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

load_stmt
    : LOAD file_name
    ;


/*****************************************************************************
 *
 *    CREATE DATABASE
 *
 *****************************************************************************/

createdb_stmt
    : CREATE DATABASE database_name opt_with? createdb_opt_item*
    ;

createdb_opt_item
    : TABLESPACE EQUALS_OP? (name | DEFAULT)
    | LOCATION EQUALS_OP? (sconst | DEFAULT)
    | TEMPLATE EQUALS_OP? (name | DEFAULT)
    | ENCODING EQUALS_OP? (sconst | iconst | DEFAULT)
    | CONNECTION LIMIT EQUALS_OP? signed_iconst
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
    : ALTER DATABASE database_name set_reset_clause
    ;

alterdb_opt_item
    : CONNECTION LIMIT EQUALS_OP? signed_iconst
    ;


/*****************************************************************************
 *
 *    DROP DATABASE [ IF EXISTS ]
 *
 * This is implicitly CASCADE, no need for drop behavior
 *****************************************************************************/

dropdb_stmt
    : DROP DATABASE (IF_P EXISTS)? database_name
    ;


/*****************************************************************************
 *
 * Manipulate a domain
 *
 *****************************************************************************/

create_domain_stmt
    : CREATE DOMAIN_P any_name AS? typename_pg col_constraint*
    ;

/* ALTER DOMAIN <domain> {SET DEFAULT <expr>|DROP DEFAULT} */
alter_domain_stmt
    : ALTER DOMAIN_P any_name alter_domain_option
    ;

alter_domain_option
    : alter_column_default
    | (DROP | SET) NOT NULL_P 
    | ADD_P table_constraint
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

create_conversion_stmt
    : CREATE DEFAULT? CONVERSION_P any_name FOR sconst
      TO sconst FROM any_name
    ;

/*****************************************************************************
 *
 *    QUERY:
 *        CLUSTER <qualified_name> [ USING <index_name> ]
 *        CLUSTER
 *        CLUSTER <index_name> ON <qualified_name> (for pre-8.3)
 *
 *****************************************************************************/

cluster_stmt
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

vacuum_stmt
    : VACUUM FULL? FREEZE? VERBOSE? qualified_name?
    | VACUUM FULL? FREEZE? VERBOSE? analyze_stmt
    ;

analyze_stmt
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

explain_stmt
    : EXPLAIN analyze_keyword? VERBOSE? DXL? FORCE? explainable_stmt
    ;

explainable_stmt
    : select_stmt
    | insert_stmt
    | update_stmt
    | delete_stmt
    | declare_cursor_stmt
    | execute_stmt
    | create_as_stmt
    | create_stmt
    ;

/*****************************************************************************
 *
 *    QUERY:
 *        PREPARE <plan_name> [(args, ...)] AS <query>
 *
 *****************************************************************************/

prepare_stmt
    : PREPARE name paren_type_list? AS preparable_stmt
    ;

paren_type_list
    : LEFT_PAREN type_list RIGHT_PAREN
    ;

preparable_stmt
    : select_stmt
    | insert_stmt
    | update_stmt
    | delete_stmt          /* by default all are $$=$1 */
    ;

/*****************************************************************************
 *
 * EXECUTE <plan_name> [(params, ...)]
 * CREATE TABLE <name> AS EXECUTE <plan_name> [(params, ...)]
 *
 *****************************************************************************/

execute_stmt
    : (CREATE opt_temp? TABLE create_as_target AS)? EXECUTE name paren_expr_list?
    ;

/*****************************************************************************
 *
 *    QUERY:
 *        DEALLOCATE [PREPARE] <plan_name>
 *
 *****************************************************************************/

deallocate_stmt
    : DEALLOCATE PREPARE? (name | ALL)
    ;

cdb_string_list
    : cdb_string (COMMA cdb_string)*
    ;


cdb_string
    : sconst
    ;

/*****************************************************************************
 *
 *    QUERY:
 *        INSERT STATEMENTS
 *
 *****************************************************************************/

insert_stmt
    : INSERT INTO qualified_name paren_column_list? insert_rest returning_clause?
    ;

insert_rest
    : select_stmt
    | VALUES LEFT_PAREN insert_column_list RIGHT_PAREN
    | DEFAULT VALUES
    ;

insert_column_list
    : insert_column_item (COMMA insert_column_item)*
    ;

insert_column_item
    : colid indirection?
    | DEFAULT
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

delete_stmt
    : DELETE_P FROM ONLY? relation_expr_opt_alias
      (USING from_list)? where_or_current_clause? returning_clause?
    ;


/*****************************************************************************
 *
 *    QUERY:
 *        LOCK TABLE
 *
 *****************************************************************************/

lock_stmt
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
 *        update_stmt (UPDATE)
 *
 *****************************************************************************/

update_stmt
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
    : colid indirection?
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
declare_cursor_stmt
    : DECLARE name cursor_option* CURSOR opt_hold? FOR select_stmt
    ;

cursor_option
    : (NO? SCROLL | BINARY | INSENSITIVE)
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
 * The rule returns either a single select_stmt node or a tree of them,
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
 * and being careful to use select_with_parens, never LEFT_PAREN select_stmt RIGHT_PAREN,
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
 * In non-expression contexts, we use select_stmt which can represent a SELECT
 * with or without outer parentheses.
 */

select_stmt
    : subquery_basic_elements subquery_operation_part*
    ;
    
subquery_basic_elements
    : select_no_parens
    | select_with_parens
    ;

subquery_operation_part
    : (UNION | INTERSECT | EXCEPT) ALL? subquery_basic_elements
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
    : LEFT_PAREN select_stmt RIGHT_PAREN
    ;

select_no_parens
    : with_clause? simple_select sort_clause? select_limit? for_locking_clause?
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
 * NOTE: only the leftmost component select_stmt should have INTO.
 * However, this is not checked by the grammar; parse analysis must check it.
 */
simple_select
    : SELECT opt_distinct? target_list
      into_clause? from_clause? where_clause? group_clause? having_clause? window_clause?
    | values_clause
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
    : cte_name paren_name_list? AS select_with_parens
    ;

into_clause
    : INTO opt_tempTableName?
    ;

/*
 * Redundancy here is needed to avoid shift/reduce conflicts,
 * since TEMP is not a reserved word.  See also opt_temp.
 */
opt_tempTableName
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
    : signed_iconst
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

table_ref
    : relation_expr (AS? colid paren_name_list?)? # table_ref_normal
    | func_table (AS? colid paren_name_list?)?    # table_ref_func1
    | func_table AS? colid? LEFT_PAREN table_func_element_list RIGHT_PAREN # table_ref_func2
    | select_with_parens (AS? colid paren_name_list?)?  # table_ref_subquery
    | LEFT_PAREN table_ref RIGHT_PAREN (AS? colid paren_name_list?)?    # table_ref_parens
    | table_ref NATURAL? join_type? JOIN table_ref join_qual?   # table_ref_joinable
    ;

join_type
    : (FULL | LEFT | RIGHT) OUTER_P?
    | INNER_P
    | CROSS
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
    : relation_expr (AS? colid)?
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


table_func_element_list
    : table_func_element (COMMA table_func_element)*
    ;

table_func_element
    : colid typename_pg
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

typename_pg
    : simple_typename opt_array_bounds*
    | SETOF simple_typename opt_array_bounds*
    | simple_typename ARRAY LEFT_BRACKET iconst RIGHT_BRACKET
    | SETOF simple_typename ARRAY LEFT_BRACKET iconst RIGHT_BRACKET
    ;

opt_array_bounds
    : LEFT_BRACKET RIGHT_BRACKET
    | LEFT_BRACKET iconst RIGHT_BRACKET
    ;

simple_typename
    : generic_type
    | numeric
    | bit
    | multi_character
    | const_datatime
    | const_interval paren_iconst? opt_interval?
    ;

/* We have a separate const_typename to allow defaulting fixed-length
 * types such as CHAR() and BIT() to an unspecified length.
 * SQL9x requires that these default to a length of one, but this
 * makes no sense for constructs like CHAR 'hi' and BIT '0101',
 * where there is an obvious better choice to make.
 * Note that const_interval is not included here since it must
 * be pushed up higher in the rules to accomodate the postfix
 * options (e.g. INTERVAL '1' YEAR). Likewise, we have to handle
 * the generic-type-name case in AExprConst to avoid premature
 * reduce/reduce conflicts against function names.
 */
const_typename
    : numeric
    | const_bit
    | const_character
    | const_datatime 
    ;

/*
 * generic_type covers all type names that don't have special syntax mandated
 * by the standard, including qualified names.  We also allow type modifiers.
 * To avoid parsing conflicts against function invocations, the modifiers
 * have to be shown as expr_list here, but parse analysis will only accept
 * constants for them.
 */
generic_type
    : type_function_name attrs? paren_expr_list?
    ;

/*
 * SQL92 numeric data types
 */
numeric
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
bit
    : bit_with_length
    | bit_without_length
    ;

/* const_bit is like Bit except "BIT" defaults to unspecified length */
/* See notes for const_character, which addresses same issue for "CHAR" */
const_bit
    : bit_with_length
    | bit_without_length
    ;

bit_with_length
    : BIT VARYING? paren_expr_list
    ;

bit_without_length
    : BIT VARYING?
    ;


/*
 * SQL92 character data types
 * The following implements CHAR() and VARCHAR().
 */
multi_character
    : character_with_length
    | character_without_length
    ;

const_character
    : character_with_length
    | character_without_length
    ;

character_with_length
    : character paren_iconst opt_charset?
    ;

character_without_length
    : character opt_charset?
    ;

character
    : (CHARACTER | CHAR_P | NCHAR) VARYING?
    | VARCHAR
    | NATIONAL (CHARACTER | CHAR_P) VARYING?
    ;

opt_charset
    : CHARACTER SET colid
    ;

/*
 * SQL92 date/time types
 */
const_datatime
    : (TIMESTAMP | TIME) paren_iconst? opt_timezone?
    ;

const_interval
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
 * a_expr is a subset that must be used in some places to avoid shift/reduce
 * conflicts.  For example, we can't do BETWEEN as "BETWEEN a_expr AND a_expr"
 * because that use of AND conflicts with AND as a boolean operator.  So,
 * a_expr is used in BETWEEN and we remove boolean keywords from a_expr.
 *
 * Note that LEFT_PAREN a_expr RIGHT_PAREN is a a_expr, so an unrestricted expression can
 * always be used by surrounding it with parens.
 *
 * c_expr is all the productions that are common to a_expr and a_expr;
 * it's factored out just to eliminate redundant coding.
 */
a_expr
    : logical_expr
    ;
 
logical_expr
    : multiset_expr (IS NOT? 
                     (NULL_P 
                     | DISTINCT FROM logical_expr 
                     | OF LEFT_PAREN type_list RIGHT_PAREN 
                     | DOCUMENT_P 
                     | TRUE_P 
                     | FALSE_P 
                     | UNKNOWN))?
    | multiset_expr (ISNULL | NOTNULL)
    | NOT logical_expr
    | logical_expr AND logical_expr
    | logical_expr OR logical_expr
    ;

multiset_expr
    : relational_expr
    ;

relational_expr
    : relational_expr relational_op relational_expr
    | compound_expr
    ;

relational_op
    : (LESS_THAN_OP | GREATER_THAN_OP) EQUALS_OP?
    | EQUALS_OP
    | NOT_EQUAL_OP
    ;

compound_expr
    : concatenation 
      (NOT? (IN_P in_expr 
            | BETWEEN (ASYMMETRIC? | SYMMETRIC) between_elements 
            | (LIKE | ILIKE | SIMILAR TO) concatenation (ESCAPE a_expr)?))?
    | concatenation_list OVERLAPS concatenation_list
    ;
    
between_elements
    : concatenation AND concatenation
    ;

concatenation_list
    : LEFT_PAREN concatenation (COMMA concatenation)* RIGHT_PAREN
    ;

concatenation
    : model_expr (AT TIME ZONE concatenation)?
    | concatenation CARRET_OPERATOR_PART concatenation
    | concatenation op=(ASTERISK | SOLIDUS | PERCENT_SIGN) concatenation
    | concatenation op=(PLUS_SIGN | MINUS_SIGN) concatenation
    | concatenation BAR BAR concatenation
    ;

model_expr
    : unary_expr
    ;

unary_expr
    : c_expr
    | unary_expr TYPECAST typename_pg
    | (MINUS_SIGN | PLUS_SIGN) unary_expr
    ;

c_expr
    : LEFT_PAREN a_expr RIGHT_PAREN indirection?
    | UNIQUE? select_with_parens indirection?
    | (EXISTS | ARRAY) select_stmt
    | columnref
    | func_expr (OVER window_specification)?

    | a_expr_const
    | PARAM indirection?
    | case_expr
    | decode_expr

    | ARRAY array_expr
    | TABLE '(' table_value_select_clause ')'
    | row
    ;

scatter_clause
    : SCATTER (RANDOMLY | BY expr_list)
    ;

table_value_select_clause 
    : select_stmt scatter_clause?
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
    | CAST LEFT_PAREN a_expr AS typename_pg RIGHT_PAREN
    | EXTRACT LEFT_PAREN extract_list? RIGHT_PAREN
    | OVERLAY LEFT_PAREN overlay_list RIGHT_PAREN
    | POSITION LEFT_PAREN position_list? RIGHT_PAREN
    | SUBSTRING LEFT_PAREN substr_list? RIGHT_PAREN
    | TREAT LEFT_PAREN a_expr AS typename_pg RIGHT_PAREN
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
    | XMLELEMENT LEFT_PAREN NAME_P col_label RIGHT_PAREN
    | XMLELEMENT LEFT_PAREN NAME_P col_label COMMA xml_attributes RIGHT_PAREN
    | XMLELEMENT LEFT_PAREN NAME_P col_label COMMA expr_list RIGHT_PAREN
    | XMLELEMENT LEFT_PAREN NAME_P col_label COMMA xml_attributes COMMA expr_list RIGHT_PAREN
    | XMLEXISTS LEFT_PAREN c_expr xmlexists_argument RIGHT_PAREN
    | XMLEXISTS LEFT_PAREN a_expr COMMA a_expr RIGHT_PAREN
    | XMLFOREST LEFT_PAREN xml_attribute_list RIGHT_PAREN
    | XMLPARSE LEFT_PAREN document_or_content a_expr xml_whitespace_option? RIGHT_PAREN
    | XMLPI LEFT_PAREN NAME_P col_label RIGHT_PAREN
    | XMLPI LEFT_PAREN NAME_P col_label COMMA a_expr RIGHT_PAREN
    | XMLROOT LEFT_PAREN a_expr COMMA xml_root_version opt_xml_root_standalone? RIGHT_PAREN
    | XMLSERIALIZE LEFT_PAREN document_or_content a_expr AS simple_typename RIGHT_PAREN
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
    : a_expr (AS col_label)?
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
    : colid AS window_specification
    ;

window_specification
    : LEFT_PAREN colid? opt_partition_clause? sort_clause? window_frame_clause? RIGHT_PAREN
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

op_signs
    : OP_CHARS+
    ;

all_Op
    : op_signs
    ;

qual_Op
    : op_signs
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
    : typename_pg (COMMA typename_pg)* 
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
    : identifier
    | YEAR_P
    | MONTH_P 
    | DAY_P   
    | HOUR_P 
    | MINUTE_P   
    | SECOND_P   
    | DELIMITED_STR   
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

/* position_list uses a_expr not a_expr to avoid conflict with general IN */

position_list
    : a_expr IN_P a_expr
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
 * columnref starts with relation_name not colid, so that OLD and NEW
 * references can be accepted.  Note that when there are more than two
 * dotted names, the first name is not actually a relation name...
 */
columnref
    : relation_name indirection?
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
    : (columnref | a_expr) (AS? col_label)? # target_el_normal
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
    | ASTERISK  # target_el_asterisk
    ;


/*****************************************************************************
 *
 *  Names and constants
 *
 *****************************************************************************/

relation_name
    : special_rule_relation
    | colid
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
    : colid
    ;

cte_name 
    : colid
    ;

database_name
    : colid
    ;

access_method
    : colid
    ;

attr_name:  col_label;

index_name: colid;

file_name:  sconst;

/*
 * The production for a qualified func_name has to exactly match the
 * production for a qualified columnref, because we cannot tell which we
 * are parsing until we see what comes after it (LEFT_PAREN or sconst for a func_name,
 * anything else for a columnref).  Therefore we allow 'indirection' which
 * may contain subscripts, and reject that case in the C code.  (If we
 * ever implement SQL99-like methods, such syntax may actually become legal!)
 */
func_name
    : type_function_name
    | relation_name indirection?
    ;


/*
 * Constants
 */
a_expr_const
    : iconst
    | FCONST
    | sconst
    | BCONST
    | XCONST
    | func_name paren_expr_list? sconst
    | const_typename sconst
    | const_interval paren_iconst? sconst opt_interval?
    | TRUE_P
    | FALSE_P
    | NULL_P
    ;

iconst
    : ICONST
    ;

sconst
    : SCONST
    | DELIMITED_STR
    | CHAR_STRING
    ;

role_id
    : colid
    ;

queue_id
    : colid
    ;

signed_iconst
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
colid
    : COLON? identifier
    | unreserved_keyword
    | SCONST
//    | col_name_keyword 
    ;

/* Type/function identifier --- names that can be type or function names.
 */
type_function_name
    : identifier
    | unreserved_keyword
    | type_func_name_keyword
    ;

/* Column label --- allowed labels in "AS" clauses.
 * This presently includes *all* Postgres keywords.
 */
col_label
    : identifier
    | unreserved_keyword     
    | col_name_keyword
    | type_func_name_keyword
    | reserved_keyword   
    | SCONST
    ;

identifier
    : REGULAR_ID
    | CHAR_STRING
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
      | PUBLIC
    ;

keywords_ok_in_alias_no_as
    : partition_ident_key_word
    | TABLESPACE
    | ADD_P
    | ALTER
    | AT
    ;

partition_colid
    : partition_ident_key_word
    | identifier
    ;

partition_ident_key_word
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
 * because they can be followed by LEFT_PAREN in typename_pg productions, which
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

/* Reserved keyword --- these keywords are usable only as a col_label.
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


special_rule_relation
    : OLD 
    | NEW 
    ;

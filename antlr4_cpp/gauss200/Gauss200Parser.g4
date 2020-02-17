parser grammar Gauss200Parser;

options {
    tokenVocab = Gauss200Lexer;
}

expression_list
    : expression (COMMA expression)*
    ;

// define expression reference to greenplum
expression
    : logical_expr
    ;

logical_expr
    : multiset_expr (IS_GS NOT_GS? 
                     (NULL_GS | DISTINCT_GS FROM_GS logical_expr ))?
    | multiset_expr (ISNULL_GS | NOTNULL_GS)
    | NOT_GS logical_expr
    | logical_expr AND_GS logical_expr
    | logical_expr OR_GS logical_expr
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
      (NOT_GS? (IN_GS in_expr 
            | BETWEEN_GS (ASYMMETRIC_GS? | SYMMETRIC_GS) between_elements 
            | (LIKE_GS | ILIKE_GS | SIMILAR_GS TO_GS) concatenation (ESCAPE_GS expression)?))?
    | concatenation_list OVERLAPS_GS concatenation_list
    ;
    
between_elements
    : concatenation AND_GS concatenation
    ;

concatenation_list
    : LEFT_PAREN concatenation (COMMA concatenation)* RIGHT_PAREN
    ;

concatenation
    : model_expr (AT_GS TIME_GS ZONE_GS concatenation)?
    | concatenation CARRET_OPERATOR_PART concatenation
    | concatenation op=(ASTERISK | SOLIDUS | PERCENT_SIGN) concatenation
    | concatenation op=(PLUS_SIGN | MINUS_SIGN) concatenation
    | concatenation BAR BAR concatenation
    ;

model_expr
    : unary_expr
    ;

unary_expr
    : (MINUS_SIGN | PLUS_SIGN) unary_expr
    | unary_expr TYPECAST typename_gs   // 44::bit(4)::integer, array[1, 2, 3]::int[]
    | case_expr
    | function_expr
    | quantified_expression
    | atom
    | ARRAY_GS array_expr
    ;

function_expr
    : simple_function
    | // functions given from documentation
    ;

atom
    : general_element
    | constant
    | LEFT_PAREN subquery RIGHT_PAREN
    | LEFT_PAREN expression_list RIGHT_PAREN
    ;

// normal identifier, like a.b.c.d
general_element
    : general_element_part (PERIOD general_element_part)*
    ;

general_element_part
    : identifier (PERIOD identifier)*
    ;

identifier
    : regular_id
    | CHAR_STRING
    ;

// this could be name of any, including function and typename
regular_id_common
    : REGULAR_ID
    | reserved_keywords_normal
    | reserved_keywords_can_be_name
    | nonreserved_keywords_normal
    ;

// regular_id could be name of any, but some nonreserved keywords can not be
// name of function and typename
regular_id
    : regular_id_common
    | nonreserved_keywords_can_not_be_name
    ;

case_expr
    : CASE_GS when_clause+ case_default? END_GS
    ;

when_clause
    : WHEN_GS expression THEN_GS expression
    ;

case_default
    : ELSE_GS expression
    ;

quantified_expression
    : (SOME_GS | EXISTS_GS | ALL_GS | ANY_GS) (LEFT_PAREN subquery RIGHT_PAREN | LEFT_PAREN expression RIGHT_PAREN)
    ;

array_expr
    : LEFT_BRACKET expression_list? RIGHT_BRACKET
    | LEFT_BRACKET array_expr_list RIGHT_BRACKET
    ;

array_expr_list
    : array_expr (COMMA array_expr)*
    ;


// reserved keywords;
reserved_keywords_normal
    : ALL_GS
    | ANALYSE_GS
    | ANALYZE_GS
    | AND_GS
    | ANY_GS
    | ARRAY_GS
    | ASC_GS
    | ASYMMETRIC_GS
    | AS_GS
    | AUTHID_GS
    | BOTH_GS
    | BUCKETS_GS
    | CASE_GS
    | CAST_GS
    | CHECK_GS
    | COLLATE_GS
    | COLUMN_GS
    | CONSTRAINT_GS
    | CREATE_GS
    | CURRENT_CATALOG_GS
    | CURRENT_DATE_GS
    | CURRENT_ROLE_GS
    | CURRENT_TIMESTAMP_GS
    | CURRENT_TIME_GS
    | CURRENT_USER_GS
    | DEFAULT_GS
    | DEFERRABLE_GS
    | DESC_GS
    | DISTINCT_GS
    | DO_GS
    | ELSE_GS
    | END_GS
    | EXCEPT_GS
    | FALSE_GS
    | FETCH_GS
    | FOREIGN_GS
    | FOR_GS
    | FROM_GS
    | FUNCTION_GS
    | GRANT_GS
    | GROUP_GS
    | HAVING_GS
    | INITIALLY_GS
    | INTERSECT_GS
    | INTO_GS
    | IN_GS
    | IS_GS
    | LEADING_GS
    | LESS_GS
    | LIMIT_GS
    | LOCALTIMESTAMP_GS
    | LOCALTIME_GS
    | MAXVALUE_GS
    | MINUS_GS
    | MODIFY_GS
    | NLSSORT_GS
    | NOT_GS
    | NULL_GS
    | OFFSET_GS
    | ONLY_GS
    | ON_GS
    | ORDER_GS
    | OR_GS
    | PERFORMANCE_GS
    | PLACING_GS
    | PRIMARY_GS
    | PROCEDURE_GS
    | REFERENCES_GS
    | REJECT_GS
    | RETURNING_GS
    | RETURN_GS
    | SELECT_GS
    | SESSION_USER_GS
    | SOME_GS
    | SPLIT_GS
    | SYMMETRIC_GS
    | SYSDATE_GS
    | TABLE_GS
    | THEN_GS
    | TO_GS
    | TRAILING_GS
    | TRUE_GS
    | UNION_GS
    | UNIQUE_GS
    | USER_GS
    | USING_GS
    | VARIADIC_GS
    | WHEN_GS
    | WHERE_GS
    | WINDOW_GS
    | WITH_GS
    ;

// reserved keywords can be name of function or type;
reserved_keywords_can_be_name
    : AUTHORIZATION_GS
    | BINARY_GS
    | COLLATION_GS
    | CONCURRENTLY_GS
    | CROSS_GS
    | CURRENT_SCHEMA_GS
    | FREEZE_GS
    | FULL_GS
    | ILIKE_GS
    | INNER_GS
    | ISNULL_GS
    | JOIN_GS
    | LEFT_GS
    | LIKE_GS
    | NATURAL_GS
    | NOTNULL_GS
    | OUTER_GS
    | OVERLAPS_GS
    | OVER_GS
    | RIGHT_GS
    | SIMILAR_GS
    | VERBOSE_GS
    ;

// nonreserved keywords;
nonreserved_keywords_normal
    : ABORT_GS
    | ABSOLUTE_GS
    | ACCESS_GS
    | ACCOUNT_GS
    | ACTION_GS
    | ADD_GS
    | ADMIN_GS
    | AFTER_GS
    | AGGREGATE_GS
    | ALSO_GS
    | ALTER_GS
    | ALWAYS_GS
    | APP_GS
    | ASSERTION_GS
    | ASSIGNMENT_GS
    | ATTRIBUTE_GS
    | AT_GS
    | AUTOEXTEND_GS
    | AUTOMAPPED_GS
    | BACKWARD_GS
    | BARRIER_GS
    | BEFORE_GS
    | BEGIN_GS
    | BLOB_GS
    | BY_GS
    | CACHE_GS
    | CALLED_GS
    | CALL_GS
    | CASCADED_GS
    | CASCADE_GS
    | CATALOG_GS
    | CHAIN_GS
    | CHARACTERISTICS_GS
    | CHECKPOINT_GS
    | CLASS_GS
    | CLEAN_GS
    | CLOB_GS
    | CLOSE_GS
    | CLUSTER_GS
    | COMMENTS_GS
    | COMMENT_GS
    | COMMITTED_GS
    | COMMIT_GS
    | COMPRESS_GS
    | CONFIGURATION_GS
    | CONNECTION_GS
    | CONSTRAINTS_GS
    | CONTENT_GS
    | CONTINUE_GS
    | CONVERSION_GS
    | COORDINATOR_GS
    | COPY_GS
    | COST_GS
    | CSV_GS
    | CURRENT_GS
    | CURSOR_GS
    | CYCLE_GS
    | DATABASE_GS
    | DATAFILE_GS
    | DATA_GS
    | DAY_GS
    | DBCOMPATIBILITY_GS
    | DEALLOCATE_GS
    | DECLARE_GS
    | DEFAULTS_GS
    | DEFERRED_GS
    | DEFINER_GS
    | DELETE_GS
    | DELIMITERS_GS
    | DELIMITER_GS
    | DELTA_GS
    | DETERMINISTIC_GS
    | DICTIONARY_GS
    | DIRECT_GS
    | DISABLE_GS
    | DISCARD_GS
    | DISTRIBUTE_GS
    | DISTRIBUTION_GS
    | DOCUMENT_GS
    | DOMAIN_GS
    | DOUBLE_GS
    | DROP_GS
    | EACH_GS
    | ENABLE_GS
    | ENCODING_GS
    | ENCRYPTED_GS
    | ENFORCED_GS
    | ENUM_GS
    | EOL_GS
    | ESCAPE_GS
    | ESCAPING_GS
    | EVERY_GS
    | EXCHANGE_GS
    | EXCLUDE_GS
    | EXCLUDING_GS
    | EXCLUSIVE_GS
    | EXECUTE_GS
    | EXPLAIN_GS
    | EXTENSION_GS
    | EXTERNAL_GS
    | FAMILY_GS
    | FILEHEADER_GS
    | FIRST_GS
    | FIXED_GS
    | FOLLOWING_GS
    | FORCE_GS
    | FORMATTER_GS
    | FORWARD_GS
    | FUNCTIONS_GS
    | GLOBAL_GS
    | GRANTED_GS
    | HANDLER_GS
    | HEADER_GS
    | HOLD_GS
    | HOUR_GS
    | IDENTIFIED_GS
    | IDENTITY_GS
    | IF_GS
    | IMMEDIATE_GS
    | IMMUTABLE_GS
    | IMPLICIT_GS
    | INCLUDING_GS
    | INCREMENT_GS
    | INDEXES_GS
    | INDEX_GS
    | INHERITS_GS
    | INHERIT_GS
    | INITIAL_GS
    | INITRANS_GS
    | INLINE_GS
    | INPUT_GS
    | INSENSITIVE_GS
    | INSERT_GS
    | INSTEAD_GS
    | INVOKER_GS
    | ISOLATION_GS
    | KEY_GS
    | LABEL_GS
    | LANGUAGE_GS
    | LARGE_GS
    | LAST_GS
    | LC_COLLATE_GS
    | LC_CTYPE_GS
    | LEAKPROOF_GS
    | LEVEL_GS
    | LISTEN_GS
    | LOAD_GS
    | LOCAL_GS
    | LOCATION_GS
    | LOCK_GS
    | LOGGING_GS
    | LOGIN_GS
    | LOG_GS
    | LOOP_GS
    | MAPPING_GS
    | MATCHED_GS
    | MATCH_GS
    | MAXEXTENTS_GS
    | MAXSIZE_GS
    | MAXTRANS_GS
    | MERGE_GS
    | MINEXTENTS_GS
    | MINUTE_GS
    | MINVALUE_GS
    | MODE_GS
    | MONTH_GS
    | MOVEMENT_GS
    | MOVE_GS
    | NAMES_GS
    | NAME_GS
    | NEXT_GS
    | NOCOMPRESS_GS
    | NOCYCLE_GS
    | NODE_GS
    | NOLOGGING_GS
    | NOLOGIN_GS
    | NOMAXVALUE_GS
    | NOMINVALUE_GS
    | NOTHING_GS
    | NOTIFY_GS
    | NOWAIT_GS
    | NO_GS
    | NULLS_GS
    | NUMSTR_GS
    | OBJECT_GS
    | OFF_GS
    | OF_GS
    | OIDS_GS
    | OPERATOR_GS
    | OPTIMIZATION_GS
    | OPTIONS_GS
    | OPTION_GS
    | OWNED_GS
    | OWNER_GS
    | PARSER_GS
    | PARTIAL_GS
    | PARTITIONS_GS
    | PARTITION_GS
    | PASSING_GS
    | PASSWORD_GS
    | PCTFREE_GS
    | PERCENT_GS
    | PER_GS
    | PLANS_GS
    | POOL_GS
    | PRECEDING_GS
    | PREFERRED_GS
    | PREFIX_GS
    | PREPARED_GS
    | PREPARE_GS
    | PRESERVE_GS
    | PRIOR_GS
    | PRIVILEGES_GS
    | PRIVILEGE_GS
    | PROCEDURAL_GS
    | PROFILE_GS
    | QUERY_GS
    | QUOTE_GS
    | RANGE_GS
    | RAW_GS
    | READ_GS
    | REASSIGN_GS
    | REBUILD_GS
    | RECHECK_GS
    | RECURSIVE_GS
    | REF_GS
    | REINDEX_GS
    | RELATIVE_GS
    | RELEASE_GS
    | RELOPTIONS_GS
    | REMOTE_GS
    | RENAME_GS
    | REPEATABLE_GS
    | REPLACE_GS
    | REPLICA_GS
    | RESET_GS
    | RESIZE_GS
    | RESOURCE_GS
    | RESTART_GS
    | RESTRICT_GS
    | RETURNS_GS
    | REUSE_GS
    | REVOKE_GS
    | ROLE_GS
    | ROLLBACK_GS
    | ROWS_GS
    | RULE_GS
    | SAVEPOINT_GS
    | SCHEMA_GS
    | SCROLL_GS
    | SEARCH_GS
    | SECOND_GS
    | SECURITY_GS
    | SEQUENCES_GS
    | SEQUENCE_GS
    | SERIALIZABLE_GS
    | SERVER_GS
    | SESSION_GS
    | SET_GS
    | SHARE_GS
    | SHOW_GS
    | SIMPLE_GS
    | SIZE_GS
    | SNAPSHOT_GS
    | STABLE_GS
    | STANDALONE_GS
    | START_GS
    | STATEMENT_GS
    | STATISTICS_GS
    | STDIN_GS
    | STDOUT_GS
    | STORAGE_GS
    | STORE_GS
    | STRICT_GS
    | STRIP_GS
    | SUPERUSER_GS
    | SYSID_GS
    | SYS_REFCURSOR_GS
    | SYSTEM_GS
    | TABLESPACE_GS
    | TABLES_GS
    | TEMPLATE_GS
    | TEMPORARY_GS
    | TEMP_GS
    | TEXT_GS
    | THAN_GS
    | TRANSACTION_GS
    | TRIGGER_GS
    | TRUNCATE_GS
    | TRUSTED_GS
    | TYPES_GS
    | TYPE_GS
    | UNBOUNDED_GS
    | UNCOMMITTED_GS
    | UNENCRYPTED_GS
    | UNKNOWN_GS
    | UNLIMITED_GS
    | UNLISTEN_GS
    | UNLOCK_GS
    | UNLOGGED_GS
    | UNTIL_GS
    | UNUSABLE_GS
    | UPDATE_GS
    | VACUUM_GS
    | VALIDATE_GS
    | VALIDATION_GS
    | VALIDATOR_GS
    | VALID_GS
    | VALUE_GS
    | VARYING_GS
    | VERSION_GS
    | VIEW_GS
    | VOLATILE_GS
    | WHITESPACE_GS
    | WITHIN_GS
    | WITHOUT_GS
    | WORKLOAD_GS
    | WORK_GS
    | WRAPPER_GS
    | WRITE_GS
    | XML_GS
    | YEAR_GS
    | YES_GS
    | ZONE_GS
    ;

// nonreserved keywords can not be name of function and type;
nonreserved_keywords_can_not_be_name
    : BETWEEN_GS
    | BIGINT_GS
    | BINARY_DOUBLE_GS
    | BINARY_INTEGER_GS
    | BIT_GS
    | BOOLEAN_GS
    | CHARACTER_GS
    | CHAR_GS
    | COALESCE_GS
    | DATE_GS
    | DECIMAL_GS
    | DECODE_GS
    | DEC_GS
    | EXISTS_GS
    | EXTRACT_GS
    | FLOAT_GS
    | GREATEST_GS
    | INOUT_GS
    | INTEGER_GS
    | INTERVAL_GS
    | INT_GS
    | LEAST_GS
    | NATIONAL_GS
    | NCHAR_GS
    | NONE_GS
    | NULLIF_GS
    | NUMBER_GS
    | NUMERIC_GS
    | NVARCHAR2_GS
    | NVL_GS
    | OUT_GS
    | OVERLAY_GS
    | POSITION_GS
    | PRECISION_GS
    | REAL_GS
    | ROW_GS
    | SETOF_GS
    | SMALLDATETIME_GS
    | SMALLINT_GS
    | SUBSTRING_GS
    | TIMESTAMP_GS
    | TIME_GS
    | TINYINT_GS
    | TREAT_GS
    | TRIM_GS
    | VALUES_GS
    | VARCHAR2_GS
    | VARCHAR_GS
    | XMLATTRIBUTES_GS
    | XMLCONCAT_GS
    | XMLELEMENT_GS
    | XMLEXISTS_GS
    | XMLFOREST_GS
    | XMLPARSE_GS
    | XMLPI_GS
    | XMLROOT_GS
    | XMLSERIALIZE_GS
    ;


// Generated from /home/jona/myGit/myCode_repository/antlr4_cpp/gauss200/Gauss200Parser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  Gauss200Parser : public antlr4::Parser {
public:
  enum {
    ALL_GS = 1, ANALYSE_GS = 2, ANALYZE_GS = 3, AND_GS = 4, ANY_GS = 5, 
    ARRAY_GS = 6, ASC_GS = 7, ASYMMETRIC_GS = 8, AS_GS = 9, AUTHID_GS = 10, 
    BOTH_GS = 11, BUCKETS_GS = 12, CASE_GS = 13, CAST_GS = 14, CHECK_GS = 15, 
    COLLATE_GS = 16, COLUMN_GS = 17, CONSTRAINT_GS = 18, CREATE_GS = 19, 
    CURRENT_CATALOG_GS = 20, CURRENT_DATE_GS = 21, CURRENT_ROLE_GS = 22, 
    CURRENT_TIMESTAMP_GS = 23, CURRENT_TIME_GS = 24, CURRENT_USER_GS = 25, 
    DEFAULT_GS = 26, DEFERRABLE_GS = 27, DESC_GS = 28, DISTINCT_GS = 29, 
    DO_GS = 30, ELSE_GS = 31, END_GS = 32, EXCEPT_GS = 33, FALSE_GS = 34, 
    FETCH_GS = 35, FOREIGN_GS = 36, FOR_GS = 37, FROM_GS = 38, FUNCTION_GS = 39, 
    GRANT_GS = 40, GROUP_GS = 41, HAVING_GS = 42, INITIALLY_GS = 43, INTERSECT_GS = 44, 
    INTO_GS = 45, IN_GS = 46, IS_GS = 47, LEADING_GS = 48, LESS_GS = 49, 
    LIMIT_GS = 50, LOCALTIMESTAMP_GS = 51, LOCALTIME_GS = 52, MAXVALUE_GS = 53, 
    MINUS_GS = 54, MODIFY_GS = 55, NLSSORT_GS = 56, NOT_GS = 57, NULL_GS = 58, 
    OFFSET_GS = 59, ONLY_GS = 60, ON_GS = 61, ORDER_GS = 62, OR_GS = 63, 
    PERFORMANCE_GS = 64, PLACING_GS = 65, PRIMARY_GS = 66, PROCEDURE_GS = 67, 
    REFERENCES_GS = 68, REJECT_GS = 69, RETURNING_GS = 70, RETURN_GS = 71, 
    SELECT_GS = 72, SESSION_USER_GS = 73, SOME_GS = 74, SPLIT_GS = 75, SYMMETRIC_GS = 76, 
    SYSDATE_GS = 77, TABLE_GS = 78, THEN_GS = 79, TO_GS = 80, TRAILING_GS = 81, 
    TRUE_GS = 82, UNION_GS = 83, UNIQUE_GS = 84, USER_GS = 85, USING_GS = 86, 
    VARIADIC_GS = 87, WHEN_GS = 88, WHERE_GS = 89, WINDOW_GS = 90, WITH_GS = 91, 
    AUTHORIZATION_GS = 92, BINARY_GS = 93, COLLATION_GS = 94, CONCURRENTLY_GS = 95, 
    CROSS_GS = 96, CURRENT_SCHEMA_GS = 97, FREEZE_GS = 98, FULL_GS = 99, 
    ILIKE_GS = 100, INNER_GS = 101, ISNULL_GS = 102, JOIN_GS = 103, LEFT_GS = 104, 
    LIKE_GS = 105, NATURAL_GS = 106, NOTNULL_GS = 107, OUTER_GS = 108, OVERLAPS_GS = 109, 
    OVER_GS = 110, RIGHT_GS = 111, SIMILAR_GS = 112, VERBOSE_GS = 113, ABORT_GS = 114, 
    ABSOLUTE_GS = 115, ACCESS_GS = 116, ACCOUNT_GS = 117, ACTION_GS = 118, 
    ADD_GS = 119, ADMIN_GS = 120, AFTER_GS = 121, AGGREGATE_GS = 122, ALSO_GS = 123, 
    ALTER_GS = 124, ALWAYS_GS = 125, APP_GS = 126, ASSERTION_GS = 127, ASSIGNMENT_GS = 128, 
    ATTRIBUTE_GS = 129, AT_GS = 130, AUTOEXTEND_GS = 131, AUTOMAPPED_GS = 132, 
    BACKWARD_GS = 133, BARRIER_GS = 134, BEFORE_GS = 135, BEGIN_GS = 136, 
    BLOB_GS = 137, BY_GS = 138, CACHE_GS = 139, CALLED_GS = 140, CALL_GS = 141, 
    CASCADED_GS = 142, CASCADE_GS = 143, CATALOG_GS = 144, CHAIN_GS = 145, 
    CHARACTERISTICS_GS = 146, CHECKPOINT_GS = 147, CLASS_GS = 148, CLEAN_GS = 149, 
    CLOB_GS = 150, CLOSE_GS = 151, CLUSTER_GS = 152, COMMENTS_GS = 153, 
    COMMENT_GS = 154, COMMITTED_GS = 155, COMMIT_GS = 156, COMPRESS_GS = 157, 
    CONFIGURATION_GS = 158, CONNECTION_GS = 159, CONSTRAINTS_GS = 160, CONTENT_GS = 161, 
    CONTINUE_GS = 162, CONVERSION_GS = 163, COORDINATOR_GS = 164, COPY_GS = 165, 
    COST_GS = 166, CSV_GS = 167, CURRENT_GS = 168, CURSOR_GS = 169, CYCLE_GS = 170, 
    DATABASE_GS = 171, DATAFILE_GS = 172, DATA_GS = 173, DAY_GS = 174, DBCOMPATIBILITY_GS = 175, 
    DEALLOCATE_GS = 176, DECLARE_GS = 177, DEFAULTS_GS = 178, DEFERRED_GS = 179, 
    DEFINER_GS = 180, DELETE_GS = 181, DELIMITERS_GS = 182, DELIMITER_GS = 183, 
    DELTA_GS = 184, DETERMINISTIC_GS = 185, DICTIONARY_GS = 186, DIRECT_GS = 187, 
    DISABLE_GS = 188, DISCARD_GS = 189, DISTRIBUTE_GS = 190, DISTRIBUTION_GS = 191, 
    DOCUMENT_GS = 192, DOMAIN_GS = 193, DOUBLE_GS = 194, DROP_GS = 195, 
    EACH_GS = 196, ENABLE_GS = 197, ENCODING_GS = 198, ENCRYPTED_GS = 199, 
    ENFORCED_GS = 200, ENUM_GS = 201, EOL_GS = 202, ESCAPE_GS = 203, ESCAPING_GS = 204, 
    EVERY_GS = 205, EXCHANGE_GS = 206, EXCLUDE_GS = 207, EXCLUDING_GS = 208, 
    EXCLUSIVE_GS = 209, EXECUTE_GS = 210, EXPLAIN_GS = 211, EXTENSION_GS = 212, 
    EXTERNAL_GS = 213, FAMILY_GS = 214, FILEHEADER_GS = 215, FIRST_GS = 216, 
    FIXED_GS = 217, FOLLOWING_GS = 218, FORCE_GS = 219, FORMATTER_GS = 220, 
    FORWARD_GS = 221, FUNCTIONS_GS = 222, GLOBAL_GS = 223, GRANTED_GS = 224, 
    HANDLER_GS = 225, HEADER_GS = 226, HOLD_GS = 227, HOUR_GS = 228, IDENTIFIED_GS = 229, 
    IDENTITY_GS = 230, IF_GS = 231, IMMEDIATE_GS = 232, IMMUTABLE_GS = 233, 
    IMPLICIT_GS = 234, INCLUDING_GS = 235, INCREMENT_GS = 236, INDEXES_GS = 237, 
    INDEX_GS = 238, INHERITS_GS = 239, INHERIT_GS = 240, INITIAL_GS = 241, 
    INITRANS_GS = 242, INLINE_GS = 243, INPUT_GS = 244, INSENSITIVE_GS = 245, 
    INSERT_GS = 246, INSTEAD_GS = 247, INVOKER_GS = 248, ISOLATION_GS = 249, 
    KEY_GS = 250, LABEL_GS = 251, LANGUAGE_GS = 252, LARGE_GS = 253, LAST_GS = 254, 
    LC_COLLATE_GS = 255, LC_CTYPE_GS = 256, LEAKPROOF_GS = 257, LEVEL_GS = 258, 
    LISTEN_GS = 259, LOAD_GS = 260, LOCAL_GS = 261, LOCATION_GS = 262, LOCK_GS = 263, 
    LOGGING_GS = 264, LOGIN_GS = 265, LOG_GS = 266, LOOP_GS = 267, MAPPING_GS = 268, 
    MATCHED_GS = 269, MATCH_GS = 270, MAXEXTENTS_GS = 271, MAXSIZE_GS = 272, 
    MAXTRANS_GS = 273, MERGE_GS = 274, MINEXTENTS_GS = 275, MINUTE_GS = 276, 
    MINVALUE_GS = 277, MODE_GS = 278, MONTH_GS = 279, MOVEMENT_GS = 280, 
    MOVE_GS = 281, NAMES_GS = 282, NAME_GS = 283, NEXT_GS = 284, NOCOMPRESS_GS = 285, 
    NOCYCLE_GS = 286, NODE_GS = 287, NOLOGGING_GS = 288, NOLOGIN_GS = 289, 
    NOMAXVALUE_GS = 290, NOMINVALUE_GS = 291, NOTHING_GS = 292, NOTIFY_GS = 293, 
    NOWAIT_GS = 294, NO_GS = 295, NULLS_GS = 296, NUMSTR_GS = 297, OBJECT_GS = 298, 
    OFF_GS = 299, OF_GS = 300, OIDS_GS = 301, OPERATOR_GS = 302, OPTIMIZATION_GS = 303, 
    OPTIONS_GS = 304, OPTION_GS = 305, OWNED_GS = 306, OWNER_GS = 307, PARSER_GS = 308, 
    PARTIAL_GS = 309, PARTITIONS_GS = 310, PARTITION_GS = 311, PASSING_GS = 312, 
    PASSWORD_GS = 313, PCTFREE_GS = 314, PERCENT_GS = 315, PER_GS = 316, 
    PLANS_GS = 317, POOL_GS = 318, PRECEDING_GS = 319, PREFERRED_GS = 320, 
    PREFIX_GS = 321, PREPARED_GS = 322, PREPARE_GS = 323, PRESERVE_GS = 324, 
    PRIOR_GS = 325, PRIVILEGES_GS = 326, PRIVILEGE_GS = 327, PROCEDURAL_GS = 328, 
    PROFILE_GS = 329, QUERY_GS = 330, QUOTE_GS = 331, RANGE_GS = 332, RAW_GS = 333, 
    READ_GS = 334, REASSIGN_GS = 335, REBUILD_GS = 336, RECHECK_GS = 337, 
    RECURSIVE_GS = 338, REF_GS = 339, REINDEX_GS = 340, RELATIVE_GS = 341, 
    RELEASE_GS = 342, RELOPTIONS_GS = 343, REMOTE_GS = 344, RENAME_GS = 345, 
    REPEATABLE_GS = 346, REPLACE_GS = 347, REPLICA_GS = 348, RESET_GS = 349, 
    RESIZE_GS = 350, RESOURCE_GS = 351, RESTART_GS = 352, RESTRICT_GS = 353, 
    RETURNS_GS = 354, REUSE_GS = 355, REVOKE_GS = 356, ROLE_GS = 357, ROLLBACK_GS = 358, 
    ROWS_GS = 359, RULE_GS = 360, SAVEPOINT_GS = 361, SCHEMA_GS = 362, SCROLL_GS = 363, 
    SEARCH_GS = 364, SECOND_GS = 365, SECURITY_GS = 366, SEQUENCES_GS = 367, 
    SEQUENCE_GS = 368, SERIALIZABLE_GS = 369, SERVER_GS = 370, SESSION_GS = 371, 
    SET_GS = 372, SHARE_GS = 373, SHOW_GS = 374, SIMPLE_GS = 375, SIZE_GS = 376, 
    SNAPSHOT_GS = 377, STABLE_GS = 378, STANDALONE_GS = 379, START_GS = 380, 
    STATEMENT_GS = 381, STATISTICS_GS = 382, STDIN_GS = 383, STDOUT_GS = 384, 
    STORAGE_GS = 385, STORE_GS = 386, STRICT_GS = 387, STRIP_GS = 388, SUPERUSER_GS = 389, 
    SYSID_GS = 390, SYS_REFCURSOR_GS = 391, SYSTEM_GS = 392, TABLESPACE_GS = 393, 
    TABLES_GS = 394, TEMPLATE_GS = 395, TEMPORARY_GS = 396, TEMP_GS = 397, 
    TEXT_GS = 398, THAN_GS = 399, TRANSACTION_GS = 400, TRIGGER_GS = 401, 
    TRUNCATE_GS = 402, TRUSTED_GS = 403, TYPES_GS = 404, TYPE_GS = 405, 
    UNBOUNDED_GS = 406, UNCOMMITTED_GS = 407, UNENCRYPTED_GS = 408, UNKNOWN_GS = 409, 
    UNLIMITED_GS = 410, UNLISTEN_GS = 411, UNLOCK_GS = 412, UNLOGGED_GS = 413, 
    UNTIL_GS = 414, UNUSABLE_GS = 415, UPDATE_GS = 416, VACUUM_GS = 417, 
    VALIDATE_GS = 418, VALIDATION_GS = 419, VALIDATOR_GS = 420, VALID_GS = 421, 
    VALUE_GS = 422, VARYING_GS = 423, VERSION_GS = 424, VIEW_GS = 425, VOLATILE_GS = 426, 
    WHITESPACE_GS = 427, WITHIN_GS = 428, WITHOUT_GS = 429, WORKLOAD_GS = 430, 
    WORK_GS = 431, WRAPPER_GS = 432, WRITE_GS = 433, XML_GS = 434, YEAR_GS = 435, 
    YES_GS = 436, ZONE_GS = 437, BETWEEN_GS = 438, BIGINT_GS = 439, BINARY_DOUBLE_GS = 440, 
    BINARY_INTEGER_GS = 441, BIT_GS = 442, BOOLEAN_GS = 443, CHARACTER_GS = 444, 
    CHAR_GS = 445, COALESCE_GS = 446, DATE_GS = 447, DECIMAL_GS = 448, DECODE_GS = 449, 
    DEC_GS = 450, EXISTS_GS = 451, EXTRACT_GS = 452, FLOAT_GS = 453, GREATEST_GS = 454, 
    INOUT_GS = 455, INTEGER_GS = 456, INTERVAL_GS = 457, INT_GS = 458, LEAST_GS = 459, 
    NATIONAL_GS = 460, NCHAR_GS = 461, NONE_GS = 462, NULLIF_GS = 463, NUMBER_GS = 464, 
    NUMERIC_GS = 465, NVARCHAR2_GS = 466, NVL_GS = 467, OUT_GS = 468, OVERLAY_GS = 469, 
    POSITION_GS = 470, PRECISION_GS = 471, REAL_GS = 472, ROW_GS = 473, 
    SETOF_GS = 474, SMALLDATETIME_GS = 475, SMALLINT_GS = 476, SUBSTRING_GS = 477, 
    TIMESTAMP_GS = 478, TIME_GS = 479, TINYINT_GS = 480, TREAT_GS = 481, 
    TRIM_GS = 482, VALUES_GS = 483, VARCHAR2_GS = 484, VARCHAR_GS = 485, 
    XMLATTRIBUTES_GS = 486, XMLCONCAT_GS = 487, XMLELEMENT_GS = 488, XMLEXISTS_GS = 489, 
    XMLFOREST_GS = 490, XMLPARSE_GS = 491, XMLPI_GS = 492, XMLROOT_GS = 493, 
    XMLSERIALIZE_GS = 494, SMALLSERIAL_GS = 495, SERIAL_GS = 496, BIGSERIAL_GS = 497, 
    FLOAT4_GS = 498, FLOAT8_GS = 499, MONEY_GS = 500, BYTEA_GS = 501, FIELDS_GS = 502, 
    RELTIME_GS = 503, POINT_GS = 504, LSEG_GS = 505, BOX_GS = 506, PATH_GS = 507, 
    POLYGON_GS = 508, CIRCLE_GS = 509, CIDR_GS = 510, INET_GS = 511, MACADDR_GS = 512, 
    TSVECTOR_GS = 513, TSQUERY_GS = 514, HLL_GS = 515, OID_GS = 516, CID_GS = 517, 
    XID_GS = 518, TID_GS = 519, REGCONFIG_GS = 520, REGDICTIONARY_GS = 521, 
    REGOPER = 522, REGOPERATOR = 523, REGPROC = 524, REGPROCEDURE = 525, 
    REGCLASS = 526, REGTYPE = 527, ANYELEMENT_GS = 528, ANYARRAY_GS = 529, 
    ANYNONARRAY_GS = 530, ANYENUM_GS = 531, ANYRANGE_GS = 532, CSTRING_GS = 533, 
    INTERNAL_GS = 534, LANGUAGE_HANDLER_GS = 535, FDW_HANDLER_GS = 536, 
    RECORD_GS = 537, VOID_GS = 538, OPAQUE_GS = 539, FILTER_GS = 540, PRIVATE_GS = 541, 
    SOURCE_GS = 542, PUBLIC_GS = 543, USAGE_GS = 544, DIRECTORY_GS = 545, 
    SHIPPABLE_GS = 546, FENCED_GS = 547, VCGROUP_GS = 548, CREATEDB_GS = 549, 
    NOCREATEDB_GS = 550, CREATEROLE_GS = 551, NOCREATEROLE_GS = 552, NOINHERIT_GS = 553, 
    AUDITADMIN_GS = 554, NOAUDITADMIN_GS = 555, SYSADMIN_GS = 556, NOSYSADMIN_GS = 557, 
    USEFT_GS = 558, NOUSEFT_GS = 559, REPLICATION_GS = 560, NOREPLICATION_GS = 561, 
    INDEPENDENT_GS = 562, NOINDEPENDENT_GS = 563, VCADMIN_GS = 564, NOVCADMIN_GS = 565, 
    PERM_GS = 566, SPACE_GS = 567, PGUSER_GS = 568, POLICY_GS = 569, KILL_GS = 570, 
    PLAIN_GS = 571, EXTENDED_GS = 572, MAIN_GS = 573, CSN_GS = 574, ERRORS_GS = 575, 
    FORMAT_GS = 576, NOESCAPING_GS = 577, FORCE_QUOTE_GS = 578, FORCE_NOT_NULL_GS = 579, 
    IGNORE_EXTRA_DATA_GS = 580, FILL_MISSING_FIELDS_GS = 581, COMPATIBLE_ILLEGAL_CHARS_GS = 582, 
    DATE_FORMAT_GS = 583, TIME_FORMAT_GS = 584, TIMESTAMP_FORMAT_GS = 585, 
    SMALLDATETIME_FORMAT_GS = 586, ROUNDROBIN_GS = 587, PERMISSIVE_GS = 588, 
    RESTRICTIVE_GS = 589, HASH_GS = 590, COSTS_GS = 591, CPU_GS = 592, DETAIL_GS = 593, 
    NODES_GS = 594, NUM_NODES_GS = 595, BUFFERS_GS = 596, TIMING_GS = 597, 
    PLAN_GS = 598, JSON_GS = 599, YAML_GS = 600, CONNECT_GS = 601, COMPUTE_GS = 602, 
    TABLESAMPLE_GS = 603, ROLLUP_GS = 604, CUBE_GS = 605, GROUPING_GS = 606, 
    SETS_GS = 607, COMPACT_GS = 608, DELTAMERGE_GS = 609, HDFSDIRECTORY_GS = 610, 
    CONSTANT_GS = 611, PACKAGE_GS = 612, PERCENT_SIGN = 613, AMPERSAND = 614, 
    LEFT_PAREN = 615, RIGHT_PAREN = 616, DOUBLE_ASTERISK = 617, ASTERISK = 618, 
    PLUS_SIGN = 619, MINUS_SIGN = 620, COMMA = 621, SOLIDUS = 622, AT_SIGN = 623, 
    PERIOD = 624, SLASH_SINGLE = 625, QUESTION_MARK = 626, NOT_EQUAL_OP = 627, 
    CARRET_OPERATOR_PART = 628, TILDE_OPERATOR_PART = 629, EXCLAMATION_OPERATOR_PART = 630, 
    GREATER_THAN_OP = 631, LESS_THAN_OP = 632, COLON = 633, SEMICOLON = 634, 
    POUND_SIGN = 635, TYPECAST = 636, BAR = 637, EQUALS_OP = 638, LEFT_BRACKET = 639, 
    RIGHT_BRACKET = 640, SINGLE_LINE_COMMENT = 641, MULTI_LINE_COMMENT = 642, 
    SPACES = 643, CHAR_STRING = 644, REGULAR_ID = 645, DELIMITED_STR = 646, 
    SCONST = 647, ICONST = 648, FCONST = 649, BCONST = 650, XCONST = 651, 
    PARAM = 652
  };

  enum {
    RuleStmtblock = 0, RuleStmtmulti = 1, RuleSql_stmt = 2, RuleStmt = 3, 
    RuleOther_stmt = 4, RuleBegin_stmt = 5, RuleAbort_stmt = 6, RuleWork_transaction = 7, 
    RuleAlter_group_mapping_stmt = 8, RuleApp_name = 9, RuleParen_assignment_stmt_list = 10, 
    RuleAssignment_stmt_list = 11, RuleAssignment_stmt = 12, RuleAssignment_value = 13, 
    RuleAlter_database_stmt = 14, RuleDatabase_name = 15, RuleAlter_database_option = 16, 
    RuleConnection_limit = 17, RuleInteger = 18, RuleRename_owner_to_option = 19, 
    RuleRename_to_option = 20, RuleOwner_to_option = 21, RuleNew_name = 22, 
    RuleSet_configuration_param = 23, RuleConfiguration_param_value = 24, 
    RuleReset_configuration_param = 25, RuleConfiguration_param = 26, RuleAlter_data_source_stmt = 27, 
    RuleSrc_name = 28, RuleAlter_data_src_option = 29, RuleData_src_type_version_option = 30, 
    RuleAlter_property_options = 31, RuleAlter_property_option = 32, RuleOptname = 33, 
    RuleAlter_default_privilege_stmt = 34, RuleTarget_role_list = 35, RuleTarget_role = 36, 
    RuleSchema_name_list = 37, RuleSchema_name = 38, RuleAbbreviated_grant_or_revoke = 39, 
    RuleGrant_on_tables_clause = 40, RuleAll_privileges = 41, RuleTable_privileges = 42, 
    RuleTable_privilege = 43, RuleGrant_revoke_objects = 44, RuleGrant_revoke_obj = 45, 
    RuleRole_name = 46, RuleWith_grant_option = 47, RuleGrant_on_functions_clause = 48, 
    RuleFunction_privilege = 49, RuleGrant_on_types_clause = 50, RuleType_privilege = 51, 
    RuleRevoke_on_tables_clause = 52, RuleGrant_option_for = 53, RuleCascade_restrict = 54, 
    RuleRevoke_on_functions_clause = 55, RuleRevoke_on_types_clause = 56, 
    RuleAlter_directory_stmt = 57, RuleDirectory_name = 58, RuleAlter_foreign_table_stmt = 59, 
    RuleIf_exists_or_not = 60, RuleTable_name = 61, RuleAttr = 62, RuleAlter_foreign_table_option = 63, 
    RuleAlter_foreign_table_action_list = 64, RuleAlter_foreign_table_action = 65, 
    RuleColumn_name = 66, RuleAlter_foreign_table_action_option = 67, RuleAlter_set_statistics_option = 68, 
    RuleAlter_add_information_constraint = 69, RuleColumn_constraint_primary_unique = 70, 
    RuleConstraint_name = 71, RuleAdd_info_constraint_option = 72, RuleAlter_drop_information_constraint = 73, 
    RuleAlter_function_stmt = 74, RuleFunction_with_argtypes = 75, RuleFunc_args = 76, 
    RuleFunc_args_list = 77, RuleFunc_arg = 78, RuleArgmode = 79, RuleParam_name = 80, 
    RuleAlter_func_option = 81, RuleAlter_function_action = 82, RuleAlter_set_schema = 83, 
    RuleAlter_group_stmt = 84, RuleGroup_name = 85, RuleAlter_group_option = 86, 
    RuleUser_name_list = 87, RuleUser_name = 88, RuleAlter_index_stmt = 89, 
    RuleIndex_name = 90, RuleAlter_index_option = 91, RuleSet_tablespace_option = 92, 
    RuleTablespace_name_option = 93, RuleSet_assignment_list = 94, RuleReset_param_list = 95, 
    RuleTablespace_name = 96, RuleParameter_list = 97, RuleParameter_name = 98, 
    RulePartition_name = 99, RuleAlter_large_obj_stmt = 100, RuleAlter_node_stmt = 101, 
    RuleNodename = 102, RuleParen_node_list = 103, RuleNode_list = 104, 
    RuleAlter_node_option = 105, RuleAlter_node_group_stmt = 106, RuleAlter_node_group_option = 107, 
    RuleAdd_node_list = 108, RuleDelete_node_list = 109, RuleAlter_resource_pool_stmt = 110, 
    RulePool_name = 111, RuleAlter_role_stmt = 112, RuleAlter_role_option = 113, 
    RuleRole_option_common = 114, RuleAlter_role_with_option = 115, RuleAlter_role_encrypt_option = 116, 
    RuleLogic_cluster_name = 117, RuleAlter_role_level_security_policy_stmt = 118, 
    RuleRow_level_security = 119, RulePolicy_name = 120, RuleAlter_role_level_security_policy_option = 121, 
    RuleUsing_expr_option = 122, RuleAlter_schema_stmt = 123, RuleAlter_sequence_stmt = 124, 
    RuleSequence_name = 125, RuleAlter_seq_option = 126, RuleAlter_server_stmt = 127, 
    RuleServer_name = 128, RuleAlter_server_option = 129, RuleAlter_session_stmt = 130, 
    RuleAlter_session_option = 131, RuleAlter_session_transaction_param_list = 132, 
    RuleAlter_session_transaction_param = 133, RuleAlter_session_runtime_param = 134, 
    RuleExpr_default = 135, RuleEncoding_name = 136, RuleAlter_sys_kill_session_stmt = 137, 
    RuleAlter_table_stmt = 138, RuleAlter_table_name = 139, RuleAlter_table_stmt_option = 140, 
    RuleAlter_table_option = 141, RuleAlter_table_action_list = 142, RuleAlter_table_action = 143, 
    RuleColumn_clause = 144, RuleColumn_clause_add_column_option = 145, 
    RuleColumn_with_type = 146, RuleCompress_type = 147, RuleCollate_option = 148, 
    RuleCollation = 149, RuleAlter_table_column_constraint = 150, RuleColumn_constraint_option = 151, 
    RuleColumn_clause_alter_column_option = 152, RuleAlter_table_constraint = 153, 
    RuleAlter_table_constraint_option = 154, RuleParen_column_list = 155, 
    RuleIndex_parameters = 156, RuleTable_constraint_deferrable = 157, RuleTable_constraint_using_index = 158, 
    RuleTrigger_name = 159, RuleAlter_table_partition_option = 160, RuleAlter_table_partition_action = 161, 
    RuleMove_clause = 162, RuleParen_partition_value_list = 163, RuleParen_partition_value = 164, 
    RulePartition_value = 165, RuleExchange_clause = 166, RuleRow_clause = 167, 
    RuleMerge_clause = 168, RuleModify_clause = 169, RuleSplit_clause = 170, 
    RuleSplit_point_clause = 171, RuleSplit_point_clause_option = 172, RuleNo_split_point_clause = 173, 
    RulePartition_item_list = 174, RulePartition_item = 175, RulePartition_less_than_item = 176, 
    RulePartition_start_end_item = 177, RulePartition_start_end_item_option = 178, 
    RuleAdd_clause = 179, RuleDrop_clause = 180, RuleAlter_tablespace_stmt = 181, 
    RuleAlter_tablespace_option = 182, RuleAlter_txt_search_conf_stmt = 183, 
    RuleConfiguration_name = 184, RuleAlter_txt_search_conf_option = 185, 
    RuleToken_type_list = 186, RuleToken_type = 187, RuleDictionary_name_list = 188, 
    RuleDictionary_name = 189, RuleAlter_txt_search_dictionary_stmt = 190, 
    RuleAlter_txt_search_dictionary_option = 191, RuleAlter_trigger_stmt = 192, 
    RuleAlter_type_stmt = 193, RuleType_name = 194, RuleAlter_type_option = 195, 
    RuleAlter_type_action_list = 196, RuleAlter_type_action = 197, RuleAttr_name = 198, 
    RuleEnum_value = 199, RuleAlter_type_add_attr_option = 200, RuleAlter_type_drop_attr_option = 201, 
    RuleAlter_type_alter_attr = 202, RuleAlter_user_stmt = 203, RuleAlter_user_clause = 204, 
    RuleAlter_view_stmt = 205, RuleView_name = 206, RuleAlter_view_option = 207, 
    RuleWorkload_group_stmt = 208, RuleCreate_group_mapping_stmt = 209, 
    RuleCreate_barrier_stmt = 210, RuleBarrier_name = 211, RuleCreate_database_stmt = 212, 
    RuleCreate_data_source_stmt = 213, RuleCreate_directory_stmt = 214, 
    RuleOr_replace = 215, RuleCreate_foreign_table_stmt = 216, RuleCreate_foreign_table_option = 217, 
    RuleCreate_foreign_table_import_export_option = 218, RuleForeign_table_import_export_column_type_list = 219, 
    RuleForeign_table_import_export_column_type = 220, RuleTable_constraint_to_group_node = 221, 
    RuleCreate_foreign_table_on_hadoop_option = 222, RuleForeign_table_on_hadoop_column_type_list = 223, 
    RuleForeign_table_on_hadoop_column_type = 224, RuleCreate_foreign_table_column_constraint = 225, 
    RuleCreate_function_procedure_stmt = 226, RuleCreate_function_procedure_clause = 227, 
    RuleCreate_func_arg_list = 228, RuleCreate_func_arg = 229, RuleFunc_return_type = 230, 
    RuleLang_name = 231, RuleCreate_func_procedure_as_option = 232, RulePlsqlbody = 233, 
    RuleVariable_declarations = 234, RuleVariable_declaration = 235, RuleDefault_value_part = 236, 
    RuleCursor_declaration = 237, RuleParameter_spec = 238, RuleSequence_of_statements = 239, 
    RuleSequence_of_statement = 240, RuleCreate_group_stmt = 241, RuleCreate_index_stmt = 242, 
    RuleCreate_index_column_list = 243, RuleCreate_index_column = 244, RuleOpclass = 245, 
    RuleAsc_desc = 246, RuleNulls_first_last = 247, RuleCreate_node_stmt = 248, 
    RuleCreate_node_group_stmt = 249, RuleCreate_row_level_security_policy_stmt = 250, 
    RuleRow_level_security_policy_objects = 251, RuleRow_level_security_policy_obj = 252, 
    RuleCreate_resource_pool_stmt = 253, RuleCreate_role_stmt = 254, RuleCreate_role_with_option = 255, 
    RuleProfile_name = 256, RuleCreate_schema_stmt = 257, RuleCreate_schema_option = 258, 
    RuleSchema_element = 259, RuleCreate_sequence_stmt = 260, RuleMinvalue_option = 261, 
    RuleMaxvalue_option = 262, RuleCreate_server_stmt = 263, RuleCreate_table_stmt = 264, 
    RuleTemporary_temp = 265, RuleCreate_table_column_type_option_list = 266, 
    RuleCreate_table_column_type_option = 267, RuleLike_option = 268, RuleLike_option_other = 269, 
    RuleCreate_table_stmt_option = 270, RuleCreate_table_as_option = 271, 
    RulePartition_by_option = 272, RuleParen_partition_key = 273, RulePartition_key = 274, 
    RuleCreate_tablespace_stmt = 275, RuleCreate_txt_search_stmt = 276, 
    RuleCreate_trigger_stmt = 277, RuleTrigger_type = 278, RuleTrigger_event_list = 279, 
    RuleTrigger_event = 280, RuleCreate_type_stmt = 281, RuleCreate_type_option = 282, 
    RuleCreate_user_stmt = 283, RuleCreate_view_stmt = 284, RuleData_manipulate_stmt = 285, 
    RuleSelect_stmt = 286, RuleSubquery_basic_elements = 287, RuleSelect_with_parens = 288, 
    RuleSubquery_operation_part = 289, RuleSubquery = 290, RuleSimple_select = 291, 
    RuleAll_distinct = 292, RuleSelected_list = 293, RuleSelected_list_element = 294, 
    RuleInto_clause = 295, RuleFrom_clause = 296, RuleFrom_list = 297, RuleTable_ref = 298, 
    RulePartition_clause = 299, RuleTable_alias = 300, RuleTable_sampling_clause = 301, 
    RuleSample_method = 302, RuleJoin_type = 303, RuleUsing_clause = 304, 
    RuleGroup_by_clause = 305, RuleGrouping_elements = 306, RuleGrouping_element = 307, 
    RuleParen_group_element_expr_list = 308, RuleGroup_element_expr = 309, 
    RuleHaving_clause = 310, RuleWindow_clause = 311, RuleWindow_clause_options = 312, 
    RuleWindow_clause_option = 313, RuleWindow_name = 314, RuleWindow_definition = 315, 
    RuleFrame_clause = 316, RuleFrame_start_end = 317, RuleOrder_by_clause = 318, 
    RuleOrder_by_clause_options = 319, RuleOrder_by_clause_option = 320, 
    RuleOrder_by_clause_expr = 321, RuleNlssort_expression_clause = 322, 
    RuleLimit_clause = 323, RuleOffset_clause = 324, RuleFetch_clause = 325, 
    RuleFor_update_share_clause = 326, RuleInsert_stmt = 327, RuleInsert_values_option = 328, 
    RuleValues_expression = 329, RuleUpdate_stmt = 330, RuleUpdate_set_clause = 331, 
    RuleDelete_stmt = 332, RuleWith_clause = 333, RuleWith_query = 334, 
    RuleWith_query_name = 335, RuleAs_alias = 336, RuleAlias_name = 337, 
    RuleWhere_clause = 338, RuleReturn_clause = 339, RuleOutput_expr_alias = 340, 
    RuleDrop_database_stmt = 341, RuleDrop_group_mapping_stmt = 342, RuleDrop_data_source_stmt = 343, 
    RuleDrop_directory_stmt = 344, RuleDrop_foreign_table_stmt = 345, RuleDrop_function_stmt = 346, 
    RuleDrop_group_stmt = 347, RuleDrop_index_stmt = 348, RuleDrop_node_stmt = 349, 
    RuleDrop_node_group_stmt = 350, RuleDrop_owned_stmt = 351, RuleDrop_row_level_security_policy_stmt = 352, 
    RuleDrop_procedure_stmt = 353, RuleDrop_resource_pool_stmt = 354, RuleDrop_role_stmt = 355, 
    RuleDrop_schema_stmt = 356, RuleDrop_sequence_stmt = 357, RuleDrop_name_list = 358, 
    RuleDrop_name = 359, RuleDrop_server_stmt = 360, RuleDrop_table_stmt = 361, 
    RuleDrop_tablespace_stmt = 362, RuleDrop_txt_search_stmt = 363, RuleDrop_trigger_stmt = 364, 
    RuleDrop_type_stmt = 365, RuleDrop_user_stmt = 366, RuleDrop_view_stmt = 367, 
    RuleDrop_workload_group_stmt = 368, RuleAnalyze_stmt = 369, RuleAnalyze_keyword = 370, 
    RuleAnalyze_option = 371, RulePartition_name_option = 372, RuleCall_stmt = 373, 
    RuleParam_expr_list = 374, RuleParam_expr = 375, RuleParam_op = 376, 
    RuleCheckpoint_stmt = 377, RuleClean_connection_stmt = 378, RuleClose_stmt = 379, 
    RuleCursor_name = 380, RuleCluster_stmt = 381, RuleCluster_stmt_option = 382, 
    RuleComment_stmt = 383, RuleComment_stmt_option = 384, RuleAgg_name = 385, 
    RuleObject_name = 386, RuleCommit_end_stmt = 387, RuleCommit_prepared_stmt = 388, 
    RuleCopy_stmt = 389, RuleCopy_obj = 390, RuleCopy_stmt_clause = 391, 
    RuleCopy_stmt_option = 392, RuleParen_copy_clause_option_list = 393, 
    RuleCopy_clause_option = 394, RuleColumn_offset_list = 395, RuleColumn_offset_ele = 396, 
    RuleCopy_option = 397, RuleCopy_clause_common_option = 398, RuleBoolean_value = 399, 
    RuleCursor_stmt = 400, RuleDeallocate_stmt = 401, RuleDo_stmt = 402, 
    RuleDo_stmt_code = 403, RuleExecute_stmts = 404, RuleExecute_stmt = 405, 
    RuleExecute_direct_stmt = 406, RuleExplain_stmt = 407, RuleExplain_option_list = 408, 
    RuleExplain_option = 409, RuleExplain_plan_stmt = 410, RuleFetch_move_stmt = 411, 
    RuleFetch_direction_clause = 412, RuleGrant_stmt = 413, RulePrivileges_for_obj = 414, 
    RuleDatabase_privileges = 415, RuleDatabase_privilege = 416, RuleCluster_privilege = 417, 
    RuleGrant_on_option = 418, RuleGrant_on_function_option_list = 419, 
    RuleGrant_on_function_option = 420, RuleLock_stmt = 421, RuleLock_in_mode = 422, 
    RuleIn_mode_option = 423, RulePrepare_stmt = 424, RulePrepare_transaction_stmt = 425, 
    RuleMerge_into_stmt = 426, RuleOn_condition_clause = 427, RuleWhen_matched_update_clause = 428, 
    RuleUpdate_set_column_option = 429, RuleWhen_not_matched_insert_clause = 430, 
    RuleNot_matched_insert_value_option = 431, RuleNot_matched_insert_value = 432, 
    RuleReassign_owned_stmt = 433, RuleReindex_stmt = 434, RuleReindex_option = 435, 
    RuleRelease_savepoint_stmt = 436, RuleReset_stmt = 437, RuleSavepoint_name = 438, 
    RuleRevoke_stmt = 439, RuleAdmin_option_for = 440, RuleRollback_stmt = 441, 
    RuleSavepoint_stmt = 442, RuleSet_reset_stmt = 443, RuleSet_config_parameters = 444, 
    RuleSession_local = 445, RuleSet_parameter_option = 446, RuleTimezone = 447, 
    RuleSet_constraints = 448, RuleSet_role = 449, RuleReset_config_parameters = 450, 
    RuleSet_session_authorization = 451, RuleSet_transaction = 452, RuleIsolation_level_options = 453, 
    RuleIsolation_level_option = 454, RuleShow_stmt = 455, RuleStart_transaction_stmt = 456, 
    RuleStart_transaction_option = 457, RuleTruncate_stmt = 458, RuleVacuum_stmt = 459, 
    RuleVacuum_keyword_list = 460, RuleVacuum_keyword = 461, RuleVacuum_option = 462, 
    RuleValues_stmt = 463, RuleParen_expr_list = 464, RuleExpression_list = 465, 
    RuleExpression = 466, RuleLogical_expr = 467, RuleMultiset_expr = 468, 
    RuleRelational_expr = 469, RuleRelational_op = 470, RuleCompound_expr = 471, 
    RuleIn_expr = 472, RuleBetween_elements = 473, RuleConcatenation_list = 474, 
    RuleConcatenation = 475, RuleGeometry_op1 = 476, RuleModel_expr = 477, 
    RuleUnary_expr = 478, RuleGeometry_op2 = 479, RuleTypename_gs = 480, 
    RulePrecision_part = 481, RuleNumeric = 482, RuleNumber_type = 483, 
    RuleConcurrency_type = 484, RuleBoolean_type = 485, RuleChar_type = 486, 
    RuleBinary_type = 487, RuleDate_type = 488, RuleTime_zone_part = 489, 
    RuleGeometry_type = 490, RuleInet_type = 491, RuleBit_type = 492, RuleTxt_search_type = 493, 
    RuleHll_type = 494, RuleOid_type = 495, RuleOther_type = 496, RuleTypecast_arg = 497, 
    RuleFunction_expr = 498, RuleCol_label = 499, RuleXmlelement_part = 500, 
    RuleXml_root_version = 501, RuleOpt_xml_root_standalone = 502, RuleXml_attributes = 503, 
    RuleXml_attribute_list = 504, RuleXml_attribute_el = 505, RuleDocument_or_content = 506, 
    RuleXml_whitespace_option = 507, RuleXmlexists_argument = 508, RuleExtract_list = 509, 
    RuleExtract_arg = 510, RuleOverlay_list = 511, RuleOverlay_placing = 512, 
    RulePosition_list = 513, RuleSubstr_list = 514, RuleSubstr_from = 515, 
    RuleSubstr_for = 516, RuleTrim_list = 517, RuleSimple_function = 518, 
    RuleFunc_name = 519, RuleSimple_func_params = 520, RuleAtom = 521, RuleGeneral_element = 522, 
    RuleGeneral_element_part = 523, RuleIdentifier = 524, RuleRegular_id_common = 525, 
    RuleRegular_id = 526, RuleConstant = 527, RuleCase_expr = 528, RuleWhen_clause = 529, 
    RuleCase_default = 530, RuleQuantified_expression = 531, RuleArray_expr = 532, 
    RuleArray_expr_list = 533, RuleReserved_keywords_normal = 534, RuleReserved_keywords_can_be_name = 535, 
    RuleNonreserved_keywords_normal = 536, RuleNon_keywords_but_token = 537, 
    RuleNonreserved_keywords_can_not_be_name = 538
  };

  Gauss200Parser(antlr4::TokenStream *input);
  ~Gauss200Parser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class StmtblockContext;
  class StmtmultiContext;
  class Sql_stmtContext;
  class StmtContext;
  class Other_stmtContext;
  class Begin_stmtContext;
  class Abort_stmtContext;
  class Work_transactionContext;
  class Alter_group_mapping_stmtContext;
  class App_nameContext;
  class Paren_assignment_stmt_listContext;
  class Assignment_stmt_listContext;
  class Assignment_stmtContext;
  class Assignment_valueContext;
  class Alter_database_stmtContext;
  class Database_nameContext;
  class Alter_database_optionContext;
  class Connection_limitContext;
  class IntegerContext;
  class Rename_owner_to_optionContext;
  class Rename_to_optionContext;
  class Owner_to_optionContext;
  class New_nameContext;
  class Set_configuration_paramContext;
  class Configuration_param_valueContext;
  class Reset_configuration_paramContext;
  class Configuration_paramContext;
  class Alter_data_source_stmtContext;
  class Src_nameContext;
  class Alter_data_src_optionContext;
  class Data_src_type_version_optionContext;
  class Alter_property_optionsContext;
  class Alter_property_optionContext;
  class OptnameContext;
  class Alter_default_privilege_stmtContext;
  class Target_role_listContext;
  class Target_roleContext;
  class Schema_name_listContext;
  class Schema_nameContext;
  class Abbreviated_grant_or_revokeContext;
  class Grant_on_tables_clauseContext;
  class All_privilegesContext;
  class Table_privilegesContext;
  class Table_privilegeContext;
  class Grant_revoke_objectsContext;
  class Grant_revoke_objContext;
  class Role_nameContext;
  class With_grant_optionContext;
  class Grant_on_functions_clauseContext;
  class Function_privilegeContext;
  class Grant_on_types_clauseContext;
  class Type_privilegeContext;
  class Revoke_on_tables_clauseContext;
  class Grant_option_forContext;
  class Cascade_restrictContext;
  class Revoke_on_functions_clauseContext;
  class Revoke_on_types_clauseContext;
  class Alter_directory_stmtContext;
  class Directory_nameContext;
  class Alter_foreign_table_stmtContext;
  class If_exists_or_notContext;
  class Table_nameContext;
  class AttrContext;
  class Alter_foreign_table_optionContext;
  class Alter_foreign_table_action_listContext;
  class Alter_foreign_table_actionContext;
  class Column_nameContext;
  class Alter_foreign_table_action_optionContext;
  class Alter_set_statistics_optionContext;
  class Alter_add_information_constraintContext;
  class Column_constraint_primary_uniqueContext;
  class Constraint_nameContext;
  class Add_info_constraint_optionContext;
  class Alter_drop_information_constraintContext;
  class Alter_function_stmtContext;
  class Function_with_argtypesContext;
  class Func_argsContext;
  class Func_args_listContext;
  class Func_argContext;
  class ArgmodeContext;
  class Param_nameContext;
  class Alter_func_optionContext;
  class Alter_function_actionContext;
  class Alter_set_schemaContext;
  class Alter_group_stmtContext;
  class Group_nameContext;
  class Alter_group_optionContext;
  class User_name_listContext;
  class User_nameContext;
  class Alter_index_stmtContext;
  class Index_nameContext;
  class Alter_index_optionContext;
  class Set_tablespace_optionContext;
  class Tablespace_name_optionContext;
  class Set_assignment_listContext;
  class Reset_param_listContext;
  class Tablespace_nameContext;
  class Parameter_listContext;
  class Parameter_nameContext;
  class Partition_nameContext;
  class Alter_large_obj_stmtContext;
  class Alter_node_stmtContext;
  class NodenameContext;
  class Paren_node_listContext;
  class Node_listContext;
  class Alter_node_optionContext;
  class Alter_node_group_stmtContext;
  class Alter_node_group_optionContext;
  class Add_node_listContext;
  class Delete_node_listContext;
  class Alter_resource_pool_stmtContext;
  class Pool_nameContext;
  class Alter_role_stmtContext;
  class Alter_role_optionContext;
  class Role_option_commonContext;
  class Alter_role_with_optionContext;
  class Alter_role_encrypt_optionContext;
  class Logic_cluster_nameContext;
  class Alter_role_level_security_policy_stmtContext;
  class Row_level_securityContext;
  class Policy_nameContext;
  class Alter_role_level_security_policy_optionContext;
  class Using_expr_optionContext;
  class Alter_schema_stmtContext;
  class Alter_sequence_stmtContext;
  class Sequence_nameContext;
  class Alter_seq_optionContext;
  class Alter_server_stmtContext;
  class Server_nameContext;
  class Alter_server_optionContext;
  class Alter_session_stmtContext;
  class Alter_session_optionContext;
  class Alter_session_transaction_param_listContext;
  class Alter_session_transaction_paramContext;
  class Alter_session_runtime_paramContext;
  class Expr_defaultContext;
  class Encoding_nameContext;
  class Alter_sys_kill_session_stmtContext;
  class Alter_table_stmtContext;
  class Alter_table_nameContext;
  class Alter_table_stmt_optionContext;
  class Alter_table_optionContext;
  class Alter_table_action_listContext;
  class Alter_table_actionContext;
  class Column_clauseContext;
  class Column_clause_add_column_optionContext;
  class Column_with_typeContext;
  class Compress_typeContext;
  class Collate_optionContext;
  class CollationContext;
  class Alter_table_column_constraintContext;
  class Column_constraint_optionContext;
  class Column_clause_alter_column_optionContext;
  class Alter_table_constraintContext;
  class Alter_table_constraint_optionContext;
  class Paren_column_listContext;
  class Index_parametersContext;
  class Table_constraint_deferrableContext;
  class Table_constraint_using_indexContext;
  class Trigger_nameContext;
  class Alter_table_partition_optionContext;
  class Alter_table_partition_actionContext;
  class Move_clauseContext;
  class Paren_partition_value_listContext;
  class Paren_partition_valueContext;
  class Partition_valueContext;
  class Exchange_clauseContext;
  class Row_clauseContext;
  class Merge_clauseContext;
  class Modify_clauseContext;
  class Split_clauseContext;
  class Split_point_clauseContext;
  class Split_point_clause_optionContext;
  class No_split_point_clauseContext;
  class Partition_item_listContext;
  class Partition_itemContext;
  class Partition_less_than_itemContext;
  class Partition_start_end_itemContext;
  class Partition_start_end_item_optionContext;
  class Add_clauseContext;
  class Drop_clauseContext;
  class Alter_tablespace_stmtContext;
  class Alter_tablespace_optionContext;
  class Alter_txt_search_conf_stmtContext;
  class Configuration_nameContext;
  class Alter_txt_search_conf_optionContext;
  class Token_type_listContext;
  class Token_typeContext;
  class Dictionary_name_listContext;
  class Dictionary_nameContext;
  class Alter_txt_search_dictionary_stmtContext;
  class Alter_txt_search_dictionary_optionContext;
  class Alter_trigger_stmtContext;
  class Alter_type_stmtContext;
  class Type_nameContext;
  class Alter_type_optionContext;
  class Alter_type_action_listContext;
  class Alter_type_actionContext;
  class Attr_nameContext;
  class Enum_valueContext;
  class Alter_type_add_attr_optionContext;
  class Alter_type_drop_attr_optionContext;
  class Alter_type_alter_attrContext;
  class Alter_user_stmtContext;
  class Alter_user_clauseContext;
  class Alter_view_stmtContext;
  class View_nameContext;
  class Alter_view_optionContext;
  class Workload_group_stmtContext;
  class Create_group_mapping_stmtContext;
  class Create_barrier_stmtContext;
  class Barrier_nameContext;
  class Create_database_stmtContext;
  class Create_data_source_stmtContext;
  class Create_directory_stmtContext;
  class Or_replaceContext;
  class Create_foreign_table_stmtContext;
  class Create_foreign_table_optionContext;
  class Create_foreign_table_import_export_optionContext;
  class Foreign_table_import_export_column_type_listContext;
  class Foreign_table_import_export_column_typeContext;
  class Table_constraint_to_group_nodeContext;
  class Create_foreign_table_on_hadoop_optionContext;
  class Foreign_table_on_hadoop_column_type_listContext;
  class Foreign_table_on_hadoop_column_typeContext;
  class Create_foreign_table_column_constraintContext;
  class Create_function_procedure_stmtContext;
  class Create_function_procedure_clauseContext;
  class Create_func_arg_listContext;
  class Create_func_argContext;
  class Func_return_typeContext;
  class Lang_nameContext;
  class Create_func_procedure_as_optionContext;
  class PlsqlbodyContext;
  class Variable_declarationsContext;
  class Variable_declarationContext;
  class Default_value_partContext;
  class Cursor_declarationContext;
  class Parameter_specContext;
  class Sequence_of_statementsContext;
  class Sequence_of_statementContext;
  class Create_group_stmtContext;
  class Create_index_stmtContext;
  class Create_index_column_listContext;
  class Create_index_columnContext;
  class OpclassContext;
  class Asc_descContext;
  class Nulls_first_lastContext;
  class Create_node_stmtContext;
  class Create_node_group_stmtContext;
  class Create_row_level_security_policy_stmtContext;
  class Row_level_security_policy_objectsContext;
  class Row_level_security_policy_objContext;
  class Create_resource_pool_stmtContext;
  class Create_role_stmtContext;
  class Create_role_with_optionContext;
  class Profile_nameContext;
  class Create_schema_stmtContext;
  class Create_schema_optionContext;
  class Schema_elementContext;
  class Create_sequence_stmtContext;
  class Minvalue_optionContext;
  class Maxvalue_optionContext;
  class Create_server_stmtContext;
  class Create_table_stmtContext;
  class Temporary_tempContext;
  class Create_table_column_type_option_listContext;
  class Create_table_column_type_optionContext;
  class Like_optionContext;
  class Like_option_otherContext;
  class Create_table_stmt_optionContext;
  class Create_table_as_optionContext;
  class Partition_by_optionContext;
  class Paren_partition_keyContext;
  class Partition_keyContext;
  class Create_tablespace_stmtContext;
  class Create_txt_search_stmtContext;
  class Create_trigger_stmtContext;
  class Trigger_typeContext;
  class Trigger_event_listContext;
  class Trigger_eventContext;
  class Create_type_stmtContext;
  class Create_type_optionContext;
  class Create_user_stmtContext;
  class Create_view_stmtContext;
  class Data_manipulate_stmtContext;
  class Select_stmtContext;
  class Subquery_basic_elementsContext;
  class Select_with_parensContext;
  class Subquery_operation_partContext;
  class SubqueryContext;
  class Simple_selectContext;
  class All_distinctContext;
  class Selected_listContext;
  class Selected_list_elementContext;
  class Into_clauseContext;
  class From_clauseContext;
  class From_listContext;
  class Table_refContext;
  class Partition_clauseContext;
  class Table_aliasContext;
  class Table_sampling_clauseContext;
  class Sample_methodContext;
  class Join_typeContext;
  class Using_clauseContext;
  class Group_by_clauseContext;
  class Grouping_elementsContext;
  class Grouping_elementContext;
  class Paren_group_element_expr_listContext;
  class Group_element_exprContext;
  class Having_clauseContext;
  class Window_clauseContext;
  class Window_clause_optionsContext;
  class Window_clause_optionContext;
  class Window_nameContext;
  class Window_definitionContext;
  class Frame_clauseContext;
  class Frame_start_endContext;
  class Order_by_clauseContext;
  class Order_by_clause_optionsContext;
  class Order_by_clause_optionContext;
  class Order_by_clause_exprContext;
  class Nlssort_expression_clauseContext;
  class Limit_clauseContext;
  class Offset_clauseContext;
  class Fetch_clauseContext;
  class For_update_share_clauseContext;
  class Insert_stmtContext;
  class Insert_values_optionContext;
  class Values_expressionContext;
  class Update_stmtContext;
  class Update_set_clauseContext;
  class Delete_stmtContext;
  class With_clauseContext;
  class With_queryContext;
  class With_query_nameContext;
  class As_aliasContext;
  class Alias_nameContext;
  class Where_clauseContext;
  class Return_clauseContext;
  class Output_expr_aliasContext;
  class Drop_database_stmtContext;
  class Drop_group_mapping_stmtContext;
  class Drop_data_source_stmtContext;
  class Drop_directory_stmtContext;
  class Drop_foreign_table_stmtContext;
  class Drop_function_stmtContext;
  class Drop_group_stmtContext;
  class Drop_index_stmtContext;
  class Drop_node_stmtContext;
  class Drop_node_group_stmtContext;
  class Drop_owned_stmtContext;
  class Drop_row_level_security_policy_stmtContext;
  class Drop_procedure_stmtContext;
  class Drop_resource_pool_stmtContext;
  class Drop_role_stmtContext;
  class Drop_schema_stmtContext;
  class Drop_sequence_stmtContext;
  class Drop_name_listContext;
  class Drop_nameContext;
  class Drop_server_stmtContext;
  class Drop_table_stmtContext;
  class Drop_tablespace_stmtContext;
  class Drop_txt_search_stmtContext;
  class Drop_trigger_stmtContext;
  class Drop_type_stmtContext;
  class Drop_user_stmtContext;
  class Drop_view_stmtContext;
  class Drop_workload_group_stmtContext;
  class Analyze_stmtContext;
  class Analyze_keywordContext;
  class Analyze_optionContext;
  class Partition_name_optionContext;
  class Call_stmtContext;
  class Param_expr_listContext;
  class Param_exprContext;
  class Param_opContext;
  class Checkpoint_stmtContext;
  class Clean_connection_stmtContext;
  class Close_stmtContext;
  class Cursor_nameContext;
  class Cluster_stmtContext;
  class Cluster_stmt_optionContext;
  class Comment_stmtContext;
  class Comment_stmt_optionContext;
  class Agg_nameContext;
  class Object_nameContext;
  class Commit_end_stmtContext;
  class Commit_prepared_stmtContext;
  class Copy_stmtContext;
  class Copy_objContext;
  class Copy_stmt_clauseContext;
  class Copy_stmt_optionContext;
  class Paren_copy_clause_option_listContext;
  class Copy_clause_optionContext;
  class Column_offset_listContext;
  class Column_offset_eleContext;
  class Copy_optionContext;
  class Copy_clause_common_optionContext;
  class Boolean_valueContext;
  class Cursor_stmtContext;
  class Deallocate_stmtContext;
  class Do_stmtContext;
  class Do_stmt_codeContext;
  class Execute_stmtsContext;
  class Execute_stmtContext;
  class Execute_direct_stmtContext;
  class Explain_stmtContext;
  class Explain_option_listContext;
  class Explain_optionContext;
  class Explain_plan_stmtContext;
  class Fetch_move_stmtContext;
  class Fetch_direction_clauseContext;
  class Grant_stmtContext;
  class Privileges_for_objContext;
  class Database_privilegesContext;
  class Database_privilegeContext;
  class Cluster_privilegeContext;
  class Grant_on_optionContext;
  class Grant_on_function_option_listContext;
  class Grant_on_function_optionContext;
  class Lock_stmtContext;
  class Lock_in_modeContext;
  class In_mode_optionContext;
  class Prepare_stmtContext;
  class Prepare_transaction_stmtContext;
  class Merge_into_stmtContext;
  class On_condition_clauseContext;
  class When_matched_update_clauseContext;
  class Update_set_column_optionContext;
  class When_not_matched_insert_clauseContext;
  class Not_matched_insert_value_optionContext;
  class Not_matched_insert_valueContext;
  class Reassign_owned_stmtContext;
  class Reindex_stmtContext;
  class Reindex_optionContext;
  class Release_savepoint_stmtContext;
  class Reset_stmtContext;
  class Savepoint_nameContext;
  class Revoke_stmtContext;
  class Admin_option_forContext;
  class Rollback_stmtContext;
  class Savepoint_stmtContext;
  class Set_reset_stmtContext;
  class Set_config_parametersContext;
  class Session_localContext;
  class Set_parameter_optionContext;
  class TimezoneContext;
  class Set_constraintsContext;
  class Set_roleContext;
  class Reset_config_parametersContext;
  class Set_session_authorizationContext;
  class Set_transactionContext;
  class Isolation_level_optionsContext;
  class Isolation_level_optionContext;
  class Show_stmtContext;
  class Start_transaction_stmtContext;
  class Start_transaction_optionContext;
  class Truncate_stmtContext;
  class Vacuum_stmtContext;
  class Vacuum_keyword_listContext;
  class Vacuum_keywordContext;
  class Vacuum_optionContext;
  class Values_stmtContext;
  class Paren_expr_listContext;
  class Expression_listContext;
  class ExpressionContext;
  class Logical_exprContext;
  class Multiset_exprContext;
  class Relational_exprContext;
  class Relational_opContext;
  class Compound_exprContext;
  class In_exprContext;
  class Between_elementsContext;
  class Concatenation_listContext;
  class ConcatenationContext;
  class Geometry_op1Context;
  class Model_exprContext;
  class Unary_exprContext;
  class Geometry_op2Context;
  class Typename_gsContext;
  class Precision_partContext;
  class NumericContext;
  class Number_typeContext;
  class Concurrency_typeContext;
  class Boolean_typeContext;
  class Char_typeContext;
  class Binary_typeContext;
  class Date_typeContext;
  class Time_zone_partContext;
  class Geometry_typeContext;
  class Inet_typeContext;
  class Bit_typeContext;
  class Txt_search_typeContext;
  class Hll_typeContext;
  class Oid_typeContext;
  class Other_typeContext;
  class Typecast_argContext;
  class Function_exprContext;
  class Col_labelContext;
  class Xmlelement_partContext;
  class Xml_root_versionContext;
  class Opt_xml_root_standaloneContext;
  class Xml_attributesContext;
  class Xml_attribute_listContext;
  class Xml_attribute_elContext;
  class Document_or_contentContext;
  class Xml_whitespace_optionContext;
  class Xmlexists_argumentContext;
  class Extract_listContext;
  class Extract_argContext;
  class Overlay_listContext;
  class Overlay_placingContext;
  class Position_listContext;
  class Substr_listContext;
  class Substr_fromContext;
  class Substr_forContext;
  class Trim_listContext;
  class Simple_functionContext;
  class Func_nameContext;
  class Simple_func_paramsContext;
  class AtomContext;
  class General_elementContext;
  class General_element_partContext;
  class IdentifierContext;
  class Regular_id_commonContext;
  class Regular_idContext;
  class ConstantContext;
  class Case_exprContext;
  class When_clauseContext;
  class Case_defaultContext;
  class Quantified_expressionContext;
  class Array_exprContext;
  class Array_expr_listContext;
  class Reserved_keywords_normalContext;
  class Reserved_keywords_can_be_nameContext;
  class Nonreserved_keywords_normalContext;
  class Non_keywords_but_tokenContext;
  class Nonreserved_keywords_can_not_be_nameContext; 

  class  StmtblockContext : public antlr4::ParserRuleContext {
  public:
    StmtblockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StmtmultiContext *stmtmulti();
    antlr4::tree::TerminalNode *EOF();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtblockContext* stmtblock();

  class  StmtmultiContext : public antlr4::ParserRuleContext {
  public:
    StmtmultiContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Sql_stmtContext *> sql_stmt();
    Sql_stmtContext* sql_stmt(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtmultiContext* stmtmulti();

  class  Sql_stmtContext : public antlr4::ParserRuleContext {
  public:
    Sql_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StmtContext *stmt();
    Other_stmtContext *other_stmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sql_stmtContext* sql_stmt();

  class  StmtContext : public antlr4::ParserRuleContext {
  public:
    StmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Abort_stmtContext *abort_stmt();
    Alter_group_mapping_stmtContext *alter_group_mapping_stmt();
    Alter_database_stmtContext *alter_database_stmt();
    Alter_data_source_stmtContext *alter_data_source_stmt();
    Alter_default_privilege_stmtContext *alter_default_privilege_stmt();
    Alter_directory_stmtContext *alter_directory_stmt();
    Alter_foreign_table_stmtContext *alter_foreign_table_stmt();
    Alter_function_stmtContext *alter_function_stmt();
    Alter_group_stmtContext *alter_group_stmt();
    Alter_index_stmtContext *alter_index_stmt();
    Alter_large_obj_stmtContext *alter_large_obj_stmt();
    Alter_node_stmtContext *alter_node_stmt();
    Alter_node_group_stmtContext *alter_node_group_stmt();
    Alter_resource_pool_stmtContext *alter_resource_pool_stmt();
    Alter_role_stmtContext *alter_role_stmt();
    Alter_role_level_security_policy_stmtContext *alter_role_level_security_policy_stmt();
    Alter_schema_stmtContext *alter_schema_stmt();
    Alter_sequence_stmtContext *alter_sequence_stmt();
    Alter_server_stmtContext *alter_server_stmt();
    Alter_session_stmtContext *alter_session_stmt();
    Alter_sys_kill_session_stmtContext *alter_sys_kill_session_stmt();
    Alter_table_stmtContext *alter_table_stmt();
    Alter_tablespace_stmtContext *alter_tablespace_stmt();
    Alter_txt_search_conf_stmtContext *alter_txt_search_conf_stmt();
    Alter_txt_search_dictionary_stmtContext *alter_txt_search_dictionary_stmt();
    Alter_trigger_stmtContext *alter_trigger_stmt();
    Alter_type_stmtContext *alter_type_stmt();
    Alter_user_stmtContext *alter_user_stmt();
    Alter_view_stmtContext *alter_view_stmt();
    Workload_group_stmtContext *workload_group_stmt();
    Create_group_mapping_stmtContext *create_group_mapping_stmt();
    Create_barrier_stmtContext *create_barrier_stmt();
    Create_database_stmtContext *create_database_stmt();
    Create_data_source_stmtContext *create_data_source_stmt();
    Create_directory_stmtContext *create_directory_stmt();
    Create_foreign_table_stmtContext *create_foreign_table_stmt();
    Create_function_procedure_stmtContext *create_function_procedure_stmt();
    Create_group_stmtContext *create_group_stmt();
    Create_index_stmtContext *create_index_stmt();
    Create_node_stmtContext *create_node_stmt();
    Create_node_group_stmtContext *create_node_group_stmt();
    Create_row_level_security_policy_stmtContext *create_row_level_security_policy_stmt();
    Create_resource_pool_stmtContext *create_resource_pool_stmt();
    Create_role_stmtContext *create_role_stmt();
    Create_schema_stmtContext *create_schema_stmt();
    Create_sequence_stmtContext *create_sequence_stmt();
    Create_server_stmtContext *create_server_stmt();
    Create_table_stmtContext *create_table_stmt();
    Create_tablespace_stmtContext *create_tablespace_stmt();
    Create_txt_search_stmtContext *create_txt_search_stmt();
    Create_trigger_stmtContext *create_trigger_stmt();
    Create_type_stmtContext *create_type_stmt();
    Create_user_stmtContext *create_user_stmt();
    Create_view_stmtContext *create_view_stmt();
    Data_manipulate_stmtContext *data_manipulate_stmt();
    Drop_database_stmtContext *drop_database_stmt();
    Drop_group_mapping_stmtContext *drop_group_mapping_stmt();
    Drop_data_source_stmtContext *drop_data_source_stmt();
    Drop_directory_stmtContext *drop_directory_stmt();
    Drop_foreign_table_stmtContext *drop_foreign_table_stmt();
    Drop_function_stmtContext *drop_function_stmt();
    Drop_group_stmtContext *drop_group_stmt();
    Drop_index_stmtContext *drop_index_stmt();
    Drop_node_stmtContext *drop_node_stmt();
    Drop_node_group_stmtContext *drop_node_group_stmt();
    Drop_owned_stmtContext *drop_owned_stmt();
    Drop_row_level_security_policy_stmtContext *drop_row_level_security_policy_stmt();
    Drop_procedure_stmtContext *drop_procedure_stmt();
    Drop_resource_pool_stmtContext *drop_resource_pool_stmt();
    Drop_role_stmtContext *drop_role_stmt();
    Drop_schema_stmtContext *drop_schema_stmt();
    Drop_sequence_stmtContext *drop_sequence_stmt();
    Drop_server_stmtContext *drop_server_stmt();
    Drop_table_stmtContext *drop_table_stmt();
    Drop_tablespace_stmtContext *drop_tablespace_stmt();
    Drop_txt_search_stmtContext *drop_txt_search_stmt();
    Drop_trigger_stmtContext *drop_trigger_stmt();
    Drop_type_stmtContext *drop_type_stmt();
    Drop_user_stmtContext *drop_user_stmt();
    Drop_view_stmtContext *drop_view_stmt();
    Drop_workload_group_stmtContext *drop_workload_group_stmt();
    Analyze_stmtContext *analyze_stmt();
    Call_stmtContext *call_stmt();
    Checkpoint_stmtContext *checkpoint_stmt();
    Clean_connection_stmtContext *clean_connection_stmt();
    Close_stmtContext *close_stmt();
    Cluster_stmtContext *cluster_stmt();
    Comment_stmtContext *comment_stmt();
    Copy_stmtContext *copy_stmt();
    Cursor_stmtContext *cursor_stmt();
    Deallocate_stmtContext *deallocate_stmt();
    Do_stmtContext *do_stmt();
    Execute_stmtContext *execute_stmt();
    Execute_direct_stmtContext *execute_direct_stmt();
    Fetch_move_stmtContext *fetch_move_stmt();
    Grant_stmtContext *grant_stmt();
    Lock_stmtContext *lock_stmt();
    Merge_into_stmtContext *merge_into_stmt();
    Prepare_stmtContext *prepare_stmt();
    Prepare_transaction_stmtContext *prepare_transaction_stmt();
    Reassign_owned_stmtContext *reassign_owned_stmt();
    Reindex_stmtContext *reindex_stmt();
    Release_savepoint_stmtContext *release_savepoint_stmt();
    Reset_stmtContext *reset_stmt();
    Revoke_stmtContext *revoke_stmt();
    Rollback_stmtContext *rollback_stmt();
    Savepoint_stmtContext *savepoint_stmt();
    Set_reset_stmtContext *set_reset_stmt();
    Start_transaction_stmtContext *start_transaction_stmt();
    Truncate_stmtContext *truncate_stmt();
    Update_stmtContext *update_stmt();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtContext* stmt();

  class  Other_stmtContext : public antlr4::ParserRuleContext {
  public:
    Other_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Vacuum_stmtContext *vacuum_stmt();
    Values_stmtContext *values_stmt();
    Show_stmtContext *show_stmt();
    Explain_stmtContext *explain_stmt();
    Explain_plan_stmtContext *explain_plan_stmt();
    Commit_end_stmtContext *commit_end_stmt();
    Commit_prepared_stmtContext *commit_prepared_stmt();
    Begin_stmtContext *begin_stmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Other_stmtContext* other_stmt();

  class  Begin_stmtContext : public antlr4::ParserRuleContext {
  public:
    Begin_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN_GS();
    Execute_stmtsContext *execute_stmts();
    antlr4::tree::TerminalNode *END_GS();
    antlr4::tree::TerminalNode *DECLARE_GS();
    Variable_declarationsContext *variable_declarations();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Begin_stmtContext* begin_stmt();

  class  Abort_stmtContext : public antlr4::ParserRuleContext {
  public:
    Abort_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ABORT_GS();
    Work_transactionContext *work_transaction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Abort_stmtContext* abort_stmt();

  class  Work_transactionContext : public antlr4::ParserRuleContext {
  public:
    Work_transactionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WORK_GS();
    antlr4::tree::TerminalNode *TRANSACTION_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Work_transactionContext* work_transaction();

  class  Alter_group_mapping_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_group_mapping_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER_GS();
    antlr4::tree::TerminalNode *APP_GS();
    antlr4::tree::TerminalNode *WORKLOAD_GS();
    antlr4::tree::TerminalNode *GROUP_GS();
    antlr4::tree::TerminalNode *MAPPING_GS();
    App_nameContext *app_name();
    antlr4::tree::TerminalNode *WITH_GS();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Assignment_stmtContext *assignment_stmt();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_group_mapping_stmtContext* alter_group_mapping_stmt();

  class  App_nameContext : public antlr4::ParserRuleContext {
  public:
    App_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  App_nameContext* app_name();

  class  Paren_assignment_stmt_listContext : public antlr4::ParserRuleContext {
  public:
    Paren_assignment_stmt_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Assignment_stmt_listContext *assignment_stmt_list();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Paren_assignment_stmt_listContext* paren_assignment_stmt_list();

  class  Assignment_stmt_listContext : public antlr4::ParserRuleContext {
  public:
    Assignment_stmt_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Assignment_stmtContext *> assignment_stmt();
    Assignment_stmtContext* assignment_stmt(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assignment_stmt_listContext* assignment_stmt_list();

  class  Assignment_stmtContext : public antlr4::ParserRuleContext {
  public:
    Assignment_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    Assignment_valueContext *assignment_value();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *EQUALS_OP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assignment_stmtContext* assignment_stmt();

  class  Assignment_valueContext : public antlr4::ParserRuleContext {
  public:
    Assignment_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DEFAULT_GS();
    antlr4::tree::TerminalNode *SCONST();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assignment_valueContext* assignment_value();

  class  Alter_database_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_database_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER_GS();
    antlr4::tree::TerminalNode *DATABASE_GS();
    Database_nameContext *database_name();
    Alter_database_optionContext *alter_database_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_database_stmtContext* alter_database_stmt();

  class  Database_nameContext : public antlr4::ParserRuleContext {
  public:
    Database_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Database_nameContext* database_name();

  class  Alter_database_optionContext : public antlr4::ParserRuleContext {
  public:
    Alter_database_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Connection_limitContext *connection_limit();
    antlr4::tree::TerminalNode *WITH_GS();
    Rename_owner_to_optionContext *rename_owner_to_option();
    Set_configuration_paramContext *set_configuration_param();
    Reset_configuration_paramContext *reset_configuration_param();
    antlr4::tree::TerminalNode *PRIVATE_GS();
    antlr4::tree::TerminalNode *OBJECT_GS();
    antlr4::tree::TerminalNode *ENABLE_GS();
    antlr4::tree::TerminalNode *DISABLE_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_database_optionContext* alter_database_option();

  class  Connection_limitContext : public antlr4::ParserRuleContext {
  public:
    Connection_limitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONNECTION_GS();
    antlr4::tree::TerminalNode *LIMIT_GS();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Connection_limitContext* connection_limit();

  class  IntegerContext : public antlr4::ParserRuleContext {
  public:
    IntegerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Unary_exprContext *unary_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntegerContext* integer();

  class  Rename_owner_to_optionContext : public antlr4::ParserRuleContext {
  public:
    Rename_owner_to_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Rename_to_optionContext *rename_to_option();
    Owner_to_optionContext *owner_to_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rename_owner_to_optionContext* rename_owner_to_option();

  class  Rename_to_optionContext : public antlr4::ParserRuleContext {
  public:
    Rename_to_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RENAME_GS();
    antlr4::tree::TerminalNode *TO_GS();
    New_nameContext *new_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rename_to_optionContext* rename_to_option();

  class  Owner_to_optionContext : public antlr4::ParserRuleContext {
  public:
    Owner_to_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OWNER_GS();
    antlr4::tree::TerminalNode *TO_GS();
    New_nameContext *new_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Owner_to_optionContext* owner_to_option();

  class  New_nameContext : public antlr4::ParserRuleContext {
  public:
    New_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  New_nameContext* new_name();

  class  Set_configuration_paramContext : public antlr4::ParserRuleContext {
  public:
    Set_configuration_paramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET_GS();
    Configuration_paramContext *configuration_param();
    std::vector<Configuration_param_valueContext *> configuration_param_value();
    Configuration_param_valueContext* configuration_param_value(size_t i);
    Session_localContext *session_local();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Set_configuration_paramContext* set_configuration_param();

  class  Configuration_param_valueContext : public antlr4::ParserRuleContext {
  public:
    Configuration_param_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Expr_defaultContext *expr_default();
    antlr4::tree::TerminalNode *TO_GS();
    antlr4::tree::TerminalNode *EQUALS_OP();
    antlr4::tree::TerminalNode *FROM_GS();
    antlr4::tree::TerminalNode *CURRENT_GS();
    antlr4::tree::TerminalNode *PUBLIC_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Configuration_param_valueContext* configuration_param_value();

  class  Reset_configuration_paramContext : public antlr4::ParserRuleContext {
  public:
    Reset_configuration_paramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESET_GS();
    Configuration_paramContext *configuration_param();
    antlr4::tree::TerminalNode *ALL_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Reset_configuration_paramContext* reset_configuration_param();

  class  Configuration_paramContext : public antlr4::ParserRuleContext {
  public:
    Configuration_paramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Configuration_paramContext* configuration_param();

  class  Alter_data_source_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_data_source_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER_GS();
    antlr4::tree::TerminalNode *DATA_GS();
    antlr4::tree::TerminalNode *SOURCE_GS();
    Src_nameContext *src_name();
    Alter_data_src_optionContext *alter_data_src_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_data_source_stmtContext* alter_data_source_stmt();

  class  Src_nameContext : public antlr4::ParserRuleContext {
  public:
    Src_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Src_nameContext* src_name();

  class  Alter_data_src_optionContext : public antlr4::ParserRuleContext {
  public:
    Alter_data_src_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Data_src_type_version_optionContext *> data_src_type_version_option();
    Data_src_type_version_optionContext* data_src_type_version_option(size_t i);
    Rename_owner_to_optionContext *rename_owner_to_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_data_src_optionContext* alter_data_src_option();

  class  Data_src_type_version_optionContext : public antlr4::ParserRuleContext {
  public:
    Data_src_type_version_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPE_GS();
    antlr4::tree::TerminalNode *CHAR_STRING();
    antlr4::tree::TerminalNode *VERSION_GS();
    antlr4::tree::TerminalNode *NULL_GS();
    Alter_property_optionsContext *alter_property_options();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Data_src_type_version_optionContext* data_src_type_version_option();

  class  Alter_property_optionsContext : public antlr4::ParserRuleContext {
  public:
    Alter_property_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPTIONS_GS();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    std::vector<Alter_property_optionContext *> alter_property_option();
    Alter_property_optionContext* alter_property_option(size_t i);
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_property_optionsContext* alter_property_options();

  class  Alter_property_optionContext : public antlr4::ParserRuleContext {
  public:
    Alter_property_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OptnameContext *optname();
    antlr4::tree::TerminalNode *CHAR_STRING();
    antlr4::tree::TerminalNode *ADD_GS();
    antlr4::tree::TerminalNode *SET_GS();
    antlr4::tree::TerminalNode *DROP_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_property_optionContext* alter_property_option();

  class  OptnameContext : public antlr4::ParserRuleContext {
  public:
    OptnameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptnameContext* optname();

  class  Alter_default_privilege_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_default_privilege_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER_GS();
    antlr4::tree::TerminalNode *DEFAULT_GS();
    antlr4::tree::TerminalNode *PRIVILEGES_GS();
    Abbreviated_grant_or_revokeContext *abbreviated_grant_or_revoke();
    antlr4::tree::TerminalNode *FOR_GS();
    Target_role_listContext *target_role_list();
    antlr4::tree::TerminalNode *IN_GS();
    antlr4::tree::TerminalNode *SCHEMA_GS();
    Schema_name_listContext *schema_name_list();
    antlr4::tree::TerminalNode *ROLE_GS();
    antlr4::tree::TerminalNode *USER_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_default_privilege_stmtContext* alter_default_privilege_stmt();

  class  Target_role_listContext : public antlr4::ParserRuleContext {
  public:
    Target_role_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Target_roleContext *> target_role();
    Target_roleContext* target_role(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Target_role_listContext* target_role_list();

  class  Target_roleContext : public antlr4::ParserRuleContext {
  public:
    Target_roleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Target_roleContext* target_role();

  class  Schema_name_listContext : public antlr4::ParserRuleContext {
  public:
    Schema_name_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Schema_nameContext *> schema_name();
    Schema_nameContext* schema_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Schema_name_listContext* schema_name_list();

  class  Schema_nameContext : public antlr4::ParserRuleContext {
  public:
    Schema_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Schema_nameContext* schema_name();

  class  Abbreviated_grant_or_revokeContext : public antlr4::ParserRuleContext {
  public:
    Abbreviated_grant_or_revokeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Grant_on_tables_clauseContext *grant_on_tables_clause();
    Grant_on_functions_clauseContext *grant_on_functions_clause();
    Grant_on_types_clauseContext *grant_on_types_clause();
    Revoke_on_tables_clauseContext *revoke_on_tables_clause();
    Revoke_on_functions_clauseContext *revoke_on_functions_clause();
    Revoke_on_types_clauseContext *revoke_on_types_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Abbreviated_grant_or_revokeContext* abbreviated_grant_or_revoke();

  class  Grant_on_tables_clauseContext : public antlr4::ParserRuleContext {
  public:
    Grant_on_tables_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GRANT_GS();
    antlr4::tree::TerminalNode *ON_GS();
    antlr4::tree::TerminalNode *TABLES_GS();
    antlr4::tree::TerminalNode *TO_GS();
    Grant_revoke_objectsContext *grant_revoke_objects();
    Table_privilegesContext *table_privileges();
    All_privilegesContext *all_privileges();
    With_grant_optionContext *with_grant_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grant_on_tables_clauseContext* grant_on_tables_clause();

  class  All_privilegesContext : public antlr4::ParserRuleContext {
  public:
    All_privilegesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL_GS();
    antlr4::tree::TerminalNode *PRIVILEGES_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  All_privilegesContext* all_privileges();

  class  Table_privilegesContext : public antlr4::ParserRuleContext {
  public:
    Table_privilegesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Table_privilegeContext *> table_privilege();
    Table_privilegeContext* table_privilege(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_privilegesContext* table_privileges();

  class  Table_privilegeContext : public antlr4::ParserRuleContext {
  public:
    Table_privilegeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SELECT_GS();
    antlr4::tree::TerminalNode *INSERT_GS();
    antlr4::tree::TerminalNode *UPDATE_GS();
    antlr4::tree::TerminalNode *DELETE_GS();
    antlr4::tree::TerminalNode *TRUNCATE_GS();
    antlr4::tree::TerminalNode *REFERENCES_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_privilegeContext* table_privilege();

  class  Grant_revoke_objectsContext : public antlr4::ParserRuleContext {
  public:
    Grant_revoke_objectsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Grant_revoke_objContext *> grant_revoke_obj();
    Grant_revoke_objContext* grant_revoke_obj(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grant_revoke_objectsContext* grant_revoke_objects();

  class  Grant_revoke_objContext : public antlr4::ParserRuleContext {
  public:
    Grant_revoke_objContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Role_nameContext *role_name();
    antlr4::tree::TerminalNode *GROUP_GS();
    antlr4::tree::TerminalNode *PUBLIC_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grant_revoke_objContext* grant_revoke_obj();

  class  Role_nameContext : public antlr4::ParserRuleContext {
  public:
    Role_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Role_nameContext* role_name();

  class  With_grant_optionContext : public antlr4::ParserRuleContext {
  public:
    With_grant_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH_GS();
    antlr4::tree::TerminalNode *GRANT_GS();
    antlr4::tree::TerminalNode *OPTION_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  With_grant_optionContext* with_grant_option();

  class  Grant_on_functions_clauseContext : public antlr4::ParserRuleContext {
  public:
    Grant_on_functions_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GRANT_GS();
    antlr4::tree::TerminalNode *ON_GS();
    antlr4::tree::TerminalNode *FUNCTIONS_GS();
    antlr4::tree::TerminalNode *TO_GS();
    Grant_revoke_objectsContext *grant_revoke_objects();
    Function_privilegeContext *function_privilege();
    All_privilegesContext *all_privileges();
    With_grant_optionContext *with_grant_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grant_on_functions_clauseContext* grant_on_functions_clause();

  class  Function_privilegeContext : public antlr4::ParserRuleContext {
  public:
    Function_privilegeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXECUTE_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_privilegeContext* function_privilege();

  class  Grant_on_types_clauseContext : public antlr4::ParserRuleContext {
  public:
    Grant_on_types_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GRANT_GS();
    antlr4::tree::TerminalNode *ON_GS();
    antlr4::tree::TerminalNode *TYPES_GS();
    antlr4::tree::TerminalNode *TO_GS();
    Grant_revoke_objectsContext *grant_revoke_objects();
    Type_privilegeContext *type_privilege();
    All_privilegesContext *all_privileges();
    With_grant_optionContext *with_grant_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grant_on_types_clauseContext* grant_on_types_clause();

  class  Type_privilegeContext : public antlr4::ParserRuleContext {
  public:
    Type_privilegeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USAGE_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_privilegeContext* type_privilege();

  class  Revoke_on_tables_clauseContext : public antlr4::ParserRuleContext {
  public:
    Revoke_on_tables_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REVOKE_GS();
    antlr4::tree::TerminalNode *ON_GS();
    antlr4::tree::TerminalNode *TABLES_GS();
    antlr4::tree::TerminalNode *FROM_GS();
    Grant_revoke_objectsContext *grant_revoke_objects();
    Table_privilegesContext *table_privileges();
    All_privilegesContext *all_privileges();
    Grant_option_forContext *grant_option_for();
    Cascade_restrictContext *cascade_restrict();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Revoke_on_tables_clauseContext* revoke_on_tables_clause();

  class  Grant_option_forContext : public antlr4::ParserRuleContext {
  public:
    Grant_option_forContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GRANT_GS();
    antlr4::tree::TerminalNode *OPTION_GS();
    antlr4::tree::TerminalNode *FOR_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grant_option_forContext* grant_option_for();

  class  Cascade_restrictContext : public antlr4::ParserRuleContext {
  public:
    Cascade_restrictContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASCADE_GS();
    antlr4::tree::TerminalNode *CONSTRAINTS_GS();
    antlr4::tree::TerminalNode *RESTRICT_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cascade_restrictContext* cascade_restrict();

  class  Revoke_on_functions_clauseContext : public antlr4::ParserRuleContext {
  public:
    Revoke_on_functions_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REVOKE_GS();
    antlr4::tree::TerminalNode *ON_GS();
    antlr4::tree::TerminalNode *FUNCTIONS_GS();
    antlr4::tree::TerminalNode *FROM_GS();
    Grant_revoke_objectsContext *grant_revoke_objects();
    Function_privilegeContext *function_privilege();
    All_privilegesContext *all_privileges();
    Grant_option_forContext *grant_option_for();
    Cascade_restrictContext *cascade_restrict();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Revoke_on_functions_clauseContext* revoke_on_functions_clause();

  class  Revoke_on_types_clauseContext : public antlr4::ParserRuleContext {
  public:
    Revoke_on_types_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REVOKE_GS();
    antlr4::tree::TerminalNode *ON_GS();
    antlr4::tree::TerminalNode *TYPES_GS();
    antlr4::tree::TerminalNode *FROM_GS();
    Grant_revoke_objectsContext *grant_revoke_objects();
    Type_privilegeContext *type_privilege();
    All_privilegesContext *all_privileges();
    Grant_option_forContext *grant_option_for();
    Cascade_restrictContext *cascade_restrict();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Revoke_on_types_clauseContext* revoke_on_types_clause();

  class  Alter_directory_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_directory_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER_GS();
    antlr4::tree::TerminalNode *DIRECTORY_GS();
    Directory_nameContext *directory_name();
    Owner_to_optionContext *owner_to_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_directory_stmtContext* alter_directory_stmt();

  class  Directory_nameContext : public antlr4::ParserRuleContext {
  public:
    Directory_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Directory_nameContext* directory_name();

  class  Alter_foreign_table_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_foreign_table_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER_GS();
    antlr4::tree::TerminalNode *FOREIGN_GS();
    antlr4::tree::TerminalNode *TABLE_GS();
    Table_nameContext *table_name();
    Alter_foreign_table_optionContext *alter_foreign_table_option();
    If_exists_or_notContext *if_exists_or_not();
    Cascade_restrictContext *cascade_restrict();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_foreign_table_stmtContext* alter_foreign_table_stmt();

  class  If_exists_or_notContext : public antlr4::ParserRuleContext {
  public:
    If_exists_or_notContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF_GS();
    antlr4::tree::TerminalNode *EXISTS_GS();
    antlr4::tree::TerminalNode *NOT_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_exists_or_notContext* if_exists_or_not();

  class  Table_nameContext : public antlr4::ParserRuleContext {
  public:
    Table_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    std::vector<AttrContext *> attr();
    AttrContext* attr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_nameContext* table_name();

  class  AttrContext : public antlr4::ParserRuleContext {
  public:
    AttrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PERIOD();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttrContext* attr();

  class  Alter_foreign_table_optionContext : public antlr4::ParserRuleContext {
  public:
    Alter_foreign_table_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Alter_property_optionsContext *alter_property_options();
    Owner_to_optionContext *owner_to_option();
    Alter_foreign_table_action_listContext *alter_foreign_table_action_list();
    Alter_add_information_constraintContext *alter_add_information_constraint();
    Alter_drop_information_constraintContext *alter_drop_information_constraint();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_foreign_table_optionContext* alter_foreign_table_option();

  class  Alter_foreign_table_action_listContext : public antlr4::ParserRuleContext {
  public:
    Alter_foreign_table_action_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Alter_foreign_table_actionContext *> alter_foreign_table_action();
    Alter_foreign_table_actionContext* alter_foreign_table_action(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_foreign_table_action_listContext* alter_foreign_table_action_list();

  class  Alter_foreign_table_actionContext : public antlr4::ParserRuleContext {
  public:
    Alter_foreign_table_actionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER_GS();
    Column_nameContext *column_name();
    Alter_foreign_table_action_optionContext *alter_foreign_table_action_option();
    antlr4::tree::TerminalNode *COLUMN_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_foreign_table_actionContext* alter_foreign_table_action();

  class  Column_nameContext : public antlr4::ParserRuleContext {
  public:
    Column_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    std::vector<AttrContext *> attr();
    AttrContext* attr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_nameContext* column_name();

  class  Alter_foreign_table_action_optionContext : public antlr4::ParserRuleContext {
  public:
    Alter_foreign_table_action_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPE_GS();
    Typename_gsContext *typename_gs();
    antlr4::tree::TerminalNode *SET_GS();
    antlr4::tree::TerminalNode *DATA_GS();
    antlr4::tree::TerminalNode *NOT_GS();
    antlr4::tree::TerminalNode *NULL_GS();
    antlr4::tree::TerminalNode *DROP_GS();
    Alter_set_statistics_optionContext *alter_set_statistics_option();
    Alter_property_optionsContext *alter_property_options();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_foreign_table_action_optionContext* alter_foreign_table_action_option();

  class  Alter_set_statistics_optionContext : public antlr4::ParserRuleContext {
  public:
    Alter_set_statistics_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET_GS();
    antlr4::tree::TerminalNode *STATISTICS_GS();
    IntegerContext *integer();
    antlr4::tree::TerminalNode *PERCENT_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_set_statistics_optionContext* alter_set_statistics_option();

  class  Alter_add_information_constraintContext : public antlr4::ParserRuleContext {
  public:
    Alter_add_information_constraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD_GS();
    Column_constraint_primary_uniqueContext *column_constraint_primary_unique();
    antlr4::tree::TerminalNode *CONSTRAINT_GS();
    Constraint_nameContext *constraint_name();
    Add_info_constraint_optionContext *add_info_constraint_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_add_information_constraintContext* alter_add_information_constraint();

  class  Column_constraint_primary_uniqueContext : public antlr4::ParserRuleContext {
  public:
    Column_constraint_primary_uniqueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRIMARY_GS();
    antlr4::tree::TerminalNode *KEY_GS();
    antlr4::tree::TerminalNode *UNIQUE_GS();
    Paren_column_listContext *paren_column_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_constraint_primary_uniqueContext* column_constraint_primary_unique();

  class  Constraint_nameContext : public antlr4::ParserRuleContext {
  public:
    Constraint_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constraint_nameContext* constraint_name();

  class  Add_info_constraint_optionContext : public antlr4::ParserRuleContext {
  public:
    Add_info_constraint_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENFORCED_GS();
    antlr4::tree::TerminalNode *NOT_GS();
    antlr4::tree::TerminalNode *QUERY_GS();
    antlr4::tree::TerminalNode *OPTIMIZATION_GS();
    antlr4::tree::TerminalNode *ENABLE_GS();
    antlr4::tree::TerminalNode *DISABLE_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Add_info_constraint_optionContext* add_info_constraint_option();

  class  Alter_drop_information_constraintContext : public antlr4::ParserRuleContext {
  public:
    Alter_drop_information_constraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP_GS();
    antlr4::tree::TerminalNode *CONSTRAINT_GS();
    Constraint_nameContext *constraint_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_drop_information_constraintContext* alter_drop_information_constraint();

  class  Alter_function_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_function_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER_GS();
    antlr4::tree::TerminalNode *FUNCTION_GS();
    Function_with_argtypesContext *function_with_argtypes();
    Alter_func_optionContext *alter_func_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_function_stmtContext* alter_function_stmt();

  class  Function_with_argtypesContext : public antlr4::ParserRuleContext {
  public:
    Function_with_argtypesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Func_nameContext *func_name();
    Func_argsContext *func_args();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_with_argtypesContext* function_with_argtypes();

  class  Func_argsContext : public antlr4::ParserRuleContext {
  public:
    Func_argsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PAREN();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    Func_args_listContext *func_args_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_argsContext* func_args();

  class  Func_args_listContext : public antlr4::ParserRuleContext {
  public:
    Func_args_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Func_argContext *> func_arg();
    Func_argContext* func_arg(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_args_listContext* func_args_list();

  class  Func_argContext : public antlr4::ParserRuleContext {
  public:
    Func_argContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Typename_gsContext *typename_gs();
    ArgmodeContext *argmode();
    Param_nameContext *param_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_argContext* func_arg();

  class  ArgmodeContext : public antlr4::ParserRuleContext {
  public:
    ArgmodeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IN_GS();
    antlr4::tree::TerminalNode *OUT_GS();
    antlr4::tree::TerminalNode *INOUT_GS();
    antlr4::tree::TerminalNode *VARIADIC_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgmodeContext* argmode();

  class  Param_nameContext : public antlr4::ParserRuleContext {
  public:
    Param_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *SCONST();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Param_nameContext* param_name();

  class  Alter_func_optionContext : public antlr4::ParserRuleContext {
  public:
    Alter_func_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Alter_function_actionContext *> alter_function_action();
    Alter_function_actionContext* alter_function_action(size_t i);
    antlr4::tree::TerminalNode *RESTRICT_GS();
    Rename_owner_to_optionContext *rename_owner_to_option();
    Alter_set_schemaContext *alter_set_schema();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_func_optionContext* alter_func_option();

  class  Alter_function_actionContext : public antlr4::ParserRuleContext {
  public:
    Alter_function_actionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CALLED_GS();
    antlr4::tree::TerminalNode *ON_GS();
    std::vector<antlr4::tree::TerminalNode *> NULL_GS();
    antlr4::tree::TerminalNode* NULL_GS(size_t i);
    antlr4::tree::TerminalNode *INPUT_GS();
    antlr4::tree::TerminalNode *RETURNS_GS();
    antlr4::tree::TerminalNode *STRICT_GS();
    antlr4::tree::TerminalNode *IMMUTABLE_GS();
    antlr4::tree::TerminalNode *STABLE_GS();
    antlr4::tree::TerminalNode *VOLATILE_GS();
    antlr4::tree::TerminalNode *SHIPPABLE_GS();
    antlr4::tree::TerminalNode *FENCED_GS();
    antlr4::tree::TerminalNode *LEAKPROOF_GS();
    antlr4::tree::TerminalNode *NOT_GS();
    antlr4::tree::TerminalNode *SECURITY_GS();
    antlr4::tree::TerminalNode *INVOKER_GS();
    antlr4::tree::TerminalNode *DEFINER_GS();
    antlr4::tree::TerminalNode *EXTERNAL_GS();
    antlr4::tree::TerminalNode *AUTHID_GS();
    antlr4::tree::TerminalNode *CURRENT_USER_GS();
    NumericContext *numeric();
    antlr4::tree::TerminalNode *COST_GS();
    antlr4::tree::TerminalNode *ROWS_GS();
    Set_configuration_paramContext *set_configuration_param();
    Reset_configuration_paramContext *reset_configuration_param();
    antlr4::tree::TerminalNode *PACKAGE_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_function_actionContext* alter_function_action();

  class  Alter_set_schemaContext : public antlr4::ParserRuleContext {
  public:
    Alter_set_schemaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET_GS();
    antlr4::tree::TerminalNode *SCHEMA_GS();
    Schema_nameContext *schema_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_set_schemaContext* alter_set_schema();

  class  Alter_group_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_group_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER_GS();
    antlr4::tree::TerminalNode *GROUP_GS();
    Group_nameContext *group_name();
    Alter_group_optionContext *alter_group_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_group_stmtContext* alter_group_stmt();

  class  Group_nameContext : public antlr4::ParserRuleContext {
  public:
    Group_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Group_nameContext* group_name();

  class  Alter_group_optionContext : public antlr4::ParserRuleContext {
  public:
    Alter_group_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USER_GS();
    User_name_listContext *user_name_list();
    antlr4::tree::TerminalNode *ADD_GS();
    antlr4::tree::TerminalNode *DROP_GS();
    Rename_to_optionContext *rename_to_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_group_optionContext* alter_group_option();

  class  User_name_listContext : public antlr4::ParserRuleContext {
  public:
    User_name_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<User_nameContext *> user_name();
    User_nameContext* user_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  User_name_listContext* user_name_list();

  class  User_nameContext : public antlr4::ParserRuleContext {
  public:
    User_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  User_nameContext* user_name();

  class  Alter_index_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_index_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER_GS();
    antlr4::tree::TerminalNode *INDEX_GS();
    Index_nameContext *index_name();
    Alter_index_optionContext *alter_index_option();
    If_exists_or_notContext *if_exists_or_not();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_index_stmtContext* alter_index_stmt();

  class  Index_nameContext : public antlr4::ParserRuleContext {
  public:
    Index_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    std::vector<AttrContext *> attr();
    AttrContext* attr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Index_nameContext* index_name();

  class  Alter_index_optionContext : public antlr4::ParserRuleContext {
  public:
    Alter_index_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Rename_to_optionContext *rename_to_option();
    Set_tablespace_optionContext *set_tablespace_option();
    Set_assignment_listContext *set_assignment_list();
    Reset_param_listContext *reset_param_list();
    antlr4::tree::TerminalNode *UNUSABLE_GS();
    antlr4::tree::TerminalNode *MODIFY_GS();
    antlr4::tree::TerminalNode *PARTITION_GS();
    Partition_nameContext *partition_name();
    antlr4::tree::TerminalNode *REBUILD_GS();
    antlr4::tree::TerminalNode *RENAME_GS();
    antlr4::tree::TerminalNode *TO_GS();
    New_nameContext *new_name();
    antlr4::tree::TerminalNode *MOVE_GS();
    antlr4::tree::TerminalNode *TABLESPACE_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_index_optionContext* alter_index_option();

  class  Set_tablespace_optionContext : public antlr4::ParserRuleContext {
  public:
    Set_tablespace_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET_GS();
    Tablespace_name_optionContext *tablespace_name_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Set_tablespace_optionContext* set_tablespace_option();

  class  Tablespace_name_optionContext : public antlr4::ParserRuleContext {
  public:
    Tablespace_name_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLESPACE_GS();
    Tablespace_nameContext *tablespace_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tablespace_name_optionContext* tablespace_name_option();

  class  Set_assignment_listContext : public antlr4::ParserRuleContext {
  public:
    Set_assignment_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET_GS();
    Paren_assignment_stmt_listContext *paren_assignment_stmt_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Set_assignment_listContext* set_assignment_list();

  class  Reset_param_listContext : public antlr4::ParserRuleContext {
  public:
    Reset_param_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESET_GS();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Parameter_listContext *parameter_list();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Reset_param_listContext* reset_param_list();

  class  Tablespace_nameContext : public antlr4::ParserRuleContext {
  public:
    Tablespace_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tablespace_nameContext* tablespace_name();

  class  Parameter_listContext : public antlr4::ParserRuleContext {
  public:
    Parameter_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Parameter_nameContext *> parameter_name();
    Parameter_nameContext* parameter_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_listContext* parameter_list();

  class  Parameter_nameContext : public antlr4::ParserRuleContext {
  public:
    Parameter_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_nameContext* parameter_name();

  class  Partition_nameContext : public antlr4::ParserRuleContext {
  public:
    Partition_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Partition_nameContext* partition_name();

  class  Alter_large_obj_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_large_obj_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER_GS();
    antlr4::tree::TerminalNode *LARGE_GS();
    antlr4::tree::TerminalNode *OBJECT_GS();
    IdentifierContext *identifier();
    Owner_to_optionContext *owner_to_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_large_obj_stmtContext* alter_large_obj_stmt();

  class  Alter_node_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_node_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER_GS();
    antlr4::tree::TerminalNode *NODE_GS();
    NodenameContext *nodename();
    antlr4::tree::TerminalNode *WITH_GS();
    Paren_assignment_stmt_listContext *paren_assignment_stmt_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_node_stmtContext* alter_node_stmt();

  class  NodenameContext : public antlr4::ParserRuleContext {
  public:
    NodenameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NodenameContext* nodename();

  class  Paren_node_listContext : public antlr4::ParserRuleContext {
  public:
    Paren_node_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Node_listContext *node_list();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Paren_node_listContext* paren_node_list();

  class  Node_listContext : public antlr4::ParserRuleContext {
  public:
    Node_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NodenameContext *> nodename();
    NodenameContext* nodename(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Node_listContext* node_list();

  class  Alter_node_optionContext : public antlr4::ParserRuleContext {
  public:
    Alter_node_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_node_optionContext* alter_node_option();

  class  Alter_node_group_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_node_group_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER_GS();
    antlr4::tree::TerminalNode *NODE_GS();
    antlr4::tree::TerminalNode *GROUP_GS();
    Group_nameContext *group_name();
    Alter_node_group_optionContext *alter_node_group_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_node_group_stmtContext* alter_node_group_stmt();

  class  Alter_node_group_optionContext : public antlr4::ParserRuleContext {
  public:
    Alter_node_group_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET_GS();
    antlr4::tree::TerminalNode *DEFAULT_GS();
    Rename_to_optionContext *rename_to_option();
    antlr4::tree::TerminalNode *VCGROUP_GS();
    antlr4::tree::TerminalNode *NOT_GS();
    antlr4::tree::TerminalNode *TABLE_GS();
    antlr4::tree::TerminalNode *GROUP_GS();
    New_nameContext *new_name();
    antlr4::tree::TerminalNode *COPY_GS();
    antlr4::tree::TerminalNode *BUCKETS_GS();
    antlr4::tree::TerminalNode *FROM_GS();
    Group_nameContext *group_name();
    Add_node_listContext *add_node_list();
    Delete_node_listContext *delete_node_list();
    antlr4::tree::TerminalNode *RESIZE_GS();
    antlr4::tree::TerminalNode *TO_GS();
    antlr4::tree::TerminalNode *WITH_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_node_group_optionContext* alter_node_group_option();

  class  Add_node_listContext : public antlr4::ParserRuleContext {
  public:
    Add_node_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD_GS();
    antlr4::tree::TerminalNode *NODE_GS();
    Paren_node_listContext *paren_node_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Add_node_listContext* add_node_list();

  class  Delete_node_listContext : public antlr4::ParserRuleContext {
  public:
    Delete_node_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELETE_GS();
    antlr4::tree::TerminalNode *NODE_GS();
    Paren_node_listContext *paren_node_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delete_node_listContext* delete_node_list();

  class  Alter_resource_pool_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_resource_pool_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER_GS();
    antlr4::tree::TerminalNode *RESOURCE_GS();
    antlr4::tree::TerminalNode *POOL_GS();
    Pool_nameContext *pool_name();
    antlr4::tree::TerminalNode *WITH_GS();
    Paren_assignment_stmt_listContext *paren_assignment_stmt_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_resource_pool_stmtContext* alter_resource_pool_stmt();

  class  Pool_nameContext : public antlr4::ParserRuleContext {
  public:
    Pool_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pool_nameContext* pool_name();

  class  Alter_role_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_role_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER_GS();
    antlr4::tree::TerminalNode *ROLE_GS();
    Role_nameContext *role_name();
    Alter_role_optionContext *alter_role_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_role_stmtContext* alter_role_stmt();

  class  Alter_role_optionContext : public antlr4::ParserRuleContext {
  public:
    Alter_role_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH_GS();
    std::vector<Alter_role_with_optionContext *> alter_role_with_option();
    Alter_role_with_optionContext* alter_role_with_option(size_t i);
    Rename_to_optionContext *rename_to_option();
    Set_configuration_paramContext *set_configuration_param();
    Reset_configuration_paramContext *reset_configuration_param();
    antlr4::tree::TerminalNode *IN_GS();
    antlr4::tree::TerminalNode *DATABASE_GS();
    Database_nameContext *database_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_role_optionContext* alter_role_option();

  class  Role_option_commonContext : public antlr4::ParserRuleContext {
  public:
    Role_option_commonContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SYSADMIN_GS();
    antlr4::tree::TerminalNode *NOSYSADMIN_GS();
    antlr4::tree::TerminalNode *AUDITADMIN_GS();
    antlr4::tree::TerminalNode *NOAUDITADMIN_GS();
    antlr4::tree::TerminalNode *CREATEDB_GS();
    antlr4::tree::TerminalNode *NOCREATEDB_GS();
    antlr4::tree::TerminalNode *USEFT_GS();
    antlr4::tree::TerminalNode *NOUSEFT_GS();
    antlr4::tree::TerminalNode *CREATEROLE_GS();
    antlr4::tree::TerminalNode *NOCREATEROLE_GS();
    antlr4::tree::TerminalNode *INHERIT_GS();
    antlr4::tree::TerminalNode *NOINHERIT_GS();
    antlr4::tree::TerminalNode *LOGIN_GS();
    antlr4::tree::TerminalNode *NOLOGIN_GS();
    antlr4::tree::TerminalNode *REPLICATION_GS();
    antlr4::tree::TerminalNode *NOREPLICATION_GS();
    antlr4::tree::TerminalNode *INDEPENDENT_GS();
    antlr4::tree::TerminalNode *NOINDEPENDENT_GS();
    antlr4::tree::TerminalNode *VCADMIN_GS();
    antlr4::tree::TerminalNode *NOVCADMIN_GS();
    Connection_limitContext *connection_limit();
    antlr4::tree::TerminalNode *VALID_GS();
    antlr4::tree::TerminalNode *CHAR_STRING();
    antlr4::tree::TerminalNode *BEGIN_GS();
    antlr4::tree::TerminalNode *UNTIL_GS();
    antlr4::tree::TerminalNode *RESOURCE_GS();
    antlr4::tree::TerminalNode *POOL_GS();
    antlr4::tree::TerminalNode *USER_GS();
    antlr4::tree::TerminalNode *GROUP_GS();
    antlr4::tree::TerminalNode *PERM_GS();
    antlr4::tree::TerminalNode *SPACE_GS();
    antlr4::tree::TerminalNode *NODE_GS();
    Logic_cluster_nameContext *logic_cluster_name();
    antlr4::tree::TerminalNode *PGUSER_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Role_option_commonContext* role_option_common();

  class  Alter_role_with_optionContext : public antlr4::ParserRuleContext {
  public:
    Alter_role_with_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Role_option_commonContext *role_option_common();
    Alter_role_encrypt_optionContext *alter_role_encrypt_option();
    antlr4::tree::TerminalNode *ENCRYPTED_GS();
    antlr4::tree::TerminalNode *UNENCRYPTED_GS();
    antlr4::tree::TerminalNode *ACCOUNT_GS();
    antlr4::tree::TerminalNode *LOCK_GS();
    antlr4::tree::TerminalNode *UNLOCK_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_role_with_optionContext* alter_role_with_option();

  class  Alter_role_encrypt_optionContext : public antlr4::ParserRuleContext {
  public:
    Alter_role_encrypt_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PASSWORD_GS();
    std::vector<antlr4::tree::TerminalNode *> CHAR_STRING();
    antlr4::tree::TerminalNode* CHAR_STRING(size_t i);
    antlr4::tree::TerminalNode *DISABLE_GS();
    antlr4::tree::TerminalNode *IDENTIFIED_GS();
    antlr4::tree::TerminalNode *BY_GS();
    antlr4::tree::TerminalNode *REPLACE_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_role_encrypt_optionContext* alter_role_encrypt_option();

  class  Logic_cluster_nameContext : public antlr4::ParserRuleContext {
  public:
    Logic_cluster_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Logic_cluster_nameContext* logic_cluster_name();

  class  Alter_role_level_security_policy_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_role_level_security_policy_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER_GS();
    antlr4::tree::TerminalNode *POLICY_GS();
    Policy_nameContext *policy_name();
    antlr4::tree::TerminalNode *ON_GS();
    Table_nameContext *table_name();
    Alter_role_level_security_policy_optionContext *alter_role_level_security_policy_option();
    Row_level_securityContext *row_level_security();
    If_exists_or_notContext *if_exists_or_not();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_role_level_security_policy_stmtContext* alter_role_level_security_policy_stmt();

  class  Row_level_securityContext : public antlr4::ParserRuleContext {
  public:
    Row_level_securityContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ROW_GS();
    antlr4::tree::TerminalNode *LEVEL_GS();
    antlr4::tree::TerminalNode *SECURITY_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Row_level_securityContext* row_level_security();

  class  Policy_nameContext : public antlr4::ParserRuleContext {
  public:
    Policy_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Policy_nameContext* policy_name();

  class  Alter_role_level_security_policy_optionContext : public antlr4::ParserRuleContext {
  public:
    Alter_role_level_security_policy_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Rename_to_optionContext *rename_to_option();
    std::vector<antlr4::tree::TerminalNode *> TO_GS();
    antlr4::tree::TerminalNode* TO_GS(size_t i);
    std::vector<Grant_revoke_objectsContext *> grant_revoke_objects();
    Grant_revoke_objectsContext* grant_revoke_objects(size_t i);
    std::vector<Using_expr_optionContext *> using_expr_option();
    Using_expr_optionContext* using_expr_option(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_role_level_security_policy_optionContext* alter_role_level_security_policy_option();

  class  Using_expr_optionContext : public antlr4::ParserRuleContext {
  public:
    Using_expr_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USING_GS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Using_expr_optionContext* using_expr_option();

  class  Alter_schema_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_schema_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER_GS();
    antlr4::tree::TerminalNode *SCHEMA_GS();
    Schema_nameContext *schema_name();
    Rename_owner_to_optionContext *rename_owner_to_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_schema_stmtContext* alter_schema_stmt();

  class  Alter_sequence_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_sequence_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER_GS();
    antlr4::tree::TerminalNode *SEQUENCE_GS();
    Sequence_nameContext *sequence_name();
    If_exists_or_notContext *if_exists_or_not();
    Alter_seq_optionContext *alter_seq_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_sequence_stmtContext* alter_sequence_stmt();

  class  Sequence_nameContext : public antlr4::ParserRuleContext {
  public:
    Sequence_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sequence_nameContext* sequence_name();

  class  Alter_seq_optionContext : public antlr4::ParserRuleContext {
  public:
    Alter_seq_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Owner_to_optionContext *owner_to_option();
    antlr4::tree::TerminalNode *OWNED_GS();
    antlr4::tree::TerminalNode *BY_GS();
    General_elementContext *general_element();
    antlr4::tree::TerminalNode *NONE_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_seq_optionContext* alter_seq_option();

  class  Alter_server_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_server_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER_GS();
    antlr4::tree::TerminalNode *SERVER_GS();
    Server_nameContext *server_name();
    Alter_server_optionContext *alter_server_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_server_stmtContext* alter_server_stmt();

  class  Server_nameContext : public antlr4::ParserRuleContext {
  public:
    Server_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Server_nameContext* server_name();

  class  Alter_server_optionContext : public antlr4::ParserRuleContext {
  public:
    Alter_server_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Rename_owner_to_optionContext *rename_owner_to_option();
    Alter_property_optionsContext *alter_property_options();
    antlr4::tree::TerminalNode *VERSION_GS();
    antlr4::tree::TerminalNode *CHAR_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_server_optionContext* alter_server_option();

  class  Alter_session_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_session_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER_GS();
    antlr4::tree::TerminalNode *SESSION_GS();
    antlr4::tree::TerminalNode *SET_GS();
    Alter_session_optionContext *alter_session_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_session_stmtContext* alter_session_stmt();

  class  Alter_session_optionContext : public antlr4::ParserRuleContext {
  public:
    Alter_session_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRANSACTION_GS();
    Alter_session_transaction_param_listContext *alter_session_transaction_param_list();
    antlr4::tree::TerminalNode *SESSION_GS();
    antlr4::tree::TerminalNode *CHARACTERISTICS_GS();
    antlr4::tree::TerminalNode *AS_GS();
    Alter_session_runtime_paramContext *alter_session_runtime_param();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_session_optionContext* alter_session_option();

  class  Alter_session_transaction_param_listContext : public antlr4::ParserRuleContext {
  public:
    Alter_session_transaction_param_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Alter_session_transaction_paramContext *> alter_session_transaction_param();
    Alter_session_transaction_paramContext* alter_session_transaction_param(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_session_transaction_param_listContext* alter_session_transaction_param_list();

  class  Alter_session_transaction_paramContext : public antlr4::ParserRuleContext {
  public:
    Alter_session_transaction_paramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ISOLATION_GS();
    antlr4::tree::TerminalNode *LEVEL_GS();
    antlr4::tree::TerminalNode *READ_GS();
    antlr4::tree::TerminalNode *COMMITTED_GS();
    antlr4::tree::TerminalNode *UNCOMMITTED_GS();
    antlr4::tree::TerminalNode *ONLY_GS();
    antlr4::tree::TerminalNode *WRITE_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_session_transaction_paramContext* alter_session_transaction_param();

  class  Alter_session_runtime_paramContext : public antlr4::ParserRuleContext {
  public:
    Alter_session_runtime_paramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Param_nameContext *param_name();
    Expr_defaultContext *expr_default();
    antlr4::tree::TerminalNode *FROM_GS();
    antlr4::tree::TerminalNode *CURRENT_GS();
    antlr4::tree::TerminalNode *TO_GS();
    antlr4::tree::TerminalNode *EQUALS_OP();
    antlr4::tree::TerminalNode *CURRENT_SCHEMA_GS();
    Schema_nameContext *schema_name();
    antlr4::tree::TerminalNode *DEFAULT_GS();
    antlr4::tree::TerminalNode *TIME_GS();
    antlr4::tree::TerminalNode *ZONE_GS();
    antlr4::tree::TerminalNode *CHAR_STRING();
    antlr4::tree::TerminalNode *SCHEMA_GS();
    antlr4::tree::TerminalNode *NAMES_GS();
    Encoding_nameContext *encoding_name();
    antlr4::tree::TerminalNode *ROLE_GS();
    Role_nameContext *role_name();
    antlr4::tree::TerminalNode *PASSWORD_GS();
    antlr4::tree::TerminalNode *SESSION_GS();
    antlr4::tree::TerminalNode *AUTHORIZATION_GS();
    antlr4::tree::TerminalNode *XML_GS();
    antlr4::tree::TerminalNode *OPTION_GS();
    antlr4::tree::TerminalNode *DOCUMENT_GS();
    antlr4::tree::TerminalNode *CONTENT_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_session_runtime_paramContext* alter_session_runtime_param();

  class  Expr_defaultContext : public antlr4::ParserRuleContext {
  public:
    Expr_defaultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DEFAULT_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_defaultContext* expr_default();

  class  Encoding_nameContext : public antlr4::ParserRuleContext {
  public:
    Encoding_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Encoding_nameContext* encoding_name();

  class  Alter_sys_kill_session_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_sys_kill_session_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER_GS();
    antlr4::tree::TerminalNode *SYSTEM_GS();
    antlr4::tree::TerminalNode *KILL_GS();
    antlr4::tree::TerminalNode *SESSION_GS();
    antlr4::tree::TerminalNode *CHAR_STRING();
    antlr4::tree::TerminalNode *IMMEDIATE_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_sys_kill_session_stmtContext* alter_sys_kill_session_stmt();

  class  Alter_table_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_table_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER_GS();
    antlr4::tree::TerminalNode *TABLE_GS();
    Alter_table_nameContext *alter_table_name();
    Alter_table_stmt_optionContext *alter_table_stmt_option();
    If_exists_or_notContext *if_exists_or_not();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_table_stmtContext* alter_table_stmt();

  class  Alter_table_nameContext : public antlr4::ParserRuleContext {
  public:
    Alter_table_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *ASTERISK();
    antlr4::tree::TerminalNode *ONLY_GS();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_table_nameContext* alter_table_name();

  class  Alter_table_stmt_optionContext : public antlr4::ParserRuleContext {
  public:
    Alter_table_stmt_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Alter_table_optionContext *alter_table_option();
    Alter_table_partition_optionContext *alter_table_partition_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_table_stmt_optionContext* alter_table_stmt_option();

  class  Alter_table_optionContext : public antlr4::ParserRuleContext {
  public:
    Alter_table_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Alter_table_action_listContext *alter_table_action_list();
    Rename_to_optionContext *rename_to_option();
    antlr4::tree::TerminalNode *RENAME_GS();
    Column_nameContext *column_name();
    antlr4::tree::TerminalNode *TO_GS();
    New_nameContext *new_name();
    antlr4::tree::TerminalNode *COLUMN_GS();
    antlr4::tree::TerminalNode *CONSTRAINT_GS();
    Constraint_nameContext *constraint_name();
    Alter_set_schemaContext *alter_set_schema();
    antlr4::tree::TerminalNode *ADD_GS();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    std::vector<Column_clause_add_column_optionContext *> column_clause_add_column_option();
    Column_clause_add_column_optionContext* column_clause_add_column_option(size_t i);
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *MODIFY_GS();
    std::vector<Column_with_typeContext *> column_with_type();
    Column_with_typeContext* column_with_type(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_table_optionContext* alter_table_option();

  class  Alter_table_action_listContext : public antlr4::ParserRuleContext {
  public:
    Alter_table_action_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Alter_table_actionContext *> alter_table_action();
    Alter_table_actionContext* alter_table_action(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_table_action_listContext* alter_table_action_list();

  class  Alter_table_actionContext : public antlr4::ParserRuleContext {
  public:
    Alter_table_actionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_clauseContext *column_clause();
    antlr4::tree::TerminalNode *ADD_GS();
    Alter_table_constraintContext *alter_table_constraint();
    antlr4::tree::TerminalNode *NOT_GS();
    antlr4::tree::TerminalNode *VALID_GS();
    Table_constraint_using_indexContext *table_constraint_using_index();
    antlr4::tree::TerminalNode *VALIDATE_GS();
    antlr4::tree::TerminalNode *CONSTRAINT_GS();
    Constraint_nameContext *constraint_name();
    antlr4::tree::TerminalNode *DROP_GS();
    If_exists_or_notContext *if_exists_or_not();
    Cascade_restrictContext *cascade_restrict();
    antlr4::tree::TerminalNode *CLUSTER_GS();
    antlr4::tree::TerminalNode *ON_GS();
    Index_nameContext *index_name();
    antlr4::tree::TerminalNode *SET_GS();
    antlr4::tree::TerminalNode *WITHOUT_GS();
    Set_assignment_listContext *set_assignment_list();
    Reset_param_listContext *reset_param_list();
    Owner_to_optionContext *owner_to_option();
    Set_tablespace_optionContext *set_tablespace_option();
    antlr4::tree::TerminalNode *COMPRESS_GS();
    antlr4::tree::TerminalNode *NOCOMPRESS_GS();
    antlr4::tree::TerminalNode *TO_GS();
    antlr4::tree::TerminalNode *GROUP_GS();
    Group_nameContext *group_name();
    antlr4::tree::TerminalNode *NODE_GS();
    Paren_node_listContext *paren_node_list();
    Add_node_listContext *add_node_list();
    Delete_node_listContext *delete_node_list();
    antlr4::tree::TerminalNode *TRIGGER_GS();
    antlr4::tree::TerminalNode *DISABLE_GS();
    antlr4::tree::TerminalNode *ENABLE_GS();
    Trigger_nameContext *trigger_name();
    antlr4::tree::TerminalNode *ALL_GS();
    antlr4::tree::TerminalNode *USER_GS();
    antlr4::tree::TerminalNode *REPLICA_GS();
    antlr4::tree::TerminalNode *ALWAYS_GS();
    Row_level_securityContext *row_level_security();
    antlr4::tree::TerminalNode *FORCE_GS();
    antlr4::tree::TerminalNode *NO_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_table_actionContext* alter_table_action();

  class  Column_clauseContext : public antlr4::ParserRuleContext {
  public:
    Column_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD_GS();
    Column_clause_add_column_optionContext *column_clause_add_column_option();
    antlr4::tree::TerminalNode *COLUMN_GS();
    antlr4::tree::TerminalNode *MODIFY_GS();
    Column_with_typeContext *column_with_type();
    antlr4::tree::TerminalNode *DROP_GS();
    Column_nameContext *column_name();
    If_exists_or_notContext *if_exists_or_not();
    Cascade_restrictContext *cascade_restrict();
    antlr4::tree::TerminalNode *ALTER_GS();
    Column_clause_alter_column_optionContext *column_clause_alter_column_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_clauseContext* column_clause();

  class  Column_clause_add_column_optionContext : public antlr4::ParserRuleContext {
  public:
    Column_clause_add_column_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_with_typeContext *column_with_type();
    Compress_typeContext *compress_type();
    Collate_optionContext *collate_option();
    std::vector<Alter_table_column_constraintContext *> alter_table_column_constraint();
    Alter_table_column_constraintContext* alter_table_column_constraint(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_clause_add_column_optionContext* column_clause_add_column_option();

  class  Column_with_typeContext : public antlr4::ParserRuleContext {
  public:
    Column_with_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_nameContext *column_name();
    Typename_gsContext *typename_gs();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_with_typeContext* column_with_type();

  class  Compress_typeContext : public antlr4::ParserRuleContext {
  public:
    Compress_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELTA_GS();
    antlr4::tree::TerminalNode *PREFIX_GS();
    antlr4::tree::TerminalNode *DICTIONARY_GS();
    antlr4::tree::TerminalNode *NUMSTR_GS();
    antlr4::tree::TerminalNode *NOCOMPRESS_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Compress_typeContext* compress_type();

  class  Collate_optionContext : public antlr4::ParserRuleContext {
  public:
    Collate_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLLATE_GS();
    CollationContext *collation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Collate_optionContext* collate_option();

  class  CollationContext : public antlr4::ParserRuleContext {
  public:
    CollationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CollationContext* collation();

  class  Alter_table_column_constraintContext : public antlr4::ParserRuleContext {
  public:
    Alter_table_column_constraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_constraint_optionContext *column_constraint_option();
    antlr4::tree::TerminalNode *CONSTRAINT_GS();
    Constraint_nameContext *constraint_name();
    Table_constraint_deferrableContext *table_constraint_deferrable();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_table_column_constraintContext* alter_table_column_constraint();

  class  Column_constraint_optionContext : public antlr4::ParserRuleContext {
  public:
    Column_constraint_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NULL_GS();
    antlr4::tree::TerminalNode *NOT_GS();
    antlr4::tree::TerminalNode *CHECK_GS();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    antlr4::tree::TerminalNode *DEFAULT_GS();
    Column_constraint_primary_uniqueContext *column_constraint_primary_unique();
    Index_parametersContext *index_parameters();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_constraint_optionContext* column_constraint_option();

  class  Column_clause_alter_column_optionContext : public antlr4::ParserRuleContext {
  public:
    Column_clause_alter_column_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPE_GS();
    Typename_gsContext *typename_gs();
    antlr4::tree::TerminalNode *SET_GS();
    antlr4::tree::TerminalNode *DATA_GS();
    Collate_optionContext *collate_option();
    Using_expr_optionContext *using_expr_option();
    antlr4::tree::TerminalNode *DEFAULT_GS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DROP_GS();
    antlr4::tree::TerminalNode *NOT_GS();
    antlr4::tree::TerminalNode *NULL_GS();
    Alter_set_statistics_optionContext *alter_set_statistics_option();
    antlr4::tree::TerminalNode *STATISTICS_GS();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Paren_column_listContext *paren_column_list();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    antlr4::tree::TerminalNode *ADD_GS();
    antlr4::tree::TerminalNode *DELETE_GS();
    Set_assignment_listContext *set_assignment_list();
    Reset_param_listContext *reset_param_list();
    antlr4::tree::TerminalNode *STORAGE_GS();
    antlr4::tree::TerminalNode *PLAIN_GS();
    antlr4::tree::TerminalNode *EXTERNAL_GS();
    antlr4::tree::TerminalNode *EXTENDED_GS();
    antlr4::tree::TerminalNode *MAIN_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_clause_alter_column_optionContext* column_clause_alter_column_option();

  class  Alter_table_constraintContext : public antlr4::ParserRuleContext {
  public:
    Alter_table_constraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Alter_table_constraint_optionContext *alter_table_constraint_option();
    antlr4::tree::TerminalNode *CONSTRAINT_GS();
    Constraint_nameContext *constraint_name();
    Table_constraint_deferrableContext *table_constraint_deferrable();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_table_constraintContext* alter_table_constraint();

  class  Alter_table_constraint_optionContext : public antlr4::ParserRuleContext {
  public:
    Alter_table_constraint_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHECK_GS();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    Column_constraint_primary_uniqueContext *column_constraint_primary_unique();
    Index_parametersContext *index_parameters();
    antlr4::tree::TerminalNode *PARTIAL_GS();
    antlr4::tree::TerminalNode *CLUSTER_GS();
    antlr4::tree::TerminalNode *KEY_GS();
    Paren_column_listContext *paren_column_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_table_constraint_optionContext* alter_table_constraint_option();

  class  Paren_column_listContext : public antlr4::ParserRuleContext {
  public:
    Paren_column_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PAREN();
    std::vector<Column_nameContext *> column_name();
    Column_nameContext* column_name(size_t i);
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Paren_column_listContext* paren_column_list();

  class  Index_parametersContext : public antlr4::ParserRuleContext {
  public:
    Index_parametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> WITH_GS();
    antlr4::tree::TerminalNode* WITH_GS(size_t i);
    std::vector<Paren_assignment_stmt_listContext *> paren_assignment_stmt_list();
    Paren_assignment_stmt_listContext* paren_assignment_stmt_list(size_t i);
    std::vector<antlr4::tree::TerminalNode *> USING_GS();
    antlr4::tree::TerminalNode* USING_GS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INDEX_GS();
    antlr4::tree::TerminalNode* INDEX_GS(size_t i);
    std::vector<Tablespace_name_optionContext *> tablespace_name_option();
    Tablespace_name_optionContext* tablespace_name_option(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Index_parametersContext* index_parameters();

  class  Table_constraint_deferrableContext : public antlr4::ParserRuleContext {
  public:
    Table_constraint_deferrableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOT_GS();
    antlr4::tree::TerminalNode *DEFERRABLE_GS();
    antlr4::tree::TerminalNode *INITIALLY_GS();
    antlr4::tree::TerminalNode *DEFERRED_GS();
    antlr4::tree::TerminalNode *IMMEDIATE_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_constraint_deferrableContext* table_constraint_deferrable();

  class  Table_constraint_using_indexContext : public antlr4::ParserRuleContext {
  public:
    Table_constraint_using_indexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_constraint_primary_uniqueContext *column_constraint_primary_unique();
    antlr4::tree::TerminalNode *USING_GS();
    antlr4::tree::TerminalNode *INDEX_GS();
    Index_nameContext *index_name();
    antlr4::tree::TerminalNode *CONSTRAINTS_GS();
    Constraint_nameContext *constraint_name();
    Table_constraint_deferrableContext *table_constraint_deferrable();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_constraint_using_indexContext* table_constraint_using_index();

  class  Trigger_nameContext : public antlr4::ParserRuleContext {
  public:
    Trigger_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Trigger_nameContext* trigger_name();

  class  Alter_table_partition_optionContext : public antlr4::ParserRuleContext {
  public:
    Alter_table_partition_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Alter_table_partition_actionContext *> alter_table_partition_action();
    Alter_table_partition_actionContext* alter_table_partition_action(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RENAME_GS();
    antlr4::tree::TerminalNode *PARTITION_GS();
    antlr4::tree::TerminalNode *TO_GS();
    New_nameContext *new_name();
    Partition_nameContext *partition_name();
    antlr4::tree::TerminalNode *FOR_GS();
    Paren_partition_value_listContext *paren_partition_value_list();
    antlr4::tree::TerminalNode *TRUNCATE_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_table_partition_optionContext* alter_table_partition_option();

  class  Alter_table_partition_actionContext : public antlr4::ParserRuleContext {
  public:
    Alter_table_partition_actionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Move_clauseContext *move_clause();
    Exchange_clauseContext *exchange_clause();
    Row_clauseContext *row_clause();
    Merge_clauseContext *merge_clause();
    Modify_clauseContext *modify_clause();
    Split_clauseContext *split_clause();
    Add_clauseContext *add_clause();
    Drop_clauseContext *drop_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_table_partition_actionContext* alter_table_partition_action();

  class  Move_clauseContext : public antlr4::ParserRuleContext {
  public:
    Move_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MOVE_GS();
    antlr4::tree::TerminalNode *PARTITION_GS();
    Tablespace_name_optionContext *tablespace_name_option();
    Partition_nameContext *partition_name();
    antlr4::tree::TerminalNode *FOR_GS();
    Paren_partition_value_listContext *paren_partition_value_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Move_clauseContext* move_clause();

  class  Paren_partition_value_listContext : public antlr4::ParserRuleContext {
  public:
    Paren_partition_value_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PAREN();
    std::vector<Partition_valueContext *> partition_value();
    Partition_valueContext* partition_value(size_t i);
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Paren_partition_value_listContext* paren_partition_value_list();

  class  Paren_partition_valueContext : public antlr4::ParserRuleContext {
  public:
    Paren_partition_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Partition_valueContext *partition_value();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Paren_partition_valueContext* paren_partition_value();

  class  Partition_valueContext : public antlr4::ParserRuleContext {
  public:
    Partition_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Partition_valueContext* partition_value();

  class  Exchange_clauseContext : public antlr4::ParserRuleContext {
  public:
    Exchange_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXCHANGE_GS();
    antlr4::tree::TerminalNode *PARTITION_GS();
    std::vector<antlr4::tree::TerminalNode *> WITH_GS();
    antlr4::tree::TerminalNode* WITH_GS(size_t i);
    antlr4::tree::TerminalNode *TABLE_GS();
    Alter_table_nameContext *alter_table_name();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Partition_nameContext *partition_name();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    antlr4::tree::TerminalNode *FOR_GS();
    Paren_partition_value_listContext *paren_partition_value_list();
    antlr4::tree::TerminalNode *VALIDATION_GS();
    antlr4::tree::TerminalNode *VERBOSE_GS();
    antlr4::tree::TerminalNode *WITHOUT_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Exchange_clauseContext* exchange_clause();

  class  Row_clauseContext : public antlr4::ParserRuleContext {
  public:
    Row_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ROW_GS();
    antlr4::tree::TerminalNode *MOVEMENT_GS();
    antlr4::tree::TerminalNode *ENABLE_GS();
    antlr4::tree::TerminalNode *DISABLE_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Row_clauseContext* row_clause();

  class  Merge_clauseContext : public antlr4::ParserRuleContext {
  public:
    Merge_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MERGE_GS();
    antlr4::tree::TerminalNode *PARTITIONS_GS();
    std::vector<Partition_nameContext *> partition_name();
    Partition_nameContext* partition_name(size_t i);
    antlr4::tree::TerminalNode *INTO_GS();
    antlr4::tree::TerminalNode *PARTITION_GS();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Tablespace_name_optionContext *tablespace_name_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Merge_clauseContext* merge_clause();

  class  Modify_clauseContext : public antlr4::ParserRuleContext {
  public:
    Modify_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MODIFY_GS();
    antlr4::tree::TerminalNode *PARTITION_GS();
    Partition_nameContext *partition_name();
    antlr4::tree::TerminalNode *UNUSABLE_GS();
    antlr4::tree::TerminalNode *LOCAL_GS();
    antlr4::tree::TerminalNode *INDEXES_GS();
    antlr4::tree::TerminalNode *REBUILD_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Modify_clauseContext* modify_clause();

  class  Split_clauseContext : public antlr4::ParserRuleContext {
  public:
    Split_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SPLIT_GS();
    antlr4::tree::TerminalNode *PARTITION_GS();
    Partition_nameContext *partition_name();
    antlr4::tree::TerminalNode *FOR_GS();
    Paren_partition_value_listContext *paren_partition_value_list();
    Split_point_clauseContext *split_point_clause();
    No_split_point_clauseContext *no_split_point_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Split_clauseContext* split_clause();

  class  Split_point_clauseContext : public antlr4::ParserRuleContext {
  public:
    Split_point_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AT_GS();
    Paren_partition_valueContext *paren_partition_value();
    antlr4::tree::TerminalNode *INTO_GS();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    std::vector<Split_point_clause_optionContext *> split_point_clause_option();
    Split_point_clause_optionContext* split_point_clause_option(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Split_point_clauseContext* split_point_clause();

  class  Split_point_clause_optionContext : public antlr4::ParserRuleContext {
  public:
    Split_point_clause_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARTITION_GS();
    Partition_nameContext *partition_name();
    Tablespace_name_optionContext *tablespace_name_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Split_point_clause_optionContext* split_point_clause_option();

  class  No_split_point_clauseContext : public antlr4::ParserRuleContext {
  public:
    No_split_point_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTO_GS();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Partition_item_listContext *partition_item_list();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  No_split_point_clauseContext* no_split_point_clause();

  class  Partition_item_listContext : public antlr4::ParserRuleContext {
  public:
    Partition_item_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Partition_itemContext *> partition_item();
    Partition_itemContext* partition_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Partition_item_listContext* partition_item_list();

  class  Partition_itemContext : public antlr4::ParserRuleContext {
  public:
    Partition_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Partition_less_than_itemContext *partition_less_than_item();
    Partition_start_end_itemContext *partition_start_end_item();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Partition_itemContext* partition_item();

  class  Partition_less_than_itemContext : public antlr4::ParserRuleContext {
  public:
    Partition_less_than_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARTITION_GS();
    Partition_nameContext *partition_name();
    antlr4::tree::TerminalNode *VALUES_GS();
    antlr4::tree::TerminalNode *LESS_GS();
    antlr4::tree::TerminalNode *THAN_GS();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    std::vector<Partition_valueContext *> partition_value();
    Partition_valueContext* partition_value(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MAXVALUE_GS();
    antlr4::tree::TerminalNode* MAXVALUE_GS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Tablespace_name_optionContext *tablespace_name_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Partition_less_than_itemContext* partition_less_than_item();

  class  Partition_start_end_itemContext : public antlr4::ParserRuleContext {
  public:
    Partition_start_end_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARTITION_GS();
    Partition_nameContext *partition_name();
    Partition_start_end_item_optionContext *partition_start_end_item_option();
    Tablespace_name_optionContext *tablespace_name_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Partition_start_end_itemContext* partition_start_end_item();

  class  Partition_start_end_item_optionContext : public antlr4::ParserRuleContext {
  public:
    Partition_start_end_item_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *START_GS();
    std::vector<Paren_partition_valueContext *> paren_partition_value();
    Paren_partition_valueContext* paren_partition_value(size_t i);
    antlr4::tree::TerminalNode *END_GS();
    antlr4::tree::TerminalNode *EVERY_GS();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    Partition_valueContext *partition_value();
    antlr4::tree::TerminalNode *MAXVALUE_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Partition_start_end_item_optionContext* partition_start_end_item_option();

  class  Add_clauseContext : public antlr4::ParserRuleContext {
  public:
    Add_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD_GS();
    Partition_less_than_itemContext *partition_less_than_item();
    Partition_start_end_itemContext *partition_start_end_item();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Add_clauseContext* add_clause();

  class  Drop_clauseContext : public antlr4::ParserRuleContext {
  public:
    Drop_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP_GS();
    antlr4::tree::TerminalNode *PARTITION_GS();
    Partition_nameContext *partition_name();
    antlr4::tree::TerminalNode *FOR_GS();
    Paren_partition_value_listContext *paren_partition_value_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_clauseContext* drop_clause();

  class  Alter_tablespace_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_tablespace_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER_GS();
    Tablespace_name_optionContext *tablespace_name_option();
    Alter_tablespace_optionContext *alter_tablespace_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_tablespace_stmtContext* alter_tablespace_stmt();

  class  Alter_tablespace_optionContext : public antlr4::ParserRuleContext {
  public:
    Alter_tablespace_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Rename_owner_to_optionContext *rename_owner_to_option();
    Set_assignment_listContext *set_assignment_list();
    Reset_param_listContext *reset_param_list();
    antlr4::tree::TerminalNode *RESIZE_GS();
    antlr4::tree::TerminalNode *MAXSIZE_GS();
    antlr4::tree::TerminalNode *UNLIMITED_GS();
    antlr4::tree::TerminalNode *CHAR_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_tablespace_optionContext* alter_tablespace_option();

  class  Alter_txt_search_conf_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_txt_search_conf_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER_GS();
    antlr4::tree::TerminalNode *TEXT_GS();
    antlr4::tree::TerminalNode *SEARCH_GS();
    antlr4::tree::TerminalNode *CONFIGURATION_GS();
    Configuration_nameContext *configuration_name();
    Alter_txt_search_conf_optionContext *alter_txt_search_conf_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_txt_search_conf_stmtContext* alter_txt_search_conf_stmt();

  class  Configuration_nameContext : public antlr4::ParserRuleContext {
  public:
    Configuration_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    std::vector<AttrContext *> attr();
    AttrContext* attr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Configuration_nameContext* configuration_name();

  class  Alter_txt_search_conf_optionContext : public antlr4::ParserRuleContext {
  public:
    Alter_txt_search_conf_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MAPPING_GS();
    antlr4::tree::TerminalNode *FOR_GS();
    Token_type_listContext *token_type_list();
    antlr4::tree::TerminalNode *WITH_GS();
    Dictionary_name_listContext *dictionary_name_list();
    antlr4::tree::TerminalNode *ADD_GS();
    antlr4::tree::TerminalNode *ALTER_GS();
    antlr4::tree::TerminalNode *REPLACE_GS();
    Dictionary_nameContext *dictionary_name();
    New_nameContext *new_name();
    antlr4::tree::TerminalNode *DROP_GS();
    If_exists_or_notContext *if_exists_or_not();
    Rename_owner_to_optionContext *rename_owner_to_option();
    Alter_set_schemaContext *alter_set_schema();
    Set_assignment_listContext *set_assignment_list();
    Reset_param_listContext *reset_param_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_txt_search_conf_optionContext* alter_txt_search_conf_option();

  class  Token_type_listContext : public antlr4::ParserRuleContext {
  public:
    Token_type_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Token_typeContext *> token_type();
    Token_typeContext* token_type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Token_type_listContext* token_type_list();

  class  Token_typeContext : public antlr4::ParserRuleContext {
  public:
    Token_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Token_typeContext* token_type();

  class  Dictionary_name_listContext : public antlr4::ParserRuleContext {
  public:
    Dictionary_name_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Dictionary_nameContext *> dictionary_name();
    Dictionary_nameContext* dictionary_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dictionary_name_listContext* dictionary_name_list();

  class  Dictionary_nameContext : public antlr4::ParserRuleContext {
  public:
    Dictionary_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dictionary_nameContext* dictionary_name();

  class  Alter_txt_search_dictionary_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_txt_search_dictionary_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER_GS();
    antlr4::tree::TerminalNode *TEXT_GS();
    antlr4::tree::TerminalNode *SEARCH_GS();
    antlr4::tree::TerminalNode *DICTIONARY_GS();
    Dictionary_nameContext *dictionary_name();
    Alter_txt_search_dictionary_optionContext *alter_txt_search_dictionary_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_txt_search_dictionary_stmtContext* alter_txt_search_dictionary_stmt();

  class  Alter_txt_search_dictionary_optionContext : public antlr4::ParserRuleContext {
  public:
    Alter_txt_search_dictionary_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Paren_assignment_stmt_listContext *paren_assignment_stmt_list();
    Rename_owner_to_optionContext *rename_owner_to_option();
    Alter_set_schemaContext *alter_set_schema();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_txt_search_dictionary_optionContext* alter_txt_search_dictionary_option();

  class  Alter_trigger_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_trigger_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER_GS();
    antlr4::tree::TerminalNode *TRIGGER_GS();
    Trigger_nameContext *trigger_name();
    antlr4::tree::TerminalNode *ON_GS();
    Table_nameContext *table_name();
    Rename_to_optionContext *rename_to_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_trigger_stmtContext* alter_trigger_stmt();

  class  Alter_type_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_type_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER_GS();
    antlr4::tree::TerminalNode *TYPE_GS();
    Type_nameContext *type_name();
    Alter_type_optionContext *alter_type_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_type_stmtContext* alter_type_stmt();

  class  Type_nameContext : public antlr4::ParserRuleContext {
  public:
    Type_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    std::vector<AttrContext *> attr();
    AttrContext* attr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_nameContext* type_name();

  class  Alter_type_optionContext : public antlr4::ParserRuleContext {
  public:
    Alter_type_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Alter_type_action_listContext *alter_type_action_list();
    antlr4::tree::TerminalNode *OWNER_GS();
    antlr4::tree::TerminalNode *TO_GS();
    New_nameContext *new_name();
    antlr4::tree::TerminalNode *CURRENT_USER_GS();
    antlr4::tree::TerminalNode *SESSION_USER_GS();
    antlr4::tree::TerminalNode *RENAME_GS();
    antlr4::tree::TerminalNode *ATTRIBUTE_GS();
    Attr_nameContext *attr_name();
    Cascade_restrictContext *cascade_restrict();
    Rename_to_optionContext *rename_to_option();
    Alter_set_schemaContext *alter_set_schema();
    antlr4::tree::TerminalNode *ADD_GS();
    antlr4::tree::TerminalNode *VALUE_GS();
    std::vector<Enum_valueContext *> enum_value();
    Enum_valueContext* enum_value(size_t i);
    antlr4::tree::TerminalNode *IF_GS();
    antlr4::tree::TerminalNode *NOT_GS();
    antlr4::tree::TerminalNode *EXISTS_GS();
    antlr4::tree::TerminalNode *BEFORE_GS();
    antlr4::tree::TerminalNode *AFTER_GS();
    Alter_type_add_attr_optionContext *alter_type_add_attr_option();
    Alter_type_drop_attr_optionContext *alter_type_drop_attr_option();
    Alter_type_alter_attrContext *alter_type_alter_attr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_type_optionContext* alter_type_option();

  class  Alter_type_action_listContext : public antlr4::ParserRuleContext {
  public:
    Alter_type_action_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Alter_type_actionContext *> alter_type_action();
    Alter_type_actionContext* alter_type_action(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_type_action_listContext* alter_type_action_list();

  class  Alter_type_actionContext : public antlr4::ParserRuleContext {
  public:
    Alter_type_actionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Alter_type_add_attr_optionContext *alter_type_add_attr_option();
    Alter_type_drop_attr_optionContext *alter_type_drop_attr_option();
    Alter_type_alter_attrContext *alter_type_alter_attr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_type_actionContext* alter_type_action();

  class  Attr_nameContext : public antlr4::ParserRuleContext {
  public:
    Attr_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Attr_nameContext* attr_name();

  class  Enum_valueContext : public antlr4::ParserRuleContext {
  public:
    Enum_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHAR_STRING();
    antlr4::tree::TerminalNode *SCONST();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Enum_valueContext* enum_value();

  class  Alter_type_add_attr_optionContext : public antlr4::ParserRuleContext {
  public:
    Alter_type_add_attr_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD_GS();
    antlr4::tree::TerminalNode *ATTRIBUTE_GS();
    Attr_nameContext *attr_name();
    Typename_gsContext *typename_gs();
    Collate_optionContext *collate_option();
    Cascade_restrictContext *cascade_restrict();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_type_add_attr_optionContext* alter_type_add_attr_option();

  class  Alter_type_drop_attr_optionContext : public antlr4::ParserRuleContext {
  public:
    Alter_type_drop_attr_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP_GS();
    antlr4::tree::TerminalNode *ATTRIBUTE_GS();
    Attr_nameContext *attr_name();
    If_exists_or_notContext *if_exists_or_not();
    Cascade_restrictContext *cascade_restrict();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_type_drop_attr_optionContext* alter_type_drop_attr_option();

  class  Alter_type_alter_attrContext : public antlr4::ParserRuleContext {
  public:
    Alter_type_alter_attrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER_GS();
    antlr4::tree::TerminalNode *ATTRIBUTE_GS();
    Attr_nameContext *attr_name();
    antlr4::tree::TerminalNode *TYPE_GS();
    Typename_gsContext *typename_gs();
    antlr4::tree::TerminalNode *SET_GS();
    antlr4::tree::TerminalNode *DATA_GS();
    Collate_optionContext *collate_option();
    Cascade_restrictContext *cascade_restrict();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_type_alter_attrContext* alter_type_alter_attr();

  class  Alter_user_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_user_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER_GS();
    antlr4::tree::TerminalNode *USER_GS();
    User_nameContext *user_name();
    Alter_user_clauseContext *alter_user_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_user_stmtContext* alter_user_stmt();

  class  Alter_user_clauseContext : public antlr4::ParserRuleContext {
  public:
    Alter_user_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH_GS();
    std::vector<Alter_role_with_optionContext *> alter_role_with_option();
    Alter_role_with_optionContext* alter_role_with_option(size_t i);
    Rename_to_optionContext *rename_to_option();
    Set_configuration_paramContext *set_configuration_param();
    Reset_configuration_paramContext *reset_configuration_param();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_user_clauseContext* alter_user_clause();

  class  Alter_view_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_view_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER_GS();
    antlr4::tree::TerminalNode *VIEW_GS();
    View_nameContext *view_name();
    Alter_view_optionContext *alter_view_option();
    If_exists_or_notContext *if_exists_or_not();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_view_stmtContext* alter_view_stmt();

  class  View_nameContext : public antlr4::ParserRuleContext {
  public:
    View_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    std::vector<AttrContext *> attr();
    AttrContext* attr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  View_nameContext* view_name();

  class  Alter_view_optionContext : public antlr4::ParserRuleContext {
  public:
    Alter_view_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER_GS();
    Column_nameContext *column_name();
    antlr4::tree::TerminalNode *SET_GS();
    antlr4::tree::TerminalNode *DEFAULT_GS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DROP_GS();
    antlr4::tree::TerminalNode *COLUMN_GS();
    Rename_owner_to_optionContext *rename_owner_to_option();
    Alter_set_schemaContext *alter_set_schema();
    Set_assignment_listContext *set_assignment_list();
    Reset_param_listContext *reset_param_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_view_optionContext* alter_view_option();

  class  Workload_group_stmtContext : public antlr4::ParserRuleContext {
  public:
    Workload_group_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WORKLOAD_GS();
    antlr4::tree::TerminalNode *GROUP_GS();
    Group_nameContext *group_name();
    antlr4::tree::TerminalNode *ALTER_GS();
    antlr4::tree::TerminalNode *CREATE_GS();
    antlr4::tree::TerminalNode *USING_GS();
    antlr4::tree::TerminalNode *RESOURCE_GS();
    antlr4::tree::TerminalNode *POOL_GS();
    Pool_nameContext *pool_name();
    antlr4::tree::TerminalNode *WITH_GS();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Assignment_stmtContext *assignment_stmt();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Workload_group_stmtContext* workload_group_stmt();

  class  Create_group_mapping_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_group_mapping_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE_GS();
    antlr4::tree::TerminalNode *APP_GS();
    antlr4::tree::TerminalNode *WORKLOAD_GS();
    antlr4::tree::TerminalNode *GROUP_GS();
    antlr4::tree::TerminalNode *MAPPING_GS();
    App_nameContext *app_name();
    antlr4::tree::TerminalNode *WITH_GS();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Assignment_stmtContext *assignment_stmt();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_group_mapping_stmtContext* create_group_mapping_stmt();

  class  Create_barrier_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_barrier_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE_GS();
    antlr4::tree::TerminalNode *BARRIER_GS();
    Barrier_nameContext *barrier_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_barrier_stmtContext* create_barrier_stmt();

  class  Barrier_nameContext : public antlr4::ParserRuleContext {
  public:
    Barrier_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Barrier_nameContext* barrier_name();

  class  Create_database_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_database_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE_GS();
    antlr4::tree::TerminalNode *DATABASE_GS();
    Database_nameContext *database_name();
    antlr4::tree::TerminalNode *WITH_GS();
    std::vector<Assignment_stmtContext *> assignment_stmt();
    Assignment_stmtContext* assignment_stmt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_database_stmtContext* create_database_stmt();

  class  Create_data_source_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_data_source_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE_GS();
    antlr4::tree::TerminalNode *DATA_GS();
    antlr4::tree::TerminalNode *SOURCE_GS();
    Src_nameContext *src_name();
    std::vector<Data_src_type_version_optionContext *> data_src_type_version_option();
    Data_src_type_version_optionContext* data_src_type_version_option(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_data_source_stmtContext* create_data_source_stmt();

  class  Create_directory_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_directory_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE_GS();
    antlr4::tree::TerminalNode *DIRECTORY_GS();
    Directory_nameContext *directory_name();
    antlr4::tree::TerminalNode *AS_GS();
    antlr4::tree::TerminalNode *CHAR_STRING();
    Or_replaceContext *or_replace();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_directory_stmtContext* create_directory_stmt();

  class  Or_replaceContext : public antlr4::ParserRuleContext {
  public:
    Or_replaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OR_GS();
    antlr4::tree::TerminalNode *REPLACE_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Or_replaceContext* or_replace();

  class  Create_foreign_table_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_foreign_table_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE_GS();
    antlr4::tree::TerminalNode *FOREIGN_GS();
    antlr4::tree::TerminalNode *TABLE_GS();
    Table_nameContext *table_name();
    Create_foreign_table_optionContext *create_foreign_table_option();
    antlr4::tree::TerminalNode *IF_GS();
    antlr4::tree::TerminalNode *NOT_GS();
    antlr4::tree::TerminalNode *EXISTS_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_foreign_table_stmtContext* create_foreign_table_stmt();

  class  Create_foreign_table_optionContext : public antlr4::ParserRuleContext {
  public:
    Create_foreign_table_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Create_foreign_table_import_export_optionContext *create_foreign_table_import_export_option();
    Create_foreign_table_on_hadoop_optionContext *create_foreign_table_on_hadoop_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_foreign_table_optionContext* create_foreign_table_option();

  class  Create_foreign_table_import_export_optionContext : public antlr4::ParserRuleContext {
  public:
    Create_foreign_table_import_export_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Foreign_table_import_export_column_type_listContext *foreign_table_import_export_column_type_list();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    antlr4::tree::TerminalNode *SERVER_GS();
    Server_nameContext *server_name();
    Alter_property_optionsContext *alter_property_options();
    antlr4::tree::TerminalNode *ONLY_GS();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *REMOTE_GS();
    std::vector<antlr4::tree::TerminalNode *> LOG_GS();
    antlr4::tree::TerminalNode* LOG_GS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CHAR_STRING();
    antlr4::tree::TerminalNode* CHAR_STRING(size_t i);
    antlr4::tree::TerminalNode *PER_GS();
    antlr4::tree::TerminalNode *NODE_GS();
    antlr4::tree::TerminalNode *REJECT_GS();
    antlr4::tree::TerminalNode *LIMIT_GS();
    Table_constraint_to_group_nodeContext *table_constraint_to_group_node();
    antlr4::tree::TerminalNode *WRITE_GS();
    antlr4::tree::TerminalNode *READ_GS();
    antlr4::tree::TerminalNode *WITH_GS();
    antlr4::tree::TerminalNode *INTO_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_foreign_table_import_export_optionContext* create_foreign_table_import_export_option();

  class  Foreign_table_import_export_column_type_listContext : public antlr4::ParserRuleContext {
  public:
    Foreign_table_import_export_column_type_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Foreign_table_import_export_column_typeContext *> foreign_table_import_export_column_type();
    Foreign_table_import_export_column_typeContext* foreign_table_import_export_column_type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Foreign_table_import_export_column_type_listContext* foreign_table_import_export_column_type_list();

  class  Foreign_table_import_export_column_typeContext : public antlr4::ParserRuleContext {
  public:
    Foreign_table_import_export_column_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_with_typeContext *column_with_type();
    antlr4::tree::TerminalNode *POSITION_GS();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    std::vector<NumericContext *> numeric();
    NumericContext* numeric(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    antlr4::tree::TerminalNode *LIKE_GS();
    Table_nameContext *table_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Foreign_table_import_export_column_typeContext* foreign_table_import_export_column_type();

  class  Table_constraint_to_group_nodeContext : public antlr4::ParserRuleContext {
  public:
    Table_constraint_to_group_nodeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TO_GS();
    antlr4::tree::TerminalNode *GROUP_GS();
    Group_nameContext *group_name();
    antlr4::tree::TerminalNode *NODE_GS();
    Paren_node_listContext *paren_node_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_constraint_to_group_nodeContext* table_constraint_to_group_node();

  class  Create_foreign_table_on_hadoop_optionContext : public antlr4::ParserRuleContext {
  public:
    Create_foreign_table_on_hadoop_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Foreign_table_on_hadoop_column_type_listContext *foreign_table_on_hadoop_column_type_list();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    antlr4::tree::TerminalNode *SERVER_GS();
    Server_nameContext *server_name();
    Alter_property_optionsContext *alter_property_options();
    antlr4::tree::TerminalNode *DISTRIBUTE_GS();
    std::vector<antlr4::tree::TerminalNode *> BY_GS();
    antlr4::tree::TerminalNode* BY_GS(size_t i);
    antlr4::tree::TerminalNode *ROUNDROBIN_GS();
    antlr4::tree::TerminalNode *REPLICATION_GS();
    Table_constraint_to_group_nodeContext *table_constraint_to_group_node();
    antlr4::tree::TerminalNode *PARTITION_GS();
    Paren_column_listContext *paren_column_list();
    antlr4::tree::TerminalNode *AUTOMAPPED_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_foreign_table_on_hadoop_optionContext* create_foreign_table_on_hadoop_option();

  class  Foreign_table_on_hadoop_column_type_listContext : public antlr4::ParserRuleContext {
  public:
    Foreign_table_on_hadoop_column_type_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Foreign_table_on_hadoop_column_typeContext *> foreign_table_on_hadoop_column_type();
    Foreign_table_on_hadoop_column_typeContext* foreign_table_on_hadoop_column_type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Foreign_table_on_hadoop_column_type_listContext* foreign_table_on_hadoop_column_type_list();

  class  Foreign_table_on_hadoop_column_typeContext : public antlr4::ParserRuleContext {
  public:
    Foreign_table_on_hadoop_column_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_with_typeContext *column_with_type();
    antlr4::tree::TerminalNode *NULL_GS();
    antlr4::tree::TerminalNode *CONSTRAINT_GS();
    Constraint_nameContext *constraint_name();
    antlr4::tree::TerminalNode *NOT_GS();
    std::vector<Create_foreign_table_column_constraintContext *> create_foreign_table_column_constraint();
    Create_foreign_table_column_constraintContext* create_foreign_table_column_constraint(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Foreign_table_on_hadoop_column_typeContext* foreign_table_on_hadoop_column_type();

  class  Create_foreign_table_column_constraintContext : public antlr4::ParserRuleContext {
  public:
    Create_foreign_table_column_constraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_constraint_primary_uniqueContext *column_constraint_primary_unique();
    antlr4::tree::TerminalNode *CONSTRAINT_GS();
    Constraint_nameContext *constraint_name();
    Add_info_constraint_optionContext *add_info_constraint_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_foreign_table_column_constraintContext* create_foreign_table_column_constraint();

  class  Create_function_procedure_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_function_procedure_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE_GS();
    Func_nameContext *func_name();
    antlr4::tree::TerminalNode *FUNCTION_GS();
    antlr4::tree::TerminalNode *PROCEDURE_GS();
    Or_replaceContext *or_replace();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    Func_return_typeContext *func_return_type();
    std::vector<Create_function_procedure_clauseContext *> create_function_procedure_clause();
    Create_function_procedure_clauseContext* create_function_procedure_clause(size_t i);
    antlr4::tree::TerminalNode *RETURNS_GS();
    antlr4::tree::TerminalNode *RETURN_GS();
    Create_func_arg_listContext *create_func_arg_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_function_procedure_stmtContext* create_function_procedure_stmt();

  class  Create_function_procedure_clauseContext : public antlr4::ParserRuleContext {
  public:
    Create_function_procedure_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LANGUAGE_GS();
    Lang_nameContext *lang_name();
    std::vector<Alter_function_actionContext *> alter_function_action();
    Alter_function_actionContext* alter_function_action(size_t i);
    Create_func_procedure_as_optionContext *create_func_procedure_as_option();
    PlsqlbodyContext *plsqlbody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_function_procedure_clauseContext* create_function_procedure_clause();

  class  Create_func_arg_listContext : public antlr4::ParserRuleContext {
  public:
    Create_func_arg_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Create_func_argContext *> create_func_arg();
    Create_func_argContext* create_func_arg(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_func_arg_listContext* create_func_arg_list();

  class  Create_func_argContext : public antlr4::ParserRuleContext {
  public:
    Create_func_argContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Typename_gsContext *typename_gs();
    Param_nameContext *param_name();
    ArgmodeContext *argmode();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DEFAULT_GS();
    antlr4::tree::TerminalNode *EQUALS_OP();
    antlr4::tree::TerminalNode *COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_func_argContext* create_func_arg();

  class  Func_return_typeContext : public antlr4::ParserRuleContext {
  public:
    Func_return_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Typename_gsContext *typename_gs();
    antlr4::tree::TerminalNode *SETOF_GS();
    antlr4::tree::TerminalNode *DETERMINISTIC_GS();
    antlr4::tree::TerminalNode *TABLE_GS();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    std::vector<Column_with_typeContext *> column_with_type();
    Column_with_typeContext* column_with_type(size_t i);
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_return_typeContext* func_return_type();

  class  Lang_nameContext : public antlr4::ParserRuleContext {
  public:
    Lang_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Lang_nameContext* lang_name();

  class  Create_func_procedure_as_optionContext : public antlr4::ParserRuleContext {
  public:
    Create_func_procedure_as_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AS_GS();
    std::vector<antlr4::tree::TerminalNode *> CHAR_STRING();
    antlr4::tree::TerminalNode* CHAR_STRING(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SCONST();
    antlr4::tree::TerminalNode* SCONST(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *IS_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_func_procedure_as_optionContext* create_func_procedure_as_option();

  class  PlsqlbodyContext : public antlr4::ParserRuleContext {
  public:
    PlsqlbodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN_GS();
    Sequence_of_statementsContext *sequence_of_statements();
    antlr4::tree::TerminalNode *END_GS();
    antlr4::tree::TerminalNode *DECLARE_GS();
    Variable_declarationsContext *variable_declarations();
    Cursor_declarationContext *cursor_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PlsqlbodyContext* plsqlbody();

  class  Variable_declarationsContext : public antlr4::ParserRuleContext {
  public:
    Variable_declarationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Variable_declarationContext *> variable_declaration();
    Variable_declarationContext* variable_declaration(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_declarationsContext* variable_declarations();

  class  Variable_declarationContext : public antlr4::ParserRuleContext {
  public:
    Variable_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    Typename_gsContext *typename_gs();
    antlr4::tree::TerminalNode *CONSTANT_GS();
    antlr4::tree::TerminalNode *NOT_GS();
    antlr4::tree::TerminalNode *NULL_GS();
    Default_value_partContext *default_value_part();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_declarationContext* variable_declaration();

  class  Default_value_partContext : public antlr4::ParserRuleContext {
  public:
    Default_value_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *EQUALS_OP();
    antlr4::tree::TerminalNode *DEFAULT_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Default_value_partContext* default_value_part();

  class  Cursor_declarationContext : public antlr4::ParserRuleContext {
  public:
    Cursor_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CURSOR_GS();
    Cursor_nameContext *cursor_name();
    antlr4::tree::TerminalNode *FOR_GS();
    Select_stmtContext *select_stmt();
    antlr4::tree::TerminalNode *SEMICOLON();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    std::vector<Parameter_specContext *> parameter_spec();
    Parameter_specContext* parameter_spec(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cursor_declarationContext* cursor_declaration();

  class  Parameter_specContext : public antlr4::ParserRuleContext {
  public:
    Parameter_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Parameter_nameContext *parameter_name();
    Typename_gsContext *typename_gs();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_specContext* parameter_spec();

  class  Sequence_of_statementsContext : public antlr4::ParserRuleContext {
  public:
    Sequence_of_statementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Sequence_of_statementContext *> sequence_of_statement();
    Sequence_of_statementContext* sequence_of_statement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sequence_of_statementsContext* sequence_of_statements();

  class  Sequence_of_statementContext : public antlr4::ParserRuleContext {
  public:
    Sequence_of_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StmtContext *stmt();
    Assignment_stmtContext *assignment_stmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sequence_of_statementContext* sequence_of_statement();

  class  Create_group_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_group_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE_GS();
    antlr4::tree::TerminalNode *GROUP_GS();
    Group_nameContext *group_name();
    Alter_role_encrypt_optionContext *alter_role_encrypt_option();
    antlr4::tree::TerminalNode *ENCRYPTED_GS();
    antlr4::tree::TerminalNode *UNENCRYPTED_GS();
    antlr4::tree::TerminalNode *WITH_GS();
    std::vector<Alter_role_with_optionContext *> alter_role_with_option();
    Alter_role_with_optionContext* alter_role_with_option(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_group_stmtContext* create_group_stmt();

  class  Create_index_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_index_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE_GS();
    antlr4::tree::TerminalNode *INDEX_GS();
    antlr4::tree::TerminalNode *ON_GS();
    Table_nameContext *table_name();
    Create_index_column_listContext *create_index_column_list();
    antlr4::tree::TerminalNode *UNIQUE_GS();
    Index_nameContext *index_name();
    Using_expr_optionContext *using_expr_option();
    antlr4::tree::TerminalNode *WITH_GS();
    Paren_assignment_stmt_listContext *paren_assignment_stmt_list();
    Tablespace_name_optionContext *tablespace_name_option();
    antlr4::tree::TerminalNode *WHERE_GS();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_index_stmtContext* create_index_stmt();

  class  Create_index_column_listContext : public antlr4::ParserRuleContext {
  public:
    Create_index_column_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Create_index_columnContext *> create_index_column();
    Create_index_columnContext* create_index_column(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_index_column_listContext* create_index_column_list();

  class  Create_index_columnContext : public antlr4::ParserRuleContext {
  public:
    Create_index_columnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_nameContext *column_name();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    Collate_optionContext *collate_option();
    OpclassContext *opclass();
    Asc_descContext *asc_desc();
    Nulls_first_lastContext *nulls_first_last();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_index_columnContext* create_index_column();

  class  OpclassContext : public antlr4::ParserRuleContext {
  public:
    OpclassContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OpclassContext* opclass();

  class  Asc_descContext : public antlr4::ParserRuleContext {
  public:
    Asc_descContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASC_GS();
    antlr4::tree::TerminalNode *DESC_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Asc_descContext* asc_desc();

  class  Nulls_first_lastContext : public antlr4::ParserRuleContext {
  public:
    Nulls_first_lastContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NULLS_GS();
    antlr4::tree::TerminalNode *FIRST_GS();
    antlr4::tree::TerminalNode *LAST_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Nulls_first_lastContext* nulls_first_last();

  class  Create_node_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_node_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE_GS();
    antlr4::tree::TerminalNode *NODE_GS();
    NodenameContext *nodename();
    antlr4::tree::TerminalNode *WITH_GS();
    Paren_assignment_stmt_listContext *paren_assignment_stmt_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_node_stmtContext* create_node_stmt();

  class  Create_node_group_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_node_group_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE_GS();
    antlr4::tree::TerminalNode *NODE_GS();
    antlr4::tree::TerminalNode *GROUP_GS();
    std::vector<Group_nameContext *> group_name();
    Group_nameContext* group_name(size_t i);
    antlr4::tree::TerminalNode *WITH_GS();
    Paren_node_listContext *paren_node_list();
    antlr4::tree::TerminalNode *BUCKETS_GS();
    antlr4::tree::TerminalNode *VCGROUP_GS();
    antlr4::tree::TerminalNode *DISTRIBUTE_GS();
    antlr4::tree::TerminalNode *FROM_GS();
    Paren_expr_listContext *paren_expr_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_node_group_stmtContext* create_node_group_stmt();

  class  Create_row_level_security_policy_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_row_level_security_policy_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE_GS();
    antlr4::tree::TerminalNode *POLICY_GS();
    Policy_nameContext *policy_name();
    antlr4::tree::TerminalNode *ON_GS();
    Table_nameContext *table_name();
    Using_expr_optionContext *using_expr_option();
    Row_level_securityContext *row_level_security();
    antlr4::tree::TerminalNode *AS_GS();
    antlr4::tree::TerminalNode *FOR_GS();
    antlr4::tree::TerminalNode *TO_GS();
    Row_level_security_policy_objectsContext *row_level_security_policy_objects();
    antlr4::tree::TerminalNode *PERMISSIVE_GS();
    antlr4::tree::TerminalNode *RESTRICTIVE_GS();
    antlr4::tree::TerminalNode *ALL_GS();
    Table_privilegeContext *table_privilege();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_row_level_security_policy_stmtContext* create_row_level_security_policy_stmt();

  class  Row_level_security_policy_objectsContext : public antlr4::ParserRuleContext {
  public:
    Row_level_security_policy_objectsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Row_level_security_policy_objContext *> row_level_security_policy_obj();
    Row_level_security_policy_objContext* row_level_security_policy_obj(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Row_level_security_policy_objectsContext* row_level_security_policy_objects();

  class  Row_level_security_policy_objContext : public antlr4::ParserRuleContext {
  public:
    Row_level_security_policy_objContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Role_nameContext *role_name();
    antlr4::tree::TerminalNode *PUBLIC_GS();
    antlr4::tree::TerminalNode *CURRENT_USER_GS();
    antlr4::tree::TerminalNode *SESSION_USER_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Row_level_security_policy_objContext* row_level_security_policy_obj();

  class  Create_resource_pool_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_resource_pool_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE_GS();
    antlr4::tree::TerminalNode *RESOURCE_GS();
    antlr4::tree::TerminalNode *POOL_GS();
    Pool_nameContext *pool_name();
    antlr4::tree::TerminalNode *WITH_GS();
    Paren_assignment_stmt_listContext *paren_assignment_stmt_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_resource_pool_stmtContext* create_resource_pool_stmt();

  class  Create_role_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_role_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE_GS();
    antlr4::tree::TerminalNode *ROLE_GS();
    Role_nameContext *role_name();
    Alter_role_encrypt_optionContext *alter_role_encrypt_option();
    antlr4::tree::TerminalNode *ENCRYPTED_GS();
    antlr4::tree::TerminalNode *UNENCRYPTED_GS();
    antlr4::tree::TerminalNode *WITH_GS();
    std::vector<Create_role_with_optionContext *> create_role_with_option();
    Create_role_with_optionContext* create_role_with_option(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_role_stmtContext* create_role_stmt();

  class  Create_role_with_optionContext : public antlr4::ParserRuleContext {
  public:
    Create_role_with_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Role_option_commonContext *role_option_common();
    std::vector<Role_nameContext *> role_name();
    Role_nameContext* role_name(size_t i);
    antlr4::tree::TerminalNode *ROLE_GS();
    antlr4::tree::TerminalNode *IN_GS();
    antlr4::tree::TerminalNode *GROUP_GS();
    antlr4::tree::TerminalNode *ADMIN_GS();
    antlr4::tree::TerminalNode *USER_GS();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *SYSID_GS();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *DEFAULT_GS();
    antlr4::tree::TerminalNode *TABLESPACE_GS();
    Tablespace_nameContext *tablespace_name();
    antlr4::tree::TerminalNode *PROFILE_GS();
    Profile_nameContext *profile_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_role_with_optionContext* create_role_with_option();

  class  Profile_nameContext : public antlr4::ParserRuleContext {
  public:
    Profile_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Profile_nameContext* profile_name();

  class  Create_schema_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_schema_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE_GS();
    antlr4::tree::TerminalNode *SCHEMA_GS();
    Create_schema_optionContext *create_schema_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_schema_stmtContext* create_schema_stmt();

  class  Create_schema_optionContext : public antlr4::ParserRuleContext {
  public:
    Create_schema_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Schema_nameContext *schema_name();
    antlr4::tree::TerminalNode *AUTHORIZATION_GS();
    User_nameContext *user_name();
    std::vector<Schema_elementContext *> schema_element();
    Schema_elementContext* schema_element(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_schema_optionContext* create_schema_option();

  class  Schema_elementContext : public antlr4::ParserRuleContext {
  public:
    Schema_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Create_table_stmtContext *create_table_stmt();
    Create_view_stmtContext *create_view_stmt();
    Create_index_stmtContext *create_index_stmt();
    Grant_stmtContext *grant_stmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Schema_elementContext* schema_element();

  class  Create_sequence_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_sequence_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE_GS();
    antlr4::tree::TerminalNode *SEQUENCE_GS();
    Sequence_nameContext *sequence_name();
    antlr4::tree::TerminalNode *INCREMENT_GS();
    std::vector<Unary_exprContext *> unary_expr();
    Unary_exprContext* unary_expr(size_t i);
    Minvalue_optionContext *minvalue_option();
    Maxvalue_optionContext *maxvalue_option();
    antlr4::tree::TerminalNode *START_GS();
    antlr4::tree::TerminalNode *CACHE_GS();
    NumericContext *numeric();
    antlr4::tree::TerminalNode *CYCLE_GS();
    antlr4::tree::TerminalNode *NOCYCLE_GS();
    antlr4::tree::TerminalNode *OWNED_GS();
    std::vector<antlr4::tree::TerminalNode *> BY_GS();
    antlr4::tree::TerminalNode* BY_GS(size_t i);
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *PERIOD();
    Column_nameContext *column_name();
    antlr4::tree::TerminalNode *NONE_GS();
    antlr4::tree::TerminalNode *WITH_GS();
    antlr4::tree::TerminalNode *NO_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_sequence_stmtContext* create_sequence_stmt();

  class  Minvalue_optionContext : public antlr4::ParserRuleContext {
  public:
    Minvalue_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MINVALUE_GS();
    Unary_exprContext *unary_expr();
    antlr4::tree::TerminalNode *NO_GS();
    antlr4::tree::TerminalNode *NOMINVALUE_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Minvalue_optionContext* minvalue_option();

  class  Maxvalue_optionContext : public antlr4::ParserRuleContext {
  public:
    Maxvalue_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MAXVALUE_GS();
    Unary_exprContext *unary_expr();
    antlr4::tree::TerminalNode *NO_GS();
    antlr4::tree::TerminalNode *NOMAXVALUE_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Maxvalue_optionContext* maxvalue_option();

  class  Create_server_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_server_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE_GS();
    antlr4::tree::TerminalNode *SERVER_GS();
    Server_nameContext *server_name();
    antlr4::tree::TerminalNode *FOREIGN_GS();
    antlr4::tree::TerminalNode *DATA_GS();
    antlr4::tree::TerminalNode *WRAPPER_GS();
    Object_nameContext *object_name();
    Alter_property_optionsContext *alter_property_options();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_server_stmtContext* create_server_stmt();

  class  Create_table_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_table_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE_GS();
    antlr4::tree::TerminalNode *TABLE_GS();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *PARTITION_GS();
    antlr4::tree::TerminalNode *BY_GS();
    Partition_by_optionContext *partition_by_option();
    Temporary_tempContext *temporary_temp();
    antlr4::tree::TerminalNode *UNLOGGED_GS();
    antlr4::tree::TerminalNode *IF_GS();
    antlr4::tree::TerminalNode *NOT_GS();
    antlr4::tree::TerminalNode *EXISTS_GS();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    std::vector<Create_table_stmt_optionContext *> create_table_stmt_option();
    Create_table_stmt_optionContext* create_table_stmt_option(size_t i);
    Create_table_as_optionContext *create_table_as_option();
    Row_clauseContext *row_clause();
    Create_table_column_type_option_listContext *create_table_column_type_option_list();
    antlr4::tree::TerminalNode *GLOBAL_GS();
    antlr4::tree::TerminalNode *LOCAL_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_table_stmtContext* create_table_stmt();

  class  Temporary_tempContext : public antlr4::ParserRuleContext {
  public:
    Temporary_tempContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TEMPORARY_GS();
    antlr4::tree::TerminalNode *TEMP_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Temporary_tempContext* temporary_temp();

  class  Create_table_column_type_option_listContext : public antlr4::ParserRuleContext {
  public:
    Create_table_column_type_option_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Create_table_column_type_optionContext *> create_table_column_type_option();
    Create_table_column_type_optionContext* create_table_column_type_option(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_table_column_type_option_listContext* create_table_column_type_option_list();

  class  Create_table_column_type_optionContext : public antlr4::ParserRuleContext {
  public:
    Create_table_column_type_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_clause_add_column_optionContext *column_clause_add_column_option();
    Alter_table_constraintContext *alter_table_constraint();
    antlr4::tree::TerminalNode *LIKE_GS();
    Table_nameContext *table_name();
    std::vector<Like_optionContext *> like_option();
    Like_optionContext* like_option(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_table_column_type_optionContext* create_table_column_type_option();

  class  Like_optionContext : public antlr4::ParserRuleContext {
  public:
    Like_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Like_option_otherContext *like_option_other();
    antlr4::tree::TerminalNode *INCLUDING_GS();
    antlr4::tree::TerminalNode *EXCLUDING_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Like_optionContext* like_option();

  class  Like_option_otherContext : public antlr4::ParserRuleContext {
  public:
    Like_option_otherContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFAULTS_GS();
    antlr4::tree::TerminalNode *CONSTRAINT_GS();
    antlr4::tree::TerminalNode *INDEXES_GS();
    antlr4::tree::TerminalNode *STORAGE_GS();
    antlr4::tree::TerminalNode *COMMENTS_GS();
    antlr4::tree::TerminalNode *PARTITION_GS();
    antlr4::tree::TerminalNode *RELOPTIONS_GS();
    antlr4::tree::TerminalNode *DISTRIBUTION_GS();
    antlr4::tree::TerminalNode *ALL_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Like_option_otherContext* like_option_other();

  class  Create_table_stmt_optionContext : public antlr4::ParserRuleContext {
  public:
    Create_table_stmt_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH_GS();
    Paren_assignment_stmt_listContext *paren_assignment_stmt_list();
    antlr4::tree::TerminalNode *ON_GS();
    antlr4::tree::TerminalNode *COMMIT_GS();
    antlr4::tree::TerminalNode *PRESERVE_GS();
    antlr4::tree::TerminalNode *ROW_GS();
    antlr4::tree::TerminalNode *DELETE_GS();
    antlr4::tree::TerminalNode *DROP_GS();
    antlr4::tree::TerminalNode *COMPRESS_GS();
    antlr4::tree::TerminalNode *NOCOMPRESS_GS();
    Tablespace_name_optionContext *tablespace_name_option();
    antlr4::tree::TerminalNode *DISTRIBUTE_GS();
    antlr4::tree::TerminalNode *BY_GS();
    antlr4::tree::TerminalNode *REPLICATION_GS();
    antlr4::tree::TerminalNode *HASH_GS();
    Paren_column_listContext *paren_column_list();
    Table_constraint_to_group_nodeContext *table_constraint_to_group_node();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_table_stmt_optionContext* create_table_stmt_option();

  class  Create_table_as_optionContext : public antlr4::ParserRuleContext {
  public:
    Create_table_as_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AS_GS();
    Select_stmtContext *select_stmt();
    antlr4::tree::TerminalNode *TABLE_GS();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *WITH_GS();
    antlr4::tree::TerminalNode *DATA_GS();
    antlr4::tree::TerminalNode *NO_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_table_as_optionContext* create_table_as_option();

  class  Partition_by_optionContext : public antlr4::ParserRuleContext {
  public:
    Partition_by_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VALUES_GS();
    Paren_partition_keyContext *paren_partition_key();
    antlr4::tree::TerminalNode *RANGE_GS();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Partition_item_listContext *partition_item_list();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Partition_by_optionContext* partition_by_option();

  class  Paren_partition_keyContext : public antlr4::ParserRuleContext {
  public:
    Paren_partition_keyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Partition_keyContext *partition_key();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Paren_partition_keyContext* paren_partition_key();

  class  Partition_keyContext : public antlr4::ParserRuleContext {
  public:
    Partition_keyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Partition_keyContext* partition_key();

  class  Create_tablespace_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_tablespace_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE_GS();
    antlr4::tree::TerminalNode *TABLESPACE_GS();
    Tablespace_nameContext *tablespace_name();
    antlr4::tree::TerminalNode *RELATIVE_GS();
    antlr4::tree::TerminalNode *LOCATION_GS();
    std::vector<antlr4::tree::TerminalNode *> CHAR_STRING();
    antlr4::tree::TerminalNode* CHAR_STRING(size_t i);
    antlr4::tree::TerminalNode *OWNER_GS();
    User_nameContext *user_name();
    antlr4::tree::TerminalNode *MAXSIZE_GS();
    antlr4::tree::TerminalNode *WITH_GS();
    Paren_assignment_stmt_listContext *paren_assignment_stmt_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_tablespace_stmtContext* create_tablespace_stmt();

  class  Create_txt_search_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_txt_search_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE_GS();
    antlr4::tree::TerminalNode *TEXT_GS();
    antlr4::tree::TerminalNode *SEARCH_GS();
    IdentifierContext *identifier();
    std::vector<Paren_assignment_stmt_listContext *> paren_assignment_stmt_list();
    Paren_assignment_stmt_listContext* paren_assignment_stmt_list(size_t i);
    antlr4::tree::TerminalNode *CONFIGURATION_GS();
    antlr4::tree::TerminalNode *DICTIONARY_GS();
    antlr4::tree::TerminalNode *WITH_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_txt_search_stmtContext* create_txt_search_stmt();

  class  Create_trigger_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_trigger_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE_GS();
    antlr4::tree::TerminalNode *TRIGGER_GS();
    Trigger_nameContext *trigger_name();
    Trigger_typeContext *trigger_type();
    Trigger_event_listContext *trigger_event_list();
    antlr4::tree::TerminalNode *ON_GS();
    std::vector<Table_nameContext *> table_name();
    Table_nameContext* table_name(size_t i);
    antlr4::tree::TerminalNode *EXECUTE_GS();
    antlr4::tree::TerminalNode *PROCEDURE_GS();
    Func_nameContext *func_name();
    std::vector<antlr4::tree::TerminalNode *> LEFT_PAREN();
    antlr4::tree::TerminalNode* LEFT_PAREN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RIGHT_PAREN();
    antlr4::tree::TerminalNode* RIGHT_PAREN(size_t i);
    antlr4::tree::TerminalNode *CONSTRAINT_GS();
    antlr4::tree::TerminalNode *FROM_GS();
    Table_constraint_deferrableContext *table_constraint_deferrable();
    antlr4::tree::TerminalNode *FOR_GS();
    antlr4::tree::TerminalNode *WHEN_GS();
    ExpressionContext *expression();
    Param_expr_listContext *param_expr_list();
    antlr4::tree::TerminalNode *ROW_GS();
    antlr4::tree::TerminalNode *STATEMENT_GS();
    antlr4::tree::TerminalNode *EACH_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_trigger_stmtContext* create_trigger_stmt();

  class  Trigger_typeContext : public antlr4::ParserRuleContext {
  public:
    Trigger_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEFORE_GS();
    antlr4::tree::TerminalNode *AFTER_GS();
    antlr4::tree::TerminalNode *INSTEAD_GS();
    antlr4::tree::TerminalNode *OF_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Trigger_typeContext* trigger_type();

  class  Trigger_event_listContext : public antlr4::ParserRuleContext {
  public:
    Trigger_event_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Trigger_eventContext *> trigger_event();
    Trigger_eventContext* trigger_event(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OR_GS();
    antlr4::tree::TerminalNode* OR_GS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Trigger_event_listContext* trigger_event_list();

  class  Trigger_eventContext : public antlr4::ParserRuleContext {
  public:
    Trigger_eventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INSERT_GS();
    antlr4::tree::TerminalNode *UPDATE_GS();
    antlr4::tree::TerminalNode *OF_GS();
    std::vector<Column_nameContext *> column_name();
    Column_nameContext* column_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *DELETE_GS();
    antlr4::tree::TerminalNode *TRUNCATE_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Trigger_eventContext* trigger_event();

  class  Create_type_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_type_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE_GS();
    antlr4::tree::TerminalNode *TYPE_GS();
    Type_nameContext *type_name();
    antlr4::tree::TerminalNode *AS_GS();
    antlr4::tree::TerminalNode *ENUM_GS();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Create_type_optionContext *create_type_option();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_type_stmtContext* create_type_stmt();

  class  Create_type_optionContext : public antlr4::ParserRuleContext {
  public:
    Create_type_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Column_clause_add_column_optionContext *> column_clause_add_column_option();
    Column_clause_add_column_optionContext* column_clause_add_column_option(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Assignment_stmt_listContext *assignment_stmt_list();
    Expression_listContext *expression_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_type_optionContext* create_type_option();

  class  Create_user_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_user_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE_GS();
    antlr4::tree::TerminalNode *USER_GS();
    User_nameContext *user_name();
    Alter_role_encrypt_optionContext *alter_role_encrypt_option();
    antlr4::tree::TerminalNode *ENCRYPTED_GS();
    antlr4::tree::TerminalNode *UNENCRYPTED_GS();
    antlr4::tree::TerminalNode *WITH_GS();
    std::vector<Alter_role_with_optionContext *> alter_role_with_option();
    Alter_role_with_optionContext* alter_role_with_option(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_user_stmtContext* create_user_stmt();

  class  Create_view_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_view_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE_GS();
    antlr4::tree::TerminalNode *VIEW_GS();
    View_nameContext *view_name();
    antlr4::tree::TerminalNode *AS_GS();
    Select_stmtContext *select_stmt();
    Or_replaceContext *or_replace();
    Temporary_tempContext *temporary_temp();
    Paren_column_listContext *paren_column_list();
    antlr4::tree::TerminalNode *WITH_GS();
    Assignment_stmt_listContext *assignment_stmt_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_view_stmtContext* create_view_stmt();

  class  Data_manipulate_stmtContext : public antlr4::ParserRuleContext {
  public:
    Data_manipulate_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Select_stmtContext *select_stmt();
    Insert_stmtContext *insert_stmt();
    Update_stmtContext *update_stmt();
    Delete_stmtContext *delete_stmt();
    Values_stmtContext *values_stmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Data_manipulate_stmtContext* data_manipulate_stmt();

  class  Select_stmtContext : public antlr4::ParserRuleContext {
  public:
    Select_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Subquery_basic_elementsContext *subquery_basic_elements();
    std::vector<Subquery_operation_partContext *> subquery_operation_part();
    Subquery_operation_partContext* subquery_operation_part(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_stmtContext* select_stmt();

  class  Subquery_basic_elementsContext : public antlr4::ParserRuleContext {
  public:
    Subquery_basic_elementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SubqueryContext *subquery();
    Select_with_parensContext *select_with_parens();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Subquery_basic_elementsContext* subquery_basic_elements();

  class  Select_with_parensContext : public antlr4::ParserRuleContext {
  public:
    Select_with_parensContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Select_stmtContext *select_stmt();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_with_parensContext* select_with_parens();

  class  Subquery_operation_partContext : public antlr4::ParserRuleContext {
  public:
    Subquery_operation_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Subquery_basic_elementsContext *subquery_basic_elements();
    antlr4::tree::TerminalNode *UNION_GS();
    antlr4::tree::TerminalNode *INTERSECT_GS();
    antlr4::tree::TerminalNode *EXCEPT_GS();
    antlr4::tree::TerminalNode *MINUS_GS();
    All_distinctContext *all_distinct();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Subquery_operation_partContext* subquery_operation_part();

  class  SubqueryContext : public antlr4::ParserRuleContext {
  public:
    SubqueryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_selectContext *simple_select();
    With_clauseContext *with_clause();
    Window_clauseContext *window_clause();
    Order_by_clauseContext *order_by_clause();
    Limit_clauseContext *limit_clause();
    Offset_clauseContext *offset_clause();
    Fetch_clauseContext *fetch_clause();
    std::vector<For_update_share_clauseContext *> for_update_share_clause();
    For_update_share_clauseContext* for_update_share_clause(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubqueryContext* subquery();

  class  Simple_selectContext : public antlr4::ParserRuleContext {
  public:
    Simple_selectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SELECT_GS();
    Selected_listContext *selected_list();
    All_distinctContext *all_distinct();
    Into_clauseContext *into_clause();
    From_clauseContext *from_clause();
    Where_clauseContext *where_clause();
    Group_by_clauseContext *group_by_clause();
    Having_clauseContext *having_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_selectContext* simple_select();

  class  All_distinctContext : public antlr4::ParserRuleContext {
  public:
    All_distinctContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL_GS();
    antlr4::tree::TerminalNode *DISTINCT_GS();
    antlr4::tree::TerminalNode *ON_GS();
    Paren_expr_listContext *paren_expr_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  All_distinctContext* all_distinct();

  class  Selected_listContext : public antlr4::ParserRuleContext {
  public:
    Selected_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASTERISK();
    std::vector<Selected_list_elementContext *> selected_list_element();
    Selected_list_elementContext* selected_list_element(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Selected_listContext* selected_list();

  class  Selected_list_elementContext : public antlr4::ParserRuleContext {
  public:
    Selected_list_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    As_aliasContext *as_alias();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Selected_list_elementContext* selected_list_element();

  class  Into_clauseContext : public antlr4::ParserRuleContext {
  public:
    Into_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTO_GS();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *UNLOGGED_GS();
    antlr4::tree::TerminalNode *TABLE_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Into_clauseContext* into_clause();

  class  From_clauseContext : public antlr4::ParserRuleContext {
  public:
    From_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FROM_GS();
    From_listContext *from_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  From_clauseContext* from_clause();

  class  From_listContext : public antlr4::ParserRuleContext {
  public:
    From_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Table_refContext *> table_ref();
    Table_refContext* table_ref(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  From_listContext* from_list();

  class  Table_refContext : public antlr4::ParserRuleContext {
  public:
    Table_refContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Table_refContext() : antlr4::ParserRuleContext() { }
    void copyFrom(Table_refContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Table_ref_joinContext : public Table_refContext {
  public:
    Table_ref_joinContext(Table_refContext *ctx);

    std::vector<Table_refContext *> table_ref();
    Table_refContext* table_ref(size_t i);
    antlr4::tree::TerminalNode *JOIN_GS();
    antlr4::tree::TerminalNode *NATURAL_GS();
    Join_typeContext *join_type();
    On_condition_clauseContext *on_condition_clause();
    Using_clauseContext *using_clause();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Table_ref_subqueryContext : public Table_refContext {
  public:
    Table_ref_subqueryContext(Table_refContext *ctx);

    Select_with_parensContext *select_with_parens();
    Table_aliasContext *table_alias();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Table_ref_funcContext : public Table_refContext {
  public:
    Table_ref_funcContext(Table_refContext *ctx);

    Func_nameContext *func_name();
    Paren_expr_listContext *paren_expr_list();
    antlr4::tree::TerminalNode *AS_GS();
    Alias_nameContext *alias_name();
    Paren_column_listContext *paren_column_list();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Table_ref_simpleContext : public Table_refContext {
  public:
    Table_ref_simpleContext(Table_refContext *ctx);

    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *ONLY_GS();
    antlr4::tree::TerminalNode *ASTERISK();
    Partition_clauseContext *partition_clause();
    Table_aliasContext *table_alias();
    Table_sampling_clauseContext *table_sampling_clause();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Table_refContext* table_ref();
  Table_refContext* table_ref(int precedence);
  class  Partition_clauseContext : public antlr4::ParserRuleContext {
  public:
    Partition_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARTITION_GS();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Partition_nameContext *partition_name();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    antlr4::tree::TerminalNode *FOR_GS();
    Paren_partition_value_listContext *paren_partition_value_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Partition_clauseContext* partition_clause();

  class  Table_aliasContext : public antlr4::ParserRuleContext {
  public:
    Table_aliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Alias_nameContext *alias_name();
    antlr4::tree::TerminalNode *AS_GS();
    Paren_column_listContext *paren_column_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_aliasContext* table_alias();

  class  Table_sampling_clauseContext : public antlr4::ParserRuleContext {
  public:
    Table_sampling_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLESAMPLE_GS();
    Sample_methodContext *sample_method();
    std::vector<Paren_expr_listContext *> paren_expr_list();
    Paren_expr_listContext* paren_expr_list(size_t i);
    antlr4::tree::TerminalNode *REPEATABLE_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_sampling_clauseContext* table_sampling_clause();

  class  Sample_methodContext : public antlr4::ParserRuleContext {
  public:
    Sample_methodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sample_methodContext* sample_method();

  class  Join_typeContext : public antlr4::ParserRuleContext {
  public:
    Join_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INNER_GS();
    antlr4::tree::TerminalNode *LEFT_GS();
    antlr4::tree::TerminalNode *RIGHT_GS();
    antlr4::tree::TerminalNode *FULL_GS();
    antlr4::tree::TerminalNode *OUTER_GS();
    antlr4::tree::TerminalNode *CROSS_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Join_typeContext* join_type();

  class  Using_clauseContext : public antlr4::ParserRuleContext {
  public:
    Using_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USING_GS();
    Paren_column_listContext *paren_column_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Using_clauseContext* using_clause();

  class  Group_by_clauseContext : public antlr4::ParserRuleContext {
  public:
    Group_by_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GROUP_GS();
    antlr4::tree::TerminalNode *BY_GS();
    Grouping_elementsContext *grouping_elements();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Group_by_clauseContext* group_by_clause();

  class  Grouping_elementsContext : public antlr4::ParserRuleContext {
  public:
    Grouping_elementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Grouping_elementContext *> grouping_element();
    Grouping_elementContext* grouping_element(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grouping_elementsContext* grouping_elements();

  class  Grouping_elementContext : public antlr4::ParserRuleContext {
  public:
    Grouping_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PAREN();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    Expression_listContext *expression_list();
    ExpressionContext *expression();
    Paren_group_element_expr_listContext *paren_group_element_expr_list();
    antlr4::tree::TerminalNode *ROLLUP_GS();
    antlr4::tree::TerminalNode *CUBE_GS();
    antlr4::tree::TerminalNode *GROUPING_GS();
    antlr4::tree::TerminalNode *SETS_GS();
    Grouping_elementsContext *grouping_elements();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grouping_elementContext* grouping_element();

  class  Paren_group_element_expr_listContext : public antlr4::ParserRuleContext {
  public:
    Paren_group_element_expr_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PAREN();
    std::vector<Group_element_exprContext *> group_element_expr();
    Group_element_exprContext* group_element_expr(size_t i);
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Paren_group_element_expr_listContext* paren_group_element_expr_list();

  class  Group_element_exprContext : public antlr4::ParserRuleContext {
  public:
    Group_element_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    Paren_expr_listContext *paren_expr_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Group_element_exprContext* group_element_expr();

  class  Having_clauseContext : public antlr4::ParserRuleContext {
  public:
    Having_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HAVING_GS();
    Expression_listContext *expression_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Having_clauseContext* having_clause();

  class  Window_clauseContext : public antlr4::ParserRuleContext {
  public:
    Window_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WINDOW_GS();
    Window_clause_optionsContext *window_clause_options();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Window_clauseContext* window_clause();

  class  Window_clause_optionsContext : public antlr4::ParserRuleContext {
  public:
    Window_clause_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Window_clause_optionContext *> window_clause_option();
    Window_clause_optionContext* window_clause_option(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Window_clause_optionsContext* window_clause_options();

  class  Window_clause_optionContext : public antlr4::ParserRuleContext {
  public:
    Window_clause_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Window_nameContext *window_name();
    antlr4::tree::TerminalNode *AS_GS();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Window_definitionContext *window_definition();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Window_clause_optionContext* window_clause_option();

  class  Window_nameContext : public antlr4::ParserRuleContext {
  public:
    Window_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Window_nameContext* window_name();

  class  Window_definitionContext : public antlr4::ParserRuleContext {
  public:
    Window_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Window_nameContext *window_name();
    antlr4::tree::TerminalNode *PARTITION_GS();
    antlr4::tree::TerminalNode *BY_GS();
    Expression_listContext *expression_list();
    Order_by_clauseContext *order_by_clause();
    Frame_clauseContext *frame_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Window_definitionContext* window_definition();

  class  Frame_clauseContext : public antlr4::ParserRuleContext {
  public:
    Frame_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Frame_start_endContext *> frame_start_end();
    Frame_start_endContext* frame_start_end(size_t i);
    antlr4::tree::TerminalNode *RANGE_GS();
    antlr4::tree::TerminalNode *ROWS_GS();
    antlr4::tree::TerminalNode *BETWEEN_GS();
    antlr4::tree::TerminalNode *AND_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Frame_clauseContext* frame_clause();

  class  Frame_start_endContext : public antlr4::ParserRuleContext {
  public:
    Frame_start_endContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNBOUNDED_GS();
    antlr4::tree::TerminalNode *PRECEDING_GS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CURRENT_GS();
    antlr4::tree::TerminalNode *ROW_GS();
    antlr4::tree::TerminalNode *FOLLOWING_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Frame_start_endContext* frame_start_end();

  class  Order_by_clauseContext : public antlr4::ParserRuleContext {
  public:
    Order_by_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ORDER_GS();
    antlr4::tree::TerminalNode *BY_GS();
    Order_by_clause_optionsContext *order_by_clause_options();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Order_by_clauseContext* order_by_clause();

  class  Order_by_clause_optionsContext : public antlr4::ParserRuleContext {
  public:
    Order_by_clause_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Order_by_clause_optionContext *> order_by_clause_option();
    Order_by_clause_optionContext* order_by_clause_option(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Order_by_clause_optionsContext* order_by_clause_options();

  class  Order_by_clause_optionContext : public antlr4::ParserRuleContext {
  public:
    Order_by_clause_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    Order_by_clause_exprContext *order_by_clause_expr();
    Nulls_first_lastContext *nulls_first_last();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Order_by_clause_optionContext* order_by_clause_option();

  class  Order_by_clause_exprContext : public antlr4::ParserRuleContext {
  public:
    Order_by_clause_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASC_GS();
    antlr4::tree::TerminalNode *DESC_GS();
    antlr4::tree::TerminalNode *USING_GS();
    IdentifierContext *identifier();
    Nlssort_expression_clauseContext *nlssort_expression_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Order_by_clause_exprContext* order_by_clause_expr();

  class  Nlssort_expression_clauseContext : public antlr4::ParserRuleContext {
  public:
    Nlssort_expression_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NLSSORT_GS();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Column_nameContext *column_name();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *CHAR_STRING();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Nlssort_expression_clauseContext* nlssort_expression_clause();

  class  Limit_clauseContext : public antlr4::ParserRuleContext {
  public:
    Limit_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIMIT_GS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *ALL_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Limit_clauseContext* limit_clause();

  class  Offset_clauseContext : public antlr4::ParserRuleContext {
  public:
    Offset_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OFFSET_GS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *ROW_GS();
    antlr4::tree::TerminalNode *ROWS_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Offset_clauseContext* offset_clause();

  class  Fetch_clauseContext : public antlr4::ParserRuleContext {
  public:
    Fetch_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FETCH_GS();
    antlr4::tree::TerminalNode *ONLY_GS();
    antlr4::tree::TerminalNode *FIRST_GS();
    antlr4::tree::TerminalNode *NEXT_GS();
    antlr4::tree::TerminalNode *ROW_GS();
    antlr4::tree::TerminalNode *ROWS_GS();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fetch_clauseContext* fetch_clause();

  class  For_update_share_clauseContext : public antlr4::ParserRuleContext {
  public:
    For_update_share_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR_GS();
    antlr4::tree::TerminalNode *UPDATE_GS();
    antlr4::tree::TerminalNode *SHARE_GS();
    antlr4::tree::TerminalNode *OF_GS();
    std::vector<Table_nameContext *> table_name();
    Table_nameContext* table_name(size_t i);
    antlr4::tree::TerminalNode *NOWAIT_GS();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  For_update_share_clauseContext* for_update_share_clause();

  class  Insert_stmtContext : public antlr4::ParserRuleContext {
  public:
    Insert_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INSERT_GS();
    antlr4::tree::TerminalNode *INTO_GS();
    Table_nameContext *table_name();
    Insert_values_optionContext *insert_values_option();
    With_clauseContext *with_clause();
    Paren_column_listContext *paren_column_list();
    Return_clauseContext *return_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Insert_stmtContext* insert_stmt();

  class  Insert_values_optionContext : public antlr4::ParserRuleContext {
  public:
    Insert_values_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFAULT_GS();
    antlr4::tree::TerminalNode *VALUES_GS();
    std::vector<Values_expressionContext *> values_expression();
    Values_expressionContext* values_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Select_stmtContext *select_stmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Insert_values_optionContext* insert_values_option();

  class  Values_expressionContext : public antlr4::ParserRuleContext {
  public:
    Values_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PAREN();
    std::vector<Expr_defaultContext *> expr_default();
    Expr_defaultContext* expr_default(size_t i);
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Values_expressionContext* values_expression();

  class  Update_stmtContext : public antlr4::ParserRuleContext {
  public:
    Update_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UPDATE_GS();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *SET_GS();
    Update_set_clauseContext *update_set_clause();
    antlr4::tree::TerminalNode *ONLY_GS();
    antlr4::tree::TerminalNode *ASTERISK();
    As_aliasContext *as_alias();
    From_clauseContext *from_clause();
    Where_clauseContext *where_clause();
    Return_clauseContext *return_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Update_stmtContext* update_stmt();

  class  Update_set_clauseContext : public antlr4::ParserRuleContext {
  public:
    Update_set_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Update_set_column_optionContext *> update_set_column_option();
    Update_set_column_optionContext* update_set_column_option(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Update_set_clauseContext* update_set_clause();

  class  Delete_stmtContext : public antlr4::ParserRuleContext {
  public:
    Delete_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELETE_GS();
    antlr4::tree::TerminalNode *FROM_GS();
    Table_nameContext *table_name();
    With_clauseContext *with_clause();
    antlr4::tree::TerminalNode *ONLY_GS();
    antlr4::tree::TerminalNode *ASTERISK();
    As_aliasContext *as_alias();
    Using_expr_optionContext *using_expr_option();
    Where_clauseContext *where_clause();
    Return_clauseContext *return_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delete_stmtContext* delete_stmt();

  class  With_clauseContext : public antlr4::ParserRuleContext {
  public:
    With_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH_GS();
    std::vector<With_queryContext *> with_query();
    With_queryContext* with_query(size_t i);
    antlr4::tree::TerminalNode *RECURSIVE_GS();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  With_clauseContext* with_clause();

  class  With_queryContext : public antlr4::ParserRuleContext {
  public:
    With_queryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    With_query_nameContext *with_query_name();
    antlr4::tree::TerminalNode *AS_GS();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Data_manipulate_stmtContext *data_manipulate_stmt();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    Paren_column_listContext *paren_column_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  With_queryContext* with_query();

  class  With_query_nameContext : public antlr4::ParserRuleContext {
  public:
    With_query_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  With_query_nameContext* with_query_name();

  class  As_aliasContext : public antlr4::ParserRuleContext {
  public:
    As_aliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Alias_nameContext *alias_name();
    antlr4::tree::TerminalNode *AS_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  As_aliasContext* as_alias();

  class  Alias_nameContext : public antlr4::ParserRuleContext {
  public:
    Alias_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *SCONST();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alias_nameContext* alias_name();

  class  Where_clauseContext : public antlr4::ParserRuleContext {
  public:
    Where_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHERE_GS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CURRENT_GS();
    antlr4::tree::TerminalNode *OF_GS();
    Cursor_nameContext *cursor_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Where_clauseContext* where_clause();

  class  Return_clauseContext : public antlr4::ParserRuleContext {
  public:
    Return_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURNING_GS();
    antlr4::tree::TerminalNode *ASTERISK();
    std::vector<Output_expr_aliasContext *> output_expr_alias();
    Output_expr_aliasContext* output_expr_alias(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Return_clauseContext* return_clause();

  class  Output_expr_aliasContext : public antlr4::ParserRuleContext {
  public:
    Output_expr_aliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    As_aliasContext *as_alias();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Output_expr_aliasContext* output_expr_alias();

  class  Drop_database_stmtContext : public antlr4::ParserRuleContext {
  public:
    Drop_database_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP_GS();
    antlr4::tree::TerminalNode *DATABASE_GS();
    Database_nameContext *database_name();
    If_exists_or_notContext *if_exists_or_not();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_database_stmtContext* drop_database_stmt();

  class  Drop_group_mapping_stmtContext : public antlr4::ParserRuleContext {
  public:
    Drop_group_mapping_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP_GS();
    antlr4::tree::TerminalNode *APP_GS();
    antlr4::tree::TerminalNode *WORKLOAD_GS();
    antlr4::tree::TerminalNode *GROUP_GS();
    antlr4::tree::TerminalNode *MAPPING_GS();
    App_nameContext *app_name();
    If_exists_or_notContext *if_exists_or_not();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_group_mapping_stmtContext* drop_group_mapping_stmt();

  class  Drop_data_source_stmtContext : public antlr4::ParserRuleContext {
  public:
    Drop_data_source_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP_GS();
    antlr4::tree::TerminalNode *DATA_GS();
    antlr4::tree::TerminalNode *SOURCE_GS();
    Src_nameContext *src_name();
    If_exists_or_notContext *if_exists_or_not();
    Cascade_restrictContext *cascade_restrict();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_data_source_stmtContext* drop_data_source_stmt();

  class  Drop_directory_stmtContext : public antlr4::ParserRuleContext {
  public:
    Drop_directory_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP_GS();
    antlr4::tree::TerminalNode *DIRECTORY_GS();
    Directory_nameContext *directory_name();
    If_exists_or_notContext *if_exists_or_not();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_directory_stmtContext* drop_directory_stmt();

  class  Drop_foreign_table_stmtContext : public antlr4::ParserRuleContext {
  public:
    Drop_foreign_table_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP_GS();
    antlr4::tree::TerminalNode *FOREIGN_GS();
    antlr4::tree::TerminalNode *TABLE_GS();
    std::vector<Table_nameContext *> table_name();
    Table_nameContext* table_name(size_t i);
    If_exists_or_notContext *if_exists_or_not();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Cascade_restrictContext *cascade_restrict();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_foreign_table_stmtContext* drop_foreign_table_stmt();

  class  Drop_function_stmtContext : public antlr4::ParserRuleContext {
  public:
    Drop_function_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP_GS();
    antlr4::tree::TerminalNode *FUNCTION_GS();
    Func_nameContext *func_name();
    If_exists_or_notContext *if_exists_or_not();
    Func_argsContext *func_args();
    Cascade_restrictContext *cascade_restrict();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_function_stmtContext* drop_function_stmt();

  class  Drop_group_stmtContext : public antlr4::ParserRuleContext {
  public:
    Drop_group_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP_GS();
    antlr4::tree::TerminalNode *GROUP_GS();
    std::vector<Group_nameContext *> group_name();
    Group_nameContext* group_name(size_t i);
    If_exists_or_notContext *if_exists_or_not();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_group_stmtContext* drop_group_stmt();

  class  Drop_index_stmtContext : public antlr4::ParserRuleContext {
  public:
    Drop_index_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP_GS();
    antlr4::tree::TerminalNode *INDEX_GS();
    std::vector<Index_nameContext *> index_name();
    Index_nameContext* index_name(size_t i);
    antlr4::tree::TerminalNode *CONCURRENTLY_GS();
    If_exists_or_notContext *if_exists_or_not();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Cascade_restrictContext *cascade_restrict();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_index_stmtContext* drop_index_stmt();

  class  Drop_node_stmtContext : public antlr4::ParserRuleContext {
  public:
    Drop_node_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP_GS();
    antlr4::tree::TerminalNode *NODE_GS();
    NodenameContext *nodename();
    If_exists_or_notContext *if_exists_or_not();
    antlr4::tree::TerminalNode *WITH_GS();
    Paren_node_listContext *paren_node_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_node_stmtContext* drop_node_stmt();

  class  Drop_node_group_stmtContext : public antlr4::ParserRuleContext {
  public:
    Drop_node_group_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP_GS();
    antlr4::tree::TerminalNode *NODE_GS();
    antlr4::tree::TerminalNode *GROUP_GS();
    std::vector<Group_nameContext *> group_name();
    Group_nameContext* group_name(size_t i);
    antlr4::tree::TerminalNode *DISTRIBUTE_GS();
    antlr4::tree::TerminalNode *FROM_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_node_group_stmtContext* drop_node_group_stmt();

  class  Drop_owned_stmtContext : public antlr4::ParserRuleContext {
  public:
    Drop_owned_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP_GS();
    antlr4::tree::TerminalNode *OWNED_GS();
    antlr4::tree::TerminalNode *BY_GS();
    std::vector<Role_nameContext *> role_name();
    Role_nameContext* role_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Cascade_restrictContext *cascade_restrict();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_owned_stmtContext* drop_owned_stmt();

  class  Drop_row_level_security_policy_stmtContext : public antlr4::ParserRuleContext {
  public:
    Drop_row_level_security_policy_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP_GS();
    antlr4::tree::TerminalNode *POLICY_GS();
    Policy_nameContext *policy_name();
    antlr4::tree::TerminalNode *ON_GS();
    Table_nameContext *table_name();
    Row_level_securityContext *row_level_security();
    If_exists_or_notContext *if_exists_or_not();
    Cascade_restrictContext *cascade_restrict();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_row_level_security_policy_stmtContext* drop_row_level_security_policy_stmt();

  class  Drop_procedure_stmtContext : public antlr4::ParserRuleContext {
  public:
    Drop_procedure_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP_GS();
    antlr4::tree::TerminalNode *PROCEDURE_GS();
    IdentifierContext *identifier();
    If_exists_or_notContext *if_exists_or_not();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_procedure_stmtContext* drop_procedure_stmt();

  class  Drop_resource_pool_stmtContext : public antlr4::ParserRuleContext {
  public:
    Drop_resource_pool_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP_GS();
    antlr4::tree::TerminalNode *RESOURCE_GS();
    antlr4::tree::TerminalNode *POOL_GS();
    Pool_nameContext *pool_name();
    If_exists_or_notContext *if_exists_or_not();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_resource_pool_stmtContext* drop_resource_pool_stmt();

  class  Drop_role_stmtContext : public antlr4::ParserRuleContext {
  public:
    Drop_role_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP_GS();
    antlr4::tree::TerminalNode *ROLE_GS();
    std::vector<Role_nameContext *> role_name();
    Role_nameContext* role_name(size_t i);
    If_exists_or_notContext *if_exists_or_not();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_role_stmtContext* drop_role_stmt();

  class  Drop_schema_stmtContext : public antlr4::ParserRuleContext {
  public:
    Drop_schema_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP_GS();
    antlr4::tree::TerminalNode *SCHEMA_GS();
    std::vector<Schema_nameContext *> schema_name();
    Schema_nameContext* schema_name(size_t i);
    If_exists_or_notContext *if_exists_or_not();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Cascade_restrictContext *cascade_restrict();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_schema_stmtContext* drop_schema_stmt();

  class  Drop_sequence_stmtContext : public antlr4::ParserRuleContext {
  public:
    Drop_sequence_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP_GS();
    antlr4::tree::TerminalNode *SEQUENCE_GS();
    Drop_name_listContext *drop_name_list();
    If_exists_or_notContext *if_exists_or_not();
    Cascade_restrictContext *cascade_restrict();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_sequence_stmtContext* drop_sequence_stmt();

  class  Drop_name_listContext : public antlr4::ParserRuleContext {
  public:
    Drop_name_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Drop_nameContext *> drop_name();
    Drop_nameContext* drop_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_name_listContext* drop_name_list();

  class  Drop_nameContext : public antlr4::ParserRuleContext {
  public:
    Drop_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    Schema_nameContext *schema_name();
    antlr4::tree::TerminalNode *PERIOD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_nameContext* drop_name();

  class  Drop_server_stmtContext : public antlr4::ParserRuleContext {
  public:
    Drop_server_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP_GS();
    antlr4::tree::TerminalNode *SERVER_GS();
    Server_nameContext *server_name();
    If_exists_or_notContext *if_exists_or_not();
    Cascade_restrictContext *cascade_restrict();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_server_stmtContext* drop_server_stmt();

  class  Drop_table_stmtContext : public antlr4::ParserRuleContext {
  public:
    Drop_table_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP_GS();
    antlr4::tree::TerminalNode *TABLE_GS();
    Drop_name_listContext *drop_name_list();
    If_exists_or_notContext *if_exists_or_not();
    Cascade_restrictContext *cascade_restrict();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_table_stmtContext* drop_table_stmt();

  class  Drop_tablespace_stmtContext : public antlr4::ParserRuleContext {
  public:
    Drop_tablespace_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP_GS();
    antlr4::tree::TerminalNode *TABLESPACE_GS();
    Tablespace_nameContext *tablespace_name();
    If_exists_or_notContext *if_exists_or_not();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_tablespace_stmtContext* drop_tablespace_stmt();

  class  Drop_txt_search_stmtContext : public antlr4::ParserRuleContext {
  public:
    Drop_txt_search_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP_GS();
    antlr4::tree::TerminalNode *TEXT_GS();
    antlr4::tree::TerminalNode *SEARCH_GS();
    Configuration_nameContext *configuration_name();
    antlr4::tree::TerminalNode *CONFIGURATION_GS();
    antlr4::tree::TerminalNode *DICTIONARY_GS();
    If_exists_or_notContext *if_exists_or_not();
    Cascade_restrictContext *cascade_restrict();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_txt_search_stmtContext* drop_txt_search_stmt();

  class  Drop_trigger_stmtContext : public antlr4::ParserRuleContext {
  public:
    Drop_trigger_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP_GS();
    antlr4::tree::TerminalNode *TRIGGER_GS();
    Trigger_nameContext *trigger_name();
    antlr4::tree::TerminalNode *ON_GS();
    Table_nameContext *table_name();
    If_exists_or_notContext *if_exists_or_not();
    Cascade_restrictContext *cascade_restrict();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_trigger_stmtContext* drop_trigger_stmt();

  class  Drop_type_stmtContext : public antlr4::ParserRuleContext {
  public:
    Drop_type_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP_GS();
    antlr4::tree::TerminalNode *TYPE_GS();
    std::vector<Type_nameContext *> type_name();
    Type_nameContext* type_name(size_t i);
    If_exists_or_notContext *if_exists_or_not();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Cascade_restrictContext *cascade_restrict();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_type_stmtContext* drop_type_stmt();

  class  Drop_user_stmtContext : public antlr4::ParserRuleContext {
  public:
    Drop_user_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP_GS();
    antlr4::tree::TerminalNode *USER_GS();
    std::vector<User_nameContext *> user_name();
    User_nameContext* user_name(size_t i);
    If_exists_or_notContext *if_exists_or_not();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Cascade_restrictContext *cascade_restrict();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_user_stmtContext* drop_user_stmt();

  class  Drop_view_stmtContext : public antlr4::ParserRuleContext {
  public:
    Drop_view_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP_GS();
    antlr4::tree::TerminalNode *VIEW_GS();
    std::vector<View_nameContext *> view_name();
    View_nameContext* view_name(size_t i);
    If_exists_or_notContext *if_exists_or_not();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Cascade_restrictContext *cascade_restrict();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_view_stmtContext* drop_view_stmt();

  class  Drop_workload_group_stmtContext : public antlr4::ParserRuleContext {
  public:
    Drop_workload_group_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP_GS();
    antlr4::tree::TerminalNode *WORKLOAD_GS();
    antlr4::tree::TerminalNode *GROUP_GS();
    Group_nameContext *group_name();
    If_exists_or_notContext *if_exists_or_not();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_workload_group_stmtContext* drop_workload_group_stmt();

  class  Analyze_stmtContext : public antlr4::ParserRuleContext {
  public:
    Analyze_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Analyze_keywordContext *analyze_keyword();
    Analyze_optionContext *analyze_option();
    antlr4::tree::TerminalNode *VERBOSE_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Analyze_stmtContext* analyze_stmt();

  class  Analyze_keywordContext : public antlr4::ParserRuleContext {
  public:
    Analyze_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ANALYZE_GS();
    antlr4::tree::TerminalNode *ANALYSE_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Analyze_keywordContext* analyze_keyword();

  class  Analyze_optionContext : public antlr4::ParserRuleContext {
  public:
    Analyze_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Partition_name_optionContext *partition_name_option();
    Table_nameContext *table_name();
    Paren_column_listContext *paren_column_list();
    antlr4::tree::TerminalNode *FOREIGN_GS();
    antlr4::tree::TerminalNode *TABLES_GS();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Analyze_optionContext* analyze_option();

  class  Partition_name_optionContext : public antlr4::ParserRuleContext {
  public:
    Partition_name_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARTITION_GS();
    Partition_nameContext *partition_name();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Partition_name_optionContext* partition_name_option();

  class  Call_stmtContext : public antlr4::ParserRuleContext {
  public:
    Call_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CALL_GS();
    Func_nameContext *func_name();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Param_expr_listContext *param_expr_list();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *PERIOD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Call_stmtContext* call_stmt();

  class  Param_expr_listContext : public antlr4::ParserRuleContext {
  public:
    Param_expr_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Param_exprContext *> param_expr();
    Param_exprContext* param_expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Param_expr_listContext* param_expr_list();

  class  Param_exprContext : public antlr4::ParserRuleContext {
  public:
    Param_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    Param_nameContext *param_name();
    Param_opContext *param_op();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Param_exprContext* param_expr();

  class  Param_opContext : public antlr4::ParserRuleContext {
  public:
    Param_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *EQUALS_OP();
    antlr4::tree::TerminalNode *GREATER_THAN_OP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Param_opContext* param_op();

  class  Checkpoint_stmtContext : public antlr4::ParserRuleContext {
  public:
    Checkpoint_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHECKPOINT_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Checkpoint_stmtContext* checkpoint_stmt();

  class  Clean_connection_stmtContext : public antlr4::ParserRuleContext {
  public:
    Clean_connection_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLEAN_GS();
    antlr4::tree::TerminalNode *CONNECTION_GS();
    std::vector<antlr4::tree::TerminalNode *> TO_GS();
    antlr4::tree::TerminalNode* TO_GS(size_t i);
    Paren_node_listContext *paren_node_list();
    antlr4::tree::TerminalNode *ALL_GS();
    antlr4::tree::TerminalNode *COORDINATOR_GS();
    antlr4::tree::TerminalNode *NODE_GS();
    antlr4::tree::TerminalNode *FOR_GS();
    antlr4::tree::TerminalNode *DATABASE_GS();
    Database_nameContext *database_name();
    antlr4::tree::TerminalNode *USER_GS();
    User_nameContext *user_name();
    antlr4::tree::TerminalNode *CHECK_GS();
    antlr4::tree::TerminalNode *FORCE_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Clean_connection_stmtContext* clean_connection_stmt();

  class  Close_stmtContext : public antlr4::ParserRuleContext {
  public:
    Close_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLOSE_GS();
    Cursor_nameContext *cursor_name();
    antlr4::tree::TerminalNode *ALL_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Close_stmtContext* close_stmt();

  class  Cursor_nameContext : public antlr4::ParserRuleContext {
  public:
    Cursor_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cursor_nameContext* cursor_name();

  class  Cluster_stmtContext : public antlr4::ParserRuleContext {
  public:
    Cluster_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLUSTER_GS();
    antlr4::tree::TerminalNode *VERBOSE_GS();
    Cluster_stmt_optionContext *cluster_stmt_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cluster_stmtContext* cluster_stmt();

  class  Cluster_stmt_optionContext : public antlr4::ParserRuleContext {
  public:
    Cluster_stmt_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *USING_GS();
    Index_nameContext *index_name();
    Partition_name_optionContext *partition_name_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cluster_stmt_optionContext* cluster_stmt_option();

  class  Comment_stmtContext : public antlr4::ParserRuleContext {
  public:
    Comment_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMENT_GS();
    antlr4::tree::TerminalNode *ON_GS();
    Comment_stmt_optionContext *comment_stmt_option();
    antlr4::tree::TerminalNode *IS_GS();
    antlr4::tree::TerminalNode *CHAR_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Comment_stmtContext* comment_stmt();

  class  Comment_stmt_optionContext : public antlr4::ParserRuleContext {
  public:
    Comment_stmt_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AGGREGATE_GS();
    Agg_nameContext *agg_name();
    Func_argsContext *func_args();
    antlr4::tree::TerminalNode *CAST_GS();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    std::vector<Typename_gsContext *> typename_gs();
    Typename_gsContext* typename_gs(size_t i);
    antlr4::tree::TerminalNode *AS_GS();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    antlr4::tree::TerminalNode *COLUMN_GS();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *PERIOD();
    Column_nameContext *column_name();
    antlr4::tree::TerminalNode *CONSTRAINT_GS();
    Constraint_nameContext *constraint_name();
    antlr4::tree::TerminalNode *ON_GS();
    antlr4::tree::TerminalNode *FUNCTION_GS();
    Function_with_argtypesContext *function_with_argtypes();
    antlr4::tree::TerminalNode *OPERATOR_GS();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *COMMA();
    Object_nameContext *object_name();
    antlr4::tree::TerminalNode *USING_GS();
    Index_nameContext *index_name();
    antlr4::tree::TerminalNode *CLASS_GS();
    antlr4::tree::TerminalNode *FAMILY_GS();
    antlr4::tree::TerminalNode *COLLATE_GS();
    antlr4::tree::TerminalNode *CONVERSION_GS();
    antlr4::tree::TerminalNode *DATABASE_GS();
    antlr4::tree::TerminalNode *DOMAIN_GS();
    antlr4::tree::TerminalNode *EXTENSION_GS();
    antlr4::tree::TerminalNode *FOREIGN_GS();
    antlr4::tree::TerminalNode *TABLE_GS();
    antlr4::tree::TerminalNode *INDEX_GS();
    antlr4::tree::TerminalNode *LARGE_GS();
    antlr4::tree::TerminalNode *OBJECT_GS();
    antlr4::tree::TerminalNode *LANGUAGE_GS();
    antlr4::tree::TerminalNode *ROLE_GS();
    antlr4::tree::TerminalNode *SCHEMA_GS();
    antlr4::tree::TerminalNode *SERVER_GS();
    antlr4::tree::TerminalNode *TABLESPACE_GS();
    antlr4::tree::TerminalNode *TYPE_GS();
    antlr4::tree::TerminalNode *VIEW_GS();
    antlr4::tree::TerminalNode *TEXT_GS();
    antlr4::tree::TerminalNode *SEARCH_GS();
    antlr4::tree::TerminalNode *DATA_GS();
    antlr4::tree::TerminalNode *WRAPPER_GS();
    antlr4::tree::TerminalNode *CONFIGURATION_GS();
    antlr4::tree::TerminalNode *DICTIONARY_GS();
    antlr4::tree::TerminalNode *PARSER_GS();
    antlr4::tree::TerminalNode *TEMPLATE_GS();
    antlr4::tree::TerminalNode *PROCEDURAL_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Comment_stmt_optionContext* comment_stmt_option();

  class  Agg_nameContext : public antlr4::ParserRuleContext {
  public:
    Agg_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Agg_nameContext* agg_name();

  class  Object_nameContext : public antlr4::ParserRuleContext {
  public:
    Object_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    std::vector<AttrContext *> attr();
    AttrContext* attr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Object_nameContext* object_name();

  class  Commit_end_stmtContext : public antlr4::ParserRuleContext {
  public:
    Commit_end_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMIT_GS();
    antlr4::tree::TerminalNode *END_GS();
    Work_transactionContext *work_transaction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Commit_end_stmtContext* commit_end_stmt();

  class  Commit_prepared_stmtContext : public antlr4::ParserRuleContext {
  public:
    Commit_prepared_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMIT_GS();
    antlr4::tree::TerminalNode *PREPARED_GS();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *WITH_GS();
    antlr4::tree::TerminalNode *CSN_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Commit_prepared_stmtContext* commit_prepared_stmt();

  class  Copy_stmtContext : public antlr4::ParserRuleContext {
  public:
    Copy_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COPY_GS();
    Copy_objContext *copy_obj();
    antlr4::tree::TerminalNode *FROM_GS();
    antlr4::tree::TerminalNode *TO_GS();
    antlr4::tree::TerminalNode *CHAR_STRING();
    antlr4::tree::TerminalNode *STDOUT_GS();
    antlr4::tree::TerminalNode *STDIN_GS();
    Paren_column_listContext *paren_column_list();
    std::vector<Copy_stmt_clauseContext *> copy_stmt_clause();
    Copy_stmt_clauseContext* copy_stmt_clause(size_t i);
    std::vector<Copy_stmt_optionContext *> copy_stmt_option();
    Copy_stmt_optionContext* copy_stmt_option(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Copy_stmtContext* copy_stmt();

  class  Copy_objContext : public antlr4::ParserRuleContext {
  public:
    Copy_objContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    Select_stmtContext *select_stmt();
    Values_stmtContext *values_stmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Copy_objContext* copy_obj();

  class  Copy_stmt_clauseContext : public antlr4::ParserRuleContext {
  public:
    Copy_stmt_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USING_GS();
    antlr4::tree::TerminalNode *DELIMITERS_GS();
    antlr4::tree::TerminalNode *CHAR_STRING();
    antlr4::tree::TerminalNode *WITHOUT_GS();
    antlr4::tree::TerminalNode *ESCAPE_GS();
    antlr4::tree::TerminalNode *LOG_GS();
    antlr4::tree::TerminalNode *ERRORS_GS();
    antlr4::tree::TerminalNode *REJECT_GS();
    antlr4::tree::TerminalNode *LIMIT_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Copy_stmt_clauseContext* copy_stmt_clause();

  class  Copy_stmt_optionContext : public antlr4::ParserRuleContext {
  public:
    Copy_stmt_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Paren_copy_clause_option_listContext *paren_copy_clause_option_list();
    antlr4::tree::TerminalNode *WITH_GS();
    std::vector<Copy_optionContext *> copy_option();
    Copy_optionContext* copy_option(size_t i);
    antlr4::tree::TerminalNode *FIXED_GS();
    antlr4::tree::TerminalNode *FORMATTER_GS();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Column_offset_listContext *column_offset_list();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Copy_stmt_optionContext* copy_stmt_option();

  class  Paren_copy_clause_option_listContext : public antlr4::ParserRuleContext {
  public:
    Paren_copy_clause_option_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PAREN();
    std::vector<Copy_clause_optionContext *> copy_clause_option();
    Copy_clause_optionContext* copy_clause_option(size_t i);
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Paren_copy_clause_option_listContext* paren_copy_clause_option_list();

  class  Copy_clause_optionContext : public antlr4::ParserRuleContext {
  public:
    Copy_clause_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FORMAT_GS();
    antlr4::tree::TerminalNode *CHAR_STRING();
    antlr4::tree::TerminalNode *DELIMITER_GS();
    antlr4::tree::TerminalNode *NOESCAPING_GS();
    Boolean_valueContext *boolean_value();
    antlr4::tree::TerminalNode *FORCE_QUOTE_GS();
    Paren_column_listContext *paren_column_list();
    antlr4::tree::TerminalNode *ASTERISK();
    antlr4::tree::TerminalNode *FORCE_NOT_NULL_GS();
    Copy_clause_common_optionContext *copy_clause_common_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Copy_clause_optionContext* copy_clause_option();

  class  Column_offset_listContext : public antlr4::ParserRuleContext {
  public:
    Column_offset_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Column_offset_eleContext *> column_offset_ele();
    Column_offset_eleContext* column_offset_ele(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_offset_listContext* column_offset_list();

  class  Column_offset_eleContext : public antlr4::ParserRuleContext {
  public:
    Column_offset_eleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_nameContext *column_name();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    std::vector<NumericContext *> numeric();
    NumericContext* numeric(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_offset_eleContext* column_offset_ele();

  class  Copy_optionContext : public antlr4::ParserRuleContext {
  public:
    Copy_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BINARY_GS();
    antlr4::tree::TerminalNode *CSV_GS();
    Copy_clause_common_optionContext *copy_clause_common_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Copy_optionContext* copy_option();

  class  Copy_clause_common_optionContext : public antlr4::ParserRuleContext {
  public:
    Copy_clause_common_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OIDS_GS();
    Boolean_valueContext *boolean_value();
    antlr4::tree::TerminalNode *NULL_GS();
    antlr4::tree::TerminalNode *CHAR_STRING();
    antlr4::tree::TerminalNode *HEADER_GS();
    antlr4::tree::TerminalNode *FILEHEADER_GS();
    antlr4::tree::TerminalNode *FREEZE_GS();
    antlr4::tree::TerminalNode *QUOTE_GS();
    antlr4::tree::TerminalNode *ESCAPE_GS();
    antlr4::tree::TerminalNode *AS_GS();
    antlr4::tree::TerminalNode *EOL_GS();
    antlr4::tree::TerminalNode *ENCODING_GS();
    antlr4::tree::TerminalNode *IGNORE_EXTRA_DATA_GS();
    antlr4::tree::TerminalNode *FILL_MISSING_FIELDS_GS();
    antlr4::tree::TerminalNode *COMPATIBLE_ILLEGAL_CHARS_GS();
    antlr4::tree::TerminalNode *DATE_FORMAT_GS();
    antlr4::tree::TerminalNode *TIME_FORMAT_GS();
    antlr4::tree::TerminalNode *TIMESTAMP_FORMAT_GS();
    antlr4::tree::TerminalNode *SMALLDATETIME_FORMAT_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Copy_clause_common_optionContext* copy_clause_common_option();

  class  Boolean_valueContext : public antlr4::ParserRuleContext {
  public:
    Boolean_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUE_GS();
    antlr4::tree::TerminalNode *FALSE_GS();
    antlr4::tree::TerminalNode *ON_GS();
    antlr4::tree::TerminalNode *OFF_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Boolean_valueContext* boolean_value();

  class  Cursor_stmtContext : public antlr4::ParserRuleContext {
  public:
    Cursor_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CURSOR_GS();
    Cursor_nameContext *cursor_name();
    antlr4::tree::TerminalNode *FOR_GS();
    Select_stmtContext *select_stmt();
    Values_stmtContext *values_stmt();
    antlr4::tree::TerminalNode *BINARY_GS();
    antlr4::tree::TerminalNode *NO_GS();
    antlr4::tree::TerminalNode *SCROLL_GS();
    antlr4::tree::TerminalNode *HOLD_GS();
    antlr4::tree::TerminalNode *WITH_GS();
    antlr4::tree::TerminalNode *WITHOUT_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cursor_stmtContext* cursor_stmt();

  class  Deallocate_stmtContext : public antlr4::ParserRuleContext {
  public:
    Deallocate_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEALLOCATE_GS();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *ALL_GS();
    antlr4::tree::TerminalNode *PREPARE_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Deallocate_stmtContext* deallocate_stmt();

  class  Do_stmtContext : public antlr4::ParserRuleContext {
  public:
    Do_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DO_GS();
    Do_stmt_codeContext *do_stmt_code();
    antlr4::tree::TerminalNode *LANGUAGE_GS();
    Lang_nameContext *lang_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Do_stmtContext* do_stmt();

  class  Do_stmt_codeContext : public antlr4::ParserRuleContext {
  public:
    Do_stmt_codeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SCONST();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Do_stmt_codeContext* do_stmt_code();

  class  Execute_stmtsContext : public antlr4::ParserRuleContext {
  public:
    Execute_stmtsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Execute_stmtContext *> execute_stmt();
    Execute_stmtContext* execute_stmt(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Execute_stmtsContext* execute_stmts();

  class  Execute_stmtContext : public antlr4::ParserRuleContext {
  public:
    Execute_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXECUTE_GS();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Param_expr_listContext *param_expr_list();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    std::vector<AttrContext *> attr();
    AttrContext* attr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Execute_stmtContext* execute_stmt();

  class  Execute_direct_stmtContext : public antlr4::ParserRuleContext {
  public:
    Execute_direct_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXECUTE_GS();
    antlr4::tree::TerminalNode *DIRECT_GS();
    antlr4::tree::TerminalNode *ON_GS();
    Paren_node_listContext *paren_node_list();
    Select_stmtContext *select_stmt();
    antlr4::tree::TerminalNode *CHAR_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Execute_direct_stmtContext* execute_direct_stmt();

  class  Explain_stmtContext : public antlr4::ParserRuleContext {
  public:
    Explain_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXPLAIN_GS();
    StmtContext *stmt();
    antlr4::tree::TerminalNode *VERBOSE_GS();
    antlr4::tree::TerminalNode *PERFORMANCE_GS();
    Explain_option_listContext *explain_option_list();
    Analyze_keywordContext *analyze_keyword();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Explain_stmtContext* explain_stmt();

  class  Explain_option_listContext : public antlr4::ParserRuleContext {
  public:
    Explain_option_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PAREN();
    std::vector<Explain_optionContext *> explain_option();
    Explain_optionContext* explain_option(size_t i);
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Explain_option_listContext* explain_option_list();

  class  Explain_optionContext : public antlr4::ParserRuleContext {
  public:
    Explain_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Analyze_keywordContext *analyze_keyword();
    antlr4::tree::TerminalNode *VERBOSE_GS();
    antlr4::tree::TerminalNode *COSTS_GS();
    antlr4::tree::TerminalNode *CPU_GS();
    antlr4::tree::TerminalNode *DETAIL_GS();
    antlr4::tree::TerminalNode *NODES_GS();
    antlr4::tree::TerminalNode *NUM_NODES_GS();
    antlr4::tree::TerminalNode *BUFFERS_GS();
    antlr4::tree::TerminalNode *TIMING_GS();
    antlr4::tree::TerminalNode *PLAN_GS();
    Boolean_valueContext *boolean_value();
    antlr4::tree::TerminalNode *FORMAT_GS();
    antlr4::tree::TerminalNode *TEXT_GS();
    antlr4::tree::TerminalNode *XML_GS();
    antlr4::tree::TerminalNode *JSON_GS();
    antlr4::tree::TerminalNode *YAML_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Explain_optionContext* explain_option();

  class  Explain_plan_stmtContext : public antlr4::ParserRuleContext {
  public:
    Explain_plan_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXPLAIN_GS();
    antlr4::tree::TerminalNode *PLAN_GS();
    antlr4::tree::TerminalNode *FOR_GS();
    StmtContext *stmt();
    antlr4::tree::TerminalNode *SET_GS();
    Assignment_stmtContext *assignment_stmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Explain_plan_stmtContext* explain_plan_stmt();

  class  Fetch_move_stmtContext : public antlr4::ParserRuleContext {
  public:
    Fetch_move_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cursor_nameContext *cursor_name();
    antlr4::tree::TerminalNode *FETCH_GS();
    antlr4::tree::TerminalNode *MOVE_GS();
    Fetch_direction_clauseContext *fetch_direction_clause();
    antlr4::tree::TerminalNode *FROM_GS();
    antlr4::tree::TerminalNode *IN_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fetch_move_stmtContext* fetch_move_stmt();

  class  Fetch_direction_clauseContext : public antlr4::ParserRuleContext {
  public:
    Fetch_direction_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NEXT_GS();
    antlr4::tree::TerminalNode *FIRST_GS();
    antlr4::tree::TerminalNode *LAST_GS();
    antlr4::tree::TerminalNode *ICONST();
    antlr4::tree::TerminalNode *ABSOLUTE_GS();
    antlr4::tree::TerminalNode *RELATIVE_GS();
    antlr4::tree::TerminalNode *FORWARD_GS();
    antlr4::tree::TerminalNode *BACKWARD_GS();
    antlr4::tree::TerminalNode *ALL_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fetch_direction_clauseContext* fetch_direction_clause();

  class  Grant_stmtContext : public antlr4::ParserRuleContext {
  public:
    Grant_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GRANT_GS();
    Privileges_for_objContext *privileges_for_obj();
    antlr4::tree::TerminalNode *TO_GS();
    Grant_revoke_objectsContext *grant_revoke_objects();
    antlr4::tree::TerminalNode *ON_GS();
    Grant_on_optionContext *grant_on_option();
    With_grant_optionContext *with_grant_option();
    std::vector<Role_nameContext *> role_name();
    Role_nameContext* role_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grant_stmtContext* grant_stmt();

  class  Privileges_for_objContext : public antlr4::ParserRuleContext {
  public:
    Privileges_for_objContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Table_privilegesContext *table_privileges();
    All_privilegesContext *all_privileges();
    std::vector<Table_privilegeContext *> table_privilege();
    Table_privilegeContext* table_privilege(size_t i);
    std::vector<Paren_column_listContext *> paren_column_list();
    Paren_column_listContext* paren_column_list(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Database_privilegesContext *database_privileges();
    antlr4::tree::TerminalNode *USAGE_GS();
    Function_privilegeContext *function_privilege();
    std::vector<Cluster_privilegeContext *> cluster_privilege();
    Cluster_privilegeContext* cluster_privilege(size_t i);
    antlr4::tree::TerminalNode *ALL_GS();
    antlr4::tree::TerminalNode *PRIVILEGE_GS();
    antlr4::tree::TerminalNode *READ_GS();
    antlr4::tree::TerminalNode *WRITE_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Privileges_for_objContext* privileges_for_obj();

  class  Database_privilegesContext : public antlr4::ParserRuleContext {
  public:
    Database_privilegesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Database_privilegeContext *> database_privilege();
    Database_privilegeContext* database_privilege(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Database_privilegesContext* database_privileges();

  class  Database_privilegeContext : public antlr4::ParserRuleContext {
  public:
    Database_privilegeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE_GS();
    antlr4::tree::TerminalNode *CONNECT_GS();
    antlr4::tree::TerminalNode *TEMPORARY_GS();
    antlr4::tree::TerminalNode *TEMP_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Database_privilegeContext* database_privilege();

  class  Cluster_privilegeContext : public antlr4::ParserRuleContext {
  public:
    Cluster_privilegeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE_GS();
    antlr4::tree::TerminalNode *USAGE_GS();
    antlr4::tree::TerminalNode *COMPUTE_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cluster_privilegeContext* cluster_privilege();

  class  Grant_on_optionContext : public antlr4::ParserRuleContext {
  public:
    Grant_on_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Table_nameContext *> table_name();
    Table_nameContext* table_name(size_t i);
    antlr4::tree::TerminalNode *ALL_GS();
    antlr4::tree::TerminalNode *TABLES_GS();
    antlr4::tree::TerminalNode *IN_GS();
    antlr4::tree::TerminalNode *SCHEMA_GS();
    Schema_name_listContext *schema_name_list();
    antlr4::tree::TerminalNode *TABLE_GS();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *DATABASE_GS();
    std::vector<Database_nameContext *> database_name();
    Database_nameContext* database_name(size_t i);
    antlr4::tree::TerminalNode *FOREIGN_GS();
    antlr4::tree::TerminalNode *DATA_GS();
    antlr4::tree::TerminalNode *WRAPPER_GS();
    std::vector<Object_nameContext *> object_name();
    Object_nameContext* object_name(size_t i);
    antlr4::tree::TerminalNode *SERVER_GS();
    std::vector<Server_nameContext *> server_name();
    Server_nameContext* server_name(size_t i);
    Grant_on_function_option_listContext *grant_on_function_option_list();
    antlr4::tree::TerminalNode *FUNCTIONS_GS();
    antlr4::tree::TerminalNode *LANGUAGE_GS();
    std::vector<Lang_nameContext *> lang_name();
    Lang_nameContext* lang_name(size_t i);
    antlr4::tree::TerminalNode *NODE_GS();
    antlr4::tree::TerminalNode *GROUP_GS();
    std::vector<Group_nameContext *> group_name();
    Group_nameContext* group_name(size_t i);
    antlr4::tree::TerminalNode *TABLESPACE_GS();
    std::vector<Tablespace_nameContext *> tablespace_name();
    Tablespace_nameContext* tablespace_name(size_t i);
    antlr4::tree::TerminalNode *TYPE_GS();
    std::vector<Type_nameContext *> type_name();
    Type_nameContext* type_name(size_t i);
    antlr4::tree::TerminalNode *SOURCE_GS();
    std::vector<Src_nameContext *> src_name();
    Src_nameContext* src_name(size_t i);
    antlr4::tree::TerminalNode *DIRECTORY_GS();
    std::vector<Directory_nameContext *> directory_name();
    Directory_nameContext* directory_name(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grant_on_optionContext* grant_on_option();

  class  Grant_on_function_option_listContext : public antlr4::ParserRuleContext {
  public:
    Grant_on_function_option_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Grant_on_function_optionContext *> grant_on_function_option();
    Grant_on_function_optionContext* grant_on_function_option(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grant_on_function_option_listContext* grant_on_function_option_list();

  class  Grant_on_function_optionContext : public antlr4::ParserRuleContext {
  public:
    Grant_on_function_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION_GS();
    Function_with_argtypesContext *function_with_argtypes();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grant_on_function_optionContext* grant_on_function_option();

  class  Lock_stmtContext : public antlr4::ParserRuleContext {
  public:
    Lock_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCK_GS();
    std::vector<Alter_table_nameContext *> alter_table_name();
    Alter_table_nameContext* alter_table_name(size_t i);
    antlr4::tree::TerminalNode *TABLE_GS();
    Lock_in_modeContext *lock_in_mode();
    antlr4::tree::TerminalNode *NOWAIT_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Lock_stmtContext* lock_stmt();

  class  Lock_in_modeContext : public antlr4::ParserRuleContext {
  public:
    Lock_in_modeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IN_GS();
    In_mode_optionContext *in_mode_option();
    antlr4::tree::TerminalNode *MODE_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Lock_in_modeContext* lock_in_mode();

  class  In_mode_optionContext : public antlr4::ParserRuleContext {
  public:
    In_mode_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHARE_GS();
    antlr4::tree::TerminalNode *EXCLUSIVE_GS();
    antlr4::tree::TerminalNode *ACCESS_GS();
    antlr4::tree::TerminalNode *ROW_GS();
    antlr4::tree::TerminalNode *UPDATE_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  In_mode_optionContext* in_mode_option();

  class  Prepare_stmtContext : public antlr4::ParserRuleContext {
  public:
    Prepare_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PREPARE_GS();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *AS_GS();
    StmtContext *stmt();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    std::vector<Typename_gsContext *> typename_gs();
    Typename_gsContext* typename_gs(size_t i);
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Prepare_stmtContext* prepare_stmt();

  class  Prepare_transaction_stmtContext : public antlr4::ParserRuleContext {
  public:
    Prepare_transaction_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PREPARE_GS();
    antlr4::tree::TerminalNode *TRANSACTION_GS();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Prepare_transaction_stmtContext* prepare_transaction_stmt();

  class  Merge_into_stmtContext : public antlr4::ParserRuleContext {
  public:
    Merge_into_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MERGE_GS();
    antlr4::tree::TerminalNode *INTO_GS();
    std::vector<Table_nameContext *> table_name();
    Table_nameContext* table_name(size_t i);
    antlr4::tree::TerminalNode *USING_GS();
    On_condition_clauseContext *on_condition_clause();
    Select_stmtContext *select_stmt();
    std::vector<As_aliasContext *> as_alias();
    As_aliasContext* as_alias(size_t i);
    When_matched_update_clauseContext *when_matched_update_clause();
    When_not_matched_insert_clauseContext *when_not_matched_insert_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Merge_into_stmtContext* merge_into_stmt();

  class  On_condition_clauseContext : public antlr4::ParserRuleContext {
  public:
    On_condition_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ON_GS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  On_condition_clauseContext* on_condition_clause();

  class  When_matched_update_clauseContext : public antlr4::ParserRuleContext {
  public:
    When_matched_update_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN_GS();
    antlr4::tree::TerminalNode *MATCHED_GS();
    antlr4::tree::TerminalNode *THEN_GS();
    antlr4::tree::TerminalNode *UPDATE_GS();
    antlr4::tree::TerminalNode *SET_GS();
    Update_set_column_optionContext *update_set_column_option();
    Where_clauseContext *where_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  When_matched_update_clauseContext* when_matched_update_clause();

  class  Update_set_column_optionContext : public antlr4::ParserRuleContext {
  public:
    Update_set_column_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Assignment_stmt_listContext *assignment_stmt_list();
    Paren_column_listContext *paren_column_list();
    antlr4::tree::TerminalNode *EQUALS_OP();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    std::vector<Expr_defaultContext *> expr_default();
    Expr_defaultContext* expr_default(size_t i);
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    Simple_selectContext *simple_select();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Update_set_column_optionContext* update_set_column_option();

  class  When_not_matched_insert_clauseContext : public antlr4::ParserRuleContext {
  public:
    When_not_matched_insert_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN_GS();
    antlr4::tree::TerminalNode *NOT_GS();
    antlr4::tree::TerminalNode *MATCHED_GS();
    antlr4::tree::TerminalNode *THEN_GS();
    antlr4::tree::TerminalNode *INSERT_GS();
    Not_matched_insert_value_optionContext *not_matched_insert_value_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  When_not_matched_insert_clauseContext* when_not_matched_insert_clause();

  class  Not_matched_insert_value_optionContext : public antlr4::ParserRuleContext {
  public:
    Not_matched_insert_value_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFAULT_GS();
    antlr4::tree::TerminalNode *VALUES_GS();
    std::vector<Not_matched_insert_valueContext *> not_matched_insert_value();
    Not_matched_insert_valueContext* not_matched_insert_value(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Where_clauseContext *where_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Not_matched_insert_value_optionContext* not_matched_insert_value_option();

  class  Not_matched_insert_valueContext : public antlr4::ParserRuleContext {
  public:
    Not_matched_insert_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VALUES_GS();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    std::vector<Expr_defaultContext *> expr_default();
    Expr_defaultContext* expr_default(size_t i);
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    Paren_column_listContext *paren_column_list();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Not_matched_insert_valueContext* not_matched_insert_value();

  class  Reassign_owned_stmtContext : public antlr4::ParserRuleContext {
  public:
    Reassign_owned_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REASSIGN_GS();
    antlr4::tree::TerminalNode *OWNED_GS();
    antlr4::tree::TerminalNode *BY_GS();
    std::vector<Role_nameContext *> role_name();
    Role_nameContext* role_name(size_t i);
    antlr4::tree::TerminalNode *TO_GS();
    New_nameContext *new_name();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Reassign_owned_stmtContext* reassign_owned_stmt();

  class  Reindex_stmtContext : public antlr4::ParserRuleContext {
  public:
    Reindex_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REINDEX_GS();
    Reindex_optionContext *reindex_option();
    Index_nameContext *index_name();
    antlr4::tree::TerminalNode *PARTITION_GS();
    Partition_nameContext *partition_name();
    antlr4::tree::TerminalNode *FORCE_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Reindex_stmtContext* reindex_stmt();

  class  Reindex_optionContext : public antlr4::ParserRuleContext {
  public:
    Reindex_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INDEX_GS();
    antlr4::tree::TerminalNode *TABLE_GS();
    antlr4::tree::TerminalNode *INTERNAL_GS();
    antlr4::tree::TerminalNode *DATABASE_GS();
    antlr4::tree::TerminalNode *SYSTEM_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Reindex_optionContext* reindex_option();

  class  Release_savepoint_stmtContext : public antlr4::ParserRuleContext {
  public:
    Release_savepoint_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RELEASE_GS();
    Savepoint_nameContext *savepoint_name();
    antlr4::tree::TerminalNode *SAVEPOINT_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Release_savepoint_stmtContext* release_savepoint_stmt();

  class  Reset_stmtContext : public antlr4::ParserRuleContext {
  public:
    Reset_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESET_GS();
    Configuration_paramContext *configuration_param();
    antlr4::tree::TerminalNode *CURRENT_SCHEMA_GS();
    antlr4::tree::TerminalNode *TIME_GS();
    antlr4::tree::TerminalNode *ZONE_GS();
    antlr4::tree::TerminalNode *TRANSACTION_GS();
    antlr4::tree::TerminalNode *ISOLATION_GS();
    antlr4::tree::TerminalNode *LEVEL_GS();
    antlr4::tree::TerminalNode *SESSION_GS();
    antlr4::tree::TerminalNode *AUTHORIZATION_GS();
    antlr4::tree::TerminalNode *ALL_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Reset_stmtContext* reset_stmt();

  class  Savepoint_nameContext : public antlr4::ParserRuleContext {
  public:
    Savepoint_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Savepoint_nameContext* savepoint_name();

  class  Revoke_stmtContext : public antlr4::ParserRuleContext {
  public:
    Revoke_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REVOKE_GS();
    Privileges_for_objContext *privileges_for_obj();
    antlr4::tree::TerminalNode *FROM_GS();
    Grant_revoke_objectsContext *grant_revoke_objects();
    Grant_option_forContext *grant_option_for();
    antlr4::tree::TerminalNode *ON_GS();
    Grant_on_optionContext *grant_on_option();
    Cascade_restrictContext *cascade_restrict();
    std::vector<Role_nameContext *> role_name();
    Role_nameContext* role_name(size_t i);
    Admin_option_forContext *admin_option_for();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Revoke_stmtContext* revoke_stmt();

  class  Admin_option_forContext : public antlr4::ParserRuleContext {
  public:
    Admin_option_forContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADMIN_GS();
    antlr4::tree::TerminalNode *OPTION_GS();
    antlr4::tree::TerminalNode *FOR_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Admin_option_forContext* admin_option_for();

  class  Rollback_stmtContext : public antlr4::ParserRuleContext {
  public:
    Rollback_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ROLLBACK_GS();
    Work_transactionContext *work_transaction();
    antlr4::tree::TerminalNode *PREPARED_GS();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *TO_GS();
    Savepoint_nameContext *savepoint_name();
    antlr4::tree::TerminalNode *SAVEPOINT_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rollback_stmtContext* rollback_stmt();

  class  Savepoint_stmtContext : public antlr4::ParserRuleContext {
  public:
    Savepoint_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SAVEPOINT_GS();
    Savepoint_nameContext *savepoint_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Savepoint_stmtContext* savepoint_stmt();

  class  Set_reset_stmtContext : public antlr4::ParserRuleContext {
  public:
    Set_reset_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Set_config_parametersContext *set_config_parameters();
    Set_constraintsContext *set_constraints();
    Set_roleContext *set_role();
    Set_session_authorizationContext *set_session_authorization();
    Set_transactionContext *set_transaction();
    Reset_config_parametersContext *reset_config_parameters();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Set_reset_stmtContext* set_reset_stmt();

  class  Set_config_parametersContext : public antlr4::ParserRuleContext {
  public:
    Set_config_parametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Set_configuration_paramContext *set_configuration_param();
    antlr4::tree::TerminalNode *SET_GS();
    Set_parameter_optionContext *set_parameter_option();
    Session_localContext *session_local();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Set_config_parametersContext* set_config_parameters();

  class  Session_localContext : public antlr4::ParserRuleContext {
  public:
    Session_localContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SESSION_GS();
    antlr4::tree::TerminalNode *LOCAL_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Session_localContext* session_local();

  class  Set_parameter_optionContext : public antlr4::ParserRuleContext {
  public:
    Set_parameter_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TIME_GS();
    antlr4::tree::TerminalNode *ZONE_GS();
    TimezoneContext *timezone();
    antlr4::tree::TerminalNode *LOCAL_GS();
    antlr4::tree::TerminalNode *DEFAULT_GS();
    antlr4::tree::TerminalNode *CURRENT_SCHEMA_GS();
    antlr4::tree::TerminalNode *SCHEMA_GS();
    antlr4::tree::TerminalNode *CHAR_STRING();
    antlr4::tree::TerminalNode *TO_GS();
    antlr4::tree::TerminalNode *EQUALS_OP();
    Schema_nameContext *schema_name();
    antlr4::tree::TerminalNode *NAMES_GS();
    Encoding_nameContext *encoding_name();
    antlr4::tree::TerminalNode *XML_GS();
    antlr4::tree::TerminalNode *OPTION_GS();
    antlr4::tree::TerminalNode *DOCUMENT_GS();
    antlr4::tree::TerminalNode *CONTENT_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Set_parameter_optionContext* set_parameter_option();

  class  TimezoneContext : public antlr4::ParserRuleContext {
  public:
    TimezoneContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHAR_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TimezoneContext* timezone();

  class  Set_constraintsContext : public antlr4::ParserRuleContext {
  public:
    Set_constraintsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET_GS();
    antlr4::tree::TerminalNode *CONSTRAINTS_GS();
    antlr4::tree::TerminalNode *DEFERRED_GS();
    antlr4::tree::TerminalNode *IMMEDIATE_GS();
    antlr4::tree::TerminalNode *ALL_GS();
    std::vector<Constraint_nameContext *> constraint_name();
    Constraint_nameContext* constraint_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Set_constraintsContext* set_constraints();

  class  Set_roleContext : public antlr4::ParserRuleContext {
  public:
    Set_roleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET_GS();
    antlr4::tree::TerminalNode *ROLE_GS();
    Role_nameContext *role_name();
    antlr4::tree::TerminalNode *PASSWORD_GS();
    antlr4::tree::TerminalNode *CHAR_STRING();
    Session_localContext *session_local();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Set_roleContext* set_role();

  class  Reset_config_parametersContext : public antlr4::ParserRuleContext {
  public:
    Reset_config_parametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESET_GS();
    antlr4::tree::TerminalNode *ROLE_GS();
    antlr4::tree::TerminalNode *SESSION_GS();
    antlr4::tree::TerminalNode *AUTHORIZATION_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Reset_config_parametersContext* reset_config_parameters();

  class  Set_session_authorizationContext : public antlr4::ParserRuleContext {
  public:
    Set_session_authorizationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET_GS();
    antlr4::tree::TerminalNode *SESSION_GS();
    antlr4::tree::TerminalNode *AUTHORIZATION_GS();
    antlr4::tree::TerminalNode *DEFAULT_GS();
    Role_nameContext *role_name();
    antlr4::tree::TerminalNode *PASSWORD_GS();
    antlr4::tree::TerminalNode *CHAR_STRING();
    Session_localContext *session_local();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Set_session_authorizationContext* set_session_authorization();

  class  Set_transactionContext : public antlr4::ParserRuleContext {
  public:
    Set_transactionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET_GS();
    antlr4::tree::TerminalNode *TRANSACTION_GS();
    Isolation_level_optionsContext *isolation_level_options();
    antlr4::tree::TerminalNode *LOCAL_GS();
    antlr4::tree::TerminalNode *SESSION_GS();
    antlr4::tree::TerminalNode *CHARACTERISTICS_GS();
    antlr4::tree::TerminalNode *AS_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Set_transactionContext* set_transaction();

  class  Isolation_level_optionsContext : public antlr4::ParserRuleContext {
  public:
    Isolation_level_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Isolation_level_optionContext *> isolation_level_option();
    Isolation_level_optionContext* isolation_level_option(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Isolation_level_optionsContext* isolation_level_options();

  class  Isolation_level_optionContext : public antlr4::ParserRuleContext {
  public:
    Isolation_level_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ISOLATION_GS();
    antlr4::tree::TerminalNode *LEVEL_GS();
    antlr4::tree::TerminalNode *READ_GS();
    antlr4::tree::TerminalNode *COMMITTED_GS();
    antlr4::tree::TerminalNode *UNCOMMITTED_GS();
    antlr4::tree::TerminalNode *SERIALIZABLE_GS();
    antlr4::tree::TerminalNode *REPEATABLE_GS();
    antlr4::tree::TerminalNode *WRITE_GS();
    antlr4::tree::TerminalNode *ONLY_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Isolation_level_optionContext* isolation_level_option();

  class  Show_stmtContext : public antlr4::ParserRuleContext {
  public:
    Show_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_GS();
    Configuration_nameContext *configuration_name();
    antlr4::tree::TerminalNode *CURRENT_SCHEMA_GS();
    antlr4::tree::TerminalNode *TIME_GS();
    antlr4::tree::TerminalNode *ZONE_GS();
    antlr4::tree::TerminalNode *TRANSACTION_GS();
    antlr4::tree::TerminalNode *ISOLATION_GS();
    antlr4::tree::TerminalNode *LEVEL_GS();
    antlr4::tree::TerminalNode *SESSION_GS();
    antlr4::tree::TerminalNode *AUTHORIZATION_GS();
    antlr4::tree::TerminalNode *ALL_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Show_stmtContext* show_stmt();

  class  Start_transaction_stmtContext : public antlr4::ParserRuleContext {
  public:
    Start_transaction_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Start_transaction_optionContext *start_transaction_option();
    Isolation_level_optionsContext *isolation_level_options();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Start_transaction_stmtContext* start_transaction_stmt();

  class  Start_transaction_optionContext : public antlr4::ParserRuleContext {
  public:
    Start_transaction_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *START_GS();
    antlr4::tree::TerminalNode *TRANSACTION_GS();
    antlr4::tree::TerminalNode *BEGIN_GS();
    Work_transactionContext *work_transaction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Start_transaction_optionContext* start_transaction_option();

  class  Truncate_stmtContext : public antlr4::ParserRuleContext {
  public:
    Truncate_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUNCATE_GS();
    std::vector<Alter_table_nameContext *> alter_table_name();
    Alter_table_nameContext* alter_table_name(size_t i);
    antlr4::tree::TerminalNode *TABLE_GS();
    antlr4::tree::TerminalNode *ONLY_GS();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *CONTINUE_GS();
    antlr4::tree::TerminalNode *IDENTITY_GS();
    Cascade_restrictContext *cascade_restrict();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Truncate_stmtContext* truncate_stmt();

  class  Vacuum_stmtContext : public antlr4::ParserRuleContext {
  public:
    Vacuum_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VACUUM_GS();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Vacuum_keyword_listContext *vacuum_keyword_list();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    std::vector<Vacuum_optionContext *> vacuum_option();
    Vacuum_optionContext* vacuum_option(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Vacuum_stmtContext* vacuum_stmt();

  class  Vacuum_keyword_listContext : public antlr4::ParserRuleContext {
  public:
    Vacuum_keyword_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Vacuum_keywordContext *> vacuum_keyword();
    Vacuum_keywordContext* vacuum_keyword(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Vacuum_keyword_listContext* vacuum_keyword_list();

  class  Vacuum_keywordContext : public antlr4::ParserRuleContext {
  public:
    Vacuum_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FULL_GS();
    antlr4::tree::TerminalNode *COMPACT_GS();
    antlr4::tree::TerminalNode *FREEZE_GS();
    antlr4::tree::TerminalNode *VERBOSE_GS();
    Analyze_keywordContext *analyze_keyword();
    antlr4::tree::TerminalNode *DELTAMERGE_GS();
    antlr4::tree::TerminalNode *HDFSDIRECTORY_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Vacuum_keywordContext* vacuum_keyword();

  class  Vacuum_optionContext : public antlr4::ParserRuleContext {
  public:
    Vacuum_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Table_nameContext *table_name();
    Paren_column_listContext *paren_column_list();
    Partition_name_optionContext *partition_name_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Vacuum_optionContext* vacuum_option();

  class  Values_stmtContext : public antlr4::ParserRuleContext {
  public:
    Values_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VALUES_GS();
    std::vector<Paren_expr_listContext *> paren_expr_list();
    Paren_expr_listContext* paren_expr_list(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Order_by_clauseContext *order_by_clause();
    Limit_clauseContext *limit_clause();
    Offset_clauseContext *offset_clause();
    Fetch_clauseContext *fetch_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Values_stmtContext* values_stmt();

  class  Paren_expr_listContext : public antlr4::ParserRuleContext {
  public:
    Paren_expr_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Expression_listContext *expression_list();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Paren_expr_listContext* paren_expr_list();

  class  Expression_listContext : public antlr4::ParserRuleContext {
  public:
    Expression_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expression_listContext* expression_list();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Logical_exprContext *logical_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();

  class  Logical_exprContext : public antlr4::ParserRuleContext {
  public:
    Logical_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Multiset_exprContext *multiset_expr();
    antlr4::tree::TerminalNode *IS_GS();
    antlr4::tree::TerminalNode *NULL_GS();
    antlr4::tree::TerminalNode *DISTINCT_GS();
    antlr4::tree::TerminalNode *FROM_GS();
    std::vector<Logical_exprContext *> logical_expr();
    Logical_exprContext* logical_expr(size_t i);
    antlr4::tree::TerminalNode *NOT_GS();
    antlr4::tree::TerminalNode *ISNULL_GS();
    antlr4::tree::TerminalNode *NOTNULL_GS();
    antlr4::tree::TerminalNode *AND_GS();
    antlr4::tree::TerminalNode *OR_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Logical_exprContext* logical_expr();
  Logical_exprContext* logical_expr(int precedence);
  class  Multiset_exprContext : public antlr4::ParserRuleContext {
  public:
    Multiset_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Relational_exprContext *relational_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Multiset_exprContext* multiset_expr();

  class  Relational_exprContext : public antlr4::ParserRuleContext {
  public:
    Relational_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Compound_exprContext *compound_expr();
    std::vector<Relational_exprContext *> relational_expr();
    Relational_exprContext* relational_expr(size_t i);
    Relational_opContext *relational_op();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Relational_exprContext* relational_expr();
  Relational_exprContext* relational_expr(int precedence);
  class  Relational_opContext : public antlr4::ParserRuleContext {
  public:
    Relational_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LESS_THAN_OP();
    antlr4::tree::TerminalNode *GREATER_THAN_OP();
    antlr4::tree::TerminalNode *EQUALS_OP();
    antlr4::tree::TerminalNode *NOT_EQUAL_OP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Relational_opContext* relational_op();

  class  Compound_exprContext : public antlr4::ParserRuleContext {
  public:
    Compound_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ConcatenationContext *> concatenation();
    ConcatenationContext* concatenation(size_t i);
    antlr4::tree::TerminalNode *IN_GS();
    In_exprContext *in_expr();
    antlr4::tree::TerminalNode *BETWEEN_GS();
    Between_elementsContext *between_elements();
    antlr4::tree::TerminalNode *NOT_GS();
    antlr4::tree::TerminalNode *SYMMETRIC_GS();
    antlr4::tree::TerminalNode *LIKE_GS();
    antlr4::tree::TerminalNode *ILIKE_GS();
    antlr4::tree::TerminalNode *SIMILAR_GS();
    antlr4::tree::TerminalNode *TO_GS();
    antlr4::tree::TerminalNode *ESCAPE_GS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *ASYMMETRIC_GS();
    std::vector<Concatenation_listContext *> concatenation_list();
    Concatenation_listContext* concatenation_list(size_t i);
    antlr4::tree::TerminalNode *OVERLAPS_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Compound_exprContext* compound_expr();

  class  In_exprContext : public antlr4::ParserRuleContext {
  public:
    In_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Select_stmtContext *select_stmt();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    Paren_expr_listContext *paren_expr_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  In_exprContext* in_expr();

  class  Between_elementsContext : public antlr4::ParserRuleContext {
  public:
    Between_elementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ConcatenationContext *> concatenation();
    ConcatenationContext* concatenation(size_t i);
    antlr4::tree::TerminalNode *AND_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Between_elementsContext* between_elements();

  class  Concatenation_listContext : public antlr4::ParserRuleContext {
  public:
    Concatenation_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PAREN();
    std::vector<ConcatenationContext *> concatenation();
    ConcatenationContext* concatenation(size_t i);
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Concatenation_listContext* concatenation_list();

  class  ConcatenationContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *op = nullptr;;
    ConcatenationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Model_exprContext *model_expr();
    antlr4::tree::TerminalNode *AT_GS();
    antlr4::tree::TerminalNode *TIME_GS();
    antlr4::tree::TerminalNode *ZONE_GS();
    std::vector<ConcatenationContext *> concatenation();
    ConcatenationContext* concatenation(size_t i);
    antlr4::tree::TerminalNode *CARRET_OPERATOR_PART();
    antlr4::tree::TerminalNode *ASTERISK();
    antlr4::tree::TerminalNode *SOLIDUS();
    antlr4::tree::TerminalNode *PERCENT_SIGN();
    antlr4::tree::TerminalNode *PLUS_SIGN();
    antlr4::tree::TerminalNode *MINUS_SIGN();
    antlr4::tree::TerminalNode *AMPERSAND();
    std::vector<antlr4::tree::TerminalNode *> BAR();
    antlr4::tree::TerminalNode* BAR(size_t i);
    antlr4::tree::TerminalNode *POUND_SIGN();
    std::vector<antlr4::tree::TerminalNode *> GREATER_THAN_OP();
    antlr4::tree::TerminalNode* GREATER_THAN_OP(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LESS_THAN_OP();
    antlr4::tree::TerminalNode* LESS_THAN_OP(size_t i);
    Geometry_op1Context *geometry_op1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConcatenationContext* concatenation();
  ConcatenationContext* concatenation(int precedence);
  class  Geometry_op1Context : public antlr4::ParserRuleContext {
  public:
    Geometry_op1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> POUND_SIGN();
    antlr4::tree::TerminalNode* POUND_SIGN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AMPERSAND();
    antlr4::tree::TerminalNode* AMPERSAND(size_t i);
    std::vector<antlr4::tree::TerminalNode *> GREATER_THAN_OP();
    antlr4::tree::TerminalNode* GREATER_THAN_OP(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LESS_THAN_OP();
    antlr4::tree::TerminalNode* LESS_THAN_OP(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BAR();
    antlr4::tree::TerminalNode* BAR(size_t i);
    antlr4::tree::TerminalNode *CARRET_OPERATOR_PART();
    antlr4::tree::TerminalNode *QUESTION_MARK();
    antlr4::tree::TerminalNode *AT_SIGN();
    antlr4::tree::TerminalNode *TILDE_OPERATOR_PART();
    antlr4::tree::TerminalNode *EQUALS_OP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Geometry_op1Context* geometry_op1();

  class  Model_exprContext : public antlr4::ParserRuleContext {
  public:
    Model_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Unary_exprContext *unary_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Model_exprContext* model_expr();

  class  Unary_exprContext : public antlr4::ParserRuleContext {
  public:
    Unary_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Unary_exprContext *> unary_expr();
    Unary_exprContext* unary_expr(size_t i);
    antlr4::tree::TerminalNode *MINUS_SIGN();
    antlr4::tree::TerminalNode *PLUS_SIGN();
    antlr4::tree::TerminalNode *AT_SIGN();
    std::vector<antlr4::tree::TerminalNode *> BAR();
    antlr4::tree::TerminalNode* BAR(size_t i);
    antlr4::tree::TerminalNode *SOLIDUS();
    std::vector<antlr4::tree::TerminalNode *> EXCLAMATION_OPERATOR_PART();
    antlr4::tree::TerminalNode* EXCLAMATION_OPERATOR_PART(size_t i);
    antlr4::tree::TerminalNode *TILDE_OPERATOR_PART();
    Geometry_op2Context *geometry_op2();
    Case_exprContext *case_expr();
    Function_exprContext *function_expr();
    Quantified_expressionContext *quantified_expression();
    AtomContext *atom();
    antlr4::tree::TerminalNode *ARRAY_GS();
    Array_exprContext *array_expr();
    antlr4::tree::TerminalNode *PARAM();
    std::vector<antlr4::tree::TerminalNode *> TYPECAST();
    antlr4::tree::TerminalNode* TYPECAST(size_t i);
    std::vector<Typename_gsContext *> typename_gs();
    Typename_gsContext* typename_gs(size_t i);
    std::vector<Typecast_argContext *> typecast_arg();
    Typecast_argContext* typecast_arg(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PERIOD();
    antlr4::tree::TerminalNode* PERIOD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unary_exprContext* unary_expr();
  Unary_exprContext* unary_expr(int precedence);
  class  Geometry_op2Context : public antlr4::ParserRuleContext {
  public:
    Geometry_op2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *POUND_SIGN();
    std::vector<antlr4::tree::TerminalNode *> AT_SIGN();
    antlr4::tree::TerminalNode* AT_SIGN(size_t i);
    antlr4::tree::TerminalNode *QUESTION_MARK();
    antlr4::tree::TerminalNode *BAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Geometry_op2Context* geometry_op2();

  class  Typename_gsContext : public antlr4::ParserRuleContext {
  public:
    Typename_gsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Number_typeContext *number_type();
    Precision_partContext *precision_part();
    Concurrency_typeContext *concurrency_type();
    Boolean_typeContext *boolean_type();
    Char_typeContext *char_type();
    Binary_typeContext *binary_type();
    Date_typeContext *date_type();
    Geometry_typeContext *geometry_type();
    Inet_typeContext *inet_type();
    Bit_typeContext *bit_type();
    Txt_search_typeContext *txt_search_type();
    Hll_typeContext *hll_type();
    Oid_typeContext *oid_type();
    Other_typeContext *other_type();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Typename_gsContext* typename_gs();

  class  Precision_partContext : public antlr4::ParserRuleContext {
  public:
    Precision_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PAREN();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    std::vector<NumericContext *> numeric();
    NumericContext* numeric(size_t i);
    antlr4::tree::TerminalNode *ASTERISK();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *LEFT_BRACKET();
    antlr4::tree::TerminalNode *RIGHT_BRACKET();
    antlr4::tree::TerminalNode *ICONST();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Precision_partContext* precision_part();

  class  NumericContext : public antlr4::ParserRuleContext {
  public:
    NumericContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ICONST();
    antlr4::tree::TerminalNode *FCONST();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumericContext* numeric();

  class  Number_typeContext : public antlr4::ParserRuleContext {
  public:
    Number_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TINYINT_GS();
    antlr4::tree::TerminalNode *SMALLINT_GS();
    antlr4::tree::TerminalNode *INTEGER_GS();
    antlr4::tree::TerminalNode *BINARY_INTEGER_GS();
    antlr4::tree::TerminalNode *BIGINT_GS();
    antlr4::tree::TerminalNode *DECIMAL_GS();
    antlr4::tree::TerminalNode *NUMERIC_GS();
    antlr4::tree::TerminalNode *NUMBER_GS();
    antlr4::tree::TerminalNode *SMALLSERIAL_GS();
    antlr4::tree::TerminalNode *SERIAL_GS();
    antlr4::tree::TerminalNode *BIGSERIAL_GS();
    antlr4::tree::TerminalNode *REAL_GS();
    antlr4::tree::TerminalNode *FLOAT4_GS();
    antlr4::tree::TerminalNode *FLOAT_GS();
    antlr4::tree::TerminalNode *FLOAT8_GS();
    antlr4::tree::TerminalNode *DOUBLE_GS();
    antlr4::tree::TerminalNode *PRECISION_GS();
    antlr4::tree::TerminalNode *BINARY_DOUBLE_GS();
    antlr4::tree::TerminalNode *DEC_GS();
    antlr4::tree::TerminalNode *INT_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Number_typeContext* number_type();

  class  Concurrency_typeContext : public antlr4::ParserRuleContext {
  public:
    Concurrency_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MONEY_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Concurrency_typeContext* concurrency_type();

  class  Boolean_typeContext : public antlr4::ParserRuleContext {
  public:
    Boolean_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BOOLEAN_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Boolean_typeContext* boolean_type();

  class  Char_typeContext : public antlr4::ParserRuleContext {
  public:
    Char_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHAR_GS();
    antlr4::tree::TerminalNode *CHARACTER_GS();
    antlr4::tree::TerminalNode *NCHAR_GS();
    antlr4::tree::TerminalNode *VARCHAR_GS();
    antlr4::tree::TerminalNode *VARYING_GS();
    antlr4::tree::TerminalNode *VARCHAR2_GS();
    antlr4::tree::TerminalNode *NVARCHAR2_GS();
    antlr4::tree::TerminalNode *CLOB_GS();
    antlr4::tree::TerminalNode *TEXT_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Char_typeContext* char_type();

  class  Binary_typeContext : public antlr4::ParserRuleContext {
  public:
    Binary_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BLOB_GS();
    antlr4::tree::TerminalNode *RAW_GS();
    antlr4::tree::TerminalNode *BYTEA_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Binary_typeContext* binary_type();

  class  Date_typeContext : public antlr4::ParserRuleContext {
  public:
    Date_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATE_GS();
    antlr4::tree::TerminalNode *TIME_GS();
    antlr4::tree::TerminalNode *TIMESTAMP_GS();
    std::vector<Precision_partContext *> precision_part();
    Precision_partContext* precision_part(size_t i);
    Time_zone_partContext *time_zone_part();
    antlr4::tree::TerminalNode *WITH_GS();
    antlr4::tree::TerminalNode *WITHOUT_GS();
    antlr4::tree::TerminalNode *SMALLDATETIME_GS();
    antlr4::tree::TerminalNode *INTERVAL_GS();
    antlr4::tree::TerminalNode *DAY_GS();
    antlr4::tree::TerminalNode *TO_GS();
    antlr4::tree::TerminalNode *SECOND_GS();
    antlr4::tree::TerminalNode *FIELDS_GS();
    antlr4::tree::TerminalNode *RELTIME_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Date_typeContext* date_type();

  class  Time_zone_partContext : public antlr4::ParserRuleContext {
  public:
    Time_zone_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TIME_GS();
    antlr4::tree::TerminalNode *ZONE_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Time_zone_partContext* time_zone_part();

  class  Geometry_typeContext : public antlr4::ParserRuleContext {
  public:
    Geometry_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *POINT_GS();
    antlr4::tree::TerminalNode *LSEG_GS();
    antlr4::tree::TerminalNode *BOX_GS();
    antlr4::tree::TerminalNode *PATH_GS();
    antlr4::tree::TerminalNode *POLYGON_GS();
    antlr4::tree::TerminalNode *CIRCLE_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Geometry_typeContext* geometry_type();

  class  Inet_typeContext : public antlr4::ParserRuleContext {
  public:
    Inet_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CIDR_GS();
    antlr4::tree::TerminalNode *INET_GS();
    antlr4::tree::TerminalNode *MACADDR_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Inet_typeContext* inet_type();

  class  Bit_typeContext : public antlr4::ParserRuleContext {
  public:
    Bit_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIT_GS();
    antlr4::tree::TerminalNode *VARYING_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bit_typeContext* bit_type();

  class  Txt_search_typeContext : public antlr4::ParserRuleContext {
  public:
    Txt_search_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TSVECTOR_GS();
    antlr4::tree::TerminalNode *TSQUERY_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Txt_search_typeContext* txt_search_type();

  class  Hll_typeContext : public antlr4::ParserRuleContext {
  public:
    Hll_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HLL_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Hll_typeContext* hll_type();

  class  Oid_typeContext : public antlr4::ParserRuleContext {
  public:
    Oid_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OID_GS();
    antlr4::tree::TerminalNode *CID_GS();
    antlr4::tree::TerminalNode *XID_GS();
    antlr4::tree::TerminalNode *TID_GS();
    antlr4::tree::TerminalNode *REGCONFIG_GS();
    antlr4::tree::TerminalNode *REGDICTIONARY_GS();
    antlr4::tree::TerminalNode *REGOPER();
    antlr4::tree::TerminalNode *REGOPERATOR();
    antlr4::tree::TerminalNode *REGPROC();
    antlr4::tree::TerminalNode *REGPROCEDURE();
    antlr4::tree::TerminalNode *REGCLASS();
    antlr4::tree::TerminalNode *REGTYPE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Oid_typeContext* oid_type();

  class  Other_typeContext : public antlr4::ParserRuleContext {
  public:
    Other_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ANY_GS();
    antlr4::tree::TerminalNode *ANYELEMENT_GS();
    antlr4::tree::TerminalNode *ANYARRAY_GS();
    antlr4::tree::TerminalNode *ANYNONARRAY_GS();
    antlr4::tree::TerminalNode *ANYENUM_GS();
    antlr4::tree::TerminalNode *ANYRANGE_GS();
    antlr4::tree::TerminalNode *CSTRING_GS();
    antlr4::tree::TerminalNode *INTERNAL_GS();
    antlr4::tree::TerminalNode *LANGUAGE_HANDLER_GS();
    antlr4::tree::TerminalNode *FDW_HANDLER_GS();
    antlr4::tree::TerminalNode *RECORD_GS();
    antlr4::tree::TerminalNode *TRIGGER_GS();
    antlr4::tree::TerminalNode *VOID_GS();
    antlr4::tree::TerminalNode *OPAQUE_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Other_typeContext* other_type();

  class  Typecast_argContext : public antlr4::ParserRuleContext {
  public:
    Typecast_argContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_BRACKET();
    antlr4::tree::TerminalNode *RIGHT_BRACKET();
    Expression_listContext *expression_list();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Typecast_argContext* typecast_arg();

  class  Function_exprContext : public antlr4::ParserRuleContext {
  public:
    Function_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_functionContext *simple_function();
    antlr4::tree::TerminalNode *FILTER_GS();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    antlr4::tree::TerminalNode *WHERE_GS();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    antlr4::tree::TerminalNode *CURRENT_DATE_GS();
    antlr4::tree::TerminalNode *CURRENT_TIME_GS();
    antlr4::tree::TerminalNode *CURRENT_TIMESTAMP_GS();
    antlr4::tree::TerminalNode *LOCALTIME_GS();
    antlr4::tree::TerminalNode *LOCALTIMESTAMP_GS();
    antlr4::tree::TerminalNode *ICONST();
    antlr4::tree::TerminalNode *CURRENT_ROLE_GS();
    antlr4::tree::TerminalNode *CURRENT_USER_GS();
    antlr4::tree::TerminalNode *SESSION_USER_GS();
    antlr4::tree::TerminalNode *USER_GS();
    antlr4::tree::TerminalNode *CURRENT_CATALOG_GS();
    antlr4::tree::TerminalNode *CURRENT_SCHEMA_GS();
    antlr4::tree::TerminalNode *CAST_GS();
    antlr4::tree::TerminalNode *AS_GS();
    Typename_gsContext *typename_gs();
    antlr4::tree::TerminalNode *EXTRACT_GS();
    Extract_listContext *extract_list();
    antlr4::tree::TerminalNode *OVERLAY_GS();
    Overlay_listContext *overlay_list();
    antlr4::tree::TerminalNode *POSITION_GS();
    Position_listContext *position_list();
    antlr4::tree::TerminalNode *SUBSTRING_GS();
    Substr_listContext *substr_list();
    antlr4::tree::TerminalNode *TREAT_GS();
    antlr4::tree::TerminalNode *TRIM_GS();
    Trim_listContext *trim_list();
    antlr4::tree::TerminalNode *BOTH_GS();
    antlr4::tree::TerminalNode *LEADING_GS();
    antlr4::tree::TerminalNode *TRAILING_GS();
    antlr4::tree::TerminalNode *NULLIF_GS();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *COALESCE_GS();
    Paren_expr_listContext *paren_expr_list();
    antlr4::tree::TerminalNode *GREATEST_GS();
    antlr4::tree::TerminalNode *LEAST_GS();
    antlr4::tree::TerminalNode *DECODE_GS();
    antlr4::tree::TerminalNode *XMLCONCAT_GS();
    antlr4::tree::TerminalNode *XMLELEMENT_GS();
    antlr4::tree::TerminalNode *NAME_GS();
    Col_labelContext *col_label();
    Xmlelement_partContext *xmlelement_part();
    antlr4::tree::TerminalNode *XMLEXISTS_GS();
    Xmlexists_argumentContext *xmlexists_argument();
    antlr4::tree::TerminalNode *XMLFOREST_GS();
    Xml_attribute_listContext *xml_attribute_list();
    antlr4::tree::TerminalNode *XMLPARSE_GS();
    Document_or_contentContext *document_or_content();
    Xml_whitespace_optionContext *xml_whitespace_option();
    antlr4::tree::TerminalNode *XMLPI_GS();
    antlr4::tree::TerminalNode *XMLROOT_GS();
    Xml_root_versionContext *xml_root_version();
    Opt_xml_root_standaloneContext *opt_xml_root_standalone();
    antlr4::tree::TerminalNode *XMLSERIALIZE_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_exprContext* function_expr();

  class  Col_labelContext : public antlr4::ParserRuleContext {
  public:
    Col_labelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *SCONST();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Col_labelContext* col_label();

  class  Xmlelement_partContext : public antlr4::ParserRuleContext {
  public:
    Xmlelement_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Xml_attributesContext *xml_attributes();
    Expression_listContext *expression_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xmlelement_partContext* xmlelement_part();

  class  Xml_root_versionContext : public antlr4::ParserRuleContext {
  public:
    Xml_root_versionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VERSION_GS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *NO_GS();
    antlr4::tree::TerminalNode *VALUE_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xml_root_versionContext* xml_root_version();

  class  Opt_xml_root_standaloneContext : public antlr4::ParserRuleContext {
  public:
    Opt_xml_root_standaloneContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *STANDALONE_GS();
    antlr4::tree::TerminalNode *YES_GS();
    antlr4::tree::TerminalNode *NO_GS();
    antlr4::tree::TerminalNode *VALUE_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_xml_root_standaloneContext* opt_xml_root_standalone();

  class  Xml_attributesContext : public antlr4::ParserRuleContext {
  public:
    Xml_attributesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *XMLATTRIBUTES_GS();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Xml_attribute_listContext *xml_attribute_list();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xml_attributesContext* xml_attributes();

  class  Xml_attribute_listContext : public antlr4::ParserRuleContext {
  public:
    Xml_attribute_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Xml_attribute_elContext *> xml_attribute_el();
    Xml_attribute_elContext* xml_attribute_el(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xml_attribute_listContext* xml_attribute_list();

  class  Xml_attribute_elContext : public antlr4::ParserRuleContext {
  public:
    Xml_attribute_elContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *AS_GS();
    Col_labelContext *col_label();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xml_attribute_elContext* xml_attribute_el();

  class  Document_or_contentContext : public antlr4::ParserRuleContext {
  public:
    Document_or_contentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOCUMENT_GS();
    antlr4::tree::TerminalNode *CONTENT_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Document_or_contentContext* document_or_content();

  class  Xml_whitespace_optionContext : public antlr4::ParserRuleContext {
  public:
    Xml_whitespace_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHITESPACE_GS();
    antlr4::tree::TerminalNode *PRESERVE_GS();
    antlr4::tree::TerminalNode *STRIP_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xml_whitespace_optionContext* xml_whitespace_option();

  class  Xmlexists_argumentContext : public antlr4::ParserRuleContext {
  public:
    Xmlexists_argumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PASSING_GS();
    ExpressionContext *expression();
    std::vector<antlr4::tree::TerminalNode *> BY_GS();
    antlr4::tree::TerminalNode* BY_GS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> REF_GS();
    antlr4::tree::TerminalNode* REF_GS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xmlexists_argumentContext* xmlexists_argument();

  class  Extract_listContext : public antlr4::ParserRuleContext {
  public:
    Extract_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Extract_argContext *extract_arg();
    antlr4::tree::TerminalNode *FROM_GS();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Extract_listContext* extract_list();

  class  Extract_argContext : public antlr4::ParserRuleContext {
  public:
    Extract_argContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *YEAR_GS();
    antlr4::tree::TerminalNode *MONTH_GS();
    antlr4::tree::TerminalNode *DAY_GS();
    antlr4::tree::TerminalNode *HOUR_GS();
    antlr4::tree::TerminalNode *MINUTE_GS();
    antlr4::tree::TerminalNode *SECOND_GS();
    antlr4::tree::TerminalNode *DELIMITED_STR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Extract_argContext* extract_arg();

  class  Overlay_listContext : public antlr4::ParserRuleContext {
  public:
    Overlay_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    Overlay_placingContext *overlay_placing();
    Substr_fromContext *substr_from();
    Substr_forContext *substr_for();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Overlay_listContext* overlay_list();

  class  Overlay_placingContext : public antlr4::ParserRuleContext {
  public:
    Overlay_placingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLACING_GS();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Overlay_placingContext* overlay_placing();

  class  Position_listContext : public antlr4::ParserRuleContext {
  public:
    Position_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *IN_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Position_listContext* position_list();

  class  Substr_listContext : public antlr4::ParserRuleContext {
  public:
    Substr_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    Substr_fromContext *substr_from();
    Substr_forContext *substr_for();
    Expression_listContext *expression_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Substr_listContext* substr_list();

  class  Substr_fromContext : public antlr4::ParserRuleContext {
  public:
    Substr_fromContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FROM_GS();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Substr_fromContext* substr_from();

  class  Substr_forContext : public antlr4::ParserRuleContext {
  public:
    Substr_forContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR_GS();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Substr_forContext* substr_for();

  class  Trim_listContext : public antlr4::ParserRuleContext {
  public:
    Trim_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Expression_listContext *expression_list();
    antlr4::tree::TerminalNode *FROM_GS();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Trim_listContext* trim_list();

  class  Simple_functionContext : public antlr4::ParserRuleContext {
  public:
    Simple_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Func_nameContext *func_name();
    Simple_func_paramsContext *simple_func_params();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_functionContext* simple_function();

  class  Func_nameContext : public antlr4::ParserRuleContext {
  public:
    Func_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Regular_id_commonContext *regular_id_common();
    antlr4::tree::TerminalNode *CHAR_STRING();
    antlr4::tree::TerminalNode *SCONST();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_nameContext* func_name();

  class  Simple_func_paramsContext : public antlr4::ParserRuleContext {
  public:
    Simple_func_paramsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PAREN();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    antlr4::tree::TerminalNode *ASTERISK();
    Param_expr_listContext *param_expr_list();
    antlr4::tree::TerminalNode *VARIADIC_GS();
    antlr4::tree::TerminalNode *COMMA();
    Param_exprContext *param_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_func_paramsContext* simple_func_params();

  class  AtomContext : public antlr4::ParserRuleContext {
  public:
    AtomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    General_elementContext *general_element();
    ConstantContext *constant();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Select_stmtContext *select_stmt();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    Expression_listContext *expression_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AtomContext* atom();

  class  General_elementContext : public antlr4::ParserRuleContext {
  public:
    General_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<General_element_partContext *> general_element_part();
    General_element_partContext* general_element_part(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PERIOD();
    antlr4::tree::TerminalNode* PERIOD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  General_elementContext* general_element();

  class  General_element_partContext : public antlr4::ParserRuleContext {
  public:
    General_element_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PERIOD();
    antlr4::tree::TerminalNode* PERIOD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  General_element_partContext* general_element_part();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Regular_id_commonContext *regular_id_common();
    Nonreserved_keywords_can_not_be_nameContext *nonreserved_keywords_can_not_be_name();
    antlr4::tree::TerminalNode *CHAR_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierContext* identifier();

  class  Regular_id_commonContext : public antlr4::ParserRuleContext {
  public:
    Regular_id_commonContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REGULAR_ID();
    Reserved_keywords_normalContext *reserved_keywords_normal();
    Reserved_keywords_can_be_nameContext *reserved_keywords_can_be_name();
    Nonreserved_keywords_normalContext *nonreserved_keywords_normal();
    Non_keywords_but_tokenContext *non_keywords_but_token();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Regular_id_commonContext* regular_id_common();

  class  Regular_idContext : public antlr4::ParserRuleContext {
  public:
    Regular_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Regular_id_commonContext *regular_id_common();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Regular_idContext* regular_id();

  class  ConstantContext : public antlr4::ParserRuleContext {
  public:
    ConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumericContext *numeric();
    antlr4::tree::TerminalNode *CHAR_STRING();
    Date_typeContext *date_type();
    Geometry_typeContext *geometry_type();
    antlr4::tree::TerminalNode *BCONST();
    Inet_typeContext *inet_type();
    antlr4::tree::TerminalNode *NULL_GS();
    antlr4::tree::TerminalNode *FALSE_GS();
    antlr4::tree::TerminalNode *TRUE_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantContext* constant();

  class  Case_exprContext : public antlr4::ParserRuleContext {
  public:
    Case_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE_GS();
    antlr4::tree::TerminalNode *END_GS();
    std::vector<When_clauseContext *> when_clause();
    When_clauseContext* when_clause(size_t i);
    Case_defaultContext *case_default();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_exprContext* case_expr();

  class  When_clauseContext : public antlr4::ParserRuleContext {
  public:
    When_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN_GS();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *THEN_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  When_clauseContext* when_clause();

  class  Case_defaultContext : public antlr4::ParserRuleContext {
  public:
    Case_defaultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSE_GS();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_defaultContext* case_default();

  class  Quantified_expressionContext : public antlr4::ParserRuleContext {
  public:
    Quantified_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SOME_GS();
    antlr4::tree::TerminalNode *EXISTS_GS();
    antlr4::tree::TerminalNode *ALL_GS();
    antlr4::tree::TerminalNode *ANY_GS();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Select_stmtContext *select_stmt();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Quantified_expressionContext* quantified_expression();

  class  Array_exprContext : public antlr4::ParserRuleContext {
  public:
    Array_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_BRACKET();
    antlr4::tree::TerminalNode *RIGHT_BRACKET();
    Expression_listContext *expression_list();
    Array_expr_listContext *array_expr_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Array_exprContext* array_expr();

  class  Array_expr_listContext : public antlr4::ParserRuleContext {
  public:
    Array_expr_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Array_exprContext *> array_expr();
    Array_exprContext* array_expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Array_expr_listContext* array_expr_list();

  class  Reserved_keywords_normalContext : public antlr4::ParserRuleContext {
  public:
    Reserved_keywords_normalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL_GS();
    antlr4::tree::TerminalNode *ANALYSE_GS();
    antlr4::tree::TerminalNode *ANALYZE_GS();
    antlr4::tree::TerminalNode *AND_GS();
    antlr4::tree::TerminalNode *ANY_GS();
    antlr4::tree::TerminalNode *ARRAY_GS();
    antlr4::tree::TerminalNode *ASC_GS();
    antlr4::tree::TerminalNode *ASYMMETRIC_GS();
    antlr4::tree::TerminalNode *AS_GS();
    antlr4::tree::TerminalNode *AUTHID_GS();
    antlr4::tree::TerminalNode *BOTH_GS();
    antlr4::tree::TerminalNode *BUCKETS_GS();
    antlr4::tree::TerminalNode *CASE_GS();
    antlr4::tree::TerminalNode *CAST_GS();
    antlr4::tree::TerminalNode *CHECK_GS();
    antlr4::tree::TerminalNode *COLLATE_GS();
    antlr4::tree::TerminalNode *COLUMN_GS();
    antlr4::tree::TerminalNode *CONSTRAINT_GS();
    antlr4::tree::TerminalNode *CREATE_GS();
    antlr4::tree::TerminalNode *CURRENT_CATALOG_GS();
    antlr4::tree::TerminalNode *CURRENT_DATE_GS();
    antlr4::tree::TerminalNode *CURRENT_ROLE_GS();
    antlr4::tree::TerminalNode *CURRENT_TIMESTAMP_GS();
    antlr4::tree::TerminalNode *CURRENT_TIME_GS();
    antlr4::tree::TerminalNode *CURRENT_USER_GS();
    antlr4::tree::TerminalNode *DEFAULT_GS();
    antlr4::tree::TerminalNode *DEFERRABLE_GS();
    antlr4::tree::TerminalNode *DESC_GS();
    antlr4::tree::TerminalNode *DISTINCT_GS();
    antlr4::tree::TerminalNode *DO_GS();
    antlr4::tree::TerminalNode *ELSE_GS();
    antlr4::tree::TerminalNode *END_GS();
    antlr4::tree::TerminalNode *EXCEPT_GS();
    antlr4::tree::TerminalNode *FALSE_GS();
    antlr4::tree::TerminalNode *FETCH_GS();
    antlr4::tree::TerminalNode *FOREIGN_GS();
    antlr4::tree::TerminalNode *FOR_GS();
    antlr4::tree::TerminalNode *FROM_GS();
    antlr4::tree::TerminalNode *FUNCTION_GS();
    antlr4::tree::TerminalNode *GRANT_GS();
    antlr4::tree::TerminalNode *GROUP_GS();
    antlr4::tree::TerminalNode *HAVING_GS();
    antlr4::tree::TerminalNode *INITIALLY_GS();
    antlr4::tree::TerminalNode *INTERSECT_GS();
    antlr4::tree::TerminalNode *INTO_GS();
    antlr4::tree::TerminalNode *IN_GS();
    antlr4::tree::TerminalNode *IS_GS();
    antlr4::tree::TerminalNode *LEADING_GS();
    antlr4::tree::TerminalNode *LESS_GS();
    antlr4::tree::TerminalNode *LIMIT_GS();
    antlr4::tree::TerminalNode *LOCALTIMESTAMP_GS();
    antlr4::tree::TerminalNode *LOCALTIME_GS();
    antlr4::tree::TerminalNode *MAXVALUE_GS();
    antlr4::tree::TerminalNode *MINUS_GS();
    antlr4::tree::TerminalNode *MODIFY_GS();
    antlr4::tree::TerminalNode *NLSSORT_GS();
    antlr4::tree::TerminalNode *NOT_GS();
    antlr4::tree::TerminalNode *NULL_GS();
    antlr4::tree::TerminalNode *OFFSET_GS();
    antlr4::tree::TerminalNode *ONLY_GS();
    antlr4::tree::TerminalNode *ON_GS();
    antlr4::tree::TerminalNode *ORDER_GS();
    antlr4::tree::TerminalNode *OR_GS();
    antlr4::tree::TerminalNode *PERFORMANCE_GS();
    antlr4::tree::TerminalNode *PLACING_GS();
    antlr4::tree::TerminalNode *PRIMARY_GS();
    antlr4::tree::TerminalNode *PROCEDURE_GS();
    antlr4::tree::TerminalNode *REFERENCES_GS();
    antlr4::tree::TerminalNode *REJECT_GS();
    antlr4::tree::TerminalNode *RETURNING_GS();
    antlr4::tree::TerminalNode *RETURN_GS();
    antlr4::tree::TerminalNode *SELECT_GS();
    antlr4::tree::TerminalNode *SESSION_USER_GS();
    antlr4::tree::TerminalNode *SOME_GS();
    antlr4::tree::TerminalNode *SPLIT_GS();
    antlr4::tree::TerminalNode *SYMMETRIC_GS();
    antlr4::tree::TerminalNode *SYSDATE_GS();
    antlr4::tree::TerminalNode *THEN_GS();
    antlr4::tree::TerminalNode *TO_GS();
    antlr4::tree::TerminalNode *TRAILING_GS();
    antlr4::tree::TerminalNode *TRUE_GS();
    antlr4::tree::TerminalNode *UNION_GS();
    antlr4::tree::TerminalNode *UNIQUE_GS();
    antlr4::tree::TerminalNode *USER_GS();
    antlr4::tree::TerminalNode *USING_GS();
    antlr4::tree::TerminalNode *VARIADIC_GS();
    antlr4::tree::TerminalNode *WHEN_GS();
    antlr4::tree::TerminalNode *WHERE_GS();
    antlr4::tree::TerminalNode *WINDOW_GS();
    antlr4::tree::TerminalNode *WITH_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Reserved_keywords_normalContext* reserved_keywords_normal();

  class  Reserved_keywords_can_be_nameContext : public antlr4::ParserRuleContext {
  public:
    Reserved_keywords_can_be_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AUTHORIZATION_GS();
    antlr4::tree::TerminalNode *BINARY_GS();
    antlr4::tree::TerminalNode *COLLATION_GS();
    antlr4::tree::TerminalNode *CONCURRENTLY_GS();
    antlr4::tree::TerminalNode *CROSS_GS();
    antlr4::tree::TerminalNode *CURRENT_SCHEMA_GS();
    antlr4::tree::TerminalNode *FREEZE_GS();
    antlr4::tree::TerminalNode *FULL_GS();
    antlr4::tree::TerminalNode *ILIKE_GS();
    antlr4::tree::TerminalNode *INNER_GS();
    antlr4::tree::TerminalNode *ISNULL_GS();
    antlr4::tree::TerminalNode *JOIN_GS();
    antlr4::tree::TerminalNode *LEFT_GS();
    antlr4::tree::TerminalNode *LIKE_GS();
    antlr4::tree::TerminalNode *NATURAL_GS();
    antlr4::tree::TerminalNode *NOTNULL_GS();
    antlr4::tree::TerminalNode *OUTER_GS();
    antlr4::tree::TerminalNode *OVERLAPS_GS();
    antlr4::tree::TerminalNode *OVER_GS();
    antlr4::tree::TerminalNode *RIGHT_GS();
    antlr4::tree::TerminalNode *SIMILAR_GS();
    antlr4::tree::TerminalNode *VERBOSE_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Reserved_keywords_can_be_nameContext* reserved_keywords_can_be_name();

  class  Nonreserved_keywords_normalContext : public antlr4::ParserRuleContext {
  public:
    Nonreserved_keywords_normalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ABORT_GS();
    antlr4::tree::TerminalNode *ABSOLUTE_GS();
    antlr4::tree::TerminalNode *ACCESS_GS();
    antlr4::tree::TerminalNode *ACCOUNT_GS();
    antlr4::tree::TerminalNode *ACTION_GS();
    antlr4::tree::TerminalNode *ADD_GS();
    antlr4::tree::TerminalNode *ADMIN_GS();
    antlr4::tree::TerminalNode *AFTER_GS();
    antlr4::tree::TerminalNode *AGGREGATE_GS();
    antlr4::tree::TerminalNode *ALSO_GS();
    antlr4::tree::TerminalNode *ALTER_GS();
    antlr4::tree::TerminalNode *ALWAYS_GS();
    antlr4::tree::TerminalNode *APP_GS();
    antlr4::tree::TerminalNode *ASSERTION_GS();
    antlr4::tree::TerminalNode *ASSIGNMENT_GS();
    antlr4::tree::TerminalNode *ATTRIBUTE_GS();
    antlr4::tree::TerminalNode *AT_GS();
    antlr4::tree::TerminalNode *AUTOEXTEND_GS();
    antlr4::tree::TerminalNode *AUTOMAPPED_GS();
    antlr4::tree::TerminalNode *BACKWARD_GS();
    antlr4::tree::TerminalNode *BARRIER_GS();
    antlr4::tree::TerminalNode *BEFORE_GS();
    antlr4::tree::TerminalNode *BEGIN_GS();
    antlr4::tree::TerminalNode *BLOB_GS();
    antlr4::tree::TerminalNode *BY_GS();
    antlr4::tree::TerminalNode *CACHE_GS();
    antlr4::tree::TerminalNode *CALLED_GS();
    antlr4::tree::TerminalNode *CALL_GS();
    antlr4::tree::TerminalNode *CASCADED_GS();
    antlr4::tree::TerminalNode *CASCADE_GS();
    antlr4::tree::TerminalNode *CATALOG_GS();
    antlr4::tree::TerminalNode *CHAIN_GS();
    antlr4::tree::TerminalNode *CHARACTERISTICS_GS();
    antlr4::tree::TerminalNode *CHECKPOINT_GS();
    antlr4::tree::TerminalNode *CLASS_GS();
    antlr4::tree::TerminalNode *CLEAN_GS();
    antlr4::tree::TerminalNode *CLOB_GS();
    antlr4::tree::TerminalNode *CLOSE_GS();
    antlr4::tree::TerminalNode *CLUSTER_GS();
    antlr4::tree::TerminalNode *COMMENTS_GS();
    antlr4::tree::TerminalNode *COMMENT_GS();
    antlr4::tree::TerminalNode *COMMITTED_GS();
    antlr4::tree::TerminalNode *COMMIT_GS();
    antlr4::tree::TerminalNode *COMPRESS_GS();
    antlr4::tree::TerminalNode *CONFIGURATION_GS();
    antlr4::tree::TerminalNode *CONNECTION_GS();
    antlr4::tree::TerminalNode *CONSTRAINTS_GS();
    antlr4::tree::TerminalNode *CONTENT_GS();
    antlr4::tree::TerminalNode *CONTINUE_GS();
    antlr4::tree::TerminalNode *CONVERSION_GS();
    antlr4::tree::TerminalNode *COORDINATOR_GS();
    antlr4::tree::TerminalNode *COPY_GS();
    antlr4::tree::TerminalNode *COST_GS();
    antlr4::tree::TerminalNode *CSV_GS();
    antlr4::tree::TerminalNode *CURRENT_GS();
    antlr4::tree::TerminalNode *CURSOR_GS();
    antlr4::tree::TerminalNode *CYCLE_GS();
    antlr4::tree::TerminalNode *DATABASE_GS();
    antlr4::tree::TerminalNode *DATAFILE_GS();
    antlr4::tree::TerminalNode *DATA_GS();
    antlr4::tree::TerminalNode *DAY_GS();
    antlr4::tree::TerminalNode *DBCOMPATIBILITY_GS();
    antlr4::tree::TerminalNode *DEALLOCATE_GS();
    antlr4::tree::TerminalNode *DECLARE_GS();
    antlr4::tree::TerminalNode *DEFAULTS_GS();
    antlr4::tree::TerminalNode *DEFERRED_GS();
    antlr4::tree::TerminalNode *DEFINER_GS();
    antlr4::tree::TerminalNode *DELETE_GS();
    antlr4::tree::TerminalNode *DELIMITERS_GS();
    antlr4::tree::TerminalNode *DELIMITER_GS();
    antlr4::tree::TerminalNode *DELTA_GS();
    antlr4::tree::TerminalNode *DETERMINISTIC_GS();
    antlr4::tree::TerminalNode *DICTIONARY_GS();
    antlr4::tree::TerminalNode *DIRECT_GS();
    antlr4::tree::TerminalNode *DISABLE_GS();
    antlr4::tree::TerminalNode *DISCARD_GS();
    antlr4::tree::TerminalNode *DISTRIBUTE_GS();
    antlr4::tree::TerminalNode *DISTRIBUTION_GS();
    antlr4::tree::TerminalNode *DOCUMENT_GS();
    antlr4::tree::TerminalNode *DOMAIN_GS();
    antlr4::tree::TerminalNode *DOUBLE_GS();
    antlr4::tree::TerminalNode *DROP_GS();
    antlr4::tree::TerminalNode *EACH_GS();
    antlr4::tree::TerminalNode *ENABLE_GS();
    antlr4::tree::TerminalNode *ENCODING_GS();
    antlr4::tree::TerminalNode *ENCRYPTED_GS();
    antlr4::tree::TerminalNode *ENFORCED_GS();
    antlr4::tree::TerminalNode *ENUM_GS();
    antlr4::tree::TerminalNode *EOL_GS();
    antlr4::tree::TerminalNode *ESCAPE_GS();
    antlr4::tree::TerminalNode *ESCAPING_GS();
    antlr4::tree::TerminalNode *EVERY_GS();
    antlr4::tree::TerminalNode *EXCHANGE_GS();
    antlr4::tree::TerminalNode *EXCLUDE_GS();
    antlr4::tree::TerminalNode *EXCLUDING_GS();
    antlr4::tree::TerminalNode *EXCLUSIVE_GS();
    antlr4::tree::TerminalNode *EXECUTE_GS();
    antlr4::tree::TerminalNode *EXPLAIN_GS();
    antlr4::tree::TerminalNode *EXTENSION_GS();
    antlr4::tree::TerminalNode *EXTERNAL_GS();
    antlr4::tree::TerminalNode *FAMILY_GS();
    antlr4::tree::TerminalNode *FILEHEADER_GS();
    antlr4::tree::TerminalNode *FIRST_GS();
    antlr4::tree::TerminalNode *FIXED_GS();
    antlr4::tree::TerminalNode *FOLLOWING_GS();
    antlr4::tree::TerminalNode *FORCE_GS();
    antlr4::tree::TerminalNode *FORMATTER_GS();
    antlr4::tree::TerminalNode *FORWARD_GS();
    antlr4::tree::TerminalNode *FUNCTIONS_GS();
    antlr4::tree::TerminalNode *GLOBAL_GS();
    antlr4::tree::TerminalNode *GRANTED_GS();
    antlr4::tree::TerminalNode *HANDLER_GS();
    antlr4::tree::TerminalNode *HEADER_GS();
    antlr4::tree::TerminalNode *HOLD_GS();
    antlr4::tree::TerminalNode *HOUR_GS();
    antlr4::tree::TerminalNode *IDENTIFIED_GS();
    antlr4::tree::TerminalNode *IDENTITY_GS();
    antlr4::tree::TerminalNode *IF_GS();
    antlr4::tree::TerminalNode *IMMEDIATE_GS();
    antlr4::tree::TerminalNode *IMMUTABLE_GS();
    antlr4::tree::TerminalNode *IMPLICIT_GS();
    antlr4::tree::TerminalNode *INCLUDING_GS();
    antlr4::tree::TerminalNode *INCREMENT_GS();
    antlr4::tree::TerminalNode *INDEXES_GS();
    antlr4::tree::TerminalNode *INDEX_GS();
    antlr4::tree::TerminalNode *INHERITS_GS();
    antlr4::tree::TerminalNode *INHERIT_GS();
    antlr4::tree::TerminalNode *INITIAL_GS();
    antlr4::tree::TerminalNode *INITRANS_GS();
    antlr4::tree::TerminalNode *INLINE_GS();
    antlr4::tree::TerminalNode *INPUT_GS();
    antlr4::tree::TerminalNode *INSENSITIVE_GS();
    antlr4::tree::TerminalNode *INSERT_GS();
    antlr4::tree::TerminalNode *INSTEAD_GS();
    antlr4::tree::TerminalNode *INVOKER_GS();
    antlr4::tree::TerminalNode *ISOLATION_GS();
    antlr4::tree::TerminalNode *KEY_GS();
    antlr4::tree::TerminalNode *LABEL_GS();
    antlr4::tree::TerminalNode *LANGUAGE_GS();
    antlr4::tree::TerminalNode *LARGE_GS();
    antlr4::tree::TerminalNode *LAST_GS();
    antlr4::tree::TerminalNode *LC_COLLATE_GS();
    antlr4::tree::TerminalNode *LC_CTYPE_GS();
    antlr4::tree::TerminalNode *LEAKPROOF_GS();
    antlr4::tree::TerminalNode *LEVEL_GS();
    antlr4::tree::TerminalNode *LISTEN_GS();
    antlr4::tree::TerminalNode *LOAD_GS();
    antlr4::tree::TerminalNode *LOCAL_GS();
    antlr4::tree::TerminalNode *LOCATION_GS();
    antlr4::tree::TerminalNode *LOCK_GS();
    antlr4::tree::TerminalNode *LOGGING_GS();
    antlr4::tree::TerminalNode *LOGIN_GS();
    antlr4::tree::TerminalNode *LOG_GS();
    antlr4::tree::TerminalNode *LOOP_GS();
    antlr4::tree::TerminalNode *MAPPING_GS();
    antlr4::tree::TerminalNode *MATCHED_GS();
    antlr4::tree::TerminalNode *MATCH_GS();
    antlr4::tree::TerminalNode *MAXEXTENTS_GS();
    antlr4::tree::TerminalNode *MAXSIZE_GS();
    antlr4::tree::TerminalNode *MAXTRANS_GS();
    antlr4::tree::TerminalNode *MERGE_GS();
    antlr4::tree::TerminalNode *MINEXTENTS_GS();
    antlr4::tree::TerminalNode *MINUTE_GS();
    antlr4::tree::TerminalNode *MINVALUE_GS();
    antlr4::tree::TerminalNode *MODE_GS();
    antlr4::tree::TerminalNode *MONTH_GS();
    antlr4::tree::TerminalNode *MOVEMENT_GS();
    antlr4::tree::TerminalNode *MOVE_GS();
    antlr4::tree::TerminalNode *NAMES_GS();
    antlr4::tree::TerminalNode *NAME_GS();
    antlr4::tree::TerminalNode *NEXT_GS();
    antlr4::tree::TerminalNode *NOCOMPRESS_GS();
    antlr4::tree::TerminalNode *NOCYCLE_GS();
    antlr4::tree::TerminalNode *NODE_GS();
    antlr4::tree::TerminalNode *NOLOGGING_GS();
    antlr4::tree::TerminalNode *NOLOGIN_GS();
    antlr4::tree::TerminalNode *NOMAXVALUE_GS();
    antlr4::tree::TerminalNode *NOMINVALUE_GS();
    antlr4::tree::TerminalNode *NOTHING_GS();
    antlr4::tree::TerminalNode *NOTIFY_GS();
    antlr4::tree::TerminalNode *NOWAIT_GS();
    antlr4::tree::TerminalNode *NO_GS();
    antlr4::tree::TerminalNode *NULLS_GS();
    antlr4::tree::TerminalNode *NUMSTR_GS();
    antlr4::tree::TerminalNode *OBJECT_GS();
    antlr4::tree::TerminalNode *OFF_GS();
    antlr4::tree::TerminalNode *OF_GS();
    antlr4::tree::TerminalNode *OIDS_GS();
    antlr4::tree::TerminalNode *OPERATOR_GS();
    antlr4::tree::TerminalNode *OPTIMIZATION_GS();
    antlr4::tree::TerminalNode *OPTIONS_GS();
    antlr4::tree::TerminalNode *OPTION_GS();
    antlr4::tree::TerminalNode *OWNED_GS();
    antlr4::tree::TerminalNode *OWNER_GS();
    antlr4::tree::TerminalNode *PARSER_GS();
    antlr4::tree::TerminalNode *PARTIAL_GS();
    antlr4::tree::TerminalNode *PARTITIONS_GS();
    antlr4::tree::TerminalNode *PARTITION_GS();
    antlr4::tree::TerminalNode *PASSING_GS();
    antlr4::tree::TerminalNode *PASSWORD_GS();
    antlr4::tree::TerminalNode *PCTFREE_GS();
    antlr4::tree::TerminalNode *PERCENT_GS();
    antlr4::tree::TerminalNode *PER_GS();
    antlr4::tree::TerminalNode *PLANS_GS();
    antlr4::tree::TerminalNode *POOL_GS();
    antlr4::tree::TerminalNode *PRECEDING_GS();
    antlr4::tree::TerminalNode *PREFERRED_GS();
    antlr4::tree::TerminalNode *PREFIX_GS();
    antlr4::tree::TerminalNode *PREPARED_GS();
    antlr4::tree::TerminalNode *PREPARE_GS();
    antlr4::tree::TerminalNode *PRESERVE_GS();
    antlr4::tree::TerminalNode *PRIOR_GS();
    antlr4::tree::TerminalNode *PRIVILEGES_GS();
    antlr4::tree::TerminalNode *PRIVILEGE_GS();
    antlr4::tree::TerminalNode *PROCEDURAL_GS();
    antlr4::tree::TerminalNode *PROFILE_GS();
    antlr4::tree::TerminalNode *QUERY_GS();
    antlr4::tree::TerminalNode *QUOTE_GS();
    antlr4::tree::TerminalNode *RANGE_GS();
    antlr4::tree::TerminalNode *RAW_GS();
    antlr4::tree::TerminalNode *READ_GS();
    antlr4::tree::TerminalNode *REASSIGN_GS();
    antlr4::tree::TerminalNode *REBUILD_GS();
    antlr4::tree::TerminalNode *RECHECK_GS();
    antlr4::tree::TerminalNode *RECURSIVE_GS();
    antlr4::tree::TerminalNode *REF_GS();
    antlr4::tree::TerminalNode *REINDEX_GS();
    antlr4::tree::TerminalNode *RELATIVE_GS();
    antlr4::tree::TerminalNode *RELEASE_GS();
    antlr4::tree::TerminalNode *RELOPTIONS_GS();
    antlr4::tree::TerminalNode *REMOTE_GS();
    antlr4::tree::TerminalNode *RENAME_GS();
    antlr4::tree::TerminalNode *REPEATABLE_GS();
    antlr4::tree::TerminalNode *REPLACE_GS();
    antlr4::tree::TerminalNode *REPLICA_GS();
    antlr4::tree::TerminalNode *RESET_GS();
    antlr4::tree::TerminalNode *RESIZE_GS();
    antlr4::tree::TerminalNode *RESOURCE_GS();
    antlr4::tree::TerminalNode *RESTART_GS();
    antlr4::tree::TerminalNode *RESTRICT_GS();
    antlr4::tree::TerminalNode *RETURNS_GS();
    antlr4::tree::TerminalNode *REUSE_GS();
    antlr4::tree::TerminalNode *REVOKE_GS();
    antlr4::tree::TerminalNode *ROLE_GS();
    antlr4::tree::TerminalNode *ROLLBACK_GS();
    antlr4::tree::TerminalNode *ROWS_GS();
    antlr4::tree::TerminalNode *RULE_GS();
    antlr4::tree::TerminalNode *SAVEPOINT_GS();
    antlr4::tree::TerminalNode *SCHEMA_GS();
    antlr4::tree::TerminalNode *SCROLL_GS();
    antlr4::tree::TerminalNode *SEARCH_GS();
    antlr4::tree::TerminalNode *SECOND_GS();
    antlr4::tree::TerminalNode *SECURITY_GS();
    antlr4::tree::TerminalNode *SEQUENCES_GS();
    antlr4::tree::TerminalNode *SEQUENCE_GS();
    antlr4::tree::TerminalNode *SERIALIZABLE_GS();
    antlr4::tree::TerminalNode *SERVER_GS();
    antlr4::tree::TerminalNode *SESSION_GS();
    antlr4::tree::TerminalNode *SET_GS();
    antlr4::tree::TerminalNode *SHARE_GS();
    antlr4::tree::TerminalNode *SHOW_GS();
    antlr4::tree::TerminalNode *SIMPLE_GS();
    antlr4::tree::TerminalNode *SIZE_GS();
    antlr4::tree::TerminalNode *SNAPSHOT_GS();
    antlr4::tree::TerminalNode *STABLE_GS();
    antlr4::tree::TerminalNode *STANDALONE_GS();
    antlr4::tree::TerminalNode *START_GS();
    antlr4::tree::TerminalNode *STATEMENT_GS();
    antlr4::tree::TerminalNode *STATISTICS_GS();
    antlr4::tree::TerminalNode *STDIN_GS();
    antlr4::tree::TerminalNode *STDOUT_GS();
    antlr4::tree::TerminalNode *STORAGE_GS();
    antlr4::tree::TerminalNode *STORE_GS();
    antlr4::tree::TerminalNode *STRICT_GS();
    antlr4::tree::TerminalNode *STRIP_GS();
    antlr4::tree::TerminalNode *SUPERUSER_GS();
    antlr4::tree::TerminalNode *SYSID_GS();
    antlr4::tree::TerminalNode *SYS_REFCURSOR_GS();
    antlr4::tree::TerminalNode *SYSTEM_GS();
    antlr4::tree::TerminalNode *TABLESPACE_GS();
    antlr4::tree::TerminalNode *TABLES_GS();
    antlr4::tree::TerminalNode *TEMPLATE_GS();
    antlr4::tree::TerminalNode *TEMPORARY_GS();
    antlr4::tree::TerminalNode *TEMP_GS();
    antlr4::tree::TerminalNode *TEXT_GS();
    antlr4::tree::TerminalNode *THAN_GS();
    antlr4::tree::TerminalNode *TRANSACTION_GS();
    antlr4::tree::TerminalNode *TRIGGER_GS();
    antlr4::tree::TerminalNode *TRUNCATE_GS();
    antlr4::tree::TerminalNode *TRUSTED_GS();
    antlr4::tree::TerminalNode *TYPES_GS();
    antlr4::tree::TerminalNode *TYPE_GS();
    antlr4::tree::TerminalNode *UNBOUNDED_GS();
    antlr4::tree::TerminalNode *UNCOMMITTED_GS();
    antlr4::tree::TerminalNode *UNENCRYPTED_GS();
    antlr4::tree::TerminalNode *UNKNOWN_GS();
    antlr4::tree::TerminalNode *UNLIMITED_GS();
    antlr4::tree::TerminalNode *UNLISTEN_GS();
    antlr4::tree::TerminalNode *UNLOCK_GS();
    antlr4::tree::TerminalNode *UNLOGGED_GS();
    antlr4::tree::TerminalNode *UNTIL_GS();
    antlr4::tree::TerminalNode *UNUSABLE_GS();
    antlr4::tree::TerminalNode *UPDATE_GS();
    antlr4::tree::TerminalNode *VACUUM_GS();
    antlr4::tree::TerminalNode *VALIDATE_GS();
    antlr4::tree::TerminalNode *VALIDATION_GS();
    antlr4::tree::TerminalNode *VALIDATOR_GS();
    antlr4::tree::TerminalNode *VALID_GS();
    antlr4::tree::TerminalNode *VALUE_GS();
    antlr4::tree::TerminalNode *VARYING_GS();
    antlr4::tree::TerminalNode *VERSION_GS();
    antlr4::tree::TerminalNode *VIEW_GS();
    antlr4::tree::TerminalNode *VOLATILE_GS();
    antlr4::tree::TerminalNode *WHITESPACE_GS();
    antlr4::tree::TerminalNode *WITHIN_GS();
    antlr4::tree::TerminalNode *WITHOUT_GS();
    antlr4::tree::TerminalNode *WORKLOAD_GS();
    antlr4::tree::TerminalNode *WORK_GS();
    antlr4::tree::TerminalNode *WRAPPER_GS();
    antlr4::tree::TerminalNode *WRITE_GS();
    antlr4::tree::TerminalNode *XML_GS();
    antlr4::tree::TerminalNode *YEAR_GS();
    antlr4::tree::TerminalNode *YES_GS();
    antlr4::tree::TerminalNode *ZONE_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Nonreserved_keywords_normalContext* nonreserved_keywords_normal();

  class  Non_keywords_but_tokenContext : public antlr4::ParserRuleContext {
  public:
    Non_keywords_but_tokenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SERIAL_GS();
    antlr4::tree::TerminalNode *OID_GS();
    antlr4::tree::TerminalNode *PUBLIC_GS();
    antlr4::tree::TerminalNode *FORMAT_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Non_keywords_but_tokenContext* non_keywords_but_token();

  class  Nonreserved_keywords_can_not_be_nameContext : public antlr4::ParserRuleContext {
  public:
    Nonreserved_keywords_can_not_be_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BETWEEN_GS();
    antlr4::tree::TerminalNode *BIGINT_GS();
    antlr4::tree::TerminalNode *BINARY_DOUBLE_GS();
    antlr4::tree::TerminalNode *BINARY_INTEGER_GS();
    antlr4::tree::TerminalNode *BIT_GS();
    antlr4::tree::TerminalNode *BOOLEAN_GS();
    antlr4::tree::TerminalNode *CHARACTER_GS();
    antlr4::tree::TerminalNode *CHAR_GS();
    antlr4::tree::TerminalNode *COALESCE_GS();
    antlr4::tree::TerminalNode *DATE_GS();
    antlr4::tree::TerminalNode *DECIMAL_GS();
    antlr4::tree::TerminalNode *DECODE_GS();
    antlr4::tree::TerminalNode *DEC_GS();
    antlr4::tree::TerminalNode *EXISTS_GS();
    antlr4::tree::TerminalNode *EXTRACT_GS();
    antlr4::tree::TerminalNode *FLOAT_GS();
    antlr4::tree::TerminalNode *GREATEST_GS();
    antlr4::tree::TerminalNode *INOUT_GS();
    antlr4::tree::TerminalNode *INTEGER_GS();
    antlr4::tree::TerminalNode *INTERVAL_GS();
    antlr4::tree::TerminalNode *INT_GS();
    antlr4::tree::TerminalNode *LEAST_GS();
    antlr4::tree::TerminalNode *NATIONAL_GS();
    antlr4::tree::TerminalNode *NCHAR_GS();
    antlr4::tree::TerminalNode *NONE_GS();
    antlr4::tree::TerminalNode *NULLIF_GS();
    antlr4::tree::TerminalNode *NUMBER_GS();
    antlr4::tree::TerminalNode *NUMERIC_GS();
    antlr4::tree::TerminalNode *NVARCHAR2_GS();
    antlr4::tree::TerminalNode *NVL_GS();
    antlr4::tree::TerminalNode *OUT_GS();
    antlr4::tree::TerminalNode *OVERLAY_GS();
    antlr4::tree::TerminalNode *POSITION_GS();
    antlr4::tree::TerminalNode *PRECISION_GS();
    antlr4::tree::TerminalNode *REAL_GS();
    antlr4::tree::TerminalNode *ROW_GS();
    antlr4::tree::TerminalNode *SETOF_GS();
    antlr4::tree::TerminalNode *SMALLDATETIME_GS();
    antlr4::tree::TerminalNode *SMALLINT_GS();
    antlr4::tree::TerminalNode *SUBSTRING_GS();
    antlr4::tree::TerminalNode *TIMESTAMP_GS();
    antlr4::tree::TerminalNode *TIME_GS();
    antlr4::tree::TerminalNode *TINYINT_GS();
    antlr4::tree::TerminalNode *TREAT_GS();
    antlr4::tree::TerminalNode *TRIM_GS();
    antlr4::tree::TerminalNode *VALUES_GS();
    antlr4::tree::TerminalNode *VARCHAR2_GS();
    antlr4::tree::TerminalNode *VARCHAR_GS();
    antlr4::tree::TerminalNode *XMLATTRIBUTES_GS();
    antlr4::tree::TerminalNode *XMLCONCAT_GS();
    antlr4::tree::TerminalNode *XMLELEMENT_GS();
    antlr4::tree::TerminalNode *XMLEXISTS_GS();
    antlr4::tree::TerminalNode *XMLFOREST_GS();
    antlr4::tree::TerminalNode *XMLPARSE_GS();
    antlr4::tree::TerminalNode *XMLPI_GS();
    antlr4::tree::TerminalNode *XMLROOT_GS();
    antlr4::tree::TerminalNode *XMLSERIALIZE_GS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Nonreserved_keywords_can_not_be_nameContext* nonreserved_keywords_can_not_be_name();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool table_refSempred(Table_refContext *_localctx, size_t predicateIndex);
  bool logical_exprSempred(Logical_exprContext *_localctx, size_t predicateIndex);
  bool relational_exprSempred(Relational_exprContext *_localctx, size_t predicateIndex);
  bool concatenationSempred(ConcatenationContext *_localctx, size_t predicateIndex);
  bool unary_exprSempred(Unary_exprContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};


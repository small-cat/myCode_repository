lexer grammar Gauss200Lexer;

// reserved keywords;
ALL_GS:                   A L L;
ANALYSE_GS:               A N A L Y S E;
ANALYZE_GS:               A N A L Y Z E;
AND_GS:                   A N D;
ANY_GS:                   A N Y;
ARRAY_GS:                 A R R A Y;
ASC_GS:                   A S C;
ASYMMETRIC_GS:            A S Y M M E T R I C;
AS_GS:                    A S;
AUTHID_GS:                A U T H I D;
BOTH_GS:                  B O T H;
BUCKETS_GS:               B U C K E T S;
CASE_GS:                  C A S E;
CAST_GS:                  C A S T;
CHECK_GS:                 C H E C K;
COLLATE_GS:               C O L L A T E;
COLUMN_GS:                C O L U M N;
CONSTRAINT_GS:            C O N S T R A I N T;
CREATE_GS:                C R E A T E;
CURRENT_CATALOG_GS:       C U R R E N T '_' C A T A L O G;
CURRENT_DATE_GS:          C U R R E N T '_' D A T E;
CURRENT_ROLE_GS:          C U R R E N T '_' R O L E;
CURRENT_TIMESTAMP_GS:     C U R R E N T '_' T I M E S T A M P;
CURRENT_TIME_GS:          C U R R E N T '_' T I M E;
CURRENT_USER_GS:          C U R R E N T '_' U S E R;
DEFAULT_GS:               D E F A U L T;
DEFERRABLE_GS:            D E F E R R A B L E;
DESC_GS:                  D E S C;
DISTINCT_GS:              D I S T I N C T;
DO_GS:                    D O;
ELSE_GS:                  E L S E;
END_GS:                   E N D;
EXCEPT_GS:                E X C E P T;
FALSE_GS:                 F A L S E;
FETCH_GS:                 F E T C H;
FOREIGN_GS:               F O R E I G N;
FOR_GS:                   F O R;
FROM_GS:                  F R O M;
FUNCTION_GS:              F U N C T I O N;
GRANT_GS:                 G R A N T;
GROUP_GS:                 G R O U P;
HAVING_GS:                H A V I N G;
INITIALLY_GS:             I N I T I A L L Y;
INTERSECT_GS:             I N T E R S E C T;
INTO_GS:                  I N T O;
IN_GS:                    I N;
IS_GS:                    I S;
LEADING_GS:               L E A D I N G;
LESS_GS:                  L E S S;
LIMIT_GS:                 L I M I T;
LOCALTIMESTAMP_GS:        L O C A L T I M E S T A M P;
LOCALTIME_GS:             L O C A L T I M E;
MAXVALUE_GS:              M A X V A L U E;
MINUS_GS:                 M I N U S;
MODIFY_GS:                M O D I F Y;
NLSSORT_GS:               N L S S O R T;
NOT_GS:                   N O T;
NULL_GS:                  N U L L;
OFFSET_GS:                O F F S E T;
ONLY_GS:                  O N L Y;
ON_GS:                    O N;
ORDER_GS:                 O R D E R;
OR_GS:                    O R;
PERFORMANCE_GS:           P E R F O R M A N C E;
PLACING_GS:               P L A C I N G;
PRIMARY_GS:               P R I M A R Y;
PROCEDURE_GS:             P R O C E D U R E;
REFERENCES_GS:            R E F E R E N C E S;
REJECT_GS:                R E J E C T;
RETURNING_GS:             R E T U R N I N G;
RETURN_GS:                R E T U R N;
SELECT_GS:                S E L E C T;
SESSION_USER_GS:          S E S S I O N '_' U S E R;
SOME_GS:                  S O M E;
SPLIT_GS:                 S P L I T;
SYMMETRIC_GS:             S Y M M E T R I C;
SYSDATE_GS:               S Y S D A T E;
TABLE_GS:                 T A B L E;
THEN_GS:                  T H E N;
TO_GS:                    T O;
TRAILING_GS:              T R A I L I N G;
TRUE_GS:                  T R U E;
UNION_GS:                 U N I O N;
UNIQUE_GS:                U N I Q U E;
USER_GS:                  U S E R;
USING_GS:                 U S I N G;
VARIADIC_GS:              V A R I A D I C;
WHEN_GS:                  W H E N;
WHERE_GS:                 W H E R E;
WINDOW_GS:                W I N D O W;
WITH_GS:                  W I T H;

// reserved keywords can be name of function or type;
AUTHORIZATION_GS:         A U T H O R I Z A T I O N;
BINARY_GS:                B I N A R Y;
COLLATION_GS:             C O L L A T I O N;
CONCURRENTLY_GS:          C O N C U R R E N T L Y;
CROSS_GS:                 C R O S S;
CURRENT_SCHEMA_GS:        C U R R E N T '_' S C H E M A;
FREEZE_GS:                F R E E Z E;
FULL_GS:                  F U L L;
ILIKE_GS:                 I L I K E;
INNER_GS:                 I N N E R;
ISNULL_GS:                I S N U L L;
JOIN_GS:                  J O I N;
LEFT_GS:                  L E F T;
LIKE_GS:                  L I K E;
NATURAL_GS:               N A T U R A L;
NOTNULL_GS:               N O T N U L L;
OUTER_GS:                 O U T E R;
OVERLAPS_GS:              O V E R L A P S;
OVER_GS:                  O V E R;
RIGHT_GS:                 R I G H T;
SIMILAR_GS:               S I M I L A R;
VERBOSE_GS:               V E R B O S E;

// nonreserved keywords;
ABORT_GS:                 A B O R T;
ABSOLUTE_GS:              A B S O L U T E;
ACCESS_GS:                A C C E S S;
ACCOUNT_GS:               A C C O U N T;
ACTION_GS:                A C T I O N;
ADD_GS:                   A D D;
ADMIN_GS:                 A D M I N;
AFTER_GS:                 A F T E R;
AGGREGATE_GS:             A G G R E G A T E;
ALSO_GS:                  A L S O;
ALTER_GS:                 A L T E R;
ALWAYS_GS:                A L W A Y S;
APP_GS:                   A P P;
ASSERTION_GS:             A S S E R T I O N;
ASSIGNMENT_GS:            A S S I G N M E N T;
ATTRIBUTE_GS:             A T T R I B U T E;
AT_GS:                    A T;
AUTOEXTEND_GS:            A U T O E X T E N D;
AUTOMAPPED_GS:            A U T O M A P P E D;
BACKWARD_GS:              B A C K W A R D;
BARRIER_GS:               B A R R I E R;
BEFORE_GS:                B E F O R E;
BEGIN_GS:                 B E G I N;
BLOB_GS:                  B L O B;
BY_GS:                    B Y;
CACHE_GS:                 C A C H E;
CALLED_GS:                C A L L E D;
CALL_GS:                  C A L L;
CASCADED_GS:              C A S C A D E D;
CASCADE_GS:               C A S C A D E;
CATALOG_GS:               C A T A L O G;
CHAIN_GS:                 C H A I N;
CHARACTERISTICS_GS:       C H A R A C T E R I S T I C S;
CHECKPOINT_GS:            C H E C K P O I N T;
CLASS_GS:                 C L A S S;
CLEAN_GS:                 C L E A N;
CLOB_GS:                  C L O B;
CLOSE_GS:                 C L O S E;
CLUSTER_GS:               C L U S T E R;
COMMENTS_GS:              C O M M E N T S;
COMMENT_GS:               C O M M E N T;
COMMITTED_GS:             C O M M I T T E D;
COMMIT_GS:                C O M M I T;
COMPRESS_GS:              C O M P R E S S;
CONFIGURATION_GS:         C O N F I G U R A T I O N;
CONNECTION_GS:            C O N N E C T I O N;
CONSTRAINTS_GS:           C O N S T R A I N T S;
CONTENT_GS:               C O N T E N T;
CONTINUE_GS:              C O N T I N U E;
CONVERSION_GS:            C O N V E R S I O N;
COORDINATOR_GS:           C O O R D I N A T O R;
COPY_GS:                  C O P Y;
COST_GS:                  C O S T;
CSV_GS:                   C S V;
CURRENT_GS:               C U R R E N T;
CURSOR_GS:                C U R S O R;
CYCLE_GS:                 C Y C L E;
DATABASE_GS:              D A T A B A S E;
DATAFILE_GS:              D A T A F I L E;
DATA_GS:                  D A T A;
DAY_GS:                   D A Y;
DBCOMPATIBILITY_GS:       D B C O M P A T I B I L I T Y;
DEALLOCATE_GS:            D E A L L O C A T E;
DECLARE_GS:               D E C L A R E;
DEFAULTS_GS:              D E F A U L T S;
DEFERRED_GS:              D E F E R R E D;
DEFINER_GS:               D E F I N E R;
DELETE_GS:                D E L E T E;
DELIMITERS_GS:            D E L I M I T E R S;
DELIMITER_GS:             D E L I M I T E R;
DELTA_GS:                 D E L T A;
DETERMINISTIC_GS:         D E T E R M I N I S T I C;
DICTIONARY_GS:            D I C T I O N A R Y;
DIRECT_GS:                D I R E C T;
DISABLE_GS:               D I S A B L E;
DISCARD_GS:               D I S C A R D;
DISTRIBUTE_GS:            D I S T R I B U T E;
DISTRIBUTION_GS:          D I S T R I B U T I O N;
DOCUMENT_GS:              D O C U M E N T;
DOMAIN_GS:                D O M A I N;
DOUBLE_GS:                D O U B L E;
DROP_GS:                  D R O P;
EACH_GS:                  E A C H;
ENABLE_GS:                E N A B L E;
ENCODING_GS:              E N C O D I N G;
ENCRYPTED_GS:             E N C R Y P T E D;
ENFORCED_GS:              E N F O R C E D;
ENUM_GS:                  E N U M;
EOL_GS:                   E O L;
ESCAPE_GS:                E S C A P E;
ESCAPING_GS:              E S C A P I N G;
EVERY_GS:                 E V E R Y;
EXCHANGE_GS:              E X C H A N G E;
EXCLUDE_GS:               E X C L U D E;
EXCLUDING_GS:             E X C L U D I N G;
EXCLUSIVE_GS:             E X C L U S I V E;
EXECUTE_GS:               E X E C U T E;
EXPLAIN_GS:               E X P L A I N;
EXTENSION_GS:             E X T E N S I O N;
EXTERNAL_GS:              E X T E R N A L;
FAMILY_GS:                F A M I L Y;
FILEHEADER_GS:            F I L E H E A D E R;
FIRST_GS:                 F I R S T;
FIXED_GS:                 F I X E D;
FOLLOWING_GS:             F O L L O W I N G;
FORCE_GS:                 F O R C E;
FORMATTER_GS:             F O R M A T T E R;
FORWARD_GS:               F O R W A R D;
FUNCTIONS_GS:             F U N C T I O N S;
GLOBAL_GS:                G L O B A L;
GRANTED_GS:               G R A N T E D;
HANDLER_GS:               H A N D L E R;
HEADER_GS:                H E A D E R;
HOLD_GS:                  H O L D;
HOUR_GS:                  H O U R;
IDENTIFIED_GS:            I D E N T I F I E D;
IDENTITY_GS:              I D E N T I T Y;
IF_GS:                    I F;
IMMEDIATE_GS:             I M M E D I A T E;
IMMUTABLE_GS:             I M M U T A B L E;
IMPLICIT_GS:              I M P L I C I T;
INCLUDING_GS:             I N C L U D I N G;
INCREMENT_GS:             I N C R E M E N T;
INDEXES_GS:               I N D E X E S;
INDEX_GS:                 I N D E X;
INHERITS_GS:              I N H E R I T S;
INHERIT_GS:               I N H E R I T;
INITIAL_GS:               I N I T I A L;
INITRANS_GS:              I N I T R A N S;
INLINE_GS:                I N L I N E;
INPUT_GS:                 I N P U T;
INSENSITIVE_GS:           I N S E N S I T I V E;
INSERT_GS:                I N S E R T;
INSTEAD_GS:               I N S T E A D;
INVOKER_GS:               I N V O K E R;
ISOLATION_GS:             I S O L A T I O N;
KEY_GS:                   K E Y;
LABEL_GS:                 L A B E L;
LANGUAGE_GS:              L A N G U A G E;
LARGE_GS:                 L A R G E;
LAST_GS:                  L A S T;
LC_COLLATE_GS:            L C '_' C O L L A T E;
LC_CTYPE_GS:              L C '_' C T Y P E;
LEAKPROOF_GS:             L E A K P R O O F;
LEVEL_GS:                 L E V E L;
LISTEN_GS:                L I S T E N;
LOAD_GS:                  L O A D;
LOCAL_GS:                 L O C A L;
LOCATION_GS:              L O C A T I O N;
LOCK_GS:                  L O C K;
LOGGING_GS:               L O G G I N G;
LOGIN_GS:                 L O G I N;
LOG_GS:                   L O G;
LOOP_GS:                  L O O P;
MAPPING_GS:               M A P P I N G;
MATCHED_GS:               M A T C H E D;
MATCH_GS:                 M A T C H;
MAXEXTENTS_GS:            M A X E X T E N T S;
MAXSIZE_GS:               M A X S I Z E;
MAXTRANS_GS:              M A X T R A N S;
MERGE_GS:                 M E R G E;
MINEXTENTS_GS:            M I N E X T E N T S;
MINUTE_GS:                M I N U T E;
MINVALUE_GS:              M I N V A L U E;
MODE_GS:                  M O D E;
MONTH_GS:                 M O N T H;
MOVEMENT_GS:              M O V E M E N T;
MOVE_GS:                  M O V E;
NAMES_GS:                 N A M E S;
NAME_GS:                  N A M E;
NEXT_GS:                  N E X T;
NOCOMPRESS_GS:            N O C O M P R E S S;
NOCYCLE_GS:               N O C Y C L E;
NODE_GS:                  N O D E;
NOLOGGING_GS:             N O L O G G I N G;
NOLOGIN_GS:               N O L O G I N;
NOMAXVALUE_GS:            N O M A X V A L U E;
NOMINVALUE_GS:            N O M I N V A L U E;
NOTHING_GS:               N O T H I N G;
NOTIFY_GS:                N O T I F Y;
NOWAIT_GS:                N O W A I T;
NO_GS:                    N O;
NULLS_GS:                 N U L L S;
NUMSTR_GS:                N U M S T R;
OBJECT_GS:                O B J E C T;
OFF_GS:                   O F F;
OF_GS:                    O F;
OIDS_GS:                  O I D S;
OPERATOR_GS:              O P E R A T O R;
OPTIMIZATION_GS:          O P T I M I Z A T I O N;
OPTIONS_GS:               O P T I O N S;
OPTION_GS:                O P T I O N;
OWNED_GS:                 O W N E D;
OWNER_GS:                 O W N E R;
PARSER_GS:                P A R S E R;
PARTIAL_GS:               P A R T I A L;
PARTITIONS_GS:            P A R T I T I O N S;
PARTITION_GS:             P A R T I T I O N;
PASSING_GS:               P A S S I N G;
PASSWORD_GS:              P A S S W O R D;
PCTFREE_GS:               P C T F R E E;
PERCENT_GS:               P E R C E N T;
PER_GS:                   P E R;
PLANS_GS:                 P L A N S;
POOL_GS:                  P O O L;
PRECEDING_GS:             P R E C E D I N G;
PREFERRED_GS:             P R E F E R R E D;
PREFIX_GS:                P R E F I X;
PREPARED_GS:              P R E P A R E D;
PREPARE_GS:               P R E P A R E;
PRESERVE_GS:              P R E S E R V E;
PRIOR_GS:                 P R I O R;
PRIVILEGES_GS:            P R I V I L E G E S;
PRIVILEGE_GS:             P R I V I L E G E;
PROCEDURAL_GS:            P R O C E D U R A L;
PROFILE_GS:               P R O F I L E;
QUERY_GS:                 Q U E R Y;
QUOTE_GS:                 Q U O T E;
RANGE_GS:                 R A N G E;
RAW_GS:                   R A W;
READ_GS:                  R E A D;
REASSIGN_GS:              R E A S S I G N;
REBUILD_GS:               R E B U I L D;
RECHECK_GS:               R E C H E C K;
RECURSIVE_GS:             R E C U R S I V E;
REF_GS:                   R E F;
REINDEX_GS:               R E I N D E X;
RELATIVE_GS:              R E L A T I V E;
RELEASE_GS:               R E L E A S E;
RELOPTIONS_GS:            R E L O P T I O N S;
REMOTE_GS:                R E M O T E;
RENAME_GS:                R E N A M E;
REPEATABLE_GS:            R E P E A T A B L E;
REPLACE_GS:               R E P L A C E;
REPLICA_GS:               R E P L I C A;
RESET_GS:                 R E S E T;
RESIZE_GS:                R E S I Z E;
RESOURCE_GS:              R E S O U R C E;
RESTART_GS:               R E S T A R T;
RESTRICT_GS:              R E S T R I C T;
RETURNS_GS:               R E T U R N S;
REUSE_GS:                 R E U S E;
REVOKE_GS:                R E V O K E;
ROLE_GS:                  R O L E;
ROLLBACK_GS:              R O L L B A C K;
ROWS_GS:                  R O W S;
RULE_GS:                  R U L E;
SAVEPOINT_GS:             S A V E P O I N T;
SCHEMA_GS:                S C H E M A;
SCROLL_GS:                S C R O L L;
SEARCH_GS:                S E A R C H;
SECOND_GS:                S E C O N D;
SECURITY_GS:              S E C U R I T Y;
SEQUENCES_GS:             S E Q U E N C E S;
SEQUENCE_GS:              S E Q U E N C E;
SERIALIZABLE_GS:          S E R I A L I Z A B L E;
SERVER_GS:                S E R V E R;
SESSION_GS:               S E S S I O N;
SET_GS:                   S E T;
SHARE_GS:                 S H A R E;
SHOW_GS:                  S H O W;
SIMPLE_GS:                S I M P L E;
SIZE_GS:                  S I Z E;
SNAPSHOT_GS:              S N A P S H O T;
STABLE_GS:                S T A B L E;
STANDALONE_GS:            S T A N D A L O N E;
START_GS:                 S T A R T;
STATEMENT_GS:             S T A T E M E N T;
STATISTICS_GS:            S T A T I S T I C S;
STDIN_GS:                 S T D I N;
STDOUT_GS:                S T D O U T;
STORAGE_GS:               S T O R A G E;
STORE_GS:                 S T O R E;
STRICT_GS:                S T R I C T;
STRIP_GS:                 S T R I P;
SUPERUSER_GS:             S U P E R U S E R;
SYSID_GS:                 S Y S I D;
SYS_REFCURSOR_GS:         S Y S '_' R E F C U R S O R;
SYSTEM_GS:                S Y S T E M;
TABLESPACE_GS:            T A B L E S P A C E;
TABLES_GS:                T A B L E S;
TEMPLATE_GS:              T E M P L A T E;
TEMPORARY_GS:             T E M P O R A R Y;
TEMP_GS:                  T E M P;
TEXT_GS:                  T E X T;
THAN_GS:                  T H A N;
TRANSACTION_GS:           T R A N S A C T I O N;
TRIGGER_GS:               T R I G G E R;
TRUNCATE_GS:              T R U N C A T E;
TRUSTED_GS:               T R U S T E D;
TYPES_GS:                 T Y P E S;
TYPE_GS:                  T Y P E;
UNBOUNDED_GS:             U N B O U N D E D;
UNCOMMITTED_GS:           U N C O M M I T T E D;
UNENCRYPTED_GS:           U N E N C R Y P T E D;
UNKNOWN_GS:               U N K N O W N;
UNLIMITED_GS:             U N L I M I T E D;
UNLISTEN_GS:              U N L I S T E N;
UNLOCK_GS:                U N L O C K;
UNLOGGED_GS:              U N L O G G E D;
UNTIL_GS:                 U N T I L;
UNUSABLE_GS:              U N U S A B L E;
UPDATE_GS:                U P D A T E;
VACUUM_GS:                V A C U U M;
VALIDATE_GS:              V A L I D A T E;
VALIDATION_GS:            V A L I D A T I O N;
VALIDATOR_GS:             V A L I D A T O R;
VALID_GS:                 V A L I D;
VALUE_GS:                 V A L U E;
VARYING_GS:               V A R Y I N G;
VERSION_GS:               V E R S I O N;
VIEW_GS:                  V I E W;
VOLATILE_GS:              V O L A T I L E;
WHITESPACE_GS:            W H I T E S P A C E;
WITHIN_GS:                W I T H I N;
WITHOUT_GS:               W I T H O U T;
WORKLOAD_GS:              W O R K L O A D;
WORK_GS:                  W O R K;
WRAPPER_GS:               W R A P P E R;
WRITE_GS:                 W R I T E;
XML_GS:                   X M L;
YEAR_GS:                  Y E A R;
YES_GS:                   Y E S;
ZONE_GS:                  Z O N E;

// nonreserved keywords can not be name of function and type;
BETWEEN_GS:               B E T W E E N;
BIGINT_GS:                B I G I N T;
BINARY_DOUBLE_GS:         B I N A R Y '_' D O U B L E;
BINARY_INTEGER_GS:        B I N A R Y '_' I N T E G E R;
BIT_GS:                   B I T;
BOOLEAN_GS:               B O O L E A N;
CHARACTER_GS:             C H A R A C T E R;
CHAR_GS:                  C H A R;
COALESCE_GS:              C O A L E S C E;
DATE_GS:                  D A T E;
DECIMAL_GS:               D E C I M A L;
DECODE_GS:                D E C O D E;
DEC_GS:                   D E C;
EXISTS_GS:                E X I S T S;
EXTRACT_GS:               E X T R A C T;
FLOAT_GS:                 F L O A T;
GREATEST_GS:              G R E A T E S T;
INOUT_GS:                 I N O U T;
INTEGER_GS:               I N T E G E R;
INTERVAL_GS:              I N T E R V A L;
INT_GS:                   I N T;
LEAST_GS:                 L E A S T;
NATIONAL_GS:              N A T I O N A L;
NCHAR_GS:                 N C H A R;
NONE_GS:                  N O N E;
NULLIF_GS:                N U L L I F;
NUMBER_GS:                N U M B E R;
NUMERIC_GS:               N U M E R I C;
NVARCHAR2_GS:             N V A R C H A R '2';
NVL_GS:                   N V L;
OUT_GS:                   O U T;
OVERLAY_GS:               O V E R L A Y;
POSITION_GS:              P O S I T I O N;
PRECISION_GS:             P R E C I S I O N;
REAL_GS:                  R E A L;
ROW_GS:                   R O W;
SETOF_GS:                 S E T O F;
SMALLDATETIME_GS:         S M A L L D A T E T I M E;
SMALLINT_GS:              S M A L L I N T;
SUBSTRING_GS:             S U B S T R I N G;
TIMESTAMP_GS:             T I M E S T A M P;
TIME_GS:                  T I M E;
TINYINT_GS:               T I N Y I N T;
TREAT_GS:                 T R E A T;
TRIM_GS:                  T R I M;
VALUES_GS:                V A L U E S;
VARCHAR2_GS:              V A R C H A R '2';
VARCHAR_GS:               V A R C H A R;
XMLATTRIBUTES_GS:         X M L A T T R I B U T E S;
XMLCONCAT_GS:             X M L C O N C A T;
XMLELEMENT_GS:            X M L E L E M E N T;
XMLEXISTS_GS:             X M L E X I S T S;
XMLFOREST_GS:             X M L F O R E S T;
XMLPARSE_GS:              X M L P A R S E;
XMLPI_GS:                 X M L P I;
XMLROOT_GS:               X M L R O O T;
XMLSERIALIZE_GS:          X M L S E R I A L I Z E;

// datatypes
SMALLSERIAL_GS:           S M A L L S E R I A L;
SERIAL_GS:                S E R I A L;
BIGSERIAL_GS:             B I G S E R I A L;
FLOAT4_GS:                F L O A T '4';
FLOAT8_GS:                F L O A T '8';
MONEY_GS:                 M O N E Y;
BYTEA_GS:                 B Y T E A;
FIELDS_GS:                F I E L D S;
RELTIME_GS:               R E L T I M E;
POINT_GS:                 P O I N T;
LSEG_GS:                  L S E G;
BOX_GS:                   B O X;
PATH_GS:                  P A T H;
POLYGON_GS:               P O L Y G O N;
CIRCLE_GS:                C I R C L E;
CIDR_GS:                  C I D R;
INET_GS:                  I N E T;
MACADDR_GS:               M A C A D D R;
TSVECTOR_GS:              T S V E C T O R;
TSQUERY_GS:               T S Q U E R Y;
HLL_GS:                   H L L;
OID_GS:                   O I D;
CID_GS:                   C I D;
XID_GS:                   X I D;
TID_GS:                   T I D;
REGCONFIG_GS:             R E G C O N F I G;
REGDICTIONARY_GS:         R E G D I C T I O N A R Y;
REGOPER:                  R E G O P E R;
REGOPERATOR:              R E G O P E R A T O R;
REGPROC:                  R E G P R O C;
REGPROCEDURE:             R E G P R O C E D U R E;
REGCLASS:                 R E G C L A S S;
REGTYPE:                  R E G T Y P E;
ANYELEMENT_GS:            A N Y E L E M E N T;         
ANYARRAY_GS:              A N Y A R R A Y;
ANYNONARRAY_GS:           A N Y N O N A R R A Y;
ANYENUM_GS:               A N Y E N U M;
ANYRANGE_GS:              A N Y R A N G E;
CSTRING_GS:               C S T R I N G;
INTERNAL_GS:              I N T E R N A L;
LANGUAGE_HANDLER_GS:      L A N G U A G E '_' H A N D L E R;
FDW_HANDLER_GS:           F D W '_' H A N D L E R;
RECORD_GS:                R E C O R D;
VOID_GS:                  V O I D;
OPAQUE_GS:                O P A Q U E;

// other tokens
FILTER_GS:                F I L T E R;
PRIVATE_GS:               P R I V A T E;
SOURCE_GS:                S O U R C E;
PUBLIC_GS:                P U B L I C;
USAGE_GS:                 U S A G E;
DIRECTORY_GS:             D I R E C T O R Y;
SHIPPABLE_GS:             S H I P P A B L E;
FENCED_GS:                F E N C E D;
VCGROUP_GS:               V C G R O U P;
CREATEDB_GS:              C R E A T E D B;
NOCREATEDB_GS:            N O C R E A T E D B;
CREATEROLE_GS:            C R E A T E R O L E; 
NOCREATEROLE_GS:          N O C R E A T E R O L E;
NOINHERIT_GS:             N O I N H E R I T;
AUDITADMIN_GS:            A U D I T A D M I N;
NOAUDITADMIN_GS:          N O A U D I T A D M I N;
SYSADMIN_GS:              S Y S A D M I N;
NOSYSADMIN_GS:            N O S Y S A D M I N;
USEFT_GS:                 U S E F T;
NOUSEFT_GS:               N O U S E F T;
REPLICATION_GS:           R E P L I C A T I O N;
NOREPLICATION_GS:         N O R E P L I C A T I O N;
INDEPENDENT_GS:           I N D E P E N D E N T;
NOINDEPENDENT_GS:         N O I N D E P E N D E N T;
VCADMIN_GS:               V C A D M I N;
NOVCADMIN_GS:             N O V C A D M I N;
PERM_GS:                  P E R M;
SPACE_GS:                 S P A C E;
PGUSER_GS:                P G U S E R;
POLICY_GS:                P O L I C Y;
KILL_GS:                  K I L L;
PLAIN_GS:                 P L A I N;
EXTENDED_GS:              E X T E N D E D;
MAIN_GS:                  M A I N;
CSN_GS:                   C S N;
ERRORS_GS:                E R R O R S;
FORMAT_GS:                F O R M A T;
NOESCAPING_GS:            N O E S C A P I N G;
FORCE_QUOTE_GS:           F O R C E '_' Q U O T E;
FORCE_NOT_NULL_GS:        F O R C E '_' N O T '_' N U L L;
IGNORE_EXTRA_DATA_GS:     I G N O R E '_' E X T R A '_' D A T A;
FILL_MISSING_FIELDS_GS:   F I L L '_' M I S S I N G '_' F I E L D S;
COMPATIBLE_ILLEGAL_CHARS_GS:C O M P A T I B L E '_' I L L E G A L '_' C H A R S;
DATE_FORMAT_GS:           D A T E '_' F O R M A T;
TIME_FORMAT_GS:           T I M E '_' F O R M A T;
TIMESTAMP_FORMAT_GS:      T I M E S T A M P '_' F O R M A T;
SMALLDATETIME_FORMAT_GS:  S M A L L D A T E T I M E '_' F O R M A T;

ROUNDROBIN_GS:            R O U N D R O B I N;
PERMISSIVE_GS:            P E R M I S S I V E;
RESTRICTIVE_GS:           R E S T R I C T I V E;
HASH_GS:                  H A S H;
COSTS_GS:                 C O S T S;
CPU_GS:                   C P U;
DETAIL_GS:                D E T A I L;
NODES_GS:                 N O D E S;
NUM_NODES_GS:             N U M '_' N O D E S;
BUFFERS_GS:               B U F F E R S;
TIMING_GS:                T I M I N G;
PLAN_GS:                  P L A N;
JSON_GS:                  J S O N;
YAML_GS:                  Y A M L;
CONNECT_GS:               C O N N E C T;
COMPUTE_GS:               C O M P U T E;
TABLESAMPLE_GS:           T A B L E S A M P L E;
ROLLUP_GS:                R O L L U P;
CUBE_GS:                  C U B E;
GROUPING_GS:              G R O U P I N G; 
SETS_GS:                  S E T S;
COMPACT_GS:               C O M P A C T;
DELTAMERGE_GS:            D E L T A M E R G E;
HDFSDIRECTORY_GS:         H D F S D I R E C T O R Y;
CONSTANT_GS:              C O N S T A N T;
PACKAGE_GS:               P A C K A G E;

PERCENT_SIGN:              '%';
AMPERSAND:                 '&';
LEFT_PAREN:                '(';
RIGHT_PAREN:               ')';
DOUBLE_ASTERISK:           '**';
ASTERISK:                  '*';
PLUS_SIGN:                 '+';
MINUS_SIGN:                '-';
COMMA:                     ',';
SOLIDUS:                   '/';
AT_SIGN:                   '@';
PERIOD:                    '.';
SLASH_SINGLE:              '`';
QUESTION_MARK:             '?';

NOT_EQUAL_OP:              '!='
            |              '<>'
            ;

CARRET_OPERATOR_PART:      '^';
TILDE_OPERATOR_PART:       '~';
EXCLAMATION_OPERATOR_PART: '!';
GREATER_THAN_OP:           '>';
LESS_THAN_OP:              '<';
COLON:                     ':';
SEMICOLON:                 ';';
POUND_SIGN:                '#';
TYPECAST:                  '::';

BAR:       '|';
EQUALS_OP: '=';

LEFT_BRACKET:  '[';
RIGHT_BRACKET: ']';

// comment
SINGLE_LINE_COMMENT: '--' ~('\r' | '\n')* NEWLINE_EOF        -> channel(HIDDEN);
MULTI_LINE_COMMENT:  '/*' .*? '*/'                           -> channel(HIDDEN);
SPACES: [ \t\r\n]+ -> channel(HIDDEN);

CHAR_STRING: E? '\''  (~('\'' | '\r' | '\n') | '\'' '\'' | NEWLINE)* '\'';
REGULAR_ID: (SIMPLE_LETTER | UNI_CHAR) ((SIMPLE_LETTER | UNI_CHAR) | '#' | '$' | '_' | [0-9])*;

DELIMITED_STR: '$' [A-Za-z_-]+ '$';
SCONST: '"' (~('"' | '\r' | '\n') | '"' '"')+ '"' 
      | '$' '$' (~('$'))+ '$' '$';    // $$ 之间的作为字符串
// integer -- ICONST
ICONST: DIGIT+;
// integer decimal real realfail1 realfail2 -- FCONST
FCONST: FLOAT_NUMBER (E ('+'|'-')? (FLOAT_NUMBER | [0-9]+))? (D | F)?;
// xb quotefail -- BCONST
BCONST: B ('\'' [01]* '\'')+;
// xh quotefail -- XCONST
XCONST: X ('\'' [A-Fa-f0-9]* '\'')+;

PARAM: '$' DIGIT+;

fragment NEWLINE_EOF    : NEWLINE | EOF;
fragment NEWLINE        : '\r'? '\n';
fragment DIGIT          : [0-9];
fragment FLOAT_NUMBER   : ICONST* '.'? ICONST+;

fragment A		: 'A' | 'a';
fragment B		: 'B' | 'b';
fragment C		: 'C' | 'c';
fragment D		: 'D' | 'd';
fragment E		: 'E' | 'e';
fragment F		: 'F' | 'f';
fragment G		: 'G' | 'g';
fragment H		: 'H' | 'h';
fragment I		: 'I' | 'i';
fragment J		: 'J' | 'j';
fragment K		: 'K' | 'k';
fragment L		: 'L' | 'l';
fragment M		: 'M' | 'm';
fragment N		: 'N' | 'n';
fragment O		: 'O' | 'o';
fragment P		: 'P' | 'p';
fragment Q		: 'Q' | 'q';
fragment R		: 'R' | 'r';
fragment S		: 'S' | 's';
fragment T		: 'T' | 't';
fragment U		: 'U' | 'u';
fragment V		: 'V' | 'v';
fragment W		: 'W' | 'w';
fragment X		: 'X' | 'x';
fragment Y		: 'Y' | 'y';
fragment Z		: 'Z' | 'z';
fragment SIMPLE_LETTER  : [a-zA-Z];
fragment UNI_CHAR       : '\u2E80-\u2FD5' | '\u3190-\u319F' | '\u3400-\u4DBF' | '\u4E00'..'\u9FEF' | '\uF900'..'\uFAAD';

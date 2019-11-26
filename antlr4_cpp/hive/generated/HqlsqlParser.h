
// Generated from /home/jona/myGit/myCode_repository/antlr4_cpp/hive/HqlsqlParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"


#include <strings.h>




class  HqlsqlParser : public antlr4::Parser {
public:
  enum {
    T_ACTION = 1, T_ADD = 2, T_ALL = 3, T_ALLOCATE = 4, T_ALTER = 5, T_AND = 6, 
    T_ANSI_NULLS = 7, T_ANSI_PADDING = 8, T_AS = 9, T_ASC = 10, T_ASSOCIATE = 11, 
    T_AT = 12, T_AUTO_INCREMENT = 13, T_AVG = 14, T_BATCHSIZE = 15, T_BEGIN = 16, 
    T_BETWEEN = 17, T_BIGINT = 18, T_BINARY_DOUBLE = 19, T_BINARY_FLOAT = 20, 
    T_BINARY_INTEGER = 21, T_BIT = 22, T_BODY = 23, T_BREAK = 24, T_BY = 25, 
    T_BYTE = 26, T_CALL = 27, T_CALLER = 28, T_CASCADE = 29, T_CASE = 30, 
    T_CASESPECIFIC = 31, T_CAST = 32, T_CHAR = 33, T_CHARACTER = 34, T_CHARSET = 35, 
    T_CLIENT = 36, T_CLOSE = 37, T_CLUSTERED = 38, T_CLUSTER = 39, T_CMP = 40, 
    T_COLLECT = 41, T_COLLECTION = 42, T_COLUMN = 43, T_COMMENT = 44, T_CONSTANT = 45, 
    T_COMMIT = 46, T_COMPRESS = 47, T_CONCAT = 48, T_CONDITION = 49, T_CONSTRAINT = 50, 
    T_CONTINUE = 51, T_COPY = 52, T_COUNT = 53, T_COUNT_BIG = 54, T_CREATE = 55, 
    T_CREATION = 56, T_CREATOR = 57, T_CS = 58, T_CURRENT = 59, T_CURRENT_SCHEMA = 60, 
    T_CURSOR = 61, T_DATABASE = 62, T_DATABASES = 63, T_DATA = 64, T_DATE = 65, 
    T_DATETIME = 66, T_DAY = 67, T_DAYS = 68, T_DEC = 69, T_DECIMAL = 70, 
    T_DECLARE = 71, T_DEFAULT = 72, T_DEFERRED = 73, T_REBUILD = 74, T_DEFINED = 75, 
    T_DEFINER = 76, T_DEFINITION = 77, T_DELETE = 78, T_DELIMITED = 79, 
    T_DELIMITER = 80, T_DESC = 81, T_DESCRIBE = 82, T_DIAGNOSTICS = 83, 
    T_DIR = 84, T_DIRECTORY = 85, T_DISTINCT = 86, T_DISTRIBUTE = 87, T_DO = 88, 
    T_DOUBLE = 89, T_DROP = 90, T_DYNAMIC = 91, T_ELSE = 92, T_ELSEIF = 93, 
    T_ELSIF = 94, T_ENABLE = 95, T_DISABLE = 96, T_CHECK = 97, T_NOVALIDATE = 98, 
    T_RELY = 99, T_NORELY = 100, T_END = 101, T_ENGINE = 102, T_ESCAPED = 103, 
    T_EXCEPT = 104, T_EXEC = 105, T_EXECUTE = 106, T_EXCEPTION = 107, T_EXCLUSIVE = 108, 
    T_EXISTS = 109, T_EXIT = 110, T_FALLBACK = 111, T_FALSE = 112, T_FETCH = 113, 
    T_FIELDS = 114, T_FILE = 115, T_FILES = 116, T_JAR = 117, T_FLOAT = 118, 
    T_FOR = 119, T_FOREIGN = 120, T_FORMAT = 121, T_FOUND = 122, T_FROM = 123, 
    T_FULL = 124, T_FUNCTION = 125, T_GET = 126, T_GLOBAL = 127, T_GO = 128, 
    T_GRANT = 129, T_REVOKE = 130, T_GROUP = 131, T_ROLE = 132, T_ROLES = 133, 
    T_HANDLER = 134, T_HASH = 135, T_HAVING = 136, T_HDFS = 137, T_HIVE = 138, 
    T_HOST = 139, T_IDENTITY = 140, T_IF = 141, T_IGNORE = 142, T_IMMEDIATE = 143, 
    T_IN = 144, T_INCLUDE = 145, T_INDEX = 146, T_INDEXES = 147, T_INITRANS = 148, 
    T_INNER = 149, T_INOUT = 150, T_INSERT = 151, T_INT = 152, T_INT2 = 153, 
    T_INT4 = 154, T_INT8 = 155, T_INTEGER = 156, T_INTERSECT = 157, T_INTERVAL = 158, 
    T_INTO = 159, T_INVOKER = 160, T_IS = 161, T_ISOPEN = 162, T_ITEMS = 163, 
    T_JOIN = 164, T_KEEP = 165, T_KEY = 166, T_KEYS = 167, T_LANGUAGE = 168, 
    T_LEAVE = 169, T_LEFT = 170, T_LIKE = 171, T_LIMIT = 172, T_LINES = 173, 
    T_LOCAL = 174, T_LOCATION = 175, T_LOCATOR = 176, T_LOCATORS = 177, 
    T_LOCKS = 178, T_LOG = 179, T_LOGGED = 180, T_LOGGING = 181, T_LOOP = 182, 
    T_MAP = 183, T_MATCHED = 184, T_MAX = 185, T_MAXTRANS = 186, T_MERGE = 187, 
    T_MESSAGE_TEXT = 188, T_MICROSECOND = 189, T_MICROSECONDS = 190, T_MIN = 191, 
    T_MULTISET = 192, T_NCHAR = 193, T_NEW = 194, T_NVARCHAR = 195, T_NO = 196, 
    T_NOCOUNT = 197, T_NOCOMPRESS = 198, T_NOLOGGING = 199, T_NONE = 200, 
    T_NOT = 201, T_NOTFOUND = 202, T_NULL = 203, T_NUMERIC = 204, T_NUMBER = 205, 
    T_OBJECT = 206, T_OFF = 207, T_ON = 208, T_ONLY = 209, T_OPEN = 210, 
    T_OR = 211, T_ORDER = 212, T_OUT = 213, T_OUTER = 214, T_OVER = 215, 
    T_OVERWRITE = 216, T_OWNER = 217, T_PACKAGE = 218, T_PARTITION = 219, 
    T_PCTFREE = 220, T_PCTUSED = 221, T_PLS_INTEGER = 222, T_PRECISION = 223, 
    T_PRESERVE = 224, T_PRIMARY = 225, T_PRINT = 226, T_PROC = 227, T_PROCEDURE = 228, 
    T_QUALIFY = 229, T_QUERY_BAND = 230, T_QUIT = 231, T_QUOTED_IDENTIFIER = 232, 
    T_RAISE = 233, T_REAL = 234, T_REFERENCES = 235, T_REGEXP = 236, T_REPLACE = 237, 
    T_RESIGNAL = 238, T_RESTRICT = 239, T_RESULT = 240, T_RESULT_SET_LOCATOR = 241, 
    T_RETURN = 242, T_RETURNS = 243, T_REVERSE = 244, T_RIGHT = 245, T_RLIKE = 246, 
    T_ROLLBACK = 247, T_ROW = 248, T_ROWS = 249, T_ROWTYPE = 250, T_ROW_COUNT = 251, 
    T_RR = 252, T_RS = 253, T_PWD = 254, T_TRIM = 255, T_SCHEMA = 256, T_SCHEMAS = 257, 
    T_SECOND = 258, T_SECONDS = 259, T_SECURITY = 260, T_SEGMENT = 261, 
    T_SELECT = 262, T_SET = 263, T_RESET = 264, T_SESSION = 265, T_SESSIONS = 266, 
    T_SETS = 267, T_SHARE = 268, T_SIGNAL = 269, T_SIMPLE_DOUBLE = 270, 
    T_SIMPLE_FLOAT = 271, T_SIMPLE_INTEGER = 272, T_SMALLDATETIME = 273, 
    T_SMALLINT = 274, T_SQL = 275, T_SQLEXCEPTION = 276, T_SQLINSERT = 277, 
    T_SQLSTATE = 278, T_SQLWARNING = 279, T_STATS = 280, T_STATISTICS = 281, 
    T_STEP = 282, T_STORAGE = 283, T_STORED = 284, T_STRING = 285, T_BINARY = 286, 
    T_SUBDIR = 287, T_SUBSTRING = 288, T_SUM = 289, T_SUMMARY = 290, T_SYS_REFCURSOR = 291, 
    T_TABLE = 292, T_TABLES = 293, T_VIEW = 294, T_VIEWS = 295, T_TABLESPACE = 296, 
    T_TEMPORARY = 297, T_EXTERNAL = 298, T_TERMINATED = 299, T_TEXTIMAGE_ON = 300, 
    T_THEN = 301, T_TIMESTAMP = 302, T_TINYINT = 303, T_TITLE = 304, T_TO = 305, 
    T_TOP = 306, T_TRANSACTION = 307, T_TRANSACTIONS = 308, T_TRUE = 309, 
    T_TRUNCATE = 310, T_TYPE = 311, T_UNION = 312, T_UNIQUE = 313, T_UPDATE = 314, 
    T_UR = 315, T_USE = 316, T_USING = 317, T_VALUE = 318, T_VALUES = 319, 
    T_VAR = 320, T_VARCHAR = 321, T_VARCHAR2 = 322, T_VARYING = 323, T_VOLATILE = 324, 
    T_WHEN = 325, T_WHERE = 326, T_WHILE = 327, T_WITH = 328, T_WITHOUT = 329, 
    T_WORK = 330, T_XACT_ABORT = 331, T_ABORT = 332, T_XML = 333, T_YES = 334, 
    T_ARRAY = 335, T_STRUCT = 336, T_BOOLEAN = 337, T_LITERAL = 338, T_SERDE = 339, 
    T_SEQUENCEFILE = 340, T_TEXTFILE = 341, T_RCFILE = 342, T_ORC = 343, 
    T_PARQUET = 344, T_AVRO = 345, T_JSONFILE = 346, T_INPUTFORMAT = 347, 
    T_OUTPUTFORMAT = 348, T_FILEFORMAT = 349, T_T = 350, T_S = 351, T_FUNCTIONS = 352, 
    T_IMPORT = 353, T_EXPORT = 354, T_ACTIVITY_COUNT = 355, T_CUME_DIST = 356, 
    T_CURRENT_DATE = 357, T_CURRENT_TIMESTAMP = 358, T_CURRENT_USER = 359, 
    T_DENSE_RANK = 360, T_FIRST_VALUE = 361, T_LAG = 362, T_LAST_VALUE = 363, 
    T_LEAD = 364, T_MAX_PART_STRING = 365, T_MIN_PART_STRING = 366, T_MAX_PART_INT = 367, 
    T_MIN_PART_INT = 368, T_MAX_PART_DATE = 369, T_MIN_PART_DATE = 370, 
    T_PART_COUNT = 371, T_PART_LOC = 372, T_RANK = 373, T_ROW_NUMBER = 374, 
    T_STDEV = 375, T_STD = 376, T_SYSDATE = 377, T_VARIANCE = 378, T_USER = 379, 
    T_DBPROPERTIES = 380, T_TBLPROPERTIES = 381, T_IDXPROPERTIES = 382, 
    T_PURGE = 383, T_BUCKETS = 384, T_SKEWED = 385, T_DIRECTORIES = 386, 
    T_SERDEPROPERTIES = 387, T_RENAME = 388, T_SORTED = 389, T_SORT = 390, 
    T_CHANGE = 391, T_EXCHANGE = 392, T_RECOVER = 393, T_PARTITIONS = 394, 
    T_PROTECTION = 395, T_ARCHIVE = 396, T_UNARCHIVE = 397, T_TOUCH = 398, 
    T_OFFLINE = 399, T_NO_DROP = 400, T_COMPACT = 401, T_CONCATENATE = 402, 
    T_WAIT = 403, T_COLUMNS = 404, T_FIRST = 405, T_LAST = 406, T_NULLS = 407, 
    T_AFTER = 408, T_MATERIALIZED = 409, T_REWRITE = 410, T_PARTITIONED = 411, 
    T_DISTRIBUTED = 412, T_MACRO = 413, T_SHOW = 414, T_EXTENDED = 415, 
    T_FORMATTED = 416, T_SEMI = 417, T_CROSS = 418, T_LATERAL = 419, T_RELOAD = 420, 
    T_LOAD = 421, T_INPATH = 422, T_PRINCIPALS = 423, T_COMPACTIONS = 424, 
    T_CONF = 425, T_ADMIN = 426, T_OPTION = 427, T_PRIVILEGES = 428, T_LOCK = 429, 
    T_SHOW_DATABASE = 430, T_COMPUTE = 431, T_CACHE = 432, T_METADATA = 433, 
    T_NOSCAN = 434, T_UNIONTYPE = 435, T_ANALYZE = 436, T_EXPLAIN = 437, 
    T_CBO = 438, T_AST = 439, T_DEPENDENCY = 440, T_AUTHORIZATION = 441, 
    T_VECTORIZATION = 442, T_COST = 443, T_JOINCOST = 444, T_OPERATOR = 445, 
    T_EXPRESSION = 446, T_DETAIL = 447, T_UNBOUNDED = 448, T_PRECEDING = 449, 
    T_FOLLOWING = 450, T_RANGE = 451, T_TABLESAMPLE = 452, T_BUCKET = 453, 
    T_OF = 454, T_PERCENTS = 455, T_WINDOW = 456, T_DIV = 457, T_YEAR = 458, 
    T_MONTH = 459, T_MINUTE = 460, T_TIME = 461, T_ZONE = 462, T_ADD_SIGN = 463, 
    T_COLON = 464, T_COMMA = 465, T_PIPE = 466, T_DIV_SIGN = 467, T_DOT2 = 468, 
    T_EQUAL = 469, T_EQUAL2 = 470, T_NOTEQUAL = 471, T_NOTEQUAL2 = 472, 
    T_GREATER = 473, T_GREATEREQUAL = 474, T_LESS = 475, T_LESSEQUAL = 476, 
    T_MUL = 477, T_OPEN_B = 478, T_OPEN_P = 479, T_OPEN_SB = 480, T_CLOSE_B = 481, 
    T_CLOSE_P = 482, T_CLOSE_SB = 483, T_SEMICOLON = 484, T_SUB = 485, T_AT_SIGN = 486, 
    T_POUND_SIGN = 487, T_PERIOD = 488, T_PERCENT = 489, T_EXCLAMATION = 490, 
    T_SLASH_SIGN = 491, T_UNDERLINE = 492, T_AND_SIGN = 493, T_EXPONENT = 494, 
    L_ID = 495, L_S_STRING = 496, L_D_STRING = 497, L_INT = 498, L_DEC = 499, 
    L_WS = 500, L_M_COMMENT = 501, L_S_COMMENT = 502, L_ALPHA = 503, L_DIGIT = 504
  };

  enum {
    RuleProgram = 0, RuleBlock = 1, RuleBegin_end_block = 2, RuleSingle_block_stmt = 3, 
    RuleBlock_end = 4, RuleProc_block = 5, RuleStmt = 6, RuleSemicolon_stmt = 7, 
    RuleException_block = 8, RuleException_block_item = 9, RuleAssignment_stmt = 10, 
    RuleAssignment_stmt_item = 11, RuleAssignment_stmt_single_item = 12, 
    RuleAssignment_stmt_multiple_item = 13, RuleAssignment_stmt_select_item = 14, 
    RuleAssignment_expr = 15, RuleAssignment_reserverd_words = 16, RuleAllocate_cursor_stmt = 17, 
    RuleAssociate_locator_stmt = 18, RuleBegin_transaction_stmt = 19, RuleAbort_transactions_stmt = 20, 
    RuleBreak_stmt = 21, RuleCall_stmt = 22, RuleDeclare_stmt = 23, RuleDeclare_block = 24, 
    RuleDeclare_block_inplace = 25, RuleDeclare_stmt_item = 26, RuleDeclare_var_item = 27, 
    RuleDeclare_condition_item = 28, RuleDeclare_cursor_item = 29, RuleCursor_with_return = 30, 
    RuleCursor_without_return = 31, RuleDeclare_handler_item = 32, RuleDeclare_temporary_table_item = 33, 
    RuleCreate_table_stmt = 34, RuleCreate_local_temp_table_stmt = 35, RuleCreate_table_definition = 36, 
    RuleCreate_table_columns = 37, RuleCreate_table_columns_item = 38, RuleColumn_name = 39, 
    RuleOld_column_name = 40, RuleNew_column_name = 41, RuleConstraint_specification = 42, 
    RuleConstraint_spec = 43, RuleConstraint_name = 44, RuleParen_column_list = 45, 
    RuleColumn_name_list = 46, RuleColumn_name_ele = 47, RuleParen_col_values = 48, 
    RuleColumn_constrains_specification = 49, RuleDefault_value = 50, RuleCreate_table_column_comment = 51, 
    RuleCreate_table_column_cons = 52, RuleCreate_table_fk_action = 53, 
    RuleCreate_table_preoptions = 54, RuleCreate_table_preoptions_item = 55, 
    RuleCreate_table_preoptions_td_item = 56, RuleCreate_table_options = 57, 
    RuleCreate_table_option = 58, RulePartition_by_part = 59, RuleCluster_by_part = 60, 
    RuleSkewed_by_part = 61, RuleCol_values = 62, RuleStored_as_part = 63, 
    RuleRow_format_part = 64, RuleFile_format = 65, RuleRow_format = 66, 
    RuleTerminated_by_part = 67, RuleTerminated_by = 68, RuleBy_char = 69, 
    RuleCreate_table_options_hive_item = 70, RuleCreate_table_hive_row_format = 71, 
    RuleCreate_table_hive_row_format_fields = 72, RuleCreate_table_options_mssql_item = 73, 
    RuleCreate_view_stmt = 74, RuleCreate_view_options = 75, RuleCreate_view_option = 76, 
    RuleCreate_macro_stmt = 77, RuleCreate_role_stmt = 78, RuleGrant_revoke_role_stmt = 79, 
    RuleWith_option_for = 80, RuleRole_name = 81, RuleRole_names = 82, RuleGrant_revoke_privilege_stmt = 83, 
    RulePrivilege_columns = 84, RulePriv_type = 85, RuleObject_specification = 86, 
    RuleAlter_stmt = 87, RuleAlter_option = 88, RuleAlter_table_stmt = 89, 
    RuleAlter_table_item_options = 90, RuleAlter_table_properties = 91, 
    RuleSet_tblproperties = 92, RuleAdd_serde_properties = 93, RuleTable_storage_properties = 94, 
    RuleTable_skewed_properties = 95, RuleTable_constraints = 96, RuleAdd_constraint_property = 97, 
    RuleChange_column_property = 98, RuleDrop_constraint_property = 99, 
    RuleNew_table_name = 100, RuleAlter_table_partition_properties = 101, 
    RuleAdd_partition_property = 102, RuleAdd_partition_property_options = 103, 
    RuleAdd_partition_property_option = 104, RuleRecover_partition_property = 105, 
    RuleDrop_partition_property = 106, RuleArchive_partition_property = 107, 
    RuleAlter_table_or_partition_options = 108, RuleAlter_table_column_properties = 109, 
    RuleShow_stmt = 110, RulePrincipal_specification = 111, RulePrincipal_specifications = 112, 
    RuleImport_stmt = 113, RuleExport_stmt = 114, RuleExplain_stmt = 115, 
    RuleDtype = 116, RuleData_type = 117, RulePrimitive_type = 118, RuleArray_type = 119, 
    RuleMap_type = 120, RuleStruct_type = 121, RuleStruct_type_type = 122, 
    RuleUnion_type = 123, RuleDtype_len = 124, RuleDtype_attr = 125, RuleDtype_default = 126, 
    RuleCreate_database_stmt = 127, RuleCreate_database_option = 128, RuleComment_part = 129, 
    RuleLocation_part = 130, RuleProperty_values = 131, RuleProperty_values_part = 132, 
    RuleCreate_function_stmt = 133, RuleCreate_function_procedure = 134, 
    RuleCreate_temporary_function = 135, RuleCreate_permanent_function = 136, 
    RulePermanent_function_options = 137, RulePermanent_function_option = 138, 
    RuleReload_function = 139, RuleCreate_function_return = 140, RuleCreate_package_stmt = 141, 
    RulePackage_spec = 142, RulePackage_spec_item = 143, RuleCreate_package_body_stmt = 144, 
    RulePackage_body = 145, RulePackage_body_item = 146, RuleCreate_procedure_stmt = 147, 
    RuleCreate_routine_params = 148, RuleCreate_routine_param_item = 149, 
    RuleCreate_routine_options = 150, RuleCreate_routine_option = 151, RuleDrop_stmt = 152, 
    RuleEnd_transaction_stmt = 153, RuleExec_stmt = 154, RuleIf_stmt = 155, 
    RuleIf_plsql_stmt = 156, RuleIf_tsql_stmt = 157, RuleIf_bteq_stmt = 158, 
    RuleElseif_block = 159, RuleElse_block = 160, RuleInclude_stmt = 161, 
    RuleLoad_file_stmt = 162, RuleInsert_stmt = 163, RuleInsert_into_table_from_sql = 164, 
    RuleInsert_into_tables_from_query = 165, RuleInsert_tables_overwrite_into = 166, 
    RuleInsert_into_files_from_query = 167, RuleInsert_into_mutiples = 168, 
    RuleInsert_stmt_cols = 169, RuleInsert_stmt_rows = 170, RuleInsert_stmt_row = 171, 
    RuleInsert_directory_stmt = 172, RuleExit_stmt = 173, RuleGet_diag_stmt = 174, 
    RuleGet_diag_stmt_item = 175, RuleGet_diag_stmt_exception_item = 176, 
    RuleGet_diag_stmt_rowcount_item = 177, RuleLeave_stmt = 178, RuleMap_object_stmt = 179, 
    RuleOpen_stmt = 180, RuleFetch_stmt = 181, RuleCollect_stats_stmt = 182, 
    RuleCollect_stats_clause = 183, RuleClose_stmt = 184, RuleCmp_stmt = 185, 
    RuleCmp_source = 186, RuleCopy_from_local_stmt = 187, RuleCopy_stmt = 188, 
    RuleCopy_source = 189, RuleCopy_target = 190, RuleCopy_option = 191, 
    RuleCopy_file_option = 192, RuleCommit_stmt = 193, RuleCreate_index_stmt = 194, 
    RuleCreate_index_col = 195, RuleIndex_storage_clause = 196, RuleIndex_mssql_storage_clause = 197, 
    RulePrint_stmt = 198, RuleQuit_stmt = 199, RuleRaise_stmt = 200, RuleResignal_stmt = 201, 
    RuleReturn_stmt = 202, RuleRollback_stmt = 203, RuleSet_session_option = 204, 
    RuleSet_current_schema_option = 205, RuleSet_mssql_session_option = 206, 
    RuleSet_teradata_session_option = 207, RuleSignal_stmt = 208, RuleSummary_stmt = 209, 
    RuleTruncate_table_stmt = 210, RulePartition_assignment_list = 211, 
    RulePartition_spec = 212, RuleUse_stmt = 213, RuleValues_into_stmt = 214, 
    RuleWhile_stmt = 215, RuleFor_cursor_stmt = 216, RuleFor_range_stmt = 217, 
    RuleLabel = 218, RuleLabel_pattern = 219, RuleUsing_clause = 220, RuleSelect_stmt = 221, 
    RuleCte_select_stmt = 222, RuleCommon_table_expression = 223, RuleCte_select_cols = 224, 
    RuleFullselect_stmt = 225, RuleFullselect_stmt_item = 226, RuleFullselect_set_clause = 227, 
    RuleSubselect_stmt = 228, RuleSelect_list = 229, RuleSelect_list_set = 230, 
    RuleSelect_list_limit = 231, RuleSelect_list_item = 232, RuleSelect_list_alias = 233, 
    RuleSelect_list_asterisk = 234, RuleSelect_list_use_option = 235, RuleFrom_clause = 236, 
    RuleFrom_table_clause = 237, RuleFrom_table_name_clause = 238, RuleFrom_table_clause_option = 239, 
    RuleLateral_view = 240, RuleTable_sample_clause = 241, RuleTable_sampling = 242, 
    RuleBlock_sampling = 243, RuleBlock_sampling_option = 244, RuleNumbers = 245, 
    RuleSize_types = 246, RuleFrom_subselect_clause = 247, RuleFrom_join_clause = 248, 
    RuleFrom_join_type_clause = 249, RuleFrom_alias_clause = 250, RuleOn_condition = 251, 
    RuleTable_name = 252, RuleView_name = 253, RuleDb_name = 254, RuleSelect_option = 255, 
    RuleWindow_clause = 256, RuleWhere_clause = 257, RuleGroup_by_clause = 258, 
    RuleHaving_clause = 259, RuleLimit_clause = 260, RuleOrder_by_clause = 261, 
    RuleOrder_by_clause_option = 262, RuleCol_order = 263, RuleCol_null_order = 264, 
    RuleCluster_by_clause = 265, RuleUpdate_stmt = 266, RuleUpdate_assignment = 267, 
    RuleUpdate_upsert = 268, RuleMerge_stmt = 269, RuleMerge_table = 270, 
    RuleMerge_condition = 271, RuleMerge_action = 272, RuleAnalyze_table_stmt = 273, 
    RuleDelete_stmt = 274, RuleDelete_alias = 275, RuleDescribe_stmt = 276, 
    RuleBool_expr = 277, RuleBool_expr_atom = 278, RuleBool_expr_unary = 279, 
    RuleBool_expr_single_in = 280, RuleBool_expr_multi_in = 281, RuleParen_expr_list = 282, 
    RuleExpr_list = 283, RuleBool_expr_binary = 284, RuleBool_expr_logical_operator = 285, 
    RuleBool_expr_binary_operator = 286, RuleExpr = 287, RuleExpr_unary = 288, 
    RuleExpr_atom = 289, RuleExpr_interval = 290, RuleInterval_item = 291, 
    RuleExpr_concat = 292, RuleExpr_concat_item = 293, RuleExpr_case = 294, 
    RuleExpr_case_simple = 295, RuleExpr_case_searched = 296, RuleExpr_cursor_attribute = 297, 
    RuleExpr_agg_window_func = 298, RuleExpr_func_all_distinct = 299, RuleExpr_func_over_clause = 300, 
    RuleExpr_func_over_clause_options = 301, RuleExpr_func_partition_by_clause = 302, 
    RuleFunc_partition_clause_option = 303, RuleFunc_partition_clause_part = 304, 
    RuleExpr_spec_func = 305, RuleExpr_func = 306, RuleExpr_func_params = 307, 
    RuleFunc_param = 308, RuleExpr_select = 309, RuleExpr_file = 310, RuleHive = 311, 
    RuleHive_item = 312, RuleHost = 313, RuleHost_cmd = 314, RuleHost_stmt = 315, 
    RuleFile_name = 316, RuleFile_pattern = 317, RuleDate_literal = 318, 
    RuleTimestamp_literal = 319, RuleIdent = 320, RuleString = 321, RuleInt_number = 322, 
    RuleDec_number = 323, RuleBool_literal = 324, RuleNull_const = 325, 
    RuleNon_reserved_words = 326
  };

  HqlsqlParser(antlr4::TokenStream *input);
  ~HqlsqlParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgramContext;
  class BlockContext;
  class Begin_end_blockContext;
  class Single_block_stmtContext;
  class Block_endContext;
  class Proc_blockContext;
  class StmtContext;
  class Semicolon_stmtContext;
  class Exception_blockContext;
  class Exception_block_itemContext;
  class Assignment_stmtContext;
  class Assignment_stmt_itemContext;
  class Assignment_stmt_single_itemContext;
  class Assignment_stmt_multiple_itemContext;
  class Assignment_stmt_select_itemContext;
  class Assignment_exprContext;
  class Assignment_reserverd_wordsContext;
  class Allocate_cursor_stmtContext;
  class Associate_locator_stmtContext;
  class Begin_transaction_stmtContext;
  class Abort_transactions_stmtContext;
  class Break_stmtContext;
  class Call_stmtContext;
  class Declare_stmtContext;
  class Declare_blockContext;
  class Declare_block_inplaceContext;
  class Declare_stmt_itemContext;
  class Declare_var_itemContext;
  class Declare_condition_itemContext;
  class Declare_cursor_itemContext;
  class Cursor_with_returnContext;
  class Cursor_without_returnContext;
  class Declare_handler_itemContext;
  class Declare_temporary_table_itemContext;
  class Create_table_stmtContext;
  class Create_local_temp_table_stmtContext;
  class Create_table_definitionContext;
  class Create_table_columnsContext;
  class Create_table_columns_itemContext;
  class Column_nameContext;
  class Old_column_nameContext;
  class New_column_nameContext;
  class Constraint_specificationContext;
  class Constraint_specContext;
  class Constraint_nameContext;
  class Paren_column_listContext;
  class Column_name_listContext;
  class Column_name_eleContext;
  class Paren_col_valuesContext;
  class Column_constrains_specificationContext;
  class Default_valueContext;
  class Create_table_column_commentContext;
  class Create_table_column_consContext;
  class Create_table_fk_actionContext;
  class Create_table_preoptionsContext;
  class Create_table_preoptions_itemContext;
  class Create_table_preoptions_td_itemContext;
  class Create_table_optionsContext;
  class Create_table_optionContext;
  class Partition_by_partContext;
  class Cluster_by_partContext;
  class Skewed_by_partContext;
  class Col_valuesContext;
  class Stored_as_partContext;
  class Row_format_partContext;
  class File_formatContext;
  class Row_formatContext;
  class Terminated_by_partContext;
  class Terminated_byContext;
  class By_charContext;
  class Create_table_options_hive_itemContext;
  class Create_table_hive_row_formatContext;
  class Create_table_hive_row_format_fieldsContext;
  class Create_table_options_mssql_itemContext;
  class Create_view_stmtContext;
  class Create_view_optionsContext;
  class Create_view_optionContext;
  class Create_macro_stmtContext;
  class Create_role_stmtContext;
  class Grant_revoke_role_stmtContext;
  class With_option_forContext;
  class Role_nameContext;
  class Role_namesContext;
  class Grant_revoke_privilege_stmtContext;
  class Privilege_columnsContext;
  class Priv_typeContext;
  class Object_specificationContext;
  class Alter_stmtContext;
  class Alter_optionContext;
  class Alter_table_stmtContext;
  class Alter_table_item_optionsContext;
  class Alter_table_propertiesContext;
  class Set_tblpropertiesContext;
  class Add_serde_propertiesContext;
  class Table_storage_propertiesContext;
  class Table_skewed_propertiesContext;
  class Table_constraintsContext;
  class Add_constraint_propertyContext;
  class Change_column_propertyContext;
  class Drop_constraint_propertyContext;
  class New_table_nameContext;
  class Alter_table_partition_propertiesContext;
  class Add_partition_propertyContext;
  class Add_partition_property_optionsContext;
  class Add_partition_property_optionContext;
  class Recover_partition_propertyContext;
  class Drop_partition_propertyContext;
  class Archive_partition_propertyContext;
  class Alter_table_or_partition_optionsContext;
  class Alter_table_column_propertiesContext;
  class Show_stmtContext;
  class Principal_specificationContext;
  class Principal_specificationsContext;
  class Import_stmtContext;
  class Export_stmtContext;
  class Explain_stmtContext;
  class DtypeContext;
  class Data_typeContext;
  class Primitive_typeContext;
  class Array_typeContext;
  class Map_typeContext;
  class Struct_typeContext;
  class Struct_type_typeContext;
  class Union_typeContext;
  class Dtype_lenContext;
  class Dtype_attrContext;
  class Dtype_defaultContext;
  class Create_database_stmtContext;
  class Create_database_optionContext;
  class Comment_partContext;
  class Location_partContext;
  class Property_valuesContext;
  class Property_values_partContext;
  class Create_function_stmtContext;
  class Create_function_procedureContext;
  class Create_temporary_functionContext;
  class Create_permanent_functionContext;
  class Permanent_function_optionsContext;
  class Permanent_function_optionContext;
  class Reload_functionContext;
  class Create_function_returnContext;
  class Create_package_stmtContext;
  class Package_specContext;
  class Package_spec_itemContext;
  class Create_package_body_stmtContext;
  class Package_bodyContext;
  class Package_body_itemContext;
  class Create_procedure_stmtContext;
  class Create_routine_paramsContext;
  class Create_routine_param_itemContext;
  class Create_routine_optionsContext;
  class Create_routine_optionContext;
  class Drop_stmtContext;
  class End_transaction_stmtContext;
  class Exec_stmtContext;
  class If_stmtContext;
  class If_plsql_stmtContext;
  class If_tsql_stmtContext;
  class If_bteq_stmtContext;
  class Elseif_blockContext;
  class Else_blockContext;
  class Include_stmtContext;
  class Load_file_stmtContext;
  class Insert_stmtContext;
  class Insert_into_table_from_sqlContext;
  class Insert_into_tables_from_queryContext;
  class Insert_tables_overwrite_intoContext;
  class Insert_into_files_from_queryContext;
  class Insert_into_mutiplesContext;
  class Insert_stmt_colsContext;
  class Insert_stmt_rowsContext;
  class Insert_stmt_rowContext;
  class Insert_directory_stmtContext;
  class Exit_stmtContext;
  class Get_diag_stmtContext;
  class Get_diag_stmt_itemContext;
  class Get_diag_stmt_exception_itemContext;
  class Get_diag_stmt_rowcount_itemContext;
  class Leave_stmtContext;
  class Map_object_stmtContext;
  class Open_stmtContext;
  class Fetch_stmtContext;
  class Collect_stats_stmtContext;
  class Collect_stats_clauseContext;
  class Close_stmtContext;
  class Cmp_stmtContext;
  class Cmp_sourceContext;
  class Copy_from_local_stmtContext;
  class Copy_stmtContext;
  class Copy_sourceContext;
  class Copy_targetContext;
  class Copy_optionContext;
  class Copy_file_optionContext;
  class Commit_stmtContext;
  class Create_index_stmtContext;
  class Create_index_colContext;
  class Index_storage_clauseContext;
  class Index_mssql_storage_clauseContext;
  class Print_stmtContext;
  class Quit_stmtContext;
  class Raise_stmtContext;
  class Resignal_stmtContext;
  class Return_stmtContext;
  class Rollback_stmtContext;
  class Set_session_optionContext;
  class Set_current_schema_optionContext;
  class Set_mssql_session_optionContext;
  class Set_teradata_session_optionContext;
  class Signal_stmtContext;
  class Summary_stmtContext;
  class Truncate_table_stmtContext;
  class Partition_assignment_listContext;
  class Partition_specContext;
  class Use_stmtContext;
  class Values_into_stmtContext;
  class While_stmtContext;
  class For_cursor_stmtContext;
  class For_range_stmtContext;
  class LabelContext;
  class Label_patternContext;
  class Using_clauseContext;
  class Select_stmtContext;
  class Cte_select_stmtContext;
  class Common_table_expressionContext;
  class Cte_select_colsContext;
  class Fullselect_stmtContext;
  class Fullselect_stmt_itemContext;
  class Fullselect_set_clauseContext;
  class Subselect_stmtContext;
  class Select_listContext;
  class Select_list_setContext;
  class Select_list_limitContext;
  class Select_list_itemContext;
  class Select_list_aliasContext;
  class Select_list_asteriskContext;
  class Select_list_use_optionContext;
  class From_clauseContext;
  class From_table_clauseContext;
  class From_table_name_clauseContext;
  class From_table_clause_optionContext;
  class Lateral_viewContext;
  class Table_sample_clauseContext;
  class Table_samplingContext;
  class Block_samplingContext;
  class Block_sampling_optionContext;
  class NumbersContext;
  class Size_typesContext;
  class From_subselect_clauseContext;
  class From_join_clauseContext;
  class From_join_type_clauseContext;
  class From_alias_clauseContext;
  class On_conditionContext;
  class Table_nameContext;
  class View_nameContext;
  class Db_nameContext;
  class Select_optionContext;
  class Window_clauseContext;
  class Where_clauseContext;
  class Group_by_clauseContext;
  class Having_clauseContext;
  class Limit_clauseContext;
  class Order_by_clauseContext;
  class Order_by_clause_optionContext;
  class Col_orderContext;
  class Col_null_orderContext;
  class Cluster_by_clauseContext;
  class Update_stmtContext;
  class Update_assignmentContext;
  class Update_upsertContext;
  class Merge_stmtContext;
  class Merge_tableContext;
  class Merge_conditionContext;
  class Merge_actionContext;
  class Analyze_table_stmtContext;
  class Delete_stmtContext;
  class Delete_aliasContext;
  class Describe_stmtContext;
  class Bool_exprContext;
  class Bool_expr_atomContext;
  class Bool_expr_unaryContext;
  class Bool_expr_single_inContext;
  class Bool_expr_multi_inContext;
  class Paren_expr_listContext;
  class Expr_listContext;
  class Bool_expr_binaryContext;
  class Bool_expr_logical_operatorContext;
  class Bool_expr_binary_operatorContext;
  class ExprContext;
  class Expr_unaryContext;
  class Expr_atomContext;
  class Expr_intervalContext;
  class Interval_itemContext;
  class Expr_concatContext;
  class Expr_concat_itemContext;
  class Expr_caseContext;
  class Expr_case_simpleContext;
  class Expr_case_searchedContext;
  class Expr_cursor_attributeContext;
  class Expr_agg_window_funcContext;
  class Expr_func_all_distinctContext;
  class Expr_func_over_clauseContext;
  class Expr_func_over_clause_optionsContext;
  class Expr_func_partition_by_clauseContext;
  class Func_partition_clause_optionContext;
  class Func_partition_clause_partContext;
  class Expr_spec_funcContext;
  class Expr_funcContext;
  class Expr_func_paramsContext;
  class Func_paramContext;
  class Expr_selectContext;
  class Expr_fileContext;
  class HiveContext;
  class Hive_itemContext;
  class HostContext;
  class Host_cmdContext;
  class Host_stmtContext;
  class File_nameContext;
  class File_patternContext;
  class Date_literalContext;
  class Timestamp_literalContext;
  class IdentContext;
  class StringContext;
  class Int_numberContext;
  class Dec_numberContext;
  class Bool_literalContext;
  class Null_constContext;
  class Non_reserved_wordsContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Begin_end_blockContext *> begin_end_block();
    Begin_end_blockContext* begin_end_block(size_t i);
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_GO();
    antlr4::tree::TerminalNode* T_GO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContext* block();

  class  Begin_end_blockContext : public antlr4::ParserRuleContext {
  public:
    Begin_end_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_BEGIN();
    BlockContext *block();
    Block_endContext *block_end();
    Declare_blockContext *declare_block();
    Exception_blockContext *exception_block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Begin_end_blockContext* begin_end_block();

  class  Single_block_stmtContext : public antlr4::ParserRuleContext {
  public:
    Single_block_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_BEGIN();
    BlockContext *block();
    Block_endContext *block_end();
    Exception_blockContext *exception_block();
    StmtContext *stmt();
    antlr4::tree::TerminalNode *T_SEMICOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Single_block_stmtContext* single_block_stmt();

  class  Block_endContext : public antlr4::ParserRuleContext {
  public:
    Block_endContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_END();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Block_endContext* block_end();

  class  Proc_blockContext : public antlr4::ParserRuleContext {
  public:
    Proc_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Begin_end_blockContext *begin_end_block();
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);
    antlr4::tree::TerminalNode *T_GO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Proc_blockContext* proc_block();

  class  StmtContext : public antlr4::ParserRuleContext {
  public:
    StmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Alter_stmtContext *alter_stmt();
    Allocate_cursor_stmtContext *allocate_cursor_stmt();
    Associate_locator_stmtContext *associate_locator_stmt();
    Begin_transaction_stmtContext *begin_transaction_stmt();
    Abort_transactions_stmtContext *abort_transactions_stmt();
    Break_stmtContext *break_stmt();
    Call_stmtContext *call_stmt();
    Collect_stats_stmtContext *collect_stats_stmt();
    Close_stmtContext *close_stmt();
    Cmp_stmtContext *cmp_stmt();
    Copy_from_local_stmtContext *copy_from_local_stmt();
    Copy_stmtContext *copy_stmt();
    Commit_stmtContext *commit_stmt();
    Create_database_stmtContext *create_database_stmt();
    Create_function_stmtContext *create_function_stmt();
    Create_index_stmtContext *create_index_stmt();
    Create_local_temp_table_stmtContext *create_local_temp_table_stmt();
    Create_package_stmtContext *create_package_stmt();
    Create_package_body_stmtContext *create_package_body_stmt();
    Create_procedure_stmtContext *create_procedure_stmt();
    Create_table_stmtContext *create_table_stmt();
    Declare_stmtContext *declare_stmt();
    Drop_stmtContext *drop_stmt();
    End_transaction_stmtContext *end_transaction_stmt();
    Exec_stmtContext *exec_stmt();
    Exit_stmtContext *exit_stmt();
    Fetch_stmtContext *fetch_stmt();
    For_cursor_stmtContext *for_cursor_stmt();
    For_range_stmtContext *for_range_stmt();
    If_stmtContext *if_stmt();
    Include_stmtContext *include_stmt();
    Get_diag_stmtContext *get_diag_stmt();
    Leave_stmtContext *leave_stmt();
    Map_object_stmtContext *map_object_stmt();
    Open_stmtContext *open_stmt();
    Print_stmtContext *print_stmt();
    Quit_stmtContext *quit_stmt();
    Raise_stmtContext *raise_stmt();
    Resignal_stmtContext *resignal_stmt();
    Return_stmtContext *return_stmt();
    Rollback_stmtContext *rollback_stmt();
    Signal_stmtContext *signal_stmt();
    Summary_stmtContext *summary_stmt();
    Use_stmtContext *use_stmt();
    Truncate_table_stmtContext *truncate_table_stmt();
    Values_into_stmtContext *values_into_stmt();
    While_stmtContext *while_stmt();
    LabelContext *label();
    HiveContext *hive();
    HostContext *host();
    Create_view_stmtContext *create_view_stmt();
    Create_macro_stmtContext *create_macro_stmt();
    Reload_functionContext *reload_function();
    Create_role_stmtContext *create_role_stmt();
    Grant_revoke_role_stmtContext *grant_revoke_role_stmt();
    Grant_revoke_privilege_stmtContext *grant_revoke_privilege_stmt();
    Load_file_stmtContext *load_file_stmt();
    Insert_stmtContext *insert_stmt();
    Update_stmtContext *update_stmt();
    Delete_stmtContext *delete_stmt();
    Merge_stmtContext *merge_stmt();
    Analyze_table_stmtContext *analyze_table_stmt();
    Select_stmtContext *select_stmt();
    Show_stmtContext *show_stmt();
    Describe_stmtContext *describe_stmt();
    Import_stmtContext *import_stmt();
    Export_stmtContext *export_stmt();
    Explain_stmtContext *explain_stmt();
    Assignment_stmtContext *assignment_stmt();
    Semicolon_stmtContext *semicolon_stmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtContext* stmt();

  class  Semicolon_stmtContext : public antlr4::ParserRuleContext {
  public:
    Semicolon_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_SEMICOLON();
    antlr4::tree::TerminalNode *T_AT_SIGN();
    antlr4::tree::TerminalNode *T_POUND_SIGN();
    antlr4::tree::TerminalNode *T_DIV_SIGN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Semicolon_stmtContext* semicolon_stmt();

  class  Exception_blockContext : public antlr4::ParserRuleContext {
  public:
    Exception_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_EXCEPTION();
    std::vector<Exception_block_itemContext *> exception_block_item();
    Exception_block_itemContext* exception_block_item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Exception_blockContext* exception_block();

  class  Exception_block_itemContext : public antlr4::ParserRuleContext {
  public:
    Exception_block_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> T_WHEN();
    antlr4::tree::TerminalNode* T_WHEN(size_t i);
    antlr4::tree::TerminalNode *L_ID();
    antlr4::tree::TerminalNode *T_THEN();
    BlockContext *block();
    antlr4::tree::TerminalNode *T_END();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Exception_block_itemContext* exception_block_item();

  class  Assignment_stmtContext : public antlr4::ParserRuleContext {
  public:
    Assignment_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_SET();
    Set_session_optionContext *set_session_option();
    std::vector<Assignment_stmt_itemContext *> assignment_stmt_item();
    Assignment_stmt_itemContext* assignment_stmt_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);
    antlr4::tree::TerminalNode *T_RESET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assignment_stmtContext* assignment_stmt();

  class  Assignment_stmt_itemContext : public antlr4::ParserRuleContext {
  public:
    Assignment_stmt_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Assignment_stmt_single_itemContext *assignment_stmt_single_item();
    Assignment_stmt_multiple_itemContext *assignment_stmt_multiple_item();
    Assignment_stmt_select_itemContext *assignment_stmt_select_item();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assignment_stmt_itemContext* assignment_stmt_item();

  class  Assignment_stmt_single_itemContext : public antlr4::ParserRuleContext {
  public:
    Assignment_stmt_single_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Assignment_exprContext *> assignment_expr();
    Assignment_exprContext* assignment_expr(size_t i);
    antlr4::tree::TerminalNode *T_COLON();
    std::vector<Bool_expr_binary_operatorContext *> bool_expr_binary_operator();
    Bool_expr_binary_operatorContext* bool_expr_binary_operator(size_t i);
    antlr4::tree::TerminalNode *T_OPEN_P();
    antlr4::tree::TerminalNode *T_CLOSE_P();
    antlr4::tree::TerminalNode *T_EQUAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assignment_stmt_single_itemContext* assignment_stmt_single_item();

  class  Assignment_stmt_multiple_itemContext : public antlr4::ParserRuleContext {
  public:
    Assignment_stmt_multiple_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> T_OPEN_P();
    antlr4::tree::TerminalNode* T_OPEN_P(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_CLOSE_P();
    antlr4::tree::TerminalNode* T_CLOSE_P(size_t i);
    antlr4::tree::TerminalNode *T_EQUAL();
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);
    antlr4::tree::TerminalNode *T_COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assignment_stmt_multiple_itemContext* assignment_stmt_multiple_item();

  class  Assignment_stmt_select_itemContext : public antlr4::ParserRuleContext {
  public:
    Assignment_stmt_select_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_EQUAL();
    std::vector<antlr4::tree::TerminalNode *> T_OPEN_P();
    antlr4::tree::TerminalNode* T_OPEN_P(size_t i);
    Select_stmtContext *select_stmt();
    std::vector<antlr4::tree::TerminalNode *> T_CLOSE_P();
    antlr4::tree::TerminalNode* T_CLOSE_P(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *T_COLON();
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assignment_stmt_select_itemContext* assignment_stmt_select_item();

  class  Assignment_exprContext : public antlr4::ParserRuleContext {
  public:
    Assignment_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentContext *> ident();
    IdentContext* ident(size_t i);
    std::vector<Assignment_reserverd_wordsContext *> assignment_reserverd_words();
    Assignment_reserverd_wordsContext* assignment_reserverd_words(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_PERIOD();
    antlr4::tree::TerminalNode* T_PERIOD(size_t i);
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assignment_exprContext* assignment_expr();

  class  Assignment_reserverd_wordsContext : public antlr4::ParserRuleContext {
  public:
    Assignment_reserverd_wordsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_WINDOW();
    antlr4::tree::TerminalNode *T_FROM();
    antlr4::tree::TerminalNode *T_SET();
    antlr4::tree::TerminalNode *T_CHECK();
    antlr4::tree::TerminalNode *T_EXTERNAL();
    antlr4::tree::TerminalNode *T_TABLES();
    antlr4::tree::TerminalNode *T_TABLE();
    antlr4::tree::TerminalNode *T_LIMIT();
    antlr4::tree::TerminalNode *T_UNION();
    antlr4::tree::TerminalNode *T_BUCKET();
    antlr4::tree::TerminalNode *T_INTERVAL();
    antlr4::tree::TerminalNode *T_DISABLE();
    antlr4::tree::TerminalNode *T_REBUILD();
    antlr4::tree::TerminalNode *T_PERCENTS();
    antlr4::tree::TerminalNode *T_EXPORT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assignment_reserverd_wordsContext* assignment_reserverd_words();

  class  Allocate_cursor_stmtContext : public antlr4::ParserRuleContext {
  public:
    Allocate_cursor_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_ALLOCATE();
    std::vector<IdentContext *> ident();
    IdentContext* ident(size_t i);
    antlr4::tree::TerminalNode *T_CURSOR();
    antlr4::tree::TerminalNode *T_FOR();
    antlr4::tree::TerminalNode *T_PROCEDURE();
    antlr4::tree::TerminalNode *T_RESULT();
    antlr4::tree::TerminalNode *T_SET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Allocate_cursor_stmtContext* allocate_cursor_stmt();

  class  Associate_locator_stmtContext : public antlr4::ParserRuleContext {
  public:
    Associate_locator_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_ASSOCIATE();
    antlr4::tree::TerminalNode *T_OPEN_P();
    std::vector<IdentContext *> ident();
    IdentContext* ident(size_t i);
    antlr4::tree::TerminalNode *T_CLOSE_P();
    antlr4::tree::TerminalNode *T_WITH();
    antlr4::tree::TerminalNode *T_PROCEDURE();
    antlr4::tree::TerminalNode *T_LOCATOR();
    antlr4::tree::TerminalNode *T_LOCATORS();
    antlr4::tree::TerminalNode *T_RESULT();
    antlr4::tree::TerminalNode *T_SET();
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Associate_locator_stmtContext* associate_locator_stmt();

  class  Begin_transaction_stmtContext : public antlr4::ParserRuleContext {
  public:
    Begin_transaction_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_BEGIN();
    antlr4::tree::TerminalNode *T_TRANSACTION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Begin_transaction_stmtContext* begin_transaction_stmt();

  class  Abort_transactions_stmtContext : public antlr4::ParserRuleContext {
  public:
    Abort_transactions_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_ABORT();
    antlr4::tree::TerminalNode *T_TRANSACTIONS();
    std::vector<IdentContext *> ident();
    IdentContext* ident(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Abort_transactions_stmtContext* abort_transactions_stmt();

  class  Break_stmtContext : public antlr4::ParserRuleContext {
  public:
    Break_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_BREAK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Break_stmtContext* break_stmt();

  class  Call_stmtContext : public antlr4::ParserRuleContext {
  public:
    Call_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_CALL();
    IdentContext *ident();
    antlr4::tree::TerminalNode *T_OPEN_P();
    antlr4::tree::TerminalNode *T_CLOSE_P();
    Expr_func_paramsContext *expr_func_params();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Call_stmtContext* call_stmt();

  class  Declare_stmtContext : public antlr4::ParserRuleContext {
  public:
    Declare_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_DECLARE();
    std::vector<Declare_stmt_itemContext *> declare_stmt_item();
    Declare_stmt_itemContext* declare_stmt_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Declare_stmtContext* declare_stmt();

  class  Declare_blockContext : public antlr4::ParserRuleContext {
  public:
    Declare_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_DECLARE();
    std::vector<Declare_stmt_itemContext *> declare_stmt_item();
    Declare_stmt_itemContext* declare_stmt_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_SEMICOLON();
    antlr4::tree::TerminalNode* T_SEMICOLON(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Declare_blockContext* declare_block();

  class  Declare_block_inplaceContext : public antlr4::ParserRuleContext {
  public:
    Declare_block_inplaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Declare_stmt_itemContext *> declare_stmt_item();
    Declare_stmt_itemContext* declare_stmt_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_SEMICOLON();
    antlr4::tree::TerminalNode* T_SEMICOLON(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Declare_block_inplaceContext* declare_block_inplace();

  class  Declare_stmt_itemContext : public antlr4::ParserRuleContext {
  public:
    Declare_stmt_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Declare_cursor_itemContext *declare_cursor_item();
    Declare_condition_itemContext *declare_condition_item();
    Declare_handler_itemContext *declare_handler_item();
    Declare_var_itemContext *declare_var_item();
    Declare_temporary_table_itemContext *declare_temporary_table_item();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Declare_stmt_itemContext* declare_stmt_item();

  class  Declare_var_itemContext : public antlr4::ParserRuleContext {
  public:
    Declare_var_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentContext *> ident();
    IdentContext* ident(size_t i);
    DtypeContext *dtype();
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);
    antlr4::tree::TerminalNode *T_AS();
    std::vector<Dtype_attrContext *> dtype_attr();
    Dtype_attrContext* dtype_attr(size_t i);
    Dtype_defaultContext *dtype_default();
    antlr4::tree::TerminalNode *T_CONSTANT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Declare_var_itemContext* declare_var_item();

  class  Declare_condition_itemContext : public antlr4::ParserRuleContext {
  public:
    Declare_condition_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();
    antlr4::tree::TerminalNode *T_CONDITION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Declare_condition_itemContext* declare_condition_item();

  class  Declare_cursor_itemContext : public antlr4::ParserRuleContext {
  public:
    Declare_cursor_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_IS();
    antlr4::tree::TerminalNode *T_AS();
    antlr4::tree::TerminalNode *T_FOR();
    antlr4::tree::TerminalNode *T_CURSOR();
    IdentContext *ident();
    Select_stmtContext *select_stmt();
    ExprContext *expr();
    Cursor_with_returnContext *cursor_with_return();
    Cursor_without_returnContext *cursor_without_return();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Declare_cursor_itemContext* declare_cursor_item();

  class  Cursor_with_returnContext : public antlr4::ParserRuleContext {
  public:
    Cursor_with_returnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_WITH();
    antlr4::tree::TerminalNode *T_RETURN();
    antlr4::tree::TerminalNode *T_ONLY();
    antlr4::tree::TerminalNode *T_TO();
    antlr4::tree::TerminalNode *T_CALLER();
    antlr4::tree::TerminalNode *T_CLIENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cursor_with_returnContext* cursor_with_return();

  class  Cursor_without_returnContext : public antlr4::ParserRuleContext {
  public:
    Cursor_without_returnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_WITHOUT();
    antlr4::tree::TerminalNode *T_RETURN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cursor_without_returnContext* cursor_without_return();

  class  Declare_handler_itemContext : public antlr4::ParserRuleContext {
  public:
    Declare_handler_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_HANDLER();
    antlr4::tree::TerminalNode *T_FOR();
    Single_block_stmtContext *single_block_stmt();
    antlr4::tree::TerminalNode *T_CONTINUE();
    antlr4::tree::TerminalNode *T_EXIT();
    antlr4::tree::TerminalNode *T_SQLEXCEPTION();
    antlr4::tree::TerminalNode *T_SQLWARNING();
    antlr4::tree::TerminalNode *T_NOT();
    antlr4::tree::TerminalNode *T_FOUND();
    IdentContext *ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Declare_handler_itemContext* declare_handler_item();

  class  Declare_temporary_table_itemContext : public antlr4::ParserRuleContext {
  public:
    Declare_temporary_table_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_TEMPORARY();
    antlr4::tree::TerminalNode *T_TABLE();
    IdentContext *ident();
    Create_table_definitionContext *create_table_definition();
    antlr4::tree::TerminalNode *T_GLOBAL();
    Create_table_preoptionsContext *create_table_preoptions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Declare_temporary_table_itemContext* declare_temporary_table_item();

  class  Create_table_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_table_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_CREATE();
    antlr4::tree::TerminalNode *T_TABLE();
    Table_nameContext *table_name();
    Create_table_definitionContext *create_table_definition();
    antlr4::tree::TerminalNode *T_IF();
    antlr4::tree::TerminalNode *T_NOT();
    antlr4::tree::TerminalNode *T_EXISTS();
    antlr4::tree::TerminalNode *T_TEMPORARY();
    antlr4::tree::TerminalNode *T_EXTERNAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_table_stmtContext* create_table_stmt();

  class  Create_local_temp_table_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_local_temp_table_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_CREATE();
    antlr4::tree::TerminalNode *T_TABLE();
    IdentContext *ident();
    Create_table_definitionContext *create_table_definition();
    antlr4::tree::TerminalNode *T_LOCAL();
    antlr4::tree::TerminalNode *T_TEMPORARY();
    antlr4::tree::TerminalNode *T_VOLATILE();
    Create_table_preoptionsContext *create_table_preoptions();
    antlr4::tree::TerminalNode *T_SET();
    antlr4::tree::TerminalNode *T_MULTISET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_local_temp_table_stmtContext* create_local_temp_table_stmt();

  class  Create_table_definitionContext : public antlr4::ParserRuleContext {
  public:
    Create_table_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Create_table_optionsContext *create_table_options();
    antlr4::tree::TerminalNode *T_LIKE();
    Table_nameContext *table_name();
    Location_partContext *location_part();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_table_definitionContext* create_table_definition();

  class  Create_table_columnsContext : public antlr4::ParserRuleContext {
  public:
    Create_table_columnsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Create_table_columns_itemContext *> create_table_columns_item();
    Create_table_columns_itemContext* create_table_columns_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);
    Constraint_specificationContext *constraint_specification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_table_columnsContext* create_table_columns();

  class  Create_table_columns_itemContext : public antlr4::ParserRuleContext {
  public:
    Create_table_columns_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_nameContext *column_name();
    DtypeContext *dtype();
    Column_constrains_specificationContext *column_constrains_specification();
    Comment_partContext *comment_part();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_table_columns_itemContext* create_table_columns_item();

  class  Column_nameContext : public antlr4::ParserRuleContext {
  public:
    Column_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_nameContext* column_name();

  class  Old_column_nameContext : public antlr4::ParserRuleContext {
  public:
    Old_column_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Old_column_nameContext* old_column_name();

  class  New_column_nameContext : public antlr4::ParserRuleContext {
  public:
    New_column_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  New_column_nameContext* new_column_name();

  class  Constraint_specificationContext : public antlr4::ParserRuleContext {
  public:
    Constraint_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Constraint_specContext *> constraint_spec();
    Constraint_specContext* constraint_spec(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constraint_specificationContext* constraint_specification();

  class  Constraint_specContext : public antlr4::ParserRuleContext {
  public:
    Constraint_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_COMMA();
    antlr4::tree::TerminalNode *T_PRIMARY();
    antlr4::tree::TerminalNode *T_KEY();
    std::vector<Paren_column_listContext *> paren_column_list();
    Paren_column_listContext* paren_column_list(size_t i);
    antlr4::tree::TerminalNode *T_DISABLE();
    antlr4::tree::TerminalNode *T_NOVALIDATE();
    antlr4::tree::TerminalNode *T_RELY();
    antlr4::tree::TerminalNode *T_DIV_SIGN();
    antlr4::tree::TerminalNode *T_NORELY();
    antlr4::tree::TerminalNode *T_CONSTRAINT();
    Constraint_nameContext *constraint_name();
    antlr4::tree::TerminalNode *T_FOREIGN();
    antlr4::tree::TerminalNode *T_REFERENCES();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *T_UNIQUE();
    antlr4::tree::TerminalNode *T_CHECK();
    antlr4::tree::TerminalNode *T_ENABLE();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constraint_specContext* constraint_spec();

  class  Constraint_nameContext : public antlr4::ParserRuleContext {
  public:
    Constraint_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constraint_nameContext* constraint_name();

  class  Paren_column_listContext : public antlr4::ParserRuleContext {
  public:
    Paren_column_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_OPEN_P();
    Column_name_listContext *column_name_list();
    antlr4::tree::TerminalNode *T_CLOSE_P();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Paren_column_listContext* paren_column_list();

  class  Column_name_listContext : public antlr4::ParserRuleContext {
  public:
    Column_name_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Column_name_eleContext *> column_name_ele();
    Column_name_eleContext* column_name_ele(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_name_listContext* column_name_list();

  class  Column_name_eleContext : public antlr4::ParserRuleContext {
  public:
    Column_name_eleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_nameContext *column_name();
    DtypeContext *dtype();
    Comment_partContext *comment_part();
    antlr4::tree::TerminalNode *T_ASC();
    antlr4::tree::TerminalNode *T_DESC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_name_eleContext* column_name_ele();

  class  Paren_col_valuesContext : public antlr4::ParserRuleContext {
  public:
    Paren_col_valuesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_OPEN_P();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *T_CLOSE_P();
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Paren_col_valuesContext* paren_col_values();

  class  Column_constrains_specificationContext : public antlr4::ParserRuleContext {
  public:
    Column_constrains_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_PRIMARY();
    antlr4::tree::TerminalNode *T_KEY();
    antlr4::tree::TerminalNode *T_NULL();
    antlr4::tree::TerminalNode *T_NOT();
    antlr4::tree::TerminalNode *T_UNIQUE();
    antlr4::tree::TerminalNode *T_DEFAULT();
    Default_valueContext *default_value();
    antlr4::tree::TerminalNode *T_CHECK();
    antlr4::tree::TerminalNode *T_ENABLE();
    ExprContext *expr();
    antlr4::tree::TerminalNode *T_DISABLE();
    antlr4::tree::TerminalNode *T_NOVALIDATE();
    antlr4::tree::TerminalNode *T_RELY();
    antlr4::tree::TerminalNode *T_DIV_SIGN();
    antlr4::tree::TerminalNode *T_NORELY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_constrains_specificationContext* column_constrains_specification();

  class  Default_valueContext : public antlr4::ParserRuleContext {
  public:
    Default_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_LITERAL();
    antlr4::tree::TerminalNode *T_CURRENT_USER();
    antlr4::tree::TerminalNode *T_OPEN_P();
    antlr4::tree::TerminalNode *T_CLOSE_P();
    antlr4::tree::TerminalNode *T_CURRENT_DATE();
    antlr4::tree::TerminalNode *T_CURRENT_TIMESTAMP();
    antlr4::tree::TerminalNode *T_NULL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Default_valueContext* default_value();

  class  Create_table_column_commentContext : public antlr4::ParserRuleContext {
  public:
    Create_table_column_commentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_COMMENT();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_table_column_commentContext* create_table_column_comment();

  class  Create_table_column_consContext : public antlr4::ParserRuleContext {
  public:
    Create_table_column_consContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_PRIMARY();
    antlr4::tree::TerminalNode *T_KEY();
    std::vector<antlr4::tree::TerminalNode *> T_OPEN_P();
    antlr4::tree::TerminalNode* T_OPEN_P(size_t i);
    std::vector<IdentContext *> ident();
    IdentContext* ident(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_CLOSE_P();
    antlr4::tree::TerminalNode* T_CLOSE_P(size_t i);
    antlr4::tree::TerminalNode *T_CLUSTERED();
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);
    antlr4::tree::TerminalNode *T_ENABLE();
    Index_storage_clauseContext *index_storage_clause();
    std::vector<antlr4::tree::TerminalNode *> T_ASC();
    antlr4::tree::TerminalNode* T_ASC(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_DESC();
    antlr4::tree::TerminalNode* T_DESC(size_t i);
    antlr4::tree::TerminalNode *T_FOREIGN();
    antlr4::tree::TerminalNode *T_REFERENCES();
    Table_nameContext *table_name();
    std::vector<Create_table_fk_actionContext *> create_table_fk_action();
    Create_table_fk_actionContext* create_table_fk_action(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_table_column_consContext* create_table_column_cons();

  class  Create_table_fk_actionContext : public antlr4::ParserRuleContext {
  public:
    Create_table_fk_actionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_ON();
    antlr4::tree::TerminalNode *T_UPDATE();
    antlr4::tree::TerminalNode *T_DELETE();
    antlr4::tree::TerminalNode *T_NO();
    antlr4::tree::TerminalNode *T_ACTION();
    antlr4::tree::TerminalNode *T_RESTRICT();
    antlr4::tree::TerminalNode *T_SET();
    antlr4::tree::TerminalNode *T_NULL();
    antlr4::tree::TerminalNode *T_DEFAULT();
    antlr4::tree::TerminalNode *T_CASCADE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_table_fk_actionContext* create_table_fk_action();

  class  Create_table_preoptionsContext : public antlr4::ParserRuleContext {
  public:
    Create_table_preoptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Create_table_preoptions_itemContext *> create_table_preoptions_item();
    Create_table_preoptions_itemContext* create_table_preoptions_item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_table_preoptionsContext* create_table_preoptions();

  class  Create_table_preoptions_itemContext : public antlr4::ParserRuleContext {
  public:
    Create_table_preoptions_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_COMMA();
    Create_table_preoptions_td_itemContext *create_table_preoptions_td_item();
    Create_table_options_hive_itemContext *create_table_options_hive_item();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_table_preoptions_itemContext* create_table_preoptions_item();

  class  Create_table_preoptions_td_itemContext : public antlr4::ParserRuleContext {
  public:
    Create_table_preoptions_td_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_LOG();
    antlr4::tree::TerminalNode *T_FALLBACK();
    antlr4::tree::TerminalNode *T_NO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_table_preoptions_td_itemContext* create_table_preoptions_td_item();

  class  Create_table_optionsContext : public antlr4::ParserRuleContext {
  public:
    Create_table_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Create_table_optionContext *> create_table_option();
    Create_table_optionContext* create_table_option(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_table_optionsContext* create_table_options();

  class  Create_table_optionContext : public antlr4::ParserRuleContext {
  public:
    Create_table_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_OPEN_P();
    Create_table_columnsContext *create_table_columns();
    antlr4::tree::TerminalNode *T_CLOSE_P();
    Comment_partContext *comment_part();
    Partition_by_partContext *partition_by_part();
    Cluster_by_partContext *cluster_by_part();
    Skewed_by_partContext *skewed_by_part();
    antlr4::tree::TerminalNode *T_ON();
    Col_valuesContext *col_values();
    Stored_as_partContext *stored_as_part();
    Row_format_partContext *row_format_part();
    Location_partContext *location_part();
    Property_values_partContext *property_values_part();
    antlr4::tree::TerminalNode *T_AS();
    Select_stmtContext *select_stmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_table_optionContext* create_table_option();

  class  Partition_by_partContext : public antlr4::ParserRuleContext {
  public:
    Partition_by_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_PARTITIONED();
    antlr4::tree::TerminalNode *T_BY();
    Paren_column_listContext *paren_column_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Partition_by_partContext* partition_by_part();

  class  Cluster_by_partContext : public antlr4::ParserRuleContext {
  public:
    Cluster_by_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_CLUSTERED();
    std::vector<antlr4::tree::TerminalNode *> T_BY();
    antlr4::tree::TerminalNode* T_BY(size_t i);
    std::vector<Paren_column_listContext *> paren_column_list();
    Paren_column_listContext* paren_column_list(size_t i);
    antlr4::tree::TerminalNode *T_INTO();
    Int_numberContext *int_number();
    antlr4::tree::TerminalNode *T_BUCKETS();
    antlr4::tree::TerminalNode *T_SORTED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cluster_by_partContext* cluster_by_part();

  class  Skewed_by_partContext : public antlr4::ParserRuleContext {
  public:
    Skewed_by_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_SKEWED();
    antlr4::tree::TerminalNode *T_BY();
    Paren_column_listContext *paren_column_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Skewed_by_partContext* skewed_by_part();

  class  Col_valuesContext : public antlr4::ParserRuleContext {
  public:
    Col_valuesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Paren_col_valuesContext *> paren_col_values();
    Paren_col_valuesContext* paren_col_values(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Col_valuesContext* col_values();

  class  Stored_as_partContext : public antlr4::ParserRuleContext {
  public:
    Stored_as_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_STORED();
    antlr4::tree::TerminalNode *T_AS();
    antlr4::tree::TerminalNode *T_DIRECTORIES();
    File_formatContext *file_format();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Stored_as_partContext* stored_as_part();

  class  Row_format_partContext : public antlr4::ParserRuleContext {
  public:
    Row_format_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> T_ROW();
    antlr4::tree::TerminalNode* T_ROW(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_FORMAT();
    antlr4::tree::TerminalNode* T_FORMAT(size_t i);
    std::vector<Row_formatContext *> row_format();
    Row_formatContext* row_format(size_t i);
    std::vector<Stored_as_partContext *> stored_as_part();
    Stored_as_partContext* stored_as_part(size_t i);
    antlr4::tree::TerminalNode *T_STORED();
    antlr4::tree::TerminalNode *T_BY();
    ExprContext *expr();
    Property_valuesContext *property_values();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Row_format_partContext* row_format_part();

  class  File_formatContext : public antlr4::ParserRuleContext {
  public:
    File_formatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_SEQUENCEFILE();
    antlr4::tree::TerminalNode *T_TEXTFILE();
    antlr4::tree::TerminalNode *T_RCFILE();
    antlr4::tree::TerminalNode *T_ORC();
    antlr4::tree::TerminalNode *T_PARQUET();
    antlr4::tree::TerminalNode *T_AVRO();
    antlr4::tree::TerminalNode *T_JSONFILE();
    antlr4::tree::TerminalNode *T_INPUTFORMAT();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *T_OUTPUTFORMAT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  File_formatContext* file_format();

  class  Row_formatContext : public antlr4::ParserRuleContext {
  public:
    Row_formatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_DELIMITED();
    antlr4::tree::TerminalNode *T_FIELDS();
    Terminated_byContext *terminated_by();
    std::vector<Terminated_by_partContext *> terminated_by_part();
    Terminated_by_partContext* terminated_by_part(size_t i);
    antlr4::tree::TerminalNode *T_NULL();
    antlr4::tree::TerminalNode *T_DEFINED();
    antlr4::tree::TerminalNode *T_AS();
    std::vector<By_charContext *> by_char();
    By_charContext* by_char(size_t i);
    antlr4::tree::TerminalNode *T_ESCAPED();
    antlr4::tree::TerminalNode *T_BY();
    antlr4::tree::TerminalNode *T_SERDE();
    ExprContext *expr();
    Property_valuesContext *property_values();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Row_formatContext* row_format();

  class  Terminated_by_partContext : public antlr4::ParserRuleContext {
  public:
    Terminated_by_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Terminated_byContext *terminated_by();
    antlr4::tree::TerminalNode *T_COLLECTION();
    antlr4::tree::TerminalNode *T_ITEMS();
    antlr4::tree::TerminalNode *T_MAP();
    antlr4::tree::TerminalNode *T_KEYS();
    antlr4::tree::TerminalNode *T_LINES();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Terminated_by_partContext* terminated_by_part();

  class  Terminated_byContext : public antlr4::ParserRuleContext {
  public:
    Terminated_byContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_TERMINATED();
    antlr4::tree::TerminalNode *T_BY();
    By_charContext *by_char();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Terminated_byContext* terminated_by();

  class  By_charContext : public antlr4::ParserRuleContext {
  public:
    By_charContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  By_charContext* by_char();

  class  Create_table_options_hive_itemContext : public antlr4::ParserRuleContext {
  public:
    Create_table_options_hive_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Create_table_hive_row_formatContext *create_table_hive_row_format();
    antlr4::tree::TerminalNode *T_STORED();
    antlr4::tree::TerminalNode *T_AS();
    IdentContext *ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_table_options_hive_itemContext* create_table_options_hive_item();

  class  Create_table_hive_row_formatContext : public antlr4::ParserRuleContext {
  public:
    Create_table_hive_row_formatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_ROW();
    antlr4::tree::TerminalNode *T_FORMAT();
    antlr4::tree::TerminalNode *T_DELIMITED();
    std::vector<Create_table_hive_row_format_fieldsContext *> create_table_hive_row_format_fields();
    Create_table_hive_row_format_fieldsContext* create_table_hive_row_format_fields(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_table_hive_row_formatContext* create_table_hive_row_format();

  class  Create_table_hive_row_format_fieldsContext : public antlr4::ParserRuleContext {
  public:
    Create_table_hive_row_format_fieldsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_FIELDS();
    Terminated_byContext *terminated_by();
    antlr4::tree::TerminalNode *T_ESCAPED();
    antlr4::tree::TerminalNode *T_BY();
    ExprContext *expr();
    antlr4::tree::TerminalNode *T_COLLECTION();
    antlr4::tree::TerminalNode *T_ITEMS();
    antlr4::tree::TerminalNode *T_MAP();
    antlr4::tree::TerminalNode *T_KEYS();
    antlr4::tree::TerminalNode *T_LINES();
    antlr4::tree::TerminalNode *T_NULL();
    antlr4::tree::TerminalNode *T_DEFINED();
    antlr4::tree::TerminalNode *T_AS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_table_hive_row_format_fieldsContext* create_table_hive_row_format_fields();

  class  Create_table_options_mssql_itemContext : public antlr4::ParserRuleContext {
  public:
    Create_table_options_mssql_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_ON();
    IdentContext *ident();
    antlr4::tree::TerminalNode *T_TEXTIMAGE_ON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_table_options_mssql_itemContext* create_table_options_mssql_item();

  class  Create_view_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_view_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_CREATE();
    antlr4::tree::TerminalNode *T_VIEW();
    View_nameContext *view_name();
    antlr4::tree::TerminalNode *T_AS();
    Select_stmtContext *select_stmt();
    antlr4::tree::TerminalNode *T_IF();
    antlr4::tree::TerminalNode *T_NOT();
    antlr4::tree::TerminalNode *T_EXISTS();
    Create_view_optionsContext *create_view_options();
    Property_values_partContext *property_values_part();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_view_stmtContext* create_view_stmt();

  class  Create_view_optionsContext : public antlr4::ParserRuleContext {
  public:
    Create_view_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Paren_column_listContext *paren_column_list();
    Comment_partContext *comment_part();
    Create_view_optionContext *create_view_option();
    antlr4::tree::TerminalNode *T_DISABLE();
    antlr4::tree::TerminalNode *T_REWRITE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_view_optionsContext* create_view_options();

  class  Create_view_optionContext : public antlr4::ParserRuleContext {
  public:
    Create_view_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_PARTITIONED();
    std::vector<antlr4::tree::TerminalNode *> T_ON();
    antlr4::tree::TerminalNode* T_ON(size_t i);
    std::vector<Paren_column_listContext *> paren_column_list();
    Paren_column_listContext* paren_column_list(size_t i);
    antlr4::tree::TerminalNode *T_CLUSTERED();
    antlr4::tree::TerminalNode *T_DISTRIBUTED();
    antlr4::tree::TerminalNode *T_SORTED();
    Row_format_partContext *row_format_part();
    Location_partContext *location_part();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_view_optionContext* create_view_option();

  class  Create_macro_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_macro_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_CREATE();
    antlr4::tree::TerminalNode *T_TEMPORARY();
    antlr4::tree::TerminalNode *T_MACRO();
    IdentContext *ident();
    Paren_column_listContext *paren_column_list();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_macro_stmtContext* create_macro_stmt();

  class  Create_role_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_role_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_CREATE();
    antlr4::tree::TerminalNode *T_ROLE();
    Role_nameContext *role_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_role_stmtContext* create_role_stmt();

  class  Grant_revoke_role_stmtContext : public antlr4::ParserRuleContext {
  public:
    Grant_revoke_role_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_GRANT();
    antlr4::tree::TerminalNode *T_ROLE();
    Role_namesContext *role_names();
    antlr4::tree::TerminalNode *T_TO();
    Principal_specificationsContext *principal_specifications();
    With_option_forContext *with_option_for();
    antlr4::tree::TerminalNode *T_REVOKE();
    antlr4::tree::TerminalNode *T_FROM();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grant_revoke_role_stmtContext* grant_revoke_role_stmt();

  class  With_option_forContext : public antlr4::ParserRuleContext {
  public:
    With_option_forContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_ADMIN();
    antlr4::tree::TerminalNode *T_OPTION();
    antlr4::tree::TerminalNode *T_WITH();
    antlr4::tree::TerminalNode *T_FOR();
    antlr4::tree::TerminalNode *T_GRANT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  With_option_forContext* with_option_for();

  class  Role_nameContext : public antlr4::ParserRuleContext {
  public:
    Role_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Role_nameContext* role_name();

  class  Role_namesContext : public antlr4::ParserRuleContext {
  public:
    Role_namesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Role_nameContext *> role_name();
    Role_nameContext* role_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Role_namesContext* role_names();

  class  Grant_revoke_privilege_stmtContext : public antlr4::ParserRuleContext {
  public:
    Grant_revoke_privilege_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Privilege_columnsContext *privilege_columns();
    Principal_specificationsContext *principal_specifications();
    antlr4::tree::TerminalNode *T_GRANT();
    antlr4::tree::TerminalNode *T_REVOKE();
    antlr4::tree::TerminalNode *T_TO();
    antlr4::tree::TerminalNode *T_FROM();
    std::vector<With_option_forContext *> with_option_for();
    With_option_forContext* with_option_for(size_t i);
    antlr4::tree::TerminalNode *T_ON();
    Object_specificationContext *object_specification();
    antlr4::tree::TerminalNode *T_ALL();
    antlr4::tree::TerminalNode *T_PRIVILEGES();
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);
    std::vector<IdentContext *> ident();
    IdentContext* ident(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grant_revoke_privilege_stmtContext* grant_revoke_privilege_stmt();

  class  Privilege_columnsContext : public antlr4::ParserRuleContext {
  public:
    Privilege_columnsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Priv_typeContext *> priv_type();
    Priv_typeContext* priv_type(size_t i);
    std::vector<Paren_column_listContext *> paren_column_list();
    Paren_column_listContext* paren_column_list(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Privilege_columnsContext* privilege_columns();

  class  Priv_typeContext : public antlr4::ParserRuleContext {
  public:
    Priv_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_ALL();
    antlr4::tree::TerminalNode *T_ALTER();
    antlr4::tree::TerminalNode *T_UPDATE();
    antlr4::tree::TerminalNode *T_CREATE();
    antlr4::tree::TerminalNode *T_DROP();
    antlr4::tree::TerminalNode *T_INDEX();
    antlr4::tree::TerminalNode *T_LOCK();
    antlr4::tree::TerminalNode *T_SELECT();
    antlr4::tree::TerminalNode *T_SHOW_DATABASE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Priv_typeContext* priv_type();

  class  Object_specificationContext : public antlr4::ParserRuleContext {
  public:
    Object_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_TABLE();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *T_DATABASE();
    Db_nameContext *db_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Object_specificationContext* object_specification();

  class  Alter_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Alter_stmtContext() : antlr4::ParserRuleContext() { }
    void copyFrom(Alter_stmtContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Alter_indexContext : public Alter_stmtContext {
  public:
    Alter_indexContext(Alter_stmtContext *ctx);

    antlr4::tree::TerminalNode *T_ALTER();
    antlr4::tree::TerminalNode *T_INDEX();
    IdentContext *ident();
    antlr4::tree::TerminalNode *T_ON();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *T_REBUILD();
    Partition_assignment_listContext *partition_assignment_list();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Alter_materialized_viewContext : public Alter_stmtContext {
  public:
    Alter_materialized_viewContext(Alter_stmtContext *ctx);

    antlr4::tree::TerminalNode *T_ALTER();
    antlr4::tree::TerminalNode *T_MATERIALIZED();
    antlr4::tree::TerminalNode *T_VIEW();
    View_nameContext *view_name();
    antlr4::tree::TerminalNode *T_REWRITE();
    antlr4::tree::TerminalNode *T_ENABLE();
    antlr4::tree::TerminalNode *T_DISABLE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Alter_table_stmt_labelContext : public Alter_stmtContext {
  public:
    Alter_table_stmt_labelContext(Alter_stmtContext *ctx);

    Alter_table_stmtContext *alter_table_stmt();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Alter_db_schema_viewContext : public Alter_stmtContext {
  public:
    Alter_db_schema_viewContext(Alter_stmtContext *ctx);

    antlr4::Token *tk = nullptr;
    antlr4::tree::TerminalNode *T_ALTER();
    IdentContext *ident();
    antlr4::tree::TerminalNode *T_SET();
    Alter_optionContext *alter_option();
    antlr4::tree::TerminalNode *T_DATABASE();
    antlr4::tree::TerminalNode *T_SCHEMA();
    antlr4::tree::TerminalNode *T_VIEW();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Alter_stmtContext* alter_stmt();

  class  Alter_optionContext : public antlr4::ParserRuleContext {
  public:
    Alter_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Property_values_partContext *property_values_part();
    antlr4::tree::TerminalNode *T_OWNER();
    IdentContext *ident();
    antlr4::tree::TerminalNode *T_USER();
    antlr4::tree::TerminalNode *T_ROLE();
    Location_partContext *location_part();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_optionContext* alter_option();

  class  Alter_table_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_table_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_ALTER();
    antlr4::tree::TerminalNode *T_TABLE();
    Table_nameContext *table_name();
    Alter_table_item_optionsContext *alter_table_item_options();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_table_stmtContext* alter_table_stmt();

  class  Alter_table_item_optionsContext : public antlr4::ParserRuleContext {
  public:
    Alter_table_item_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Alter_table_propertiesContext *alter_table_properties();
    Alter_table_partition_propertiesContext *alter_table_partition_properties();
    Alter_table_or_partition_optionsContext *alter_table_or_partition_options();
    Alter_table_column_propertiesContext *alter_table_column_properties();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_table_item_optionsContext* alter_table_item_options();

  class  Alter_table_propertiesContext : public antlr4::ParserRuleContext {
  public:
    Alter_table_propertiesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_RENAME();
    antlr4::tree::TerminalNode *T_TO();
    New_table_nameContext *new_table_name();
    Set_tblpropertiesContext *set_tblproperties();
    Add_serde_propertiesContext *add_serde_properties();
    Table_storage_propertiesContext *table_storage_properties();
    Table_skewed_propertiesContext *table_skewed_properties();
    Table_constraintsContext *table_constraints();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_table_propertiesContext* alter_table_properties();

  class  Set_tblpropertiesContext : public antlr4::ParserRuleContext {
  public:
    Set_tblpropertiesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_SET();
    antlr4::tree::TerminalNode *T_TBLPROPERTIES();
    Property_values_partContext *property_values_part();
    antlr4::tree::TerminalNode *T_OPEN_P();
    Assignment_stmt_single_itemContext *assignment_stmt_single_item();
    antlr4::tree::TerminalNode *T_CLOSE_P();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Set_tblpropertiesContext* set_tblproperties();

  class  Add_serde_propertiesContext : public antlr4::ParserRuleContext {
  public:
    Add_serde_propertiesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_SET();
    Property_values_partContext *property_values_part();
    antlr4::tree::TerminalNode *T_SERDE();
    IdentContext *ident();
    Partition_assignment_listContext *partition_assignment_list();
    Property_valuesContext *property_values();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Add_serde_propertiesContext* add_serde_properties();

  class  Table_storage_propertiesContext : public antlr4::ParserRuleContext {
  public:
    Table_storage_propertiesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_CLUSTERED();
    std::vector<antlr4::tree::TerminalNode *> T_BY();
    antlr4::tree::TerminalNode* T_BY(size_t i);
    std::vector<Paren_column_listContext *> paren_column_list();
    Paren_column_listContext* paren_column_list(size_t i);
    antlr4::tree::TerminalNode *T_INTO();
    IdentContext *ident();
    antlr4::tree::TerminalNode *T_BUCKETS();
    antlr4::tree::TerminalNode *T_SORTED();
    antlr4::tree::TerminalNode *T_NOT();
    Stored_as_partContext *stored_as_part();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_storage_propertiesContext* table_storage_properties();

  class  Table_skewed_propertiesContext : public antlr4::ParserRuleContext {
  public:
    Table_skewed_propertiesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_SKEWED();
    antlr4::tree::TerminalNode *T_BY();
    std::vector<Paren_column_listContext *> paren_column_list();
    Paren_column_listContext* paren_column_list(size_t i);
    antlr4::tree::TerminalNode *T_ON();
    Stored_as_partContext *stored_as_part();
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);
    antlr4::tree::TerminalNode *T_NOT();
    antlr4::tree::TerminalNode *T_SET();
    antlr4::tree::TerminalNode *T_LOCATION();
    antlr4::tree::TerminalNode *T_OPEN_P();
    std::vector<Assignment_stmt_single_itemContext *> assignment_stmt_single_item();
    Assignment_stmt_single_itemContext* assignment_stmt_single_item(size_t i);
    antlr4::tree::TerminalNode *T_CLOSE_P();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_skewed_propertiesContext* table_skewed_properties();

  class  Table_constraintsContext : public antlr4::ParserRuleContext {
  public:
    Table_constraintsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Add_constraint_propertyContext *add_constraint_property();
    Change_column_propertyContext *change_column_property();
    Drop_constraint_propertyContext *drop_constraint_property();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_constraintsContext* table_constraints();

  class  Add_constraint_propertyContext : public antlr4::ParserRuleContext {
  public:
    Add_constraint_propertyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_ADD();
    antlr4::tree::TerminalNode *T_CONSTRAINT();
    Constraint_nameContext *constraint_name();
    antlr4::tree::TerminalNode *T_PRIMARY();
    antlr4::tree::TerminalNode *T_KEY();
    std::vector<Paren_column_listContext *> paren_column_list();
    Paren_column_listContext* paren_column_list(size_t i);
    antlr4::tree::TerminalNode *T_DISABLE();
    antlr4::tree::TerminalNode *T_NOVALIDATE();
    antlr4::tree::TerminalNode *T_FOREIGN();
    antlr4::tree::TerminalNode *T_REFERENCES();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *T_RELY();
    antlr4::tree::TerminalNode *T_UNIQUE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Add_constraint_propertyContext* add_constraint_property();

  class  Change_column_propertyContext : public antlr4::ParserRuleContext {
  public:
    Change_column_propertyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_CHANGE();
    antlr4::tree::TerminalNode *T_COLUMN();
    std::vector<Column_nameContext *> column_name();
    Column_nameContext* column_name(size_t i);
    DtypeContext *dtype();
    antlr4::tree::TerminalNode *T_CONSTRAINT();
    Constraint_nameContext *constraint_name();
    antlr4::tree::TerminalNode *T_NOT();
    antlr4::tree::TerminalNode *T_NULL();
    antlr4::tree::TerminalNode *T_ENABLE();
    antlr4::tree::TerminalNode *T_DEFAULT();
    Default_valueContext *default_value();
    antlr4::tree::TerminalNode *T_CHECK();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Change_column_propertyContext* change_column_property();

  class  Drop_constraint_propertyContext : public antlr4::ParserRuleContext {
  public:
    Drop_constraint_propertyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_DROP();
    antlr4::tree::TerminalNode *T_CONSTRAINT();
    Constraint_nameContext *constraint_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_constraint_propertyContext* drop_constraint_property();

  class  New_table_nameContext : public antlr4::ParserRuleContext {
  public:
    New_table_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  New_table_nameContext* new_table_name();

  class  Alter_table_partition_propertiesContext : public antlr4::ParserRuleContext {
  public:
    Alter_table_partition_propertiesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Add_partition_propertyContext *add_partition_property();
    std::vector<Partition_assignment_listContext *> partition_assignment_list();
    Partition_assignment_listContext* partition_assignment_list(size_t i);
    antlr4::tree::TerminalNode *T_RENAME();
    antlr4::tree::TerminalNode *T_TO();
    antlr4::tree::TerminalNode *T_EXCHANGE();
    antlr4::tree::TerminalNode *T_PARTITION();
    antlr4::tree::TerminalNode *T_OPEN_P();
    std::vector<Partition_specContext *> partition_spec();
    Partition_specContext* partition_spec(size_t i);
    antlr4::tree::TerminalNode *T_CLOSE_P();
    antlr4::tree::TerminalNode *T_WITH();
    antlr4::tree::TerminalNode *T_TABLE();
    Table_nameContext *table_name();
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);
    Recover_partition_propertyContext *recover_partition_property();
    Drop_partition_propertyContext *drop_partition_property();
    Archive_partition_propertyContext *archive_partition_property();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_table_partition_propertiesContext* alter_table_partition_properties();

  class  Add_partition_propertyContext : public antlr4::ParserRuleContext {
  public:
    Add_partition_propertyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_ADD();
    Add_partition_property_optionsContext *add_partition_property_options();
    antlr4::tree::TerminalNode *T_IF();
    antlr4::tree::TerminalNode *T_NOT();
    antlr4::tree::TerminalNode *T_EXISTS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Add_partition_propertyContext* add_partition_property();

  class  Add_partition_property_optionsContext : public antlr4::ParserRuleContext {
  public:
    Add_partition_property_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Add_partition_property_optionContext *> add_partition_property_option();
    Add_partition_property_optionContext* add_partition_property_option(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Add_partition_property_optionsContext* add_partition_property_options();

  class  Add_partition_property_optionContext : public antlr4::ParserRuleContext {
  public:
    Add_partition_property_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Partition_assignment_listContext *partition_assignment_list();
    antlr4::tree::TerminalNode *T_LOCATION();
    IdentContext *ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Add_partition_property_optionContext* add_partition_property_option();

  class  Recover_partition_propertyContext : public antlr4::ParserRuleContext {
  public:
    Recover_partition_propertyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_RECOVER();
    antlr4::tree::TerminalNode *T_PARTITIONS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Recover_partition_propertyContext* recover_partition_property();

  class  Drop_partition_propertyContext : public antlr4::ParserRuleContext {
  public:
    Drop_partition_propertyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_DROP();
    std::vector<Partition_assignment_listContext *> partition_assignment_list();
    Partition_assignment_listContext* partition_assignment_list(size_t i);
    antlr4::tree::TerminalNode *T_IF();
    antlr4::tree::TerminalNode *T_EXISTS();
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);
    antlr4::tree::TerminalNode *T_IGNORE();
    antlr4::tree::TerminalNode *T_PROTECTION();
    antlr4::tree::TerminalNode *T_PURGE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_partition_propertyContext* drop_partition_property();

  class  Archive_partition_propertyContext : public antlr4::ParserRuleContext {
  public:
    Archive_partition_propertyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Partition_assignment_listContext *partition_assignment_list();
    antlr4::tree::TerminalNode *T_ARCHIVE();
    antlr4::tree::TerminalNode *T_UNARCHIVE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Archive_partition_propertyContext* archive_partition_property();

  class  Alter_table_or_partition_optionsContext : public antlr4::ParserRuleContext {
  public:
    Alter_table_or_partition_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_SET();
    antlr4::tree::TerminalNode *T_FILEFORMAT();
    antlr4::tree::TerminalNode *T_LOCATION();
    File_formatContext *file_format();
    IdentContext *ident();
    Partition_assignment_listContext *partition_assignment_list();
    antlr4::tree::TerminalNode *T_TOUCH();
    antlr4::tree::TerminalNode *T_ENABLE();
    antlr4::tree::TerminalNode *T_DISABLE();
    antlr4::tree::TerminalNode *T_OFFLINE();
    antlr4::tree::TerminalNode *T_NO_DROP();
    antlr4::tree::TerminalNode *T_CASCADE();
    antlr4::tree::TerminalNode *T_COMPACT();
    antlr4::tree::TerminalNode *T_AND();
    antlr4::tree::TerminalNode *T_WAIT();
    Property_valuesContext *property_values();
    antlr4::tree::TerminalNode *T_CONCATENATE();
    antlr4::tree::TerminalNode *T_UPDATE();
    antlr4::tree::TerminalNode *T_COLUMNS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_table_or_partition_optionsContext* alter_table_or_partition_options();

  class  Alter_table_column_propertiesContext : public antlr4::ParserRuleContext {
  public:
    Alter_table_column_propertiesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_CHANGE();
    Old_column_nameContext *old_column_name();
    New_column_nameContext *new_column_name();
    DtypeContext *dtype();
    Comment_partContext *comment_part();
    Partition_assignment_listContext *partition_assignment_list();
    antlr4::tree::TerminalNode *T_COLUMN();
    antlr4::tree::TerminalNode *T_FIRST();
    antlr4::tree::TerminalNode *T_AFTER();
    Column_nameContext *column_name();
    antlr4::tree::TerminalNode *T_CASCADE();
    antlr4::tree::TerminalNode *T_RESTRICT();
    antlr4::tree::TerminalNode *T_COLUMNS();
    Paren_column_listContext *paren_column_list();
    antlr4::tree::TerminalNode *T_ADD();
    antlr4::tree::TerminalNode *T_REPLACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_table_column_propertiesContext* alter_table_column_properties();

  class  Show_stmtContext : public antlr4::ParserRuleContext {
  public:
    Show_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_SHOW();
    antlr4::tree::TerminalNode *T_DATABASES();
    antlr4::tree::TerminalNode *T_SCHEMAS();
    antlr4::tree::TerminalNode *T_LIKE();
    ExprContext *expr();
    antlr4::tree::TerminalNode *T_TABLES();
    std::vector<antlr4::tree::TerminalNode *> T_IN();
    antlr4::tree::TerminalNode* T_IN(size_t i);
    std::vector<IdentContext *> ident();
    IdentContext* ident(size_t i);
    antlr4::tree::TerminalNode *T_VIEWS();
    antlr4::tree::TerminalNode *T_MATERIALIZED();
    std::vector<antlr4::tree::TerminalNode *> T_FROM();
    antlr4::tree::TerminalNode* T_FROM(size_t i);
    antlr4::tree::TerminalNode *T_PARTITIONS();
    Table_nameContext *table_name();
    Partition_assignment_listContext *partition_assignment_list();
    antlr4::tree::TerminalNode *T_TABLE();
    antlr4::tree::TerminalNode *T_EXTENDED();
    antlr4::tree::TerminalNode *T_TBLPROPERTIES();
    Paren_column_listContext *paren_column_list();
    antlr4::tree::TerminalNode *T_CREATE();
    antlr4::tree::TerminalNode *T_ON();
    antlr4::tree::TerminalNode *T_INDEX();
    antlr4::tree::TerminalNode *T_INDEXES();
    antlr4::tree::TerminalNode *T_FORMATTED();
    antlr4::tree::TerminalNode *T_COLUMNS();
    antlr4::tree::TerminalNode *T_FUNCTIONS();
    antlr4::tree::TerminalNode *T_GRANT();
    Principal_specificationContext *principal_specification();
    Object_specificationContext *object_specification();
    antlr4::tree::TerminalNode *T_ROLE();
    antlr4::tree::TerminalNode *T_ROLES();
    antlr4::tree::TerminalNode *T_CURRENT();
    antlr4::tree::TerminalNode *T_PRINCIPALS();
    antlr4::tree::TerminalNode *T_LOCKS();
    antlr4::tree::TerminalNode *T_DATABASE();
    antlr4::tree::TerminalNode *T_SCHEMA();
    antlr4::tree::TerminalNode *T_CONF();
    antlr4::tree::TerminalNode *T_LESS();
    antlr4::tree::TerminalNode *T_GREATER();
    antlr4::tree::TerminalNode *T_TRANSACTIONS();
    antlr4::tree::TerminalNode *T_COMPACTIONS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Show_stmtContext* show_stmt();

  class  Principal_specificationContext : public antlr4::ParserRuleContext {
  public:
    Principal_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();
    antlr4::tree::TerminalNode *T_USER();
    antlr4::tree::TerminalNode *T_ROLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Principal_specificationContext* principal_specification();

  class  Principal_specificationsContext : public antlr4::ParserRuleContext {
  public:
    Principal_specificationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Principal_specificationContext *> principal_specification();
    Principal_specificationContext* principal_specification(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Principal_specificationsContext* principal_specifications();

  class  Import_stmtContext : public antlr4::ParserRuleContext {
  public:
    Import_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_IMPORT();
    antlr4::tree::TerminalNode *T_FROM();
    antlr4::tree::TerminalNode *L_S_STRING();
    antlr4::tree::TerminalNode *T_TABLE();
    Table_nameContext *table_name();
    Location_partContext *location_part();
    antlr4::tree::TerminalNode *T_EXTERNAL();
    Partition_assignment_listContext *partition_assignment_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Import_stmtContext* import_stmt();

  class  Export_stmtContext : public antlr4::ParserRuleContext {
  public:
    Export_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_EXPORT();
    antlr4::tree::TerminalNode *T_TABLE();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *T_TO();
    antlr4::tree::TerminalNode *L_S_STRING();
    Partition_assignment_listContext *partition_assignment_list();
    antlr4::tree::TerminalNode *T_FOR();
    Expr_funcContext *expr_func();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Export_stmtContext* export_stmt();

  class  Explain_stmtContext : public antlr4::ParserRuleContext {
  public:
    Explain_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_EXPLAIN();
    StmtContext *stmt();
    antlr4::tree::TerminalNode *T_EXTENDED();
    antlr4::tree::TerminalNode *T_CBO();
    antlr4::tree::TerminalNode *T_AST();
    antlr4::tree::TerminalNode *T_DEPENDENCY();
    antlr4::tree::TerminalNode *T_AUTHORIZATION();
    antlr4::tree::TerminalNode *T_LOCKS();
    antlr4::tree::TerminalNode *T_VECTORIZATION();
    antlr4::tree::TerminalNode *T_ANALYZE();
    antlr4::tree::TerminalNode *T_FORMATTED();
    antlr4::tree::TerminalNode *T_ONLY();
    antlr4::tree::TerminalNode *T_COST();
    antlr4::tree::TerminalNode *T_JOINCOST();
    antlr4::tree::TerminalNode *T_SUMMARY();
    antlr4::tree::TerminalNode *T_OPERATOR();
    antlr4::tree::TerminalNode *T_EXPRESSION();
    antlr4::tree::TerminalNode *T_DETAIL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Explain_stmtContext* explain_stmt();

  class  DtypeContext : public antlr4::ParserRuleContext {
  public:
    DtypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_typeContext *data_type();
    Dtype_lenContext *dtype_len();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DtypeContext* dtype();

  class  Data_typeContext : public antlr4::ParserRuleContext {
  public:
    Data_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Primitive_typeContext *primitive_type();
    Array_typeContext *array_type();
    Map_typeContext *map_type();
    Struct_typeContext *struct_type();
    Union_typeContext *union_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Data_typeContext* data_type();

  class  Primitive_typeContext : public antlr4::ParserRuleContext {
  public:
    Primitive_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_TINYINT();
    antlr4::tree::TerminalNode *T_SMALLINT();
    antlr4::tree::TerminalNode *T_INT();
    antlr4::tree::TerminalNode *T_BIGINT();
    antlr4::tree::TerminalNode *T_BOOLEAN();
    antlr4::tree::TerminalNode *T_FLOAT();
    antlr4::tree::TerminalNode *T_DOUBLE();
    antlr4::tree::TerminalNode *T_PRECISION();
    antlr4::tree::TerminalNode *T_STRING();
    antlr4::tree::TerminalNode *T_BINARY();
    antlr4::tree::TerminalNode *T_TIMESTAMP();
    antlr4::tree::TerminalNode *T_WITH();
    antlr4::tree::TerminalNode *T_LOCAL();
    antlr4::tree::TerminalNode *T_TIME();
    antlr4::tree::TerminalNode *T_ZONE();
    antlr4::tree::TerminalNode *T_DECIMAL();
    antlr4::tree::TerminalNode *T_OPEN_P();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *T_COMMA();
    antlr4::tree::TerminalNode *T_CLOSE_P();
    antlr4::tree::TerminalNode *T_DATE();
    antlr4::tree::TerminalNode *T_VARCHAR();
    antlr4::tree::TerminalNode *T_CHAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Primitive_typeContext* primitive_type();

  class  Array_typeContext : public antlr4::ParserRuleContext {
  public:
    Array_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_ARRAY();
    antlr4::tree::TerminalNode *T_LESS();
    DtypeContext *dtype();
    antlr4::tree::TerminalNode *T_GREATER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Array_typeContext* array_type();

  class  Map_typeContext : public antlr4::ParserRuleContext {
  public:
    Map_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_MAP();
    antlr4::tree::TerminalNode *T_LESS();
    Primitive_typeContext *primitive_type();
    antlr4::tree::TerminalNode *T_COMMA();
    DtypeContext *dtype();
    antlr4::tree::TerminalNode *T_GREATER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Map_typeContext* map_type();

  class  Struct_typeContext : public antlr4::ParserRuleContext {
  public:
    Struct_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_STRUCT();
    antlr4::tree::TerminalNode *T_LESS();
    std::vector<Struct_type_typeContext *> struct_type_type();
    Struct_type_typeContext* struct_type_type(size_t i);
    antlr4::tree::TerminalNode *T_GREATER();
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Struct_typeContext* struct_type();

  class  Struct_type_typeContext : public antlr4::ParserRuleContext {
  public:
    Struct_type_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_nameContext *column_name();
    antlr4::tree::TerminalNode *T_COLON();
    DtypeContext *dtype();
    Comment_partContext *comment_part();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Struct_type_typeContext* struct_type_type();

  class  Union_typeContext : public antlr4::ParserRuleContext {
  public:
    Union_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_UNIONTYPE();
    antlr4::tree::TerminalNode *T_LESS();
    std::vector<DtypeContext *> dtype();
    DtypeContext* dtype(size_t i);
    antlr4::tree::TerminalNode *T_GREATER();
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Union_typeContext* union_type();

  class  Dtype_lenContext : public antlr4::ParserRuleContext {
  public:
    Dtype_lenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_OPEN_P();
    antlr4::tree::TerminalNode *T_CLOSE_P();
    std::vector<antlr4::tree::TerminalNode *> L_INT();
    antlr4::tree::TerminalNode* L_INT(size_t i);
    antlr4::tree::TerminalNode *T_MAX();
    antlr4::tree::TerminalNode *T_COMMA();
    antlr4::tree::TerminalNode *T_CHAR();
    antlr4::tree::TerminalNode *T_BYTE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dtype_lenContext* dtype_len();

  class  Dtype_attrContext : public antlr4::ParserRuleContext {
  public:
    Dtype_attrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_NULL();
    antlr4::tree::TerminalNode *T_NOT();
    antlr4::tree::TerminalNode *T_CHARACTER();
    antlr4::tree::TerminalNode *T_SET();
    IdentContext *ident();
    antlr4::tree::TerminalNode *T_CASESPECIFIC();
    antlr4::tree::TerminalNode *T_CS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dtype_attrContext* dtype_attr();

  class  Dtype_defaultContext : public antlr4::ParserRuleContext {
  public:
    Dtype_defaultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_EQUAL();
    ExprContext *expr();
    antlr4::tree::TerminalNode *T_COLON();
    antlr4::tree::TerminalNode *T_DEFAULT();
    antlr4::tree::TerminalNode *T_WITH();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dtype_defaultContext* dtype_default();

  class  Create_database_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_database_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_CREATE();
    IdentContext *ident();
    Create_database_optionContext *create_database_option();
    antlr4::tree::TerminalNode *T_DATABASE();
    antlr4::tree::TerminalNode *T_SCHEMA();
    antlr4::tree::TerminalNode *T_IF();
    antlr4::tree::TerminalNode *T_NOT();
    antlr4::tree::TerminalNode *T_EXISTS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_database_stmtContext* create_database_stmt();

  class  Create_database_optionContext : public antlr4::ParserRuleContext {
  public:
    Create_database_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Comment_partContext *comment_part();
    Location_partContext *location_part();
    Property_valuesContext *property_values();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_database_optionContext* create_database_option();

  class  Comment_partContext : public antlr4::ParserRuleContext {
  public:
    Comment_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_COMMENT();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Comment_partContext* comment_part();

  class  Location_partContext : public antlr4::ParserRuleContext {
  public:
    Location_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_LOCATION();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Location_partContext* location_part();

  class  Property_valuesContext : public antlr4::ParserRuleContext {
  public:
    Property_valuesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_WITH();
    Property_values_partContext *property_values_part();
    antlr4::tree::TerminalNode *T_OVERWRITE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Property_valuesContext* property_values();

  class  Property_values_partContext : public antlr4::ParserRuleContext {
  public:
    Property_values_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_OPEN_P();
    std::vector<Assignment_stmt_single_itemContext *> assignment_stmt_single_item();
    Assignment_stmt_single_itemContext* assignment_stmt_single_item(size_t i);
    antlr4::tree::TerminalNode *T_CLOSE_P();
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);
    antlr4::tree::TerminalNode *T_DBPROPERTIES();
    antlr4::tree::TerminalNode *T_TBLPROPERTIES();
    antlr4::tree::TerminalNode *T_IDXPROPERTIES();
    antlr4::tree::TerminalNode *T_SERDEPROPERTIES();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Property_values_partContext* property_values_part();

  class  Create_function_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_function_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Create_temporary_functionContext *create_temporary_function();
    Create_permanent_functionContext *create_permanent_function();
    Create_function_procedureContext *create_function_procedure();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_function_stmtContext* create_function_stmt();

  class  Create_function_procedureContext : public antlr4::ParserRuleContext {
  public:
    Create_function_procedureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_FUNCTION();
    IdentContext *ident();
    Create_function_returnContext *create_function_return();
    Single_block_stmtContext *single_block_stmt();
    antlr4::tree::TerminalNode *T_ALTER();
    antlr4::tree::TerminalNode *T_CREATE();
    antlr4::tree::TerminalNode *T_REPLACE();
    Create_routine_paramsContext *create_routine_params();
    Declare_block_inplaceContext *declare_block_inplace();
    antlr4::tree::TerminalNode *T_AS();
    antlr4::tree::TerminalNode *T_IS();
    antlr4::tree::TerminalNode *T_OR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_function_procedureContext* create_function_procedure();

  class  Create_temporary_functionContext : public antlr4::ParserRuleContext {
  public:
    Create_temporary_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_CREATE();
    antlr4::tree::TerminalNode *T_TEMPORARY();
    antlr4::tree::TerminalNode *T_FUNCTION();
    IdentContext *ident();
    antlr4::tree::TerminalNode *T_AS();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_temporary_functionContext* create_temporary_function();

  class  Create_permanent_functionContext : public antlr4::ParserRuleContext {
  public:
    Create_permanent_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_CREATE();
    antlr4::tree::TerminalNode *T_FUNCTION();
    IdentContext *ident();
    antlr4::tree::TerminalNode *T_AS();
    ExprContext *expr();
    Permanent_function_optionsContext *permanent_function_options();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_permanent_functionContext* create_permanent_function();

  class  Permanent_function_optionsContext : public antlr4::ParserRuleContext {
  public:
    Permanent_function_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Permanent_function_optionContext *> permanent_function_option();
    Permanent_function_optionContext* permanent_function_option(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Permanent_function_optionsContext* permanent_function_options();

  class  Permanent_function_optionContext : public antlr4::ParserRuleContext {
  public:
    Permanent_function_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_USING();
    IdentContext *ident();
    antlr4::tree::TerminalNode *T_JAR();
    antlr4::tree::TerminalNode *T_FILE();
    antlr4::tree::TerminalNode *T_ARCHIVE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Permanent_function_optionContext* permanent_function_option();

  class  Reload_functionContext : public antlr4::ParserRuleContext {
  public:
    Reload_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_RELOAD();
    antlr4::tree::TerminalNode *T_FUNCTIONS();
    antlr4::tree::TerminalNode *T_FUNCTION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Reload_functionContext* reload_function();

  class  Create_function_returnContext : public antlr4::ParserRuleContext {
  public:
    Create_function_returnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DtypeContext *dtype();
    antlr4::tree::TerminalNode *T_RETURN();
    antlr4::tree::TerminalNode *T_RETURNS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_function_returnContext* create_function_return();

  class  Create_package_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_package_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_PACKAGE();
    std::vector<IdentContext *> ident();
    IdentContext* ident(size_t i);
    Package_specContext *package_spec();
    antlr4::tree::TerminalNode *T_END();
    antlr4::tree::TerminalNode *T_AS();
    antlr4::tree::TerminalNode *T_IS();
    antlr4::tree::TerminalNode *T_ALTER();
    antlr4::tree::TerminalNode *T_CREATE();
    antlr4::tree::TerminalNode *T_REPLACE();
    antlr4::tree::TerminalNode *T_SEMICOLON();
    antlr4::tree::TerminalNode *T_OR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_package_stmtContext* create_package_stmt();

  class  Package_specContext : public antlr4::ParserRuleContext {
  public:
    Package_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Package_spec_itemContext *> package_spec_item();
    Package_spec_itemContext* package_spec_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_SEMICOLON();
    antlr4::tree::TerminalNode* T_SEMICOLON(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Package_specContext* package_spec();

  class  Package_spec_itemContext : public antlr4::ParserRuleContext {
  public:
    Package_spec_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Declare_stmt_itemContext *declare_stmt_item();
    antlr4::tree::TerminalNode *T_FUNCTION();
    IdentContext *ident();
    Create_function_returnContext *create_function_return();
    Create_routine_paramsContext *create_routine_params();
    antlr4::tree::TerminalNode *T_PROCEDURE();
    antlr4::tree::TerminalNode *T_PROC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Package_spec_itemContext* package_spec_item();

  class  Create_package_body_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_package_body_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_PACKAGE();
    antlr4::tree::TerminalNode *T_BODY();
    std::vector<IdentContext *> ident();
    IdentContext* ident(size_t i);
    Package_bodyContext *package_body();
    antlr4::tree::TerminalNode *T_END();
    antlr4::tree::TerminalNode *T_AS();
    antlr4::tree::TerminalNode *T_IS();
    antlr4::tree::TerminalNode *T_ALTER();
    antlr4::tree::TerminalNode *T_CREATE();
    antlr4::tree::TerminalNode *T_REPLACE();
    antlr4::tree::TerminalNode *T_SEMICOLON();
    antlr4::tree::TerminalNode *T_OR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_package_body_stmtContext* create_package_body_stmt();

  class  Package_bodyContext : public antlr4::ParserRuleContext {
  public:
    Package_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Package_body_itemContext *> package_body_item();
    Package_body_itemContext* package_body_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_SEMICOLON();
    antlr4::tree::TerminalNode* T_SEMICOLON(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Package_bodyContext* package_body();

  class  Package_body_itemContext : public antlr4::ParserRuleContext {
  public:
    Package_body_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Declare_stmt_itemContext *declare_stmt_item();
    Create_function_stmtContext *create_function_stmt();
    Create_procedure_stmtContext *create_procedure_stmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Package_body_itemContext* package_body_item();

  class  Create_procedure_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_procedure_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentContext *> ident();
    IdentContext* ident(size_t i);
    Proc_blockContext *proc_block();
    antlr4::tree::TerminalNode *T_PROCEDURE();
    antlr4::tree::TerminalNode *T_PROC();
    antlr4::tree::TerminalNode *T_ALTER();
    antlr4::tree::TerminalNode *T_CREATE();
    antlr4::tree::TerminalNode *T_REPLACE();
    Create_routine_paramsContext *create_routine_params();
    Create_routine_optionsContext *create_routine_options();
    Declare_block_inplaceContext *declare_block_inplace();
    LabelContext *label();
    antlr4::tree::TerminalNode *T_SEMICOLON();
    antlr4::tree::TerminalNode *T_AS();
    antlr4::tree::TerminalNode *T_IS();
    antlr4::tree::TerminalNode *T_OR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_procedure_stmtContext* create_procedure_stmt();

  class  Create_routine_paramsContext : public antlr4::ParserRuleContext {
  public:
    Create_routine_paramsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_OPEN_P();
    antlr4::tree::TerminalNode *T_CLOSE_P();
    std::vector<Create_routine_param_itemContext *> create_routine_param_item();
    Create_routine_param_itemContext* create_routine_param_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_routine_paramsContext* create_routine_params();

  class  Create_routine_param_itemContext : public antlr4::ParserRuleContext {
  public:
    Create_routine_param_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();
    DtypeContext *dtype();
    antlr4::tree::TerminalNode *T_IN();
    antlr4::tree::TerminalNode *T_OUT();
    antlr4::tree::TerminalNode *T_INOUT();
    std::vector<Dtype_attrContext *> dtype_attr();
    Dtype_attrContext* dtype_attr(size_t i);
    Dtype_defaultContext *dtype_default();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_routine_param_itemContext* create_routine_param_item();

  class  Create_routine_optionsContext : public antlr4::ParserRuleContext {
  public:
    Create_routine_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Create_routine_optionContext *> create_routine_option();
    Create_routine_optionContext* create_routine_option(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_routine_optionsContext* create_routine_options();

  class  Create_routine_optionContext : public antlr4::ParserRuleContext {
  public:
    Create_routine_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_LANGUAGE();
    antlr4::tree::TerminalNode *T_SQL();
    antlr4::tree::TerminalNode *T_SECURITY();
    antlr4::tree::TerminalNode *T_CREATOR();
    antlr4::tree::TerminalNode *T_DEFINER();
    antlr4::tree::TerminalNode *T_INVOKER();
    antlr4::tree::TerminalNode *T_OWNER();
    antlr4::tree::TerminalNode *T_RESULT();
    antlr4::tree::TerminalNode *T_SETS();
    Int_numberContext *int_number();
    antlr4::tree::TerminalNode *T_DYNAMIC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_routine_optionContext* create_routine_option();

  class  Drop_stmtContext : public antlr4::ParserRuleContext {
  public:
    Drop_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Drop_stmtContext() : antlr4::ParserRuleContext() { }
    void copyFrom(Drop_stmtContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Drop_table_view_role_index_stmtContext : public Drop_stmtContext {
  public:
    Drop_table_view_role_index_stmtContext(Drop_stmtContext *ctx);

    antlr4::Token *tk = nullptr;
    antlr4::tree::TerminalNode *T_DROP();
    IdentContext *ident();
    antlr4::tree::TerminalNode *T_TABLE();
    antlr4::tree::TerminalNode *T_VIEW();
    antlr4::tree::TerminalNode *T_INDEX();
    antlr4::tree::TerminalNode *T_ROLE();
    antlr4::tree::TerminalNode *T_MATERIALIZED();
    antlr4::tree::TerminalNode *T_IF();
    antlr4::tree::TerminalNode *T_EXISTS();
    antlr4::tree::TerminalNode *T_PURGE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Drop_db_schema_stmtContext : public Drop_stmtContext {
  public:
    Drop_db_schema_stmtContext(Drop_stmtContext *ctx);

    antlr4::tree::TerminalNode *T_DROP();
    IdentContext *ident();
    antlr4::tree::TerminalNode *T_DATABASE();
    antlr4::tree::TerminalNode *T_SCHEMA();
    antlr4::tree::TerminalNode *T_IF();
    antlr4::tree::TerminalNode *T_EXISTS();
    antlr4::tree::TerminalNode *T_RESTRICT();
    antlr4::tree::TerminalNode *T_CASCADE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Drop_macro_func_stmtContext : public Drop_stmtContext {
  public:
    Drop_macro_func_stmtContext(Drop_stmtContext *ctx);

    antlr4::Token *tk = nullptr;
    antlr4::tree::TerminalNode *T_DROP();
    IdentContext *ident();
    antlr4::tree::TerminalNode *T_MACRO();
    antlr4::tree::TerminalNode *T_FUNCTION();
    antlr4::tree::TerminalNode *T_TEMPORARY();
    antlr4::tree::TerminalNode *T_IF();
    antlr4::tree::TerminalNode *T_EXISTS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Drop_stmtContext* drop_stmt();

  class  End_transaction_stmtContext : public antlr4::ParserRuleContext {
  public:
    End_transaction_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_END();
    antlr4::tree::TerminalNode *T_TRANSACTION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  End_transaction_stmtContext* end_transaction_stmt();

  class  Exec_stmtContext : public antlr4::ParserRuleContext {
  public:
    Exec_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    antlr4::tree::TerminalNode *T_EXEC();
    antlr4::tree::TerminalNode *T_EXECUTE();
    antlr4::tree::TerminalNode *T_IMMEDIATE();
    antlr4::tree::TerminalNode *T_OPEN_P();
    Expr_func_paramsContext *expr_func_params();
    antlr4::tree::TerminalNode *T_CLOSE_P();
    antlr4::tree::TerminalNode *T_INTO();
    std::vector<antlr4::tree::TerminalNode *> L_ID();
    antlr4::tree::TerminalNode* L_ID(size_t i);
    Using_clauseContext *using_clause();
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Exec_stmtContext* exec_stmt();

  class  If_stmtContext : public antlr4::ParserRuleContext {
  public:
    If_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    If_plsql_stmtContext *if_plsql_stmt();
    If_tsql_stmtContext *if_tsql_stmt();
    If_bteq_stmtContext *if_bteq_stmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_stmtContext* if_stmt();

  class  If_plsql_stmtContext : public antlr4::ParserRuleContext {
  public:
    If_plsql_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> T_IF();
    antlr4::tree::TerminalNode* T_IF(size_t i);
    Bool_exprContext *bool_expr();
    antlr4::tree::TerminalNode *T_THEN();
    BlockContext *block();
    antlr4::tree::TerminalNode *T_END();
    std::vector<Elseif_blockContext *> elseif_block();
    Elseif_blockContext* elseif_block(size_t i);
    Else_blockContext *else_block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_plsql_stmtContext* if_plsql_stmt();

  class  If_tsql_stmtContext : public antlr4::ParserRuleContext {
  public:
    If_tsql_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_IF();
    Bool_exprContext *bool_expr();
    std::vector<Single_block_stmtContext *> single_block_stmt();
    Single_block_stmtContext* single_block_stmt(size_t i);
    antlr4::tree::TerminalNode *T_ELSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_tsql_stmtContext* if_tsql_stmt();

  class  If_bteq_stmtContext : public antlr4::ParserRuleContext {
  public:
    If_bteq_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_PERIOD();
    antlr4::tree::TerminalNode *T_IF();
    Bool_exprContext *bool_expr();
    antlr4::tree::TerminalNode *T_THEN();
    Single_block_stmtContext *single_block_stmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_bteq_stmtContext* if_bteq_stmt();

  class  Elseif_blockContext : public antlr4::ParserRuleContext {
  public:
    Elseif_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Bool_exprContext *bool_expr();
    antlr4::tree::TerminalNode *T_THEN();
    BlockContext *block();
    antlr4::tree::TerminalNode *T_ELSIF();
    antlr4::tree::TerminalNode *T_ELSEIF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Elseif_blockContext* elseif_block();

  class  Else_blockContext : public antlr4::ParserRuleContext {
  public:
    Else_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_ELSE();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Else_blockContext* else_block();

  class  Include_stmtContext : public antlr4::ParserRuleContext {
  public:
    Include_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_INCLUDE();
    File_nameContext *file_name();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Include_stmtContext* include_stmt();

  class  Load_file_stmtContext : public antlr4::ParserRuleContext {
  public:
    Load_file_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_LOAD();
    antlr4::tree::TerminalNode *T_DATA();
    antlr4::tree::TerminalNode *T_INPATH();
    StringContext *string();
    antlr4::tree::TerminalNode *T_INTO();
    antlr4::tree::TerminalNode *T_TABLE();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *T_LOCAL();
    antlr4::tree::TerminalNode *T_OVERWRITE();
    Partition_assignment_listContext *partition_assignment_list();
    antlr4::tree::TerminalNode *T_INPUTFORMAT();
    std::vector<antlr4::tree::TerminalNode *> L_S_STRING();
    antlr4::tree::TerminalNode* L_S_STRING(size_t i);
    antlr4::tree::TerminalNode *T_SERDE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Load_file_stmtContext* load_file_stmt();

  class  Insert_stmtContext : public antlr4::ParserRuleContext {
  public:
    Insert_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Insert_into_table_from_sqlContext *insert_into_table_from_sql();
    Insert_into_tables_from_queryContext *insert_into_tables_from_query();
    Insert_into_files_from_queryContext *insert_into_files_from_query();
    Insert_into_mutiplesContext *insert_into_mutiples();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Insert_stmtContext* insert_stmt();

  class  Insert_into_table_from_sqlContext : public antlr4::ParserRuleContext {
  public:
    Insert_into_table_from_sqlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_INSERT();
    antlr4::tree::TerminalNode *T_INTO();
    antlr4::tree::TerminalNode *T_TABLE();
    Table_nameContext *table_name();
    Insert_stmt_rowsContext *insert_stmt_rows();
    Partition_assignment_listContext *partition_assignment_list();
    Insert_stmt_colsContext *insert_stmt_cols();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Insert_into_table_from_sqlContext* insert_into_table_from_sql();

  class  Insert_into_tables_from_queryContext : public antlr4::ParserRuleContext {
  public:
    Insert_into_tables_from_queryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Insert_tables_overwrite_intoContext *insert_tables_overwrite_into();
    From_clauseContext *from_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Insert_into_tables_from_queryContext* insert_into_tables_from_query();

  class  Insert_tables_overwrite_intoContext : public antlr4::ParserRuleContext {
  public:
    Insert_tables_overwrite_intoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_INSERT();
    antlr4::tree::TerminalNode *T_TABLE();
    Table_nameContext *table_name();
    Select_stmtContext *select_stmt();
    antlr4::tree::TerminalNode *T_OVERWRITE();
    antlr4::tree::TerminalNode *T_INTO();
    Partition_assignment_listContext *partition_assignment_list();
    antlr4::tree::TerminalNode *T_IF();
    antlr4::tree::TerminalNode *T_NOT();
    antlr4::tree::TerminalNode *T_EXISTS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Insert_tables_overwrite_intoContext* insert_tables_overwrite_into();

  class  Insert_into_files_from_queryContext : public antlr4::ParserRuleContext {
  public:
    Insert_into_files_from_queryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Insert_directory_stmtContext *insert_directory_stmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Insert_into_files_from_queryContext* insert_into_files_from_query();

  class  Insert_into_mutiplesContext : public antlr4::ParserRuleContext {
  public:
    Insert_into_mutiplesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    From_clauseContext *from_clause();
    std::vector<Insert_tables_overwrite_intoContext *> insert_tables_overwrite_into();
    Insert_tables_overwrite_intoContext* insert_tables_overwrite_into(size_t i);
    std::vector<Insert_directory_stmtContext *> insert_directory_stmt();
    Insert_directory_stmtContext* insert_directory_stmt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Insert_into_mutiplesContext* insert_into_mutiples();

  class  Insert_stmt_colsContext : public antlr4::ParserRuleContext {
  public:
    Insert_stmt_colsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_OPEN_P();
    std::vector<IdentContext *> ident();
    IdentContext* ident(size_t i);
    antlr4::tree::TerminalNode *T_CLOSE_P();
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Insert_stmt_colsContext* insert_stmt_cols();

  class  Insert_stmt_rowsContext : public antlr4::ParserRuleContext {
  public:
    Insert_stmt_rowsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_VALUES();
    std::vector<Insert_stmt_rowContext *> insert_stmt_row();
    Insert_stmt_rowContext* insert_stmt_row(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Insert_stmt_rowsContext* insert_stmt_rows();

  class  Insert_stmt_rowContext : public antlr4::ParserRuleContext {
  public:
    Insert_stmt_rowContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_OPEN_P();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *T_CLOSE_P();
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Insert_stmt_rowContext* insert_stmt_row();

  class  Insert_directory_stmtContext : public antlr4::ParserRuleContext {
  public:
    Insert_directory_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_INSERT();
    antlr4::tree::TerminalNode *T_OVERWRITE();
    antlr4::tree::TerminalNode *T_DIRECTORY();
    Expr_fileContext *expr_file();
    Expr_selectContext *expr_select();
    antlr4::tree::TerminalNode *T_LOCAL();
    Row_format_partContext *row_format_part();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Insert_directory_stmtContext* insert_directory_stmt();

  class  Exit_stmtContext : public antlr4::ParserRuleContext {
  public:
    Exit_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_EXIT();
    antlr4::tree::TerminalNode *L_ID();
    antlr4::tree::TerminalNode *T_WHEN();
    Bool_exprContext *bool_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Exit_stmtContext* exit_stmt();

  class  Get_diag_stmtContext : public antlr4::ParserRuleContext {
  public:
    Get_diag_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_GET();
    antlr4::tree::TerminalNode *T_DIAGNOSTICS();
    Get_diag_stmt_itemContext *get_diag_stmt_item();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Get_diag_stmtContext* get_diag_stmt();

  class  Get_diag_stmt_itemContext : public antlr4::ParserRuleContext {
  public:
    Get_diag_stmt_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Get_diag_stmt_exception_itemContext *get_diag_stmt_exception_item();
    Get_diag_stmt_rowcount_itemContext *get_diag_stmt_rowcount_item();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Get_diag_stmt_itemContext* get_diag_stmt_item();

  class  Get_diag_stmt_exception_itemContext : public antlr4::ParserRuleContext {
  public:
    Get_diag_stmt_exception_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_EXCEPTION();
    Int_numberContext *int_number();
    IdentContext *ident();
    antlr4::tree::TerminalNode *T_EQUAL();
    antlr4::tree::TerminalNode *T_MESSAGE_TEXT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Get_diag_stmt_exception_itemContext* get_diag_stmt_exception_item();

  class  Get_diag_stmt_rowcount_itemContext : public antlr4::ParserRuleContext {
  public:
    Get_diag_stmt_rowcount_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();
    antlr4::tree::TerminalNode *T_EQUAL();
    antlr4::tree::TerminalNode *T_ROW_COUNT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Get_diag_stmt_rowcount_itemContext* get_diag_stmt_rowcount_item();

  class  Leave_stmtContext : public antlr4::ParserRuleContext {
  public:
    Leave_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_LEAVE();
    antlr4::tree::TerminalNode *L_ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Leave_stmtContext* leave_stmt();

  class  Map_object_stmtContext : public antlr4::ParserRuleContext {
  public:
    Map_object_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_MAP();
    antlr4::tree::TerminalNode *T_OBJECT();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *T_TO();
    antlr4::tree::TerminalNode *T_AT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Map_object_stmtContext* map_object_stmt();

  class  Open_stmtContext : public antlr4::ParserRuleContext {
  public:
    Open_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_OPEN();
    antlr4::tree::TerminalNode *L_ID();
    antlr4::tree::TerminalNode *T_FOR();
    Select_stmtContext *select_stmt();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Open_stmtContext* open_stmt();

  class  Fetch_stmtContext : public antlr4::ParserRuleContext {
  public:
    Fetch_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_FETCH();
    std::vector<antlr4::tree::TerminalNode *> L_ID();
    antlr4::tree::TerminalNode* L_ID(size_t i);
    antlr4::tree::TerminalNode *T_INTO();
    antlr4::tree::TerminalNode *T_FROM();
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fetch_stmtContext* fetch_stmt();

  class  Collect_stats_stmtContext : public antlr4::ParserRuleContext {
  public:
    Collect_stats_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_COLLECT();
    antlr4::tree::TerminalNode *T_ON();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *T_STATISTICS();
    antlr4::tree::TerminalNode *T_STATS();
    Collect_stats_clauseContext *collect_stats_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Collect_stats_stmtContext* collect_stats_stmt();

  class  Collect_stats_clauseContext : public antlr4::ParserRuleContext {
  public:
    Collect_stats_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_COLUMN();
    antlr4::tree::TerminalNode *T_OPEN_P();
    std::vector<IdentContext *> ident();
    IdentContext* ident(size_t i);
    antlr4::tree::TerminalNode *T_CLOSE_P();
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Collect_stats_clauseContext* collect_stats_clause();

  class  Close_stmtContext : public antlr4::ParserRuleContext {
  public:
    Close_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_CLOSE();
    antlr4::tree::TerminalNode *L_ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Close_stmtContext* close_stmt();

  class  Cmp_stmtContext : public antlr4::ParserRuleContext {
  public:
    Cmp_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_CMP();
    std::vector<Cmp_sourceContext *> cmp_source();
    Cmp_sourceContext* cmp_source(size_t i);
    antlr4::tree::TerminalNode *T_COMMA();
    antlr4::tree::TerminalNode *T_ROW_COUNT();
    antlr4::tree::TerminalNode *T_SUM();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cmp_stmtContext* cmp_stmt();

  class  Cmp_sourceContext : public antlr4::ParserRuleContext {
  public:
    Cmp_sourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *T_OPEN_P();
    Select_stmtContext *select_stmt();
    antlr4::tree::TerminalNode *T_CLOSE_P();
    antlr4::tree::TerminalNode *T_AT();
    IdentContext *ident();
    Where_clauseContext *where_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cmp_sourceContext* cmp_source();

  class  Copy_from_local_stmtContext : public antlr4::ParserRuleContext {
  public:
    Copy_from_local_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_COPY();
    antlr4::tree::TerminalNode *T_FROM();
    antlr4::tree::TerminalNode *T_LOCAL();
    std::vector<Copy_sourceContext *> copy_source();
    Copy_sourceContext* copy_source(size_t i);
    antlr4::tree::TerminalNode *T_TO();
    Copy_targetContext *copy_target();
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);
    std::vector<Copy_file_optionContext *> copy_file_option();
    Copy_file_optionContext* copy_file_option(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Copy_from_local_stmtContext* copy_from_local_stmt();

  class  Copy_stmtContext : public antlr4::ParserRuleContext {
  public:
    Copy_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_COPY();
    antlr4::tree::TerminalNode *T_TO();
    Copy_targetContext *copy_target();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *T_OPEN_P();
    Select_stmtContext *select_stmt();
    antlr4::tree::TerminalNode *T_CLOSE_P();
    antlr4::tree::TerminalNode *T_HDFS();
    std::vector<Copy_optionContext *> copy_option();
    Copy_optionContext* copy_option(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Copy_stmtContext* copy_stmt();

  class  Copy_sourceContext : public antlr4::ParserRuleContext {
  public:
    Copy_sourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    File_nameContext *file_name();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Copy_sourceContext* copy_source();

  class  Copy_targetContext : public antlr4::ParserRuleContext {
  public:
    Copy_targetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    File_nameContext *file_name();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Copy_targetContext* copy_target();

  class  Copy_optionContext : public antlr4::ParserRuleContext {
  public:
    Copy_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_AT();
    IdentContext *ident();
    antlr4::tree::TerminalNode *T_BATCHSIZE();
    ExprContext *expr();
    antlr4::tree::TerminalNode *T_DELIMITER();
    antlr4::tree::TerminalNode *T_SQLINSERT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Copy_optionContext* copy_option();

  class  Copy_file_optionContext : public antlr4::ParserRuleContext {
  public:
    Copy_file_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_DELETE();
    antlr4::tree::TerminalNode *T_IGNORE();
    antlr4::tree::TerminalNode *T_OVERWRITE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Copy_file_optionContext* copy_file_option();

  class  Commit_stmtContext : public antlr4::ParserRuleContext {
  public:
    Commit_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_COMMIT();
    antlr4::tree::TerminalNode *T_WORK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Commit_stmtContext* commit_stmt();

  class  Create_index_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_index_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_CREATE();
    antlr4::tree::TerminalNode *T_INDEX();
    IdentContext *ident();
    antlr4::tree::TerminalNode *T_ON();
    std::vector<antlr4::tree::TerminalNode *> T_TABLE();
    antlr4::tree::TerminalNode* T_TABLE(size_t i);
    std::vector<Table_nameContext *> table_name();
    Table_nameContext* table_name(size_t i);
    Paren_column_listContext *paren_column_list();
    antlr4::tree::TerminalNode *T_AS();
    DtypeContext *dtype();
    antlr4::tree::TerminalNode *T_WITH();
    antlr4::tree::TerminalNode *T_DEFERRED();
    antlr4::tree::TerminalNode *T_REBUILD();
    std::vector<Property_values_partContext *> property_values_part();
    Property_values_partContext* property_values_part(size_t i);
    antlr4::tree::TerminalNode *T_IN();
    Row_format_partContext *row_format_part();
    Location_partContext *location_part();
    Comment_partContext *comment_part();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_index_stmtContext* create_index_stmt();

  class  Create_index_colContext : public antlr4::ParserRuleContext {
  public:
    Create_index_colContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();
    antlr4::tree::TerminalNode *T_ASC();
    antlr4::tree::TerminalNode *T_DESC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_index_colContext* create_index_col();

  class  Index_storage_clauseContext : public antlr4::ParserRuleContext {
  public:
    Index_storage_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Index_mssql_storage_clauseContext *index_mssql_storage_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Index_storage_clauseContext* index_storage_clause();

  class  Index_mssql_storage_clauseContext : public antlr4::ParserRuleContext {
  public:
    Index_mssql_storage_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_WITH();
    antlr4::tree::TerminalNode *T_OPEN_P();
    std::vector<IdentContext *> ident();
    IdentContext* ident(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_EQUAL();
    antlr4::tree::TerminalNode* T_EQUAL(size_t i);
    antlr4::tree::TerminalNode *T_CLOSE_P();
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);
    std::vector<Create_table_options_mssql_itemContext *> create_table_options_mssql_item();
    Create_table_options_mssql_itemContext* create_table_options_mssql_item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Index_mssql_storage_clauseContext* index_mssql_storage_clause();

  class  Print_stmtContext : public antlr4::ParserRuleContext {
  public:
    Print_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_PRINT();
    ExprContext *expr();
    antlr4::tree::TerminalNode *T_OPEN_P();
    antlr4::tree::TerminalNode *T_CLOSE_P();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Print_stmtContext* print_stmt();

  class  Quit_stmtContext : public antlr4::ParserRuleContext {
  public:
    Quit_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_QUIT();
    antlr4::tree::TerminalNode *T_PERIOD();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Quit_stmtContext* quit_stmt();

  class  Raise_stmtContext : public antlr4::ParserRuleContext {
  public:
    Raise_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_RAISE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Raise_stmtContext* raise_stmt();

  class  Resignal_stmtContext : public antlr4::ParserRuleContext {
  public:
    Resignal_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_RESIGNAL();
    antlr4::tree::TerminalNode *T_SQLSTATE();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *T_VALUE();
    antlr4::tree::TerminalNode *T_SET();
    antlr4::tree::TerminalNode *T_MESSAGE_TEXT();
    antlr4::tree::TerminalNode *T_EQUAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Resignal_stmtContext* resignal_stmt();

  class  Return_stmtContext : public antlr4::ParserRuleContext {
  public:
    Return_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_RETURN();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Return_stmtContext* return_stmt();

  class  Rollback_stmtContext : public antlr4::ParserRuleContext {
  public:
    Rollback_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_ROLLBACK();
    antlr4::tree::TerminalNode *T_WORK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rollback_stmtContext* rollback_stmt();

  class  Set_session_optionContext : public antlr4::ParserRuleContext {
  public:
    Set_session_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Set_current_schema_optionContext *set_current_schema_option();
    Set_mssql_session_optionContext *set_mssql_session_option();
    Set_teradata_session_optionContext *set_teradata_session_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Set_session_optionContext* set_session_option();

  class  Set_current_schema_optionContext : public antlr4::ParserRuleContext {
  public:
    Set_current_schema_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    antlr4::tree::TerminalNode *T_CURRENT_SCHEMA();
    antlr4::tree::TerminalNode *T_EQUAL();
    antlr4::tree::TerminalNode *T_SCHEMA();
    antlr4::tree::TerminalNode *T_CURRENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Set_current_schema_optionContext* set_current_schema_option();

  class  Set_mssql_session_optionContext : public antlr4::ParserRuleContext {
  public:
    Set_mssql_session_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_ANSI_NULLS();
    antlr4::tree::TerminalNode *T_ANSI_PADDING();
    antlr4::tree::TerminalNode *T_NOCOUNT();
    antlr4::tree::TerminalNode *T_QUOTED_IDENTIFIER();
    antlr4::tree::TerminalNode *T_XACT_ABORT();
    antlr4::tree::TerminalNode *T_ON();
    antlr4::tree::TerminalNode *T_OFF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Set_mssql_session_optionContext* set_mssql_session_option();

  class  Set_teradata_session_optionContext : public antlr4::ParserRuleContext {
  public:
    Set_teradata_session_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_QUERY_BAND();
    antlr4::tree::TerminalNode *T_EQUAL();
    antlr4::tree::TerminalNode *T_FOR();
    antlr4::tree::TerminalNode *T_TRANSACTION();
    antlr4::tree::TerminalNode *T_SESSION();
    ExprContext *expr();
    antlr4::tree::TerminalNode *T_NONE();
    antlr4::tree::TerminalNode *T_UPDATE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Set_teradata_session_optionContext* set_teradata_session_option();

  class  Signal_stmtContext : public antlr4::ParserRuleContext {
  public:
    Signal_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_SIGNAL();
    IdentContext *ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Signal_stmtContext* signal_stmt();

  class  Summary_stmtContext : public antlr4::ParserRuleContext {
  public:
    Summary_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_SUMMARY();
    antlr4::tree::TerminalNode *T_FOR();
    Select_stmtContext *select_stmt();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *T_TOP();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    Where_clauseContext *where_clause();
    antlr4::tree::TerminalNode *T_LIMIT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Summary_stmtContext* summary_stmt();

  class  Truncate_table_stmtContext : public antlr4::ParserRuleContext {
  public:
    Truncate_table_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_TRUNCATE();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *T_TABLE();
    Partition_assignment_listContext *partition_assignment_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Truncate_table_stmtContext* truncate_table_stmt();

  class  Partition_assignment_listContext : public antlr4::ParserRuleContext {
  public:
    Partition_assignment_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_PARTITION();
    Partition_specContext *partition_spec();
    antlr4::tree::TerminalNode *T_OPEN_P();
    antlr4::tree::TerminalNode *T_CLOSE_P();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Partition_assignment_listContext* partition_assignment_list();

  class  Partition_specContext : public antlr4::ParserRuleContext {
  public:
    Partition_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_OPEN_P();
    std::vector<Assignment_stmt_single_itemContext *> assignment_stmt_single_item();
    Assignment_stmt_single_itemContext* assignment_stmt_single_item(size_t i);
    antlr4::tree::TerminalNode *T_CLOSE_P();
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Partition_specContext* partition_spec();

  class  Use_stmtContext : public antlr4::ParserRuleContext {
  public:
    Use_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_USE();
    ExprContext *expr();
    antlr4::tree::TerminalNode *T_DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Use_stmtContext* use_stmt();

  class  Values_into_stmtContext : public antlr4::ParserRuleContext {
  public:
    Values_into_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_VALUES();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *T_INTO();
    std::vector<IdentContext *> ident();
    IdentContext* ident(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_OPEN_P();
    antlr4::tree::TerminalNode* T_OPEN_P(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_CLOSE_P();
    antlr4::tree::TerminalNode* T_CLOSE_P(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Values_into_stmtContext* values_into_stmt();

  class  While_stmtContext : public antlr4::ParserRuleContext {
  public:
    While_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> T_WHILE();
    antlr4::tree::TerminalNode* T_WHILE(size_t i);
    Bool_exprContext *bool_expr();
    BlockContext *block();
    antlr4::tree::TerminalNode *T_END();
    antlr4::tree::TerminalNode *T_DO();
    std::vector<antlr4::tree::TerminalNode *> T_LOOP();
    antlr4::tree::TerminalNode* T_LOOP(size_t i);
    antlr4::tree::TerminalNode *T_THEN();
    antlr4::tree::TerminalNode *T_BEGIN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  While_stmtContext* while_stmt();

  class  For_cursor_stmtContext : public antlr4::ParserRuleContext {
  public:
    For_cursor_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_FOR();
    antlr4::tree::TerminalNode *L_ID();
    antlr4::tree::TerminalNode *T_IN();
    Select_stmtContext *select_stmt();
    std::vector<antlr4::tree::TerminalNode *> T_LOOP();
    antlr4::tree::TerminalNode* T_LOOP(size_t i);
    BlockContext *block();
    antlr4::tree::TerminalNode *T_END();
    antlr4::tree::TerminalNode *T_OPEN_P();
    antlr4::tree::TerminalNode *T_CLOSE_P();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  For_cursor_stmtContext* for_cursor_stmt();

  class  For_range_stmtContext : public antlr4::ParserRuleContext {
  public:
    For_range_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_FOR();
    antlr4::tree::TerminalNode *L_ID();
    antlr4::tree::TerminalNode *T_IN();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *T_DOT2();
    std::vector<antlr4::tree::TerminalNode *> T_LOOP();
    antlr4::tree::TerminalNode* T_LOOP(size_t i);
    BlockContext *block();
    antlr4::tree::TerminalNode *T_END();
    antlr4::tree::TerminalNode *T_REVERSE();
    antlr4::tree::TerminalNode *T_BY();
    antlr4::tree::TerminalNode *T_STEP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  For_range_stmtContext* for_range_stmt();

  class  LabelContext : public antlr4::ParserRuleContext {
  public:
    LabelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Label_patternContext *label_pattern();
    std::vector<antlr4::tree::TerminalNode *> T_LESS();
    antlr4::tree::TerminalNode* T_LESS(size_t i);
    antlr4::tree::TerminalNode *L_ID();
    std::vector<antlr4::tree::TerminalNode *> T_GREATER();
    antlr4::tree::TerminalNode* T_GREATER(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LabelContext* label();

  class  Label_patternContext : public antlr4::ParserRuleContext {
  public:
    Label_patternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> L_ALPHA();
    antlr4::tree::TerminalNode* L_ALPHA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> L_DIGIT();
    antlr4::tree::TerminalNode* L_DIGIT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Label_patternContext* label_pattern();

  class  Using_clauseContext : public antlr4::ParserRuleContext {
  public:
    Using_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_USING();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Using_clauseContext* using_clause();

  class  Select_stmtContext : public antlr4::ParserRuleContext {
  public:
    Select_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fullselect_stmtContext *fullselect_stmt();
    Cte_select_stmtContext *cte_select_stmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_stmtContext* select_stmt();

  class  Cte_select_stmtContext : public antlr4::ParserRuleContext {
  public:
    Cte_select_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_WITH();
    std::vector<Common_table_expressionContext *> common_table_expression();
    Common_table_expressionContext* common_table_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cte_select_stmtContext* cte_select_stmt();

  class  Common_table_expressionContext : public antlr4::ParserRuleContext {
  public:
    Common_table_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();
    antlr4::tree::TerminalNode *T_AS();
    antlr4::tree::TerminalNode *T_OPEN_P();
    Fullselect_stmtContext *fullselect_stmt();
    antlr4::tree::TerminalNode *T_CLOSE_P();
    Cte_select_colsContext *cte_select_cols();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Common_table_expressionContext* common_table_expression();

  class  Cte_select_colsContext : public antlr4::ParserRuleContext {
  public:
    Cte_select_colsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_OPEN_P();
    std::vector<IdentContext *> ident();
    IdentContext* ident(size_t i);
    antlr4::tree::TerminalNode *T_CLOSE_P();
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cte_select_colsContext* cte_select_cols();

  class  Fullselect_stmtContext : public antlr4::ParserRuleContext {
  public:
    Fullselect_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Fullselect_stmt_itemContext *> fullselect_stmt_item();
    Fullselect_stmt_itemContext* fullselect_stmt_item(size_t i);
    std::vector<Fullselect_set_clauseContext *> fullselect_set_clause();
    Fullselect_set_clauseContext* fullselect_set_clause(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fullselect_stmtContext* fullselect_stmt();

  class  Fullselect_stmt_itemContext : public antlr4::ParserRuleContext {
  public:
    Fullselect_stmt_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Subselect_stmtContext *subselect_stmt();
    antlr4::tree::TerminalNode *T_OPEN_P();
    Fullselect_stmtContext *fullselect_stmt();
    antlr4::tree::TerminalNode *T_CLOSE_P();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fullselect_stmt_itemContext* fullselect_stmt_item();

  class  Fullselect_set_clauseContext : public antlr4::ParserRuleContext {
  public:
    Fullselect_set_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_UNION();
    antlr4::tree::TerminalNode *T_ALL();
    antlr4::tree::TerminalNode *T_EXCEPT();
    antlr4::tree::TerminalNode *T_INTERSECT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fullselect_set_clauseContext* fullselect_set_clause();

  class  Subselect_stmtContext : public antlr4::ParserRuleContext {
  public:
    Subselect_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_SELECT();
    Select_listContext *select_list();
    From_clauseContext *from_clause();
    std::vector<Select_optionContext *> select_option();
    Select_optionContext* select_option(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Subselect_stmtContext* subselect_stmt();

  class  Select_listContext : public antlr4::ParserRuleContext {
  public:
    Select_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Select_list_itemContext *> select_list_item();
    Select_list_itemContext* select_list_item(size_t i);
    Select_list_setContext *select_list_set();
    Select_list_limitContext *select_list_limit();
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);
    Select_list_use_optionContext *select_list_use_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_listContext* select_list();

  class  Select_list_setContext : public antlr4::ParserRuleContext {
  public:
    Select_list_setContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_ALL();
    antlr4::tree::TerminalNode *T_DISTINCT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_list_setContext* select_list_set();

  class  Select_list_limitContext : public antlr4::ParserRuleContext {
  public:
    Select_list_limitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_TOP();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_list_limitContext* select_list_limit();

  class  Select_list_itemContext : public antlr4::ParserRuleContext {
  public:
    Select_list_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Bool_exprContext *bool_expr();
    IdentContext *ident();
    antlr4::tree::TerminalNode *T_EQUAL();
    Select_list_aliasContext *select_list_alias();
    Select_list_asteriskContext *select_list_asterisk();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_list_itemContext* select_list_item();

  class  Select_list_aliasContext : public antlr4::ParserRuleContext {
  public:
    Select_list_aliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    antlr4::tree::TerminalNode *T_AS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_list_aliasContext* select_list_alias();

  class  Select_list_asteriskContext : public antlr4::ParserRuleContext {
  public:
    Select_list_asteriskContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();
    antlr4::tree::TerminalNode *T_PERIOD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_list_asteriskContext* select_list_asterisk();

  class  Select_list_use_optionContext : public antlr4::ParserRuleContext {
  public:
    Select_list_use_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_USING();
    ExprContext *expr();
    antlr4::tree::TerminalNode *T_AS();
    Paren_column_listContext *paren_column_list();
    Column_name_eleContext *column_name_ele();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_list_use_optionContext* select_list_use_option();

  class  From_clauseContext : public antlr4::ParserRuleContext {
  public:
    From_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_FROM();
    From_table_clauseContext *from_table_clause();
    std::vector<From_join_clauseContext *> from_join_clause();
    From_join_clauseContext* from_join_clause(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  From_clauseContext* from_clause();

  class  From_table_clauseContext : public antlr4::ParserRuleContext {
  public:
    From_table_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    From_table_name_clauseContext *from_table_name_clause();
    From_subselect_clauseContext *from_subselect_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  From_table_clauseContext* from_table_clause();

  class  From_table_name_clauseContext : public antlr4::ParserRuleContext {
  public:
    From_table_name_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Table_nameContext *table_name();
    std::vector<From_table_clause_optionContext *> from_table_clause_option();
    From_table_clause_optionContext* from_table_clause_option(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  From_table_name_clauseContext* from_table_name_clause();

  class  From_table_clause_optionContext : public antlr4::ParserRuleContext {
  public:
    From_table_clause_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Table_sample_clauseContext *table_sample_clause();
    From_alias_clauseContext *from_alias_clause();
    Lateral_viewContext *lateral_view();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  From_table_clause_optionContext* from_table_clause_option();

  class  Lateral_viewContext : public antlr4::ParserRuleContext {
  public:
    Lateral_viewContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_LATERAL();
    antlr4::tree::TerminalNode *T_VIEW();
    std::vector<IdentContext *> ident();
    IdentContext* ident(size_t i);
    antlr4::tree::TerminalNode *T_OPEN_P();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *T_CLOSE_P();
    antlr4::tree::TerminalNode *T_AS();
    Column_name_listContext *column_name_list();
    antlr4::tree::TerminalNode *T_OUTER();
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Lateral_viewContext* lateral_view();

  class  Table_sample_clauseContext : public antlr4::ParserRuleContext {
  public:
    Table_sample_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Table_samplingContext *table_sampling();
    Block_samplingContext *block_sampling();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_sample_clauseContext* table_sample_clause();

  class  Table_samplingContext : public antlr4::ParserRuleContext {
  public:
    Table_samplingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_TABLESAMPLE();
    antlr4::tree::TerminalNode *T_OPEN_P();
    antlr4::tree::TerminalNode *T_BUCKET();
    std::vector<NumbersContext *> numbers();
    NumbersContext* numbers(size_t i);
    antlr4::tree::TerminalNode *T_OUT();
    antlr4::tree::TerminalNode *T_OF();
    antlr4::tree::TerminalNode *T_CLOSE_P();
    antlr4::tree::TerminalNode *T_ON();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_samplingContext* table_sampling();

  class  Block_samplingContext : public antlr4::ParserRuleContext {
  public:
    Block_samplingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_TABLESAMPLE();
    antlr4::tree::TerminalNode *T_OPEN_P();
    Block_sampling_optionContext *block_sampling_option();
    antlr4::tree::TerminalNode *T_CLOSE_P();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Block_samplingContext* block_sampling();

  class  Block_sampling_optionContext : public antlr4::ParserRuleContext {
  public:
    Block_sampling_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumbersContext *numbers();
    antlr4::tree::TerminalNode *T_PERCENTS();
    Size_typesContext *size_types();
    antlr4::tree::TerminalNode *T_ROWS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Block_sampling_optionContext* block_sampling_option();

  class  NumbersContext : public antlr4::ParserRuleContext {
  public:
    NumbersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Dec_numberContext *dec_number();
    Int_numberContext *int_number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumbersContext* numbers();

  class  Size_typesContext : public antlr4::ParserRuleContext {
  public:
    Size_typesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Size_typesContext* size_types();

  class  From_subselect_clauseContext : public antlr4::ParserRuleContext {
  public:
    From_subselect_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_OPEN_P();
    Select_stmtContext *select_stmt();
    antlr4::tree::TerminalNode *T_CLOSE_P();
    std::vector<From_table_clause_optionContext *> from_table_clause_option();
    From_table_clause_optionContext* from_table_clause_option(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  From_subselect_clauseContext* from_subselect_clause();

  class  From_join_clauseContext : public antlr4::ParserRuleContext {
  public:
    From_join_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_COMMA();
    From_table_clauseContext *from_table_clause();
    From_join_type_clauseContext *from_join_type_clause();
    On_conditionContext *on_condition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  From_join_clauseContext* from_join_clause();

  class  From_join_type_clauseContext : public antlr4::ParserRuleContext {
  public:
    From_join_type_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_JOIN();
    antlr4::tree::TerminalNode *T_INNER();
    antlr4::tree::TerminalNode *T_LEFT();
    antlr4::tree::TerminalNode *T_RIGHT();
    antlr4::tree::TerminalNode *T_FULL();
    antlr4::tree::TerminalNode *T_OUTER();
    antlr4::tree::TerminalNode *T_SEMI();
    antlr4::tree::TerminalNode *T_CROSS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  From_join_type_clauseContext* from_join_type_clause();

  class  From_alias_clauseContext : public antlr4::ParserRuleContext {
  public:
    From_alias_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    antlr4::tree::TerminalNode *T_AS();
    antlr4::tree::TerminalNode *T_OPEN_P();
    std::vector<antlr4::tree::TerminalNode *> L_ID();
    antlr4::tree::TerminalNode* L_ID(size_t i);
    antlr4::tree::TerminalNode *T_CLOSE_P();
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  From_alias_clauseContext* from_alias_clause();

  class  On_conditionContext : public antlr4::ParserRuleContext {
  public:
    On_conditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_ON();
    Bool_exprContext *bool_expr();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *T_IS();
    antlr4::tree::TerminalNode *T_DISTINCT();
    antlr4::tree::TerminalNode *T_FROM();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  On_conditionContext* on_condition();

  class  Table_nameContext : public antlr4::ParserRuleContext {
  public:
    Table_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_nameContext* table_name();

  class  View_nameContext : public antlr4::ParserRuleContext {
  public:
    View_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  View_nameContext* view_name();

  class  Db_nameContext : public antlr4::ParserRuleContext {
  public:
    Db_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Db_nameContext* db_name();

  class  Select_optionContext : public antlr4::ParserRuleContext {
  public:
    Select_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    From_clauseContext *from_clause();
    Where_clauseContext *where_clause();
    Group_by_clauseContext *group_by_clause();
    Having_clauseContext *having_clause();
    Order_by_clauseContext *order_by_clause();
    Cluster_by_clauseContext *cluster_by_clause();
    Limit_clauseContext *limit_clause();
    Window_clauseContext *window_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_optionContext* select_option();

  class  Window_clauseContext : public antlr4::ParserRuleContext {
  public:
    Window_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_WINDOW();
    IdentContext *ident();
    Expr_func_over_clauseContext *expr_func_over_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Window_clauseContext* window_clause();

  class  Where_clauseContext : public antlr4::ParserRuleContext {
  public:
    Where_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_WHERE();
    Bool_exprContext *bool_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Where_clauseContext* where_clause();

  class  Group_by_clauseContext : public antlr4::ParserRuleContext {
  public:
    Group_by_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_GROUP();
    antlr4::tree::TerminalNode *T_BY();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Group_by_clauseContext* group_by_clause();

  class  Having_clauseContext : public antlr4::ParserRuleContext {
  public:
    Having_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_HAVING();
    Bool_exprContext *bool_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Having_clauseContext* having_clause();

  class  Limit_clauseContext : public antlr4::ParserRuleContext {
  public:
    Limit_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_LIMIT();
    std::vector<antlr4::tree::TerminalNode *> L_INT();
    antlr4::tree::TerminalNode* L_INT(size_t i);
    antlr4::tree::TerminalNode *T_COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Limit_clauseContext* limit_clause();

  class  Order_by_clauseContext : public antlr4::ParserRuleContext {
  public:
    Order_by_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_BY();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<Order_by_clause_optionContext *> order_by_clause_option();
    Order_by_clause_optionContext* order_by_clause_option(size_t i);
    antlr4::tree::TerminalNode *T_ORDER();
    antlr4::tree::TerminalNode *T_SORT();
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Order_by_clauseContext* order_by_clause();

  class  Order_by_clause_optionContext : public antlr4::ParserRuleContext {
  public:
    Order_by_clause_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Col_orderContext *col_order();
    Col_null_orderContext *col_null_order();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Order_by_clause_optionContext* order_by_clause_option();

  class  Col_orderContext : public antlr4::ParserRuleContext {
  public:
    Col_orderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_ASC();
    antlr4::tree::TerminalNode *T_DESC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Col_orderContext* col_order();

  class  Col_null_orderContext : public antlr4::ParserRuleContext {
  public:
    Col_null_orderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_NULLS();
    antlr4::tree::TerminalNode *T_FIRST();
    antlr4::tree::TerminalNode *T_LAST();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Col_null_orderContext* col_null_order();

  class  Cluster_by_clauseContext : public antlr4::ParserRuleContext {
  public:
    Cluster_by_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_CLUSTER();
    std::vector<antlr4::tree::TerminalNode *> T_BY();
    antlr4::tree::TerminalNode* T_BY(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_DISTRIBUTE();
    antlr4::tree::TerminalNode* T_DISTRIBUTE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_SORT();
    antlr4::tree::TerminalNode* T_SORT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cluster_by_clauseContext* cluster_by_clause();

  class  Update_stmtContext : public antlr4::ParserRuleContext {
  public:
    Update_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_UPDATE();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *T_SET();
    Update_assignmentContext *update_assignment();
    Where_clauseContext *where_clause();
    Update_upsertContext *update_upsert();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Update_stmtContext* update_stmt();

  class  Update_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Update_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Assignment_stmt_itemContext *> assignment_stmt_item();
    Assignment_stmt_itemContext* assignment_stmt_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Update_assignmentContext* update_assignment();

  class  Update_upsertContext : public antlr4::ParserRuleContext {
  public:
    Update_upsertContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_ELSE();
    Insert_stmtContext *insert_stmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Update_upsertContext* update_upsert();

  class  Merge_stmtContext : public antlr4::ParserRuleContext {
  public:
    Merge_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_MERGE();
    antlr4::tree::TerminalNode *T_INTO();
    Merge_tableContext *merge_table();
    std::vector<antlr4::tree::TerminalNode *> T_AS();
    antlr4::tree::TerminalNode* T_AS(size_t i);
    antlr4::tree::TerminalNode *T_T();
    antlr4::tree::TerminalNode *T_USING();
    ExprContext *expr();
    antlr4::tree::TerminalNode *T_S();
    antlr4::tree::TerminalNode *T_ON();
    Bool_exprContext *bool_expr();
    std::vector<Merge_conditionContext *> merge_condition();
    Merge_conditionContext* merge_condition(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Merge_stmtContext* merge_stmt();

  class  Merge_tableContext : public antlr4::ParserRuleContext {
  public:
    Merge_tableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Table_nameContext *table_name();
    IdentContext *ident();
    antlr4::tree::TerminalNode *T_OPEN_P();
    Select_stmtContext *select_stmt();
    antlr4::tree::TerminalNode *T_CLOSE_P();
    antlr4::tree::TerminalNode *T_AS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Merge_tableContext* merge_table();

  class  Merge_conditionContext : public antlr4::ParserRuleContext {
  public:
    Merge_conditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_WHEN();
    antlr4::tree::TerminalNode *T_MATCHED();
    antlr4::tree::TerminalNode *T_THEN();
    Merge_actionContext *merge_action();
    antlr4::tree::TerminalNode *T_NOT();
    antlr4::tree::TerminalNode *T_AND();
    Bool_exprContext *bool_expr();
    antlr4::tree::TerminalNode *T_ELSE();
    antlr4::tree::TerminalNode *T_IGNORE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Merge_conditionContext* merge_condition();

  class  Merge_actionContext : public antlr4::ParserRuleContext {
  public:
    Merge_actionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_INSERT();
    antlr4::tree::TerminalNode *T_VALUES();
    Insert_stmt_rowContext *insert_stmt_row();
    Insert_stmt_colsContext *insert_stmt_cols();
    antlr4::tree::TerminalNode *T_UPDATE();
    antlr4::tree::TerminalNode *T_SET();
    std::vector<Assignment_stmt_itemContext *> assignment_stmt_item();
    Assignment_stmt_itemContext* assignment_stmt_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);
    Where_clauseContext *where_clause();
    antlr4::tree::TerminalNode *T_DELETE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Merge_actionContext* merge_action();

  class  Analyze_table_stmtContext : public antlr4::ParserRuleContext {
  public:
    Analyze_table_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_ANALYZE();
    antlr4::tree::TerminalNode *T_TABLE();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *T_COMPUTE();
    antlr4::tree::TerminalNode *T_STATISTICS();
    Partition_assignment_listContext *partition_assignment_list();
    antlr4::tree::TerminalNode *T_FOR();
    antlr4::tree::TerminalNode *T_COLUMNS();
    antlr4::tree::TerminalNode *T_CACHE();
    antlr4::tree::TerminalNode *T_METADATA();
    antlr4::tree::TerminalNode *T_NOSCAN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Analyze_table_stmtContext* analyze_table_stmt();

  class  Delete_stmtContext : public antlr4::ParserRuleContext {
  public:
    Delete_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_DELETE();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *T_FROM();
    Delete_aliasContext *delete_alias();
    Where_clauseContext *where_clause();
    antlr4::tree::TerminalNode *T_ALL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delete_stmtContext* delete_stmt();

  class  Delete_aliasContext : public antlr4::ParserRuleContext {
  public:
    Delete_aliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();
    antlr4::tree::TerminalNode *T_AS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delete_aliasContext* delete_alias();

  class  Describe_stmtContext : public antlr4::ParserRuleContext {
  public:
    Describe_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Describe_stmtContext() : antlr4::ParserRuleContext() { }
    void copyFrom(Describe_stmtContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Desc_db_schemaContext : public Describe_stmtContext {
  public:
    Desc_db_schemaContext(Describe_stmtContext *ctx);

    antlr4::Token *tk = nullptr;
    antlr4::tree::TerminalNode *T_DESCRIBE();
    Db_nameContext *db_name();
    antlr4::tree::TerminalNode *T_DATABASE();
    antlr4::tree::TerminalNode *T_SCHEMA();
    antlr4::tree::TerminalNode *T_EXTENDED();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Desc_table_view_columnContext : public Describe_stmtContext {
  public:
    Desc_table_view_columnContext(Describe_stmtContext *ctx);

    antlr4::tree::TerminalNode *T_DESCRIBE();
    IdentContext *ident();
    Column_nameContext *column_name();
    Partition_assignment_listContext *partition_assignment_list();
    antlr4::tree::TerminalNode *T_EXTENDED();
    antlr4::tree::TerminalNode *T_FORMATTED();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Describe_stmtContext* describe_stmt();

  class  Bool_exprContext : public antlr4::ParserRuleContext {
  public:
    Bool_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_OPEN_P();
    std::vector<Bool_exprContext *> bool_expr();
    Bool_exprContext* bool_expr(size_t i);
    antlr4::tree::TerminalNode *T_CLOSE_P();
    antlr4::tree::TerminalNode *T_NOT();
    Bool_expr_atomContext *bool_expr_atom();
    Bool_expr_logical_operatorContext *bool_expr_logical_operator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bool_exprContext* bool_expr();
  Bool_exprContext* bool_expr(int precedence);
  class  Bool_expr_atomContext : public antlr4::ParserRuleContext {
  public:
    Bool_expr_atomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Bool_expr_unaryContext *bool_expr_unary();
    Bool_expr_binaryContext *bool_expr_binary();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bool_expr_atomContext* bool_expr_atom();

  class  Bool_expr_unaryContext : public antlr4::ParserRuleContext {
  public:
    Bool_expr_unaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *T_IS();
    antlr4::tree::TerminalNode *T_NULL();
    antlr4::tree::TerminalNode *T_NOT();
    antlr4::tree::TerminalNode *T_BETWEEN();
    antlr4::tree::TerminalNode *T_AND();
    antlr4::tree::TerminalNode *T_EXISTS();
    antlr4::tree::TerminalNode *T_OPEN_P();
    Select_stmtContext *select_stmt();
    antlr4::tree::TerminalNode *T_CLOSE_P();
    Bool_expr_single_inContext *bool_expr_single_in();
    Bool_expr_multi_inContext *bool_expr_multi_in();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bool_expr_unaryContext* bool_expr_unary();

  class  Bool_expr_single_inContext : public antlr4::ParserRuleContext {
  public:
    Bool_expr_single_inContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *T_IN();
    antlr4::tree::TerminalNode *T_OPEN_P();
    antlr4::tree::TerminalNode *T_CLOSE_P();
    Select_stmtContext *select_stmt();
    antlr4::tree::TerminalNode *T_NOT();
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bool_expr_single_inContext* bool_expr_single_in();

  class  Bool_expr_multi_inContext : public antlr4::ParserRuleContext {
  public:
    Bool_expr_multi_inContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Paren_expr_listContext *> paren_expr_list();
    Paren_expr_listContext* paren_expr_list(size_t i);
    antlr4::tree::TerminalNode *T_IN();
    antlr4::tree::TerminalNode *T_OPEN_P();
    antlr4::tree::TerminalNode *T_CLOSE_P();
    Select_stmtContext *select_stmt();
    antlr4::tree::TerminalNode *T_NOT();
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bool_expr_multi_inContext* bool_expr_multi_in();

  class  Paren_expr_listContext : public antlr4::ParserRuleContext {
  public:
    Paren_expr_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_OPEN_P();
    Expr_listContext *expr_list();
    antlr4::tree::TerminalNode *T_CLOSE_P();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Paren_expr_listContext* paren_expr_list();

  class  Expr_listContext : public antlr4::ParserRuleContext {
  public:
    Expr_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_listContext* expr_list();

  class  Bool_expr_binaryContext : public antlr4::ParserRuleContext {
  public:
    Bool_expr_binaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    Bool_expr_binary_operatorContext *bool_expr_binary_operator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bool_expr_binaryContext* bool_expr_binary();

  class  Bool_expr_logical_operatorContext : public antlr4::ParserRuleContext {
  public:
    Bool_expr_logical_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_AND();
    antlr4::tree::TerminalNode *T_OR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bool_expr_logical_operatorContext* bool_expr_logical_operator();

  class  Bool_expr_binary_operatorContext : public antlr4::ParserRuleContext {
  public:
    Bool_expr_binary_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_EQUAL();
    antlr4::tree::TerminalNode *T_EQUAL2();
    antlr4::tree::TerminalNode *T_NOTEQUAL();
    antlr4::tree::TerminalNode *T_NOTEQUAL2();
    antlr4::tree::TerminalNode *T_LESS();
    antlr4::tree::TerminalNode *T_LESSEQUAL();
    antlr4::tree::TerminalNode *T_GREATER();
    antlr4::tree::TerminalNode *T_GREATEREQUAL();
    antlr4::tree::TerminalNode *T_LIKE();
    antlr4::tree::TerminalNode *T_RLIKE();
    antlr4::tree::TerminalNode *T_REGEXP();
    antlr4::tree::TerminalNode *T_NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bool_expr_binary_operatorContext* bool_expr_binary_operator();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_OPEN_P();
    Select_stmtContext *select_stmt();
    antlr4::tree::TerminalNode *T_CLOSE_P();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    Expr_unaryContext *expr_unary();
    Expr_intervalContext *expr_interval();
    Expr_concatContext *expr_concat();
    Expr_caseContext *expr_case();
    Expr_cursor_attributeContext *expr_cursor_attribute();
    Expr_agg_window_funcContext *expr_agg_window_func();
    Expr_spec_funcContext *expr_spec_func();
    Expr_funcContext *expr_func();
    Expr_atomContext *expr_atom();
    antlr4::tree::TerminalNode *T_MUL();
    antlr4::tree::TerminalNode *T_DIV_SIGN();
    antlr4::tree::TerminalNode *T_DIV();
    antlr4::tree::TerminalNode *T_ADD_SIGN();
    antlr4::tree::TerminalNode *T_SUB();
    antlr4::tree::TerminalNode *T_PERCENT();
    antlr4::tree::TerminalNode *T_PIPE();
    antlr4::tree::TerminalNode *T_EXPONENT();
    antlr4::tree::TerminalNode *T_AND_SIGN();
    Interval_itemContext *interval_item();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  Expr_unaryContext : public antlr4::ParserRuleContext {
  public:
    Expr_unaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_EXCLAMATION();
    ExprContext *expr();
    antlr4::tree::TerminalNode *T_SUB();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_unaryContext* expr_unary();

  class  Expr_atomContext : public antlr4::ParserRuleContext {
  public:
    Expr_atomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Date_literalContext *date_literal();
    Timestamp_literalContext *timestamp_literal();
    Bool_literalContext *bool_literal();
    IdentContext *ident();
    StringContext *string();
    Dec_numberContext *dec_number();
    Int_numberContext *int_number();
    Null_constContext *null_const();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_atomContext* expr_atom();

  class  Expr_intervalContext : public antlr4::ParserRuleContext {
  public:
    Expr_intervalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_INTERVAL();
    ExprContext *expr();
    std::vector<Interval_itemContext *> interval_item();
    Interval_itemContext* interval_item(size_t i);
    antlr4::tree::TerminalNode *T_TO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_intervalContext* expr_interval();

  class  Interval_itemContext : public antlr4::ParserRuleContext {
  public:
    Interval_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_DAY();
    antlr4::tree::TerminalNode *T_DAYS();
    antlr4::tree::TerminalNode *T_MICROSECOND();
    antlr4::tree::TerminalNode *T_MICROSECONDS();
    antlr4::tree::TerminalNode *T_SECOND();
    antlr4::tree::TerminalNode *T_SECONDS();
    antlr4::tree::TerminalNode *T_YEAR();
    antlr4::tree::TerminalNode *T_MONTH();
    antlr4::tree::TerminalNode *T_MINUTE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interval_itemContext* interval_item();

  class  Expr_concatContext : public antlr4::ParserRuleContext {
  public:
    Expr_concatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Expr_concat_itemContext *> expr_concat_item();
    Expr_concat_itemContext* expr_concat_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_PIPE();
    antlr4::tree::TerminalNode* T_PIPE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_CONCAT();
    antlr4::tree::TerminalNode* T_CONCAT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_concatContext* expr_concat();

  class  Expr_concat_itemContext : public antlr4::ParserRuleContext {
  public:
    Expr_concat_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_OPEN_P();
    ExprContext *expr();
    antlr4::tree::TerminalNode *T_CLOSE_P();
    Expr_caseContext *expr_case();
    Expr_agg_window_funcContext *expr_agg_window_func();
    Expr_spec_funcContext *expr_spec_func();
    Expr_funcContext *expr_func();
    Expr_atomContext *expr_atom();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_concat_itemContext* expr_concat_item();

  class  Expr_caseContext : public antlr4::ParserRuleContext {
  public:
    Expr_caseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Expr_case_simpleContext *expr_case_simple();
    Expr_case_searchedContext *expr_case_searched();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_caseContext* expr_case();

  class  Expr_case_simpleContext : public antlr4::ParserRuleContext {
  public:
    Expr_case_simpleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_CASE();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *T_END();
    std::vector<antlr4::tree::TerminalNode *> T_WHEN();
    antlr4::tree::TerminalNode* T_WHEN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_THEN();
    antlr4::tree::TerminalNode* T_THEN(size_t i);
    antlr4::tree::TerminalNode *T_ELSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_case_simpleContext* expr_case_simple();

  class  Expr_case_searchedContext : public antlr4::ParserRuleContext {
  public:
    Expr_case_searchedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_CASE();
    antlr4::tree::TerminalNode *T_END();
    std::vector<antlr4::tree::TerminalNode *> T_WHEN();
    antlr4::tree::TerminalNode* T_WHEN(size_t i);
    std::vector<Bool_exprContext *> bool_expr();
    Bool_exprContext* bool_expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_THEN();
    antlr4::tree::TerminalNode* T_THEN(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *T_ELSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_case_searchedContext* expr_case_searched();

  class  Expr_cursor_attributeContext : public antlr4::ParserRuleContext {
  public:
    Expr_cursor_attributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();
    antlr4::tree::TerminalNode *T_PERCENT();
    antlr4::tree::TerminalNode *T_ISOPEN();
    antlr4::tree::TerminalNode *T_FOUND();
    antlr4::tree::TerminalNode *T_NOTFOUND();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_cursor_attributeContext* expr_cursor_attribute();

  class  Expr_agg_window_funcContext : public antlr4::ParserRuleContext {
  public:
    Expr_agg_window_funcContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_AVG();
    antlr4::tree::TerminalNode *T_OPEN_P();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *T_CLOSE_P();
    Expr_func_all_distinctContext *expr_func_all_distinct();
    Expr_func_over_clauseContext *expr_func_over_clause();
    antlr4::tree::TerminalNode *T_COUNT();
    antlr4::tree::TerminalNode *T_COUNT_BIG();
    antlr4::tree::TerminalNode *T_CUME_DIST();
    antlr4::tree::TerminalNode *T_DENSE_RANK();
    antlr4::tree::TerminalNode *T_FIRST_VALUE();
    antlr4::tree::TerminalNode *T_LAG();
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);
    antlr4::tree::TerminalNode *T_LAST_VALUE();
    antlr4::tree::TerminalNode *T_LEAD();
    antlr4::tree::TerminalNode *T_MAX();
    antlr4::tree::TerminalNode *T_MIN();
    antlr4::tree::TerminalNode *T_RANK();
    antlr4::tree::TerminalNode *T_ROW_NUMBER();
    antlr4::tree::TerminalNode *T_STDEV();
    antlr4::tree::TerminalNode *T_STD();
    antlr4::tree::TerminalNode *T_SUM();
    antlr4::tree::TerminalNode *T_VAR();
    antlr4::tree::TerminalNode *T_VARIANCE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_agg_window_funcContext* expr_agg_window_func();

  class  Expr_func_all_distinctContext : public antlr4::ParserRuleContext {
  public:
    Expr_func_all_distinctContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_ALL();
    antlr4::tree::TerminalNode *T_DISTINCT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_func_all_distinctContext* expr_func_all_distinct();

  class  Expr_func_over_clauseContext : public antlr4::ParserRuleContext {
  public:
    Expr_func_over_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_OVER();
    antlr4::tree::TerminalNode *T_OPEN_P();
    antlr4::tree::TerminalNode *T_CLOSE_P();
    IdentContext *ident();
    antlr4::tree::TerminalNode *T_AS();
    std::vector<Expr_func_over_clause_optionsContext *> expr_func_over_clause_options();
    Expr_func_over_clause_optionsContext* expr_func_over_clause_options(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_func_over_clauseContext* expr_func_over_clause();

  class  Expr_func_over_clause_optionsContext : public antlr4::ParserRuleContext {
  public:
    Expr_func_over_clause_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Expr_func_partition_by_clauseContext *expr_func_partition_by_clause();
    Order_by_clauseContext *order_by_clause();
    Func_partition_clause_optionContext *func_partition_clause_option();
    antlr4::tree::TerminalNode *T_DISTRIBUTE();
    antlr4::tree::TerminalNode *T_BY();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_func_over_clause_optionsContext* expr_func_over_clause_options();

  class  Expr_func_partition_by_clauseContext : public antlr4::ParserRuleContext {
  public:
    Expr_func_partition_by_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_PARTITION();
    antlr4::tree::TerminalNode *T_BY();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_func_partition_by_clauseContext* expr_func_partition_by_clause();

  class  Func_partition_clause_optionContext : public antlr4::ParserRuleContext {
  public:
    Func_partition_clause_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Func_partition_clause_partContext *func_partition_clause_part();
    antlr4::tree::TerminalNode *T_ROWS();
    antlr4::tree::TerminalNode *T_RANGE();
    antlr4::tree::TerminalNode *T_BETWEEN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_partition_clause_optionContext* func_partition_clause_option();

  class  Func_partition_clause_partContext : public antlr4::ParserRuleContext {
  public:
    Func_partition_clause_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> T_PRECEDING();
    antlr4::tree::TerminalNode* T_PRECEDING(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_UNBOUNDED();
    antlr4::tree::TerminalNode* T_UNBOUNDED(size_t i);
    antlr4::tree::TerminalNode *T_AND();
    std::vector<antlr4::tree::TerminalNode *> T_CURRENT();
    antlr4::tree::TerminalNode* T_CURRENT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_ROW();
    antlr4::tree::TerminalNode* T_ROW(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_FOLLOWING();
    antlr4::tree::TerminalNode* T_FOLLOWING(size_t i);
    std::vector<antlr4::tree::TerminalNode *> L_INT();
    antlr4::tree::TerminalNode* L_INT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_partition_clause_partContext* func_partition_clause_part();

  class  Expr_spec_funcContext : public antlr4::ParserRuleContext {
  public:
    Expr_spec_funcContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_ACTIVITY_COUNT();
    antlr4::tree::TerminalNode *T_CAST();
    antlr4::tree::TerminalNode *T_OPEN_P();
    antlr4::tree::TerminalNode *T_CLOSE_P();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *T_AS();
    DtypeContext *dtype();
    antlr4::tree::TerminalNode *T_FORMAT();
    antlr4::tree::TerminalNode *T_COUNT();
    antlr4::tree::TerminalNode *T_CURRENT_DATE();
    antlr4::tree::TerminalNode *T_CURRENT();
    antlr4::tree::TerminalNode *T_DATE();
    antlr4::tree::TerminalNode *T_CURRENT_TIMESTAMP();
    antlr4::tree::TerminalNode *T_TIMESTAMP();
    antlr4::tree::TerminalNode *T_CURRENT_USER();
    antlr4::tree::TerminalNode *T_USER();
    antlr4::tree::TerminalNode *T_MAX_PART_STRING();
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_EQUAL();
    antlr4::tree::TerminalNode* T_EQUAL(size_t i);
    antlr4::tree::TerminalNode *T_MIN_PART_STRING();
    antlr4::tree::TerminalNode *T_MAX_PART_INT();
    antlr4::tree::TerminalNode *T_MIN_PART_INT();
    antlr4::tree::TerminalNode *T_MAX_PART_DATE();
    antlr4::tree::TerminalNode *T_MIN_PART_DATE();
    antlr4::tree::TerminalNode *T_PART_COUNT();
    antlr4::tree::TerminalNode *T_PART_LOC();
    antlr4::tree::TerminalNode *T_TRIM();
    antlr4::tree::TerminalNode *T_SUBSTRING();
    antlr4::tree::TerminalNode *T_FROM();
    antlr4::tree::TerminalNode *T_FOR();
    antlr4::tree::TerminalNode *T_SYSDATE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_spec_funcContext* expr_spec_func();

  class  Expr_funcContext : public antlr4::ParserRuleContext {
  public:
    Expr_funcContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();
    antlr4::tree::TerminalNode *T_OPEN_P();
    antlr4::tree::TerminalNode *T_CLOSE_P();
    Expr_func_paramsContext *expr_func_params();
    Expr_func_over_clauseContext *expr_func_over_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_funcContext* expr_func();

  class  Expr_func_paramsContext : public antlr4::ParserRuleContext {
  public:
    Expr_func_paramsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Func_paramContext *> func_param();
    Func_paramContext* func_param(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_func_paramsContext* expr_func_params();

  class  Func_paramContext : public antlr4::ParserRuleContext {
  public:
    Func_paramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    IdentContext *ident();
    antlr4::tree::TerminalNode *T_EQUAL();
    antlr4::tree::TerminalNode *T_GREATER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_paramContext* func_param();

  class  Expr_selectContext : public antlr4::ParserRuleContext {
  public:
    Expr_selectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Select_stmtContext *select_stmt();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_selectContext* expr_select();

  class  Expr_fileContext : public antlr4::ParserRuleContext {
  public:
    Expr_fileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    File_nameContext *file_name();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_fileContext* expr_file();

  class  HiveContext : public antlr4::ParserRuleContext {
  public:
    HiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_HIVE();
    std::vector<Hive_itemContext *> hive_item();
    Hive_itemContext* hive_item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HiveContext* hive();

  class  Hive_itemContext : public antlr4::ParserRuleContext {
  public:
    Hive_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_SUB();
    IdentContext *ident();
    ExprContext *expr();
    antlr4::tree::TerminalNode *L_ID();
    antlr4::tree::TerminalNode *T_EQUAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Hive_itemContext* hive_item();

  class  HostContext : public antlr4::ParserRuleContext {
  public:
    HostContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_EXCLAMATION();
    Host_cmdContext *host_cmd();
    antlr4::tree::TerminalNode *T_SEMICOLON();
    Host_stmtContext *host_stmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HostContext* host();

  class  Host_cmdContext : public antlr4::ParserRuleContext {
  public:
    Host_cmdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Host_cmdContext* host_cmd();

  class  Host_stmtContext : public antlr4::ParserRuleContext {
  public:
    Host_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_HOST();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Host_stmtContext* host_stmt();

  class  File_nameContext : public antlr4::ParserRuleContext {
  public:
    File_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    File_patternContext *file_pattern();
    std::vector<IdentContext *> ident();
    IdentContext* ident(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_DIV_SIGN();
    antlr4::tree::TerminalNode* T_DIV_SIGN(size_t i);
    antlr4::tree::TerminalNode *T_PERIOD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  File_nameContext* file_name();

  class  File_patternContext : public antlr4::ParserRuleContext {
  public:
    File_patternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> L_ID();
    antlr4::tree::TerminalNode* L_ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> L_ALPHA();
    antlr4::tree::TerminalNode* L_ALPHA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  File_patternContext* file_pattern();

  class  Date_literalContext : public antlr4::ParserRuleContext {
  public:
    Date_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_DATE();
    StringContext *string();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Date_literalContext* date_literal();

  class  Timestamp_literalContext : public antlr4::ParserRuleContext {
  public:
    Timestamp_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_TIMESTAMP();
    StringContext *string();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Timestamp_literalContext* timestamp_literal();

  class  IdentContext : public antlr4::ParserRuleContext {
  public:
    IdentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> L_ID();
    antlr4::tree::TerminalNode* L_ID(size_t i);
    std::vector<Non_reserved_wordsContext *> non_reserved_words();
    Non_reserved_wordsContext* non_reserved_words(size_t i);
    antlr4::tree::TerminalNode *T_SUB();
    std::vector<antlr4::tree::TerminalNode *> T_PERIOD();
    antlr4::tree::TerminalNode* T_PERIOD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentContext* ident();

  class  StringContext : public antlr4::ParserRuleContext {
  public:
    StringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StringContext() : antlr4::ParserRuleContext() { }
    void copyFrom(StringContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Double_quotedStringContext : public StringContext {
  public:
    Double_quotedStringContext(StringContext *ctx);

    antlr4::tree::TerminalNode *L_D_STRING();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Single_quotedStringContext : public StringContext {
  public:
    Single_quotedStringContext(StringContext *ctx);

    antlr4::tree::TerminalNode *L_S_STRING();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StringContext* string();

  class  Int_numberContext : public antlr4::ParserRuleContext {
  public:
    Int_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_INT();
    antlr4::tree::TerminalNode *T_SUB();
    antlr4::tree::TerminalNode *T_ADD_SIGN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Int_numberContext* int_number();

  class  Dec_numberContext : public antlr4::ParserRuleContext {
  public:
    Dec_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_DEC();
    antlr4::tree::TerminalNode *T_SUB();
    antlr4::tree::TerminalNode *T_ADD_SIGN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dec_numberContext* dec_number();

  class  Bool_literalContext : public antlr4::ParserRuleContext {
  public:
    Bool_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_TRUE();
    antlr4::tree::TerminalNode *T_FALSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bool_literalContext* bool_literal();

  class  Null_constContext : public antlr4::ParserRuleContext {
  public:
    Null_constContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_NULL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Null_constContext* null_const();

  class  Non_reserved_wordsContext : public antlr4::ParserRuleContext {
  public:
    Non_reserved_wordsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_ACTION();
    antlr4::tree::TerminalNode *T_ACTIVITY_COUNT();
    antlr4::tree::TerminalNode *T_ADD();
    antlr4::tree::TerminalNode *T_ALL();
    antlr4::tree::TerminalNode *T_ALLOCATE();
    antlr4::tree::TerminalNode *T_ALTER();
    antlr4::tree::TerminalNode *T_AND();
    antlr4::tree::TerminalNode *T_ANSI_NULLS();
    antlr4::tree::TerminalNode *T_ANSI_PADDING();
    antlr4::tree::TerminalNode *T_AS();
    antlr4::tree::TerminalNode *T_ASC();
    antlr4::tree::TerminalNode *T_ASSOCIATE();
    antlr4::tree::TerminalNode *T_AT();
    antlr4::tree::TerminalNode *T_AUTO_INCREMENT();
    antlr4::tree::TerminalNode *T_AVG();
    antlr4::tree::TerminalNode *T_BATCHSIZE();
    antlr4::tree::TerminalNode *T_BEGIN();
    antlr4::tree::TerminalNode *T_BETWEEN();
    antlr4::tree::TerminalNode *T_BIGINT();
    antlr4::tree::TerminalNode *T_BINARY_DOUBLE();
    antlr4::tree::TerminalNode *T_BINARY_FLOAT();
    antlr4::tree::TerminalNode *T_BIT();
    antlr4::tree::TerminalNode *T_BODY();
    antlr4::tree::TerminalNode *T_BREAK();
    antlr4::tree::TerminalNode *T_BY();
    antlr4::tree::TerminalNode *T_BYTE();
    antlr4::tree::TerminalNode *T_CALL();
    antlr4::tree::TerminalNode *T_CALLER();
    antlr4::tree::TerminalNode *T_CASCADE();
    antlr4::tree::TerminalNode *T_CASE();
    antlr4::tree::TerminalNode *T_CASESPECIFIC();
    antlr4::tree::TerminalNode *T_CAST();
    antlr4::tree::TerminalNode *T_CHAR();
    antlr4::tree::TerminalNode *T_CHARACTER();
    antlr4::tree::TerminalNode *T_CHARSET();
    antlr4::tree::TerminalNode *T_CLIENT();
    antlr4::tree::TerminalNode *T_CLOSE();
    antlr4::tree::TerminalNode *T_CLUSTERED();
    antlr4::tree::TerminalNode *T_CMP();
    antlr4::tree::TerminalNode *T_COLLECT();
    antlr4::tree::TerminalNode *T_COLLECTION();
    antlr4::tree::TerminalNode *T_COLUMN();
    antlr4::tree::TerminalNode *T_COMMENT();
    antlr4::tree::TerminalNode *T_COMPRESS();
    antlr4::tree::TerminalNode *T_CONSTANT();
    antlr4::tree::TerminalNode *T_COPY();
    antlr4::tree::TerminalNode *T_COMMIT();
    antlr4::tree::TerminalNode *T_CONCAT();
    antlr4::tree::TerminalNode *T_CONDITION();
    antlr4::tree::TerminalNode *T_CONSTRAINT();
    antlr4::tree::TerminalNode *T_CONTINUE();
    antlr4::tree::TerminalNode *T_COUNT();
    antlr4::tree::TerminalNode *T_COUNT_BIG();
    antlr4::tree::TerminalNode *T_CREATE();
    antlr4::tree::TerminalNode *T_CREATION();
    antlr4::tree::TerminalNode *T_CREATOR();
    antlr4::tree::TerminalNode *T_CS();
    antlr4::tree::TerminalNode *T_CUME_DIST();
    antlr4::tree::TerminalNode *T_CURRENT();
    antlr4::tree::TerminalNode *T_CURRENT_DATE();
    antlr4::tree::TerminalNode *T_CURRENT_SCHEMA();
    antlr4::tree::TerminalNode *T_CURRENT_TIMESTAMP();
    antlr4::tree::TerminalNode *T_CURRENT_USER();
    antlr4::tree::TerminalNode *T_CURSOR();
    antlr4::tree::TerminalNode *T_DATA();
    antlr4::tree::TerminalNode *T_DATABASE();
    antlr4::tree::TerminalNode *T_DATE();
    antlr4::tree::TerminalNode *T_DATETIME();
    antlr4::tree::TerminalNode *T_DAY();
    antlr4::tree::TerminalNode *T_DAYS();
    antlr4::tree::TerminalNode *T_DEC();
    antlr4::tree::TerminalNode *T_DECIMAL();
    antlr4::tree::TerminalNode *T_DECLARE();
    antlr4::tree::TerminalNode *T_DEFAULT();
    antlr4::tree::TerminalNode *T_DEFERRED();
    antlr4::tree::TerminalNode *T_DEFINED();
    antlr4::tree::TerminalNode *T_DEFINER();
    antlr4::tree::TerminalNode *T_DEFINITION();
    antlr4::tree::TerminalNode *T_DELETE();
    antlr4::tree::TerminalNode *T_DELIMITED();
    antlr4::tree::TerminalNode *T_DELIMITER();
    antlr4::tree::TerminalNode *T_DENSE_RANK();
    antlr4::tree::TerminalNode *T_DESC();
    antlr4::tree::TerminalNode *T_DESCRIBE();
    antlr4::tree::TerminalNode *T_DIAGNOSTICS();
    antlr4::tree::TerminalNode *T_DIR();
    antlr4::tree::TerminalNode *T_DIRECTORY();
    antlr4::tree::TerminalNode *T_DISTINCT();
    antlr4::tree::TerminalNode *T_DISTRIBUTE();
    antlr4::tree::TerminalNode *T_DO();
    antlr4::tree::TerminalNode *T_DOUBLE();
    antlr4::tree::TerminalNode *T_DROP();
    antlr4::tree::TerminalNode *T_DYNAMIC();
    antlr4::tree::TerminalNode *T_ENABLE();
    antlr4::tree::TerminalNode *T_ENGINE();
    antlr4::tree::TerminalNode *T_ESCAPED();
    antlr4::tree::TerminalNode *T_EXCEPT();
    antlr4::tree::TerminalNode *T_EXEC();
    antlr4::tree::TerminalNode *T_EXECUTE();
    antlr4::tree::TerminalNode *T_EXCEPTION();
    antlr4::tree::TerminalNode *T_EXCLUSIVE();
    antlr4::tree::TerminalNode *T_EXISTS();
    antlr4::tree::TerminalNode *T_EXIT();
    antlr4::tree::TerminalNode *T_FALLBACK();
    antlr4::tree::TerminalNode *T_FALSE();
    antlr4::tree::TerminalNode *T_FETCH();
    antlr4::tree::TerminalNode *T_FIELDS();
    antlr4::tree::TerminalNode *T_FILE();
    antlr4::tree::TerminalNode *T_FILES();
    antlr4::tree::TerminalNode *T_FIRST_VALUE();
    antlr4::tree::TerminalNode *T_FLOAT();
    antlr4::tree::TerminalNode *T_FOR();
    antlr4::tree::TerminalNode *T_FOREIGN();
    antlr4::tree::TerminalNode *T_FORMAT();
    antlr4::tree::TerminalNode *T_FOUND();
    antlr4::tree::TerminalNode *T_FULL();
    antlr4::tree::TerminalNode *T_FUNCTION();
    antlr4::tree::TerminalNode *T_GET();
    antlr4::tree::TerminalNode *T_GLOBAL();
    antlr4::tree::TerminalNode *T_GO();
    antlr4::tree::TerminalNode *T_GRANT();
    antlr4::tree::TerminalNode *T_HANDLER();
    antlr4::tree::TerminalNode *T_HASH();
    antlr4::tree::TerminalNode *T_HAVING();
    antlr4::tree::TerminalNode *T_HDFS();
    antlr4::tree::TerminalNode *T_HIVE();
    antlr4::tree::TerminalNode *T_HOST();
    antlr4::tree::TerminalNode *T_IDENTITY();
    antlr4::tree::TerminalNode *T_IF();
    antlr4::tree::TerminalNode *T_IGNORE();
    antlr4::tree::TerminalNode *T_IMMEDIATE();
    antlr4::tree::TerminalNode *T_IN();
    antlr4::tree::TerminalNode *T_INCLUDE();
    antlr4::tree::TerminalNode *T_INDEX();
    antlr4::tree::TerminalNode *T_INITRANS();
    antlr4::tree::TerminalNode *T_INNER();
    antlr4::tree::TerminalNode *T_INOUT();
    antlr4::tree::TerminalNode *T_INSERT();
    antlr4::tree::TerminalNode *T_INT();
    antlr4::tree::TerminalNode *T_INT2();
    antlr4::tree::TerminalNode *T_INT4();
    antlr4::tree::TerminalNode *T_INT8();
    antlr4::tree::TerminalNode *T_INTEGER();
    antlr4::tree::TerminalNode *T_INTERSECT();
    antlr4::tree::TerminalNode *T_INTO();
    antlr4::tree::TerminalNode *T_INVOKER();
    antlr4::tree::TerminalNode *T_ITEMS();
    antlr4::tree::TerminalNode *T_IS();
    antlr4::tree::TerminalNode *T_ISOPEN();
    antlr4::tree::TerminalNode *T_JOIN();
    antlr4::tree::TerminalNode *T_KEEP();
    antlr4::tree::TerminalNode *T_KEY();
    antlr4::tree::TerminalNode *T_KEYS();
    antlr4::tree::TerminalNode *T_LAG();
    antlr4::tree::TerminalNode *T_LANGUAGE();
    antlr4::tree::TerminalNode *T_LAST_VALUE();
    antlr4::tree::TerminalNode *T_LEAD();
    antlr4::tree::TerminalNode *T_LEAVE();
    antlr4::tree::TerminalNode *T_LEFT();
    antlr4::tree::TerminalNode *T_LIKE();
    antlr4::tree::TerminalNode *T_LINES();
    antlr4::tree::TerminalNode *T_LOCAL();
    antlr4::tree::TerminalNode *T_LOCATION();
    antlr4::tree::TerminalNode *T_LOCATOR();
    antlr4::tree::TerminalNode *T_LOCATORS();
    antlr4::tree::TerminalNode *T_LOCKS();
    antlr4::tree::TerminalNode *T_LOG();
    antlr4::tree::TerminalNode *T_LOGGED();
    antlr4::tree::TerminalNode *T_LOGGING();
    antlr4::tree::TerminalNode *T_LOOP();
    antlr4::tree::TerminalNode *T_MATCHED();
    antlr4::tree::TerminalNode *T_MAX();
    antlr4::tree::TerminalNode *T_MAXTRANS();
    antlr4::tree::TerminalNode *T_MERGE();
    antlr4::tree::TerminalNode *T_MESSAGE_TEXT();
    antlr4::tree::TerminalNode *T_MICROSECOND();
    antlr4::tree::TerminalNode *T_MICROSECONDS();
    antlr4::tree::TerminalNode *T_MIN();
    antlr4::tree::TerminalNode *T_MULTISET();
    antlr4::tree::TerminalNode *T_NCHAR();
    antlr4::tree::TerminalNode *T_NEW();
    antlr4::tree::TerminalNode *T_NVARCHAR();
    antlr4::tree::TerminalNode *T_NO();
    antlr4::tree::TerminalNode *T_NOCOMPRESS();
    antlr4::tree::TerminalNode *T_NOCOUNT();
    antlr4::tree::TerminalNode *T_NOLOGGING();
    antlr4::tree::TerminalNode *T_NONE();
    antlr4::tree::TerminalNode *T_NOT();
    antlr4::tree::TerminalNode *T_NOTFOUND();
    antlr4::tree::TerminalNode *T_NUMERIC();
    antlr4::tree::TerminalNode *T_NUMBER();
    antlr4::tree::TerminalNode *T_OBJECT();
    antlr4::tree::TerminalNode *T_OFF();
    antlr4::tree::TerminalNode *T_ON();
    antlr4::tree::TerminalNode *T_ONLY();
    antlr4::tree::TerminalNode *T_OPEN();
    antlr4::tree::TerminalNode *T_OR();
    antlr4::tree::TerminalNode *T_OUT();
    antlr4::tree::TerminalNode *T_OUTER();
    antlr4::tree::TerminalNode *T_OVERWRITE();
    antlr4::tree::TerminalNode *T_OWNER();
    antlr4::tree::TerminalNode *T_PACKAGE();
    antlr4::tree::TerminalNode *T_PART_COUNT();
    antlr4::tree::TerminalNode *T_PART_LOC();
    antlr4::tree::TerminalNode *T_PARTITION();
    antlr4::tree::TerminalNode *T_PCTFREE();
    antlr4::tree::TerminalNode *T_PCTUSED();
    antlr4::tree::TerminalNode *T_PRECISION();
    antlr4::tree::TerminalNode *T_PRESERVE();
    antlr4::tree::TerminalNode *T_PRIMARY();
    antlr4::tree::TerminalNode *T_PRINT();
    antlr4::tree::TerminalNode *T_PROC();
    antlr4::tree::TerminalNode *T_PROCEDURE();
    antlr4::tree::TerminalNode *T_PWD();
    antlr4::tree::TerminalNode *T_QUALIFY();
    antlr4::tree::TerminalNode *T_QUERY_BAND();
    antlr4::tree::TerminalNode *T_QUIT();
    antlr4::tree::TerminalNode *T_QUOTED_IDENTIFIER();
    antlr4::tree::TerminalNode *T_RAISE();
    antlr4::tree::TerminalNode *T_RANK();
    antlr4::tree::TerminalNode *T_REAL();
    antlr4::tree::TerminalNode *T_REFERENCES();
    antlr4::tree::TerminalNode *T_REGEXP();
    antlr4::tree::TerminalNode *T_RR();
    antlr4::tree::TerminalNode *T_REPLACE();
    antlr4::tree::TerminalNode *T_RESIGNAL();
    antlr4::tree::TerminalNode *T_RESTRICT();
    antlr4::tree::TerminalNode *T_RESULT();
    antlr4::tree::TerminalNode *T_RESULT_SET_LOCATOR();
    antlr4::tree::TerminalNode *T_RETURN();
    antlr4::tree::TerminalNode *T_RETURNS();
    antlr4::tree::TerminalNode *T_REVERSE();
    antlr4::tree::TerminalNode *T_RIGHT();
    antlr4::tree::TerminalNode *T_RLIKE();
    antlr4::tree::TerminalNode *T_RS();
    antlr4::tree::TerminalNode *T_ROLE();
    antlr4::tree::TerminalNode *T_ROLLBACK();
    antlr4::tree::TerminalNode *T_ROW();
    antlr4::tree::TerminalNode *T_ROWS();
    antlr4::tree::TerminalNode *T_ROW_COUNT();
    antlr4::tree::TerminalNode *T_ROW_NUMBER();
    antlr4::tree::TerminalNode *T_SCHEMA();
    antlr4::tree::TerminalNode *T_SECOND();
    antlr4::tree::TerminalNode *T_SECONDS();
    antlr4::tree::TerminalNode *T_SECURITY();
    antlr4::tree::TerminalNode *T_SEGMENT();
    antlr4::tree::TerminalNode *T_SELECT();
    antlr4::tree::TerminalNode *T_SESSION();
    antlr4::tree::TerminalNode *T_SESSIONS();
    antlr4::tree::TerminalNode *T_SETS();
    antlr4::tree::TerminalNode *T_SHARE();
    antlr4::tree::TerminalNode *T_SIGNAL();
    antlr4::tree::TerminalNode *T_SIMPLE_DOUBLE();
    antlr4::tree::TerminalNode *T_SIMPLE_FLOAT();
    antlr4::tree::TerminalNode *T_SMALLDATETIME();
    antlr4::tree::TerminalNode *T_SMALLINT();
    antlr4::tree::TerminalNode *T_SQL();
    antlr4::tree::TerminalNode *T_SQLEXCEPTION();
    antlr4::tree::TerminalNode *T_SQLINSERT();
    antlr4::tree::TerminalNode *T_SQLSTATE();
    antlr4::tree::TerminalNode *T_SQLWARNING();
    antlr4::tree::TerminalNode *T_STATS();
    antlr4::tree::TerminalNode *T_STATISTICS();
    antlr4::tree::TerminalNode *T_STEP();
    antlr4::tree::TerminalNode *T_STDEV();
    antlr4::tree::TerminalNode *T_STD();
    antlr4::tree::TerminalNode *T_STORAGE();
    antlr4::tree::TerminalNode *T_STORED();
    antlr4::tree::TerminalNode *T_STRING();
    antlr4::tree::TerminalNode *T_SUBDIR();
    antlr4::tree::TerminalNode *T_SUBSTRING();
    antlr4::tree::TerminalNode *T_SUM();
    antlr4::tree::TerminalNode *T_SUMMARY();
    antlr4::tree::TerminalNode *T_SYSDATE();
    antlr4::tree::TerminalNode *T_SYS_REFCURSOR();
    antlr4::tree::TerminalNode *T_TABLE();
    antlr4::tree::TerminalNode *T_TABLESPACE();
    antlr4::tree::TerminalNode *T_TEMPORARY();
    antlr4::tree::TerminalNode *T_TERMINATED();
    antlr4::tree::TerminalNode *T_TEXTIMAGE_ON();
    antlr4::tree::TerminalNode *T_THEN();
    antlr4::tree::TerminalNode *T_TIMESTAMP();
    antlr4::tree::TerminalNode *T_TITLE();
    antlr4::tree::TerminalNode *T_TO();
    antlr4::tree::TerminalNode *T_TOP();
    antlr4::tree::TerminalNode *T_TRANSACTION();
    antlr4::tree::TerminalNode *T_TRIM();
    antlr4::tree::TerminalNode *T_TRUE();
    antlr4::tree::TerminalNode *T_TRUNCATE();
    antlr4::tree::TerminalNode *T_UNIQUE();
    antlr4::tree::TerminalNode *T_UPDATE();
    antlr4::tree::TerminalNode *T_UR();
    antlr4::tree::TerminalNode *T_USE();
    antlr4::tree::TerminalNode *T_USER();
    antlr4::tree::TerminalNode *T_USING();
    antlr4::tree::TerminalNode *T_VALUE();
    antlr4::tree::TerminalNode *T_VALUES();
    antlr4::tree::TerminalNode *T_VAR();
    antlr4::tree::TerminalNode *T_VARCHAR();
    antlr4::tree::TerminalNode *T_VARCHAR2();
    antlr4::tree::TerminalNode *T_VARYING();
    antlr4::tree::TerminalNode *T_VARIANCE();
    antlr4::tree::TerminalNode *T_VOLATILE();
    antlr4::tree::TerminalNode *T_WHILE();
    antlr4::tree::TerminalNode *T_WITH();
    antlr4::tree::TerminalNode *T_WITHOUT();
    antlr4::tree::TerminalNode *T_WORK();
    antlr4::tree::TerminalNode *T_XACT_ABORT();
    antlr4::tree::TerminalNode *T_XML();
    antlr4::tree::TerminalNode *T_YES();
    antlr4::tree::TerminalNode *T_T();
    antlr4::tree::TerminalNode *T_S();
    antlr4::tree::TerminalNode *T_SERDE();
    antlr4::tree::TerminalNode *T_PURGE();
    antlr4::tree::TerminalNode *T_BUCKETS();
    antlr4::tree::TerminalNode *T_SKEWED();
    antlr4::tree::TerminalNode *T_DIRECTORIES();
    antlr4::tree::TerminalNode *T_SERDEPROPERTIES();
    antlr4::tree::TerminalNode *T_RENAME();
    antlr4::tree::TerminalNode *T_SORTED();
    antlr4::tree::TerminalNode *T_SORT();
    antlr4::tree::TerminalNode *T_CHANGE();
    antlr4::tree::TerminalNode *T_EXCHANGE();
    antlr4::tree::TerminalNode *T_RECOVER();
    antlr4::tree::TerminalNode *T_PARTITIONS();
    antlr4::tree::TerminalNode *T_PROTECTION();
    antlr4::tree::TerminalNode *T_ARCHIVE();
    antlr4::tree::TerminalNode *T_UNARCHIVE();
    antlr4::tree::TerminalNode *T_TOUCH();
    antlr4::tree::TerminalNode *T_OFFLINE();
    antlr4::tree::TerminalNode *T_NO_DROP();
    antlr4::tree::TerminalNode *T_COMPACT();
    antlr4::tree::TerminalNode *T_CONCATENATE();
    antlr4::tree::TerminalNode *T_WAIT();
    antlr4::tree::TerminalNode *T_COLUMNS();
    antlr4::tree::TerminalNode *T_FIRST();
    antlr4::tree::TerminalNode *T_LAST();
    antlr4::tree::TerminalNode *T_NULLS();
    antlr4::tree::TerminalNode *T_AFTER();
    antlr4::tree::TerminalNode *T_MATERIALIZED();
    antlr4::tree::TerminalNode *T_REWRITE();
    antlr4::tree::TerminalNode *T_PARTITIONED();
    antlr4::tree::TerminalNode *T_DISTRIBUTED();
    antlr4::tree::TerminalNode *T_MACRO();
    antlr4::tree::TerminalNode *T_SHOW();
    antlr4::tree::TerminalNode *T_EXTENDED();
    antlr4::tree::TerminalNode *T_FORMATTED();
    antlr4::tree::TerminalNode *T_SEMI();
    antlr4::tree::TerminalNode *T_CROSS();
    antlr4::tree::TerminalNode *T_LATERAL();
    antlr4::tree::TerminalNode *T_RELOAD();
    antlr4::tree::TerminalNode *T_LOAD();
    antlr4::tree::TerminalNode *T_INPATH();
    antlr4::tree::TerminalNode *T_PRINCIPALS();
    antlr4::tree::TerminalNode *T_COMPACTIONS();
    antlr4::tree::TerminalNode *T_CONF();
    antlr4::tree::TerminalNode *T_ADMIN();
    antlr4::tree::TerminalNode *T_OPTION();
    antlr4::tree::TerminalNode *T_PRIVILEGES();
    antlr4::tree::TerminalNode *T_LOCK();
    antlr4::tree::TerminalNode *T_SHOW_DATABASE();
    antlr4::tree::TerminalNode *T_COMPUTE();
    antlr4::tree::TerminalNode *T_CACHE();
    antlr4::tree::TerminalNode *T_METADATA();
    antlr4::tree::TerminalNode *T_NOSCAN();
    antlr4::tree::TerminalNode *T_UNIONTYPE();
    antlr4::tree::TerminalNode *T_MAP();
    antlr4::tree::TerminalNode *T_ARRAY();
    antlr4::tree::TerminalNode *T_STRUCT();
    antlr4::tree::TerminalNode *T_ANALYZE();
    antlr4::tree::TerminalNode *T_EXPLAIN();
    antlr4::tree::TerminalNode *T_CBO();
    antlr4::tree::TerminalNode *T_AST();
    antlr4::tree::TerminalNode *T_DEPENDENCY();
    antlr4::tree::TerminalNode *T_AUTHORIZATION();
    antlr4::tree::TerminalNode *T_VECTORIZATION();
    antlr4::tree::TerminalNode *T_COST();
    antlr4::tree::TerminalNode *T_JOINCOST();
    antlr4::tree::TerminalNode *T_OPERATOR();
    antlr4::tree::TerminalNode *T_EXPRESSION();
    antlr4::tree::TerminalNode *T_DETAIL();
    antlr4::tree::TerminalNode *T_UNBOUNDED();
    antlr4::tree::TerminalNode *T_PRECEDING();
    antlr4::tree::TerminalNode *T_FOLLOWING();
    antlr4::tree::TerminalNode *T_RANGE();
    antlr4::tree::TerminalNode *T_TYPE();
    antlr4::tree::TerminalNode *T_FILEFORMAT();
    antlr4::tree::TerminalNode *T_SEQUENCEFILE();
    antlr4::tree::TerminalNode *T_TEXTFILE();
    antlr4::tree::TerminalNode *T_RCFILE();
    antlr4::tree::TerminalNode *T_ORC();
    antlr4::tree::TerminalNode *T_PARQUET();
    antlr4::tree::TerminalNode *T_AVRO();
    antlr4::tree::TerminalNode *T_JSONFILE();
    antlr4::tree::TerminalNode *T_INPUTFORMAT();
    antlr4::tree::TerminalNode *T_YEAR();
    antlr4::tree::TerminalNode *T_MONTH();
    antlr4::tree::TerminalNode *T_MINUTE();
    antlr4::tree::TerminalNode *T_TIME();
    antlr4::tree::TerminalNode *T_ZONE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Non_reserved_wordsContext* non_reserved_words();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool block_endSempred(Block_endContext *_localctx, size_t predicateIndex);
  bool bool_exprSempred(Bool_exprContext *_localctx, size_t predicateIndex);
  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

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



// Generated from /home/jona/myGit/myCode_repository/antlr4_cpp/greenplum/GreenPlumParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"


#include <string.h>




class  GreenPlumParser : public antlr4::Parser {
public:
  enum {
    ABORT_P = 1, ABSOLUTE_P = 2, ACCESS = 3, ACTION = 4, ACTIVE = 5, ADD_P = 6, 
    ADMIN = 7, AFTER = 8, AGGREGATE = 9, ALL = 10, ALSO = 11, ALTER = 12, 
    ALWAYS = 13, ANALYSE = 14, ANALYZE = 15, AND = 16, ANY = 17, ARRAY = 18, 
    AS = 19, ASC = 20, ASSERTION = 21, ASSIGNMENT = 22, ASYMMETRIC = 23, 
    AT = 24, AUTHORIZATION = 25, BACKWARD = 26, BEFORE = 27, BEGIN_P = 28, 
    BETWEEN = 29, BIGINT = 30, BINARY = 31, BIT = 32, BOOLEAN_P = 33, BOTH = 34, 
    BY = 35, CACHE = 36, CALLED = 37, CASCADE = 38, CASCADED = 39, CASE = 40, 
    CAST = 41, CHAIN = 42, CHARACTER = 43, CHARACTERISTICS = 44, CHAR_P = 45, 
    CHECK = 46, CHECKPOINT = 47, CLASS = 48, CLOSE = 49, CLUSTER = 50, COALESCE = 51, 
    COLLATE = 52, COLUMN = 53, COMMENT = 54, COMMIT = 55, COMMITED = 56, 
    COMMITTED = 57, CONCURRENCY = 58, CONCURRENTLY = 59, CONFIGURATION = 60, 
    CONNECT = 61, CONNECTION = 62, CONSTRAINT = 63, CONSTRAINTS = 64, CONTAINS = 65, 
    CONTENT_P = 66, CONTINUE_P = 67, CONVERSION_P = 68, COPY = 69, COST = 70, 
    CPU_RATE_LIMIT = 71, CPUSET = 72, CREATE = 73, CREATEDB = 74, CREATEEXTTABLE = 75, 
    CREATEROLE = 76, CREATEUSER = 77, CROSS = 78, CSV = 79, CUBE = 80, CURRENT_CATALOG = 81, 
    CURRENT_DATE = 82, CURRENT_P = 83, CURRENT_ROLE = 84, CURRENT_SCHEMA = 85, 
    CURRENT_TIME = 86, CURRENT_TIMESTAMP = 87, CURRENT_USER = 88, CURSOR = 89, 
    CYCLE = 90, DATABASE = 91, DATA_P = 92, DAY_P = 93, DEALLOCATE = 94, 
    DEC = 95, DECIMAL_P = 96, DECLARE = 97, DECODE = 98, DEFAULT = 99, DEFAULTS = 100, 
    DEFERRABLE = 101, DEFERRED = 102, DEFINER = 103, DELETE_P = 104, DELIMITER = 105, 
    DELIMITERS = 106, DENY = 107, DESC = 108, DICTIONARY = 109, DISABLE_P = 110, 
    DISCARD = 111, DISTINCT = 112, DISTRIBUTED = 113, DO = 114, DOCUMENT_P = 115, 
    DOMAIN_P = 116, DOUBLE_P = 117, DROP = 118, DXL = 119, EACH = 120, ELSE = 121, 
    ENABLE_P = 122, ENCODING = 123, ENCRYPTED = 124, END_P = 125, ENUM_P = 126, 
    ERRORS = 127, ESCAPE = 128, EVERY = 129, EXCEPT = 130, EXCHANGE = 131, 
    EXCLUDE = 132, EXCLUDING = 133, EXCLUSIVE = 134, EXECUTE = 135, EXISTS = 136, 
    EXPLAIN = 137, EXTENSION = 138, EXTERNAL = 139, EXTRACT = 140, FALSE_P = 141, 
    FAMILY = 142, FETCH = 143, FIELDS = 144, FILESPACE = 145, FILL = 146, 
    FILTER = 147, FIRST_P = 148, FLOAT_P = 149, FOLLOWING = 150, FOR = 151, 
    FORCE = 152, FOREIGN = 153, FORMAT = 154, FORWARD = 155, FREEZE = 156, 
    FROM = 157, FULL = 158, FUNCTION = 159, GLOBAL = 160, GRANT = 161, GRANTED = 162, 
    GREATEST = 163, GROUP_ID = 164, GROUPING = 165, GROUP_P = 166, HANDLER = 167, 
    HASH = 168, HAVING = 169, HEADER_P = 170, HOLD = 171, HOST = 172, HOUR_P = 173, 
    IDENTITY_P = 174, IF_P = 175, IGNORE_P = 176, ILIKE = 177, IMMEDIATE = 178, 
    IMMUTABLE = 179, IMPLICIT_P = 180, INCLUDING = 181, INCLUSIVE = 182, 
    INCREMENT = 183, INDEX = 184, INDEXES = 185, INHERIT = 186, INHERITS = 187, 
    INITIALLY = 188, INLINE_P = 189, INNER_P = 190, INOUT = 191, IN_P = 192, 
    INPUT_P = 193, INSENSITIVE = 194, INSERT = 195, INSTEAD = 196, INTEGER = 197, 
    INTERSECT = 198, INTERVAL = 199, INTO = 200, INT_P = 201, INVOKER = 202, 
    IS = 203, ISNULL = 204, ISOLATION = 205, JOIN = 206, KEY = 207, LANGUAGE = 208, 
    LARGE_P = 209, LAST_P = 210, LEADING = 211, LEAST = 212, LEFT = 213, 
    LEVEL = 214, LIKE = 215, LIMIT = 216, LIST = 217, LISTEN = 218, LOAD = 219, 
    LOCAL = 220, LOCALTIME = 221, LOCALTIMESTAMP = 222, LOCATION = 223, 
    LOCK_P = 224, LOGIN_P = 225, LOG_P = 226, MAPPING = 227, MASTER = 228, 
    MATCH = 229, MAXVALUE = 230, MEDIAN = 231, MEMORY_LIMIT = 232, MEMORY_SHARED_QUOTA = 233, 
    MEMORY_SPILL_RATIO = 234, MERGE = 235, MINUTE_P = 236, MINVALUE = 237, 
    MISSING = 238, MODE = 239, MODIFIES = 240, MODIFY = 241, MONTH_P = 242, 
    MOVE = 243, MPP = 244, NAME_P = 245, NAMES = 246, NATIONAL = 247, NATURAL = 248, 
    NCHAR = 249, NEW = 250, NEXT = 251, NO = 252, NOCREATEDB = 253, NOCREATEEXTTABLE = 254, 
    NOCREATEROLE = 255, NOCREATEUSER = 256, NOINHERIT = 257, NOLOGIN_P = 258, 
    NONE = 259, NOOVERCOMMIT = 260, NOSUPERUSER = 261, NOT = 262, NOTHING = 263, 
    NOTIFY = 264, NOTNULL = 265, NOWAIT = 266, NULLIF = 267, NULL_P = 268, 
    NULLS_FIRST = 269, NULLS_LAST = 270, NULLS_P = 271, NUMERIC = 272, OBJECT_P = 273, 
    OF = 274, OFF = 275, OFFSET = 276, OIDS = 277, OLD = 278, ON = 279, 
    ONLY = 280, OPERATOR = 281, OPTION = 282, OPTIONS = 283, OR = 284, ORDER = 285, 
    ORDERED = 286, OTHERS = 287, OUTER_P = 288, OUT_P = 289, OVER = 290, 
    OVERCOMMIT = 291, OVERLAPS = 292, OVERLAY = 293, OWNED = 294, OWNER = 295, 
    PARSER = 296, PARTIAL = 297, PARTITION = 298, PARTITIONS = 299, PASSING = 300, 
    PASSWORD = 301, PERCENT = 302, PERCENTILE_CONT = 303, PERCENTILE_DISC = 304, 
    PLACING = 305, PLANS = 306, POSITION = 307, PRECEDING = 308, PRECISION = 309, 
    PREPARE = 310, PREPARED = 311, PRESERVE = 312, PRIMARY = 313, PRIOR = 314, 
    PRIVILEGES = 315, PROCEDURAL = 316, PROCEDURE = 317, PROGRAM = 318, 
    PROTOCOL = 319, PUBLIC = 320, QUEUE = 321, QUOTE = 322, RANDOMLY = 323, 
    RANGE = 324, READ = 325, READABLE = 326, READS = 327, REAL = 328, REASSIGN = 329, 
    RECHECK = 330, RECURSIVE = 331, REF = 332, REFERENCES = 333, REINDEX = 334, 
    REJECT_P = 335, RELATIVE_P = 336, RELEASE = 337, RENAME = 338, REPEATABLE = 339, 
    REPLACE = 340, REPLICA = 341, RESET = 342, RESOURCE = 343, RESTART = 344, 
    RESTRICT = 345, RETURNING = 346, RETURNS = 347, REVOKE = 348, RIGHT = 349, 
    ROLE = 350, ROLLBACK = 351, ROLLUP = 352, ROOTPARTITION = 353, ROW = 354, 
    ROWS = 355, RULE = 356, SAVEPOINT = 357, SCATTER = 358, SCHEMA = 359, 
    SCROLL = 360, SEARCH = 361, SECOND_P = 362, SECURITY = 363, SEGMENT = 364, 
    SELECT = 365, SEQUENCE = 366, SERIALIZABLE = 367, SESSION = 368, SESSION_USER = 369, 
    SET = 370, SETOF = 371, SETS = 372, SHARE = 373, SHOW = 374, SIMILAR = 375, 
    SIMPLE = 376, SMALLINT = 377, SOME = 378, SPLIT = 379, SQL = 380, STABLE = 381, 
    STANDALONE_P = 382, START = 383, STATEMENT = 384, STATISTICS = 385, 
    STDIN = 386, STDOUT = 387, STORAGE = 388, STRICT_P = 389, STRIP_P = 390, 
    SUBPARTITION = 391, SUBPARTITIONS = 392, SUBSTRING = 393, SUPERUSER_P = 394, 
    SYMMETRIC = 395, SYSID = 396, SYSTEM_P = 397, TABLE = 398, TABLESPACE = 399, 
    TEMP = 400, TEMPLATE = 401, TEMPORARY = 402, TEXT_P = 403, THEN = 404, 
    THRESHOLD = 405, TIES = 406, TIME = 407, TIMESTAMP = 408, TO = 409, 
    TRAILING = 410, TRANSACTION = 411, TREAT = 412, TRIGGER = 413, TRIM = 414, 
    TRUE_P = 415, TRUNCATE = 416, TRUSTED = 417, TYPE_P = 418, UMINUS = 419, 
    UNBOUNDED = 420, UNCOMMITTED = 421, UNENCRYPTED = 422, UNION = 423, 
    UNIQUE = 424, UNKNOWN = 425, UNLISTEN = 426, UNTIL = 427, UPDATE = 428, 
    USAGE = 429, USER = 430, USING = 431, VACUUM = 432, VALID = 433, VALIDATION = 434, 
    VALIDATOR = 435, VALUE_P = 436, VALUES = 437, VARCHAR = 438, VARIADIC = 439, 
    VARYING = 440, VERBOSE = 441, VERSION_P = 442, VIEW = 443, VOLATILE = 444, 
    WEB = 445, WHEN = 446, WHERE = 447, WHITESPACE_P = 448, WINDOW = 449, 
    WITH = 450, WITHIN = 451, WITHOUT = 452, WORK = 453, WRITABLE = 454, 
    WRITE = 455, XMLATTRIBUTES = 456, XMLCONCAT = 457, XMLELEMENT = 458, 
    XMLEXISTS = 459, XMLFOREST = 460, XML_P = 461, XMLPARSE = 462, XMLPI = 463, 
    XMLROOT = 464, XMLSERIALIZE = 465, YEAR_P = 466, YES_P = 467, ZONE = 468, 
    PERCENT_SIGN = 469, AMPERSAND = 470, LEFT_PAREN = 471, RIGHT_PAREN = 472, 
    DOUBLE_ASTERISK = 473, ASTERISK = 474, PLUS_SIGN = 475, MINUS_SIGN = 476, 
    COMMA = 477, SOLIDUS = 478, AT_SIGN = 479, ASSIGN_OP = 480, PERIOD = 481, 
    SLASH_SINGLE = 482, QUESTION_MARK = 483, NOT_EQUAL_OP = 484, CARRET_OPERATOR_PART = 485, 
    TILDE_OPERATOR_PART = 486, EXCLAMATION_OPERATOR_PART = 487, GREATER_THAN_OP = 488, 
    LESS_THAN_OP = 489, COLON = 490, SEMICOLON = 491, POUND_SIGN = 492, 
    TYPECAST = 493, BAR = 494, EQUALS_OP = 495, LEFT_BRACKET = 496, RIGHT_BRACKET = 497, 
    SINGLE_LINE_COMMENT = 498, MULTI_LINE_COMMENT = 499, SPACES = 500, CHAR_STRING = 501, 
    REGULAR_ID = 502, DELIMITED_STR = 503, SCONST = 504, ICONST = 505, FCONST = 506, 
    BCONST = 507, XCONST = 508, PARAM = 509, OP_CHARS = 510
  };

  enum {
    RuleStmtblock = 0, RuleStmtmulti = 1, RuleStmt = 2, RuleCreate_queue_stmt = 3, 
    RuleOpt_queue_elem = 4, RuleAlter_queue_stmt = 5, RuleWith_out_definition = 6, 
    RuleDrop_queue_stmt = 7, RuleCreate_resource_group_stmt = 8, RuleDrop_resource_group_stmt = 9, 
    RuleAlter_resource_group_stmt = 10, RuleResource_group_elem = 11, RuleCreate_role_stmt = 12, 
    RuleOpt_with = 13, RuleRole_elem = 14, RuleDeny_login_role = 15, RuleDeny_interval = 16, 
    RuleDeny_day_specifier = 17, RuleDeny_point = 18, RuleOpt_time = 19, 
    RuleExttab_auth_list = 20, RuleKeyvalue_list = 21, RuleKeyvalue_pair = 22, 
    RuleCreate_user_stmt = 23, RuleAlter_role_stmt = 24, RuleAlter_role_set_stmt = 25, 
    RuleAlter_role_elem = 26, RuleAlter_user_stmt = 27, RuleAlter_user_set_stmt = 28, 
    RuleDrop_role_stmt = 29, RuleDrop_user_stmt = 30, RuleCreate_group_stmt = 31, 
    RuleAlter_group_stmt = 32, RuleAdd_drop = 33, RuleDrop_group_stmt = 34, 
    RuleCreate_schema_stmt = 35, RuleSchema_name = 36, RuleSchema_stmt = 37, 
    RuleVariable_set_stmt = 38, RuleSet_rest = 39, RuleVar_name = 40, RuleVar_list = 41, 
    RuleVar_value = 42, RuleIso_level = 43, RuleOpt_boolean = 44, RuleZone_value = 45, 
    RuleParen_iconst = 46, RuleOpt_encoding = 47, RuleColid_or_sconst = 48, 
    RuleVariable_reset_stmt = 49, RuleSet_reset_clause = 50, RuleVariable_show_stmt = 51, 
    RuleConstraints_set_stmt = 52, RuleConstraints_set_list = 53, RuleConstraints_set_mode = 54, 
    RuleCheck_point_stmt = 55, RuleDiscard_stmt = 56, RuleAlter_table_stmt = 57, 
    RuleAlter_table_cmds = 58, RuleAlter_table_cmd = 59, RuleOpt_table_partition_split_into = 60, 
    RuleOpt_table_partition_merge_into = 61, RuleTable_partition_modify = 62, 
    RuleOpt_table_partition_exchange_validate = 63, RuleAlter_table_partition_id_spec = 64, 
    RuleAlter_table_partition_id_spec_with_opt_default = 65, RuleAlter_table_partition_cmd = 66, 
    RuleAlter_rel_cmds = 67, RuleAlter_rel_cmd = 68, RuleAlter_column_default = 69, 
    RuleOpt_drop_behavior = 70, RuleAlter_using = 71, RuleClose_portal_stmt = 72, 
    RuleCopy_stmt = 73, RuleCopy_from = 74, RuleSkip_external_partition = 75, 
    RuleCopy_file_name = 76, RuleCopy_opt_item = 77, RuleOpt_oids = 78, 
    RuleCopy_delimiter = 79, RuleCreate_stmt = 80, RuleOpt_temp = 81, RuleTable_element_list = 82, 
    RuleTable_element = 83, RuleColumn_reference_storage_directive = 84, 
    RuleColumn_def = 85, RuleCol_constraint = 86, RuleOpt_storage_encoding = 87, 
    RuleCol_constraint_elem = 88, RuleConstraint_attr = 89, RuleTable_like_clause = 90, 
    RuleTable_list_option = 91, RuleTable_constraint = 92, RuleConstraint_elem = 93, 
    RuleParen_column = 94, RuleParen_column_list = 95, RuleColumn_list = 96, 
    RuleColumn_elem = 97, RuleKey_match = 98, RuleKey_actions = 99, RuleKey_update = 100, 
    RuleKey_delete = 101, RuleKey_action = 102, RuleOpt_inherit = 103, RuleOpt_with_def_oids = 104, 
    RuleOn_commit_option = 105, RuleOpt_table_space = 106, RuleConstraint_table_space = 107, 
    RuleDistributed_by = 108, RuleOpt_distributed_by = 109, RuleTab_partition_column_enc_list = 110, 
    RuleOpt_tab_partition_storage_attr = 111, RuleOpt_tab_partition_spec = 112, 
    RuleOpt_tab_sub_partition_spec = 113, RuleTab_partition_elem_list = 114, 
    RuleTab_sub_partition_elem_list = 115, RuleTab_part_val_no_paran = 116, 
    RuleTab_part_val = 117, RuleTab_partition_boundary_spec_val_list = 118, 
    RuleOpt_tab_partition_range_inclusive = 119, RuleTab_partition_boundary_spec_start = 120, 
    RuleTab_partition_boundary_spec_end = 121, RuleOpt_tab_partition_boundary_spec_every = 122, 
    RuleTab_partition_boundary_spec = 123, RuleParen_part_values_single = 124, 
    RuleMulti_spec_value_list = 125, RulePart_values_single = 126, RulePart_values_clause = 127, 
    RulePart_values_or_spec_list = 128, RuleTab_partition_elem = 129, RuleTab_sub_partition_elem = 130, 
    RuleTab_partition_elemOption = 131, RuleTab_partition_name_decl = 132, 
    RuleTab_partition_default_name_decl = 133, RuleTab_sub_partition_name_decl = 134, 
    RuleTab_sub_partition_default_name_decl = 135, RuleTab_partition_by_type = 136, 
    RuleOpt_tab_partition_by = 137, RuleTab_sub_partition_by_list = 138, 
    RuleTab_sub_partition_template = 139, RuleTab_sub_partition_by = 140, 
    RuleOpt_partitions_number = 141, RuleCreate_as_stmt = 142, RuleCreate_as_target = 143, 
    RuleOpt_create_as = 144, RuleCreate_as_list = 145, RuleCreate_as_element = 146, 
    RuleOpt_with_data = 147, RuleCreate_external_stmt = 148, RuleOpt_writable = 149, 
    RuleExt_type_desc = 150, RuleExt_on_clause_item = 151, RuleDouble_parens = 152, 
    RuleFormat_opt = 153, RuleFormat_opt_list = 154, RuleFormat_def_list = 155, 
    RuleFormat_def_item = 156, RuleFormat_opt_item = 157, RuleExt_options_opt = 158, 
    RuleExt_options = 159, RuleExt_options_list = 160, RuleExt_options_item = 161, 
    RuleExt_table_element_list = 162, RuleExt_table_element = 163, RuleExt_column_def = 164, 
    RuleOpt_single_row_error_handling = 165, RuleOpt_log_error_table = 166, 
    RuleOpt_sreh_limit_type = 167, RuleExt_opt_encoding_list = 168, RuleExt_opt_encoding_item = 169, 
    RuleCreate_seq_stmt = 170, RuleAlter_seq_stmt = 171, RuleOpt_seq_list = 172, 
    RuleOpt_seq_elem = 173, RuleNumberic_only = 174, RuleFloat_only = 175, 
    RuleInteger_only = 176, RuleCreate_p_lang_stmt = 177, RuleCreate_p_lang_stmtOption = 178, 
    RuleHandler_name = 179, RuleOpt_inline_handler = 180, RuleValidator_clause = 181, 
    RuleOpt_validator = 182, RuleDrop_p_lang_stmt = 183, RuleCreate_file_space_stmt = 184, 
    RuleFile_space_seg_list = 185, RuleFile_space_seg = 186, RuleOpt_owner = 187, 
    RuleCreate_table_space_stmt = 188, RuleCreate_extension_stmt = 189, 
    RuleCreate_extension_opt_list = 190, RuleCreate_extension_opt_item = 191, 
    RuleAlter_extension_stmt = 192, RuleAlter_extension_opt_list = 193, 
    RuleAlter_extension_opt_item = 194, RuleAlter_extension_content_stmt = 195, 
    RuleAlter_extension_content_stmtOption = 196, RuleCreate_trig_stmt = 197, 
    RuleTrigger_action_time = 198, RuleTrigger_events = 199, RuleTrigger_one_event = 200, 
    RuleTrigger_for_spec = 201, RuleTrigger_for_type = 202, RuleTrigger_func_args = 203, 
    RuleTrigger_func_arg = 204, RuleOpt_constr_from_table = 205, RuleConstraint_attr_spec = 206, 
    RuleConstraint_deferrability_spec = 207, RuleConstraint_time_spec = 208, 
    RuleDrop_trig_stmt = 209, RuleCreate_assert_stmt = 210, RuleDrop_assert_stmt = 211, 
    RuleDefine_stmt = 212, RuleDefinition = 213, RuleDef_list = 214, RuleDef_elem = 215, 
    RuleDef_arg = 216, RuleAggr_args = 217, RuleOld_aggr_definition = 218, 
    RuleOld_aggr_list = 219, RuleOld_aggr_elem = 220, RuleEnum_val_list = 221, 
    RuleCreate_op_class_stmt = 222, RuleOpclass_item_list = 223, RuleOpclass_item = 224, 
    RuleOpt_opfamily = 225, RuleCreate_op_family_stmt = 226, RuleAlter_op_family_stmt = 227, 
    RuleOpclass_drop_list = 228, RuleOpclass_drop = 229, RuleDrop_op_class_stmt = 230, 
    RuleDrop_op_family_stmt = 231, RuleDrop_owned_stmt = 232, RuleReassign_owned_stmt = 233, 
    RuleDrop_stmt = 234, RuleDrop_type = 235, RuleAny_name_list = 236, RuleAny_name = 237, 
    RuleAttrs = 238, RuleTruncate_stmt = 239, RuleComment_stmt = 240, RuleComment_stmtOption = 241, 
    RuleComment_option = 242, RuleComment_type = 243, RuleComment_text = 244, 
    RuleFetch_stmt = 245, RuleFetch_direction = 246, RuleGrant_stmt = 247, 
    RuleRevoke_stmt = 248, RulePrivileges = 249, RulePrivilege_list = 250, 
    RulePrivilege = 251, RulePrivilege_target = 252, RuleGrantee_list = 253, 
    RuleGrantee = 254, RuleOpt_grant_grant_option = 255, RuleFunction_with_argtypes_list = 256, 
    RuleFunction_with_argtypes = 257, RuleGrant_role_stmt = 258, RuleRevoke_role_stmt = 259, 
    RuleOpt_grant_admin_option = 260, RuleOpt_granted_by = 261, RuleIndex_stmt = 262, 
    RuleIndex_params = 263, RuleIndex_elem = 264, RuleOpt_class = 265, RuleOpt_asc_desc = 266, 
    RuleOpt_nulls_order = 267, RuleCreate_function_stmt = 268, RuleOpt_or_replace = 269, 
    RuleFunc_args = 270, RuleFunc_args_list = 271, RuleFunc_args_with_defaults = 272, 
    RuleFunc_args_with_defaults_list = 273, RuleFunc_arg = 274, RuleFunc_arg_with_default = 275, 
    RuleArg_class = 276, RuleParam_name = 277, RuleFunc_return = 278, RuleFunc_type = 279, 
    RuleFunc_type_table_option_list = 280, RuleFunc_type_table_option = 281, 
    RuleCreatefunc_opt_list = 282, RuleCommon_func_opt_item = 283, RuleCreatefunc_opt_item = 284, 
    RuleFunc_as = 285, RuleTable_func_column = 286, RuleTable_func_column_list = 287, 
    RuleAlter_function_stmt = 288, RuleAlterfunc_opt_list = 289, RuleRemove_func_stmt = 290, 
    RuleRemove_aggr_stmt = 291, RuleRemove_oper_stmt = 292, RuleOper_argtypes = 293, 
    RuleAny_operator = 294, RuleDo_stmt = 295, RuleDostmt_opt_item = 296, 
    RuleCreate_cast_stmt = 297, RuleCast_context = 298, RuleDrop_cast_stmt = 299, 
    RuleReindex_stmt = 300, RuleAlter_type_stmt = 301, RuleRename_stmt = 302, 
    RuleOpt_column = 303, RuleAlter_object_schema_stmt = 304, RuleAlter_owner_stmt = 305, 
    RuleRule_stmt = 306, RuleRule_action_list = 307, RuleRule_action_multi = 308, 
    RuleRule_action_stmt = 309, RuleEvent = 310, RuleOpt_instead = 311, 
    RuleDrop_rule_stmt = 312, RuleNotify_stmt = 313, RuleListen_stmt = 314, 
    RuleUnlisten_stmt = 315, RuleTransaction_stmt = 316, RuleOpt_transaction = 317, 
    RuleTransaction_mode_item = 318, RuleTransaction_mode_list = 319, RuleView_stmt = 320, 
    RuleOpt_check_option = 321, RuleLoad_stmt = 322, RuleCreatedb_stmt = 323, 
    RuleCreatedb_opt_item = 324, RuleAlter_database_stmt = 325, RuleAlter_database_set_stmt = 326, 
    RuleAlterdb_opt_item = 327, RuleDropdb_stmt = 328, RuleCreate_domain_stmt = 329, 
    RuleAlter_domain_stmt = 330, RuleAlter_domain_option = 331, RuleAlter_tsdictionary_stmt = 332, 
    RuleAlter_tsconfiguration_stmt = 333, RuleAlter_txt_search_conf_option = 334, 
    RuleCreate_conversion_stmt = 335, RuleCluster_stmt = 336, RuleCluster_option = 337, 
    RuleVacuum_stmt = 338, RuleAnalyze_stmt = 339, RuleAnalyze_keyword = 340, 
    RuleParen_name_list = 341, RuleExplain_stmt = 342, RuleExplainable_stmt = 343, 
    RulePrepare_stmt = 344, RuleParen_type_list = 345, RulePreparable_stmt = 346, 
    RuleExecute_stmt = 347, RuleDeallocate_stmt = 348, RuleCdb_string_list = 349, 
    RuleCdb_string = 350, RuleInsert_stmt = 351, RuleInsert_rest = 352, 
    RuleInsert_column_list = 353, RuleInsert_column_item = 354, RuleReturning_clause = 355, 
    RuleDelete_stmt = 356, RuleLock_stmt = 357, RuleOpt_lock = 358, RuleLock_type = 359, 
    RuleUpdate_stmt = 360, RuleSet_clause_list = 361, RuleSet_clause = 362, 
    RuleSingle_set_clause = 363, RuleMultiple_set_clause = 364, RuleSet_target = 365, 
    RuleSet_target_list = 366, RuleDeclare_cursor_stmt = 367, RuleCursor_option = 368, 
    RuleOpt_hold = 369, RuleSelect_stmt = 370, RuleSubquery_basic_elements = 371, 
    RuleSubquery_operation_part = 372, RuleSelect_with_parens = 373, RuleSelect_no_parens = 374, 
    RuleSimple_select = 375, RuleWith_clause = 376, RuleCte_list = 377, 
    RuleCommon_table_expr = 378, RuleInto_clause = 379, RuleOpt_tempTableName = 380, 
    RuleOpt_distinct = 381, RuleSort_clause = 382, RuleSortby_list = 383, 
    RuleSortby = 384, RuleSelect_limit = 385, RuleSelect_limit_value = 386, 
    RuleOpt_select_fetch_first_value = 387, RuleSelect_offset_value = 388, 
    RuleSelect_offset_value2 = 389, RuleRow_or_rows = 390, RuleFirst_or_next = 391, 
    RuleGroup_clause = 392, RuleGroup_elem_list = 393, RuleGroup_elem = 394, 
    RuleHaving_clause = 395, RuleFor_locking_clause = 396, RuleFor_locking_item = 397, 
    RuleLocked_rels_list = 398, RuleValues_clause = 399, RuleFrom_clause = 400, 
    RuleFrom_list = 401, RuleTable_ref = 402, RuleJoin_type = 403, RuleJoin_qual = 404, 
    RuleRelation_expr = 405, RuleRelation_expr_opt_alias = 406, RuleFunc_table = 407, 
    RuleWhere_clause = 408, RuleWhere_or_current_clause = 409, RuleTable_func_element_list = 410, 
    RuleTable_func_element = 411, RuleTypename_pg = 412, RuleOpt_array_bounds = 413, 
    RuleSimple_typename = 414, RuleConst_typename = 415, RuleGeneric_type = 416, 
    RuleNumeric = 417, RuleBit = 418, RuleConst_bit = 419, RuleBit_with_length = 420, 
    RuleBit_without_length = 421, RuleMulti_character = 422, RuleConst_character = 423, 
    RuleCharacter_with_length = 424, RuleCharacter_without_length = 425, 
    RuleCharacter = 426, RuleOpt_charset = 427, RuleConst_datatime = 428, 
    RuleConst_interval = 429, RuleOpt_timezone = 430, RuleOpt_interval = 431, 
    RuleA_expr = 432, RuleLogical_expr = 433, RuleMultiset_expr = 434, RuleRelational_expr = 435, 
    RuleRelational_op = 436, RuleCompound_expr = 437, RuleBetween_elements = 438, 
    RuleConcatenation_list = 439, RuleConcatenation = 440, RuleModel_expr = 441, 
    RuleUnary_expr = 442, RuleC_expr = 443, RuleScatter_clause = 444, RuleTable_value_select_clause = 445, 
    RuleSimple_func = 446, RuleSimple_func_params = 447, RuleFunc_expr = 448, 
    RuleXml_root_version = 449, RuleOpt_xml_root_standalone = 450, RuleXml_attributes = 451, 
    RuleXml_attribute_list = 452, RuleXml_attribute_el = 453, RuleDocument_or_content = 454, 
    RuleXml_whitespace_option = 455, RuleXmlexists_argument = 456, RuleWindow_clause = 457, 
    RuleWindow_definition_list = 458, RuleWindow_definition = 459, RuleWindow_specification = 460, 
    RuleOpt_partition_clause = 461, RuleWindow_frame_clause = 462, RuleWindow_frame_units = 463, 
    RuleWindow_frame_extent = 464, RuleWindow_frame_start = 465, RuleWindow_frame_between = 466, 
    RuleWindow_frame_bound = 467, RuleWindow_frame_exclusion = 468, RuleRow = 469, 
    RuleOp_signs = 470, RuleAll_Op = 471, RuleQual_Op = 472, RuleQual_all_Op = 473, 
    RuleSubquery_Op = 474, RuleParen_expr_list = 475, RuleExpr_list = 476, 
    RuleType_list = 477, RuleArray_expr = 478, RuleArray_expr_list = 479, 
    RuleExtract_list = 480, RuleExtract_arg = 481, RuleOverlay_list = 482, 
    RuleOverlay_placing = 483, RulePosition_list = 484, RuleSubstr_list = 485, 
    RuleSubstr_from = 486, RuleSubstr_for = 487, RuleTrim_list = 488, RuleIn_expr = 489, 
    RuleCase_expr = 490, RuleWhen_clause = 491, RuleWhen_operand = 492, 
    RuleCase_default = 493, RuleCase_arg = 494, RuleDecode_expr = 495, RuleSearch_result = 496, 
    RuleDecode_default = 497, RuleColumnref = 498, RuleIndirection_el = 499, 
    RuleIndirection = 500, RuleCtext_expr = 501, RuleCtext_expr_list = 502, 
    RuleCtext_row = 503, RuleTarget_list = 504, RuleTarget_el = 505, RuleRelation_name = 506, 
    RuleQualified_name_list = 507, RuleQualified_name = 508, RuleName_list = 509, 
    RuleName = 510, RuleCte_name = 511, RuleDatabase_name = 512, RuleAccess_method = 513, 
    RuleAttr_name = 514, RuleIndex_name = 515, RuleFile_name = 516, RuleFunc_name = 517, 
    RuleA_expr_const = 518, RuleIconst = 519, RuleSconst = 520, RuleRole_id = 521, 
    RuleQueue_id = 522, RuleSigned_iconst = 523, RuleColid = 524, RuleType_function_name = 525, 
    RuleCol_label = 526, RuleIdentifier = 527, RuleUnreserved_keyword = 528, 
    RuleKeywords_ok_in_alias_no_as = 529, RulePartition_colid = 530, RulePartition_ident_key_word = 531, 
    RuleCol_name_keyword = 532, RuleType_func_name_keyword = 533, RuleReserved_keyword = 534, 
    RuleSpecial_rule_relation = 535
  };

  GreenPlumParser(antlr4::TokenStream *input);
  ~GreenPlumParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class StmtblockContext;
  class StmtmultiContext;
  class StmtContext;
  class Create_queue_stmtContext;
  class Opt_queue_elemContext;
  class Alter_queue_stmtContext;
  class With_out_definitionContext;
  class Drop_queue_stmtContext;
  class Create_resource_group_stmtContext;
  class Drop_resource_group_stmtContext;
  class Alter_resource_group_stmtContext;
  class Resource_group_elemContext;
  class Create_role_stmtContext;
  class Opt_withContext;
  class Role_elemContext;
  class Deny_login_roleContext;
  class Deny_intervalContext;
  class Deny_day_specifierContext;
  class Deny_pointContext;
  class Opt_timeContext;
  class Exttab_auth_listContext;
  class Keyvalue_listContext;
  class Keyvalue_pairContext;
  class Create_user_stmtContext;
  class Alter_role_stmtContext;
  class Alter_role_set_stmtContext;
  class Alter_role_elemContext;
  class Alter_user_stmtContext;
  class Alter_user_set_stmtContext;
  class Drop_role_stmtContext;
  class Drop_user_stmtContext;
  class Create_group_stmtContext;
  class Alter_group_stmtContext;
  class Add_dropContext;
  class Drop_group_stmtContext;
  class Create_schema_stmtContext;
  class Schema_nameContext;
  class Schema_stmtContext;
  class Variable_set_stmtContext;
  class Set_restContext;
  class Var_nameContext;
  class Var_listContext;
  class Var_valueContext;
  class Iso_levelContext;
  class Opt_booleanContext;
  class Zone_valueContext;
  class Paren_iconstContext;
  class Opt_encodingContext;
  class Colid_or_sconstContext;
  class Variable_reset_stmtContext;
  class Set_reset_clauseContext;
  class Variable_show_stmtContext;
  class Constraints_set_stmtContext;
  class Constraints_set_listContext;
  class Constraints_set_modeContext;
  class Check_point_stmtContext;
  class Discard_stmtContext;
  class Alter_table_stmtContext;
  class Alter_table_cmdsContext;
  class Alter_table_cmdContext;
  class Opt_table_partition_split_intoContext;
  class Opt_table_partition_merge_intoContext;
  class Table_partition_modifyContext;
  class Opt_table_partition_exchange_validateContext;
  class Alter_table_partition_id_specContext;
  class Alter_table_partition_id_spec_with_opt_defaultContext;
  class Alter_table_partition_cmdContext;
  class Alter_rel_cmdsContext;
  class Alter_rel_cmdContext;
  class Alter_column_defaultContext;
  class Opt_drop_behaviorContext;
  class Alter_usingContext;
  class Close_portal_stmtContext;
  class Copy_stmtContext;
  class Copy_fromContext;
  class Skip_external_partitionContext;
  class Copy_file_nameContext;
  class Copy_opt_itemContext;
  class Opt_oidsContext;
  class Copy_delimiterContext;
  class Create_stmtContext;
  class Opt_tempContext;
  class Table_element_listContext;
  class Table_elementContext;
  class Column_reference_storage_directiveContext;
  class Column_defContext;
  class Col_constraintContext;
  class Opt_storage_encodingContext;
  class Col_constraint_elemContext;
  class Constraint_attrContext;
  class Table_like_clauseContext;
  class Table_list_optionContext;
  class Table_constraintContext;
  class Constraint_elemContext;
  class Paren_columnContext;
  class Paren_column_listContext;
  class Column_listContext;
  class Column_elemContext;
  class Key_matchContext;
  class Key_actionsContext;
  class Key_updateContext;
  class Key_deleteContext;
  class Key_actionContext;
  class Opt_inheritContext;
  class Opt_with_def_oidsContext;
  class On_commit_optionContext;
  class Opt_table_spaceContext;
  class Constraint_table_spaceContext;
  class Distributed_byContext;
  class Opt_distributed_byContext;
  class Tab_partition_column_enc_listContext;
  class Opt_tab_partition_storage_attrContext;
  class Opt_tab_partition_specContext;
  class Opt_tab_sub_partition_specContext;
  class Tab_partition_elem_listContext;
  class Tab_sub_partition_elem_listContext;
  class Tab_part_val_no_paranContext;
  class Tab_part_valContext;
  class Tab_partition_boundary_spec_val_listContext;
  class Opt_tab_partition_range_inclusiveContext;
  class Tab_partition_boundary_spec_startContext;
  class Tab_partition_boundary_spec_endContext;
  class Opt_tab_partition_boundary_spec_everyContext;
  class Tab_partition_boundary_specContext;
  class Paren_part_values_singleContext;
  class Multi_spec_value_listContext;
  class Part_values_singleContext;
  class Part_values_clauseContext;
  class Part_values_or_spec_listContext;
  class Tab_partition_elemContext;
  class Tab_sub_partition_elemContext;
  class Tab_partition_elemOptionContext;
  class Tab_partition_name_declContext;
  class Tab_partition_default_name_declContext;
  class Tab_sub_partition_name_declContext;
  class Tab_sub_partition_default_name_declContext;
  class Tab_partition_by_typeContext;
  class Opt_tab_partition_byContext;
  class Tab_sub_partition_by_listContext;
  class Tab_sub_partition_templateContext;
  class Tab_sub_partition_byContext;
  class Opt_partitions_numberContext;
  class Create_as_stmtContext;
  class Create_as_targetContext;
  class Opt_create_asContext;
  class Create_as_listContext;
  class Create_as_elementContext;
  class Opt_with_dataContext;
  class Create_external_stmtContext;
  class Opt_writableContext;
  class Ext_type_descContext;
  class Ext_on_clause_itemContext;
  class Double_parensContext;
  class Format_optContext;
  class Format_opt_listContext;
  class Format_def_listContext;
  class Format_def_itemContext;
  class Format_opt_itemContext;
  class Ext_options_optContext;
  class Ext_optionsContext;
  class Ext_options_listContext;
  class Ext_options_itemContext;
  class Ext_table_element_listContext;
  class Ext_table_elementContext;
  class Ext_column_defContext;
  class Opt_single_row_error_handlingContext;
  class Opt_log_error_tableContext;
  class Opt_sreh_limit_typeContext;
  class Ext_opt_encoding_listContext;
  class Ext_opt_encoding_itemContext;
  class Create_seq_stmtContext;
  class Alter_seq_stmtContext;
  class Opt_seq_listContext;
  class Opt_seq_elemContext;
  class Numberic_onlyContext;
  class Float_onlyContext;
  class Integer_onlyContext;
  class Create_p_lang_stmtContext;
  class Create_p_lang_stmtOptionContext;
  class Handler_nameContext;
  class Opt_inline_handlerContext;
  class Validator_clauseContext;
  class Opt_validatorContext;
  class Drop_p_lang_stmtContext;
  class Create_file_space_stmtContext;
  class File_space_seg_listContext;
  class File_space_segContext;
  class Opt_ownerContext;
  class Create_table_space_stmtContext;
  class Create_extension_stmtContext;
  class Create_extension_opt_listContext;
  class Create_extension_opt_itemContext;
  class Alter_extension_stmtContext;
  class Alter_extension_opt_listContext;
  class Alter_extension_opt_itemContext;
  class Alter_extension_content_stmtContext;
  class Alter_extension_content_stmtOptionContext;
  class Create_trig_stmtContext;
  class Trigger_action_timeContext;
  class Trigger_eventsContext;
  class Trigger_one_eventContext;
  class Trigger_for_specContext;
  class Trigger_for_typeContext;
  class Trigger_func_argsContext;
  class Trigger_func_argContext;
  class Opt_constr_from_tableContext;
  class Constraint_attr_specContext;
  class Constraint_deferrability_specContext;
  class Constraint_time_specContext;
  class Drop_trig_stmtContext;
  class Create_assert_stmtContext;
  class Drop_assert_stmtContext;
  class Define_stmtContext;
  class DefinitionContext;
  class Def_listContext;
  class Def_elemContext;
  class Def_argContext;
  class Aggr_argsContext;
  class Old_aggr_definitionContext;
  class Old_aggr_listContext;
  class Old_aggr_elemContext;
  class Enum_val_listContext;
  class Create_op_class_stmtContext;
  class Opclass_item_listContext;
  class Opclass_itemContext;
  class Opt_opfamilyContext;
  class Create_op_family_stmtContext;
  class Alter_op_family_stmtContext;
  class Opclass_drop_listContext;
  class Opclass_dropContext;
  class Drop_op_class_stmtContext;
  class Drop_op_family_stmtContext;
  class Drop_owned_stmtContext;
  class Reassign_owned_stmtContext;
  class Drop_stmtContext;
  class Drop_typeContext;
  class Any_name_listContext;
  class Any_nameContext;
  class AttrsContext;
  class Truncate_stmtContext;
  class Comment_stmtContext;
  class Comment_stmtOptionContext;
  class Comment_optionContext;
  class Comment_typeContext;
  class Comment_textContext;
  class Fetch_stmtContext;
  class Fetch_directionContext;
  class Grant_stmtContext;
  class Revoke_stmtContext;
  class PrivilegesContext;
  class Privilege_listContext;
  class PrivilegeContext;
  class Privilege_targetContext;
  class Grantee_listContext;
  class GranteeContext;
  class Opt_grant_grant_optionContext;
  class Function_with_argtypes_listContext;
  class Function_with_argtypesContext;
  class Grant_role_stmtContext;
  class Revoke_role_stmtContext;
  class Opt_grant_admin_optionContext;
  class Opt_granted_byContext;
  class Index_stmtContext;
  class Index_paramsContext;
  class Index_elemContext;
  class Opt_classContext;
  class Opt_asc_descContext;
  class Opt_nulls_orderContext;
  class Create_function_stmtContext;
  class Opt_or_replaceContext;
  class Func_argsContext;
  class Func_args_listContext;
  class Func_args_with_defaultsContext;
  class Func_args_with_defaults_listContext;
  class Func_argContext;
  class Func_arg_with_defaultContext;
  class Arg_classContext;
  class Param_nameContext;
  class Func_returnContext;
  class Func_typeContext;
  class Func_type_table_option_listContext;
  class Func_type_table_optionContext;
  class Createfunc_opt_listContext;
  class Common_func_opt_itemContext;
  class Createfunc_opt_itemContext;
  class Func_asContext;
  class Table_func_columnContext;
  class Table_func_column_listContext;
  class Alter_function_stmtContext;
  class Alterfunc_opt_listContext;
  class Remove_func_stmtContext;
  class Remove_aggr_stmtContext;
  class Remove_oper_stmtContext;
  class Oper_argtypesContext;
  class Any_operatorContext;
  class Do_stmtContext;
  class Dostmt_opt_itemContext;
  class Create_cast_stmtContext;
  class Cast_contextContext;
  class Drop_cast_stmtContext;
  class Reindex_stmtContext;
  class Alter_type_stmtContext;
  class Rename_stmtContext;
  class Opt_columnContext;
  class Alter_object_schema_stmtContext;
  class Alter_owner_stmtContext;
  class Rule_stmtContext;
  class Rule_action_listContext;
  class Rule_action_multiContext;
  class Rule_action_stmtContext;
  class EventContext;
  class Opt_insteadContext;
  class Drop_rule_stmtContext;
  class Notify_stmtContext;
  class Listen_stmtContext;
  class Unlisten_stmtContext;
  class Transaction_stmtContext;
  class Opt_transactionContext;
  class Transaction_mode_itemContext;
  class Transaction_mode_listContext;
  class View_stmtContext;
  class Opt_check_optionContext;
  class Load_stmtContext;
  class Createdb_stmtContext;
  class Createdb_opt_itemContext;
  class Alter_database_stmtContext;
  class Alter_database_set_stmtContext;
  class Alterdb_opt_itemContext;
  class Dropdb_stmtContext;
  class Create_domain_stmtContext;
  class Alter_domain_stmtContext;
  class Alter_domain_optionContext;
  class Alter_tsdictionary_stmtContext;
  class Alter_tsconfiguration_stmtContext;
  class Alter_txt_search_conf_optionContext;
  class Create_conversion_stmtContext;
  class Cluster_stmtContext;
  class Cluster_optionContext;
  class Vacuum_stmtContext;
  class Analyze_stmtContext;
  class Analyze_keywordContext;
  class Paren_name_listContext;
  class Explain_stmtContext;
  class Explainable_stmtContext;
  class Prepare_stmtContext;
  class Paren_type_listContext;
  class Preparable_stmtContext;
  class Execute_stmtContext;
  class Deallocate_stmtContext;
  class Cdb_string_listContext;
  class Cdb_stringContext;
  class Insert_stmtContext;
  class Insert_restContext;
  class Insert_column_listContext;
  class Insert_column_itemContext;
  class Returning_clauseContext;
  class Delete_stmtContext;
  class Lock_stmtContext;
  class Opt_lockContext;
  class Lock_typeContext;
  class Update_stmtContext;
  class Set_clause_listContext;
  class Set_clauseContext;
  class Single_set_clauseContext;
  class Multiple_set_clauseContext;
  class Set_targetContext;
  class Set_target_listContext;
  class Declare_cursor_stmtContext;
  class Cursor_optionContext;
  class Opt_holdContext;
  class Select_stmtContext;
  class Subquery_basic_elementsContext;
  class Subquery_operation_partContext;
  class Select_with_parensContext;
  class Select_no_parensContext;
  class Simple_selectContext;
  class With_clauseContext;
  class Cte_listContext;
  class Common_table_exprContext;
  class Into_clauseContext;
  class Opt_tempTableNameContext;
  class Opt_distinctContext;
  class Sort_clauseContext;
  class Sortby_listContext;
  class SortbyContext;
  class Select_limitContext;
  class Select_limit_valueContext;
  class Opt_select_fetch_first_valueContext;
  class Select_offset_valueContext;
  class Select_offset_value2Context;
  class Row_or_rowsContext;
  class First_or_nextContext;
  class Group_clauseContext;
  class Group_elem_listContext;
  class Group_elemContext;
  class Having_clauseContext;
  class For_locking_clauseContext;
  class For_locking_itemContext;
  class Locked_rels_listContext;
  class Values_clauseContext;
  class From_clauseContext;
  class From_listContext;
  class Table_refContext;
  class Join_typeContext;
  class Join_qualContext;
  class Relation_exprContext;
  class Relation_expr_opt_aliasContext;
  class Func_tableContext;
  class Where_clauseContext;
  class Where_or_current_clauseContext;
  class Table_func_element_listContext;
  class Table_func_elementContext;
  class Typename_pgContext;
  class Opt_array_boundsContext;
  class Simple_typenameContext;
  class Const_typenameContext;
  class Generic_typeContext;
  class NumericContext;
  class BitContext;
  class Const_bitContext;
  class Bit_with_lengthContext;
  class Bit_without_lengthContext;
  class Multi_characterContext;
  class Const_characterContext;
  class Character_with_lengthContext;
  class Character_without_lengthContext;
  class CharacterContext;
  class Opt_charsetContext;
  class Const_datatimeContext;
  class Const_intervalContext;
  class Opt_timezoneContext;
  class Opt_intervalContext;
  class A_exprContext;
  class Logical_exprContext;
  class Multiset_exprContext;
  class Relational_exprContext;
  class Relational_opContext;
  class Compound_exprContext;
  class Between_elementsContext;
  class Concatenation_listContext;
  class ConcatenationContext;
  class Model_exprContext;
  class Unary_exprContext;
  class C_exprContext;
  class Scatter_clauseContext;
  class Table_value_select_clauseContext;
  class Simple_funcContext;
  class Simple_func_paramsContext;
  class Func_exprContext;
  class Xml_root_versionContext;
  class Opt_xml_root_standaloneContext;
  class Xml_attributesContext;
  class Xml_attribute_listContext;
  class Xml_attribute_elContext;
  class Document_or_contentContext;
  class Xml_whitespace_optionContext;
  class Xmlexists_argumentContext;
  class Window_clauseContext;
  class Window_definition_listContext;
  class Window_definitionContext;
  class Window_specificationContext;
  class Opt_partition_clauseContext;
  class Window_frame_clauseContext;
  class Window_frame_unitsContext;
  class Window_frame_extentContext;
  class Window_frame_startContext;
  class Window_frame_betweenContext;
  class Window_frame_boundContext;
  class Window_frame_exclusionContext;
  class RowContext;
  class Op_signsContext;
  class All_OpContext;
  class Qual_OpContext;
  class Qual_all_OpContext;
  class Subquery_OpContext;
  class Paren_expr_listContext;
  class Expr_listContext;
  class Type_listContext;
  class Array_exprContext;
  class Array_expr_listContext;
  class Extract_listContext;
  class Extract_argContext;
  class Overlay_listContext;
  class Overlay_placingContext;
  class Position_listContext;
  class Substr_listContext;
  class Substr_fromContext;
  class Substr_forContext;
  class Trim_listContext;
  class In_exprContext;
  class Case_exprContext;
  class When_clauseContext;
  class When_operandContext;
  class Case_defaultContext;
  class Case_argContext;
  class Decode_exprContext;
  class Search_resultContext;
  class Decode_defaultContext;
  class ColumnrefContext;
  class Indirection_elContext;
  class IndirectionContext;
  class Ctext_exprContext;
  class Ctext_expr_listContext;
  class Ctext_rowContext;
  class Target_listContext;
  class Target_elContext;
  class Relation_nameContext;
  class Qualified_name_listContext;
  class Qualified_nameContext;
  class Name_listContext;
  class NameContext;
  class Cte_nameContext;
  class Database_nameContext;
  class Access_methodContext;
  class Attr_nameContext;
  class Index_nameContext;
  class File_nameContext;
  class Func_nameContext;
  class A_expr_constContext;
  class IconstContext;
  class SconstContext;
  class Role_idContext;
  class Queue_idContext;
  class Signed_iconstContext;
  class ColidContext;
  class Type_function_nameContext;
  class Col_labelContext;
  class IdentifierContext;
  class Unreserved_keywordContext;
  class Keywords_ok_in_alias_no_asContext;
  class Partition_colidContext;
  class Partition_ident_key_wordContext;
  class Col_name_keywordContext;
  class Type_func_name_keywordContext;
  class Reserved_keywordContext;
  class Special_rule_relationContext; 

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
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtmultiContext* stmtmulti();

  class  StmtContext : public antlr4::ParserRuleContext {
  public:
    StmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Alter_database_stmtContext *alter_database_stmt();
    Alter_database_set_stmtContext *alter_database_set_stmt();
    Alter_domain_stmtContext *alter_domain_stmt();
    Alter_extension_stmtContext *alter_extension_stmt();
    Alter_extension_content_stmtContext *alter_extension_content_stmt();
    Alter_function_stmtContext *alter_function_stmt();
    Alter_group_stmtContext *alter_group_stmt();
    Alter_object_schema_stmtContext *alter_object_schema_stmt();
    Alter_owner_stmtContext *alter_owner_stmt();
    Alter_queue_stmtContext *alter_queue_stmt();
    Alter_resource_group_stmtContext *alter_resource_group_stmt();
    Alter_role_set_stmtContext *alter_role_set_stmt();
    Alter_role_stmtContext *alter_role_stmt();
    Alter_tsconfiguration_stmtContext *alter_tsconfiguration_stmt();
    Alter_tsdictionary_stmtContext *alter_tsdictionary_stmt();
    Alter_seq_stmtContext *alter_seq_stmt();
    Alter_table_stmtContext *alter_table_stmt();
    Alter_type_stmtContext *alter_type_stmt();
    Alter_user_set_stmtContext *alter_user_set_stmt();
    Alter_user_stmtContext *alter_user_stmt();
    Analyze_stmtContext *analyze_stmt();
    Check_point_stmtContext *check_point_stmt();
    Close_portal_stmtContext *close_portal_stmt();
    Cluster_stmtContext *cluster_stmt();
    Comment_stmtContext *comment_stmt();
    Constraints_set_stmtContext *constraints_set_stmt();
    Copy_stmtContext *copy_stmt();
    Create_as_stmtContext *create_as_stmt();
    Create_assert_stmtContext *create_assert_stmt();
    Create_cast_stmtContext *create_cast_stmt();
    Create_conversion_stmtContext *create_conversion_stmt();
    Create_domain_stmtContext *create_domain_stmt();
    Create_extension_stmtContext *create_extension_stmt();
    Create_external_stmtContext *create_external_stmt();
    Create_file_space_stmtContext *create_file_space_stmt();
    Create_function_stmtContext *create_function_stmt();
    Create_group_stmtContext *create_group_stmt();
    Create_op_class_stmtContext *create_op_class_stmt();
    Create_op_family_stmtContext *create_op_family_stmt();
    Alter_op_family_stmtContext *alter_op_family_stmt();
    Create_p_lang_stmtContext *create_p_lang_stmt();
    Create_queue_stmtContext *create_queue_stmt();
    Create_resource_group_stmtContext *create_resource_group_stmt();
    Create_schema_stmtContext *create_schema_stmt();
    Create_seq_stmtContext *create_seq_stmt();
    Create_stmtContext *create_stmt();
    Create_table_space_stmtContext *create_table_space_stmt();
    Create_trig_stmtContext *create_trig_stmt();
    Create_role_stmtContext *create_role_stmt();
    Create_user_stmtContext *create_user_stmt();
    Createdb_stmtContext *createdb_stmt();
    Deallocate_stmtContext *deallocate_stmt();
    Declare_cursor_stmtContext *declare_cursor_stmt();
    Define_stmtContext *define_stmt();
    Delete_stmtContext *delete_stmt();
    Discard_stmtContext *discard_stmt();
    Do_stmtContext *do_stmt();
    Drop_assert_stmtContext *drop_assert_stmt();
    Drop_cast_stmtContext *drop_cast_stmt();
    Drop_group_stmtContext *drop_group_stmt();
    Drop_op_class_stmtContext *drop_op_class_stmt();
    Drop_op_family_stmtContext *drop_op_family_stmt();
    Drop_owned_stmtContext *drop_owned_stmt();
    Drop_p_lang_stmtContext *drop_p_lang_stmt();
    Drop_queue_stmtContext *drop_queue_stmt();
    Drop_resource_group_stmtContext *drop_resource_group_stmt();
    Drop_rule_stmtContext *drop_rule_stmt();
    Drop_stmtContext *drop_stmt();
    Drop_trig_stmtContext *drop_trig_stmt();
    Drop_role_stmtContext *drop_role_stmt();
    Drop_user_stmtContext *drop_user_stmt();
    Dropdb_stmtContext *dropdb_stmt();
    Execute_stmtContext *execute_stmt();
    Explain_stmtContext *explain_stmt();
    Fetch_stmtContext *fetch_stmt();
    Grant_stmtContext *grant_stmt();
    Grant_role_stmtContext *grant_role_stmt();
    Index_stmtContext *index_stmt();
    Insert_stmtContext *insert_stmt();
    Listen_stmtContext *listen_stmt();
    Load_stmtContext *load_stmt();
    Lock_stmtContext *lock_stmt();
    Notify_stmtContext *notify_stmt();
    Prepare_stmtContext *prepare_stmt();
    Reassign_owned_stmtContext *reassign_owned_stmt();
    Reindex_stmtContext *reindex_stmt();
    Remove_aggr_stmtContext *remove_aggr_stmt();
    Remove_func_stmtContext *remove_func_stmt();
    Remove_oper_stmtContext *remove_oper_stmt();
    Rename_stmtContext *rename_stmt();
    Revoke_stmtContext *revoke_stmt();
    Revoke_role_stmtContext *revoke_role_stmt();
    Rule_stmtContext *rule_stmt();
    Select_stmtContext *select_stmt();
    Transaction_stmtContext *transaction_stmt();
    Truncate_stmtContext *truncate_stmt();
    Unlisten_stmtContext *unlisten_stmt();
    Update_stmtContext *update_stmt();
    Vacuum_stmtContext *vacuum_stmt();
    Variable_reset_stmtContext *variable_reset_stmt();
    Variable_set_stmtContext *variable_set_stmt();
    Variable_show_stmtContext *variable_show_stmt();
    View_stmtContext *view_stmt();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtContext* stmt();

  class  Create_queue_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_queue_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *RESOURCE();
    antlr4::tree::TerminalNode *QUEUE();
    Queue_idContext *queue_id();
    std::vector<Opt_queue_elemContext *> opt_queue_elem();
    Opt_queue_elemContext* opt_queue_elem(size_t i);
    antlr4::tree::TerminalNode *WITH();
    DefinitionContext *definition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_queue_stmtContext* create_queue_stmt();

  class  Opt_queue_elemContext : public antlr4::ParserRuleContext {
  public:
    Opt_queue_elemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ACTIVE();
    antlr4::tree::TerminalNode *THRESHOLD();
    Numberic_onlyContext *numberic_only();
    antlr4::tree::TerminalNode *COST();
    antlr4::tree::TerminalNode *IGNORE_P();
    antlr4::tree::TerminalNode *OVERCOMMIT();
    antlr4::tree::TerminalNode *NOOVERCOMMIT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_queue_elemContext* opt_queue_elem();

  class  Alter_queue_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_queue_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *RESOURCE();
    antlr4::tree::TerminalNode *QUEUE();
    Queue_idContext *queue_id();
    std::vector<Opt_queue_elemContext *> opt_queue_elem();
    Opt_queue_elemContext* opt_queue_elem(size_t i);
    std::vector<With_out_definitionContext *> with_out_definition();
    With_out_definitionContext* with_out_definition(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_queue_stmtContext* alter_queue_stmt();

  class  With_out_definitionContext : public antlr4::ParserRuleContext {
  public:
    With_out_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DefinitionContext *definition();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *WITHOUT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  With_out_definitionContext* with_out_definition();

  class  Drop_queue_stmtContext : public antlr4::ParserRuleContext {
  public:
    Drop_queue_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *RESOURCE();
    antlr4::tree::TerminalNode *QUEUE();
    Queue_idContext *queue_id();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_queue_stmtContext* drop_queue_stmt();

  class  Create_resource_group_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_resource_group_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *RESOURCE();
    antlr4::tree::TerminalNode *GROUP_P();
    NameContext *name();
    With_out_definitionContext *with_out_definition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_resource_group_stmtContext* create_resource_group_stmt();

  class  Drop_resource_group_stmtContext : public antlr4::ParserRuleContext {
  public:
    Drop_resource_group_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *RESOURCE();
    antlr4::tree::TerminalNode *GROUP_P();
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_resource_group_stmtContext* drop_resource_group_stmt();

  class  Alter_resource_group_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_resource_group_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *RESOURCE();
    antlr4::tree::TerminalNode *GROUP_P();
    NameContext *name();
    antlr4::tree::TerminalNode *SET();
    Resource_group_elemContext *resource_group_elem();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_resource_group_stmtContext* alter_resource_group_stmt();

  class  Resource_group_elemContext : public antlr4::ParserRuleContext {
  public:
    Resource_group_elemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONCURRENCY();
    Integer_onlyContext *integer_only();
    antlr4::tree::TerminalNode *CPU_RATE_LIMIT();
    antlr4::tree::TerminalNode *CPUSET();
    SconstContext *sconst();
    antlr4::tree::TerminalNode *MEMORY_SHARED_QUOTA();
    antlr4::tree::TerminalNode *MEMORY_LIMIT();
    antlr4::tree::TerminalNode *MEMORY_SPILL_RATIO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Resource_group_elemContext* resource_group_elem();

  class  Create_role_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_role_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *ROLE();
    Role_idContext *role_id();
    Opt_withContext *opt_with();
    std::vector<Role_elemContext *> role_elem();
    Role_elemContext* role_elem(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_role_stmtContext* create_role_stmt();

  class  Opt_withContext : public antlr4::ParserRuleContext {
  public:
    Opt_withContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_withContext* opt_with();

  class  Role_elemContext : public antlr4::ParserRuleContext {
  public:
    Role_elemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PASSWORD();
    SconstContext *sconst();
    antlr4::tree::TerminalNode *NULL_P();
    antlr4::tree::TerminalNode *ENCRYPTED();
    antlr4::tree::TerminalNode *UNENCRYPTED();
    antlr4::tree::TerminalNode *SUPERUSER_P();
    antlr4::tree::TerminalNode *NOSUPERUSER();
    antlr4::tree::TerminalNode *INHERIT();
    antlr4::tree::TerminalNode *NOINHERIT();
    antlr4::tree::TerminalNode *CREATEDB();
    antlr4::tree::TerminalNode *NOCREATEDB();
    antlr4::tree::TerminalNode *CREATEROLE();
    antlr4::tree::TerminalNode *NOCREATEROLE();
    antlr4::tree::TerminalNode *CREATEUSER();
    antlr4::tree::TerminalNode *NOCREATEUSER();
    antlr4::tree::TerminalNode *LOGIN_P();
    antlr4::tree::TerminalNode *NOLOGIN_P();
    antlr4::tree::TerminalNode *CONNECTION();
    antlr4::tree::TerminalNode *LIMIT();
    Signed_iconstContext *signed_iconst();
    antlr4::tree::TerminalNode *VALID();
    antlr4::tree::TerminalNode *UNTIL();
    antlr4::tree::TerminalNode *RESOURCE();
    antlr4::tree::TerminalNode *QUEUE();
    Any_nameContext *any_name();
    antlr4::tree::TerminalNode *GROUP_P();
    antlr4::tree::TerminalNode *USER();
    Name_listContext *name_list();
    antlr4::tree::TerminalNode *SYSID();
    IconstContext *iconst();
    antlr4::tree::TerminalNode *ADMIN();
    antlr4::tree::TerminalNode *ROLE();
    antlr4::tree::TerminalNode *IN_P();
    antlr4::tree::TerminalNode *CREATEEXTTABLE();
    Exttab_auth_listContext *exttab_auth_list();
    antlr4::tree::TerminalNode *NOCREATEEXTTABLE();
    Deny_login_roleContext *deny_login_role();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Role_elemContext* role_elem();

  class  Deny_login_roleContext : public antlr4::ParserRuleContext {
  public:
    Deny_login_roleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DENY();
    Deny_intervalContext *deny_interval();
    Deny_pointContext *deny_point();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Deny_login_roleContext* deny_login_role();

  class  Deny_intervalContext : public antlr4::ParserRuleContext {
  public:
    Deny_intervalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BETWEEN();
    std::vector<Deny_pointContext *> deny_point();
    Deny_pointContext* deny_point(size_t i);
    antlr4::tree::TerminalNode *AND();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Deny_intervalContext* deny_interval();

  class  Deny_day_specifierContext : public antlr4::ParserRuleContext {
  public:
    Deny_day_specifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SconstContext *sconst();
    IconstContext *iconst();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Deny_day_specifierContext* deny_day_specifier();

  class  Deny_pointContext : public antlr4::ParserRuleContext {
  public:
    Deny_pointContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DAY_P();
    Deny_day_specifierContext *deny_day_specifier();
    Opt_timeContext *opt_time();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Deny_pointContext* deny_point();

  class  Opt_timeContext : public antlr4::ParserRuleContext {
  public:
    Opt_timeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TIME();
    SconstContext *sconst();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_timeContext* opt_time();

  class  Exttab_auth_listContext : public antlr4::ParserRuleContext {
  public:
    Exttab_auth_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Keyvalue_listContext *keyvalue_list();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Exttab_auth_listContext* exttab_auth_list();

  class  Keyvalue_listContext : public antlr4::ParserRuleContext {
  public:
    Keyvalue_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Keyvalue_pairContext *> keyvalue_pair();
    Keyvalue_pairContext* keyvalue_pair(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyvalue_listContext* keyvalue_list();

  class  Keyvalue_pairContext : public antlr4::ParserRuleContext {
  public:
    Keyvalue_pairContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Col_labelContext *col_label();
    antlr4::tree::TerminalNode *EQUALS_OP();
    SconstContext *sconst();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyvalue_pairContext* keyvalue_pair();

  class  Create_user_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_user_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *USER();
    Role_idContext *role_id();
    Opt_withContext *opt_with();
    std::vector<Role_elemContext *> role_elem();
    Role_elemContext* role_elem(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_user_stmtContext* create_user_stmt();

  class  Alter_role_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_role_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *ROLE();
    Role_idContext *role_id();
    Opt_withContext *opt_with();
    std::vector<Alter_role_elemContext *> alter_role_elem();
    Alter_role_elemContext* alter_role_elem(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_role_stmtContext* alter_role_stmt();

  class  Alter_role_set_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_role_set_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *ROLE();
    Role_idContext *role_id();
    Set_reset_clauseContext *set_reset_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_role_set_stmtContext* alter_role_set_stmt();

  class  Alter_role_elemContext : public antlr4::ParserRuleContext {
  public:
    Alter_role_elemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Role_elemContext *role_elem();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *DENY();
    antlr4::tree::TerminalNode *FOR();
    Deny_pointContext *deny_point();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_role_elemContext* alter_role_elem();

  class  Alter_user_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_user_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *USER();
    Role_idContext *role_id();
    Opt_withContext *opt_with();
    std::vector<Alter_role_elemContext *> alter_role_elem();
    Alter_role_elemContext* alter_role_elem(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_user_stmtContext* alter_user_stmt();

  class  Alter_user_set_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_user_set_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *USER();
    Role_idContext *role_id();
    Set_reset_clauseContext *set_reset_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_user_set_stmtContext* alter_user_set_stmt();

  class  Drop_role_stmtContext : public antlr4::ParserRuleContext {
  public:
    Drop_role_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *ROLE();
    Name_listContext *name_list();
    antlr4::tree::TerminalNode *IF_P();
    antlr4::tree::TerminalNode *EXISTS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_role_stmtContext* drop_role_stmt();

  class  Drop_user_stmtContext : public antlr4::ParserRuleContext {
  public:
    Drop_user_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *USER();
    Name_listContext *name_list();
    antlr4::tree::TerminalNode *IF_P();
    antlr4::tree::TerminalNode *EXISTS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_user_stmtContext* drop_user_stmt();

  class  Create_group_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_group_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *GROUP_P();
    Role_idContext *role_id();
    Opt_withContext *opt_with();
    std::vector<Role_elemContext *> role_elem();
    Role_elemContext* role_elem(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_group_stmtContext* create_group_stmt();

  class  Alter_group_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_group_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *GROUP_P();
    Role_idContext *role_id();
    Add_dropContext *add_drop();
    antlr4::tree::TerminalNode *USER();
    Name_listContext *name_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_group_stmtContext* alter_group_stmt();

  class  Add_dropContext : public antlr4::ParserRuleContext {
  public:
    Add_dropContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD_P();
    antlr4::tree::TerminalNode *DROP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Add_dropContext* add_drop();

  class  Drop_group_stmtContext : public antlr4::ParserRuleContext {
  public:
    Drop_group_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *GROUP_P();
    Name_listContext *name_list();
    antlr4::tree::TerminalNode *IF_P();
    antlr4::tree::TerminalNode *EXISTS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_group_stmtContext* drop_group_stmt();

  class  Create_schema_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_schema_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *SCHEMA();
    antlr4::tree::TerminalNode *AUTHORIZATION();
    Role_idContext *role_id();
    Schema_nameContext *schema_name();
    std::vector<Schema_stmtContext *> schema_stmt();
    Schema_stmtContext* schema_stmt(size_t i);
    ColidContext *colid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_schema_stmtContext* create_schema_stmt();

  class  Schema_nameContext : public antlr4::ParserRuleContext {
  public:
    Schema_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColidContext *colid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Schema_nameContext* schema_name();

  class  Schema_stmtContext : public antlr4::ParserRuleContext {
  public:
    Schema_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Create_stmtContext *create_stmt();
    Index_stmtContext *index_stmt();
    Create_seq_stmtContext *create_seq_stmt();
    Create_trig_stmtContext *create_trig_stmt();
    Grant_stmtContext *grant_stmt();
    View_stmtContext *view_stmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Schema_stmtContext* schema_stmt();

  class  Variable_set_stmtContext : public antlr4::ParserRuleContext {
  public:
    Variable_set_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    Set_restContext *set_rest();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *SESSION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_set_stmtContext* variable_set_stmt();

  class  Set_restContext : public antlr4::ParserRuleContext {
  public:
    std::string current_schema;
    GreenPlumParser::Var_nameContext *var_nameContext = nullptr;;
    GreenPlumParser::Var_listContext *var_listContext = nullptr;;
    Set_restContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Var_nameContext *var_name();
    Var_listContext *var_list();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *EQUALS_OP();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *CURRENT_P();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *ZONE();
    Zone_valueContext *zone_value();
    antlr4::tree::TerminalNode *TRANSACTION();
    Transaction_mode_listContext *transaction_mode_list();
    antlr4::tree::TerminalNode *SESSION();
    antlr4::tree::TerminalNode *CHARACTERISTICS();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *NAMES();
    Opt_encodingContext *opt_encoding();
    antlr4::tree::TerminalNode *ROLE();
    Colid_or_sconstContext *colid_or_sconst();
    antlr4::tree::TerminalNode *AUTHORIZATION();
    antlr4::tree::TerminalNode *XML_P();
    antlr4::tree::TerminalNode *OPTION();
    Document_or_contentContext *document_or_content();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Set_restContext* set_rest();

  class  Var_nameContext : public antlr4::ParserRuleContext {
  public:
    Var_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColidContext *colid();
    Var_nameContext *var_name();
    antlr4::tree::TerminalNode *PERIOD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Var_nameContext* var_name();
  Var_nameContext* var_name(int precedence);
  class  Var_listContext : public antlr4::ParserRuleContext {
  public:
    Var_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Var_valueContext *> var_value();
    Var_valueContext* var_value(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Var_listContext* var_list();

  class  Var_valueContext : public antlr4::ParserRuleContext {
  public:
    Var_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Opt_booleanContext *opt_boolean();
    Colid_or_sconstContext *colid_or_sconst();
    Numberic_onlyContext *numberic_only();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Var_valueContext* var_value();

  class  Iso_levelContext : public antlr4::ParserRuleContext {
  public:
    Iso_levelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *COMMITED();
    antlr4::tree::TerminalNode *UNCOMMITTED();
    antlr4::tree::TerminalNode *REPEATABLE();
    antlr4::tree::TerminalNode *SERIALIZABLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Iso_levelContext* iso_level();

  class  Opt_booleanContext : public antlr4::ParserRuleContext {
  public:
    Opt_booleanContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUE_P();
    antlr4::tree::TerminalNode *FALSE_P();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *OFF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_booleanContext* opt_boolean();

  class  Zone_valueContext : public antlr4::ParserRuleContext {
  public:
    Zone_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SconstContext *sconst();
    IdentifierContext *identifier();
    Const_intervalContext *const_interval();
    Paren_iconstContext *paren_iconst();
    Opt_intervalContext *opt_interval();
    Numberic_onlyContext *numberic_only();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *LOCAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Zone_valueContext* zone_value();

  class  Paren_iconstContext : public antlr4::ParserRuleContext {
  public:
    Paren_iconstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PAREN();
    IconstContext *iconst();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Paren_iconstContext* paren_iconst();

  class  Opt_encodingContext : public antlr4::ParserRuleContext {
  public:
    Opt_encodingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SconstContext *sconst();
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_encodingContext* opt_encoding();

  class  Colid_or_sconstContext : public antlr4::ParserRuleContext {
  public:
    Colid_or_sconstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColidContext *colid();
    SconstContext *sconst();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Colid_or_sconstContext* colid_or_sconst();

  class  Variable_reset_stmtContext : public antlr4::ParserRuleContext {
  public:
    Variable_reset_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESET();
    Var_nameContext *var_name();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *ZONE();
    antlr4::tree::TerminalNode *TRANSACTION();
    antlr4::tree::TerminalNode *ISOLATION();
    antlr4::tree::TerminalNode *LEVEL();
    antlr4::tree::TerminalNode *SESSION();
    antlr4::tree::TerminalNode *AUTHORIZATION();
    antlr4::tree::TerminalNode *ALL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_reset_stmtContext* variable_reset_stmt();

  class  Set_reset_clauseContext : public antlr4::ParserRuleContext {
  public:
    Set_reset_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    Set_restContext *set_rest();
    Variable_reset_stmtContext *variable_reset_stmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Set_reset_clauseContext* set_reset_clause();

  class  Variable_show_stmtContext : public antlr4::ParserRuleContext {
  public:
    Variable_show_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    Var_nameContext *var_name();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *ZONE();
    antlr4::tree::TerminalNode *TRANSACTION();
    antlr4::tree::TerminalNode *ISOLATION();
    antlr4::tree::TerminalNode *LEVEL();
    antlr4::tree::TerminalNode *SESSION();
    antlr4::tree::TerminalNode *AUTHORIZATION();
    antlr4::tree::TerminalNode *ALL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_show_stmtContext* variable_show_stmt();

  class  Constraints_set_stmtContext : public antlr4::ParserRuleContext {
  public:
    Constraints_set_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *CONSTRAINTS();
    Constraints_set_listContext *constraints_set_list();
    Constraints_set_modeContext *constraints_set_mode();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constraints_set_stmtContext* constraints_set_stmt();

  class  Constraints_set_listContext : public antlr4::ParserRuleContext {
  public:
    Constraints_set_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL();
    Qualified_name_listContext *qualified_name_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constraints_set_listContext* constraints_set_list();

  class  Constraints_set_modeContext : public antlr4::ParserRuleContext {
  public:
    Constraints_set_modeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFERRED();
    antlr4::tree::TerminalNode *IMMEDIATE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constraints_set_modeContext* constraints_set_mode();

  class  Check_point_stmtContext : public antlr4::ParserRuleContext {
  public:
    Check_point_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHECKPOINT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Check_point_stmtContext* check_point_stmt();

  class  Discard_stmtContext : public antlr4::ParserRuleContext {
  public:
    Discard_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DISCARD();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *TEMP();
    antlr4::tree::TerminalNode *TEMPORARY();
    antlr4::tree::TerminalNode *PLANS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Discard_stmtContext* discard_stmt();

  class  Alter_table_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_table_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *TABLE();
    Relation_exprContext *relation_expr();
    Alter_table_cmdsContext *alter_table_cmds();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *INDEX();
    Alter_rel_cmdsContext *alter_rel_cmds();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_table_stmtContext* alter_table_stmt();

  class  Alter_table_cmdsContext : public antlr4::ParserRuleContext {
  public:
    Alter_table_cmdsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Alter_table_cmdContext *> alter_table_cmd();
    Alter_table_cmdContext* alter_table_cmd(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_table_cmdsContext* alter_table_cmds();

  class  Alter_table_cmdContext : public antlr4::ParserRuleContext {
  public:
    Alter_table_cmdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD_P();
    Column_defContext *column_def();
    Opt_columnContext *opt_column();
    antlr4::tree::TerminalNode *ALTER();
    std::vector<ColidContext *> colid();
    ColidContext* colid(size_t i);
    Alter_column_defaultContext *alter_column_default();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *NULL_P();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *STATISTICS();
    Integer_onlyContext *integer_only();
    antlr4::tree::TerminalNode *STORAGE();
    Opt_drop_behaviorContext *opt_drop_behavior();
    antlr4::tree::TerminalNode *TYPE_P();
    Typename_pgContext *typename_pg();
    Alter_usingContext *alter_using();
    Table_constraintContext *table_constraint();
    antlr4::tree::TerminalNode *CONSTRAINT();
    NameContext *name();
    antlr4::tree::TerminalNode *WITHOUT();
    antlr4::tree::TerminalNode *OIDS();
    antlr4::tree::TerminalNode *CLUSTER();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *ENABLE_P();
    antlr4::tree::TerminalNode *TRIGGER();
    antlr4::tree::TerminalNode *ALWAYS();
    antlr4::tree::TerminalNode *REPLICA();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *DISABLE_P();
    antlr4::tree::TerminalNode *RULE();
    antlr4::tree::TerminalNode *INHERIT();
    Qualified_nameContext *qualified_name();
    antlr4::tree::TerminalNode *NO();
    Distributed_byContext *distributed_by();
    With_out_definitionContext *with_out_definition();
    Alter_table_partition_cmdContext *alter_table_partition_cmd();
    Alter_rel_cmdContext *alter_rel_cmd();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_table_cmdContext* alter_table_cmd();

  class  Opt_table_partition_split_intoContext : public antlr4::ParserRuleContext {
  public:
    Opt_table_partition_split_intoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    std::vector<Alter_table_partition_id_spec_with_opt_defaultContext *> alter_table_partition_id_spec_with_opt_default();
    Alter_table_partition_id_spec_with_opt_defaultContext* alter_table_partition_id_spec_with_opt_default(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_table_partition_split_intoContext* opt_table_partition_split_into();

  class  Opt_table_partition_merge_intoContext : public antlr4::ParserRuleContext {
  public:
    Opt_table_partition_merge_intoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTO();
    Alter_table_partition_id_spec_with_opt_defaultContext *alter_table_partition_id_spec_with_opt_default();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_table_partition_merge_intoContext* opt_table_partition_merge_into();

  class  Table_partition_modifyContext : public antlr4::ParserRuleContext {
  public:
    Table_partition_modifyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tab_partition_boundary_spec_startContext *tab_partition_boundary_spec_start();
    Tab_partition_boundary_spec_endContext *tab_partition_boundary_spec_end();
    Opt_tab_partition_boundary_spec_everyContext *opt_tab_partition_boundary_spec_every();
    Add_dropContext *add_drop();
    Part_values_clauseContext *part_values_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_partition_modifyContext* table_partition_modify();

  class  Opt_table_partition_exchange_validateContext : public antlr4::ParserRuleContext {
  public:
    Opt_table_partition_exchange_validateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VALIDATION();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *WITHOUT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_table_partition_exchange_validateContext* opt_table_partition_exchange_validate();

  class  Alter_table_partition_id_specContext : public antlr4::ParserRuleContext {
  public:
    Alter_table_partition_id_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Partition_colidContext *partition_colid();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Tab_partition_boundary_spec_val_listContext *tab_partition_boundary_spec_val_list();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    Func_nameContext *func_name();
    Paren_expr_listContext *paren_expr_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_table_partition_id_specContext* alter_table_partition_id_spec();

  class  Alter_table_partition_id_spec_with_opt_defaultContext : public antlr4::ParserRuleContext {
  public:
    Alter_table_partition_id_spec_with_opt_defaultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARTITION();
    Alter_table_partition_id_specContext *alter_table_partition_id_spec();
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_table_partition_id_spec_with_opt_defaultContext* alter_table_partition_id_spec_with_opt_default();

  class  Alter_table_partition_cmdContext : public antlr4::ParserRuleContext {
  public:
    Alter_table_partition_cmdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD_P();
    antlr4::tree::TerminalNode *PARTITION();
    Tab_partition_boundary_specContext *tab_partition_boundary_spec();
    Opt_tab_partition_storage_attrContext *opt_tab_partition_storage_attr();
    Opt_tab_sub_partition_specContext *opt_tab_sub_partition_spec();
    antlr4::tree::TerminalNode *DEFAULT();
    Alter_table_partition_id_specContext *alter_table_partition_id_spec();
    antlr4::tree::TerminalNode *ALTER();
    std::vector<Alter_table_partition_id_spec_with_opt_defaultContext *> alter_table_partition_id_spec_with_opt_default();
    Alter_table_partition_id_spec_with_opt_defaultContext* alter_table_partition_id_spec_with_opt_default(size_t i);
    Alter_table_cmdContext *alter_table_cmd();
    antlr4::tree::TerminalNode *COALESCE();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *IF_P();
    antlr4::tree::TerminalNode *EXISTS();
    Opt_drop_behaviorContext *opt_drop_behavior();
    antlr4::tree::TerminalNode *EXCHANGE();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *TABLE();
    Qualified_nameContext *qualified_name();
    Opt_table_partition_exchange_validateContext *opt_table_partition_exchange_validate();
    antlr4::tree::TerminalNode *MERGE();
    antlr4::tree::TerminalNode *COMMA();
    Opt_table_partition_merge_intoContext *opt_table_partition_merge_into();
    antlr4::tree::TerminalNode *MODIFY();
    Table_partition_modifyContext *table_partition_modify();
    antlr4::tree::TerminalNode *RENAME();
    antlr4::tree::TerminalNode *TO();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *SUBPARTITION();
    antlr4::tree::TerminalNode *TEMPLATE();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Tab_sub_partition_elem_listContext *tab_sub_partition_elem_list();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    antlr4::tree::TerminalNode *SPLIT();
    Tab_partition_boundary_spec_startContext *tab_partition_boundary_spec_start();
    Tab_partition_boundary_spec_endContext *tab_partition_boundary_spec_end();
    Opt_table_partition_split_intoContext *opt_table_partition_split_into();
    antlr4::tree::TerminalNode *AT();
    Part_values_or_spec_listContext *part_values_or_spec_list();
    antlr4::tree::TerminalNode *TRUNCATE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_table_partition_cmdContext* alter_table_partition_cmd();

  class  Alter_rel_cmdsContext : public antlr4::ParserRuleContext {
  public:
    Alter_rel_cmdsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Alter_rel_cmdContext *> alter_rel_cmd();
    Alter_rel_cmdContext* alter_rel_cmd(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_rel_cmdsContext* alter_rel_cmds();

  class  Alter_rel_cmdContext : public antlr4::ParserRuleContext {
  public:
    Alter_rel_cmdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OWNER();
    antlr4::tree::TerminalNode *TO();
    Role_idContext *role_id();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *TABLESPACE();
    NameContext *name();
    DefinitionContext *definition();
    antlr4::tree::TerminalNode *RESET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_rel_cmdContext* alter_rel_cmd();

  class  Alter_column_defaultContext : public antlr4::ParserRuleContext {
  public:
    Alter_column_defaultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *DEFAULT();
    A_exprContext *a_expr();
    antlr4::tree::TerminalNode *DROP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_column_defaultContext* alter_column_default();

  class  Opt_drop_behaviorContext : public antlr4::ParserRuleContext {
  public:
    Opt_drop_behaviorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASCADE();
    antlr4::tree::TerminalNode *RESTRICT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_drop_behaviorContext* opt_drop_behavior();

  class  Alter_usingContext : public antlr4::ParserRuleContext {
  public:
    Alter_usingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USING();
    A_exprContext *a_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_usingContext* alter_using();

  class  Close_portal_stmtContext : public antlr4::ParserRuleContext {
  public:
    Close_portal_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLOSE();
    NameContext *name();
    antlr4::tree::TerminalNode *ALL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Close_portal_stmtContext* close_portal_stmt();

  class  Copy_stmtContext : public antlr4::ParserRuleContext {
  public:
    Copy_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COPY();
    Qualified_nameContext *qualified_name();
    Copy_fromContext *copy_from();
    Copy_file_nameContext *copy_file_name();
    antlr4::tree::TerminalNode *BINARY();
    Paren_column_listContext *paren_column_list();
    Opt_oidsContext *opt_oids();
    antlr4::tree::TerminalNode *PROGRAM();
    Copy_delimiterContext *copy_delimiter();
    Opt_withContext *opt_with();
    std::vector<Copy_opt_itemContext *> copy_opt_item();
    Copy_opt_itemContext* copy_opt_item(size_t i);
    Opt_single_row_error_handlingContext *opt_single_row_error_handling();
    Skip_external_partitionContext *skip_external_partition();
    Select_with_parensContext *select_with_parens();
    antlr4::tree::TerminalNode *TO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Copy_stmtContext* copy_stmt();

  class  Copy_fromContext : public antlr4::ParserRuleContext {
  public:
    Copy_fromContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *TO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Copy_fromContext* copy_from();

  class  Skip_external_partitionContext : public antlr4::ParserRuleContext {
  public:
    Skip_external_partitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IGNORE_P();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *PARTITIONS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Skip_external_partitionContext* skip_external_partition();

  class  Copy_file_nameContext : public antlr4::ParserRuleContext {
  public:
    Copy_file_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SconstContext *sconst();
    antlr4::tree::TerminalNode *STDIN();
    antlr4::tree::TerminalNode *STDOUT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Copy_file_nameContext* copy_file_name();

  class  Copy_opt_itemContext : public antlr4::ParserRuleContext {
  public:
    Copy_opt_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *OIDS();
    SconstContext *sconst();
    antlr4::tree::TerminalNode *DELIMITER();
    antlr4::tree::TerminalNode *NULL_P();
    antlr4::tree::TerminalNode *QUOTE();
    antlr4::tree::TerminalNode *ESCAPE();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *CSV();
    antlr4::tree::TerminalNode *HEADER_P();
    antlr4::tree::TerminalNode *FORCE();
    Column_listContext *column_list();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *FILL();
    antlr4::tree::TerminalNode *MISSING();
    antlr4::tree::TerminalNode *FIELDS();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *SEGMENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Copy_opt_itemContext* copy_opt_item();

  class  Opt_oidsContext : public antlr4::ParserRuleContext {
  public:
    Opt_oidsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *OIDS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_oidsContext* opt_oids();

  class  Copy_delimiterContext : public antlr4::ParserRuleContext {
  public:
    Copy_delimiterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELIMITERS();
    SconstContext *sconst();
    antlr4::tree::TerminalNode *USING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Copy_delimiterContext* copy_delimiter();

  class  Create_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TABLE();
    Qualified_nameContext *qualified_name();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    Opt_tempContext *opt_temp();
    Table_element_listContext *table_element_list();
    Opt_inheritContext *opt_inherit();
    Opt_with_def_oidsContext *opt_with_def_oids();
    On_commit_optionContext *on_commit_option();
    Opt_table_spaceContext *opt_table_space();
    Opt_distributed_byContext *opt_distributed_by();
    Opt_tab_partition_byContext *opt_tab_partition_by();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_stmtContext* create_stmt();

  class  Opt_tempContext : public antlr4::ParserRuleContext {
  public:
    Opt_tempContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TEMPORARY();
    antlr4::tree::TerminalNode *TEMP();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *GLOBAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_tempContext* opt_temp();

  class  Table_element_listContext : public antlr4::ParserRuleContext {
  public:
    Table_element_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Table_elementContext *> table_element();
    Table_elementContext* table_element(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_element_listContext* table_element_list();

  class  Table_elementContext : public antlr4::ParserRuleContext {
  public:
    Table_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_defContext *column_def();
    Table_like_clauseContext *table_like_clause();
    Table_constraintContext *table_constraint();
    Column_reference_storage_directiveContext *column_reference_storage_directive();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_elementContext* table_element();

  class  Column_reference_storage_directiveContext : public antlr4::ParserRuleContext {
  public:
    Column_reference_storage_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLUMN();
    ColidContext *colid();
    antlr4::tree::TerminalNode *ENCODING();
    DefinitionContext *definition();
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_reference_storage_directiveContext* column_reference_storage_directive();

  class  Column_defContext : public antlr4::ParserRuleContext {
  public:
    Column_defContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColidContext *colid();
    Typename_pgContext *typename_pg();
    std::vector<Col_constraintContext *> col_constraint();
    Col_constraintContext* col_constraint(size_t i);
    Opt_storage_encodingContext *opt_storage_encoding();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_defContext* column_def();

  class  Col_constraintContext : public antlr4::ParserRuleContext {
  public:
    Col_constraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONSTRAINT();
    NameContext *name();
    Col_constraint_elemContext *col_constraint_elem();
    Constraint_attrContext *constraint_attr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Col_constraintContext* col_constraint();

  class  Opt_storage_encodingContext : public antlr4::ParserRuleContext {
  public:
    Opt_storage_encodingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENCODING();
    DefinitionContext *definition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_storage_encodingContext* opt_storage_encoding();

  class  Col_constraint_elemContext : public antlr4::ParserRuleContext {
  public:
    Col_constraint_elemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *NULL_P();
    antlr4::tree::TerminalNode *UNIQUE();
    With_out_definitionContext *with_out_definition();
    Constraint_table_spaceContext *constraint_table_space();
    antlr4::tree::TerminalNode *PRIMARY();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    A_exprContext *a_expr();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *REFERENCES();
    Qualified_nameContext *qualified_name();
    Paren_column_listContext *paren_column_list();
    Key_matchContext *key_match();
    Key_actionsContext *key_actions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Col_constraint_elemContext* col_constraint_elem();

  class  Constraint_attrContext : public antlr4::ParserRuleContext {
  public:
    Constraint_attrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFERRABLE();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *INITIALLY();
    antlr4::tree::TerminalNode *DEFERRED();
    antlr4::tree::TerminalNode *IMMEDIATE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constraint_attrContext* constraint_attr();

  class  Table_like_clauseContext : public antlr4::ParserRuleContext {
  public:
    Table_like_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIKE();
    Qualified_nameContext *qualified_name();
    std::vector<Table_list_optionContext *> table_list_option();
    Table_list_optionContext* table_list_option(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_like_clauseContext* table_like_clause();

  class  Table_list_optionContext : public antlr4::ParserRuleContext {
  public:
    Table_list_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFAULTS();
    antlr4::tree::TerminalNode *INCLUDING();
    antlr4::tree::TerminalNode *EXCLUDING();
    antlr4::tree::TerminalNode *CONSTRAINTS();
    antlr4::tree::TerminalNode *INDEXES();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_list_optionContext* table_list_option();

  class  Table_constraintContext : public antlr4::ParserRuleContext {
  public:
    Table_constraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constraint_elemContext *constraint_elem();
    antlr4::tree::TerminalNode *CONSTRAINT();
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_constraintContext* table_constraint();

  class  Constraint_elemContext : public antlr4::ParserRuleContext {
  public:
    Constraint_elemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    A_exprContext *a_expr();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    std::vector<Paren_column_listContext *> paren_column_list();
    Paren_column_listContext* paren_column_list(size_t i);
    antlr4::tree::TerminalNode *UNIQUE();
    antlr4::tree::TerminalNode *PRIMARY();
    antlr4::tree::TerminalNode *KEY();
    With_out_definitionContext *with_out_definition();
    Constraint_table_spaceContext *constraint_table_space();
    antlr4::tree::TerminalNode *FOREIGN();
    antlr4::tree::TerminalNode *REFERENCES();
    Qualified_nameContext *qualified_name();
    Key_matchContext *key_match();
    Key_actionsContext *key_actions();
    Constraint_attr_specContext *constraint_attr_spec();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constraint_elemContext* constraint_elem();

  class  Paren_columnContext : public antlr4::ParserRuleContext {
  public:
    Paren_columnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Column_elemContext *column_elem();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Paren_columnContext* paren_column();

  class  Paren_column_listContext : public antlr4::ParserRuleContext {
  public:
    Paren_column_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Column_listContext *column_list();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Paren_column_listContext* paren_column_list();

  class  Column_listContext : public antlr4::ParserRuleContext {
  public:
    Column_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Column_elemContext *> column_elem();
    Column_elemContext* column_elem(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_listContext* column_list();

  class  Column_elemContext : public antlr4::ParserRuleContext {
  public:
    Column_elemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColidContext *colid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_elemContext* column_elem();

  class  Key_matchContext : public antlr4::ParserRuleContext {
  public:
    Key_matchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MATCH();
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *PARTIAL();
    antlr4::tree::TerminalNode *SIMPLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Key_matchContext* key_match();

  class  Key_actionsContext : public antlr4::ParserRuleContext {
  public:
    Key_actionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Key_updateContext *key_update();
    Key_deleteContext *key_delete();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Key_actionsContext* key_actions();

  class  Key_updateContext : public antlr4::ParserRuleContext {
  public:
    Key_updateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *UPDATE();
    Key_actionContext *key_action();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Key_updateContext* key_update();

  class  Key_deleteContext : public antlr4::ParserRuleContext {
  public:
    Key_deleteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *DELETE_P();
    Key_actionContext *key_action();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Key_deleteContext* key_delete();

  class  Key_actionContext : public antlr4::ParserRuleContext {
  public:
    Key_actionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *RESTRICT();
    antlr4::tree::TerminalNode *CASCADE();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *NULL_P();
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Key_actionContext* key_action();

  class  Opt_inheritContext : public antlr4::ParserRuleContext {
  public:
    Opt_inheritContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INHERITS();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Qualified_name_listContext *qualified_name_list();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_inheritContext* opt_inherit();

  class  Opt_with_def_oidsContext : public antlr4::ParserRuleContext {
  public:
    Opt_with_def_oidsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    DefinitionContext *definition();
    antlr4::tree::TerminalNode *OIDS();
    antlr4::tree::TerminalNode *WITHOUT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_with_def_oidsContext* opt_with_def_oids();

  class  On_commit_optionContext : public antlr4::ParserRuleContext {
  public:
    On_commit_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *COMMIT();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *ROWS();
    antlr4::tree::TerminalNode *DELETE_P();
    antlr4::tree::TerminalNode *PRESERVE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  On_commit_optionContext* on_commit_option();

  class  Opt_table_spaceContext : public antlr4::ParserRuleContext {
  public:
    Opt_table_spaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLESPACE();
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_table_spaceContext* opt_table_space();

  class  Constraint_table_spaceContext : public antlr4::ParserRuleContext {
  public:
    Constraint_table_spaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *TABLESPACE();
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constraint_table_spaceContext* constraint_table_space();

  class  Distributed_byContext : public antlr4::ParserRuleContext {
  public:
    Distributed_byContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DISTRIBUTED();
    antlr4::tree::TerminalNode *BY();
    Paren_column_listContext *paren_column_list();
    antlr4::tree::TerminalNode *RANDOMLY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Distributed_byContext* distributed_by();

  class  Opt_distributed_byContext : public antlr4::ParserRuleContext {
  public:
    Opt_distributed_byContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Distributed_byContext *distributed_by();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_distributed_byContext* opt_distributed_by();

  class  Tab_partition_column_enc_listContext : public antlr4::ParserRuleContext {
  public:
    Tab_partition_column_enc_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Column_reference_storage_directiveContext *> column_reference_storage_directive();
    Column_reference_storage_directiveContext* column_reference_storage_directive(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tab_partition_column_enc_listContext* tab_partition_column_enc_list();

  class  Opt_tab_partition_storage_attrContext : public antlr4::ParserRuleContext {
  public:
    Opt_tab_partition_storage_attrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    DefinitionContext *definition();
    antlr4::tree::TerminalNode *TABLESPACE();
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_tab_partition_storage_attrContext* opt_tab_partition_storage_attr();

  class  Opt_tab_partition_specContext : public antlr4::ParserRuleContext {
  public:
    Opt_tab_partition_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Tab_partition_elem_listContext *tab_partition_elem_list();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_tab_partition_specContext* opt_tab_partition_spec();

  class  Opt_tab_sub_partition_specContext : public antlr4::ParserRuleContext {
  public:
    Opt_tab_sub_partition_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Tab_sub_partition_elem_listContext *tab_sub_partition_elem_list();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_tab_sub_partition_specContext* opt_tab_sub_partition_spec();

  class  Tab_partition_elem_listContext : public antlr4::ParserRuleContext {
  public:
    Tab_partition_elem_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Tab_partition_elemContext *> tab_partition_elem();
    Tab_partition_elemContext* tab_partition_elem(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tab_partition_elem_listContext* tab_partition_elem_list();

  class  Tab_sub_partition_elem_listContext : public antlr4::ParserRuleContext {
  public:
    Tab_sub_partition_elem_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Tab_sub_partition_elemContext *> tab_sub_partition_elem();
    Tab_sub_partition_elemContext* tab_sub_partition_elem(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tab_sub_partition_elem_listContext* tab_sub_partition_elem_list();

  class  Tab_part_val_no_paranContext : public antlr4::ParserRuleContext {
  public:
    Tab_part_val_no_paranContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    A_expr_constContext *a_expr_const();
    antlr4::tree::TerminalNode *CAST();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Tab_part_valContext *tab_part_val();
    antlr4::tree::TerminalNode *AS();
    Typename_pgContext *typename_pg();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    antlr4::tree::TerminalNode *MINUS_SIGN();
    Tab_part_val_no_paranContext *tab_part_val_no_paran();
    antlr4::tree::TerminalNode *TYPECAST();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tab_part_val_no_paranContext* tab_part_val_no_paran();
  Tab_part_val_no_paranContext* tab_part_val_no_paran(int precedence);
  class  Tab_part_valContext : public antlr4::ParserRuleContext {
  public:
    Tab_part_valContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tab_part_val_no_paranContext *tab_part_val_no_paran();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    antlr4::tree::TerminalNode *TYPECAST();
    Typename_pgContext *typename_pg();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tab_part_valContext* tab_part_val();

  class  Tab_partition_boundary_spec_val_listContext : public antlr4::ParserRuleContext {
  public:
    Tab_partition_boundary_spec_val_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Tab_part_valContext *> tab_part_val();
    Tab_part_valContext* tab_part_val(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tab_partition_boundary_spec_val_listContext* tab_partition_boundary_spec_val_list();

  class  Opt_tab_partition_range_inclusiveContext : public antlr4::ParserRuleContext {
  public:
    Opt_tab_partition_range_inclusiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INCLUSIVE();
    antlr4::tree::TerminalNode *EXCLUSIVE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_tab_partition_range_inclusiveContext* opt_tab_partition_range_inclusive();

  class  Tab_partition_boundary_spec_startContext : public antlr4::ParserRuleContext {
  public:
    Tab_partition_boundary_spec_startContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    Tab_partition_boundary_spec_val_listContext *tab_partition_boundary_spec_val_list();
    Opt_tab_partition_range_inclusiveContext *opt_tab_partition_range_inclusive();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tab_partition_boundary_spec_startContext* tab_partition_boundary_spec_start();

  class  Tab_partition_boundary_spec_endContext : public antlr4::ParserRuleContext {
  public:
    Tab_partition_boundary_spec_endContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *END_P();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    Tab_partition_boundary_spec_val_listContext *tab_partition_boundary_spec_val_list();
    Opt_tab_partition_range_inclusiveContext *opt_tab_partition_range_inclusive();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tab_partition_boundary_spec_endContext* tab_partition_boundary_spec_end();

  class  Opt_tab_partition_boundary_spec_everyContext : public antlr4::ParserRuleContext {
  public:
    Opt_tab_partition_boundary_spec_everyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EVERY();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Tab_partition_boundary_spec_val_listContext *tab_partition_boundary_spec_val_list();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_tab_partition_boundary_spec_everyContext* opt_tab_partition_boundary_spec_every();

  class  Tab_partition_boundary_specContext : public antlr4::ParserRuleContext {
  public:
    Tab_partition_boundary_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Part_values_clauseContext *part_values_clause();
    Tab_partition_boundary_spec_startContext *tab_partition_boundary_spec_start();
    Tab_partition_boundary_spec_endContext *tab_partition_boundary_spec_end();
    Opt_tab_partition_boundary_spec_everyContext *opt_tab_partition_boundary_spec_every();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tab_partition_boundary_specContext* tab_partition_boundary_spec();

  class  Paren_part_values_singleContext : public antlr4::ParserRuleContext {
  public:
    Paren_part_values_singleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Part_values_singleContext *part_values_single();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Paren_part_values_singleContext* paren_part_values_single();

  class  Multi_spec_value_listContext : public antlr4::ParserRuleContext {
  public:
    Multi_spec_value_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Paren_part_values_singleContext *> paren_part_values_single();
    Paren_part_values_singleContext* paren_part_values_single(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Multi_spec_value_listContext* multi_spec_value_list();

  class  Part_values_singleContext : public antlr4::ParserRuleContext {
  public:
    Part_values_singleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Tab_part_val_no_paranContext *> tab_part_val_no_paran();
    Tab_part_val_no_paranContext* tab_part_val_no_paran(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Part_values_singleContext* part_values_single();

  class  Part_values_clauseContext : public antlr4::ParserRuleContext {
  public:
    Part_values_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VALUES();
    Paren_part_values_singleContext *paren_part_values_single();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Multi_spec_value_listContext *multi_spec_value_list();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Part_values_clauseContext* part_values_clause();

  class  Part_values_or_spec_listContext : public antlr4::ParserRuleContext {
  public:
    Part_values_or_spec_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tab_partition_boundary_spec_val_listContext *tab_partition_boundary_spec_val_list();
    Part_values_clauseContext *part_values_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Part_values_or_spec_listContext* part_values_or_spec_list();

  class  Tab_partition_elemContext : public antlr4::ParserRuleContext {
  public:
    Tab_partition_elemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tab_partition_name_declContext *tab_partition_name_decl();
    Tab_partition_default_name_declContext *tab_partition_default_name_decl();
    Tab_partition_boundary_specContext *tab_partition_boundary_spec();
    Opt_tab_partition_storage_attrContext *opt_tab_partition_storage_attr();
    Tab_partition_column_enc_listContext *tab_partition_column_enc_list();
    Opt_tab_sub_partition_specContext *opt_tab_sub_partition_spec();
    Tab_partition_elemOptionContext *tab_partition_elemOption();
    Column_reference_storage_directiveContext *column_reference_storage_directive();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tab_partition_elemContext* tab_partition_elem();

  class  Tab_sub_partition_elemContext : public antlr4::ParserRuleContext {
  public:
    Tab_sub_partition_elemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tab_sub_partition_name_declContext *tab_sub_partition_name_decl();
    Tab_sub_partition_default_name_declContext *tab_sub_partition_default_name_decl();
    Tab_partition_boundary_specContext *tab_partition_boundary_spec();
    Opt_tab_partition_storage_attrContext *opt_tab_partition_storage_attr();
    Tab_partition_column_enc_listContext *tab_partition_column_enc_list();
    Opt_tab_sub_partition_specContext *opt_tab_sub_partition_spec();
    Tab_partition_elemOptionContext *tab_partition_elemOption();
    Column_reference_storage_directiveContext *column_reference_storage_directive();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tab_sub_partition_elemContext* tab_sub_partition_elem();

  class  Tab_partition_elemOptionContext : public antlr4::ParserRuleContext {
  public:
    Tab_partition_elemOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tab_partition_boundary_specContext *tab_partition_boundary_spec();
    Opt_tab_partition_storage_attrContext *opt_tab_partition_storage_attr();
    Tab_partition_column_enc_listContext *tab_partition_column_enc_list();
    Opt_tab_sub_partition_specContext *opt_tab_sub_partition_spec();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tab_partition_elemOptionContext* tab_partition_elemOption();

  class  Tab_partition_name_declContext : public antlr4::ParserRuleContext {
  public:
    Tab_partition_name_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARTITION();
    Partition_colidContext *partition_colid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tab_partition_name_declContext* tab_partition_name_decl();

  class  Tab_partition_default_name_declContext : public antlr4::ParserRuleContext {
  public:
    Tab_partition_default_name_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *PARTITION();
    Partition_colidContext *partition_colid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tab_partition_default_name_declContext* tab_partition_default_name_decl();

  class  Tab_sub_partition_name_declContext : public antlr4::ParserRuleContext {
  public:
    Tab_sub_partition_name_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUBPARTITION();
    Partition_colidContext *partition_colid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tab_sub_partition_name_declContext* tab_sub_partition_name_decl();

  class  Tab_sub_partition_default_name_declContext : public antlr4::ParserRuleContext {
  public:
    Tab_sub_partition_default_name_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *SUBPARTITION();
    Partition_colidContext *partition_colid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tab_sub_partition_default_name_declContext* tab_sub_partition_default_name_decl();

  class  Tab_partition_by_typeContext : public antlr4::ParserRuleContext {
  public:
    Tab_partition_by_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RANGE();
    antlr4::tree::TerminalNode *HASH();
    antlr4::tree::TerminalNode *LIST();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tab_partition_by_typeContext* tab_partition_by_type();

  class  Opt_tab_partition_byContext : public antlr4::ParserRuleContext {
  public:
    Opt_tab_partition_byContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *BY();
    Paren_column_listContext *paren_column_list();
    Tab_partition_by_typeContext *tab_partition_by_type();
    Opt_partitions_numberContext *opt_partitions_number();
    Tab_sub_partition_by_listContext *tab_sub_partition_by_list();
    Opt_tab_partition_specContext *opt_tab_partition_spec();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_tab_partition_byContext* opt_tab_partition_by();

  class  Tab_sub_partition_by_listContext : public antlr4::ParserRuleContext {
  public:
    Tab_sub_partition_by_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Tab_sub_partition_byContext *> tab_sub_partition_by();
    Tab_sub_partition_byContext* tab_sub_partition_by(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tab_sub_partition_by_listContext* tab_sub_partition_by_list();

  class  Tab_sub_partition_templateContext : public antlr4::ParserRuleContext {
  public:
    Tab_sub_partition_templateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUBPARTITION();
    antlr4::tree::TerminalNode *TEMPLATE();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Tab_sub_partition_elem_listContext *tab_sub_partition_elem_list();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tab_sub_partition_templateContext* tab_sub_partition_template();

  class  Tab_sub_partition_byContext : public antlr4::ParserRuleContext {
  public:
    Tab_sub_partition_byContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUBPARTITION();
    antlr4::tree::TerminalNode *BY();
    Tab_partition_by_typeContext *tab_partition_by_type();
    Paren_column_listContext *paren_column_list();
    Opt_partitions_numberContext *opt_partitions_number();
    Tab_sub_partition_templateContext *tab_sub_partition_template();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tab_sub_partition_byContext* tab_sub_partition_by();

  class  Opt_partitions_numberContext : public antlr4::ParserRuleContext {
  public:
    Opt_partitions_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Integer_onlyContext *integer_only();
    antlr4::tree::TerminalNode *PARTITIONS();
    antlr4::tree::TerminalNode *SUBPARTITIONS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_partitions_numberContext* opt_partitions_number();

  class  Create_as_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_as_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TABLE();
    Create_as_targetContext *create_as_target();
    antlr4::tree::TerminalNode *AS();
    Select_stmtContext *select_stmt();
    Opt_tempContext *opt_temp();
    Opt_with_dataContext *opt_with_data();
    Opt_distributed_byContext *opt_distributed_by();
    Opt_tab_partition_byContext *opt_tab_partition_by();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_as_stmtContext* create_as_stmt();

  class  Create_as_targetContext : public antlr4::ParserRuleContext {
  public:
    Create_as_targetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Qualified_nameContext *qualified_name();
    Opt_create_asContext *opt_create_as();
    Opt_with_def_oidsContext *opt_with_def_oids();
    On_commit_optionContext *on_commit_option();
    Opt_table_spaceContext *opt_table_space();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_as_targetContext* create_as_target();

  class  Opt_create_asContext : public antlr4::ParserRuleContext {
  public:
    Opt_create_asContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Create_as_listContext *create_as_list();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_create_asContext* opt_create_as();

  class  Create_as_listContext : public antlr4::ParserRuleContext {
  public:
    Create_as_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Create_as_elementContext *> create_as_element();
    Create_as_elementContext* create_as_element(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_as_listContext* create_as_list();

  class  Create_as_elementContext : public antlr4::ParserRuleContext {
  public:
    Create_as_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColidContext *colid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_as_elementContext* create_as_element();

  class  Opt_with_dataContext : public antlr4::ParserRuleContext {
  public:
    Opt_with_dataContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *DATA_P();
    antlr4::tree::TerminalNode *NO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_with_dataContext* opt_with_data();

  class  Create_external_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_external_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *TABLE();
    Qualified_nameContext *qualified_name();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    Ext_type_descContext *ext_type_desc();
    antlr4::tree::TerminalNode *FORMAT();
    SconstContext *sconst();
    Opt_writableContext *opt_writable();
    antlr4::tree::TerminalNode *WEB();
    Opt_tempContext *opt_temp();
    Ext_table_element_listContext *ext_table_element_list();
    Format_optContext *format_opt();
    Ext_options_optContext *ext_options_opt();
    Ext_opt_encoding_listContext *ext_opt_encoding_list();
    Opt_single_row_error_handlingContext *opt_single_row_error_handling();
    Opt_distributed_byContext *opt_distributed_by();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_external_stmtContext* create_external_stmt();

  class  Opt_writableContext : public antlr4::ParserRuleContext {
  public:
    Opt_writableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WRITABLE();
    antlr4::tree::TerminalNode *READABLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_writableContext* opt_writable();

  class  Ext_type_descContext : public antlr4::ParserRuleContext {
  public:
    Ext_type_descContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCATION();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Cdb_string_listContext *cdb_string_list();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    std::vector<Ext_on_clause_itemContext *> ext_on_clause_item();
    Ext_on_clause_itemContext* ext_on_clause_item(size_t i);
    antlr4::tree::TerminalNode *EXECUTE();
    SconstContext *sconst();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ext_type_descContext* ext_type_desc();

  class  Ext_on_clause_itemContext : public antlr4::ParserRuleContext {
  public:
    Ext_on_clause_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *HOST();
    SconstContext *sconst();
    antlr4::tree::TerminalNode *MASTER();
    IconstContext *iconst();
    antlr4::tree::TerminalNode *SEGMENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ext_on_clause_itemContext* ext_on_clause_item();

  class  Double_parensContext : public antlr4::ParserRuleContext {
  public:
    Double_parensContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PAREN();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Double_parensContext* double_parens();

  class  Format_optContext : public antlr4::ParserRuleContext {
  public:
    Format_optContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Format_opt_listContext *format_opt_list();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    Format_def_listContext *format_def_list();
    Double_parensContext *double_parens();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Format_optContext* format_opt();

  class  Format_opt_listContext : public antlr4::ParserRuleContext {
  public:
    Format_opt_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Format_opt_itemContext *> format_opt_item();
    Format_opt_itemContext* format_opt_item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Format_opt_listContext* format_opt_list();

  class  Format_def_listContext : public antlr4::ParserRuleContext {
  public:
    Format_def_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Format_def_itemContext *> format_def_item();
    Format_def_itemContext* format_def_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Format_def_listContext* format_def_list();

  class  Format_def_itemContext : public antlr4::ParserRuleContext {
  public:
    Format_def_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Col_labelContext *col_label();
    antlr4::tree::TerminalNode *EQUALS_OP();
    Def_argContext *def_arg();
    Paren_column_listContext *paren_column_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Format_def_itemContext* format_def_item();

  class  Format_opt_itemContext : public antlr4::ParserRuleContext {
  public:
    Format_opt_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELIMITER();
    SconstContext *sconst();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *NULL_P();
    antlr4::tree::TerminalNode *QUOTE();
    antlr4::tree::TerminalNode *ESCAPE();
    antlr4::tree::TerminalNode *CSV();
    antlr4::tree::TerminalNode *HEADER_P();
    antlr4::tree::TerminalNode *FORCE();
    Column_listContext *column_list();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *FILL();
    antlr4::tree::TerminalNode *MISSING();
    antlr4::tree::TerminalNode *FIELDS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Format_opt_itemContext* format_opt_item();

  class  Ext_options_optContext : public antlr4::ParserRuleContext {
  public:
    Ext_options_optContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPTIONS();
    Ext_optionsContext *ext_options();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ext_options_optContext* ext_options_opt();

  class  Ext_optionsContext : public antlr4::ParserRuleContext {
  public:
    Ext_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Ext_options_listContext *ext_options_list();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    Double_parensContext *double_parens();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ext_optionsContext* ext_options();

  class  Ext_options_listContext : public antlr4::ParserRuleContext {
  public:
    Ext_options_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Ext_options_itemContext *> ext_options_item();
    Ext_options_itemContext* ext_options_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ext_options_listContext* ext_options_list();

  class  Ext_options_itemContext : public antlr4::ParserRuleContext {
  public:
    Ext_options_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Col_labelContext *col_label();
    SconstContext *sconst();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ext_options_itemContext* ext_options_item();

  class  Ext_table_element_listContext : public antlr4::ParserRuleContext {
  public:
    Ext_table_element_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Ext_table_elementContext *> ext_table_element();
    Ext_table_elementContext* ext_table_element(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ext_table_element_listContext* ext_table_element_list();

  class  Ext_table_elementContext : public antlr4::ParserRuleContext {
  public:
    Ext_table_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ext_column_defContext *ext_column_def();
    Table_like_clauseContext *table_like_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ext_table_elementContext* ext_table_element();

  class  Ext_column_defContext : public antlr4::ParserRuleContext {
  public:
    Ext_column_defContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColidContext *colid();
    Typename_pgContext *typename_pg();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ext_column_defContext* ext_column_def();

  class  Opt_single_row_error_handlingContext : public antlr4::ParserRuleContext {
  public:
    Opt_single_row_error_handlingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEGMENT();
    antlr4::tree::TerminalNode *REJECT_P();
    antlr4::tree::TerminalNode *LIMIT();
    IconstContext *iconst();
    Opt_log_error_tableContext *opt_log_error_table();
    Opt_sreh_limit_typeContext *opt_sreh_limit_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_single_row_error_handlingContext* opt_single_row_error_handling();

  class  Opt_log_error_tableContext : public antlr4::ParserRuleContext {
  public:
    Opt_log_error_tableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOG_P();
    antlr4::tree::TerminalNode *ERRORS();
    antlr4::tree::TerminalNode *INTO();
    Qualified_nameContext *qualified_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_log_error_tableContext* opt_log_error_table();

  class  Opt_sreh_limit_typeContext : public antlr4::ParserRuleContext {
  public:
    Opt_sreh_limit_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ROWS();
    antlr4::tree::TerminalNode *PERCENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_sreh_limit_typeContext* opt_sreh_limit_type();

  class  Ext_opt_encoding_listContext : public antlr4::ParserRuleContext {
  public:
    Ext_opt_encoding_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Ext_opt_encoding_itemContext *> ext_opt_encoding_item();
    Ext_opt_encoding_itemContext* ext_opt_encoding_item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ext_opt_encoding_listContext* ext_opt_encoding_list();

  class  Ext_opt_encoding_itemContext : public antlr4::ParserRuleContext {
  public:
    Ext_opt_encoding_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENCODING();
    SconstContext *sconst();
    IconstContext *iconst();
    antlr4::tree::TerminalNode *EQUALS_OP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ext_opt_encoding_itemContext* ext_opt_encoding_item();

  class  Create_seq_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_seq_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *SEQUENCE();
    Qualified_nameContext *qualified_name();
    Opt_tempContext *opt_temp();
    Opt_seq_listContext *opt_seq_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_seq_stmtContext* create_seq_stmt();

  class  Alter_seq_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_seq_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *SEQUENCE();
    Qualified_nameContext *qualified_name();
    Opt_seq_listContext *opt_seq_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_seq_stmtContext* alter_seq_stmt();

  class  Opt_seq_listContext : public antlr4::ParserRuleContext {
  public:
    Opt_seq_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Opt_seq_elemContext *> opt_seq_elem();
    Opt_seq_elemContext* opt_seq_elem(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_seq_listContext* opt_seq_list();

  class  Opt_seq_elemContext : public antlr4::ParserRuleContext {
  public:
    Opt_seq_elemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CACHE();
    Numberic_onlyContext *numberic_only();
    antlr4::tree::TerminalNode *CYCLE();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *INCREMENT();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *MAXVALUE();
    antlr4::tree::TerminalNode *MINVALUE();
    antlr4::tree::TerminalNode *OWNED();
    Any_nameContext *any_name();
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *RESTART();
    Opt_withContext *opt_with();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_seq_elemContext* opt_seq_elem();

  class  Numberic_onlyContext : public antlr4::ParserRuleContext {
  public:
    Numberic_onlyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Float_onlyContext *float_only();
    Integer_onlyContext *integer_only();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Numberic_onlyContext* numberic_only();

  class  Float_onlyContext : public antlr4::ParserRuleContext {
  public:
    Float_onlyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FCONST();
    antlr4::tree::TerminalNode *MINUS_SIGN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Float_onlyContext* float_only();

  class  Integer_onlyContext : public antlr4::ParserRuleContext {
  public:
    Integer_onlyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Signed_iconstContext *signed_iconst();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Integer_onlyContext* integer_only();

  class  Create_p_lang_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_p_lang_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *LANGUAGE();
    Colid_or_sconstContext *colid_or_sconst();
    antlr4::tree::TerminalNode *TRUSTED();
    antlr4::tree::TerminalNode *PROCEDURAL();
    Create_p_lang_stmtOptionContext *create_p_lang_stmtOption();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_p_lang_stmtContext* create_p_lang_stmt();

  class  Create_p_lang_stmtOptionContext : public antlr4::ParserRuleContext {
  public:
    Create_p_lang_stmtOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HANDLER();
    Handler_nameContext *handler_name();
    Opt_inline_handlerContext *opt_inline_handler();
    Opt_validatorContext *opt_validator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_p_lang_stmtOptionContext* create_p_lang_stmtOption();

  class  Handler_nameContext : public antlr4::ParserRuleContext {
  public:
    Handler_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    AttrsContext *attrs();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Handler_nameContext* handler_name();

  class  Opt_inline_handlerContext : public antlr4::ParserRuleContext {
  public:
    Opt_inline_handlerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INLINE_P();
    Handler_nameContext *handler_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_inline_handlerContext* opt_inline_handler();

  class  Validator_clauseContext : public antlr4::ParserRuleContext {
  public:
    Validator_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VALIDATOR();
    Handler_nameContext *handler_name();
    antlr4::tree::TerminalNode *NO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Validator_clauseContext* validator_clause();

  class  Opt_validatorContext : public antlr4::ParserRuleContext {
  public:
    Opt_validatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Validator_clauseContext *validator_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_validatorContext* opt_validator();

  class  Drop_p_lang_stmtContext : public antlr4::ParserRuleContext {
  public:
    Drop_p_lang_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *LANGUAGE();
    Colid_or_sconstContext *colid_or_sconst();
    antlr4::tree::TerminalNode *PROCEDURAL();
    antlr4::tree::TerminalNode *IF_P();
    antlr4::tree::TerminalNode *EXISTS();
    Opt_drop_behaviorContext *opt_drop_behavior();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_p_lang_stmtContext* drop_p_lang_stmt();

  class  Create_file_space_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_file_space_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *FILESPACE();
    NameContext *name();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    File_space_seg_listContext *file_space_seg_list();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    Opt_ownerContext *opt_owner();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_file_space_stmtContext* create_file_space_stmt();

  class  File_space_seg_listContext : public antlr4::ParserRuleContext {
  public:
    File_space_seg_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<File_space_segContext *> file_space_seg();
    File_space_segContext* file_space_seg(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  File_space_seg_listContext* file_space_seg_list();

  class  File_space_segContext : public antlr4::ParserRuleContext {
  public:
    File_space_segContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IconstContext *iconst();
    antlr4::tree::TerminalNode *SEMICOLON();
    SconstContext *sconst();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  File_space_segContext* file_space_seg();

  class  Opt_ownerContext : public antlr4::ParserRuleContext {
  public:
    Opt_ownerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OWNER();
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_ownerContext* opt_owner();

  class  Create_table_space_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_table_space_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TABLESPACE();
    std::vector<NameContext *> name();
    NameContext* name(size_t i);
    antlr4::tree::TerminalNode *FILESPACE();
    Opt_ownerContext *opt_owner();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_table_space_stmtContext* create_table_space_stmt();

  class  Create_extension_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_extension_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *EXTENSION();
    NameContext *name();
    antlr4::tree::TerminalNode *IF_P();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *EXISTS();
    Opt_withContext *opt_with();
    Create_extension_opt_listContext *create_extension_opt_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_extension_stmtContext* create_extension_stmt();

  class  Create_extension_opt_listContext : public antlr4::ParserRuleContext {
  public:
    Create_extension_opt_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Create_extension_opt_itemContext *> create_extension_opt_item();
    Create_extension_opt_itemContext* create_extension_opt_item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_extension_opt_listContext* create_extension_opt_list();

  class  Create_extension_opt_itemContext : public antlr4::ParserRuleContext {
  public:
    Create_extension_opt_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SCHEMA();
    NameContext *name();
    antlr4::tree::TerminalNode *VERSION_P();
    SconstContext *sconst();
    antlr4::tree::TerminalNode *FROM();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_extension_opt_itemContext* create_extension_opt_item();

  class  Alter_extension_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_extension_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *EXTENSION();
    NameContext *name();
    antlr4::tree::TerminalNode *UPDATE();
    Alter_extension_opt_listContext *alter_extension_opt_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_extension_stmtContext* alter_extension_stmt();

  class  Alter_extension_opt_listContext : public antlr4::ParserRuleContext {
  public:
    Alter_extension_opt_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Alter_extension_opt_itemContext *> alter_extension_opt_item();
    Alter_extension_opt_itemContext* alter_extension_opt_item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_extension_opt_listContext* alter_extension_opt_list();

  class  Alter_extension_opt_itemContext : public antlr4::ParserRuleContext {
  public:
    Alter_extension_opt_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TO();
    SconstContext *sconst();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_extension_opt_itemContext* alter_extension_opt_item();

  class  Alter_extension_content_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_extension_content_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *EXTENSION();
    NameContext *name();
    Add_dropContext *add_drop();
    Alter_extension_content_stmtOptionContext *alter_extension_content_stmtOption();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_extension_content_stmtContext* alter_extension_content_stmt();

  class  Alter_extension_content_stmtOptionContext : public antlr4::ParserRuleContext {
  public:
    Alter_extension_content_stmtOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AGGREGATE();
    Func_nameContext *func_name();
    Aggr_argsContext *aggr_args();
    antlr4::tree::TerminalNode *CAST();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    std::vector<Typename_pgContext *> typename_pg();
    Typename_pgContext* typename_pg(size_t i);
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    antlr4::tree::TerminalNode *CONVERSION_P();
    Any_nameContext *any_name();
    antlr4::tree::TerminalNode *DOMAIN_P();
    antlr4::tree::TerminalNode *FUNCTION();
    Function_with_argtypesContext *function_with_argtypes();
    antlr4::tree::TerminalNode *LANGUAGE();
    NameContext *name();
    antlr4::tree::TerminalNode *PROCEDURAL();
    antlr4::tree::TerminalNode *OPERATOR();
    Any_operatorContext *any_operator();
    Oper_argtypesContext *oper_argtypes();
    antlr4::tree::TerminalNode *CLASS();
    antlr4::tree::TerminalNode *USING();
    Access_methodContext *access_method();
    antlr4::tree::TerminalNode *FAMILY();
    antlr4::tree::TerminalNode *SCHEMA();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *TEXT_P();
    antlr4::tree::TerminalNode *SEARCH();
    antlr4::tree::TerminalNode *PARSER();
    antlr4::tree::TerminalNode *DICTIONARY();
    antlr4::tree::TerminalNode *TEMPLATE();
    antlr4::tree::TerminalNode *CONFIGURATION();
    antlr4::tree::TerminalNode *SEQUENCE();
    antlr4::tree::TerminalNode *VIEW();
    antlr4::tree::TerminalNode *TYPE_P();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_extension_content_stmtOptionContext* alter_extension_content_stmtOption();

  class  Create_trig_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_trig_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TRIGGER();
    NameContext *name();
    Trigger_action_timeContext *trigger_action_time();
    Trigger_eventsContext *trigger_events();
    antlr4::tree::TerminalNode *ON();
    Qualified_nameContext *qualified_name();
    antlr4::tree::TerminalNode *EXECUTE();
    antlr4::tree::TerminalNode *PROCEDURE();
    Func_nameContext *func_name();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    Trigger_for_specContext *trigger_for_spec();
    Trigger_func_argsContext *trigger_func_args();
    antlr4::tree::TerminalNode *CONSTRAINT();
    antlr4::tree::TerminalNode *AFTER();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *EACH();
    antlr4::tree::TerminalNode *ROW();
    Opt_constr_from_tableContext *opt_constr_from_table();
    Constraint_attr_specContext *constraint_attr_spec();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_trig_stmtContext* create_trig_stmt();

  class  Trigger_action_timeContext : public antlr4::ParserRuleContext {
  public:
    Trigger_action_timeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEFORE();
    antlr4::tree::TerminalNode *AFTER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Trigger_action_timeContext* trigger_action_time();

  class  Trigger_eventsContext : public antlr4::ParserRuleContext {
  public:
    Trigger_eventsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Trigger_one_eventContext *> trigger_one_event();
    Trigger_one_eventContext* trigger_one_event(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OR();
    antlr4::tree::TerminalNode* OR(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Trigger_eventsContext* trigger_events();

  class  Trigger_one_eventContext : public antlr4::ParserRuleContext {
  public:
    Trigger_one_eventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *DELETE_P();
    antlr4::tree::TerminalNode *UPDATE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Trigger_one_eventContext* trigger_one_event();

  class  Trigger_for_specContext : public antlr4::ParserRuleContext {
  public:
    Trigger_for_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    Trigger_for_typeContext *trigger_for_type();
    antlr4::tree::TerminalNode *EACH();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Trigger_for_specContext* trigger_for_spec();

  class  Trigger_for_typeContext : public antlr4::ParserRuleContext {
  public:
    Trigger_for_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *STATEMENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Trigger_for_typeContext* trigger_for_type();

  class  Trigger_func_argsContext : public antlr4::ParserRuleContext {
  public:
    Trigger_func_argsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Trigger_func_argContext *> trigger_func_arg();
    Trigger_func_argContext* trigger_func_arg(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Trigger_func_argsContext* trigger_func_args();

  class  Trigger_func_argContext : public antlr4::ParserRuleContext {
  public:
    Trigger_func_argContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ICONST();
    antlr4::tree::TerminalNode *FCONST();
    SconstContext *sconst();
    antlr4::tree::TerminalNode *BCONST();
    antlr4::tree::TerminalNode *XCONST();
    ColidContext *colid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Trigger_func_argContext* trigger_func_arg();

  class  Opt_constr_from_tableContext : public antlr4::ParserRuleContext {
  public:
    Opt_constr_from_tableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FROM();
    Qualified_nameContext *qualified_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_constr_from_tableContext* opt_constr_from_table();

  class  Constraint_attr_specContext : public antlr4::ParserRuleContext {
  public:
    Constraint_attr_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constraint_deferrability_specContext *constraint_deferrability_spec();
    Constraint_time_specContext *constraint_time_spec();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constraint_attr_specContext* constraint_attr_spec();

  class  Constraint_deferrability_specContext : public antlr4::ParserRuleContext {
  public:
    Constraint_deferrability_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFERRABLE();
    antlr4::tree::TerminalNode *NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constraint_deferrability_specContext* constraint_deferrability_spec();

  class  Constraint_time_specContext : public antlr4::ParserRuleContext {
  public:
    Constraint_time_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INITIALLY();
    antlr4::tree::TerminalNode *IMMEDIATE();
    antlr4::tree::TerminalNode *DEFERRED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constraint_time_specContext* constraint_time_spec();

  class  Drop_trig_stmtContext : public antlr4::ParserRuleContext {
  public:
    Drop_trig_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *TRIGGER();
    NameContext *name();
    antlr4::tree::TerminalNode *ON();
    Qualified_nameContext *qualified_name();
    Opt_drop_behaviorContext *opt_drop_behavior();
    antlr4::tree::TerminalNode *IF_P();
    antlr4::tree::TerminalNode *EXISTS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_trig_stmtContext* drop_trig_stmt();

  class  Create_assert_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_assert_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *ASSERTION();
    NameContext *name();
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    A_exprContext *a_expr();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    Constraint_attr_specContext *constraint_attr_spec();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_assert_stmtContext* create_assert_stmt();

  class  Drop_assert_stmtContext : public antlr4::ParserRuleContext {
  public:
    Drop_assert_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *ASSERTION();
    NameContext *name();
    Opt_drop_behaviorContext *opt_drop_behavior();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_assert_stmtContext* drop_assert_stmt();

  class  Define_stmtContext : public antlr4::ParserRuleContext {
  public:
    Define_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *AGGREGATE();
    Func_nameContext *func_name();
    Aggr_argsContext *aggr_args();
    DefinitionContext *definition();
    Old_aggr_definitionContext *old_aggr_definition();
    antlr4::tree::TerminalNode *ORDERED();
    antlr4::tree::TerminalNode *OPERATOR();
    Any_operatorContext *any_operator();
    antlr4::tree::TerminalNode *TYPE_P();
    Any_nameContext *any_name();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Table_func_element_listContext *table_func_element_list();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    antlr4::tree::TerminalNode *PROTOCOL();
    NameContext *name();
    antlr4::tree::TerminalNode *TRUSTED();
    antlr4::tree::TerminalNode *ENUM_P();
    Enum_val_listContext *enum_val_list();
    antlr4::tree::TerminalNode *TEXT_P();
    antlr4::tree::TerminalNode *SEARCH();
    antlr4::tree::TerminalNode *PARSER();
    antlr4::tree::TerminalNode *DICTIONARY();
    antlr4::tree::TerminalNode *TEMPLATE();
    antlr4::tree::TerminalNode *CONFIGURATION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Define_stmtContext* define_stmt();

  class  DefinitionContext : public antlr4::ParserRuleContext {
  public:
    DefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Def_listContext *def_list();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefinitionContext* definition();

  class  Def_listContext : public antlr4::ParserRuleContext {
  public:
    Def_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Def_elemContext *> def_elem();
    Def_elemContext* def_elem(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Def_listContext* def_list();

  class  Def_elemContext : public antlr4::ParserRuleContext {
  public:
    Def_elemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Col_labelContext *col_label();
    antlr4::tree::TerminalNode *EQUALS_OP();
    Def_argContext *def_arg();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Def_elemContext* def_elem();

  class  Def_argContext : public antlr4::ParserRuleContext {
  public:
    Def_argContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Func_typeContext *func_type();
    antlr4::tree::TerminalNode *ROW();
    Reserved_keywordContext *reserved_keyword();
    Qual_all_OpContext *qual_all_Op();
    Numberic_onlyContext *numberic_only();
    SconstContext *sconst();
    antlr4::tree::TerminalNode *NONE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Def_argContext* def_arg();

  class  Aggr_argsContext : public antlr4::ParserRuleContext {
  public:
    Aggr_argsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Paren_type_listContext *paren_type_list();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    antlr4::tree::TerminalNode *ASTERISK();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Aggr_argsContext* aggr_args();

  class  Old_aggr_definitionContext : public antlr4::ParserRuleContext {
  public:
    Old_aggr_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Old_aggr_listContext *old_aggr_list();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Old_aggr_definitionContext* old_aggr_definition();

  class  Old_aggr_listContext : public antlr4::ParserRuleContext {
  public:
    Old_aggr_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Old_aggr_elemContext *> old_aggr_elem();
    Old_aggr_elemContext* old_aggr_elem(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Old_aggr_listContext* old_aggr_list();

  class  Old_aggr_elemContext : public antlr4::ParserRuleContext {
  public:
    Old_aggr_elemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *EQUALS_OP();
    Def_argContext *def_arg();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Old_aggr_elemContext* old_aggr_elem();

  class  Enum_val_listContext : public antlr4::ParserRuleContext {
  public:
    Enum_val_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SconstContext *> sconst();
    SconstContext* sconst(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Enum_val_listContext* enum_val_list();

  class  Create_op_class_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_op_class_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *OPERATOR();
    antlr4::tree::TerminalNode *CLASS();
    Any_nameContext *any_name();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *TYPE_P();
    Typename_pgContext *typename_pg();
    antlr4::tree::TerminalNode *USING();
    Access_methodContext *access_method();
    antlr4::tree::TerminalNode *AS();
    Opclass_item_listContext *opclass_item_list();
    antlr4::tree::TerminalNode *DEFAULT();
    Opt_opfamilyContext *opt_opfamily();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_op_class_stmtContext* create_op_class_stmt();

  class  Opclass_item_listContext : public antlr4::ParserRuleContext {
  public:
    Opclass_item_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Opclass_itemContext *> opclass_item();
    Opclass_itemContext* opclass_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opclass_item_listContext* opclass_item_list();

  class  Opclass_itemContext : public antlr4::ParserRuleContext {
  public:
    Opclass_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPERATOR();
    IconstContext *iconst();
    Any_operatorContext *any_operator();
    Oper_argtypesContext *oper_argtypes();
    antlr4::tree::TerminalNode *RECHECK();
    antlr4::tree::TerminalNode *FUNCTION();
    Func_nameContext *func_name();
    Func_argsContext *func_args();
    Paren_type_listContext *paren_type_list();
    antlr4::tree::TerminalNode *STORAGE();
    Typename_pgContext *typename_pg();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opclass_itemContext* opclass_item();

  class  Opt_opfamilyContext : public antlr4::ParserRuleContext {
  public:
    Opt_opfamilyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FAMILY();
    Any_nameContext *any_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_opfamilyContext* opt_opfamily();

  class  Create_op_family_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_op_family_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *OPERATOR();
    antlr4::tree::TerminalNode *FAMILY();
    Any_nameContext *any_name();
    antlr4::tree::TerminalNode *USING();
    Access_methodContext *access_method();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_op_family_stmtContext* create_op_family_stmt();

  class  Alter_op_family_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_op_family_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *OPERATOR();
    antlr4::tree::TerminalNode *FAMILY();
    Any_nameContext *any_name();
    antlr4::tree::TerminalNode *USING();
    Access_methodContext *access_method();
    antlr4::tree::TerminalNode *ADD_P();
    Opclass_item_listContext *opclass_item_list();
    antlr4::tree::TerminalNode *DROP();
    Opclass_drop_listContext *opclass_drop_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_op_family_stmtContext* alter_op_family_stmt();

  class  Opclass_drop_listContext : public antlr4::ParserRuleContext {
  public:
    Opclass_drop_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Opclass_dropContext *> opclass_drop();
    Opclass_dropContext* opclass_drop(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opclass_drop_listContext* opclass_drop_list();

  class  Opclass_dropContext : public antlr4::ParserRuleContext {
  public:
    Opclass_dropContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IconstContext *iconst();
    Paren_type_listContext *paren_type_list();
    antlr4::tree::TerminalNode *OPERATOR();
    antlr4::tree::TerminalNode *FUNCTION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opclass_dropContext* opclass_drop();

  class  Drop_op_class_stmtContext : public antlr4::ParserRuleContext {
  public:
    Drop_op_class_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *OPERATOR();
    antlr4::tree::TerminalNode *CLASS();
    Any_nameContext *any_name();
    antlr4::tree::TerminalNode *USING();
    Access_methodContext *access_method();
    antlr4::tree::TerminalNode *IF_P();
    antlr4::tree::TerminalNode *EXISTS();
    Opt_drop_behaviorContext *opt_drop_behavior();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_op_class_stmtContext* drop_op_class_stmt();

  class  Drop_op_family_stmtContext : public antlr4::ParserRuleContext {
  public:
    Drop_op_family_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *OPERATOR();
    antlr4::tree::TerminalNode *FAMILY();
    Any_nameContext *any_name();
    antlr4::tree::TerminalNode *USING();
    Access_methodContext *access_method();
    antlr4::tree::TerminalNode *IF_P();
    antlr4::tree::TerminalNode *EXISTS();
    Opt_drop_behaviorContext *opt_drop_behavior();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_op_family_stmtContext* drop_op_family_stmt();

  class  Drop_owned_stmtContext : public antlr4::ParserRuleContext {
  public:
    Drop_owned_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *OWNED();
    antlr4::tree::TerminalNode *BY();
    Name_listContext *name_list();
    Opt_drop_behaviorContext *opt_drop_behavior();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_owned_stmtContext* drop_owned_stmt();

  class  Reassign_owned_stmtContext : public antlr4::ParserRuleContext {
  public:
    Reassign_owned_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REASSIGN();
    antlr4::tree::TerminalNode *OWNED();
    antlr4::tree::TerminalNode *BY();
    Name_listContext *name_list();
    antlr4::tree::TerminalNode *TO();
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Reassign_owned_stmtContext* reassign_owned_stmt();

  class  Drop_stmtContext : public antlr4::ParserRuleContext {
  public:
    Drop_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    Drop_typeContext *drop_type();
    Any_name_listContext *any_name_list();
    antlr4::tree::TerminalNode *IF_P();
    antlr4::tree::TerminalNode *EXISTS();
    Opt_drop_behaviorContext *opt_drop_behavior();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_stmtContext* drop_stmt();

  class  Drop_typeContext : public antlr4::ParserRuleContext {
  public:
    Drop_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *WEB();
    antlr4::tree::TerminalNode *SEQUENCE();
    antlr4::tree::TerminalNode *VIEW();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *TYPE_P();
    antlr4::tree::TerminalNode *DOMAIN_P();
    antlr4::tree::TerminalNode *CONVERSION_P();
    antlr4::tree::TerminalNode *SCHEMA();
    antlr4::tree::TerminalNode *EXTENSION();
    antlr4::tree::TerminalNode *TEXT_P();
    antlr4::tree::TerminalNode *SEARCH();
    antlr4::tree::TerminalNode *PARSER();
    antlr4::tree::TerminalNode *DICTIONARY();
    antlr4::tree::TerminalNode *TEMPLATE();
    antlr4::tree::TerminalNode *CONFIGURATION();
    antlr4::tree::TerminalNode *FILESPACE();
    antlr4::tree::TerminalNode *TABLESPACE();
    antlr4::tree::TerminalNode *PROTOCOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_typeContext* drop_type();

  class  Any_name_listContext : public antlr4::ParserRuleContext {
  public:
    Any_name_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Any_nameContext *> any_name();
    Any_nameContext* any_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Any_name_listContext* any_name_list();

  class  Any_nameContext : public antlr4::ParserRuleContext {
  public:
    Any_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColidContext *colid();
    AttrsContext *attrs();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Any_nameContext* any_name();

  class  AttrsContext : public antlr4::ParserRuleContext {
  public:
    AttrsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> PERIOD();
    antlr4::tree::TerminalNode* PERIOD(size_t i);
    std::vector<Attr_nameContext *> attr_name();
    Attr_nameContext* attr_name(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttrsContext* attrs();

  class  Truncate_stmtContext : public antlr4::ParserRuleContext {
  public:
    Truncate_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUNCATE();
    Qualified_name_listContext *qualified_name_list();
    antlr4::tree::TerminalNode *TABLE();
    Opt_drop_behaviorContext *opt_drop_behavior();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Truncate_stmtContext* truncate_stmt();

  class  Comment_stmtContext : public antlr4::ParserRuleContext {
  public:
    Comment_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *ON();
    Comment_stmtOptionContext *comment_stmtOption();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Comment_stmtContext* comment_stmt();

  class  Comment_stmtOptionContext : public antlr4::ParserRuleContext {
  public:
    Comment_stmtOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Comment_optionContext *comment_option();
    antlr4::tree::TerminalNode *IS();
    Comment_textContext *comment_text();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Comment_stmtOptionContext* comment_stmtOption();

  class  Comment_optionContext : public antlr4::ParserRuleContext {
  public:
    Comment_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Comment_typeContext *comment_type();
    Any_nameContext *any_name();
    antlr4::tree::TerminalNode *AGGREGATE();
    Func_nameContext *func_name();
    Aggr_argsContext *aggr_args();
    antlr4::tree::TerminalNode *FUNCTION();
    Func_argsContext *func_args();
    antlr4::tree::TerminalNode *OPERATOR();
    Any_operatorContext *any_operator();
    Oper_argtypesContext *oper_argtypes();
    antlr4::tree::TerminalNode *CONSTRAINT();
    NameContext *name();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *RULE();
    antlr4::tree::TerminalNode *TRIGGER();
    antlr4::tree::TerminalNode *USING();
    Access_methodContext *access_method();
    antlr4::tree::TerminalNode *CLASS();
    antlr4::tree::TerminalNode *FAMILY();
    antlr4::tree::TerminalNode *LARGE_P();
    antlr4::tree::TerminalNode *OBJECT_P();
    Numberic_onlyContext *numberic_only();
    antlr4::tree::TerminalNode *CAST();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    std::vector<Typename_pgContext *> typename_pg();
    Typename_pgContext* typename_pg(size_t i);
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    antlr4::tree::TerminalNode *LANGUAGE();
    antlr4::tree::TerminalNode *PROCEDURAL();
    antlr4::tree::TerminalNode *TEXT_P();
    antlr4::tree::TerminalNode *SEARCH();
    antlr4::tree::TerminalNode *PARSER();
    antlr4::tree::TerminalNode *DICTIONARY();
    antlr4::tree::TerminalNode *TEMPLATE();
    antlr4::tree::TerminalNode *CONFIGURATION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Comment_optionContext* comment_option();

  class  Comment_typeContext : public antlr4::ParserRuleContext {
  public:
    Comment_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *SCHEMA();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *SEQUENCE();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *DOMAIN_P();
    antlr4::tree::TerminalNode *TYPE_P();
    antlr4::tree::TerminalNode *VIEW();
    antlr4::tree::TerminalNode *CONVERSION_P();
    antlr4::tree::TerminalNode *TABLESPACE();
    antlr4::tree::TerminalNode *EXTENSION();
    antlr4::tree::TerminalNode *ROLE();
    antlr4::tree::TerminalNode *FILESPACE();
    antlr4::tree::TerminalNode *RESOURCE();
    antlr4::tree::TerminalNode *QUEUE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Comment_typeContext* comment_type();

  class  Comment_textContext : public antlr4::ParserRuleContext {
  public:
    Comment_textContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SconstContext *sconst();
    antlr4::tree::TerminalNode *NULL_P();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Comment_textContext* comment_text();

  class  Fetch_stmtContext : public antlr4::ParserRuleContext {
  public:
    Fetch_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FETCH();
    NameContext *name();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *IN_P();
    Fetch_directionContext *fetch_direction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fetch_stmtContext* fetch_stmt();

  class  Fetch_directionContext : public antlr4::ParserRuleContext {
  public:
    Fetch_directionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NEXT();
    antlr4::tree::TerminalNode *PRIOR();
    antlr4::tree::TerminalNode *FIRST_P();
    antlr4::tree::TerminalNode *LAST_P();
    antlr4::tree::TerminalNode *ABSOLUTE_P();
    Signed_iconstContext *signed_iconst();
    antlr4::tree::TerminalNode *RELATIVE_P();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *FORWARD();
    antlr4::tree::TerminalNode *BACKWARD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fetch_directionContext* fetch_direction();

  class  Grant_stmtContext : public antlr4::ParserRuleContext {
  public:
    Grant_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GRANT();
    PrivilegesContext *privileges();
    antlr4::tree::TerminalNode *ON();
    Privilege_targetContext *privilege_target();
    antlr4::tree::TerminalNode *TO();
    Grantee_listContext *grantee_list();
    Opt_grant_grant_optionContext *opt_grant_grant_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grant_stmtContext* grant_stmt();

  class  Revoke_stmtContext : public antlr4::ParserRuleContext {
  public:
    Revoke_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REVOKE();
    PrivilegesContext *privileges();
    antlr4::tree::TerminalNode *ON();
    Privilege_targetContext *privilege_target();
    antlr4::tree::TerminalNode *FROM();
    Grantee_listContext *grantee_list();
    antlr4::tree::TerminalNode *GRANT();
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *FOR();
    Opt_drop_behaviorContext *opt_drop_behavior();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Revoke_stmtContext* revoke_stmt();

  class  PrivilegesContext : public antlr4::ParserRuleContext {
  public:
    PrivilegesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Privilege_listContext *privilege_list();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *PRIVILEGES();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrivilegesContext* privileges();

  class  Privilege_listContext : public antlr4::ParserRuleContext {
  public:
    Privilege_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PrivilegeContext *> privilege();
    PrivilegeContext* privilege(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Privilege_listContext* privilege_list();

  class  PrivilegeContext : public antlr4::ParserRuleContext {
  public:
    PrivilegeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SELECT();
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *DELETE_P();
    antlr4::tree::TerminalNode *REFERENCES();
    antlr4::tree::TerminalNode *TRIGGER();
    antlr4::tree::TerminalNode *TRUNCATE();
    antlr4::tree::TerminalNode *USAGE();
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *CONNECT();
    antlr4::tree::TerminalNode *TEMPORARY();
    antlr4::tree::TerminalNode *TEMP();
    antlr4::tree::TerminalNode *EXECUTE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrivilegeContext* privilege();

  class  Privilege_targetContext : public antlr4::ParserRuleContext {
  public:
    Privilege_targetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Qualified_name_listContext *qualified_name_list();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *SEQUENCE();
    antlr4::tree::TerminalNode *FUNCTION();
    Function_with_argtypes_listContext *function_with_argtypes_list();
    antlr4::tree::TerminalNode *DATABASE();
    Name_listContext *name_list();
    antlr4::tree::TerminalNode *LANGUAGE();
    antlr4::tree::TerminalNode *SCHEMA();
    antlr4::tree::TerminalNode *TABLESPACE();
    antlr4::tree::TerminalNode *PROTOCOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Privilege_targetContext* privilege_target();

  class  Grantee_listContext : public antlr4::ParserRuleContext {
  public:
    Grantee_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<GranteeContext *> grantee();
    GranteeContext* grantee(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grantee_listContext* grantee_list();

  class  GranteeContext : public antlr4::ParserRuleContext {
  public:
    GranteeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Role_idContext *role_id();
    antlr4::tree::TerminalNode *PUBLIC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GranteeContext* grantee();

  class  Opt_grant_grant_optionContext : public antlr4::ParserRuleContext {
  public:
    Opt_grant_grant_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *GRANT();
    antlr4::tree::TerminalNode *OPTION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_grant_grant_optionContext* opt_grant_grant_option();

  class  Function_with_argtypes_listContext : public antlr4::ParserRuleContext {
  public:
    Function_with_argtypes_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Function_with_argtypesContext *> function_with_argtypes();
    Function_with_argtypesContext* function_with_argtypes(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_with_argtypes_listContext* function_with_argtypes_list();

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

  class  Grant_role_stmtContext : public antlr4::ParserRuleContext {
  public:
    Grant_role_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GRANT();
    Privilege_listContext *privilege_list();
    antlr4::tree::TerminalNode *TO();
    Name_listContext *name_list();
    Opt_grant_admin_optionContext *opt_grant_admin_option();
    Opt_granted_byContext *opt_granted_by();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grant_role_stmtContext* grant_role_stmt();

  class  Revoke_role_stmtContext : public antlr4::ParserRuleContext {
  public:
    Revoke_role_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REVOKE();
    Privilege_listContext *privilege_list();
    antlr4::tree::TerminalNode *FROM();
    Name_listContext *name_list();
    antlr4::tree::TerminalNode *ADMIN();
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *FOR();
    Opt_granted_byContext *opt_granted_by();
    Opt_drop_behaviorContext *opt_drop_behavior();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Revoke_role_stmtContext* revoke_role_stmt();

  class  Opt_grant_admin_optionContext : public antlr4::ParserRuleContext {
  public:
    Opt_grant_admin_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *ADMIN();
    antlr4::tree::TerminalNode *OPTION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_grant_admin_optionContext* opt_grant_admin_option();

  class  Opt_granted_byContext : public antlr4::ParserRuleContext {
  public:
    Opt_granted_byContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GRANTED();
    antlr4::tree::TerminalNode *BY();
    Role_idContext *role_id();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_granted_byContext* opt_granted_by();

  class  Index_stmtContext : public antlr4::ParserRuleContext {
  public:
    Index_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *INDEX();
    Index_nameContext *index_name();
    antlr4::tree::TerminalNode *ON();
    Qualified_nameContext *qualified_name();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Index_paramsContext *index_params();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    antlr4::tree::TerminalNode *UNIQUE();
    antlr4::tree::TerminalNode *USING();
    Access_methodContext *access_method();
    With_out_definitionContext *with_out_definition();
    Opt_table_spaceContext *opt_table_space();
    Where_clauseContext *where_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Index_stmtContext* index_stmt();

  class  Index_paramsContext : public antlr4::ParserRuleContext {
  public:
    Index_paramsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Index_elemContext *> index_elem();
    Index_elemContext* index_elem(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Index_paramsContext* index_params();

  class  Index_elemContext : public antlr4::ParserRuleContext {
  public:
    Index_elemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColidContext *colid();
    Opt_classContext *opt_class();
    Opt_asc_descContext *opt_asc_desc();
    Opt_nulls_orderContext *opt_nulls_order();
    Func_exprContext *func_expr();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    A_exprContext *a_expr();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Index_elemContext* index_elem();

  class  Opt_classContext : public antlr4::ParserRuleContext {
  public:
    Opt_classContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Any_nameContext *any_name();
    antlr4::tree::TerminalNode *USING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_classContext* opt_class();

  class  Opt_asc_descContext : public antlr4::ParserRuleContext {
  public:
    Opt_asc_descContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *DESC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_asc_descContext* opt_asc_desc();

  class  Opt_nulls_orderContext : public antlr4::ParserRuleContext {
  public:
    Opt_nulls_orderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NULLS_FIRST();
    antlr4::tree::TerminalNode *NULLS_LAST();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_nulls_orderContext* opt_nulls_order();

  class  Create_function_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_function_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *FUNCTION();
    Func_nameContext *func_name();
    Func_args_with_defaultsContext *func_args_with_defaults();
    Createfunc_opt_listContext *createfunc_opt_list();
    Opt_or_replaceContext *opt_or_replace();
    antlr4::tree::TerminalNode *RETURNS();
    Func_returnContext *func_return();
    std::vector<With_out_definitionContext *> with_out_definition();
    With_out_definitionContext* with_out_definition(size_t i);
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_function_stmtContext* create_function_stmt();

  class  Opt_or_replaceContext : public antlr4::ParserRuleContext {
  public:
    Opt_or_replaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *REPLACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_or_replaceContext* opt_or_replace();

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

  class  Func_args_with_defaultsContext : public antlr4::ParserRuleContext {
  public:
    Func_args_with_defaultsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PAREN();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    Func_args_with_defaults_listContext *func_args_with_defaults_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_args_with_defaultsContext* func_args_with_defaults();

  class  Func_args_with_defaults_listContext : public antlr4::ParserRuleContext {
  public:
    Func_args_with_defaults_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Func_arg_with_defaultContext *> func_arg_with_default();
    Func_arg_with_defaultContext* func_arg_with_default(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_args_with_defaults_listContext* func_args_with_defaults_list();

  class  Func_argContext : public antlr4::ParserRuleContext {
  public:
    Func_argContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Func_typeContext *func_type();
    Arg_classContext *arg_class();
    Param_nameContext *param_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_argContext* func_arg();

  class  Func_arg_with_defaultContext : public antlr4::ParserRuleContext {
  public:
    Func_arg_with_defaultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Func_argContext *func_arg();
    A_exprContext *a_expr();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *EQUALS_OP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_arg_with_defaultContext* func_arg_with_default();

  class  Arg_classContext : public antlr4::ParserRuleContext {
  public:
    Arg_classContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IN_P();
    antlr4::tree::TerminalNode *OUT_P();
    antlr4::tree::TerminalNode *INOUT();
    antlr4::tree::TerminalNode *VARIADIC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Arg_classContext* arg_class();

  class  Param_nameContext : public antlr4::ParserRuleContext {
  public:
    Param_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_function_nameContext *type_function_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Param_nameContext* param_name();

  class  Func_returnContext : public antlr4::ParserRuleContext {
  public:
    Func_returnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Func_typeContext *func_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_returnContext* func_return();

  class  Func_typeContext : public antlr4::ParserRuleContext {
  public:
    Func_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Typename_pgContext *typename_pg();
    antlr4::tree::TerminalNode *SETOF();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    Func_type_table_option_listContext *func_type_table_option_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_typeContext* func_type();

  class  Func_type_table_option_listContext : public antlr4::ParserRuleContext {
  public:
    Func_type_table_option_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Func_type_table_optionContext *> func_type_table_option();
    Func_type_table_optionContext* func_type_table_option(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_type_table_option_listContext* func_type_table_option_list();

  class  Func_type_table_optionContext : public antlr4::ParserRuleContext {
  public:
    Func_type_table_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_function_nameContext *type_function_name();
    Typename_pgContext *typename_pg();
    antlr4::tree::TerminalNode *LIKE();
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_type_table_optionContext* func_type_table_option();

  class  Createfunc_opt_listContext : public antlr4::ParserRuleContext {
  public:
    Createfunc_opt_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Createfunc_opt_itemContext *> createfunc_opt_item();
    Createfunc_opt_itemContext* createfunc_opt_item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Createfunc_opt_listContext* createfunc_opt_list();

  class  Common_func_opt_itemContext : public antlr4::ParserRuleContext {
  public:
    Common_func_opt_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CALLED();
    antlr4::tree::TerminalNode *ON();
    std::vector<antlr4::tree::TerminalNode *> NULL_P();
    antlr4::tree::TerminalNode* NULL_P(size_t i);
    antlr4::tree::TerminalNode *INPUT_P();
    antlr4::tree::TerminalNode *RETURNS();
    antlr4::tree::TerminalNode *STRICT_P();
    antlr4::tree::TerminalNode *IMMUTABLE();
    antlr4::tree::TerminalNode *STABLE();
    antlr4::tree::TerminalNode *VOLATILE();
    antlr4::tree::TerminalNode *SECURITY();
    antlr4::tree::TerminalNode *DEFINER();
    antlr4::tree::TerminalNode *INVOKER();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *COST();
    Numberic_onlyContext *numberic_only();
    antlr4::tree::TerminalNode *ROWS();
    Set_reset_clauseContext *set_reset_clause();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *SQL();
    antlr4::tree::TerminalNode *CONTAINS();
    antlr4::tree::TerminalNode *READS();
    antlr4::tree::TerminalNode *DATA_P();
    antlr4::tree::TerminalNode *MODIFIES();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Common_func_opt_itemContext* common_func_opt_item();

  class  Createfunc_opt_itemContext : public antlr4::ParserRuleContext {
  public:
    Createfunc_opt_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AS();
    Func_asContext *func_as();
    antlr4::tree::TerminalNode *LANGUAGE();
    Colid_or_sconstContext *colid_or_sconst();
    Common_func_opt_itemContext *common_func_opt_item();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Createfunc_opt_itemContext* createfunc_opt_item();

  class  Func_asContext : public antlr4::ParserRuleContext {
  public:
    Func_asContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SconstContext *> sconst();
    SconstContext* sconst(size_t i);
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_asContext* func_as();

  class  Table_func_columnContext : public antlr4::ParserRuleContext {
  public:
    Table_func_columnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Param_nameContext *param_name();
    Func_typeContext *func_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_func_columnContext* table_func_column();

  class  Table_func_column_listContext : public antlr4::ParserRuleContext {
  public:
    Table_func_column_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Table_func_columnContext *> table_func_column();
    Table_func_columnContext* table_func_column(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_func_column_listContext* table_func_column_list();

  class  Alter_function_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_function_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *FUNCTION();
    Function_with_argtypesContext *function_with_argtypes();
    Alterfunc_opt_listContext *alterfunc_opt_list();
    antlr4::tree::TerminalNode *RESTRICT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_function_stmtContext* alter_function_stmt();

  class  Alterfunc_opt_listContext : public antlr4::ParserRuleContext {
  public:
    Alterfunc_opt_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Common_func_opt_itemContext *> common_func_opt_item();
    Common_func_opt_itemContext* common_func_opt_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RENAME();
    antlr4::tree::TerminalNode *TO();
    NameContext *name();
    antlr4::tree::TerminalNode *OWNER();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *SCHEMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alterfunc_opt_listContext* alterfunc_opt_list();

  class  Remove_func_stmtContext : public antlr4::ParserRuleContext {
  public:
    Remove_func_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *FUNCTION();
    Func_nameContext *func_name();
    Func_argsContext *func_args();
    antlr4::tree::TerminalNode *IF_P();
    antlr4::tree::TerminalNode *EXISTS();
    Opt_drop_behaviorContext *opt_drop_behavior();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Remove_func_stmtContext* remove_func_stmt();

  class  Remove_aggr_stmtContext : public antlr4::ParserRuleContext {
  public:
    Remove_aggr_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *AGGREGATE();
    Func_nameContext *func_name();
    Aggr_argsContext *aggr_args();
    antlr4::tree::TerminalNode *IF_P();
    antlr4::tree::TerminalNode *EXISTS();
    Opt_drop_behaviorContext *opt_drop_behavior();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Remove_aggr_stmtContext* remove_aggr_stmt();

  class  Remove_oper_stmtContext : public antlr4::ParserRuleContext {
  public:
    Remove_oper_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *OPERATOR();
    Any_operatorContext *any_operator();
    Oper_argtypesContext *oper_argtypes();
    antlr4::tree::TerminalNode *IF_P();
    antlr4::tree::TerminalNode *EXISTS();
    Opt_drop_behaviorContext *opt_drop_behavior();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Remove_oper_stmtContext* remove_oper_stmt();

  class  Oper_argtypesContext : public antlr4::ParserRuleContext {
  public:
    Oper_argtypesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PAREN();
    std::vector<Typename_pgContext *> typename_pg();
    Typename_pgContext* typename_pg(size_t i);
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *NONE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Oper_argtypesContext* oper_argtypes();

  class  Any_operatorContext : public antlr4::ParserRuleContext {
  public:
    Any_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    All_OpContext *all_Op();
    ColidContext *colid();
    antlr4::tree::TerminalNode *PERIOD();
    Any_operatorContext *any_operator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Any_operatorContext* any_operator();

  class  Do_stmtContext : public antlr4::ParserRuleContext {
  public:
    Do_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DO();
    std::vector<Dostmt_opt_itemContext *> dostmt_opt_item();
    Dostmt_opt_itemContext* dostmt_opt_item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Do_stmtContext* do_stmt();

  class  Dostmt_opt_itemContext : public antlr4::ParserRuleContext {
  public:
    Dostmt_opt_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Colid_or_sconstContext *colid_or_sconst();
    antlr4::tree::TerminalNode *LANGUAGE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dostmt_opt_itemContext* dostmt_opt_item();

  class  Create_cast_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_cast_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *CAST();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    std::vector<Typename_pgContext *> typename_pg();
    Typename_pgContext* typename_pg(size_t i);
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *FUNCTION();
    Function_with_argtypesContext *function_with_argtypes();
    Cast_contextContext *cast_context();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_cast_stmtContext* create_cast_stmt();

  class  Cast_contextContext : public antlr4::ParserRuleContext {
  public:
    Cast_contextContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *IMPLICIT_P();
    antlr4::tree::TerminalNode *ASSIGNMENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cast_contextContext* cast_context();

  class  Drop_cast_stmtContext : public antlr4::ParserRuleContext {
  public:
    Drop_cast_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *CAST();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    std::vector<Typename_pgContext *> typename_pg();
    Typename_pgContext* typename_pg(size_t i);
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    antlr4::tree::TerminalNode *IF_P();
    antlr4::tree::TerminalNode *EXISTS();
    Opt_drop_behaviorContext *opt_drop_behavior();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_cast_stmtContext* drop_cast_stmt();

  class  Reindex_stmtContext : public antlr4::ParserRuleContext {
  public:
    Reindex_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REINDEX();
    Qualified_nameContext *qualified_name();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *SYSTEM_P();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *FORCE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Reindex_stmtContext* reindex_stmt();

  class  Alter_type_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_type_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *TYPE_P();
    Simple_typenameContext *simple_typename();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *ENCODING();
    DefinitionContext *definition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_type_stmtContext* alter_type_stmt();

  class  Rename_stmtContext : public antlr4::ParserRuleContext {
  public:
    Rename_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *AGGREGATE();
    Func_nameContext *func_name();
    Aggr_argsContext *aggr_args();
    antlr4::tree::TerminalNode *RENAME();
    antlr4::tree::TerminalNode *TO();
    std::vector<NameContext *> name();
    NameContext* name(size_t i);
    antlr4::tree::TerminalNode *CONVERSION_P();
    Any_nameContext *any_name();
    antlr4::tree::TerminalNode *DATABASE();
    std::vector<Database_nameContext *> database_name();
    Database_nameContext* database_name(size_t i);
    antlr4::tree::TerminalNode *FILESPACE();
    antlr4::tree::TerminalNode *FUNCTION();
    Function_with_argtypesContext *function_with_argtypes();
    antlr4::tree::TerminalNode *GROUP_P();
    std::vector<Role_idContext *> role_id();
    Role_idContext* role_id(size_t i);
    antlr4::tree::TerminalNode *LANGUAGE();
    antlr4::tree::TerminalNode *PROCEDURAL();
    antlr4::tree::TerminalNode *OPERATOR();
    antlr4::tree::TerminalNode *USING();
    Access_methodContext *access_method();
    antlr4::tree::TerminalNode *CLASS();
    antlr4::tree::TerminalNode *FAMILY();
    antlr4::tree::TerminalNode *SCHEMA();
    Relation_exprContext *relation_expr();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *SEQUENCE();
    antlr4::tree::TerminalNode *VIEW();
    antlr4::tree::TerminalNode *INDEX();
    Opt_columnContext *opt_column();
    antlr4::tree::TerminalNode *TRIGGER();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *ROLE();
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *TABLESPACE();
    antlr4::tree::TerminalNode *TEXT_P();
    antlr4::tree::TerminalNode *SEARCH();
    antlr4::tree::TerminalNode *PARSER();
    antlr4::tree::TerminalNode *DICTIONARY();
    antlr4::tree::TerminalNode *TEMPLATE();
    antlr4::tree::TerminalNode *CONFIGURATION();
    antlr4::tree::TerminalNode *PROTOCOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rename_stmtContext* rename_stmt();

  class  Opt_columnContext : public antlr4::ParserRuleContext {
  public:
    Opt_columnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLUMN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_columnContext* opt_column();

  class  Alter_object_schema_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_object_schema_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *AGGREGATE();
    Func_nameContext *func_name();
    Aggr_argsContext *aggr_args();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *SCHEMA();
    NameContext *name();
    Any_nameContext *any_name();
    antlr4::tree::TerminalNode *DOMAIN_P();
    antlr4::tree::TerminalNode *EXTENSION();
    antlr4::tree::TerminalNode *FUNCTION();
    Function_with_argtypesContext *function_with_argtypes();
    Relation_exprContext *relation_expr();
    antlr4::tree::TerminalNode *SEQUENCE();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *TYPE_P();
    Simple_typenameContext *simple_typename();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_object_schema_stmtContext* alter_object_schema_stmt();

  class  Alter_owner_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_owner_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *AGGREGATE();
    Func_nameContext *func_name();
    Aggr_argsContext *aggr_args();
    antlr4::tree::TerminalNode *OWNER();
    antlr4::tree::TerminalNode *TO();
    Role_idContext *role_id();
    Any_nameContext *any_name();
    antlr4::tree::TerminalNode *CONVERSION_P();
    antlr4::tree::TerminalNode *DOMAIN_P();
    NameContext *name();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *FILESPACE();
    antlr4::tree::TerminalNode *SCHEMA();
    antlr4::tree::TerminalNode *TABLESPACE();
    antlr4::tree::TerminalNode *PROTOCOL();
    antlr4::tree::TerminalNode *FUNCTION();
    Function_with_argtypesContext *function_with_argtypes();
    antlr4::tree::TerminalNode *LANGUAGE();
    antlr4::tree::TerminalNode *PROCEDURAL();
    antlr4::tree::TerminalNode *OPERATOR();
    Any_operatorContext *any_operator();
    Oper_argtypesContext *oper_argtypes();
    antlr4::tree::TerminalNode *USING();
    Access_methodContext *access_method();
    antlr4::tree::TerminalNode *CLASS();
    antlr4::tree::TerminalNode *FAMILY();
    antlr4::tree::TerminalNode *TYPE_P();
    Simple_typenameContext *simple_typename();
    antlr4::tree::TerminalNode *TEXT_P();
    antlr4::tree::TerminalNode *SEARCH();
    antlr4::tree::TerminalNode *DICTIONARY();
    antlr4::tree::TerminalNode *CONFIGURATION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_owner_stmtContext* alter_owner_stmt();

  class  Rule_stmtContext : public antlr4::ParserRuleContext {
  public:
    Rule_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *RULE();
    NameContext *name();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *ON();
    EventContext *event();
    antlr4::tree::TerminalNode *TO();
    Qualified_nameContext *qualified_name();
    antlr4::tree::TerminalNode *DO();
    Rule_action_listContext *rule_action_list();
    Opt_or_replaceContext *opt_or_replace();
    Where_clauseContext *where_clause();
    Opt_insteadContext *opt_instead();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rule_stmtContext* rule_stmt();

  class  Rule_action_listContext : public antlr4::ParserRuleContext {
  public:
    Rule_action_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOTHING();
    Rule_action_stmtContext *rule_action_stmt();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    Rule_action_multiContext *rule_action_multi();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rule_action_listContext* rule_action_list();

  class  Rule_action_multiContext : public antlr4::ParserRuleContext {
  public:
    Rule_action_multiContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Rule_action_stmtContext *> rule_action_stmt();
    Rule_action_stmtContext* rule_action_stmt(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rule_action_multiContext* rule_action_multi();

  class  Rule_action_stmtContext : public antlr4::ParserRuleContext {
  public:
    Rule_action_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Select_stmtContext *select_stmt();
    Insert_stmtContext *insert_stmt();
    Update_stmtContext *update_stmt();
    Delete_stmtContext *delete_stmt();
    Notify_stmtContext *notify_stmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rule_action_stmtContext* rule_action_stmt();

  class  EventContext : public antlr4::ParserRuleContext {
  public:
    EventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SELECT();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *DELETE_P();
    antlr4::tree::TerminalNode *INSERT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EventContext* event();

  class  Opt_insteadContext : public antlr4::ParserRuleContext {
  public:
    Opt_insteadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INSTEAD();
    antlr4::tree::TerminalNode *ALSO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_insteadContext* opt_instead();

  class  Drop_rule_stmtContext : public antlr4::ParserRuleContext {
  public:
    Drop_rule_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *RULE();
    NameContext *name();
    antlr4::tree::TerminalNode *ON();
    Qualified_nameContext *qualified_name();
    antlr4::tree::TerminalNode *IF_P();
    antlr4::tree::TerminalNode *EXISTS();
    Opt_drop_behaviorContext *opt_drop_behavior();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_rule_stmtContext* drop_rule_stmt();

  class  Notify_stmtContext : public antlr4::ParserRuleContext {
  public:
    Notify_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOTIFY();
    ColidContext *colid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Notify_stmtContext* notify_stmt();

  class  Listen_stmtContext : public antlr4::ParserRuleContext {
  public:
    Listen_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LISTEN();
    ColidContext *colid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Listen_stmtContext* listen_stmt();

  class  Unlisten_stmtContext : public antlr4::ParserRuleContext {
  public:
    Unlisten_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNLISTEN();
    ColidContext *colid();
    antlr4::tree::TerminalNode *ASTERISK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unlisten_stmtContext* unlisten_stmt();

  class  Transaction_stmtContext : public antlr4::ParserRuleContext {
  public:
    Transaction_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ABORT_P();
    antlr4::tree::TerminalNode *COMMIT();
    antlr4::tree::TerminalNode *END_P();
    antlr4::tree::TerminalNode *ROLLBACK();
    Opt_transactionContext *opt_transaction();
    antlr4::tree::TerminalNode *BEGIN_P();
    Transaction_mode_listContext *transaction_mode_list();
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *TRANSACTION();
    antlr4::tree::TerminalNode *SAVEPOINT();
    ColidContext *colid();
    antlr4::tree::TerminalNode *RELEASE();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *PREPARE();
    SconstContext *sconst();
    antlr4::tree::TerminalNode *PREPARED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Transaction_stmtContext* transaction_stmt();

  class  Opt_transactionContext : public antlr4::ParserRuleContext {
  public:
    Opt_transactionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *TRANSACTION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_transactionContext* opt_transaction();

  class  Transaction_mode_itemContext : public antlr4::ParserRuleContext {
  public:
    Transaction_mode_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ISOLATION();
    antlr4::tree::TerminalNode *LEVEL();
    Iso_levelContext *iso_level();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *ONLY();
    antlr4::tree::TerminalNode *WRITE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Transaction_mode_itemContext* transaction_mode_item();

  class  Transaction_mode_listContext : public antlr4::ParserRuleContext {
  public:
    Transaction_mode_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Transaction_mode_itemContext *> transaction_mode_item();
    Transaction_mode_itemContext* transaction_mode_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Transaction_mode_listContext* transaction_mode_list();

  class  View_stmtContext : public antlr4::ParserRuleContext {
  public:
    View_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *VIEW();
    Qualified_nameContext *qualified_name();
    antlr4::tree::TerminalNode *AS();
    Select_stmtContext *select_stmt();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *REPLACE();
    Opt_tempContext *opt_temp();
    Paren_column_listContext *paren_column_list();
    Opt_check_optionContext *opt_check_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  View_stmtContext* view_stmt();

  class  Opt_check_optionContext : public antlr4::ParserRuleContext {
  public:
    Opt_check_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *CASCADED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_check_optionContext* opt_check_option();

  class  Load_stmtContext : public antlr4::ParserRuleContext {
  public:
    Load_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOAD();
    File_nameContext *file_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Load_stmtContext* load_stmt();

  class  Createdb_stmtContext : public antlr4::ParserRuleContext {
  public:
    Createdb_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *DATABASE();
    Database_nameContext *database_name();
    Opt_withContext *opt_with();
    std::vector<Createdb_opt_itemContext *> createdb_opt_item();
    Createdb_opt_itemContext* createdb_opt_item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Createdb_stmtContext* createdb_stmt();

  class  Createdb_opt_itemContext : public antlr4::ParserRuleContext {
  public:
    Createdb_opt_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLESPACE();
    NameContext *name();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *EQUALS_OP();
    antlr4::tree::TerminalNode *LOCATION();
    SconstContext *sconst();
    antlr4::tree::TerminalNode *TEMPLATE();
    antlr4::tree::TerminalNode *ENCODING();
    IconstContext *iconst();
    antlr4::tree::TerminalNode *CONNECTION();
    antlr4::tree::TerminalNode *LIMIT();
    Signed_iconstContext *signed_iconst();
    antlr4::tree::TerminalNode *OWNER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Createdb_opt_itemContext* createdb_opt_item();

  class  Alter_database_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_database_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *DATABASE();
    Database_nameContext *database_name();
    Opt_withContext *opt_with();
    std::vector<Alterdb_opt_itemContext *> alterdb_opt_item();
    Alterdb_opt_itemContext* alterdb_opt_item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_database_stmtContext* alter_database_stmt();

  class  Alter_database_set_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_database_set_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *DATABASE();
    Database_nameContext *database_name();
    Set_reset_clauseContext *set_reset_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_database_set_stmtContext* alter_database_set_stmt();

  class  Alterdb_opt_itemContext : public antlr4::ParserRuleContext {
  public:
    Alterdb_opt_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONNECTION();
    antlr4::tree::TerminalNode *LIMIT();
    Signed_iconstContext *signed_iconst();
    antlr4::tree::TerminalNode *EQUALS_OP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alterdb_opt_itemContext* alterdb_opt_item();

  class  Dropdb_stmtContext : public antlr4::ParserRuleContext {
  public:
    Dropdb_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *DATABASE();
    Database_nameContext *database_name();
    antlr4::tree::TerminalNode *IF_P();
    antlr4::tree::TerminalNode *EXISTS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dropdb_stmtContext* dropdb_stmt();

  class  Create_domain_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_domain_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *DOMAIN_P();
    Any_nameContext *any_name();
    Typename_pgContext *typename_pg();
    antlr4::tree::TerminalNode *AS();
    std::vector<Col_constraintContext *> col_constraint();
    Col_constraintContext* col_constraint(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_domain_stmtContext* create_domain_stmt();

  class  Alter_domain_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_domain_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *DOMAIN_P();
    Any_nameContext *any_name();
    Alter_domain_optionContext *alter_domain_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_domain_stmtContext* alter_domain_stmt();

  class  Alter_domain_optionContext : public antlr4::ParserRuleContext {
  public:
    Alter_domain_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Alter_column_defaultContext *alter_column_default();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *NULL_P();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *ADD_P();
    Table_constraintContext *table_constraint();
    antlr4::tree::TerminalNode *CONSTRAINT();
    NameContext *name();
    Opt_drop_behaviorContext *opt_drop_behavior();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_domain_optionContext* alter_domain_option();

  class  Alter_tsdictionary_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_tsdictionary_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *TEXT_P();
    antlr4::tree::TerminalNode *SEARCH();
    antlr4::tree::TerminalNode *DICTIONARY();
    Any_nameContext *any_name();
    DefinitionContext *definition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_tsdictionary_stmtContext* alter_tsdictionary_stmt();

  class  Alter_tsconfiguration_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_tsconfiguration_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *TEXT_P();
    antlr4::tree::TerminalNode *SEARCH();
    antlr4::tree::TerminalNode *CONFIGURATION();
    Any_nameContext *any_name();
    Alter_txt_search_conf_optionContext *alter_txt_search_conf_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_tsconfiguration_stmtContext* alter_tsconfiguration_stmt();

  class  Alter_txt_search_conf_optionContext : public antlr4::ParserRuleContext {
  public:
    Alter_txt_search_conf_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MAPPING();
    antlr4::tree::TerminalNode *FOR();
    Name_listContext *name_list();
    antlr4::tree::TerminalNode *WITH();
    Any_name_listContext *any_name_list();
    antlr4::tree::TerminalNode *ADD_P();
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *REPLACE();
    std::vector<Any_nameContext *> any_name();
    Any_nameContext* any_name(size_t i);
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *IF_P();
    antlr4::tree::TerminalNode *EXISTS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_txt_search_conf_optionContext* alter_txt_search_conf_option();

  class  Create_conversion_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_conversion_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *CONVERSION_P();
    std::vector<Any_nameContext *> any_name();
    Any_nameContext* any_name(size_t i);
    antlr4::tree::TerminalNode *FOR();
    std::vector<SconstContext *> sconst();
    SconstContext* sconst(size_t i);
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_conversion_stmtContext* create_conversion_stmt();

  class  Cluster_stmtContext : public antlr4::ParserRuleContext {
  public:
    Cluster_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLUSTER();
    Cluster_optionContext *cluster_option();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cluster_stmtContext* cluster_stmt();

  class  Cluster_optionContext : public antlr4::ParserRuleContext {
  public:
    Cluster_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Qualified_nameContext *qualified_name();
    antlr4::tree::TerminalNode *USING();
    Index_nameContext *index_name();
    antlr4::tree::TerminalNode *ON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cluster_optionContext* cluster_option();

  class  Vacuum_stmtContext : public antlr4::ParserRuleContext {
  public:
    Vacuum_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VACUUM();
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *FREEZE();
    antlr4::tree::TerminalNode *VERBOSE();
    Qualified_nameContext *qualified_name();
    Analyze_stmtContext *analyze_stmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Vacuum_stmtContext* vacuum_stmt();

  class  Analyze_stmtContext : public antlr4::ParserRuleContext {
  public:
    Analyze_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Analyze_keywordContext *analyze_keyword();
    antlr4::tree::TerminalNode *VERBOSE();
    antlr4::tree::TerminalNode *ROOTPARTITION();
    antlr4::tree::TerminalNode *ALL();
    Qualified_nameContext *qualified_name();
    Paren_name_listContext *paren_name_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Analyze_stmtContext* analyze_stmt();

  class  Analyze_keywordContext : public antlr4::ParserRuleContext {
  public:
    Analyze_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ANALYZE();
    antlr4::tree::TerminalNode *ANALYSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Analyze_keywordContext* analyze_keyword();

  class  Paren_name_listContext : public antlr4::ParserRuleContext {
  public:
    Paren_name_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Name_listContext *name_list();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Paren_name_listContext* paren_name_list();

  class  Explain_stmtContext : public antlr4::ParserRuleContext {
  public:
    Explain_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXPLAIN();
    Explainable_stmtContext *explainable_stmt();
    Analyze_keywordContext *analyze_keyword();
    antlr4::tree::TerminalNode *VERBOSE();
    antlr4::tree::TerminalNode *DXL();
    antlr4::tree::TerminalNode *FORCE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Explain_stmtContext* explain_stmt();

  class  Explainable_stmtContext : public antlr4::ParserRuleContext {
  public:
    Explainable_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Select_stmtContext *select_stmt();
    Insert_stmtContext *insert_stmt();
    Update_stmtContext *update_stmt();
    Delete_stmtContext *delete_stmt();
    Declare_cursor_stmtContext *declare_cursor_stmt();
    Execute_stmtContext *execute_stmt();
    Create_as_stmtContext *create_as_stmt();
    Create_stmtContext *create_stmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Explainable_stmtContext* explainable_stmt();

  class  Prepare_stmtContext : public antlr4::ParserRuleContext {
  public:
    Prepare_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PREPARE();
    NameContext *name();
    antlr4::tree::TerminalNode *AS();
    Preparable_stmtContext *preparable_stmt();
    Paren_type_listContext *paren_type_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Prepare_stmtContext* prepare_stmt();

  class  Paren_type_listContext : public antlr4::ParserRuleContext {
  public:
    Paren_type_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Type_listContext *type_list();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Paren_type_listContext* paren_type_list();

  class  Preparable_stmtContext : public antlr4::ParserRuleContext {
  public:
    Preparable_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Select_stmtContext *select_stmt();
    Insert_stmtContext *insert_stmt();
    Update_stmtContext *update_stmt();
    Delete_stmtContext *delete_stmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Preparable_stmtContext* preparable_stmt();

  class  Execute_stmtContext : public antlr4::ParserRuleContext {
  public:
    Execute_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXECUTE();
    NameContext *name();
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TABLE();
    Create_as_targetContext *create_as_target();
    antlr4::tree::TerminalNode *AS();
    Paren_expr_listContext *paren_expr_list();
    Opt_tempContext *opt_temp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Execute_stmtContext* execute_stmt();

  class  Deallocate_stmtContext : public antlr4::ParserRuleContext {
  public:
    Deallocate_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEALLOCATE();
    NameContext *name();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *PREPARE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Deallocate_stmtContext* deallocate_stmt();

  class  Cdb_string_listContext : public antlr4::ParserRuleContext {
  public:
    Cdb_string_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Cdb_stringContext *> cdb_string();
    Cdb_stringContext* cdb_string(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cdb_string_listContext* cdb_string_list();

  class  Cdb_stringContext : public antlr4::ParserRuleContext {
  public:
    Cdb_stringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SconstContext *sconst();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cdb_stringContext* cdb_string();

  class  Insert_stmtContext : public antlr4::ParserRuleContext {
  public:
    Insert_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *INTO();
    Qualified_nameContext *qualified_name();
    Insert_restContext *insert_rest();
    Paren_column_listContext *paren_column_list();
    Returning_clauseContext *returning_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Insert_stmtContext* insert_stmt();

  class  Insert_restContext : public antlr4::ParserRuleContext {
  public:
    Insert_restContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Select_stmtContext *select_stmt();
    antlr4::tree::TerminalNode *VALUES();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Insert_column_listContext *insert_column_list();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Insert_restContext* insert_rest();

  class  Insert_column_listContext : public antlr4::ParserRuleContext {
  public:
    Insert_column_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Insert_column_itemContext *> insert_column_item();
    Insert_column_itemContext* insert_column_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Insert_column_listContext* insert_column_list();

  class  Insert_column_itemContext : public antlr4::ParserRuleContext {
  public:
    Insert_column_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColidContext *colid();
    IndirectionContext *indirection();
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Insert_column_itemContext* insert_column_item();

  class  Returning_clauseContext : public antlr4::ParserRuleContext {
  public:
    Returning_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURNING();
    Target_listContext *target_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Returning_clauseContext* returning_clause();

  class  Delete_stmtContext : public antlr4::ParserRuleContext {
  public:
    Delete_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELETE_P();
    antlr4::tree::TerminalNode *FROM();
    Relation_expr_opt_aliasContext *relation_expr_opt_alias();
    antlr4::tree::TerminalNode *ONLY();
    antlr4::tree::TerminalNode *USING();
    From_listContext *from_list();
    Where_or_current_clauseContext *where_or_current_clause();
    Returning_clauseContext *returning_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delete_stmtContext* delete_stmt();

  class  Lock_stmtContext : public antlr4::ParserRuleContext {
  public:
    Lock_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCK_P();
    Qualified_name_listContext *qualified_name_list();
    antlr4::tree::TerminalNode *TABLE();
    Opt_lockContext *opt_lock();
    antlr4::tree::TerminalNode *NOWAIT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Lock_stmtContext* lock_stmt();

  class  Opt_lockContext : public antlr4::ParserRuleContext {
  public:
    Opt_lockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IN_P();
    Lock_typeContext *lock_type();
    antlr4::tree::TerminalNode *MODE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_lockContext* opt_lock();

  class  Lock_typeContext : public antlr4::ParserRuleContext {
  public:
    Lock_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHARE();
    antlr4::tree::TerminalNode *ACCESS();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *EXCLUSIVE();
    antlr4::tree::TerminalNode *UPDATE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Lock_typeContext* lock_type();

  class  Update_stmtContext : public antlr4::ParserRuleContext {
  public:
    Update_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UPDATE();
    Relation_expr_opt_aliasContext *relation_expr_opt_alias();
    antlr4::tree::TerminalNode *SET();
    Set_clause_listContext *set_clause_list();
    antlr4::tree::TerminalNode *ONLY();
    From_clauseContext *from_clause();
    Where_or_current_clauseContext *where_or_current_clause();
    Returning_clauseContext *returning_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Update_stmtContext* update_stmt();

  class  Set_clause_listContext : public antlr4::ParserRuleContext {
  public:
    Set_clause_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Set_clauseContext *> set_clause();
    Set_clauseContext* set_clause(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Set_clause_listContext* set_clause_list();

  class  Set_clauseContext : public antlr4::ParserRuleContext {
  public:
    Set_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Single_set_clauseContext *single_set_clause();
    Multiple_set_clauseContext *multiple_set_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Set_clauseContext* set_clause();

  class  Single_set_clauseContext : public antlr4::ParserRuleContext {
  public:
    Single_set_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Set_targetContext *set_target();
    antlr4::tree::TerminalNode *EQUALS_OP();
    Ctext_exprContext *ctext_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Single_set_clauseContext* single_set_clause();

  class  Multiple_set_clauseContext : public antlr4::ParserRuleContext {
  public:
    Multiple_set_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Set_target_listContext *set_target_list();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    antlr4::tree::TerminalNode *EQUALS_OP();
    Ctext_rowContext *ctext_row();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Multiple_set_clauseContext* multiple_set_clause();

  class  Set_targetContext : public antlr4::ParserRuleContext {
  public:
    Set_targetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColidContext *colid();
    IndirectionContext *indirection();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Set_targetContext* set_target();

  class  Set_target_listContext : public antlr4::ParserRuleContext {
  public:
    Set_target_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Set_targetContext *> set_target();
    Set_targetContext* set_target(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Set_target_listContext* set_target_list();

  class  Declare_cursor_stmtContext : public antlr4::ParserRuleContext {
  public:
    Declare_cursor_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARE();
    NameContext *name();
    antlr4::tree::TerminalNode *CURSOR();
    antlr4::tree::TerminalNode *FOR();
    Select_stmtContext *select_stmt();
    std::vector<Cursor_optionContext *> cursor_option();
    Cursor_optionContext* cursor_option(size_t i);
    Opt_holdContext *opt_hold();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Declare_cursor_stmtContext* declare_cursor_stmt();

  class  Cursor_optionContext : public antlr4::ParserRuleContext {
  public:
    Cursor_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SCROLL();
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *INSENSITIVE();
    antlr4::tree::TerminalNode *NO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cursor_optionContext* cursor_option();

  class  Opt_holdContext : public antlr4::ParserRuleContext {
  public:
    Opt_holdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HOLD();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *WITHOUT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_holdContext* opt_hold();

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
    Select_no_parensContext *select_no_parens();
    Select_with_parensContext *select_with_parens();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Subquery_basic_elementsContext* subquery_basic_elements();

  class  Subquery_operation_partContext : public antlr4::ParserRuleContext {
  public:
    Subquery_operation_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Subquery_basic_elementsContext *subquery_basic_elements();
    antlr4::tree::TerminalNode *UNION();
    antlr4::tree::TerminalNode *INTERSECT();
    antlr4::tree::TerminalNode *EXCEPT();
    antlr4::tree::TerminalNode *ALL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Subquery_operation_partContext* subquery_operation_part();

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

  class  Select_no_parensContext : public antlr4::ParserRuleContext {
  public:
    Select_no_parensContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_selectContext *simple_select();
    With_clauseContext *with_clause();
    Sort_clauseContext *sort_clause();
    Select_limitContext *select_limit();
    For_locking_clauseContext *for_locking_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_no_parensContext* select_no_parens();

  class  Simple_selectContext : public antlr4::ParserRuleContext {
  public:
    Simple_selectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SELECT();
    Target_listContext *target_list();
    Opt_distinctContext *opt_distinct();
    Into_clauseContext *into_clause();
    From_clauseContext *from_clause();
    Where_clauseContext *where_clause();
    Group_clauseContext *group_clause();
    Having_clauseContext *having_clause();
    Window_clauseContext *window_clause();
    Values_clauseContext *values_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_selectContext* simple_select();

  class  With_clauseContext : public antlr4::ParserRuleContext {
  public:
    With_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    Cte_listContext *cte_list();
    antlr4::tree::TerminalNode *RECURSIVE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  With_clauseContext* with_clause();

  class  Cte_listContext : public antlr4::ParserRuleContext {
  public:
    Cte_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Common_table_exprContext *> common_table_expr();
    Common_table_exprContext* common_table_expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cte_listContext* cte_list();

  class  Common_table_exprContext : public antlr4::ParserRuleContext {
  public:
    Common_table_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cte_nameContext *cte_name();
    antlr4::tree::TerminalNode *AS();
    Select_with_parensContext *select_with_parens();
    Paren_name_listContext *paren_name_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Common_table_exprContext* common_table_expr();

  class  Into_clauseContext : public antlr4::ParserRuleContext {
  public:
    Into_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTO();
    Opt_tempTableNameContext *opt_tempTableName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Into_clauseContext* into_clause();

  class  Opt_tempTableNameContext : public antlr4::ParserRuleContext {
  public:
    Opt_tempTableNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Qualified_nameContext *qualified_name();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *TEMPORARY();
    antlr4::tree::TerminalNode *TEMP();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *GLOBAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_tempTableNameContext* opt_tempTableName();

  class  Opt_distinctContext : public antlr4::ParserRuleContext {
  public:
    Opt_distinctContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DISTINCT();
    antlr4::tree::TerminalNode *ON();
    Paren_expr_listContext *paren_expr_list();
    antlr4::tree::TerminalNode *ALL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_distinctContext* opt_distinct();

  class  Sort_clauseContext : public antlr4::ParserRuleContext {
  public:
    Sort_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *BY();
    Sortby_listContext *sortby_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sort_clauseContext* sort_clause();

  class  Sortby_listContext : public antlr4::ParserRuleContext {
  public:
    Sortby_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SortbyContext *> sortby();
    SortbyContext* sortby(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sortby_listContext* sortby_list();

  class  SortbyContext : public antlr4::ParserRuleContext {
  public:
    SortbyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    A_exprContext *a_expr();
    antlr4::tree::TerminalNode *USING();
    Qual_all_OpContext *qual_all_Op();
    Opt_nulls_orderContext *opt_nulls_order();
    Opt_asc_descContext *opt_asc_desc();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SortbyContext* sortby();

  class  Select_limitContext : public antlr4::ParserRuleContext {
  public:
    Select_limitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIMIT();
    Select_limit_valueContext *select_limit_value();
    antlr4::tree::TerminalNode *OFFSET();
    Select_offset_valueContext *select_offset_value();
    antlr4::tree::TerminalNode *COMMA();
    Select_offset_value2Context *select_offset_value2();
    std::vector<Row_or_rowsContext *> row_or_rows();
    Row_or_rowsContext* row_or_rows(size_t i);
    antlr4::tree::TerminalNode *FETCH();
    First_or_nextContext *first_or_next();
    antlr4::tree::TerminalNode *ONLY();
    Opt_select_fetch_first_valueContext *opt_select_fetch_first_value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_limitContext* select_limit();

  class  Select_limit_valueContext : public antlr4::ParserRuleContext {
  public:
    Select_limit_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    A_exprContext *a_expr();
    antlr4::tree::TerminalNode *ALL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_limit_valueContext* select_limit_value();

  class  Opt_select_fetch_first_valueContext : public antlr4::ParserRuleContext {
  public:
    Opt_select_fetch_first_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Signed_iconstContext *signed_iconst();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    A_exprContext *a_expr();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_select_fetch_first_valueContext* opt_select_fetch_first_value();

  class  Select_offset_valueContext : public antlr4::ParserRuleContext {
  public:
    Select_offset_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    A_exprContext *a_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_offset_valueContext* select_offset_value();

  class  Select_offset_value2Context : public antlr4::ParserRuleContext {
  public:
    Select_offset_value2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    C_exprContext *c_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_offset_value2Context* select_offset_value2();

  class  Row_or_rowsContext : public antlr4::ParserRuleContext {
  public:
    Row_or_rowsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *ROWS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Row_or_rowsContext* row_or_rows();

  class  First_or_nextContext : public antlr4::ParserRuleContext {
  public:
    First_or_nextContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FIRST_P();
    antlr4::tree::TerminalNode *NEXT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  First_or_nextContext* first_or_next();

  class  Group_clauseContext : public antlr4::ParserRuleContext {
  public:
    Group_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GROUP_P();
    antlr4::tree::TerminalNode *BY();
    Group_elem_listContext *group_elem_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Group_clauseContext* group_clause();

  class  Group_elem_listContext : public antlr4::ParserRuleContext {
  public:
    Group_elem_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Group_elemContext *> group_elem();
    Group_elemContext* group_elem(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Group_elem_listContext* group_elem_list();

  class  Group_elemContext : public antlr4::ParserRuleContext {
  public:
    Group_elemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    A_exprContext *a_expr();
    antlr4::tree::TerminalNode *ROLLUP();
    Paren_expr_listContext *paren_expr_list();
    antlr4::tree::TerminalNode *CUBE();
    antlr4::tree::TerminalNode *GROUPING();
    antlr4::tree::TerminalNode *SETS();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Group_elem_listContext *group_elem_list();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    Double_parensContext *double_parens();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Group_elemContext* group_elem();

  class  Having_clauseContext : public antlr4::ParserRuleContext {
  public:
    Having_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HAVING();
    A_exprContext *a_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Having_clauseContext* having_clause();

  class  For_locking_clauseContext : public antlr4::ParserRuleContext {
  public:
    For_locking_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<For_locking_itemContext *> for_locking_item();
    For_locking_itemContext* for_locking_item(size_t i);
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *ONLY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  For_locking_clauseContext* for_locking_clause();

  class  For_locking_itemContext : public antlr4::ParserRuleContext {
  public:
    For_locking_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *SHARE();
    Locked_rels_listContext *locked_rels_list();
    antlr4::tree::TerminalNode *NOWAIT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  For_locking_itemContext* for_locking_item();

  class  Locked_rels_listContext : public antlr4::ParserRuleContext {
  public:
    Locked_rels_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OF();
    Name_listContext *name_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Locked_rels_listContext* locked_rels_list();

  class  Values_clauseContext : public antlr4::ParserRuleContext {
  public:
    Values_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VALUES();
    Ctext_rowContext *ctext_row();
    Values_clauseContext *values_clause();
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Values_clauseContext* values_clause();
  Values_clauseContext* values_clause(int precedence);
  class  From_clauseContext : public antlr4::ParserRuleContext {
  public:
    From_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FROM();
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

  class  Table_ref_subqueryContext : public Table_refContext {
  public:
    Table_ref_subqueryContext(Table_refContext *ctx);

    Select_with_parensContext *select_with_parens();
    ColidContext *colid();
    antlr4::tree::TerminalNode *AS();
    Paren_name_listContext *paren_name_list();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Table_ref_parensContext : public Table_refContext {
  public:
    Table_ref_parensContext(Table_refContext *ctx);

    antlr4::tree::TerminalNode *LEFT_PAREN();
    Table_refContext *table_ref();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    ColidContext *colid();
    antlr4::tree::TerminalNode *AS();
    Paren_name_listContext *paren_name_list();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Table_ref_normalContext : public Table_refContext {
  public:
    Table_ref_normalContext(Table_refContext *ctx);

    Relation_exprContext *relation_expr();
    ColidContext *colid();
    antlr4::tree::TerminalNode *AS();
    Paren_name_listContext *paren_name_list();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Table_ref_func2Context : public Table_refContext {
  public:
    Table_ref_func2Context(Table_refContext *ctx);

    Func_tableContext *func_table();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Table_func_element_listContext *table_func_element_list();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    antlr4::tree::TerminalNode *AS();
    ColidContext *colid();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Table_ref_func1Context : public Table_refContext {
  public:
    Table_ref_func1Context(Table_refContext *ctx);

    Func_tableContext *func_table();
    ColidContext *colid();
    antlr4::tree::TerminalNode *AS();
    Paren_name_listContext *paren_name_list();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Table_ref_joinableContext : public Table_refContext {
  public:
    Table_ref_joinableContext(Table_refContext *ctx);

    std::vector<Table_refContext *> table_ref();
    Table_refContext* table_ref(size_t i);
    antlr4::tree::TerminalNode *JOIN();
    antlr4::tree::TerminalNode *NATURAL();
    Join_typeContext *join_type();
    Join_qualContext *join_qual();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Table_refContext* table_ref();
  Table_refContext* table_ref(int precedence);
  class  Join_typeContext : public antlr4::ParserRuleContext {
  public:
    Join_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *RIGHT();
    antlr4::tree::TerminalNode *OUTER_P();
    antlr4::tree::TerminalNode *INNER_P();
    antlr4::tree::TerminalNode *CROSS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Join_typeContext* join_type();

  class  Join_qualContext : public antlr4::ParserRuleContext {
  public:
    Join_qualContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USING();
    Paren_name_listContext *paren_name_list();
    antlr4::tree::TerminalNode *ON();
    A_exprContext *a_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Join_qualContext* join_qual();

  class  Relation_exprContext : public antlr4::ParserRuleContext {
  public:
    Relation_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Qualified_nameContext *qualified_name();
    antlr4::tree::TerminalNode *ASTERISK();
    antlr4::tree::TerminalNode *ONLY();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Relation_exprContext* relation_expr();

  class  Relation_expr_opt_aliasContext : public antlr4::ParserRuleContext {
  public:
    Relation_expr_opt_aliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Relation_exprContext *relation_expr();
    ColidContext *colid();
    antlr4::tree::TerminalNode *AS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Relation_expr_opt_aliasContext* relation_expr_opt_alias();

  class  Func_tableContext : public antlr4::ParserRuleContext {
  public:
    Func_tableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Func_exprContext *func_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_tableContext* func_table();

  class  Where_clauseContext : public antlr4::ParserRuleContext {
  public:
    Where_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHERE();
    A_exprContext *a_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Where_clauseContext* where_clause();

  class  Where_or_current_clauseContext : public antlr4::ParserRuleContext {
  public:
    Where_or_current_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHERE();
    A_exprContext *a_expr();
    antlr4::tree::TerminalNode *CURRENT_P();
    antlr4::tree::TerminalNode *OF();
    NameContext *name();
    antlr4::tree::TerminalNode *PARAM();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Where_or_current_clauseContext* where_or_current_clause();

  class  Table_func_element_listContext : public antlr4::ParserRuleContext {
  public:
    Table_func_element_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Table_func_elementContext *> table_func_element();
    Table_func_elementContext* table_func_element(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_func_element_listContext* table_func_element_list();

  class  Table_func_elementContext : public antlr4::ParserRuleContext {
  public:
    Table_func_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColidContext *colid();
    Typename_pgContext *typename_pg();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_func_elementContext* table_func_element();

  class  Typename_pgContext : public antlr4::ParserRuleContext {
  public:
    Typename_pgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_typenameContext *simple_typename();
    std::vector<Opt_array_boundsContext *> opt_array_bounds();
    Opt_array_boundsContext* opt_array_bounds(size_t i);
    antlr4::tree::TerminalNode *SETOF();
    antlr4::tree::TerminalNode *ARRAY();
    antlr4::tree::TerminalNode *LEFT_BRACKET();
    IconstContext *iconst();
    antlr4::tree::TerminalNode *RIGHT_BRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Typename_pgContext* typename_pg();

  class  Opt_array_boundsContext : public antlr4::ParserRuleContext {
  public:
    Opt_array_boundsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_BRACKET();
    antlr4::tree::TerminalNode *RIGHT_BRACKET();
    IconstContext *iconst();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_array_boundsContext* opt_array_bounds();

  class  Simple_typenameContext : public antlr4::ParserRuleContext {
  public:
    Simple_typenameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Generic_typeContext *generic_type();
    NumericContext *numeric();
    BitContext *bit();
    Multi_characterContext *multi_character();
    Const_datatimeContext *const_datatime();
    Const_intervalContext *const_interval();
    Paren_iconstContext *paren_iconst();
    Opt_intervalContext *opt_interval();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_typenameContext* simple_typename();

  class  Const_typenameContext : public antlr4::ParserRuleContext {
  public:
    Const_typenameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumericContext *numeric();
    Const_bitContext *const_bit();
    Const_characterContext *const_character();
    Const_datatimeContext *const_datatime();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Const_typenameContext* const_typename();

  class  Generic_typeContext : public antlr4::ParserRuleContext {
  public:
    Generic_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_function_nameContext *type_function_name();
    AttrsContext *attrs();
    Paren_expr_listContext *paren_expr_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Generic_typeContext* generic_type();

  class  NumericContext : public antlr4::ParserRuleContext {
  public:
    NumericContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT_P();
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *SMALLINT();
    antlr4::tree::TerminalNode *BIGINT();
    antlr4::tree::TerminalNode *REAL();
    antlr4::tree::TerminalNode *FLOAT_P();
    Paren_iconstContext *paren_iconst();
    antlr4::tree::TerminalNode *DOUBLE_P();
    antlr4::tree::TerminalNode *PRECISION();
    antlr4::tree::TerminalNode *DECIMAL_P();
    Paren_expr_listContext *paren_expr_list();
    antlr4::tree::TerminalNode *DEC();
    antlr4::tree::TerminalNode *NUMERIC();
    antlr4::tree::TerminalNode *BOOLEAN_P();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumericContext* numeric();

  class  BitContext : public antlr4::ParserRuleContext {
  public:
    BitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Bit_with_lengthContext *bit_with_length();
    Bit_without_lengthContext *bit_without_length();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BitContext* bit();

  class  Const_bitContext : public antlr4::ParserRuleContext {
  public:
    Const_bitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Bit_with_lengthContext *bit_with_length();
    Bit_without_lengthContext *bit_without_length();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Const_bitContext* const_bit();

  class  Bit_with_lengthContext : public antlr4::ParserRuleContext {
  public:
    Bit_with_lengthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIT();
    Paren_expr_listContext *paren_expr_list();
    antlr4::tree::TerminalNode *VARYING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bit_with_lengthContext* bit_with_length();

  class  Bit_without_lengthContext : public antlr4::ParserRuleContext {
  public:
    Bit_without_lengthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIT();
    antlr4::tree::TerminalNode *VARYING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bit_without_lengthContext* bit_without_length();

  class  Multi_characterContext : public antlr4::ParserRuleContext {
  public:
    Multi_characterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Character_with_lengthContext *character_with_length();
    Character_without_lengthContext *character_without_length();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Multi_characterContext* multi_character();

  class  Const_characterContext : public antlr4::ParserRuleContext {
  public:
    Const_characterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Character_with_lengthContext *character_with_length();
    Character_without_lengthContext *character_without_length();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Const_characterContext* const_character();

  class  Character_with_lengthContext : public antlr4::ParserRuleContext {
  public:
    Character_with_lengthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CharacterContext *character();
    Paren_iconstContext *paren_iconst();
    Opt_charsetContext *opt_charset();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Character_with_lengthContext* character_with_length();

  class  Character_without_lengthContext : public antlr4::ParserRuleContext {
  public:
    Character_without_lengthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CharacterContext *character();
    Opt_charsetContext *opt_charset();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Character_without_lengthContext* character_without_length();

  class  CharacterContext : public antlr4::ParserRuleContext {
  public:
    CharacterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *CHAR_P();
    antlr4::tree::TerminalNode *NCHAR();
    antlr4::tree::TerminalNode *VARYING();
    antlr4::tree::TerminalNode *VARCHAR();
    antlr4::tree::TerminalNode *NATIONAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CharacterContext* character();

  class  Opt_charsetContext : public antlr4::ParserRuleContext {
  public:
    Opt_charsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *SET();
    ColidContext *colid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_charsetContext* opt_charset();

  class  Const_datatimeContext : public antlr4::ParserRuleContext {
  public:
    Const_datatimeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TIMESTAMP();
    antlr4::tree::TerminalNode *TIME();
    Paren_iconstContext *paren_iconst();
    Opt_timezoneContext *opt_timezone();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Const_datatimeContext* const_datatime();

  class  Const_intervalContext : public antlr4::ParserRuleContext {
  public:
    Const_intervalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTERVAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Const_intervalContext* const_interval();

  class  Opt_timezoneContext : public antlr4::ParserRuleContext {
  public:
    Opt_timezoneContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *ZONE();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *WITHOUT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_timezoneContext* opt_timezone();

  class  Opt_intervalContext : public antlr4::ParserRuleContext {
  public:
    Opt_intervalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *YEAR_P();
    antlr4::tree::TerminalNode *MONTH_P();
    antlr4::tree::TerminalNode *DAY_P();
    antlr4::tree::TerminalNode *HOUR_P();
    antlr4::tree::TerminalNode *MINUTE_P();
    antlr4::tree::TerminalNode *SECOND_P();
    antlr4::tree::TerminalNode *TO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_intervalContext* opt_interval();

  class  A_exprContext : public antlr4::ParserRuleContext {
  public:
    A_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Logical_exprContext *logical_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  A_exprContext* a_expr();

  class  Logical_exprContext : public antlr4::ParserRuleContext {
  public:
    Logical_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Multiset_exprContext *multiset_expr();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *NULL_P();
    antlr4::tree::TerminalNode *DISTINCT();
    antlr4::tree::TerminalNode *FROM();
    std::vector<Logical_exprContext *> logical_expr();
    Logical_exprContext* logical_expr(size_t i);
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Type_listContext *type_list();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    antlr4::tree::TerminalNode *DOCUMENT_P();
    antlr4::tree::TerminalNode *TRUE_P();
    antlr4::tree::TerminalNode *FALSE_P();
    antlr4::tree::TerminalNode *UNKNOWN();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *ISNULL();
    antlr4::tree::TerminalNode *NOTNULL();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();

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
    antlr4::tree::TerminalNode *IN_P();
    In_exprContext *in_expr();
    antlr4::tree::TerminalNode *BETWEEN();
    Between_elementsContext *between_elements();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *SYMMETRIC();
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *ILIKE();
    antlr4::tree::TerminalNode *SIMILAR();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *ESCAPE();
    A_exprContext *a_expr();
    antlr4::tree::TerminalNode *ASYMMETRIC();
    std::vector<Concatenation_listContext *> concatenation_list();
    Concatenation_listContext* concatenation_list(size_t i);
    antlr4::tree::TerminalNode *OVERLAPS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Compound_exprContext* compound_expr();

  class  Between_elementsContext : public antlr4::ParserRuleContext {
  public:
    Between_elementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ConcatenationContext *> concatenation();
    ConcatenationContext* concatenation(size_t i);
    antlr4::tree::TerminalNode *AND();

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
    antlr4::tree::TerminalNode *AT();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *ZONE();
    std::vector<ConcatenationContext *> concatenation();
    ConcatenationContext* concatenation(size_t i);
    antlr4::tree::TerminalNode *CARRET_OPERATOR_PART();
    antlr4::tree::TerminalNode *ASTERISK();
    antlr4::tree::TerminalNode *SOLIDUS();
    antlr4::tree::TerminalNode *PERCENT_SIGN();
    antlr4::tree::TerminalNode *PLUS_SIGN();
    antlr4::tree::TerminalNode *MINUS_SIGN();
    std::vector<antlr4::tree::TerminalNode *> BAR();
    antlr4::tree::TerminalNode* BAR(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConcatenationContext* concatenation();
  ConcatenationContext* concatenation(int precedence);
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
    C_exprContext *c_expr();
    Unary_exprContext *unary_expr();
    antlr4::tree::TerminalNode *MINUS_SIGN();
    antlr4::tree::TerminalNode *PLUS_SIGN();
    antlr4::tree::TerminalNode *TYPECAST();
    Typename_pgContext *typename_pg();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unary_exprContext* unary_expr();
  Unary_exprContext* unary_expr(int precedence);
  class  C_exprContext : public antlr4::ParserRuleContext {
  public:
    C_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PAREN();
    A_exprContext *a_expr();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    IndirectionContext *indirection();
    Select_with_parensContext *select_with_parens();
    antlr4::tree::TerminalNode *UNIQUE();
    antlr4::tree::TerminalNode *EXISTS();
    Select_stmtContext *select_stmt();
    ColumnrefContext *columnref();
    Func_exprContext *func_expr();
    antlr4::tree::TerminalNode *OVER();
    Window_specificationContext *window_specification();
    A_expr_constContext *a_expr_const();
    antlr4::tree::TerminalNode *PARAM();
    Case_exprContext *case_expr();
    Decode_exprContext *decode_expr();
    antlr4::tree::TerminalNode *ARRAY();
    Array_exprContext *array_expr();
    antlr4::tree::TerminalNode *TABLE();
    Table_value_select_clauseContext *table_value_select_clause();
    RowContext *row();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  C_exprContext* c_expr();

  class  Scatter_clauseContext : public antlr4::ParserRuleContext {
  public:
    Scatter_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SCATTER();
    antlr4::tree::TerminalNode *RANDOMLY();
    antlr4::tree::TerminalNode *BY();
    Expr_listContext *expr_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Scatter_clauseContext* scatter_clause();

  class  Table_value_select_clauseContext : public antlr4::ParserRuleContext {
  public:
    Table_value_select_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Select_stmtContext *select_stmt();
    Scatter_clauseContext *scatter_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_value_select_clauseContext* table_value_select_clause();

  class  Simple_funcContext : public antlr4::ParserRuleContext {
  public:
    Simple_funcContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Func_nameContext *func_name();
    Simple_func_paramsContext *simple_func_params();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_funcContext* simple_func();

  class  Simple_func_paramsContext : public antlr4::ParserRuleContext {
  public:
    Simple_func_paramsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PAREN();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    antlr4::tree::TerminalNode *ASTERISK();
    Paren_expr_listContext *paren_expr_list();
    antlr4::tree::TerminalNode *VARIADIC();
    A_exprContext *a_expr();
    Expr_listContext *expr_list();
    antlr4::tree::TerminalNode *COMMA();
    Opt_distinctContext *opt_distinct();
    Sort_clauseContext *sort_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_func_paramsContext* simple_func_params();

  class  Func_exprContext : public antlr4::ParserRuleContext {
  public:
    Func_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_funcContext *simple_func();
    antlr4::tree::TerminalNode *FILTER();
    std::vector<antlr4::tree::TerminalNode *> LEFT_PAREN();
    antlr4::tree::TerminalNode* LEFT_PAREN(size_t i);
    antlr4::tree::TerminalNode *WHERE();
    std::vector<A_exprContext *> a_expr();
    A_exprContext* a_expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RIGHT_PAREN();
    antlr4::tree::TerminalNode* RIGHT_PAREN(size_t i);
    antlr4::tree::TerminalNode *CURRENT_DATE();
    antlr4::tree::TerminalNode *CURRENT_TIME();
    antlr4::tree::TerminalNode *CURRENT_TIMESTAMP();
    antlr4::tree::TerminalNode *LOCALTIME();
    antlr4::tree::TerminalNode *LOCALTIMESTAMP();
    Paren_iconstContext *paren_iconst();
    antlr4::tree::TerminalNode *CURRENT_ROLE();
    antlr4::tree::TerminalNode *CURRENT_USER();
    antlr4::tree::TerminalNode *SESSION_USER();
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *CURRENT_CATALOG();
    antlr4::tree::TerminalNode *CURRENT_SCHEMA();
    antlr4::tree::TerminalNode *CAST();
    antlr4::tree::TerminalNode *AS();
    Typename_pgContext *typename_pg();
    antlr4::tree::TerminalNode *EXTRACT();
    Extract_listContext *extract_list();
    antlr4::tree::TerminalNode *OVERLAY();
    Overlay_listContext *overlay_list();
    antlr4::tree::TerminalNode *POSITION();
    Position_listContext *position_list();
    antlr4::tree::TerminalNode *SUBSTRING();
    Substr_listContext *substr_list();
    antlr4::tree::TerminalNode *TREAT();
    antlr4::tree::TerminalNode *TRIM();
    antlr4::tree::TerminalNode *BOTH();
    Trim_listContext *trim_list();
    antlr4::tree::TerminalNode *LEADING();
    antlr4::tree::TerminalNode *TRAILING();
    antlr4::tree::TerminalNode *NULLIF();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *COALESCE();
    Paren_expr_listContext *paren_expr_list();
    antlr4::tree::TerminalNode *GREATEST();
    antlr4::tree::TerminalNode *LEAST();
    antlr4::tree::TerminalNode *GROUPING();
    antlr4::tree::TerminalNode *GROUP_ID();
    Double_parensContext *double_parens();
    antlr4::tree::TerminalNode *MEDIAN();
    antlr4::tree::TerminalNode *PERCENTILE_CONT();
    antlr4::tree::TerminalNode *WITHIN();
    antlr4::tree::TerminalNode *GROUP_P();
    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *BY();
    Sortby_listContext *sortby_list();
    antlr4::tree::TerminalNode *PERCENTILE_DISC();
    antlr4::tree::TerminalNode *DECODE();
    antlr4::tree::TerminalNode *XMLCONCAT();
    antlr4::tree::TerminalNode *XMLELEMENT();
    antlr4::tree::TerminalNode *NAME_P();
    Col_labelContext *col_label();
    Xml_attributesContext *xml_attributes();
    Expr_listContext *expr_list();
    antlr4::tree::TerminalNode *XMLEXISTS();
    C_exprContext *c_expr();
    Xmlexists_argumentContext *xmlexists_argument();
    antlr4::tree::TerminalNode *XMLFOREST();
    Xml_attribute_listContext *xml_attribute_list();
    antlr4::tree::TerminalNode *XMLPARSE();
    Document_or_contentContext *document_or_content();
    Xml_whitespace_optionContext *xml_whitespace_option();
    antlr4::tree::TerminalNode *XMLPI();
    antlr4::tree::TerminalNode *XMLROOT();
    Xml_root_versionContext *xml_root_version();
    Opt_xml_root_standaloneContext *opt_xml_root_standalone();
    antlr4::tree::TerminalNode *XMLSERIALIZE();
    Simple_typenameContext *simple_typename();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_exprContext* func_expr();

  class  Xml_root_versionContext : public antlr4::ParserRuleContext {
  public:
    Xml_root_versionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VERSION_P();
    A_exprContext *a_expr();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *VALUE_P();

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
    antlr4::tree::TerminalNode *STANDALONE_P();
    antlr4::tree::TerminalNode *YES_P();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *VALUE_P();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_xml_root_standaloneContext* opt_xml_root_standalone();

  class  Xml_attributesContext : public antlr4::ParserRuleContext {
  public:
    Xml_attributesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *XMLATTRIBUTES();
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
    A_exprContext *a_expr();
    antlr4::tree::TerminalNode *AS();
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
    antlr4::tree::TerminalNode *DOCUMENT_P();
    antlr4::tree::TerminalNode *CONTENT_P();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Document_or_contentContext* document_or_content();

  class  Xml_whitespace_optionContext : public antlr4::ParserRuleContext {
  public:
    Xml_whitespace_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHITESPACE_P();
    antlr4::tree::TerminalNode *PRESERVE();
    antlr4::tree::TerminalNode *STRIP_P();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xml_whitespace_optionContext* xml_whitespace_option();

  class  Xmlexists_argumentContext : public antlr4::ParserRuleContext {
  public:
    Xmlexists_argumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PASSING();
    C_exprContext *c_expr();
    std::vector<antlr4::tree::TerminalNode *> BY();
    antlr4::tree::TerminalNode* BY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> REF();
    antlr4::tree::TerminalNode* REF(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xmlexists_argumentContext* xmlexists_argument();

  class  Window_clauseContext : public antlr4::ParserRuleContext {
  public:
    Window_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WINDOW();
    Window_definition_listContext *window_definition_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Window_clauseContext* window_clause();

  class  Window_definition_listContext : public antlr4::ParserRuleContext {
  public:
    Window_definition_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Window_definitionContext *> window_definition();
    Window_definitionContext* window_definition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Window_definition_listContext* window_definition_list();

  class  Window_definitionContext : public antlr4::ParserRuleContext {
  public:
    Window_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColidContext *colid();
    antlr4::tree::TerminalNode *AS();
    Window_specificationContext *window_specification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Window_definitionContext* window_definition();

  class  Window_specificationContext : public antlr4::ParserRuleContext {
  public:
    Window_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PAREN();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    ColidContext *colid();
    Opt_partition_clauseContext *opt_partition_clause();
    Sort_clauseContext *sort_clause();
    Window_frame_clauseContext *window_frame_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Window_specificationContext* window_specification();

  class  Opt_partition_clauseContext : public antlr4::ParserRuleContext {
  public:
    Opt_partition_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *BY();
    Sortby_listContext *sortby_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Opt_partition_clauseContext* opt_partition_clause();

  class  Window_frame_clauseContext : public antlr4::ParserRuleContext {
  public:
    Window_frame_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Window_frame_unitsContext *window_frame_units();
    Window_frame_extentContext *window_frame_extent();
    Window_frame_exclusionContext *window_frame_exclusion();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Window_frame_clauseContext* window_frame_clause();

  class  Window_frame_unitsContext : public antlr4::ParserRuleContext {
  public:
    Window_frame_unitsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ROWS();
    antlr4::tree::TerminalNode *RANGE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Window_frame_unitsContext* window_frame_units();

  class  Window_frame_extentContext : public antlr4::ParserRuleContext {
  public:
    Window_frame_extentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Window_frame_startContext *window_frame_start();
    Window_frame_betweenContext *window_frame_between();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Window_frame_extentContext* window_frame_extent();

  class  Window_frame_startContext : public antlr4::ParserRuleContext {
  public:
    Window_frame_startContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNBOUNDED();
    antlr4::tree::TerminalNode *PRECEDING();
    A_exprContext *a_expr();
    antlr4::tree::TerminalNode *CURRENT_P();
    antlr4::tree::TerminalNode *ROW();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Window_frame_startContext* window_frame_start();

  class  Window_frame_betweenContext : public antlr4::ParserRuleContext {
  public:
    Window_frame_betweenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BETWEEN();
    std::vector<Window_frame_boundContext *> window_frame_bound();
    Window_frame_boundContext* window_frame_bound(size_t i);
    antlr4::tree::TerminalNode *AND();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Window_frame_betweenContext* window_frame_between();

  class  Window_frame_boundContext : public antlr4::ParserRuleContext {
  public:
    Window_frame_boundContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Window_frame_startContext *window_frame_start();
    antlr4::tree::TerminalNode *UNBOUNDED();
    antlr4::tree::TerminalNode *FOLLOWING();
    A_exprContext *a_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Window_frame_boundContext* window_frame_bound();

  class  Window_frame_exclusionContext : public antlr4::ParserRuleContext {
  public:
    Window_frame_exclusionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXCLUDE();
    antlr4::tree::TerminalNode *CURRENT_P();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *GROUP_P();
    antlr4::tree::TerminalNode *TIES();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *OTHERS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Window_frame_exclusionContext* window_frame_exclusion();

  class  RowContext : public antlr4::ParserRuleContext {
  public:
    RowContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PAREN();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    Expr_listContext *expr_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RowContext* row();

  class  Op_signsContext : public antlr4::ParserRuleContext {
  public:
    Op_signsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> OP_CHARS();
    antlr4::tree::TerminalNode* OP_CHARS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_signsContext* op_signs();

  class  All_OpContext : public antlr4::ParserRuleContext {
  public:
    All_OpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Op_signsContext *op_signs();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  All_OpContext* all_Op();

  class  Qual_OpContext : public antlr4::ParserRuleContext {
  public:
    Qual_OpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Op_signsContext *op_signs();
    antlr4::tree::TerminalNode *OPERATOR();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Any_operatorContext *any_operator();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Qual_OpContext* qual_Op();

  class  Qual_all_OpContext : public antlr4::ParserRuleContext {
  public:
    Qual_all_OpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    All_OpContext *all_Op();
    antlr4::tree::TerminalNode *OPERATOR();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Any_operatorContext *any_operator();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Qual_all_OpContext* qual_all_Op();

  class  Subquery_OpContext : public antlr4::ParserRuleContext {
  public:
    Subquery_OpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    All_OpContext *all_Op();
    antlr4::tree::TerminalNode *OPERATOR();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Any_operatorContext *any_operator();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *ILIKE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Subquery_OpContext* subquery_Op();

  class  Paren_expr_listContext : public antlr4::ParserRuleContext {
  public:
    Paren_expr_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Expr_listContext *expr_list();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Paren_expr_listContext* paren_expr_list();

  class  Expr_listContext : public antlr4::ParserRuleContext {
  public:
    Expr_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<A_exprContext *> a_expr();
    A_exprContext* a_expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_listContext* expr_list();

  class  Type_listContext : public antlr4::ParserRuleContext {
  public:
    Type_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Typename_pgContext *> typename_pg();
    Typename_pgContext* typename_pg(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_listContext* type_list();

  class  Array_exprContext : public antlr4::ParserRuleContext {
  public:
    Array_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_BRACKET();
    antlr4::tree::TerminalNode *RIGHT_BRACKET();
    Expr_listContext *expr_list();
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

  class  Extract_listContext : public antlr4::ParserRuleContext {
  public:
    Extract_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Extract_argContext *extract_arg();
    antlr4::tree::TerminalNode *FROM();
    A_exprContext *a_expr();

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
    antlr4::tree::TerminalNode *YEAR_P();
    antlr4::tree::TerminalNode *MONTH_P();
    antlr4::tree::TerminalNode *DAY_P();
    antlr4::tree::TerminalNode *HOUR_P();
    antlr4::tree::TerminalNode *MINUTE_P();
    antlr4::tree::TerminalNode *SECOND_P();
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
    A_exprContext *a_expr();
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
    antlr4::tree::TerminalNode *PLACING();
    A_exprContext *a_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Overlay_placingContext* overlay_placing();

  class  Position_listContext : public antlr4::ParserRuleContext {
  public:
    Position_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<A_exprContext *> a_expr();
    A_exprContext* a_expr(size_t i);
    antlr4::tree::TerminalNode *IN_P();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Position_listContext* position_list();

  class  Substr_listContext : public antlr4::ParserRuleContext {
  public:
    Substr_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    A_exprContext *a_expr();
    Substr_fromContext *substr_from();
    Substr_forContext *substr_for();
    Expr_listContext *expr_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Substr_listContext* substr_list();

  class  Substr_fromContext : public antlr4::ParserRuleContext {
  public:
    Substr_fromContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FROM();
    A_exprContext *a_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Substr_fromContext* substr_from();

  class  Substr_forContext : public antlr4::ParserRuleContext {
  public:
    Substr_forContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    A_exprContext *a_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Substr_forContext* substr_for();

  class  Trim_listContext : public antlr4::ParserRuleContext {
  public:
    Trim_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    A_exprContext *a_expr();
    antlr4::tree::TerminalNode *FROM();
    Expr_listContext *expr_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Trim_listContext* trim_list();

  class  In_exprContext : public antlr4::ParserRuleContext {
  public:
    In_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Select_with_parensContext *select_with_parens();
    Paren_expr_listContext *paren_expr_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  In_exprContext* in_expr();

  class  Case_exprContext : public antlr4::ParserRuleContext {
  public:
    Case_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *END_P();
    Case_argContext *case_arg();
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
    antlr4::tree::TerminalNode *WHEN();
    When_operandContext *when_operand();
    antlr4::tree::TerminalNode *THEN();
    A_exprContext *a_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  When_clauseContext* when_clause();

  class  When_operandContext : public antlr4::ParserRuleContext {
  public:
    When_operandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    A_exprContext *a_expr();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *DISTINCT();
    antlr4::tree::TerminalNode *FROM();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  When_operandContext* when_operand();

  class  Case_defaultContext : public antlr4::ParserRuleContext {
  public:
    Case_defaultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSE();
    A_exprContext *a_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_defaultContext* case_default();

  class  Case_argContext : public antlr4::ParserRuleContext {
  public:
    Case_argContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    A_exprContext *a_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_argContext* case_arg();

  class  Decode_exprContext : public antlr4::ParserRuleContext {
  public:
    Decode_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECODE();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    A_exprContext *a_expr();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    std::vector<Search_resultContext *> search_result();
    Search_resultContext* search_result(size_t i);
    Decode_defaultContext *decode_default();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Decode_exprContext* decode_expr();

  class  Search_resultContext : public antlr4::ParserRuleContext {
  public:
    Search_resultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<A_exprContext *> a_expr();
    A_exprContext* a_expr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Search_resultContext* search_result();

  class  Decode_defaultContext : public antlr4::ParserRuleContext {
  public:
    Decode_defaultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMA();
    A_exprContext *a_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Decode_defaultContext* decode_default();

  class  ColumnrefContext : public antlr4::ParserRuleContext {
  public:
    ColumnrefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Relation_nameContext *relation_name();
    IndirectionContext *indirection();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnrefContext* columnref();

  class  Indirection_elContext : public antlr4::ParserRuleContext {
  public:
    Indirection_elContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PERIOD();
    Attr_nameContext *attr_name();
    antlr4::tree::TerminalNode *ASTERISK();
    antlr4::tree::TerminalNode *LEFT_BRACKET();
    std::vector<A_exprContext *> a_expr();
    A_exprContext* a_expr(size_t i);
    antlr4::tree::TerminalNode *RIGHT_BRACKET();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Indirection_elContext* indirection_el();

  class  IndirectionContext : public antlr4::ParserRuleContext {
  public:
    IndirectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Indirection_elContext *> indirection_el();
    Indirection_elContext* indirection_el(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndirectionContext* indirection();

  class  Ctext_exprContext : public antlr4::ParserRuleContext {
  public:
    Ctext_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    A_exprContext *a_expr();
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ctext_exprContext* ctext_expr();

  class  Ctext_expr_listContext : public antlr4::ParserRuleContext {
  public:
    Ctext_expr_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Ctext_exprContext *> ctext_expr();
    Ctext_exprContext* ctext_expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ctext_expr_listContext* ctext_expr_list();

  class  Ctext_rowContext : public antlr4::ParserRuleContext {
  public:
    Ctext_rowContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PAREN();
    Ctext_expr_listContext *ctext_expr_list();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ctext_rowContext* ctext_row();

  class  Target_listContext : public antlr4::ParserRuleContext {
  public:
    Target_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Target_elContext *> target_el();
    Target_elContext* target_el(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Target_listContext* target_list();

  class  Target_elContext : public antlr4::ParserRuleContext {
  public:
    Target_elContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Target_elContext() : antlr4::ParserRuleContext() { }
    void copyFrom(Target_elContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Target_el_normalContext : public Target_elContext {
  public:
    Target_el_normalContext(Target_elContext *ctx);

    ColumnrefContext *columnref();
    A_exprContext *a_expr();
    Col_labelContext *col_label();
    antlr4::tree::TerminalNode *AS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Target_el_asteriskContext : public Target_elContext {
  public:
    Target_el_asteriskContext(Target_elContext *ctx);

    antlr4::tree::TerminalNode *ASTERISK();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Target_elContext* target_el();

  class  Relation_nameContext : public antlr4::ParserRuleContext {
  public:
    Relation_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Special_rule_relationContext *special_rule_relation();
    ColidContext *colid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Relation_nameContext* relation_name();

  class  Qualified_name_listContext : public antlr4::ParserRuleContext {
  public:
    Qualified_name_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Qualified_nameContext *> qualified_name();
    Qualified_nameContext* qualified_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Qualified_name_listContext* qualified_name_list();

  class  Qualified_nameContext : public antlr4::ParserRuleContext {
  public:
    Qualified_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Relation_nameContext *relation_name();
    IndirectionContext *indirection();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Qualified_nameContext* qualified_name();

  class  Name_listContext : public antlr4::ParserRuleContext {
  public:
    Name_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NameContext *> name();
    NameContext* name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Name_listContext* name_list();

  class  NameContext : public antlr4::ParserRuleContext {
  public:
    NameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColidContext *colid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NameContext* name();

  class  Cte_nameContext : public antlr4::ParserRuleContext {
  public:
    Cte_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColidContext *colid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cte_nameContext* cte_name();

  class  Database_nameContext : public antlr4::ParserRuleContext {
  public:
    Database_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColidContext *colid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Database_nameContext* database_name();

  class  Access_methodContext : public antlr4::ParserRuleContext {
  public:
    Access_methodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColidContext *colid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Access_methodContext* access_method();

  class  Attr_nameContext : public antlr4::ParserRuleContext {
  public:
    Attr_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Col_labelContext *col_label();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Attr_nameContext* attr_name();

  class  Index_nameContext : public antlr4::ParserRuleContext {
  public:
    Index_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColidContext *colid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Index_nameContext* index_name();

  class  File_nameContext : public antlr4::ParserRuleContext {
  public:
    File_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SconstContext *sconst();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  File_nameContext* file_name();

  class  Func_nameContext : public antlr4::ParserRuleContext {
  public:
    Func_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_function_nameContext *type_function_name();
    Relation_nameContext *relation_name();
    IndirectionContext *indirection();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_nameContext* func_name();

  class  A_expr_constContext : public antlr4::ParserRuleContext {
  public:
    A_expr_constContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IconstContext *iconst();
    antlr4::tree::TerminalNode *FCONST();
    SconstContext *sconst();
    antlr4::tree::TerminalNode *BCONST();
    antlr4::tree::TerminalNode *XCONST();
    Func_nameContext *func_name();
    Paren_expr_listContext *paren_expr_list();
    Const_typenameContext *const_typename();
    Const_intervalContext *const_interval();
    Paren_iconstContext *paren_iconst();
    Opt_intervalContext *opt_interval();
    antlr4::tree::TerminalNode *TRUE_P();
    antlr4::tree::TerminalNode *FALSE_P();
    antlr4::tree::TerminalNode *NULL_P();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  A_expr_constContext* a_expr_const();

  class  IconstContext : public antlr4::ParserRuleContext {
  public:
    IconstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ICONST();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IconstContext* iconst();

  class  SconstContext : public antlr4::ParserRuleContext {
  public:
    SconstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SCONST();
    antlr4::tree::TerminalNode *DELIMITED_STR();
    antlr4::tree::TerminalNode *CHAR_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SconstContext* sconst();

  class  Role_idContext : public antlr4::ParserRuleContext {
  public:
    Role_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColidContext *colid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Role_idContext* role_id();

  class  Queue_idContext : public antlr4::ParserRuleContext {
  public:
    Queue_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColidContext *colid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Queue_idContext* queue_id();

  class  Signed_iconstContext : public antlr4::ParserRuleContext {
  public:
    Signed_iconstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ICONST();
    antlr4::tree::TerminalNode *PLUS_SIGN();
    antlr4::tree::TerminalNode *MINUS_SIGN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Signed_iconstContext* signed_iconst();

  class  ColidContext : public antlr4::ParserRuleContext {
  public:
    ColidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *COLON();
    Unreserved_keywordContext *unreserved_keyword();
    antlr4::tree::TerminalNode *SCONST();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColidContext* colid();

  class  Type_function_nameContext : public antlr4::ParserRuleContext {
  public:
    Type_function_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    Unreserved_keywordContext *unreserved_keyword();
    Type_func_name_keywordContext *type_func_name_keyword();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_function_nameContext* type_function_name();

  class  Col_labelContext : public antlr4::ParserRuleContext {
  public:
    Col_labelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    Unreserved_keywordContext *unreserved_keyword();
    Col_name_keywordContext *col_name_keyword();
    Type_func_name_keywordContext *type_func_name_keyword();
    Reserved_keywordContext *reserved_keyword();
    antlr4::tree::TerminalNode *SCONST();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Col_labelContext* col_label();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REGULAR_ID();
    antlr4::tree::TerminalNode *CHAR_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierContext* identifier();

  class  Unreserved_keywordContext : public antlr4::ParserRuleContext {
  public:
    Unreserved_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ABORT_P();
    antlr4::tree::TerminalNode *ABSOLUTE_P();
    antlr4::tree::TerminalNode *ACCESS();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *ACTIVE();
    antlr4::tree::TerminalNode *ADD_P();
    antlr4::tree::TerminalNode *ADMIN();
    antlr4::tree::TerminalNode *AFTER();
    antlr4::tree::TerminalNode *AGGREGATE();
    antlr4::tree::TerminalNode *ALSO();
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *ALWAYS();
    antlr4::tree::TerminalNode *ASSERTION();
    antlr4::tree::TerminalNode *ASSIGNMENT();
    antlr4::tree::TerminalNode *AT();
    antlr4::tree::TerminalNode *BACKWARD();
    antlr4::tree::TerminalNode *BEFORE();
    antlr4::tree::TerminalNode *BEGIN_P();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *CACHE();
    antlr4::tree::TerminalNode *CALLED();
    antlr4::tree::TerminalNode *CASCADE();
    antlr4::tree::TerminalNode *CASCADED();
    antlr4::tree::TerminalNode *CHAIN();
    antlr4::tree::TerminalNode *CHARACTERISTICS();
    antlr4::tree::TerminalNode *CHECKPOINT();
    antlr4::tree::TerminalNode *CLASS();
    antlr4::tree::TerminalNode *CLOSE();
    antlr4::tree::TerminalNode *CLUSTER();
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *COMMIT();
    antlr4::tree::TerminalNode *COMMITTED();
    antlr4::tree::TerminalNode *CONCURRENCY();
    antlr4::tree::TerminalNode *CONCURRENTLY();
    antlr4::tree::TerminalNode *CONFIGURATION();
    antlr4::tree::TerminalNode *CONNECTION();
    antlr4::tree::TerminalNode *CONSTRAINTS();
    antlr4::tree::TerminalNode *CONTAINS();
    antlr4::tree::TerminalNode *CONTENT_P();
    antlr4::tree::TerminalNode *CONTINUE_P();
    antlr4::tree::TerminalNode *CONVERSION_P();
    antlr4::tree::TerminalNode *COPY();
    antlr4::tree::TerminalNode *COST();
    antlr4::tree::TerminalNode *CPUSET();
    antlr4::tree::TerminalNode *CPU_RATE_LIMIT();
    antlr4::tree::TerminalNode *CREATEDB();
    antlr4::tree::TerminalNode *CREATEEXTTABLE();
    antlr4::tree::TerminalNode *CREATEROLE();
    antlr4::tree::TerminalNode *CREATEUSER();
    antlr4::tree::TerminalNode *CSV();
    antlr4::tree::TerminalNode *CURRENT_P();
    antlr4::tree::TerminalNode *CURSOR();
    antlr4::tree::TerminalNode *CYCLE();
    antlr4::tree::TerminalNode *DATA_P();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *DAY_P();
    antlr4::tree::TerminalNode *DEALLOCATE();
    antlr4::tree::TerminalNode *DECLARE();
    antlr4::tree::TerminalNode *DEFAULTS();
    antlr4::tree::TerminalNode *DEFERRED();
    antlr4::tree::TerminalNode *DEFINER();
    antlr4::tree::TerminalNode *DELETE_P();
    antlr4::tree::TerminalNode *DELIMITER();
    antlr4::tree::TerminalNode *DELIMITERS();
    antlr4::tree::TerminalNode *DENY();
    antlr4::tree::TerminalNode *DICTIONARY();
    antlr4::tree::TerminalNode *DISABLE_P();
    antlr4::tree::TerminalNode *DISCARD();
    antlr4::tree::TerminalNode *DOCUMENT_P();
    antlr4::tree::TerminalNode *DOMAIN_P();
    antlr4::tree::TerminalNode *DOUBLE_P();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *DXL();
    antlr4::tree::TerminalNode *EACH();
    antlr4::tree::TerminalNode *ENABLE_P();
    antlr4::tree::TerminalNode *ENCODING();
    antlr4::tree::TerminalNode *ENCRYPTED();
    antlr4::tree::TerminalNode *ENUM_P();
    antlr4::tree::TerminalNode *ERRORS();
    antlr4::tree::TerminalNode *ESCAPE();
    antlr4::tree::TerminalNode *EVERY();
    antlr4::tree::TerminalNode *EXCHANGE();
    antlr4::tree::TerminalNode *EXCLUDING();
    antlr4::tree::TerminalNode *EXCLUSIVE();
    antlr4::tree::TerminalNode *EXECUTE();
    antlr4::tree::TerminalNode *EXPLAIN();
    antlr4::tree::TerminalNode *EXTENSION();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *FAMILY();
    antlr4::tree::TerminalNode *FIELDS();
    antlr4::tree::TerminalNode *FILESPACE();
    antlr4::tree::TerminalNode *FILL();
    antlr4::tree::TerminalNode *FIRST_P();
    antlr4::tree::TerminalNode *FORCE();
    antlr4::tree::TerminalNode *FORMAT();
    antlr4::tree::TerminalNode *FORWARD();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *GRANTED();
    antlr4::tree::TerminalNode *HANDLER();
    antlr4::tree::TerminalNode *HASH();
    antlr4::tree::TerminalNode *HEADER_P();
    antlr4::tree::TerminalNode *HOLD();
    antlr4::tree::TerminalNode *HOST();
    antlr4::tree::TerminalNode *HOUR_P();
    antlr4::tree::TerminalNode *IDENTITY_P();
    antlr4::tree::TerminalNode *IF_P();
    antlr4::tree::TerminalNode *IGNORE_P();
    antlr4::tree::TerminalNode *IMMEDIATE();
    antlr4::tree::TerminalNode *IMMUTABLE();
    antlr4::tree::TerminalNode *IMPLICIT_P();
    antlr4::tree::TerminalNode *INCLUDING();
    antlr4::tree::TerminalNode *INCLUSIVE();
    antlr4::tree::TerminalNode *INCREMENT();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *INDEXES();
    antlr4::tree::TerminalNode *INHERIT();
    antlr4::tree::TerminalNode *INHERITS();
    antlr4::tree::TerminalNode *INLINE_P();
    antlr4::tree::TerminalNode *INPUT_P();
    antlr4::tree::TerminalNode *INSENSITIVE();
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *INSTEAD();
    antlr4::tree::TerminalNode *INVOKER();
    antlr4::tree::TerminalNode *ISOLATION();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *LANGUAGE();
    antlr4::tree::TerminalNode *LARGE_P();
    antlr4::tree::TerminalNode *LAST_P();
    antlr4::tree::TerminalNode *LEVEL();
    antlr4::tree::TerminalNode *LIST();
    antlr4::tree::TerminalNode *LISTEN();
    antlr4::tree::TerminalNode *LOAD();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *LOCATION();
    antlr4::tree::TerminalNode *LOCK_P();
    antlr4::tree::TerminalNode *LOGIN_P();
    antlr4::tree::TerminalNode *MAPPING();
    antlr4::tree::TerminalNode *MASTER();
    antlr4::tree::TerminalNode *MATCH();
    antlr4::tree::TerminalNode *MAXVALUE();
    antlr4::tree::TerminalNode *MEMORY_LIMIT();
    antlr4::tree::TerminalNode *MEMORY_SHARED_QUOTA();
    antlr4::tree::TerminalNode *MEMORY_SPILL_RATIO();
    antlr4::tree::TerminalNode *MERGE();
    antlr4::tree::TerminalNode *MINUTE_P();
    antlr4::tree::TerminalNode *MINVALUE();
    antlr4::tree::TerminalNode *MISSING();
    antlr4::tree::TerminalNode *MODE();
    antlr4::tree::TerminalNode *MODIFIES();
    antlr4::tree::TerminalNode *MODIFY();
    antlr4::tree::TerminalNode *MONTH_P();
    antlr4::tree::TerminalNode *MOVE();
    antlr4::tree::TerminalNode *NAME_P();
    antlr4::tree::TerminalNode *NAMES();
    antlr4::tree::TerminalNode *NEXT();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *NOCREATEDB();
    antlr4::tree::TerminalNode *NOCREATEEXTTABLE();
    antlr4::tree::TerminalNode *NOCREATEROLE();
    antlr4::tree::TerminalNode *NOCREATEUSER();
    antlr4::tree::TerminalNode *NOINHERIT();
    antlr4::tree::TerminalNode *NOLOGIN_P();
    antlr4::tree::TerminalNode *NOOVERCOMMIT();
    antlr4::tree::TerminalNode *NOSUPERUSER();
    antlr4::tree::TerminalNode *NOTHING();
    antlr4::tree::TerminalNode *NOTIFY();
    antlr4::tree::TerminalNode *NOWAIT();
    antlr4::tree::TerminalNode *NULLS_P();
    antlr4::tree::TerminalNode *OBJECT_P();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *OIDS();
    antlr4::tree::TerminalNode *OPERATOR();
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *ORDERED();
    antlr4::tree::TerminalNode *OTHERS();
    antlr4::tree::TerminalNode *OVER();
    antlr4::tree::TerminalNode *OVERCOMMIT();
    antlr4::tree::TerminalNode *OWNED();
    antlr4::tree::TerminalNode *OWNER();
    antlr4::tree::TerminalNode *PARSER();
    antlr4::tree::TerminalNode *PARTIAL();
    antlr4::tree::TerminalNode *PARTITIONS();
    antlr4::tree::TerminalNode *PASSING();
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *PERCENT();
    antlr4::tree::TerminalNode *PLANS();
    antlr4::tree::TerminalNode *PREPARE();
    antlr4::tree::TerminalNode *PREPARED();
    antlr4::tree::TerminalNode *PRESERVE();
    antlr4::tree::TerminalNode *PRIOR();
    antlr4::tree::TerminalNode *PRIVILEGES();
    antlr4::tree::TerminalNode *PROCEDURAL();
    antlr4::tree::TerminalNode *PROCEDURE();
    antlr4::tree::TerminalNode *PROGRAM();
    antlr4::tree::TerminalNode *PROTOCOL();
    antlr4::tree::TerminalNode *QUEUE();
    antlr4::tree::TerminalNode *QUOTE();
    antlr4::tree::TerminalNode *RANDOMLY();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *READABLE();
    antlr4::tree::TerminalNode *READS();
    antlr4::tree::TerminalNode *REASSIGN();
    antlr4::tree::TerminalNode *RECHECK();
    antlr4::tree::TerminalNode *RECURSIVE();
    antlr4::tree::TerminalNode *REF();
    antlr4::tree::TerminalNode *REINDEX();
    antlr4::tree::TerminalNode *REJECT_P();
    antlr4::tree::TerminalNode *RELATIVE_P();
    antlr4::tree::TerminalNode *RELEASE();
    antlr4::tree::TerminalNode *RENAME();
    antlr4::tree::TerminalNode *REPEATABLE();
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *REPLICA();
    antlr4::tree::TerminalNode *RESET();
    antlr4::tree::TerminalNode *RESOURCE();
    antlr4::tree::TerminalNode *RESTART();
    antlr4::tree::TerminalNode *RESTRICT();
    antlr4::tree::TerminalNode *RETURNS();
    antlr4::tree::TerminalNode *REVOKE();
    antlr4::tree::TerminalNode *ROLE();
    antlr4::tree::TerminalNode *ROLLBACK();
    antlr4::tree::TerminalNode *ROOTPARTITION();
    antlr4::tree::TerminalNode *RULE();
    antlr4::tree::TerminalNode *SAVEPOINT();
    antlr4::tree::TerminalNode *SCHEMA();
    antlr4::tree::TerminalNode *SCROLL();
    antlr4::tree::TerminalNode *SEARCH();
    antlr4::tree::TerminalNode *SECOND_P();
    antlr4::tree::TerminalNode *SECURITY();
    antlr4::tree::TerminalNode *SEGMENT();
    antlr4::tree::TerminalNode *SEQUENCE();
    antlr4::tree::TerminalNode *SERIALIZABLE();
    antlr4::tree::TerminalNode *SESSION();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *SHARE();
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *SIMPLE();
    antlr4::tree::TerminalNode *SPLIT();
    antlr4::tree::TerminalNode *SQL();
    antlr4::tree::TerminalNode *STABLE();
    antlr4::tree::TerminalNode *STANDALONE_P();
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *STATEMENT();
    antlr4::tree::TerminalNode *STATISTICS();
    antlr4::tree::TerminalNode *STDIN();
    antlr4::tree::TerminalNode *STDOUT();
    antlr4::tree::TerminalNode *STORAGE();
    antlr4::tree::TerminalNode *STRICT_P();
    antlr4::tree::TerminalNode *STRIP_P();
    antlr4::tree::TerminalNode *SUBPARTITION();
    antlr4::tree::TerminalNode *SUBPARTITIONS();
    antlr4::tree::TerminalNode *SUPERUSER_P();
    antlr4::tree::TerminalNode *SYSID();
    antlr4::tree::TerminalNode *SYSTEM_P();
    antlr4::tree::TerminalNode *TABLESPACE();
    antlr4::tree::TerminalNode *TEMP();
    antlr4::tree::TerminalNode *TEMPLATE();
    antlr4::tree::TerminalNode *TEMPORARY();
    antlr4::tree::TerminalNode *TEXT_P();
    antlr4::tree::TerminalNode *THRESHOLD();
    antlr4::tree::TerminalNode *TIES();
    antlr4::tree::TerminalNode *TRANSACTION();
    antlr4::tree::TerminalNode *TRIGGER();
    antlr4::tree::TerminalNode *TRUNCATE();
    antlr4::tree::TerminalNode *TRUSTED();
    antlr4::tree::TerminalNode *TYPE_P();
    antlr4::tree::TerminalNode *UNCOMMITTED();
    antlr4::tree::TerminalNode *UNENCRYPTED();
    antlr4::tree::TerminalNode *UNKNOWN();
    antlr4::tree::TerminalNode *UNLISTEN();
    antlr4::tree::TerminalNode *UNTIL();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *VACUUM();
    antlr4::tree::TerminalNode *VALID();
    antlr4::tree::TerminalNode *VALIDATION();
    antlr4::tree::TerminalNode *VALIDATOR();
    antlr4::tree::TerminalNode *VALUE_P();
    antlr4::tree::TerminalNode *VARYING();
    antlr4::tree::TerminalNode *VERSION_P();
    antlr4::tree::TerminalNode *VIEW();
    antlr4::tree::TerminalNode *VOLATILE();
    antlr4::tree::TerminalNode *WEB();
    antlr4::tree::TerminalNode *WHITESPACE_P();
    antlr4::tree::TerminalNode *WITHIN();
    antlr4::tree::TerminalNode *WITHOUT();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *WRITABLE();
    antlr4::tree::TerminalNode *WRITE();
    antlr4::tree::TerminalNode *XML_P();
    antlr4::tree::TerminalNode *YEAR_P();
    antlr4::tree::TerminalNode *YES_P();
    antlr4::tree::TerminalNode *ZONE();
    antlr4::tree::TerminalNode *PUBLIC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unreserved_keywordContext* unreserved_keyword();

  class  Keywords_ok_in_alias_no_asContext : public antlr4::ParserRuleContext {
  public:
    Keywords_ok_in_alias_no_asContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Partition_ident_key_wordContext *partition_ident_key_word();
    antlr4::tree::TerminalNode *TABLESPACE();
    antlr4::tree::TerminalNode *ADD_P();
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *AT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keywords_ok_in_alias_no_asContext* keywords_ok_in_alias_no_as();

  class  Partition_colidContext : public antlr4::ParserRuleContext {
  public:
    Partition_colidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Partition_ident_key_wordContext *partition_ident_key_word();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Partition_colidContext* partition_colid();

  class  Partition_ident_key_wordContext : public antlr4::ParserRuleContext {
  public:
    Partition_ident_key_wordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ABORT_P();
    antlr4::tree::TerminalNode *ABSOLUTE_P();
    antlr4::tree::TerminalNode *ACCESS();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *ACTIVE();
    antlr4::tree::TerminalNode *ADMIN();
    antlr4::tree::TerminalNode *AFTER();
    antlr4::tree::TerminalNode *AGGREGATE();
    antlr4::tree::TerminalNode *ALSO();
    antlr4::tree::TerminalNode *ASSERTION();
    antlr4::tree::TerminalNode *ASSIGNMENT();
    antlr4::tree::TerminalNode *BACKWARD();
    antlr4::tree::TerminalNode *BEFORE();
    antlr4::tree::TerminalNode *BEGIN_P();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *CACHE();
    antlr4::tree::TerminalNode *CALLED();
    antlr4::tree::TerminalNode *CASCADE();
    antlr4::tree::TerminalNode *CASCADED();
    antlr4::tree::TerminalNode *CHAIN();
    antlr4::tree::TerminalNode *CHARACTERISTICS();
    antlr4::tree::TerminalNode *CHECKPOINT();
    antlr4::tree::TerminalNode *CLASS();
    antlr4::tree::TerminalNode *CLOSE();
    antlr4::tree::TerminalNode *CLUSTER();
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *COMMIT();
    antlr4::tree::TerminalNode *COMMITTED();
    antlr4::tree::TerminalNode *CONCURRENCY();
    antlr4::tree::TerminalNode *CONCURRENTLY();
    antlr4::tree::TerminalNode *CONNECTION();
    antlr4::tree::TerminalNode *CONSTRAINTS();
    antlr4::tree::TerminalNode *CONTAINS();
    antlr4::tree::TerminalNode *CONTENT_P();
    antlr4::tree::TerminalNode *CONVERSION_P();
    antlr4::tree::TerminalNode *COPY();
    antlr4::tree::TerminalNode *COST();
    antlr4::tree::TerminalNode *CPU_RATE_LIMIT();
    antlr4::tree::TerminalNode *CPUSET();
    antlr4::tree::TerminalNode *CREATEDB();
    antlr4::tree::TerminalNode *CREATEEXTTABLE();
    antlr4::tree::TerminalNode *CREATEROLE();
    antlr4::tree::TerminalNode *CREATEUSER();
    antlr4::tree::TerminalNode *CSV();
    antlr4::tree::TerminalNode *CURSOR();
    antlr4::tree::TerminalNode *CYCLE();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *DEALLOCATE();
    antlr4::tree::TerminalNode *DECLARE();
    antlr4::tree::TerminalNode *DEFAULTS();
    antlr4::tree::TerminalNode *DEFERRED();
    antlr4::tree::TerminalNode *DEFINER();
    antlr4::tree::TerminalNode *DELETE_P();
    antlr4::tree::TerminalNode *DELIMITER();
    antlr4::tree::TerminalNode *DELIMITERS();
    antlr4::tree::TerminalNode *DISABLE_P();
    antlr4::tree::TerminalNode *DOMAIN_P();
    antlr4::tree::TerminalNode *DOUBLE_P();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *EACH();
    antlr4::tree::TerminalNode *ENABLE_P();
    antlr4::tree::TerminalNode *ENCODING();
    antlr4::tree::TerminalNode *ENCRYPTED();
    antlr4::tree::TerminalNode *ERRORS();
    antlr4::tree::TerminalNode *ENUM_P();
    antlr4::tree::TerminalNode *ESCAPE();
    antlr4::tree::TerminalNode *EVERY();
    antlr4::tree::TerminalNode *EXCHANGE();
    antlr4::tree::TerminalNode *EXCLUDING();
    antlr4::tree::TerminalNode *EXCLUSIVE();
    antlr4::tree::TerminalNode *EXECUTE();
    antlr4::tree::TerminalNode *EXPLAIN();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *FIELDS();
    antlr4::tree::TerminalNode *FILL();
    antlr4::tree::TerminalNode *FIRST_P();
    antlr4::tree::TerminalNode *FORCE();
    antlr4::tree::TerminalNode *FORMAT();
    antlr4::tree::TerminalNode *FORWARD();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *GRANTED();
    antlr4::tree::TerminalNode *HANDLER();
    antlr4::tree::TerminalNode *HASH();
    antlr4::tree::TerminalNode *HEADER_P();
    antlr4::tree::TerminalNode *HOLD();
    antlr4::tree::TerminalNode *HOST();
    antlr4::tree::TerminalNode *IF_P();
    antlr4::tree::TerminalNode *IMMEDIATE();
    antlr4::tree::TerminalNode *IMMUTABLE();
    antlr4::tree::TerminalNode *IMPLICIT_P();
    antlr4::tree::TerminalNode *INCLUDING();
    antlr4::tree::TerminalNode *INCLUSIVE();
    antlr4::tree::TerminalNode *INCREMENT();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *INDEXES();
    antlr4::tree::TerminalNode *INHERIT();
    antlr4::tree::TerminalNode *INHERITS();
    antlr4::tree::TerminalNode *INPUT_P();
    antlr4::tree::TerminalNode *INSENSITIVE();
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *INSTEAD();
    antlr4::tree::TerminalNode *INVOKER();
    antlr4::tree::TerminalNode *ISOLATION();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *LANGUAGE();
    antlr4::tree::TerminalNode *LARGE_P();
    antlr4::tree::TerminalNode *LAST_P();
    antlr4::tree::TerminalNode *LEVEL();
    antlr4::tree::TerminalNode *LIST();
    antlr4::tree::TerminalNode *LISTEN();
    antlr4::tree::TerminalNode *LOAD();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *LOCATION();
    antlr4::tree::TerminalNode *LOCK_P();
    antlr4::tree::TerminalNode *LOGIN_P();
    antlr4::tree::TerminalNode *MASTER();
    antlr4::tree::TerminalNode *MATCH();
    antlr4::tree::TerminalNode *MAXVALUE();
    antlr4::tree::TerminalNode *MEMORY_LIMIT();
    antlr4::tree::TerminalNode *MEMORY_SHARED_QUOTA();
    antlr4::tree::TerminalNode *MEMORY_SPILL_RATIO();
    antlr4::tree::TerminalNode *MERGE();
    antlr4::tree::TerminalNode *MINVALUE();
    antlr4::tree::TerminalNode *MISSING();
    antlr4::tree::TerminalNode *MODE();
    antlr4::tree::TerminalNode *MODIFIES();
    antlr4::tree::TerminalNode *MODIFY();
    antlr4::tree::TerminalNode *MOVE();
    antlr4::tree::TerminalNode *NAME_P();
    antlr4::tree::TerminalNode *NAMES();
    antlr4::tree::TerminalNode *NEXT();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *NOCREATEDB();
    antlr4::tree::TerminalNode *NOCREATEROLE();
    antlr4::tree::TerminalNode *NOCREATEUSER();
    antlr4::tree::TerminalNode *NOINHERIT();
    antlr4::tree::TerminalNode *NOLOGIN_P();
    antlr4::tree::TerminalNode *NOOVERCOMMIT();
    antlr4::tree::TerminalNode *NOSUPERUSER();
    antlr4::tree::TerminalNode *NOTHING();
    antlr4::tree::TerminalNode *NOTIFY();
    antlr4::tree::TerminalNode *NOWAIT();
    antlr4::tree::TerminalNode *NULLS_P();
    antlr4::tree::TerminalNode *OBJECT_P();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *OIDS();
    antlr4::tree::TerminalNode *OPERATOR();
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *OTHERS();
    antlr4::tree::TerminalNode *OVERCOMMIT();
    antlr4::tree::TerminalNode *OWNED();
    antlr4::tree::TerminalNode *OWNER();
    antlr4::tree::TerminalNode *PARTIAL();
    antlr4::tree::TerminalNode *PARTITIONS();
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *PERCENT();
    antlr4::tree::TerminalNode *PREPARE();
    antlr4::tree::TerminalNode *PREPARED();
    antlr4::tree::TerminalNode *PRESERVE();
    antlr4::tree::TerminalNode *PRIOR();
    antlr4::tree::TerminalNode *PRIVILEGES();
    antlr4::tree::TerminalNode *PROCEDURAL();
    antlr4::tree::TerminalNode *PROCEDURE();
    antlr4::tree::TerminalNode *PROTOCOL();
    antlr4::tree::TerminalNode *QUEUE();
    antlr4::tree::TerminalNode *QUOTE();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *REASSIGN();
    antlr4::tree::TerminalNode *RECHECK();
    antlr4::tree::TerminalNode *REINDEX();
    antlr4::tree::TerminalNode *RELATIVE_P();
    antlr4::tree::TerminalNode *RELEASE();
    antlr4::tree::TerminalNode *RENAME();
    antlr4::tree::TerminalNode *REPEATABLE();
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *RESET();
    antlr4::tree::TerminalNode *RESOURCE();
    antlr4::tree::TerminalNode *RESTART();
    antlr4::tree::TerminalNode *RESTRICT();
    antlr4::tree::TerminalNode *RETURNS();
    antlr4::tree::TerminalNode *REVOKE();
    antlr4::tree::TerminalNode *ROLE();
    antlr4::tree::TerminalNode *ROLLBACK();
    antlr4::tree::TerminalNode *RULE();
    antlr4::tree::TerminalNode *SAVEPOINT();
    antlr4::tree::TerminalNode *SCHEMA();
    antlr4::tree::TerminalNode *SCROLL();
    antlr4::tree::TerminalNode *SEARCH();
    antlr4::tree::TerminalNode *SECURITY();
    antlr4::tree::TerminalNode *SEGMENT();
    antlr4::tree::TerminalNode *SEQUENCE();
    antlr4::tree::TerminalNode *SERIALIZABLE();
    antlr4::tree::TerminalNode *SESSION();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *SHARE();
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *SIMPLE();
    antlr4::tree::TerminalNode *SPLIT();
    antlr4::tree::TerminalNode *SQL();
    antlr4::tree::TerminalNode *STABLE();
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *STATEMENT();
    antlr4::tree::TerminalNode *STATISTICS();
    antlr4::tree::TerminalNode *STDIN();
    antlr4::tree::TerminalNode *STDOUT();
    antlr4::tree::TerminalNode *STORAGE();
    antlr4::tree::TerminalNode *STRICT_P();
    antlr4::tree::TerminalNode *SUBPARTITION();
    antlr4::tree::TerminalNode *SUBPARTITIONS();
    antlr4::tree::TerminalNode *SUPERUSER_P();
    antlr4::tree::TerminalNode *SYSID();
    antlr4::tree::TerminalNode *SYSTEM_P();
    antlr4::tree::TerminalNode *TEMP();
    antlr4::tree::TerminalNode *TEMPLATE();
    antlr4::tree::TerminalNode *TEMPORARY();
    antlr4::tree::TerminalNode *THRESHOLD();
    antlr4::tree::TerminalNode *TIES();
    antlr4::tree::TerminalNode *TRANSACTION();
    antlr4::tree::TerminalNode *TRIGGER();
    antlr4::tree::TerminalNode *TRUNCATE();
    antlr4::tree::TerminalNode *TRUSTED();
    antlr4::tree::TerminalNode *TYPE_P();
    antlr4::tree::TerminalNode *UNCOMMITTED();
    antlr4::tree::TerminalNode *UNENCRYPTED();
    antlr4::tree::TerminalNode *UNKNOWN();
    antlr4::tree::TerminalNode *UNLISTEN();
    antlr4::tree::TerminalNode *UNTIL();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *VACUUM();
    antlr4::tree::TerminalNode *VALID();
    antlr4::tree::TerminalNode *VALIDATOR();
    antlr4::tree::TerminalNode *VERSION_P();
    antlr4::tree::TerminalNode *VIEW();
    antlr4::tree::TerminalNode *VALUE_P();
    antlr4::tree::TerminalNode *VOLATILE();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *WRITE();
    antlr4::tree::TerminalNode *ZONE();
    antlr4::tree::TerminalNode *BIGINT();
    antlr4::tree::TerminalNode *BIT();
    antlr4::tree::TerminalNode *BOOLEAN_P();
    antlr4::tree::TerminalNode *COALESCE();
    antlr4::tree::TerminalNode *CUBE();
    antlr4::tree::TerminalNode *DEC();
    antlr4::tree::TerminalNode *DECIMAL_P();
    antlr4::tree::TerminalNode *EXISTS();
    antlr4::tree::TerminalNode *EXTRACT();
    antlr4::tree::TerminalNode *FLOAT_P();
    antlr4::tree::TerminalNode *GREATEST();
    antlr4::tree::TerminalNode *GROUP_ID();
    antlr4::tree::TerminalNode *GROUPING();
    antlr4::tree::TerminalNode *INOUT();
    antlr4::tree::TerminalNode *INT_P();
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *INTERVAL();
    antlr4::tree::TerminalNode *LEAST();
    antlr4::tree::TerminalNode *NATIONAL();
    antlr4::tree::TerminalNode *NCHAR();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *NULLIF();
    antlr4::tree::TerminalNode *NUMERIC();
    antlr4::tree::TerminalNode *OUT_P();
    antlr4::tree::TerminalNode *OVERLAY();
    antlr4::tree::TerminalNode *POSITION();
    antlr4::tree::TerminalNode *PRECISION();
    antlr4::tree::TerminalNode *REAL();
    antlr4::tree::TerminalNode *ROLLUP();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *SETOF();
    antlr4::tree::TerminalNode *SETS();
    antlr4::tree::TerminalNode *SMALLINT();
    antlr4::tree::TerminalNode *SUBSTRING();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *TIMESTAMP();
    antlr4::tree::TerminalNode *TREAT();
    antlr4::tree::TerminalNode *TRIM();
    antlr4::tree::TerminalNode *VALUES();
    antlr4::tree::TerminalNode *VARCHAR();
    antlr4::tree::TerminalNode *AUTHORIZATION();
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *FREEZE();
    antlr4::tree::TerminalNode *LOG_P();
    antlr4::tree::TerminalNode *OUTER_P();
    antlr4::tree::TerminalNode *VERBOSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Partition_ident_key_wordContext* partition_ident_key_word();

  class  Col_name_keywordContext : public antlr4::ParserRuleContext {
  public:
    Col_name_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIGINT();
    antlr4::tree::TerminalNode *BIT();
    antlr4::tree::TerminalNode *BOOLEAN_P();
    antlr4::tree::TerminalNode *CHAR_P();
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *COALESCE();
    antlr4::tree::TerminalNode *CUBE();
    antlr4::tree::TerminalNode *DEC();
    antlr4::tree::TerminalNode *DECIMAL_P();
    antlr4::tree::TerminalNode *EXISTS();
    antlr4::tree::TerminalNode *EXTRACT();
    antlr4::tree::TerminalNode *FLOAT_P();
    antlr4::tree::TerminalNode *GREATEST();
    antlr4::tree::TerminalNode *GROUPING();
    antlr4::tree::TerminalNode *GROUP_ID();
    antlr4::tree::TerminalNode *INOUT();
    antlr4::tree::TerminalNode *INT_P();
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *INTERVAL();
    antlr4::tree::TerminalNode *LEAST();
    antlr4::tree::TerminalNode *MEDIAN();
    antlr4::tree::TerminalNode *NATIONAL();
    antlr4::tree::TerminalNode *NCHAR();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *NULLIF();
    antlr4::tree::TerminalNode *NUMERIC();
    antlr4::tree::TerminalNode *OUT_P();
    antlr4::tree::TerminalNode *OVERLAY();
    antlr4::tree::TerminalNode *PERCENTILE_CONT();
    antlr4::tree::TerminalNode *PERCENTILE_DISC();
    antlr4::tree::TerminalNode *POSITION();
    antlr4::tree::TerminalNode *PRECISION();
    antlr4::tree::TerminalNode *REAL();
    antlr4::tree::TerminalNode *ROLLUP();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *SETOF();
    antlr4::tree::TerminalNode *SETS();
    antlr4::tree::TerminalNode *SMALLINT();
    antlr4::tree::TerminalNode *SUBSTRING();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *TIMESTAMP();
    antlr4::tree::TerminalNode *TREAT();
    antlr4::tree::TerminalNode *TRIM();
    antlr4::tree::TerminalNode *VALUES();
    antlr4::tree::TerminalNode *VARCHAR();
    antlr4::tree::TerminalNode *XMLATTRIBUTES();
    antlr4::tree::TerminalNode *XMLCONCAT();
    antlr4::tree::TerminalNode *XMLELEMENT();
    antlr4::tree::TerminalNode *XMLEXISTS();
    antlr4::tree::TerminalNode *XMLFOREST();
    antlr4::tree::TerminalNode *XMLPARSE();
    antlr4::tree::TerminalNode *XMLPI();
    antlr4::tree::TerminalNode *XMLROOT();
    antlr4::tree::TerminalNode *XMLSERIALIZE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Col_name_keywordContext* col_name_keyword();

  class  Type_func_name_keywordContext : public antlr4::ParserRuleContext {
  public:
    Type_func_name_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AUTHORIZATION();
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *CROSS();
    antlr4::tree::TerminalNode *CURRENT_SCHEMA();
    antlr4::tree::TerminalNode *FREEZE();
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *ILIKE();
    antlr4::tree::TerminalNode *INNER_P();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *ISNULL();
    antlr4::tree::TerminalNode *JOIN();
    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *LOG_P();
    antlr4::tree::TerminalNode *NATURAL();
    antlr4::tree::TerminalNode *NOTNULL();
    antlr4::tree::TerminalNode *OUTER_P();
    antlr4::tree::TerminalNode *OVERLAPS();
    antlr4::tree::TerminalNode *RIGHT();
    antlr4::tree::TerminalNode *SIMILAR();
    antlr4::tree::TerminalNode *VERBOSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_func_name_keywordContext* type_func_name_keyword();

  class  Reserved_keywordContext : public antlr4::ParserRuleContext {
  public:
    Reserved_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *ANALYSE();
    antlr4::tree::TerminalNode *ANALYZE();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *ANY();
    antlr4::tree::TerminalNode *ARRAY();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *ASYMMETRIC();
    antlr4::tree::TerminalNode *BETWEEN();
    antlr4::tree::TerminalNode *BOTH();
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *CAST();
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *COLLATE();
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *CONSTRAINT();
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *CURRENT_CATALOG();
    antlr4::tree::TerminalNode *CURRENT_DATE();
    antlr4::tree::TerminalNode *CURRENT_ROLE();
    antlr4::tree::TerminalNode *CURRENT_TIME();
    antlr4::tree::TerminalNode *CURRENT_TIMESTAMP();
    antlr4::tree::TerminalNode *CURRENT_USER();
    antlr4::tree::TerminalNode *DECODE();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *DEFERRABLE();
    antlr4::tree::TerminalNode *DESC();
    antlr4::tree::TerminalNode *DISTINCT();
    antlr4::tree::TerminalNode *DISTRIBUTED();
    antlr4::tree::TerminalNode *DO();
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *END_P();
    antlr4::tree::TerminalNode *EXCEPT();
    antlr4::tree::TerminalNode *EXCLUDE();
    antlr4::tree::TerminalNode *FALSE_P();
    antlr4::tree::TerminalNode *FETCH();
    antlr4::tree::TerminalNode *FILTER();
    antlr4::tree::TerminalNode *FOLLOWING();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *FOREIGN();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *GRANT();
    antlr4::tree::TerminalNode *GROUP_P();
    antlr4::tree::TerminalNode *HAVING();
    antlr4::tree::TerminalNode *IN_P();
    antlr4::tree::TerminalNode *INITIALLY();
    antlr4::tree::TerminalNode *INTERSECT();
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *LEADING();
    antlr4::tree::TerminalNode *LIMIT();
    antlr4::tree::TerminalNode *LOCALTIME();
    antlr4::tree::TerminalNode *LOCALTIMESTAMP();
    antlr4::tree::TerminalNode *NEW();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *NULL_P();
    antlr4::tree::TerminalNode *OFF();
    antlr4::tree::TerminalNode *OFFSET();
    antlr4::tree::TerminalNode *OLD();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *ONLY();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *PLACING();
    antlr4::tree::TerminalNode *PRECEDING();
    antlr4::tree::TerminalNode *PRIMARY();
    antlr4::tree::TerminalNode *RANGE();
    antlr4::tree::TerminalNode *REFERENCES();
    antlr4::tree::TerminalNode *RETURNING();
    antlr4::tree::TerminalNode *ROWS();
    antlr4::tree::TerminalNode *SCATTER();
    antlr4::tree::TerminalNode *SELECT();
    antlr4::tree::TerminalNode *SESSION_USER();
    antlr4::tree::TerminalNode *SOME();
    antlr4::tree::TerminalNode *SYMMETRIC();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *THEN();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *TRAILING();
    antlr4::tree::TerminalNode *TRUE_P();
    antlr4::tree::TerminalNode *UNBOUNDED();
    antlr4::tree::TerminalNode *UNION();
    antlr4::tree::TerminalNode *UNIQUE();
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *VARIADIC();
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *WHERE();
    antlr4::tree::TerminalNode *WINDOW();
    antlr4::tree::TerminalNode *WITH();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Reserved_keywordContext* reserved_keyword();

  class  Special_rule_relationContext : public antlr4::ParserRuleContext {
  public:
    Special_rule_relationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OLD();
    antlr4::tree::TerminalNode *NEW();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Special_rule_relationContext* special_rule_relation();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool var_nameSempred(Var_nameContext *_localctx, size_t predicateIndex);
  bool tab_part_val_no_paranSempred(Tab_part_val_no_paranContext *_localctx, size_t predicateIndex);
  bool values_clauseSempred(Values_clauseContext *_localctx, size_t predicateIndex);
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


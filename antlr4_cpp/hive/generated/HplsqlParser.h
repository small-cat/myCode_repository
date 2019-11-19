
// Generated from /home/jona/myGit/myCode_repository/antlr4_cpp/hive/Hplsql.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"


#include <strings.h>




class  HplsqlParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T_ACTION = 6, T_ADD2 = 7, 
    T_ALL = 8, T_ALLOCATE = 9, T_ALTER = 10, T_AND = 11, T_ANSI_NULLS = 12, 
    T_ANSI_PADDING = 13, T_AS = 14, T_ASC = 15, T_ASSOCIATE = 16, T_AT = 17, 
    T_AUTO_INCREMENT = 18, T_AVG = 19, T_BATCHSIZE = 20, T_BEGIN = 21, T_BETWEEN = 22, 
    T_BIGINT = 23, T_BINARY_DOUBLE = 24, T_BINARY_FLOAT = 25, T_BINARY_INTEGER = 26, 
    T_BIT = 27, T_BODY = 28, T_BREAK = 29, T_BY = 30, T_BYTE = 31, T_CALL = 32, 
    T_CALLER = 33, T_CASCADE = 34, T_CASE = 35, T_CASESPECIFIC = 36, T_CAST = 37, 
    T_CHAR = 38, T_CHARACTER = 39, T_CHARSET = 40, T_CLIENT = 41, T_CLOSE = 42, 
    T_CLUSTERED = 43, T_CMP = 44, T_COLLECT = 45, T_COLLECTION = 46, T_COLUMN = 47, 
    T_COMMENT = 48, T_CONSTANT = 49, T_COMMIT = 50, T_COMPRESS = 51, T_CONCAT = 52, 
    T_CONDITION = 53, T_CONSTRAINT = 54, T_CONTINUE = 55, T_COPY = 56, T_COUNT = 57, 
    T_COUNT_BIG = 58, T_CREATE = 59, T_CREATION = 60, T_CREATOR = 61, T_CS = 62, 
    T_CURRENT = 63, T_CURRENT_SCHEMA = 64, T_CURSOR = 65, T_DATABASE = 66, 
    T_DATA = 67, T_DATE = 68, T_DATETIME = 69, T_DAY = 70, T_DAYS = 71, 
    T_DEC = 72, T_DECIMAL = 73, T_DECLARE = 74, T_DEFAULT = 75, T_DEFERRED = 76, 
    T_DEFINED = 77, T_DEFINER = 78, T_DEFINITION = 79, T_DELETE = 80, T_DELIMITED = 81, 
    T_DELIMITER = 82, T_DESC = 83, T_DESCRIBE = 84, T_DIAGNOSTICS = 85, 
    T_DIR = 86, T_DIRECTORY = 87, T_DISTINCT = 88, T_DISTRIBUTE = 89, T_DO = 90, 
    T_DOUBLE = 91, T_DROP = 92, T_DYNAMIC = 93, T_ELSE = 94, T_ELSEIF = 95, 
    T_ELSIF = 96, T_ENABLE = 97, T_END = 98, T_ENGINE = 99, T_ESCAPED = 100, 
    T_EXCEPT = 101, T_EXEC = 102, T_EXECUTE = 103, T_EXCEPTION = 104, T_EXCLUSIVE = 105, 
    T_EXISTS = 106, T_EXIT = 107, T_FALLBACK = 108, T_FALSE = 109, T_FETCH = 110, 
    T_FIELDS = 111, T_FILE = 112, T_FILES = 113, T_FLOAT = 114, T_FOR = 115, 
    T_FOREIGN = 116, T_FORMAT = 117, T_FOUND = 118, T_FROM = 119, T_FULL = 120, 
    T_FUNCTION = 121, T_GET = 122, T_GLOBAL = 123, T_GO = 124, T_GRANT = 125, 
    T_GROUP = 126, T_HANDLER = 127, T_HASH = 128, T_HAVING = 129, T_HDFS = 130, 
    T_HIVE = 131, T_HOST = 132, T_IDENTITY = 133, T_IF = 134, T_IGNORE = 135, 
    T_IMMEDIATE = 136, T_IN = 137, T_INCLUDE = 138, T_INDEX = 139, T_INITRANS = 140, 
    T_INNER = 141, T_INOUT = 142, T_INSERT = 143, T_INT = 144, T_INT2 = 145, 
    T_INT4 = 146, T_INT8 = 147, T_INTEGER = 148, T_INTERSECT = 149, T_INTERVAL = 150, 
    T_INTO = 151, T_INVOKER = 152, T_IS = 153, T_ISOPEN = 154, T_ITEMS = 155, 
    T_JOIN = 156, T_KEEP = 157, T_KEY = 158, T_KEYS = 159, T_LANGUAGE = 160, 
    T_LEAVE = 161, T_LEFT = 162, T_LIKE = 163, T_LIMIT = 164, T_LINES = 165, 
    T_LOCAL = 166, T_LOCATION = 167, T_LOCATOR = 168, T_LOCATORS = 169, 
    T_LOCKS = 170, T_LOG = 171, T_LOGGED = 172, T_LOGGING = 173, T_LOOP = 174, 
    T_MAP = 175, T_MATCHED = 176, T_MAX = 177, T_MAXTRANS = 178, T_MERGE = 179, 
    T_MESSAGE_TEXT = 180, T_MICROSECOND = 181, T_MICROSECONDS = 182, T_MIN = 183, 
    T_MULTISET = 184, T_NCHAR = 185, T_NEW = 186, T_NVARCHAR = 187, T_NO = 188, 
    T_NOCOUNT = 189, T_NOCOMPRESS = 190, T_NOLOGGING = 191, T_NONE = 192, 
    T_NOT = 193, T_NOTFOUND = 194, T_NULL = 195, T_NUMERIC = 196, T_NUMBER = 197, 
    T_OBJECT = 198, T_OFF = 199, T_ON = 200, T_ONLY = 201, T_OPEN = 202, 
    T_OR = 203, T_ORDER = 204, T_OUT = 205, T_OUTER = 206, T_OVER = 207, 
    T_OVERWRITE = 208, T_OWNER = 209, T_PACKAGE = 210, T_PARTITION = 211, 
    T_PCTFREE = 212, T_PCTUSED = 213, T_PLS_INTEGER = 214, T_PRECISION = 215, 
    T_PRESERVE = 216, T_PRIMARY = 217, T_PRINT = 218, T_PROC = 219, T_PROCEDURE = 220, 
    T_QUALIFY = 221, T_QUERY_BAND = 222, T_QUIT = 223, T_QUOTED_IDENTIFIER = 224, 
    T_RAISE = 225, T_REAL = 226, T_REFERENCES = 227, T_REGEXP = 228, T_REPLACE = 229, 
    T_RESIGNAL = 230, T_RESTRICT = 231, T_RESULT = 232, T_RESULT_SET_LOCATOR = 233, 
    T_RETURN = 234, T_RETURNS = 235, T_REVERSE = 236, T_RIGHT = 237, T_RLIKE = 238, 
    T_ROLE = 239, T_ROLLBACK = 240, T_ROW = 241, T_ROWS = 242, T_ROWTYPE = 243, 
    T_ROW_COUNT = 244, T_RR = 245, T_RS = 246, T_PWD = 247, T_TRIM = 248, 
    T_SCHEMA = 249, T_SECOND = 250, T_SECONDS = 251, T_SECURITY = 252, T_SEGMENT = 253, 
    T_SEL = 254, T_SELECT = 255, T_SET = 256, T_SESSION = 257, T_SESSIONS = 258, 
    T_SETS = 259, T_SHARE = 260, T_SIGNAL = 261, T_SIMPLE_DOUBLE = 262, 
    T_SIMPLE_FLOAT = 263, T_SIMPLE_INTEGER = 264, T_SMALLDATETIME = 265, 
    T_SMALLINT = 266, T_SQL = 267, T_SQLEXCEPTION = 268, T_SQLINSERT = 269, 
    T_SQLSTATE = 270, T_SQLWARNING = 271, T_STATS = 272, T_STATISTICS = 273, 
    T_STEP = 274, T_STORAGE = 275, T_STORED = 276, T_STRING = 277, T_SUBDIR = 278, 
    T_SUBSTRING = 279, T_SUM = 280, T_SUMMARY = 281, T_SYS_REFCURSOR = 282, 
    T_TABLE = 283, T_TABLESPACE = 284, T_TEMPORARY = 285, T_TERMINATED = 286, 
    T_TEXTIMAGE_ON = 287, T_THEN = 288, T_TIMESTAMP = 289, T_TINYINT = 290, 
    T_TITLE = 291, T_TO = 292, T_TOP = 293, T_TRANSACTION = 294, T_TRUE = 295, 
    T_TRUNCATE = 296, T_TYPE = 297, T_UNION = 298, T_UNIQUE = 299, T_UPDATE = 300, 
    T_UR = 301, T_USE = 302, T_USING = 303, T_VALUE = 304, T_VALUES = 305, 
    T_VAR = 306, T_VARCHAR = 307, T_VARCHAR2 = 308, T_VARYING = 309, T_VOLATILE = 310, 
    T_WHEN = 311, T_WHERE = 312, T_WHILE = 313, T_WITH = 314, T_WITHOUT = 315, 
    T_WORK = 316, T_XACT_ABORT = 317, T_XML = 318, T_YES = 319, T_ACTIVITY_COUNT = 320, 
    T_CUME_DIST = 321, T_CURRENT_DATE = 322, T_CURRENT_TIMESTAMP = 323, 
    T_CURRENT_USER = 324, T_DENSE_RANK = 325, T_FIRST_VALUE = 326, T_LAG = 327, 
    T_LAST_VALUE = 328, T_LEAD = 329, T_MAX_PART_STRING = 330, T_MIN_PART_STRING = 331, 
    T_MAX_PART_INT = 332, T_MIN_PART_INT = 333, T_MAX_PART_DATE = 334, T_MIN_PART_DATE = 335, 
    T_PART_COUNT = 336, T_PART_LOC = 337, T_RANK = 338, T_ROW_NUMBER = 339, 
    T_STDEV = 340, T_SYSDATE = 341, T_VARIANCE = 342, T_USER = 343, T_ADD = 344, 
    T_COLON = 345, T_COMMA = 346, T_PIPE = 347, T_DIV = 348, T_DOT2 = 349, 
    T_EQUAL = 350, T_EQUAL2 = 351, T_NOTEQUAL = 352, T_NOTEQUAL2 = 353, 
    T_GREATER = 354, T_GREATEREQUAL = 355, T_LESS = 356, T_LESSEQUAL = 357, 
    T_MUL = 358, T_OPEN_B = 359, T_OPEN_P = 360, T_OPEN_SB = 361, T_CLOSE_B = 362, 
    T_CLOSE_P = 363, T_CLOSE_SB = 364, T_SEMICOLON = 365, T_SUB = 366, L_ID = 367, 
    L_S_STRING = 368, L_D_STRING = 369, L_INT = 370, L_DEC = 371, L_WS = 372, 
    L_M_COMMENT = 373, L_S_COMMENT = 374, L_FILE = 375, L_LABEL = 376
  };

  enum {
    RuleProgram = 0, RuleBlock = 1, RuleBegin_end_block = 2, RuleSingle_block_stmt = 3, 
    RuleBlock_end = 4, RuleProc_block = 5, RuleStmt = 6, RuleSemicolon_stmt = 7, 
    RuleException_block = 8, RuleException_block_item = 9, RuleNull_stmt = 10, 
    RuleExpr_stmt = 11, RuleAssignment_stmt = 12, RuleAssignment_stmt_item = 13, 
    RuleAssignment_stmt_single_item = 14, RuleAssignment_stmt_multiple_item = 15, 
    RuleAssignment_stmt_select_item = 16, RuleAllocate_cursor_stmt = 17, 
    RuleAssociate_locator_stmt = 18, RuleBegin_transaction_stmt = 19, RuleBreak_stmt = 20, 
    RuleCall_stmt = 21, RuleDeclare_stmt = 22, RuleDeclare_block = 23, RuleDeclare_block_inplace = 24, 
    RuleDeclare_stmt_item = 25, RuleDeclare_var_item = 26, RuleDeclare_condition_item = 27, 
    RuleDeclare_cursor_item = 28, RuleCursor_with_return = 29, RuleCursor_without_return = 30, 
    RuleDeclare_handler_item = 31, RuleDeclare_temporary_table_item = 32, 
    RuleCreate_table_stmt = 33, RuleCreate_local_temp_table_stmt = 34, RuleCreate_table_definition = 35, 
    RuleCreate_table_columns = 36, RuleCreate_table_columns_item = 37, RuleColumn_name = 38, 
    RuleCreate_table_column_inline_cons = 39, RuleCreate_table_column_cons = 40, 
    RuleCreate_table_fk_action = 41, RuleCreate_table_preoptions = 42, RuleCreate_table_preoptions_item = 43, 
    RuleCreate_table_preoptions_td_item = 44, RuleCreate_table_options = 45, 
    RuleCreate_table_options_item = 46, RuleCreate_table_options_ora_item = 47, 
    RuleCreate_table_options_db2_item = 48, RuleCreate_table_options_td_item = 49, 
    RuleCreate_table_options_hive_item = 50, RuleCreate_table_hive_row_format = 51, 
    RuleCreate_table_hive_row_format_fields = 52, RuleCreate_table_options_mssql_item = 53, 
    RuleCreate_table_options_mysql_item = 54, RuleAlter_table_stmt = 55, 
    RuleAlter_table_item = 56, RuleAlter_table_add_constraint = 57, RuleAlter_table_add_constraint_item = 58, 
    RuleDtype = 59, RuleDtype_len = 60, RuleDtype_attr = 61, RuleDtype_default = 62, 
    RuleCreate_database_stmt = 63, RuleCreate_database_option = 64, RuleCreate_function_stmt = 65, 
    RuleCreate_function_return = 66, RuleCreate_package_stmt = 67, RulePackage_spec = 68, 
    RulePackage_spec_item = 69, RuleCreate_package_body_stmt = 70, RulePackage_body = 71, 
    RulePackage_body_item = 72, RuleCreate_procedure_stmt = 73, RuleCreate_routine_params = 74, 
    RuleCreate_routine_param_item = 75, RuleCreate_routine_options = 76, 
    RuleCreate_routine_option = 77, RuleDrop_stmt = 78, RuleEnd_transaction_stmt = 79, 
    RuleExec_stmt = 80, RuleIf_stmt = 81, RuleIf_plsql_stmt = 82, RuleIf_tsql_stmt = 83, 
    RuleIf_bteq_stmt = 84, RuleElseif_block = 85, RuleElse_block = 86, RuleInclude_stmt = 87, 
    RuleInsert_stmt = 88, RuleInsert_stmt_cols = 89, RuleInsert_stmt_rows = 90, 
    RuleInsert_stmt_row = 91, RuleInsert_directory_stmt = 92, RuleExit_stmt = 93, 
    RuleGet_diag_stmt = 94, RuleGet_diag_stmt_item = 95, RuleGet_diag_stmt_exception_item = 96, 
    RuleGet_diag_stmt_rowcount_item = 97, RuleGrant_stmt = 98, RuleGrant_stmt_item = 99, 
    RuleLeave_stmt = 100, RuleMap_object_stmt = 101, RuleOpen_stmt = 102, 
    RuleFetch_stmt = 103, RuleCollect_stats_stmt = 104, RuleCollect_stats_clause = 105, 
    RuleClose_stmt = 106, RuleCmp_stmt = 107, RuleCmp_source = 108, RuleCopy_from_local_stmt = 109, 
    RuleCopy_stmt = 110, RuleCopy_source = 111, RuleCopy_target = 112, RuleCopy_option = 113, 
    RuleCopy_file_option = 114, RuleCommit_stmt = 115, RuleCreate_index_stmt = 116, 
    RuleCreate_index_col = 117, RuleIndex_storage_clause = 118, RuleIndex_mssql_storage_clause = 119, 
    RulePrint_stmt = 120, RuleQuit_stmt = 121, RuleRaise_stmt = 122, RuleResignal_stmt = 123, 
    RuleReturn_stmt = 124, RuleRollback_stmt = 125, RuleSet_session_option = 126, 
    RuleSet_current_schema_option = 127, RuleSet_mssql_session_option = 128, 
    RuleSet_teradata_session_option = 129, RuleSignal_stmt = 130, RuleSummary_stmt = 131, 
    RuleTruncate_stmt = 132, RuleUse_stmt = 133, RuleValues_into_stmt = 134, 
    RuleWhile_stmt = 135, RuleFor_cursor_stmt = 136, RuleFor_range_stmt = 137, 
    RuleLabel = 138, RuleUsing_clause = 139, RuleSelect_stmt = 140, RuleCte_select_stmt = 141, 
    RuleCte_select_stmt_item = 142, RuleCte_select_cols = 143, RuleFullselect_stmt = 144, 
    RuleFullselect_stmt_item = 145, RuleFullselect_set_clause = 146, RuleSubselect_stmt = 147, 
    RuleSelect_list = 148, RuleSelect_list_set = 149, RuleSelect_list_limit = 150, 
    RuleSelect_list_item = 151, RuleSelect_list_alias = 152, RuleSelect_list_asterisk = 153, 
    RuleInto_clause = 154, RuleFrom_clause = 155, RuleFrom_table_clause = 156, 
    RuleFrom_table_name_clause = 157, RuleFrom_subselect_clause = 158, RuleFrom_join_clause = 159, 
    RuleFrom_join_type_clause = 160, RuleFrom_table_values_clause = 161, 
    RuleFrom_table_values_row = 162, RuleFrom_alias_clause = 163, RuleTable_name = 164, 
    RuleWhere_clause = 165, RuleGroup_by_clause = 166, RuleHaving_clause = 167, 
    RuleQualify_clause = 168, RuleOrder_by_clause = 169, RuleSelect_options = 170, 
    RuleSelect_options_item = 171, RuleUpdate_stmt = 172, RuleUpdate_assignment = 173, 
    RuleUpdate_table = 174, RuleUpdate_upsert = 175, RuleMerge_stmt = 176, 
    RuleMerge_table = 177, RuleMerge_condition = 178, RuleMerge_action = 179, 
    RuleDelete_stmt = 180, RuleDelete_alias = 181, RuleDescribe_stmt = 182, 
    RuleBool_expr = 183, RuleBool_expr_atom = 184, RuleBool_expr_unary = 185, 
    RuleBool_expr_single_in = 186, RuleBool_expr_multi_in = 187, RuleBool_expr_binary = 188, 
    RuleBool_expr_logical_operator = 189, RuleBool_expr_binary_operator = 190, 
    RuleExpr = 191, RuleExpr_atom = 192, RuleExpr_interval = 193, RuleInterval_item = 194, 
    RuleExpr_concat = 195, RuleExpr_concat_item = 196, RuleExpr_case = 197, 
    RuleExpr_case_simple = 198, RuleExpr_case_searched = 199, RuleExpr_cursor_attribute = 200, 
    RuleExpr_agg_window_func = 201, RuleExpr_func_all_distinct = 202, RuleExpr_func_over_clause = 203, 
    RuleExpr_func_partition_by_clause = 204, RuleExpr_spec_func = 205, RuleExpr_func = 206, 
    RuleExpr_func_params = 207, RuleFunc_param = 208, RuleExpr_select = 209, 
    RuleExpr_file = 210, RuleHive = 211, RuleHive_item = 212, RuleHost = 213, 
    RuleHost_cmd = 214, RuleHost_stmt = 215, RuleFile_name = 216, RuleDate_literal = 217, 
    RuleTimestamp_literal = 218, RuleIdent = 219, RuleString = 220, RuleInt_number = 221, 
    RuleDec_number = 222, RuleBool_literal = 223, RuleNull_const = 224, 
    RuleNon_reserved_words = 225
  };

  HplsqlParser(antlr4::TokenStream *input);
  ~HplsqlParser();

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
  class Null_stmtContext;
  class Expr_stmtContext;
  class Assignment_stmtContext;
  class Assignment_stmt_itemContext;
  class Assignment_stmt_single_itemContext;
  class Assignment_stmt_multiple_itemContext;
  class Assignment_stmt_select_itemContext;
  class Allocate_cursor_stmtContext;
  class Associate_locator_stmtContext;
  class Begin_transaction_stmtContext;
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
  class Create_table_column_inline_consContext;
  class Create_table_column_consContext;
  class Create_table_fk_actionContext;
  class Create_table_preoptionsContext;
  class Create_table_preoptions_itemContext;
  class Create_table_preoptions_td_itemContext;
  class Create_table_optionsContext;
  class Create_table_options_itemContext;
  class Create_table_options_ora_itemContext;
  class Create_table_options_db2_itemContext;
  class Create_table_options_td_itemContext;
  class Create_table_options_hive_itemContext;
  class Create_table_hive_row_formatContext;
  class Create_table_hive_row_format_fieldsContext;
  class Create_table_options_mssql_itemContext;
  class Create_table_options_mysql_itemContext;
  class Alter_table_stmtContext;
  class Alter_table_itemContext;
  class Alter_table_add_constraintContext;
  class Alter_table_add_constraint_itemContext;
  class DtypeContext;
  class Dtype_lenContext;
  class Dtype_attrContext;
  class Dtype_defaultContext;
  class Create_database_stmtContext;
  class Create_database_optionContext;
  class Create_function_stmtContext;
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
  class Insert_stmtContext;
  class Insert_stmt_colsContext;
  class Insert_stmt_rowsContext;
  class Insert_stmt_rowContext;
  class Insert_directory_stmtContext;
  class Exit_stmtContext;
  class Get_diag_stmtContext;
  class Get_diag_stmt_itemContext;
  class Get_diag_stmt_exception_itemContext;
  class Get_diag_stmt_rowcount_itemContext;
  class Grant_stmtContext;
  class Grant_stmt_itemContext;
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
  class Truncate_stmtContext;
  class Use_stmtContext;
  class Values_into_stmtContext;
  class While_stmtContext;
  class For_cursor_stmtContext;
  class For_range_stmtContext;
  class LabelContext;
  class Using_clauseContext;
  class Select_stmtContext;
  class Cte_select_stmtContext;
  class Cte_select_stmt_itemContext;
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
  class Into_clauseContext;
  class From_clauseContext;
  class From_table_clauseContext;
  class From_table_name_clauseContext;
  class From_subselect_clauseContext;
  class From_join_clauseContext;
  class From_join_type_clauseContext;
  class From_table_values_clauseContext;
  class From_table_values_rowContext;
  class From_alias_clauseContext;
  class Table_nameContext;
  class Where_clauseContext;
  class Group_by_clauseContext;
  class Having_clauseContext;
  class Qualify_clauseContext;
  class Order_by_clauseContext;
  class Select_optionsContext;
  class Select_options_itemContext;
  class Update_stmtContext;
  class Update_assignmentContext;
  class Update_tableContext;
  class Update_upsertContext;
  class Merge_stmtContext;
  class Merge_tableContext;
  class Merge_conditionContext;
  class Merge_actionContext;
  class Delete_stmtContext;
  class Delete_aliasContext;
  class Describe_stmtContext;
  class Bool_exprContext;
  class Bool_expr_atomContext;
  class Bool_expr_unaryContext;
  class Bool_expr_single_inContext;
  class Bool_expr_multi_inContext;
  class Bool_expr_binaryContext;
  class Bool_expr_logical_operatorContext;
  class Bool_expr_binary_operatorContext;
  class ExprContext;
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
  class Expr_func_partition_by_clauseContext;
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
    Assignment_stmtContext *assignment_stmt();
    Allocate_cursor_stmtContext *allocate_cursor_stmt();
    Alter_table_stmtContext *alter_table_stmt();
    Associate_locator_stmtContext *associate_locator_stmt();
    Begin_transaction_stmtContext *begin_transaction_stmt();
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
    Delete_stmtContext *delete_stmt();
    Describe_stmtContext *describe_stmt();
    Drop_stmtContext *drop_stmt();
    End_transaction_stmtContext *end_transaction_stmt();
    Exec_stmtContext *exec_stmt();
    Exit_stmtContext *exit_stmt();
    Fetch_stmtContext *fetch_stmt();
    For_cursor_stmtContext *for_cursor_stmt();
    For_range_stmtContext *for_range_stmt();
    If_stmtContext *if_stmt();
    Include_stmtContext *include_stmt();
    Insert_stmtContext *insert_stmt();
    Insert_directory_stmtContext *insert_directory_stmt();
    Get_diag_stmtContext *get_diag_stmt();
    Grant_stmtContext *grant_stmt();
    Leave_stmtContext *leave_stmt();
    Map_object_stmtContext *map_object_stmt();
    Merge_stmtContext *merge_stmt();
    Open_stmtContext *open_stmt();
    Print_stmtContext *print_stmt();
    Quit_stmtContext *quit_stmt();
    Raise_stmtContext *raise_stmt();
    Resignal_stmtContext *resignal_stmt();
    Return_stmtContext *return_stmt();
    Rollback_stmtContext *rollback_stmt();
    Select_stmtContext *select_stmt();
    Signal_stmtContext *signal_stmt();
    Summary_stmtContext *summary_stmt();
    Update_stmtContext *update_stmt();
    Use_stmtContext *use_stmt();
    Truncate_stmtContext *truncate_stmt();
    Values_into_stmtContext *values_into_stmt();
    While_stmtContext *while_stmt();
    LabelContext *label();
    HiveContext *hive();
    HostContext *host();
    Null_stmtContext *null_stmt();
    Expr_stmtContext *expr_stmt();
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

  class  Null_stmtContext : public antlr4::ParserRuleContext {
  public:
    Null_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_NULL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Null_stmtContext* null_stmt();

  class  Expr_stmtContext : public antlr4::ParserRuleContext {
  public:
    Expr_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_stmtContext* expr_stmt();

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
    IdentContext *ident();
    antlr4::tree::TerminalNode *T_EQUAL();
    ExprContext *expr();
    antlr4::tree::TerminalNode *T_COLON();
    antlr4::tree::TerminalNode *T_OPEN_P();
    antlr4::tree::TerminalNode *T_CLOSE_P();

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
    std::vector<IdentContext *> ident();
    IdentContext* ident(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_CLOSE_P();
    antlr4::tree::TerminalNode* T_CLOSE_P(size_t i);
    antlr4::tree::TerminalNode *T_EQUAL();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
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
    std::vector<IdentContext *> ident();
    IdentContext* ident(size_t i);
    antlr4::tree::TerminalNode *T_COLON();
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assignment_stmt_select_itemContext* assignment_stmt_select_item();

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
    Dtype_lenContext *dtype_len();
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
    Create_table_preoptionsContext *create_table_preoptions();

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
    antlr4::tree::TerminalNode *T_OPEN_P();
    Select_stmtContext *select_stmt();
    antlr4::tree::TerminalNode *T_CLOSE_P();
    Create_table_columnsContext *create_table_columns();
    antlr4::tree::TerminalNode *T_LIKE();
    Table_nameContext *table_name();
    Create_table_optionsContext *create_table_options();
    antlr4::tree::TerminalNode *T_AS();

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
    Dtype_lenContext *dtype_len();
    std::vector<Dtype_attrContext *> dtype_attr();
    Dtype_attrContext* dtype_attr(size_t i);
    std::vector<Create_table_column_inline_consContext *> create_table_column_inline_cons();
    Create_table_column_inline_consContext* create_table_column_inline_cons(size_t i);
    Create_table_column_consContext *create_table_column_cons();
    antlr4::tree::TerminalNode *T_CONSTRAINT();
    IdentContext *ident();

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

  class  Create_table_column_inline_consContext : public antlr4::ParserRuleContext {
  public:
    Create_table_column_inline_consContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Dtype_defaultContext *dtype_default();
    antlr4::tree::TerminalNode *T_NULL();
    antlr4::tree::TerminalNode *T_NOT();
    antlr4::tree::TerminalNode *T_PRIMARY();
    antlr4::tree::TerminalNode *T_KEY();
    antlr4::tree::TerminalNode *T_UNIQUE();
    antlr4::tree::TerminalNode *T_REFERENCES();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *T_OPEN_P();
    IdentContext *ident();
    antlr4::tree::TerminalNode *T_CLOSE_P();
    std::vector<Create_table_fk_actionContext *> create_table_fk_action();
    Create_table_fk_actionContext* create_table_fk_action(size_t i);
    antlr4::tree::TerminalNode *T_IDENTITY();
    std::vector<antlr4::tree::TerminalNode *> L_INT();
    antlr4::tree::TerminalNode* L_INT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);
    antlr4::tree::TerminalNode *T_AUTO_INCREMENT();
    antlr4::tree::TerminalNode *T_ENABLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_table_column_inline_consContext* create_table_column_inline_cons();

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
    std::vector<Create_table_options_itemContext *> create_table_options_item();
    Create_table_options_itemContext* create_table_options_item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_table_optionsContext* create_table_options();

  class  Create_table_options_itemContext : public antlr4::ParserRuleContext {
  public:
    Create_table_options_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_ON();
    antlr4::tree::TerminalNode *T_COMMIT();
    antlr4::tree::TerminalNode *T_ROWS();
    antlr4::tree::TerminalNode *T_DELETE();
    antlr4::tree::TerminalNode *T_PRESERVE();
    Create_table_options_ora_itemContext *create_table_options_ora_item();
    Create_table_options_db2_itemContext *create_table_options_db2_item();
    Create_table_options_td_itemContext *create_table_options_td_item();
    Create_table_options_hive_itemContext *create_table_options_hive_item();
    Create_table_options_mssql_itemContext *create_table_options_mssql_item();
    Create_table_options_mysql_itemContext *create_table_options_mysql_item();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_table_options_itemContext* create_table_options_item();

  class  Create_table_options_ora_itemContext : public antlr4::ParserRuleContext {
  public:
    Create_table_options_ora_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_SEGMENT();
    antlr4::tree::TerminalNode *T_CREATION();
    antlr4::tree::TerminalNode *T_IMMEDIATE();
    antlr4::tree::TerminalNode *T_DEFERRED();
    std::vector<antlr4::tree::TerminalNode *> L_INT();
    antlr4::tree::TerminalNode* L_INT(size_t i);
    antlr4::tree::TerminalNode *T_PCTFREE();
    antlr4::tree::TerminalNode *T_PCTUSED();
    antlr4::tree::TerminalNode *T_INITRANS();
    antlr4::tree::TerminalNode *T_MAXTRANS();
    antlr4::tree::TerminalNode *T_NOCOMPRESS();
    antlr4::tree::TerminalNode *T_LOGGING();
    antlr4::tree::TerminalNode *T_NOLOGGING();
    antlr4::tree::TerminalNode *T_STORAGE();
    antlr4::tree::TerminalNode *T_OPEN_P();
    antlr4::tree::TerminalNode *T_CLOSE_P();
    std::vector<IdentContext *> ident();
    IdentContext* ident(size_t i);
    antlr4::tree::TerminalNode *T_TABLESPACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_table_options_ora_itemContext* create_table_options_ora_item();

  class  Create_table_options_db2_itemContext : public antlr4::ParserRuleContext {
  public:
    Create_table_options_db2_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_IN();
    std::vector<IdentContext *> ident();
    IdentContext* ident(size_t i);
    antlr4::tree::TerminalNode *T_INDEX();
    antlr4::tree::TerminalNode *T_WITH();
    antlr4::tree::TerminalNode *T_REPLACE();
    antlr4::tree::TerminalNode *T_DISTRIBUTE();
    antlr4::tree::TerminalNode *T_BY();
    antlr4::tree::TerminalNode *T_HASH();
    antlr4::tree::TerminalNode *T_OPEN_P();
    antlr4::tree::TerminalNode *T_CLOSE_P();
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);
    antlr4::tree::TerminalNode *T_LOGGED();
    antlr4::tree::TerminalNode *T_NOT();
    antlr4::tree::TerminalNode *T_COMPRESS();
    antlr4::tree::TerminalNode *T_YES();
    antlr4::tree::TerminalNode *T_NO();
    antlr4::tree::TerminalNode *T_DEFINITION();
    antlr4::tree::TerminalNode *T_ONLY();
    antlr4::tree::TerminalNode *T_RESTRICT();
    antlr4::tree::TerminalNode *T_ON();
    antlr4::tree::TerminalNode *T_DROP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_table_options_db2_itemContext* create_table_options_db2_item();

  class  Create_table_options_td_itemContext : public antlr4::ParserRuleContext {
  public:
    Create_table_options_td_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_PRIMARY();
    antlr4::tree::TerminalNode *T_INDEX();
    antlr4::tree::TerminalNode *T_OPEN_P();
    std::vector<IdentContext *> ident();
    IdentContext* ident(size_t i);
    antlr4::tree::TerminalNode *T_CLOSE_P();
    antlr4::tree::TerminalNode *T_UNIQUE();
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);
    antlr4::tree::TerminalNode *T_WITH();
    antlr4::tree::TerminalNode *T_DATA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_table_options_td_itemContext* create_table_options_td_item();

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
    antlr4::tree::TerminalNode *T_TERMINATED();
    std::vector<antlr4::tree::TerminalNode *> T_BY();
    antlr4::tree::TerminalNode* T_BY(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *T_ESCAPED();
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

  class  Create_table_options_mysql_itemContext : public antlr4::ParserRuleContext {
  public:
    Create_table_options_mysql_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_AUTO_INCREMENT();
    ExprContext *expr();
    antlr4::tree::TerminalNode *T_EQUAL();
    antlr4::tree::TerminalNode *T_COMMENT();
    antlr4::tree::TerminalNode *T_CHARACTER();
    antlr4::tree::TerminalNode *T_SET();
    antlr4::tree::TerminalNode *T_CHARSET();
    antlr4::tree::TerminalNode *T_DEFAULT();
    antlr4::tree::TerminalNode *T_ENGINE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_table_options_mysql_itemContext* create_table_options_mysql_item();

  class  Alter_table_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_table_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_ALTER();
    antlr4::tree::TerminalNode *T_TABLE();
    Table_nameContext *table_name();
    Alter_table_itemContext *alter_table_item();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_table_stmtContext* alter_table_stmt();

  class  Alter_table_itemContext : public antlr4::ParserRuleContext {
  public:
    Alter_table_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Alter_table_add_constraintContext *alter_table_add_constraint();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_table_itemContext* alter_table_item();

  class  Alter_table_add_constraintContext : public antlr4::ParserRuleContext {
  public:
    Alter_table_add_constraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_ADD2();
    Alter_table_add_constraint_itemContext *alter_table_add_constraint_item();
    antlr4::tree::TerminalNode *T_CONSTRAINT();
    IdentContext *ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_table_add_constraintContext* alter_table_add_constraint();

  class  Alter_table_add_constraint_itemContext : public antlr4::ParserRuleContext {
  public:
    Alter_table_add_constraint_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
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
    antlr4::tree::TerminalNode *T_DEFAULT();
    ExprContext *expr();
    antlr4::tree::TerminalNode *T_FOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_table_add_constraint_itemContext* alter_table_add_constraint_item();

  class  DtypeContext : public antlr4::ParserRuleContext {
  public:
    DtypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_CHAR();
    antlr4::tree::TerminalNode *T_CHARACTER();
    antlr4::tree::TerminalNode *T_BIGINT();
    antlr4::tree::TerminalNode *T_BINARY_DOUBLE();
    antlr4::tree::TerminalNode *T_BINARY_FLOAT();
    antlr4::tree::TerminalNode *T_BINARY_INTEGER();
    antlr4::tree::TerminalNode *T_BIT();
    antlr4::tree::TerminalNode *T_DATE();
    antlr4::tree::TerminalNode *T_DATETIME();
    antlr4::tree::TerminalNode *T_DEC();
    antlr4::tree::TerminalNode *T_DECIMAL();
    antlr4::tree::TerminalNode *T_DOUBLE();
    antlr4::tree::TerminalNode *T_PRECISION();
    antlr4::tree::TerminalNode *T_FLOAT();
    antlr4::tree::TerminalNode *T_INT();
    antlr4::tree::TerminalNode *T_INT2();
    antlr4::tree::TerminalNode *T_INT4();
    antlr4::tree::TerminalNode *T_INT8();
    antlr4::tree::TerminalNode *T_INTEGER();
    antlr4::tree::TerminalNode *T_NCHAR();
    antlr4::tree::TerminalNode *T_NVARCHAR();
    antlr4::tree::TerminalNode *T_NUMBER();
    antlr4::tree::TerminalNode *T_NUMERIC();
    antlr4::tree::TerminalNode *T_PLS_INTEGER();
    antlr4::tree::TerminalNode *T_REAL();
    antlr4::tree::TerminalNode *T_RESULT_SET_LOCATOR();
    antlr4::tree::TerminalNode *T_VARYING();
    antlr4::tree::TerminalNode *T_SIMPLE_FLOAT();
    antlr4::tree::TerminalNode *T_SIMPLE_DOUBLE();
    antlr4::tree::TerminalNode *T_SIMPLE_INTEGER();
    antlr4::tree::TerminalNode *T_SMALLINT();
    antlr4::tree::TerminalNode *T_SMALLDATETIME();
    antlr4::tree::TerminalNode *T_STRING();
    antlr4::tree::TerminalNode *T_SYS_REFCURSOR();
    antlr4::tree::TerminalNode *T_TIMESTAMP();
    antlr4::tree::TerminalNode *T_TINYINT();
    antlr4::tree::TerminalNode *T_VARCHAR();
    antlr4::tree::TerminalNode *T_VARCHAR2();
    antlr4::tree::TerminalNode *T_XML();
    IdentContext *ident();
    antlr4::tree::TerminalNode *T_TYPE();
    antlr4::tree::TerminalNode *T_ROWTYPE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DtypeContext* dtype();

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
    ExprContext *expr();
    antlr4::tree::TerminalNode *T_DATABASE();
    antlr4::tree::TerminalNode *T_SCHEMA();
    antlr4::tree::TerminalNode *T_IF();
    antlr4::tree::TerminalNode *T_NOT();
    antlr4::tree::TerminalNode *T_EXISTS();
    std::vector<Create_database_optionContext *> create_database_option();
    Create_database_optionContext* create_database_option(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_database_stmtContext* create_database_stmt();

  class  Create_database_optionContext : public antlr4::ParserRuleContext {
  public:
    Create_database_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_COMMENT();
    ExprContext *expr();
    antlr4::tree::TerminalNode *T_LOCATION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_database_optionContext* create_database_option();

  class  Create_function_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_function_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
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

  Create_function_stmtContext* create_function_stmt();

  class  Create_function_returnContext : public antlr4::ParserRuleContext {
  public:
    Create_function_returnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DtypeContext *dtype();
    antlr4::tree::TerminalNode *T_RETURN();
    antlr4::tree::TerminalNode *T_RETURNS();
    Dtype_lenContext *dtype_len();

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
    Dtype_lenContext *dtype_len();
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
    antlr4::tree::TerminalNode *L_INT();
    antlr4::tree::TerminalNode *T_DYNAMIC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_routine_optionContext* create_routine_option();

  class  Drop_stmtContext : public antlr4::ParserRuleContext {
  public:
    Drop_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_DROP();
    antlr4::tree::TerminalNode *T_TABLE();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *T_IF();
    antlr4::tree::TerminalNode *T_EXISTS();
    ExprContext *expr();
    antlr4::tree::TerminalNode *T_DATABASE();
    antlr4::tree::TerminalNode *T_SCHEMA();

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

  class  Insert_stmtContext : public antlr4::ParserRuleContext {
  public:
    Insert_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_INSERT();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *T_OVERWRITE();
    antlr4::tree::TerminalNode *T_TABLE();
    antlr4::tree::TerminalNode *T_INTO();
    Select_stmtContext *select_stmt();
    Insert_stmt_rowsContext *insert_stmt_rows();
    Insert_stmt_colsContext *insert_stmt_cols();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Insert_stmtContext* insert_stmt();

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
    antlr4::tree::TerminalNode *L_INT();
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

  class  Grant_stmtContext : public antlr4::ParserRuleContext {
  public:
    Grant_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_GRANT();
    std::vector<Grant_stmt_itemContext *> grant_stmt_item();
    Grant_stmt_itemContext* grant_stmt_item(size_t i);
    antlr4::tree::TerminalNode *T_TO();
    antlr4::tree::TerminalNode *T_ROLE();
    IdentContext *ident();
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grant_stmtContext* grant_stmt();

  class  Grant_stmt_itemContext : public antlr4::ParserRuleContext {
  public:
    Grant_stmt_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_EXECUTE();
    antlr4::tree::TerminalNode *T_ON();
    antlr4::tree::TerminalNode *T_PROCEDURE();
    IdentContext *ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grant_stmt_itemContext* grant_stmt_item();

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
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *T_OPEN_P();
    std::vector<Create_index_colContext *> create_index_col();
    Create_index_colContext* create_index_col(size_t i);
    antlr4::tree::TerminalNode *T_CLOSE_P();
    antlr4::tree::TerminalNode *T_UNIQUE();
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);

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

  class  Truncate_stmtContext : public antlr4::ParserRuleContext {
  public:
    Truncate_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_TRUNCATE();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *T_TABLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Truncate_stmtContext* truncate_stmt();

  class  Use_stmtContext : public antlr4::ParserRuleContext {
  public:
    Use_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_USE();
    ExprContext *expr();

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
    antlr4::tree::TerminalNode *L_LABEL();
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
    std::vector<Cte_select_stmt_itemContext *> cte_select_stmt_item();
    Cte_select_stmt_itemContext* cte_select_stmt_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cte_select_stmtContext* cte_select_stmt();

  class  Cte_select_stmt_itemContext : public antlr4::ParserRuleContext {
  public:
    Cte_select_stmt_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
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

  Cte_select_stmt_itemContext* cte_select_stmt_item();

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
    Select_listContext *select_list();
    antlr4::tree::TerminalNode *T_SELECT();
    antlr4::tree::TerminalNode *T_SEL();
    Into_clauseContext *into_clause();
    From_clauseContext *from_clause();
    Where_clauseContext *where_clause();
    Group_by_clauseContext *group_by_clause();
    Having_clauseContext *having_clause();
    Qualify_clauseContext *qualify_clause();
    Order_by_clauseContext *order_by_clause();
    Select_optionsContext *select_options();

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
    ExprContext *expr();
    Select_list_asteriskContext *select_list_asterisk();
    IdentContext *ident();
    antlr4::tree::TerminalNode *T_EQUAL();
    Select_list_aliasContext *select_list_alias();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_list_itemContext* select_list_item();

  class  Select_list_aliasContext : public antlr4::ParserRuleContext {
  public:
    Select_list_aliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();
    antlr4::tree::TerminalNode *T_AS();
    antlr4::tree::TerminalNode *T_OPEN_P();
    antlr4::tree::TerminalNode *T_TITLE();
    antlr4::tree::TerminalNode *L_S_STRING();
    antlr4::tree::TerminalNode *T_CLOSE_P();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_list_aliasContext* select_list_alias();

  class  Select_list_asteriskContext : public antlr4::ParserRuleContext {
  public:
    Select_list_asteriskContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_list_asteriskContext* select_list_asterisk();

  class  Into_clauseContext : public antlr4::ParserRuleContext {
  public:
    Into_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_INTO();
    std::vector<IdentContext *> ident();
    IdentContext* ident(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Into_clauseContext* into_clause();

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
    From_table_values_clauseContext *from_table_values_clause();

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
    From_alias_clauseContext *from_alias_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  From_table_name_clauseContext* from_table_name_clause();

  class  From_subselect_clauseContext : public antlr4::ParserRuleContext {
  public:
    From_subselect_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_OPEN_P();
    Select_stmtContext *select_stmt();
    antlr4::tree::TerminalNode *T_CLOSE_P();
    From_alias_clauseContext *from_alias_clause();

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
    antlr4::tree::TerminalNode *T_ON();
    Bool_exprContext *bool_expr();

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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  From_join_type_clauseContext* from_join_type_clause();

  class  From_table_values_clauseContext : public antlr4::ParserRuleContext {
  public:
    From_table_values_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_TABLE();
    antlr4::tree::TerminalNode *T_OPEN_P();
    antlr4::tree::TerminalNode *T_VALUES();
    std::vector<From_table_values_rowContext *> from_table_values_row();
    From_table_values_rowContext* from_table_values_row(size_t i);
    antlr4::tree::TerminalNode *T_CLOSE_P();
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);
    From_alias_clauseContext *from_alias_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  From_table_values_clauseContext* from_table_values_clause();

  class  From_table_values_rowContext : public antlr4::ParserRuleContext {
  public:
    From_table_values_rowContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *T_OPEN_P();
    antlr4::tree::TerminalNode *T_CLOSE_P();
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  From_table_values_rowContext* from_table_values_row();

  class  From_alias_clauseContext : public antlr4::ParserRuleContext {
  public:
    From_alias_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();
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

  class  Qualify_clauseContext : public antlr4::ParserRuleContext {
  public:
    Qualify_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_QUALIFY();
    Bool_exprContext *bool_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Qualify_clauseContext* qualify_clause();

  class  Order_by_clauseContext : public antlr4::ParserRuleContext {
  public:
    Order_by_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_ORDER();
    antlr4::tree::TerminalNode *T_BY();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_ASC();
    antlr4::tree::TerminalNode* T_ASC(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_DESC();
    antlr4::tree::TerminalNode* T_DESC(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Order_by_clauseContext* order_by_clause();

  class  Select_optionsContext : public antlr4::ParserRuleContext {
  public:
    Select_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Select_options_itemContext *> select_options_item();
    Select_options_itemContext* select_options_item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_optionsContext* select_options();

  class  Select_options_itemContext : public antlr4::ParserRuleContext {
  public:
    Select_options_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_LIMIT();
    ExprContext *expr();
    antlr4::tree::TerminalNode *T_WITH();
    antlr4::tree::TerminalNode *T_RR();
    antlr4::tree::TerminalNode *T_RS();
    antlr4::tree::TerminalNode *T_CS();
    antlr4::tree::TerminalNode *T_UR();
    antlr4::tree::TerminalNode *T_USE();
    antlr4::tree::TerminalNode *T_AND();
    antlr4::tree::TerminalNode *T_KEEP();
    antlr4::tree::TerminalNode *T_LOCKS();
    antlr4::tree::TerminalNode *T_EXCLUSIVE();
    antlr4::tree::TerminalNode *T_UPDATE();
    antlr4::tree::TerminalNode *T_SHARE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_options_itemContext* select_options_item();

  class  Update_stmtContext : public antlr4::ParserRuleContext {
  public:
    Update_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_UPDATE();
    Update_tableContext *update_table();
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

  class  Update_tableContext : public antlr4::ParserRuleContext {
  public:
    Update_tableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *T_OPEN_P();
    Select_stmtContext *select_stmt();
    antlr4::tree::TerminalNode *T_CLOSE_P();
    IdentContext *ident();
    From_clauseContext *from_clause();
    antlr4::tree::TerminalNode *T_AS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Update_tableContext* update_table();

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
    std::vector<Merge_tableContext *> merge_table();
    Merge_tableContext* merge_table(size_t i);
    antlr4::tree::TerminalNode *T_USING();
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
    virtual size_t getRuleIndex() const override;
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *T_DESCRIBE();
    antlr4::tree::TerminalNode *T_DESC();
    antlr4::tree::TerminalNode *T_TABLE();

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
    std::vector<antlr4::tree::TerminalNode *> T_OPEN_P();
    antlr4::tree::TerminalNode* T_OPEN_P(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_CLOSE_P();
    antlr4::tree::TerminalNode* T_CLOSE_P(size_t i);
    antlr4::tree::TerminalNode *T_IN();
    Select_stmtContext *select_stmt();
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);
    antlr4::tree::TerminalNode *T_NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bool_expr_multi_inContext* bool_expr_multi_in();

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
    Expr_intervalContext *expr_interval();
    Expr_concatContext *expr_concat();
    Expr_caseContext *expr_case();
    Expr_cursor_attributeContext *expr_cursor_attribute();
    Expr_agg_window_funcContext *expr_agg_window_func();
    Expr_spec_funcContext *expr_spec_func();
    Expr_funcContext *expr_func();
    Expr_atomContext *expr_atom();
    antlr4::tree::TerminalNode *T_MUL();
    antlr4::tree::TerminalNode *T_DIV();
    antlr4::tree::TerminalNode *T_ADD();
    antlr4::tree::TerminalNode *T_SUB();
    Interval_itemContext *interval_item();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
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
    Interval_itemContext *interval_item();

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
    Expr_func_partition_by_clauseContext *expr_func_partition_by_clause();
    Order_by_clauseContext *order_by_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_func_over_clauseContext* expr_func_over_clause();

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

  class  Expr_spec_funcContext : public antlr4::ParserRuleContext {
  public:
    Expr_spec_funcContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_ACTIVITY_COUNT();
    antlr4::tree::TerminalNode *T_CAST();
    antlr4::tree::TerminalNode *T_OPEN_P();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *T_AS();
    DtypeContext *dtype();
    antlr4::tree::TerminalNode *T_CLOSE_P();
    Dtype_lenContext *dtype_len();
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
    Host_cmdContext *host_cmd();
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
    antlr4::tree::TerminalNode *L_FILE();
    std::vector<IdentContext *> ident();
    IdentContext* ident(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  File_nameContext* file_name();

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
    antlr4::tree::TerminalNode *T_ADD2();
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
    antlr4::tree::TerminalNode *T_FROM();
    antlr4::tree::TerminalNode *T_FULL();
    antlr4::tree::TerminalNode *T_FUNCTION();
    antlr4::tree::TerminalNode *T_GET();
    antlr4::tree::TerminalNode *T_GLOBAL();
    antlr4::tree::TerminalNode *T_GO();
    antlr4::tree::TerminalNode *T_GRANT();
    antlr4::tree::TerminalNode *T_GROUP();
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
    antlr4::tree::TerminalNode *T_INTERVAL();
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
    antlr4::tree::TerminalNode *T_LIMIT();
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
    antlr4::tree::TerminalNode *T_MAP();
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
    antlr4::tree::TerminalNode *T_ORDER();
    antlr4::tree::TerminalNode *T_OUT();
    antlr4::tree::TerminalNode *T_OUTER();
    antlr4::tree::TerminalNode *T_OVER();
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
    antlr4::tree::TerminalNode *T_SEL();
    antlr4::tree::TerminalNode *T_SELECT();
    antlr4::tree::TerminalNode *T_SESSION();
    antlr4::tree::TerminalNode *T_SESSIONS();
    antlr4::tree::TerminalNode *T_SET();
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Non_reserved_wordsContext* non_reserved_words();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool block_endSempred(Block_endContext *_localctx, size_t predicateIndex);
  bool expr_stmtSempred(Expr_stmtContext *_localctx, size_t predicateIndex);
  bool create_routine_paramsSempred(Create_routine_paramsContext *_localctx, size_t predicateIndex);
  bool select_list_aliasSempred(Select_list_aliasContext *_localctx, size_t predicateIndex);
  bool from_alias_clauseSempred(From_alias_clauseContext *_localctx, size_t predicateIndex);
  bool delete_aliasSempred(Delete_aliasContext *_localctx, size_t predicateIndex);
  bool bool_exprSempred(Bool_exprContext *_localctx, size_t predicateIndex);
  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);
  bool func_paramSempred(Func_paramContext *_localctx, size_t predicateIndex);

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



// Generated from GreenPlumLexer.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  GreenPlumLexer : public antlr4::Lexer {
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
    DEFERRABLE = 101, DEFERRED = 102, DEFINER = 103, DELETE = 104, DELETE_P = 105, 
    DELIMITER = 106, DELIMITERS = 107, DENY = 108, DESC = 109, DICTIONARY = 110, 
    DISABLE = 111, DISABLE_P = 112, DISCARD = 113, DISTINCT = 114, DISTRIBUTED = 115, 
    DO = 116, DOCUMENT_P = 117, DOMAIN_P = 118, DOUBLE_P = 119, DROP = 120, 
    DXL = 121, EACH = 122, ELSE = 123, ENABLE = 124, ENABLE_P = 125, ENCODING = 126, 
    ENCRYPTED = 127, END_P = 128, ENUM_P = 129, ERRORS = 130, ESCAPE = 131, 
    EVERY = 132, EXCEPT = 133, EXCHANGE = 134, EXCLUDE = 135, EXCLUDING = 136, 
    EXCLUSIVE = 137, EXECUTE = 138, EXISTS = 139, EXPLAIN = 140, EXTENSION = 141, 
    EXTERNAL = 142, EXTRACT = 143, FALSE_P = 144, FAMILY = 145, FETCH = 146, 
    FIELDS = 147, FILESPACE = 148, FILL = 149, FILTER = 150, FIRST_P = 151, 
    FLOAT_P = 152, FOLLOWING = 153, FOR = 154, FORCE = 155, FOREIGN = 156, 
    FORMAT = 157, FORWARD = 158, FREEZE = 159, FROM = 160, FULL = 161, FUNCTION = 162, 
    GLOBAL = 163, GRANT = 164, GRANTED = 165, GREATEST = 166, GROUP = 167, 
    GROUP_ID = 168, GROUPING = 169, GROUP_P = 170, HANDLER = 171, HASH = 172, 
    HAVING = 173, HEADER_P = 174, HOLD = 175, HOST = 176, HOUR_P = 177, 
    IDENTITY_P = 178, IF_P = 179, IGNORE_P = 180, ILIKE = 181, IMMEDIATE = 182, 
    IMMUTABLE = 183, IMPLICIT_P = 184, IN = 185, INCLUDING = 186, INCLUSIVE = 187, 
    INCREMENT = 188, INDEX = 189, INDEXES = 190, INHERIT = 191, INHERITS = 192, 
    INITIALLY = 193, INLINE_P = 194, INNER_P = 195, INOUT = 196, IN_P = 197, 
    INPUT_P = 198, INSENSITIVE = 199, INSERT = 200, INSTEAD = 201, INTEGER = 202, 
    INTERSECT = 203, INTERVAL = 204, INTO = 205, INT_P = 206, INVOKER = 207, 
    IS = 208, ISNULL = 209, ISOLATION = 210, JOIN = 211, KEY = 212, LANGUAGE = 213, 
    LARGE_P = 214, LAST_P = 215, LEADING = 216, LEAST = 217, LEFT = 218, 
    LEVEL = 219, LIKE = 220, LIMIT = 221, LIST = 222, LISTEN = 223, LOAD = 224, 
    LOCAL = 225, LOCALTIME = 226, LOCALTIMESTAMP = 227, LOCATION = 228, 
    LOCK_P = 229, LOGIN_P = 230, LOG_P = 231, MAPPING = 232, MASTER = 233, 
    MATCH = 234, MAXVALUE = 235, MEDIAN = 236, MEMORY_LIMIT = 237, MEMORY_SHARED_QUOTA = 238, 
    MEMORY_SPILL_RATIO = 239, MERGE = 240, MINUTE_P = 241, MINVALUE = 242, 
    MISSING = 243, MODE = 244, MODIFIES = 245, MODIFY = 246, MONTH_P = 247, 
    MOVE = 248, MPP = 249, NAME_P = 250, NAMES = 251, NATIONAL = 252, NATURAL = 253, 
    NCHAR = 254, NEW = 255, NEWLINE = 256, NEXT = 257, NO = 258, NOCREATEDB = 259, 
    NOCREATEEXTTABLE = 260, NOCREATEROLE = 261, NOCREATEUSER = 262, NOINHERIT = 263, 
    NOLOGIN_P = 264, NONE = 265, NOOVERCOMMIT = 266, NOSUPERUSER = 267, 
    NOT = 268, NOTHING = 269, NOTIFY = 270, NOTNULL = 271, NOWAIT = 272, 
    NULL = 273, NULLIF = 274, NULL_P = 275, NULLS_FIRST = 276, NULLS_LAST = 277, 
    NULLS_P = 278, NUMERIC = 279, OBJECT_P = 280, OF = 281, OFF = 282, OFFSET = 283, 
    OIDS = 284, OLD = 285, ON = 286, ONLY = 287, OPERATOR = 288, OPTION = 289, 
    OPTIONS = 290, OR = 291, ORDER = 292, ORDERED = 293, OTHERS = 294, OUTER_P = 295, 
    OUT_P = 296, OVER = 297, OVERCOMMIT = 298, OVERLAPS = 299, OVERLAY = 300, 
    OWNED = 301, OWNER = 302, PARAM = 303, PARSER = 304, PARTIAL = 305, 
    PARTITION = 306, PARTITIONS = 307, PASSING = 308, PASSWORD = 309, PERCENT = 310, 
    PERCENTILE_CONT = 311, PERCENTILE_DISC = 312, PLACING = 313, PLANS = 314, 
    POSITION = 315, PRECEDING = 316, PRECISION = 317, PREPARE = 318, PREPARED = 319, 
    PRESERVE = 320, PRIMARY = 321, PRIOR = 322, PRIVILEGES = 323, PROCEDURAL = 324, 
    PROCEDURE = 325, PROGRAM = 326, PROTOCOL = 327, PUBLIC = 328, QUEUE = 329, 
    QUOTE = 330, RANDOMLY = 331, RANGE = 332, READ = 333, READABLE = 334, 
    READS = 335, REAL = 336, REASSIGN = 337, RECHECK = 338, RECURSIVE = 339, 
    REF = 340, REFERENCES = 341, REINDEX = 342, REJECT_P = 343, RELATIVE_P = 344, 
    RELEASE = 345, RENAME = 346, REPEATABLE = 347, REPLACE = 348, REPLICA = 349, 
    RESET = 350, RESOURCE = 351, RESTART = 352, RESTRICT = 353, RETURNING = 354, 
    RETURNS = 355, REVOKE = 356, RIGHT = 357, ROLE = 358, ROLLBACK = 359, 
    ROLLUP = 360, ROOTPARTITION = 361, ROW = 362, ROWS = 363, RULE = 364, 
    SAVEPOINT = 365, SCATTER = 366, SCHEMA = 367, SCROLL = 368, SEARCH = 369, 
    SECOND_P = 370, SECURITY = 371, SEGMENT = 372, SELECT = 373, SEQUENCE = 374, 
    SERIALIZABLE = 375, SESSION = 376, SESSION_USER = 377, SET = 378, SETOF = 379, 
    SETS = 380, SHARE = 381, SHOW = 382, SIMILAR = 383, SIMPLE = 384, SMALLINT = 385, 
    SOME = 386, SPLIT = 387, SQL = 388, STABLE = 389, STANDALONE_P = 390, 
    START = 391, STATEMENT = 392, STATISTICS = 393, STDIN = 394, STDOUT = 395, 
    STORAGE = 396, STRICT_P = 397, STRIP_P = 398, SUBPARTITION = 399, SUBPARTITIONS = 400, 
    SUBSTRING = 401, SUPERUSER_P = 402, SYMMETRIC = 403, SYSID = 404, SYSTEM_P = 405, 
    TABLE = 406, TABLESPACE = 407, TEMP = 408, TEMPLATE = 409, TEMPORARY = 410, 
    TEXT_P = 411, THEN = 412, THRESHOLD = 413, TIES = 414, TIME = 415, TIMESTAMP = 416, 
    TO = 417, TRAILING = 418, TRANSACTION = 419, TREAT = 420, TRIGGER = 421, 
    TRIM = 422, TRUE_P = 423, TRUNCATE = 424, TRUSTED = 425, TYPE_P = 426, 
    UMINUS = 427, UNBOUNDED = 428, UNCOMMITTED = 429, UNENCRYPTED = 430, 
    UNION = 431, UNIQUE = 432, UNKNOWN = 433, UNLISTEN = 434, UNTIL = 435, 
    UPDATE = 436, USAGE = 437, USER = 438, USING = 439, VACUUM = 440, VALID = 441, 
    VALIDATION = 442, VALIDATOR = 443, VALUE_P = 444, VALUES = 445, VARCHAR = 446, 
    VARIADIC = 447, VARYING = 448, VERBOSE = 449, VERSION_P = 450, VIEW = 451, 
    VOLATILE = 452, WEB = 453, WHEN = 454, WHERE = 455, WHITESPACE_P = 456, 
    WINDOW = 457, WITH = 458, WITHIN = 459, WITHOUT = 460, WORK = 461, WRITABLE = 462, 
    WRITE = 463, XMLATTRIBUTES = 464, XMLCONCAT = 465, XMLELEMENT = 466, 
    XMLEXISTS = 467, XMLFOREST = 468, XML_P = 469, XMLPARSE = 470, XMLPI = 471, 
    XMLROOT = 472, XMLSERIALIZE = 473, YEAR_P = 474, YES_P = 475, ZONE = 476, 
    PERCENT_SIGN = 477, AMPERSAND = 478, LEFT_PAREN = 479, RIGHT_PAREN = 480, 
    DOUBLE_ASTERISK = 481, ASTERISK = 482, PLUS_SIGN = 483, MINUS_SIGN = 484, 
    COMMA = 485, SOLIDUS = 486, AT_SIGN = 487, ASSIGN_OP = 488, PERIOD = 489, 
    SLASH_SINGLE = 490, QUESTION_MARK = 491, NOT_EQUAL_OP = 492, CARRET_OPERATOR_PART = 493, 
    TILDE_OPERATOR_PART = 494, EXCLAMATION_OPERATOR_PART = 495, GREATER_THAN_OP = 496, 
    LESS_THAN_OP = 497, COLON = 498, SEMICOLON = 499, POUND_SIGN = 500, 
    TYPECAST = 501, BAR = 502, EQUALS_OP = 503, LEFT_BRACKET = 504, RIGHT_BRACKET = 505, 
    SINGLE_LINE_COMMENT = 506, MULTI_LINE_COMMENT = 507, SPACES = 508, DIGIT = 509, 
    CHAR_STRING = 510, DOUBLE_QUOTE_STR = 511, REGULAR_ID = 512, IDENT = 513, 
    ICONST = 514, FLOAT_NUMBER = 515, FCONST = 516, BCONST = 517, XCONST = 518, 
    OP_CHARS = 519, OP = 520
  };

  GreenPlumLexer(antlr4::CharStream *input);
  ~GreenPlumLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};


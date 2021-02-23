
// Generated from MySQLStatementParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  MySQLStatementParser : public antlr4::Parser {
public:
  enum {
    WS = 1, MAX = 2, MIN = 3, SUM = 4, COUNT = 5, GROUP_CONCAT = 6, CAST = 7, 
    POSITION = 8, SUBSTRING = 9, SUBSTR = 10, EXTRACT = 11, TRIM = 12, LAST_DAY = 13, 
    TRADITIONAL = 14, TREE = 15, MYSQL_MAIN = 16, MYSQL_ADMIN = 17, INSTANT = 18, 
    INPLACE = 19, COPY = 20, UL_BINARY = 21, AUTOCOMMIT = 22, INNODB = 23, 
    REDO_LOG = 24, ACCESSIBLE = 25, ACCOUNT = 26, ACTION = 27, ACTIVE = 28, 
    ADD = 29, ADMIN = 30, AFTER = 31, AGAINST = 32, AGGREGATE = 33, ALGORITHM = 34, 
    ALL = 35, ALTER = 36, ALWAYS = 37, ANALYZE = 38, AND = 39, ANY = 40, 
    ARRAY = 41, AS = 42, ASC = 43, ASCII = 44, ASENSITIVE = 45, AT = 46, 
    ATTRIBUTE = 47, AUTOEXTEND_SIZE = 48, AUTO_INCREMENT = 49, AVG = 50, 
    AVG_ROW_LENGTH = 51, BACKUP = 52, BEFORE = 53, BEGIN = 54, BETWEEN = 55, 
    BIGINT = 56, BINARY = 57, BINLOG = 58, BIT = 59, BLOB = 60, BLOCK = 61, 
    BOOL = 62, BOOLEAN = 63, BOTH = 64, BTREE = 65, BUCKETS = 66, BY = 67, 
    BYTE = 68, CACHE = 69, CALL = 70, CASCADE = 71, CASCADED = 72, CASE = 73, 
    CATALOG_NAME = 74, CHAIN = 75, CHANGE = 76, CHANGED = 77, CHANNEL = 78, 
    CHAR = 79, CHARACTER = 80, CHARSET = 81, CHECK = 82, CHECKSUM = 83, 
    CIPHER = 84, CLASS_ORIGIN = 85, CLIENT = 86, CLONE = 87, CLOSE = 88, 
    COALESCE = 89, CODE = 90, COLLATE = 91, COLLATION = 92, COLUMN = 93, 
    COLUMNS = 94, COLUMN_FORMAT = 95, COLUMN_NAME = 96, COMMENT = 97, COMMIT = 98, 
    COMMITTED = 99, COMPACT = 100, COMPLETION = 101, COMPONENT = 102, COMPRESSED = 103, 
    COMPRESSION = 104, CONCURRENT = 105, CONDITION = 106, CONNECTION = 107, 
    CONSISTENT = 108, CONSTRAINT = 109, CONSTRAINT_CATALOG = 110, CONSTRAINT_NAME = 111, 
    CONSTRAINT_SCHEMA = 112, CONTAINS = 113, CONTEXT = 114, CONTINUE = 115, 
    CONVERT = 116, CPU = 117, CREATE = 118, CROSS = 119, CUBE = 120, CUME_DIST = 121, 
    CURRENT = 122, CURRENT_DATE = 123, CURRENT_TIME = 124, CURRENT_TIMESTAMP = 125, 
    CURRENT_USER = 126, CURSOR = 127, CURSOR_NAME = 128, DATA = 129, DATABASE = 130, 
    DATABASES = 131, DATAFILE = 132, DATE = 133, DATETIME = 134, DAY = 135, 
    DAY_HOUR = 136, DAY_MICROSECOND = 137, DAY_MINUTE = 138, DAY_SECOND = 139, 
    DEALLOCATE = 140, DEC = 141, DECIMAL = 142, DECLARE = 143, DEFAULT = 144, 
    DEFAULT_AUTH = 145, DEFINER = 146, DEFINITION = 147, DELAYED = 148, 
    DELAY_KEY_WRITE = 149, DELETE = 150, DENSE_RANK = 151, DESC = 152, DESCRIBE = 153, 
    DESCRIPTION = 154, DETERMINISTIC = 155, DIAGNOSTICS = 156, DIRECTORY = 157, 
    DISABLE = 158, DISCARD = 159, DISK = 160, DISTINCT = 161, DISTINCTROW = 162, 
    DIV = 163, DO = 164, DOUBLE = 165, DROP = 166, DUAL = 167, DUMPFILE = 168, 
    DUPLICATE = 169, DYNAMIC = 170, EACH = 171, ELSE = 172, ELSEIF = 173, 
    EMPTY = 174, ENABLE = 175, ENCLOSED = 176, ENCRYPTION = 177, END = 178, 
    ENDS = 179, ENFORCED = 180, ENGINE = 181, ENGINES = 182, ENGINE_ATTRIBUTE = 183, 
    ENUM = 184, ERROR = 185, ERRORS = 186, ESCAPE = 187, ESCAPED = 188, 
    EVENT = 189, EVENTS = 190, EVERY = 191, EXCEPT = 192, EXCHANGE = 193, 
    EXCLUDE = 194, EXECUTE = 195, EXISTS = 196, EXIT = 197, EXPANSION = 198, 
    EXPIRE = 199, EXPLAIN = 200, EXPORT = 201, EXTENDED = 202, EXTENT_SIZE = 203, 
    FAILED_LOGIN_ATTEMPTS = 204, FALSE = 205, FAST = 206, FAULTS = 207, 
    FETCH = 208, FIELDS = 209, FILE = 210, FILE_BLOCK_SIZE = 211, FILTER = 212, 
    FIRST = 213, FIRST_VALUE = 214, FIXED = 215, FLOAT = 216, FLOAT4 = 217, 
    FLOAT8 = 218, FLUSH = 219, FOLLOWING = 220, FOLLOWS = 221, FOR = 222, 
    FORCE = 223, FOREIGN = 224, FORMAT = 225, FOUND = 226, FROM = 227, FULL = 228, 
    FULLTEXT = 229, FUNCTION = 230, GENERAL = 231, GENERATED = 232, GEOMCOLLECTION = 233, 
    GEOMETRY = 234, GEOMETRYCOLLECTION = 235, GET = 236, GET_FORMAT = 237, 
    GET_MASTER_PUBLIC_KEY = 238, GLOBAL = 239, GRANT = 240, GRANTS = 241, 
    GROUP = 242, GROUPING = 243, GROUPS = 244, GROUP_REPLICATION = 245, 
    HANDLER = 246, HASH = 247, HAVING = 248, HELP = 249, HIGH_PRIORITY = 250, 
    HISTOGRAM = 251, HISTORY = 252, HOST = 253, HOSTS = 254, HOUR = 255, 
    HOUR_MICROSECOND = 256, HOUR_MINUTE = 257, HOUR_SECOND = 258, IDENTIFIED = 259, 
    IF = 260, IGNORE = 261, IGNORE_SERVER_IDS = 262, IMPORT = 263, IN = 264, 
    INACTIVE = 265, INDEX = 266, INDEXES = 267, INFILE = 268, INITIAL_SIZE = 269, 
    INNER = 270, INOUT = 271, INSENSITIVE = 272, INSERT = 273, INSERT_METHOD = 274, 
    INSTALL = 275, INSTANCE = 276, INT = 277, INT1 = 278, INT2 = 279, INT3 = 280, 
    INT4 = 281, INT8 = 282, INTEGER = 283, INTERVAL = 284, INTO = 285, INVISIBLE = 286, 
    INVOKER = 287, IO = 288, IO_AFTER_GTIDS = 289, IO_BEFORE_GTIDS = 290, 
    IO_THREAD = 291, IPC = 292, IS = 293, ISOLATION = 294, ISSUER = 295, 
    ITERATE = 296, JOIN = 297, JSON = 298, JSON_TABLE = 299, JSON_VALUE = 300, 
    KEY = 301, KEYS = 302, KEY_BLOCK_SIZE = 303, KILL = 304, LAG = 305, 
    LANGUAGE = 306, LAST = 307, LAST_VALUE = 308, LATERAL = 309, LEAD = 310, 
    LEADING = 311, LEAVE = 312, LEAVES = 313, LEFT = 314, LESS = 315, LEVEL = 316, 
    LIKE = 317, LIMIT = 318, LINEAR = 319, LINES = 320, LINESTRING = 321, 
    LIST = 322, LOAD = 323, LOCAL = 324, LOCALTIME = 325, LOCALTIMESTAMP = 326, 
    LOCK = 327, LOCKED = 328, LOCKS = 329, LOGFILE = 330, LOGS = 331, LONG = 332, 
    LONGBLOB = 333, LONGTEXT = 334, LOOP = 335, LOW_PRIORITY = 336, MANAGED = 337, 
    MASTER = 338, MASTER_AUTO_POSITION = 339, MASTER_BIND = 340, MASTER_COMPRESSION_ALGORITHMS = 341, 
    MASTER_CONNECT_RETRY = 342, MASTER_DELAY = 343, MASTER_HEARTBEAT_PERIOD = 344, 
    MASTER_HOST = 345, MASTER_LOG_FILE = 346, MASTER_LOG_POS = 347, MASTER_PASSWORD = 348, 
    MASTER_PORT = 349, MASTER_PUBLIC_KEY_PATH = 350, MASTER_RETRY_COUNT = 351, 
    MASTER_SERVER_ID = 352, MASTER_SSL = 353, MASTER_SSL_CA = 354, MASTER_SSL_CAPATH = 355, 
    MASTER_SSL_CERT = 356, MASTER_SSL_CIPHER = 357, MASTER_SSL_CRL = 358, 
    MASTER_SSL_CRLPATH = 359, MASTER_SSL_KEY = 360, MASTER_SSL_VERIFY_SERVER_CERT = 361, 
    MASTER_TLS_CIPHERSUITES = 362, MASTER_TLS_VERSION = 363, MASTER_USER = 364, 
    MASTER_ZSTD_COMPRESSION_LEVEL = 365, MATCH = 366, MAXVALUE = 367, MAX_CONNECTIONS_PER_HOUR = 368, 
    MAX_QUERIES_PER_HOUR = 369, MAX_ROWS = 370, MAX_SIZE = 371, MAX_UPDATES_PER_HOUR = 372, 
    MAX_USER_CONNECTIONS = 373, MEDIUM = 374, MEDIUMBLOB = 375, MEDIUMINT = 376, 
    MEDIUMTEXT = 377, MEMBER = 378, MEMORY = 379, MERGE = 380, MESSAGE_TEXT = 381, 
    MICROSECOND = 382, MIDDLEINT = 383, MIGRATE = 384, MINUTE = 385, MINUTE_MICROSECOND = 386, 
    MINUTE_SECOND = 387, MIN_ROWS = 388, MOD = 389, MODE = 390, MODIFIES = 391, 
    MODIFY = 392, MONTH = 393, MULTILINESTRING = 394, MULTIPOINT = 395, 
    MULTIPOLYGON = 396, MUTEX = 397, MYSQL_ERRNO = 398, NAME = 399, NAMES = 400, 
    NATIONAL = 401, NATURAL = 402, NCHAR = 403, NDB = 404, NDBCLUSTER = 405, 
    NESTED = 406, NETWORK_NAMESPACE = 407, NEVER = 408, NEW = 409, NEXT = 410, 
    NO = 411, NODEGROUP = 412, NONE = 413, NOT = 414, NOWAIT = 415, NO_WAIT = 416, 
    NO_WRITE_TO_BINLOG = 417, NTH_VALUE = 418, NTILE = 419, NULL = 420, 
    NULLS = 421, NUMBER = 422, NUMERIC = 423, NVARCHAR = 424, OF = 425, 
    OFF = 426, OFFSET = 427, OJ = 428, OLD = 429, ON = 430, ONE = 431, ONLY = 432, 
    OPEN = 433, OPTIMIZE = 434, OPTIMIZER_COSTS = 435, OPTION = 436, OPTIONAL = 437, 
    OPTIONALLY = 438, OPTIONS = 439, OR = 440, ORDER = 441, ORDINALITY = 442, 
    ORGANIZATION = 443, OTHERS = 444, OUT = 445, OUTER = 446, OUTFILE = 447, 
    OVER = 448, OWNER = 449, PACK_KEYS = 450, PAGE = 451, PARSER = 452, 
    PARTIAL = 453, PARTITION = 454, PARTITIONING = 455, PARTITIONS = 456, 
    PASSWORD = 457, PASSWORD_LOCK_TIME = 458, PATH = 459, PERCENT_RANK = 460, 
    PERSIST = 461, PERSIST_ONLY = 462, PHASE = 463, PLUGIN = 464, PLUGINS = 465, 
    PLUGIN_DIR = 466, POINT = 467, POLYGON = 468, PORT = 469, PRECEDES = 470, 
    PRECEDING = 471, PRECISION = 472, PREPARE = 473, PRESERVE = 474, PREV = 475, 
    PRIMARY = 476, PRIVILEGES = 477, PRIVILEGE_CHECKS_USER = 478, PROCEDURE = 479, 
    PROCESS = 480, PROCESSLIST = 481, PROFILE = 482, PROFILES = 483, PROXY = 484, 
    PURGE = 485, QUARTER = 486, QUERY = 487, QUICK = 488, RANDOM = 489, 
    RANGE = 490, RANK = 491, READ = 492, READS = 493, READ_ONLY = 494, READ_WRITE = 495, 
    REAL = 496, REBUILD = 497, RECOVER = 498, RECURSIVE = 499, REDO_BUFFER_SIZE = 500, 
    REDUNDANT = 501, REFERENCE = 502, REFERENCES = 503, REGEXP = 504, RELAY = 505, 
    RELAYLOG = 506, RELAY_LOG_FILE = 507, RELAY_LOG_POS = 508, RELAY_THREAD = 509, 
    RELEASE = 510, RELOAD = 511, REMOVE = 512, RENAME = 513, REORGANIZE = 514, 
    REPAIR = 515, REPEAT = 516, REPEATABLE = 517, REPLACE = 518, REPLICATE_DO_DB = 519, 
    REPLICATE_DO_TABLE = 520, REPLICATE_IGNORE_DB = 521, REPLICATE_IGNORE_TABLE = 522, 
    REPLICATE_REWRITE_DB = 523, REPLICATE_WILD_DO_TABLE = 524, REPLICATE_WILD_IGNORE_TABLE = 525, 
    REPLICATION = 526, REQUIRE = 527, REQUIRE_ROW_FORMAT = 528, RESET = 529, 
    RESIGNAL = 530, RESOURCE = 531, RESPECT = 532, RESTART = 533, RESTORE = 534, 
    RESTRICT = 535, RESUME = 536, RETAIN = 537, RETURN = 538, RETURNED_SQLSTATE = 539, 
    RETURNING = 540, RETURNS = 541, REUSE = 542, REVERSE = 543, REVOKE = 544, 
    RIGHT = 545, RLIKE = 546, ROLE = 547, ROLLBACK = 548, ROLLUP = 549, 
    ROTATE = 550, ROUTINE = 551, ROW = 552, ROWS = 553, ROW_COUNT = 554, 
    ROW_FORMAT = 555, ROW_NUMBER = 556, RTREE = 557, SAVEPOINT = 558, SCHEDULE = 559, 
    SCHEMA = 560, SCHEMAS = 561, SCHEMA_NAME = 562, SECOND = 563, SECONDARY = 564, 
    SECONDARY_ENGINE = 565, SECONDARY_ENGINE_ATTRIBUTE = 566, SECONDARY_LOAD = 567, 
    SECONDARY_UNLOAD = 568, SECOND_MICROSECOND = 569, SECURITY = 570, SELECT = 571, 
    SENSITIVE = 572, SEPARATOR = 573, SERIAL = 574, SERIALIZABLE = 575, 
    SERVER = 576, SESSION = 577, SET = 578, SHARE = 579, SHOW = 580, SHUTDOWN = 581, 
    SIGNAL = 582, SIGNED = 583, SIMPLE = 584, SKIP_SYMBOL = 585, SLAVE = 586, 
    SLOW = 587, SMALLINT = 588, SNAPSHOT = 589, SOCKET = 590, SOME = 591, 
    SONAME = 592, SOUNDS = 593, SOURCE = 594, SPATIAL = 595, SPECIFIC = 596, 
    SQL = 597, SQL_CACHE = 598, SQLEXCEPTION = 599, SQLSTATE = 600, SQLWARNING = 601, 
    SQL_AFTER_GTIDS = 602, SQL_AFTER_MTS_GAPS = 603, SQL_BEFORE_GTIDS = 604, 
    SQL_BIG_RESULT = 605, SQL_BUFFER_RESULT = 606, SQL_CALC_FOUND_ROWS = 607, 
    SQL_NO_CACHE = 608, SQL_SMALL_RESULT = 609, SQL_THREAD = 610, SQL_TSI_DAY = 611, 
    SQL_TSI_HOUR = 612, SQL_TSI_MINUTE = 613, SQL_TSI_MONTH = 614, SQL_TSI_QUARTER = 615, 
    SQL_TSI_SECOND = 616, SQL_TSI_WEEK = 617, SQL_TSI_YEAR = 618, SRID = 619, 
    SSL = 620, STACKED = 621, START = 622, STARTING = 623, STARTS = 624, 
    STATS_AUTO_RECALC = 625, STATS_PERSISTENT = 626, STATS_SAMPLE_PAGES = 627, 
    STATUS = 628, STOP = 629, STORAGE = 630, STORED = 631, STRAIGHT_JOIN = 632, 
    STREAM = 633, STRING = 634, SUBCLASS_ORIGIN = 635, SUBJECT = 636, SUBPARTITION = 637, 
    SUBPARTITIONS = 638, SUPER = 639, SUSPEND = 640, SWAPS = 641, SWITCHES = 642, 
    SYSTEM = 643, TABLE = 644, TABLES = 645, TABLESPACE = 646, TABLE_CHECKSUM = 647, 
    TABLE_NAME = 648, TEMPORARY = 649, TEMPTABLE = 650, TERMINATED = 651, 
    TEXT = 652, THAN = 653, THEN = 654, THREAD_PRIORITY = 655, TIES = 656, 
    TIME = 657, TIMESTAMP = 658, TIMESTAMPADD = 659, TIMESTAMPDIFF = 660, 
    TINYBLOB = 661, TINYINT = 662, TINYTEXT = 663, TLS = 664, TO = 665, 
    TRAILING = 666, TRANSACTION = 667, TRIGGER = 668, TRIGGERS = 669, TRUE = 670, 
    TRUNCATE = 671, TYPE = 672, TYPES = 673, UNBOUNDED = 674, UNCOMMITTED = 675, 
    UNDEFINED = 676, UNDO = 677, UNDOFILE = 678, UNDO_BUFFER_SIZE = 679, 
    UNICODE = 680, UNINSTALL = 681, UNION = 682, UNIQUE = 683, UNKNOWN = 684, 
    UNLOCK = 685, UNSIGNED = 686, UNTIL = 687, UPDATE = 688, UPGRADE = 689, 
    USAGE = 690, USE = 691, USER = 692, USER_RESOURCES = 693, USE_FRM = 694, 
    USING = 695, UTC_DATE = 696, UTC_TIME = 697, UTC_TIMESTAMP = 698, VALIDATION = 699, 
    VALUE = 700, VALUES = 701, VARBINARY = 702, VARCHAR = 703, VARCHARACTER = 704, 
    VARIABLES = 705, VARYING = 706, VCPU = 707, VIEW = 708, VIRTUAL = 709, 
    VISIBLE = 710, WAIT = 711, WARNINGS = 712, WEEK = 713, WEIGHT_STRING = 714, 
    WHEN = 715, WHERE = 716, WHILE = 717, WINDOW = 718, WITH = 719, WITHOUT = 720, 
    WORK = 721, WRAPPER = 722, WRITE = 723, X509 = 724, XA = 725, XID = 726, 
    XML = 727, XOR = 728, YEAR = 729, YEAR_MONTH = 730, ZEROFILL = 731, 
    M_SHARED = 732, M_EXCLUSIVE = 733, AND_ = 734, OR_ = 735, NOT_ = 736, 
    TILDE_ = 737, VERTICAL_BAR_ = 738, AMPERSAND_ = 739, SIGNED_LEFT_SHIFT_ = 740, 
    SIGNED_RIGHT_SHIFT_ = 741, CARET_ = 742, MOD_ = 743, COLON_ = 744, PLUS_ = 745, 
    MINUS_ = 746, ASTERISK_ = 747, SLASH_ = 748, BACKSLASH_ = 749, DOT_ = 750, 
    DOT_ASTERISK_ = 751, SAFE_EQ_ = 752, DEQ_ = 753, EQ_ = 754, NEQ_ = 755, 
    GT_ = 756, GTE_ = 757, LT_ = 758, LTE_ = 759, POUND_ = 760, LP_ = 761, 
    RP_ = 762, LBE_ = 763, RBE_ = 764, LBT_ = 765, RBT_ = 766, COMMA_ = 767, 
    DQ_ = 768, SQ_ = 769, BQ_ = 770, QUESTION_ = 771, AT_ = 772, SEMI_ = 773, 
    JSON_SEPARATOR = 774, JSON_UNQUOTED_SEPARATOR = 775, BLOCK_COMMENT = 776, 
    INLINE_COMMENT = 777, FOR_GENERATOR = 778, FILESIZE_LITERAL = 779, IDENTIFIER_ = 780, 
    SINGLE_QUOTED_TEXT = 781, DOUBLE_QUOTED_TEXT = 782, NCHAR_TEXT = 783, 
    UNDERSCORE_CHARSET = 784, NUMBER_ = 785, INT_NUM_ = 786, FLOAT_NUM_ = 787, 
    DECIMAL_NUM_ = 788, HEX_DIGIT_ = 789, BIT_NUM_ = 790, NOT_SUPPORT_ = 791
  };

  enum {
    RuleExecute = 0, RuleInsert = 1, RuleInsertSpecification = 2, RuleInsertValuesClause = 3, 
    RuleFields = 4, RuleInsertIdentifier = 5, RuleTableWild = 6, RuleInsertSelectClause = 7, 
    RuleOnDuplicateKeyClause = 8, RuleValueReference = 9, RuleDerivedColumns = 10, 
    RuleReplace = 11, RuleReplaceSpecification = 12, RuleReplaceValuesClause = 13, 
    RuleReplaceSelectClause = 14, RuleUpdate = 15, RuleUpdateSpecification_ = 16, 
    RuleAssignment = 17, RuleSetAssignmentsClause = 18, RuleAssignmentValues = 19, 
    RuleAssignmentValue = 20, RuleBlobValue = 21, RuleDelete_stmt = 22, 
    RuleDeleteSpecification = 23, RuleSingleTableClause = 24, RuleMultipleTablesClause = 25, 
    RuleSelect = 26, RuleSelectWithInto = 27, RuleQueryExpression = 28, 
    RuleQueryExpressionBody = 29, RuleQueryExpressionParens = 30, RuleQueryPrimary = 31, 
    RuleQuerySpecification = 32, RuleCall = 33, RuleDoStatement = 34, RuleHandlerStatement = 35, 
    RuleHandlerOpenStatement = 36, RuleHandlerReadIndexStatement = 37, RuleHandlerReadStatement = 38, 
    RuleHandlerCloseStatement = 39, RuleImportStatement = 40, RuleLoadStatement = 41, 
    RuleLoadDataStatement = 42, RuleLoadXmlStatement = 43, RuleExplicitTable = 44, 
    RuleTableValueConstructor = 45, RuleRowConstructorList = 46, RuleWithClause = 47, 
    RuleCteClause = 48, RuleSelectSpecification = 49, RuleDuplicateSpecification = 50, 
    RuleProjections = 51, RuleProjection = 52, RuleUnqualifiedShorthand = 53, 
    RuleQualifiedShorthand = 54, RuleFromClause = 55, RuleTableReferences = 56, 
    RuleEscapedTableReference = 57, RuleTableReference = 58, RuleTableFactor = 59, 
    RulePartitionNames = 60, RuleIndexHintList = 61, RuleIndexHint = 62, 
    RuleJoinedTable = 63, RuleInnerJoinType = 64, RuleOuterJoinType = 65, 
    RuleNaturalJoinType = 66, RuleJoinSpecification = 67, RuleWhereClause = 68, 
    RuleGroupByClause = 69, RuleHavingClause = 70, RuleLimitClause = 71, 
    RuleLimitRowCount = 72, RuleLimitOffset = 73, RuleWindowClause = 74, 
    RuleWindowItem = 75, RuleSubquery = 76, RuleSelectLinesInto = 77, RuleSelectFieldsInto = 78, 
    RuleSelectIntoExpression = 79, RuleLockClause = 80, RuleLockClauseList = 81, 
    RuleLockStrength = 82, RuleLockedRowAction = 83, RuleTableLockingList = 84, 
    RuleTableIdentOptWild = 85, RuleTableAliasRefList = 86, RuleAlterStatement = 87, 
    RuleCreateTable = 88, RulePartitionClause = 89, RulePartitionTypeDef = 90, 
    RuleSubPartitions = 91, RulePartitionKeyAlgorithm = 92, RuleDuplicateAsQueryExpression = 93, 
    RuleAlterTable = 94, RuleStandaloneAlterTableAction = 95, RuleAlterTableActions = 96, 
    RuleAlterTablePartitionOptions = 97, RuleAlterCommandList = 98, RuleAlterList = 99, 
    RuleCreateTableOptionsSpaceSeparated = 100, RuleAlterListItem = 101, 
    RuleAlterOrderList = 102, RuleTableConstraintDef = 103, RuleAlterCommandsModifierList = 104, 
    RuleAlterCommandsModifier = 105, RuleWithValidation = 106, RuleStandaloneAlterCommands = 107, 
    RuleAlterPartition = 108, RuleConstraintName = 109, RuleTableElementList = 110, 
    RuleTableElement = 111, RuleRestrict = 112, RuleFulltextIndexOption = 113, 
    RuleDropTable = 114, RuleDropIndex = 115, RuleAlterAlgorithmOption = 116, 
    RuleAlterLockOption = 117, RuleTruncateTable = 118, RuleCreateIndex = 119, 
    RuleCreateDatabase = 120, RuleAlterDatabase = 121, RuleCreateDatabaseSpecification_ = 122, 
    RuleAlterDatabaseSpecification_ = 123, RuleDropDatabase = 124, RuleAlterInstance = 125, 
    RuleInstanceAction = 126, RuleChannel = 127, RuleCreateEvent = 128, 
    RuleAlterEvent = 129, RuleDropEvent = 130, RuleCreateFunction = 131, 
    RuleAlterFunction = 132, RuleDropFunction = 133, RuleCreateProcedure = 134, 
    RuleAlterProcedure = 135, RuleDropProcedure = 136, RuleCreateServer = 137, 
    RuleAlterServer = 138, RuleDropServer = 139, RuleCreateView = 140, RuleAlterView = 141, 
    RuleDropView = 142, RuleCreateTablespaceInnodb = 143, RuleCreateTablespaceNdb = 144, 
    RuleAlterTablespaceNdb = 145, RuleAlterTablespaceInnodb = 146, RuleDropTablespace = 147, 
    RuleCreateLogfileGroup = 148, RuleAlterLogfileGroup = 149, RuleDropLogfileGroup = 150, 
    RuleCreateTrigger = 151, RuleDropTrigger = 152, RuleRenameTable = 153, 
    RuleCreateDefinitionClause = 154, RuleColumnDefinition = 155, RuleFieldDefinition = 156, 
    RuleColumnAttribute = 157, RuleCheckConstraint = 158, RuleConstraintEnforcement = 159, 
    RuleGeneratedOption = 160, RuleReferenceDefinition = 161, RuleOnUpdateDelete = 162, 
    RuleReferenceOption = 163, RuleIndexNameAndType = 164, RuleIndexType = 165, 
    RuleIndexTypeClause = 166, RuleKeyParts = 167, RuleKeyPart = 168, RuleKeyPartWithExpression = 169, 
    RuleKeyListWithExpression = 170, RuleIndexOption = 171, RuleCommonIndexOption = 172, 
    RuleVisibility = 173, RuleCreateLikeClause = 174, RuleCreateIndexSpecification = 175, 
    RuleCreateTableOptions = 176, RuleCreateTableOption = 177, RuleCreateSRSStatement = 178, 
    RuleDropSRSStatement = 179, RuleSrsAttribute = 180, RulePlace = 181, 
    RulePartitionDefinitions = 182, RulePartitionDefinition = 183, RulePartitionLessThanValue = 184, 
    RulePartitionValueList = 185, RulePartitionDefinitionOption = 186, RuleSubpartitionDefinition = 187, 
    RuleOwnerStatement = 188, RuleScheduleExpression = 189, RuleTimestampValue = 190, 
    RuleRoutineBody = 191, RuleServerOption = 192, RuleRoutineOption = 193, 
    RuleProcedureParameter = 194, RuleFileSizeLiteral = 195, RuleSimpleStatement = 196, 
    RuleCompoundStatement = 197, RuleValidStatement = 198, RuleBeginStatement = 199, 
    RuleDeclareStatement = 200, RuleFlowControlStatement = 201, RuleCaseStatement = 202, 
    RuleIfStatement = 203, RuleIterateStatement = 204, RuleLeaveStatement = 205, 
    RuleLoopStatement = 206, RuleRepeatStatement = 207, RuleReturnStatement = 208, 
    RuleWhileStatement = 209, RuleCursorStatement = 210, RuleCursorCloseStatement = 211, 
    RuleCursorDeclareStatement = 212, RuleCursorFetchStatement = 213, RuleCursorOpenStatement = 214, 
    RuleConditionHandlingStatement = 215, RuleDeclareConditionStatement = 216, 
    RuleDeclareHandlerStatement = 217, RuleGetDiagnosticsStatement = 218, 
    RuleStatementInformationItem = 219, RuleConditionInformationItem = 220, 
    RuleConditionNumber = 221, RuleStatementInformationItemName = 222, RuleConditionInformationItemName = 223, 
    RuleHandlerAction = 224, RuleConditionValue = 225, RuleResignalStatement = 226, 
    RuleSignalStatement = 227, RuleSignalInformationItem = 228, RuleSetTransaction = 229, 
    RuleSetAutoCommit = 230, RuleAutoCommitValue = 231, RuleBeginTransaction = 232, 
    RuleCommit = 233, RuleRollback = 234, RuleSavepoint = 235, RuleBegin = 236, 
    RuleLock = 237, RuleUnlock = 238, RuleReleaseSavepoint = 239, RuleXa = 240, 
    RuleTransactionCharacteristic = 241, RuleLevel = 242, RuleAccessMode = 243, 
    RuleOptionChain = 244, RuleOptionRelease = 245, RuleTableLock = 246, 
    RuleLockOption = 247, RuleXid = 248, RuleGrant = 249, RuleRevoke = 250, 
    RuleProxyClause = 251, RulePrivilegeClause = 252, RuleRoleClause = 253, 
    RuleAllClause = 254, RulePrivileges = 255, RulePrivilege = 256, RulePrivilegeType = 257, 
    RuleOnObjectClause = 258, RuleObjectType = 259, RulePrivilegeLevel = 260, 
    RuleCreateUser = 261, RuleDefaultRoleClause = 262, RuleRequireClause = 263, 
    RuleConnectOptions = 264, RuleAccountLockPasswordExpireOptions = 265, 
    RuleAccountLockPasswordExpireOption = 266, RuleAlterUser = 267, RuleAlterUserEntry = 268, 
    RuleAlterUserList = 269, RuleDropUser = 270, RuleCreateRole = 271, RuleDropRole = 272, 
    RuleRenameUser = 273, RuleSetDefaultRole = 274, RuleSetRole = 275, RuleSetPassword = 276, 
    RuleAuthOption = 277, RuleWithGrantOption = 278, RuleUserOrRoles = 279, 
    RuleRoles = 280, RuleGrantOption = 281, RuleUserAuthOption = 282, RuleIdentifiedBy = 283, 
    RuleIdentifiedWith = 284, RuleConnectOption = 285, RuleTlsOption = 286, 
    RuleUserFuncAuthOption = 287, RuleUse = 288, RuleHelp = 289, RuleExplain = 290, 
    RuleShowDatabases = 291, RuleShowTables = 292, RuleShowTableStatus = 293, 
    RuleShowColumns = 294, RuleShowIndex = 295, RuleShowCreateTable = 296, 
    RuleFromSchema = 297, RuleFromTable = 298, RuleShowLike = 299, RuleShowColumnLike = 300, 
    RuleShowWhereClause = 301, RuleShowFilter = 302, RuleShowProfileType = 303, 
    RuleSetVariable = 304, RuleVariableAssign = 305, RuleShowBinaryLogs = 306, 
    RuleShowBinlogEvents = 307, RuleShowCharacterSet = 308, RuleShowCollation = 309, 
    RuleShowCreateDatabase = 310, RuleShowCreateEvent = 311, RuleShowCreateFunction = 312, 
    RuleShowCreateProcedure = 313, RuleShowCreateTrigger = 314, RuleShowCreateUser = 315, 
    RuleShowCreateView = 316, RuleShowEngine = 317, RuleShowEngines = 318, 
    RuleShowErrors = 319, RuleShowEvents = 320, RuleShowFunctionCode = 321, 
    RuleShowFunctionStatus = 322, RuleShowGrant = 323, RuleShowMasterStatus = 324, 
    RuleShowOpenTables = 325, RuleShowPlugins = 326, RuleShowPrivileges = 327, 
    RuleShowProcedureCode = 328, RuleShowProcedureStatus = 329, RuleShowProcesslist = 330, 
    RuleShowProfile = 331, RuleShowProfiles = 332, RuleShowRelaylogEvent = 333, 
    RuleShowSlavehost = 334, RuleShowSlaveStatus = 335, RuleShowStatus = 336, 
    RuleShowTrriggers = 337, RuleShowVariables = 338, RuleShowWarnings = 339, 
    RuleSetCharacter = 340, RuleSetName = 341, RuleClone = 342, RuleCloneAction = 343, 
    RuleCreateUdf = 344, RuleInstall = 345, RuleUninstall = 346, RuleInstallComponent = 347, 
    RuleInstallPlugin = 348, RuleUninstallComponent = 349, RuleUninstallPlugin = 350, 
    RuleAnalyzeTable = 351, RuleHistogram = 352, RuleCheckTable = 353, RuleCheckTableOption = 354, 
    RuleChecksumTable = 355, RuleOptimizeTable = 356, RuleRepairTable = 357, 
    RuleAlterResourceGroup = 358, RuleVcpuSpec = 359, RuleCreateResourceGroup = 360, 
    RuleDropResourceGroup = 361, RuleSetResourceGroup = 362, RuleBinlog = 363, 
    RuleCacheIndex = 364, RuleTableIndexList = 365, RulePartitionList = 366, 
    RuleFlush = 367, RuleFlushOption = 368, RuleTablesOption = 369, RuleKill = 370, 
    RuleLoadIndexInfo = 371, RuleResetStatement = 372, RuleResetOption = 373, 
    RuleResetPersist = 374, RuleRestart = 375, RuleShutdown = 376, RuleExplainType = 377, 
    RuleExplainableStatement = 378, RuleFormatName = 379, RuleShow = 380, 
    RuleChange = 381, RuleChangeMasterTo = 382, RuleChangeReplicationFilter = 383, 
    RuleStartSlave = 384, RuleStopSlave = 385, RuleGroupReplication = 386, 
    RuleStartGroupReplication = 387, RuleStopGroupReplication = 388, RulePurgeBinaryLog = 389, 
    RuleThreadTypes = 390, RuleThreadType = 391, RuleUtilOption = 392, RuleConnectionOptions = 393, 
    RuleMasterDefs = 394, RuleMasterDef = 395, RuleIgnoreServerIds = 396, 
    RuleIgnoreServerId = 397, RuleFilterDefs = 398, RuleFilterDef = 399, 
    RuleWildTables = 400, RuleWildTable = 401, RuleParameterMarker = 402, 
    RuleCustomKeyword = 403, RuleLiterals = 404, RuleString_ = 405, RuleStringLiterals = 406, 
    RuleNumberLiterals = 407, RuleTemporalLiterals = 408, RuleHexadecimalLiterals = 409, 
    RuleBitValueLiterals = 410, RuleBooleanLiterals = 411, RuleNullValueLiterals = 412, 
    RuleCollationName = 413, RuleIdentifier = 414, RuleUnreservedWord = 415, 
    RuleTextOrIdentifier = 416, RuleVariable = 417, RuleUserVariable = 418, 
    RuleSystemVariable = 419, RuleScope = 420, RuleInternalVariableName = 421, 
    RuleSetExprOrDefault = 422, RuleSchemaName = 423, RuleSchemaNames = 424, 
    RuleCharsetName = 425, RuleSchemaPairs = 426, RuleSchemaPair = 427, 
    RuleTableName = 428, RuleColumnName = 429, RuleIndexName = 430, RuleUserIdentifierOrText = 431, 
    RuleUserName = 432, RuleEventName = 433, RuleServerName = 434, RuleWrapperName = 435, 
    RuleFunctionName = 436, RuleViewName = 437, RuleOwner = 438, RuleAlias = 439, 
    RuleName = 440, RuleTableList = 441, RuleViewNames = 442, RuleColumnNames = 443, 
    RuleGroupName = 444, RuleRoutineName = 445, RuleShardLibraryName = 446, 
    RuleComponentName = 447, RulePluginName = 448, RuleHostName = 449, RulePort = 450, 
    RuleCloneInstance = 451, RuleCloneDir = 452, RuleChannelName = 453, 
    RuleLogName = 454, RuleRoleName = 455, RuleEngineRef = 456, RuleTriggerName = 457, 
    RuleTriggerTime = 458, RuleTableOrTables = 459, RuleUserOrRole = 460, 
    RulePartitionName = 461, RuleIdentifierList = 462, RuleAllOrPartitionNameList = 463, 
    RuleTriggerEvent = 464, RuleTriggerOrder = 465, RuleExpr = 466, RuleLogicalOperator = 467, 
    RuleNotOperator = 468, RuleBooleanPrimary = 469, RuleComparisonOperator = 470, 
    RulePredicate = 471, RuleBitExpr = 472, RuleSimpleExpr = 473, RuleColumnRef = 474, 
    RuleColumnRefList = 475, RuleFunctionCall = 476, RuleAggregationFunction = 477, 
    RuleAggregationFunctionName = 478, RuleDistinct = 479, RuleOverClause = 480, 
    RuleWindowSpecification = 481, RuleFrameClause = 482, RuleFrameStart = 483, 
    RuleFrameEnd = 484, RuleFrameBetween = 485, RuleSpecialFunction = 486, 
    RuleCurrentUserFunction = 487, RuleGroupConcatFunction = 488, RuleWindowFunction = 489, 
    RuleWindowingClause = 490, RuleLeadLagInfo = 491, RuleNullTreatment = 492, 
    RuleCheckType = 493, RuleRepairType = 494, RuleCastFunction = 495, RuleConvertFunction = 496, 
    RuleCastType = 497, RuleNchar = 498, RulePositionFunction = 499, RuleSubstringFunction = 500, 
    RuleExtractFunction = 501, RuleCharFunction = 502, RuleTrimFunction = 503, 
    RuleValuesFunction = 504, RuleWeightStringFunction = 505, RuleLevelClause = 506, 
    RuleLevelInWeightListElement = 507, RuleRegularFunction = 508, RuleShorthandRegularFunction = 509, 
    RuleCompleteRegularFunction = 510, RuleRegularFunctionName = 511, RuleMatchExpression = 512, 
    RuleMatchSearchModifier = 513, RuleCaseExpression = 514, RuleDatetimeExpr = 515, 
    RuleBinaryLogFileIndexNumber = 516, RuleCaseWhen = 517, RuleCaseElse = 518, 
    RuleIntervalExpression = 519, RuleIntervalValue = 520, RuleIntervalUnit = 521, 
    RuleOrderByClause = 522, RuleOrderByItem = 523, RuleDataType = 524, 
    RuleStringList = 525, RuleTextString = 526, RuleTextStringHash = 527, 
    RuleFieldOptions = 528, RulePrecision = 529, RuleTypeDatetimePrecision = 530, 
    RuleCharsetWithOptBinary = 531, RuleAscii = 532, RuleUnicode = 533, 
    RuleCharset = 534, RuleDefaultCollation = 535, RuleDefaultEncryption = 536, 
    RuleDefaultCharset = 537, RuleSignedLiteral = 538, RuleNow = 539, RuleColumnFormat = 540, 
    RuleStorageMedia = 541, RuleDirection = 542, RuleKeyOrIndex = 543, RuleFieldLength = 544, 
    RuleCharacterSet = 545, RuleCollateClause = 546, RuleFieldOrVarSpec = 547, 
    RuleNotExistClause = 548, RuleExistClause = 549, RuleConnectionId = 550, 
    RuleLabelName = 551, RuleCursorName = 552, RuleConditionName = 553, 
    RuleUnionOption = 554, RuleNoWriteToBinLog = 555, RuleChannelOption = 556, 
    RulePreparedStatement = 557, RuleExecuteStatement = 558, RuleExecuteVarList = 559
  };

  MySQLStatementParser(antlr4::TokenStream *input);
  ~MySQLStatementParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ExecuteContext;
  class InsertContext;
  class InsertSpecificationContext;
  class InsertValuesClauseContext;
  class FieldsContext;
  class InsertIdentifierContext;
  class TableWildContext;
  class InsertSelectClauseContext;
  class OnDuplicateKeyClauseContext;
  class ValueReferenceContext;
  class DerivedColumnsContext;
  class ReplaceContext;
  class ReplaceSpecificationContext;
  class ReplaceValuesClauseContext;
  class ReplaceSelectClauseContext;
  class UpdateContext;
  class UpdateSpecification_Context;
  class AssignmentContext;
  class SetAssignmentsClauseContext;
  class AssignmentValuesContext;
  class AssignmentValueContext;
  class BlobValueContext;
  class Delete_stmtContext;
  class DeleteSpecificationContext;
  class SingleTableClauseContext;
  class MultipleTablesClauseContext;
  class SelectContext;
  class SelectWithIntoContext;
  class QueryExpressionContext;
  class QueryExpressionBodyContext;
  class QueryExpressionParensContext;
  class QueryPrimaryContext;
  class QuerySpecificationContext;
  class CallContext;
  class DoStatementContext;
  class HandlerStatementContext;
  class HandlerOpenStatementContext;
  class HandlerReadIndexStatementContext;
  class HandlerReadStatementContext;
  class HandlerCloseStatementContext;
  class ImportStatementContext;
  class LoadStatementContext;
  class LoadDataStatementContext;
  class LoadXmlStatementContext;
  class ExplicitTableContext;
  class TableValueConstructorContext;
  class RowConstructorListContext;
  class WithClauseContext;
  class CteClauseContext;
  class SelectSpecificationContext;
  class DuplicateSpecificationContext;
  class ProjectionsContext;
  class ProjectionContext;
  class UnqualifiedShorthandContext;
  class QualifiedShorthandContext;
  class FromClauseContext;
  class TableReferencesContext;
  class EscapedTableReferenceContext;
  class TableReferenceContext;
  class TableFactorContext;
  class PartitionNamesContext;
  class IndexHintListContext;
  class IndexHintContext;
  class JoinedTableContext;
  class InnerJoinTypeContext;
  class OuterJoinTypeContext;
  class NaturalJoinTypeContext;
  class JoinSpecificationContext;
  class WhereClauseContext;
  class GroupByClauseContext;
  class HavingClauseContext;
  class LimitClauseContext;
  class LimitRowCountContext;
  class LimitOffsetContext;
  class WindowClauseContext;
  class WindowItemContext;
  class SubqueryContext;
  class SelectLinesIntoContext;
  class SelectFieldsIntoContext;
  class SelectIntoExpressionContext;
  class LockClauseContext;
  class LockClauseListContext;
  class LockStrengthContext;
  class LockedRowActionContext;
  class TableLockingListContext;
  class TableIdentOptWildContext;
  class TableAliasRefListContext;
  class AlterStatementContext;
  class CreateTableContext;
  class PartitionClauseContext;
  class PartitionTypeDefContext;
  class SubPartitionsContext;
  class PartitionKeyAlgorithmContext;
  class DuplicateAsQueryExpressionContext;
  class AlterTableContext;
  class StandaloneAlterTableActionContext;
  class AlterTableActionsContext;
  class AlterTablePartitionOptionsContext;
  class AlterCommandListContext;
  class AlterListContext;
  class CreateTableOptionsSpaceSeparatedContext;
  class AlterListItemContext;
  class AlterOrderListContext;
  class TableConstraintDefContext;
  class AlterCommandsModifierListContext;
  class AlterCommandsModifierContext;
  class WithValidationContext;
  class StandaloneAlterCommandsContext;
  class AlterPartitionContext;
  class ConstraintNameContext;
  class TableElementListContext;
  class TableElementContext;
  class RestrictContext;
  class FulltextIndexOptionContext;
  class DropTableContext;
  class DropIndexContext;
  class AlterAlgorithmOptionContext;
  class AlterLockOptionContext;
  class TruncateTableContext;
  class CreateIndexContext;
  class CreateDatabaseContext;
  class AlterDatabaseContext;
  class CreateDatabaseSpecification_Context;
  class AlterDatabaseSpecification_Context;
  class DropDatabaseContext;
  class AlterInstanceContext;
  class InstanceActionContext;
  class ChannelContext;
  class CreateEventContext;
  class AlterEventContext;
  class DropEventContext;
  class CreateFunctionContext;
  class AlterFunctionContext;
  class DropFunctionContext;
  class CreateProcedureContext;
  class AlterProcedureContext;
  class DropProcedureContext;
  class CreateServerContext;
  class AlterServerContext;
  class DropServerContext;
  class CreateViewContext;
  class AlterViewContext;
  class DropViewContext;
  class CreateTablespaceInnodbContext;
  class CreateTablespaceNdbContext;
  class AlterTablespaceNdbContext;
  class AlterTablespaceInnodbContext;
  class DropTablespaceContext;
  class CreateLogfileGroupContext;
  class AlterLogfileGroupContext;
  class DropLogfileGroupContext;
  class CreateTriggerContext;
  class DropTriggerContext;
  class RenameTableContext;
  class CreateDefinitionClauseContext;
  class ColumnDefinitionContext;
  class FieldDefinitionContext;
  class ColumnAttributeContext;
  class CheckConstraintContext;
  class ConstraintEnforcementContext;
  class GeneratedOptionContext;
  class ReferenceDefinitionContext;
  class OnUpdateDeleteContext;
  class ReferenceOptionContext;
  class IndexNameAndTypeContext;
  class IndexTypeContext;
  class IndexTypeClauseContext;
  class KeyPartsContext;
  class KeyPartContext;
  class KeyPartWithExpressionContext;
  class KeyListWithExpressionContext;
  class IndexOptionContext;
  class CommonIndexOptionContext;
  class VisibilityContext;
  class CreateLikeClauseContext;
  class CreateIndexSpecificationContext;
  class CreateTableOptionsContext;
  class CreateTableOptionContext;
  class CreateSRSStatementContext;
  class DropSRSStatementContext;
  class SrsAttributeContext;
  class PlaceContext;
  class PartitionDefinitionsContext;
  class PartitionDefinitionContext;
  class PartitionLessThanValueContext;
  class PartitionValueListContext;
  class PartitionDefinitionOptionContext;
  class SubpartitionDefinitionContext;
  class OwnerStatementContext;
  class ScheduleExpressionContext;
  class TimestampValueContext;
  class RoutineBodyContext;
  class ServerOptionContext;
  class RoutineOptionContext;
  class ProcedureParameterContext;
  class FileSizeLiteralContext;
  class SimpleStatementContext;
  class CompoundStatementContext;
  class ValidStatementContext;
  class BeginStatementContext;
  class DeclareStatementContext;
  class FlowControlStatementContext;
  class CaseStatementContext;
  class IfStatementContext;
  class IterateStatementContext;
  class LeaveStatementContext;
  class LoopStatementContext;
  class RepeatStatementContext;
  class ReturnStatementContext;
  class WhileStatementContext;
  class CursorStatementContext;
  class CursorCloseStatementContext;
  class CursorDeclareStatementContext;
  class CursorFetchStatementContext;
  class CursorOpenStatementContext;
  class ConditionHandlingStatementContext;
  class DeclareConditionStatementContext;
  class DeclareHandlerStatementContext;
  class GetDiagnosticsStatementContext;
  class StatementInformationItemContext;
  class ConditionInformationItemContext;
  class ConditionNumberContext;
  class StatementInformationItemNameContext;
  class ConditionInformationItemNameContext;
  class HandlerActionContext;
  class ConditionValueContext;
  class ResignalStatementContext;
  class SignalStatementContext;
  class SignalInformationItemContext;
  class SetTransactionContext;
  class SetAutoCommitContext;
  class AutoCommitValueContext;
  class BeginTransactionContext;
  class CommitContext;
  class RollbackContext;
  class SavepointContext;
  class BeginContext;
  class LockContext;
  class UnlockContext;
  class ReleaseSavepointContext;
  class XaContext;
  class TransactionCharacteristicContext;
  class LevelContext;
  class AccessModeContext;
  class OptionChainContext;
  class OptionReleaseContext;
  class TableLockContext;
  class LockOptionContext;
  class XidContext;
  class GrantContext;
  class RevokeContext;
  class ProxyClauseContext;
  class PrivilegeClauseContext;
  class RoleClauseContext;
  class AllClauseContext;
  class PrivilegesContext;
  class PrivilegeContext;
  class PrivilegeTypeContext;
  class OnObjectClauseContext;
  class ObjectTypeContext;
  class PrivilegeLevelContext;
  class CreateUserContext;
  class DefaultRoleClauseContext;
  class RequireClauseContext;
  class ConnectOptionsContext;
  class AccountLockPasswordExpireOptionsContext;
  class AccountLockPasswordExpireOptionContext;
  class AlterUserContext;
  class AlterUserEntryContext;
  class AlterUserListContext;
  class DropUserContext;
  class CreateRoleContext;
  class DropRoleContext;
  class RenameUserContext;
  class SetDefaultRoleContext;
  class SetRoleContext;
  class SetPasswordContext;
  class AuthOptionContext;
  class WithGrantOptionContext;
  class UserOrRolesContext;
  class RolesContext;
  class GrantOptionContext;
  class UserAuthOptionContext;
  class IdentifiedByContext;
  class IdentifiedWithContext;
  class ConnectOptionContext;
  class TlsOptionContext;
  class UserFuncAuthOptionContext;
  class UseContext;
  class HelpContext;
  class ExplainContext;
  class ShowDatabasesContext;
  class ShowTablesContext;
  class ShowTableStatusContext;
  class ShowColumnsContext;
  class ShowIndexContext;
  class ShowCreateTableContext;
  class FromSchemaContext;
  class FromTableContext;
  class ShowLikeContext;
  class ShowColumnLikeContext;
  class ShowWhereClauseContext;
  class ShowFilterContext;
  class ShowProfileTypeContext;
  class SetVariableContext;
  class VariableAssignContext;
  class ShowBinaryLogsContext;
  class ShowBinlogEventsContext;
  class ShowCharacterSetContext;
  class ShowCollationContext;
  class ShowCreateDatabaseContext;
  class ShowCreateEventContext;
  class ShowCreateFunctionContext;
  class ShowCreateProcedureContext;
  class ShowCreateTriggerContext;
  class ShowCreateUserContext;
  class ShowCreateViewContext;
  class ShowEngineContext;
  class ShowEnginesContext;
  class ShowErrorsContext;
  class ShowEventsContext;
  class ShowFunctionCodeContext;
  class ShowFunctionStatusContext;
  class ShowGrantContext;
  class ShowMasterStatusContext;
  class ShowOpenTablesContext;
  class ShowPluginsContext;
  class ShowPrivilegesContext;
  class ShowProcedureCodeContext;
  class ShowProcedureStatusContext;
  class ShowProcesslistContext;
  class ShowProfileContext;
  class ShowProfilesContext;
  class ShowRelaylogEventContext;
  class ShowSlavehostContext;
  class ShowSlaveStatusContext;
  class ShowStatusContext;
  class ShowTrriggersContext;
  class ShowVariablesContext;
  class ShowWarningsContext;
  class SetCharacterContext;
  class SetNameContext;
  class CloneContext;
  class CloneActionContext;
  class CreateUdfContext;
  class InstallContext;
  class UninstallContext;
  class InstallComponentContext;
  class InstallPluginContext;
  class UninstallComponentContext;
  class UninstallPluginContext;
  class AnalyzeTableContext;
  class HistogramContext;
  class CheckTableContext;
  class CheckTableOptionContext;
  class ChecksumTableContext;
  class OptimizeTableContext;
  class RepairTableContext;
  class AlterResourceGroupContext;
  class VcpuSpecContext;
  class CreateResourceGroupContext;
  class DropResourceGroupContext;
  class SetResourceGroupContext;
  class BinlogContext;
  class CacheIndexContext;
  class TableIndexListContext;
  class PartitionListContext;
  class FlushContext;
  class FlushOptionContext;
  class TablesOptionContext;
  class KillContext;
  class LoadIndexInfoContext;
  class ResetStatementContext;
  class ResetOptionContext;
  class ResetPersistContext;
  class RestartContext;
  class ShutdownContext;
  class ExplainTypeContext;
  class ExplainableStatementContext;
  class FormatNameContext;
  class ShowContext;
  class ChangeContext;
  class ChangeMasterToContext;
  class ChangeReplicationFilterContext;
  class StartSlaveContext;
  class StopSlaveContext;
  class GroupReplicationContext;
  class StartGroupReplicationContext;
  class StopGroupReplicationContext;
  class PurgeBinaryLogContext;
  class ThreadTypesContext;
  class ThreadTypeContext;
  class UtilOptionContext;
  class ConnectionOptionsContext;
  class MasterDefsContext;
  class MasterDefContext;
  class IgnoreServerIdsContext;
  class IgnoreServerIdContext;
  class FilterDefsContext;
  class FilterDefContext;
  class WildTablesContext;
  class WildTableContext;
  class ParameterMarkerContext;
  class CustomKeywordContext;
  class LiteralsContext;
  class String_Context;
  class StringLiteralsContext;
  class NumberLiteralsContext;
  class TemporalLiteralsContext;
  class HexadecimalLiteralsContext;
  class BitValueLiteralsContext;
  class BooleanLiteralsContext;
  class NullValueLiteralsContext;
  class CollationNameContext;
  class IdentifierContext;
  class UnreservedWordContext;
  class TextOrIdentifierContext;
  class VariableContext;
  class UserVariableContext;
  class SystemVariableContext;
  class ScopeContext;
  class InternalVariableNameContext;
  class SetExprOrDefaultContext;
  class SchemaNameContext;
  class SchemaNamesContext;
  class CharsetNameContext;
  class SchemaPairsContext;
  class SchemaPairContext;
  class TableNameContext;
  class ColumnNameContext;
  class IndexNameContext;
  class UserIdentifierOrTextContext;
  class UserNameContext;
  class EventNameContext;
  class ServerNameContext;
  class WrapperNameContext;
  class FunctionNameContext;
  class ViewNameContext;
  class OwnerContext;
  class AliasContext;
  class NameContext;
  class TableListContext;
  class ViewNamesContext;
  class ColumnNamesContext;
  class GroupNameContext;
  class RoutineNameContext;
  class ShardLibraryNameContext;
  class ComponentNameContext;
  class PluginNameContext;
  class HostNameContext;
  class PortContext;
  class CloneInstanceContext;
  class CloneDirContext;
  class ChannelNameContext;
  class LogNameContext;
  class RoleNameContext;
  class EngineRefContext;
  class TriggerNameContext;
  class TriggerTimeContext;
  class TableOrTablesContext;
  class UserOrRoleContext;
  class PartitionNameContext;
  class IdentifierListContext;
  class AllOrPartitionNameListContext;
  class TriggerEventContext;
  class TriggerOrderContext;
  class ExprContext;
  class LogicalOperatorContext;
  class NotOperatorContext;
  class BooleanPrimaryContext;
  class ComparisonOperatorContext;
  class PredicateContext;
  class BitExprContext;
  class SimpleExprContext;
  class ColumnRefContext;
  class ColumnRefListContext;
  class FunctionCallContext;
  class AggregationFunctionContext;
  class AggregationFunctionNameContext;
  class DistinctContext;
  class OverClauseContext;
  class WindowSpecificationContext;
  class FrameClauseContext;
  class FrameStartContext;
  class FrameEndContext;
  class FrameBetweenContext;
  class SpecialFunctionContext;
  class CurrentUserFunctionContext;
  class GroupConcatFunctionContext;
  class WindowFunctionContext;
  class WindowingClauseContext;
  class LeadLagInfoContext;
  class NullTreatmentContext;
  class CheckTypeContext;
  class RepairTypeContext;
  class CastFunctionContext;
  class ConvertFunctionContext;
  class CastTypeContext;
  class NcharContext;
  class PositionFunctionContext;
  class SubstringFunctionContext;
  class ExtractFunctionContext;
  class CharFunctionContext;
  class TrimFunctionContext;
  class ValuesFunctionContext;
  class WeightStringFunctionContext;
  class LevelClauseContext;
  class LevelInWeightListElementContext;
  class RegularFunctionContext;
  class ShorthandRegularFunctionContext;
  class CompleteRegularFunctionContext;
  class RegularFunctionNameContext;
  class MatchExpressionContext;
  class MatchSearchModifierContext;
  class CaseExpressionContext;
  class DatetimeExprContext;
  class BinaryLogFileIndexNumberContext;
  class CaseWhenContext;
  class CaseElseContext;
  class IntervalExpressionContext;
  class IntervalValueContext;
  class IntervalUnitContext;
  class OrderByClauseContext;
  class OrderByItemContext;
  class DataTypeContext;
  class StringListContext;
  class TextStringContext;
  class TextStringHashContext;
  class FieldOptionsContext;
  class PrecisionContext;
  class TypeDatetimePrecisionContext;
  class CharsetWithOptBinaryContext;
  class AsciiContext;
  class UnicodeContext;
  class CharsetContext;
  class DefaultCollationContext;
  class DefaultEncryptionContext;
  class DefaultCharsetContext;
  class SignedLiteralContext;
  class NowContext;
  class ColumnFormatContext;
  class StorageMediaContext;
  class DirectionContext;
  class KeyOrIndexContext;
  class FieldLengthContext;
  class CharacterSetContext;
  class CollateClauseContext;
  class FieldOrVarSpecContext;
  class NotExistClauseContext;
  class ExistClauseContext;
  class ConnectionIdContext;
  class LabelNameContext;
  class CursorNameContext;
  class ConditionNameContext;
  class UnionOptionContext;
  class NoWriteToBinLogContext;
  class ChannelOptionContext;
  class PreparedStatementContext;
  class ExecuteStatementContext;
  class ExecuteVarListContext; 

  class  ExecuteContext : public antlr4::ParserRuleContext {
  public:
    ExecuteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SelectContext *select();
    InsertContext *insert();
    UpdateContext *update();
    Delete_stmtContext *delete_stmt();
    ReplaceContext *replace();
    BinlogContext *binlog();
    CreateTableContext *createTable();
    AlterStatementContext *alterStatement();
    RepairTableContext *repairTable();
    DropTableContext *dropTable();
    TruncateTableContext *truncateTable();
    CreateIndexContext *createIndex();
    DropIndexContext *dropIndex();
    CreateProcedureContext *createProcedure();
    DropProcedureContext *dropProcedure();
    CreateFunctionContext *createFunction();
    DropFunctionContext *dropFunction();
    CreateDatabaseContext *createDatabase();
    DropDatabaseContext *dropDatabase();
    CreateEventContext *createEvent();
    DropEventContext *dropEvent();
    CreateLogfileGroupContext *createLogfileGroup();
    DropLogfileGroupContext *dropLogfileGroup();
    CreateServerContext *createServer();
    DropServerContext *dropServer();
    CreateViewContext *createView();
    DropViewContext *dropView();
    CreateTriggerContext *createTrigger();
    DropTriggerContext *dropTrigger();
    AlterResourceGroupContext *alterResourceGroup();
    CreateResourceGroupContext *createResourceGroup();
    DropResourceGroupContext *dropResourceGroup();
    PreparedStatementContext *preparedStatement();
    SetTransactionContext *setTransaction();
    BeginTransactionContext *beginTransaction();
    SetAutoCommitContext *setAutoCommit();
    CommitContext *commit();
    RollbackContext *rollback();
    SavepointContext *savepoint();
    GrantContext *grant();
    RevokeContext *revoke();
    CreateUserContext *createUser();
    DropUserContext *dropUser();
    AlterUserContext *alterUser();
    RenameUserContext *renameUser();
    CreateRoleContext *createRole();
    DropRoleContext *dropRole();
    SetDefaultRoleContext *setDefaultRole();
    SetRoleContext *setRole();
    CreateTablespaceInnodbContext *createTablespaceInnodb();
    CreateTablespaceNdbContext *createTablespaceNdb();
    DropTablespaceContext *dropTablespace();
    CreateSRSStatementContext *createSRSStatement();
    DropSRSStatementContext *dropSRSStatement();
    FlushContext *flush();
    GetDiagnosticsStatementContext *getDiagnosticsStatement();
    GroupReplicationContext *groupReplication();
    HandlerStatementContext *handlerStatement();
    HelpContext *help();
    ImportStatementContext *importStatement();
    InstallContext *install();
    KillContext *kill();
    LoadStatementContext *loadStatement();
    LockContext *lock();
    CacheIndexContext *cacheIndex();
    LoadIndexInfoContext *loadIndexInfo();
    OptimizeTableContext *optimizeTable();
    PurgeBinaryLogContext *purgeBinaryLog();
    ReleaseSavepointContext *releaseSavepoint();
    ResetStatementContext *resetStatement();
    SetPasswordContext *setPassword();
    SetResourceGroupContext *setResourceGroup();
    ResignalStatementContext *resignalStatement();
    SignalStatementContext *signalStatement();
    RestartContext *restart();
    ShutdownContext *shutdown();
    BeginContext *begin();
    UseContext *use();
    ExplainContext *explain();
    DoStatementContext *doStatement();
    ShowContext *show();
    SetVariableContext *setVariable();
    SetNameContext *setName();
    SetCharacterContext *setCharacter();
    CallContext *call();
    ChangeContext *change();
    CheckTableContext *checkTable();
    ChecksumTableContext *checksumTable();
    CloneContext *clone();
    StartSlaveContext *startSlave();
    StopSlaveContext *stopSlave();
    AnalyzeTableContext *analyzeTable();
    RenameTableContext *renameTable();
    UninstallContext *uninstall();
    UnlockContext *unlock();
    XaContext *xa();
    antlr4::tree::TerminalNode *SEMI_();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExecuteContext* execute();

  class  InsertContext : public antlr4::ParserRuleContext {
  public:
    InsertContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INSERT();
    InsertSpecificationContext *insertSpecification();
    TableNameContext *tableName();
    InsertValuesClauseContext *insertValuesClause();
    SetAssignmentsClauseContext *setAssignmentsClause();
    InsertSelectClauseContext *insertSelectClause();
    antlr4::tree::TerminalNode *INTO();
    PartitionNamesContext *partitionNames();
    OnDuplicateKeyClauseContext *onDuplicateKeyClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InsertContext* insert();

  class  InsertSpecificationContext : public antlr4::ParserRuleContext {
  public:
    InsertSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *LOW_PRIORITY();
    antlr4::tree::TerminalNode *DELAYED();
    antlr4::tree::TerminalNode *HIGH_PRIORITY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InsertSpecificationContext* insertSpecification();

  class  InsertValuesClauseContext : public antlr4::ParserRuleContext {
  public:
    InsertValuesClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VALUES();
    antlr4::tree::TerminalNode *VALUE();
    std::vector<AssignmentValuesContext *> assignmentValues();
    AssignmentValuesContext* assignmentValues(size_t i);
    RowConstructorListContext *rowConstructorList();
    antlr4::tree::TerminalNode *LP_();
    antlr4::tree::TerminalNode *RP_();
    ValueReferenceContext *valueReference();
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);
    FieldsContext *fields();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InsertValuesClauseContext* insertValuesClause();

  class  FieldsContext : public antlr4::ParserRuleContext {
  public:
    FieldsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<InsertIdentifierContext *> insertIdentifier();
    InsertIdentifierContext* insertIdentifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldsContext* fields();

  class  InsertIdentifierContext : public antlr4::ParserRuleContext {
  public:
    InsertIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColumnRefContext *columnRef();
    TableWildContext *tableWild();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InsertIdentifierContext* insertIdentifier();

  class  TableWildContext : public antlr4::ParserRuleContext {
  public:
    TableWildContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT_();
    antlr4::tree::TerminalNode* DOT_(size_t i);
    antlr4::tree::TerminalNode *ASTERISK_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableWildContext* tableWild();

  class  InsertSelectClauseContext : public antlr4::ParserRuleContext {
  public:
    InsertSelectClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SelectContext *select();
    ValueReferenceContext *valueReference();
    antlr4::tree::TerminalNode *LP_();
    antlr4::tree::TerminalNode *RP_();
    FieldsContext *fields();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InsertSelectClauseContext* insertSelectClause();

  class  OnDuplicateKeyClauseContext : public antlr4::ParserRuleContext {
  public:
    OnDuplicateKeyClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *DUPLICATE();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *UPDATE();
    std::vector<AssignmentContext *> assignment();
    AssignmentContext* assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OnDuplicateKeyClauseContext* onDuplicateKeyClause();

  class  ValueReferenceContext : public antlr4::ParserRuleContext {
  public:
    ValueReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AS();
    AliasContext *alias();
    DerivedColumnsContext *derivedColumns();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValueReferenceContext* valueReference();

  class  DerivedColumnsContext : public antlr4::ParserRuleContext {
  public:
    DerivedColumnsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP_();
    std::vector<AliasContext *> alias();
    AliasContext* alias(size_t i);
    antlr4::tree::TerminalNode *RP_();
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DerivedColumnsContext* derivedColumns();

  class  ReplaceContext : public antlr4::ParserRuleContext {
  public:
    ReplaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPLACE();
    TableNameContext *tableName();
    ReplaceValuesClauseContext *replaceValuesClause();
    SetAssignmentsClauseContext *setAssignmentsClause();
    ReplaceSelectClauseContext *replaceSelectClause();
    ReplaceSpecificationContext *replaceSpecification();
    antlr4::tree::TerminalNode *INTO();
    PartitionNamesContext *partitionNames();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReplaceContext* replace();

  class  ReplaceSpecificationContext : public antlr4::ParserRuleContext {
  public:
    ReplaceSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOW_PRIORITY();
    antlr4::tree::TerminalNode *DELAYED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReplaceSpecificationContext* replaceSpecification();

  class  ReplaceValuesClauseContext : public antlr4::ParserRuleContext {
  public:
    ReplaceValuesClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VALUES();
    antlr4::tree::TerminalNode *VALUE();
    std::vector<AssignmentValuesContext *> assignmentValues();
    AssignmentValuesContext* assignmentValues(size_t i);
    RowConstructorListContext *rowConstructorList();
    antlr4::tree::TerminalNode *LP_();
    antlr4::tree::TerminalNode *RP_();
    ValueReferenceContext *valueReference();
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);
    FieldsContext *fields();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReplaceValuesClauseContext* replaceValuesClause();

  class  ReplaceSelectClauseContext : public antlr4::ParserRuleContext {
  public:
    ReplaceSelectClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SelectContext *select();
    ValueReferenceContext *valueReference();
    antlr4::tree::TerminalNode *LP_();
    antlr4::tree::TerminalNode *RP_();
    FieldsContext *fields();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReplaceSelectClauseContext* replaceSelectClause();

  class  UpdateContext : public antlr4::ParserRuleContext {
  public:
    UpdateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UPDATE();
    UpdateSpecification_Context *updateSpecification_();
    TableReferencesContext *tableReferences();
    SetAssignmentsClauseContext *setAssignmentsClause();
    WithClauseContext *withClause();
    WhereClauseContext *whereClause();
    OrderByClauseContext *orderByClause();
    LimitClauseContext *limitClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UpdateContext* update();

  class  UpdateSpecification_Context : public antlr4::ParserRuleContext {
  public:
    UpdateSpecification_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOW_PRIORITY();
    antlr4::tree::TerminalNode *IGNORE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UpdateSpecification_Context* updateSpecification_();

  class  AssignmentContext : public antlr4::ParserRuleContext {
  public:
    AssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColumnRefContext *columnRef();
    antlr4::tree::TerminalNode *EQ_();
    AssignmentValueContext *assignmentValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentContext* assignment();

  class  SetAssignmentsClauseContext : public antlr4::ParserRuleContext {
  public:
    SetAssignmentsClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    std::vector<AssignmentContext *> assignment();
    AssignmentContext* assignment(size_t i);
    ValueReferenceContext *valueReference();
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetAssignmentsClauseContext* setAssignmentsClause();

  class  AssignmentValuesContext : public antlr4::ParserRuleContext {
  public:
    AssignmentValuesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP_();
    std::vector<AssignmentValueContext *> assignmentValue();
    AssignmentValueContext* assignmentValue(size_t i);
    antlr4::tree::TerminalNode *RP_();
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentValuesContext* assignmentValues();

  class  AssignmentValueContext : public antlr4::ParserRuleContext {
  public:
    AssignmentValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    antlr4::tree::TerminalNode *DEFAULT();
    BlobValueContext *blobValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentValueContext* assignmentValue();

  class  BlobValueContext : public antlr4::ParserRuleContext {
  public:
    BlobValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UL_BINARY();
    String_Context *string_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlobValueContext* blobValue();

  class  Delete_stmtContext : public antlr4::ParserRuleContext {
  public:
    Delete_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELETE();
    DeleteSpecificationContext *deleteSpecification();
    SingleTableClauseContext *singleTableClause();
    MultipleTablesClauseContext *multipleTablesClause();
    WhereClauseContext *whereClause();
    OrderByClauseContext *orderByClause();
    LimitClauseContext *limitClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delete_stmtContext* delete_stmt();

  class  DeleteSpecificationContext : public antlr4::ParserRuleContext {
  public:
    DeleteSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOW_PRIORITY();
    antlr4::tree::TerminalNode *QUICK();
    antlr4::tree::TerminalNode *IGNORE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeleteSpecificationContext* deleteSpecification();

  class  SingleTableClauseContext : public antlr4::ParserRuleContext {
  public:
    SingleTableClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FROM();
    TableNameContext *tableName();
    AliasContext *alias();
    PartitionNamesContext *partitionNames();
    antlr4::tree::TerminalNode *AS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SingleTableClauseContext* singleTableClause();

  class  MultipleTablesClauseContext : public antlr4::ParserRuleContext {
  public:
    MultipleTablesClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableAliasRefListContext *tableAliasRefList();
    antlr4::tree::TerminalNode *FROM();
    TableReferencesContext *tableReferences();
    antlr4::tree::TerminalNode *USING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultipleTablesClauseContext* multipleTablesClause();

  class  SelectContext : public antlr4::ParserRuleContext {
  public:
    SelectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QueryExpressionContext *queryExpression();
    LockClauseListContext *lockClauseList();
    QueryExpressionParensContext *queryExpressionParens();
    SelectWithIntoContext *selectWithInto();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectContext* select();

  class  SelectWithIntoContext : public antlr4::ParserRuleContext {
  public:
    SelectWithIntoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP_();
    SelectWithIntoContext *selectWithInto();
    antlr4::tree::TerminalNode *RP_();
    QueryExpressionContext *queryExpression();
    SelectIntoExpressionContext *selectIntoExpression();
    LockClauseListContext *lockClauseList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectWithIntoContext* selectWithInto();

  class  QueryExpressionContext : public antlr4::ParserRuleContext {
  public:
    QueryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QueryExpressionBodyContext *queryExpressionBody();
    QueryExpressionParensContext *queryExpressionParens();
    WithClauseContext *withClause();
    OrderByClauseContext *orderByClause();
    LimitClauseContext *limitClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QueryExpressionContext* queryExpression();

  class  QueryExpressionBodyContext : public antlr4::ParserRuleContext {
  public:
    QueryExpressionBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QueryPrimaryContext *queryPrimary();
    std::vector<QueryExpressionParensContext *> queryExpressionParens();
    QueryExpressionParensContext* queryExpressionParens(size_t i);
    antlr4::tree::TerminalNode *UNION();
    UnionOptionContext *unionOption();
    QueryExpressionBodyContext *queryExpressionBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QueryExpressionBodyContext* queryExpressionBody();
  QueryExpressionBodyContext* queryExpressionBody(int precedence);
  class  QueryExpressionParensContext : public antlr4::ParserRuleContext {
  public:
    QueryExpressionParensContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP_();
    antlr4::tree::TerminalNode *RP_();
    QueryExpressionParensContext *queryExpressionParens();
    QueryExpressionContext *queryExpression();
    LockClauseListContext *lockClauseList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QueryExpressionParensContext* queryExpressionParens();

  class  QueryPrimaryContext : public antlr4::ParserRuleContext {
  public:
    QueryPrimaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QuerySpecificationContext *querySpecification();
    TableValueConstructorContext *tableValueConstructor();
    ExplicitTableContext *explicitTable();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QueryPrimaryContext* queryPrimary();

  class  QuerySpecificationContext : public antlr4::ParserRuleContext {
  public:
    QuerySpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SELECT();
    ProjectionsContext *projections();
    std::vector<SelectSpecificationContext *> selectSpecification();
    SelectSpecificationContext* selectSpecification(size_t i);
    SelectIntoExpressionContext *selectIntoExpression();
    FromClauseContext *fromClause();
    WhereClauseContext *whereClause();
    GroupByClauseContext *groupByClause();
    HavingClauseContext *havingClause();
    WindowClauseContext *windowClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QuerySpecificationContext* querySpecification();

  class  CallContext : public antlr4::ParserRuleContext {
  public:
    CallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CALL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LP_();
    antlr4::tree::TerminalNode *RP_();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CallContext* call();

  class  DoStatementContext : public antlr4::ParserRuleContext {
  public:
    DoStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DO();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DoStatementContext* doStatement();

  class  HandlerStatementContext : public antlr4::ParserRuleContext {
  public:
    HandlerStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HandlerOpenStatementContext *handlerOpenStatement();
    HandlerReadIndexStatementContext *handlerReadIndexStatement();
    HandlerReadStatementContext *handlerReadStatement();
    HandlerCloseStatementContext *handlerCloseStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HandlerStatementContext* handlerStatement();

  class  HandlerOpenStatementContext : public antlr4::ParserRuleContext {
  public:
    HandlerOpenStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HANDLER();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *OPEN();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *AS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HandlerOpenStatementContext* handlerOpenStatement();

  class  HandlerReadIndexStatementContext : public antlr4::ParserRuleContext {
  public:
    HandlerReadIndexStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HANDLER();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *READ();
    IndexNameContext *indexName();
    ComparisonOperatorContext *comparisonOperator();
    antlr4::tree::TerminalNode *LP_();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *RP_();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *NEXT();
    antlr4::tree::TerminalNode *PREV();
    antlr4::tree::TerminalNode *LAST();
    WhereClauseContext *whereClause();
    LimitClauseContext *limitClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HandlerReadIndexStatementContext* handlerReadIndexStatement();

  class  HandlerReadStatementContext : public antlr4::ParserRuleContext {
  public:
    HandlerReadStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HANDLER();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *NEXT();
    WhereClauseContext *whereClause();
    LimitClauseContext *limitClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HandlerReadStatementContext* handlerReadStatement();

  class  HandlerCloseStatementContext : public antlr4::ParserRuleContext {
  public:
    HandlerCloseStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HANDLER();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *CLOSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HandlerCloseStatementContext* handlerCloseStatement();

  class  ImportStatementContext : public antlr4::ParserRuleContext {
  public:
    ImportStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMPORT();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *FROM();
    std::vector<String_Context *> string_();
    String_Context* string_(size_t i);
    antlr4::tree::TerminalNode *COMMA_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ImportStatementContext* importStatement();

  class  LoadStatementContext : public antlr4::ParserRuleContext {
  public:
    LoadStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoadDataStatementContext *loadDataStatement();
    LoadXmlStatementContext *loadXmlStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LoadStatementContext* loadStatement();

  class  LoadDataStatementContext : public antlr4::ParserRuleContext {
  public:
    LoadDataStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOAD();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *INFILE();
    String_Context *string_();
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *TABLE();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *LOCAL();
    PartitionNamesContext *partitionNames();
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *SET();
    IdentifierContext *identifier();
    std::vector<antlr4::tree::TerminalNode *> LINES();
    antlr4::tree::TerminalNode* LINES(size_t i);
    std::vector<antlr4::tree::TerminalNode *> IGNORE();
    antlr4::tree::TerminalNode* IGNORE(size_t i);
    NumberLiteralsContext *numberLiterals();
    FieldOrVarSpecContext *fieldOrVarSpec();
    SetAssignmentsClauseContext *setAssignmentsClause();
    antlr4::tree::TerminalNode *LOW_PRIORITY();
    antlr4::tree::TerminalNode *CONCURRENT();
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *FIELDS();
    antlr4::tree::TerminalNode *COLUMNS();
    antlr4::tree::TerminalNode *ROWS();
    std::vector<SelectFieldsIntoContext *> selectFieldsInto();
    SelectFieldsIntoContext* selectFieldsInto(size_t i);
    std::vector<SelectLinesIntoContext *> selectLinesInto();
    SelectLinesIntoContext* selectLinesInto(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LoadDataStatementContext* loadDataStatement();

  class  LoadXmlStatementContext : public antlr4::ParserRuleContext {
  public:
    LoadXmlStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOAD();
    antlr4::tree::TerminalNode *XML();
    antlr4::tree::TerminalNode *INFILE();
    std::vector<String_Context *> string_();
    String_Context* string_(size_t i);
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *TABLE();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *SET();
    IdentifierContext *identifier();
    std::vector<antlr4::tree::TerminalNode *> ROWS();
    antlr4::tree::TerminalNode* ROWS(size_t i);
    antlr4::tree::TerminalNode *IDENTIFIED();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *LT_();
    antlr4::tree::TerminalNode *GT_();
    std::vector<antlr4::tree::TerminalNode *> IGNORE();
    antlr4::tree::TerminalNode* IGNORE(size_t i);
    NumberLiteralsContext *numberLiterals();
    FieldOrVarSpecContext *fieldOrVarSpec();
    SetAssignmentsClauseContext *setAssignmentsClause();
    antlr4::tree::TerminalNode *LOW_PRIORITY();
    antlr4::tree::TerminalNode *CONCURRENT();
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *LINES();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LoadXmlStatementContext* loadXmlStatement();

  class  ExplicitTableContext : public antlr4::ParserRuleContext {
  public:
    ExplicitTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLE();
    TableNameContext *tableName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExplicitTableContext* explicitTable();

  class  TableValueConstructorContext : public antlr4::ParserRuleContext {
  public:
    TableValueConstructorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VALUES();
    RowConstructorListContext *rowConstructorList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableValueConstructorContext* tableValueConstructor();

  class  RowConstructorListContext : public antlr4::ParserRuleContext {
  public:
    RowConstructorListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ROW();
    antlr4::tree::TerminalNode* ROW(size_t i);
    std::vector<AssignmentValuesContext *> assignmentValues();
    AssignmentValuesContext* assignmentValues(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RowConstructorListContext* rowConstructorList();

  class  WithClauseContext : public antlr4::ParserRuleContext {
  public:
    WithClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    std::vector<CteClauseContext *> cteClause();
    CteClauseContext* cteClause(size_t i);
    antlr4::tree::TerminalNode *RECURSIVE();
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WithClauseContext* withClause();

  class  CteClauseContext : public antlr4::ParserRuleContext {
  public:
    CteClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *AS();
    SubqueryContext *subquery();
    antlr4::tree::TerminalNode *LP_();
    ColumnNamesContext *columnNames();
    antlr4::tree::TerminalNode *RP_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CteClauseContext* cteClause();

  class  SelectSpecificationContext : public antlr4::ParserRuleContext {
  public:
    SelectSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DuplicateSpecificationContext *duplicateSpecification();
    antlr4::tree::TerminalNode *HIGH_PRIORITY();
    antlr4::tree::TerminalNode *STRAIGHT_JOIN();
    antlr4::tree::TerminalNode *SQL_SMALL_RESULT();
    antlr4::tree::TerminalNode *SQL_BIG_RESULT();
    antlr4::tree::TerminalNode *SQL_BUFFER_RESULT();
    antlr4::tree::TerminalNode *SQL_CACHE();
    antlr4::tree::TerminalNode *SQL_NO_CACHE();
    antlr4::tree::TerminalNode *SQL_CALC_FOUND_ROWS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectSpecificationContext* selectSpecification();

  class  DuplicateSpecificationContext : public antlr4::ParserRuleContext {
  public:
    DuplicateSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *DISTINCT();
    antlr4::tree::TerminalNode *DISTINCTROW();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DuplicateSpecificationContext* duplicateSpecification();

  class  ProjectionsContext : public antlr4::ParserRuleContext {
  public:
    ProjectionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnqualifiedShorthandContext *unqualifiedShorthand();
    std::vector<ProjectionContext *> projection();
    ProjectionContext* projection(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProjectionsContext* projections();

  class  ProjectionContext : public antlr4::ParserRuleContext {
  public:
    ProjectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    AliasContext *alias();
    antlr4::tree::TerminalNode *AS();
    QualifiedShorthandContext *qualifiedShorthand();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProjectionContext* projection();

  class  UnqualifiedShorthandContext : public antlr4::ParserRuleContext {
  public:
    UnqualifiedShorthandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASTERISK_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnqualifiedShorthandContext* unqualifiedShorthand();

  class  QualifiedShorthandContext : public antlr4::ParserRuleContext {
  public:
    QualifiedShorthandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *DOT_ASTERISK_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QualifiedShorthandContext* qualifiedShorthand();

  class  FromClauseContext : public antlr4::ParserRuleContext {
  public:
    FromClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *DUAL();
    TableReferencesContext *tableReferences();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FromClauseContext* fromClause();

  class  TableReferencesContext : public antlr4::ParserRuleContext {
  public:
    TableReferencesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TableReferenceContext *> tableReference();
    TableReferenceContext* tableReference(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableReferencesContext* tableReferences();

  class  EscapedTableReferenceContext : public antlr4::ParserRuleContext {
  public:
    EscapedTableReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableFactorContext *tableFactor();
    std::vector<JoinedTableContext *> joinedTable();
    JoinedTableContext* joinedTable(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EscapedTableReferenceContext* escapedTableReference();

  class  TableReferenceContext : public antlr4::ParserRuleContext {
  public:
    TableReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableFactorContext *tableFactor();
    antlr4::tree::TerminalNode *LBE_();
    antlr4::tree::TerminalNode *OJ();
    EscapedTableReferenceContext *escapedTableReference();
    antlr4::tree::TerminalNode *RBE_();
    std::vector<JoinedTableContext *> joinedTable();
    JoinedTableContext* joinedTable(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableReferenceContext* tableReference();

  class  TableFactorContext : public antlr4::ParserRuleContext {
  public:
    TableFactorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableNameContext *tableName();
    PartitionNamesContext *partitionNames();
    AliasContext *alias();
    IndexHintListContext *indexHintList();
    antlr4::tree::TerminalNode *AS();
    SubqueryContext *subquery();
    antlr4::tree::TerminalNode *LP_();
    ColumnNamesContext *columnNames();
    antlr4::tree::TerminalNode *RP_();
    TableReferencesContext *tableReferences();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableFactorContext* tableFactor();

  class  PartitionNamesContext : public antlr4::ParserRuleContext {
  public:
    PartitionNamesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *LP_();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *RP_();
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionNamesContext* partitionNames();

  class  IndexHintListContext : public antlr4::ParserRuleContext {
  public:
    IndexHintListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IndexHintContext *> indexHint();
    IndexHintContext* indexHint(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexHintListContext* indexHintList();

  class  IndexHintContext : public antlr4::ParserRuleContext {
  public:
    IndexHintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP_();
    std::vector<IndexNameContext *> indexName();
    IndexNameContext* indexName(size_t i);
    antlr4::tree::TerminalNode *RP_();
    antlr4::tree::TerminalNode *USE();
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *FORCE();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *FOR();
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);
    antlr4::tree::TerminalNode *JOIN();
    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *GROUP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexHintContext* indexHint();

  class  JoinedTableContext : public antlr4::ParserRuleContext {
  public:
    JoinedTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InnerJoinTypeContext *innerJoinType();
    TableReferenceContext *tableReference();
    JoinSpecificationContext *joinSpecification();
    OuterJoinTypeContext *outerJoinType();
    NaturalJoinTypeContext *naturalJoinType();
    TableFactorContext *tableFactor();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JoinedTableContext* joinedTable();

  class  InnerJoinTypeContext : public antlr4::ParserRuleContext {
  public:
    InnerJoinTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *JOIN();
    antlr4::tree::TerminalNode *INNER();
    antlr4::tree::TerminalNode *CROSS();
    antlr4::tree::TerminalNode *STRAIGHT_JOIN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InnerJoinTypeContext* innerJoinType();

  class  OuterJoinTypeContext : public antlr4::ParserRuleContext {
  public:
    OuterJoinTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *JOIN();
    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *RIGHT();
    antlr4::tree::TerminalNode *OUTER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OuterJoinTypeContext* outerJoinType();

  class  NaturalJoinTypeContext : public antlr4::ParserRuleContext {
  public:
    NaturalJoinTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NATURAL();
    antlr4::tree::TerminalNode *JOIN();
    antlr4::tree::TerminalNode *INNER();
    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *RIGHT();
    antlr4::tree::TerminalNode *OUTER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NaturalJoinTypeContext* naturalJoinType();

  class  JoinSpecificationContext : public antlr4::ParserRuleContext {
  public:
    JoinSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ON();
    ExprContext *expr();
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *LP_();
    ColumnNamesContext *columnNames();
    antlr4::tree::TerminalNode *RP_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JoinSpecificationContext* joinSpecification();

  class  WhereClauseContext : public antlr4::ParserRuleContext {
  public:
    WhereClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHERE();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhereClauseContext* whereClause();

  class  GroupByClauseContext : public antlr4::ParserRuleContext {
  public:
    GroupByClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *BY();
    std::vector<OrderByItemContext *> orderByItem();
    OrderByItemContext* orderByItem(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *ROLLUP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GroupByClauseContext* groupByClause();

  class  HavingClauseContext : public antlr4::ParserRuleContext {
  public:
    HavingClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HAVING();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HavingClauseContext* havingClause();

  class  LimitClauseContext : public antlr4::ParserRuleContext {
  public:
    LimitClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIMIT();
    LimitRowCountContext *limitRowCount();
    antlr4::tree::TerminalNode *OFFSET();
    LimitOffsetContext *limitOffset();
    antlr4::tree::TerminalNode *COMMA_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LimitClauseContext* limitClause();

  class  LimitRowCountContext : public antlr4::ParserRuleContext {
  public:
    LimitRowCountContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberLiteralsContext *numberLiterals();
    ParameterMarkerContext *parameterMarker();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LimitRowCountContext* limitRowCount();

  class  LimitOffsetContext : public antlr4::ParserRuleContext {
  public:
    LimitOffsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberLiteralsContext *numberLiterals();
    ParameterMarkerContext *parameterMarker();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LimitOffsetContext* limitOffset();

  class  WindowClauseContext : public antlr4::ParserRuleContext {
  public:
    WindowClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WINDOW();
    std::vector<WindowItemContext *> windowItem();
    WindowItemContext* windowItem(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WindowClauseContext* windowClause();

  class  WindowItemContext : public antlr4::ParserRuleContext {
  public:
    WindowItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *LP_();
    WindowSpecificationContext *windowSpecification();
    antlr4::tree::TerminalNode *RP_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WindowItemContext* windowItem();

  class  SubqueryContext : public antlr4::ParserRuleContext {
  public:
    SubqueryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QueryExpressionParensContext *queryExpressionParens();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubqueryContext* subquery();

  class  SelectLinesIntoContext : public antlr4::ParserRuleContext {
  public:
    SelectLinesIntoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STARTING();
    antlr4::tree::TerminalNode *BY();
    String_Context *string_();
    antlr4::tree::TerminalNode *TERMINATED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectLinesIntoContext* selectLinesInto();

  class  SelectFieldsIntoContext : public antlr4::ParserRuleContext {
  public:
    SelectFieldsIntoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TERMINATED();
    antlr4::tree::TerminalNode *BY();
    String_Context *string_();
    antlr4::tree::TerminalNode *ENCLOSED();
    antlr4::tree::TerminalNode *OPTIONALLY();
    antlr4::tree::TerminalNode *ESCAPED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectFieldsIntoContext* selectFieldsInto();

  class  SelectIntoExpressionContext : public antlr4::ParserRuleContext {
  public:
    SelectIntoExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTO();
    std::vector<VariableContext *> variable();
    VariableContext* variable(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);
    antlr4::tree::TerminalNode *DUMPFILE();
    String_Context *string_();
    antlr4::tree::TerminalNode *OUTFILE();
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *SET();
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *LINES();
    antlr4::tree::TerminalNode *FIELDS();
    antlr4::tree::TerminalNode *COLUMNS();
    std::vector<SelectFieldsIntoContext *> selectFieldsInto();
    SelectFieldsIntoContext* selectFieldsInto(size_t i);
    std::vector<SelectLinesIntoContext *> selectLinesInto();
    SelectLinesIntoContext* selectLinesInto(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectIntoExpressionContext* selectIntoExpression();

  class  LockClauseContext : public antlr4::ParserRuleContext {
  public:
    LockClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    LockStrengthContext *lockStrength();
    TableLockingListContext *tableLockingList();
    LockedRowActionContext *lockedRowAction();
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *SHARE();
    antlr4::tree::TerminalNode *MODE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LockClauseContext* lockClause();

  class  LockClauseListContext : public antlr4::ParserRuleContext {
  public:
    LockClauseListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LockClauseContext *> lockClause();
    LockClauseContext* lockClause(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LockClauseListContext* lockClauseList();

  class  LockStrengthContext : public antlr4::ParserRuleContext {
  public:
    LockStrengthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *SHARE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LockStrengthContext* lockStrength();

  class  LockedRowActionContext : public antlr4::ParserRuleContext {
  public:
    LockedRowActionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SKIP_SYMBOL();
    antlr4::tree::TerminalNode *LOCKED();
    antlr4::tree::TerminalNode *NOWAIT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LockedRowActionContext* lockedRowAction();

  class  TableLockingListContext : public antlr4::ParserRuleContext {
  public:
    TableLockingListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OF();
    TableAliasRefListContext *tableAliasRefList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableLockingListContext* tableLockingList();

  class  TableIdentOptWildContext : public antlr4::ParserRuleContext {
  public:
    TableIdentOptWildContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *DOT_ASTERISK_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableIdentOptWildContext* tableIdentOptWild();

  class  TableAliasRefListContext : public antlr4::ParserRuleContext {
  public:
    TableAliasRefListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TableIdentOptWildContext *> tableIdentOptWild();
    TableIdentOptWildContext* tableIdentOptWild(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableAliasRefListContext* tableAliasRefList();

  class  AlterStatementContext : public antlr4::ParserRuleContext {
  public:
    AlterStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AlterTableContext *alterTable();
    AlterDatabaseContext *alterDatabase();
    AlterProcedureContext *alterProcedure();
    AlterFunctionContext *alterFunction();
    AlterEventContext *alterEvent();
    AlterViewContext *alterView();
    AlterTablespaceInnodbContext *alterTablespaceInnodb();
    AlterTablespaceNdbContext *alterTablespaceNdb();
    AlterLogfileGroupContext *alterLogfileGroup();
    AlterInstanceContext *alterInstance();
    AlterServerContext *alterServer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterStatementContext* alterStatement();

  class  CreateTableContext : public antlr4::ParserRuleContext {
  public:
    CreateTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TABLE();
    TableNameContext *tableName();
    CreateLikeClauseContext *createLikeClause();
    antlr4::tree::TerminalNode *TEMPORARY();
    NotExistClauseContext *notExistClause();
    CreateDefinitionClauseContext *createDefinitionClause();
    CreateTableOptionsContext *createTableOptions();
    PartitionClauseContext *partitionClause();
    DuplicateAsQueryExpressionContext *duplicateAsQueryExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateTableContext* createTable();

  class  PartitionClauseContext : public antlr4::ParserRuleContext {
  public:
    PartitionClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *BY();
    PartitionTypeDefContext *partitionTypeDef();
    antlr4::tree::TerminalNode *PARTITIONS();
    antlr4::tree::TerminalNode *NUMBER_();
    SubPartitionsContext *subPartitions();
    PartitionDefinitionsContext *partitionDefinitions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionClauseContext* partitionClause();

  class  PartitionTypeDefContext : public antlr4::ParserRuleContext {
  public:
    PartitionTypeDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *LP_();
    antlr4::tree::TerminalNode *RP_();
    antlr4::tree::TerminalNode *LINEAR();
    PartitionKeyAlgorithmContext *partitionKeyAlgorithm();
    ColumnNamesContext *columnNames();
    antlr4::tree::TerminalNode *HASH();
    BitExprContext *bitExpr();
    antlr4::tree::TerminalNode *RANGE();
    antlr4::tree::TerminalNode *LIST();
    antlr4::tree::TerminalNode *COLUMNS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionTypeDefContext* partitionTypeDef();

  class  SubPartitionsContext : public antlr4::ParserRuleContext {
  public:
    SubPartitionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUBPARTITION();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *HASH();
    antlr4::tree::TerminalNode *LP_();
    BitExprContext *bitExpr();
    antlr4::tree::TerminalNode *RP_();
    antlr4::tree::TerminalNode *KEY();
    ColumnNamesContext *columnNames();
    antlr4::tree::TerminalNode *LINEAR();
    antlr4::tree::TerminalNode *SUBPARTITIONS();
    antlr4::tree::TerminalNode *NUMBER_();
    PartitionKeyAlgorithmContext *partitionKeyAlgorithm();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubPartitionsContext* subPartitions();

  class  PartitionKeyAlgorithmContext : public antlr4::ParserRuleContext {
  public:
    PartitionKeyAlgorithmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALGORITHM();
    antlr4::tree::TerminalNode *EQ_();
    antlr4::tree::TerminalNode *NUMBER_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionKeyAlgorithmContext* partitionKeyAlgorithm();

  class  DuplicateAsQueryExpressionContext : public antlr4::ParserRuleContext {
  public:
    DuplicateAsQueryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SelectContext *select();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *LP_();
    antlr4::tree::TerminalNode *RP_();
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *IGNORE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DuplicateAsQueryExpressionContext* duplicateAsQueryExpression();

  class  AlterTableContext : public antlr4::ParserRuleContext {
  public:
    AlterTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *TABLE();
    TableNameContext *tableName();
    AlterTableActionsContext *alterTableActions();
    StandaloneAlterTableActionContext *standaloneAlterTableAction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterTableContext* alterTable();

  class  StandaloneAlterTableActionContext : public antlr4::ParserRuleContext {
  public:
    StandaloneAlterTableActionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StandaloneAlterCommandsContext *standaloneAlterCommands();
    AlterCommandsModifierListContext *alterCommandsModifierList();
    antlr4::tree::TerminalNode *COMMA_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StandaloneAlterTableActionContext* standaloneAlterTableAction();

  class  AlterTableActionsContext : public antlr4::ParserRuleContext {
  public:
    AlterTableActionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AlterCommandListContext *alterCommandList();
    AlterTablePartitionOptionsContext *alterTablePartitionOptions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterTableActionsContext* alterTableActions();

  class  AlterTablePartitionOptionsContext : public antlr4::ParserRuleContext {
  public:
    AlterTablePartitionOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PartitionClauseContext *partitionClause();
    antlr4::tree::TerminalNode *REMOVE();
    antlr4::tree::TerminalNode *PARTITIONING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterTablePartitionOptionsContext* alterTablePartitionOptions();

  class  AlterCommandListContext : public antlr4::ParserRuleContext {
  public:
    AlterCommandListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AlterCommandsModifierListContext *alterCommandsModifierList();
    AlterListContext *alterList();
    antlr4::tree::TerminalNode *COMMA_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterCommandListContext* alterCommandList();

  class  AlterListContext : public antlr4::ParserRuleContext {
  public:
    AlterListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AlterListItemContext *> alterListItem();
    AlterListItemContext* alterListItem(size_t i);
    std::vector<CreateTableOptionsSpaceSeparatedContext *> createTableOptionsSpaceSeparated();
    CreateTableOptionsSpaceSeparatedContext* createTableOptionsSpaceSeparated(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);
    std::vector<AlterCommandsModifierContext *> alterCommandsModifier();
    AlterCommandsModifierContext* alterCommandsModifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterListContext* alterList();

  class  CreateTableOptionsSpaceSeparatedContext : public antlr4::ParserRuleContext {
  public:
    CreateTableOptionsSpaceSeparatedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CreateTableOptionContext *> createTableOption();
    CreateTableOptionContext* createTableOption(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateTableOptionsSpaceSeparatedContext* createTableOptionsSpaceSeparated();

  class  AlterListItemContext : public antlr4::ParserRuleContext {
  public:
    AlterListItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AlterListItemContext() : antlr4::ParserRuleContext() { }
    void copyFrom(AlterListItemContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AddColumnContext : public AlterListItemContext {
  public:
    AddColumnContext(AlterListItemContext *ctx);

    antlr4::tree::TerminalNode *ADD();
    ColumnDefinitionContext *columnDefinition();
    antlr4::tree::TerminalNode *LP_();
    TableElementListContext *tableElementList();
    antlr4::tree::TerminalNode *RP_();
    antlr4::tree::TerminalNode *COLUMN();
    PlaceContext *place();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  EnableKeysContext : public AlterListItemContext {
  public:
    EnableKeysContext(AlterListItemContext *ctx);

    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *KEYS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterTableDropContext : public AlterListItemContext {
  public:
    AlterTableDropContext(AlterListItemContext *ctx);

    MySQLStatementParser::IdentifierContext *columnInternalRef = nullptr;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *FOREIGN();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *PRIMARY();
    KeyOrIndexContext *keyOrIndex();
    IndexNameContext *indexName();
    antlr4::tree::TerminalNode *CHECK();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *CONSTRAINT();
    antlr4::tree::TerminalNode *COLUMN();
    RestrictContext *restrict();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterConstraintContext : public AlterListItemContext {
  public:
    AlterConstraintContext(AlterListItemContext *ctx);

    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *CONSTRAINT();
    IdentifierContext *identifier();
    ConstraintEnforcementContext *constraintEnforcement();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterColumnContext : public AlterListItemContext {
  public:
    AlterColumnContext(AlterListItemContext *ctx);

    MySQLStatementParser::IdentifierContext *columnInternalRef = nullptr;
    antlr4::tree::TerminalNode *ALTER();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *LP_();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RP_();
    SignedLiteralContext *signedLiteral();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterCheckContext : public AlterListItemContext {
  public:
    AlterCheckContext(AlterListItemContext *ctx);

    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *CHECK();
    IdentifierContext *identifier();
    ConstraintEnforcementContext *constraintEnforcement();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ModifyColumnContext : public AlterListItemContext {
  public:
    ModifyColumnContext(AlterListItemContext *ctx);

    MySQLStatementParser::IdentifierContext *columnInternalRef = nullptr;
    antlr4::tree::TerminalNode *MODIFY();
    FieldDefinitionContext *fieldDefinition();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *COLUMN();
    PlaceContext *place();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterIndexContext : public AlterListItemContext {
  public:
    AlterIndexContext(AlterListItemContext *ctx);

    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *INDEX();
    IndexNameContext *indexName();
    VisibilityContext *visibility();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ChangeColumnContext : public AlterListItemContext {
  public:
    ChangeColumnContext(AlterListItemContext *ctx);

    MySQLStatementParser::IdentifierContext *columnInternalRef = nullptr;
    antlr4::tree::TerminalNode *CHANGE();
    ColumnDefinitionContext *columnDefinition();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *COLUMN();
    PlaceContext *place();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterTableOrderContext : public AlterListItemContext {
  public:
    AlterTableOrderContext(AlterListItemContext *ctx);

    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *BY();
    AlterOrderListContext *alterOrderList();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterConvertContext : public AlterListItemContext {
  public:
    AlterConvertContext(AlterListItemContext *ctx);

    antlr4::tree::TerminalNode *CONVERT();
    antlr4::tree::TerminalNode *TO();
    CharsetContext *charset();
    CharsetNameContext *charsetName();
    CollateClauseContext *collateClause();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RenameIndexContext : public AlterListItemContext {
  public:
    RenameIndexContext(AlterListItemContext *ctx);

    antlr4::tree::TerminalNode *RENAME();
    KeyOrIndexContext *keyOrIndex();
    std::vector<IndexNameContext *> indexName();
    IndexNameContext* indexName(size_t i);
    antlr4::tree::TerminalNode *TO();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterTableForceContext : public AlterListItemContext {
  public:
    AlterTableForceContext(AlterListItemContext *ctx);

    antlr4::tree::TerminalNode *FORCE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AddTableConstraintContext : public AlterListItemContext {
  public:
    AddTableConstraintContext(AlterListItemContext *ctx);

    antlr4::tree::TerminalNode *ADD();
    TableConstraintDefContext *tableConstraintDef();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RenameColumnContext : public AlterListItemContext {
  public:
    RenameColumnContext(AlterListItemContext *ctx);

    MySQLStatementParser::IdentifierContext *columnInternalRef = nullptr;
    antlr4::tree::TerminalNode *RENAME();
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *TO();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DisableKeysContext : public AlterListItemContext {
  public:
    DisableKeysContext(AlterListItemContext *ctx);

    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *KEYS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterRenameTableContext : public AlterListItemContext {
  public:
    AlterRenameTableContext(AlterListItemContext *ctx);

    antlr4::tree::TerminalNode *RENAME();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *AS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  AlterListItemContext* alterListItem();

  class  AlterOrderListContext : public antlr4::ParserRuleContext {
  public:
    AlterOrderListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<DirectionContext *> direction();
    DirectionContext* direction(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterOrderListContext* alterOrderList();

  class  TableConstraintDefContext : public antlr4::ParserRuleContext {
  public:
    TableConstraintDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    KeyOrIndexContext *keyOrIndex();
    KeyListWithExpressionContext *keyListWithExpression();
    IndexNameAndTypeContext *indexNameAndType();
    std::vector<IndexOptionContext *> indexOption();
    IndexOptionContext* indexOption(size_t i);
    antlr4::tree::TerminalNode *FULLTEXT();
    IndexNameContext *indexName();
    std::vector<FulltextIndexOptionContext *> fulltextIndexOption();
    FulltextIndexOptionContext* fulltextIndexOption(size_t i);
    antlr4::tree::TerminalNode *SPATIAL();
    std::vector<CommonIndexOptionContext *> commonIndexOption();
    CommonIndexOptionContext* commonIndexOption(size_t i);
    antlr4::tree::TerminalNode *PRIMARY();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *UNIQUE();
    ConstraintNameContext *constraintName();
    antlr4::tree::TerminalNode *FOREIGN();
    KeyPartsContext *keyParts();
    ReferenceDefinitionContext *referenceDefinition();
    CheckConstraintContext *checkConstraint();
    ConstraintEnforcementContext *constraintEnforcement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableConstraintDefContext* tableConstraintDef();

  class  AlterCommandsModifierListContext : public antlr4::ParserRuleContext {
  public:
    AlterCommandsModifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AlterCommandsModifierContext *> alterCommandsModifier();
    AlterCommandsModifierContext* alterCommandsModifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterCommandsModifierListContext* alterCommandsModifierList();

  class  AlterCommandsModifierContext : public antlr4::ParserRuleContext {
  public:
    AlterCommandsModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AlterAlgorithmOptionContext *alterAlgorithmOption();
    AlterLockOptionContext *alterLockOption();
    WithValidationContext *withValidation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterCommandsModifierContext* alterCommandsModifier();

  class  WithValidationContext : public antlr4::ParserRuleContext {
  public:
    WithValidationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VALIDATION();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *WITHOUT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WithValidationContext* withValidation();

  class  StandaloneAlterCommandsContext : public antlr4::ParserRuleContext {
  public:
    StandaloneAlterCommandsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DISCARD();
    antlr4::tree::TerminalNode *TABLESPACE();
    antlr4::tree::TerminalNode *IMPORT();
    AlterPartitionContext *alterPartition();
    antlr4::tree::TerminalNode *SECONDARY_LOAD();
    antlr4::tree::TerminalNode *SECONDARY_UNLOAD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StandaloneAlterCommandsContext* standaloneAlterCommands();

  class  AlterPartitionContext : public antlr4::ParserRuleContext {
  public:
    AlterPartitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *PARTITION();
    PartitionDefinitionsContext *partitionDefinitions();
    antlr4::tree::TerminalNode *PARTITIONS();
    antlr4::tree::TerminalNode *NUMBER_();
    std::vector<NoWriteToBinLogContext *> noWriteToBinLog();
    NoWriteToBinLogContext* noWriteToBinLog(size_t i);
    antlr4::tree::TerminalNode *DROP();
    IdentifierListContext *identifierList();
    antlr4::tree::TerminalNode *REBUILD();
    AllOrPartitionNameListContext *allOrPartitionNameList();
    antlr4::tree::TerminalNode *OPTIMIZE();
    antlr4::tree::TerminalNode *ANALYZE();
    antlr4::tree::TerminalNode *CHECK();
    std::vector<CheckTypeContext *> checkType();
    CheckTypeContext* checkType(size_t i);
    antlr4::tree::TerminalNode *REPAIR();
    std::vector<RepairTypeContext *> repairType();
    RepairTypeContext* repairType(size_t i);
    antlr4::tree::TerminalNode *COALESCE();
    antlr4::tree::TerminalNode *TRUNCATE();
    antlr4::tree::TerminalNode *REORGANIZE();
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *EXCHANGE();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *TABLE();
    TableNameContext *tableName();
    WithValidationContext *withValidation();
    antlr4::tree::TerminalNode *DISCARD();
    antlr4::tree::TerminalNode *TABLESPACE();
    antlr4::tree::TerminalNode *IMPORT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterPartitionContext* alterPartition();

  class  ConstraintNameContext : public antlr4::ParserRuleContext {
  public:
    ConstraintNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONSTRAINT();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstraintNameContext* constraintName();

  class  TableElementListContext : public antlr4::ParserRuleContext {
  public:
    TableElementListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TableElementContext *> tableElement();
    TableElementContext* tableElement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableElementListContext* tableElementList();

  class  TableElementContext : public antlr4::ParserRuleContext {
  public:
    TableElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColumnDefinitionContext *columnDefinition();
    TableConstraintDefContext *tableConstraintDef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableElementContext* tableElement();

  class  RestrictContext : public antlr4::ParserRuleContext {
  public:
    RestrictContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESTRICT();
    antlr4::tree::TerminalNode *CASCADE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RestrictContext* restrict();

  class  FulltextIndexOptionContext : public antlr4::ParserRuleContext {
  public:
    FulltextIndexOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CommonIndexOptionContext *commonIndexOption();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *PARSER();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FulltextIndexOptionContext* fulltextIndexOption();

  class  DropTableContext : public antlr4::ParserRuleContext {
  public:
    DropTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    TableOrTablesContext *tableOrTables();
    TableListContext *tableList();
    antlr4::tree::TerminalNode *TEMPORARY();
    ExistClauseContext *existClause();
    RestrictContext *restrict();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropTableContext* dropTable();

  class  DropIndexContext : public antlr4::ParserRuleContext {
  public:
    DropIndexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *INDEX();
    IndexNameContext *indexName();
    antlr4::tree::TerminalNode *ON();
    TableNameContext *tableName();
    std::vector<AlterAlgorithmOptionContext *> alterAlgorithmOption();
    AlterAlgorithmOptionContext* alterAlgorithmOption(size_t i);
    std::vector<AlterLockOptionContext *> alterLockOption();
    AlterLockOptionContext* alterLockOption(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropIndexContext* dropIndex();

  class  AlterAlgorithmOptionContext : public antlr4::ParserRuleContext {
  public:
    AlterAlgorithmOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALGORITHM();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *INSTANT();
    antlr4::tree::TerminalNode *INPLACE();
    antlr4::tree::TerminalNode *COPY();
    antlr4::tree::TerminalNode *EQ_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterAlgorithmOptionContext* alterAlgorithmOption();

  class  AlterLockOptionContext : public antlr4::ParserRuleContext {
  public:
    AlterLockOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *M_SHARED();
    antlr4::tree::TerminalNode *M_EXCLUSIVE();
    antlr4::tree::TerminalNode *EQ_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterLockOptionContext* alterLockOption();

  class  TruncateTableContext : public antlr4::ParserRuleContext {
  public:
    TruncateTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUNCATE();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *TABLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TruncateTableContext* truncateTable();

  class  CreateIndexContext : public antlr4::ParserRuleContext {
  public:
    CreateIndexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *INDEX();
    IndexNameContext *indexName();
    antlr4::tree::TerminalNode *ON();
    TableNameContext *tableName();
    KeyListWithExpressionContext *keyListWithExpression();
    CreateIndexSpecificationContext *createIndexSpecification();
    IndexTypeClauseContext *indexTypeClause();
    IndexOptionContext *indexOption();
    std::vector<AlterAlgorithmOptionContext *> alterAlgorithmOption();
    AlterAlgorithmOptionContext* alterAlgorithmOption(size_t i);
    std::vector<AlterLockOptionContext *> alterLockOption();
    AlterLockOptionContext* alterLockOption(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateIndexContext* createIndex();

  class  CreateDatabaseContext : public antlr4::ParserRuleContext {
  public:
    CreateDatabaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    SchemaNameContext *schemaName();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *SCHEMA();
    NotExistClauseContext *notExistClause();
    std::vector<CreateDatabaseSpecification_Context *> createDatabaseSpecification_();
    CreateDatabaseSpecification_Context* createDatabaseSpecification_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateDatabaseContext* createDatabase();

  class  AlterDatabaseContext : public antlr4::ParserRuleContext {
  public:
    AlterDatabaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *SCHEMA();
    SchemaNameContext *schemaName();
    std::vector<AlterDatabaseSpecification_Context *> alterDatabaseSpecification_();
    AlterDatabaseSpecification_Context* alterDatabaseSpecification_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterDatabaseContext* alterDatabase();

  class  CreateDatabaseSpecification_Context : public antlr4::ParserRuleContext {
  public:
    CreateDatabaseSpecification_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DefaultCharsetContext *defaultCharset();
    DefaultCollationContext *defaultCollation();
    DefaultEncryptionContext *defaultEncryption();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateDatabaseSpecification_Context* createDatabaseSpecification_();

  class  AlterDatabaseSpecification_Context : public antlr4::ParserRuleContext {
  public:
    AlterDatabaseSpecification_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CreateDatabaseSpecification_Context *createDatabaseSpecification_();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *ONLY();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *NUMBER_();
    antlr4::tree::TerminalNode *EQ_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterDatabaseSpecification_Context* alterDatabaseSpecification_();

  class  DropDatabaseContext : public antlr4::ParserRuleContext {
  public:
    DropDatabaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    SchemaNameContext *schemaName();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *SCHEMA();
    ExistClauseContext *existClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropDatabaseContext* dropDatabase();

  class  AlterInstanceContext : public antlr4::ParserRuleContext {
  public:
    AlterInstanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *INSTANCE();
    InstanceActionContext *instanceAction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterInstanceContext* alterInstance();

  class  InstanceActionContext : public antlr4::ParserRuleContext {
  public:
    InstanceActionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INNODB();
    antlr4::tree::TerminalNode *REDO_LOG();
    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *ROTATE();
    antlr4::tree::TerminalNode *MASTER();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *BINLOG();
    antlr4::tree::TerminalNode *RELOAD();
    antlr4::tree::TerminalNode *TLS();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *CHANNEL();
    ChannelContext *channel();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *ROLLBACK();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *ERROR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InstanceActionContext* instanceAction();

  class  ChannelContext : public antlr4::ParserRuleContext {
  public:
    ChannelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MYSQL_MAIN();
    antlr4::tree::TerminalNode *MYSQL_ADMIN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChannelContext* channel();

  class  CreateEventContext : public antlr4::ParserRuleContext {
  public:
    CreateEventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *EVENT();
    EventNameContext *eventName();
    std::vector<antlr4::tree::TerminalNode *> ON();
    antlr4::tree::TerminalNode* ON(size_t i);
    antlr4::tree::TerminalNode *SCHEDULE();
    ScheduleExpressionContext *scheduleExpression();
    antlr4::tree::TerminalNode *DO();
    RoutineBodyContext *routineBody();
    OwnerStatementContext *ownerStatement();
    NotExistClauseContext *notExistClause();
    antlr4::tree::TerminalNode *COMPLETION();
    antlr4::tree::TerminalNode *PRESERVE();
    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *SLAVE();
    antlr4::tree::TerminalNode *COMMENT();
    String_Context *string_();
    antlr4::tree::TerminalNode *NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateEventContext* createEvent();

  class  AlterEventContext : public antlr4::ParserRuleContext {
  public:
    AlterEventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *EVENT();
    std::vector<EventNameContext *> eventName();
    EventNameContext* eventName(size_t i);
    OwnerStatementContext *ownerStatement();
    std::vector<antlr4::tree::TerminalNode *> ON();
    antlr4::tree::TerminalNode* ON(size_t i);
    antlr4::tree::TerminalNode *SCHEDULE();
    ScheduleExpressionContext *scheduleExpression();
    antlr4::tree::TerminalNode *COMPLETION();
    antlr4::tree::TerminalNode *PRESERVE();
    antlr4::tree::TerminalNode *RENAME();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *SLAVE();
    antlr4::tree::TerminalNode *COMMENT();
    String_Context *string_();
    antlr4::tree::TerminalNode *DO();
    RoutineBodyContext *routineBody();
    antlr4::tree::TerminalNode *NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterEventContext* alterEvent();

  class  DropEventContext : public antlr4::ParserRuleContext {
  public:
    DropEventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *EVENT();
    EventNameContext *eventName();
    ExistClauseContext *existClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropEventContext* dropEvent();

  class  CreateFunctionContext : public antlr4::ParserRuleContext {
  public:
    CreateFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *FUNCTION();
    FunctionNameContext *functionName();
    antlr4::tree::TerminalNode *LP_();
    antlr4::tree::TerminalNode *RP_();
    antlr4::tree::TerminalNode *RETURNS();
    std::vector<DataTypeContext *> dataType();
    DataTypeContext* dataType(size_t i);
    RoutineBodyContext *routineBody();
    OwnerStatementContext *ownerStatement();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);
    std::vector<RoutineOptionContext *> routineOption();
    RoutineOptionContext* routineOption(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateFunctionContext* createFunction();

  class  AlterFunctionContext : public antlr4::ParserRuleContext {
  public:
    AlterFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *FUNCTION();
    FunctionNameContext *functionName();
    std::vector<RoutineOptionContext *> routineOption();
    RoutineOptionContext* routineOption(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterFunctionContext* alterFunction();

  class  DropFunctionContext : public antlr4::ParserRuleContext {
  public:
    DropFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *FUNCTION();
    FunctionNameContext *functionName();
    ExistClauseContext *existClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropFunctionContext* dropFunction();

  class  CreateProcedureContext : public antlr4::ParserRuleContext {
  public:
    CreateProcedureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *PROCEDURE();
    FunctionNameContext *functionName();
    antlr4::tree::TerminalNode *LP_();
    antlr4::tree::TerminalNode *RP_();
    RoutineBodyContext *routineBody();
    OwnerStatementContext *ownerStatement();
    std::vector<ProcedureParameterContext *> procedureParameter();
    ProcedureParameterContext* procedureParameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);
    std::vector<RoutineOptionContext *> routineOption();
    RoutineOptionContext* routineOption(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateProcedureContext* createProcedure();

  class  AlterProcedureContext : public antlr4::ParserRuleContext {
  public:
    AlterProcedureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *PROCEDURE();
    FunctionNameContext *functionName();
    std::vector<RoutineOptionContext *> routineOption();
    RoutineOptionContext* routineOption(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterProcedureContext* alterProcedure();

  class  DropProcedureContext : public antlr4::ParserRuleContext {
  public:
    DropProcedureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *PROCEDURE();
    FunctionNameContext *functionName();
    ExistClauseContext *existClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropProcedureContext* dropProcedure();

  class  CreateServerContext : public antlr4::ParserRuleContext {
  public:
    CreateServerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *SERVER();
    ServerNameContext *serverName();
    antlr4::tree::TerminalNode *FOREIGN();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *WRAPPER();
    WrapperNameContext *wrapperName();
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *LP_();
    std::vector<ServerOptionContext *> serverOption();
    ServerOptionContext* serverOption(size_t i);
    antlr4::tree::TerminalNode *RP_();
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateServerContext* createServer();

  class  AlterServerContext : public antlr4::ParserRuleContext {
  public:
    AlterServerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *SERVER();
    ServerNameContext *serverName();
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *LP_();
    std::vector<ServerOptionContext *> serverOption();
    ServerOptionContext* serverOption(size_t i);
    antlr4::tree::TerminalNode *RP_();
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterServerContext* alterServer();

  class  DropServerContext : public antlr4::ParserRuleContext {
  public:
    DropServerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *SERVER();
    ServerNameContext *serverName();
    ExistClauseContext *existClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropServerContext* dropServer();

  class  CreateViewContext : public antlr4::ParserRuleContext {
  public:
    CreateViewContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *VIEW();
    ViewNameContext *viewName();
    antlr4::tree::TerminalNode *AS();
    SelectContext *select();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *ALGORITHM();
    antlr4::tree::TerminalNode *EQ_();
    OwnerStatementContext *ownerStatement();
    antlr4::tree::TerminalNode *SQL();
    antlr4::tree::TerminalNode *SECURITY();
    antlr4::tree::TerminalNode *LP_();
    ColumnNamesContext *columnNames();
    antlr4::tree::TerminalNode *RP_();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *UNDEFINED();
    antlr4::tree::TerminalNode *MERGE();
    antlr4::tree::TerminalNode *TEMPTABLE();
    antlr4::tree::TerminalNode *DEFINER();
    antlr4::tree::TerminalNode *INVOKER();
    antlr4::tree::TerminalNode *CASCADED();
    antlr4::tree::TerminalNode *LOCAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateViewContext* createView();

  class  AlterViewContext : public antlr4::ParserRuleContext {
  public:
    AlterViewContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *VIEW();
    ViewNameContext *viewName();
    antlr4::tree::TerminalNode *AS();
    SelectContext *select();
    antlr4::tree::TerminalNode *ALGORITHM();
    antlr4::tree::TerminalNode *EQ_();
    OwnerStatementContext *ownerStatement();
    antlr4::tree::TerminalNode *SQL();
    antlr4::tree::TerminalNode *SECURITY();
    antlr4::tree::TerminalNode *LP_();
    ColumnNamesContext *columnNames();
    antlr4::tree::TerminalNode *RP_();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *UNDEFINED();
    antlr4::tree::TerminalNode *MERGE();
    antlr4::tree::TerminalNode *TEMPTABLE();
    antlr4::tree::TerminalNode *DEFINER();
    antlr4::tree::TerminalNode *INVOKER();
    antlr4::tree::TerminalNode *CASCADED();
    antlr4::tree::TerminalNode *LOCAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterViewContext* alterView();

  class  DropViewContext : public antlr4::ParserRuleContext {
  public:
    DropViewContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *VIEW();
    ViewNamesContext *viewNames();
    ExistClauseContext *existClause();
    RestrictContext *restrict();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropViewContext* dropView();

  class  CreateTablespaceInnodbContext : public antlr4::ParserRuleContext {
  public:
    MySQLStatementParser::String_Context *y_or_n = nullptr;;
    CreateTablespaceInnodbContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TABLESPACE();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *DATAFILE();
    std::vector<String_Context *> string_();
    String_Context* string_(size_t i);
    antlr4::tree::TerminalNode *UNDO();
    antlr4::tree::TerminalNode *FILE_BLOCK_SIZE();
    std::vector<antlr4::tree::TerminalNode *> EQ_();
    antlr4::tree::TerminalNode* EQ_(size_t i);
    FileSizeLiteralContext *fileSizeLiteral();
    antlr4::tree::TerminalNode *ENCRYPTION();
    antlr4::tree::TerminalNode *ENGINE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateTablespaceInnodbContext* createTablespaceInnodb();

  class  CreateTablespaceNdbContext : public antlr4::ParserRuleContext {
  public:
    CreateTablespaceNdbContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TABLESPACE();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *DATAFILE();
    std::vector<String_Context *> string_();
    String_Context* string_(size_t i);
    antlr4::tree::TerminalNode *USE();
    antlr4::tree::TerminalNode *LOGFILE();
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *UNDO();
    antlr4::tree::TerminalNode *EXTENT_SIZE();
    std::vector<FileSizeLiteralContext *> fileSizeLiteral();
    FileSizeLiteralContext* fileSizeLiteral(size_t i);
    antlr4::tree::TerminalNode *INITIAL_SIZE();
    antlr4::tree::TerminalNode *AUTOEXTEND_SIZE();
    antlr4::tree::TerminalNode *MAX_SIZE();
    antlr4::tree::TerminalNode *NODEGROUP();
    antlr4::tree::TerminalNode *WAIT();
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *ENGINE();
    std::vector<antlr4::tree::TerminalNode *> EQ_();
    antlr4::tree::TerminalNode* EQ_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateTablespaceNdbContext* createTablespaceNdb();

  class  AlterTablespaceNdbContext : public antlr4::ParserRuleContext {
  public:
    AlterTablespaceNdbContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *TABLESPACE();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *DATAFILE();
    String_Context *string_();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *UNDO();
    antlr4::tree::TerminalNode *INITIAL_SIZE();
    std::vector<antlr4::tree::TerminalNode *> EQ_();
    antlr4::tree::TerminalNode* EQ_(size_t i);
    FileSizeLiteralContext *fileSizeLiteral();
    antlr4::tree::TerminalNode *WAIT();
    antlr4::tree::TerminalNode *RENAME();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *ENGINE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterTablespaceNdbContext* alterTablespaceNdb();

  class  AlterTablespaceInnodbContext : public antlr4::ParserRuleContext {
  public:
    MySQLStatementParser::String_Context *y_or_n = nullptr;;
    AlterTablespaceInnodbContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *TABLESPACE();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *ENCRYPTION();
    antlr4::tree::TerminalNode *UNDO();
    antlr4::tree::TerminalNode *SET();
    String_Context *string_();
    antlr4::tree::TerminalNode *RENAME();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *ENGINE();
    antlr4::tree::TerminalNode *ACTIVE();
    antlr4::tree::TerminalNode *INACTIVE();
    std::vector<antlr4::tree::TerminalNode *> EQ_();
    antlr4::tree::TerminalNode* EQ_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterTablespaceInnodbContext* alterTablespaceInnodb();

  class  DropTablespaceContext : public antlr4::ParserRuleContext {
  public:
    DropTablespaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *TABLESPACE();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *UNDO();
    antlr4::tree::TerminalNode *ENGINE();
    antlr4::tree::TerminalNode *EQ_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropTablespaceContext* dropTablespace();

  class  CreateLogfileGroupContext : public antlr4::ParserRuleContext {
  public:
    CreateLogfileGroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *LOGFILE();
    antlr4::tree::TerminalNode *GROUP();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *UNDOFILE();
    std::vector<String_Context *> string_();
    String_Context* string_(size_t i);
    antlr4::tree::TerminalNode *INITIAL_SIZE();
    std::vector<FileSizeLiteralContext *> fileSizeLiteral();
    FileSizeLiteralContext* fileSizeLiteral(size_t i);
    antlr4::tree::TerminalNode *UNDO_BUFFER_SIZE();
    antlr4::tree::TerminalNode *REDO_BUFFER_SIZE();
    antlr4::tree::TerminalNode *NODEGROUP();
    antlr4::tree::TerminalNode *WAIT();
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *ENGINE();
    std::vector<antlr4::tree::TerminalNode *> EQ_();
    antlr4::tree::TerminalNode* EQ_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateLogfileGroupContext* createLogfileGroup();

  class  AlterLogfileGroupContext : public antlr4::ParserRuleContext {
  public:
    AlterLogfileGroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *LOGFILE();
    antlr4::tree::TerminalNode *GROUP();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *UNDOFILE();
    String_Context *string_();
    antlr4::tree::TerminalNode *INITIAL_SIZE();
    FileSizeLiteralContext *fileSizeLiteral();
    antlr4::tree::TerminalNode *WAIT();
    antlr4::tree::TerminalNode *ENGINE();
    std::vector<antlr4::tree::TerminalNode *> EQ_();
    antlr4::tree::TerminalNode* EQ_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterLogfileGroupContext* alterLogfileGroup();

  class  DropLogfileGroupContext : public antlr4::ParserRuleContext {
  public:
    DropLogfileGroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *LOGFILE();
    antlr4::tree::TerminalNode *GROUP();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *ENGINE();
    antlr4::tree::TerminalNode *EQ_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropLogfileGroupContext* dropLogfileGroup();

  class  CreateTriggerContext : public antlr4::ParserRuleContext {
  public:
    CreateTriggerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TRIGGER();
    TriggerNameContext *triggerName();
    TriggerTimeContext *triggerTime();
    TriggerEventContext *triggerEvent();
    antlr4::tree::TerminalNode *ON();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *EACH();
    antlr4::tree::TerminalNode *ROW();
    RoutineBodyContext *routineBody();
    OwnerStatementContext *ownerStatement();
    TriggerOrderContext *triggerOrder();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateTriggerContext* createTrigger();

  class  DropTriggerContext : public antlr4::ParserRuleContext {
  public:
    DropTriggerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *TRIGGER();
    TriggerNameContext *triggerName();
    ExistClauseContext *existClause();
    SchemaNameContext *schemaName();
    antlr4::tree::TerminalNode *DOT_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropTriggerContext* dropTrigger();

  class  RenameTableContext : public antlr4::ParserRuleContext {
  public:
    RenameTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RENAME();
    antlr4::tree::TerminalNode *TABLE();
    std::vector<TableNameContext *> tableName();
    TableNameContext* tableName(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TO();
    antlr4::tree::TerminalNode* TO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RenameTableContext* renameTable();

  class  CreateDefinitionClauseContext : public antlr4::ParserRuleContext {
  public:
    CreateDefinitionClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP_();
    TableElementListContext *tableElementList();
    antlr4::tree::TerminalNode *RP_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateDefinitionClauseContext* createDefinitionClause();

  class  ColumnDefinitionContext : public antlr4::ParserRuleContext {
  public:
    MySQLStatementParser::IdentifierContext *column_name = nullptr;;
    ColumnDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FieldDefinitionContext *fieldDefinition();
    IdentifierContext *identifier();
    ReferenceDefinitionContext *referenceDefinition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnDefinitionContext* columnDefinition();

  class  FieldDefinitionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *storedAttribute = nullptr;;
    FieldDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DataTypeContext *dataType();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *LP_();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RP_();
    std::vector<ColumnAttributeContext *> columnAttribute();
    ColumnAttributeContext* columnAttribute(size_t i);
    CollateClauseContext *collateClause();
    GeneratedOptionContext *generatedOption();
    antlr4::tree::TerminalNode *VIRTUAL();
    antlr4::tree::TerminalNode *STORED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldDefinitionContext* fieldDefinition();

  class  ColumnAttributeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *value = nullptr;;
    ColumnAttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NULL();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *SECONDARY();
    antlr4::tree::TerminalNode *DEFAULT();
    SignedLiteralContext *signedLiteral();
    NowContext *now();
    antlr4::tree::TerminalNode *LP_();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RP_();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *AUTO_INCREMENT();
    antlr4::tree::TerminalNode *VALUE();
    antlr4::tree::TerminalNode *SERIAL();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *PRIMARY();
    antlr4::tree::TerminalNode *UNIQUE();
    String_Context *string_();
    antlr4::tree::TerminalNode *COMMENT();
    CollateClauseContext *collateClause();
    ColumnFormatContext *columnFormat();
    antlr4::tree::TerminalNode *COLUMN_FORMAT();
    StorageMediaContext *storageMedia();
    antlr4::tree::TerminalNode *STORAGE();
    antlr4::tree::TerminalNode *NUMBER_();
    antlr4::tree::TerminalNode *SRID();
    CheckConstraintContext *checkConstraint();
    ConstraintNameContext *constraintName();
    ConstraintEnforcementContext *constraintEnforcement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnAttributeContext* columnAttribute();

  class  CheckConstraintContext : public antlr4::ParserRuleContext {
  public:
    CheckConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *LP_();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RP_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CheckConstraintContext* checkConstraint();

  class  ConstraintEnforcementContext : public antlr4::ParserRuleContext {
  public:
    ConstraintEnforcementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENFORCED();
    antlr4::tree::TerminalNode *NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstraintEnforcementContext* constraintEnforcement();

  class  GeneratedOptionContext : public antlr4::ParserRuleContext {
  public:
    GeneratedOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GENERATED();
    antlr4::tree::TerminalNode *ALWAYS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GeneratedOptionContext* generatedOption();

  class  ReferenceDefinitionContext : public antlr4::ParserRuleContext {
  public:
    ReferenceDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REFERENCES();
    TableNameContext *tableName();
    KeyPartsContext *keyParts();
    antlr4::tree::TerminalNode *MATCH();
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *PARTIAL();
    antlr4::tree::TerminalNode *SIMPLE();
    OnUpdateDeleteContext *onUpdateDelete();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReferenceDefinitionContext* referenceDefinition();

  class  OnUpdateDeleteContext : public antlr4::ParserRuleContext {
  public:
    OnUpdateDeleteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ON();
    antlr4::tree::TerminalNode* ON(size_t i);
    antlr4::tree::TerminalNode *UPDATE();
    std::vector<ReferenceOptionContext *> referenceOption();
    ReferenceOptionContext* referenceOption(size_t i);
    antlr4::tree::TerminalNode *DELETE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OnUpdateDeleteContext* onUpdateDelete();

  class  ReferenceOptionContext : public antlr4::ParserRuleContext {
  public:
    ReferenceOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESTRICT();
    antlr4::tree::TerminalNode *CASCADE();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *NULL();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReferenceOptionContext* referenceOption();

  class  IndexNameAndTypeContext : public antlr4::ParserRuleContext {
  public:
    IndexNameAndTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IndexNameContext *indexName();
    IndexTypeClauseContext *indexTypeClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexNameAndTypeContext* indexNameAndType();

  class  IndexTypeContext : public antlr4::ParserRuleContext {
  public:
    IndexTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BTREE();
    antlr4::tree::TerminalNode *RTREE();
    antlr4::tree::TerminalNode *HASH();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexTypeContext* indexType();

  class  IndexTypeClauseContext : public antlr4::ParserRuleContext {
  public:
    IndexTypeClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IndexTypeContext *indexType();
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *TYPE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexTypeClauseContext* indexTypeClause();

  class  KeyPartsContext : public antlr4::ParserRuleContext {
  public:
    KeyPartsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP_();
    std::vector<KeyPartContext *> keyPart();
    KeyPartContext* keyPart(size_t i);
    antlr4::tree::TerminalNode *RP_();
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeyPartsContext* keyParts();

  class  KeyPartContext : public antlr4::ParserRuleContext {
  public:
    KeyPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColumnNameContext *columnName();
    FieldLengthContext *fieldLength();
    DirectionContext *direction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeyPartContext* keyPart();

  class  KeyPartWithExpressionContext : public antlr4::ParserRuleContext {
  public:
    KeyPartWithExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    KeyPartContext *keyPart();
    antlr4::tree::TerminalNode *LP_();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RP_();
    DirectionContext *direction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeyPartWithExpressionContext* keyPartWithExpression();

  class  KeyListWithExpressionContext : public antlr4::ParserRuleContext {
  public:
    KeyListWithExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP_();
    std::vector<KeyPartWithExpressionContext *> keyPartWithExpression();
    KeyPartWithExpressionContext* keyPartWithExpression(size_t i);
    antlr4::tree::TerminalNode *RP_();
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeyListWithExpressionContext* keyListWithExpression();

  class  IndexOptionContext : public antlr4::ParserRuleContext {
  public:
    IndexOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CommonIndexOptionContext *commonIndexOption();
    IndexTypeClauseContext *indexTypeClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexOptionContext* indexOption();

  class  CommonIndexOptionContext : public antlr4::ParserRuleContext {
  public:
    CommonIndexOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEY_BLOCK_SIZE();
    antlr4::tree::TerminalNode *NUMBER_();
    antlr4::tree::TerminalNode *EQ_();
    antlr4::tree::TerminalNode *COMMENT();
    StringLiteralsContext *stringLiterals();
    VisibilityContext *visibility();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CommonIndexOptionContext* commonIndexOption();

  class  VisibilityContext : public antlr4::ParserRuleContext {
  public:
    VisibilityContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VISIBLE();
    antlr4::tree::TerminalNode *INVISIBLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VisibilityContext* visibility();

  class  CreateLikeClauseContext : public antlr4::ParserRuleContext {
  public:
    CreateLikeClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIKE();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *LP_();
    antlr4::tree::TerminalNode *RP_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateLikeClauseContext* createLikeClause();

  class  CreateIndexSpecificationContext : public antlr4::ParserRuleContext {
  public:
    CreateIndexSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNIQUE();
    antlr4::tree::TerminalNode *FULLTEXT();
    antlr4::tree::TerminalNode *SPATIAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateIndexSpecificationContext* createIndexSpecification();

  class  CreateTableOptionsContext : public antlr4::ParserRuleContext {
  public:
    CreateTableOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CreateTableOptionContext *> createTableOption();
    CreateTableOptionContext* createTableOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateTableOptionsContext* createTableOptions();

  class  CreateTableOptionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *option = nullptr;;
    antlr4::Token *ternaryOption = nullptr;;
    antlr4::Token *format = nullptr;;
    antlr4::Token *method = nullptr;;
    MySQLStatementParser::String_Context *jsonAttribute = nullptr;;
    CreateTableOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EngineRefContext *engineRef();
    antlr4::tree::TerminalNode *ENGINE();
    antlr4::tree::TerminalNode *EQ_();
    antlr4::tree::TerminalNode *SECONDARY_ENGINE();
    antlr4::tree::TerminalNode *NULL();
    String_Context *string_();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *NUMBER_();
    antlr4::tree::TerminalNode *MAX_ROWS();
    antlr4::tree::TerminalNode *MIN_ROWS();
    antlr4::tree::TerminalNode *AVG_ROW_LENGTH();
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *COMMENT();
    TextStringContext *textString();
    antlr4::tree::TerminalNode *COMPRESSION();
    antlr4::tree::TerminalNode *ENCRYPTION();
    antlr4::tree::TerminalNode *AUTO_INCREMENT();
    antlr4::tree::TerminalNode *PACK_KEYS();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *STATS_AUTO_RECALC();
    antlr4::tree::TerminalNode *STATS_PERSISTENT();
    antlr4::tree::TerminalNode *STATS_SAMPLE_PAGES();
    antlr4::tree::TerminalNode *CHECKSUM();
    antlr4::tree::TerminalNode *TABLE_CHECKSUM();
    antlr4::tree::TerminalNode *DELAY_KEY_WRITE();
    antlr4::tree::TerminalNode *ROW_FORMAT();
    antlr4::tree::TerminalNode *DYNAMIC();
    antlr4::tree::TerminalNode *FIXED();
    antlr4::tree::TerminalNode *COMPRESSED();
    antlr4::tree::TerminalNode *REDUNDANT();
    antlr4::tree::TerminalNode *COMPACT();
    antlr4::tree::TerminalNode *LP_();
    TableListContext *tableList();
    antlr4::tree::TerminalNode *RP_();
    antlr4::tree::TerminalNode *UNION();
    DefaultCharsetContext *defaultCharset();
    DefaultCollationContext *defaultCollation();
    antlr4::tree::TerminalNode *INSERT_METHOD();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *LAST();
    antlr4::tree::TerminalNode *DIRECTORY();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *TABLESPACE();
    antlr4::tree::TerminalNode *STORAGE();
    antlr4::tree::TerminalNode *DISK();
    antlr4::tree::TerminalNode *MEMORY();
    antlr4::tree::TerminalNode *CONNECTION();
    antlr4::tree::TerminalNode *KEY_BLOCK_SIZE();
    antlr4::tree::TerminalNode *ENGINE_ATTRIBUTE();
    antlr4::tree::TerminalNode *SECONDARY_ENGINE_ATTRIBUTE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateTableOptionContext* createTableOption();

  class  CreateSRSStatementContext : public antlr4::ParserRuleContext {
  public:
    CreateSRSStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *SPATIAL();
    antlr4::tree::TerminalNode *REFERENCE();
    antlr4::tree::TerminalNode *SYSTEM();
    antlr4::tree::TerminalNode *NUMBER_();
    std::vector<SrsAttributeContext *> srsAttribute();
    SrsAttributeContext* srsAttribute(size_t i);
    NotExistClauseContext *notExistClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateSRSStatementContext* createSRSStatement();

  class  DropSRSStatementContext : public antlr4::ParserRuleContext {
  public:
    DropSRSStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *SPATIAL();
    antlr4::tree::TerminalNode *REFERENCE();
    antlr4::tree::TerminalNode *SYSTEM();
    antlr4::tree::TerminalNode *NUMBER_();
    NotExistClauseContext *notExistClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropSRSStatementContext* dropSRSStatement();

  class  SrsAttributeContext : public antlr4::ParserRuleContext {
  public:
    SrsAttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();
    String_Context *string_();
    antlr4::tree::TerminalNode *DEFINITION();
    antlr4::tree::TerminalNode *ORGANIZATION();
    antlr4::tree::TerminalNode *IDENTIFIED();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *NUMBER_();
    antlr4::tree::TerminalNode *DESCRIPTION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SrsAttributeContext* srsAttribute();

  class  PlaceContext : public antlr4::ParserRuleContext {
  public:
    PlaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *AFTER();
    ColumnNameContext *columnName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PlaceContext* place();

  class  PartitionDefinitionsContext : public antlr4::ParserRuleContext {
  public:
    PartitionDefinitionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP_();
    std::vector<PartitionDefinitionContext *> partitionDefinition();
    PartitionDefinitionContext* partitionDefinition(size_t i);
    antlr4::tree::TerminalNode *RP_();
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionDefinitionsContext* partitionDefinitions();

  class  PartitionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    PartitionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARTITION();
    PartitionNameContext *partitionName();
    antlr4::tree::TerminalNode *VALUES();
    std::vector<PartitionDefinitionOptionContext *> partitionDefinitionOption();
    PartitionDefinitionOptionContext* partitionDefinitionOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LP_();
    antlr4::tree::TerminalNode* LP_(size_t i);
    std::vector<SubpartitionDefinitionContext *> subpartitionDefinition();
    SubpartitionDefinitionContext* subpartitionDefinition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RP_();
    antlr4::tree::TerminalNode* RP_(size_t i);
    antlr4::tree::TerminalNode *LESS();
    antlr4::tree::TerminalNode *THAN();
    PartitionLessThanValueContext *partitionLessThanValue();
    antlr4::tree::TerminalNode *IN();
    PartitionValueListContext *partitionValueList();
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionDefinitionContext* partitionDefinition();

  class  PartitionLessThanValueContext : public antlr4::ParserRuleContext {
  public:
    PartitionLessThanValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP_();
    antlr4::tree::TerminalNode *RP_();
    ExprContext *expr();
    PartitionValueListContext *partitionValueList();
    antlr4::tree::TerminalNode *MAXVALUE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionLessThanValueContext* partitionLessThanValue();

  class  PartitionValueListContext : public antlr4::ParserRuleContext {
  public:
    PartitionValueListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionValueListContext* partitionValueList();

  class  PartitionDefinitionOptionContext : public antlr4::ParserRuleContext {
  public:
    PartitionDefinitionOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENGINE();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *STORAGE();
    antlr4::tree::TerminalNode *EQ_();
    antlr4::tree::TerminalNode *COMMENT();
    String_Context *string_();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *DIRECTORY();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *MAX_ROWS();
    antlr4::tree::TerminalNode *NUMBER_();
    antlr4::tree::TerminalNode *MIN_ROWS();
    antlr4::tree::TerminalNode *TABLESPACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionDefinitionOptionContext* partitionDefinitionOption();

  class  SubpartitionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    SubpartitionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUBPARTITION();
    IdentifierContext *identifier();
    std::vector<PartitionDefinitionOptionContext *> partitionDefinitionOption();
    PartitionDefinitionOptionContext* partitionDefinitionOption(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubpartitionDefinitionContext* subpartitionDefinition();

  class  OwnerStatementContext : public antlr4::ParserRuleContext {
  public:
    OwnerStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFINER();
    antlr4::tree::TerminalNode *EQ_();
    UserNameContext *userName();
    antlr4::tree::TerminalNode *CURRENT_USER();
    antlr4::tree::TerminalNode *LP_();
    antlr4::tree::TerminalNode *RP_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OwnerStatementContext* ownerStatement();

  class  ScheduleExpressionContext : public antlr4::ParserRuleContext {
  public:
    ScheduleExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AT();
    std::vector<TimestampValueContext *> timestampValue();
    TimestampValueContext* timestampValue(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PLUS_();
    antlr4::tree::TerminalNode* PLUS_(size_t i);
    std::vector<IntervalExpressionContext *> intervalExpression();
    IntervalExpressionContext* intervalExpression(size_t i);
    antlr4::tree::TerminalNode *EVERY();
    IntervalValueContext *intervalValue();
    antlr4::tree::TerminalNode *STARTS();
    antlr4::tree::TerminalNode *ENDS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ScheduleExpressionContext* scheduleExpression();

  class  TimestampValueContext : public antlr4::ParserRuleContext {
  public:
    TimestampValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CURRENT_TIMESTAMP();
    StringLiteralsContext *stringLiterals();
    NumberLiteralsContext *numberLiterals();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TimestampValueContext* timestampValue();

  class  RoutineBodyContext : public antlr4::ParserRuleContext {
  public:
    RoutineBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleStatementContext *simpleStatement();
    CompoundStatementContext *compoundStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RoutineBodyContext* routineBody();

  class  ServerOptionContext : public antlr4::ParserRuleContext {
  public:
    ServerOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HOST();
    String_Context *string_();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *SOCKET();
    antlr4::tree::TerminalNode *OWNER();
    antlr4::tree::TerminalNode *PORT();
    NumberLiteralsContext *numberLiterals();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ServerOptionContext* serverOption();

  class  RoutineOptionContext : public antlr4::ParserRuleContext {
  public:
    RoutineOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMENT();
    String_Context *string_();
    antlr4::tree::TerminalNode *LANGUAGE();
    antlr4::tree::TerminalNode *SQL();
    antlr4::tree::TerminalNode *DETERMINISTIC();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *CONTAINS();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *READS();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *MODIFIES();
    antlr4::tree::TerminalNode *SECURITY();
    antlr4::tree::TerminalNode *DEFINER();
    antlr4::tree::TerminalNode *INVOKER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RoutineOptionContext* routineOption();

  class  ProcedureParameterContext : public antlr4::ParserRuleContext {
  public:
    ProcedureParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    DataTypeContext *dataType();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *OUT();
    antlr4::tree::TerminalNode *INOUT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProcedureParameterContext* procedureParameter();

  class  FileSizeLiteralContext : public antlr4::ParserRuleContext {
  public:
    FileSizeLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FILESIZE_LITERAL();
    NumberLiteralsContext *numberLiterals();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FileSizeLiteralContext* fileSizeLiteral();

  class  SimpleStatementContext : public antlr4::ParserRuleContext {
  public:
    SimpleStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ValidStatementContext *validStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleStatementContext* simpleStatement();

  class  CompoundStatementContext : public antlr4::ParserRuleContext {
  public:
    CompoundStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BeginStatementContext *beginStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompoundStatementContext* compoundStatement();

  class  ValidStatementContext : public antlr4::ParserRuleContext {
  public:
    ValidStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CreateTableContext *createTable();
    AlterTableContext *alterTable();
    DropTableContext *dropTable();
    TruncateTableContext *truncateTable();
    InsertContext *insert();
    ReplaceContext *replace();
    UpdateContext *update();
    Delete_stmtContext *delete_stmt();
    SelectContext *select();
    CallContext *call();
    SetVariableContext *setVariable();
    BeginStatementContext *beginStatement();
    DeclareStatementContext *declareStatement();
    FlowControlStatementContext *flowControlStatement();
    CursorStatementContext *cursorStatement();
    ConditionHandlingStatementContext *conditionHandlingStatement();
    antlr4::tree::TerminalNode *SEMI_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValidStatementContext* validStatement();

  class  BeginStatementContext : public antlr4::ParserRuleContext {
  public:
    BeginStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *END();
    std::vector<LabelNameContext *> labelName();
    LabelNameContext* labelName(size_t i);
    antlr4::tree::TerminalNode *COLON_();
    std::vector<ValidStatementContext *> validStatement();
    ValidStatementContext* validStatement(size_t i);
    antlr4::tree::TerminalNode *SEMI_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BeginStatementContext* beginStatement();

  class  DeclareStatementContext : public antlr4::ParserRuleContext {
  public:
    DeclareStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARE();
    std::vector<VariableContext *> variable();
    VariableContext* variable(size_t i);
    DataTypeContext *dataType();
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DEFAULT();
    antlr4::tree::TerminalNode* DEFAULT(size_t i);
    std::vector<SimpleExprContext *> simpleExpr();
    SimpleExprContext* simpleExpr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclareStatementContext* declareStatement();

  class  FlowControlStatementContext : public antlr4::ParserRuleContext {
  public:
    FlowControlStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CaseStatementContext *caseStatement();
    IfStatementContext *ifStatement();
    IterateStatementContext *iterateStatement();
    LeaveStatementContext *leaveStatement();
    LoopStatementContext *loopStatement();
    RepeatStatementContext *repeatStatement();
    ReturnStatementContext *returnStatement();
    WhileStatementContext *whileStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FlowControlStatementContext* flowControlStatement();

  class  CaseStatementContext : public antlr4::ParserRuleContext {
  public:
    CaseStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> CASE();
    antlr4::tree::TerminalNode* CASE(size_t i);
    antlr4::tree::TerminalNode *END();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WHEN();
    antlr4::tree::TerminalNode* WHEN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> THEN();
    antlr4::tree::TerminalNode* THEN(size_t i);
    antlr4::tree::TerminalNode *ELSE();
    std::vector<ValidStatementContext *> validStatement();
    ValidStatementContext* validStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CaseStatementContext* caseStatement();

  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IF();
    antlr4::tree::TerminalNode* IF(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> THEN();
    antlr4::tree::TerminalNode* THEN(size_t i);
    antlr4::tree::TerminalNode *END();
    std::vector<ValidStatementContext *> validStatement();
    ValidStatementContext* validStatement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ELSEIF();
    antlr4::tree::TerminalNode* ELSEIF(size_t i);
    antlr4::tree::TerminalNode *ELSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfStatementContext* ifStatement();

  class  IterateStatementContext : public antlr4::ParserRuleContext {
  public:
    IterateStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ITERATE();
    LabelNameContext *labelName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IterateStatementContext* iterateStatement();

  class  LeaveStatementContext : public antlr4::ParserRuleContext {
  public:
    LeaveStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEAVE();
    LabelNameContext *labelName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LeaveStatementContext* leaveStatement();

  class  LoopStatementContext : public antlr4::ParserRuleContext {
  public:
    LoopStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LOOP();
    antlr4::tree::TerminalNode* LOOP(size_t i);
    antlr4::tree::TerminalNode *END();
    std::vector<LabelNameContext *> labelName();
    LabelNameContext* labelName(size_t i);
    antlr4::tree::TerminalNode *COLON_();
    std::vector<ValidStatementContext *> validStatement();
    ValidStatementContext* validStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LoopStatementContext* loopStatement();

  class  RepeatStatementContext : public antlr4::ParserRuleContext {
  public:
    RepeatStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> REPEAT();
    antlr4::tree::TerminalNode* REPEAT(size_t i);
    antlr4::tree::TerminalNode *UNTIL();
    ExprContext *expr();
    antlr4::tree::TerminalNode *END();
    std::vector<LabelNameContext *> labelName();
    LabelNameContext* labelName(size_t i);
    antlr4::tree::TerminalNode *COLON_();
    std::vector<ValidStatementContext *> validStatement();
    ValidStatementContext* validStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RepeatStatementContext* repeatStatement();

  class  ReturnStatementContext : public antlr4::ParserRuleContext {
  public:
    ReturnStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturnStatementContext* returnStatement();

  class  WhileStatementContext : public antlr4::ParserRuleContext {
  public:
    WhileStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> WHILE();
    antlr4::tree::TerminalNode* WHILE(size_t i);
    ExprContext *expr();
    antlr4::tree::TerminalNode *DO();
    antlr4::tree::TerminalNode *END();
    std::vector<LabelNameContext *> labelName();
    LabelNameContext* labelName(size_t i);
    antlr4::tree::TerminalNode *COLON_();
    std::vector<ValidStatementContext *> validStatement();
    ValidStatementContext* validStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhileStatementContext* whileStatement();

  class  CursorStatementContext : public antlr4::ParserRuleContext {
  public:
    CursorStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CursorCloseStatementContext *cursorCloseStatement();
    CursorDeclareStatementContext *cursorDeclareStatement();
    CursorFetchStatementContext *cursorFetchStatement();
    CursorOpenStatementContext *cursorOpenStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CursorStatementContext* cursorStatement();

  class  CursorCloseStatementContext : public antlr4::ParserRuleContext {
  public:
    CursorCloseStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLOSE();
    CursorNameContext *cursorName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CursorCloseStatementContext* cursorCloseStatement();

  class  CursorDeclareStatementContext : public antlr4::ParserRuleContext {
  public:
    CursorDeclareStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARE();
    CursorNameContext *cursorName();
    antlr4::tree::TerminalNode *CURSOR();
    antlr4::tree::TerminalNode *FOR();
    SelectContext *select();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CursorDeclareStatementContext* cursorDeclareStatement();

  class  CursorFetchStatementContext : public antlr4::ParserRuleContext {
  public:
    CursorFetchStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FETCH();
    CursorNameContext *cursorName();
    antlr4::tree::TerminalNode *INTO();
    std::vector<VariableContext *> variable();
    VariableContext* variable(size_t i);
    antlr4::tree::TerminalNode *FROM();
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);
    antlr4::tree::TerminalNode *NEXT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CursorFetchStatementContext* cursorFetchStatement();

  class  CursorOpenStatementContext : public antlr4::ParserRuleContext {
  public:
    CursorOpenStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN();
    CursorNameContext *cursorName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CursorOpenStatementContext* cursorOpenStatement();

  class  ConditionHandlingStatementContext : public antlr4::ParserRuleContext {
  public:
    ConditionHandlingStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclareConditionStatementContext *declareConditionStatement();
    DeclareHandlerStatementContext *declareHandlerStatement();
    GetDiagnosticsStatementContext *getDiagnosticsStatement();
    ResignalStatementContext *resignalStatement();
    SignalStatementContext *signalStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionHandlingStatementContext* conditionHandlingStatement();

  class  DeclareConditionStatementContext : public antlr4::ParserRuleContext {
  public:
    DeclareConditionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARE();
    ConditionNameContext *conditionName();
    antlr4::tree::TerminalNode *CONDITION();
    antlr4::tree::TerminalNode *FOR();
    ConditionValueContext *conditionValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclareConditionStatementContext* declareConditionStatement();

  class  DeclareHandlerStatementContext : public antlr4::ParserRuleContext {
  public:
    DeclareHandlerStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARE();
    HandlerActionContext *handlerAction();
    antlr4::tree::TerminalNode *HANDLER();
    antlr4::tree::TerminalNode *FOR();
    std::vector<ConditionValueContext *> conditionValue();
    ConditionValueContext* conditionValue(size_t i);
    ValidStatementContext *validStatement();
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclareHandlerStatementContext* declareHandlerStatement();

  class  GetDiagnosticsStatementContext : public antlr4::ParserRuleContext {
  public:
    GetDiagnosticsStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GET();
    antlr4::tree::TerminalNode *DIAGNOSTICS();
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *STACKED();
    std::vector<StatementInformationItemContext *> statementInformationItem();
    StatementInformationItemContext* statementInformationItem(size_t i);
    antlr4::tree::TerminalNode *CONDITION();
    ConditionNumberContext *conditionNumber();
    std::vector<ConditionInformationItemContext *> conditionInformationItem();
    ConditionInformationItemContext* conditionInformationItem(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GetDiagnosticsStatementContext* getDiagnosticsStatement();

  class  StatementInformationItemContext : public antlr4::ParserRuleContext {
  public:
    StatementInformationItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();
    antlr4::tree::TerminalNode *EQ_();
    StatementInformationItemNameContext *statementInformationItemName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementInformationItemContext* statementInformationItem();

  class  ConditionInformationItemContext : public antlr4::ParserRuleContext {
  public:
    ConditionInformationItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();
    antlr4::tree::TerminalNode *EQ_();
    ConditionInformationItemNameContext *conditionInformationItemName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionInformationItemContext* conditionInformationItem();

  class  ConditionNumberContext : public antlr4::ParserRuleContext {
  public:
    ConditionNumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();
    NumberLiteralsContext *numberLiterals();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionNumberContext* conditionNumber();

  class  StatementInformationItemNameContext : public antlr4::ParserRuleContext {
  public:
    StatementInformationItemNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *ROW_COUNT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementInformationItemNameContext* statementInformationItemName();

  class  ConditionInformationItemNameContext : public antlr4::ParserRuleContext {
  public:
    ConditionInformationItemNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLASS_ORIGIN();
    antlr4::tree::TerminalNode *SUBCLASS_ORIGIN();
    antlr4::tree::TerminalNode *RETURNED_SQLSTATE();
    antlr4::tree::TerminalNode *MESSAGE_TEXT();
    antlr4::tree::TerminalNode *MYSQL_ERRNO();
    antlr4::tree::TerminalNode *CONSTRAINT_CATALOG();
    antlr4::tree::TerminalNode *CONSTRAINT_SCHEMA();
    antlr4::tree::TerminalNode *CONSTRAINT_NAME();
    antlr4::tree::TerminalNode *CATALOG_NAME();
    antlr4::tree::TerminalNode *SCHEMA_NAME();
    antlr4::tree::TerminalNode *TABLE_NAME();
    antlr4::tree::TerminalNode *COLUMN_NAME();
    antlr4::tree::TerminalNode *CURSOR_NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionInformationItemNameContext* conditionInformationItemName();

  class  HandlerActionContext : public antlr4::ParserRuleContext {
  public:
    HandlerActionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONTINUE();
    antlr4::tree::TerminalNode *EXIT();
    antlr4::tree::TerminalNode *UNDO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HandlerActionContext* handlerAction();

  class  ConditionValueContext : public antlr4::ParserRuleContext {
  public:
    ConditionValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberLiteralsContext *numberLiterals();
    antlr4::tree::TerminalNode *SQLSTATE();
    StringLiteralsContext *stringLiterals();
    antlr4::tree::TerminalNode *VALUE();
    ConditionNameContext *conditionName();
    antlr4::tree::TerminalNode *SQLWARNING();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *FOUND();
    antlr4::tree::TerminalNode *SQLEXCEPTION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionValueContext* conditionValue();

  class  ResignalStatementContext : public antlr4::ParserRuleContext {
  public:
    ResignalStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESIGNAL();
    ConditionValueContext *conditionValue();
    antlr4::tree::TerminalNode *SET();
    std::vector<SignalInformationItemContext *> signalInformationItem();
    SignalInformationItemContext* signalInformationItem(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResignalStatementContext* resignalStatement();

  class  SignalStatementContext : public antlr4::ParserRuleContext {
  public:
    SignalStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SIGNAL();
    ConditionValueContext *conditionValue();
    antlr4::tree::TerminalNode *SET();
    std::vector<SignalInformationItemContext *> signalInformationItem();
    SignalInformationItemContext* signalInformationItem(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignalStatementContext* signalStatement();

  class  SignalInformationItemContext : public antlr4::ParserRuleContext {
  public:
    SignalInformationItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionInformationItemNameContext *conditionInformationItemName();
    antlr4::tree::TerminalNode *EQ_();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignalInformationItemContext* signalInformationItem();

  class  SetTransactionContext : public antlr4::ParserRuleContext {
  public:
    SetTransactionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *TRANSACTION();
    std::vector<TransactionCharacteristicContext *> transactionCharacteristic();
    TransactionCharacteristicContext* transactionCharacteristic(size_t i);
    ScopeContext *scope();
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetTransactionContext* setTransaction();

  class  SetAutoCommitContext : public antlr4::ParserRuleContext {
  public:
    SetAutoCommitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *AUTOCOMMIT();
    antlr4::tree::TerminalNode *EQ_();
    AutoCommitValueContext *autoCommitValue();
    std::vector<antlr4::tree::TerminalNode *> AT_();
    antlr4::tree::TerminalNode* AT_(size_t i);
    ScopeContext *scope();
    antlr4::tree::TerminalNode *DOT_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetAutoCommitContext* setAutoCommit();

  class  AutoCommitValueContext : public antlr4::ParserRuleContext {
  public:
    AutoCommitValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER_();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *OFF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AutoCommitValueContext* autoCommitValue();

  class  BeginTransactionContext : public antlr4::ParserRuleContext {
  public:
    BeginTransactionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *TRANSACTION();
    std::vector<TransactionCharacteristicContext *> transactionCharacteristic();
    TransactionCharacteristicContext* transactionCharacteristic(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BeginTransactionContext* beginTransaction();

  class  CommitContext : public antlr4::ParserRuleContext {
  public:
    CommitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMIT();
    antlr4::tree::TerminalNode *WORK();
    OptionChainContext *optionChain();
    OptionReleaseContext *optionRelease();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CommitContext* commit();

  class  RollbackContext : public antlr4::ParserRuleContext {
  public:
    RollbackContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ROLLBACK();
    antlr4::tree::TerminalNode *TO();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *SAVEPOINT();
    OptionChainContext *optionChain();
    OptionReleaseContext *optionRelease();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RollbackContext* rollback();

  class  SavepointContext : public antlr4::ParserRuleContext {
  public:
    SavepointContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SAVEPOINT();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SavepointContext* savepoint();

  class  BeginContext : public antlr4::ParserRuleContext {
  public:
    BeginContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *WORK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BeginContext* begin();

  class  LockContext : public antlr4::ParserRuleContext {
  public:
    LockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *INSTANCE();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *BACKUP();
    std::vector<TableLockContext *> tableLock();
    TableLockContext* tableLock(size_t i);
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *TABLES();
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LockContext* lock();

  class  UnlockContext : public antlr4::ParserRuleContext {
  public:
    UnlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNLOCK();
    antlr4::tree::TerminalNode *INSTANCE();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *TABLES();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnlockContext* unlock();

  class  ReleaseSavepointContext : public antlr4::ParserRuleContext {
  public:
    ReleaseSavepointContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RELEASE();
    antlr4::tree::TerminalNode *SAVEPOINT();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReleaseSavepointContext* releaseSavepoint();

  class  XaContext : public antlr4::ParserRuleContext {
  public:
    XaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *XA();
    XidContext *xid();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *PREPARE();
    antlr4::tree::TerminalNode *COMMIT();
    antlr4::tree::TerminalNode *ROLLBACK();
    antlr4::tree::TerminalNode *RECOVER();
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *JOIN();
    antlr4::tree::TerminalNode *RESUME();
    antlr4::tree::TerminalNode *SUSPEND();
    antlr4::tree::TerminalNode *ONE();
    antlr4::tree::TerminalNode *PHASE();
    antlr4::tree::TerminalNode *CONVERT();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *MIGRATE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  XaContext* xa();

  class  TransactionCharacteristicContext : public antlr4::ParserRuleContext {
  public:
    TransactionCharacteristicContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ISOLATION();
    antlr4::tree::TerminalNode *LEVEL();
    LevelContext *level();
    AccessModeContext *accessMode();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *CONSISTENT();
    antlr4::tree::TerminalNode *SNAPSHOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TransactionCharacteristicContext* transactionCharacteristic();

  class  LevelContext : public antlr4::ParserRuleContext {
  public:
    LevelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPEATABLE();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *COMMITTED();
    antlr4::tree::TerminalNode *UNCOMMITTED();
    antlr4::tree::TerminalNode *SERIALIZABLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LevelContext* level();

  class  AccessModeContext : public antlr4::ParserRuleContext {
  public:
    AccessModeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *WRITE();
    antlr4::tree::TerminalNode *ONLY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AccessModeContext* accessMode();

  class  OptionChainContext : public antlr4::ParserRuleContext {
  public:
    OptionChainContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *CHAIN();
    antlr4::tree::TerminalNode *NO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptionChainContext* optionChain();

  class  OptionReleaseContext : public antlr4::ParserRuleContext {
  public:
    OptionReleaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RELEASE();
    antlr4::tree::TerminalNode *NO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptionReleaseContext* optionRelease();

  class  TableLockContext : public antlr4::ParserRuleContext {
  public:
    TableLockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableNameContext *tableName();
    LockOptionContext *lockOption();
    AliasContext *alias();
    antlr4::tree::TerminalNode *AS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableLockContext* tableLock();

  class  LockOptionContext : public antlr4::ParserRuleContext {
  public:
    LockOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *WRITE();
    antlr4::tree::TerminalNode *LOW_PRIORITY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LockOptionContext* lockOption();

  class  XidContext : public antlr4::ParserRuleContext {
  public:
    XidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<String_Context *> string_();
    String_Context* string_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);
    NumberLiteralsContext *numberLiterals();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  XidContext* xid();

  class  GrantContext : public antlr4::ParserRuleContext {
  public:
    GrantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GRANT();
    ProxyClauseContext *proxyClause();
    PrivilegeClauseContext *privilegeClause();
    RoleClauseContext *roleClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GrantContext* grant();

  class  RevokeContext : public antlr4::ParserRuleContext {
  public:
    RevokeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REVOKE();
    ProxyClauseContext *proxyClause();
    PrivilegeClauseContext *privilegeClause();
    AllClauseContext *allClause();
    RoleClauseContext *roleClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RevokeContext* revoke();

  class  ProxyClauseContext : public antlr4::ParserRuleContext {
  public:
    ProxyClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROXY();
    antlr4::tree::TerminalNode *ON();
    UserOrRoleContext *userOrRole();
    antlr4::tree::TerminalNode *TO();
    UserOrRolesContext *userOrRoles();
    WithGrantOptionContext *withGrantOption();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProxyClauseContext* proxyClause();

  class  PrivilegeClauseContext : public antlr4::ParserRuleContext {
  public:
    PrivilegeClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrivilegesContext *privileges();
    antlr4::tree::TerminalNode *ON();
    OnObjectClauseContext *onObjectClause();
    UserOrRolesContext *userOrRoles();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *FROM();
    WithGrantOptionContext *withGrantOption();
    GrantOptionContext *grantOption();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrivilegeClauseContext* privilegeClause();

  class  RoleClauseContext : public antlr4::ParserRuleContext {
  public:
    RoleClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RolesContext *roles();
    UserOrRolesContext *userOrRoles();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *FROM();
    WithGrantOptionContext *withGrantOption();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RoleClauseContext* roleClause();

  class  AllClauseContext : public antlr4::ParserRuleContext {
  public:
    AllClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *COMMA_();
    antlr4::tree::TerminalNode *GRANT();
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *FROM();
    UserOrRolesContext *userOrRoles();
    antlr4::tree::TerminalNode *PRIVILEGES();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AllClauseContext* allClause();

  class  PrivilegesContext : public antlr4::ParserRuleContext {
  public:
    PrivilegesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PrivilegeContext *> privilege();
    PrivilegeContext* privilege(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrivilegesContext* privileges();

  class  PrivilegeContext : public antlr4::ParserRuleContext {
  public:
    PrivilegeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrivilegeTypeContext *privilegeType();
    antlr4::tree::TerminalNode *LP_();
    ColumnNamesContext *columnNames();
    antlr4::tree::TerminalNode *RP_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrivilegeContext* privilege();

  class  PrivilegeTypeContext : public antlr4::ParserRuleContext {
  public:
    PrivilegeTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *PRIVILEGES();
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *ROUTINE();
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TABLESPACE();
    antlr4::tree::TerminalNode *TEMPORARY();
    antlr4::tree::TerminalNode *TABLES();
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *VIEW();
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *ROLE();
    antlr4::tree::TerminalNode *EVENT();
    antlr4::tree::TerminalNode *EXECUTE();
    antlr4::tree::TerminalNode *FILE();
    antlr4::tree::TerminalNode *GRANT();
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *PROCESS();
    antlr4::tree::TerminalNode *PROXY();
    antlr4::tree::TerminalNode *REFERENCES();
    antlr4::tree::TerminalNode *RELOAD();
    antlr4::tree::TerminalNode *REPLICATION();
    antlr4::tree::TerminalNode *CLIENT();
    antlr4::tree::TerminalNode *SLAVE();
    antlr4::tree::TerminalNode *SELECT();
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *DATABASES();
    antlr4::tree::TerminalNode *SHUTDOWN();
    antlr4::tree::TerminalNode *SUPER();
    antlr4::tree::TerminalNode *TRIGGER();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *USAGE();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrivilegeTypeContext* privilegeType();

  class  OnObjectClauseContext : public antlr4::ParserRuleContext {
  public:
    OnObjectClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrivilegeLevelContext *privilegeLevel();
    ObjectTypeContext *objectType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OnObjectClauseContext* onObjectClause();

  class  ObjectTypeContext : public antlr4::ParserRuleContext {
  public:
    ObjectTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *PROCEDURE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ObjectTypeContext* objectType();

  class  PrivilegeLevelContext : public antlr4::ParserRuleContext {
  public:
    PrivilegeLevelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASTERISK_();
    antlr4::tree::TerminalNode *DOT_ASTERISK_();
    IdentifierContext *identifier();
    TableNameContext *tableName();
    SchemaNameContext *schemaName();
    antlr4::tree::TerminalNode *DOT_();
    RoutineNameContext *routineName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrivilegeLevelContext* privilegeLevel();

  class  CreateUserContext : public antlr4::ParserRuleContext {
  public:
    CreateUserContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *USER();
    AlterUserListContext *alterUserList();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *EXISTS();
    DefaultRoleClauseContext *defaultRoleClause();
    RequireClauseContext *requireClause();
    ConnectOptionsContext *connectOptions();
    AccountLockPasswordExpireOptionsContext *accountLockPasswordExpireOptions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateUserContext* createUser();

  class  DefaultRoleClauseContext : public antlr4::ParserRuleContext {
  public:
    DefaultRoleClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *ROLE();
    std::vector<RoleNameContext *> roleName();
    RoleNameContext* roleName(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefaultRoleClauseContext* defaultRoleClause();

  class  RequireClauseContext : public antlr4::ParserRuleContext {
  public:
    RequireClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REQUIRE();
    antlr4::tree::TerminalNode *NONE();
    std::vector<TlsOptionContext *> tlsOption();
    TlsOptionContext* tlsOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RequireClauseContext* requireClause();

  class  ConnectOptionsContext : public antlr4::ParserRuleContext {
  public:
    ConnectOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    std::vector<ConnectOptionContext *> connectOption();
    ConnectOptionContext* connectOption(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConnectOptionsContext* connectOptions();

  class  AccountLockPasswordExpireOptionsContext : public antlr4::ParserRuleContext {
  public:
    AccountLockPasswordExpireOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AccountLockPasswordExpireOptionContext *> accountLockPasswordExpireOption();
    AccountLockPasswordExpireOptionContext* accountLockPasswordExpireOption(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AccountLockPasswordExpireOptionsContext* accountLockPasswordExpireOptions();

  class  AccountLockPasswordExpireOptionContext : public antlr4::ParserRuleContext {
  public:
    AccountLockPasswordExpireOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ACCOUNT();
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *UNLOCK();
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *EXPIRE();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *NEVER();
    antlr4::tree::TerminalNode *INTERVAL();
    antlr4::tree::TerminalNode *NUMBER_();
    antlr4::tree::TerminalNode *DAY();
    antlr4::tree::TerminalNode *HISTORY();
    antlr4::tree::TerminalNode *REUSE();
    antlr4::tree::TerminalNode *REQUIRE();
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *OPTIONAL();
    antlr4::tree::TerminalNode *FAILED_LOGIN_ATTEMPTS();
    antlr4::tree::TerminalNode *PASSWORD_LOCK_TIME();
    antlr4::tree::TerminalNode *UNBOUNDED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AccountLockPasswordExpireOptionContext* accountLockPasswordExpireOption();

  class  AlterUserContext : public antlr4::ParserRuleContext {
  public:
    AlterUserContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    std::vector<antlr4::tree::TerminalNode *> USER();
    antlr4::tree::TerminalNode* USER(size_t i);
    AlterUserListContext *alterUserList();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();
    RequireClauseContext *requireClause();
    ConnectOptionsContext *connectOptions();
    AccountLockPasswordExpireOptionsContext *accountLockPasswordExpireOptions();
    antlr4::tree::TerminalNode *LP_();
    antlr4::tree::TerminalNode *RP_();
    UserFuncAuthOptionContext *userFuncAuthOption();
    UserNameContext *userName();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *ROLE();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *ALL();
    std::vector<RoleNameContext *> roleName();
    RoleNameContext* roleName(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterUserContext* alterUser();

  class  AlterUserEntryContext : public antlr4::ParserRuleContext {
  public:
    AlterUserEntryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UserNameContext *userName();
    UserAuthOptionContext *userAuthOption();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterUserEntryContext* alterUserEntry();

  class  AlterUserListContext : public antlr4::ParserRuleContext {
  public:
    AlterUserListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AlterUserEntryContext *> alterUserEntry();
    AlterUserEntryContext* alterUserEntry(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterUserListContext* alterUserList();

  class  DropUserContext : public antlr4::ParserRuleContext {
  public:
    DropUserContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *USER();
    std::vector<UserNameContext *> userName();
    UserNameContext* userName(size_t i);
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropUserContext* dropUser();

  class  CreateRoleContext : public antlr4::ParserRuleContext {
  public:
    CreateRoleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *ROLE();
    std::vector<RoleNameContext *> roleName();
    RoleNameContext* roleName(size_t i);
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *EXISTS();
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateRoleContext* createRole();

  class  DropRoleContext : public antlr4::ParserRuleContext {
  public:
    DropRoleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *ROLE();
    std::vector<RoleNameContext *> roleName();
    RoleNameContext* roleName(size_t i);
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropRoleContext* dropRole();

  class  RenameUserContext : public antlr4::ParserRuleContext {
  public:
    RenameUserContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RENAME();
    antlr4::tree::TerminalNode *USER();
    std::vector<UserNameContext *> userName();
    UserNameContext* userName(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TO();
    antlr4::tree::TerminalNode* TO(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RenameUserContext* renameUser();

  class  SetDefaultRoleContext : public antlr4::ParserRuleContext {
  public:
    SetDefaultRoleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *ROLE();
    antlr4::tree::TerminalNode *TO();
    std::vector<UserNameContext *> userName();
    UserNameContext* userName(size_t i);
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *ALL();
    std::vector<RoleNameContext *> roleName();
    RoleNameContext* roleName(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetDefaultRoleContext* setDefaultRole();

  class  SetRoleContext : public antlr4::ParserRuleContext {
  public:
    SetRoleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *ROLE();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *EXCEPT();
    RolesContext *roles();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetRoleContext* setRole();

  class  SetPasswordContext : public antlr4::ParserRuleContext {
  public:
    SetPasswordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    std::vector<antlr4::tree::TerminalNode *> PASSWORD();
    antlr4::tree::TerminalNode* PASSWORD(size_t i);
    AuthOptionContext *authOption();
    antlr4::tree::TerminalNode *FOR();
    UserNameContext *userName();
    antlr4::tree::TerminalNode *REPLACE();
    String_Context *string_();
    antlr4::tree::TerminalNode *RETAIN();
    antlr4::tree::TerminalNode *CURRENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetPasswordContext* setPassword();

  class  AuthOptionContext : public antlr4::ParserRuleContext {
  public:
    AuthOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQ_();
    StringLiteralsContext *stringLiterals();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *RANDOM();
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *LP_();
    antlr4::tree::TerminalNode *RP_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AuthOptionContext* authOption();

  class  WithGrantOptionContext : public antlr4::ParserRuleContext {
  public:
    WithGrantOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *GRANT();
    antlr4::tree::TerminalNode *OPTION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WithGrantOptionContext* withGrantOption();

  class  UserOrRolesContext : public antlr4::ParserRuleContext {
  public:
    UserOrRolesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<UserOrRoleContext *> userOrRole();
    UserOrRoleContext* userOrRole(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UserOrRolesContext* userOrRoles();

  class  RolesContext : public antlr4::ParserRuleContext {
  public:
    RolesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<RoleNameContext *> roleName();
    RoleNameContext* roleName(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RolesContext* roles();

  class  GrantOptionContext : public antlr4::ParserRuleContext {
  public:
    GrantOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AS();
    UserNameContext *userName();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *ROLE();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *EXCEPT();
    RolesContext *roles();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GrantOptionContext* grantOption();

  class  UserAuthOptionContext : public antlr4::ParserRuleContext {
  public:
    UserAuthOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifiedByContext *identifiedBy();
    IdentifiedWithContext *identifiedWith();
    antlr4::tree::TerminalNode *DISCARD();
    antlr4::tree::TerminalNode *OLD();
    antlr4::tree::TerminalNode *PASSWORD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UserAuthOptionContext* userAuthOption();

  class  IdentifiedByContext : public antlr4::ParserRuleContext {
  public:
    IdentifiedByContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIED();
    antlr4::tree::TerminalNode *BY();
    std::vector<String_Context *> string_();
    String_Context* string_(size_t i);
    antlr4::tree::TerminalNode *RANDOM();
    std::vector<antlr4::tree::TerminalNode *> PASSWORD();
    antlr4::tree::TerminalNode* PASSWORD(size_t i);
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *RETAIN();
    antlr4::tree::TerminalNode *CURRENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifiedByContext* identifiedBy();

  class  IdentifiedWithContext : public antlr4::ParserRuleContext {
  public:
    IdentifiedWithContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIED();
    antlr4::tree::TerminalNode *WITH();
    PluginNameContext *pluginName();
    antlr4::tree::TerminalNode *BY();
    String_Context *string_();
    antlr4::tree::TerminalNode *RANDOM();
    std::vector<antlr4::tree::TerminalNode *> PASSWORD();
    antlr4::tree::TerminalNode* PASSWORD(size_t i);
    antlr4::tree::TerminalNode *REPLACE();
    StringLiteralsContext *stringLiterals();
    antlr4::tree::TerminalNode *RETAIN();
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *AS();
    TextStringHashContext *textStringHash();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifiedWithContext* identifiedWith();

  class  ConnectOptionContext : public antlr4::ParserRuleContext {
  public:
    ConnectOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MAX_QUERIES_PER_HOUR();
    antlr4::tree::TerminalNode *NUMBER_();
    antlr4::tree::TerminalNode *MAX_UPDATES_PER_HOUR();
    antlr4::tree::TerminalNode *MAX_CONNECTIONS_PER_HOUR();
    antlr4::tree::TerminalNode *MAX_USER_CONNECTIONS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConnectOptionContext* connectOption();

  class  TlsOptionContext : public antlr4::ParserRuleContext {
  public:
    TlsOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SSL();
    antlr4::tree::TerminalNode *X509();
    antlr4::tree::TerminalNode *CIPHER();
    String_Context *string_();
    antlr4::tree::TerminalNode *ISSUER();
    antlr4::tree::TerminalNode *SUBJECT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TlsOptionContext* tlsOption();

  class  UserFuncAuthOptionContext : public antlr4::ParserRuleContext {
  public:
    UserFuncAuthOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifiedByContext *identifiedBy();
    antlr4::tree::TerminalNode *DISCARD();
    antlr4::tree::TerminalNode *OLD();
    antlr4::tree::TerminalNode *PASSWORD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UserFuncAuthOptionContext* userFuncAuthOption();

  class  UseContext : public antlr4::ParserRuleContext {
  public:
    UseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USE();
    SchemaNameContext *schemaName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UseContext* use();

  class  HelpContext : public antlr4::ParserRuleContext {
  public:
    HelpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HELP();
    String_Context *string_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HelpContext* help();

  class  ExplainContext : public antlr4::ParserRuleContext {
  public:
    ExplainContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DESC();
    antlr4::tree::TerminalNode *DESCRIBE();
    antlr4::tree::TerminalNode *EXPLAIN();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *ANALYZE();
    SelectContext *select();
    ExplainableStatementContext *explainableStatement();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *CONNECTION();
    ConnectionIdContext *connectionId();
    ColumnRefContext *columnRef();
    TextStringContext *textString();
    ExplainTypeContext *explainType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExplainContext* explain();

  class  ShowDatabasesContext : public antlr4::ParserRuleContext {
  public:
    ShowDatabasesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *DATABASES();
    antlr4::tree::TerminalNode *SCHEMAS();
    ShowFilterContext *showFilter();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowDatabasesContext* showDatabases();

  class  ShowTablesContext : public antlr4::ParserRuleContext {
  public:
    ShowTablesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *TABLES();
    antlr4::tree::TerminalNode *EXTENDED();
    antlr4::tree::TerminalNode *FULL();
    FromSchemaContext *fromSchema();
    ShowFilterContext *showFilter();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowTablesContext* showTables();

  class  ShowTableStatusContext : public antlr4::ParserRuleContext {
  public:
    ShowTableStatusContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *STATUS();
    FromSchemaContext *fromSchema();
    ShowFilterContext *showFilter();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowTableStatusContext* showTableStatus();

  class  ShowColumnsContext : public antlr4::ParserRuleContext {
  public:
    ShowColumnsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    FromTableContext *fromTable();
    antlr4::tree::TerminalNode *COLUMNS();
    antlr4::tree::TerminalNode *FIELDS();
    antlr4::tree::TerminalNode *EXTENDED();
    antlr4::tree::TerminalNode *FULL();
    FromSchemaContext *fromSchema();
    ShowColumnLikeContext *showColumnLike();
    ShowWhereClauseContext *showWhereClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowColumnsContext* showColumns();

  class  ShowIndexContext : public antlr4::ParserRuleContext {
  public:
    ShowIndexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    FromTableContext *fromTable();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *INDEXES();
    antlr4::tree::TerminalNode *KEYS();
    antlr4::tree::TerminalNode *EXTENDED();
    FromSchemaContext *fromSchema();
    ShowWhereClauseContext *showWhereClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowIndexContext* showIndex();

  class  ShowCreateTableContext : public antlr4::ParserRuleContext {
  public:
    ShowCreateTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TABLE();
    TableNameContext *tableName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowCreateTableContext* showCreateTable();

  class  FromSchemaContext : public antlr4::ParserRuleContext {
  public:
    FromSchemaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SchemaNameContext *schemaName();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *IN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FromSchemaContext* fromSchema();

  class  FromTableContext : public antlr4::ParserRuleContext {
  public:
    FromTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *IN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FromTableContext* fromTable();

  class  ShowLikeContext : public antlr4::ParserRuleContext {
  public:
    ShowLikeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIKE();
    StringLiteralsContext *stringLiterals();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowLikeContext* showLike();

  class  ShowColumnLikeContext : public antlr4::ParserRuleContext {
  public:
    ShowColumnLikeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIKE();
    StringLiteralsContext *stringLiterals();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowColumnLikeContext* showColumnLike();

  class  ShowWhereClauseContext : public antlr4::ParserRuleContext {
  public:
    ShowWhereClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHERE();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowWhereClauseContext* showWhereClause();

  class  ShowFilterContext : public antlr4::ParserRuleContext {
  public:
    ShowFilterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ShowLikeContext *showLike();
    ShowWhereClauseContext *showWhereClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowFilterContext* showFilter();

  class  ShowProfileTypeContext : public antlr4::ParserRuleContext {
  public:
    ShowProfileTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *BLOCK();
    antlr4::tree::TerminalNode *IO();
    antlr4::tree::TerminalNode *CONTEXT();
    antlr4::tree::TerminalNode *SWITCHES();
    antlr4::tree::TerminalNode *CPU();
    antlr4::tree::TerminalNode *IPC();
    antlr4::tree::TerminalNode *MEMORY();
    antlr4::tree::TerminalNode *PAGE();
    antlr4::tree::TerminalNode *FAULTS();
    antlr4::tree::TerminalNode *SOURCE();
    antlr4::tree::TerminalNode *SWAPS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowProfileTypeContext* showProfileType();

  class  SetVariableContext : public antlr4::ParserRuleContext {
  public:
    SetVariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    std::vector<VariableAssignContext *> variableAssign();
    VariableAssignContext* variableAssign(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetVariableContext* setVariable();

  class  VariableAssignContext : public antlr4::ParserRuleContext {
  public:
    VariableAssignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();
    antlr4::tree::TerminalNode *EQ_();
    SetExprOrDefaultContext *setExprOrDefault();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableAssignContext* variableAssign();

  class  ShowBinaryLogsContext : public antlr4::ParserRuleContext {
  public:
    ShowBinaryLogsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *LOGS();
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *MASTER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowBinaryLogsContext* showBinaryLogs();

  class  ShowBinlogEventsContext : public antlr4::ParserRuleContext {
  public:
    ShowBinlogEventsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *BINLOG();
    antlr4::tree::TerminalNode *EVENTS();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *DEFINER();
    antlr4::tree::TerminalNode *FROM();
    std::vector<antlr4::tree::TerminalNode *> NUMBER_();
    antlr4::tree::TerminalNode* NUMBER_(size_t i);
    antlr4::tree::TerminalNode *LIMIT();
    antlr4::tree::TerminalNode *COMMA_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowBinlogEventsContext* showBinlogEvents();

  class  ShowCharacterSetContext : public antlr4::ParserRuleContext {
  public:
    ShowCharacterSetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *SET();
    ShowFilterContext *showFilter();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowCharacterSetContext* showCharacterSet();

  class  ShowCollationContext : public antlr4::ParserRuleContext {
  public:
    ShowCollationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *COLLATION();
    ShowFilterContext *showFilter();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowCollationContext* showCollation();

  class  ShowCreateDatabaseContext : public antlr4::ParserRuleContext {
  public:
    ShowCreateDatabaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *CREATE();
    SchemaNameContext *schemaName();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *SCHEMA();
    NotExistClauseContext *notExistClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowCreateDatabaseContext* showCreateDatabase();

  class  ShowCreateEventContext : public antlr4::ParserRuleContext {
  public:
    ShowCreateEventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *EVENT();
    EventNameContext *eventName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowCreateEventContext* showCreateEvent();

  class  ShowCreateFunctionContext : public antlr4::ParserRuleContext {
  public:
    ShowCreateFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *FUNCTION();
    FunctionNameContext *functionName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowCreateFunctionContext* showCreateFunction();

  class  ShowCreateProcedureContext : public antlr4::ParserRuleContext {
  public:
    ShowCreateProcedureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *PROCEDURE();
    FunctionNameContext *functionName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowCreateProcedureContext* showCreateProcedure();

  class  ShowCreateTriggerContext : public antlr4::ParserRuleContext {
  public:
    ShowCreateTriggerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TRIGGER();
    TriggerNameContext *triggerName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowCreateTriggerContext* showCreateTrigger();

  class  ShowCreateUserContext : public antlr4::ParserRuleContext {
  public:
    ShowCreateUserContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *USER();
    UserNameContext *userName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowCreateUserContext* showCreateUser();

  class  ShowCreateViewContext : public antlr4::ParserRuleContext {
  public:
    ShowCreateViewContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *VIEW();
    ViewNameContext *viewName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowCreateViewContext* showCreateView();

  class  ShowEngineContext : public antlr4::ParserRuleContext {
  public:
    ShowEngineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *ENGINE();
    EngineRefContext *engineRef();
    antlr4::tree::TerminalNode *STATUS();
    antlr4::tree::TerminalNode *MUTEX();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowEngineContext* showEngine();

  class  ShowEnginesContext : public antlr4::ParserRuleContext {
  public:
    ShowEnginesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *ENGINES();
    antlr4::tree::TerminalNode *STORAGE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowEnginesContext* showEngines();

  class  ShowErrorsContext : public antlr4::ParserRuleContext {
  public:
    ShowErrorsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *ERRORS();
    antlr4::tree::TerminalNode *COUNT();
    antlr4::tree::TerminalNode *LP_();
    antlr4::tree::TerminalNode *ASTERISK_();
    antlr4::tree::TerminalNode *RP_();
    antlr4::tree::TerminalNode *LIMIT();
    std::vector<antlr4::tree::TerminalNode *> NUMBER_();
    antlr4::tree::TerminalNode* NUMBER_(size_t i);
    antlr4::tree::TerminalNode *COMMA_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowErrorsContext* showErrors();

  class  ShowEventsContext : public antlr4::ParserRuleContext {
  public:
    ShowEventsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *EVENTS();
    FromSchemaContext *fromSchema();
    ShowFilterContext *showFilter();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowEventsContext* showEvents();

  class  ShowFunctionCodeContext : public antlr4::ParserRuleContext {
  public:
    ShowFunctionCodeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *CODE();
    FunctionNameContext *functionName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowFunctionCodeContext* showFunctionCode();

  class  ShowFunctionStatusContext : public antlr4::ParserRuleContext {
  public:
    ShowFunctionStatusContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *STATUS();
    ShowFilterContext *showFilter();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowFunctionStatusContext* showFunctionStatus();

  class  ShowGrantContext : public antlr4::ParserRuleContext {
  public:
    ShowGrantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *GRANTS();
    antlr4::tree::TerminalNode *FOR();
    UserOrRoleContext *userOrRole();
    antlr4::tree::TerminalNode *USING();
    std::vector<UserNameContext *> userName();
    UserNameContext* userName(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowGrantContext* showGrant();

  class  ShowMasterStatusContext : public antlr4::ParserRuleContext {
  public:
    ShowMasterStatusContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *MASTER();
    antlr4::tree::TerminalNode *STATUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowMasterStatusContext* showMasterStatus();

  class  ShowOpenTablesContext : public antlr4::ParserRuleContext {
  public:
    ShowOpenTablesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *OPEN();
    antlr4::tree::TerminalNode *TABLES();
    FromSchemaContext *fromSchema();
    ShowFilterContext *showFilter();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowOpenTablesContext* showOpenTables();

  class  ShowPluginsContext : public antlr4::ParserRuleContext {
  public:
    ShowPluginsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *PLUGINS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowPluginsContext* showPlugins();

  class  ShowPrivilegesContext : public antlr4::ParserRuleContext {
  public:
    ShowPrivilegesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *PRIVILEGES();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowPrivilegesContext* showPrivileges();

  class  ShowProcedureCodeContext : public antlr4::ParserRuleContext {
  public:
    ShowProcedureCodeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *PROCEDURE();
    antlr4::tree::TerminalNode *CODE();
    FunctionNameContext *functionName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowProcedureCodeContext* showProcedureCode();

  class  ShowProcedureStatusContext : public antlr4::ParserRuleContext {
  public:
    ShowProcedureStatusContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *PROCEDURE();
    antlr4::tree::TerminalNode *STATUS();
    ShowFilterContext *showFilter();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowProcedureStatusContext* showProcedureStatus();

  class  ShowProcesslistContext : public antlr4::ParserRuleContext {
  public:
    ShowProcesslistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *PROCESSLIST();
    antlr4::tree::TerminalNode *FULL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowProcesslistContext* showProcesslist();

  class  ShowProfileContext : public antlr4::ParserRuleContext {
  public:
    ShowProfileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *PROFILE();
    std::vector<ShowProfileTypeContext *> showProfileType();
    ShowProfileTypeContext* showProfileType(size_t i);
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *QUERY();
    std::vector<antlr4::tree::TerminalNode *> NUMBER_();
    antlr4::tree::TerminalNode* NUMBER_(size_t i);
    antlr4::tree::TerminalNode *LIMIT();
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);
    antlr4::tree::TerminalNode *OFFSET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowProfileContext* showProfile();

  class  ShowProfilesContext : public antlr4::ParserRuleContext {
  public:
    ShowProfilesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *PROFILES();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowProfilesContext* showProfiles();

  class  ShowRelaylogEventContext : public antlr4::ParserRuleContext {
  public:
    ShowRelaylogEventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *RELAYLOG();
    antlr4::tree::TerminalNode *EVENTS();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *CHANNEL();
    ChannelNameContext *channelName();
    antlr4::tree::TerminalNode *IN();
    LogNameContext *logName();
    antlr4::tree::TerminalNode *FROM();
    std::vector<antlr4::tree::TerminalNode *> NUMBER_();
    antlr4::tree::TerminalNode* NUMBER_(size_t i);
    antlr4::tree::TerminalNode *LIMIT();
    antlr4::tree::TerminalNode *COMMA_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowRelaylogEventContext* showRelaylogEvent();

  class  ShowSlavehostContext : public antlr4::ParserRuleContext {
  public:
    ShowSlavehostContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *SLAVE();
    antlr4::tree::TerminalNode *HOST();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowSlavehostContext* showSlavehost();

  class  ShowSlaveStatusContext : public antlr4::ParserRuleContext {
  public:
    ShowSlaveStatusContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *SLAVE();
    antlr4::tree::TerminalNode *STATUS();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *CHANNEL();
    ChannelNameContext *channelName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowSlaveStatusContext* showSlaveStatus();

  class  ShowStatusContext : public antlr4::ParserRuleContext {
  public:
    ShowStatusContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *STATUS();
    ShowFilterContext *showFilter();
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *SESSION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowStatusContext* showStatus();

  class  ShowTrriggersContext : public antlr4::ParserRuleContext {
  public:
    ShowTrriggersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *TRIGGER();
    FromSchemaContext *fromSchema();
    ShowFilterContext *showFilter();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowTrriggersContext* showTrriggers();

  class  ShowVariablesContext : public antlr4::ParserRuleContext {
  public:
    ShowVariablesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *VARIABLES();
    ShowFilterContext *showFilter();
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *SESSION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowVariablesContext* showVariables();

  class  ShowWarningsContext : public antlr4::ParserRuleContext {
  public:
    ShowWarningsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *WARNINGS();
    antlr4::tree::TerminalNode *COUNT();
    antlr4::tree::TerminalNode *LP_();
    antlr4::tree::TerminalNode *ASTERISK_();
    antlr4::tree::TerminalNode *RP_();
    antlr4::tree::TerminalNode *LIMIT();
    std::vector<antlr4::tree::TerminalNode *> NUMBER_();
    antlr4::tree::TerminalNode* NUMBER_(size_t i);
    antlr4::tree::TerminalNode *COMMA_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowWarningsContext* showWarnings();

  class  SetCharacterContext : public antlr4::ParserRuleContext {
  public:
    SetCharacterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> SET();
    antlr4::tree::TerminalNode* SET(size_t i);
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *CHARSET();
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetCharacterContext* setCharacter();

  class  SetNameContext : public antlr4::ParserRuleContext {
  public:
    SetNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *NAMES();
    antlr4::tree::TerminalNode *EQ_();
    ExprContext *expr();
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *DEFAULT();
    CollateClauseContext *collateClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetNameContext* setName();

  class  CloneContext : public antlr4::ParserRuleContext {
  public:
    CloneContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLONE();
    CloneActionContext *cloneAction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CloneContext* clone();

  class  CloneActionContext : public antlr4::ParserRuleContext {
  public:
    CloneActionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *DIRECTORY();
    CloneDirContext *cloneDir();
    antlr4::tree::TerminalNode *EQ_();
    antlr4::tree::TerminalNode *INSTANCE();
    antlr4::tree::TerminalNode *FROM();
    CloneInstanceContext *cloneInstance();
    antlr4::tree::TerminalNode *IDENTIFIED();
    antlr4::tree::TerminalNode *BY();
    String_Context *string_();
    antlr4::tree::TerminalNode *REQUIRE();
    antlr4::tree::TerminalNode *SSL();
    antlr4::tree::TerminalNode *NO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CloneActionContext* cloneAction();

  class  CreateUdfContext : public antlr4::ParserRuleContext {
  public:
    CreateUdfContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *FUNCTION();
    FunctionNameContext *functionName();
    antlr4::tree::TerminalNode *RETURNS();
    antlr4::tree::TerminalNode *SONAME();
    ShardLibraryNameContext *shardLibraryName();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *REAL();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *AGGREGATE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateUdfContext* createUdf();

  class  InstallContext : public antlr4::ParserRuleContext {
  public:
    InstallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InstallComponentContext *installComponent();
    InstallPluginContext *installPlugin();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InstallContext* install();

  class  UninstallContext : public antlr4::ParserRuleContext {
  public:
    UninstallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UninstallComponentContext *uninstallComponent();
    UninstallPluginContext *uninstallPlugin();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UninstallContext* uninstall();

  class  InstallComponentContext : public antlr4::ParserRuleContext {
  public:
    InstallComponentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INSTALL();
    antlr4::tree::TerminalNode *COMPONENT();
    std::vector<ComponentNameContext *> componentName();
    ComponentNameContext* componentName(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InstallComponentContext* installComponent();

  class  InstallPluginContext : public antlr4::ParserRuleContext {
  public:
    InstallPluginContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INSTALL();
    antlr4::tree::TerminalNode *PLUGIN();
    PluginNameContext *pluginName();
    antlr4::tree::TerminalNode *SONAME();
    ShardLibraryNameContext *shardLibraryName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InstallPluginContext* installPlugin();

  class  UninstallComponentContext : public antlr4::ParserRuleContext {
  public:
    UninstallComponentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNINSTALL();
    antlr4::tree::TerminalNode *COMPONENT();
    std::vector<ComponentNameContext *> componentName();
    ComponentNameContext* componentName(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UninstallComponentContext* uninstallComponent();

  class  UninstallPluginContext : public antlr4::ParserRuleContext {
  public:
    UninstallPluginContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNINSTALL();
    antlr4::tree::TerminalNode *PLUGIN();
    PluginNameContext *pluginName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UninstallPluginContext* uninstallPlugin();

  class  AnalyzeTableContext : public antlr4::ParserRuleContext {
  public:
    AnalyzeTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ANALYZE();
    TableOrTablesContext *tableOrTables();
    TableListContext *tableList();
    HistogramContext *histogram();
    antlr4::tree::TerminalNode *NO_WRITE_TO_BINLOG();
    antlr4::tree::TerminalNode *LOCAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AnalyzeTableContext* analyzeTable();

  class  HistogramContext : public antlr4::ParserRuleContext {
  public:
    HistogramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *HISTOGRAM();
    antlr4::tree::TerminalNode *ON();
    ColumnNamesContext *columnNames();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *NUMBER_();
    antlr4::tree::TerminalNode *BUCKETS();
    antlr4::tree::TerminalNode *DROP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HistogramContext* histogram();

  class  CheckTableContext : public antlr4::ParserRuleContext {
  public:
    CheckTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHECK();
    TableOrTablesContext *tableOrTables();
    TableListContext *tableList();
    CheckTableOptionContext *checkTableOption();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CheckTableContext* checkTable();

  class  CheckTableOptionContext : public antlr4::ParserRuleContext {
  public:
    CheckTableOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *UPGRADE();
    antlr4::tree::TerminalNode *QUICK();
    antlr4::tree::TerminalNode *FAST();
    antlr4::tree::TerminalNode *MEDIUM();
    antlr4::tree::TerminalNode *EXTENDED();
    antlr4::tree::TerminalNode *CHANGE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CheckTableOptionContext* checkTableOption();

  class  ChecksumTableContext : public antlr4::ParserRuleContext {
  public:
    ChecksumTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHECKSUM();
    TableOrTablesContext *tableOrTables();
    TableListContext *tableList();
    antlr4::tree::TerminalNode *QUICK();
    antlr4::tree::TerminalNode *EXTENDED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChecksumTableContext* checksumTable();

  class  OptimizeTableContext : public antlr4::ParserRuleContext {
  public:
    OptimizeTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPTIMIZE();
    TableOrTablesContext *tableOrTables();
    TableListContext *tableList();
    antlr4::tree::TerminalNode *NO_WRITE_TO_BINLOG();
    antlr4::tree::TerminalNode *LOCAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptimizeTableContext* optimizeTable();

  class  RepairTableContext : public antlr4::ParserRuleContext {
  public:
    RepairTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPAIR();
    TableOrTablesContext *tableOrTables();
    TableListContext *tableList();
    antlr4::tree::TerminalNode *QUICK();
    antlr4::tree::TerminalNode *EXTENDED();
    antlr4::tree::TerminalNode *USE_FRM();
    antlr4::tree::TerminalNode *NO_WRITE_TO_BINLOG();
    antlr4::tree::TerminalNode *LOCAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RepairTableContext* repairTable();

  class  AlterResourceGroupContext : public antlr4::ParserRuleContext {
  public:
    AlterResourceGroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *RESOURCE();
    antlr4::tree::TerminalNode *GROUP();
    GroupNameContext *groupName();
    antlr4::tree::TerminalNode *VCPU();
    std::vector<VcpuSpecContext *> vcpuSpec();
    VcpuSpecContext* vcpuSpec(size_t i);
    antlr4::tree::TerminalNode *THREAD_PRIORITY();
    antlr4::tree::TerminalNode *NUMBER_();
    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *DISABLE();
    std::vector<antlr4::tree::TerminalNode *> EQ_();
    antlr4::tree::TerminalNode* EQ_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);
    antlr4::tree::TerminalNode *FORCE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterResourceGroupContext* alterResourceGroup();

  class  VcpuSpecContext : public antlr4::ParserRuleContext {
  public:
    VcpuSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> NUMBER_();
    antlr4::tree::TerminalNode* NUMBER_(size_t i);
    antlr4::tree::TerminalNode *MINUS_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VcpuSpecContext* vcpuSpec();

  class  CreateResourceGroupContext : public antlr4::ParserRuleContext {
  public:
    CreateResourceGroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *RESOURCE();
    antlr4::tree::TerminalNode *GROUP();
    GroupNameContext *groupName();
    antlr4::tree::TerminalNode *TYPE();
    std::vector<antlr4::tree::TerminalNode *> EQ_();
    antlr4::tree::TerminalNode* EQ_(size_t i);
    antlr4::tree::TerminalNode *SYSTEM();
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *VCPU();
    std::vector<VcpuSpecContext *> vcpuSpec();
    VcpuSpecContext* vcpuSpec(size_t i);
    antlr4::tree::TerminalNode *THREAD_PRIORITY();
    antlr4::tree::TerminalNode *NUMBER_();
    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *DISABLE();
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateResourceGroupContext* createResourceGroup();

  class  DropResourceGroupContext : public antlr4::ParserRuleContext {
  public:
    DropResourceGroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *RESOURCE();
    antlr4::tree::TerminalNode *GROUP();
    GroupNameContext *groupName();
    antlr4::tree::TerminalNode *FORCE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropResourceGroupContext* dropResourceGroup();

  class  SetResourceGroupContext : public antlr4::ParserRuleContext {
  public:
    SetResourceGroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *RESOURCE();
    antlr4::tree::TerminalNode *GROUP();
    GroupNameContext *groupName();
    antlr4::tree::TerminalNode *FOR();
    std::vector<antlr4::tree::TerminalNode *> NUMBER_();
    antlr4::tree::TerminalNode* NUMBER_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetResourceGroupContext* setResourceGroup();

  class  BinlogContext : public antlr4::ParserRuleContext {
  public:
    BinlogContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BINLOG();
    StringLiteralsContext *stringLiterals();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BinlogContext* binlog();

  class  CacheIndexContext : public antlr4::ParserRuleContext {
  public:
    CacheIndexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CACHE();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *IN();
    std::vector<TableIndexListContext *> tableIndexList();
    TableIndexListContext* tableIndexList(size_t i);
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *LP_();
    PartitionListContext *partitionList();
    antlr4::tree::TerminalNode *RP_();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *DEFAULT();
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CacheIndexContext* cacheIndex();

  class  TableIndexListContext : public antlr4::ParserRuleContext {
  public:
    TableIndexListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *PARTITION();
    std::vector<antlr4::tree::TerminalNode *> LP_();
    antlr4::tree::TerminalNode* LP_(size_t i);
    PartitionListContext *partitionList();
    std::vector<antlr4::tree::TerminalNode *> RP_();
    antlr4::tree::TerminalNode* RP_(size_t i);
    std::vector<IndexNameContext *> indexName();
    IndexNameContext* indexName(size_t i);
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *LEAVES();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *KEY();
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableIndexListContext* tableIndexList();

  class  PartitionListContext : public antlr4::ParserRuleContext {
  public:
    PartitionListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PartitionNameContext *> partitionName();
    PartitionNameContext* partitionName(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);
    antlr4::tree::TerminalNode *ALL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionListContext* partitionList();

  class  FlushContext : public antlr4::ParserRuleContext {
  public:
    FlushContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FLUSH();
    std::vector<FlushOptionContext *> flushOption();
    FlushOptionContext* flushOption(size_t i);
    TablesOptionContext *tablesOption();
    antlr4::tree::TerminalNode *NO_WRITE_TO_BINLOG();
    antlr4::tree::TerminalNode *LOCAL();
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FlushContext* flush();

  class  FlushOptionContext : public antlr4::ParserRuleContext {
  public:
    FlushOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *LOGS();
    antlr4::tree::TerminalNode *ENGINE();
    antlr4::tree::TerminalNode *ERROR();
    antlr4::tree::TerminalNode *GENERAL();
    antlr4::tree::TerminalNode *HOSTS();
    antlr4::tree::TerminalNode *PRIVILEGES();
    antlr4::tree::TerminalNode *OPTIMIZER_COSTS();
    antlr4::tree::TerminalNode *RELAY();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *CHANNEL();
    ChannelNameContext *channelName();
    antlr4::tree::TerminalNode *SLOW();
    antlr4::tree::TerminalNode *STATUS();
    antlr4::tree::TerminalNode *USER_RESOURCES();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FlushOptionContext* flushOption();

  class  TablesOptionContext : public antlr4::ParserRuleContext {
  public:
    TablesOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLES();
    std::vector<TableNameContext *> tableName();
    TableNameContext* tableName(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *EXPORT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TablesOptionContext* tablesOption();

  class  KillContext : public antlr4::ParserRuleContext {
  public:
    KillContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KILL();
    std::vector<antlr4::tree::TerminalNode *> NUMBER_();
    antlr4::tree::TerminalNode* NUMBER_(size_t i);
    antlr4::tree::TerminalNode *CONNECTION();
    antlr4::tree::TerminalNode *QUERY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KillContext* kill();

  class  LoadIndexInfoContext : public antlr4::ParserRuleContext {
  public:
    LoadIndexInfoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOAD();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *CACHE();
    std::vector<TableIndexListContext *> tableIndexList();
    TableIndexListContext* tableIndexList(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LoadIndexInfoContext* loadIndexInfo();

  class  ResetStatementContext : public antlr4::ParserRuleContext {
  public:
    ResetStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESET();
    std::vector<ResetOptionContext *> resetOption();
    ResetOptionContext* resetOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);
    ResetPersistContext *resetPersist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResetStatementContext* resetStatement();

  class  ResetOptionContext : public antlr4::ParserRuleContext {
  public:
    ResetOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER();
    antlr4::tree::TerminalNode *TO();
    BinaryLogFileIndexNumberContext *binaryLogFileIndexNumber();
    antlr4::tree::TerminalNode *SLAVE();
    antlr4::tree::TerminalNode *ALL();
    ChannelOptionContext *channelOption();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResetOptionContext* resetOption();

  class  ResetPersistContext : public antlr4::ParserRuleContext {
  public:
    ResetPersistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESET();
    antlr4::tree::TerminalNode *PERSIST();
    IdentifierContext *identifier();
    ExistClauseContext *existClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResetPersistContext* resetPersist();

  class  RestartContext : public antlr4::ParserRuleContext {
  public:
    RestartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESTART();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RestartContext* restart();

  class  ShutdownContext : public antlr4::ParserRuleContext {
  public:
    ShutdownContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHUTDOWN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShutdownContext* shutdown();

  class  ExplainTypeContext : public antlr4::ParserRuleContext {
  public:
    ExplainTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FORMAT();
    antlr4::tree::TerminalNode *EQ_();
    FormatNameContext *formatName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExplainTypeContext* explainType();

  class  ExplainableStatementContext : public antlr4::ParserRuleContext {
  public:
    ExplainableStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SelectContext *select();
    Delete_stmtContext *delete_stmt();
    InsertContext *insert();
    ReplaceContext *replace();
    UpdateContext *update();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExplainableStatementContext* explainableStatement();

  class  FormatNameContext : public antlr4::ParserRuleContext {
  public:
    FormatNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRADITIONAL();
    antlr4::tree::TerminalNode *JSON();
    antlr4::tree::TerminalNode *TREE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FormatNameContext* formatName();

  class  ShowContext : public antlr4::ParserRuleContext {
  public:
    ShowContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ShowDatabasesContext *showDatabases();
    ShowTablesContext *showTables();
    ShowTableStatusContext *showTableStatus();
    ShowBinaryLogsContext *showBinaryLogs();
    ShowColumnsContext *showColumns();
    ShowIndexContext *showIndex();
    ShowCreateDatabaseContext *showCreateDatabase();
    ShowCreateTableContext *showCreateTable();
    ShowBinlogEventsContext *showBinlogEvents();
    ShowCharacterSetContext *showCharacterSet();
    ShowCollationContext *showCollation();
    ShowCreateEventContext *showCreateEvent();
    ShowCreateFunctionContext *showCreateFunction();
    ShowCreateProcedureContext *showCreateProcedure();
    ShowCreateTriggerContext *showCreateTrigger();
    ShowCreateUserContext *showCreateUser();
    ShowCreateViewContext *showCreateView();
    ShowEngineContext *showEngine();
    ShowEnginesContext *showEngines();
    ShowErrorsContext *showErrors();
    ShowEventsContext *showEvents();
    ShowFunctionCodeContext *showFunctionCode();
    ShowFunctionStatusContext *showFunctionStatus();
    ShowGrantContext *showGrant();
    ShowMasterStatusContext *showMasterStatus();
    ShowPluginsContext *showPlugins();
    ShowOpenTablesContext *showOpenTables();
    ShowPrivilegesContext *showPrivileges();
    ShowProcedureCodeContext *showProcedureCode();
    ShowProcesslistContext *showProcesslist();
    ShowProfileContext *showProfile();
    ShowProcedureStatusContext *showProcedureStatus();
    ShowProfilesContext *showProfiles();
    ShowSlavehostContext *showSlavehost();
    ShowSlaveStatusContext *showSlaveStatus();
    ShowRelaylogEventContext *showRelaylogEvent();
    ShowStatusContext *showStatus();
    ShowTrriggersContext *showTrriggers();
    ShowWarningsContext *showWarnings();
    ShowVariablesContext *showVariables();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowContext* show();

  class  ChangeContext : public antlr4::ParserRuleContext {
  public:
    ChangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ChangeMasterToContext *changeMasterTo();
    ChangeReplicationFilterContext *changeReplicationFilter();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChangeContext* change();

  class  ChangeMasterToContext : public antlr4::ParserRuleContext {
  public:
    ChangeMasterToContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHANGE();
    antlr4::tree::TerminalNode *MASTER();
    antlr4::tree::TerminalNode *TO();
    MasterDefsContext *masterDefs();
    ChannelOptionContext *channelOption();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChangeMasterToContext* changeMasterTo();

  class  ChangeReplicationFilterContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationFilterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHANGE();
    antlr4::tree::TerminalNode *REPLICATION();
    antlr4::tree::TerminalNode *FILTER();
    FilterDefsContext *filterDefs();
    ChannelOptionContext *channelOption();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChangeReplicationFilterContext* changeReplicationFilter();

  class  StartSlaveContext : public antlr4::ParserRuleContext {
  public:
    StartSlaveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *SLAVE();
    ConnectionOptionsContext *connectionOptions();
    ThreadTypesContext *threadTypes();
    UtilOptionContext *utilOption();
    ChannelOptionContext *channelOption();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StartSlaveContext* startSlave();

  class  StopSlaveContext : public antlr4::ParserRuleContext {
  public:
    StopSlaveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STOP();
    antlr4::tree::TerminalNode *SLAVE();
    ThreadTypesContext *threadTypes();
    std::vector<ChannelOptionContext *> channelOption();
    ChannelOptionContext* channelOption(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StopSlaveContext* stopSlave();

  class  GroupReplicationContext : public antlr4::ParserRuleContext {
  public:
    GroupReplicationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StartGroupReplicationContext *startGroupReplication();
    StopGroupReplicationContext *stopGroupReplication();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GroupReplicationContext* groupReplication();

  class  StartGroupReplicationContext : public antlr4::ParserRuleContext {
  public:
    StartGroupReplicationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *GROUP_REPLICATION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StartGroupReplicationContext* startGroupReplication();

  class  StopGroupReplicationContext : public antlr4::ParserRuleContext {
  public:
    StopGroupReplicationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STOP();
    antlr4::tree::TerminalNode *GROUP_REPLICATION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StopGroupReplicationContext* stopGroupReplication();

  class  PurgeBinaryLogContext : public antlr4::ParserRuleContext {
  public:
    PurgeBinaryLogContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PURGE();
    antlr4::tree::TerminalNode *LOGS();
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *MASTER();
    antlr4::tree::TerminalNode *TO();
    LogNameContext *logName();
    antlr4::tree::TerminalNode *BEFORE();
    DatetimeExprContext *datetimeExpr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PurgeBinaryLogContext* purgeBinaryLog();

  class  ThreadTypesContext : public antlr4::ParserRuleContext {
  public:
    ThreadTypesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ThreadTypeContext *> threadType();
    ThreadTypeContext* threadType(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ThreadTypesContext* threadTypes();

  class  ThreadTypeContext : public antlr4::ParserRuleContext {
  public:
    ThreadTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IO_THREAD();
    antlr4::tree::TerminalNode *SQL_THREAD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ThreadTypeContext* threadType();

  class  UtilOptionContext : public antlr4::ParserRuleContext {
  public:
    UtilOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNTIL();
    std::vector<antlr4::tree::TerminalNode *> EQ_();
    antlr4::tree::TerminalNode* EQ_(size_t i);
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *MASTER_LOG_FILE();
    String_Context *string_();
    antlr4::tree::TerminalNode *COMMA_();
    antlr4::tree::TerminalNode *MASTER_LOG_POS();
    antlr4::tree::TerminalNode *NUMBER_();
    antlr4::tree::TerminalNode *RELAY_LOG_FILE();
    antlr4::tree::TerminalNode *RELAY_LOG_POS();
    antlr4::tree::TerminalNode *SQL_AFTER_MTS_GAPS();
    antlr4::tree::TerminalNode *SQL_BEFORE_GTIDS();
    antlr4::tree::TerminalNode *SQL_AFTER_GTIDS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UtilOptionContext* utilOption();

  class  ConnectionOptionsContext : public antlr4::ParserRuleContext {
  public:
    ConnectionOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USER();
    std::vector<antlr4::tree::TerminalNode *> EQ_();
    antlr4::tree::TerminalNode* EQ_(size_t i);
    std::vector<String_Context *> string_();
    String_Context* string_(size_t i);
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *DEFAULT_AUTH();
    antlr4::tree::TerminalNode *PLUGIN_DIR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConnectionOptionsContext* connectionOptions();

  class  MasterDefsContext : public antlr4::ParserRuleContext {
  public:
    MasterDefsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MasterDefContext *> masterDef();
    MasterDefContext* masterDef(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MasterDefsContext* masterDefs();

  class  MasterDefContext : public antlr4::ParserRuleContext {
  public:
    MasterDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_BIND();
    antlr4::tree::TerminalNode *EQ_();
    String_Context *string_();
    antlr4::tree::TerminalNode *MASTER_HOST();
    antlr4::tree::TerminalNode *MASTER_USER();
    antlr4::tree::TerminalNode *MASTER_PASSWORD();
    antlr4::tree::TerminalNode *MASTER_PORT();
    antlr4::tree::TerminalNode *NUMBER_();
    antlr4::tree::TerminalNode *PRIVILEGE_CHECKS_USER();
    antlr4::tree::TerminalNode *ACCOUNT();
    antlr4::tree::TerminalNode *NULL();
    antlr4::tree::TerminalNode *REQUIRE_ROW_FORMAT();
    antlr4::tree::TerminalNode *MASTER_CONNECT_RETRY();
    antlr4::tree::TerminalNode *MASTER_RETRY_COUNT();
    antlr4::tree::TerminalNode *MASTER_DELAY();
    antlr4::tree::TerminalNode *MASTER_HEARTBEAT_PERIOD();
    antlr4::tree::TerminalNode *MASTER_LOG_FILE();
    antlr4::tree::TerminalNode *MASTER_LOG_POS();
    antlr4::tree::TerminalNode *MASTER_AUTO_POSITION();
    antlr4::tree::TerminalNode *RELAY_LOG_FILE();
    antlr4::tree::TerminalNode *RELAY_LOG_POS();
    antlr4::tree::TerminalNode *MASTER_COMPRESSION_ALGORITHMS();
    antlr4::tree::TerminalNode *MASTER_ZSTD_COMPRESSION_LEVEL();
    antlr4::tree::TerminalNode *MASTER_SSL();
    antlr4::tree::TerminalNode *MASTER_SSL_CA();
    antlr4::tree::TerminalNode *MASTER_SSL_CAPATH();
    antlr4::tree::TerminalNode *MASTER_SSL_CERT();
    antlr4::tree::TerminalNode *MASTER_SSL_CRL();
    antlr4::tree::TerminalNode *MASTER_SSL_CRLPATH();
    antlr4::tree::TerminalNode *MASTER_SSL_KEY();
    antlr4::tree::TerminalNode *MASTER_SSL_CIPHER();
    antlr4::tree::TerminalNode *MASTER_SSL_VERIFY_SERVER_CERT();
    antlr4::tree::TerminalNode *MASTER_TLS_VERSION();
    antlr4::tree::TerminalNode *MASTER_TLS_CIPHERSUITES();
    antlr4::tree::TerminalNode *MASTER_PUBLIC_KEY_PATH();
    antlr4::tree::TerminalNode *GET_MASTER_PUBLIC_KEY();
    antlr4::tree::TerminalNode *IGNORE_SERVER_IDS();
    antlr4::tree::TerminalNode *LP_();
    IgnoreServerIdsContext *ignoreServerIds();
    antlr4::tree::TerminalNode *RP_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MasterDefContext* masterDef();

  class  IgnoreServerIdsContext : public antlr4::ParserRuleContext {
  public:
    IgnoreServerIdsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IgnoreServerIdContext *> ignoreServerId();
    IgnoreServerIdContext* ignoreServerId(size_t i);
    antlr4::tree::TerminalNode *COMMA_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IgnoreServerIdsContext* ignoreServerIds();

  class  IgnoreServerIdContext : public antlr4::ParserRuleContext {
  public:
    IgnoreServerIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IgnoreServerIdContext* ignoreServerId();

  class  FilterDefsContext : public antlr4::ParserRuleContext {
  public:
    FilterDefsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FilterDefContext *> filterDef();
    FilterDefContext* filterDef(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FilterDefsContext* filterDefs();

  class  FilterDefContext : public antlr4::ParserRuleContext {
  public:
    FilterDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPLICATE_DO_DB();
    antlr4::tree::TerminalNode *EQ_();
    antlr4::tree::TerminalNode *LP_();
    antlr4::tree::TerminalNode *RP_();
    SchemaNamesContext *schemaNames();
    antlr4::tree::TerminalNode *REPLICATE_IGNORE_DB();
    antlr4::tree::TerminalNode *REPLICATE_DO_TABLE();
    TableListContext *tableList();
    antlr4::tree::TerminalNode *REPLICATE_IGNORE_TABLE();
    antlr4::tree::TerminalNode *REPLICATE_WILD_DO_TABLE();
    WildTablesContext *wildTables();
    antlr4::tree::TerminalNode *REPLICATE_WILD_IGNORE_TABLE();
    antlr4::tree::TerminalNode *REPLICATE_REWRITE_DB();
    SchemaPairsContext *schemaPairs();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FilterDefContext* filterDef();

  class  WildTablesContext : public antlr4::ParserRuleContext {
  public:
    WildTablesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<WildTableContext *> wildTable();
    WildTableContext* wildTable(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WildTablesContext* wildTables();

  class  WildTableContext : public antlr4::ParserRuleContext {
  public:
    WildTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    String_Context *string_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WildTableContext* wildTable();

  class  ParameterMarkerContext : public antlr4::ParserRuleContext {
  public:
    ParameterMarkerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *QUESTION_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterMarkerContext* parameterMarker();

  class  CustomKeywordContext : public antlr4::ParserRuleContext {
  public:
    CustomKeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MAX();
    antlr4::tree::TerminalNode *MIN();
    antlr4::tree::TerminalNode *SUM();
    antlr4::tree::TerminalNode *COUNT();
    antlr4::tree::TerminalNode *GROUP_CONCAT();
    antlr4::tree::TerminalNode *CAST();
    antlr4::tree::TerminalNode *POSITION();
    antlr4::tree::TerminalNode *SUBSTRING();
    antlr4::tree::TerminalNode *SUBSTR();
    antlr4::tree::TerminalNode *EXTRACT();
    antlr4::tree::TerminalNode *TRIM();
    antlr4::tree::TerminalNode *LAST_DAY();
    antlr4::tree::TerminalNode *TRADITIONAL();
    antlr4::tree::TerminalNode *TREE();
    antlr4::tree::TerminalNode *MYSQL_ADMIN();
    antlr4::tree::TerminalNode *INSTANT();
    antlr4::tree::TerminalNode *INPLACE();
    antlr4::tree::TerminalNode *COPY();
    antlr4::tree::TerminalNode *UL_BINARY();
    antlr4::tree::TerminalNode *AUTOCOMMIT();
    antlr4::tree::TerminalNode *INNODB();
    antlr4::tree::TerminalNode *REDO_LOG();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CustomKeywordContext* customKeyword();

  class  LiteralsContext : public antlr4::ParserRuleContext {
  public:
    LiteralsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StringLiteralsContext *stringLiterals();
    NumberLiteralsContext *numberLiterals();
    TemporalLiteralsContext *temporalLiterals();
    HexadecimalLiteralsContext *hexadecimalLiterals();
    BitValueLiteralsContext *bitValueLiterals();
    BooleanLiteralsContext *booleanLiterals();
    NullValueLiteralsContext *nullValueLiterals();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralsContext* literals();

  class  String_Context : public antlr4::ParserRuleContext {
  public:
    String_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOUBLE_QUOTED_TEXT();
    antlr4::tree::TerminalNode *SINGLE_QUOTED_TEXT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  String_Context* string_();

  class  StringLiteralsContext : public antlr4::ParserRuleContext {
  public:
    StringLiteralsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    String_Context *string_();
    antlr4::tree::TerminalNode *UNDERSCORE_CHARSET();
    antlr4::tree::TerminalNode *NCHAR_TEXT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringLiteralsContext* stringLiterals();

  class  NumberLiteralsContext : public antlr4::ParserRuleContext {
  public:
    NumberLiteralsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumberLiteralsContext* numberLiterals();

  class  TemporalLiteralsContext : public antlr4::ParserRuleContext {
  public:
    TemporalLiteralsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SINGLE_QUOTED_TEXT();
    antlr4::tree::TerminalNode *DATE();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *TIMESTAMP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemporalLiteralsContext* temporalLiterals();

  class  HexadecimalLiteralsContext : public antlr4::ParserRuleContext {
  public:
    HexadecimalLiteralsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HEX_DIGIT_();
    antlr4::tree::TerminalNode *UNDERSCORE_CHARSET();
    CollateClauseContext *collateClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HexadecimalLiteralsContext* hexadecimalLiterals();

  class  BitValueLiteralsContext : public antlr4::ParserRuleContext {
  public:
    BitValueLiteralsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIT_NUM_();
    antlr4::tree::TerminalNode *UNDERSCORE_CHARSET();
    CollateClauseContext *collateClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BitValueLiteralsContext* bitValueLiterals();

  class  BooleanLiteralsContext : public antlr4::ParserRuleContext {
  public:
    BooleanLiteralsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BooleanLiteralsContext* booleanLiterals();

  class  NullValueLiteralsContext : public antlr4::ParserRuleContext {
  public:
    NullValueLiteralsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NULL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NullValueLiteralsContext* nullValueLiterals();

  class  CollationNameContext : public antlr4::ParserRuleContext {
  public:
    CollationNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextOrIdentifierContext *textOrIdentifier();
    antlr4::tree::TerminalNode *BINARY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CollationNameContext* collationName();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER_();
    UnreservedWordContext *unreservedWord();
    CustomKeywordContext *customKeyword();
    antlr4::tree::TerminalNode *DOUBLE_QUOTED_TEXT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierContext* identifier();

  class  UnreservedWordContext : public antlr4::ParserRuleContext {
  public:
    UnreservedWordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ACCOUNT();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *ACTIVE();
    antlr4::tree::TerminalNode *ADMIN();
    antlr4::tree::TerminalNode *AFTER();
    antlr4::tree::TerminalNode *AGAINST();
    antlr4::tree::TerminalNode *AGGREGATE();
    antlr4::tree::TerminalNode *ALGORITHM();
    antlr4::tree::TerminalNode *ALWAYS();
    antlr4::tree::TerminalNode *ANY();
    antlr4::tree::TerminalNode *ASCII();
    antlr4::tree::TerminalNode *AT();
    antlr4::tree::TerminalNode *ATTRIBUTE();
    antlr4::tree::TerminalNode *AUTOEXTEND_SIZE();
    antlr4::tree::TerminalNode *AUTO_INCREMENT();
    antlr4::tree::TerminalNode *AVG();
    antlr4::tree::TerminalNode *AVG_ROW_LENGTH();
    antlr4::tree::TerminalNode *BACKUP();
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *BINLOG();
    antlr4::tree::TerminalNode *BIT();
    antlr4::tree::TerminalNode *BLOCK();
    antlr4::tree::TerminalNode *BOOL();
    antlr4::tree::TerminalNode *BOOLEAN();
    antlr4::tree::TerminalNode *BTREE();
    antlr4::tree::TerminalNode *BUCKETS();
    antlr4::tree::TerminalNode *BYTE();
    antlr4::tree::TerminalNode *CACHE();
    antlr4::tree::TerminalNode *CASCADED();
    antlr4::tree::TerminalNode *CATALOG_NAME();
    antlr4::tree::TerminalNode *CHAIN();
    antlr4::tree::TerminalNode *CHANGED();
    antlr4::tree::TerminalNode *CHANNEL();
    antlr4::tree::TerminalNode *CHARSET();
    antlr4::tree::TerminalNode *CHECKSUM();
    antlr4::tree::TerminalNode *CIPHER();
    antlr4::tree::TerminalNode *CLASS_ORIGIN();
    antlr4::tree::TerminalNode *CLIENT();
    antlr4::tree::TerminalNode *CLONE();
    antlr4::tree::TerminalNode *CLOSE();
    antlr4::tree::TerminalNode *COALESCE();
    antlr4::tree::TerminalNode *CODE();
    antlr4::tree::TerminalNode *COLLATION();
    antlr4::tree::TerminalNode *COLUMNS();
    antlr4::tree::TerminalNode *COLUMN_FORMAT();
    antlr4::tree::TerminalNode *COLUMN_NAME();
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *COMMIT();
    antlr4::tree::TerminalNode *COMMITTED();
    antlr4::tree::TerminalNode *COMPACT();
    antlr4::tree::TerminalNode *COMPLETION();
    antlr4::tree::TerminalNode *COMPONENT();
    antlr4::tree::TerminalNode *COMPRESSED();
    antlr4::tree::TerminalNode *COMPRESSION();
    antlr4::tree::TerminalNode *CONCURRENT();
    antlr4::tree::TerminalNode *CONNECTION();
    antlr4::tree::TerminalNode *CONSISTENT();
    antlr4::tree::TerminalNode *CONSTRAINT_CATALOG();
    antlr4::tree::TerminalNode *CONSTRAINT_NAME();
    antlr4::tree::TerminalNode *CONSTRAINT_SCHEMA();
    antlr4::tree::TerminalNode *CONTAINS();
    antlr4::tree::TerminalNode *CONTEXT();
    antlr4::tree::TerminalNode *CPU();
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *CURSOR_NAME();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *DATAFILE();
    antlr4::tree::TerminalNode *DATE();
    antlr4::tree::TerminalNode *DATETIME();
    antlr4::tree::TerminalNode *DAY();
    antlr4::tree::TerminalNode *DEFAULT_AUTH();
    antlr4::tree::TerminalNode *DEFINER();
    antlr4::tree::TerminalNode *DEFINITION();
    antlr4::tree::TerminalNode *DEALLOCATE();
    antlr4::tree::TerminalNode *DELAY_KEY_WRITE();
    antlr4::tree::TerminalNode *DESCRIPTION();
    antlr4::tree::TerminalNode *DIAGNOSTICS();
    antlr4::tree::TerminalNode *DIRECTORY();
    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *DISCARD();
    antlr4::tree::TerminalNode *DISK();
    antlr4::tree::TerminalNode *DO();
    antlr4::tree::TerminalNode *DUMPFILE();
    antlr4::tree::TerminalNode *DUPLICATE();
    antlr4::tree::TerminalNode *DYNAMIC();
    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *ENCRYPTION();
    antlr4::tree::TerminalNode *ENFORCED();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *ENDS();
    antlr4::tree::TerminalNode *ENGINE();
    antlr4::tree::TerminalNode *ENGINES();
    antlr4::tree::TerminalNode *ENGINE_ATTRIBUTE();
    antlr4::tree::TerminalNode *ENUM();
    antlr4::tree::TerminalNode *ERROR();
    antlr4::tree::TerminalNode *ERRORS();
    antlr4::tree::TerminalNode *ESCAPE();
    antlr4::tree::TerminalNode *EVENT();
    antlr4::tree::TerminalNode *EVENTS();
    antlr4::tree::TerminalNode *EVERY();
    antlr4::tree::TerminalNode *EXCHANGE();
    antlr4::tree::TerminalNode *EXCLUDE();
    antlr4::tree::TerminalNode *EXECUTE();
    antlr4::tree::TerminalNode *EXPANSION();
    antlr4::tree::TerminalNode *EXPIRE();
    antlr4::tree::TerminalNode *EXPORT();
    antlr4::tree::TerminalNode *EXTENDED();
    antlr4::tree::TerminalNode *EXTENT_SIZE();
    antlr4::tree::TerminalNode *FAILED_LOGIN_ATTEMPTS();
    antlr4::tree::TerminalNode *FAST();
    antlr4::tree::TerminalNode *FAULTS();
    antlr4::tree::TerminalNode *FIELDS();
    antlr4::tree::TerminalNode *FILE();
    antlr4::tree::TerminalNode *FILE_BLOCK_SIZE();
    antlr4::tree::TerminalNode *FILTER();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *FIXED();
    antlr4::tree::TerminalNode *FLUSH();
    antlr4::tree::TerminalNode *FOLLOWING();
    antlr4::tree::TerminalNode *FOLLOWS();
    antlr4::tree::TerminalNode *FORMAT();
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *GENERAL();
    antlr4::tree::TerminalNode *GEOMCOLLECTION();
    antlr4::tree::TerminalNode *GEOMETRY();
    antlr4::tree::TerminalNode *GEOMETRYCOLLECTION();
    antlr4::tree::TerminalNode *GET_FORMAT();
    antlr4::tree::TerminalNode *GET_MASTER_PUBLIC_KEY();
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *GRANTS();
    antlr4::tree::TerminalNode *GROUP_REPLICATION();
    antlr4::tree::TerminalNode *HANDLER();
    antlr4::tree::TerminalNode *HASH();
    antlr4::tree::TerminalNode *HELP();
    antlr4::tree::TerminalNode *HISTOGRAM();
    antlr4::tree::TerminalNode *HISTORY();
    antlr4::tree::TerminalNode *HOST();
    antlr4::tree::TerminalNode *HOSTS();
    antlr4::tree::TerminalNode *HOUR();
    antlr4::tree::TerminalNode *IDENTIFIED();
    antlr4::tree::TerminalNode *IGNORE_SERVER_IDS();
    antlr4::tree::TerminalNode *IMPORT();
    antlr4::tree::TerminalNode *INACTIVE();
    antlr4::tree::TerminalNode *INDEXES();
    antlr4::tree::TerminalNode *INITIAL_SIZE();
    antlr4::tree::TerminalNode *INSERT_METHOD();
    antlr4::tree::TerminalNode *INSTALL();
    antlr4::tree::TerminalNode *INSTANCE();
    antlr4::tree::TerminalNode *INVISIBLE();
    antlr4::tree::TerminalNode *INVOKER();
    antlr4::tree::TerminalNode *IO();
    antlr4::tree::TerminalNode *IO_THREAD();
    antlr4::tree::TerminalNode *IPC();
    antlr4::tree::TerminalNode *ISOLATION();
    antlr4::tree::TerminalNode *ISSUER();
    antlr4::tree::TerminalNode *JSON();
    antlr4::tree::TerminalNode *JSON_VALUE();
    antlr4::tree::TerminalNode *KEY_BLOCK_SIZE();
    antlr4::tree::TerminalNode *LANGUAGE();
    antlr4::tree::TerminalNode *LAST();
    antlr4::tree::TerminalNode *LEAVES();
    antlr4::tree::TerminalNode *LESS();
    antlr4::tree::TerminalNode *LEVEL();
    antlr4::tree::TerminalNode *LINESTRING();
    antlr4::tree::TerminalNode *LIST();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *LOCKED();
    antlr4::tree::TerminalNode *LOCKS();
    antlr4::tree::TerminalNode *LOGFILE();
    antlr4::tree::TerminalNode *LOGS();
    antlr4::tree::TerminalNode *MANAGED();
    antlr4::tree::TerminalNode *MASTER();
    antlr4::tree::TerminalNode *MASTER_AUTO_POSITION();
    antlr4::tree::TerminalNode *MASTER_COMPRESSION_ALGORITHMS();
    antlr4::tree::TerminalNode *MASTER_CONNECT_RETRY();
    antlr4::tree::TerminalNode *MASTER_DELAY();
    antlr4::tree::TerminalNode *MASTER_HEARTBEAT_PERIOD();
    antlr4::tree::TerminalNode *MASTER_HOST();
    antlr4::tree::TerminalNode *MASTER_LOG_FILE();
    antlr4::tree::TerminalNode *MASTER_LOG_POS();
    antlr4::tree::TerminalNode *MASTER_PASSWORD();
    antlr4::tree::TerminalNode *MASTER_PUBLIC_KEY_PATH();
    antlr4::tree::TerminalNode *MASTER_PORT();
    antlr4::tree::TerminalNode *MASTER_RETRY_COUNT();
    antlr4::tree::TerminalNode *MASTER_SERVER_ID();
    antlr4::tree::TerminalNode *MASTER_SSL();
    antlr4::tree::TerminalNode *MASTER_SSL_CA();
    antlr4::tree::TerminalNode *MASTER_SSL_CAPATH();
    antlr4::tree::TerminalNode *MASTER_SSL_CERT();
    antlr4::tree::TerminalNode *MASTER_SSL_CIPHER();
    antlr4::tree::TerminalNode *MASTER_SSL_CRL();
    antlr4::tree::TerminalNode *MASTER_SSL_CRLPATH();
    antlr4::tree::TerminalNode *MASTER_SSL_KEY();
    antlr4::tree::TerminalNode *MASTER_TLS_CIPHERSUITES();
    antlr4::tree::TerminalNode *MASTER_TLS_VERSION();
    antlr4::tree::TerminalNode *MASTER_USER();
    antlr4::tree::TerminalNode *MASTER_ZSTD_COMPRESSION_LEVEL();
    antlr4::tree::TerminalNode *MAX_CONNECTIONS_PER_HOUR();
    antlr4::tree::TerminalNode *MAX_QUERIES_PER_HOUR();
    antlr4::tree::TerminalNode *MAX_ROWS();
    antlr4::tree::TerminalNode *MAX_SIZE();
    antlr4::tree::TerminalNode *MAX_UPDATES_PER_HOUR();
    antlr4::tree::TerminalNode *MAX_USER_CONNECTIONS();
    antlr4::tree::TerminalNode *MEDIUM();
    antlr4::tree::TerminalNode *MEMORY();
    antlr4::tree::TerminalNode *MERGE();
    antlr4::tree::TerminalNode *MESSAGE_TEXT();
    antlr4::tree::TerminalNode *MICROSECOND();
    antlr4::tree::TerminalNode *MIGRATE();
    antlr4::tree::TerminalNode *MINUTE();
    antlr4::tree::TerminalNode *MIN_ROWS();
    antlr4::tree::TerminalNode *MODE();
    antlr4::tree::TerminalNode *MODIFY();
    antlr4::tree::TerminalNode *MONTH();
    antlr4::tree::TerminalNode *MULTILINESTRING();
    antlr4::tree::TerminalNode *MULTIPOINT();
    antlr4::tree::TerminalNode *MULTIPOLYGON();
    antlr4::tree::TerminalNode *MUTEX();
    antlr4::tree::TerminalNode *MYSQL_ERRNO();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *NAMES();
    antlr4::tree::TerminalNode *NATIONAL();
    antlr4::tree::TerminalNode *NCHAR();
    antlr4::tree::TerminalNode *NDB();
    antlr4::tree::TerminalNode *NDBCLUSTER();
    antlr4::tree::TerminalNode *NESTED();
    antlr4::tree::TerminalNode *NETWORK_NAMESPACE();
    antlr4::tree::TerminalNode *NEVER();
    antlr4::tree::TerminalNode *NEW();
    antlr4::tree::TerminalNode *NEXT();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *NODEGROUP();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *NOWAIT();
    antlr4::tree::TerminalNode *NO_WAIT();
    antlr4::tree::TerminalNode *NULLS();
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *NVARCHAR();
    antlr4::tree::TerminalNode *OFFSET();
    antlr4::tree::TerminalNode *OFF();
    antlr4::tree::TerminalNode *OJ();
    antlr4::tree::TerminalNode *OLD();
    antlr4::tree::TerminalNode *ONE();
    antlr4::tree::TerminalNode *ONLY();
    antlr4::tree::TerminalNode *OPEN();
    antlr4::tree::TerminalNode *OPTIONAL();
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *ORDINALITY();
    antlr4::tree::TerminalNode *OTHERS();
    antlr4::tree::TerminalNode *OWNER();
    antlr4::tree::TerminalNode *PACK_KEYS();
    antlr4::tree::TerminalNode *PAGE();
    antlr4::tree::TerminalNode *PARSER();
    antlr4::tree::TerminalNode *PARTIAL();
    antlr4::tree::TerminalNode *PARTITIONING();
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *PASSWORD_LOCK_TIME();
    antlr4::tree::TerminalNode *PATH();
    antlr4::tree::TerminalNode *PERSIST();
    antlr4::tree::TerminalNode *PERSIST_ONLY();
    antlr4::tree::TerminalNode *PHASE();
    antlr4::tree::TerminalNode *PLUGIN();
    antlr4::tree::TerminalNode *PLUGINS();
    antlr4::tree::TerminalNode *PLUGIN_DIR();
    antlr4::tree::TerminalNode *POINT();
    antlr4::tree::TerminalNode *POLYGON();
    antlr4::tree::TerminalNode *PORT();
    antlr4::tree::TerminalNode *PRECEDES();
    antlr4::tree::TerminalNode *PRECEDING();
    antlr4::tree::TerminalNode *PREPARE();
    antlr4::tree::TerminalNode *PRESERVE();
    antlr4::tree::TerminalNode *PREV();
    antlr4::tree::TerminalNode *PRIVILEGES();
    antlr4::tree::TerminalNode *PRIVILEGE_CHECKS_USER();
    antlr4::tree::TerminalNode *PROCESS();
    antlr4::tree::TerminalNode *PROCESSLIST();
    antlr4::tree::TerminalNode *PROFILE();
    antlr4::tree::TerminalNode *PROFILES();
    antlr4::tree::TerminalNode *PROXY();
    antlr4::tree::TerminalNode *QUARTER();
    antlr4::tree::TerminalNode *QUERY();
    antlr4::tree::TerminalNode *QUICK();
    antlr4::tree::TerminalNode *RANDOM();
    antlr4::tree::TerminalNode *READ_ONLY();
    antlr4::tree::TerminalNode *REBUILD();
    antlr4::tree::TerminalNode *RECOVER();
    antlr4::tree::TerminalNode *REDO_BUFFER_SIZE();
    antlr4::tree::TerminalNode *REDUNDANT();
    antlr4::tree::TerminalNode *REFERENCE();
    antlr4::tree::TerminalNode *RELAY();
    antlr4::tree::TerminalNode *RELAYLOG();
    antlr4::tree::TerminalNode *RELAY_LOG_FILE();
    antlr4::tree::TerminalNode *RELAY_LOG_POS();
    antlr4::tree::TerminalNode *RELAY_THREAD();
    antlr4::tree::TerminalNode *RELOAD();
    antlr4::tree::TerminalNode *REMOVE();
    antlr4::tree::TerminalNode *REORGANIZE();
    antlr4::tree::TerminalNode *REPAIR();
    antlr4::tree::TerminalNode *REPEATABLE();
    antlr4::tree::TerminalNode *REPLICATE_DO_DB();
    antlr4::tree::TerminalNode *REPLICATE_DO_TABLE();
    antlr4::tree::TerminalNode *REPLICATE_IGNORE_DB();
    antlr4::tree::TerminalNode *REPLICATE_IGNORE_TABLE();
    antlr4::tree::TerminalNode *REPLICATE_REWRITE_DB();
    antlr4::tree::TerminalNode *REPLICATE_WILD_DO_TABLE();
    antlr4::tree::TerminalNode *REPLICATE_WILD_IGNORE_TABLE();
    antlr4::tree::TerminalNode *REPLICATION();
    antlr4::tree::TerminalNode *REQUIRE_ROW_FORMAT();
    antlr4::tree::TerminalNode *RESET();
    antlr4::tree::TerminalNode *RESOURCE();
    antlr4::tree::TerminalNode *RESPECT();
    antlr4::tree::TerminalNode *RESTART();
    antlr4::tree::TerminalNode *RESTORE();
    antlr4::tree::TerminalNode *RESUME();
    antlr4::tree::TerminalNode *RETAIN();
    antlr4::tree::TerminalNode *RETURNED_SQLSTATE();
    antlr4::tree::TerminalNode *RETURNING();
    antlr4::tree::TerminalNode *RETURNS();
    antlr4::tree::TerminalNode *REUSE();
    antlr4::tree::TerminalNode *REVERSE();
    antlr4::tree::TerminalNode *ROLE();
    antlr4::tree::TerminalNode *ROLLBACK();
    antlr4::tree::TerminalNode *ROLLUP();
    antlr4::tree::TerminalNode *ROTATE();
    antlr4::tree::TerminalNode *ROUTINE();
    antlr4::tree::TerminalNode *ROW_COUNT();
    antlr4::tree::TerminalNode *ROW_FORMAT();
    antlr4::tree::TerminalNode *RTREE();
    antlr4::tree::TerminalNode *SAVEPOINT();
    antlr4::tree::TerminalNode *SCHEDULE();
    antlr4::tree::TerminalNode *SCHEMA_NAME();
    antlr4::tree::TerminalNode *SECOND();
    antlr4::tree::TerminalNode *SECONDARY();
    antlr4::tree::TerminalNode *SECONDARY_ENGINE();
    antlr4::tree::TerminalNode *SECONDARY_ENGINE_ATTRIBUTE();
    antlr4::tree::TerminalNode *SECONDARY_LOAD();
    antlr4::tree::TerminalNode *SECONDARY_UNLOAD();
    antlr4::tree::TerminalNode *SECURITY();
    antlr4::tree::TerminalNode *SERIAL();
    antlr4::tree::TerminalNode *SERIALIZABLE();
    antlr4::tree::TerminalNode *SERVER();
    antlr4::tree::TerminalNode *SESSION();
    antlr4::tree::TerminalNode *SHARE();
    antlr4::tree::TerminalNode *SHUTDOWN();
    antlr4::tree::TerminalNode *SIGNED();
    antlr4::tree::TerminalNode *SIMPLE();
    antlr4::tree::TerminalNode *SLAVE();
    antlr4::tree::TerminalNode *SLOW();
    antlr4::tree::TerminalNode *SNAPSHOT();
    antlr4::tree::TerminalNode *SOCKET();
    antlr4::tree::TerminalNode *SOME();
    antlr4::tree::TerminalNode *SONAME();
    antlr4::tree::TerminalNode *SOUNDS();
    antlr4::tree::TerminalNode *SOURCE();
    antlr4::tree::TerminalNode *SQL_AFTER_GTIDS();
    antlr4::tree::TerminalNode *SQL_AFTER_MTS_GAPS();
    antlr4::tree::TerminalNode *SQL_BEFORE_GTIDS();
    antlr4::tree::TerminalNode *SQL_BUFFER_RESULT();
    antlr4::tree::TerminalNode *SQL_NO_CACHE();
    antlr4::tree::TerminalNode *SQL_THREAD();
    antlr4::tree::TerminalNode *SQL_TSI_DAY();
    antlr4::tree::TerminalNode *SQL_TSI_HOUR();
    antlr4::tree::TerminalNode *SQL_TSI_MINUTE();
    antlr4::tree::TerminalNode *SQL_TSI_MONTH();
    antlr4::tree::TerminalNode *SQL_TSI_QUARTER();
    antlr4::tree::TerminalNode *SQL_TSI_SECOND();
    antlr4::tree::TerminalNode *SQL_TSI_WEEK();
    antlr4::tree::TerminalNode *SQL_TSI_YEAR();
    antlr4::tree::TerminalNode *SRID();
    antlr4::tree::TerminalNode *STACKED();
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *STARTS();
    antlr4::tree::TerminalNode *STATS_AUTO_RECALC();
    antlr4::tree::TerminalNode *STATS_PERSISTENT();
    antlr4::tree::TerminalNode *STATS_SAMPLE_PAGES();
    antlr4::tree::TerminalNode *STATUS();
    antlr4::tree::TerminalNode *STOP();
    antlr4::tree::TerminalNode *STORAGE();
    antlr4::tree::TerminalNode *STREAM();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *SUBCLASS_ORIGIN();
    antlr4::tree::TerminalNode *SUBJECT();
    antlr4::tree::TerminalNode *SUBPARTITION();
    antlr4::tree::TerminalNode *SUBPARTITIONS();
    antlr4::tree::TerminalNode *SUPER();
    antlr4::tree::TerminalNode *SUSPEND();
    antlr4::tree::TerminalNode *SWAPS();
    antlr4::tree::TerminalNode *SWITCHES();
    antlr4::tree::TerminalNode *SQL_CACHE();
    antlr4::tree::TerminalNode *TABLES();
    antlr4::tree::TerminalNode *TABLESPACE();
    antlr4::tree::TerminalNode *TABLE_CHECKSUM();
    antlr4::tree::TerminalNode *TABLE_NAME();
    antlr4::tree::TerminalNode *TEMPORARY();
    antlr4::tree::TerminalNode *TEMPTABLE();
    antlr4::tree::TerminalNode *TEXT();
    antlr4::tree::TerminalNode *THAN();
    antlr4::tree::TerminalNode *THREAD_PRIORITY();
    antlr4::tree::TerminalNode *TIES();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *TIMESTAMP();
    antlr4::tree::TerminalNode *TIMESTAMPADD();
    antlr4::tree::TerminalNode *TIMESTAMPDIFF();
    antlr4::tree::TerminalNode *TLS();
    antlr4::tree::TerminalNode *TRANSACTION();
    antlr4::tree::TerminalNode *TRIGGERS();
    antlr4::tree::TerminalNode *TRUNCATE();
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *TYPES();
    antlr4::tree::TerminalNode *UNBOUNDED();
    antlr4::tree::TerminalNode *UNCOMMITTED();
    antlr4::tree::TerminalNode *UNDEFINED();
    antlr4::tree::TerminalNode *UNDOFILE();
    antlr4::tree::TerminalNode *UNDO_BUFFER_SIZE();
    antlr4::tree::TerminalNode *UNICODE();
    antlr4::tree::TerminalNode *UNINSTALL();
    antlr4::tree::TerminalNode *UNKNOWN();
    antlr4::tree::TerminalNode *UNTIL();
    antlr4::tree::TerminalNode *UPGRADE();
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *USER_RESOURCES();
    antlr4::tree::TerminalNode *USE_FRM();
    antlr4::tree::TerminalNode *VALIDATION();
    antlr4::tree::TerminalNode *VALUE();
    antlr4::tree::TerminalNode *VARIABLES();
    antlr4::tree::TerminalNode *VCPU();
    antlr4::tree::TerminalNode *VIEW();
    antlr4::tree::TerminalNode *VISIBLE();
    antlr4::tree::TerminalNode *WAIT();
    antlr4::tree::TerminalNode *WARNINGS();
    antlr4::tree::TerminalNode *WEEK();
    antlr4::tree::TerminalNode *WEIGHT_STRING();
    antlr4::tree::TerminalNode *WITHOUT();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *WRAPPER();
    antlr4::tree::TerminalNode *X509();
    antlr4::tree::TerminalNode *XA();
    antlr4::tree::TerminalNode *XID();
    antlr4::tree::TerminalNode *XML();
    antlr4::tree::TerminalNode *YEAR();
    antlr4::tree::TerminalNode *MEMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnreservedWordContext* unreservedWord();

  class  TextOrIdentifierContext : public antlr4::ParserRuleContext {
  public:
    TextOrIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    String_Context *string_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TextOrIdentifierContext* textOrIdentifier();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InternalVariableNameContext *internalVariableName();
    std::vector<antlr4::tree::TerminalNode *> AT_();
    antlr4::tree::TerminalNode* AT_(size_t i);
    ScopeContext *scope();
    antlr4::tree::TerminalNode *DOT_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableContext* variable();

  class  UserVariableContext : public antlr4::ParserRuleContext {
  public:
    UserVariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AT_();
    TextOrIdentifierContext *textOrIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UserVariableContext* userVariable();

  class  SystemVariableContext : public antlr4::ParserRuleContext {
  public:
    SystemVariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> AT_();
    antlr4::tree::TerminalNode* AT_(size_t i);
    TextOrIdentifierContext *textOrIdentifier();
    ScopeContext *scope();
    antlr4::tree::TerminalNode *DOT_();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SystemVariableContext* systemVariable();

  class  ScopeContext : public antlr4::ParserRuleContext {
  public:
    ScopeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *PERSIST();
    antlr4::tree::TerminalNode *PERSIST_ONLY();
    antlr4::tree::TerminalNode *SESSION();
    antlr4::tree::TerminalNode *LOCAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ScopeContext* scope();

  class  InternalVariableNameContext : public antlr4::ParserRuleContext {
  public:
    InternalVariableNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *DOT_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InternalVariableNameContext* internalVariableName();

  class  SetExprOrDefaultContext : public antlr4::ParserRuleContext {
  public:
    SetExprOrDefaultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *SYSTEM();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetExprOrDefaultContext* setExprOrDefault();

  class  SchemaNameContext : public antlr4::ParserRuleContext {
  public:
    SchemaNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SchemaNameContext* schemaName();

  class  SchemaNamesContext : public antlr4::ParserRuleContext {
  public:
    SchemaNamesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SchemaNameContext *> schemaName();
    SchemaNameContext* schemaName(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SchemaNamesContext* schemaNames();

  class  CharsetNameContext : public antlr4::ParserRuleContext {
  public:
    CharsetNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextOrIdentifierContext *textOrIdentifier();
    antlr4::tree::TerminalNode *BINARY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CharsetNameContext* charsetName();

  class  SchemaPairsContext : public antlr4::ParserRuleContext {
  public:
    SchemaPairsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SchemaPairContext *> schemaPair();
    SchemaPairContext* schemaPair(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SchemaPairsContext* schemaPairs();

  class  SchemaPairContext : public antlr4::ParserRuleContext {
  public:
    SchemaPairContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP_();
    std::vector<SchemaNameContext *> schemaName();
    SchemaNameContext* schemaName(size_t i);
    antlr4::tree::TerminalNode *COMMA_();
    antlr4::tree::TerminalNode *RP_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SchemaPairContext* schemaPair();

  class  TableNameContext : public antlr4::ParserRuleContext {
  public:
    TableNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    OwnerContext *owner();
    antlr4::tree::TerminalNode *DOT_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableNameContext* tableName();

  class  ColumnNameContext : public antlr4::ParserRuleContext {
  public:
    ColumnNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnNameContext* columnName();

  class  IndexNameContext : public antlr4::ParserRuleContext {
  public:
    IndexNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexNameContext* indexName();

  class  UserIdentifierOrTextContext : public antlr4::ParserRuleContext {
  public:
    UserIdentifierOrTextContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TextOrIdentifierContext *> textOrIdentifier();
    TextOrIdentifierContext* textOrIdentifier(size_t i);
    antlr4::tree::TerminalNode *AT_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UserIdentifierOrTextContext* userIdentifierOrText();

  class  UserNameContext : public antlr4::ParserRuleContext {
  public:
    UserNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UserIdentifierOrTextContext *userIdentifierOrText();
    antlr4::tree::TerminalNode *CURRENT_USER();
    antlr4::tree::TerminalNode *LP_();
    antlr4::tree::TerminalNode *RP_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UserNameContext* userName();

  class  EventNameContext : public antlr4::ParserRuleContext {
  public:
    EventNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *DOT_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EventNameContext* eventName();

  class  ServerNameContext : public antlr4::ParserRuleContext {
  public:
    ServerNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextOrIdentifierContext *textOrIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ServerNameContext* serverName();

  class  WrapperNameContext : public antlr4::ParserRuleContext {
  public:
    WrapperNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextOrIdentifierContext *textOrIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WrapperNameContext* wrapperName();

  class  FunctionNameContext : public antlr4::ParserRuleContext {
  public:
    FunctionNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    OwnerContext *owner();
    antlr4::tree::TerminalNode *DOT_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionNameContext* functionName();

  class  ViewNameContext : public antlr4::ParserRuleContext {
  public:
    ViewNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    OwnerContext *owner();
    antlr4::tree::TerminalNode *DOT_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ViewNameContext* viewName();

  class  OwnerContext : public antlr4::ParserRuleContext {
  public:
    OwnerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OwnerContext* owner();

  class  AliasContext : public antlr4::ParserRuleContext {
  public:
    AliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextOrIdentifierContext *textOrIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AliasContext* alias();

  class  NameContext : public antlr4::ParserRuleContext {
  public:
    NameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NameContext* name();

  class  TableListContext : public antlr4::ParserRuleContext {
  public:
    TableListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TableNameContext *> tableName();
    TableNameContext* tableName(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableListContext* tableList();

  class  ViewNamesContext : public antlr4::ParserRuleContext {
  public:
    ViewNamesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ViewNameContext *> viewName();
    ViewNameContext* viewName(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ViewNamesContext* viewNames();

  class  ColumnNamesContext : public antlr4::ParserRuleContext {
  public:
    ColumnNamesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ColumnNameContext *> columnName();
    ColumnNameContext* columnName(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnNamesContext* columnNames();

  class  GroupNameContext : public antlr4::ParserRuleContext {
  public:
    GroupNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GroupNameContext* groupName();

  class  RoutineNameContext : public antlr4::ParserRuleContext {
  public:
    RoutineNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RoutineNameContext* routineName();

  class  ShardLibraryNameContext : public antlr4::ParserRuleContext {
  public:
    ShardLibraryNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StringLiteralsContext *stringLiterals();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShardLibraryNameContext* shardLibraryName();

  class  ComponentNameContext : public antlr4::ParserRuleContext {
  public:
    ComponentNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    String_Context *string_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComponentNameContext* componentName();

  class  PluginNameContext : public antlr4::ParserRuleContext {
  public:
    PluginNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PluginNameContext* pluginName();

  class  HostNameContext : public antlr4::ParserRuleContext {
  public:
    HostNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    String_Context *string_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HostNameContext* hostName();

  class  PortContext : public antlr4::ParserRuleContext {
  public:
    PortContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PortContext* port();

  class  CloneInstanceContext : public antlr4::ParserRuleContext {
  public:
    CloneInstanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UserNameContext *userName();
    antlr4::tree::TerminalNode *AT_();
    HostNameContext *hostName();
    antlr4::tree::TerminalNode *COLON_();
    PortContext *port();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CloneInstanceContext* cloneInstance();

  class  CloneDirContext : public antlr4::ParserRuleContext {
  public:
    CloneDirContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    String_Context *string_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CloneDirContext* cloneDir();

  class  ChannelNameContext : public antlr4::ParserRuleContext {
  public:
    ChannelNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *DOT_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChannelNameContext* channelName();

  class  LogNameContext : public antlr4::ParserRuleContext {
  public:
    LogNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StringLiteralsContext *stringLiterals();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogNameContext* logName();

  class  RoleNameContext : public antlr4::ParserRuleContext {
  public:
    RoleNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AT_();
    std::vector<String_Context *> string_();
    String_Context* string_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER_();
    antlr4::tree::TerminalNode* IDENTIFIER_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RoleNameContext* roleName();

  class  EngineRefContext : public antlr4::ParserRuleContext {
  public:
    EngineRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextOrIdentifierContext *textOrIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EngineRefContext* engineRef();

  class  TriggerNameContext : public antlr4::ParserRuleContext {
  public:
    TriggerNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *DOT_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TriggerNameContext* triggerName();

  class  TriggerTimeContext : public antlr4::ParserRuleContext {
  public:
    TriggerTimeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEFORE();
    antlr4::tree::TerminalNode *AFTER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TriggerTimeContext* triggerTime();

  class  TableOrTablesContext : public antlr4::ParserRuleContext {
  public:
    TableOrTablesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *TABLES();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableOrTablesContext* tableOrTables();

  class  UserOrRoleContext : public antlr4::ParserRuleContext {
  public:
    UserOrRoleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UserNameContext *userName();
    RoleNameContext *roleName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UserOrRoleContext* userOrRole();

  class  PartitionNameContext : public antlr4::ParserRuleContext {
  public:
    PartitionNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionNameContext* partitionName();

  class  IdentifierListContext : public antlr4::ParserRuleContext {
  public:
    IdentifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierListContext* identifierList();

  class  AllOrPartitionNameListContext : public antlr4::ParserRuleContext {
  public:
    AllOrPartitionNameListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL();
    IdentifierListContext *identifierList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AllOrPartitionNameListContext* allOrPartitionNameList();

  class  TriggerEventContext : public antlr4::ParserRuleContext {
  public:
    TriggerEventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *DELETE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TriggerEventContext* triggerEvent();

  class  TriggerOrderContext : public antlr4::ParserRuleContext {
  public:
    TriggerOrderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TriggerNameContext *triggerName();
    antlr4::tree::TerminalNode *FOLLOWS();
    antlr4::tree::TerminalNode *PRECEDES();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TriggerOrderContext* triggerOrder();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BooleanPrimaryContext *booleanPrimary();
    NotOperatorContext *notOperator();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    LogicalOperatorContext *logicalOperator();
    antlr4::tree::TerminalNode *XOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  LogicalOperatorContext : public antlr4::ParserRuleContext {
  public:
    LogicalOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *OR_();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *AND_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicalOperatorContext* logicalOperator();

  class  NotOperatorContext : public antlr4::ParserRuleContext {
  public:
    NotOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *NOT_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NotOperatorContext* notOperator();

  class  BooleanPrimaryContext : public antlr4::ParserRuleContext {
  public:
    BooleanPrimaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PredicateContext *predicate();
    BooleanPrimaryContext *booleanPrimary();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();
    antlr4::tree::TerminalNode *UNKNOWN();
    antlr4::tree::TerminalNode *NULL();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *SAFE_EQ_();
    ComparisonOperatorContext *comparisonOperator();
    SubqueryContext *subquery();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *ANY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BooleanPrimaryContext* booleanPrimary();
  BooleanPrimaryContext* booleanPrimary(int precedence);
  class  ComparisonOperatorContext : public antlr4::ParserRuleContext {
  public:
    ComparisonOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQ_();
    antlr4::tree::TerminalNode *GTE_();
    antlr4::tree::TerminalNode *GT_();
    antlr4::tree::TerminalNode *LTE_();
    antlr4::tree::TerminalNode *LT_();
    antlr4::tree::TerminalNode *NEQ_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComparisonOperatorContext* comparisonOperator();

  class  PredicateContext : public antlr4::ParserRuleContext {
  public:
    PredicateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<BitExprContext *> bitExpr();
    BitExprContext* bitExpr(size_t i);
    antlr4::tree::TerminalNode *IN();
    SubqueryContext *subquery();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *LP_();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *RP_();
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);
    antlr4::tree::TerminalNode *BETWEEN();
    antlr4::tree::TerminalNode *AND();
    PredicateContext *predicate();
    antlr4::tree::TerminalNode *SOUNDS();
    antlr4::tree::TerminalNode *LIKE();
    std::vector<SimpleExprContext *> simpleExpr();
    SimpleExprContext* simpleExpr(size_t i);
    antlr4::tree::TerminalNode *ESCAPE();
    antlr4::tree::TerminalNode *REGEXP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PredicateContext* predicate();

  class  BitExprContext : public antlr4::ParserRuleContext {
  public:
    BitExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleExprContext *simpleExpr();
    std::vector<BitExprContext *> bitExpr();
    BitExprContext* bitExpr(size_t i);
    antlr4::tree::TerminalNode *VERTICAL_BAR_();
    antlr4::tree::TerminalNode *AMPERSAND_();
    antlr4::tree::TerminalNode *SIGNED_LEFT_SHIFT_();
    antlr4::tree::TerminalNode *SIGNED_RIGHT_SHIFT_();
    antlr4::tree::TerminalNode *PLUS_();
    antlr4::tree::TerminalNode *MINUS_();
    antlr4::tree::TerminalNode *ASTERISK_();
    antlr4::tree::TerminalNode *SLASH_();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *MOD();
    antlr4::tree::TerminalNode *MOD_();
    antlr4::tree::TerminalNode *CARET_();
    IntervalExpressionContext *intervalExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BitExprContext* bitExpr();
  BitExprContext* bitExpr(int precedence);
  class  SimpleExprContext : public antlr4::ParserRuleContext {
  public:
    SimpleExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionCallContext *functionCall();
    ParameterMarkerContext *parameterMarker();
    LiteralsContext *literals();
    ColumnRefContext *columnRef();
    VariableContext *variable();
    std::vector<SimpleExprContext *> simpleExpr();
    SimpleExprContext* simpleExpr(size_t i);
    antlr4::tree::TerminalNode *PLUS_();
    antlr4::tree::TerminalNode *MINUS_();
    antlr4::tree::TerminalNode *TILDE_();
    NotOperatorContext *notOperator();
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *LP_();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *RP_();
    antlr4::tree::TerminalNode *ROW();
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);
    SubqueryContext *subquery();
    antlr4::tree::TerminalNode *EXISTS();
    antlr4::tree::TerminalNode *LBE_();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *RBE_();
    String_Context *string_();
    antlr4::tree::TerminalNode *JSON_SEPARATOR();
    antlr4::tree::TerminalNode *JSON_UNQUOTED_SEPARATOR();
    MatchExpressionContext *matchExpression();
    CaseExpressionContext *caseExpression();
    IntervalExpressionContext *intervalExpression();
    antlr4::tree::TerminalNode *OR_();
    antlr4::tree::TerminalNode *COLLATE();
    TextOrIdentifierContext *textOrIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleExprContext* simpleExpr();
  SimpleExprContext* simpleExpr(int precedence);
  class  ColumnRefContext : public antlr4::ParserRuleContext {
  public:
    ColumnRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT_();
    antlr4::tree::TerminalNode* DOT_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnRefContext* columnRef();

  class  ColumnRefListContext : public antlr4::ParserRuleContext {
  public:
    ColumnRefListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ColumnRefContext *> columnRef();
    ColumnRefContext* columnRef(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnRefListContext* columnRefList();

  class  FunctionCallContext : public antlr4::ParserRuleContext {
  public:
    FunctionCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AggregationFunctionContext *aggregationFunction();
    SpecialFunctionContext *specialFunction();
    RegularFunctionContext *regularFunction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionCallContext* functionCall();

  class  AggregationFunctionContext : public antlr4::ParserRuleContext {
  public:
    AggregationFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AggregationFunctionNameContext *aggregationFunctionName();
    antlr4::tree::TerminalNode *LP_();
    antlr4::tree::TerminalNode *RP_();
    DistinctContext *distinct();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *ASTERISK_();
    OverClauseContext *overClause();
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AggregationFunctionContext* aggregationFunction();

  class  AggregationFunctionNameContext : public antlr4::ParserRuleContext {
  public:
    AggregationFunctionNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MAX();
    antlr4::tree::TerminalNode *MIN();
    antlr4::tree::TerminalNode *SUM();
    antlr4::tree::TerminalNode *COUNT();
    antlr4::tree::TerminalNode *AVG();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AggregationFunctionNameContext* aggregationFunctionName();

  class  DistinctContext : public antlr4::ParserRuleContext {
  public:
    DistinctContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DISTINCT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DistinctContext* distinct();

  class  OverClauseContext : public antlr4::ParserRuleContext {
  public:
    OverClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OVER();
    antlr4::tree::TerminalNode *LP_();
    WindowSpecificationContext *windowSpecification();
    antlr4::tree::TerminalNode *RP_();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OverClauseContext* overClause();

  class  WindowSpecificationContext : public antlr4::ParserRuleContext {
  public:
    WindowSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP_();
    antlr4::tree::TerminalNode *RP_();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *BY();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    OrderByClauseContext *orderByClause();
    FrameClauseContext *frameClause();
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WindowSpecificationContext* windowSpecification();

  class  FrameClauseContext : public antlr4::ParserRuleContext {
  public:
    FrameClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ROWS();
    antlr4::tree::TerminalNode *RANGE();
    FrameStartContext *frameStart();
    FrameBetweenContext *frameBetween();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FrameClauseContext* frameClause();

  class  FrameStartContext : public antlr4::ParserRuleContext {
  public:
    FrameStartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *UNBOUNDED();
    antlr4::tree::TerminalNode *PRECEDING();
    antlr4::tree::TerminalNode *FOLLOWING();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FrameStartContext* frameStart();

  class  FrameEndContext : public antlr4::ParserRuleContext {
  public:
    FrameEndContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FrameStartContext *frameStart();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FrameEndContext* frameEnd();

  class  FrameBetweenContext : public antlr4::ParserRuleContext {
  public:
    FrameBetweenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BETWEEN();
    FrameStartContext *frameStart();
    antlr4::tree::TerminalNode *AND();
    FrameEndContext *frameEnd();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FrameBetweenContext* frameBetween();

  class  SpecialFunctionContext : public antlr4::ParserRuleContext {
  public:
    SpecialFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    GroupConcatFunctionContext *groupConcatFunction();
    WindowFunctionContext *windowFunction();
    CastFunctionContext *castFunction();
    ConvertFunctionContext *convertFunction();
    PositionFunctionContext *positionFunction();
    SubstringFunctionContext *substringFunction();
    ExtractFunctionContext *extractFunction();
    CharFunctionContext *charFunction();
    TrimFunctionContext *trimFunction();
    WeightStringFunctionContext *weightStringFunction();
    ValuesFunctionContext *valuesFunction();
    CurrentUserFunctionContext *currentUserFunction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SpecialFunctionContext* specialFunction();

  class  CurrentUserFunctionContext : public antlr4::ParserRuleContext {
  public:
    CurrentUserFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CURRENT_USER();
    antlr4::tree::TerminalNode *LP_();
    antlr4::tree::TerminalNode *RP_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CurrentUserFunctionContext* currentUserFunction();

  class  GroupConcatFunctionContext : public antlr4::ParserRuleContext {
  public:
    GroupConcatFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GROUP_CONCAT();
    antlr4::tree::TerminalNode *LP_();
    antlr4::tree::TerminalNode *RP_();
    DistinctContext *distinct();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *ASTERISK_();
    OrderByClauseContext *orderByClause();
    antlr4::tree::TerminalNode *SEPARATOR();
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GroupConcatFunctionContext* groupConcatFunction();

  class  WindowFunctionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *funcName = nullptr;;
    WindowFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP_();
    antlr4::tree::TerminalNode *RP_();
    WindowingClauseContext *windowingClause();
    antlr4::tree::TerminalNode *ROW_NUMBER();
    antlr4::tree::TerminalNode *RANK();
    antlr4::tree::TerminalNode *DENSE_RANK();
    antlr4::tree::TerminalNode *CUME_DIST();
    antlr4::tree::TerminalNode *PERCENT_RANK();
    antlr4::tree::TerminalNode *NTILE();
    SimpleExprContext *simpleExpr();
    ExprContext *expr();
    antlr4::tree::TerminalNode *LEAD();
    antlr4::tree::TerminalNode *LAG();
    LeadLagInfoContext *leadLagInfo();
    NullTreatmentContext *nullTreatment();
    antlr4::tree::TerminalNode *FIRST_VALUE();
    antlr4::tree::TerminalNode *LAST_VALUE();
    antlr4::tree::TerminalNode *COMMA_();
    antlr4::tree::TerminalNode *NTH_VALUE();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *LAST();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WindowFunctionContext* windowFunction();

  class  WindowingClauseContext : public antlr4::ParserRuleContext {
  public:
    MySQLStatementParser::IdentifierContext *windowName = nullptr;;
    WindowingClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OVER();
    WindowSpecificationContext *windowSpecification();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WindowingClauseContext* windowingClause();

  class  LeadLagInfoContext : public antlr4::ParserRuleContext {
  public:
    LeadLagInfoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);
    antlr4::tree::TerminalNode *NUMBER_();
    antlr4::tree::TerminalNode *QUESTION_();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LeadLagInfoContext* leadLagInfo();

  class  NullTreatmentContext : public antlr4::ParserRuleContext {
  public:
    NullTreatmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NULLS();
    antlr4::tree::TerminalNode *RESPECT();
    antlr4::tree::TerminalNode *IGNORE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NullTreatmentContext* nullTreatment();

  class  CheckTypeContext : public antlr4::ParserRuleContext {
  public:
    CheckTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *UPGRADE();
    antlr4::tree::TerminalNode *QUICK();
    antlr4::tree::TerminalNode *FAST();
    antlr4::tree::TerminalNode *MEDIUM();
    antlr4::tree::TerminalNode *EXTENDED();
    antlr4::tree::TerminalNode *CHANGED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CheckTypeContext* checkType();

  class  RepairTypeContext : public antlr4::ParserRuleContext {
  public:
    RepairTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *QUICK();
    antlr4::tree::TerminalNode *EXTENDED();
    antlr4::tree::TerminalNode *USE_FRM();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RepairTypeContext* repairType();

  class  CastFunctionContext : public antlr4::ParserRuleContext {
  public:
    CastFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CAST();
    antlr4::tree::TerminalNode *LP_();
    ExprContext *expr();
    antlr4::tree::TerminalNode *AS();
    DataTypeContext *dataType();
    antlr4::tree::TerminalNode *RP_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CastFunctionContext* castFunction();

  class  ConvertFunctionContext : public antlr4::ParserRuleContext {
  public:
    ConvertFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONVERT();
    antlr4::tree::TerminalNode *LP_();
    ExprContext *expr();
    antlr4::tree::TerminalNode *COMMA_();
    CastTypeContext *castType();
    antlr4::tree::TerminalNode *RP_();
    antlr4::tree::TerminalNode *USING();
    CharsetNameContext *charsetName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConvertFunctionContext* convertFunction();

  class  CastTypeContext : public antlr4::ParserRuleContext {
  public:
    CastTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BINARY();
    FieldLengthContext *fieldLength();
    antlr4::tree::TerminalNode *CHAR();
    CharsetWithOptBinaryContext *charsetWithOptBinary();
    NcharContext *nchar();
    antlr4::tree::TerminalNode *SIGNED();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *UNSIGNED();
    antlr4::tree::TerminalNode *DATE();
    antlr4::tree::TerminalNode *TIME();
    TypeDatetimePrecisionContext *typeDatetimePrecision();
    antlr4::tree::TerminalNode *DATETIME();
    antlr4::tree::TerminalNode *DECIMAL();
    PrecisionContext *precision();
    antlr4::tree::TerminalNode *JSON();
    antlr4::tree::TerminalNode *REAL();
    antlr4::tree::TerminalNode *DOUBLE();
    antlr4::tree::TerminalNode *PRECISION();
    antlr4::tree::TerminalNode *FLOAT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CastTypeContext* castType();

  class  NcharContext : public antlr4::ParserRuleContext {
  public:
    NcharContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NCHAR();
    antlr4::tree::TerminalNode *NATIONAL();
    antlr4::tree::TerminalNode *CHAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NcharContext* nchar();

  class  PositionFunctionContext : public antlr4::ParserRuleContext {
  public:
    PositionFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *POSITION();
    antlr4::tree::TerminalNode *LP_();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *RP_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PositionFunctionContext* positionFunction();

  class  SubstringFunctionContext : public antlr4::ParserRuleContext {
  public:
    SubstringFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP_();
    ExprContext *expr();
    antlr4::tree::TerminalNode *FROM();
    std::vector<antlr4::tree::TerminalNode *> NUMBER_();
    antlr4::tree::TerminalNode* NUMBER_(size_t i);
    antlr4::tree::TerminalNode *RP_();
    antlr4::tree::TerminalNode *SUBSTRING();
    antlr4::tree::TerminalNode *SUBSTR();
    antlr4::tree::TerminalNode *FOR();
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubstringFunctionContext* substringFunction();

  class  ExtractFunctionContext : public antlr4::ParserRuleContext {
  public:
    ExtractFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXTRACT();
    antlr4::tree::TerminalNode *LP_();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *FROM();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RP_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExtractFunctionContext* extractFunction();

  class  CharFunctionContext : public antlr4::ParserRuleContext {
  public:
    CharFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHAR();
    antlr4::tree::TerminalNode *LP_();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *RP_();
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);
    antlr4::tree::TerminalNode *USING();
    CharsetNameContext *charsetName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CharFunctionContext* charFunction();

  class  TrimFunctionContext : public antlr4::ParserRuleContext {
  public:
    TrimFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRIM();
    antlr4::tree::TerminalNode *LP_();
    std::vector<String_Context *> string_();
    String_Context* string_(size_t i);
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *RP_();
    antlr4::tree::TerminalNode *LEADING();
    antlr4::tree::TerminalNode *BOTH();
    antlr4::tree::TerminalNode *TRAILING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TrimFunctionContext* trimFunction();

  class  ValuesFunctionContext : public antlr4::ParserRuleContext {
  public:
    ValuesFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VALUES();
    antlr4::tree::TerminalNode *LP_();
    ColumnRefListContext *columnRefList();
    antlr4::tree::TerminalNode *RP_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValuesFunctionContext* valuesFunction();

  class  WeightStringFunctionContext : public antlr4::ParserRuleContext {
  public:
    WeightStringFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WEIGHT_STRING();
    antlr4::tree::TerminalNode *LP_();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RP_();
    antlr4::tree::TerminalNode *AS();
    DataTypeContext *dataType();
    LevelClauseContext *levelClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WeightStringFunctionContext* weightStringFunction();

  class  LevelClauseContext : public antlr4::ParserRuleContext {
  public:
    LevelClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEVEL();
    std::vector<LevelInWeightListElementContext *> levelInWeightListElement();
    LevelInWeightListElementContext* levelInWeightListElement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NUMBER_();
    antlr4::tree::TerminalNode* NUMBER_(size_t i);
    antlr4::tree::TerminalNode *MINUS_();
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LevelClauseContext* levelClause();

  class  LevelInWeightListElementContext : public antlr4::ParserRuleContext {
  public:
    LevelInWeightListElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER_();
    DirectionContext *direction();
    antlr4::tree::TerminalNode *REVERSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LevelInWeightListElementContext* levelInWeightListElement();

  class  RegularFunctionContext : public antlr4::ParserRuleContext {
  public:
    RegularFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CompleteRegularFunctionContext *completeRegularFunction();
    ShorthandRegularFunctionContext *shorthandRegularFunction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RegularFunctionContext* regularFunction();

  class  ShorthandRegularFunctionContext : public antlr4::ParserRuleContext {
  public:
    ShorthandRegularFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CURRENT_DATE();
    antlr4::tree::TerminalNode *CURRENT_TIME();
    antlr4::tree::TerminalNode *LP_();
    antlr4::tree::TerminalNode *RP_();
    antlr4::tree::TerminalNode *NUMBER_();
    antlr4::tree::TerminalNode *CURRENT_TIMESTAMP();
    antlr4::tree::TerminalNode *LAST_DAY();
    antlr4::tree::TerminalNode *LOCALTIME();
    antlr4::tree::TerminalNode *LOCALTIMESTAMP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShorthandRegularFunctionContext* shorthandRegularFunction();

  class  CompleteRegularFunctionContext : public antlr4::ParserRuleContext {
  public:
    CompleteRegularFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RegularFunctionNameContext *regularFunctionName();
    antlr4::tree::TerminalNode *LP_();
    antlr4::tree::TerminalNode *RP_();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *ASTERISK_();
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompleteRegularFunctionContext* completeRegularFunction();

  class  RegularFunctionNameContext : public antlr4::ParserRuleContext {
  public:
    RegularFunctionNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *LOCALTIME();
    antlr4::tree::TerminalNode *LOCALTIMESTAMP();
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *INTERVAL();
    antlr4::tree::TerminalNode *MOD();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *RIGHT();
    antlr4::tree::TerminalNode *DATE();
    antlr4::tree::TerminalNode *DAY();
    antlr4::tree::TerminalNode *GEOMCOLLECTION();
    antlr4::tree::TerminalNode *GEOMETRYCOLLECTION();
    antlr4::tree::TerminalNode *LINESTRING();
    antlr4::tree::TerminalNode *MULTILINESTRING();
    antlr4::tree::TerminalNode *MULTIPOINT();
    antlr4::tree::TerminalNode *MULTIPOLYGON();
    antlr4::tree::TerminalNode *POINT();
    antlr4::tree::TerminalNode *POLYGON();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *TIMESTAMP();
    antlr4::tree::TerminalNode *TIMESTAMPADD();
    antlr4::tree::TerminalNode *TIMESTAMPDIFF();
    antlr4::tree::TerminalNode *CURRENT_TIMESTAMP();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RegularFunctionNameContext* regularFunctionName();

  class  MatchExpressionContext : public antlr4::ParserRuleContext {
  public:
    MatchExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MATCH();
    antlr4::tree::TerminalNode *AGAINST();
    std::vector<antlr4::tree::TerminalNode *> LP_();
    antlr4::tree::TerminalNode* LP_(size_t i);
    ExprContext *expr();
    std::vector<antlr4::tree::TerminalNode *> RP_();
    antlr4::tree::TerminalNode* RP_(size_t i);
    ColumnRefListContext *columnRefList();
    MatchSearchModifierContext *matchSearchModifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MatchExpressionContext* matchExpression();

  class  MatchSearchModifierContext : public antlr4::ParserRuleContext {
  public:
    MatchSearchModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *NATURAL();
    antlr4::tree::TerminalNode *LANGUAGE();
    antlr4::tree::TerminalNode *MODE();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *QUERY();
    antlr4::tree::TerminalNode *EXPANSION();
    antlr4::tree::TerminalNode *BOOLEAN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MatchSearchModifierContext* matchSearchModifier();

  class  CaseExpressionContext : public antlr4::ParserRuleContext {
  public:
    CaseExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *END();
    SimpleExprContext *simpleExpr();
    std::vector<CaseWhenContext *> caseWhen();
    CaseWhenContext* caseWhen(size_t i);
    CaseElseContext *caseElse();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CaseExpressionContext* caseExpression();

  class  DatetimeExprContext : public antlr4::ParserRuleContext {
  public:
    DatetimeExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DatetimeExprContext* datetimeExpr();

  class  BinaryLogFileIndexNumberContext : public antlr4::ParserRuleContext {
  public:
    BinaryLogFileIndexNumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BinaryLogFileIndexNumberContext* binaryLogFileIndexNumber();

  class  CaseWhenContext : public antlr4::ParserRuleContext {
  public:
    CaseWhenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *THEN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CaseWhenContext* caseWhen();

  class  CaseElseContext : public antlr4::ParserRuleContext {
  public:
    CaseElseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSE();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CaseElseContext* caseElse();

  class  IntervalExpressionContext : public antlr4::ParserRuleContext {
  public:
    IntervalExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTERVAL();
    IntervalValueContext *intervalValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntervalExpressionContext* intervalExpression();

  class  IntervalValueContext : public antlr4::ParserRuleContext {
  public:
    IntervalValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    IntervalUnitContext *intervalUnit();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntervalValueContext* intervalValue();

  class  IntervalUnitContext : public antlr4::ParserRuleContext {
  public:
    IntervalUnitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MICROSECOND();
    antlr4::tree::TerminalNode *SECOND();
    antlr4::tree::TerminalNode *MINUTE();
    antlr4::tree::TerminalNode *HOUR();
    antlr4::tree::TerminalNode *DAY();
    antlr4::tree::TerminalNode *WEEK();
    antlr4::tree::TerminalNode *MONTH();
    antlr4::tree::TerminalNode *QUARTER();
    antlr4::tree::TerminalNode *YEAR();
    antlr4::tree::TerminalNode *SECOND_MICROSECOND();
    antlr4::tree::TerminalNode *MINUTE_MICROSECOND();
    antlr4::tree::TerminalNode *MINUTE_SECOND();
    antlr4::tree::TerminalNode *HOUR_MICROSECOND();
    antlr4::tree::TerminalNode *HOUR_SECOND();
    antlr4::tree::TerminalNode *HOUR_MINUTE();
    antlr4::tree::TerminalNode *DAY_MICROSECOND();
    antlr4::tree::TerminalNode *DAY_SECOND();
    antlr4::tree::TerminalNode *DAY_MINUTE();
    antlr4::tree::TerminalNode *DAY_HOUR();
    antlr4::tree::TerminalNode *YEAR_MONTH();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntervalUnitContext* intervalUnit();

  class  OrderByClauseContext : public antlr4::ParserRuleContext {
  public:
    OrderByClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *BY();
    std::vector<OrderByItemContext *> orderByItem();
    OrderByItemContext* orderByItem(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OrderByClauseContext* orderByClause();

  class  OrderByItemContext : public antlr4::ParserRuleContext {
  public:
    OrderByItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberLiteralsContext *numberLiterals();
    ExprContext *expr();
    DirectionContext *direction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OrderByItemContext* orderByItem();

  class  DataTypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *dataTypeName = nullptr;;
    DataTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *TINYINT();
    antlr4::tree::TerminalNode *SMALLINT();
    antlr4::tree::TerminalNode *MIDDLEINT();
    antlr4::tree::TerminalNode *MEDIUMINT();
    antlr4::tree::TerminalNode *BIGINT();
    FieldLengthContext *fieldLength();
    FieldOptionsContext *fieldOptions();
    antlr4::tree::TerminalNode *REAL();
    antlr4::tree::TerminalNode *DOUBLE();
    PrecisionContext *precision();
    antlr4::tree::TerminalNode *PRECISION();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *NUMERIC();
    antlr4::tree::TerminalNode *FIXED();
    antlr4::tree::TerminalNode *BIT();
    antlr4::tree::TerminalNode *BOOL();
    antlr4::tree::TerminalNode *BOOLEAN();
    antlr4::tree::TerminalNode *CHAR();
    CharsetWithOptBinaryContext *charsetWithOptBinary();
    antlr4::tree::TerminalNode *NCHAR();
    antlr4::tree::TerminalNode *NATIONAL();
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *VARYING();
    antlr4::tree::TerminalNode *VARCHAR();
    antlr4::tree::TerminalNode *NVARCHAR();
    antlr4::tree::TerminalNode *VARBINARY();
    antlr4::tree::TerminalNode *YEAR();
    antlr4::tree::TerminalNode *DATE();
    antlr4::tree::TerminalNode *TIME();
    TypeDatetimePrecisionContext *typeDatetimePrecision();
    antlr4::tree::TerminalNode *TIMESTAMP();
    antlr4::tree::TerminalNode *DATETIME();
    antlr4::tree::TerminalNode *TINYBLOB();
    antlr4::tree::TerminalNode *BLOB();
    antlr4::tree::TerminalNode *MEDIUMBLOB();
    antlr4::tree::TerminalNode *LONGBLOB();
    antlr4::tree::TerminalNode *LONG();
    antlr4::tree::TerminalNode *TINYTEXT();
    antlr4::tree::TerminalNode *TEXT();
    antlr4::tree::TerminalNode *MEDIUMTEXT();
    antlr4::tree::TerminalNode *LONGTEXT();
    StringListContext *stringList();
    antlr4::tree::TerminalNode *ENUM();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *SERIAL();
    antlr4::tree::TerminalNode *JSON();
    antlr4::tree::TerminalNode *GEOMETRY();
    antlr4::tree::TerminalNode *GEOMETRYCOLLECTION();
    antlr4::tree::TerminalNode *POINT();
    antlr4::tree::TerminalNode *MULTIPOINT();
    antlr4::tree::TerminalNode *LINESTRING();
    antlr4::tree::TerminalNode *MULTILINESTRING();
    antlr4::tree::TerminalNode *POLYGON();
    antlr4::tree::TerminalNode *MULTIPOLYGON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DataTypeContext* dataType();

  class  StringListContext : public antlr4::ParserRuleContext {
  public:
    StringListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP_();
    std::vector<TextStringContext *> textString();
    TextStringContext* textString(size_t i);
    antlr4::tree::TerminalNode *RP_();
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringListContext* stringList();

  class  TextStringContext : public antlr4::ParserRuleContext {
  public:
    TextStringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    String_Context *string_();
    antlr4::tree::TerminalNode *HEX_DIGIT_();
    antlr4::tree::TerminalNode *BIT_NUM_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TextStringContext* textString();

  class  TextStringHashContext : public antlr4::ParserRuleContext {
  public:
    TextStringHashContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    String_Context *string_();
    antlr4::tree::TerminalNode *HEX_DIGIT_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TextStringHashContext* textStringHash();

  class  FieldOptionsContext : public antlr4::ParserRuleContext {
  public:
    FieldOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> UNSIGNED();
    antlr4::tree::TerminalNode* UNSIGNED(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SIGNED();
    antlr4::tree::TerminalNode* SIGNED(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ZEROFILL();
    antlr4::tree::TerminalNode* ZEROFILL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldOptionsContext* fieldOptions();

  class  PrecisionContext : public antlr4::ParserRuleContext {
  public:
    PrecisionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP_();
    std::vector<antlr4::tree::TerminalNode *> NUMBER_();
    antlr4::tree::TerminalNode* NUMBER_(size_t i);
    antlr4::tree::TerminalNode *COMMA_();
    antlr4::tree::TerminalNode *RP_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrecisionContext* precision();

  class  TypeDatetimePrecisionContext : public antlr4::ParserRuleContext {
  public:
    TypeDatetimePrecisionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP_();
    antlr4::tree::TerminalNode *NUMBER_();
    antlr4::tree::TerminalNode *RP_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeDatetimePrecisionContext* typeDatetimePrecision();

  class  CharsetWithOptBinaryContext : public antlr4::ParserRuleContext {
  public:
    CharsetWithOptBinaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AsciiContext *ascii();
    UnicodeContext *unicode();
    antlr4::tree::TerminalNode *BYTE();
    CharsetContext *charset();
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *BINARY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CharsetWithOptBinaryContext* charsetWithOptBinary();

  class  AsciiContext : public antlr4::ParserRuleContext {
  public:
    AsciiContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASCII();
    antlr4::tree::TerminalNode *BINARY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AsciiContext* ascii();

  class  UnicodeContext : public antlr4::ParserRuleContext {
  public:
    UnicodeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNICODE();
    antlr4::tree::TerminalNode *BINARY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnicodeContext* unicode();

  class  CharsetContext : public antlr4::ParserRuleContext {
  public:
    CharsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *CHAR();
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *CHARSET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CharsetContext* charset();

  class  DefaultCollationContext : public antlr4::ParserRuleContext {
  public:
    DefaultCollationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLLATE();
    CollationNameContext *collationName();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *EQ_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefaultCollationContext* defaultCollation();

  class  DefaultEncryptionContext : public antlr4::ParserRuleContext {
  public:
    DefaultEncryptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENCRYPTION();
    String_Context *string_();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *EQ_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefaultEncryptionContext* defaultEncryption();

  class  DefaultCharsetContext : public antlr4::ParserRuleContext {
  public:
    DefaultCharsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CharsetContext *charset();
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *EQ_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefaultCharsetContext* defaultCharset();

  class  SignedLiteralContext : public antlr4::ParserRuleContext {
  public:
    SignedLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralsContext *literals();
    NumberLiteralsContext *numberLiterals();
    antlr4::tree::TerminalNode *PLUS_();
    antlr4::tree::TerminalNode *MINUS_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignedLiteralContext* signedLiteral();

  class  NowContext : public antlr4::ParserRuleContext {
  public:
    NowContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CURRENT_TIMESTAMP();
    antlr4::tree::TerminalNode *LOCALTIME();
    antlr4::tree::TerminalNode *LOCALTIMESTAMP();
    antlr4::tree::TerminalNode *LP_();
    antlr4::tree::TerminalNode *RP_();
    antlr4::tree::TerminalNode *NUMBER_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NowContext* now();

  class  ColumnFormatContext : public antlr4::ParserRuleContext {
  public:
    ColumnFormatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FIXED();
    antlr4::tree::TerminalNode *DYNAMIC();
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnFormatContext* columnFormat();

  class  StorageMediaContext : public antlr4::ParserRuleContext {
  public:
    StorageMediaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DISK();
    antlr4::tree::TerminalNode *MEMORY();
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StorageMediaContext* storageMedia();

  class  DirectionContext : public antlr4::ParserRuleContext {
  public:
    DirectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *DESC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DirectionContext* direction();

  class  KeyOrIndexContext : public antlr4::ParserRuleContext {
  public:
    KeyOrIndexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *INDEX();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeyOrIndexContext* keyOrIndex();

  class  FieldLengthContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *length = nullptr;;
    FieldLengthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP_();
    antlr4::tree::TerminalNode *RP_();
    antlr4::tree::TerminalNode *NUMBER_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldLengthContext* fieldLength();

  class  CharacterSetContext : public antlr4::ParserRuleContext {
  public:
    CharacterSetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CharsetContext *charset();
    CharsetNameContext *charsetName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CharacterSetContext* characterSet();

  class  CollateClauseContext : public antlr4::ParserRuleContext {
  public:
    CollateClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLLATE();
    CollationNameContext *collationName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CollateClauseContext* collateClause();

  class  FieldOrVarSpecContext : public antlr4::ParserRuleContext {
  public:
    FieldOrVarSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP_();
    antlr4::tree::TerminalNode *RP_();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldOrVarSpecContext* fieldOrVarSpec();

  class  NotExistClauseContext : public antlr4::ParserRuleContext {
  public:
    NotExistClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *EXISTS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NotExistClauseContext* notExistClause();

  class  ExistClauseContext : public antlr4::ParserRuleContext {
  public:
    ExistClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExistClauseContext* existClause();

  class  ConnectionIdContext : public antlr4::ParserRuleContext {
  public:
    ConnectionIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConnectionIdContext* connectionId();

  class  LabelNameContext : public antlr4::ParserRuleContext {
  public:
    LabelNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LabelNameContext* labelName();

  class  CursorNameContext : public antlr4::ParserRuleContext {
  public:
    CursorNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CursorNameContext* cursorName();

  class  ConditionNameContext : public antlr4::ParserRuleContext {
  public:
    ConditionNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionNameContext* conditionName();

  class  UnionOptionContext : public antlr4::ParserRuleContext {
  public:
    UnionOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *DISTINCT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnionOptionContext* unionOption();

  class  NoWriteToBinLogContext : public antlr4::ParserRuleContext {
  public:
    NoWriteToBinLogContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *NO_WRITE_TO_BINLOG();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NoWriteToBinLogContext* noWriteToBinLog();

  class  ChannelOptionContext : public antlr4::ParserRuleContext {
  public:
    ChannelOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *CHANNEL();
    String_Context *string_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChannelOptionContext* channelOption();

  class  PreparedStatementContext : public antlr4::ParserRuleContext {
  public:
    PreparedStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PREPARE();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *FROM();
    StringLiteralsContext *stringLiterals();
    UserVariableContext *userVariable();
    ExecuteStatementContext *executeStatement();
    antlr4::tree::TerminalNode *DEALLOCATE();
    antlr4::tree::TerminalNode *DROP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PreparedStatementContext* preparedStatement();

  class  ExecuteStatementContext : public antlr4::ParserRuleContext {
  public:
    ExecuteStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXECUTE();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *USING();
    ExecuteVarListContext *executeVarList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExecuteStatementContext* executeStatement();

  class  ExecuteVarListContext : public antlr4::ParserRuleContext {
  public:
    ExecuteVarListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<UserVariableContext *> userVariable();
    UserVariableContext* userVariable(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_();
    antlr4::tree::TerminalNode* COMMA_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExecuteVarListContext* executeVarList();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool queryExpressionBodySempred(QueryExpressionBodyContext *_localctx, size_t predicateIndex);
  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);
  bool booleanPrimarySempred(BooleanPrimaryContext *_localctx, size_t predicateIndex);
  bool bitExprSempred(BitExprContext *_localctx, size_t predicateIndex);
  bool simpleExprSempred(SimpleExprContext *_localctx, size_t predicateIndex);

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


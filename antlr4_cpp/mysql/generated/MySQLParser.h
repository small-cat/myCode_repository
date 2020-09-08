
// Generated from MySQLParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  MySQLParser : public antlr4::Parser {
public:
  enum {
    SPACE = 1, SPEC_MYSQL_COMMENT = 2, COMMENT_INPUT = 3, LINE_COMMENT = 4, 
    ADD = 5, ALL = 6, ALTER = 7, ALWAYS = 8, ANALYZE = 9, AND = 10, AS = 11, 
    ASC = 12, BEFORE = 13, BETWEEN = 14, BOTH = 15, BY = 16, CALL = 17, 
    CASCADE = 18, CASE = 19, CAST = 20, CHANGE = 21, CHARACTER = 22, CHECK = 23, 
    COLLATE = 24, COLUMN = 25, CONDITION = 26, CONSTRAINT = 27, CONTINUE = 28, 
    CONVERT = 29, CREATE = 30, CROSS = 31, CURRENT_USER = 32, CURSOR = 33, 
    DATABASE = 34, DATABASES = 35, DECLARE = 36, DEFAULT = 37, DELAYED = 38, 
    DELETE = 39, DESC = 40, DESCRIBE = 41, DETERMINISTIC = 42, DISTINCT = 43, 
    DISTINCTROW = 44, DROP = 45, EACH = 46, ELSE = 47, ELSEIF = 48, ENCLOSED = 49, 
    ESCAPED = 50, EXISTS = 51, EXIT = 52, EXPLAIN = 53, FALSE = 54, FETCH = 55, 
    FOR = 56, FORCE = 57, FOREIGN = 58, FROM = 59, FULLTEXT = 60, GENERATED = 61, 
    GRANT = 62, GROUP = 63, HAVING = 64, HIGH_PRIORITY = 65, IF = 66, IGNORE = 67, 
    IN = 68, INDEX = 69, INFILE = 70, INNER = 71, INOUT = 72, INSERT = 73, 
    INTERVAL = 74, INTO = 75, IS = 76, ITERATE = 77, JOIN = 78, KEY = 79, 
    KEYS = 80, KILL = 81, LEADING = 82, LEAVE = 83, LEFT = 84, LIKE = 85, 
    LIMIT = 86, LINEAR = 87, LINES = 88, LOAD = 89, LOCK = 90, LOOP = 91, 
    LOW_PRIORITY = 92, MASTER_BIND = 93, MASTER_SSL_VERIFY_SERVER_CERT = 94, 
    MATCH = 95, MAXVALUE = 96, MODIFIES = 97, NATURAL = 98, NOT = 99, NO_WRITE_TO_BINLOG = 100, 
    NULL_LITERAL = 101, ON = 102, OPTIMIZE = 103, OPTION = 104, OPTIONALLY = 105, 
    OR = 106, ORDER = 107, OUT = 108, OUTER = 109, OUTFILE = 110, PARTITION = 111, 
    PRIMARY = 112, PROCEDURE = 113, PURGE = 114, RANGE = 115, READ = 116, 
    READS = 117, REFERENCES = 118, REGEXP = 119, RELEASE = 120, RENAME = 121, 
    REPEAT = 122, REPLACE = 123, REQUIRE = 124, RESTRICT = 125, RETURN = 126, 
    REVOKE = 127, RIGHT = 128, RLIKE = 129, SCHEMA = 130, SCHEMAS = 131, 
    SELECT = 132, SET = 133, SEPARATOR = 134, SHOW = 135, SPATIAL = 136, 
    SQL = 137, SQLEXCEPTION = 138, SQLSTATE = 139, SQLWARNING = 140, SQL_BIG_RESULT = 141, 
    SQL_CALC_FOUND_ROWS = 142, SQL_SMALL_RESULT = 143, SSL = 144, STARTING = 145, 
    STRAIGHT_JOIN = 146, TABLE = 147, TERMINATED = 148, THEN = 149, TO = 150, 
    TRAILING = 151, TRIGGER = 152, TRUE = 153, UNDO = 154, UNION = 155, 
    UNIQUE = 156, UNLOCK = 157, UNSIGNED = 158, UPDATE = 159, USAGE = 160, 
    USE = 161, USING = 162, VALUES = 163, WHEN = 164, WHERE = 165, WHILE = 166, 
    WITH = 167, WRITE = 168, XOR = 169, ZEROFILL = 170, TINYINT = 171, SMALLINT = 172, 
    MEDIUMINT = 173, INT = 174, INTEGER = 175, BIGINT = 176, REAL = 177, 
    DOUBLE = 178, PRECISION = 179, FLOAT = 180, DECIMAL = 181, DEC = 182, 
    NUMERIC = 183, DATE = 184, TIME = 185, TIMESTAMP = 186, DATETIME = 187, 
    YEAR = 188, CHAR = 189, VARCHAR = 190, NVARCHAR = 191, NATIONAL = 192, 
    BINARY = 193, VARBINARY = 194, TINYBLOB = 195, BLOB = 196, MEDIUMBLOB = 197, 
    LONGBLOB = 198, TINYTEXT = 199, TEXT = 200, MEDIUMTEXT = 201, LONGTEXT = 202, 
    ENUM = 203, VARYING = 204, SERIAL = 205, YEAR_MONTH = 206, DAY_HOUR = 207, 
    DAY_MINUTE = 208, DAY_SECOND = 209, HOUR_MINUTE = 210, HOUR_SECOND = 211, 
    MINUTE_SECOND = 212, SECOND_MICROSECOND = 213, MINUTE_MICROSECOND = 214, 
    HOUR_MICROSECOND = 215, DAY_MICROSECOND = 216, AVG = 217, BIT_AND = 218, 
    BIT_OR = 219, BIT_XOR = 220, COUNT = 221, GROUP_CONCAT = 222, MAX = 223, 
    MIN = 224, STD = 225, STDDEV = 226, STDDEV_POP = 227, STDDEV_SAMP = 228, 
    SUM = 229, VAR_POP = 230, VAR_SAMP = 231, VARIANCE = 232, CURRENT_DATE = 233, 
    CURRENT_TIME = 234, CURRENT_TIMESTAMP = 235, LOCALTIME = 236, CURDATE = 237, 
    CURTIME = 238, DATE_ADD = 239, DATE_SUB = 240, EXTRACT = 241, LOCALTIMESTAMP = 242, 
    NOW = 243, POSITION = 244, SUBSTR = 245, SUBSTRING = 246, SYSDATE = 247, 
    TRIM = 248, UTC_DATE = 249, UTC_TIME = 250, UTC_TIMESTAMP = 251, ACCOUNT = 252, 
    ACTION = 253, AFTER = 254, AGGREGATE = 255, ALGORITHM = 256, ANY = 257, 
    AT = 258, AUTHORS = 259, AUTOCOMMIT = 260, AUTOEXTEND_SIZE = 261, AUTO_INCREMENT = 262, 
    AVG_ROW_LENGTH = 263, BEGIN = 264, BINLOG = 265, BIT = 266, BLOCK = 267, 
    BOOL = 268, BOOLEAN = 269, BTREE = 270, CACHE = 271, CASCADED = 272, 
    CHAIN = 273, CHANGED = 274, CHANNEL = 275, CHECKSUM = 276, PAGE_CHECKSUM = 277, 
    CIPHER = 278, CLIENT = 279, CLOSE = 280, COALESCE = 281, CODE = 282, 
    COLUMNS = 283, COLUMN_FORMAT = 284, COMMENT = 285, COMMIT = 286, COMPACT = 287, 
    COMPLETION = 288, COMPRESSED = 289, COMPRESSION = 290, CONCURRENT = 291, 
    CONNECTION = 292, CONSISTENT = 293, CONTAINS = 294, CONTEXT = 295, CONTRIBUTORS = 296, 
    COPY = 297, CPU = 298, DATA = 299, DATAFILE = 300, DEALLOCATE = 301, 
    DEFAULT_AUTH = 302, DEFINER = 303, DELAY_KEY_WRITE = 304, DES_KEY_FILE = 305, 
    DIRECTORY = 306, DISABLE = 307, DISCARD = 308, DISK = 309, DO = 310, 
    DUMPFILE = 311, DUPLICATE = 312, DYNAMIC = 313, ENABLE = 314, ENCRYPTION = 315, 
    END = 316, ENDS = 317, ENGINE = 318, ENGINES = 319, ERROR = 320, ERRORS = 321, 
    ESCAPE = 322, EVEN = 323, EVENT = 324, EVENTS = 325, EVERY = 326, EXCHANGE = 327, 
    EXCLUSIVE = 328, EXPIRE = 329, EXPORT = 330, EXTENDED = 331, EXTENT_SIZE = 332, 
    FAST = 333, FAULTS = 334, FIELDS = 335, FILE_BLOCK_SIZE = 336, FILTER = 337, 
    FIRST = 338, FIXED = 339, FLUSH = 340, FOLLOWS = 341, FOUND = 342, FULL = 343, 
    FUNCTION = 344, GENERAL = 345, GLOBAL = 346, GRANTS = 347, GROUP_REPLICATION = 348, 
    HANDLER = 349, HASH = 350, HELP = 351, HOST = 352, HOSTS = 353, IDENTIFIED = 354, 
    IGNORE_SERVER_IDS = 355, IMPORT = 356, INDEXES = 357, INITIAL_SIZE = 358, 
    INPLACE = 359, INSERT_METHOD = 360, INSTALL = 361, INSTANCE = 362, INVISIBLE = 363, 
    INVOKER = 364, IO = 365, IO_THREAD = 366, IPC = 367, ISOLATION = 368, 
    ISSUER = 369, JSON = 370, KEY_BLOCK_SIZE = 371, LANGUAGE = 372, LAST = 373, 
    LEAVES = 374, LESS = 375, LEVEL = 376, LIST = 377, LOCAL = 378, LOGFILE = 379, 
    LOGS = 380, MASTER = 381, MASTER_AUTO_POSITION = 382, MASTER_CONNECT_RETRY = 383, 
    MASTER_DELAY = 384, MASTER_HEARTBEAT_PERIOD = 385, MASTER_HOST = 386, 
    MASTER_LOG_FILE = 387, MASTER_LOG_POS = 388, MASTER_PASSWORD = 389, 
    MASTER_PORT = 390, MASTER_RETRY_COUNT = 391, MASTER_SSL = 392, MASTER_SSL_CA = 393, 
    MASTER_SSL_CAPATH = 394, MASTER_SSL_CERT = 395, MASTER_SSL_CIPHER = 396, 
    MASTER_SSL_CRL = 397, MASTER_SSL_CRLPATH = 398, MASTER_SSL_KEY = 399, 
    MASTER_TLS_VERSION = 400, MASTER_USER = 401, MAX_CONNECTIONS_PER_HOUR = 402, 
    MAX_QUERIES_PER_HOUR = 403, MAX_ROWS = 404, MAX_SIZE = 405, MAX_UPDATES_PER_HOUR = 406, 
    MAX_USER_CONNECTIONS = 407, MEDIUM = 408, MERGE = 409, MID = 410, MIGRATE = 411, 
    MIN_ROWS = 412, MODE = 413, MODIFY = 414, MUTEX = 415, MYSQL = 416, 
    NAME = 417, NAMES = 418, NCHAR = 419, NEVER = 420, NEXT = 421, NO = 422, 
    NODEGROUP = 423, NONE = 424, OFFLINE = 425, OFFSET = 426, OJ = 427, 
    OLD_PASSWORD = 428, ONE = 429, ONLINE = 430, ONLY = 431, OPEN = 432, 
    OPTIMIZER_COSTS = 433, OPTIONS = 434, OWNER = 435, PACK_KEYS = 436, 
    PAGE = 437, PARSER = 438, PARTIAL = 439, PARTITIONING = 440, PARTITIONS = 441, 
    PASSWORD = 442, PHASE = 443, PLUGIN = 444, PLUGIN_DIR = 445, PLUGINS = 446, 
    PORT = 447, PRECEDES = 448, PREPARE = 449, PRESERVE = 450, PREV = 451, 
    PROCESSLIST = 452, PROFILE = 453, PROFILES = 454, PROXY = 455, QUERY = 456, 
    QUICK = 457, REBUILD = 458, RECOVER = 459, REDO_BUFFER_SIZE = 460, REDUNDANT = 461, 
    RELAY = 462, RELAY_LOG_FILE = 463, RELAY_LOG_POS = 464, RELAYLOG = 465, 
    REMOVE = 466, REORGANIZE = 467, REPAIR = 468, REPLICATE_DO_DB = 469, 
    REPLICATE_DO_TABLE = 470, REPLICATE_IGNORE_DB = 471, REPLICATE_IGNORE_TABLE = 472, 
    REPLICATE_REWRITE_DB = 473, REPLICATE_WILD_DO_TABLE = 474, REPLICATE_WILD_IGNORE_TABLE = 475, 
    REPLICATION = 476, RESET = 477, RESUME = 478, RETURNS = 479, ROLLBACK = 480, 
    ROLLUP = 481, ROTATE = 482, ROW = 483, ROWS = 484, ROW_FORMAT = 485, 
    SAVEPOINT = 486, SCHEDULE = 487, SECURITY = 488, SERVER = 489, SESSION = 490, 
    SHARE = 491, SHARED = 492, SIGNED = 493, SIMPLE = 494, SLAVE = 495, 
    SLOW = 496, SNAPSHOT = 497, SOCKET = 498, SOME = 499, SONAME = 500, 
    SOUNDS = 501, SOURCE = 502, SQL_AFTER_GTIDS = 503, SQL_AFTER_MTS_GAPS = 504, 
    SQL_BEFORE_GTIDS = 505, SQL_BUFFER_RESULT = 506, SQL_CACHE = 507, SQL_NO_CACHE = 508, 
    SQL_THREAD = 509, START = 510, STARTS = 511, STATS_AUTO_RECALC = 512, 
    STATS_PERSISTENT = 513, STATS_SAMPLE_PAGES = 514, STATUS = 515, STOP = 516, 
    STORAGE = 517, STORED = 518, STRING = 519, SUBJECT = 520, SUBPARTITION = 521, 
    SUBPARTITIONS = 522, SUSPEND = 523, SWAPS = 524, SWITCHES = 525, TABLESPACE = 526, 
    TEMPORARY = 527, TEMPTABLE = 528, THAN = 529, TRADITIONAL = 530, TRANSACTION = 531, 
    TRIGGERS = 532, TRUNCATE = 533, UNDEFINED = 534, UNDOFILE = 535, UNDO_BUFFER_SIZE = 536, 
    UNINSTALL = 537, UNKNOWN = 538, UNTIL = 539, UPGRADE = 540, USER = 541, 
    USE_FRM = 542, USER_RESOURCES = 543, VALIDATION = 544, VALUE = 545, 
    VARIABLES = 546, VIEW = 547, VIRTUAL = 548, VISIBLE = 549, WAIT = 550, 
    WARNINGS = 551, WITHOUT = 552, WORK = 553, WRAPPER = 554, X509 = 555, 
    XA = 556, XML = 557, EUR = 558, USA = 559, JIS = 560, ISO = 561, INTERNAL = 562, 
    QUARTER = 563, MONTH = 564, DAY = 565, HOUR = 566, MINUTE = 567, WEEK = 568, 
    SECOND = 569, MICROSECOND = 570, TABLES = 571, ROUTINE = 572, EXECUTE = 573, 
    FILE = 574, PROCESS = 575, RELOAD = 576, SHUTDOWN = 577, SUPER = 578, 
    PRIVILEGES = 579, SESSION_VARIABLES_ADMIN = 580, ARMSCII8 = 581, ASCII = 582, 
    BIG5 = 583, CP1250 = 584, CP1251 = 585, CP1256 = 586, CP1257 = 587, 
    CP850 = 588, CP852 = 589, CP866 = 590, CP932 = 591, DEC8 = 592, EUCJPMS = 593, 
    EUCKR = 594, GB2312 = 595, GBK = 596, GEOSTD8 = 597, GREEK = 598, HEBREW = 599, 
    HP8 = 600, KEYBCS2 = 601, KOI8R = 602, KOI8U = 603, LATIN1 = 604, LATIN2 = 605, 
    LATIN5 = 606, LATIN7 = 607, MACCE = 608, MACROMAN = 609, SJIS = 610, 
    SWE7 = 611, TIS620 = 612, UCS2 = 613, UJIS = 614, UTF16 = 615, UTF16LE = 616, 
    UTF32 = 617, UTF8 = 618, UTF8MB3 = 619, UTF8MB4 = 620, ARCHIVE = 621, 
    BLACKHOLE = 622, CSV = 623, FEDERATED = 624, INNODB = 625, MEMORY = 626, 
    MRG_MYISAM = 627, MYISAM = 628, NDB = 629, NDBCLUSTER = 630, PERFORMANCE_SCHEMA = 631, 
    TOKUDB = 632, REPEATABLE = 633, COMMITTED = 634, UNCOMMITTED = 635, 
    SERIALIZABLE = 636, GEOMETRYCOLLECTION = 637, GEOMCOLLECTION = 638, 
    GEOMETRY = 639, LINESTRING = 640, MULTILINESTRING = 641, MULTIPOINT = 642, 
    MULTIPOLYGON = 643, POINT = 644, POLYGON = 645, ABS = 646, ACOS = 647, 
    ADDDATE = 648, ADDTIME = 649, AES_DECRYPT = 650, AES_ENCRYPT = 651, 
    AREA = 652, ASBINARY = 653, ASIN = 654, ASTEXT = 655, ASWKB = 656, ASWKT = 657, 
    ASYMMETRIC_DECRYPT = 658, ASYMMETRIC_DERIVE = 659, ASYMMETRIC_ENCRYPT = 660, 
    ASYMMETRIC_SIGN = 661, ASYMMETRIC_VERIFY = 662, ATAN = 663, ATAN2 = 664, 
    BENCHMARK = 665, BIN = 666, BIT_COUNT = 667, BIT_LENGTH = 668, BUFFER = 669, 
    CEIL = 670, CEILING = 671, CENTROID = 672, CHARACTER_LENGTH = 673, CHARSET = 674, 
    CHAR_LENGTH = 675, COERCIBILITY = 676, COLLATION = 677, COMPRESS = 678, 
    CONCAT = 679, CONCAT_WS = 680, CONNECTION_ID = 681, CONV = 682, CONVERT_TZ = 683, 
    COS = 684, COT = 685, CRC32 = 686, CREATE_ASYMMETRIC_PRIV_KEY = 687, 
    CREATE_ASYMMETRIC_PUB_KEY = 688, CREATE_DH_PARAMETERS = 689, CREATE_DIGEST = 690, 
    CROSSES = 691, DATEDIFF = 692, DATE_FORMAT = 693, DAYNAME = 694, DAYOFMONTH = 695, 
    DAYOFWEEK = 696, DAYOFYEAR = 697, DECODE = 698, DEGREES = 699, DES_DECRYPT = 700, 
    DES_ENCRYPT = 701, DIMENSION = 702, DISJOINT = 703, ELT = 704, ENCODE = 705, 
    ENCRYPT = 706, ENDPOINT = 707, ENVELOPE = 708, EQUALS = 709, EXP = 710, 
    EXPORT_SET = 711, EXTERIORRING = 712, EXTRACTVALUE = 713, FIELD = 714, 
    FIND_IN_SET = 715, FLOOR = 716, FORMAT = 717, FOUND_ROWS = 718, FROM_BASE64 = 719, 
    FROM_DAYS = 720, FROM_UNIXTIME = 721, GEOMCOLLFROMTEXT = 722, GEOMCOLLFROMWKB = 723, 
    GEOMETRYCOLLECTIONFROMTEXT = 724, GEOMETRYCOLLECTIONFROMWKB = 725, GEOMETRYFROMTEXT = 726, 
    GEOMETRYFROMWKB = 727, GEOMETRYN = 728, GEOMETRYTYPE = 729, GEOMFROMTEXT = 730, 
    GEOMFROMWKB = 731, GET_FORMAT = 732, GET_LOCK = 733, GLENGTH = 734, 
    GREATEST = 735, GTID_SUBSET = 736, GTID_SUBTRACT = 737, HEX = 738, IFNULL = 739, 
    INET6_ATON = 740, INET6_NTOA = 741, INET_ATON = 742, INET_NTOA = 743, 
    INSTR = 744, INTERIORRINGN = 745, INTERSECTS = 746, ISCLOSED = 747, 
    ISEMPTY = 748, ISNULL = 749, ISSIMPLE = 750, IS_FREE_LOCK = 751, IS_IPV4 = 752, 
    IS_IPV4_COMPAT = 753, IS_IPV4_MAPPED = 754, IS_IPV6 = 755, IS_USED_LOCK = 756, 
    LAST_INSERT_ID = 757, LCASE = 758, LEAST = 759, LENGTH = 760, LINEFROMTEXT = 761, 
    LINEFROMWKB = 762, LINESTRINGFROMTEXT = 763, LINESTRINGFROMWKB = 764, 
    LN = 765, LOAD_FILE = 766, LOCATE = 767, LOG = 768, LOG10 = 769, LOG2 = 770, 
    LOWER = 771, LPAD = 772, LTRIM = 773, MAKEDATE = 774, MAKETIME = 775, 
    MAKE_SET = 776, MASTER_POS_WAIT = 777, MBRCONTAINS = 778, MBRDISJOINT = 779, 
    MBREQUAL = 780, MBRINTERSECTS = 781, MBROVERLAPS = 782, MBRTOUCHES = 783, 
    MBRWITHIN = 784, MD5 = 785, MLINEFROMTEXT = 786, MLINEFROMWKB = 787, 
    MONTHNAME = 788, MPOINTFROMTEXT = 789, MPOINTFROMWKB = 790, MPOLYFROMTEXT = 791, 
    MPOLYFROMWKB = 792, MULTILINESTRINGFROMTEXT = 793, MULTILINESTRINGFROMWKB = 794, 
    MULTIPOINTFROMTEXT = 795, MULTIPOINTFROMWKB = 796, MULTIPOLYGONFROMTEXT = 797, 
    MULTIPOLYGONFROMWKB = 798, NAME_CONST = 799, NULLIF = 800, NUMGEOMETRIES = 801, 
    NUMINTERIORRINGS = 802, NUMPOINTS = 803, OCT = 804, OCTET_LENGTH = 805, 
    ORD = 806, OVERLAPS = 807, PERIOD_ADD = 808, PERIOD_DIFF = 809, PI = 810, 
    POINTFROMTEXT = 811, POINTFROMWKB = 812, POINTN = 813, POLYFROMTEXT = 814, 
    POLYFROMWKB = 815, POLYGONFROMTEXT = 816, POLYGONFROMWKB = 817, POW = 818, 
    POWER = 819, QUOTE = 820, RADIANS = 821, RAND = 822, RANDOM_BYTES = 823, 
    RELEASE_LOCK = 824, REVERSE = 825, ROUND = 826, ROW_COUNT = 827, RPAD = 828, 
    RTRIM = 829, SEC_TO_TIME = 830, SESSION_USER = 831, SHA = 832, SHA1 = 833, 
    SHA2 = 834, SIGN = 835, SIN = 836, SLEEP = 837, SOUNDEX = 838, SQL_THREAD_WAIT_AFTER_GTIDS = 839, 
    SQRT = 840, SRID = 841, STARTPOINT = 842, STRCMP = 843, STR_TO_DATE = 844, 
    ST_AREA = 845, ST_ASBINARY = 846, ST_ASTEXT = 847, ST_ASWKB = 848, ST_ASWKT = 849, 
    ST_BUFFER = 850, ST_CENTROID = 851, ST_CONTAINS = 852, ST_CROSSES = 853, 
    ST_DIFFERENCE = 854, ST_DIMENSION = 855, ST_DISJOINT = 856, ST_DISTANCE = 857, 
    ST_ENDPOINT = 858, ST_ENVELOPE = 859, ST_EQUALS = 860, ST_EXTERIORRING = 861, 
    ST_GEOMCOLLFROMTEXT = 862, ST_GEOMCOLLFROMTXT = 863, ST_GEOMCOLLFROMWKB = 864, 
    ST_GEOMETRYCOLLECTIONFROMTEXT = 865, ST_GEOMETRYCOLLECTIONFROMWKB = 866, 
    ST_GEOMETRYFROMTEXT = 867, ST_GEOMETRYFROMWKB = 868, ST_GEOMETRYN = 869, 
    ST_GEOMETRYTYPE = 870, ST_GEOMFROMTEXT = 871, ST_GEOMFROMWKB = 872, 
    ST_INTERIORRINGN = 873, ST_INTERSECTION = 874, ST_INTERSECTS = 875, 
    ST_ISCLOSED = 876, ST_ISEMPTY = 877, ST_ISSIMPLE = 878, ST_LINEFROMTEXT = 879, 
    ST_LINEFROMWKB = 880, ST_LINESTRINGFROMTEXT = 881, ST_LINESTRINGFROMWKB = 882, 
    ST_NUMGEOMETRIES = 883, ST_NUMINTERIORRING = 884, ST_NUMINTERIORRINGS = 885, 
    ST_NUMPOINTS = 886, ST_OVERLAPS = 887, ST_POINTFROMTEXT = 888, ST_POINTFROMWKB = 889, 
    ST_POINTN = 890, ST_POLYFROMTEXT = 891, ST_POLYFROMWKB = 892, ST_POLYGONFROMTEXT = 893, 
    ST_POLYGONFROMWKB = 894, ST_SRID = 895, ST_STARTPOINT = 896, ST_SYMDIFFERENCE = 897, 
    ST_TOUCHES = 898, ST_UNION = 899, ST_WITHIN = 900, ST_X = 901, ST_Y = 902, 
    SUBDATE = 903, SUBSTRING_INDEX = 904, SUBTIME = 905, SYSTEM_USER = 906, 
    TAN = 907, TIMEDIFF = 908, TIMESTAMPADD = 909, TIMESTAMPDIFF = 910, 
    TIME_FORMAT = 911, TIME_TO_SEC = 912, TOUCHES = 913, TO_BASE64 = 914, 
    TO_DAYS = 915, TO_SECONDS = 916, UCASE = 917, UNCOMPRESS = 918, UNCOMPRESSED_LENGTH = 919, 
    UNHEX = 920, UNIX_TIMESTAMP = 921, UPDATEXML = 922, UPPER = 923, UUID = 924, 
    UUID_SHORT = 925, VALIDATE_PASSWORD_STRENGTH = 926, VERSION = 927, WAIT_UNTIL_SQL_THREAD_AFTER_GTIDS = 928, 
    WEEKDAY = 929, WEEKOFYEAR = 930, WEIGHT_STRING = 931, WITHIN = 932, 
    YEARWEEK = 933, Y_FUNCTION = 934, X_FUNCTION = 935, VAR_ASSIGN = 936, 
    PLUS_ASSIGN = 937, MINUS_ASSIGN = 938, MULT_ASSIGN = 939, DIV_ASSIGN = 940, 
    MOD_ASSIGN = 941, AND_ASSIGN = 942, XOR_ASSIGN = 943, OR_ASSIGN = 944, 
    STAR = 945, DIVIDE = 946, MODULE = 947, PLUS = 948, MINUSMINUS = 949, 
    MINUS = 950, DIV = 951, MOD = 952, EQUAL_SYMBOL = 953, GREATER_SYMBOL = 954, 
    LESS_SYMBOL = 955, EXCLAMATION_SYMBOL = 956, BIT_NOT_OP = 957, BIT_OR_OP = 958, 
    BIT_AND_OP = 959, BIT_XOR_OP = 960, DOT = 961, LR_BRACKET = 962, RR_BRACKET = 963, 
    COMMA = 964, SEMI = 965, AT_SIGN = 966, ZERO_DECIMAL = 967, ONE_DECIMAL = 968, 
    TWO_DECIMAL = 969, SINGLE_QUOTE_SYMB = 970, DOUBLE_QUOTE_SYMB = 971, 
    REVERSE_QUOTE_SYMB = 972, COLON_SYMB = 973, CHARSET_REVERSE_QOUTE_STRING = 974, 
    FILESIZE_LITERAL = 975, START_NATIONAL_STRING_LITERAL = 976, STRING_LITERAL = 977, 
    DECIMAL_LITERAL = 978, HEXADECIMAL_LITERAL = 979, REAL_LITERAL = 980, 
    NULL_SPEC_LITERAL = 981, BIT_STRING = 982, STRING_CHARSET_NAME = 983, 
    PLACEHOLDER_VALUE = 984, ID = 985, REVERSE_QUOTE_ID = 986, STRING_USER_NAME = 987, 
    LOCAL_ID = 988, GLOBAL_ID = 989, ERROR_RECONGNIGION = 990
  };

  enum {
    RuleRoot = 0, RuleSqlStatements = 1, RuleSqlStatement = 2, RuleEmptyStatement = 3, 
    RuleDdlStatement = 4, RuleDmlStatement = 5, RuleTransactionStatement = 6, 
    RuleReplicationStatement = 7, RulePreparedStatement = 8, RuleCompoundStatement = 9, 
    RuleAdministrationStatement = 10, RuleUtilityStatement = 11, RuleCreateDatabase = 12, 
    RuleCreateEvent = 13, RuleCreateIndex = 14, RuleCreateLogfileGroup = 15, 
    RuleCreateProcedure = 16, RuleCreateFunction = 17, RuleCreateServer = 18, 
    RuleCreateTable = 19, RuleCreateTablespaceInnodb = 20, RuleCreateTablespaceNdb = 21, 
    RuleCreateTrigger = 22, RuleCreateView = 23, RuleCreateDatabaseOption = 24, 
    RuleOwnerStatement = 25, RuleScheduleExpression = 26, RuleTimestampValue = 27, 
    RuleIntervalExpr = 28, RuleIntervalType = 29, RuleEnableType = 30, RuleIndexType = 31, 
    RuleIndexOption = 32, RuleProcedureParameter = 33, RuleFunctionParameter = 34, 
    RuleRoutineOption = 35, RuleServerOption = 36, RuleCreateDefinitions = 37, 
    RuleCreateDefinition = 38, RuleColumnDefinition = 39, RuleColumnConstraint = 40, 
    RuleTableConstraint = 41, RuleReferenceDefinition = 42, RuleReferenceAction = 43, 
    RuleReferenceControlType = 44, RuleIndexColumnDefinition = 45, RuleTableOption = 46, 
    RuleTablespaceStorage = 47, RulePartitionDefinitions = 48, RulePartitionFunctionDefinition = 49, 
    RuleSubpartitionFunctionDefinition = 50, RulePartitionDefinition = 51, 
    RulePartitionDefinerAtom = 52, RulePartitionDefinerVector = 53, RuleSubpartitionDefinition = 54, 
    RulePartitionOption = 55, RuleAlterDatabase = 56, RuleAlterEvent = 57, 
    RuleAlterFunction = 58, RuleAlterInstance = 59, RuleAlterLogfileGroup = 60, 
    RuleAlterProcedure = 61, RuleAlterServer = 62, RuleAlterTable = 63, 
    RuleAlterTablespace = 64, RuleAlterView = 65, RuleAlterSpecification = 66, 
    RuleDropDatabase = 67, RuleDropEvent = 68, RuleDropIndex = 69, RuleDropLogfileGroup = 70, 
    RuleDropProcedure = 71, RuleDropFunction = 72, RuleDropServer = 73, 
    RuleDropTable = 74, RuleDropTablespace = 75, RuleDropTrigger = 76, RuleDropView = 77, 
    RuleRenameTable = 78, RuleRenameTableClause = 79, RuleTruncateTable = 80, 
    RuleCallStatement = 81, RuleDeleteStatement = 82, RuleDoStatement = 83, 
    RuleHandlerStatement = 84, RuleInsertStatement = 85, RuleLoadDataStatement = 86, 
    RuleLoadXmlStatement = 87, RuleReplaceStatement = 88, RuleSelectStatement = 89, 
    RuleUpdateStatement = 90, RuleInsertStatementValue = 91, RuleUpdatedElement = 92, 
    RuleAssignmentField = 93, RuleLockClause = 94, RuleSingleDeleteStatement = 95, 
    RuleMultipleDeleteStatement = 96, RuleDelete_stmt_table = 97, RuleHandlerOpenStatement = 98, 
    RuleHandlerReadIndexStatement = 99, RuleHandlerReadStatement = 100, 
    RuleHandlerCloseStatement = 101, RuleSingleUpdateStatement = 102, RuleMultipleUpdateStatement = 103, 
    RuleOrderByClause = 104, RuleOrderByExpression = 105, RuleTableSources = 106, 
    RuleTableSource = 107, RuleTableSourceItem = 108, RuleIndexHint = 109, 
    RuleIndexHintType = 110, RuleJoinPart = 111, RuleJoinPartOnClause = 112, 
    RuleJoinPartUsingClause = 113, RuleQueryExpression = 114, RuleQueryExpressionNointo = 115, 
    RuleQuerySpecification = 116, RuleQuerySpecificationNointo = 117, RuleUnionParenthesis = 118, 
    RuleUnionStatement = 119, RuleSelectSpec = 120, RuleSelectElements = 121, 
    RuleSelectElement = 122, RuleSelectIntoExpression = 123, RuleSelectFieldsInto = 124, 
    RuleSelectLinesInto = 125, RuleFromClause = 126, RuleWhereClause = 127, 
    RuleGroupClause = 128, RuleHavingClause = 129, RuleGroupByItem = 130, 
    RuleLimitClause = 131, RuleLimitClauseAtom = 132, RuleStartTransaction = 133, 
    RuleBeginWork = 134, RuleCommitWork = 135, RuleRollbackWork = 136, RuleSavepointStatement = 137, 
    RuleRollbackStatement = 138, RuleReleaseStatement = 139, RuleLockTables = 140, 
    RuleUnlockTables = 141, RuleSetAutocommitStatement = 142, RuleSetTransactionStatement = 143, 
    RuleTransactionMode = 144, RuleLockTableElement = 145, RuleLockAction = 146, 
    RuleTransactionOption = 147, RuleTransactionLevel = 148, RuleChangeMaster = 149, 
    RuleChangeReplicationFilter = 150, RulePurgeBinaryLogs = 151, RuleResetMaster = 152, 
    RuleResetSlave = 153, RuleStartSlave = 154, RuleStopSlave = 155, RuleStartGroupReplication = 156, 
    RuleStopGroupReplication = 157, RuleMasterOption = 158, RuleStringMasterOption = 159, 
    RuleDecimalMasterOption = 160, RuleBoolMasterOption = 161, RuleChannelOption = 162, 
    RuleReplicationFilter = 163, RuleTablePair = 164, RuleThreadType = 165, 
    RuleUntilOption = 166, RuleConnectionOption = 167, RuleGtuidSet = 168, 
    RuleXaStartTransaction = 169, RuleXaEndTransaction = 170, RuleXaPrepareStatement = 171, 
    RuleXaCommitWork = 172, RuleXaRollbackWork = 173, RuleXaRecoverWork = 174, 
    RulePrepareStatement = 175, RuleExecuteStatement = 176, RuleDeallocatePrepare = 177, 
    RuleRoutineBody = 178, RuleBlockStatement = 179, RuleCaseStatement = 180, 
    RuleIfStatement = 181, RuleIterateStatement = 182, RuleLeaveStatement = 183, 
    RuleLoopStatement = 184, RuleRepeatStatement = 185, RuleReturnStatement = 186, 
    RuleWhileStatement = 187, RuleCursorStatement = 188, RuleDeclareVariable = 189, 
    RuleDeclareCondition = 190, RuleDeclareCursor = 191, RuleDeclareHandler = 192, 
    RuleHandlerConditionValue = 193, RuleProcedureSqlStatement = 194, RuleCaseAlternative = 195, 
    RuleElifAlternative = 196, RuleAlterUser = 197, RuleCreateUser = 198, 
    RuleDropUser = 199, RuleGrantStatement = 200, RuleGrantProxy = 201, 
    RuleRenameUser = 202, RuleRevokeStatement = 203, RuleRevokeProxy = 204, 
    RuleSetPasswordStatement = 205, RuleUserSpecification = 206, RuleUserAuthOption = 207, 
    RuleTlsOption = 208, RuleUserResourceOption = 209, RuleUserPasswordOption = 210, 
    RuleUserLockOption = 211, RulePrivelegeClause = 212, RulePrivilege = 213, 
    RulePrivilegeLevel = 214, RuleRenameUserClause = 215, RuleAnalyzeTable = 216, 
    RuleCheckTable = 217, RuleChecksumTable = 218, RuleOptimizeTable = 219, 
    RuleRepairTable = 220, RuleCheckTableOption = 221, RuleCreateUdfunction = 222, 
    RuleInstallPlugin = 223, RuleUninstallPlugin = 224, RuleSetStatement = 225, 
    RuleShowStatement = 226, RuleVariableClause = 227, RuleShowCommonEntity = 228, 
    RuleShowFilter = 229, RuleShowGlobalInfoClause = 230, RuleShowSchemaEntity = 231, 
    RuleShowProfileType = 232, RuleBinlogStatement = 233, RuleCacheIndexStatement = 234, 
    RuleFlushStatement = 235, RuleKillStatement = 236, RuleLoadIndexIntoCache = 237, 
    RuleResetStatement = 238, RuleShutdownStatement = 239, RuleTableIndexes = 240, 
    RuleFlushOption = 241, RuleFlushTableOption = 242, RuleLoadedTableIndexes = 243, 
    RuleSimpleDescribeStatement = 244, RuleFullDescribeStatement = 245, 
    RuleHelpStatement = 246, RuleUseStatement = 247, RuleDescribeObjectClause = 248, 
    RuleFullId = 249, RuleTableName = 250, RuleFullColumnName = 251, RuleIndexColumnName = 252, 
    RuleUserName = 253, RuleMysqlVariable = 254, RuleCharsetName = 255, 
    RuleCollationName = 256, RuleEngineName = 257, RuleUuidSet = 258, RuleXid = 259, 
    RuleXuidStringId = 260, RuleAuthPlugin = 261, RuleUid = 262, RuleSimpleId = 263, 
    RuleDecimalLiteral = 264, RuleFileSizeLiteral = 265, RuleStringLiteral = 266, 
    RuleBooleanLiteral = 267, RuleHexadecimalLiteral = 268, RuleNullNotnull = 269, 
    RuleConstant = 270, RuleDataType = 271, RuleCollectionOptions = 272, 
    RuleConvertedDataType = 273, RuleLengthOneDimension = 274, RuleLengthTwoDimension = 275, 
    RuleLengthTwoOptionalDimension = 276, RuleUidList = 277, RuleTables = 278, 
    RuleIndexColumnNames = 279, RuleExpressions = 280, RuleExpressionsWithDefaults = 281, 
    RuleConstants = 282, RuleSimpleStrings = 283, RuleUserVariables = 284, 
    RuleDefaultValue = 285, RuleCurrentTimestamp = 286, RuleExpressionOrDefault = 287, 
    RuleIfExists = 288, RuleIfNotExists = 289, RuleFunctionCall = 290, RuleSpecificFunction = 291, 
    RuleCaseFuncAlternative = 292, RuleLevelsInWeightString = 293, RuleLevelInWeightListElement = 294, 
    RuleAggregateWindowedFunction = 295, RuleScalarFunctionName = 296, RulePasswordFunctionClause = 297, 
    RuleFunctionArgs = 298, RuleFunctionArg = 299, RuleExpression = 300, 
    RulePredicate = 301, RuleExpressionAtom = 302, RuleUnaryOperator = 303, 
    RuleComparisonOperator = 304, RuleLogicalOperator = 305, RuleBitOperator = 306, 
    RuleMathOperator = 307, RuleCharsetNameBase = 308, RuleTransactionLevelBase = 309, 
    RulePrivilegesBase = 310, RuleIntervalTypeBase = 311, RuleDataTypeBase = 312, 
    RuleKeywordsCanBeId = 313, RuleFunctionNameBase = 314
  };

  MySQLParser(antlr4::TokenStream *input);
  ~MySQLParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class RootContext;
  class SqlStatementsContext;
  class SqlStatementContext;
  class EmptyStatementContext;
  class DdlStatementContext;
  class DmlStatementContext;
  class TransactionStatementContext;
  class ReplicationStatementContext;
  class PreparedStatementContext;
  class CompoundStatementContext;
  class AdministrationStatementContext;
  class UtilityStatementContext;
  class CreateDatabaseContext;
  class CreateEventContext;
  class CreateIndexContext;
  class CreateLogfileGroupContext;
  class CreateProcedureContext;
  class CreateFunctionContext;
  class CreateServerContext;
  class CreateTableContext;
  class CreateTablespaceInnodbContext;
  class CreateTablespaceNdbContext;
  class CreateTriggerContext;
  class CreateViewContext;
  class CreateDatabaseOptionContext;
  class OwnerStatementContext;
  class ScheduleExpressionContext;
  class TimestampValueContext;
  class IntervalExprContext;
  class IntervalTypeContext;
  class EnableTypeContext;
  class IndexTypeContext;
  class IndexOptionContext;
  class ProcedureParameterContext;
  class FunctionParameterContext;
  class RoutineOptionContext;
  class ServerOptionContext;
  class CreateDefinitionsContext;
  class CreateDefinitionContext;
  class ColumnDefinitionContext;
  class ColumnConstraintContext;
  class TableConstraintContext;
  class ReferenceDefinitionContext;
  class ReferenceActionContext;
  class ReferenceControlTypeContext;
  class IndexColumnDefinitionContext;
  class TableOptionContext;
  class TablespaceStorageContext;
  class PartitionDefinitionsContext;
  class PartitionFunctionDefinitionContext;
  class SubpartitionFunctionDefinitionContext;
  class PartitionDefinitionContext;
  class PartitionDefinerAtomContext;
  class PartitionDefinerVectorContext;
  class SubpartitionDefinitionContext;
  class PartitionOptionContext;
  class AlterDatabaseContext;
  class AlterEventContext;
  class AlterFunctionContext;
  class AlterInstanceContext;
  class AlterLogfileGroupContext;
  class AlterProcedureContext;
  class AlterServerContext;
  class AlterTableContext;
  class AlterTablespaceContext;
  class AlterViewContext;
  class AlterSpecificationContext;
  class DropDatabaseContext;
  class DropEventContext;
  class DropIndexContext;
  class DropLogfileGroupContext;
  class DropProcedureContext;
  class DropFunctionContext;
  class DropServerContext;
  class DropTableContext;
  class DropTablespaceContext;
  class DropTriggerContext;
  class DropViewContext;
  class RenameTableContext;
  class RenameTableClauseContext;
  class TruncateTableContext;
  class CallStatementContext;
  class DeleteStatementContext;
  class DoStatementContext;
  class HandlerStatementContext;
  class InsertStatementContext;
  class LoadDataStatementContext;
  class LoadXmlStatementContext;
  class ReplaceStatementContext;
  class SelectStatementContext;
  class UpdateStatementContext;
  class InsertStatementValueContext;
  class UpdatedElementContext;
  class AssignmentFieldContext;
  class LockClauseContext;
  class SingleDeleteStatementContext;
  class MultipleDeleteStatementContext;
  class Delete_stmt_tableContext;
  class HandlerOpenStatementContext;
  class HandlerReadIndexStatementContext;
  class HandlerReadStatementContext;
  class HandlerCloseStatementContext;
  class SingleUpdateStatementContext;
  class MultipleUpdateStatementContext;
  class OrderByClauseContext;
  class OrderByExpressionContext;
  class TableSourcesContext;
  class TableSourceContext;
  class TableSourceItemContext;
  class IndexHintContext;
  class IndexHintTypeContext;
  class JoinPartContext;
  class JoinPartOnClauseContext;
  class JoinPartUsingClauseContext;
  class QueryExpressionContext;
  class QueryExpressionNointoContext;
  class QuerySpecificationContext;
  class QuerySpecificationNointoContext;
  class UnionParenthesisContext;
  class UnionStatementContext;
  class SelectSpecContext;
  class SelectElementsContext;
  class SelectElementContext;
  class SelectIntoExpressionContext;
  class SelectFieldsIntoContext;
  class SelectLinesIntoContext;
  class FromClauseContext;
  class WhereClauseContext;
  class GroupClauseContext;
  class HavingClauseContext;
  class GroupByItemContext;
  class LimitClauseContext;
  class LimitClauseAtomContext;
  class StartTransactionContext;
  class BeginWorkContext;
  class CommitWorkContext;
  class RollbackWorkContext;
  class SavepointStatementContext;
  class RollbackStatementContext;
  class ReleaseStatementContext;
  class LockTablesContext;
  class UnlockTablesContext;
  class SetAutocommitStatementContext;
  class SetTransactionStatementContext;
  class TransactionModeContext;
  class LockTableElementContext;
  class LockActionContext;
  class TransactionOptionContext;
  class TransactionLevelContext;
  class ChangeMasterContext;
  class ChangeReplicationFilterContext;
  class PurgeBinaryLogsContext;
  class ResetMasterContext;
  class ResetSlaveContext;
  class StartSlaveContext;
  class StopSlaveContext;
  class StartGroupReplicationContext;
  class StopGroupReplicationContext;
  class MasterOptionContext;
  class StringMasterOptionContext;
  class DecimalMasterOptionContext;
  class BoolMasterOptionContext;
  class ChannelOptionContext;
  class ReplicationFilterContext;
  class TablePairContext;
  class ThreadTypeContext;
  class UntilOptionContext;
  class ConnectionOptionContext;
  class GtuidSetContext;
  class XaStartTransactionContext;
  class XaEndTransactionContext;
  class XaPrepareStatementContext;
  class XaCommitWorkContext;
  class XaRollbackWorkContext;
  class XaRecoverWorkContext;
  class PrepareStatementContext;
  class ExecuteStatementContext;
  class DeallocatePrepareContext;
  class RoutineBodyContext;
  class BlockStatementContext;
  class CaseStatementContext;
  class IfStatementContext;
  class IterateStatementContext;
  class LeaveStatementContext;
  class LoopStatementContext;
  class RepeatStatementContext;
  class ReturnStatementContext;
  class WhileStatementContext;
  class CursorStatementContext;
  class DeclareVariableContext;
  class DeclareConditionContext;
  class DeclareCursorContext;
  class DeclareHandlerContext;
  class HandlerConditionValueContext;
  class ProcedureSqlStatementContext;
  class CaseAlternativeContext;
  class ElifAlternativeContext;
  class AlterUserContext;
  class CreateUserContext;
  class DropUserContext;
  class GrantStatementContext;
  class GrantProxyContext;
  class RenameUserContext;
  class RevokeStatementContext;
  class RevokeProxyContext;
  class SetPasswordStatementContext;
  class UserSpecificationContext;
  class UserAuthOptionContext;
  class TlsOptionContext;
  class UserResourceOptionContext;
  class UserPasswordOptionContext;
  class UserLockOptionContext;
  class PrivelegeClauseContext;
  class PrivilegeContext;
  class PrivilegeLevelContext;
  class RenameUserClauseContext;
  class AnalyzeTableContext;
  class CheckTableContext;
  class ChecksumTableContext;
  class OptimizeTableContext;
  class RepairTableContext;
  class CheckTableOptionContext;
  class CreateUdfunctionContext;
  class InstallPluginContext;
  class UninstallPluginContext;
  class SetStatementContext;
  class ShowStatementContext;
  class VariableClauseContext;
  class ShowCommonEntityContext;
  class ShowFilterContext;
  class ShowGlobalInfoClauseContext;
  class ShowSchemaEntityContext;
  class ShowProfileTypeContext;
  class BinlogStatementContext;
  class CacheIndexStatementContext;
  class FlushStatementContext;
  class KillStatementContext;
  class LoadIndexIntoCacheContext;
  class ResetStatementContext;
  class ShutdownStatementContext;
  class TableIndexesContext;
  class FlushOptionContext;
  class FlushTableOptionContext;
  class LoadedTableIndexesContext;
  class SimpleDescribeStatementContext;
  class FullDescribeStatementContext;
  class HelpStatementContext;
  class UseStatementContext;
  class DescribeObjectClauseContext;
  class FullIdContext;
  class TableNameContext;
  class FullColumnNameContext;
  class IndexColumnNameContext;
  class UserNameContext;
  class MysqlVariableContext;
  class CharsetNameContext;
  class CollationNameContext;
  class EngineNameContext;
  class UuidSetContext;
  class XidContext;
  class XuidStringIdContext;
  class AuthPluginContext;
  class UidContext;
  class SimpleIdContext;
  class DecimalLiteralContext;
  class FileSizeLiteralContext;
  class StringLiteralContext;
  class BooleanLiteralContext;
  class HexadecimalLiteralContext;
  class NullNotnullContext;
  class ConstantContext;
  class DataTypeContext;
  class CollectionOptionsContext;
  class ConvertedDataTypeContext;
  class LengthOneDimensionContext;
  class LengthTwoDimensionContext;
  class LengthTwoOptionalDimensionContext;
  class UidListContext;
  class TablesContext;
  class IndexColumnNamesContext;
  class ExpressionsContext;
  class ExpressionsWithDefaultsContext;
  class ConstantsContext;
  class SimpleStringsContext;
  class UserVariablesContext;
  class DefaultValueContext;
  class CurrentTimestampContext;
  class ExpressionOrDefaultContext;
  class IfExistsContext;
  class IfNotExistsContext;
  class FunctionCallContext;
  class SpecificFunctionContext;
  class CaseFuncAlternativeContext;
  class LevelsInWeightStringContext;
  class LevelInWeightListElementContext;
  class AggregateWindowedFunctionContext;
  class ScalarFunctionNameContext;
  class PasswordFunctionClauseContext;
  class FunctionArgsContext;
  class FunctionArgContext;
  class ExpressionContext;
  class PredicateContext;
  class ExpressionAtomContext;
  class UnaryOperatorContext;
  class ComparisonOperatorContext;
  class LogicalOperatorContext;
  class BitOperatorContext;
  class MathOperatorContext;
  class CharsetNameBaseContext;
  class TransactionLevelBaseContext;
  class PrivilegesBaseContext;
  class IntervalTypeBaseContext;
  class DataTypeBaseContext;
  class KeywordsCanBeIdContext;
  class FunctionNameBaseContext; 

  class  RootContext : public antlr4::ParserRuleContext {
  public:
    RootContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    SqlStatementsContext *sqlStatements();
    antlr4::tree::TerminalNode *MINUSMINUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RootContext* root();

  class  SqlStatementsContext : public antlr4::ParserRuleContext {
  public:
    SqlStatementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SqlStatementContext *> sqlStatement();
    SqlStatementContext* sqlStatement(size_t i);
    std::vector<EmptyStatementContext *> emptyStatement();
    EmptyStatementContext* emptyStatement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MINUSMINUS();
    antlr4::tree::TerminalNode* MINUSMINUS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SqlStatementsContext* sqlStatements();

  class  SqlStatementContext : public antlr4::ParserRuleContext {
  public:
    SqlStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DdlStatementContext *ddlStatement();
    DmlStatementContext *dmlStatement();
    TransactionStatementContext *transactionStatement();
    ReplicationStatementContext *replicationStatement();
    PreparedStatementContext *preparedStatement();
    AdministrationStatementContext *administrationStatement();
    UtilityStatementContext *utilityStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SqlStatementContext* sqlStatement();

  class  EmptyStatementContext : public antlr4::ParserRuleContext {
  public:
    EmptyStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EmptyStatementContext* emptyStatement();

  class  DdlStatementContext : public antlr4::ParserRuleContext {
  public:
    DdlStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CreateDatabaseContext *createDatabase();
    CreateEventContext *createEvent();
    CreateIndexContext *createIndex();
    CreateLogfileGroupContext *createLogfileGroup();
    CreateProcedureContext *createProcedure();
    CreateFunctionContext *createFunction();
    CreateServerContext *createServer();
    CreateTableContext *createTable();
    CreateTablespaceInnodbContext *createTablespaceInnodb();
    CreateTablespaceNdbContext *createTablespaceNdb();
    CreateTriggerContext *createTrigger();
    CreateViewContext *createView();
    AlterDatabaseContext *alterDatabase();
    AlterEventContext *alterEvent();
    AlterFunctionContext *alterFunction();
    AlterInstanceContext *alterInstance();
    AlterLogfileGroupContext *alterLogfileGroup();
    AlterProcedureContext *alterProcedure();
    AlterServerContext *alterServer();
    AlterTableContext *alterTable();
    AlterTablespaceContext *alterTablespace();
    AlterViewContext *alterView();
    DropDatabaseContext *dropDatabase();
    DropEventContext *dropEvent();
    DropIndexContext *dropIndex();
    DropLogfileGroupContext *dropLogfileGroup();
    DropProcedureContext *dropProcedure();
    DropFunctionContext *dropFunction();
    DropServerContext *dropServer();
    DropTableContext *dropTable();
    DropTablespaceContext *dropTablespace();
    DropTriggerContext *dropTrigger();
    DropViewContext *dropView();
    RenameTableContext *renameTable();
    TruncateTableContext *truncateTable();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DdlStatementContext* ddlStatement();

  class  DmlStatementContext : public antlr4::ParserRuleContext {
  public:
    DmlStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SelectStatementContext *selectStatement();
    InsertStatementContext *insertStatement();
    UpdateStatementContext *updateStatement();
    DeleteStatementContext *deleteStatement();
    ReplaceStatementContext *replaceStatement();
    CallStatementContext *callStatement();
    LoadDataStatementContext *loadDataStatement();
    LoadXmlStatementContext *loadXmlStatement();
    DoStatementContext *doStatement();
    HandlerStatementContext *handlerStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DmlStatementContext* dmlStatement();

  class  TransactionStatementContext : public antlr4::ParserRuleContext {
  public:
    TransactionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StartTransactionContext *startTransaction();
    BeginWorkContext *beginWork();
    CommitWorkContext *commitWork();
    RollbackWorkContext *rollbackWork();
    SavepointStatementContext *savepointStatement();
    RollbackStatementContext *rollbackStatement();
    ReleaseStatementContext *releaseStatement();
    LockTablesContext *lockTables();
    UnlockTablesContext *unlockTables();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TransactionStatementContext* transactionStatement();

  class  ReplicationStatementContext : public antlr4::ParserRuleContext {
  public:
    ReplicationStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ChangeMasterContext *changeMaster();
    ChangeReplicationFilterContext *changeReplicationFilter();
    PurgeBinaryLogsContext *purgeBinaryLogs();
    ResetMasterContext *resetMaster();
    ResetSlaveContext *resetSlave();
    StartSlaveContext *startSlave();
    StopSlaveContext *stopSlave();
    StartGroupReplicationContext *startGroupReplication();
    StopGroupReplicationContext *stopGroupReplication();
    XaStartTransactionContext *xaStartTransaction();
    XaEndTransactionContext *xaEndTransaction();
    XaPrepareStatementContext *xaPrepareStatement();
    XaCommitWorkContext *xaCommitWork();
    XaRollbackWorkContext *xaRollbackWork();
    XaRecoverWorkContext *xaRecoverWork();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReplicationStatementContext* replicationStatement();

  class  PreparedStatementContext : public antlr4::ParserRuleContext {
  public:
    PreparedStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrepareStatementContext *prepareStatement();
    ExecuteStatementContext *executeStatement();
    DeallocatePrepareContext *deallocatePrepare();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PreparedStatementContext* preparedStatement();

  class  CompoundStatementContext : public antlr4::ParserRuleContext {
  public:
    CompoundStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockStatementContext *blockStatement();
    CaseStatementContext *caseStatement();
    IfStatementContext *ifStatement();
    LeaveStatementContext *leaveStatement();
    LoopStatementContext *loopStatement();
    RepeatStatementContext *repeatStatement();
    WhileStatementContext *whileStatement();
    IterateStatementContext *iterateStatement();
    ReturnStatementContext *returnStatement();
    CursorStatementContext *cursorStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompoundStatementContext* compoundStatement();

  class  AdministrationStatementContext : public antlr4::ParserRuleContext {
  public:
    AdministrationStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AlterUserContext *alterUser();
    CreateUserContext *createUser();
    DropUserContext *dropUser();
    GrantStatementContext *grantStatement();
    GrantProxyContext *grantProxy();
    RenameUserContext *renameUser();
    RevokeStatementContext *revokeStatement();
    RevokeProxyContext *revokeProxy();
    AnalyzeTableContext *analyzeTable();
    CheckTableContext *checkTable();
    ChecksumTableContext *checksumTable();
    OptimizeTableContext *optimizeTable();
    RepairTableContext *repairTable();
    CreateUdfunctionContext *createUdfunction();
    InstallPluginContext *installPlugin();
    UninstallPluginContext *uninstallPlugin();
    SetStatementContext *setStatement();
    ShowStatementContext *showStatement();
    BinlogStatementContext *binlogStatement();
    CacheIndexStatementContext *cacheIndexStatement();
    FlushStatementContext *flushStatement();
    KillStatementContext *killStatement();
    LoadIndexIntoCacheContext *loadIndexIntoCache();
    ResetStatementContext *resetStatement();
    ShutdownStatementContext *shutdownStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AdministrationStatementContext* administrationStatement();

  class  UtilityStatementContext : public antlr4::ParserRuleContext {
  public:
    UtilityStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleDescribeStatementContext *simpleDescribeStatement();
    FullDescribeStatementContext *fullDescribeStatement();
    HelpStatementContext *helpStatement();
    UseStatementContext *useStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UtilityStatementContext* utilityStatement();

  class  CreateDatabaseContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *dbFormat = nullptr;;
    CreateDatabaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    UidContext *uid();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *SCHEMA();
    IfNotExistsContext *ifNotExists();
    std::vector<CreateDatabaseOptionContext *> createDatabaseOption();
    CreateDatabaseOptionContext* createDatabaseOption(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateDatabaseContext* createDatabase();

  class  CreateEventContext : public antlr4::ParserRuleContext {
  public:
    CreateEventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *EVENT();
    FullIdContext *fullId();
    std::vector<antlr4::tree::TerminalNode *> ON();
    antlr4::tree::TerminalNode* ON(size_t i);
    antlr4::tree::TerminalNode *SCHEDULE();
    ScheduleExpressionContext *scheduleExpression();
    antlr4::tree::TerminalNode *DO();
    RoutineBodyContext *routineBody();
    OwnerStatementContext *ownerStatement();
    IfNotExistsContext *ifNotExists();
    antlr4::tree::TerminalNode *COMPLETION();
    antlr4::tree::TerminalNode *PRESERVE();
    EnableTypeContext *enableType();
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateEventContext* createEvent();

  class  CreateIndexContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *intimeAction = nullptr;;
    antlr4::Token *indexCategory = nullptr;;
    antlr4::Token *algType = nullptr;;
    antlr4::Token *lockType = nullptr;;
    CreateIndexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *INDEX();
    UidContext *uid();
    antlr4::tree::TerminalNode *ON();
    TableNameContext *tableName();
    IndexColumnNamesContext *indexColumnNames();
    IndexTypeContext *indexType();
    std::vector<IndexOptionContext *> indexOption();
    IndexOptionContext* indexOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ALGORITHM();
    antlr4::tree::TerminalNode* ALGORITHM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LOCK();
    antlr4::tree::TerminalNode* LOCK(size_t i);
    antlr4::tree::TerminalNode *ONLINE();
    antlr4::tree::TerminalNode *OFFLINE();
    antlr4::tree::TerminalNode *UNIQUE();
    antlr4::tree::TerminalNode *FULLTEXT();
    antlr4::tree::TerminalNode *SPATIAL();
    std::vector<antlr4::tree::TerminalNode *> DEFAULT();
    antlr4::tree::TerminalNode* DEFAULT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INPLACE();
    antlr4::tree::TerminalNode* INPLACE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COPY();
    antlr4::tree::TerminalNode* COPY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NONE();
    antlr4::tree::TerminalNode* NONE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SHARED();
    antlr4::tree::TerminalNode* SHARED(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EXCLUSIVE();
    antlr4::tree::TerminalNode* EXCLUSIVE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateIndexContext* createIndex();

  class  CreateLogfileGroupContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *undoFile = nullptr;;
    MySQLParser::FileSizeLiteralContext *initSize = nullptr;;
    MySQLParser::FileSizeLiteralContext *undoSize = nullptr;;
    MySQLParser::FileSizeLiteralContext *redoSize = nullptr;;
    antlr4::Token *comment = nullptr;;
    CreateLogfileGroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *LOGFILE();
    antlr4::tree::TerminalNode *GROUP();
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *UNDOFILE();
    antlr4::tree::TerminalNode *ENGINE();
    EngineNameContext *engineName();
    std::vector<antlr4::tree::TerminalNode *> STRING_LITERAL();
    antlr4::tree::TerminalNode* STRING_LITERAL(size_t i);
    antlr4::tree::TerminalNode *INITIAL_SIZE();
    antlr4::tree::TerminalNode *UNDO_BUFFER_SIZE();
    antlr4::tree::TerminalNode *REDO_BUFFER_SIZE();
    antlr4::tree::TerminalNode *NODEGROUP();
    antlr4::tree::TerminalNode *WAIT();
    antlr4::tree::TerminalNode *COMMENT();
    std::vector<FileSizeLiteralContext *> fileSizeLiteral();
    FileSizeLiteralContext* fileSizeLiteral(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateLogfileGroupContext* createLogfileGroup();

  class  CreateProcedureContext : public antlr4::ParserRuleContext {
  public:
    CreateProcedureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *PROCEDURE();
    FullIdContext *fullId();
    RoutineBodyContext *routineBody();
    OwnerStatementContext *ownerStatement();
    std::vector<ProcedureParameterContext *> procedureParameter();
    ProcedureParameterContext* procedureParameter(size_t i);
    std::vector<RoutineOptionContext *> routineOption();
    RoutineOptionContext* routineOption(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateProcedureContext* createProcedure();

  class  CreateFunctionContext : public antlr4::ParserRuleContext {
  public:
    CreateFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *FUNCTION();
    FullIdContext *fullId();
    antlr4::tree::TerminalNode *RETURNS();
    DataTypeContext *dataType();
    RoutineBodyContext *routineBody();
    OwnerStatementContext *ownerStatement();
    std::vector<FunctionParameterContext *> functionParameter();
    FunctionParameterContext* functionParameter(size_t i);
    std::vector<RoutineOptionContext *> routineOption();
    RoutineOptionContext* routineOption(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateFunctionContext* createFunction();

  class  CreateServerContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *wrapperName = nullptr;;
    CreateServerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *SERVER();
    UidContext *uid();
    antlr4::tree::TerminalNode *FOREIGN();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *WRAPPER();
    antlr4::tree::TerminalNode *OPTIONS();
    std::vector<ServerOptionContext *> serverOption();
    ServerOptionContext* serverOption(size_t i);
    antlr4::tree::TerminalNode *MYSQL();
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateServerContext* createServer();

  class  CreateTableContext : public antlr4::ParserRuleContext {
  public:
    CreateTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    CreateTableContext() : antlr4::ParserRuleContext() { }
    void copyFrom(CreateTableContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  CopyCreateTableContext : public CreateTableContext {
  public:
    CopyCreateTableContext(CreateTableContext *ctx);

    MySQLParser::TableNameContext *parenthesisTable = nullptr;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TABLE();
    std::vector<TableNameContext *> tableName();
    TableNameContext* tableName(size_t i);
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *TEMPORARY();
    IfNotExistsContext *ifNotExists();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ColumnCreateTableContext : public CreateTableContext {
  public:
    ColumnCreateTableContext(CreateTableContext *ctx);

    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TABLE();
    TableNameContext *tableName();
    CreateDefinitionsContext *createDefinitions();
    antlr4::tree::TerminalNode *TEMPORARY();
    IfNotExistsContext *ifNotExists();
    std::vector<TableOptionContext *> tableOption();
    TableOptionContext* tableOption(size_t i);
    PartitionDefinitionsContext *partitionDefinitions();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  QueryCreateTableContext : public CreateTableContext {
  public:
    QueryCreateTableContext(CreateTableContext *ctx);

    antlr4::Token *keyViolate = nullptr;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TABLE();
    TableNameContext *tableName();
    SelectStatementContext *selectStatement();
    antlr4::tree::TerminalNode *TEMPORARY();
    IfNotExistsContext *ifNotExists();
    CreateDefinitionsContext *createDefinitions();
    std::vector<TableOptionContext *> tableOption();
    TableOptionContext* tableOption(size_t i);
    PartitionDefinitionsContext *partitionDefinitions();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *REPLACE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  CreateTableContext* createTable();

  class  CreateTablespaceInnodbContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *datafile = nullptr;;
    MySQLParser::FileSizeLiteralContext *fileBlockSize = nullptr;;
    CreateTablespaceInnodbContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TABLESPACE();
    UidContext *uid();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *DATAFILE();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *FILE_BLOCK_SIZE();
    antlr4::tree::TerminalNode *ENGINE();
    EngineNameContext *engineName();
    FileSizeLiteralContext *fileSizeLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateTablespaceInnodbContext* createTablespaceInnodb();

  class  CreateTablespaceNdbContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *datafile = nullptr;;
    MySQLParser::FileSizeLiteralContext *extentSize = nullptr;;
    MySQLParser::FileSizeLiteralContext *initialSize = nullptr;;
    MySQLParser::FileSizeLiteralContext *autoextendSize = nullptr;;
    MySQLParser::FileSizeLiteralContext *maxSize = nullptr;;
    antlr4::Token *comment = nullptr;;
    CreateTablespaceNdbContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TABLESPACE();
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *DATAFILE();
    antlr4::tree::TerminalNode *USE();
    antlr4::tree::TerminalNode *LOGFILE();
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *ENGINE();
    EngineNameContext *engineName();
    std::vector<antlr4::tree::TerminalNode *> STRING_LITERAL();
    antlr4::tree::TerminalNode* STRING_LITERAL(size_t i);
    antlr4::tree::TerminalNode *EXTENT_SIZE();
    antlr4::tree::TerminalNode *INITIAL_SIZE();
    antlr4::tree::TerminalNode *AUTOEXTEND_SIZE();
    antlr4::tree::TerminalNode *MAX_SIZE();
    antlr4::tree::TerminalNode *NODEGROUP();
    antlr4::tree::TerminalNode *WAIT();
    antlr4::tree::TerminalNode *COMMENT();
    std::vector<FileSizeLiteralContext *> fileSizeLiteral();
    FileSizeLiteralContext* fileSizeLiteral(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateTablespaceNdbContext* createTablespaceNdb();

  class  CreateTriggerContext : public antlr4::ParserRuleContext {
  public:
    MySQLParser::FullIdContext *thisTrigger = nullptr;;
    antlr4::Token *triggerTime = nullptr;;
    antlr4::Token *triggerEvent = nullptr;;
    antlr4::Token *triggerPlace = nullptr;;
    MySQLParser::FullIdContext *otherTrigger = nullptr;;
    CreateTriggerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TRIGGER();
    antlr4::tree::TerminalNode *ON();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *EACH();
    antlr4::tree::TerminalNode *ROW();
    RoutineBodyContext *routineBody();
    std::vector<FullIdContext *> fullId();
    FullIdContext* fullId(size_t i);
    antlr4::tree::TerminalNode *BEFORE();
    antlr4::tree::TerminalNode *AFTER();
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *DELETE();
    OwnerStatementContext *ownerStatement();
    antlr4::tree::TerminalNode *FOLLOWS();
    antlr4::tree::TerminalNode *PRECEDES();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateTriggerContext* createTrigger();

  class  CreateViewContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *algType = nullptr;;
    antlr4::Token *secContext = nullptr;;
    antlr4::Token *checkOption = nullptr;;
    CreateViewContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *VIEW();
    FullIdContext *fullId();
    antlr4::tree::TerminalNode *AS();
    SelectStatementContext *selectStatement();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *ALGORITHM();
    OwnerStatementContext *ownerStatement();
    antlr4::tree::TerminalNode *SQL();
    antlr4::tree::TerminalNode *SECURITY();
    UidListContext *uidList();
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

  class  CreateDatabaseOptionContext : public antlr4::ParserRuleContext {
  public:
    CreateDatabaseOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *CHARSET();
    CharsetNameContext *charsetName();
    std::vector<antlr4::tree::TerminalNode *> DEFAULT();
    antlr4::tree::TerminalNode* DEFAULT(size_t i);
    antlr4::tree::TerminalNode *COLLATE();
    CollationNameContext *collationName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateDatabaseOptionContext* createDatabaseOption();

  class  OwnerStatementContext : public antlr4::ParserRuleContext {
  public:
    OwnerStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFINER();
    UserNameContext *userName();
    antlr4::tree::TerminalNode *CURRENT_USER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OwnerStatementContext* ownerStatement();

  class  ScheduleExpressionContext : public antlr4::ParserRuleContext {
  public:
    ScheduleExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ScheduleExpressionContext() : antlr4::ParserRuleContext() { }
    void copyFrom(ScheduleExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PreciseScheduleContext : public ScheduleExpressionContext {
  public:
    PreciseScheduleContext(ScheduleExpressionContext *ctx);

    antlr4::tree::TerminalNode *AT();
    TimestampValueContext *timestampValue();
    std::vector<IntervalExprContext *> intervalExpr();
    IntervalExprContext* intervalExpr(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IntervalScheduleContext : public ScheduleExpressionContext {
  public:
    IntervalScheduleContext(ScheduleExpressionContext *ctx);

    MySQLParser::TimestampValueContext *startTimestamp = nullptr;
    MySQLParser::IntervalExprContext *intervalExprContext = nullptr;
    std::vector<IntervalExprContext *> startIntervals;
    MySQLParser::TimestampValueContext *endTimestamp = nullptr;
    std::vector<IntervalExprContext *> endIntervals;
    antlr4::tree::TerminalNode *EVERY();
    IntervalTypeContext *intervalType();
    DecimalLiteralContext *decimalLiteral();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *STARTS();
    antlr4::tree::TerminalNode *ENDS();
    std::vector<TimestampValueContext *> timestampValue();
    TimestampValueContext* timestampValue(size_t i);
    std::vector<IntervalExprContext *> intervalExpr();
    IntervalExprContext* intervalExpr(size_t i);
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
    StringLiteralContext *stringLiteral();
    DecimalLiteralContext *decimalLiteral();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TimestampValueContext* timestampValue();

  class  IntervalExprContext : public antlr4::ParserRuleContext {
  public:
    IntervalExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTERVAL();
    IntervalTypeContext *intervalType();
    DecimalLiteralContext *decimalLiteral();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntervalExprContext* intervalExpr();

  class  IntervalTypeContext : public antlr4::ParserRuleContext {
  public:
    IntervalTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntervalTypeBaseContext *intervalTypeBase();
    antlr4::tree::TerminalNode *YEAR();
    antlr4::tree::TerminalNode *YEAR_MONTH();
    antlr4::tree::TerminalNode *DAY_HOUR();
    antlr4::tree::TerminalNode *DAY_MINUTE();
    antlr4::tree::TerminalNode *DAY_SECOND();
    antlr4::tree::TerminalNode *HOUR_MINUTE();
    antlr4::tree::TerminalNode *HOUR_SECOND();
    antlr4::tree::TerminalNode *MINUTE_SECOND();
    antlr4::tree::TerminalNode *SECOND_MICROSECOND();
    antlr4::tree::TerminalNode *MINUTE_MICROSECOND();
    antlr4::tree::TerminalNode *HOUR_MICROSECOND();
    antlr4::tree::TerminalNode *DAY_MICROSECOND();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntervalTypeContext* intervalType();

  class  EnableTypeContext : public antlr4::ParserRuleContext {
  public:
    EnableTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *SLAVE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnableTypeContext* enableType();

  class  IndexTypeContext : public antlr4::ParserRuleContext {
  public:
    IndexTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *BTREE();
    antlr4::tree::TerminalNode *HASH();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexTypeContext* indexType();

  class  IndexOptionContext : public antlr4::ParserRuleContext {
  public:
    IndexOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEY_BLOCK_SIZE();
    FileSizeLiteralContext *fileSizeLiteral();
    IndexTypeContext *indexType();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *PARSER();
    UidContext *uid();
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *INVISIBLE();
    antlr4::tree::TerminalNode *VISIBLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexOptionContext* indexOption();

  class  ProcedureParameterContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *direction = nullptr;;
    ProcedureParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UidContext *uid();
    DataTypeContext *dataType();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *OUT();
    antlr4::tree::TerminalNode *INOUT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProcedureParameterContext* procedureParameter();

  class  FunctionParameterContext : public antlr4::ParserRuleContext {
  public:
    FunctionParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UidContext *uid();
    DataTypeContext *dataType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionParameterContext* functionParameter();

  class  RoutineOptionContext : public antlr4::ParserRuleContext {
  public:
    RoutineOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    RoutineOptionContext() : antlr4::ParserRuleContext() { }
    void copyFrom(RoutineOptionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  RoutineBehaviorContext : public RoutineOptionContext {
  public:
    RoutineBehaviorContext(RoutineOptionContext *ctx);

    antlr4::tree::TerminalNode *DETERMINISTIC();
    antlr4::tree::TerminalNode *NOT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RoutineLanguageContext : public RoutineOptionContext {
  public:
    RoutineLanguageContext(RoutineOptionContext *ctx);

    antlr4::tree::TerminalNode *LANGUAGE();
    antlr4::tree::TerminalNode *SQL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RoutineCommentContext : public RoutineOptionContext {
  public:
    RoutineCommentContext(RoutineOptionContext *ctx);

    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RoutineSecurityContext : public RoutineOptionContext {
  public:
    RoutineSecurityContext(RoutineOptionContext *ctx);

    antlr4::Token *context = nullptr;
    antlr4::tree::TerminalNode *SQL();
    antlr4::tree::TerminalNode *SECURITY();
    antlr4::tree::TerminalNode *DEFINER();
    antlr4::tree::TerminalNode *INVOKER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RoutineDataContext : public RoutineOptionContext {
  public:
    RoutineDataContext(RoutineOptionContext *ctx);

    antlr4::tree::TerminalNode *CONTAINS();
    antlr4::tree::TerminalNode *SQL();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *READS();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *MODIFIES();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  RoutineOptionContext* routineOption();

  class  ServerOptionContext : public antlr4::ParserRuleContext {
  public:
    ServerOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HOST();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *SOCKET();
    antlr4::tree::TerminalNode *OWNER();
    antlr4::tree::TerminalNode *PORT();
    DecimalLiteralContext *decimalLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ServerOptionContext* serverOption();

  class  CreateDefinitionsContext : public antlr4::ParserRuleContext {
  public:
    CreateDefinitionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CreateDefinitionContext *> createDefinition();
    CreateDefinitionContext* createDefinition(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateDefinitionsContext* createDefinitions();

  class  CreateDefinitionContext : public antlr4::ParserRuleContext {
  public:
    CreateDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    CreateDefinitionContext() : antlr4::ParserRuleContext() { }
    void copyFrom(CreateDefinitionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ColumnDeclarationContext : public CreateDefinitionContext {
  public:
    ColumnDeclarationContext(CreateDefinitionContext *ctx);

    UidContext *uid();
    ColumnDefinitionContext *columnDefinition();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ConstraintDeclarationContext : public CreateDefinitionContext {
  public:
    ConstraintDeclarationContext(CreateDefinitionContext *ctx);

    TableConstraintContext *tableConstraint();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IndexDeclarationContext : public CreateDefinitionContext {
  public:
    IndexDeclarationContext(CreateDefinitionContext *ctx);

    IndexColumnDefinitionContext *indexColumnDefinition();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  CreateDefinitionContext* createDefinition();

  class  ColumnDefinitionContext : public antlr4::ParserRuleContext {
  public:
    ColumnDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DataTypeContext *dataType();
    std::vector<ColumnConstraintContext *> columnConstraint();
    ColumnConstraintContext* columnConstraint(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnDefinitionContext* columnDefinition();

  class  ColumnConstraintContext : public antlr4::ParserRuleContext {
  public:
    ColumnConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ColumnConstraintContext() : antlr4::ParserRuleContext() { }
    void copyFrom(ColumnConstraintContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  StorageColumnConstraintContext : public ColumnConstraintContext {
  public:
    StorageColumnConstraintContext(ColumnConstraintContext *ctx);

    antlr4::Token *storageval = nullptr;
    antlr4::tree::TerminalNode *STORAGE();
    antlr4::tree::TerminalNode *DISK();
    antlr4::tree::TerminalNode *MEMORY();
    antlr4::tree::TerminalNode *DEFAULT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FormatColumnConstraintContext : public ColumnConstraintContext {
  public:
    FormatColumnConstraintContext(ColumnConstraintContext *ctx);

    antlr4::Token *colformat = nullptr;
    antlr4::tree::TerminalNode *COLUMN_FORMAT();
    antlr4::tree::TerminalNode *FIXED();
    antlr4::tree::TerminalNode *DYNAMIC();
    antlr4::tree::TerminalNode *DEFAULT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CollateColumnConstraintContext : public ColumnConstraintContext {
  public:
    CollateColumnConstraintContext(ColumnConstraintContext *ctx);

    antlr4::tree::TerminalNode *COLLATE();
    CollationNameContext *collationName();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AutoIncrementColumnConstraintContext : public ColumnConstraintContext {
  public:
    AutoIncrementColumnConstraintContext(ColumnConstraintContext *ctx);

    antlr4::tree::TerminalNode *AUTO_INCREMENT();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *UPDATE();
    CurrentTimestampContext *currentTimestamp();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CommentColumnConstraintContext : public ColumnConstraintContext {
  public:
    CommentColumnConstraintContext(ColumnConstraintContext *ctx);

    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PrimaryKeyColumnConstraintContext : public ColumnConstraintContext {
  public:
    PrimaryKeyColumnConstraintContext(ColumnConstraintContext *ctx);

    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *PRIMARY();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UniqueKeyColumnConstraintContext : public ColumnConstraintContext {
  public:
    UniqueKeyColumnConstraintContext(ColumnConstraintContext *ctx);

    antlr4::tree::TerminalNode *UNIQUE();
    antlr4::tree::TerminalNode *KEY();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SerialDefaultColumnConstraintContext : public ColumnConstraintContext {
  public:
    SerialDefaultColumnConstraintContext(ColumnConstraintContext *ctx);

    antlr4::tree::TerminalNode *SERIAL();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *VALUE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NullColumnConstraintContext : public ColumnConstraintContext {
  public:
    NullColumnConstraintContext(ColumnConstraintContext *ctx);

    NullNotnullContext *nullNotnull();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DefaultColumnConstraintContext : public ColumnConstraintContext {
  public:
    DefaultColumnConstraintContext(ColumnConstraintContext *ctx);

    antlr4::tree::TerminalNode *DEFAULT();
    DefaultValueContext *defaultValue();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ReferenceColumnConstraintContext : public ColumnConstraintContext {
  public:
    ReferenceColumnConstraintContext(ColumnConstraintContext *ctx);

    ReferenceDefinitionContext *referenceDefinition();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  GeneratedColumnConstraintContext : public ColumnConstraintContext {
  public:
    GeneratedColumnConstraintContext(ColumnConstraintContext *ctx);

    antlr4::tree::TerminalNode *AS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *GENERATED();
    antlr4::tree::TerminalNode *ALWAYS();
    antlr4::tree::TerminalNode *VIRTUAL();
    antlr4::tree::TerminalNode *STORED();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ColumnConstraintContext* columnConstraint();

  class  TableConstraintContext : public antlr4::ParserRuleContext {
  public:
    TableConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TableConstraintContext() : antlr4::ParserRuleContext() { }
    void copyFrom(TableConstraintContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  UniqueKeyTableConstraintContext : public TableConstraintContext {
  public:
    UniqueKeyTableConstraintContext(TableConstraintContext *ctx);

    MySQLParser::UidContext *name = nullptr;
    antlr4::Token *indexFormat = nullptr;
    MySQLParser::UidContext *index = nullptr;
    antlr4::tree::TerminalNode *UNIQUE();
    IndexColumnNamesContext *indexColumnNames();
    antlr4::tree::TerminalNode *CONSTRAINT();
    IndexTypeContext *indexType();
    std::vector<IndexOptionContext *> indexOption();
    IndexOptionContext* indexOption(size_t i);
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *KEY();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CheckTableConstraintContext : public TableConstraintContext {
  public:
    CheckTableConstraintContext(TableConstraintContext *ctx);

    MySQLParser::UidContext *name = nullptr;
    antlr4::tree::TerminalNode *CHECK();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CONSTRAINT();
    UidContext *uid();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PrimaryKeyTableConstraintContext : public TableConstraintContext {
  public:
    PrimaryKeyTableConstraintContext(TableConstraintContext *ctx);

    MySQLParser::UidContext *name = nullptr;
    MySQLParser::UidContext *index = nullptr;
    antlr4::tree::TerminalNode *PRIMARY();
    antlr4::tree::TerminalNode *KEY();
    IndexColumnNamesContext *indexColumnNames();
    antlr4::tree::TerminalNode *CONSTRAINT();
    IndexTypeContext *indexType();
    std::vector<IndexOptionContext *> indexOption();
    IndexOptionContext* indexOption(size_t i);
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ForeignKeyTableConstraintContext : public TableConstraintContext {
  public:
    ForeignKeyTableConstraintContext(TableConstraintContext *ctx);

    MySQLParser::UidContext *name = nullptr;
    MySQLParser::UidContext *index = nullptr;
    antlr4::tree::TerminalNode *FOREIGN();
    antlr4::tree::TerminalNode *KEY();
    IndexColumnNamesContext *indexColumnNames();
    ReferenceDefinitionContext *referenceDefinition();
    antlr4::tree::TerminalNode *CONSTRAINT();
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  TableConstraintContext* tableConstraint();

  class  ReferenceDefinitionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *matchType = nullptr;;
    ReferenceDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REFERENCES();
    TableNameContext *tableName();
    IndexColumnNamesContext *indexColumnNames();
    antlr4::tree::TerminalNode *MATCH();
    ReferenceActionContext *referenceAction();
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *PARTIAL();
    antlr4::tree::TerminalNode *SIMPLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReferenceDefinitionContext* referenceDefinition();

  class  ReferenceActionContext : public antlr4::ParserRuleContext {
  public:
    MySQLParser::ReferenceControlTypeContext *onDelete = nullptr;;
    MySQLParser::ReferenceControlTypeContext *onUpdate = nullptr;;
    ReferenceActionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ON();
    antlr4::tree::TerminalNode* ON(size_t i);
    antlr4::tree::TerminalNode *DELETE();
    std::vector<ReferenceControlTypeContext *> referenceControlType();
    ReferenceControlTypeContext* referenceControlType(size_t i);
    antlr4::tree::TerminalNode *UPDATE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReferenceActionContext* referenceAction();

  class  ReferenceControlTypeContext : public antlr4::ParserRuleContext {
  public:
    ReferenceControlTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESTRICT();
    antlr4::tree::TerminalNode *CASCADE();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *NULL_LITERAL();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *ACTION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReferenceControlTypeContext* referenceControlType();

  class  IndexColumnDefinitionContext : public antlr4::ParserRuleContext {
  public:
    IndexColumnDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    IndexColumnDefinitionContext() : antlr4::ParserRuleContext() { }
    void copyFrom(IndexColumnDefinitionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SpecialIndexDeclarationContext : public IndexColumnDefinitionContext {
  public:
    SpecialIndexDeclarationContext(IndexColumnDefinitionContext *ctx);

    antlr4::Token *indexFormat = nullptr;
    IndexColumnNamesContext *indexColumnNames();
    antlr4::tree::TerminalNode *FULLTEXT();
    antlr4::tree::TerminalNode *SPATIAL();
    UidContext *uid();
    std::vector<IndexOptionContext *> indexOption();
    IndexOptionContext* indexOption(size_t i);
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *KEY();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SimpleIndexDeclarationContext : public IndexColumnDefinitionContext {
  public:
    SimpleIndexDeclarationContext(IndexColumnDefinitionContext *ctx);

    antlr4::Token *indexFormat = nullptr;
    IndexColumnNamesContext *indexColumnNames();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *KEY();
    UidContext *uid();
    IndexTypeContext *indexType();
    std::vector<IndexOptionContext *> indexOption();
    IndexOptionContext* indexOption(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  IndexColumnDefinitionContext* indexColumnDefinition();

  class  TableOptionContext : public antlr4::ParserRuleContext {
  public:
    TableOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TableOptionContext() : antlr4::ParserRuleContext() { }
    void copyFrom(TableOptionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TableOptionEngineContext : public TableOptionContext {
  public:
    TableOptionEngineContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *ENGINE();
    EngineNameContext *engineName();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TableOptionMaxRowsContext : public TableOptionContext {
  public:
    TableOptionMaxRowsContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *MAX_ROWS();
    DecimalLiteralContext *decimalLiteral();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TableOptionCollateContext : public TableOptionContext {
  public:
    TableOptionCollateContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *COLLATE();
    CollationNameContext *collationName();
    antlr4::tree::TerminalNode *DEFAULT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TableOptionPersistentContext : public TableOptionContext {
  public:
    TableOptionPersistentContext(TableOptionContext *ctx);

    antlr4::Token *extBoolValue = nullptr;
    antlr4::tree::TerminalNode *STATS_PERSISTENT();
    antlr4::tree::TerminalNode *DEFAULT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TableOptionTablespaceContext : public TableOptionContext {
  public:
    TableOptionTablespaceContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *TABLESPACE();
    UidContext *uid();
    TablespaceStorageContext *tablespaceStorage();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TableOptionPackKeysContext : public TableOptionContext {
  public:
    TableOptionPackKeysContext(TableOptionContext *ctx);

    antlr4::Token *extBoolValue = nullptr;
    antlr4::tree::TerminalNode *PACK_KEYS();
    antlr4::tree::TerminalNode *DEFAULT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TableOptionPasswordContext : public TableOptionContext {
  public:
    TableOptionPasswordContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TableOptionUnionContext : public TableOptionContext {
  public:
    TableOptionUnionContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *UNION();
    TablesContext *tables();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TableOptionSamplePageContext : public TableOptionContext {
  public:
    TableOptionSamplePageContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *STATS_SAMPLE_PAGES();
    DecimalLiteralContext *decimalLiteral();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TableOptionCharsetContext : public TableOptionContext {
  public:
    TableOptionCharsetContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *CHARSET();
    CharsetNameContext *charsetName();
    std::vector<antlr4::tree::TerminalNode *> DEFAULT();
    antlr4::tree::TerminalNode* DEFAULT(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TableOptionIndexDirectoryContext : public TableOptionContext {
  public:
    TableOptionIndexDirectoryContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *DIRECTORY();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TableOptionKeyBlockSizeContext : public TableOptionContext {
  public:
    TableOptionKeyBlockSizeContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *KEY_BLOCK_SIZE();
    FileSizeLiteralContext *fileSizeLiteral();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TableOptionEncryptionContext : public TableOptionContext {
  public:
    TableOptionEncryptionContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *ENCRYPTION();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TableOptionDataDirectoryContext : public TableOptionContext {
  public:
    TableOptionDataDirectoryContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *DIRECTORY();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TableOptionRecalculationContext : public TableOptionContext {
  public:
    TableOptionRecalculationContext(TableOptionContext *ctx);

    antlr4::Token *extBoolValue = nullptr;
    antlr4::tree::TerminalNode *STATS_AUTO_RECALC();
    antlr4::tree::TerminalNode *DEFAULT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TableOptionAutoIncrementContext : public TableOptionContext {
  public:
    TableOptionAutoIncrementContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *AUTO_INCREMENT();
    DecimalLiteralContext *decimalLiteral();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TableOptionChecksumContext : public TableOptionContext {
  public:
    TableOptionChecksumContext(TableOptionContext *ctx);

    antlr4::Token *boolValue = nullptr;
    antlr4::tree::TerminalNode *CHECKSUM();
    antlr4::tree::TerminalNode *PAGE_CHECKSUM();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TableOptionDelayContext : public TableOptionContext {
  public:
    TableOptionDelayContext(TableOptionContext *ctx);

    antlr4::Token *boolValue = nullptr;
    antlr4::tree::TerminalNode *DELAY_KEY_WRITE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TableOptionConnectionContext : public TableOptionContext {
  public:
    TableOptionConnectionContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *CONNECTION();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TableOptionCommentContext : public TableOptionContext {
  public:
    TableOptionCommentContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TableOptionAverageContext : public TableOptionContext {
  public:
    TableOptionAverageContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *AVG_ROW_LENGTH();
    DecimalLiteralContext *decimalLiteral();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TableOptionRowFormatContext : public TableOptionContext {
  public:
    TableOptionRowFormatContext(TableOptionContext *ctx);

    antlr4::Token *rowFormat = nullptr;
    antlr4::tree::TerminalNode *ROW_FORMAT();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *DYNAMIC();
    antlr4::tree::TerminalNode *FIXED();
    antlr4::tree::TerminalNode *COMPRESSED();
    antlr4::tree::TerminalNode *REDUNDANT();
    antlr4::tree::TerminalNode *COMPACT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TableOptionCompressionContext : public TableOptionContext {
  public:
    TableOptionCompressionContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *COMPRESSION();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *ID();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TableOptionInsertMethodContext : public TableOptionContext {
  public:
    TableOptionInsertMethodContext(TableOptionContext *ctx);

    antlr4::Token *insertMethod = nullptr;
    antlr4::tree::TerminalNode *INSERT_METHOD();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *LAST();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TableOptionMinRowsContext : public TableOptionContext {
  public:
    TableOptionMinRowsContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *MIN_ROWS();
    DecimalLiteralContext *decimalLiteral();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  TableOptionContext* tableOption();

  class  TablespaceStorageContext : public antlr4::ParserRuleContext {
  public:
    TablespaceStorageContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STORAGE();
    antlr4::tree::TerminalNode *DISK();
    antlr4::tree::TerminalNode *MEMORY();
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TablespaceStorageContext* tablespaceStorage();

  class  PartitionDefinitionsContext : public antlr4::ParserRuleContext {
  public:
    MySQLParser::DecimalLiteralContext *count = nullptr;;
    MySQLParser::DecimalLiteralContext *subCount = nullptr;;
    PartitionDefinitionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARTITION();
    std::vector<antlr4::tree::TerminalNode *> BY();
    antlr4::tree::TerminalNode* BY(size_t i);
    PartitionFunctionDefinitionContext *partitionFunctionDefinition();
    antlr4::tree::TerminalNode *PARTITIONS();
    antlr4::tree::TerminalNode *SUBPARTITION();
    SubpartitionFunctionDefinitionContext *subpartitionFunctionDefinition();
    std::vector<PartitionDefinitionContext *> partitionDefinition();
    PartitionDefinitionContext* partitionDefinition(size_t i);
    std::vector<DecimalLiteralContext *> decimalLiteral();
    DecimalLiteralContext* decimalLiteral(size_t i);
    antlr4::tree::TerminalNode *SUBPARTITIONS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionDefinitionsContext* partitionDefinitions();

  class  PartitionFunctionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    PartitionFunctionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PartitionFunctionDefinitionContext() : antlr4::ParserRuleContext() { }
    void copyFrom(PartitionFunctionDefinitionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PartitionFunctionKeyContext : public PartitionFunctionDefinitionContext {
  public:
    PartitionFunctionKeyContext(PartitionFunctionDefinitionContext *ctx);

    antlr4::Token *algType = nullptr;
    antlr4::tree::TerminalNode *KEY();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *LINEAR();
    antlr4::tree::TerminalNode *ALGORITHM();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PartitionFunctionHashContext : public PartitionFunctionDefinitionContext {
  public:
    PartitionFunctionHashContext(PartitionFunctionDefinitionContext *ctx);

    antlr4::tree::TerminalNode *HASH();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *LINEAR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PartitionFunctionListContext : public PartitionFunctionDefinitionContext {
  public:
    PartitionFunctionListContext(PartitionFunctionDefinitionContext *ctx);

    antlr4::tree::TerminalNode *LIST();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *COLUMNS();
    UidListContext *uidList();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PartitionFunctionRangeContext : public PartitionFunctionDefinitionContext {
  public:
    PartitionFunctionRangeContext(PartitionFunctionDefinitionContext *ctx);

    antlr4::tree::TerminalNode *RANGE();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *COLUMNS();
    UidListContext *uidList();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  PartitionFunctionDefinitionContext* partitionFunctionDefinition();

  class  SubpartitionFunctionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    SubpartitionFunctionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    SubpartitionFunctionDefinitionContext() : antlr4::ParserRuleContext() { }
    void copyFrom(SubpartitionFunctionDefinitionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SubPartitionFunctionHashContext : public SubpartitionFunctionDefinitionContext {
  public:
    SubPartitionFunctionHashContext(SubpartitionFunctionDefinitionContext *ctx);

    antlr4::tree::TerminalNode *HASH();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *LINEAR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SubPartitionFunctionKeyContext : public SubpartitionFunctionDefinitionContext {
  public:
    SubPartitionFunctionKeyContext(SubpartitionFunctionDefinitionContext *ctx);

    antlr4::Token *algType = nullptr;
    antlr4::tree::TerminalNode *KEY();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *LINEAR();
    antlr4::tree::TerminalNode *ALGORITHM();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  SubpartitionFunctionDefinitionContext* subpartitionFunctionDefinition();

  class  PartitionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    PartitionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PartitionDefinitionContext() : antlr4::ParserRuleContext() { }
    void copyFrom(PartitionDefinitionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PartitionComparisionContext : public PartitionDefinitionContext {
  public:
    PartitionComparisionContext(PartitionDefinitionContext *ctx);

    antlr4::tree::TerminalNode *PARTITION();
    UidContext *uid();
    antlr4::tree::TerminalNode *VALUES();
    antlr4::tree::TerminalNode *LESS();
    antlr4::tree::TerminalNode *THAN();
    std::vector<PartitionDefinerAtomContext *> partitionDefinerAtom();
    PartitionDefinerAtomContext* partitionDefinerAtom(size_t i);
    std::vector<PartitionOptionContext *> partitionOption();
    PartitionOptionContext* partitionOption(size_t i);
    std::vector<SubpartitionDefinitionContext *> subpartitionDefinition();
    SubpartitionDefinitionContext* subpartitionDefinition(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PartitionListAtomContext : public PartitionDefinitionContext {
  public:
    PartitionListAtomContext(PartitionDefinitionContext *ctx);

    antlr4::tree::TerminalNode *PARTITION();
    UidContext *uid();
    antlr4::tree::TerminalNode *VALUES();
    antlr4::tree::TerminalNode *IN();
    std::vector<PartitionDefinerAtomContext *> partitionDefinerAtom();
    PartitionDefinerAtomContext* partitionDefinerAtom(size_t i);
    std::vector<PartitionOptionContext *> partitionOption();
    PartitionOptionContext* partitionOption(size_t i);
    std::vector<SubpartitionDefinitionContext *> subpartitionDefinition();
    SubpartitionDefinitionContext* subpartitionDefinition(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PartitionListVectorContext : public PartitionDefinitionContext {
  public:
    PartitionListVectorContext(PartitionDefinitionContext *ctx);

    antlr4::tree::TerminalNode *PARTITION();
    UidContext *uid();
    antlr4::tree::TerminalNode *VALUES();
    antlr4::tree::TerminalNode *IN();
    std::vector<PartitionDefinerVectorContext *> partitionDefinerVector();
    PartitionDefinerVectorContext* partitionDefinerVector(size_t i);
    std::vector<PartitionOptionContext *> partitionOption();
    PartitionOptionContext* partitionOption(size_t i);
    std::vector<SubpartitionDefinitionContext *> subpartitionDefinition();
    SubpartitionDefinitionContext* subpartitionDefinition(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PartitionSimpleContext : public PartitionDefinitionContext {
  public:
    PartitionSimpleContext(PartitionDefinitionContext *ctx);

    antlr4::tree::TerminalNode *PARTITION();
    UidContext *uid();
    std::vector<PartitionOptionContext *> partitionOption();
    PartitionOptionContext* partitionOption(size_t i);
    std::vector<SubpartitionDefinitionContext *> subpartitionDefinition();
    SubpartitionDefinitionContext* subpartitionDefinition(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  PartitionDefinitionContext* partitionDefinition();

  class  PartitionDefinerAtomContext : public antlr4::ParserRuleContext {
  public:
    PartitionDefinerAtomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstantContext *constant();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *MAXVALUE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionDefinerAtomContext* partitionDefinerAtom();

  class  PartitionDefinerVectorContext : public antlr4::ParserRuleContext {
  public:
    PartitionDefinerVectorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PartitionDefinerAtomContext *> partitionDefinerAtom();
    PartitionDefinerAtomContext* partitionDefinerAtom(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionDefinerVectorContext* partitionDefinerVector();

  class  SubpartitionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    SubpartitionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUBPARTITION();
    UidContext *uid();
    std::vector<PartitionOptionContext *> partitionOption();
    PartitionOptionContext* partitionOption(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubpartitionDefinitionContext* subpartitionDefinition();

  class  PartitionOptionContext : public antlr4::ParserRuleContext {
  public:
    PartitionOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PartitionOptionContext() : antlr4::ParserRuleContext() { }
    void copyFrom(PartitionOptionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PartitionOptionCommentContext : public PartitionOptionContext {
  public:
    PartitionOptionCommentContext(PartitionOptionContext *ctx);

    antlr4::Token *comment = nullptr;
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PartitionOptionNodeGroupContext : public PartitionOptionContext {
  public:
    PartitionOptionNodeGroupContext(PartitionOptionContext *ctx);

    MySQLParser::UidContext *nodegroup = nullptr;
    antlr4::tree::TerminalNode *NODEGROUP();
    UidContext *uid();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PartitionOptionIndexDirectoryContext : public PartitionOptionContext {
  public:
    PartitionOptionIndexDirectoryContext(PartitionOptionContext *ctx);

    antlr4::Token *indexDirectory = nullptr;
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *DIRECTORY();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PartitionOptionMaxRowsContext : public PartitionOptionContext {
  public:
    PartitionOptionMaxRowsContext(PartitionOptionContext *ctx);

    MySQLParser::DecimalLiteralContext *maxRows = nullptr;
    antlr4::tree::TerminalNode *MAX_ROWS();
    DecimalLiteralContext *decimalLiteral();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PartitionOptionTablespaceContext : public PartitionOptionContext {
  public:
    PartitionOptionTablespaceContext(PartitionOptionContext *ctx);

    MySQLParser::UidContext *tablespace = nullptr;
    antlr4::tree::TerminalNode *TABLESPACE();
    UidContext *uid();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PartitionOptionEngineContext : public PartitionOptionContext {
  public:
    PartitionOptionEngineContext(PartitionOptionContext *ctx);

    antlr4::tree::TerminalNode *ENGINE();
    EngineNameContext *engineName();
    antlr4::tree::TerminalNode *STORAGE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PartitionOptionMinRowsContext : public PartitionOptionContext {
  public:
    PartitionOptionMinRowsContext(PartitionOptionContext *ctx);

    MySQLParser::DecimalLiteralContext *minRows = nullptr;
    antlr4::tree::TerminalNode *MIN_ROWS();
    DecimalLiteralContext *decimalLiteral();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PartitionOptionDataDirectoryContext : public PartitionOptionContext {
  public:
    PartitionOptionDataDirectoryContext(PartitionOptionContext *ctx);

    antlr4::Token *dataDirectory = nullptr;
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *DIRECTORY();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  PartitionOptionContext* partitionOption();

  class  AlterDatabaseContext : public antlr4::ParserRuleContext {
  public:
    AlterDatabaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AlterDatabaseContext() : antlr4::ParserRuleContext() { }
    void copyFrom(AlterDatabaseContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AlterUpgradeNameContext : public AlterDatabaseContext {
  public:
    AlterUpgradeNameContext(AlterDatabaseContext *ctx);

    antlr4::Token *dbFormat = nullptr;
    antlr4::tree::TerminalNode *ALTER();
    UidContext *uid();
    antlr4::tree::TerminalNode *UPGRADE();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *DIRECTORY();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *SCHEMA();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterSimpleDatabaseContext : public AlterDatabaseContext {
  public:
    AlterSimpleDatabaseContext(AlterDatabaseContext *ctx);

    antlr4::Token *dbFormat = nullptr;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *SCHEMA();
    UidContext *uid();
    std::vector<CreateDatabaseOptionContext *> createDatabaseOption();
    CreateDatabaseOptionContext* createDatabaseOption(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  AlterDatabaseContext* alterDatabase();

  class  AlterEventContext : public antlr4::ParserRuleContext {
  public:
    AlterEventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *EVENT();
    std::vector<FullIdContext *> fullId();
    FullIdContext* fullId(size_t i);
    OwnerStatementContext *ownerStatement();
    std::vector<antlr4::tree::TerminalNode *> ON();
    antlr4::tree::TerminalNode* ON(size_t i);
    antlr4::tree::TerminalNode *SCHEDULE();
    ScheduleExpressionContext *scheduleExpression();
    antlr4::tree::TerminalNode *COMPLETION();
    antlr4::tree::TerminalNode *PRESERVE();
    antlr4::tree::TerminalNode *RENAME();
    antlr4::tree::TerminalNode *TO();
    EnableTypeContext *enableType();
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *DO();
    RoutineBodyContext *routineBody();
    antlr4::tree::TerminalNode *NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterEventContext* alterEvent();

  class  AlterFunctionContext : public antlr4::ParserRuleContext {
  public:
    AlterFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *FUNCTION();
    FullIdContext *fullId();
    std::vector<RoutineOptionContext *> routineOption();
    RoutineOptionContext* routineOption(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterFunctionContext* alterFunction();

  class  AlterInstanceContext : public antlr4::ParserRuleContext {
  public:
    AlterInstanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *INSTANCE();
    antlr4::tree::TerminalNode *ROTATE();
    antlr4::tree::TerminalNode *INNODB();
    antlr4::tree::TerminalNode *MASTER();
    antlr4::tree::TerminalNode *KEY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterInstanceContext* alterInstance();

  class  AlterLogfileGroupContext : public antlr4::ParserRuleContext {
  public:
    AlterLogfileGroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *LOGFILE();
    antlr4::tree::TerminalNode *GROUP();
    UidContext *uid();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *UNDOFILE();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *ENGINE();
    EngineNameContext *engineName();
    antlr4::tree::TerminalNode *INITIAL_SIZE();
    FileSizeLiteralContext *fileSizeLiteral();
    antlr4::tree::TerminalNode *WAIT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterLogfileGroupContext* alterLogfileGroup();

  class  AlterProcedureContext : public antlr4::ParserRuleContext {
  public:
    AlterProcedureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *PROCEDURE();
    FullIdContext *fullId();
    std::vector<RoutineOptionContext *> routineOption();
    RoutineOptionContext* routineOption(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterProcedureContext* alterProcedure();

  class  AlterServerContext : public antlr4::ParserRuleContext {
  public:
    AlterServerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *SERVER();
    UidContext *uid();
    antlr4::tree::TerminalNode *OPTIONS();
    std::vector<ServerOptionContext *> serverOption();
    ServerOptionContext* serverOption(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterServerContext* alterServer();

  class  AlterTableContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *intimeAction = nullptr;;
    AlterTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *TABLE();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *IGNORE();
    std::vector<AlterSpecificationContext *> alterSpecification();
    AlterSpecificationContext* alterSpecification(size_t i);
    PartitionDefinitionsContext *partitionDefinitions();
    antlr4::tree::TerminalNode *ONLINE();
    antlr4::tree::TerminalNode *OFFLINE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterTableContext* alterTable();

  class  AlterTablespaceContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *objectAction = nullptr;;
    AlterTablespaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *TABLESPACE();
    UidContext *uid();
    antlr4::tree::TerminalNode *DATAFILE();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *ENGINE();
    EngineNameContext *engineName();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *INITIAL_SIZE();
    FileSizeLiteralContext *fileSizeLiteral();
    antlr4::tree::TerminalNode *WAIT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterTablespaceContext* alterTablespace();

  class  AlterViewContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *algType = nullptr;;
    antlr4::Token *secContext = nullptr;;
    antlr4::Token *checkOpt = nullptr;;
    AlterViewContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *VIEW();
    FullIdContext *fullId();
    antlr4::tree::TerminalNode *AS();
    SelectStatementContext *selectStatement();
    antlr4::tree::TerminalNode *ALGORITHM();
    OwnerStatementContext *ownerStatement();
    antlr4::tree::TerminalNode *SQL();
    antlr4::tree::TerminalNode *SECURITY();
    UidListContext *uidList();
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

  class  AlterSpecificationContext : public antlr4::ParserRuleContext {
  public:
    AlterSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AlterSpecificationContext() : antlr4::ParserRuleContext() { }
    void copyFrom(AlterSpecificationContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AlterByDisableKeysContext : public AlterSpecificationContext {
  public:
    AlterByDisableKeysContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *KEYS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterByDefaultCharsetContext : public AlterSpecificationContext {
  public:
    AlterByDefaultCharsetContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *SET();
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *COLLATE();
    CollationNameContext *collationName();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterByRenameColumnContext : public AlterSpecificationContext {
  public:
    AlterByRenameColumnContext(AlterSpecificationContext *ctx);

    MySQLParser::UidContext *oldColumn = nullptr;
    MySQLParser::UidContext *newColumn = nullptr;
    antlr4::tree::TerminalNode *RENAME();
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *TO();
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterByConvertCharsetContext : public AlterSpecificationContext {
  public:
    AlterByConvertCharsetContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *CONVERT();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *SET();
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *COLLATE();
    CollationNameContext *collationName();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterByAddPartitionContext : public AlterSpecificationContext {
  public:
    AlterByAddPartitionContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *PARTITION();
    std::vector<PartitionDefinitionContext *> partitionDefinition();
    PartitionDefinitionContext* partitionDefinition(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterByAddForeignKeyContext : public AlterSpecificationContext {
  public:
    AlterByAddForeignKeyContext(AlterSpecificationContext *ctx);

    MySQLParser::UidContext *name = nullptr;
    MySQLParser::UidContext *indexName = nullptr;
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *FOREIGN();
    antlr4::tree::TerminalNode *KEY();
    IndexColumnNamesContext *indexColumnNames();
    ReferenceDefinitionContext *referenceDefinition();
    antlr4::tree::TerminalNode *CONSTRAINT();
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterByRenameIndexContext : public AlterSpecificationContext {
  public:
    AlterByRenameIndexContext(AlterSpecificationContext *ctx);

    antlr4::Token *indexFormat = nullptr;
    antlr4::tree::TerminalNode *RENAME();
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *KEY();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterByRemovePartitioningContext : public AlterSpecificationContext {
  public:
    AlterByRemovePartitioningContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *REMOVE();
    antlr4::tree::TerminalNode *PARTITIONING();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterByRenameContext : public AlterSpecificationContext {
  public:
    AlterByRenameContext(AlterSpecificationContext *ctx);

    antlr4::Token *renameFormat = nullptr;
    antlr4::tree::TerminalNode *RENAME();
    UidContext *uid();
    FullIdContext *fullId();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *AS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterByOptimizePartitionContext : public AlterSpecificationContext {
  public:
    AlterByOptimizePartitionContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *OPTIMIZE();
    antlr4::tree::TerminalNode *PARTITION();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *ALL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterByImportTablespaceContext : public AlterSpecificationContext {
  public:
    AlterByImportTablespaceContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *IMPORT();
    antlr4::tree::TerminalNode *TABLESPACE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterByCoalescePartitionContext : public AlterSpecificationContext {
  public:
    AlterByCoalescePartitionContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *COALESCE();
    antlr4::tree::TerminalNode *PARTITION();
    DecimalLiteralContext *decimalLiteral();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterByAddColumnsContext : public AlterSpecificationContext {
  public:
    AlterByAddColumnsContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *ADD();
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    std::vector<ColumnDefinitionContext *> columnDefinition();
    ColumnDefinitionContext* columnDefinition(size_t i);
    antlr4::tree::TerminalNode *COLUMN();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterByDropForeignKeyContext : public AlterSpecificationContext {
  public:
    AlterByDropForeignKeyContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *FOREIGN();
    antlr4::tree::TerminalNode *KEY();
    UidContext *uid();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterByAddCheckTableConstraintContext : public AlterSpecificationContext {
  public:
    AlterByAddCheckTableConstraintContext(AlterSpecificationContext *ctx);

    MySQLParser::UidContext *name = nullptr;
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *CHECK();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CONSTRAINT();
    UidContext *uid();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterByRebuildPartitionContext : public AlterSpecificationContext {
  public:
    AlterByRebuildPartitionContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *REBUILD();
    antlr4::tree::TerminalNode *PARTITION();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *ALL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterByUpgradePartitioningContext : public AlterSpecificationContext {
  public:
    AlterByUpgradePartitioningContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *UPGRADE();
    antlr4::tree::TerminalNode *PARTITIONING();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterByRepairPartitionContext : public AlterSpecificationContext {
  public:
    AlterByRepairPartitionContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *REPAIR();
    antlr4::tree::TerminalNode *PARTITION();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *ALL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterByExchangePartitionContext : public AlterSpecificationContext {
  public:
    AlterByExchangePartitionContext(AlterSpecificationContext *ctx);

    antlr4::Token *validationFormat = nullptr;
    antlr4::tree::TerminalNode *EXCHANGE();
    antlr4::tree::TerminalNode *PARTITION();
    UidContext *uid();
    std::vector<antlr4::tree::TerminalNode *> WITH();
    antlr4::tree::TerminalNode* WITH(size_t i);
    antlr4::tree::TerminalNode *TABLE();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *VALIDATION();
    antlr4::tree::TerminalNode *WITHOUT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterByAddIndexContext : public AlterSpecificationContext {
  public:
    AlterByAddIndexContext(AlterSpecificationContext *ctx);

    antlr4::Token *indexFormat = nullptr;
    antlr4::tree::TerminalNode *ADD();
    IndexColumnNamesContext *indexColumnNames();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *KEY();
    UidContext *uid();
    IndexTypeContext *indexType();
    std::vector<IndexOptionContext *> indexOption();
    IndexOptionContext* indexOption(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterByDropColumnContext : public AlterSpecificationContext {
  public:
    AlterByDropColumnContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *DROP();
    UidContext *uid();
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *RESTRICT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterByImportPartitionContext : public AlterSpecificationContext {
  public:
    AlterByImportPartitionContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *IMPORT();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *TABLESPACE();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *ALL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterByChangeDefaultContext : public AlterSpecificationContext {
  public:
    AlterByChangeDefaultContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *ALTER();
    UidContext *uid();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *DEFAULT();
    DefaultValueContext *defaultValue();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *COLUMN();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterByForceContext : public AlterSpecificationContext {
  public:
    AlterByForceContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *FORCE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterByDropPartitionContext : public AlterSpecificationContext {
  public:
    AlterByDropPartitionContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *PARTITION();
    UidListContext *uidList();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterByAddSpecialIndexContext : public AlterSpecificationContext {
  public:
    AlterByAddSpecialIndexContext(AlterSpecificationContext *ctx);

    antlr4::Token *keyType = nullptr;
    antlr4::Token *indexFormat = nullptr;
    antlr4::tree::TerminalNode *ADD();
    IndexColumnNamesContext *indexColumnNames();
    antlr4::tree::TerminalNode *FULLTEXT();
    antlr4::tree::TerminalNode *SPATIAL();
    UidContext *uid();
    std::vector<IndexOptionContext *> indexOption();
    IndexOptionContext* indexOption(size_t i);
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *KEY();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterByModifyColumnContext : public AlterSpecificationContext {
  public:
    AlterByModifyColumnContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *MODIFY();
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    ColumnDefinitionContext *columnDefinition();
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *AFTER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterByTableOptionContext : public AlterSpecificationContext {
  public:
    AlterByTableOptionContext(AlterSpecificationContext *ctx);

    std::vector<TableOptionContext *> tableOption();
    TableOptionContext* tableOption(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterByDropPrimaryKeyContext : public AlterSpecificationContext {
  public:
    AlterByDropPrimaryKeyContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *PRIMARY();
    antlr4::tree::TerminalNode *KEY();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterByLockContext : public AlterSpecificationContext {
  public:
    AlterByLockContext(AlterSpecificationContext *ctx);

    antlr4::Token *lockType = nullptr;
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *SHARED();
    antlr4::tree::TerminalNode *EXCLUSIVE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterByDiscardPartitionContext : public AlterSpecificationContext {
  public:
    AlterByDiscardPartitionContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *DISCARD();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *TABLESPACE();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *ALL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterByDiscardTablespaceContext : public AlterSpecificationContext {
  public:
    AlterByDiscardTablespaceContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *DISCARD();
    antlr4::tree::TerminalNode *TABLESPACE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterByValidateContext : public AlterSpecificationContext {
  public:
    AlterByValidateContext(AlterSpecificationContext *ctx);

    antlr4::Token *validationFormat = nullptr;
    antlr4::tree::TerminalNode *VALIDATION();
    antlr4::tree::TerminalNode *WITHOUT();
    antlr4::tree::TerminalNode *WITH();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterByAddPrimaryKeyContext : public AlterSpecificationContext {
  public:
    AlterByAddPrimaryKeyContext(AlterSpecificationContext *ctx);

    MySQLParser::UidContext *name = nullptr;
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *PRIMARY();
    antlr4::tree::TerminalNode *KEY();
    IndexColumnNamesContext *indexColumnNames();
    antlr4::tree::TerminalNode *CONSTRAINT();
    IndexTypeContext *indexType();
    std::vector<IndexOptionContext *> indexOption();
    IndexOptionContext* indexOption(size_t i);
    UidContext *uid();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterByCheckPartitionContext : public AlterSpecificationContext {
  public:
    AlterByCheckPartitionContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *PARTITION();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *ALL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterByEnableKeysContext : public AlterSpecificationContext {
  public:
    AlterByEnableKeysContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *KEYS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterByReorganizePartitionContext : public AlterSpecificationContext {
  public:
    AlterByReorganizePartitionContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *REORGANIZE();
    antlr4::tree::TerminalNode *PARTITION();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *INTO();
    std::vector<PartitionDefinitionContext *> partitionDefinition();
    PartitionDefinitionContext* partitionDefinition(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterBySetAlgorithmContext : public AlterSpecificationContext {
  public:
    AlterBySetAlgorithmContext(AlterSpecificationContext *ctx);

    antlr4::Token *algType = nullptr;
    antlr4::tree::TerminalNode *ALGORITHM();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *INPLACE();
    antlr4::tree::TerminalNode *COPY();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterByAnalyzePartitionContext : public AlterSpecificationContext {
  public:
    AlterByAnalyzePartitionContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *ANALYZE();
    antlr4::tree::TerminalNode *PARTITION();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *ALL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterByChangeColumnContext : public AlterSpecificationContext {
  public:
    AlterByChangeColumnContext(AlterSpecificationContext *ctx);

    MySQLParser::UidContext *oldColumn = nullptr;
    MySQLParser::UidContext *newColumn = nullptr;
    MySQLParser::UidContext *afterColumn = nullptr;
    antlr4::tree::TerminalNode *CHANGE();
    ColumnDefinitionContext *columnDefinition();
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *AFTER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterByAddUniqueKeyContext : public AlterSpecificationContext {
  public:
    AlterByAddUniqueKeyContext(AlterSpecificationContext *ctx);

    MySQLParser::UidContext *name = nullptr;
    antlr4::Token *indexFormat = nullptr;
    MySQLParser::UidContext *indexName = nullptr;
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *UNIQUE();
    IndexColumnNamesContext *indexColumnNames();
    antlr4::tree::TerminalNode *CONSTRAINT();
    IndexTypeContext *indexType();
    std::vector<IndexOptionContext *> indexOption();
    IndexOptionContext* indexOption(size_t i);
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *KEY();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterByTruncatePartitionContext : public AlterSpecificationContext {
  public:
    AlterByTruncatePartitionContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *TRUNCATE();
    antlr4::tree::TerminalNode *PARTITION();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *ALL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterByDropIndexContext : public AlterSpecificationContext {
  public:
    AlterByDropIndexContext(AlterSpecificationContext *ctx);

    antlr4::Token *indexFormat = nullptr;
    antlr4::tree::TerminalNode *DROP();
    UidContext *uid();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *KEY();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterByAddColumnContext : public AlterSpecificationContext {
  public:
    AlterByAddColumnContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *ADD();
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    ColumnDefinitionContext *columnDefinition();
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *AFTER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterByOrderContext : public AlterSpecificationContext {
  public:
    AlterByOrderContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *BY();
    UidListContext *uidList();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  AlterSpecificationContext* alterSpecification();

  class  DropDatabaseContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *dbFormat = nullptr;;
    DropDatabaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    UidContext *uid();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *SCHEMA();
    IfExistsContext *ifExists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropDatabaseContext* dropDatabase();

  class  DropEventContext : public antlr4::ParserRuleContext {
  public:
    DropEventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *EVENT();
    FullIdContext *fullId();
    IfExistsContext *ifExists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropEventContext* dropEvent();

  class  DropIndexContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *intimeAction = nullptr;;
    antlr4::Token *algType = nullptr;;
    antlr4::Token *lockType = nullptr;;
    DropIndexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *INDEX();
    UidContext *uid();
    antlr4::tree::TerminalNode *ON();
    TableNameContext *tableName();
    std::vector<antlr4::tree::TerminalNode *> ALGORITHM();
    antlr4::tree::TerminalNode* ALGORITHM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LOCK();
    antlr4::tree::TerminalNode* LOCK(size_t i);
    antlr4::tree::TerminalNode *ONLINE();
    antlr4::tree::TerminalNode *OFFLINE();
    std::vector<antlr4::tree::TerminalNode *> DEFAULT();
    antlr4::tree::TerminalNode* DEFAULT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INPLACE();
    antlr4::tree::TerminalNode* INPLACE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COPY();
    antlr4::tree::TerminalNode* COPY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NONE();
    antlr4::tree::TerminalNode* NONE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SHARED();
    antlr4::tree::TerminalNode* SHARED(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EXCLUSIVE();
    antlr4::tree::TerminalNode* EXCLUSIVE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropIndexContext* dropIndex();

  class  DropLogfileGroupContext : public antlr4::ParserRuleContext {
  public:
    DropLogfileGroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *LOGFILE();
    antlr4::tree::TerminalNode *GROUP();
    UidContext *uid();
    antlr4::tree::TerminalNode *ENGINE();
    EngineNameContext *engineName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropLogfileGroupContext* dropLogfileGroup();

  class  DropProcedureContext : public antlr4::ParserRuleContext {
  public:
    DropProcedureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *PROCEDURE();
    FullIdContext *fullId();
    IfExistsContext *ifExists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropProcedureContext* dropProcedure();

  class  DropFunctionContext : public antlr4::ParserRuleContext {
  public:
    DropFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *FUNCTION();
    FullIdContext *fullId();
    IfExistsContext *ifExists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropFunctionContext* dropFunction();

  class  DropServerContext : public antlr4::ParserRuleContext {
  public:
    DropServerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *SERVER();
    UidContext *uid();
    IfExistsContext *ifExists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropServerContext* dropServer();

  class  DropTableContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *dropType = nullptr;;
    DropTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *TABLE();
    TablesContext *tables();
    antlr4::tree::TerminalNode *TEMPORARY();
    IfExistsContext *ifExists();
    antlr4::tree::TerminalNode *RESTRICT();
    antlr4::tree::TerminalNode *CASCADE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropTableContext* dropTable();

  class  DropTablespaceContext : public antlr4::ParserRuleContext {
  public:
    DropTablespaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *TABLESPACE();
    UidContext *uid();
    antlr4::tree::TerminalNode *ENGINE();
    EngineNameContext *engineName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropTablespaceContext* dropTablespace();

  class  DropTriggerContext : public antlr4::ParserRuleContext {
  public:
    DropTriggerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *TRIGGER();
    FullIdContext *fullId();
    IfExistsContext *ifExists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropTriggerContext* dropTrigger();

  class  DropViewContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *dropType = nullptr;;
    DropViewContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *VIEW();
    std::vector<FullIdContext *> fullId();
    FullIdContext* fullId(size_t i);
    IfExistsContext *ifExists();
    antlr4::tree::TerminalNode *RESTRICT();
    antlr4::tree::TerminalNode *CASCADE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropViewContext* dropView();

  class  RenameTableContext : public antlr4::ParserRuleContext {
  public:
    RenameTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RENAME();
    antlr4::tree::TerminalNode *TABLE();
    std::vector<RenameTableClauseContext *> renameTableClause();
    RenameTableClauseContext* renameTableClause(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RenameTableContext* renameTable();

  class  RenameTableClauseContext : public antlr4::ParserRuleContext {
  public:
    RenameTableClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TableNameContext *> tableName();
    TableNameContext* tableName(size_t i);
    antlr4::tree::TerminalNode *TO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RenameTableClauseContext* renameTableClause();

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

  class  CallStatementContext : public antlr4::ParserRuleContext {
  public:
    CallStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CALL();
    FullIdContext *fullId();
    ConstantsContext *constants();
    ExpressionsContext *expressions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CallStatementContext* callStatement();

  class  DeleteStatementContext : public antlr4::ParserRuleContext {
  public:
    DeleteStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SingleDeleteStatementContext *singleDeleteStatement();
    MultipleDeleteStatementContext *multipleDeleteStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeleteStatementContext* deleteStatement();

  class  DoStatementContext : public antlr4::ParserRuleContext {
  public:
    DoStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DO();
    ExpressionsContext *expressions();

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

  class  InsertStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *priority = nullptr;;
    MySQLParser::UidListContext *partitions = nullptr;;
    MySQLParser::UidListContext *columns = nullptr;;
    MySQLParser::UpdatedElementContext *setFirst = nullptr;;
    MySQLParser::UpdatedElementContext *updatedElementContext = nullptr;;
    std::vector<UpdatedElementContext *> setElements;;
    MySQLParser::UpdatedElementContext *duplicatedFirst = nullptr;;
    std::vector<UpdatedElementContext *> duplicatedElements;;
    InsertStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INSERT();
    TableNameContext *tableName();
    InsertStatementValueContext *insertStatementValue();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *PARTITION();
    std::vector<UpdatedElementContext *> updatedElement();
    UpdatedElementContext* updatedElement(size_t i);
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *DUPLICATE();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *UPDATE();
    std::vector<UidListContext *> uidList();
    UidListContext* uidList(size_t i);
    antlr4::tree::TerminalNode *LOW_PRIORITY();
    antlr4::tree::TerminalNode *DELAYED();
    antlr4::tree::TerminalNode *HIGH_PRIORITY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InsertStatementContext* insertStatement();

  class  LoadDataStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *priority = nullptr;;
    antlr4::Token *filename = nullptr;;
    antlr4::Token *violation = nullptr;;
    MySQLParser::CharsetNameContext *charset = nullptr;;
    antlr4::Token *fieldsFormat = nullptr;;
    antlr4::Token *linesFormat = nullptr;;
    LoadDataStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOAD();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *INFILE();
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *TABLE();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *PARTITION();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *CHARACTER();
    std::vector<antlr4::tree::TerminalNode *> SET();
    antlr4::tree::TerminalNode* SET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LINES();
    antlr4::tree::TerminalNode* LINES(size_t i);
    std::vector<antlr4::tree::TerminalNode *> IGNORE();
    antlr4::tree::TerminalNode* IGNORE(size_t i);
    DecimalLiteralContext *decimalLiteral();
    std::vector<AssignmentFieldContext *> assignmentField();
    AssignmentFieldContext* assignmentField(size_t i);
    std::vector<UpdatedElementContext *> updatedElement();
    UpdatedElementContext* updatedElement(size_t i);
    CharsetNameContext *charsetName();
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
    antlr4::Token *priority = nullptr;;
    antlr4::Token *filename = nullptr;;
    antlr4::Token *violation = nullptr;;
    MySQLParser::CharsetNameContext *charset = nullptr;;
    antlr4::Token *tag = nullptr;;
    antlr4::Token *linesFormat = nullptr;;
    LoadXmlStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOAD();
    antlr4::tree::TerminalNode *XML();
    antlr4::tree::TerminalNode *INFILE();
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *TABLE();
    TableNameContext *tableName();
    std::vector<antlr4::tree::TerminalNode *> STRING_LITERAL();
    antlr4::tree::TerminalNode* STRING_LITERAL(size_t i);
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *CHARACTER();
    std::vector<antlr4::tree::TerminalNode *> SET();
    antlr4::tree::TerminalNode* SET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ROWS();
    antlr4::tree::TerminalNode* ROWS(size_t i);
    antlr4::tree::TerminalNode *IDENTIFIED();
    antlr4::tree::TerminalNode *BY();
    std::vector<antlr4::tree::TerminalNode *> IGNORE();
    antlr4::tree::TerminalNode* IGNORE(size_t i);
    DecimalLiteralContext *decimalLiteral();
    std::vector<AssignmentFieldContext *> assignmentField();
    AssignmentFieldContext* assignmentField(size_t i);
    std::vector<UpdatedElementContext *> updatedElement();
    UpdatedElementContext* updatedElement(size_t i);
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *LOW_PRIORITY();
    antlr4::tree::TerminalNode *CONCURRENT();
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *LINES();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LoadXmlStatementContext* loadXmlStatement();

  class  ReplaceStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *priority = nullptr;;
    MySQLParser::UidListContext *partitions = nullptr;;
    MySQLParser::UidListContext *columns = nullptr;;
    MySQLParser::UpdatedElementContext *setFirst = nullptr;;
    MySQLParser::UpdatedElementContext *updatedElementContext = nullptr;;
    std::vector<UpdatedElementContext *> setElements;;
    ReplaceStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPLACE();
    TableNameContext *tableName();
    InsertStatementValueContext *insertStatementValue();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *PARTITION();
    std::vector<UpdatedElementContext *> updatedElement();
    UpdatedElementContext* updatedElement(size_t i);
    std::vector<UidListContext *> uidList();
    UidListContext* uidList(size_t i);
    antlr4::tree::TerminalNode *LOW_PRIORITY();
    antlr4::tree::TerminalNode *DELAYED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReplaceStatementContext* replaceStatement();

  class  SelectStatementContext : public antlr4::ParserRuleContext {
  public:
    SelectStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    SelectStatementContext() : antlr4::ParserRuleContext() { }
    void copyFrom(SelectStatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  UnionSelectContext : public SelectStatementContext {
  public:
    UnionSelectContext(SelectStatementContext *ctx);

    antlr4::Token *unionType = nullptr;
    QuerySpecificationNointoContext *querySpecificationNointo();
    std::vector<UnionStatementContext *> unionStatement();
    UnionStatementContext* unionStatement(size_t i);
    antlr4::tree::TerminalNode *UNION();
    OrderByClauseContext *orderByClause();
    LimitClauseContext *limitClause();
    LockClauseContext *lockClause();
    QuerySpecificationContext *querySpecification();
    QueryExpressionContext *queryExpression();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *DISTINCT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UnionParenthesisSelectContext : public SelectStatementContext {
  public:
    UnionParenthesisSelectContext(SelectStatementContext *ctx);

    antlr4::Token *unionType = nullptr;
    QueryExpressionNointoContext *queryExpressionNointo();
    std::vector<UnionParenthesisContext *> unionParenthesis();
    UnionParenthesisContext* unionParenthesis(size_t i);
    antlr4::tree::TerminalNode *UNION();
    QueryExpressionContext *queryExpression();
    OrderByClauseContext *orderByClause();
    LimitClauseContext *limitClause();
    LockClauseContext *lockClause();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *DISTINCT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SimpleSelectContext : public SelectStatementContext {
  public:
    SimpleSelectContext(SelectStatementContext *ctx);

    QuerySpecificationContext *querySpecification();
    LockClauseContext *lockClause();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParenthesisSelectContext : public SelectStatementContext {
  public:
    ParenthesisSelectContext(SelectStatementContext *ctx);

    QueryExpressionContext *queryExpression();
    LockClauseContext *lockClause();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  SelectStatementContext* selectStatement();

  class  UpdateStatementContext : public antlr4::ParserRuleContext {
  public:
    UpdateStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SingleUpdateStatementContext *singleUpdateStatement();
    MultipleUpdateStatementContext *multipleUpdateStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UpdateStatementContext* updateStatement();

  class  InsertStatementValueContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *insertFormat = nullptr;;
    InsertStatementValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SelectStatementContext *selectStatement();
    std::vector<ExpressionsWithDefaultsContext *> expressionsWithDefaults();
    ExpressionsWithDefaultsContext* expressionsWithDefaults(size_t i);
    antlr4::tree::TerminalNode *VALUES();
    antlr4::tree::TerminalNode *VALUE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InsertStatementValueContext* insertStatementValue();

  class  UpdatedElementContext : public antlr4::ParserRuleContext {
  public:
    UpdatedElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FullColumnNameContext *fullColumnName();
    ExpressionOrDefaultContext *expressionOrDefault();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UpdatedElementContext* updatedElement();

  class  AssignmentFieldContext : public antlr4::ParserRuleContext {
  public:
    AssignmentFieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UidContext *uid();
    antlr4::tree::TerminalNode *LOCAL_ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentFieldContext* assignmentField();

  class  LockClauseContext : public antlr4::ParserRuleContext {
  public:
    LockClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *SHARE();
    antlr4::tree::TerminalNode *MODE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LockClauseContext* lockClause();

  class  SingleDeleteStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *priority = nullptr;;
    MySQLParser::UidContext *alias = nullptr;;
    SingleDeleteStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *FROM();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *QUICK();
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *PARTITION();
    UidListContext *uidList();
    WhereClauseContext *whereClause();
    OrderByClauseContext *orderByClause();
    antlr4::tree::TerminalNode *LIMIT();
    DecimalLiteralContext *decimalLiteral();
    antlr4::tree::TerminalNode *LOW_PRIORITY();
    UidContext *uid();
    antlr4::tree::TerminalNode *AS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SingleDeleteStatementContext* singleDeleteStatement();

  class  MultipleDeleteStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *priority = nullptr;;
    MultipleDeleteStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELETE();
    std::vector<Delete_stmt_tableContext *> delete_stmt_table();
    Delete_stmt_tableContext* delete_stmt_table(size_t i);
    antlr4::tree::TerminalNode *FROM();
    TableSourcesContext *tableSources();
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *QUICK();
    antlr4::tree::TerminalNode *IGNORE();
    WhereClauseContext *whereClause();
    antlr4::tree::TerminalNode *LOW_PRIORITY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultipleDeleteStatementContext* multipleDeleteStatement();

  class  Delete_stmt_tableContext : public antlr4::ParserRuleContext {
  public:
    Delete_stmt_tableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableNameContext *tableName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delete_stmt_tableContext* delete_stmt_table();

  class  HandlerOpenStatementContext : public antlr4::ParserRuleContext {
  public:
    HandlerOpenStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HANDLER();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *OPEN();
    UidContext *uid();
    antlr4::tree::TerminalNode *AS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HandlerOpenStatementContext* handlerOpenStatement();

  class  HandlerReadIndexStatementContext : public antlr4::ParserRuleContext {
  public:
    MySQLParser::UidContext *index = nullptr;;
    antlr4::Token *moveOrder = nullptr;;
    HandlerReadIndexStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HANDLER();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *READ();
    UidContext *uid();
    ComparisonOperatorContext *comparisonOperator();
    ConstantsContext *constants();
    WhereClauseContext *whereClause();
    antlr4::tree::TerminalNode *LIMIT();
    DecimalLiteralContext *decimalLiteral();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *NEXT();
    antlr4::tree::TerminalNode *PREV();
    antlr4::tree::TerminalNode *LAST();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HandlerReadIndexStatementContext* handlerReadIndexStatement();

  class  HandlerReadStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *moveOrder = nullptr;;
    HandlerReadStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HANDLER();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *NEXT();
    WhereClauseContext *whereClause();
    antlr4::tree::TerminalNode *LIMIT();
    DecimalLiteralContext *decimalLiteral();

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

  class  SingleUpdateStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *priority = nullptr;;
    SingleUpdateStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UPDATE();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *SET();
    std::vector<UpdatedElementContext *> updatedElement();
    UpdatedElementContext* updatedElement(size_t i);
    antlr4::tree::TerminalNode *IGNORE();
    UidContext *uid();
    WhereClauseContext *whereClause();
    OrderByClauseContext *orderByClause();
    LimitClauseContext *limitClause();
    antlr4::tree::TerminalNode *LOW_PRIORITY();
    antlr4::tree::TerminalNode *AS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SingleUpdateStatementContext* singleUpdateStatement();

  class  MultipleUpdateStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *priority = nullptr;;
    MultipleUpdateStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UPDATE();
    TableSourcesContext *tableSources();
    antlr4::tree::TerminalNode *SET();
    std::vector<UpdatedElementContext *> updatedElement();
    UpdatedElementContext* updatedElement(size_t i);
    antlr4::tree::TerminalNode *IGNORE();
    WhereClauseContext *whereClause();
    antlr4::tree::TerminalNode *LOW_PRIORITY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultipleUpdateStatementContext* multipleUpdateStatement();

  class  OrderByClauseContext : public antlr4::ParserRuleContext {
  public:
    OrderByClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *BY();
    std::vector<OrderByExpressionContext *> orderByExpression();
    OrderByExpressionContext* orderByExpression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OrderByClauseContext* orderByClause();

  class  OrderByExpressionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *order = nullptr;;
    OrderByExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *DESC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OrderByExpressionContext* orderByExpression();

  class  TableSourcesContext : public antlr4::ParserRuleContext {
  public:
    TableSourcesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TableSourceContext *> tableSource();
    TableSourceContext* tableSource(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableSourcesContext* tableSources();

  class  TableSourceContext : public antlr4::ParserRuleContext {
  public:
    TableSourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TableSourceContext() : antlr4::ParserRuleContext() { }
    void copyFrom(TableSourceContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TableSourceNestedContext : public TableSourceContext {
  public:
    TableSourceNestedContext(TableSourceContext *ctx);

    TableSourceItemContext *tableSourceItem();
    std::vector<JoinPartContext *> joinPart();
    JoinPartContext* joinPart(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TableSourceBaseContext : public TableSourceContext {
  public:
    TableSourceBaseContext(TableSourceContext *ctx);

    TableSourceItemContext *tableSourceItem();
    std::vector<JoinPartContext *> joinPart();
    JoinPartContext* joinPart(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  TableSourceContext* tableSource();

  class  TableSourceItemContext : public antlr4::ParserRuleContext {
  public:
    TableSourceItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TableSourceItemContext() : antlr4::ParserRuleContext() { }
    void copyFrom(TableSourceItemContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SubqueryTableItemContext : public TableSourceItemContext {
  public:
    SubqueryTableItemContext(TableSourceItemContext *ctx);

    MySQLParser::SelectStatementContext *parenthesisSubquery = nullptr;
    MySQLParser::UidContext *alias = nullptr;
    UidContext *uid();
    SelectStatementContext *selectStatement();
    antlr4::tree::TerminalNode *AS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AtomTableItemContext : public TableSourceItemContext {
  public:
    AtomTableItemContext(TableSourceItemContext *ctx);

    MySQLParser::UidContext *alias = nullptr;
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *PARTITION();
    UidListContext *uidList();
    std::vector<IndexHintContext *> indexHint();
    IndexHintContext* indexHint(size_t i);
    UidContext *uid();
    antlr4::tree::TerminalNode *AS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TableSourcesItemContext : public TableSourceItemContext {
  public:
    TableSourcesItemContext(TableSourceItemContext *ctx);

    TableSourcesContext *tableSources();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  TableSourceItemContext* tableSourceItem();

  class  IndexHintContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *indexHintAction = nullptr;;
    antlr4::Token *keyFormat = nullptr;;
    IndexHintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UidListContext *uidList();
    antlr4::tree::TerminalNode *USE();
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *FORCE();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *FOR();
    IndexHintTypeContext *indexHintType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexHintContext* indexHint();

  class  IndexHintTypeContext : public antlr4::ParserRuleContext {
  public:
    IndexHintTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *JOIN();
    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *GROUP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexHintTypeContext* indexHintType();

  class  JoinPartContext : public antlr4::ParserRuleContext {
  public:
    JoinPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    JoinPartContext() : antlr4::ParserRuleContext() { }
    void copyFrom(JoinPartContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  InnerJoinContext : public JoinPartContext {
  public:
    InnerJoinContext(JoinPartContext *ctx);

    antlr4::tree::TerminalNode *JOIN();
    TableSourceItemContext *tableSourceItem();
    JoinPartOnClauseContext *joinPartOnClause();
    JoinPartUsingClauseContext *joinPartUsingClause();
    antlr4::tree::TerminalNode *INNER();
    antlr4::tree::TerminalNode *CROSS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NaturalJoinContext : public JoinPartContext {
  public:
    NaturalJoinContext(JoinPartContext *ctx);

    antlr4::tree::TerminalNode *NATURAL();
    antlr4::tree::TerminalNode *JOIN();
    TableSourceItemContext *tableSourceItem();
    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *RIGHT();
    antlr4::tree::TerminalNode *OUTER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OuterJoinContext : public JoinPartContext {
  public:
    OuterJoinContext(JoinPartContext *ctx);

    antlr4::tree::TerminalNode *JOIN();
    TableSourceItemContext *tableSourceItem();
    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *RIGHT();
    JoinPartOnClauseContext *joinPartOnClause();
    JoinPartUsingClauseContext *joinPartUsingClause();
    antlr4::tree::TerminalNode *OUTER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StraightJoinContext : public JoinPartContext {
  public:
    StraightJoinContext(JoinPartContext *ctx);

    antlr4::tree::TerminalNode *STRAIGHT_JOIN();
    TableSourceItemContext *tableSourceItem();
    JoinPartOnClauseContext *joinPartOnClause();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  JoinPartContext* joinPart();

  class  JoinPartOnClauseContext : public antlr4::ParserRuleContext {
  public:
    JoinPartOnClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ON();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JoinPartOnClauseContext* joinPartOnClause();

  class  JoinPartUsingClauseContext : public antlr4::ParserRuleContext {
  public:
    JoinPartUsingClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USING();
    UidListContext *uidList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JoinPartUsingClauseContext* joinPartUsingClause();

  class  QueryExpressionContext : public antlr4::ParserRuleContext {
  public:
    QueryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QuerySpecificationContext *querySpecification();
    QueryExpressionContext *queryExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QueryExpressionContext* queryExpression();

  class  QueryExpressionNointoContext : public antlr4::ParserRuleContext {
  public:
    QueryExpressionNointoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QuerySpecificationNointoContext *querySpecificationNointo();
    QueryExpressionNointoContext *queryExpressionNointo();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QueryExpressionNointoContext* queryExpressionNointo();

  class  QuerySpecificationContext : public antlr4::ParserRuleContext {
  public:
    QuerySpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SELECT();
    SelectElementsContext *selectElements();
    std::vector<SelectSpecContext *> selectSpec();
    SelectSpecContext* selectSpec(size_t i);
    SelectIntoExpressionContext *selectIntoExpression();
    FromClauseContext *fromClause();
    WhereClauseContext *whereClause();
    GroupClauseContext *groupClause();
    HavingClauseContext *havingClause();
    OrderByClauseContext *orderByClause();
    LimitClauseContext *limitClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QuerySpecificationContext* querySpecification();

  class  QuerySpecificationNointoContext : public antlr4::ParserRuleContext {
  public:
    QuerySpecificationNointoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SELECT();
    SelectElementsContext *selectElements();
    std::vector<SelectSpecContext *> selectSpec();
    SelectSpecContext* selectSpec(size_t i);
    FromClauseContext *fromClause();
    WhereClauseContext *whereClause();
    GroupClauseContext *groupClause();
    HavingClauseContext *havingClause();
    OrderByClauseContext *orderByClause();
    LimitClauseContext *limitClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QuerySpecificationNointoContext* querySpecificationNointo();

  class  UnionParenthesisContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *unionType = nullptr;;
    UnionParenthesisContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNION();
    QueryExpressionNointoContext *queryExpressionNointo();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *DISTINCT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnionParenthesisContext* unionParenthesis();

  class  UnionStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *unionType = nullptr;;
    UnionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNION();
    QuerySpecificationNointoContext *querySpecificationNointo();
    QueryExpressionNointoContext *queryExpressionNointo();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *DISTINCT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnionStatementContext* unionStatement();

  class  SelectSpecContext : public antlr4::ParserRuleContext {
  public:
    SelectSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *DISTINCT();
    antlr4::tree::TerminalNode *DISTINCTROW();
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

  SelectSpecContext* selectSpec();

  class  SelectElementsContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *star = nullptr;;
    SelectElementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SelectElementContext *> selectElement();
    SelectElementContext* selectElement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectElementsContext* selectElements();

  class  SelectElementContext : public antlr4::ParserRuleContext {
  public:
    SelectElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    SelectElementContext() : antlr4::ParserRuleContext() { }
    void copyFrom(SelectElementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SelectExpressionElementContext : public SelectElementContext {
  public:
    SelectExpressionElementContext(SelectElementContext *ctx);

    ExpressionContext *expression();
    antlr4::tree::TerminalNode *LOCAL_ID();
    antlr4::tree::TerminalNode *VAR_ASSIGN();
    UidContext *uid();
    antlr4::tree::TerminalNode *AS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SelectFunctionElementContext : public SelectElementContext {
  public:
    SelectFunctionElementContext(SelectElementContext *ctx);

    FunctionCallContext *functionCall();
    UidContext *uid();
    antlr4::tree::TerminalNode *AS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SelectStarElementContext : public SelectElementContext {
  public:
    SelectStarElementContext(SelectElementContext *ctx);

    FullIdContext *fullId();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SelectColumnElementContext : public SelectElementContext {
  public:
    SelectColumnElementContext(SelectElementContext *ctx);

    FullColumnNameContext *fullColumnName();
    UidContext *uid();
    antlr4::tree::TerminalNode *AS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  SelectElementContext* selectElement();

  class  SelectIntoExpressionContext : public antlr4::ParserRuleContext {
  public:
    SelectIntoExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    SelectIntoExpressionContext() : antlr4::ParserRuleContext() { }
    void copyFrom(SelectIntoExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SelectIntoVariablesContext : public SelectIntoExpressionContext {
  public:
    SelectIntoVariablesContext(SelectIntoExpressionContext *ctx);

    antlr4::tree::TerminalNode *INTO();
    std::vector<AssignmentFieldContext *> assignmentField();
    AssignmentFieldContext* assignmentField(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SelectIntoTextFileContext : public SelectIntoExpressionContext {
  public:
    SelectIntoTextFileContext(SelectIntoExpressionContext *ctx);

    antlr4::Token *filename = nullptr;
    MySQLParser::CharsetNameContext *charset = nullptr;
    antlr4::Token *fieldsFormat = nullptr;
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *OUTFILE();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *LINES();
    CharsetNameContext *charsetName();
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

  class  SelectIntoDumpFileContext : public SelectIntoExpressionContext {
  public:
    SelectIntoDumpFileContext(SelectIntoExpressionContext *ctx);

    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *DUMPFILE();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  SelectIntoExpressionContext* selectIntoExpression();

  class  SelectFieldsIntoContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *terminationField = nullptr;;
    antlr4::Token *enclosion = nullptr;;
    antlr4::Token *escaping = nullptr;;
    SelectFieldsIntoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TERMINATED();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *ENCLOSED();
    antlr4::tree::TerminalNode *OPTIONALLY();
    antlr4::tree::TerminalNode *ESCAPED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectFieldsIntoContext* selectFieldsInto();

  class  SelectLinesIntoContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *starting = nullptr;;
    antlr4::Token *terminationLine = nullptr;;
    SelectLinesIntoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STARTING();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *TERMINATED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectLinesIntoContext* selectLinesInto();

  class  FromClauseContext : public antlr4::ParserRuleContext {
  public:
    FromClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FROM();
    TableSourcesContext *tableSources();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FromClauseContext* fromClause();

  class  WhereClauseContext : public antlr4::ParserRuleContext {
  public:
    MySQLParser::ExpressionContext *whereExpr = nullptr;;
    WhereClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHERE();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhereClauseContext* whereClause();

  class  GroupClauseContext : public antlr4::ParserRuleContext {
  public:
    GroupClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *BY();
    std::vector<GroupByItemContext *> groupByItem();
    GroupByItemContext* groupByItem(size_t i);
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *ROLLUP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GroupClauseContext* groupClause();

  class  HavingClauseContext : public antlr4::ParserRuleContext {
  public:
    MySQLParser::ExpressionContext *havingExpr = nullptr;;
    HavingClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HAVING();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HavingClauseContext* havingClause();

  class  GroupByItemContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *order = nullptr;;
    GroupByItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *DESC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GroupByItemContext* groupByItem();

  class  LimitClauseContext : public antlr4::ParserRuleContext {
  public:
    MySQLParser::LimitClauseAtomContext *offset = nullptr;;
    MySQLParser::LimitClauseAtomContext *limit = nullptr;;
    LimitClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIMIT();
    antlr4::tree::TerminalNode *OFFSET();
    std::vector<LimitClauseAtomContext *> limitClauseAtom();
    LimitClauseAtomContext* limitClauseAtom(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LimitClauseContext* limitClause();

  class  LimitClauseAtomContext : public antlr4::ParserRuleContext {
  public:
    LimitClauseAtomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DecimalLiteralContext *decimalLiteral();
    MysqlVariableContext *mysqlVariable();
    antlr4::tree::TerminalNode *PLACEHOLDER_VALUE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LimitClauseAtomContext* limitClauseAtom();

  class  StartTransactionContext : public antlr4::ParserRuleContext {
  public:
    StartTransactionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *TRANSACTION();
    std::vector<TransactionModeContext *> transactionMode();
    TransactionModeContext* transactionMode(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StartTransactionContext* startTransaction();

  class  BeginWorkContext : public antlr4::ParserRuleContext {
  public:
    BeginWorkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *WORK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BeginWorkContext* beginWork();

  class  CommitWorkContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *nochain = nullptr;;
    antlr4::Token *norelease = nullptr;;
    CommitWorkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMIT();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *CHAIN();
    antlr4::tree::TerminalNode *RELEASE();
    std::vector<antlr4::tree::TerminalNode *> NO();
    antlr4::tree::TerminalNode* NO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CommitWorkContext* commitWork();

  class  RollbackWorkContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *nochain = nullptr;;
    antlr4::Token *norelease = nullptr;;
    RollbackWorkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ROLLBACK();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *CHAIN();
    antlr4::tree::TerminalNode *RELEASE();
    std::vector<antlr4::tree::TerminalNode *> NO();
    antlr4::tree::TerminalNode* NO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RollbackWorkContext* rollbackWork();

  class  SavepointStatementContext : public antlr4::ParserRuleContext {
  public:
    SavepointStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SAVEPOINT();
    UidContext *uid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SavepointStatementContext* savepointStatement();

  class  RollbackStatementContext : public antlr4::ParserRuleContext {
  public:
    RollbackStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ROLLBACK();
    antlr4::tree::TerminalNode *TO();
    UidContext *uid();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *SAVEPOINT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RollbackStatementContext* rollbackStatement();

  class  ReleaseStatementContext : public antlr4::ParserRuleContext {
  public:
    ReleaseStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RELEASE();
    antlr4::tree::TerminalNode *SAVEPOINT();
    UidContext *uid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReleaseStatementContext* releaseStatement();

  class  LockTablesContext : public antlr4::ParserRuleContext {
  public:
    LockTablesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *TABLES();
    std::vector<LockTableElementContext *> lockTableElement();
    LockTableElementContext* lockTableElement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LockTablesContext* lockTables();

  class  UnlockTablesContext : public antlr4::ParserRuleContext {
  public:
    UnlockTablesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNLOCK();
    antlr4::tree::TerminalNode *TABLES();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnlockTablesContext* unlockTables();

  class  SetAutocommitStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *autocommitValue = nullptr;;
    SetAutocommitStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *AUTOCOMMIT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetAutocommitStatementContext* setAutocommitStatement();

  class  SetTransactionStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *transactionContext = nullptr;;
    SetTransactionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *TRANSACTION();
    std::vector<TransactionOptionContext *> transactionOption();
    TransactionOptionContext* transactionOption(size_t i);
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *SESSION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetTransactionStatementContext* setTransactionStatement();

  class  TransactionModeContext : public antlr4::ParserRuleContext {
  public:
    TransactionModeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *CONSISTENT();
    antlr4::tree::TerminalNode *SNAPSHOT();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *WRITE();
    antlr4::tree::TerminalNode *ONLY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TransactionModeContext* transactionMode();

  class  LockTableElementContext : public antlr4::ParserRuleContext {
  public:
    LockTableElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableNameContext *tableName();
    LockActionContext *lockAction();
    UidContext *uid();
    antlr4::tree::TerminalNode *AS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LockTableElementContext* lockTableElement();

  class  LockActionContext : public antlr4::ParserRuleContext {
  public:
    LockActionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *WRITE();
    antlr4::tree::TerminalNode *LOW_PRIORITY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LockActionContext* lockAction();

  class  TransactionOptionContext : public antlr4::ParserRuleContext {
  public:
    TransactionOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ISOLATION();
    antlr4::tree::TerminalNode *LEVEL();
    TransactionLevelContext *transactionLevel();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *WRITE();
    antlr4::tree::TerminalNode *ONLY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TransactionOptionContext* transactionOption();

  class  TransactionLevelContext : public antlr4::ParserRuleContext {
  public:
    TransactionLevelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
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

  TransactionLevelContext* transactionLevel();

  class  ChangeMasterContext : public antlr4::ParserRuleContext {
  public:
    ChangeMasterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHANGE();
    antlr4::tree::TerminalNode *MASTER();
    antlr4::tree::TerminalNode *TO();
    std::vector<MasterOptionContext *> masterOption();
    MasterOptionContext* masterOption(size_t i);
    ChannelOptionContext *channelOption();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChangeMasterContext* changeMaster();

  class  ChangeReplicationFilterContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationFilterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHANGE();
    antlr4::tree::TerminalNode *REPLICATION();
    antlr4::tree::TerminalNode *FILTER();
    std::vector<ReplicationFilterContext *> replicationFilter();
    ReplicationFilterContext* replicationFilter(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChangeReplicationFilterContext* changeReplicationFilter();

  class  PurgeBinaryLogsContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *purgeFormat = nullptr;;
    antlr4::Token *fileName = nullptr;;
    antlr4::Token *timeValue = nullptr;;
    PurgeBinaryLogsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PURGE();
    antlr4::tree::TerminalNode *LOGS();
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *MASTER();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *BEFORE();
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PurgeBinaryLogsContext* purgeBinaryLogs();

  class  ResetMasterContext : public antlr4::ParserRuleContext {
  public:
    ResetMasterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESET();
    antlr4::tree::TerminalNode *MASTER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResetMasterContext* resetMaster();

  class  ResetSlaveContext : public antlr4::ParserRuleContext {
  public:
    ResetSlaveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESET();
    antlr4::tree::TerminalNode *SLAVE();
    antlr4::tree::TerminalNode *ALL();
    ChannelOptionContext *channelOption();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResetSlaveContext* resetSlave();

  class  StartSlaveContext : public antlr4::ParserRuleContext {
  public:
    StartSlaveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *SLAVE();
    std::vector<ThreadTypeContext *> threadType();
    ThreadTypeContext* threadType(size_t i);
    antlr4::tree::TerminalNode *UNTIL();
    UntilOptionContext *untilOption();
    std::vector<ConnectionOptionContext *> connectionOption();
    ConnectionOptionContext* connectionOption(size_t i);
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
    std::vector<ThreadTypeContext *> threadType();
    ThreadTypeContext* threadType(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StopSlaveContext* stopSlave();

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

  class  MasterOptionContext : public antlr4::ParserRuleContext {
  public:
    MasterOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    MasterOptionContext() : antlr4::ParserRuleContext() { }
    void copyFrom(MasterOptionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  MasterStringOptionContext : public MasterOptionContext {
  public:
    MasterStringOptionContext(MasterOptionContext *ctx);

    StringMasterOptionContext *stringMasterOption();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MasterRealOptionContext : public MasterOptionContext {
  public:
    MasterRealOptionContext(MasterOptionContext *ctx);

    antlr4::tree::TerminalNode *MASTER_HEARTBEAT_PERIOD();
    antlr4::tree::TerminalNode *REAL_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MasterBoolOptionContext : public MasterOptionContext {
  public:
    MasterBoolOptionContext(MasterOptionContext *ctx);

    antlr4::Token *boolVal = nullptr;
    BoolMasterOptionContext *boolMasterOption();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MasterUidListOptionContext : public MasterOptionContext {
  public:
    MasterUidListOptionContext(MasterOptionContext *ctx);

    antlr4::tree::TerminalNode *IGNORE_SERVER_IDS();
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MasterDecimalOptionContext : public MasterOptionContext {
  public:
    MasterDecimalOptionContext(MasterOptionContext *ctx);

    DecimalMasterOptionContext *decimalMasterOption();
    DecimalLiteralContext *decimalLiteral();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  MasterOptionContext* masterOption();

  class  StringMasterOptionContext : public antlr4::ParserRuleContext {
  public:
    StringMasterOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_BIND();
    antlr4::tree::TerminalNode *MASTER_HOST();
    antlr4::tree::TerminalNode *MASTER_USER();
    antlr4::tree::TerminalNode *MASTER_PASSWORD();
    antlr4::tree::TerminalNode *MASTER_LOG_FILE();
    antlr4::tree::TerminalNode *RELAY_LOG_FILE();
    antlr4::tree::TerminalNode *MASTER_SSL_CA();
    antlr4::tree::TerminalNode *MASTER_SSL_CAPATH();
    antlr4::tree::TerminalNode *MASTER_SSL_CERT();
    antlr4::tree::TerminalNode *MASTER_SSL_CRL();
    antlr4::tree::TerminalNode *MASTER_SSL_CRLPATH();
    antlr4::tree::TerminalNode *MASTER_SSL_KEY();
    antlr4::tree::TerminalNode *MASTER_SSL_CIPHER();
    antlr4::tree::TerminalNode *MASTER_TLS_VERSION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringMasterOptionContext* stringMasterOption();

  class  DecimalMasterOptionContext : public antlr4::ParserRuleContext {
  public:
    DecimalMasterOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_PORT();
    antlr4::tree::TerminalNode *MASTER_CONNECT_RETRY();
    antlr4::tree::TerminalNode *MASTER_RETRY_COUNT();
    antlr4::tree::TerminalNode *MASTER_DELAY();
    antlr4::tree::TerminalNode *MASTER_LOG_POS();
    antlr4::tree::TerminalNode *RELAY_LOG_POS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DecimalMasterOptionContext* decimalMasterOption();

  class  BoolMasterOptionContext : public antlr4::ParserRuleContext {
  public:
    BoolMasterOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_AUTO_POSITION();
    antlr4::tree::TerminalNode *MASTER_SSL();
    antlr4::tree::TerminalNode *MASTER_SSL_VERIFY_SERVER_CERT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BoolMasterOptionContext* boolMasterOption();

  class  ChannelOptionContext : public antlr4::ParserRuleContext {
  public:
    ChannelOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *CHANNEL();
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChannelOptionContext* channelOption();

  class  ReplicationFilterContext : public antlr4::ParserRuleContext {
  public:
    ReplicationFilterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ReplicationFilterContext() : antlr4::ParserRuleContext() { }
    void copyFrom(ReplicationFilterContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  WildIgnoreTableReplicationContext : public ReplicationFilterContext {
  public:
    WildIgnoreTableReplicationContext(ReplicationFilterContext *ctx);

    antlr4::tree::TerminalNode *REPLICATE_WILD_IGNORE_TABLE();
    SimpleStringsContext *simpleStrings();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DoTableReplicationContext : public ReplicationFilterContext {
  public:
    DoTableReplicationContext(ReplicationFilterContext *ctx);

    antlr4::tree::TerminalNode *REPLICATE_DO_TABLE();
    TablesContext *tables();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IgnoreTableReplicationContext : public ReplicationFilterContext {
  public:
    IgnoreTableReplicationContext(ReplicationFilterContext *ctx);

    antlr4::tree::TerminalNode *REPLICATE_IGNORE_TABLE();
    TablesContext *tables();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RewriteDbReplicationContext : public ReplicationFilterContext {
  public:
    RewriteDbReplicationContext(ReplicationFilterContext *ctx);

    antlr4::tree::TerminalNode *REPLICATE_REWRITE_DB();
    std::vector<TablePairContext *> tablePair();
    TablePairContext* tablePair(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DoDbReplicationContext : public ReplicationFilterContext {
  public:
    DoDbReplicationContext(ReplicationFilterContext *ctx);

    antlr4::tree::TerminalNode *REPLICATE_DO_DB();
    UidListContext *uidList();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IgnoreDbReplicationContext : public ReplicationFilterContext {
  public:
    IgnoreDbReplicationContext(ReplicationFilterContext *ctx);

    antlr4::tree::TerminalNode *REPLICATE_IGNORE_DB();
    UidListContext *uidList();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  WildDoTableReplicationContext : public ReplicationFilterContext {
  public:
    WildDoTableReplicationContext(ReplicationFilterContext *ctx);

    antlr4::tree::TerminalNode *REPLICATE_WILD_DO_TABLE();
    SimpleStringsContext *simpleStrings();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ReplicationFilterContext* replicationFilter();

  class  TablePairContext : public antlr4::ParserRuleContext {
  public:
    MySQLParser::TableNameContext *firstTable = nullptr;;
    MySQLParser::TableNameContext *secondTable = nullptr;;
    TablePairContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TableNameContext *> tableName();
    TableNameContext* tableName(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TablePairContext* tablePair();

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

  class  UntilOptionContext : public antlr4::ParserRuleContext {
  public:
    UntilOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    UntilOptionContext() : antlr4::ParserRuleContext() { }
    void copyFrom(UntilOptionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  GtidsUntilOptionContext : public UntilOptionContext {
  public:
    GtidsUntilOptionContext(UntilOptionContext *ctx);

    antlr4::Token *gtids = nullptr;
    GtuidSetContext *gtuidSet();
    antlr4::tree::TerminalNode *SQL_BEFORE_GTIDS();
    antlr4::tree::TerminalNode *SQL_AFTER_GTIDS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SqlGapsUntilOptionContext : public UntilOptionContext {
  public:
    SqlGapsUntilOptionContext(UntilOptionContext *ctx);

    antlr4::tree::TerminalNode *SQL_AFTER_MTS_GAPS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MasterLogUntilOptionContext : public UntilOptionContext {
  public:
    MasterLogUntilOptionContext(UntilOptionContext *ctx);

    antlr4::tree::TerminalNode *MASTER_LOG_FILE();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *MASTER_LOG_POS();
    DecimalLiteralContext *decimalLiteral();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RelayLogUntilOptionContext : public UntilOptionContext {
  public:
    RelayLogUntilOptionContext(UntilOptionContext *ctx);

    antlr4::tree::TerminalNode *RELAY_LOG_FILE();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *RELAY_LOG_POS();
    DecimalLiteralContext *decimalLiteral();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  UntilOptionContext* untilOption();

  class  ConnectionOptionContext : public antlr4::ParserRuleContext {
  public:
    ConnectionOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ConnectionOptionContext() : antlr4::ParserRuleContext() { }
    void copyFrom(ConnectionOptionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PluginDirConnectionOptionContext : public ConnectionOptionContext {
  public:
    PluginDirConnectionOptionContext(ConnectionOptionContext *ctx);

    antlr4::Token *conOptPluginDir = nullptr;
    antlr4::tree::TerminalNode *PLUGIN_DIR();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UserConnectionOptionContext : public ConnectionOptionContext {
  public:
    UserConnectionOptionContext(ConnectionOptionContext *ctx);

    antlr4::Token *conOptUser = nullptr;
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DefaultAuthConnectionOptionContext : public ConnectionOptionContext {
  public:
    DefaultAuthConnectionOptionContext(ConnectionOptionContext *ctx);

    antlr4::Token *conOptDefAuth = nullptr;
    antlr4::tree::TerminalNode *DEFAULT_AUTH();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PasswordConnectionOptionContext : public ConnectionOptionContext {
  public:
    PasswordConnectionOptionContext(ConnectionOptionContext *ctx);

    antlr4::Token *conOptPassword = nullptr;
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ConnectionOptionContext* connectionOption();

  class  GtuidSetContext : public antlr4::ParserRuleContext {
  public:
    GtuidSetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<UuidSetContext *> uuidSet();
    UuidSetContext* uuidSet(size_t i);
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GtuidSetContext* gtuidSet();

  class  XaStartTransactionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *xaStart = nullptr;;
    antlr4::Token *xaAction = nullptr;;
    XaStartTransactionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *XA();
    XidContext *xid();
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *JOIN();
    antlr4::tree::TerminalNode *RESUME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  XaStartTransactionContext* xaStartTransaction();

  class  XaEndTransactionContext : public antlr4::ParserRuleContext {
  public:
    XaEndTransactionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *XA();
    antlr4::tree::TerminalNode *END();
    XidContext *xid();
    antlr4::tree::TerminalNode *SUSPEND();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *MIGRATE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  XaEndTransactionContext* xaEndTransaction();

  class  XaPrepareStatementContext : public antlr4::ParserRuleContext {
  public:
    XaPrepareStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *XA();
    antlr4::tree::TerminalNode *PREPARE();
    XidContext *xid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  XaPrepareStatementContext* xaPrepareStatement();

  class  XaCommitWorkContext : public antlr4::ParserRuleContext {
  public:
    XaCommitWorkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *XA();
    antlr4::tree::TerminalNode *COMMIT();
    XidContext *xid();
    antlr4::tree::TerminalNode *ONE();
    antlr4::tree::TerminalNode *PHASE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  XaCommitWorkContext* xaCommitWork();

  class  XaRollbackWorkContext : public antlr4::ParserRuleContext {
  public:
    XaRollbackWorkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *XA();
    antlr4::tree::TerminalNode *ROLLBACK();
    XidContext *xid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  XaRollbackWorkContext* xaRollbackWork();

  class  XaRecoverWorkContext : public antlr4::ParserRuleContext {
  public:
    XaRecoverWorkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *XA();
    antlr4::tree::TerminalNode *RECOVER();
    antlr4::tree::TerminalNode *CONVERT();
    XidContext *xid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  XaRecoverWorkContext* xaRecoverWork();

  class  PrepareStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *query = nullptr;;
    antlr4::Token *variable = nullptr;;
    PrepareStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PREPARE();
    UidContext *uid();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *LOCAL_ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrepareStatementContext* prepareStatement();

  class  ExecuteStatementContext : public antlr4::ParserRuleContext {
  public:
    ExecuteStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXECUTE();
    UidContext *uid();
    antlr4::tree::TerminalNode *USING();
    UserVariablesContext *userVariables();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExecuteStatementContext* executeStatement();

  class  DeallocatePrepareContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *dropFormat = nullptr;;
    DeallocatePrepareContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PREPARE();
    UidContext *uid();
    antlr4::tree::TerminalNode *DEALLOCATE();
    antlr4::tree::TerminalNode *DROP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeallocatePrepareContext* deallocatePrepare();

  class  RoutineBodyContext : public antlr4::ParserRuleContext {
  public:
    RoutineBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockStatementContext *blockStatement();
    SqlStatementContext *sqlStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RoutineBodyContext* routineBody();

  class  BlockStatementContext : public antlr4::ParserRuleContext {
  public:
    BlockStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *END();
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    std::vector<DeclareVariableContext *> declareVariable();
    DeclareVariableContext* declareVariable(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);
    std::vector<DeclareConditionContext *> declareCondition();
    DeclareConditionContext* declareCondition(size_t i);
    std::vector<DeclareCursorContext *> declareCursor();
    DeclareCursorContext* declareCursor(size_t i);
    std::vector<DeclareHandlerContext *> declareHandler();
    DeclareHandlerContext* declareHandler(size_t i);
    std::vector<ProcedureSqlStatementContext *> procedureSqlStatement();
    ProcedureSqlStatementContext* procedureSqlStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockStatementContext* blockStatement();

  class  CaseStatementContext : public antlr4::ParserRuleContext {
  public:
    CaseStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> CASE();
    antlr4::tree::TerminalNode* CASE(size_t i);
    antlr4::tree::TerminalNode *END();
    UidContext *uid();
    ExpressionContext *expression();
    std::vector<CaseAlternativeContext *> caseAlternative();
    CaseAlternativeContext* caseAlternative(size_t i);
    antlr4::tree::TerminalNode *ELSE();
    std::vector<ProcedureSqlStatementContext *> procedureSqlStatement();
    ProcedureSqlStatementContext* procedureSqlStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CaseStatementContext* caseStatement();

  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    MySQLParser::ProcedureSqlStatementContext *procedureSqlStatementContext = nullptr;;
    std::vector<ProcedureSqlStatementContext *> thenStatements;;
    std::vector<ProcedureSqlStatementContext *> elseStatements;;
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IF();
    antlr4::tree::TerminalNode* IF(size_t i);
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *THEN();
    antlr4::tree::TerminalNode *END();
    std::vector<ElifAlternativeContext *> elifAlternative();
    ElifAlternativeContext* elifAlternative(size_t i);
    antlr4::tree::TerminalNode *ELSE();
    std::vector<ProcedureSqlStatementContext *> procedureSqlStatement();
    ProcedureSqlStatementContext* procedureSqlStatement(size_t i);

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
    UidContext *uid();

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
    UidContext *uid();

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
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    std::vector<ProcedureSqlStatementContext *> procedureSqlStatement();
    ProcedureSqlStatementContext* procedureSqlStatement(size_t i);

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
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *END();
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    std::vector<ProcedureSqlStatementContext *> procedureSqlStatement();
    ProcedureSqlStatementContext* procedureSqlStatement(size_t i);

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
    ExpressionContext *expression();

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
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DO();
    antlr4::tree::TerminalNode *END();
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    std::vector<ProcedureSqlStatementContext *> procedureSqlStatement();
    ProcedureSqlStatementContext* procedureSqlStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhileStatementContext* whileStatement();

  class  CursorStatementContext : public antlr4::ParserRuleContext {
  public:
    CursorStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    CursorStatementContext() : antlr4::ParserRuleContext() { }
    void copyFrom(CursorStatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  CloseCursorContext : public CursorStatementContext {
  public:
    CloseCursorContext(CursorStatementContext *ctx);

    antlr4::tree::TerminalNode *CLOSE();
    UidContext *uid();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OpenCursorContext : public CursorStatementContext {
  public:
    OpenCursorContext(CursorStatementContext *ctx);

    antlr4::tree::TerminalNode *OPEN();
    UidContext *uid();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FetchCursorContext : public CursorStatementContext {
  public:
    FetchCursorContext(CursorStatementContext *ctx);

    antlr4::tree::TerminalNode *FETCH();
    UidContext *uid();
    antlr4::tree::TerminalNode *INTO();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *NEXT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  CursorStatementContext* cursorStatement();

  class  DeclareVariableContext : public antlr4::ParserRuleContext {
  public:
    DeclareVariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARE();
    UidListContext *uidList();
    DataTypeContext *dataType();
    antlr4::tree::TerminalNode *DEFAULT();
    DefaultValueContext *defaultValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclareVariableContext* declareVariable();

  class  DeclareConditionContext : public antlr4::ParserRuleContext {
  public:
    DeclareConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARE();
    UidContext *uid();
    antlr4::tree::TerminalNode *CONDITION();
    antlr4::tree::TerminalNode *FOR();
    DecimalLiteralContext *decimalLiteral();
    antlr4::tree::TerminalNode *SQLSTATE();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *VALUE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclareConditionContext* declareCondition();

  class  DeclareCursorContext : public antlr4::ParserRuleContext {
  public:
    DeclareCursorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARE();
    UidContext *uid();
    antlr4::tree::TerminalNode *CURSOR();
    antlr4::tree::TerminalNode *FOR();
    SelectStatementContext *selectStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclareCursorContext* declareCursor();

  class  DeclareHandlerContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *handlerAction = nullptr;;
    DeclareHandlerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARE();
    antlr4::tree::TerminalNode *HANDLER();
    antlr4::tree::TerminalNode *FOR();
    std::vector<HandlerConditionValueContext *> handlerConditionValue();
    HandlerConditionValueContext* handlerConditionValue(size_t i);
    RoutineBodyContext *routineBody();
    antlr4::tree::TerminalNode *CONTINUE();
    antlr4::tree::TerminalNode *EXIT();
    antlr4::tree::TerminalNode *UNDO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclareHandlerContext* declareHandler();

  class  HandlerConditionValueContext : public antlr4::ParserRuleContext {
  public:
    HandlerConditionValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    HandlerConditionValueContext() : antlr4::ParserRuleContext() { }
    void copyFrom(HandlerConditionValueContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  HandlerConditionWarningContext : public HandlerConditionValueContext {
  public:
    HandlerConditionWarningContext(HandlerConditionValueContext *ctx);

    antlr4::tree::TerminalNode *SQLWARNING();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  HandlerConditionCodeContext : public HandlerConditionValueContext {
  public:
    HandlerConditionCodeContext(HandlerConditionValueContext *ctx);

    DecimalLiteralContext *decimalLiteral();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  HandlerConditionNotfoundContext : public HandlerConditionValueContext {
  public:
    HandlerConditionNotfoundContext(HandlerConditionValueContext *ctx);

    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *FOUND();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  HandlerConditionStateContext : public HandlerConditionValueContext {
  public:
    HandlerConditionStateContext(HandlerConditionValueContext *ctx);

    antlr4::tree::TerminalNode *SQLSTATE();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *VALUE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  HandlerConditionExceptionContext : public HandlerConditionValueContext {
  public:
    HandlerConditionExceptionContext(HandlerConditionValueContext *ctx);

    antlr4::tree::TerminalNode *SQLEXCEPTION();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  HandlerConditionNameContext : public HandlerConditionValueContext {
  public:
    HandlerConditionNameContext(HandlerConditionValueContext *ctx);

    UidContext *uid();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  HandlerConditionValueContext* handlerConditionValue();

  class  ProcedureSqlStatementContext : public antlr4::ParserRuleContext {
  public:
    ProcedureSqlStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEMI();
    CompoundStatementContext *compoundStatement();
    SqlStatementContext *sqlStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProcedureSqlStatementContext* procedureSqlStatement();

  class  CaseAlternativeContext : public antlr4::ParserRuleContext {
  public:
    CaseAlternativeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *THEN();
    ConstantContext *constant();
    ExpressionContext *expression();
    std::vector<ProcedureSqlStatementContext *> procedureSqlStatement();
    ProcedureSqlStatementContext* procedureSqlStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CaseAlternativeContext* caseAlternative();

  class  ElifAlternativeContext : public antlr4::ParserRuleContext {
  public:
    ElifAlternativeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSEIF();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *THEN();
    std::vector<ProcedureSqlStatementContext *> procedureSqlStatement();
    ProcedureSqlStatementContext* procedureSqlStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElifAlternativeContext* elifAlternative();

  class  AlterUserContext : public antlr4::ParserRuleContext {
  public:
    AlterUserContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AlterUserContext() : antlr4::ParserRuleContext() { }
    void copyFrom(AlterUserContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AlterUserMysqlV56Context : public AlterUserContext {
  public:
    AlterUserMysqlV56Context(AlterUserContext *ctx);

    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *USER();
    std::vector<UserSpecificationContext *> userSpecification();
    UserSpecificationContext* userSpecification(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterUserMysqlV57Context : public AlterUserContext {
  public:
    AlterUserMysqlV57Context(AlterUserContext *ctx);

    antlr4::Token *tlsNone = nullptr;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *USER();
    std::vector<UserAuthOptionContext *> userAuthOption();
    UserAuthOptionContext* userAuthOption(size_t i);
    IfExistsContext *ifExists();
    antlr4::tree::TerminalNode *REQUIRE();
    antlr4::tree::TerminalNode *WITH();
    std::vector<UserPasswordOptionContext *> userPasswordOption();
    UserPasswordOptionContext* userPasswordOption(size_t i);
    std::vector<UserLockOptionContext *> userLockOption();
    UserLockOptionContext* userLockOption(size_t i);
    std::vector<TlsOptionContext *> tlsOption();
    TlsOptionContext* tlsOption(size_t i);
    antlr4::tree::TerminalNode *NONE();
    std::vector<UserResourceOptionContext *> userResourceOption();
    UserResourceOptionContext* userResourceOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  AlterUserContext* alterUser();

  class  CreateUserContext : public antlr4::ParserRuleContext {
  public:
    CreateUserContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    CreateUserContext() : antlr4::ParserRuleContext() { }
    void copyFrom(CreateUserContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  CreateUserMysqlV57Context : public CreateUserContext {
  public:
    CreateUserMysqlV57Context(CreateUserContext *ctx);

    antlr4::Token *tlsNone = nullptr;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *USER();
    std::vector<UserAuthOptionContext *> userAuthOption();
    UserAuthOptionContext* userAuthOption(size_t i);
    IfNotExistsContext *ifNotExists();
    antlr4::tree::TerminalNode *REQUIRE();
    antlr4::tree::TerminalNode *WITH();
    std::vector<UserPasswordOptionContext *> userPasswordOption();
    UserPasswordOptionContext* userPasswordOption(size_t i);
    std::vector<UserLockOptionContext *> userLockOption();
    UserLockOptionContext* userLockOption(size_t i);
    std::vector<TlsOptionContext *> tlsOption();
    TlsOptionContext* tlsOption(size_t i);
    antlr4::tree::TerminalNode *NONE();
    std::vector<UserResourceOptionContext *> userResourceOption();
    UserResourceOptionContext* userResourceOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CreateUserMysqlV56Context : public CreateUserContext {
  public:
    CreateUserMysqlV56Context(CreateUserContext *ctx);

    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *USER();
    std::vector<UserAuthOptionContext *> userAuthOption();
    UserAuthOptionContext* userAuthOption(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  CreateUserContext* createUser();

  class  DropUserContext : public antlr4::ParserRuleContext {
  public:
    DropUserContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *USER();
    std::vector<UserNameContext *> userName();
    UserNameContext* userName(size_t i);
    IfExistsContext *ifExists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropUserContext* dropUser();

  class  GrantStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *privilegeObject = nullptr;;
    antlr4::Token *tlsNone = nullptr;;
    GrantStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> GRANT();
    antlr4::tree::TerminalNode* GRANT(size_t i);
    std::vector<PrivelegeClauseContext *> privelegeClause();
    PrivelegeClauseContext* privelegeClause(size_t i);
    antlr4::tree::TerminalNode *ON();
    PrivilegeLevelContext *privilegeLevel();
    antlr4::tree::TerminalNode *TO();
    std::vector<UserAuthOptionContext *> userAuthOption();
    UserAuthOptionContext* userAuthOption(size_t i);
    antlr4::tree::TerminalNode *REQUIRE();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *PROCEDURE();
    std::vector<TlsOptionContext *> tlsOption();
    TlsOptionContext* tlsOption(size_t i);
    antlr4::tree::TerminalNode *NONE();
    std::vector<antlr4::tree::TerminalNode *> OPTION();
    antlr4::tree::TerminalNode* OPTION(size_t i);
    std::vector<UserResourceOptionContext *> userResourceOption();
    UserResourceOptionContext* userResourceOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GrantStatementContext* grantStatement();

  class  GrantProxyContext : public antlr4::ParserRuleContext {
  public:
    MySQLParser::UserNameContext *fromFirst = nullptr;;
    MySQLParser::UserNameContext *toFirst = nullptr;;
    MySQLParser::UserNameContext *userNameContext = nullptr;;
    std::vector<UserNameContext *> toOther;;
    GrantProxyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> GRANT();
    antlr4::tree::TerminalNode* GRANT(size_t i);
    antlr4::tree::TerminalNode *PROXY();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *TO();
    std::vector<UserNameContext *> userName();
    UserNameContext* userName(size_t i);
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *OPTION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GrantProxyContext* grantProxy();

  class  RenameUserContext : public antlr4::ParserRuleContext {
  public:
    RenameUserContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RENAME();
    antlr4::tree::TerminalNode *USER();
    std::vector<RenameUserClauseContext *> renameUserClause();
    RenameUserClauseContext* renameUserClause(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RenameUserContext* renameUser();

  class  RevokeStatementContext : public antlr4::ParserRuleContext {
  public:
    RevokeStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    RevokeStatementContext() : antlr4::ParserRuleContext() { }
    void copyFrom(RevokeStatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DetailRevokeContext : public RevokeStatementContext {
  public:
    DetailRevokeContext(RevokeStatementContext *ctx);

    antlr4::Token *privilegeObject = nullptr;
    antlr4::tree::TerminalNode *REVOKE();
    std::vector<PrivelegeClauseContext *> privelegeClause();
    PrivelegeClauseContext* privelegeClause(size_t i);
    antlr4::tree::TerminalNode *ON();
    PrivilegeLevelContext *privilegeLevel();
    antlr4::tree::TerminalNode *FROM();
    std::vector<UserNameContext *> userName();
    UserNameContext* userName(size_t i);
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *PROCEDURE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShortRevokeContext : public RevokeStatementContext {
  public:
    ShortRevokeContext(RevokeStatementContext *ctx);

    antlr4::tree::TerminalNode *REVOKE();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *GRANT();
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *FROM();
    std::vector<UserNameContext *> userName();
    UserNameContext* userName(size_t i);
    antlr4::tree::TerminalNode *PRIVILEGES();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  RevokeStatementContext* revokeStatement();

  class  RevokeProxyContext : public antlr4::ParserRuleContext {
  public:
    MySQLParser::UserNameContext *onUser = nullptr;;
    MySQLParser::UserNameContext *fromFirst = nullptr;;
    MySQLParser::UserNameContext *userNameContext = nullptr;;
    std::vector<UserNameContext *> fromOther;;
    RevokeProxyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REVOKE();
    antlr4::tree::TerminalNode *PROXY();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *FROM();
    std::vector<UserNameContext *> userName();
    UserNameContext* userName(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RevokeProxyContext* revokeProxy();

  class  SetPasswordStatementContext : public antlr4::ParserRuleContext {
  public:
    SetPasswordStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *PASSWORD();
    PasswordFunctionClauseContext *passwordFunctionClause();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *FOR();
    UserNameContext *userName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetPasswordStatementContext* setPasswordStatement();

  class  UserSpecificationContext : public antlr4::ParserRuleContext {
  public:
    UserSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UserNameContext *userName();
    UserPasswordOptionContext *userPasswordOption();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UserSpecificationContext* userSpecification();

  class  UserAuthOptionContext : public antlr4::ParserRuleContext {
  public:
    UserAuthOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    UserAuthOptionContext() : antlr4::ParserRuleContext() { }
    void copyFrom(UserAuthOptionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SimpleAuthOptionContext : public UserAuthOptionContext {
  public:
    SimpleAuthOptionContext(UserAuthOptionContext *ctx);

    UserNameContext *userName();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PasswordAuthOptionContext : public UserAuthOptionContext {
  public:
    PasswordAuthOptionContext(UserAuthOptionContext *ctx);

    antlr4::Token *hashed = nullptr;
    UserNameContext *userName();
    antlr4::tree::TerminalNode *IDENTIFIED();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StringAuthOptionContext : public UserAuthOptionContext {
  public:
    StringAuthOptionContext(UserAuthOptionContext *ctx);

    UserNameContext *userName();
    antlr4::tree::TerminalNode *IDENTIFIED();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *WITH();
    AuthPluginContext *authPlugin();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  HashAuthOptionContext : public UserAuthOptionContext {
  public:
    HashAuthOptionContext(UserAuthOptionContext *ctx);

    UserNameContext *userName();
    antlr4::tree::TerminalNode *IDENTIFIED();
    antlr4::tree::TerminalNode *WITH();
    AuthPluginContext *authPlugin();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  UserAuthOptionContext* userAuthOption();

  class  TlsOptionContext : public antlr4::ParserRuleContext {
  public:
    TlsOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SSL();
    antlr4::tree::TerminalNode *X509();
    antlr4::tree::TerminalNode *CIPHER();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *ISSUER();
    antlr4::tree::TerminalNode *SUBJECT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TlsOptionContext* tlsOption();

  class  UserResourceOptionContext : public antlr4::ParserRuleContext {
  public:
    UserResourceOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MAX_QUERIES_PER_HOUR();
    DecimalLiteralContext *decimalLiteral();
    antlr4::tree::TerminalNode *MAX_UPDATES_PER_HOUR();
    antlr4::tree::TerminalNode *MAX_CONNECTIONS_PER_HOUR();
    antlr4::tree::TerminalNode *MAX_USER_CONNECTIONS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UserResourceOptionContext* userResourceOption();

  class  UserPasswordOptionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *expireType = nullptr;;
    UserPasswordOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *EXPIRE();
    DecimalLiteralContext *decimalLiteral();
    antlr4::tree::TerminalNode *DAY();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *NEVER();
    antlr4::tree::TerminalNode *INTERVAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UserPasswordOptionContext* userPasswordOption();

  class  UserLockOptionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *lockType = nullptr;;
    UserLockOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ACCOUNT();
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *UNLOCK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UserLockOptionContext* userLockOption();

  class  PrivelegeClauseContext : public antlr4::ParserRuleContext {
  public:
    PrivelegeClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrivilegeContext *privilege();
    UidListContext *uidList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrivelegeClauseContext* privelegeClause();

  class  PrivilegeContext : public antlr4::ParserRuleContext {
  public:
    PrivilegeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *PRIVILEGES();
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *ROUTINE();
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TEMPORARY();
    antlr4::tree::TerminalNode *TABLES();
    antlr4::tree::TerminalNode *VIEW();
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *TABLESPACE();
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *DROP();
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
    antlr4::tree::TerminalNode *SESSION_VARIABLES_ADMIN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrivilegeContext* privilege();

  class  PrivilegeLevelContext : public antlr4::ParserRuleContext {
  public:
    PrivilegeLevelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PrivilegeLevelContext() : antlr4::ParserRuleContext() { }
    void copyFrom(PrivilegeLevelContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DefiniteSchemaPrivLevelContext : public PrivilegeLevelContext {
  public:
    DefiniteSchemaPrivLevelContext(PrivilegeLevelContext *ctx);

    UidContext *uid();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DefiniteFullTablePrivLevelContext : public PrivilegeLevelContext {
  public:
    DefiniteFullTablePrivLevelContext(PrivilegeLevelContext *ctx);

    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  GlobalPrivLevelContext : public PrivilegeLevelContext {
  public:
    GlobalPrivLevelContext(PrivilegeLevelContext *ctx);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DefiniteTablePrivLevelContext : public PrivilegeLevelContext {
  public:
    DefiniteTablePrivLevelContext(PrivilegeLevelContext *ctx);

    UidContext *uid();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CurrentSchemaPriviLevelContext : public PrivilegeLevelContext {
  public:
    CurrentSchemaPriviLevelContext(PrivilegeLevelContext *ctx);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  PrivilegeLevelContext* privilegeLevel();

  class  RenameUserClauseContext : public antlr4::ParserRuleContext {
  public:
    MySQLParser::UserNameContext *fromFirst = nullptr;;
    MySQLParser::UserNameContext *toFirst = nullptr;;
    RenameUserClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TO();
    std::vector<UserNameContext *> userName();
    UserNameContext* userName(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RenameUserClauseContext* renameUserClause();

  class  AnalyzeTableContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *actionOption = nullptr;;
    AnalyzeTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ANALYZE();
    antlr4::tree::TerminalNode *TABLE();
    TablesContext *tables();
    antlr4::tree::TerminalNode *NO_WRITE_TO_BINLOG();
    antlr4::tree::TerminalNode *LOCAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AnalyzeTableContext* analyzeTable();

  class  CheckTableContext : public antlr4::ParserRuleContext {
  public:
    CheckTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *TABLE();
    TablesContext *tables();
    std::vector<CheckTableOptionContext *> checkTableOption();
    CheckTableOptionContext* checkTableOption(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CheckTableContext* checkTable();

  class  ChecksumTableContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *actionOption = nullptr;;
    ChecksumTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHECKSUM();
    antlr4::tree::TerminalNode *TABLE();
    TablesContext *tables();
    antlr4::tree::TerminalNode *QUICK();
    antlr4::tree::TerminalNode *EXTENDED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChecksumTableContext* checksumTable();

  class  OptimizeTableContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *actionOption = nullptr;;
    OptimizeTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPTIMIZE();
    antlr4::tree::TerminalNode *TABLE();
    TablesContext *tables();
    antlr4::tree::TerminalNode *NO_WRITE_TO_BINLOG();
    antlr4::tree::TerminalNode *LOCAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptimizeTableContext* optimizeTable();

  class  RepairTableContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *actionOption = nullptr;;
    RepairTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPAIR();
    antlr4::tree::TerminalNode *TABLE();
    TablesContext *tables();
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
    antlr4::tree::TerminalNode *CHANGED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CheckTableOptionContext* checkTableOption();

  class  CreateUdfunctionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *returnType = nullptr;;
    CreateUdfunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *FUNCTION();
    UidContext *uid();
    antlr4::tree::TerminalNode *RETURNS();
    antlr4::tree::TerminalNode *SONAME();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *REAL();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *AGGREGATE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateUdfunctionContext* createUdfunction();

  class  InstallPluginContext : public antlr4::ParserRuleContext {
  public:
    InstallPluginContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INSTALL();
    antlr4::tree::TerminalNode *PLUGIN();
    UidContext *uid();
    antlr4::tree::TerminalNode *SONAME();
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InstallPluginContext* installPlugin();

  class  UninstallPluginContext : public antlr4::ParserRuleContext {
  public:
    UninstallPluginContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNINSTALL();
    antlr4::tree::TerminalNode *PLUGIN();
    UidContext *uid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UninstallPluginContext* uninstallPlugin();

  class  SetStatementContext : public antlr4::ParserRuleContext {
  public:
    SetStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    SetStatementContext() : antlr4::ParserRuleContext() { }
    void copyFrom(SetStatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SetTransactionContext : public SetStatementContext {
  public:
    SetTransactionContext(SetStatementContext *ctx);

    SetTransactionStatementContext *setTransactionStatement();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SetCharsetContext : public SetStatementContext {
  public:
    SetCharsetContext(SetStatementContext *ctx);

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

  class  SetNamesContext : public SetStatementContext {
  public:
    SetNamesContext(SetStatementContext *ctx);

    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *NAMES();
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *COLLATE();
    CollationNameContext *collationName();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SetPasswordContext : public SetStatementContext {
  public:
    SetPasswordContext(SetStatementContext *ctx);

    SetPasswordStatementContext *setPasswordStatement();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SetAutocommitContext : public SetStatementContext {
  public:
    SetAutocommitContext(SetStatementContext *ctx);

    SetAutocommitStatementContext *setAutocommitStatement();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SetNewValueInsideTriggerContext : public SetStatementContext {
  public:
    SetNewValueInsideTriggerContext(SetStatementContext *ctx);

    antlr4::tree::TerminalNode *SET();
    FullIdContext *fullId();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SetVariableContext : public SetStatementContext {
  public:
    SetVariableContext(SetStatementContext *ctx);

    antlr4::tree::TerminalNode *SET();
    std::vector<VariableClauseContext *> variableClause();
    VariableClauseContext* variableClause(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  SetStatementContext* setStatement();

  class  ShowStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ShowStatementContext() : antlr4::ParserRuleContext() { }
    void copyFrom(ShowStatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ShowOpenTablesContext : public ShowStatementContext {
  public:
    ShowOpenTablesContext(ShowStatementContext *ctx);

    antlr4::Token *schemaFormat = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *OPEN();
    antlr4::tree::TerminalNode *TABLES();
    UidContext *uid();
    ShowFilterContext *showFilter();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *IN();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShowGlobalInfoContext : public ShowStatementContext {
  public:
    ShowGlobalInfoContext(ShowStatementContext *ctx);

    antlr4::tree::TerminalNode *SHOW();
    ShowGlobalInfoClauseContext *showGlobalInfoClause();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShowCreateFullIdObjectContext : public ShowStatementContext {
  public:
    ShowCreateFullIdObjectContext(ShowStatementContext *ctx);

    antlr4::Token *namedEntity = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *CREATE();
    FullIdContext *fullId();
    antlr4::tree::TerminalNode *EVENT();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *PROCEDURE();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *TRIGGER();
    antlr4::tree::TerminalNode *VIEW();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShowCreateUserContext : public ShowStatementContext {
  public:
    ShowCreateUserContext(ShowStatementContext *ctx);

    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *USER();
    UserNameContext *userName();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShowErrorsContext : public ShowStatementContext {
  public:
    ShowErrorsContext(ShowStatementContext *ctx);

    antlr4::Token *errorFormat = nullptr;
    MySQLParser::DecimalLiteralContext *offset = nullptr;
    MySQLParser::DecimalLiteralContext *rowCount = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *ERRORS();
    antlr4::tree::TerminalNode *WARNINGS();
    antlr4::tree::TerminalNode *LIMIT();
    std::vector<DecimalLiteralContext *> decimalLiteral();
    DecimalLiteralContext* decimalLiteral(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShowCountErrorsContext : public ShowStatementContext {
  public:
    ShowCountErrorsContext(ShowStatementContext *ctx);

    antlr4::Token *errorFormat = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *COUNT();
    antlr4::tree::TerminalNode *ERRORS();
    antlr4::tree::TerminalNode *WARNINGS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShowObjectFilterContext : public ShowStatementContext {
  public:
    ShowObjectFilterContext(ShowStatementContext *ctx);

    antlr4::tree::TerminalNode *SHOW();
    ShowCommonEntityContext *showCommonEntity();
    ShowFilterContext *showFilter();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShowCreateDbContext : public ShowStatementContext {
  public:
    ShowCreateDbContext(ShowStatementContext *ctx);

    antlr4::Token *schemaFormat = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *CREATE();
    UidContext *uid();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *SCHEMA();
    IfNotExistsContext *ifNotExists();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShowEngineContext : public ShowStatementContext {
  public:
    ShowEngineContext(ShowStatementContext *ctx);

    antlr4::Token *engineOption = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *ENGINE();
    EngineNameContext *engineName();
    antlr4::tree::TerminalNode *STATUS();
    antlr4::tree::TerminalNode *MUTEX();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShowSchemaFilterContext : public ShowStatementContext {
  public:
    ShowSchemaFilterContext(ShowStatementContext *ctx);

    antlr4::Token *schemaFormat = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    ShowSchemaEntityContext *showSchemaEntity();
    UidContext *uid();
    ShowFilterContext *showFilter();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *IN();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShowIndexesContext : public ShowStatementContext {
  public:
    ShowIndexesContext(ShowStatementContext *ctx);

    antlr4::Token *indexFormat = nullptr;
    antlr4::Token *tableFormat = nullptr;
    antlr4::Token *schemaFormat = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *INDEXES();
    antlr4::tree::TerminalNode *KEYS();
    std::vector<antlr4::tree::TerminalNode *> FROM();
    antlr4::tree::TerminalNode* FROM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> IN();
    antlr4::tree::TerminalNode* IN(size_t i);
    UidContext *uid();
    WhereClauseContext *whereClause();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShowLogEventsContext : public ShowStatementContext {
  public:
    ShowLogEventsContext(ShowStatementContext *ctx);

    antlr4::Token *logFormat = nullptr;
    antlr4::Token *filename = nullptr;
    MySQLParser::DecimalLiteralContext *fromPosition = nullptr;
    MySQLParser::DecimalLiteralContext *offset = nullptr;
    MySQLParser::DecimalLiteralContext *rowCount = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *EVENTS();
    antlr4::tree::TerminalNode *BINLOG();
    antlr4::tree::TerminalNode *RELAYLOG();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *LIMIT();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    std::vector<DecimalLiteralContext *> decimalLiteral();
    DecimalLiteralContext* decimalLiteral(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShowMasterLogsContext : public ShowStatementContext {
  public:
    ShowMasterLogsContext(ShowStatementContext *ctx);

    antlr4::Token *logFormat = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *LOGS();
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *MASTER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShowGrantsContext : public ShowStatementContext {
  public:
    ShowGrantsContext(ShowStatementContext *ctx);

    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *GRANTS();
    antlr4::tree::TerminalNode *FOR();
    UserNameContext *userName();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShowSlaveStatusContext : public ShowStatementContext {
  public:
    ShowSlaveStatusContext(ShowStatementContext *ctx);

    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *SLAVE();
    antlr4::tree::TerminalNode *STATUS();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *CHANNEL();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShowRoutineContext : public ShowStatementContext {
  public:
    ShowRoutineContext(ShowStatementContext *ctx);

    antlr4::Token *routine = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *CODE();
    FullIdContext *fullId();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *PROCEDURE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShowProfileContext : public ShowStatementContext {
  public:
    ShowProfileContext(ShowStatementContext *ctx);

    MySQLParser::DecimalLiteralContext *queryCount = nullptr;
    MySQLParser::DecimalLiteralContext *offset = nullptr;
    MySQLParser::DecimalLiteralContext *rowCount = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *PROFILE();
    std::vector<ShowProfileTypeContext *> showProfileType();
    ShowProfileTypeContext* showProfileType(size_t i);
    antlr4::tree::TerminalNode *LIMIT();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *QUERY();
    std::vector<DecimalLiteralContext *> decimalLiteral();
    DecimalLiteralContext* decimalLiteral(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShowColumnsContext : public ShowStatementContext {
  public:
    ShowColumnsContext(ShowStatementContext *ctx);

    antlr4::Token *columnsFormat = nullptr;
    antlr4::Token *tableFormat = nullptr;
    antlr4::Token *schemaFormat = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *COLUMNS();
    antlr4::tree::TerminalNode *FIELDS();
    std::vector<antlr4::tree::TerminalNode *> FROM();
    antlr4::tree::TerminalNode* FROM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> IN();
    antlr4::tree::TerminalNode* IN(size_t i);
    antlr4::tree::TerminalNode *FULL();
    UidContext *uid();
    ShowFilterContext *showFilter();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ShowStatementContext* showStatement();

  class  VariableClauseContext : public antlr4::ParserRuleContext {
  public:
    VariableClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCAL_ID();
    antlr4::tree::TerminalNode *GLOBAL_ID();
    UidContext *uid();
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *SESSION();
    antlr4::tree::TerminalNode *LOCAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableClauseContext* variableClause();

  class  ShowCommonEntityContext : public antlr4::ParserRuleContext {
  public:
    ShowCommonEntityContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *COLLATION();
    antlr4::tree::TerminalNode *DATABASES();
    antlr4::tree::TerminalNode *SCHEMAS();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *STATUS();
    antlr4::tree::TerminalNode *PROCEDURE();
    antlr4::tree::TerminalNode *VARIABLES();
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *SESSION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowCommonEntityContext* showCommonEntity();

  class  ShowFilterContext : public antlr4::ParserRuleContext {
  public:
    ShowFilterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    WhereClauseContext *whereClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowFilterContext* showFilter();

  class  ShowGlobalInfoClauseContext : public antlr4::ParserRuleContext {
  public:
    ShowGlobalInfoClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENGINES();
    antlr4::tree::TerminalNode *STORAGE();
    antlr4::tree::TerminalNode *MASTER();
    antlr4::tree::TerminalNode *STATUS();
    antlr4::tree::TerminalNode *PLUGINS();
    antlr4::tree::TerminalNode *PRIVILEGES();
    antlr4::tree::TerminalNode *PROCESSLIST();
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *PROFILES();
    antlr4::tree::TerminalNode *SLAVE();
    antlr4::tree::TerminalNode *HOSTS();
    antlr4::tree::TerminalNode *AUTHORS();
    antlr4::tree::TerminalNode *CONTRIBUTORS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowGlobalInfoClauseContext* showGlobalInfoClause();

  class  ShowSchemaEntityContext : public antlr4::ParserRuleContext {
  public:
    ShowSchemaEntityContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EVENTS();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *STATUS();
    antlr4::tree::TerminalNode *TABLES();
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *TRIGGERS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowSchemaEntityContext* showSchemaEntity();

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

  class  BinlogStatementContext : public antlr4::ParserRuleContext {
  public:
    BinlogStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BINLOG();
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BinlogStatementContext* binlogStatement();

  class  CacheIndexStatementContext : public antlr4::ParserRuleContext {
  public:
    MySQLParser::UidContext *schema = nullptr;;
    CacheIndexStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CACHE();
    antlr4::tree::TerminalNode *INDEX();
    std::vector<TableIndexesContext *> tableIndexes();
    TableIndexesContext* tableIndexes(size_t i);
    antlr4::tree::TerminalNode *IN();
    UidContext *uid();
    antlr4::tree::TerminalNode *PARTITION();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *ALL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CacheIndexStatementContext* cacheIndexStatement();

  class  FlushStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *flushFormat = nullptr;;
    FlushStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FLUSH();
    std::vector<FlushOptionContext *> flushOption();
    FlushOptionContext* flushOption(size_t i);
    antlr4::tree::TerminalNode *NO_WRITE_TO_BINLOG();
    antlr4::tree::TerminalNode *LOCAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FlushStatementContext* flushStatement();

  class  KillStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *connectionFormat = nullptr;;
    KillStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KILL();
    std::vector<DecimalLiteralContext *> decimalLiteral();
    DecimalLiteralContext* decimalLiteral(size_t i);
    antlr4::tree::TerminalNode *CONNECTION();
    antlr4::tree::TerminalNode *QUERY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KillStatementContext* killStatement();

  class  LoadIndexIntoCacheContext : public antlr4::ParserRuleContext {
  public:
    LoadIndexIntoCacheContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOAD();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *CACHE();
    std::vector<LoadedTableIndexesContext *> loadedTableIndexes();
    LoadedTableIndexesContext* loadedTableIndexes(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LoadIndexIntoCacheContext* loadIndexIntoCache();

  class  ResetStatementContext : public antlr4::ParserRuleContext {
  public:
    ResetStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESET();
    antlr4::tree::TerminalNode *QUERY();
    antlr4::tree::TerminalNode *CACHE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResetStatementContext* resetStatement();

  class  ShutdownStatementContext : public antlr4::ParserRuleContext {
  public:
    ShutdownStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHUTDOWN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShutdownStatementContext* shutdownStatement();

  class  TableIndexesContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *indexFormat = nullptr;;
    TableIndexesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableNameContext *tableName();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *KEY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableIndexesContext* tableIndexes();

  class  FlushOptionContext : public antlr4::ParserRuleContext {
  public:
    FlushOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FlushOptionContext() : antlr4::ParserRuleContext() { }
    void copyFrom(FlushOptionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TableFlushOptionContext : public FlushOptionContext {
  public:
    TableFlushOptionContext(FlushOptionContext *ctx);

    antlr4::tree::TerminalNode *TABLES();
    TablesContext *tables();
    FlushTableOptionContext *flushTableOption();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ChannelFlushOptionContext : public FlushOptionContext {
  public:
    ChannelFlushOptionContext(FlushOptionContext *ctx);

    antlr4::tree::TerminalNode *RELAY();
    antlr4::tree::TerminalNode *LOGS();
    ChannelOptionContext *channelOption();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SimpleFlushOptionContext : public FlushOptionContext {
  public:
    SimpleFlushOptionContext(FlushOptionContext *ctx);

    antlr4::tree::TerminalNode *DES_KEY_FILE();
    antlr4::tree::TerminalNode *HOSTS();
    antlr4::tree::TerminalNode *LOGS();
    antlr4::tree::TerminalNode *OPTIMIZER_COSTS();
    antlr4::tree::TerminalNode *PRIVILEGES();
    antlr4::tree::TerminalNode *QUERY();
    antlr4::tree::TerminalNode *CACHE();
    antlr4::tree::TerminalNode *STATUS();
    antlr4::tree::TerminalNode *USER_RESOURCES();
    antlr4::tree::TerminalNode *TABLES();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *ENGINE();
    antlr4::tree::TerminalNode *ERROR();
    antlr4::tree::TerminalNode *GENERAL();
    antlr4::tree::TerminalNode *RELAY();
    antlr4::tree::TerminalNode *SLOW();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  FlushOptionContext* flushOption();

  class  FlushTableOptionContext : public antlr4::ParserRuleContext {
  public:
    FlushTableOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *EXPORT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FlushTableOptionContext* flushTableOption();

  class  LoadedTableIndexesContext : public antlr4::ParserRuleContext {
  public:
    MySQLParser::UidListContext *partitionList = nullptr;;
    antlr4::Token *indexFormat = nullptr;;
    MySQLParser::UidListContext *indexList = nullptr;;
    LoadedTableIndexesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *LEAVES();
    std::vector<UidListContext *> uidList();
    UidListContext* uidList(size_t i);
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *KEY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LoadedTableIndexesContext* loadedTableIndexes();

  class  SimpleDescribeStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *command = nullptr;;
    MySQLParser::UidContext *column = nullptr;;
    antlr4::Token *pattern = nullptr;;
    SimpleDescribeStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *EXPLAIN();
    antlr4::tree::TerminalNode *DESCRIBE();
    antlr4::tree::TerminalNode *DESC();
    UidContext *uid();
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleDescribeStatementContext* simpleDescribeStatement();

  class  FullDescribeStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *command = nullptr;;
    antlr4::Token *formatType = nullptr;;
    antlr4::Token *formatValue = nullptr;;
    FullDescribeStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DescribeObjectClauseContext *describeObjectClause();
    antlr4::tree::TerminalNode *EXPLAIN();
    antlr4::tree::TerminalNode *DESCRIBE();
    antlr4::tree::TerminalNode *DESC();
    antlr4::tree::TerminalNode *EXTENDED();
    antlr4::tree::TerminalNode *PARTITIONS();
    antlr4::tree::TerminalNode *FORMAT();
    antlr4::tree::TerminalNode *TRADITIONAL();
    antlr4::tree::TerminalNode *JSON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FullDescribeStatementContext* fullDescribeStatement();

  class  HelpStatementContext : public antlr4::ParserRuleContext {
  public:
    HelpStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HELP();
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HelpStatementContext* helpStatement();

  class  UseStatementContext : public antlr4::ParserRuleContext {
  public:
    UseStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USE();
    UidContext *uid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UseStatementContext* useStatement();

  class  DescribeObjectClauseContext : public antlr4::ParserRuleContext {
  public:
    DescribeObjectClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    DescribeObjectClauseContext() : antlr4::ParserRuleContext() { }
    void copyFrom(DescribeObjectClauseContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DescribeStatementsContext : public DescribeObjectClauseContext {
  public:
    DescribeStatementsContext(DescribeObjectClauseContext *ctx);

    SelectStatementContext *selectStatement();
    DeleteStatementContext *deleteStatement();
    InsertStatementContext *insertStatement();
    ReplaceStatementContext *replaceStatement();
    UpdateStatementContext *updateStatement();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DescribeConnectionContext : public DescribeObjectClauseContext {
  public:
    DescribeConnectionContext(DescribeObjectClauseContext *ctx);

    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *CONNECTION();
    UidContext *uid();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  DescribeObjectClauseContext* describeObjectClause();

  class  FullIdContext : public antlr4::ParserRuleContext {
  public:
    FullIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FullIdContext* fullId();

  class  TableNameContext : public antlr4::ParserRuleContext {
  public:
    TableNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FullIdContext *fullId();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableNameContext* tableName();

  class  FullColumnNameContext : public antlr4::ParserRuleContext {
  public:
    FullColumnNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FullIdContext *fullId();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FullColumnNameContext* fullColumnName();

  class  IndexColumnNameContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *sortType = nullptr;;
    IndexColumnNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UidContext *uid();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    DecimalLiteralContext *decimalLiteral();
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *DESC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexColumnNameContext* indexColumnName();

  class  UserNameContext : public antlr4::ParserRuleContext {
  public:
    UserNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING_USER_NAME();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UserNameContext* userName();

  class  MysqlVariableContext : public antlr4::ParserRuleContext {
  public:
    MysqlVariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCAL_ID();
    antlr4::tree::TerminalNode *GLOBAL_ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MysqlVariableContext* mysqlVariable();

  class  CharsetNameContext : public antlr4::ParserRuleContext {
  public:
    CharsetNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BINARY();
    CharsetNameBaseContext *charsetNameBase();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *CHARSET_REVERSE_QOUTE_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CharsetNameContext* charsetName();

  class  CollationNameContext : public antlr4::ParserRuleContext {
  public:
    CollationNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UidContext *uid();
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CollationNameContext* collationName();

  class  EngineNameContext : public antlr4::ParserRuleContext {
  public:
    EngineNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ARCHIVE();
    antlr4::tree::TerminalNode *BLACKHOLE();
    antlr4::tree::TerminalNode *CSV();
    antlr4::tree::TerminalNode *FEDERATED();
    antlr4::tree::TerminalNode *INNODB();
    antlr4::tree::TerminalNode *MEMORY();
    antlr4::tree::TerminalNode *MRG_MYISAM();
    antlr4::tree::TerminalNode *MYISAM();
    antlr4::tree::TerminalNode *NDB();
    antlr4::tree::TerminalNode *NDBCLUSTER();
    antlr4::tree::TerminalNode *PERFORMANCE_SCHEMA();
    antlr4::tree::TerminalNode *TOKUDB();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *REVERSE_QUOTE_ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EngineNameContext* engineName();

  class  UuidSetContext : public antlr4::ParserRuleContext {
  public:
    UuidSetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DecimalLiteralContext *> decimalLiteral();
    DecimalLiteralContext* decimalLiteral(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UuidSetContext* uuidSet();

  class  XidContext : public antlr4::ParserRuleContext {
  public:
    MySQLParser::XuidStringIdContext *globalTableUid = nullptr;;
    MySQLParser::XuidStringIdContext *qualifier = nullptr;;
    MySQLParser::DecimalLiteralContext *idFormat = nullptr;;
    XidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<XuidStringIdContext *> xuidStringId();
    XuidStringIdContext* xuidStringId(size_t i);
    DecimalLiteralContext *decimalLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  XidContext* xid();

  class  XuidStringIdContext : public antlr4::ParserRuleContext {
  public:
    XuidStringIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *BIT_STRING();
    std::vector<antlr4::tree::TerminalNode *> HEXADECIMAL_LITERAL();
    antlr4::tree::TerminalNode* HEXADECIMAL_LITERAL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  XuidStringIdContext* xuidStringId();

  class  AuthPluginContext : public antlr4::ParserRuleContext {
  public:
    AuthPluginContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UidContext *uid();
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AuthPluginContext* authPlugin();

  class  UidContext : public antlr4::ParserRuleContext {
  public:
    UidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleIdContext *simpleId();
    antlr4::tree::TerminalNode *REVERSE_QUOTE_ID();
    antlr4::tree::TerminalNode *CHARSET_REVERSE_QOUTE_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UidContext* uid();

  class  SimpleIdContext : public antlr4::ParserRuleContext {
  public:
    SimpleIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    CharsetNameBaseContext *charsetNameBase();
    TransactionLevelBaseContext *transactionLevelBase();
    EngineNameContext *engineName();
    PrivilegesBaseContext *privilegesBase();
    IntervalTypeBaseContext *intervalTypeBase();
    DataTypeBaseContext *dataTypeBase();
    KeywordsCanBeIdContext *keywordsCanBeId();
    FunctionNameBaseContext *functionNameBase();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleIdContext* simpleId();

  class  DecimalLiteralContext : public antlr4::ParserRuleContext {
  public:
    DecimalLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECIMAL_LITERAL();
    antlr4::tree::TerminalNode *ZERO_DECIMAL();
    antlr4::tree::TerminalNode *ONE_DECIMAL();
    antlr4::tree::TerminalNode *TWO_DECIMAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DecimalLiteralContext* decimalLiteral();

  class  FileSizeLiteralContext : public antlr4::ParserRuleContext {
  public:
    FileSizeLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FILESIZE_LITERAL();
    DecimalLiteralContext *decimalLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FileSizeLiteralContext* fileSizeLiteral();

  class  StringLiteralContext : public antlr4::ParserRuleContext {
  public:
    StringLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> STRING_LITERAL();
    antlr4::tree::TerminalNode* STRING_LITERAL(size_t i);
    antlr4::tree::TerminalNode *START_NATIONAL_STRING_LITERAL();
    antlr4::tree::TerminalNode *STRING_CHARSET_NAME();
    antlr4::tree::TerminalNode *COLLATE();
    CollationNameContext *collationName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringLiteralContext* stringLiteral();

  class  BooleanLiteralContext : public antlr4::ParserRuleContext {
  public:
    BooleanLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BooleanLiteralContext* booleanLiteral();

  class  HexadecimalLiteralContext : public antlr4::ParserRuleContext {
  public:
    HexadecimalLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HEXADECIMAL_LITERAL();
    antlr4::tree::TerminalNode *STRING_CHARSET_NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HexadecimalLiteralContext* hexadecimalLiteral();

  class  NullNotnullContext : public antlr4::ParserRuleContext {
  public:
    NullNotnullContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NULL_LITERAL();
    antlr4::tree::TerminalNode *NULL_SPEC_LITERAL();
    antlr4::tree::TerminalNode *NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NullNotnullContext* nullNotnull();

  class  ConstantContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *nullLiteral = nullptr;;
    ConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StringLiteralContext *stringLiteral();
    DecimalLiteralContext *decimalLiteral();
    HexadecimalLiteralContext *hexadecimalLiteral();
    BooleanLiteralContext *booleanLiteral();
    antlr4::tree::TerminalNode *REAL_LITERAL();
    antlr4::tree::TerminalNode *BIT_STRING();
    antlr4::tree::TerminalNode *NULL_LITERAL();
    antlr4::tree::TerminalNode *NULL_SPEC_LITERAL();
    antlr4::tree::TerminalNode *NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantContext* constant();

  class  DataTypeContext : public antlr4::ParserRuleContext {
  public:
    DataTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    DataTypeContext() : antlr4::ParserRuleContext() { }
    void copyFrom(DataTypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SpatialDataTypeContext : public DataTypeContext {
  public:
    SpatialDataTypeContext(DataTypeContext *ctx);

    antlr4::Token *typeName = nullptr;
    antlr4::tree::TerminalNode *GEOMETRYCOLLECTION();
    antlr4::tree::TerminalNode *GEOMCOLLECTION();
    antlr4::tree::TerminalNode *LINESTRING();
    antlr4::tree::TerminalNode *MULTILINESTRING();
    antlr4::tree::TerminalNode *MULTIPOINT();
    antlr4::tree::TerminalNode *MULTIPOLYGON();
    antlr4::tree::TerminalNode *POINT();
    antlr4::tree::TerminalNode *POLYGON();
    antlr4::tree::TerminalNode *JSON();
    antlr4::tree::TerminalNode *GEOMETRY();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CollectionDataTypeContext : public DataTypeContext {
  public:
    CollectionDataTypeContext(DataTypeContext *ctx);

    antlr4::Token *typeName = nullptr;
    CollectionOptionsContext *collectionOptions();
    antlr4::tree::TerminalNode *ENUM();
    std::vector<antlr4::tree::TerminalNode *> SET();
    antlr4::tree::TerminalNode* SET(size_t i);
    antlr4::tree::TerminalNode *BINARY();
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *CHARSET();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NationalVaryingStringDataTypeContext : public DataTypeContext {
  public:
    NationalVaryingStringDataTypeContext(DataTypeContext *ctx);

    antlr4::Token *typeName = nullptr;
    antlr4::tree::TerminalNode *NATIONAL();
    antlr4::tree::TerminalNode *VARYING();
    antlr4::tree::TerminalNode *CHAR();
    antlr4::tree::TerminalNode *CHARACTER();
    LengthOneDimensionContext *lengthOneDimension();
    antlr4::tree::TerminalNode *BINARY();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DimensionDataTypeContext : public DataTypeContext {
  public:
    DimensionDataTypeContext(DataTypeContext *ctx);

    antlr4::Token *typeName = nullptr;
    antlr4::tree::TerminalNode *TINYINT();
    antlr4::tree::TerminalNode *SMALLINT();
    antlr4::tree::TerminalNode *MEDIUMINT();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *BIGINT();
    LengthOneDimensionContext *lengthOneDimension();
    antlr4::tree::TerminalNode *ZEROFILL();
    antlr4::tree::TerminalNode *SIGNED();
    antlr4::tree::TerminalNode *UNSIGNED();
    antlr4::tree::TerminalNode *REAL();
    LengthTwoDimensionContext *lengthTwoDimension();
    antlr4::tree::TerminalNode *DOUBLE();
    antlr4::tree::TerminalNode *PRECISION();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *DEC();
    antlr4::tree::TerminalNode *FIXED();
    antlr4::tree::TerminalNode *NUMERIC();
    antlr4::tree::TerminalNode *FLOAT();
    LengthTwoOptionalDimensionContext *lengthTwoOptionalDimension();
    antlr4::tree::TerminalNode *BIT();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *TIMESTAMP();
    antlr4::tree::TerminalNode *DATETIME();
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *VARBINARY();
    antlr4::tree::TerminalNode *YEAR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StringDataTypeContext : public DataTypeContext {
  public:
    StringDataTypeContext(DataTypeContext *ctx);

    antlr4::Token *typeName = nullptr;
    antlr4::tree::TerminalNode *CHAR();
    antlr4::tree::TerminalNode *VARCHAR();
    antlr4::tree::TerminalNode *TINYTEXT();
    antlr4::tree::TerminalNode *TEXT();
    antlr4::tree::TerminalNode *MEDIUMTEXT();
    antlr4::tree::TerminalNode *LONGTEXT();
    antlr4::tree::TerminalNode *NCHAR();
    antlr4::tree::TerminalNode *NVARCHAR();
    LengthOneDimensionContext *lengthOneDimension();
    antlr4::tree::TerminalNode *BINARY();
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *COLLATE();
    CollationNameContext *collationName();
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *CHARSET();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NationalStringDataTypeContext : public DataTypeContext {
  public:
    NationalStringDataTypeContext(DataTypeContext *ctx);

    antlr4::Token *typeName = nullptr;
    antlr4::tree::TerminalNode *NATIONAL();
    antlr4::tree::TerminalNode *VARCHAR();
    antlr4::tree::TerminalNode *CHARACTER();
    LengthOneDimensionContext *lengthOneDimension();
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *NCHAR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SimpleDataTypeContext : public DataTypeContext {
  public:
    SimpleDataTypeContext(DataTypeContext *ctx);

    antlr4::Token *typeName = nullptr;
    antlr4::tree::TerminalNode *DATE();
    antlr4::tree::TerminalNode *TINYBLOB();
    antlr4::tree::TerminalNode *BLOB();
    antlr4::tree::TerminalNode *MEDIUMBLOB();
    antlr4::tree::TerminalNode *LONGBLOB();
    antlr4::tree::TerminalNode *BOOL();
    antlr4::tree::TerminalNode *BOOLEAN();
    antlr4::tree::TerminalNode *SERIAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  DataTypeContext* dataType();

  class  CollectionOptionsContext : public antlr4::ParserRuleContext {
  public:
    CollectionOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> STRING_LITERAL();
    antlr4::tree::TerminalNode* STRING_LITERAL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CollectionOptionsContext* collectionOptions();

  class  ConvertedDataTypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *typeName = nullptr;;
    ConvertedDataTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *NCHAR();
    LengthOneDimensionContext *lengthOneDimension();
    antlr4::tree::TerminalNode *CHAR();
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *CHARSET();
    antlr4::tree::TerminalNode *DATE();
    antlr4::tree::TerminalNode *DATETIME();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *DECIMAL();
    LengthTwoDimensionContext *lengthTwoDimension();
    antlr4::tree::TerminalNode *SIGNED();
    antlr4::tree::TerminalNode *UNSIGNED();
    antlr4::tree::TerminalNode *INTEGER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConvertedDataTypeContext* convertedDataType();

  class  LengthOneDimensionContext : public antlr4::ParserRuleContext {
  public:
    LengthOneDimensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DecimalLiteralContext *decimalLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LengthOneDimensionContext* lengthOneDimension();

  class  LengthTwoDimensionContext : public antlr4::ParserRuleContext {
  public:
    LengthTwoDimensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DecimalLiteralContext *> decimalLiteral();
    DecimalLiteralContext* decimalLiteral(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LengthTwoDimensionContext* lengthTwoDimension();

  class  LengthTwoOptionalDimensionContext : public antlr4::ParserRuleContext {
  public:
    LengthTwoOptionalDimensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DecimalLiteralContext *> decimalLiteral();
    DecimalLiteralContext* decimalLiteral(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LengthTwoOptionalDimensionContext* lengthTwoOptionalDimension();

  class  UidListContext : public antlr4::ParserRuleContext {
  public:
    UidListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UidListContext* uidList();

  class  TablesContext : public antlr4::ParserRuleContext {
  public:
    TablesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TableNameContext *> tableName();
    TableNameContext* tableName(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TablesContext* tables();

  class  IndexColumnNamesContext : public antlr4::ParserRuleContext {
  public:
    IndexColumnNamesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IndexColumnNameContext *> indexColumnName();
    IndexColumnNameContext* indexColumnName(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexColumnNamesContext* indexColumnNames();

  class  ExpressionsContext : public antlr4::ParserRuleContext {
  public:
    ExpressionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionsContext* expressions();

  class  ExpressionsWithDefaultsContext : public antlr4::ParserRuleContext {
  public:
    ExpressionsWithDefaultsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionOrDefaultContext *> expressionOrDefault();
    ExpressionOrDefaultContext* expressionOrDefault(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionsWithDefaultsContext* expressionsWithDefaults();

  class  ConstantsContext : public antlr4::ParserRuleContext {
  public:
    ConstantsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ConstantContext *> constant();
    ConstantContext* constant(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantsContext* constants();

  class  SimpleStringsContext : public antlr4::ParserRuleContext {
  public:
    SimpleStringsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> STRING_LITERAL();
    antlr4::tree::TerminalNode* STRING_LITERAL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleStringsContext* simpleStrings();

  class  UserVariablesContext : public antlr4::ParserRuleContext {
  public:
    UserVariablesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LOCAL_ID();
    antlr4::tree::TerminalNode* LOCAL_ID(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UserVariablesContext* userVariables();

  class  DefaultValueContext : public antlr4::ParserRuleContext {
  public:
    DefaultValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NULL_LITERAL();
    ConstantContext *constant();
    UnaryOperatorContext *unaryOperator();
    std::vector<CurrentTimestampContext *> currentTimestamp();
    CurrentTimestampContext* currentTimestamp(size_t i);
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *UPDATE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefaultValueContext* defaultValue();

  class  CurrentTimestampContext : public antlr4::ParserRuleContext {
  public:
    CurrentTimestampContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOW();
    antlr4::tree::TerminalNode *CURRENT_TIMESTAMP();
    antlr4::tree::TerminalNode *LOCALTIME();
    antlr4::tree::TerminalNode *LOCALTIMESTAMP();
    DecimalLiteralContext *decimalLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CurrentTimestampContext* currentTimestamp();

  class  ExpressionOrDefaultContext : public antlr4::ParserRuleContext {
  public:
    ExpressionOrDefaultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionOrDefaultContext* expressionOrDefault();

  class  IfExistsContext : public antlr4::ParserRuleContext {
  public:
    IfExistsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfExistsContext* ifExists();

  class  IfNotExistsContext : public antlr4::ParserRuleContext {
  public:
    IfNotExistsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *EXISTS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfNotExistsContext* ifNotExists();

  class  FunctionCallContext : public antlr4::ParserRuleContext {
  public:
    FunctionCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FunctionCallContext() : antlr4::ParserRuleContext() { }
    void copyFrom(FunctionCallContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SpecificFunctionCallContext : public FunctionCallContext {
  public:
    SpecificFunctionCallContext(FunctionCallContext *ctx);

    SpecificFunctionContext *specificFunction();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PasswordFunctionCallContext : public FunctionCallContext {
  public:
    PasswordFunctionCallContext(FunctionCallContext *ctx);

    PasswordFunctionClauseContext *passwordFunctionClause();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UdfFunctionCallContext : public FunctionCallContext {
  public:
    UdfFunctionCallContext(FunctionCallContext *ctx);

    FullIdContext *fullId();
    FunctionArgsContext *functionArgs();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AggregateFunctionCallContext : public FunctionCallContext {
  public:
    AggregateFunctionCallContext(FunctionCallContext *ctx);

    AggregateWindowedFunctionContext *aggregateWindowedFunction();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ScalarFunctionCallContext : public FunctionCallContext {
  public:
    ScalarFunctionCallContext(FunctionCallContext *ctx);

    ScalarFunctionNameContext *scalarFunctionName();
    FunctionArgsContext *functionArgs();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  FunctionCallContext* functionCall();

  class  SpecificFunctionContext : public antlr4::ParserRuleContext {
  public:
    SpecificFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    SpecificFunctionContext() : antlr4::ParserRuleContext() { }
    void copyFrom(SpecificFunctionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PositionFunctionCallContext : public SpecificFunctionContext {
  public:
    PositionFunctionCallContext(SpecificFunctionContext *ctx);

    MySQLParser::StringLiteralContext *positionString = nullptr;
    MySQLParser::ExpressionContext *positionExpression = nullptr;
    MySQLParser::StringLiteralContext *inString = nullptr;
    MySQLParser::ExpressionContext *inExpression = nullptr;
    antlr4::tree::TerminalNode *POSITION();
    antlr4::tree::TerminalNode *IN();
    std::vector<StringLiteralContext *> stringLiteral();
    StringLiteralContext* stringLiteral(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TrimFunctionCallContext : public SpecificFunctionContext {
  public:
    TrimFunctionCallContext(SpecificFunctionContext *ctx);

    antlr4::Token *positioinForm = nullptr;
    MySQLParser::StringLiteralContext *sourceString = nullptr;
    MySQLParser::ExpressionContext *sourceExpression = nullptr;
    MySQLParser::StringLiteralContext *fromString = nullptr;
    MySQLParser::ExpressionContext *fromExpression = nullptr;
    antlr4::tree::TerminalNode *TRIM();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *BOTH();
    antlr4::tree::TerminalNode *LEADING();
    antlr4::tree::TerminalNode *TRAILING();
    std::vector<StringLiteralContext *> stringLiteral();
    StringLiteralContext* stringLiteral(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SimpleFunctionCallContext : public SpecificFunctionContext {
  public:
    SimpleFunctionCallContext(SpecificFunctionContext *ctx);

    antlr4::tree::TerminalNode *CURRENT_DATE();
    antlr4::tree::TerminalNode *CURRENT_TIME();
    antlr4::tree::TerminalNode *CURRENT_TIMESTAMP();
    antlr4::tree::TerminalNode *CURRENT_USER();
    antlr4::tree::TerminalNode *LOCALTIME();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CharFunctionCallContext : public SpecificFunctionContext {
  public:
    CharFunctionCallContext(SpecificFunctionContext *ctx);

    antlr4::tree::TerminalNode *CHAR();
    FunctionArgsContext *functionArgs();
    antlr4::tree::TerminalNode *USING();
    CharsetNameContext *charsetName();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  WeightFunctionCallContext : public SpecificFunctionContext {
  public:
    WeightFunctionCallContext(SpecificFunctionContext *ctx);

    antlr4::Token *stringFormat = nullptr;
    antlr4::tree::TerminalNode *WEIGHT_STRING();
    StringLiteralContext *stringLiteral();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *AS();
    DecimalLiteralContext *decimalLiteral();
    LevelsInWeightStringContext *levelsInWeightString();
    antlr4::tree::TerminalNode *CHAR();
    antlr4::tree::TerminalNode *BINARY();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  GetFormatFunctionCallContext : public SpecificFunctionContext {
  public:
    GetFormatFunctionCallContext(SpecificFunctionContext *ctx);

    antlr4::Token *datetimeFormat = nullptr;
    antlr4::tree::TerminalNode *GET_FORMAT();
    StringLiteralContext *stringLiteral();
    antlr4::tree::TerminalNode *DATE();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *DATETIME();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CaseFunctionCallContext : public SpecificFunctionContext {
  public:
    CaseFunctionCallContext(SpecificFunctionContext *ctx);

    MySQLParser::FunctionArgContext *elseArg = nullptr;
    antlr4::tree::TerminalNode *CASE();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *END();
    std::vector<CaseFuncAlternativeContext *> caseFuncAlternative();
    CaseFuncAlternativeContext* caseFuncAlternative(size_t i);
    antlr4::tree::TerminalNode *ELSE();
    FunctionArgContext *functionArg();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExtractFunctionCallContext : public SpecificFunctionContext {
  public:
    ExtractFunctionCallContext(SpecificFunctionContext *ctx);

    MySQLParser::StringLiteralContext *sourceString = nullptr;
    MySQLParser::ExpressionContext *sourceExpression = nullptr;
    antlr4::tree::TerminalNode *EXTRACT();
    IntervalTypeContext *intervalType();
    antlr4::tree::TerminalNode *FROM();
    StringLiteralContext *stringLiteral();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DataTypeFunctionCallContext : public SpecificFunctionContext {
  public:
    DataTypeFunctionCallContext(SpecificFunctionContext *ctx);

    antlr4::Token *separator = nullptr;
    antlr4::tree::TerminalNode *CONVERT();
    ExpressionContext *expression();
    ConvertedDataTypeContext *convertedDataType();
    antlr4::tree::TerminalNode *USING();
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *CAST();
    antlr4::tree::TerminalNode *AS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ValuesFunctionCallContext : public SpecificFunctionContext {
  public:
    ValuesFunctionCallContext(SpecificFunctionContext *ctx);

    antlr4::tree::TerminalNode *VALUES();
    FullColumnNameContext *fullColumnName();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SubstrFunctionCallContext : public SpecificFunctionContext {
  public:
    SubstrFunctionCallContext(SpecificFunctionContext *ctx);

    MySQLParser::StringLiteralContext *sourceString = nullptr;
    MySQLParser::ExpressionContext *sourceExpression = nullptr;
    MySQLParser::DecimalLiteralContext *fromDecimal = nullptr;
    MySQLParser::ExpressionContext *fromExpression = nullptr;
    MySQLParser::DecimalLiteralContext *forDecimal = nullptr;
    MySQLParser::ExpressionContext *forExpression = nullptr;
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *SUBSTR();
    antlr4::tree::TerminalNode *SUBSTRING();
    StringLiteralContext *stringLiteral();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<DecimalLiteralContext *> decimalLiteral();
    DecimalLiteralContext* decimalLiteral(size_t i);
    antlr4::tree::TerminalNode *FOR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  SpecificFunctionContext* specificFunction();

  class  CaseFuncAlternativeContext : public antlr4::ParserRuleContext {
  public:
    MySQLParser::FunctionArgContext *condition = nullptr;;
    MySQLParser::FunctionArgContext *consequent = nullptr;;
    CaseFuncAlternativeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *THEN();
    std::vector<FunctionArgContext *> functionArg();
    FunctionArgContext* functionArg(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CaseFuncAlternativeContext* caseFuncAlternative();

  class  LevelsInWeightStringContext : public antlr4::ParserRuleContext {
  public:
    LevelsInWeightStringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    LevelsInWeightStringContext() : antlr4::ParserRuleContext() { }
    void copyFrom(LevelsInWeightStringContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  LevelWeightRangeContext : public LevelsInWeightStringContext {
  public:
    LevelWeightRangeContext(LevelsInWeightStringContext *ctx);

    MySQLParser::DecimalLiteralContext *firstLevel = nullptr;
    MySQLParser::DecimalLiteralContext *lastLevel = nullptr;
    antlr4::tree::TerminalNode *LEVEL();
    std::vector<DecimalLiteralContext *> decimalLiteral();
    DecimalLiteralContext* decimalLiteral(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LevelWeightListContext : public LevelsInWeightStringContext {
  public:
    LevelWeightListContext(LevelsInWeightStringContext *ctx);

    antlr4::tree::TerminalNode *LEVEL();
    std::vector<LevelInWeightListElementContext *> levelInWeightListElement();
    LevelInWeightListElementContext* levelInWeightListElement(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  LevelsInWeightStringContext* levelsInWeightString();

  class  LevelInWeightListElementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *orderType = nullptr;;
    LevelInWeightListElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DecimalLiteralContext *decimalLiteral();
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *DESC();
    antlr4::tree::TerminalNode *REVERSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LevelInWeightListElementContext* levelInWeightListElement();

  class  AggregateWindowedFunctionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *aggregator = nullptr;;
    antlr4::Token *starArg = nullptr;;
    antlr4::Token *separator = nullptr;;
    AggregateWindowedFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionArgContext *functionArg();
    antlr4::tree::TerminalNode *AVG();
    antlr4::tree::TerminalNode *MAX();
    antlr4::tree::TerminalNode *MIN();
    antlr4::tree::TerminalNode *SUM();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *DISTINCT();
    antlr4::tree::TerminalNode *COUNT();
    FunctionArgsContext *functionArgs();
    antlr4::tree::TerminalNode *BIT_AND();
    antlr4::tree::TerminalNode *BIT_OR();
    antlr4::tree::TerminalNode *BIT_XOR();
    antlr4::tree::TerminalNode *STD();
    antlr4::tree::TerminalNode *STDDEV();
    antlr4::tree::TerminalNode *STDDEV_POP();
    antlr4::tree::TerminalNode *STDDEV_SAMP();
    antlr4::tree::TerminalNode *VAR_POP();
    antlr4::tree::TerminalNode *VAR_SAMP();
    antlr4::tree::TerminalNode *VARIANCE();
    antlr4::tree::TerminalNode *GROUP_CONCAT();
    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *BY();
    std::vector<OrderByExpressionContext *> orderByExpression();
    OrderByExpressionContext* orderByExpression(size_t i);
    antlr4::tree::TerminalNode *SEPARATOR();
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AggregateWindowedFunctionContext* aggregateWindowedFunction();

  class  ScalarFunctionNameContext : public antlr4::ParserRuleContext {
  public:
    ScalarFunctionNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionNameBaseContext *functionNameBase();
    antlr4::tree::TerminalNode *ASCII();
    antlr4::tree::TerminalNode *CURDATE();
    antlr4::tree::TerminalNode *CURRENT_DATE();
    antlr4::tree::TerminalNode *CURRENT_TIME();
    antlr4::tree::TerminalNode *CURRENT_TIMESTAMP();
    antlr4::tree::TerminalNode *CURTIME();
    antlr4::tree::TerminalNode *DATE_ADD();
    antlr4::tree::TerminalNode *DATE_SUB();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *LOCALTIME();
    antlr4::tree::TerminalNode *LOCALTIMESTAMP();
    antlr4::tree::TerminalNode *MID();
    antlr4::tree::TerminalNode *NOW();
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *SUBSTR();
    antlr4::tree::TerminalNode *SUBSTRING();
    antlr4::tree::TerminalNode *SYSDATE();
    antlr4::tree::TerminalNode *TRIM();
    antlr4::tree::TerminalNode *UTC_DATE();
    antlr4::tree::TerminalNode *UTC_TIME();
    antlr4::tree::TerminalNode *UTC_TIMESTAMP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ScalarFunctionNameContext* scalarFunctionName();

  class  PasswordFunctionClauseContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *functionName = nullptr;;
    PasswordFunctionClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionArgContext *functionArg();
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *OLD_PASSWORD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PasswordFunctionClauseContext* passwordFunctionClause();

  class  FunctionArgsContext : public antlr4::ParserRuleContext {
  public:
    FunctionArgsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ConstantContext *> constant();
    ConstantContext* constant(size_t i);
    std::vector<FullColumnNameContext *> fullColumnName();
    FullColumnNameContext* fullColumnName(size_t i);
    std::vector<FunctionCallContext *> functionCall();
    FunctionCallContext* functionCall(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionArgsContext* functionArgs();

  class  FunctionArgContext : public antlr4::ParserRuleContext {
  public:
    FunctionArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstantContext *constant();
    FullColumnNameContext *fullColumnName();
    FunctionCallContext *functionCall();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionArgContext* functionArg();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *notOperator = nullptr;;
    antlr4::Token *testValue = nullptr;;
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *NOT();
    PredicateContext *predicate();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();
    antlr4::tree::TerminalNode *UNKNOWN();
    LogicalOperatorContext *logicalOperator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  PredicateContext : public antlr4::ParserRuleContext {
  public:
    MySQLParser::PredicateContext *in_col = nullptr;;
    MySQLParser::PredicateContext *left = nullptr;;
    MySQLParser::PredicateContext *right = nullptr;;
    antlr4::Token *regex = nullptr;;
    antlr4::Token *quantifier = nullptr;;
    PredicateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionAtomContext *expressionAtom();
    antlr4::tree::TerminalNode *LOCAL_ID();
    antlr4::tree::TerminalNode *VAR_ASSIGN();
    ComparisonOperatorContext *comparisonOperator();
    std::vector<PredicateContext *> predicate();
    PredicateContext* predicate(size_t i);
    antlr4::tree::TerminalNode *BETWEEN();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *SOUNDS();
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *REGEXP();
    antlr4::tree::TerminalNode *RLIKE();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *IN();
    SelectStatementContext *selectStatement();
    ExpressionsContext *expressions();
    antlr4::tree::TerminalNode *IS();
    NullNotnullContext *nullNotnull();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *ANY();
    antlr4::tree::TerminalNode *SOME();
    antlr4::tree::TerminalNode *ESCAPE();
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PredicateContext* predicate();
  PredicateContext* predicate(int precedence);
  class  ExpressionAtomContext : public antlr4::ParserRuleContext {
  public:
    MySQLParser::ExpressionAtomContext *left = nullptr;;
    MySQLParser::ExpressionAtomContext *right = nullptr;;
    ExpressionAtomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstantContext *constant();
    FullColumnNameContext *fullColumnName();
    FunctionCallContext *functionCall();
    MysqlVariableContext *mysqlVariable();
    UnaryOperatorContext *unaryOperator();
    std::vector<ExpressionAtomContext *> expressionAtom();
    ExpressionAtomContext* expressionAtom(size_t i);
    antlr4::tree::TerminalNode *BINARY();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *EXISTS();
    SelectStatementContext *selectStatement();
    antlr4::tree::TerminalNode *INTERVAL();
    IntervalTypeContext *intervalType();
    antlr4::tree::TerminalNode *PLACEHOLDER_VALUE();
    BitOperatorContext *bitOperator();
    MathOperatorContext *mathOperator();
    antlr4::tree::TerminalNode *COLLATE();
    CollationNameContext *collationName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionAtomContext* expressionAtom();
  ExpressionAtomContext* expressionAtom(int precedence);
  class  UnaryOperatorContext : public antlr4::ParserRuleContext {
  public:
    UnaryOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryOperatorContext* unaryOperator();

  class  ComparisonOperatorContext : public antlr4::ParserRuleContext {
  public:
    ComparisonOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComparisonOperatorContext* comparisonOperator();

  class  LogicalOperatorContext : public antlr4::ParserRuleContext {
  public:
    LogicalOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *XOR();
    antlr4::tree::TerminalNode *OR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicalOperatorContext* logicalOperator();

  class  BitOperatorContext : public antlr4::ParserRuleContext {
  public:
    BitOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BitOperatorContext* bitOperator();

  class  MathOperatorContext : public antlr4::ParserRuleContext {
  public:
    MathOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *MOD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MathOperatorContext* mathOperator();

  class  CharsetNameBaseContext : public antlr4::ParserRuleContext {
  public:
    CharsetNameBaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ARMSCII8();
    antlr4::tree::TerminalNode *ASCII();
    antlr4::tree::TerminalNode *BIG5();
    antlr4::tree::TerminalNode *CP1250();
    antlr4::tree::TerminalNode *CP1251();
    antlr4::tree::TerminalNode *CP1256();
    antlr4::tree::TerminalNode *CP1257();
    antlr4::tree::TerminalNode *CP850();
    antlr4::tree::TerminalNode *CP852();
    antlr4::tree::TerminalNode *CP866();
    antlr4::tree::TerminalNode *CP932();
    antlr4::tree::TerminalNode *DEC8();
    antlr4::tree::TerminalNode *EUCJPMS();
    antlr4::tree::TerminalNode *EUCKR();
    antlr4::tree::TerminalNode *GB2312();
    antlr4::tree::TerminalNode *GBK();
    antlr4::tree::TerminalNode *GEOSTD8();
    antlr4::tree::TerminalNode *GREEK();
    antlr4::tree::TerminalNode *HEBREW();
    antlr4::tree::TerminalNode *HP8();
    antlr4::tree::TerminalNode *KEYBCS2();
    antlr4::tree::TerminalNode *KOI8R();
    antlr4::tree::TerminalNode *KOI8U();
    antlr4::tree::TerminalNode *LATIN1();
    antlr4::tree::TerminalNode *LATIN2();
    antlr4::tree::TerminalNode *LATIN5();
    antlr4::tree::TerminalNode *LATIN7();
    antlr4::tree::TerminalNode *MACCE();
    antlr4::tree::TerminalNode *MACROMAN();
    antlr4::tree::TerminalNode *SJIS();
    antlr4::tree::TerminalNode *SWE7();
    antlr4::tree::TerminalNode *TIS620();
    antlr4::tree::TerminalNode *UCS2();
    antlr4::tree::TerminalNode *UJIS();
    antlr4::tree::TerminalNode *UTF16();
    antlr4::tree::TerminalNode *UTF16LE();
    antlr4::tree::TerminalNode *UTF32();
    antlr4::tree::TerminalNode *UTF8();
    antlr4::tree::TerminalNode *UTF8MB3();
    antlr4::tree::TerminalNode *UTF8MB4();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CharsetNameBaseContext* charsetNameBase();

  class  TransactionLevelBaseContext : public antlr4::ParserRuleContext {
  public:
    TransactionLevelBaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPEATABLE();
    antlr4::tree::TerminalNode *COMMITTED();
    antlr4::tree::TerminalNode *UNCOMMITTED();
    antlr4::tree::TerminalNode *SERIALIZABLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TransactionLevelBaseContext* transactionLevelBase();

  class  PrivilegesBaseContext : public antlr4::ParserRuleContext {
  public:
    PrivilegesBaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLES();
    antlr4::tree::TerminalNode *ROUTINE();
    antlr4::tree::TerminalNode *EXECUTE();
    antlr4::tree::TerminalNode *FILE();
    antlr4::tree::TerminalNode *PROCESS();
    antlr4::tree::TerminalNode *RELOAD();
    antlr4::tree::TerminalNode *SHUTDOWN();
    antlr4::tree::TerminalNode *SUPER();
    antlr4::tree::TerminalNode *PRIVILEGES();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrivilegesBaseContext* privilegesBase();

  class  IntervalTypeBaseContext : public antlr4::ParserRuleContext {
  public:
    IntervalTypeBaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *QUARTER();
    antlr4::tree::TerminalNode *MONTH();
    antlr4::tree::TerminalNode *DAY();
    antlr4::tree::TerminalNode *HOUR();
    antlr4::tree::TerminalNode *MINUTE();
    antlr4::tree::TerminalNode *WEEK();
    antlr4::tree::TerminalNode *SECOND();
    antlr4::tree::TerminalNode *MICROSECOND();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntervalTypeBaseContext* intervalTypeBase();

  class  DataTypeBaseContext : public antlr4::ParserRuleContext {
  public:
    DataTypeBaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATE();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *TIMESTAMP();
    antlr4::tree::TerminalNode *DATETIME();
    antlr4::tree::TerminalNode *YEAR();
    antlr4::tree::TerminalNode *ENUM();
    antlr4::tree::TerminalNode *TEXT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DataTypeBaseContext* dataTypeBase();

  class  KeywordsCanBeIdContext : public antlr4::ParserRuleContext {
  public:
    KeywordsCanBeIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ACCOUNT();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *AFTER();
    antlr4::tree::TerminalNode *AGGREGATE();
    antlr4::tree::TerminalNode *ALGORITHM();
    antlr4::tree::TerminalNode *ANY();
    antlr4::tree::TerminalNode *AT();
    antlr4::tree::TerminalNode *AUTHORS();
    antlr4::tree::TerminalNode *AUTOCOMMIT();
    antlr4::tree::TerminalNode *AUTOEXTEND_SIZE();
    antlr4::tree::TerminalNode *AUTO_INCREMENT();
    antlr4::tree::TerminalNode *AVG_ROW_LENGTH();
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *BINLOG();
    antlr4::tree::TerminalNode *BIT();
    antlr4::tree::TerminalNode *BLOCK();
    antlr4::tree::TerminalNode *BOOL();
    antlr4::tree::TerminalNode *BOOLEAN();
    antlr4::tree::TerminalNode *BTREE();
    antlr4::tree::TerminalNode *CACHE();
    antlr4::tree::TerminalNode *CASCADED();
    antlr4::tree::TerminalNode *CHAIN();
    antlr4::tree::TerminalNode *CHANGED();
    antlr4::tree::TerminalNode *CHANNEL();
    antlr4::tree::TerminalNode *CHECKSUM();
    antlr4::tree::TerminalNode *PAGE_CHECKSUM();
    antlr4::tree::TerminalNode *CIPHER();
    antlr4::tree::TerminalNode *CLIENT();
    antlr4::tree::TerminalNode *CLOSE();
    antlr4::tree::TerminalNode *COALESCE();
    antlr4::tree::TerminalNode *CODE();
    antlr4::tree::TerminalNode *COLUMNS();
    antlr4::tree::TerminalNode *COLUMN_FORMAT();
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *COMMIT();
    antlr4::tree::TerminalNode *COMPACT();
    antlr4::tree::TerminalNode *COMPLETION();
    antlr4::tree::TerminalNode *COMPRESSED();
    antlr4::tree::TerminalNode *COMPRESSION();
    antlr4::tree::TerminalNode *CONCURRENT();
    antlr4::tree::TerminalNode *CONNECTION();
    antlr4::tree::TerminalNode *CONSISTENT();
    antlr4::tree::TerminalNode *CONTAINS();
    antlr4::tree::TerminalNode *CONTEXT();
    antlr4::tree::TerminalNode *CONTRIBUTORS();
    antlr4::tree::TerminalNode *COPY();
    antlr4::tree::TerminalNode *CPU();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *DATAFILE();
    antlr4::tree::TerminalNode *DEALLOCATE();
    antlr4::tree::TerminalNode *DEFAULT_AUTH();
    antlr4::tree::TerminalNode *DEFINER();
    antlr4::tree::TerminalNode *DELAY_KEY_WRITE();
    antlr4::tree::TerminalNode *DES_KEY_FILE();
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
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *ENDS();
    antlr4::tree::TerminalNode *ENGINE();
    antlr4::tree::TerminalNode *ENGINES();
    antlr4::tree::TerminalNode *ERROR();
    antlr4::tree::TerminalNode *ERRORS();
    antlr4::tree::TerminalNode *ESCAPE();
    antlr4::tree::TerminalNode *EVEN();
    antlr4::tree::TerminalNode *EVENT();
    antlr4::tree::TerminalNode *EVENTS();
    antlr4::tree::TerminalNode *EVERY();
    antlr4::tree::TerminalNode *EXCHANGE();
    antlr4::tree::TerminalNode *EXCLUSIVE();
    antlr4::tree::TerminalNode *EXPIRE();
    antlr4::tree::TerminalNode *EXPORT();
    antlr4::tree::TerminalNode *EXTENDED();
    antlr4::tree::TerminalNode *EXTENT_SIZE();
    antlr4::tree::TerminalNode *FAST();
    antlr4::tree::TerminalNode *FAULTS();
    antlr4::tree::TerminalNode *FIELDS();
    antlr4::tree::TerminalNode *FILE_BLOCK_SIZE();
    antlr4::tree::TerminalNode *FILTER();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *FIXED();
    antlr4::tree::TerminalNode *FLUSH();
    antlr4::tree::TerminalNode *FOLLOWS();
    antlr4::tree::TerminalNode *FOUND();
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *GENERAL();
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *GRANTS();
    antlr4::tree::TerminalNode *GROUP_REPLICATION();
    antlr4::tree::TerminalNode *HANDLER();
    antlr4::tree::TerminalNode *HASH();
    antlr4::tree::TerminalNode *HELP();
    antlr4::tree::TerminalNode *HOST();
    antlr4::tree::TerminalNode *HOSTS();
    antlr4::tree::TerminalNode *IDENTIFIED();
    antlr4::tree::TerminalNode *IGNORE_SERVER_IDS();
    antlr4::tree::TerminalNode *IMPORT();
    antlr4::tree::TerminalNode *INDEXES();
    antlr4::tree::TerminalNode *INITIAL_SIZE();
    antlr4::tree::TerminalNode *INPLACE();
    antlr4::tree::TerminalNode *INSERT_METHOD();
    antlr4::tree::TerminalNode *INSTALL();
    antlr4::tree::TerminalNode *INSTANCE();
    antlr4::tree::TerminalNode *INTERNAL();
    antlr4::tree::TerminalNode *INVOKER();
    antlr4::tree::TerminalNode *IO();
    antlr4::tree::TerminalNode *IO_THREAD();
    antlr4::tree::TerminalNode *IPC();
    antlr4::tree::TerminalNode *ISOLATION();
    antlr4::tree::TerminalNode *ISSUER();
    antlr4::tree::TerminalNode *JSON();
    antlr4::tree::TerminalNode *KEY_BLOCK_SIZE();
    antlr4::tree::TerminalNode *LANGUAGE();
    antlr4::tree::TerminalNode *LAST();
    antlr4::tree::TerminalNode *LEAVES();
    antlr4::tree::TerminalNode *LESS();
    antlr4::tree::TerminalNode *LEVEL();
    antlr4::tree::TerminalNode *LIST();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *LOGFILE();
    antlr4::tree::TerminalNode *LOGS();
    antlr4::tree::TerminalNode *MASTER();
    antlr4::tree::TerminalNode *MASTER_AUTO_POSITION();
    antlr4::tree::TerminalNode *MASTER_CONNECT_RETRY();
    antlr4::tree::TerminalNode *MASTER_DELAY();
    antlr4::tree::TerminalNode *MASTER_HEARTBEAT_PERIOD();
    antlr4::tree::TerminalNode *MASTER_HOST();
    antlr4::tree::TerminalNode *MASTER_LOG_FILE();
    antlr4::tree::TerminalNode *MASTER_LOG_POS();
    antlr4::tree::TerminalNode *MASTER_PASSWORD();
    antlr4::tree::TerminalNode *MASTER_PORT();
    antlr4::tree::TerminalNode *MASTER_RETRY_COUNT();
    antlr4::tree::TerminalNode *MASTER_SSL();
    antlr4::tree::TerminalNode *MASTER_SSL_CA();
    antlr4::tree::TerminalNode *MASTER_SSL_CAPATH();
    antlr4::tree::TerminalNode *MASTER_SSL_CERT();
    antlr4::tree::TerminalNode *MASTER_SSL_CIPHER();
    antlr4::tree::TerminalNode *MASTER_SSL_CRL();
    antlr4::tree::TerminalNode *MASTER_SSL_CRLPATH();
    antlr4::tree::TerminalNode *MASTER_SSL_KEY();
    antlr4::tree::TerminalNode *MASTER_TLS_VERSION();
    antlr4::tree::TerminalNode *MASTER_USER();
    antlr4::tree::TerminalNode *MAX_CONNECTIONS_PER_HOUR();
    antlr4::tree::TerminalNode *MAX_QUERIES_PER_HOUR();
    antlr4::tree::TerminalNode *MAX_ROWS();
    antlr4::tree::TerminalNode *MAX_SIZE();
    antlr4::tree::TerminalNode *MAX_UPDATES_PER_HOUR();
    antlr4::tree::TerminalNode *MAX_USER_CONNECTIONS();
    antlr4::tree::TerminalNode *MEDIUM();
    antlr4::tree::TerminalNode *MEMORY();
    antlr4::tree::TerminalNode *MERGE();
    antlr4::tree::TerminalNode *MID();
    antlr4::tree::TerminalNode *MIGRATE();
    antlr4::tree::TerminalNode *MIN_ROWS();
    antlr4::tree::TerminalNode *MODE();
    antlr4::tree::TerminalNode *MODIFY();
    antlr4::tree::TerminalNode *MUTEX();
    antlr4::tree::TerminalNode *MYSQL();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *NAMES();
    antlr4::tree::TerminalNode *NCHAR();
    antlr4::tree::TerminalNode *NEVER();
    antlr4::tree::TerminalNode *NEXT();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *NODEGROUP();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *OFFLINE();
    antlr4::tree::TerminalNode *OFFSET();
    antlr4::tree::TerminalNode *OJ();
    antlr4::tree::TerminalNode *OLD_PASSWORD();
    antlr4::tree::TerminalNode *ONE();
    antlr4::tree::TerminalNode *ONLINE();
    antlr4::tree::TerminalNode *ONLY();
    antlr4::tree::TerminalNode *OPEN();
    antlr4::tree::TerminalNode *OPTIMIZER_COSTS();
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *OWNER();
    antlr4::tree::TerminalNode *PACK_KEYS();
    antlr4::tree::TerminalNode *PAGE();
    antlr4::tree::TerminalNode *PARSER();
    antlr4::tree::TerminalNode *PARTIAL();
    antlr4::tree::TerminalNode *PARTITIONING();
    antlr4::tree::TerminalNode *PARTITIONS();
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *PHASE();
    antlr4::tree::TerminalNode *PLUGINS();
    antlr4::tree::TerminalNode *PLUGIN_DIR();
    antlr4::tree::TerminalNode *PLUGIN();
    antlr4::tree::TerminalNode *PORT();
    antlr4::tree::TerminalNode *PRECEDES();
    antlr4::tree::TerminalNode *PREPARE();
    antlr4::tree::TerminalNode *PRESERVE();
    antlr4::tree::TerminalNode *PREV();
    antlr4::tree::TerminalNode *PROCESSLIST();
    antlr4::tree::TerminalNode *PROFILE();
    antlr4::tree::TerminalNode *PROFILES();
    antlr4::tree::TerminalNode *PROXY();
    antlr4::tree::TerminalNode *QUERY();
    antlr4::tree::TerminalNode *QUICK();
    antlr4::tree::TerminalNode *REBUILD();
    antlr4::tree::TerminalNode *RECOVER();
    antlr4::tree::TerminalNode *REDO_BUFFER_SIZE();
    antlr4::tree::TerminalNode *REDUNDANT();
    antlr4::tree::TerminalNode *RELAY();
    antlr4::tree::TerminalNode *RELAYLOG();
    antlr4::tree::TerminalNode *RELAY_LOG_FILE();
    antlr4::tree::TerminalNode *RELAY_LOG_POS();
    antlr4::tree::TerminalNode *REMOVE();
    antlr4::tree::TerminalNode *REORGANIZE();
    antlr4::tree::TerminalNode *REPAIR();
    antlr4::tree::TerminalNode *REPLICATE_DO_DB();
    antlr4::tree::TerminalNode *REPLICATE_DO_TABLE();
    antlr4::tree::TerminalNode *REPLICATE_IGNORE_DB();
    antlr4::tree::TerminalNode *REPLICATE_IGNORE_TABLE();
    antlr4::tree::TerminalNode *REPLICATE_REWRITE_DB();
    antlr4::tree::TerminalNode *REPLICATE_WILD_DO_TABLE();
    antlr4::tree::TerminalNode *REPLICATE_WILD_IGNORE_TABLE();
    antlr4::tree::TerminalNode *REPLICATION();
    antlr4::tree::TerminalNode *RESET();
    antlr4::tree::TerminalNode *RESUME();
    antlr4::tree::TerminalNode *RETURNS();
    antlr4::tree::TerminalNode *ROLLBACK();
    antlr4::tree::TerminalNode *ROLLUP();
    antlr4::tree::TerminalNode *ROTATE();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *ROWS();
    antlr4::tree::TerminalNode *ROW_FORMAT();
    antlr4::tree::TerminalNode *SAVEPOINT();
    antlr4::tree::TerminalNode *SCHEDULE();
    antlr4::tree::TerminalNode *SECURITY();
    antlr4::tree::TerminalNode *SERIAL();
    antlr4::tree::TerminalNode *SERVER();
    antlr4::tree::TerminalNode *SESSION();
    antlr4::tree::TerminalNode *SHARE();
    antlr4::tree::TerminalNode *SHARED();
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
    antlr4::tree::TerminalNode *SQL_CACHE();
    antlr4::tree::TerminalNode *SQL_NO_CACHE();
    antlr4::tree::TerminalNode *SQL_THREAD();
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *STARTS();
    antlr4::tree::TerminalNode *STATS_AUTO_RECALC();
    antlr4::tree::TerminalNode *STATS_PERSISTENT();
    antlr4::tree::TerminalNode *STATS_SAMPLE_PAGES();
    antlr4::tree::TerminalNode *STATUS();
    antlr4::tree::TerminalNode *STOP();
    antlr4::tree::TerminalNode *STORAGE();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *SUBJECT();
    antlr4::tree::TerminalNode *SUBPARTITION();
    antlr4::tree::TerminalNode *SUBPARTITIONS();
    antlr4::tree::TerminalNode *SUSPEND();
    antlr4::tree::TerminalNode *SWAPS();
    antlr4::tree::TerminalNode *SWITCHES();
    antlr4::tree::TerminalNode *TABLESPACE();
    antlr4::tree::TerminalNode *TEMPORARY();
    antlr4::tree::TerminalNode *TEMPTABLE();
    antlr4::tree::TerminalNode *THAN();
    antlr4::tree::TerminalNode *TRADITIONAL();
    antlr4::tree::TerminalNode *TRANSACTION();
    antlr4::tree::TerminalNode *TRIGGERS();
    antlr4::tree::TerminalNode *TRUNCATE();
    antlr4::tree::TerminalNode *UNDEFINED();
    antlr4::tree::TerminalNode *UNDOFILE();
    antlr4::tree::TerminalNode *UNDO_BUFFER_SIZE();
    antlr4::tree::TerminalNode *UNINSTALL();
    antlr4::tree::TerminalNode *UNKNOWN();
    antlr4::tree::TerminalNode *UNTIL();
    antlr4::tree::TerminalNode *UPGRADE();
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *USE_FRM();
    antlr4::tree::TerminalNode *USER_RESOURCES();
    antlr4::tree::TerminalNode *VALIDATION();
    antlr4::tree::TerminalNode *VALUE();
    antlr4::tree::TerminalNode *VARIABLES();
    antlr4::tree::TerminalNode *VIEW();
    antlr4::tree::TerminalNode *WAIT();
    antlr4::tree::TerminalNode *WARNINGS();
    antlr4::tree::TerminalNode *WITHOUT();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *WRAPPER();
    antlr4::tree::TerminalNode *X509();
    antlr4::tree::TerminalNode *XA();
    antlr4::tree::TerminalNode *XML();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeywordsCanBeIdContext* keywordsCanBeId();

  class  FunctionNameBaseContext : public antlr4::ParserRuleContext {
  public:
    FunctionNameBaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ABS();
    antlr4::tree::TerminalNode *ACOS();
    antlr4::tree::TerminalNode *ADDDATE();
    antlr4::tree::TerminalNode *ADDTIME();
    antlr4::tree::TerminalNode *AES_DECRYPT();
    antlr4::tree::TerminalNode *AES_ENCRYPT();
    antlr4::tree::TerminalNode *AREA();
    antlr4::tree::TerminalNode *ASBINARY();
    antlr4::tree::TerminalNode *ASIN();
    antlr4::tree::TerminalNode *ASTEXT();
    antlr4::tree::TerminalNode *ASWKB();
    antlr4::tree::TerminalNode *ASWKT();
    antlr4::tree::TerminalNode *ASYMMETRIC_DECRYPT();
    antlr4::tree::TerminalNode *ASYMMETRIC_DERIVE();
    antlr4::tree::TerminalNode *ASYMMETRIC_ENCRYPT();
    antlr4::tree::TerminalNode *ASYMMETRIC_SIGN();
    antlr4::tree::TerminalNode *ASYMMETRIC_VERIFY();
    antlr4::tree::TerminalNode *ATAN();
    antlr4::tree::TerminalNode *ATAN2();
    antlr4::tree::TerminalNode *BENCHMARK();
    antlr4::tree::TerminalNode *BIN();
    antlr4::tree::TerminalNode *BIT_COUNT();
    antlr4::tree::TerminalNode *BIT_LENGTH();
    antlr4::tree::TerminalNode *BUFFER();
    antlr4::tree::TerminalNode *CEIL();
    antlr4::tree::TerminalNode *CEILING();
    antlr4::tree::TerminalNode *CENTROID();
    antlr4::tree::TerminalNode *CHARACTER_LENGTH();
    antlr4::tree::TerminalNode *CHARSET();
    antlr4::tree::TerminalNode *CHAR_LENGTH();
    antlr4::tree::TerminalNode *COERCIBILITY();
    antlr4::tree::TerminalNode *COLLATION();
    antlr4::tree::TerminalNode *COMPRESS();
    antlr4::tree::TerminalNode *CONCAT();
    antlr4::tree::TerminalNode *CONCAT_WS();
    antlr4::tree::TerminalNode *CONNECTION_ID();
    antlr4::tree::TerminalNode *CONV();
    antlr4::tree::TerminalNode *CONVERT_TZ();
    antlr4::tree::TerminalNode *COS();
    antlr4::tree::TerminalNode *COT();
    antlr4::tree::TerminalNode *COUNT();
    antlr4::tree::TerminalNode *CRC32();
    antlr4::tree::TerminalNode *CREATE_ASYMMETRIC_PRIV_KEY();
    antlr4::tree::TerminalNode *CREATE_ASYMMETRIC_PUB_KEY();
    antlr4::tree::TerminalNode *CREATE_DH_PARAMETERS();
    antlr4::tree::TerminalNode *CREATE_DIGEST();
    antlr4::tree::TerminalNode *CROSSES();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *DATE();
    antlr4::tree::TerminalNode *DATEDIFF();
    antlr4::tree::TerminalNode *DATE_FORMAT();
    antlr4::tree::TerminalNode *DAY();
    antlr4::tree::TerminalNode *DAYNAME();
    antlr4::tree::TerminalNode *DAYOFMONTH();
    antlr4::tree::TerminalNode *DAYOFWEEK();
    antlr4::tree::TerminalNode *DAYOFYEAR();
    antlr4::tree::TerminalNode *DECODE();
    antlr4::tree::TerminalNode *DEGREES();
    antlr4::tree::TerminalNode *DES_DECRYPT();
    antlr4::tree::TerminalNode *DES_ENCRYPT();
    antlr4::tree::TerminalNode *DIMENSION();
    antlr4::tree::TerminalNode *DISJOINT();
    antlr4::tree::TerminalNode *ELT();
    antlr4::tree::TerminalNode *ENCODE();
    antlr4::tree::TerminalNode *ENCRYPT();
    antlr4::tree::TerminalNode *ENDPOINT();
    antlr4::tree::TerminalNode *ENVELOPE();
    antlr4::tree::TerminalNode *EQUALS();
    antlr4::tree::TerminalNode *EXP();
    antlr4::tree::TerminalNode *EXPORT_SET();
    antlr4::tree::TerminalNode *EXTERIORRING();
    antlr4::tree::TerminalNode *EXTRACTVALUE();
    antlr4::tree::TerminalNode *FIELD();
    antlr4::tree::TerminalNode *FIND_IN_SET();
    antlr4::tree::TerminalNode *FLOOR();
    antlr4::tree::TerminalNode *FORMAT();
    antlr4::tree::TerminalNode *FOUND_ROWS();
    antlr4::tree::TerminalNode *FROM_BASE64();
    antlr4::tree::TerminalNode *FROM_DAYS();
    antlr4::tree::TerminalNode *FROM_UNIXTIME();
    antlr4::tree::TerminalNode *GEOMCOLLFROMTEXT();
    antlr4::tree::TerminalNode *GEOMCOLLFROMWKB();
    antlr4::tree::TerminalNode *GEOMETRYCOLLECTION();
    antlr4::tree::TerminalNode *GEOMETRYCOLLECTIONFROMTEXT();
    antlr4::tree::TerminalNode *GEOMETRYCOLLECTIONFROMWKB();
    antlr4::tree::TerminalNode *GEOMETRYFROMTEXT();
    antlr4::tree::TerminalNode *GEOMETRYFROMWKB();
    antlr4::tree::TerminalNode *GEOMETRYN();
    antlr4::tree::TerminalNode *GEOMETRYTYPE();
    antlr4::tree::TerminalNode *GEOMFROMTEXT();
    antlr4::tree::TerminalNode *GEOMFROMWKB();
    antlr4::tree::TerminalNode *GET_FORMAT();
    antlr4::tree::TerminalNode *GET_LOCK();
    antlr4::tree::TerminalNode *GLENGTH();
    antlr4::tree::TerminalNode *GREATEST();
    antlr4::tree::TerminalNode *GTID_SUBSET();
    antlr4::tree::TerminalNode *GTID_SUBTRACT();
    antlr4::tree::TerminalNode *HEX();
    antlr4::tree::TerminalNode *HOUR();
    antlr4::tree::TerminalNode *IFNULL();
    antlr4::tree::TerminalNode *INET6_ATON();
    antlr4::tree::TerminalNode *INET6_NTOA();
    antlr4::tree::TerminalNode *INET_ATON();
    antlr4::tree::TerminalNode *INET_NTOA();
    antlr4::tree::TerminalNode *INSTR();
    antlr4::tree::TerminalNode *INTERIORRINGN();
    antlr4::tree::TerminalNode *INTERSECTS();
    antlr4::tree::TerminalNode *INVISIBLE();
    antlr4::tree::TerminalNode *ISCLOSED();
    antlr4::tree::TerminalNode *ISEMPTY();
    antlr4::tree::TerminalNode *ISNULL();
    antlr4::tree::TerminalNode *ISSIMPLE();
    antlr4::tree::TerminalNode *IS_FREE_LOCK();
    antlr4::tree::TerminalNode *IS_IPV4();
    antlr4::tree::TerminalNode *IS_IPV4_COMPAT();
    antlr4::tree::TerminalNode *IS_IPV4_MAPPED();
    antlr4::tree::TerminalNode *IS_IPV6();
    antlr4::tree::TerminalNode *IS_USED_LOCK();
    antlr4::tree::TerminalNode *LAST_INSERT_ID();
    antlr4::tree::TerminalNode *LCASE();
    antlr4::tree::TerminalNode *LEAST();
    antlr4::tree::TerminalNode *LENGTH();
    antlr4::tree::TerminalNode *LINEFROMTEXT();
    antlr4::tree::TerminalNode *LINEFROMWKB();
    antlr4::tree::TerminalNode *LINESTRING();
    antlr4::tree::TerminalNode *LINESTRINGFROMTEXT();
    antlr4::tree::TerminalNode *LINESTRINGFROMWKB();
    antlr4::tree::TerminalNode *LN();
    antlr4::tree::TerminalNode *LOAD_FILE();
    antlr4::tree::TerminalNode *LOCATE();
    antlr4::tree::TerminalNode *LOG();
    antlr4::tree::TerminalNode *LOG10();
    antlr4::tree::TerminalNode *LOG2();
    antlr4::tree::TerminalNode *LOWER();
    antlr4::tree::TerminalNode *LPAD();
    antlr4::tree::TerminalNode *LTRIM();
    antlr4::tree::TerminalNode *MAKEDATE();
    antlr4::tree::TerminalNode *MAKETIME();
    antlr4::tree::TerminalNode *MAKE_SET();
    antlr4::tree::TerminalNode *MASTER_POS_WAIT();
    antlr4::tree::TerminalNode *MBRCONTAINS();
    antlr4::tree::TerminalNode *MBRDISJOINT();
    antlr4::tree::TerminalNode *MBREQUAL();
    antlr4::tree::TerminalNode *MBRINTERSECTS();
    antlr4::tree::TerminalNode *MBROVERLAPS();
    antlr4::tree::TerminalNode *MBRTOUCHES();
    antlr4::tree::TerminalNode *MBRWITHIN();
    antlr4::tree::TerminalNode *MD5();
    antlr4::tree::TerminalNode *MICROSECOND();
    antlr4::tree::TerminalNode *MINUTE();
    antlr4::tree::TerminalNode *MLINEFROMTEXT();
    antlr4::tree::TerminalNode *MLINEFROMWKB();
    antlr4::tree::TerminalNode *MONTH();
    antlr4::tree::TerminalNode *MONTHNAME();
    antlr4::tree::TerminalNode *MPOINTFROMTEXT();
    antlr4::tree::TerminalNode *MPOINTFROMWKB();
    antlr4::tree::TerminalNode *MPOLYFROMTEXT();
    antlr4::tree::TerminalNode *MPOLYFROMWKB();
    antlr4::tree::TerminalNode *MULTILINESTRING();
    antlr4::tree::TerminalNode *MULTILINESTRINGFROMTEXT();
    antlr4::tree::TerminalNode *MULTILINESTRINGFROMWKB();
    antlr4::tree::TerminalNode *MULTIPOINT();
    antlr4::tree::TerminalNode *MULTIPOINTFROMTEXT();
    antlr4::tree::TerminalNode *MULTIPOINTFROMWKB();
    antlr4::tree::TerminalNode *MULTIPOLYGON();
    antlr4::tree::TerminalNode *MULTIPOLYGONFROMTEXT();
    antlr4::tree::TerminalNode *MULTIPOLYGONFROMWKB();
    antlr4::tree::TerminalNode *NAME_CONST();
    antlr4::tree::TerminalNode *NULLIF();
    antlr4::tree::TerminalNode *NUMGEOMETRIES();
    antlr4::tree::TerminalNode *NUMINTERIORRINGS();
    antlr4::tree::TerminalNode *NUMPOINTS();
    antlr4::tree::TerminalNode *OCT();
    antlr4::tree::TerminalNode *OCTET_LENGTH();
    antlr4::tree::TerminalNode *ORD();
    antlr4::tree::TerminalNode *OVERLAPS();
    antlr4::tree::TerminalNode *PERIOD_ADD();
    antlr4::tree::TerminalNode *PERIOD_DIFF();
    antlr4::tree::TerminalNode *PI();
    antlr4::tree::TerminalNode *POINT();
    antlr4::tree::TerminalNode *POINTFROMTEXT();
    antlr4::tree::TerminalNode *POINTFROMWKB();
    antlr4::tree::TerminalNode *POINTN();
    antlr4::tree::TerminalNode *POLYFROMTEXT();
    antlr4::tree::TerminalNode *POLYFROMWKB();
    antlr4::tree::TerminalNode *POLYGON();
    antlr4::tree::TerminalNode *POLYGONFROMTEXT();
    antlr4::tree::TerminalNode *POLYGONFROMWKB();
    antlr4::tree::TerminalNode *POSITION();
    antlr4::tree::TerminalNode *POW();
    antlr4::tree::TerminalNode *POWER();
    antlr4::tree::TerminalNode *QUARTER();
    antlr4::tree::TerminalNode *QUOTE();
    antlr4::tree::TerminalNode *RADIANS();
    antlr4::tree::TerminalNode *RAND();
    antlr4::tree::TerminalNode *RANDOM_BYTES();
    antlr4::tree::TerminalNode *RELEASE_LOCK();
    antlr4::tree::TerminalNode *REVERSE();
    antlr4::tree::TerminalNode *ROUND();
    antlr4::tree::TerminalNode *ROW_COUNT();
    antlr4::tree::TerminalNode *RPAD();
    antlr4::tree::TerminalNode *RTRIM();
    antlr4::tree::TerminalNode *SECOND();
    antlr4::tree::TerminalNode *SEC_TO_TIME();
    antlr4::tree::TerminalNode *SESSION_USER();
    antlr4::tree::TerminalNode *SESSION_VARIABLES_ADMIN();
    antlr4::tree::TerminalNode *SHA();
    antlr4::tree::TerminalNode *SHA1();
    antlr4::tree::TerminalNode *SHA2();
    antlr4::tree::TerminalNode *SIGN();
    antlr4::tree::TerminalNode *SIN();
    antlr4::tree::TerminalNode *SLEEP();
    antlr4::tree::TerminalNode *SOUNDEX();
    antlr4::tree::TerminalNode *SQL_THREAD_WAIT_AFTER_GTIDS();
    antlr4::tree::TerminalNode *SQRT();
    antlr4::tree::TerminalNode *SRID();
    antlr4::tree::TerminalNode *STARTPOINT();
    antlr4::tree::TerminalNode *STRCMP();
    antlr4::tree::TerminalNode *STR_TO_DATE();
    antlr4::tree::TerminalNode *ST_AREA();
    antlr4::tree::TerminalNode *ST_ASBINARY();
    antlr4::tree::TerminalNode *ST_ASTEXT();
    antlr4::tree::TerminalNode *ST_ASWKB();
    antlr4::tree::TerminalNode *ST_ASWKT();
    antlr4::tree::TerminalNode *ST_BUFFER();
    antlr4::tree::TerminalNode *ST_CENTROID();
    antlr4::tree::TerminalNode *ST_CONTAINS();
    antlr4::tree::TerminalNode *ST_CROSSES();
    antlr4::tree::TerminalNode *ST_DIFFERENCE();
    antlr4::tree::TerminalNode *ST_DIMENSION();
    antlr4::tree::TerminalNode *ST_DISJOINT();
    antlr4::tree::TerminalNode *ST_DISTANCE();
    antlr4::tree::TerminalNode *ST_ENDPOINT();
    antlr4::tree::TerminalNode *ST_ENVELOPE();
    antlr4::tree::TerminalNode *ST_EQUALS();
    antlr4::tree::TerminalNode *ST_EXTERIORRING();
    antlr4::tree::TerminalNode *ST_GEOMCOLLFROMTEXT();
    antlr4::tree::TerminalNode *ST_GEOMCOLLFROMTXT();
    antlr4::tree::TerminalNode *ST_GEOMCOLLFROMWKB();
    antlr4::tree::TerminalNode *ST_GEOMETRYCOLLECTIONFROMTEXT();
    antlr4::tree::TerminalNode *ST_GEOMETRYCOLLECTIONFROMWKB();
    antlr4::tree::TerminalNode *ST_GEOMETRYFROMTEXT();
    antlr4::tree::TerminalNode *ST_GEOMETRYFROMWKB();
    antlr4::tree::TerminalNode *ST_GEOMETRYN();
    antlr4::tree::TerminalNode *ST_GEOMETRYTYPE();
    antlr4::tree::TerminalNode *ST_GEOMFROMTEXT();
    antlr4::tree::TerminalNode *ST_GEOMFROMWKB();
    antlr4::tree::TerminalNode *ST_INTERIORRINGN();
    antlr4::tree::TerminalNode *ST_INTERSECTION();
    antlr4::tree::TerminalNode *ST_INTERSECTS();
    antlr4::tree::TerminalNode *ST_ISCLOSED();
    antlr4::tree::TerminalNode *ST_ISEMPTY();
    antlr4::tree::TerminalNode *ST_ISSIMPLE();
    antlr4::tree::TerminalNode *ST_LINEFROMTEXT();
    antlr4::tree::TerminalNode *ST_LINEFROMWKB();
    antlr4::tree::TerminalNode *ST_LINESTRINGFROMTEXT();
    antlr4::tree::TerminalNode *ST_LINESTRINGFROMWKB();
    antlr4::tree::TerminalNode *ST_NUMGEOMETRIES();
    antlr4::tree::TerminalNode *ST_NUMINTERIORRING();
    antlr4::tree::TerminalNode *ST_NUMINTERIORRINGS();
    antlr4::tree::TerminalNode *ST_NUMPOINTS();
    antlr4::tree::TerminalNode *ST_OVERLAPS();
    antlr4::tree::TerminalNode *ST_POINTFROMTEXT();
    antlr4::tree::TerminalNode *ST_POINTFROMWKB();
    antlr4::tree::TerminalNode *ST_POINTN();
    antlr4::tree::TerminalNode *ST_POLYFROMTEXT();
    antlr4::tree::TerminalNode *ST_POLYFROMWKB();
    antlr4::tree::TerminalNode *ST_POLYGONFROMTEXT();
    antlr4::tree::TerminalNode *ST_POLYGONFROMWKB();
    antlr4::tree::TerminalNode *ST_SRID();
    antlr4::tree::TerminalNode *ST_STARTPOINT();
    antlr4::tree::TerminalNode *ST_SYMDIFFERENCE();
    antlr4::tree::TerminalNode *ST_TOUCHES();
    antlr4::tree::TerminalNode *ST_UNION();
    antlr4::tree::TerminalNode *ST_WITHIN();
    antlr4::tree::TerminalNode *ST_X();
    antlr4::tree::TerminalNode *ST_Y();
    antlr4::tree::TerminalNode *SUBDATE();
    antlr4::tree::TerminalNode *SUBSTRING_INDEX();
    antlr4::tree::TerminalNode *SUBTIME();
    antlr4::tree::TerminalNode *SYSTEM_USER();
    antlr4::tree::TerminalNode *TAN();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *TIMEDIFF();
    antlr4::tree::TerminalNode *TIMESTAMP();
    antlr4::tree::TerminalNode *TIMESTAMPADD();
    antlr4::tree::TerminalNode *TIMESTAMPDIFF();
    antlr4::tree::TerminalNode *TIME_FORMAT();
    antlr4::tree::TerminalNode *TIME_TO_SEC();
    antlr4::tree::TerminalNode *TOUCHES();
    antlr4::tree::TerminalNode *TO_BASE64();
    antlr4::tree::TerminalNode *TO_DAYS();
    antlr4::tree::TerminalNode *TO_SECONDS();
    antlr4::tree::TerminalNode *UCASE();
    antlr4::tree::TerminalNode *UNCOMPRESS();
    antlr4::tree::TerminalNode *UNCOMPRESSED_LENGTH();
    antlr4::tree::TerminalNode *UNHEX();
    antlr4::tree::TerminalNode *UNIX_TIMESTAMP();
    antlr4::tree::TerminalNode *UPDATEXML();
    antlr4::tree::TerminalNode *UPPER();
    antlr4::tree::TerminalNode *UUID();
    antlr4::tree::TerminalNode *UUID_SHORT();
    antlr4::tree::TerminalNode *VALIDATE_PASSWORD_STRENGTH();
    antlr4::tree::TerminalNode *VERSION();
    antlr4::tree::TerminalNode *VISIBLE();
    antlr4::tree::TerminalNode *WAIT_UNTIL_SQL_THREAD_AFTER_GTIDS();
    antlr4::tree::TerminalNode *WEEK();
    antlr4::tree::TerminalNode *WEEKDAY();
    antlr4::tree::TerminalNode *WEEKOFYEAR();
    antlr4::tree::TerminalNode *WEIGHT_STRING();
    antlr4::tree::TerminalNode *WITHIN();
    antlr4::tree::TerminalNode *YEAR();
    antlr4::tree::TerminalNode *YEARWEEK();
    antlr4::tree::TerminalNode *Y_FUNCTION();
    antlr4::tree::TerminalNode *X_FUNCTION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionNameBaseContext* functionNameBase();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);
  bool predicateSempred(PredicateContext *_localctx, size_t predicateIndex);
  bool expressionAtomSempred(ExpressionAtomContext *_localctx, size_t predicateIndex);

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


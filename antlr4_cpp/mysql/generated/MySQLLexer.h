
// Generated from MySQLLexer.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  MySQLLexer : public antlr4::Lexer {
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
    MYSQLCOMMENT = 2, ERRORCHANNEL = 3
  };

  MySQLLexer(antlr4::CharStream *input);
  ~MySQLLexer();

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

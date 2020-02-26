--示例
--插入记录。
INSERT INTO customer_demographics_t1 VALUES(1920801,'M', 'U', 'DOCTOR DEGREE', 200, 'GOOD', 1,
0,0);
--开启事务。
START TRANSACTION;
--更新字段值。
UPDATE customer_demographics_t1 SET cd_education_status= 'Unknown';
--终止事务,上面所执行的更新会被撤销掉。
ABORT;
--查询数据。
SELECT * FROM customer_demographics_t1 WHERE cd_demo_sk = 1920801;

--示例
-- 创建一个资源池,其控制组指定为"DefaultClass"组下属的"High" Timeshare Workload控制组。
CREATE RESOURCE POOL pool1 WITH (CONTROL_GROUP="High");
-- 创建一个负载组,关联已创建的资源池。
CREATE WORKLOAD GROUP wg_hr1 USING RESOURCE POOL pool1;
--创建一个默认应用映射组,关联默认的负载组。
CREATE APP WORKLOAD GROUP MAPPING app_wg_map1;
-- 更新一个应用映射组关联的负载组名称。
ALTER APP WORKLOAD GROUP MAPPING app_wg_map1 WITH(WORKLOAD_GPNAME=wg_hr1);
--删除应用映射组。
DROP APP WORKLOAD GROUP MAPPING app_wg_map1;
--删除负载组。
DROP WORKLOAD GROUP wg_hr1;
--删除资源池。
DROP RESOURCE POOL pool1;

--示例
--创建一个空Data Source对象。
CREATE DATA SOURCE ds_test1;
--修改名字。
ALTER DATA SOURCE ds_test1 RENAME TO ds_test;
--修改属主。
CREATE USER user_test1 IDENTIFIED BY 'Gs@123456';
ALTER USER user_test1 WITH SYSADMIN;
ALTER DATA SOURCE ds_test OWNER TO user_test1;
--修改TYPE和VERSION。
ALTER DATA SOURCE ds_test TYPE 'MPPDB_TYPE' VERSION 'XXX';
--添加字段。
ALTER DATA SOURCE ds_test OPTIONS (add dsn 'mppdb', username 'test_user');
--修改字段。
ALTER DATA SOURCE ds_test OPTIONS (set dsn 'unknown');
--删除字段。
ALTER DATA SOURCE ds_test OPTIONS (drop username);
--删除Data Source和user对象。
DROP DATA SOURCE ds_test;
DROP USER user_test1;

--示例
--将创建在模式tpcds里的所有表(和视图)的SELECT权限授予每一个用户。
ALTER DEFAULT PRIVILEGES IN SCHEMA tpcds GRANT SELECT ON TABLES TO PUBLIC;
--创建用户普通用户jack。
CREATE USER jack PASSWORD 'Bigdata123@';
--将tpcds下的所有表的插入权限授予用户jack。
ALTER DEFAULT PRIVILEGES IN SCHEMA tpcds GRANT INSERT ON TABLES TO jack;
--撤销上述权限。
ALTER DEFAULT PRIVILEGES IN SCHEMA tpcds REVOKE SELECT ON TABLES FROM PUBLIC;
ALTER DEFAULT PRIVILEGES IN SCHEMA tpcds REVOKE INSERT ON TABLES FROM jack;
--删除用户jack。
DROP USER jack;

--示例
--创建目录。
CREATE OR REPLACE DIRECTORY
dir
as '/tmp/';
--修改目录的owner。
ALTER DIRECTORY dir OWNER TO system;
--删除外部表。
DROP DIRECTORY dir;

--示例
--修改外表属性,删除mode选项。
ALTER FOREIGN TABLE tpcds.customer_ft options(drop mode);
--删除外部表。
DROP FOREIGN TABLE tpcds.customer_ft;
--示例
--示例
--创建一个资源池。
CREATE RESOURCE POOL pool1;
--更新一个资源池,其控制组指定为"DefaultClass"组下属的"High" Timeshare Workload控制组。
ALTER RESOURCE POOL pool1 WITH (CONTROL_GROUP="High");
--更新一个资源池,其控制组指定为"class1"组下属的"Low" Timeshare Workload控制组。
ALTER RESOURCE POOL pool1 WITH (CONTROL_GROUP="class1:Low");
--更新一个资源池,其控制组指定为"class1"组下属的"wg1" Workload控制组。
ALTER RESOURCE POOL pool1 WITH (CONTROL_GROUP="class1:wg1");
--更新一个资源池,其控制组指定为"class1"组下属的"wg2" Workload控制组。
ALTER RESOURCE POOL pool1 WITH (CONTROL_GROUP="class1:wg2:3");
--删除资源池pool1。
DROP RESOURCE POOL pool1;
--示例
--示例
--创建数据表all_data
CREATE TABLE all_data(id int, role varchar(100), data varchar(100));
--创建行访问控制策略,当前用户只能查看用户自身的数据
CREATE ROW LEVEL SECURITY POLICY all_data_rls ON all_data USING(role = CURRENT_USER);
--修改行访问控制all_data_rls的名称
ALTER ROW LEVEL SECURITY POLICY all_data_rls ON all_data RENAME TO all_data_new_rls;
--修改行访问控制策略影响的用户
ALTER ROW LEVEL SECURITY POLICY all_data_new_rls ON all_data TO alice, bob;

--修改行访问控制策略表达式
ALTER ROW LEVEL SECURITY POLICY all_data_new_rls ON all_data USING (id > 100 AND role =
current_user);

--示例
--创建模式ds。
CREATE SCHEMA ds;
--将当前模式ds更名为ds_new。
ALTER SCHEMA ds RENAME TO ds_new;
--创建用户jack。
CREATE USER jack PASSWORD 'Bigdata123@';
--将DS_NEW的所有者修改为jack。
ALTER SCHEMA ds_new OWNER TO jack;
--删除用户jack和模式ds_new。
DROP SCHEMA ds_new;
DROP USER jack;
--示例
--创建一个名为serial的递增序列,从101开始。
CREATE SEQUENCE serial START 101;
--创建一个表,定义默认值。
CREATE TABLE T1(C1 bigint default nextval('serial'));
--将序列serial的归属列变为T1.C1。
ALTER SEQUENCE serial OWNED BY T1.C1;
--删除序列
DROP SEQUENCE serial cascade;
DROP TABLE T1;
--示例
--建立一个hdfs_server,其中hdfs_fdw为数据库中存在的foreign data wrapper。
CREATE SERVER hdfs_server FOREIGN DATA WRAPPER HDFS_FDW OPTIONS (address , hdfscfgpath '/opt/
hadoop_client/HDFS/hadoop/etc/hadoop',type'HDFS');
SELECT * FROM pg_foreign_server WHERE srvname='hdfs_server';

--修改现有名为hdfs_server的address。
ALTER SERVER hdfs_server OPTIONS ( SET address '10.10.0.110:25000,10.10.0.120:25000');
SELECT * FROM pg_foreign_server WHERE srvname='hdfs_server';

--修改现有名为hdfs_server的hdfscfgpath。
ALTER SERVER hdfs_server OPTIONS ( SET hdfscfgpath '/opt/bigdata/hadoop');
SELECT * FROM pg_foreign_server WHERE srvname='hdfs_server';
--删除hdfs_server。
DROP SERVER hdfs_server;
--示例
-- 创建模式ds。
CREATE SCHEMA ds;
--设置模式搜索路径。
SET SEARCH_PATH TO ds, public;
--设置日期时间风格为传统的POSTGRES风格(日在月前)。
SET DATESTYLE TO postgres, dmy;
--设置当前会话的字符编码为UTF8。
ALTER SESSION SET NAMES 'UTF8';
--设置时区为加州伯克利。
SET TIME ZONE 'PST8PDT';
--设置时区为意大利。
SET TIME ZONE 'Europe/Rome';
--设置当前模式。
ALTER SESSION SET CURRENT_SCHEMA TO tpcds;
--设置XML OPTION为DOCUMENT。
ALTER SESSION SET XML OPTION DOCUMENT;
--创建角色joe,并设置会话的角色为omm。
CREATE ROLE joe WITH PASSWORD 'Bigdata123@';
ALTER SESSION SET SESSION AUTHORIZATION joe PASSWORD 'Bigdata123@';
--切换到默认用户。
postgres=> ALTER SESSION SET SESSION AUTHORIZATION default;
--删除ds模式。
DROP SCHEMA ds;
--删除joe。
DROP ROLE joe;
--示例
--查询会话信息。
SELECT sid,serial#,username FROM V$SESSION;
--结束SID为140131075880720的会话。
ALTER SYSTEM KILL SESSION '140131075880720,0' IMMEDIATE;
--示例
--创建文本搜索配置。
CREATE TEXT SEARCH CONFIGURATION english_1 (parser=default);
--增加文本搜索配置字串类型映射语法。
ALTER TEXT SEARCH CONFIGURATION english_1 ADD MAPPING FOR word WITH simple,english_stem;
--增加文本搜索配置字串类型映射语法。
ALTER TEXT SEARCH CONFIGURATION english_1 ADD MAPPING FOR email WITH english_stem, french_stem;
--查询文本搜索配置相关信息。
SELECT b.cfgname,a.maptokentype,a.mapseqno,a.mapdict,c.dictname FROM pg_ts_config_map
a,pg_ts_config b, pg_ts_dict c WHERE a.mapcfg=b.oid AND a.mapdict=c.oid AND b.cfgname='english_1'
ORDER BY 1,2,3,4,5;
dictname
--增加文本搜索配置字串类型映射语法。
ALTER TEXT SEARCH CONFIGURATION english_1 ALTER MAPPING REPLACE french_stem with german_stem;
ALTER TEXT SEARCH CONFIGURATION
--查询文本搜索配置相关信息。
SELECT b.cfgname,a.maptokentype,a.mapseqno,a.mapdict,c.dictname FROM pg_ts_config_map
a,pg_ts_config b, pg_ts_dict c WHERE a.mapcfg=b.oid AND a.mapdict=c.oid AND b.cfgname='english_1'
ORDER BY 1,2,3,4,5;
--示例
--更改Snowball类型字典的停用词定义,其他参数保持不变。
ALTER TEXT SEARCH DICTIONARY my_dict ( StopWords = newrussian, FilePath = 'file:///home/dicts' );
--更改Snowball类型字典的Language参数,并删除停用词定义。
ALTER TEXT SEARCH DICTIONARY my_dict ( Language = dutch, StopWords );
--更新词典定义,不实际更改任何内容。
ALTER TEXT SEARCH DICTIONARY my_dict ( dummy );
--示例
--创建一个由c_customer_sk小于150的内容组成的视图。
SELECT * FROM tpcds.customer
WHERE c_customer_sk < 150;
--修改视图名称。
ALTER VIEW tpcds.customer_details_view_v1 RENAME TO customer_details_view_v2;
--修改视图所属schema。
ALTER VIEW tpcds.customer_details_view_v2 SET schema public;
--删除视图。
DROP VIEW public.customer_details_view_v2;
--示例
--创建资源池pool1。
CREATE RESOURCE POOL pool1;
--创建负载组group1。
CREATE WORKLOAD GROUP group1;
-- 更新一个负载组group1的并发数量为10。其关联的资源池为pool1。
ALTER WORKLOAD GROUP group1 USING RESOURCE POOL pool1 WITH (ACT_STATEMENTS=10);
--删除负载组group1和资源池pool1。
DROP WORKLOAD GROUP group1;
DROP RESOURCE POOL pool1;
--示例

--- 删除表。
postgres=# DROP TABLE customer;
postgres=# DROP TABLE customer_par;
--示例
--使用匿名块输出字符串。
BEGIN
dbms_output.put_line('Hello');
END;
 
--示例
--创建一个函数func_add_sql,计算两个整数的和,并返回结果。
CREATE FUNCTION func_add_sql(num1 integer, num2 integer) RETURN integer
AS
BEGIN
RETURN num1 + num2;
END;
 
--按参数值传递。
CALL func_add_sql(1, 3);
--使用命名标记法传参。
CALL func_add_sql(num1 => 1,num2 => 3);
CALL func_add_sql(num2 := 2, num1 := 3);
--删除函数。
DROP FUNCTION func_add_sql;
--创建带出参的函数。
CREATE FUNCTION func_increment_sql(num1 IN integer, num2 IN integer, res OUT integer)
RETURN integer
AS
BEGIN
res := num1 + num2;
END;
 
--出参传入常量。
CALL func_increment_sql(1,2,1);
--出参传入变量。
DECLARE
res int;
BEGIN
func_increment_sql(1, 2, res);
dbms_output.put_line(res);
END;
 
--创建重载的函数。
create or replace procedure package_func_overload(col int, col2 out int) package
as
declare
col_type text;
begin
col := 122;
end;
 
create or replace procedure package_func_overload(col int, col2 out varchar)
package
as
declare
col_type text;
begin
col2 := '122';
end;
 
--函数调用。
call package_func_overload(1, 'test');
call package_func_overload(1, 1);
--删除函数。
DROP FUNCTION func_increment_sql;
--示例
--设置检查点。
CHECKPOINT;
--示例
--创建jack用户。
CREATE USER jack PASSWORD 'Bigdata123@';
--删除数据库template1在dn1和dn2节点上的连接。
CLEAN CONNECTION TO NODE (dn_6001_6002,dn_6003_6004) FOR DATABASE template1;
--删除用户jack在dn1节点上的连接。
CLEAN CONNECTION TO NODE (dn_6001_6002) TO USER jack;
--删除在数据库postgres上的所有连接。
CLEAN CONNECTION TO ALL FORCE FOR DATABASE postgres;
--删除用户jack。
DROP USER jack;
--示例
--示例
-- 创建一个分区表。

-- 创建索引ds_inventory_p1_index1。
CREATE INDEX ds_inventory_p1_index1 ON tpcds.inventory_p1 (INV_ITEM_SK) LOCAL;
-- 对表tpcds.inventory_p1进行聚集。
CLUSTER tpcds.inventory_p1 USING ds_inventory_p1_index1;
-- 对分区p3进行聚集。
CLUSTER tpcds.inventory_p1 PARTITION (p3) USING ds_inventory_p1_index1;
-- 对数据库中可以进行聚集的表进聚集。
CLUSTER;
--删除索引。
DROP INDEX tpcds.ds_inventory_p1_index1;
--删除分区表。
DROP TABLE tpcds.inventory_p1;
--示例

--创建一个由c_customer_sk小于150的内容组成的视图。
CREATE VIEW tpcds.customer_details_view_v2 AS
SELECT *
FROM tpcds.customer
WHERE c_customer_sk < 150;
-- 为tpcds.customer_details_view_v2视图加注释。
COMMENT ON VIEW tpcds.customer_details_view_v2 IS 'View of customer detail';
-- 删除view。
DROP VIEW tpcds.customer_details_view_v2;
-- 删除tpcds.customer_demographics_t2。
DROP TABLE tpcds.customer_demographics_t2;
--示例
--开启事务。
START TRANSACTION;
--插入数据。
INSERT INTO tpcds.customer_demographics_t2 VALUES(1,'M', 'U', 'DOCTOR DEGREE', 1200, 'GOOD', 1, 0,
0);
INSERT INTO tpcds.customer_demographics_t2 VALUES(2,'F', 'U', 'MASTER DEGREE', 300, 'BAD', 1, 0,
0);
--提交事务,让所有更改永久化。
COMMIT;
--查询数据。
SELECT * FROM tpcds.customer_demographics_t2;
--删除表tpcds.customer_demographics_t2。
DROP TABLE tpcds.customer_demographics_t2;
--示例
--将tpcds.ship_mode中的数据拷贝到/home/omm/ds_ship_mode.dat文件中。
COPY tpcds.ship_mode TO '/home/omm/ds_ship_mode.dat';
--将tpcds.ship_mode 输出到stdout。
COPY tpcds.ship_mode TO stdout;
--从stdin拷贝数据到表tpcds.ship_mode_t1。
COPY tpcds.ship_mode_t1 FROM stdin;
--从/home/omm/ds_ship_mode.dat文件拷贝数据到表tpcds.ship_mode_t1。
COPY tpcds.ship_mode_t1 FROM '/home/omm/ds_ship_mode.dat';
COPY tpcds.ship_mode_t1 FROM '/home/omm/ds_ship_mode.dat' WITH(format 'text', delimiter E't', ignore_extra_data 'true', noescaping 'true');
COPY tpcds.ship_mode_t1 FROM '/home/omm/ds_ship_mode.dat' FIXED FORMATTER(SM_SHIP_MODE_SK(0, 2), SM_SHIP_MODE_ID(2,16), SM_TYPE(18,30), SM_CODE(50,10), SM_CARRIER(61,20), SM_CONTRACT(82,20)) header ignore_extra_data;
--删除tpcds.ship_mode_t1。
DROP TABLE tpcds.ship_mode_t1;
--示例
-- 创建一个资源池,其控制组指定为"DefaultClass"组下属的"High" Timeshare Workload控制组。
CREATE RESOURCE POOL pool1 WITH (CONTROL_GROUP="High");
-- 创建一个负载组,关联已创建的资源池。
CREATE WORKLOAD GROUP group1 USING RESOURCE POOL pool1;
-- 创建一个应用映射组,关联已创建的负载组。
CREATE APP WORKLOAD GROUP MAPPING app_wg_map1 WITH (WORKLOAD_GPNAME=group1);
--创建一个默认应用映射组,关联默认的负载组。
CREATE APP WORKLOAD GROUP MAPPING app_wg_map2;
--删除应用映射组。
DROP APP WORKLOAD GROUP MAPPING app_wg_map1;
DROP APP WORKLOAD GROUP MAPPING app_wg_map2;
--删除负载组。
DROP WORKLOAD GROUP group1;
--删除资源池。
DROP RESOURCE POOL pool1;
--示例
--创建一个barrier,不指定名称。
CREATE BARRIER;
--指定barrier名称。
CREATE BARRIER 'barrier1';
--示例
--创建jim和tom用户。
CREATE USER jim PASSWORD 'Bigdata123@';
CREATE USER tom PASSWORD 'Bigdata123@';
--创建一个GBK编码的数据库music(本地环境的编码格式必须也为GBK)。
CREATE DATABASE music ENCODING 'GBK' template = template0;
--创建数据库music2,并指定所有者为jim。
CREATE DATABASE music2 OWNER jim;
--用模板template0创建数据库music3,并指定所有者为jim。
CREATE DATABASE music3 OWNER jim TEMPLATE template0;
--设置music数据库的连接数为10。
ALTER DATABASE music CONNECTION LIMIT= 10;
--将music名称改为music4。
ALTER DATABASE music RENAME TO music4;
--将数据库music2的所属者改为tom。
ALTER DATABASE music2 OWNER TO tom;
--设置music3的表空间为PG_DEFAULT。
ALTER DATABASE music3 SET TABLESPACE PG_DEFAULT;
--关闭在数据库music3上缺省的索引扫描。
ALTER DATABASE music3 SET enable_indexscan TO off;
--重置enable_indexscan参数。
ALTER DATABASE music3 RESET enable_indexscan;
--删除数据库。
DROP DATABASE music2;
DROP DATABASE music3;
DROP DATABASE music4;
--删除jim和tom用户。
DROP USER jim;
DROP USER tom;
--创建兼容TD格式的数据库。
CREATE DATABASE td_compatible_db DBCOMPATIBILITY 'TD';
--创建兼容ORA格式的数据库。
CREATE DATABASE ora_compatible_db DBCOMPATIBILITY 'ORA';
--删除兼容TD、ORA格式的数据库。
DROP DATABASE td_compatible_db;
DROP DATABASE ora_compatible_db;
--示例
--创建一个空的Data Source对象,不含任何信息。
CREATE DATA SOURCE ds_test1;
--创建一个Data Source对象,含TYPE信息,VERSION为NULL。
CREATE DATA SOURCE ds_test2 TYPE 'MPPDB' VERSION NULL;
--创建一个Data Source对象,仅含OPTIONS。
--创建一个Data Source对象,含TYPE, VERSION, OPTIONS。
'userid', password 'pwd@123456', encoding '');
--删除Data Source对象。
--示例
--创建目录。
CREATE OR REPLACE DIRECTORY dir as '/tmp/';
--示例
CREATE FOREIGN TABLE foreign_HR_staffS
(
staff_ID
NUMBER(6) ,
FIRST_NAME
VARCHAR2(20),
LAST_NAME
VARCHAR2(25),
EMAIL
VARCHAR2(25),
PHONE_NUMBER
VARCHAR2(20),
HIRE_DATE
DATE,
employment_ID VARCHAR2(10),
SALARY
NUMBER(8,2),
COMMISSION_PCT NUMBER(2,2),
MANAGER_ID
NUMBER(6),
section_ID NUMBER(4)
format 'TEXT', delimiter E'x08', null '') WITH err_HR_staffS;
--建立外表,用来以TEXT格式导入GDS服务器192.168.0.90和192.168.0.91上的数据,导入过程错误信息将记录到
CREATE FOREIGN TABLE foreign_HR_staffS_ft3
(
staff_ID
NUMBER(6) ,
FIRST_NAME
VARCHAR2(20),
LAST_NAME
VARCHAR2(25),
EMAIL
VARCHAR2(25),
PHONE_NUMBER
VARCHAR2(20),
HIRE_DATE
DATE,
employment_ID VARCHAR2(10),
SALARY
NUMBER(8,2),
COMMISSION_PCT NUMBER(2,2),
MANAGER_ID
NUMBER(6),
section_ID NUMBER(4)
format 'TEXT', delimiter E'x08', null '',reject_limit '2') WITH err_HR_staffS_ft3;
--建立外表,用来以CSV格式导入input_data目录下存放在各个节点名文件下的所有文件。
CREATE FOREIGN TABLE foreign_HR_staffS_ft1
(
staff_ID
NUMBER(6) ,
FIRST_NAME
VARCHAR2(20),
LAST_NAME
VARCHAR2(25),
EMAIL
VARCHAR2(25),
PHONE_NUMBER
VARCHAR2(20),
HIRE_DATE
DATE,
employment_ID VARCHAR2(10),
SALARY
NUMBER(8,2),
COMMISSION_PCT NUMBER(2,2),
MANAGER_ID
NUMBER(6),
section_ID
NUMBER(4)
) SERVER gsmpp_server OPTIONS (location 'file:///input_data/*', format 'csv', mode 'private',
delimiter ',') WITH err_HR_staffS_ft1;
--建立外表,用来以CSV格式导出数据到output_data目录下。
CREATE FOREIGN TABLE foreign_HR_staffS_ft2
(
staff_ID
NUMBER(6) ,
FIRST_NAME
VARCHAR2(20),
LAST_NAME
VARCHAR2(25),
EMAIL
VARCHAR2(25),
PHONE_NUMBER
VARCHAR2(20),
HIRE_DATE
DATE,
employment_ID VARCHAR2(10),
SALARY
NUMBER(8,2),
COMMISSION_PCT NUMBER(2,2),
MANAGER_ID
NUMBER(6),
section_ID NUMBER(4)
header 'on') WRITE ONLY;

CREATE FOREIGN TABLE region
(
R_REGIONKEY INT4,
R_NAME TEXT,
R_COMMENT TEXT
)
SERVER hdfs_server
OPTIONS
(
FORMAT 'orc',
encoding 'utf8',
FOLDERNAME '/user/hive/warehouse/mppdb.db/region_orc11_64stripe/'
)
DISTRIBUTE BY roundrobin;
--建立包含分区列的HDFS外表。
CREATE FOREIGN TABLE part
(
p_partkey int,
p_name text,
p_mfgr text,
p_brand text,
p_type text,
p_size int,
p_container text,
p_retailprice float8,
p_comment text
)
SERVER hdfs_server
OPTIONS
(
FORMAT 'orc',
encoding 'utf8',
FOLDERNAME '/user/hive/warehouse/partition.db/part_4'
)
DISTRIBUTE BY roundrobin
PARTITION BY (p_mfgr) AUTOMAPPED;
--查看外表。
SELECT * FROM pg_foreign_table WHERE ftrelid='region'::regclass;
select * from pg_foreign_table where ftrelid='part'::regclass;
--修改外表。
ALTER FOREIGN TABLE region ALTER r_name TYPE TEXT;
ALTER FOREIGN TABLE
ALTER FOREIGN TABLE region ALTER r_name SET NOT NULL;
ALTER FOREIGN TABLE
--删除外表。
DROP FOREIGN TABLE region;
--示例二:关于包含信息约束(Informational Constraint)HDFS外表的相关操作。
--创建含有信息约束(Informational Constraint)的HDFS外表。
CREATE FOREIGN TABLE region (
R_REGIONKEY int,
R_NAME TEXT,
R_COMMENT TEXT, 
primary key (R_REGIONKEY) not enforced)
SERVER hdfs_server
OPTIONS(format 'orc', encoding 'utf8',
foldername '/user/hive/warehouse/mppdb.db/region_orc11_64stripe')
DISTRIBUTE BY roundrobin;
--查看region表是否有信息约束索引。
SELECT relname,relhasindex FROM pg_class WHERE oid='region'::regclass;
SELECT conname, contype, consoft, conopt, conindid, conkey FROM pg_constraint WHERE conname
='region_pkey';
--删除信息约束。
ALTER FOREIGN TABLE region DROP CONSTRAINT region_pkey RESTRICT;
SELECT conname, contype, consoft, conindid, conkey FROM pg_constraint WHERE conname ='region_pkey';
--添加一个唯一信息约束。
ALTER FOREIGN TABLE region ADD CONSTRAINT constr_unique UNIQUE(R_REGIONKEY) NOT ENFORCED;
--删除信息约束。
ALTER FOREIGN TABLE region DROP CONSTRAINT constr_unique RESTRICT;
SELECT conname, contype, consoft, conindid, conkey FROM pg_constraint WHERE conname
='constr_unique';
--为外表添加一个唯一信息约束。
ALTER FOREIGN TABLE region ADD CONSTRAINT constr_unique UNIQUE(R_REGIONKEY) NOT ENFORCED disable
query optimization;
SELECT relname,relhasindex FROM pg_class WHERE oid='region'::regclass;
--删除信息约束。
ALTER FOREIGN TABLE region DROP CONSTRAINT constr_unique CASCADE;
--删除region表。
DROP FOREIGN TABLE region;
--删除hdfs_server
DROP SERVER hdfs_server;
--示例
--创建Server。
CREATE SERVER server_remote FOREIGN DATA WRAPPER GC_FDW OPTIONS (address '10.146.187.231:8000,10.180.157.130:8000' ,dbname 'test', username 'test', password
'Xx123456@');
修改、删除外表。
--修改外表。
ALTER FOREIGN TABLE region ALTER r_name TYPE TEXT;
ALTER FOREIGN TABLE
ALTER FOREIGN TABLE region OPTIONS (SET schema_name 'test');
ALTER FOREIGN TABLE
--删除外表。
DROP FOREIGN TABLE region;
DROP FOREIGN TABLE
--示例
--定义函数为SQL查询。
CREATE FUNCTION func_add_sql(integer, integer) RETURNS integer
AS 'select $1 + $2;'
LANGUAGE SQL
IMMUTABLE
RETURNS NULL ON NULL INPUT;
--利用参数名用 PL/pgSQL 自增一个整数。
CREATE OR REPLACE FUNCTION func_increment_plsql(i integer) RETURNS integer AS $$
BEGIN
RETURN i + 1;
END;
$$ LANGUAGE plpgsql;
--返回RECORD类型
CREATE OR REPLACE FUNCTION compute(i int, out result_1 bigint, out result_2 bigint)
returns SETOF RECORD
as $$
begin
result_1 = i + 1;
result_2 = i * 10;
return next;
end;
$$language plpgsql;
--返回一个包含多个输出参数的记录。
CREATE FUNCTION func_dup_sql(in int, out f1 int, out f2 text)
LANGUAGE SQL;
SELECT * FROM func_dup_sql(42);
--计算两个整数的和,并返回结果。若果输入为null,则返回null。
CREATE FUNCTION func_add_sql2(num1 integer, num2 integer) RETURN integer
AS
BEGIN
RETURN num1 + num2;
END;
 
--创建package属性的重载函数
create or replace function package_func_overload(col int, col2 int)
return integer package
as
declare
col_type text;
begin
col := 122;
return 0;
end;
 
create or replace function package_func_overload(col int, col2 smallint)
return integer package
as
declare
col_type text;
begin
col := 122;
return 0;
end;
 
--修改函数add的执行规则为IMMUTABLE,即参数不变时返回相同结果。
ALTER FUNCTION func_add_sql2(INTEGER, INTEGER) IMMUTABLE;
--将函数add的名称修改为add_two_number。
ALTER FUNCTION func_add_sql2(INTEGER, INTEGER) RENAME TO add_two_number;
--将函数add的属者改为omm。
ALTER FUNCTION add_two_number(INTEGER, INTEGER) OWNER TO omm;
--删除函数。
--示例
--创建表tpcds.ship_mode_t1。

--在表tpcds.ship_mode_t1上的SM_SHIP_MODE_SK字段上创建普通索引。
CREATE UNIQUE INDEX ds_ship_mode_t1_index1 ON tpcds.ship_mode_t1(SM_SHIP_MODE_SK);
--在表tpcds.ship_mode_t1上的SM_SHIP_MODE_SK字段上创建指定B-tree索引。
CREATE INDEX ds_ship_mode_t1_index4 ON tpcds.ship_mode_t1 USING btree(SM_SHIP_MODE_SK);
--在表tpcds.ship_mode_t1上SM_CODE字段上创建表达式索引。
CREATE INDEX ds_ship_mode_t1_index2 ON tpcds.ship_mode_t1(SUBSTR(SM_CODE,1 ,4));
--在表tpcds.ship_mode_t1上的SM_SHIP_MODE_SK字段上创建SM_SHIP_MODE_SK大于10的部分索引。
CREATE UNIQUE INDEX ds_ship_mode_t1_index3 ON tpcds.ship_mode_t1(SM_SHIP_MODE_SK) WHERE
SM_SHIP_MODE_SK>10;
--重命名一个现有的索引。
ALTER INDEX tpcds.ds_ship_mode_t1_index1 RENAME TO ds_ship_mode_t1_index5;
--设置索引不可用。
ALTER INDEX tpcds.ds_ship_mode_t1_index2 UNUSABLE;
--重建索引。
ALTER INDEX tpcds.ds_ship_mode_t1_index2 REBUILD;
--删除一个现有的索引。
DROP INDEX tpcds.ds_ship_mode_t1_index2;
--删除表。
DROP TABLE tpcds.ship_mode_t1;
--创建表tpcds.customer_address_p1。

--创建分区表索引ds_customer_address_p1_index1,不指定索引分区的名字。
CREATE INDEX ds_customer_address_p1_index1 ON tpcds.customer_address_p1(CA_ADDRESS_SK) LOCAL;
--创建分区表索引ds_customer_address_p1_index2,并指定索引分区的名字。
CREATE INDEX ds_customer_address_p1_index2 ON tpcds.customer_address_p1(CA_ADDRESS_SK) LOCAL
(
PARTITION CA_ADDRESS_SK_index1,
PARTITION CA_ADDRESS_SK_index2 TABLESPACE example3,
PARTITION CA_ADDRESS_SK_index3 TABLESPACE example4
)
TABLESPACE example2;
--修改分区表索引CA_ADDRESS_SK_index2的表空间为example1。
ALTER INDEX tpcds.ds_customer_address_p1_index2 MOVE PARTITION CA_ADDRESS_SK_index2 TABLESPACE
example1;
--修改分区表索引CA_ADDRESS_SK_index3的表空间为example2。
ALTER INDEX tpcds.ds_customer_address_p1_index2 MOVE PARTITION CA_ADDRESS_SK_index3 TABLESPACE
example2;
--重命名分区表索引。
ALTER INDEX tpcds.ds_customer_address_p1_index2 RENAME PARTITION CA_ADDRESS_SK_index1 TO
CA_ADDRESS_SK_index4;
--删除索引和分区表。
DROP INDEX tpcds.ds_customer_address_p1_index1;
DROP INDEX tpcds.ds_customer_address_p1_index2;
DROP TABLE tpcds.customer_address_p1;
--删除表空间。

--示例
--创建用户alice
CREATE ROLE alice PASSWORD 'Gauss@123';
--创建用户bob
CREATE ROLE bob PASSWORD 'Gauss@123';
--创建数据表all_data
CREATE TABLE all_data(id int, role varchar(100), data varchar(100));
--向数据表插入数据
INSERT INTO all_data VALUES(1, 'alice', 'alice data');
INSERT INTO all_data VALUES(2, 'bob', 'bob data');
INSERT INTO all_data VALUES(3, 'peter', 'peter data');
--将表all_data的读取权限赋予alice和bob用户
GRANT SELECT ON all_data TO alice, bob;
--打开行访问控制策略开关
ALTER TABLE all_data ENABLE ROW LEVEL SECURITY;
--创建行访问控制策略,当前用户只能查看用户自身的数据
CREATE ROW LEVEL SECURITY POLICY all_data_rls ON all_data USING(role = CURRENT_USER);
--查看表all_data相关信息

--当前用户执行SELECT操作
SELECT * FROM all_data;
EXPLAIN(COSTS OFF) SELECT * FROM all_data;
--切换至alice用户执行SELECT操作
SELECT * FROM all_data;
EXPLAIN(COSTS OFF) SELECT * FROM all_data;
--示例
--创建一个存储过程。

--调用此存储过程。
SELECT prc_add(2,3);
--创建一个参数模式为VARIADIC的存储过程。
CREATE OR REPLACE PROCEDURE pro_variadic (var1 VARCHAR2(10) DEFAULT 'hello!',var4 VARIADIC int4[])
AS
BEGIN
dbms_output.put_line(var1);
END;
 
--执行此存储过程。
SELECT pro_variadic(var1=>'hello', VARIADIC var4=> array[1,2,3,4]);
--创建一个存储过程,将带着调用它的用户的权限执行。
CREATE PROCEDURE insert_data(v integer)
SECURITY
INVOKER
AS
BEGIN
INSERT INTO tb1 VALUES(v);
END;

--调用此存储过程。
CALL insert_data1(1);
--创建带有package属性的存储过程。
create or replace procedure package_func_overload(col int, col2 out varchar)
package
as
declare
col_type text;
begin
col2 := '122';
end;

--删除一个存储过程。
DROP PROCEDURE prc_add;
DROP PROCEDURE pro_variadic;
DROP PROCEDURE insert_data;
DROP PROCEDURE package_func_overload;
--示例
--创建一个默认资源池,其控制组为"DefaultClass"组下属的"Medium" Timeshare Workload控制组。
CREATE RESOURCE POOL pool1;
-- 创建一个资源池,其控制组指定为"DefaultClass"组下属的"High" Timeshare Workload控制组。
CREATE RESOURCE POOL pool2 WITH (CONTROL_GROUP="High");
-- 创建一个资源池,其控制组指定为"class1"组下属的"Low" Timeshare Workload控制组。
CREATE RESOURCE POOL pool3 WITH (CONTROL_GROUP="class1:Low");
-- 创建一个资源池,其控制组指定为"class1"组下属的"wg1" Workload控制组。
CREATE RESOURCE POOL pool4 WITH (CONTROL_GROUP="class1:wg1");
-- 创建一个资源池,其控制组指定为"class1"组下属的"wg2" Workload控制组。
CREATE RESOURCE POOL pool5 WITH (CONTROL_GROUP="class1:wg2:3");
--删除资源池。
DROP RESOURCE POOL pool1;
--示例
--创建一个角色,名为manager,密码为Bigdata123@。
CREATE ROLE manager IDENTIFIED BY 'Bigdata123@';
--创建一个角色,从2015年1月1日开始生效,到2026年1月1日失效。
CREATE ROLE miriam WITH LOGIN PASSWORD 'Bigdata123@' VALID BEGIN '2015-01-01' VALID UNTIL
'2026-01-01';
--修改角色manager的密码为abcd@123。
ALTER ROLE manager IDENTIFIED BY 'abcd@123' REPLACE 'Bigdata123@';
--修改角色manager为系统管理员。
ALTER ROLE manager SYSADMIN;
--删除角色manager。
DROP ROLE manager;
--删除角色miriam。
DROP ROLE miriam;
--示例
--创建一个角色role1。
CREATE ROLE role1 IDENTIFIED BY 'Bigdata123@';
-- 为用户role1创建一个同名schema,子命令创建的表films和winners的拥有者为role1。
CREATE SCHEMA AUTHORIZATION role1
CREATE TABLE films (title text, release date, awards text[])
CREATE VIEW winners AS
SELECT title, release FROM films WHERE awards IS NOT NULL;
--删除schema。
DROP SCHEMA role1 CASCADE;
--删除用户。
DROP USER role1 CASCADE;
--示例
CREATE SEQUENCE serial START 101 CACHE 20;
SELECT nextval('serial');
CREATE SEQUENCE serial1 START 101 CACHE 20 OWNED BY customer_address.ca_address_sk;
--删除序列
DROP TABLE customer_address;
DROP SEQUENCE serial cascade;
DROP SEQUENCE serial1 cascade;
--示例
--创建hdfs_server。
CREATE SERVER hdfs_server FOREIGN DATA WRAPPER HDFS_FDW OPTIONS
(address '10.146.187.231:8000,10.180.157.130:8000' ,
hdfscfgpath '/opt/hadoop_client/HDFS/hadoop/etc/hadoop',
type 'HDFS'
) ;
--删除hdfs_server。
DROP SERVER hdfs_server;
--创建server。
CREATE SERVER server_remote FOREIGN DATA WRAPPER GC_FDW OPTIONS
(address '10.146.187.231:8000,10.180.157.130:8000' ,
dbname 'test',
username 'test',
password 'xxxxxxxx'
);
--删除server。
DROP SERVER server_remote;
--示例
--创建简单的表。

--向tpcds.warehouse_t19表中增加一个varchar列。
ALTER TABLE tpcds.warehouse_t19 ADD W_GOODS_CATEGORY varchar(30);
--给tpcds.warehouse_t19表增加一个检查约束。
ALTER TABLE tpcds.warehouse_t19 ADD CONSTRAINT W_CONSTR_KEY4 CHECK (W_STATE IS NOT NULL);
--在一个操作中改变两个现存字段的类型。
ALTER TABLE tpcds.warehouse_t19
ALTER COLUMN W_GOODS_CATEGORY TYPE varchar(80),
ALTER COLUMN W_STREET_NAME TYPE varchar(100);
--此语句与上面语句等效。
ALTER TABLE tpcds.warehouse_t19 MODIFY (W_GOODS_CATEGORY varchar(30), W_STREET_NAME varchar(60));
--给一个已存在字段添加非空约束。
ALTER TABLE tpcds.warehouse_t19 ALTER COLUMN W_GOODS_CATEGORY SET NOT NULL;
--移除已存在字段的非空约束。
ALTER TABLE tpcds.warehouse_t19 ALTER COLUMN W_GOODS_CATEGORY DROP NOT NULL;
--如果列存表中还未指定局部聚簇,向在一个列存表中添加局部聚簇列。
ALTER TABLE tpcds.warehouse_t17 ADD PARTIAL CLUSTER KEY(W_WAREHOUSE_SK);
--查看约束的名称,并删除一个列存表中的局部聚簇列。

ALTER TABLE tpcds.warehouse_t17 DROP CONSTRAINT warehouse_t17_cluster;
--将表移动到另一个表空间。
ALTER TABLE tpcds.warehouse_t19 SET TABLESPACE PG_DEFAULT;
--创建模式joe。
CREATE SCHEMA joe;
--将表移动到另一个模式中。
ALTER TABLE tpcds.warehouse_t19 SET SCHEMA joe;
--重命名已存在的表。
ALTER TABLE joe.warehouse_t19 RENAME TO warehouse_t23;
--从warehouse_t23表中删除一个字段。
ALTER TABLE joe.warehouse_t23 DROP COLUMN W_STREET_NAME;
--删除表空间、模式joe和模式表warehouse。
DROP TABLESPA DS_TABLESPACE1;
DROP TABLE tpcds.warehouse_t1;
DROP TABLE tpcds.warehouse_t2;
DROP TABLE tpcds.warehouse_t3;
DROP TABLE tpcds.warehouse_t4;
DROP TABLE tpcds.warehouse_t5;
DROP TABLE tpcds.warehouse_t6;
DROP TABLE tpcds.warehouse_t7;
DROP TABLE tpcds.warehouse_t8;
DROP TABLE tpcds.warehouse_t9;
DROP TABLE tpcds.warehouse_t10;
DROP TABLE tpcds.warehouse_t11;
DROP TABLE tpcds.warehouse_t12;
DROP TABLE tpcds.warehouse_t13;
DROP TABLE tpcds.warehouse_t14;
DROP TABLE tpcds.warehouse_t15;
DROP TABLE tpcds.warehouse_t16;
DROP TABLE tpcds.warehouse_t17;
DROP TABLE tpcds.warehouse_t18;
DROP TABLE tpcds.warehouse_t20;
DROP TABLE tpcds.warehouse_t21;
DROP TABLE tpcds.warehouse_t22;
DROP TABLE joe.warehouse_t23;
DROP TABLE tpcds.warehouse_t24;
DROP TABLE tpcds.warehouse_t25;
DROP SCHEMA IF EXISTS joe CASCADE;
--示例
--创建一个表tpcds.store_returns_t1并插入tpcds.store_returns表中sr_item_sk字段中大于16的数值。
CREATE TABLE tpcds.store_returns_t1 AS SELECT * FROM tpcds.store_returns WHERE sr_item_sk >
'4795';
--使用tpcds.store_returns拷贝一个新表tpcds.store_returns_t2。
CREATE TABLE tpcds.store_returns_t2 AS table tpcds.store_returns;
--删除表。
DROP TABLE tpcds.store_returns_t1 ;
DROP TABLE tpcds.store_returns_t2 ;
--示例
--从--示例数据表导入数据。
INSERT INTO tpcds.web_returns_p1 SELECT * FROM tpcds.web_returns;
--删除分区P8。
ALTER TABLE tpcds.web_returns_p1 DROP PARTITION P8;
--增加分区WR_RETURNED_DATE_SK介于2453005和2453105之间。
ALTER TABLE tpcds.web_returns_p1 ADD PARTITION P8 VALUES LESS THAN (2453105);
--增加分区WR_RETURNED_DATE_SK介于2453105和MAXVALUE之间。
ALTER TABLE tpcds.web_returns_p1 ADD PARTITION P9 VALUES LESS THAN (MAXVALUE);
--删除分区P8。
ALTER TABLE tpcds.web_returns_p1 DROP PARTITION FOR (2453005);
--分区P7重命名为P10。
ALTER TABLE tpcds.web_returns_p1 RENAME PARTITION P7 TO P10;
--分区P6重命名为P11。
ALTER TABLE tpcds.web_returns_p1 RENAME PARTITION FOR (2452639) TO P11;
--查询分区P10的行数。
SELECT count(*) FROM tpcds.web_returns_p1 PARTITION (P10);


--以like方式创建一个分区表。
CREATE TABLE tpcds.web_returns_p3 (LIKE tpcds.web_returns_p2 INCLUDING PARTITION);
--修改分区P1的表空间为example2。
ALTER TABLE tpcds.web_returns_p2 MOVE PARTITION P1 TABLESPACE example2;
--修改分区P2的表空间为example3。
ALTER TABLE tpcds.web_returns_p2 MOVE PARTITION P2 TABLESPACE example3;
--以2453010为分割点切分P8。
ALTER TABLE tpcds.web_returns_p2 SPLIT PARTITION P8 AT (2453010) INTO
(
PARTITION P9,
PARTITION P10
);
--将P6,P7合并为一个分区。
ALTER TABLE tpcds.web_returns_p2 MERGE PARTITIONS P6, P7 INTO PARTITION P8;
--修改分区表迁移属性。
ALTER TABLE tpcds.web_returns_p2 DISABLE ROW MOVEMENT;
--删除表和表空间。
DROP TABLE tpcds.web_returns_p1;
DROP TABLE tpcds.web_returns_p2;
DROP TABLE tpcds.web_returns_p3;
DROP TABLESPACE example1;
DROP TABLESPACE example2;
DROP TABLESPACE example3;
DROP TABLESPACE example4;
l
CREATE SCHEMA tpcds;
SET CURRENT_SCHEMA TO tpcds;
-- 创建分区表,分区键是integer类型

-- 查看分区表信息
SELECT relname, boundaries, spcname FROM pg_partition p JOIN pg_tablespace t ON
p.reltablespace=t.oid and p.parentid='tpcds.startend_pt'::regclass ORDER BY 1;

-- 导入数据,查看分区数据量
INSERT INTO tpcds.startend_pt VALUES (GENERATE_SERIES(0, 4999), GENERATE_SERIES(0, 4999));
SELECT COUNT(*) FROM tpcds.startend_pt PARTITION FOR (0);
-- 增加分区: [5000, 5300), [5300, 5600), [5600, 5900), [5900, 6000)
ALTER TABLE tpcds.startend_pt ADD PARTITION p6 START(5000) END(6000) EVERY(300) TABLESPACE
startend_tbs4;
-- 增加MAXVALUE分区: p7
ALTER TABLE tpcds.startend_pt ADD PARTITION p7 END(MAXVALUE);
-- 重命名分区p7为p8
ALTER TABLE tpcds.startend_pt RENAME PARTITION p7 TO p8;
-- 删除分区p8
ALTER TABLE tpcds.startend_pt DROP PARTITION p8;
-- 重命名5950所在的分区为:p71
ALTER TABLE tpcds.startend_pt RENAME PARTITION FOR(5950) TO p71;
-- 分裂4500所在的分区[4000, 5000)
ALTER TABLE tpcds.startend_pt SPLIT PARTITION FOR(4500) INTO(PARTITION q1 START(4000)
END(5000) EVERY(250) TABLESPACE startend_tbs3);
-- 修改分区p2的表空间为startend_tbs4
ALTER TABLE tpcds.startend_pt MOVE PARTITION p2 TABLESPACE startend_tbs4;
-- 查看分区情形
SELECT relname, boundaries, spcname FROM pg_partition p JOIN pg_tablespace t ON
p.reltablespace=t.oid and p.parentid='tpcds.startend_pt'::regclass ORDER BY 1;

DROP SCHEMA tpcds CASCADE;
DROP TABLESPACE startend_tbs1;
DROP TABLESPACE startend_tbs2;
DROP TABLESPACE startend_tbs3;
DROP TABLESPACE startend_tbs4;
--示例
--创建表空间。
CREATE TABLESPACE ds_location1 RELATIVE LOCATION 'hdfs_tablespace/hdfs_tablespace_1' ;
--创建用户joe。
CREATE ROLE joe IDENTIFIED BY 'Bigdata123@';
--创建用户jay。
CREATE ROLE jay IDENTIFIED BY 'Bigdata123@';
--创建表空间,且所有者指定为用户joe。
CREATE TABLESPACE ds_location2 OWNER joe RELATIVE LOCATION 'hdfs_tablespace/hdfs_tablespace_1' ;
--把表空间ds_location1重命名为ds_location3。
ALTER TABLESPACE ds_location1 RENAME TO ds_location3;
--改变表空间ds_location2的所有者。
ALTER TABLESPACE ds_location2 OWNER TO jay;
--删除表空间。
DROP TABLESPACE ds_location2;
DROP TABLESPACE ds_location3;
DROP TABLESPACE ds_location4;
--删除用户。
DROP ROLE joe;
DROP ROLE jay;
--示例
--创建文本搜索配置。
CREATE TEXT SEARCH CONFIGURATION ngram2 (parser=ngram) WITH (gram_size = 2, grapsymbol_ignore =
false);
--创建文本搜索配置。
CREATE TEXT SEARCH CONFIGURATION ngram3 (copy=ngram2) WITH (gram_size = 2, grapsymbol_ignore =
false);
--添加类型映射。
ALTER TEXT SEARCH CONFIGURATION ngram2 ADD MAPPING FOR multisymbol WITH simple;
--创建用户joe。
CREATE USER joe IDENTIFIED BY 'Bigdata123@';
--修改文本搜索配置的所有者。
ALTER TEXT SEARCH CONFIGURATION ngram2 OWNER TO joe;
--修改文本搜索配置的schema。
ALTER TEXT SEARCH CONFIGURATION ngram2 SET SCHEMA joe;
--重命名文本搜索配置。
ALTER TEXT SEARCH CONFIGURATION joe.ngram2 RENAME TO ngram_2;
--删除类型映射。
ALTER TEXT SEARCH CONFIGURATION joe.ngram_2 DROP MAPPING IF EXISTS FOR multisymbol;
--删除文本搜索配置。
DROP TEXT SEARCH CONFIGURATION joe.ngram_2;
DROP TEXT SEARCH CONFIGURATION ngram3;
--删除Schema及用户joe。
DROP SCHEMA IF EXISTS joe CASCADE;
DROP ROLE IF EXISTS joe;
--示例
--示例
--创建源表及触发表
CREATE TABLE test_trigger_src_tbl(id1 INT, id2 INT, id3 INT);
CREATE TABLE test_trigger_des_tbl(id1 INT, id2 INT, id3 INT);
--创建触发器函数
CREATE OR REPLACE FUNCTION tri_insert_func() RETURNS TRIGGER AS
$$
DECLARE
BEGIN
INSERT INTO test_trigger_des_tbl VALUES(NEW.id1, NEW.id2, NEW.id3);
RETURN NEW;
END
$$ LANGUAGE PLPGSQL;
CREATE OR REPLACE FUNCTION tri_update_func() RETURNS TRIGGER AS
$$
DECLARE
BEGIN
UPDATE test_trigger_des_tbl SET id3 = NEW.id3 WHERE id1=OLD.id1;
RETURN OLD;
END
$$ LANGUAGE PLPGSQL;
CREATE OR REPLACE FUNCTION TRI_DELETE_FUNC() RETURNS TRIGGER AS
$$
DECLARE
BEGIN
DELETE FROM test_trigger_des_tbl WHERE id1=OLD.id1;
RETURN OLD;
END
$$ LANGUAGE PLPGSQL;
--创建INSERT触发器
CREATE TRIGGER insert_trigger
BEFORE INSERT ON test_trigger_src_tbl
FOR EACH ROW
EXECUTE PROCEDURE tri_insert_func();
--创建UPDATE触发器
CREATE TRIGGER update_trigger
AFTER UPDATE ON test_trigger_src_tbl
FOR EACH ROW
EXECUTE PROCEDURE tri_update_func();
--创建DELETE触发器
CREATE TRIGGER delete_trigger
BEFORE DELETE ON test_trigger_src_tbl
FOR EACH ROW
EXECUTE PROCEDURE tri_delete_func();
--执行INSERT触发事件并检查触发结果
INSERT INTO test_trigger_src_tbl VALUES(100,200,300);
SELECT * FROM test_trigger_src_tbl;
SELECT * FROM test_trigger_des_tbl; //查看触发操作是否生效。
--执行UPDATE触发事件并检查触发结果
UPDATE test_trigger_src_tbl SET id3=400 WHERE id1=100;
SELECT * FROM test_trigger_src_tbl;
SELECT * FROM test_trigger_des_tbl; //查看触发操作是否生效
--执行DELETE触发事件并检查触发结果
DELETE FROM test_trigger_src_tbl WHERE id1=100;
SELECT * FROM test_trigger_src_tbl;
SELECT * FROM test_trigger_des_tbl; //查看触发操作是否生效
--修改触发器
ALTER TRIGGER delete_trigger ON test_trigger_src_tbl RENAME TO delete_trigger_renamed;
--禁用insert_trigger触发器
ALTER TABLE test_trigger_src_tbl DISABLE TRIGGER insert_trigger;
--禁用当前表上所有触发器
ALTER TABLE test_trigger_src_tbl DISABLE TRIGGER ALL;
--删除触发器
DROP TRIGGER insert_trigger ON test_trigger_src_tbl;
DROP TRIGGER update_trigger ON test_trigger_src_tbl;
DROP TRIGGER delete_trigger_renamed ON test_trigger_src_tbl;
--示例
--创建一种复合类型,建表并插入数据以及查询:
CREATE TYPE compfoo AS (f1 int, f2 text);
CREATE TABLE t1_compfoo(a int, b compfoo);
CREATE TABLE t2_compfoo(a int, b compfoo);
INSERT INTO t1_compfoo values(1,(1,'demo'));
INSERT INTO t2_compfoo select * from t1_typ5;
SELECT (b).f1 FROM t1_compfoo;
SELECT * FROM t1_compfoo t1 join t2_compfoo t2 on (t1.b).f1=(t1.b).f1;
--重命名数据类型:
ALTER TYPE compfoo RENAME TO compfoo1;
--要改变一个用户定义类型compfoo1的所有者为usr1:
CREATE USER usr1 PASSWORD 'Bigdata123@';
ALTER TYPE compfoo1 OWNER TO usr1;
--把用户定义类型compfoo1的模式改变为usr1:
ALTER TYPE compfoo1 SET SCHEMA usr1;
ALTER TYPE usr1.compfoo1 ADD ATTRIBUTE f3 int;
DROP TYPE usr1.compfoo1 cascade;
DROP TABLE t1_compfoo;
DROP TABLE t2_compfoo;
DROP SCHEMA usr1;
DROP USER usr1;
--创建一个枚举类型
CREATE TYPE bugstatus AS ENUM ('create', 'modify', 'closed');
--添加一个标签值
ALTER TYPE bugstatus ADD VALUE IF NOT EXISTS 'regress' BEFORE 'closed';
--重命名一个标签值
ALTER TYPE bugstatus RENAME VALUE 'create' BEFORE 'new';
--编译.so文件,并创建shell类型:
CREATE TYPE complex;
--这个语句的作用是为要定义的类型创建了一个占位符,这样允许我们在定义其I/O函数时引用该类型。现在可以
CREATE FUNCTION
complex_in(cstring)
RETURNS complex
AS 'filename'
LANGUAGE C IMMUTABLE STRICT not fenced;

CREATE FUNCTION
complex_out(complex)
RETURNS cstring
AS 'filename'
LANGUAGE C IMMUTABLE STRICT not fenced;
CREATE FUNCTION
complex_recv(internal)
RETURNS complex
AS 'filename'
LANGUAGE C IMMUTABLE STRICT not fenced;
CREATE FUNCTION
complex_send(complex)
RETURNS bytea
AS 'filename'
LANGUAGE C IMMUTABLE STRICT not fenced;
--最后,提供该数据类型的完整定义:
CREATE TYPE complex (
internallength = 16,
input = complex_in,
output = complex_out,
receive = complex_recv,
send = complex_send,
alignment = double
);

--示例
--创建用户jim,登录密码为Bigdata123@。
CREATE USER jim PASSWORD 'Bigdata123@';
--下面语句与上面的等价。
CREATE USER kim IDENTIFIED BY 'Bigdata123@';
--如果创建有“创建数据库”权限的用户,则需要加CREATEDB关键字。
CREATE USER dim CREATEDB PASSWORD 'Bigdata123@';
--将用户jim的登录密码由Bigdata123@修改为Abcd@123。
ALTER USER jim IDENTIFIED BY 'Abcd@123' REPLACE 'Bigdata123@';
--为用户jim追加CREATEROLE权限。
ALTER USER jim CREATEROLE;
--将enable_seqscan的值设置为on, 设置成功后,在下一会话中生效。
ALTER USER jim SET enable_seqscan TO on;
--重置jim的enable_seqscan参数。
ALTER USER jim RESET enable_seqscan;
--锁定jim帐户。
ALTER USER jim ACCOUNT LOCK;
--删除用户。
DROP USER kim CASCADE;
DROP USER jim CASCADE;
DROP USER dim CASCADE;
--示例
--创建字段spcname为pg_default组成的视图。
CREATE VIEW myView AS
SELECT * FROM pg_tablespace WHERE spcname = 'pg_default';
--查看视图。
SELECT * FROM myView ;
--删除视图myView。
DROP VIEW myView;
--示例
--创建一个默认负载组,其资源池为默认的资源池。
CREATE WORKLOAD GROUP wg_name1;
--创建资源池pool1。
CREATE RESOURCE POOL pool1;
--创建一个负载组,关联已创建的资源池。
CREATE WORKLOAD GROUP wg_name2 USING RESOURCE POOL pool1;
--创建一个负载组,关联已创建的资源池,并设置并发数量为10。
CREATE WORKLOAD GROUP wg_name3 USING RESOURCE POOL pool1 WITH (ACT_STATEMENTS=10);
--删除负载组和资源池。
DROP WORKLOAD GROUP wg_name1;
DROP WORKLOAD GROUP wg_name2;
DROP WORKLOAD GROUP wg_name3;
DROP RESOURCE POOL pool1;
--示例
--示例
--示例
--创建表tpcds.customer_address_bak。
CREATE TABLE tpcds.customer_address_bak AS TABLE tpcds.customer_address;
--删除tpcds.customer_address_bak中ca_address_sk小于14888的职员。
DELETE FROM tpcds.customer_address_bak WHERE ca_address_sk < 14888;
--删除tpcds.customer_address_bak中所有数据。
DELETE FROM tpcds.customer_address_bak;
--删除tpcds.customer_address_bak表。
DROP TABLE tpcds.customer_address_bak;
--示例
--创建用户webuser。
CREATE USER webuser PASSWORD 'Bigdata123@';
--授予用户webuser对模式tpcds下视图的所有操作权限。
DO $$DECLARE r record;
BEGIN
FOR r IN SELECT c.relname,n.nspname FROM pg_class c,pg_namespace n
WHERE c.relnamespace = n.oid AND n.nspname = 'tpcds' AND relkind IN ('r','v')
LOOP
END LOOP;
END$$;
--删除用户webuser。
DROP USER webuser CASCADE;
--示例
--创建Data Source对象。
CREATE DATA SOURCE ds_tst1;
--删除Data Source对象。
DROP DATA SOURCE ds_tst1 CASCADE;
DROP DATA SOURCE IF EXISTS ds_tst1 RESTRICT;
CREATE DATA SOURCE,ALTER DATA SOURCE
--示例
--创建目录。
CREATE OR REPLACE DIRECTORY dir as '/tmp/';
--删除外部表。
DROP DIRECTORY dir;
--示例
--示例
--示例
--示例
--创建数据表all_data
CREATE TABLE all_data(id int, role varchar(100), data varchar(100));
--创建行访问控制策略
CREATE ROW LEVEL SECURITY POLICY all_data_rls ON all_data USING(role = CURRENT_USER);
--删除行访问控制策略
DROP ROW LEVEL SECURITY POLICY all_data_rls ON all_data;
--示例
--创建一个名为serial的递增序列,从101开始。
CREATE SEQUENCE serial START 101;
--删除序列。
DROP SEQUENCE serial;
--示例
--删除词典english
DROP TEXT SEARCH DICTIONARY english;

--插入数据。
INSERT INTO tpcds.reason VALUES(51, 'AAAAAAAADDAAAAAA', 'reason 51');
--创建表reason_t1。
CREATE TABLE tpcds.reason_t1 AS TABLE reason;
--为一个INSERT语句创建一个预备语句然后执行它。
PREPARE insert_reason(integer,character(16),character(100)) AS INSERT INTO tpcds.reason_t1
VALUES($1,$2,$3);
EXECUTE insert_reason(52, 'AAAAAAAADDAAAAAA', 'reason 52');
--删除表reason和reason_t1。
DROP TABLE tpcds.reason;
DROP TABLE tpcds.reason_t1;
--示例
--查询当前集群的节点分布状态。
SELECT * FROM pgxc_node;

--查询dn_6001_6002上tpcds.customer_address记录。
EXECUTE DIRECT ON(dn_6001_6002) 'select count(*) from tpcds.customer_address';

--查询tpcds.customer_address所有记录。
SELECT count(*) FROM tpcds.customer_address;
--示例
--创建一个表tpcds.customer_address_p1。
CREATE TABLE tpcds.customer_address_p1 AS TABLE tpcds.customer_address;
--修改explain_perf_mode为normal
SET explain_perf_mode=normal;
--显示表简单查询的执行计划。
EXPLAIN SELECT * FROM tpcds.customer_address_p1;

--以JSON格式输出的执行计划(explain_perf_mode为normal时)。
EXPLAIN(FORMAT JSON) SELECT * FROM tpcds.customer_address_p1;

--如果有一个索引,当使用一个带索引WHERE条件的查询,可能会显示一个不同的计划。
EXPLAIN SELECT * FROM tpcds.customer_address_p1 WHERE ca_address_sk=10000;

--以YAML格式输出的执行计划(explain_perf_mode为normal时)。
EXPLAIN(FORMAT YAML) SELECT * FROM tpcds.customer_address_p1 WHERE ca_address_sk=10000;

--禁止开销估计的执行计划。
EXPLAIN(COSTS FALSE)SELECT * FROM tpcds.customer_address_p1 WHERE ca_address_sk=10000;

--带有聚集函数查询的执行计划。
EXPLAIN SELECT SUM(ca_address_sk) FROM tpcds.customer_address_p1 WHERE ca_address_sk<10000;

--删除表tpcds.customer_address_p1。
DROP TABLE tpcds.customer_address_p1;
--示例
--SELECT语句,用一个游标读取一个表。开始一个事务。
START TRANSACTION;
--建立一个名为cursor1的游标。
CURSOR cursor1 FOR SELECT * FROM tpcds.customer_address ORDER BY 1;
--抓取头3行到游标cursor1里。
FETCH FORWARD 3 FROM cursor1;

--关闭游标并提交事务。
CLOSE cursor1;
--结束一个事务。
END;
--VALUES子句,用一个游标读取VALUES子句中的内容。开始一个事务。
START TRANSACTION;
--建立一个名为cursor2的游标。
CURSOR cursor2 FOR VALUES(1,2),(0,3) ORDER BY 1;
--抓取头2行到游标cursor2里。
FETCH FORWARD 2 FROM cursor2;
--关闭游标并提交事务。
CLOSE cursor2;
--结束一个事务。
END;
--WITH HOLD游标的使用,开启事务。
START TRANSACTION;
--创建一个with hold游标。
DECLARE cursor1 CURSOR WITH HOLD FOR SELECT * FROM tpcds.customer_address ORDER BY 1;
--抓取头2行到游标cursor1里。
FETCH FORWARD 2 FROM cursor1;

--结束事务。
END;
--抓取下一行到游标cursor1里。
FETCH FORWARD 1 FROM cursor1;

--关闭游标。
CLOSE cursor1;
--示例
--示例:将系统权限授权给用户或者角色。
CREATE USER joe PASSWORD 'Bigdata123@';
GRANT ALL PRIVILEGES TO joe;
--示例:将对象权限授权给用户或者角色。
REVOKE ALL PRIVILEGES FROM joe;
GRANT USAGE ON SCHEMA tpcds TO joe;
GRANT ALL PRIVILEGES ON tpcds.reason TO joe;
GRANT select (r_reason_sk,r_reason_id,r_reason_desc),update (r_reason_desc) ON tpcds.reason
TO joe;

GRANT select (r_reason_sk, r_reason_id) ON tpcds.reason TO joe WITH GRANT OPTION;
GRANT create,connect on database postgres TO joe WITH GRANT OPTION;

CREATE ROLE tpcds_manager PASSWORD 'Bigdata123@';
GRANT USAGE,CREATE ON SCHEMA tpcds TO tpcds_manager;
CREATE TABLESPACE tpcds_tbspc RELATIVE LOCATION 'tablespace/tablespace_1';
GRANT ALL ON TABLESPACE tpcds_tbspc TO joe;
--示例:将用户或者角色的权限授权给其他用户或角色。
1.
创建角色manager,将joe的权限授权给manager,并允许该角色将权限授权给其他
人。
CREATE ROLE manager PASSWORD 'Bigdata123@';
GRANT joe TO manager WITH ADMIN OPTION;
2.
创建用户senior_manager,将用户manager的权限授权给该用户。
CREATE ROLE senior_manager PASSWORD 'Bigdata123@';
GRANT manager TO senior_manager;
3.
撤销权限,并清理用户。
REVOKE manager FROM joe;
REVOKE senior_manager FROM manager;
DROP USER manager;
--示例:撤销上述授予的权限,并清理角色和用户。
REVOKE ALL PRIVILEGES ON tpcds.reason FROM joe;
REVOKE ALL PRIVILEGES ON SCHEMA tpcds FROM joe;
REVOKE ALL ON TABLESPACE tpcds_tbspc FROM joe;
DROP TABLESPACE tpcds_tbspc;
REVOKE USAGE,CREATE ON SCHEMA tpcds FROM tpcds_manager;
DROP ROLE tpcds_manager;
DROP ROLE senior_manager;
DROP USER joe CASCADE;
--示例
--创建表tpcds.reason_t2。
CREATE TABLE tpcds.reason_t2
(
r_reason_sk
integer,
r_reason_id
character(16),
r_reason_desc character(100)
);
--向表中插入一条记录。
INSERT INTO tpcds.reason_t2(r_reason_sk, r_reason_id, r_reason_desc) VALUES (1,
'AAAAAAAABAAAAAAA', 'reason1');
--向表中插入一条记录,和上一条语法等效。
INSERT INTO tpcds.reason_t2 VALUES (2, 'AAAAAAAABAAAAAAA', 'reason2');
--向表中插入多条记录。
INSERT INTO tpcds.reason_t2 VALUES (3, 'AAAAAAAACAAAAAAA','reason3'),(4, 'AAAAAAAADAAAAAAA',
'reason4'),(5, 'AAAAAAAAEAAAAAAA','reason5');
--向表中插入tpcds.reason中r_reason_sk小于5的记录。
INSERT INTO tpcds.reason_t2 SELECT * FROM tpcds.reason WHERE r_reason_sk <5;
--删除表tpcds.reason_t2。
DROP TABLE tpcds.reason_t2;
--示例
--向一个外键表上插入数据时,在有主键的表上使用SHARE锁。
START TRANSACTION;
LOCK TABLE tpcds.reason IN SHARE MODE;
SELECT r_reason_desc FROM tpcds.reason WHERE r_reason_sk=5;
COMMIT;
--在执行删除操作时对一个有主键的表进行 SHARE ROW EXCLUSIVE 锁。
CREATE TABLE tpcds.reason_t1 AS TABLE tpcds.reason;
START TRANSACTION;
LOCK TABLE tpcds.reason_t1 IN SHARE ROW EXCLUSIVE MODE;
DELETE FROM tpcds.reason_t1 WHERE r_reason_desc IN(SELECT r_reason_desc FROM tpcds.reason_t1 WHERE
r_reason_sk < 6 );
DELETE FROM tpcds.reason_t1 WHERE r_reason_sk = 7;
COMMIT;
--删除表tpcds.reason_t1。
DROP TABLE tpcds.reason_t1;
--示例
--开始一个事务。
START TRANSACTION;
--定义一个名为cursor1的游标。
CURSOR cursor1 FOR SELECT * FROM tpcds.reason;
--忽略游标cursor1的前3行。
MOVE FORWARD 3 FROM cursor1;
--抓取游标cursor1的前4行。
FETCH 4 FROM cursor1;
--关闭游标。
CLOSE cursor1;
--结束一个事务。
END;
--示例
-- 创建目标表products和源表newproducts,并插入数据
CREATE TABLE products
(
product_id INTEGER,
product_name VARCHAR2(60),
category VARCHAR2(60)
);

CREATE TABLE newproducts
(
product_id INTEGER,
product_name VARCHAR2(60),
category VARCHAR2(60)
);
-- 进行MERGE INTO操作
MERGE INTO products p
USING newproducts np
ON (p.product_id = np.product_id)
WHEN MATCHED THEN
UPDATE SET p.product_name = np.product_name, p.category = np.category WHERE p.product_name !=
'play gym'
WHEN NOT MATCHED THEN
INSERT VALUES (np.product_id, np.product_name, np.category) WHERE np.category = 'books';
MERGE 4
-- 查询更新后的结果
SELECT * FROM products ORDER BY product_id;
-- 删除表
DROP TABLE products;
DROP TABLE newproducts;
CREATE INDEX tpcds_customer_index1 ON tpcds.customer_t1 (c_customer_sk);
INSERT INTO tpcds.customer_t1 SELECT * FROM tpcds.customer WHERE c_customer_sk < 10;
--重建一个单独索引。
REINDEX INDEX tpcds.tpcds_customer_index1;
--重建表tpcds.customer_t1上的所有索引。
REINDEX TABLE tpcds.customer_t1;
--删除tpcds.customer_t1表。
DROP TABLE tpcds.customer_t1;
--示例
--创建一个新表。
CREATE TABLE tpcds.table1(a int);
--开启事务。
START TRANSACTION;
--插入数据。
INSERT INTO tpcds.table1 VALUES (3);
--建立保存点。
SAVEPOINT my_savepoint;
--插入数据。
INSERT INTO tpcds.table1 VALUES (4);
--删除保存点。
RELEASE SAVEPOINT my_savepoint;
--提交事务。
COMMIT;
--查询表的内容,会同时看到3和4。
SELECT * FROM tpcds.table1;
--删除表。
DROP TABLE tpcds.table1;
--示例
--把timezone设为缺省值。
RESET timezone;
--把所有参数设置为缺省值。
RESET ALL;
--示例
--示例
--开启一个事务
START TRANSACTION;
--取消所有更改
ROLLBACK;
--示例
--撤销 my_savepoint 建立之后执行的命令的影响。
START TRANSACTION;
SAVEPOINT my_savepoint;
ROLLBACK TO SAVEPOINT my_savepoint;
--游标位置不受保存点回滚的影响。
DECLARE foo CURSOR FOR SELECT 1 UNION SELECT 2;
SAVEPOINT foo;
FETCH 1 FROM foo;
ROLLBACK TO SAVEPOINT foo;
FETCH 1 FROM foo;
RELEASE SAVEPOINT my_savepoint;
COMMIT;
--示例
--创建一个新表。
CREATE TABLE table1(a int);
--开启事务。
START TRANSACTION;
--插入数据。
INSERT INTO table1 VALUES (1);
--建立保存点。
SAVEPOINT my_savepoint;
--插入数据。
INSERT INTO table1 VALUES (2);
--回滚保存点。
ROLLBACK TO SAVEPOINT my_savepoint;
--插入数据。
INSERT INTO table1 VALUES (3);
--提交事务。
COMMIT;
--查询表的内容,会同时看到1和3,不能看到2,因为2被回滚。
SELECT * FROM table1;
--删除表。
DROP TABLE table1;
--创建一个新表。
CREATE TABLE table2(a int);
--开启事务。
START TRANSACTION;
--插入数据。
INSERT INTO table2 VALUES (3);
--建立保存点。
SAVEPOINT my_savepoint;
--插入数据。
INSERT INTO table2 VALUES (4);
--回滚保存点。
RELEASE SAVEPOINT my_savepoint;
--提交事务。
COMMIT;
--查询表的内容,会同时看到3和4。
SELECT * FROM table2;
--删除表。
DROP TABLE table2;
--示例
--先通过子查询得到一张临时表temp_t,然后查询表temp_t中的所有数据。
WITH temp_t(name,isdba) AS (SELECT usename,usesuper FROM pg_user) SELECT * FROM temp_t;
--查询tpcds.reason表的所有r_reason_sk记录,且去除重复。
SELECT DISTINCT(r_reason_sk) FROM tpcds.reason;
--LIMIT子句--示例:获取表中一条记录。
SELECT * FROM tpcds.reason LIMIT 1;
--查询所有记录,且按字母升序排列。
SELECT r_reason_desc FROM tpcds.reason ORDER BY r_reason_desc;
--通过表别名,从pg_user和pg_user_status这两张表中获取数据。
SELECT a.usename,b.locktime FROM pg_user a,pg_user_status b WHERE a.usesysid=b.roloid;
--FULL JOIN子句--示例:将pg_user和pg_user_status这两张表的数据进行全连接显示,即数据的合集。
SELECT a.usename,b.locktime,a.usesuper FROM pg_user a FULL JOIN pg_user_status b on
a.usesysid=b.roloid;
--GROUP BY子句--示例:根据查询条件过滤,并对结果进行分组。
SELECT r_reason_id, AVG(r_reason_sk) FROM tpcds.reason GROUP BY r_reason_id HAVING
AVG(r_reason_sk) > 25;
--GROUP BY CUBE子句--示例:根据查询条件过滤,并对结果进行分组汇总。
SELECT r_reason_id,AVG(r_reason_sk) FROM tpcds.reason GROUP BY CUBE(r_reason_id,r_reason_sk);
--GROUP BY GROUPING SETS子句--示例:根据查询条件过滤,并对结果进行分组汇总。
SELECT r_reason_id,AVG(r_reason_sk) FROM tpcds.reason GROUP BY GROUPING
SETS((r_reason_id,r_reason_sk),r_reason_sk);
--UNION子句--示例:将表tpcds.reason里r_reason_desc字段中的内容以W开头和以N开头的进行合并。
SELECT r_reason_sk, tpcds.reason.r_reason_desc
FROM tpcds.reason
WHERE tpcds.reason.r_reason_desc LIKE 'W%'
UNION
SELECT r_reason_sk, tpcds.reason.r_reason_desc
FROM tpcds.reason
WHERE tpcds.reason.r_reason_desc LIKE 'N%';
--NLS_SORT子句--示例:中文拼音排序。
SELECT * FROM tpcds.reason ORDER BY NLSSORT( r_reason_desc, 'NLS_SORT = SCHINESE_PINYIN_M');
--不区分大小写排序:
SELECT * FROM tpcds.reason ORDER BY NLSSORT( r_reason_desc, 'NLS_SORT = generic_m_ci');
--创建分区表tpcds.reason_p
CREATE TABLE tpcds.reason_p
(
r_reason_sk integer,
r_reason_id character(16),
r_reason_desc character(100)
)
PARTITION BY RANGE (r_reason_sk)
(
partition P_05_BEFORE values less than (05),
partition P_15 values less than (15),
partition P_25 values less than (25),
partition P_35 values less than (35),
partition P_45_AFTER values less than (MAXVALUE)
)
;
--插入数据。
INSERT INTO tpcds.reason_p values(3,'AAAAAAAABAAAAAAA','reason 1'),(10,'AAAAAAAABAAAAAAA','reason
2'),(4,'AAAAAAAABAAAAAAA','reason 3'),(10,'AAAAAAAABAAAAAAA','reason 4'),
(10,'AAAAAAAABAAAAAAA','reason 5'),(20,'AAAAAAAACAAAAAAA','reason 6'),
(30,'AAAAAAAACAAAAAAA','reason 7');
--PARTITION子句--示例:从tpcds.reason_p的表分区P_05_BEFORE中获取数据。
SELECT * FROM tpcds.reason_p PARTITION (P_05_BEFORE);
r_reason_id
r_reason_desc
--GROUP BY子句--示例:按r_reason_id分组统计tpcds.reason_p表中的记录数。
SELECT COUNT(*),r_reason_id FROM tpcds.reason_p GROUP BY r_reason_id;
r_reason_id
--GROUP BY CUBE子句--示例:根据查询条件过滤,并对查询结果分组汇总。
SELECT * FROM tpcds.reason GROUP BY CUBE (r_reason_id,r_reason_sk,r_reason_desc);
--GROUP BY GROUPING SETS子句--示例:根据查询条件过滤,并对查询结果分组汇总。
SELECT * FROM tpcds.reason GROUP BY GROUPING SETS ((r_reason_id,r_reason_sk),r_reason_desc);
--HAVING子句--示例:按r_reason_id分组统计tpcds.reason_p表中的记录,并只显示r_reason_id个数大于2的信
息。
SELECT COUNT(*) c,r_reason_id FROM tpcds.reason_p GROUP BY r_reason_id HAVING c>2;
r_reason_id
--IN子句--示例:按r_reason_id分组统计tpcds.reason_p表中的r_reason_id个数,并只显示r_reason_id值为
AAAAAAAABAAAAAAA或AAAAAAAADAAAAAAA的个数。
SELECT COUNT(*),r_reason_id FROM tpcds.reason_p GROUP BY r_reason_id HAVING r_reason_id
IN('AAAAAAAABAAAAAAA','AAAAAAAADAAAAAAA');
r_reason_id
--INTERSECT子句--示例:查询r_reason_id等于AAAAAAAABAAAAAAA,并且r_reason_sk小于5的信息。
SELECT * FROM tpcds.reason_p WHERE r_reason_id='AAAAAAAABAAAAAAA' INTERSECT SELECT * FROM
tpcds.reason_p WHERE r_reason_sk<5;
r_reason_id
r_reason_desc
--EXCEPT子句--示例:查询r_reason_id等于AAAAAAAABAAAAAAA,并且去除r_reason_sk小于4的信息。
SELECT * FROM tpcds.reason_p WHERE r_reason_id='AAAAAAAABAAAAAAA' EXCEPT SELECT * FROM
tpcds.reason_p WHERE r_reason_sk<4;
r_reason_id
r_reason_desc
--通过在where子句中指定"(+)"来实现左连接。
select t1.sr_item_sk ,t2.c_customer_id from store_returns t1, customer t2 where t1.sr_customer_sk
= t2.c_customer_sk(+)
order by 1 desc limit 1;
--通过在where子句中指定"(+)"来实现右连接。
select t1.sr_item_sk ,t2.c_customer_id from store_returns t1, customer t2 where
t1.sr_customer_sk(+) = t2.c_customer_sk
order by 1 desc limit 1;
--通过在where子句中指定"(+)"来实现左连接,并且增加连接条件。
select t1.sr_item_sk ,t2.c_customer_id from store_returns t1, customer t2 where t1.sr_customer_sk
= t2.c_customer_sk(+) and t2.c_customer_sk(+) < 1 order by 1 limit 1;
--不支持在where子句中指定"(+)"的同时使用内层嵌套AND/OR的表达式。
select t1.sr_item_sk ,t2.c_customer_id from store_returns t1, customer t2 where
not(t1.sr_customer_sk = t2.c_customer_sk(+) and t2.c_customer_sk(+) < 1);
--where子句在不支持表达式宏指定"(+)"会报错。
select t1.sr_item_sk ,t2.c_customer_id from store_returns t1, customer t2 where
(t1.sr_customer_sk = t2.c_customer_sk(+))::bool;
ERROR: Operator "(+)" can only be used in common expression.
--where子句在表达式的两边都指定"(+)"会报错。
select t1.sr_item_sk ,t2.c_customer_id from store_returns t1, customer t2 where
t1.sr_customer_sk(+) = t2.c_customer_sk(+);
--删除表。
DROP TABLE tpcds.reason_p;
--示例
--将tpcds.reason表中r_reason_sk小于5的值加入到新建表中。
SELECT * INTO tpcds.reason_t1 FROM tpcds.reason WHERE r_reason_sk < 5;
INSERT 0 6
--删除tpcds.reason_t1表。
DROP TABLE tpcds.reason_t1;
--示例
--设置模式搜索路径。
SET search_path TO tpcds, public;
--把日期时间风格设置为传统的 POSTGRES 风格(日在月前)。
SET datestyle TO postgres;
--示例
--设置所有约束在事务提交时检查。
SET CONSTRAINTS ALL DEFERRED;
--示例
--创建角色paul。
CREATE ROLE paul IDENTIFIED BY 'Bigdata123@';
--设置当前用户为paul。
SET ROLE paul PASSWORD 'Bigdata123@';
--查看当前会话用户,当前用户。
SELECT SESSION_USER, CURRENT_USER;
--重置当前用户。
RESET role;
--删除用户。
DROP USER paul;
--示例
--创建角色paul。
CREATE ROLE paul IDENTIFIED BY 'Bigdata123@';
--设置当前用户为paul。
SET SESSION AUTHORIZATION paul password 'Bigdata123@';
--查看当前会话用户,当前用户。
SELECT SESSION_USER, CURRENT_USER;
--重置当前用户。
RESET SESSION AUTHORIZATION;
--删除用户。
DROP USER paul;
--示例
--开启一个事务,设置事务的隔离级别为READ COMMITTED,访问模式为READ ONLY。
START TRANSACTION;
SET LOCAL TRANSACTION ISOLATION LEVEL READ COMMITTED READ ONLY;
COMMIT;
--示例
--显示 timezone 参数值。
SHOW timezone;
--显示所有参数。
SHOW ALL;
--示例
--以默认方式启动事务。
START TRANSACTION;
SELECT * FROM tpcds.reason;
END;
--以默认方式启动事务。
BEGIN;
SELECT * FROM tpcds.reason;
END;
--以隔离级别为READ COMMITTED,读/写方式启动事务。
START TRANSACTION ISOLATION LEVEL READ COMMITTED READ WRITE;
SELECT * FROM tpcds.reason;
COMMIT;
--示例
--创建表。
CREATE TABLE tpcds.reason_t1 AS TABLE tpcds.reason;
--清空表tpcds.reason_t1。
TRUNCATE TABLE tpcds.reason_t1;
--删除表。
DROP TABLE tpcds.reason_t1;
--创建分区表。
CREATE TABLE tpcds.reason_p
(
r_reason_sk integer,
r_reason_id character(16),
r_reason_desc character(100)
)PARTITION BY RANGE (r_reason_sk)
(
partition p_05_before values less than (05),
partition p_15 values less than (15),
partition p_25 values less than (25),
partition p_35 values less than (35),
partition p_45_after values less than (MAXVALUE)
);
--插入数据。
INSERT INTO tpcds.reason_p SELECT * FROM tpcds.reason;
--清空分区p_05_before。
ALTER TABLE tpcds.reason_p TRUNCATE PARTITION p_05_before;
--清空分区p_15。
ALTER TABLE tpcds.reason_p TRUNCATE PARTITION for (13);
--清空分区表。
TRUNCATE TABLE tpcds.reason_p;
--删除表。
DROP TABLE tpcds.reason_p;
--示例
--创建表student1。
CREATE TABLE student1
(
stuno
int,
classno
int
)
DISTRIBUTE BY hash(stuno);
--插入数据。
INSERT INTO student1 VALUES(1,1);
INSERT INTO student1 VALUES(2,2);
INSERT INTO student1 VALUES(3,3);
--查看数据。
SELECT * FROM student1;
--直接更新所有记录的值。
UPDATE student1 SET classno = classno*2;
--查看数据。
SELECT * FROM student1;
--删除表。
DROP TABLE student1;
--示例
--在表tpcds.reason上创建索引
CREATE UNIQUE INDEX ds_reason_index1 ON tpcds.reason(r_reason_sk);
--对带索引的表tpcds.reason执行VACUUM操作。
VACUUM (VERBOSE, ANALYZE) tpcds.reason;
--删除索引
DROP INDEX ds_reason_index1 CASCADE;
DROP TABLE tpcds.reason;

CREATE OR REPLACE FUNCTION "char_to_number"("char_in_1" varchar)
  RETURNS "pg_catalog"."numeric" AS $BODY$ declare   retValue numeric; begin   retValue := ascii(char_in_1);   if retValue <= 57 and retValue >= 48 then    retValue := retValue - 48;   elsif retValue < 73 and retValue >= 65 then    retValue := retValue - 55;   elsif retValue < 79 and retValue >= 74 then    retValue := retValue - 56;   elsif retValue < 83 and retValue >= 80 then    retValue := retValue - 57;   elsif retValue < 86 and retValue >= 84 then    retValue := retValue - 58;   elsif retValue < 90 and retValue >= 87 then    retValue := retValue - 59;   else    return 0;   end if;   return retValue; end; $BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;

CREATE OR REPLACE FUNCTION "instr"("string" varchar, "string_to_search" varchar, "beg_index" int4)
  RETURNS "pg_catalog"."int4" AS $BODY$        
DECLARE 
  pos integer NOT NULL DEFAULT 0;
  temp_str  varchar;
  beg       integer;
  length    integer;
  ss_length integer;
BEGIN
  IF beg_index > 0 THEN
    temp_str := substring(string FROM beg_index);
    pos      := position(string_to_search IN temp_str);
  
    IF pos = 0 THEN
      RETURN 0;
    ELSE
      RETURN pos + beg_index - 1;
    END IF;
  ELSIF beg_index < 0 THEN
    ss_length := char_length(string_to_search);
    length    := char_length(string);
    beg       := length + beg_index - ss_length + 2;
    WHILE beg > 0 LOOP
      temp_str := substring(string FROM beg FOR ss_length);
      pos      := position(string_to_search IN temp_str);
      IF pos > 0 THEN
        RETURN beg;
      END IF;
      beg := beg - 1;
    END LOOP;
    RETURN 0;
  ELSE
    RETURN 0;
  END IF;
END;
$BODY$
  LANGUAGE 'plpgsql' IMMUTABLE STRICT  COST 100
;

CREATE OR REPLACE FUNCTION "instr"("string" varchar, "string_to_search" varchar, "beg_index" int4, "occur_index" int4)
  RETURNS "pg_catalog"."int4" AS $BODY$           
DECLARE 
  pos integer NOT NULL DEFAULT 0;
  occur_number integer NOT NULL DEFAULT 0;
  temp_str     varchar;
  beg          integer;
  i            integer;
  length       integer;
  ss_length    integer;
BEGIN
  IF beg_index > 0 THEN
    beg      := beg_index;
    temp_str := substring(string FROM beg_index);
    FOR i IN 1 .. occur_index LOOP
      pos := position(string_to_search IN temp_str);
      IF i = 1 THEN
        beg := beg + pos - 1;
      ELSE
        beg := beg + pos;
      END IF;
      temp_str := substring(string FROM beg + 1);
    END LOOP;
  
    IF pos = 0 THEN
      RETURN 0;
    ELSE
      RETURN beg;
    END IF;
  ELSIF beg_index < 0 THEN
    ss_length := char_length(string_to_search);
    length    := char_length(string);
    beg       := length + beg_index - ss_length + 2;
    WHILE beg > 0 LOOP
      temp_str := substring(string FROM beg FOR ss_length);
      pos      := position(string_to_search IN temp_str);
      IF pos > 0 THEN
        occur_number := occur_number + 1;
        IF occur_number = occur_index THEN
          RETURN beg;
        END IF;
      END IF;
      beg := beg - 1;
    END LOOP;
    RETURN 0;
  ELSE
    RETURN 0;
  END IF;
END;
$BODY$
  LANGUAGE 'plpgsql' IMMUTABLE STRICT  COST 100
;

CREATE OR REPLACE FUNCTION "instr"(varchar, varchar)
  RETURNS "pg_catalog"."int4" AS $BODY$ 
DECLARE 
  pos integer;
BEGIN
  pos := instr($1, $2, 1);
  RETURN pos;
END;
$BODY$
  LANGUAGE 'plpgsql' IMMUTABLE STRICT  COST 100
;

CREATE OR REPLACE FUNCTION "mask_address_shadow_city_name"("a_in_1" varchar)
  RETURNS "pg_catalog"."varchar" AS $BODY$
DECLARE
  v_in_1         VARCHAR;
  v_v1           VARCHAR;
  v_v1_tmp       VARCHAR;
  Li_oneCityMark INT := 0;
BEGIN
  v_in_1 := a_in_1;
  v_v1   := '北京市,天津市,吉林市,重庆市,上海市,醴陵市,蛟河市,耒阳市,滕州市,桦甸市,珲春市,濮阳市,漯河市,溧阳市,涿州市,' ||
            '浏阳市,洮南市,泸州市,汩罗市,沅江市,阆中市,衢州市,嵊州市,岑溪市,藁城市,荥阳市,邳州市,邛崃市,讷河市,亳州市,兖州市,' ||
            '儋州市,偃师市,遵义市,遵化市,邹城市,自贡市,淄博市,资阳市,资兴市,庄河市,驻马店市,诸暨市,诸城市,株洲市,珠海市,周口市,' ||
            '舟山市,钟祥市,中山市,枝江市,枝城市,郑州市,镇江市,肇庆市,肇东市,昭通市,招远市,张掖市,张家口市,张家界市,张家港市,漳州市,' ||
            '漳平市,章丘市,樟树市,湛江市,扎兰屯市,增城市,枣庄市,枣阳市,运城市,云浮市,岳阳市,原平市,玉溪市,玉门市,玉林市,禹州市,禹城市,' ||
            '余姚市,余杭市,榆树市,榆林市,榆次市,永州市,永康市,永济市,永川市,永城市,永安市,营口市,应城市,鹰潭市,英德市,银川市,益阳市,义乌市,' ||
            '义马市,宜州市,宜兴市,宜春市,宜城市,宜昌市,宜宾市,仪征市,伊宁市,伊春市,阳泉市,阳江市,阳春市,扬州市,扬中市,延吉市,延安市,盐城市,烟台市,' ||
            '雅安市,牙克石市,宣州市,宣威市,许昌市,徐州市,邢台市,兴义市,兴平市,兴宁市,兴化市,兴城市,信宜市,信阳市,忻州市,新郑市,新余市,新沂市,新乡市,' ||
            '新泰市,新民市,新密市,新乐市,新会市,辛集市,孝义市,孝感市,萧山市,项城市,湘乡市,湘潭市,襄樊市,咸阳市,咸宁市,仙桃市,厦门市,锡山市,锡林浩特市,' ||
            '西宁市,西峰市,西昌市,西安市,舞钢市,五大连池市,五常市,武夷山市,武穴市,武威市,武进市,武汉市,武冈市,武安市,吴忠市,吴县市,吴江市,吴川市,梧州市,' ||
            '芜湖市,无锡市,乌苏市,乌鲁木齐市,乌兰浩特市,乌海市,文登市,文昌市,温州市,温岭市,卫辉市,渭南市,潍坊市,威海市,万源市,万宁市,瓦房店市,吐鲁番市,图们市,' ||
            '铜仁市,铜陵市,铜川市,同江市,桐乡市,桐城市,通州市,通什市,通辽市,通化市,铁岭市,铁力市,铁法市,天水市,天门市,天长市,唐山市,太原市,太仓市,泰州市,泰兴市,' ||
            '泰安市,台州市,台山市,塔城市,遂宁市,绥化市,绥芬河市,随州市,宿州市,宿迁市,苏州市,松滋市,松原市,四平市,四会市,思茅市,朔州市,顺德市,双鸭山市,双辽市,双城市,' ||
            '舒兰市,寿光市,什邡市,石嘴山市,石首市,石狮市,石家庄市,十堰市,沈阳市,深圳市,深州市,绍兴市,邵阳市,邵武市,韶山市,韶关市,尚志市,上虞市,上饶市,商州市,商丘市,' ||
            '汕尾市,汕头市,沙河市,三亚市,三水市,三明市,三门峡市,三河市,瑞丽市,瑞金市,瑞昌市,瑞安市,汝州市,乳山市,如皋市,荣成市,日照市,日喀则市,任丘市,仁怀市,泉州市,曲靖市,' ||
            '曲阜市,琼山市,琼海市,清镇市,清远市,青州市,青铜峡市,青岛市,沁阳市,秦皇岛市,钦州市,潜江市,迁安市,启东市,齐齐哈尔市,七台河市,栖霞市,普宁市,普兰店市,莆田市,凭祥市,' ||
            '平凉市,平湖市,平度市,平顶山市,萍乡市,蓬莱市,彭州市,磐石市,盘锦市,攀枝花市,宁国市,宁德市,宁波市,宁安市,内江市,南阳市,南雄市,南通市,南平市,南宁市,南康市,南京市,南海市,' ||
            '南宫市,南川市,南充市,南昌市,南安市,穆棱市,牡丹江市,明光市,绵竹市,绵阳市,密山市,米泉市,孟州市,梅州市,梅河口市,茂名市,满洲里市,马鞍山市,麻城市,洛阳市,罗定市,陆丰市,' ||
            '潞西市,潞城市,鹿泉市,娄底市,龙岩市,龙泉市,龙口市,龙井市,龙海市,六盘水市,六安市,柳州市,灵武市,灵宝市,凌源市,凌海市,临沂市,临湘市,临夏市,临清市,临江市,临河市,临海市,' ||
            '临汾市,临川市,临安市,林州市,辽源市,辽阳市,聊城市,涟源市,廉江市,连州市,连云港市,利川市,丽水市,离石市,冷水江市,雷州市,乐山市,乐清市,乐平市,乐陵市,乐昌市,老河口市,廊坊市,' ||
            '兰州市,兰溪市,莱州市,莱阳市,莱西市,莱芜市,昆山市,昆明市,奎屯市,库尔勒市,克拉玛依市,凯里市,开远市,开原市,开平市,开封市,喀什市,句容市,酒泉市,九台市,九江市,靖江市,景洪市,' ||
            '景德镇市,井冈山市,荆州市,荆门市,晋州市,晋江市,晋城市,锦州市,津市市,金坛市,金华市,金昌市,介休市,界首市,揭阳市,胶州市,胶南市,焦作市,江油市,江阴市,江山市,江门市,江津市,江都市,' ||
            '姜堰市,建瓯市,建阳市,建德市,简阳市,佳木斯市,嘉峪关市,嘉兴市,济源市,济宁市,济南市,冀州市,即墨市,集宁市,集安市,吉首市,吉安市,鸡西市,霍州市,霍林郭勒市,惠州市,惠阳市,辉县市,黄骅市,' ||
            '黄石市,黄山市,黄冈市,淮阴市,淮南市,淮北市,淮安市,怀化市,化州市,华蓥市,华阴市,花都市,虎林市,湖州市,葫芦岛市,呼和浩特市,侯马市,洪江市,洪湖市,衡阳市,衡水市,黑河市,贺州市,鹤山市,' ||
            '鹤岗市,鹤壁市,河源市,河津市,河间市,河池市,合作市,合山市,合肥市,合川市,和田市,和龙市,菏泽市,杭州市,汉中市,汉川市,韩城市,邯郸市,海阳市,海宁市,海门市,海伦市,海林市,海拉尔市,海口市,' ||
            '海城市,哈密市,哈尔滨市,贵阳市,贵溪市,贵港市,贵池市,桂平市,桂林市,广州市,广元市,广水市,广汉市,古交市,巩义市,公主岭市,根河市,个旧市,格尔木市,高州市,高邮市,高要市,高平市,高明市,高密市,' ||
            '高碑店市,高安市,赣州市,盖州市,富阳市,富锦市,阜阳市,阜新市,阜康市,抚顺市,福州市,福泉市,福清市,福鼎市,福安市,佛山市,凤城市,奉化市,丰镇市,丰南市,丰城市,汾阳市,肥城市,防城港市,番禺市,' ||
            '二连浩特市,恩施市,恩平市,鄂州市,额尔古纳市,峨眉山市,敦煌市,敦化市,都匀市,都江堰市,东莞市,东营市,东阳市,东兴市,东台市,东胜市,东港市,东方市,定州市,邓州市,登封市,灯塔市,德州市,德阳市,' ||
            '德兴市,德令哈市,德惠市,当阳市,丹阳市,丹江口市,丹东市,大冶市,大同市,大石桥市,大庆市,大连市,大理市,大丰市,大安市,达州市,从化市,慈溪市,楚雄市,滁州市,崇州市,赤水市,赤峰市,承德市,澄海市,' ||
            '成都市,郴州市,巢湖市,潮州市,潮阳市,朝阳市,长治市,长沙市,长乐市,长葛市,长春市,常州市,常熟市,常宁市,常德市,昌邑市,昌吉市,沧州市,泊头市,博乐市,滨州市,毕节市,本溪市,北票市,北宁市,北流市,' ||
            '北海市,北安市,宝鸡市,保山市,保定市,包头市,蚌埠市,百色市,白银市,白山市,白城市,霸州市,巴中市,安阳市,安顺市,安丘市,安庆市,安宁市,安陆市,安康市,安国市,安达市,鞍山市,阿图什市,阿勒泰市,阿克苏市,阿城市,拉萨市,' ||
            '北京,天津,吉林,重庆,上海,醴陵,蛟河,耒阳,滕州,桦甸,珲春,濮阳,漯河,溧阳,涿州,浏阳,洮南,泸州,汩罗,沅江,阆中,衢州,嵊州,岑溪,藁城,荥阳,邳州,' ||
            '邛崃,讷河,亳州,兖州,儋州,偃师,遵义,遵化,邹城,自贡,淄博,资阳,资兴,庄河,驻马店,诸暨,诸城,株洲,珠海,周口,舟山,钟祥,中山,枝江,枝城,郑州,镇江,' ||
            '肇庆,肇东,昭通,招远,张掖,张家口,张家界,张家港,漳州,漳平,章丘,樟树,湛江,扎兰屯,增城,枣庄,枣阳,运城,云浮,岳阳,原平,玉溪,玉门,玉林,禹州,禹城,' ||
            '余姚,余杭,榆树,榆林,榆次,永州,永康,永济,永川,永城,永安,营口,应城,鹰潭,英德,银川,益阳,义乌,义马,宜州,宜兴,宜春,宜城,宜昌,宜宾,仪征,伊宁,伊春,' ||
            '阳泉,阳江,阳春,扬州,扬中,延吉,延安,盐城,烟台,雅安,牙克石,宣州,宣威,许昌,徐州,邢台,兴义,兴平,兴宁,兴化,兴城,信宜,信阳,忻州,新郑,新余,新沂,新乡,' ||
            '新泰,新民,新密,新乐,新会,辛集,孝义,孝感,萧山,项城,湘乡,湘潭,襄樊,咸阳,咸宁,仙桃,厦门,锡山,锡林浩特,西宁,西峰,西昌,西安,舞钢,五大连池,五常,' ||
            '武夷山,武穴,武威,武进,武汉,武冈,武安,吴忠,吴县,吴江,吴川,梧州,芜湖,无锡,乌苏,乌鲁木齐,乌兰浩特,乌海,文登,文昌,温州,温岭,卫辉,渭南,潍坊,威海,' ||
            '万源,万宁,瓦房店,吐鲁番,图们,铜仁,铜陵,铜川,同江,桐乡,桐城,通州,通什,通辽,通化,铁岭,铁力,铁法,天水,天门,天长,唐山,太原,太仓,泰州,泰兴,泰安,台州,' ||
            '台山,塔城,遂宁,绥化,绥芬河,随州,宿州,宿迁,苏州,松滋,松原,四平,四会,思茅,朔州,顺德,双鸭山,双辽,双城,舒兰,寿光,什邡,石嘴山,石首,石狮,石家庄,十堰,沈阳,' ||
            '深圳,深州,绍兴,邵阳,邵武,韶山,韶关,尚志,上虞,上饶,商州,商丘,汕尾,汕头,沙河,三亚,三水,三明,三门峡,三河,瑞丽,瑞金,瑞昌,瑞安,汝州,乳山,如皋,荣成,日照,' ||
            '日喀则,任丘,仁怀,泉州,曲靖,曲阜,琼山,琼海,清镇,清远,青州,青铜峡,青岛,沁阳,秦皇岛,钦州,潜江,迁安,启东,齐齐哈尔,七台河,栖霞,普宁,普兰店,莆田,凭祥,平凉,' ||
            '平湖,平度,平顶山,萍乡,蓬莱,彭州,磐石,盘锦,攀枝花,宁国,宁德,宁波,宁安,内江,南阳,南雄,南通,南平,南宁,南康,南京,南海,南宫,南川,南充,南昌,南安,穆棱,牡丹江,' ||
            '明光,绵竹,绵阳,密山,米泉,孟州,梅州,梅河口,茂名,满洲里,马鞍山,麻城,洛阳,罗定,陆丰,潞西,潞城,鹿泉,娄底,龙岩,龙泉,龙口,龙井,龙海,六盘水,六安,柳州,灵武,灵宝,' ||
            '凌源,凌海,临沂,临湘,临夏,临清,临江,临河,临海,临汾,临川,临安,林州,辽源,辽阳,聊城,涟源,廉江,连州,连云港,利川,丽水,离石,冷水江,雷州,乐山,乐清,乐平,乐陵,乐昌,' ||
            '老河口,廊坊,兰州,兰溪,莱州,莱阳,莱西,莱芜,昆山,昆明,奎屯,库尔勒,克拉玛依,凯里,开远,开原,开平,开封,喀什,句容,酒泉,九台,九江,靖江,景洪,景德镇,井冈山,荆州,荆门,' ||
            '晋州,晋江,晋城,锦州,津市,金坛,金华,金昌,介休,界首,揭阳,胶州,胶南,焦作,江油,江阴,江山,江门,江津,江都,姜堰,建瓯,建阳,建德,简阳,佳木斯,嘉峪关,嘉兴,济源,济宁,济南,' ||
            '冀州,即墨,集宁,集安,吉首,吉安,鸡西,霍州,霍林郭勒,惠州,惠阳,辉县,黄骅,黄石,黄山,黄冈,淮阴,淮南,淮北,淮安,怀化,化州,华蓥,华阴,花都,虎林,湖州,葫芦岛,呼和浩特,侯马,' ||
            '洪江,洪湖,衡阳,衡水,黑河,贺州,鹤山,鹤岗,鹤壁,河源,河津,河间,河池,合作,合山,合肥,合川,和田,和龙,菏泽,杭州,汉中,汉川,韩城,邯郸,海阳,海宁,海门,海伦,海林,海拉尔,海口,' ||
            '海城,哈密,哈尔滨,贵阳,贵溪,贵港,贵池,桂平,桂林,广州,广元,广水,广汉,古交,巩义,公主岭,根河,个旧,格尔木,高州,高邮,高要,高平,高明,高密,高碑店,高安,赣州,盖州,富阳,富锦,' ||
            '阜阳,阜新,阜康,抚顺,福州,福泉,福清,福鼎,福安,佛山,凤城,奉化,丰镇,丰南,丰城,汾阳,肥城,防城港,番禺,二连浩特,恩施,恩平,鄂州,额尔古纳,峨眉山,敦煌,敦化,都匀,都江堰,东莞,' ||
            '东营,东阳,东兴,东台,东胜,东港,东方,定州,邓州,登封,灯塔,德州,德阳,德兴,德令哈,德惠,当阳,丹阳,丹江口,丹东,大冶,大同,大石桥,大庆,大连,大理,大丰,大安,达州,从化,慈溪,楚雄,' ||
            '滁州,崇州,赤水,赤峰,承德,澄海,成都,郴州,巢湖,潮州,潮阳,朝阳,长治,长沙,长乐,长葛,长春,常州,常熟,常宁,常德,昌邑,昌吉,沧州,泊头,博乐,滨州,毕节,本溪,北票,北宁,北流,北海,' ||
            '北安,宝鸡,保山,保定,包头,蚌埠,百色,白银,白山,白城,霸州,巴中,安阳,安顺,安丘,安庆,安宁,安陆,安康,安国,安达,鞍山,阿图什,阿勒泰,阿克苏,阿城,纽约市,拉萨,';
  FOR i IN 1 .. length(v_v1) - length(REPLACE(v_v1, ',', '')) LOOP
    v_v1_tmp := substr(v_v1, 1, instr(v_v1, ',') - 1);
    v_v1     := substr(v_v1, instr(v_v1, ',') + 1);
    IF instr(v_in_1, v_v1_tmp) > 0 AND length(v_v1_tmp) > 0 AND
       Li_oneCityMark = 0 THEN
      v_in_1         := REPLACE(v_in_1, v_v1_tmp, '***');
      Li_oneCityMark := 1;
    END IF;
  END LOOP;
  RETURN v_in_1;
END;
$BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;

CREATE OR REPLACE FUNCTION "mask_address_shadow_middle"("a_in_1" varchar)
  RETURNS "pg_catalog"."varchar" AS $BODY$-- 中文地址 
-- TODO not implement
DECLARE
   v_n_length int;
 BEGIN
   v_n_length := coalesce(length(a_in_1), 0);
   if v_n_length > 36 then -- 大于12个字
		--raise '%', v_n_length;
    RETURN substr(a_in_1, 1, 12) || rpad('*', v_n_length - 12, '*') || right(a_in_1,12);
   elsif v_n_length >= 27 and v_n_length <= 36 then
		--raise '%', v_n_length;
    RETURN substr(a_in_1, 1, 9) || rpad('*', v_n_length - 9, '*') || right(a_in_1,9);
   elsif v_n_length >= 15 and v_n_length <= 24 then
		--raise '%', v_n_length;
    RETURN substr(a_in_1, 1, 6) || rpad('*', v_n_length - 6, '*') || right(a_in_1,6);
	 else
		--raise '%', v_n_length;
    RETURN substr(a_in_1, 1, 3) || rpad('*', v_n_length - 3, '*') || right(a_in_1,3);
   end if;
 END; $BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;

CREATE OR REPLACE FUNCTION "mask_address_shadow_number"("a_in_1" varchar)
  RETURNS "pg_catalog"."varchar" AS $BODY$ DECLARE   v_in_1   VARCHAR;   v_v1    VARCHAR;   v_v1_tmp VARCHAR; BEGIN   v_in_1 := a_in_1;   v_v1   := '0123456789' || '〇一二三四五六七八九十百千万亿' || '零壹贰叁肆伍陆柒捌玖拾佰仟';   for i in 1 .. length(v_v1) loop    v_v1_tmp := substr(v_v1, i, 1);    if instr(v_in_1, v_v1_tmp) > 0 and length(v_v1_tmp) > 0 then    v_in_1 := replace(v_in_1, v_v1_tmp, '*');    end if;   end loop;   return v_in_1; end; $BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;

CREATE OR REPLACE FUNCTION "mask_bank_card_random"("a_in_1" varchar)
  RETURNS "pg_catalog"."varchar" AS $BODY$ BEGIN   return case length(a_in_1)    when 19 then to_char(floor(random()*(9999999999999999999.999999-1000000000000000000)+1000000000000000000),'FM9999999999999999999')    when 18 then to_char(floor(random()*(999999999999999999.999999-100000000000000000)+100000000000000000),'FM999999999999999999')    when 17 then to_char(floor(random()*(99999999999999999.999999-10000000000000000)+10000000000000000),'FM99999999999999999')    when 16 then to_char(floor(random()*(9999999999999999.999999-1000000000000000)+1000000000000000),'FM9999999999999999')    when 15 then to_char(floor(random()*(999999999999999.999999-100000000000000)+100000000000000),'FM999999999999999')    when 14 then to_char(floor(random()*(99999999999999.999999-10000000000000)+10000000000000),'FM99999999999999')    else to_char(floor(random()*(9999999999999.999999-1000000000000)+1000000000000),'FM9999999999999') end; END; $BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;

CREATE OR REPLACE FUNCTION "mask_bank_card_shadow_bank_no"("a_in_1" varchar)
  RETURNS "pg_catalog"."varchar" AS $BODY$ BEGIN   RETURN rpad('*', least(6, coalesce(length(a_in_1),0)), '*') || substr(a_in_1, 7); END; $BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;

CREATE OR REPLACE FUNCTION "mask_bank_card_shadow_middle"("a_in_1" varchar)
  RETURNS "pg_catalog"."varchar" AS $BODY$ BEGIN   RETURN substr(a_in_1, 1, 6) || lpad('*', length(a_in_1) - 10, '*') || right(a_in_1, 4); END; $BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;

CREATE OR REPLACE FUNCTION "mask_calculate_checksum"("a_in_1" varchar)
  RETURNS "pg_catalog"."varchar" AS $BODY$ DECLARE   v_length    numeric;   v_sum    numeric;   sub_char    varchar;   v_remainder numeric;   temp_value  numeric;   result_char varchar;   my_arr INT[]; BEGIN   my_arr   := array[1,3,9,27,19,26,16,17,20,29,25,13,8,24,10,30,28];   v_length := coalesce(length(a_in_1), 0);   v_sum    := 0;   for i in 1 .. v_length loop    sub_char := substr(a_in_1, i, 1);    v_sum    := v_sum + (CHAR_TO_NUMBER(sub_char) * my_arr[i]);   end loop;   v_remainder := mod(v_sum, 31);   temp_value  := 31 - v_remainder;   if temp_value = 31 then    temp_value := 0;   end if;   result_char := substr('0123456789ABCDEFGHJKLMNPQRTUWXY',(temp_value + 1)::int,1);   return result_char; end; $BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;

CREATE OR REPLACE FUNCTION "mask_campany_name_random"("a_in_1" varchar)
  RETURNS "pg_catalog"."varchar" AS $BODY$ DECLARE   v_return VARCHAR;   my_arr   varchar[]; BEGIN   my_arr   := array['深圳中恒华发股份有限公司',    '深圳长城开发科技股份有限公司',    '招商局地产控股股份有限公司',    '国药集团一致药业股份有限公司',    '广东盛润集团股份有限公司',    '中粮地产(集团)股份有限公司',    '深圳市桑达实业股份有限公司',    '华联控股股份有限公司',    '金谷源控股股份有限公司',    '沈阳机床股份有限公司',    '无锡小天鹅股份有限公司',    '丽珠医药集团股份有限公司',    '重庆渝开发股份有限公司',    '江苏四环生物股份有限公司',    '南京红太阳股份有限公司',    '力合股份有限公司',    '广东电力发展股份有限公司',    '云南白药集团股份有限公司'];   v_return := my_arr[floor(random()*18+1)];   return v_return; end; $BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;

CREATE OR REPLACE FUNCTION "mask_campany_name_shadow_mid"("a_in_1" varchar)
  RETURNS "pg_catalog"."varchar" AS $BODY$-- 中文地址 
-- TODO not implement
DECLARE
   v_n_length int;
 BEGIN
   v_n_length := coalesce(length(a_in_1), 0);
   if v_n_length > 36 then -- 大于12个字
		--raise '%', v_n_length;
    RETURN substr(a_in_1, 1, 12) || rpad('*', v_n_length - 12, '*') || right(a_in_1,12);
   elsif v_n_length >= 27 and v_n_length <= 36 then
		--raise '%', v_n_length;
    RETURN substr(a_in_1, 1, 9) || rpad('*', v_n_length - 9, '*') || right(a_in_1,9);
   elsif v_n_length >= 15 and v_n_length <= 24 then
		--raise '%', v_n_length;
    RETURN substr(a_in_1, 1, 6) || rpad('*', v_n_length - 6, '*') || right(a_in_1,6);
	 else
		--raise '%', v_n_length;
    RETURN substr(a_in_1, 1, 3) || rpad('*', v_n_length - 3, '*') || right(a_in_1,3);
   end if;
 END; $BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;

CREATE OR REPLACE FUNCTION "mask_cellphone_number_areacode"("a_in_1" varchar)
  RETURNS "pg_catalog"."varchar" AS $BODY$ BEGIN   RETURN substr(a_in_1,1,3)||rpad('*',least(4,coalesce(length(a_in_1),0)-3),'*')||substr(a_in_1,8); END; $BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;

CREATE OR REPLACE FUNCTION "mask_cellphone_number_middle"("a_in_1" varchar)
  RETURNS "pg_catalog"."varchar" AS $BODY$ BEGIN   RETURN substr(a_in_1, 1, 3) || lpad('*', length(a_in_1) - 7, '*') || right(a_in_1, 4); END; $BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;

CREATE OR REPLACE FUNCTION "mask_cellphone_number_operator"("a_in_1" varchar)
  RETURNS "pg_catalog"."varchar" AS $BODY$ BEGIN   RETURN rpad('*', 3, '*') || substr(a_in_1, 4); END; $BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;

CREATE OR REPLACE FUNCTION "mask_chinese_name_shadow_first"("a_in_1" varchar)
  RETURNS "pg_catalog"."varchar" AS $BODY$ BEGIN   if coalesce(length(a_in_1),0) = 0 then    return null;   end if;   RETURN case when length(a_in_1) >= 3 and instr(',司马,上官,欧阳,夏侯,诸葛,东方,皇甫,淳于,公孙,令狐,钟离,宇文,长孙,慕容,太史,端木,西门,拓跋,独孤,纳兰,',    ',' ||    substr(a_in_1, 1, 2) || ',') > 0 then '**' || substr(a_in_1,    3) else '*' || substr(a_in_1,    2) end; END; $BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;

CREATE OR REPLACE FUNCTION "mask_chinese_name_shadow_last"("a_in_1" varchar)
  RETURNS "pg_catalog"."varchar" AS $BODY$ BEGIN   if coalesce(length(a_in_1),0) = 0 then    return null;   end if;   RETURN case when length(a_in_1) >= 3 and instr(',司马,上官,欧阳,夏侯,诸葛,东方,皇甫,淳于,公孙,令狐,钟离,宇文,长孙,慕容,太史,端木,西门,拓跋,独孤,纳兰,',    ',' || substr(a_in_1, 1, 2) || ',') > 0 then substr(a_in_1,1,2) || rpad('*',greatest(0,length(a_in_1) - 2),'*')    else substr(a_in_1,1,1) || rpad('*',greatest(0,length(a_in_1) - 1),'*') end; END; $BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;

CREATE OR REPLACE FUNCTION "mask_chinese_name_shadow_mid"("a_in_1" varchar)
  RETURNS "pg_catalog"."varchar" AS $BODY$-- 中文姓名
DECLARE
   v_n_length int;
 BEGIN
   v_n_length := coalesce(length(a_in_1), 0);
   if v_n_length >= 12 then -- 大于12个字
		--raise '%', v_n_length;
    RETURN substr(a_in_1, 1, 6) || rpad('*', v_n_length - 9, '*') || right(a_in_1,3);
	 else
		--raise '%', v_n_length;
    RETURN substr(a_in_1, 1, 3) || rpad('*', v_n_length - 3, '*');
   end if;
 END; $BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;

CREATE OR REPLACE FUNCTION "mask_email_random_email"("a_in_1" varchar)
  RETURNS "pg_catalog"."varchar" AS $BODY$DECLARE
   Ls_str1 VARCHAR :='abcdefghigklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789';
   Li_len int;
   Li_out_str VARCHAR := '';
   Li_str_tmp varchar;
 BEGIN
   Li_out_str := Li_out_str || substr(Ls_str1,floor(random()*52+1)::int,1);
   Li_len := floor(random()*9+1);
   select replace(array_to_string(array(select substr(Ls_str1,floor(random()*62+1)::int,1)    from generate_series(1,Li_len)),','), ',', '') into Li_str_tmp;
   Li_out_str := Li_out_str || Li_str_tmp || '@';
   Li_len := floor(random()*9+1);
   select replace(array_to_string(array(select substr(Ls_str1,floor(random()*62+1)::int,1)    from generate_series(1,Li_len)),','), ',', '') into Li_str_tmp;
   Li_out_str := Li_out_str || Li_str_tmp || '.';
   Li_len := floor(random()*2+2);
   select replace(array_to_string(array(select substr(Ls_str1,floor(random()*52+1)::int,1)    from generate_series(1,Li_len)),','), ',', '') into Li_str_tmp;
   Li_out_str := Li_out_str || Li_str_tmp;
   return lower(Li_out_str);
 END; $BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;

CREATE OR REPLACE FUNCTION "mask_email_shadow_username"("a_in_1" varchar)
  RETURNS "pg_catalog"."varchar" AS $BODY$ DECLARE
   v_n_p1 INT;
   v_n_p2 INT;
	 v_s_p3 VARCHAR;
	 v_len  INT;
 BEGIN
   v_n_p1 := instr(a_in_1, '@');
   if v_n_p1 > 0 then
    v_n_p2 := instr(a_in_1, '.', v_n_p1 + 1);
    if v_n_p2 > 0 then
			null;
		else
			RETURN a_in_1;
    end if;
   else
    RETURN a_in_1;
   end if;
   --return rpad('*', v_n_p1 - 1, '*') || COALESCE(substr(a_in_1, v_n_p1),'');
	 v_s_p3 := substr(a_in_1, 1, v_n_p1 - 1);
	 v_len := length(v_s_p3);
	 -- raise '% --', v_s_p3;
	 if v_len <= 4 then 
		 RETURN substr(v_s_p3, 1, 1) || rpad('*', v_len - 2, '*') || right(v_s_p3, 1) || right(a_in_1, length(a_in_1) - v_len);
	 elsif v_len >=5 and v_len <= 8 THEN
		 RETURN substr(v_s_p3, 1, 2) || rpad('*', v_len - 4, '*') || right(v_s_p3, 2) || right(a_in_1, length(a_in_1) - v_len);
	 elsif v_len >= 9 THEN
		 RETURN substr(v_s_p3, 1, 3) || rpad('*', v_len - 6, '*') || right(v_s_p3, 3) || right(a_in_1, length(a_in_1) - v_len);
	 end if;
 END; $BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;

CREATE OR REPLACE FUNCTION "mask_gangao_code_shadow_all"("a_in_1" varchar)
  RETURNS "pg_catalog"."varchar" AS $BODY$
BEGIN
    return rpad('*',coalesce(length(a_in_1),0),'*');
END;
$BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;

CREATE OR REPLACE FUNCTION "mask_gangao_code_shadow_ident"("a_in_1" varchar)
  RETURNS "pg_catalog"."varchar" AS $BODY$BEGIN
    RETURN '*' || substr(a_in_1, 2);
END;
$BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;

CREATE OR REPLACE FUNCTION "mask_gangao_code_shadow_middle"("a_in_1" varchar)
  RETURNS "pg_catalog"."varchar" AS $BODY$
DECLARE
    vi_len int := coalesce(length(a_in_1), 0);
BEGIN
    RETURN substr(a_in_1, 1, 3) || lpad('*', vi_len - 5, '*') || right(a_in_1, 2);
END;
$BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;

CREATE OR REPLACE FUNCTION "mask_id_shadow_birthday_month"("a_in_1" varchar)
  RETURNS "pg_catalog"."varchar" AS $BODY$ BEGIN   RETURN substr(a_in_1, 1, 10) || rpad('*', 4, '*') || substr(a_in_1, 15); END; $BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;

CREATE OR REPLACE FUNCTION "mask_id_shadow_birthday_year"("a_in_1" varchar)
  RETURNS "pg_catalog"."varchar" AS $BODY$ BEGIN   RETURN substr(a_in_1, 1, 6) || rpad('*', 4, '*') || substr(a_in_1, 11); END; $BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;

CREATE OR REPLACE FUNCTION "mask_id_shadow_middle"("a_in_1" varchar)
  RETURNS "pg_catalog"."varchar" AS $BODY$ BEGIN   RETURN substr(a_in_1, 1, 6) || lpad('*', length(a_in_1) - 10, '*') || right(a_in_1, 4); END; $BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;

CREATE OR REPLACE FUNCTION "mask_id_shadow_sex"("a_in_1" varchar)
  RETURNS "pg_catalog"."varchar" AS $BODY$ BEGIN   RETURN substr(a_in_1, 1, 16) || '*' || substr(a_in_1, 18); END; $BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;

CREATE OR REPLACE FUNCTION "mask_id_shadow_zone"("a_in_1" varchar)
  RETURNS "pg_catalog"."varchar" AS $BODY$ BEGIN   RETURN rpad('*', least(6, coalesce(length(a_in_1),0)), '*') || substr(a_in_1, 7); END; $BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;

CREATE OR REPLACE FUNCTION "mask_military_id_shadow_all"("a_in_1" varchar)
  RETURNS "pg_catalog"."varchar" AS $BODY$
BEGIN
    return rpad('*',coalesce(length(a_in_1),0),'*');
END;
$BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;

CREATE OR REPLACE FUNCTION "mask_military_id_shadow_mid"("a_in_1" varchar)
  RETURNS "pg_catalog"."varchar" AS $BODY$BEGIN
  RETURN substr(a_in_1, 1, 3) || lpad('*', length(a_in_1) - 5, '*') || right(a_in_1, 2);
END;
$BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;

CREATE OR REPLACE FUNCTION "mask_passport_shadow_middle"("a_in_1" varchar)
  RETURNS "pg_catalog"."varchar" AS $BODY$ BEGIN   RETURN substr(a_in_1, 1, 3) || lpad('*', length(a_in_1) - 5, '*') || right(a_in_1, 2); END; $BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;

CREATE OR REPLACE FUNCTION "mask_phone_number_area_code"("a_in_1" varchar)
  RETURNS "pg_catalog"."varchar" AS $BODY$BEGIN
   RETURN lpad('*', 4, '*') || substr(a_in_1, 5);
END; $BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;

CREATE OR REPLACE FUNCTION "mask_phone_number_middle"("a_in_1" varchar)
  RETURNS "pg_catalog"."varchar" AS $BODY$ BEGIN   RETURN substr(a_in_1, 1, 4) || lpad('*', length(a_in_1) - 7, '*') || right(a_in_1, 3); END; $BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;

CREATE OR REPLACE FUNCTION "mask_plate_shadow_middle"("a_in_1" varchar)
  RETURNS "pg_catalog"."varchar" AS $BODY$ BEGIN   RETURN substr(a_in_1, 1, 4) || lpad('*', length(a_in_1) - 6, '*') || right(a_in_1, 2); END; $BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;

CREATE OR REPLACE FUNCTION "mask_plate_shadow_province"("a_in_1" varchar)
  RETURNS "pg_catalog"."varchar" AS $BODY$ BEGIN   RETURN rpad('*', 2, '*') || substr(a_in_1, 3); END; $BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;

CREATE OR REPLACE FUNCTION "mask_social_id_shadow_district"("a_in_1" varchar)
  RETURNS "pg_catalog"."varchar" AS $BODY$DECLARE
   v_n_length int;
 BEGIN
   v_n_length := coalesce(length(a_in_1), 0);
   if v_n_length >= 8 then
    RETURN substr(a_in_1, 1, 2) || lpad('*', 6, '*') || substr(a_in_1,9);
   else
    RETURN a_in_1;
   end if;
 END; $BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;

CREATE OR REPLACE FUNCTION "mask_social_id_shadow_middle"("a_in_1" varchar)
  RETURNS "pg_catalog"."varchar" AS $BODY$ DECLARE   v_n_length int; BEGIN   v_n_length := coalesce(length(a_in_1), 0);   if v_n_length >= 8 then    RETURN substr(a_in_1, 1, 4) || rpad('*', v_n_length - 8, '*') || right(a_in_1,4);   else    RETURN a_in_1;   end if; END; $BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;

CREATE OR REPLACE FUNCTION "mask_social_id_shadow_org"("a_in_1" varchar)
  RETURNS "pg_catalog"."varchar" AS $BODY$DECLARE
   v_n_length int;
 BEGIN
   v_n_length := coalesce(length(a_in_1), 0);
   if v_n_length >= 8 then
    RETURN lpad('*', 2, '*') || substr(a_in_1,3);
   else
    RETURN a_in_1;
   end if;
 END; $BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;

CREATE OR REPLACE FUNCTION "mask_social_id_shadow_random"("a_in_1" varchar)
  RETURNS "pg_catalog"."varchar" AS $BODY$ DECLARE    V_RETURN  VARCHAR;   temp_char VARCHAR; BEGIN   V_RETURN  := substr('123456789ABCDEFGY',    floor(random() * 17 + 1) ::int,    1) ||    substr('1239', floor(random() * 4 + 1) ::int, 1) ||    substr('0123456789', floor(random() * 10 + 1) ::int, 1) ||    substr('0123456789', floor(random() * 10 + 1) ::int, 1) ||    substr('0123456789', floor(random() * 10 + 1) ::int, 1) ||    substr('0123456789', floor(random() * 10 + 1) ::int, 1) ||    substr('0123456789', floor(random() * 10 + 1) ::int, 1) ||    substr('0123456789', floor(random() * 10 + 1) ::int, 1) ||    substr('0123456789ABCDEFGHJKLMNPQRTUWXY',    floor(random() * 31 + 1) ::int,    1) || substr('0123456789ABCDEFGHJKLMNPQRTUWXY',    floor(random() * 31 + 1) ::int,    1) ||    substr('0123456789ABCDEFGHJKLMNPQRTUWXY',    floor(random() * 31 + 1) ::int,    1) || substr('0123456789ABCDEFGHJKLMNPQRTUWXY',    floor(random() * 31 + 1) ::int,    1) ||    substr('0123456789ABCDEFGHJKLMNPQRTUWXY',    floor(random() * 31 + 1) ::int,    1) || substr('0123456789ABCDEFGHJKLMNPQRTUWXY',    floor(random() * 31 + 1) ::int,    1) ||    substr('0123456789ABCDEFGHJKLMNPQRTUWXY',    floor(random() * 31 + 1) ::int,    1) || substr('0123456789ABCDEFGHJKLMNPQRTUWXY',    floor(random() * 31 + 1) ::int,    1) ||    substr('0123456789ABCDEFGHJKLMNPQRTUWXY',    floor(random() * 31 + 1) ::int,    1);   temp_char := MASK_CALCULATE_CHECKSUM(V_RETURN);   RETURN V_RETURN || temp_char; END; $BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;

CREATE OR REPLACE FUNCTION "mask_string_random"("a_in_1" varchar)
  RETURNS "pg_catalog"."varchar" AS $BODY$ DECLARE   vs_res varchar := '';   vi_len int;   vi_i int := 1; BEGIN   vi_len := coalesce(length(a_in_1), 0);   for vi_i in 1 .. vi_len loop    vs_res := vs_res || chr(cast((floor(random()*94)+33) as int)); 	vi_i := vi_i + 1;   end loop;   RETURN vs_res; END; $BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;

CREATE OR REPLACE FUNCTION "mask_string_shadow_all"("a_in_1" varchar)
  RETURNS "pg_catalog"."varchar" AS $BODY$   BEGIN    RETURN rpad('*',coalesce(length(a_in_1),0),'*');   END;  $BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;

CREATE OR REPLACE FUNCTION "mask_string_shadow_middle"("a_in_1" varchar)
  RETURNS "pg_catalog"."varchar" AS $BODY$DECLARE
   v_n_length INT;
 BEGIN
   v_n_length := coalesce(length(a_in_1), 0);

   if v_n_length > 12 then -- 大于12个字
		--raise '%', v_n_length;
    RETURN substr(a_in_1, 1, 4) || rpad('*', v_n_length - 8, '*') || right(a_in_1,4);
   elsif v_n_length >= 9 and v_n_length <= 12 then
		--raise '%', v_n_length;
    RETURN substr(a_in_1, 1, 3) || rpad('*', v_n_length - 6, '*') || right(a_in_1,3);
   elsif v_n_length >= 5 and v_n_length <= 8 then
		--raise '%', v_n_length;
    RETURN substr(a_in_1, 1, 2) || rpad('*', v_n_length - 4, '*') || right(a_in_1,2);
	 else
		--raise '%', v_n_length;
    RETURN substr(a_in_1, 1, 1) || rpad('*', v_n_length - 2, '*') || right(a_in_1,1);
   end if;
 END; $BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;

CREATE OR REPLACE FUNCTION "mask_taiwan_code_shadow_all"("a_in_1" varchar)
  RETURNS "pg_catalog"."varchar" AS $BODY$
BEGIN
    return rpad('*',coalesce(length(a_in_1),0),'*');
END;
$BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;

CREATE OR REPLACE FUNCTION "mask_taiwan_code_shadow_middle"("a_in_1" varchar)
  RETURNS "pg_catalog"."varchar" AS $BODY$
DECLARE
    vi_len int := coalesce(length(a_in_1), 0);
BEGIN
    RETURN substr(a_in_1, 1, 2) || lpad('*', vi_len - 4, '*') || right(a_in_1, 2);
END;
$BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;

CREATE OR REPLACE FUNCTION "mask_vin_no_shadow_all"("a_in_1" varchar)
  RETURNS "pg_catalog"."varchar" AS $BODY$
BEGIN
    return rpad('*',coalesce(length(a_in_1),0),'*');
END;
$BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;

CREATE OR REPLACE FUNCTION "mask_vin_no_shadow_middle"("a_in_1" varchar)
  RETURNS "pg_catalog"."varchar" AS $BODY$ BEGIN   RETURN substr(a_in_1, 1, 4) || lpad('*', length(a_in_1) - 8, '*') || right(a_in_1, 4); END; $BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;

CREATE OR REPLACE FUNCTION "mask_vin_no_shadow_vds"("a_in_1" varchar)
  RETURNS "pg_catalog"."varchar" AS $BODY$BEGIN
    return substr(a_in_1, 1, 3) || rpad('*',5,'*') || substr(a_in_1, 6);
END;
$BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;

CREATE OR REPLACE FUNCTION "mask_vin_no_shadow_wmi"("a_in_1" varchar)
  RETURNS "pg_catalog"."varchar" AS $BODY$BEGIN
    return rpad('*',3,'*') || substr(a_in_1, 4);
END;
$BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;

CREATE OR REPLACE FUNCTION "mask_zip_code_shadow_all"("a_in_1" varchar)
  RETURNS "pg_catalog"."varchar" AS $BODY$
BEGIN
    return rpad('*',coalesce(length(a_in_1),0),'*');
END;
$BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;

CREATE OR REPLACE FUNCTION "mask_zip_code_shadow_areacode"("a_in_1" varchar)
  RETURNS "pg_catalog"."varchar" AS $BODY$
DECLARE
    vi_len int := coalesce(length(a_in_1), 0);
    vi_sublen int;
BEGIN
    vi_sublen := case when vi_len > 2 then 2 else 0 end;
    RETURN lpad('*',vi_sublen,'*') || substr(a_in_1, vi_sublen + 1);
END;
$BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;

CREATE OR REPLACE FUNCTION "mask_zip_code_shadow_middle"("a_in_1" varchar)
  RETURNS "pg_catalog"."varchar" AS $BODY$ BEGIN   RETURN substr(a_in_1, 1, 2) || lpad('*', length(a_in_1) - 4, '*') || right(a_in_1, 2); END; $BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;
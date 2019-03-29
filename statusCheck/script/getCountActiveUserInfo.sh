#########################################################################
# File Name: getCountActiveUserInfo.sh
# Author: 
# Mail: 
# Created Time: 2017-03-11 15:33:57
#########################################################################
#!/bin/bash

function Usage
{
    echo -e "\033[1;31mUsage:\033[0m sh $0 path [print|background]"
    echo "     print -- show active user info on screen"
    echo "background -- insert all info into mysql background"
    echo
    echo "EXAMPLES:"
    echo "sh $0 ${PWD} print"
    echo "sh $0 ${PWD} background"
}

if [ $# -ne 2 ]
then
    Usage
    exit -1
fi

#分省，分转售商，分业务统计活跃用户数
#eg: 20170311
datetime=$(date "+%Y%m%d")
sqlfile="${datetime}.sql"

base_path=${PWD}
file_path=$1
active_user_file_per_day="${file_path}/active_user_day_${datetime}.txt"
active_user_file_per_mon="${file_path}/active_user_month_`date "+%Y%m"`.txt"

echo "${active_user_file_per_day}, ${active_user_file_per_mon}"

#获取转售商信息
. ${base_path}/operInfo.cfg
. ${base_path}/DB.properties

#定义全局数组，分省和分转售商统计
declare -A countByProv
declare -a countByOperator

#分业务统计
#VID VI VISMS VIM VMMS VIMM VIG VLTE VGG
function getCountByServicePrint
{
    filename=$1

    if [ ! -e ${filename} ]
    then
        echo "file ${filename} does not exist."
        exit -1
    fi

    count_vid=$(grep "VID" ${filename} | wc -l)
    count_vi=$(grep -o 'VI$' ${filename} | wc -l)
    count_visms=$(grep "VISMS" ${filename} | wc -l)
    count_vim=$(grep -o 'VIM$' ${filename} | wc -l)
    count_vmms=$(grep "VMMS" ${filename} | wc -l)
    count_vimm=$(grep "VIMM" ${filename} | wc -l)
    count_vig=$(grep "VIG" ${filename} | wc -l)
    count_vlte=$(grep "VLTE" ${filename} | wc -l)
    count_vgg=$(grep "VGG" ${filename} | wc -l)

    echo
    echo "======================================================================"
    echo -e "VID\tVI\tVISMS\tVIM\tVMMS\tVIMM\tVIG\tVLTE\tVGG"
    echo -e \
    "${count_vid}\t${count_vi}\t${count_visms}\t${count_vim}\t${count_vmms}\t" \
    "${count_vimm}\t${count_vig}\t${count_vlte}\t${count_vgg}"
}

function getCountByServiceIntoDB
{
    filename=$1
    mdate=$2

    if [ ! -e ${filename} ]
    then
        echo "file ${filename} does not exist."
        exit -1
    fi

    count_vid=$(grep "VID" ${filename} | wc -l)
    count_vi=$(grep -o 'VI$' ${filename} | wc -l)
    count_visms=$(grep "VISMS" ${filename} | wc -l)
    count_vim=$(grep -o 'VIM$' ${filename} | wc -l)
    count_vmms=$(grep "VMMS" ${filename} | wc -l)
    count_vimm=$(grep "VIMM" ${filename} | wc -l)
    count_vig=$(grep "VIG" ${filename} | wc -l)
    count_vlte=$(grep "VLTE" ${filename} | wc -l)
    count_vgg=$(grep "VGG" ${filename} | wc -l)
    count_total=$(cat ${filename} | wc -l)

    echo "INSERT INTO active_user_per_service VALUES ('${mdate}', "   \
    "$count_vid, $count_vi, $count_visms, $count_vim, $count_vmms, "    \
    "$count_vimm, $count_vig, $count_vlte, $count_vgg, $count_total);" >> ${sqlfile}
}

#清空数组
function clrArray
{
    unset countByProv
    for i in {1..25}
    do
        countByOperator[$i]=0
    done

    declare -A countByProv
}

#分省和分转售商分别获取活跃用户
function loadInfoByProvAndOperator
{
    # get hlrinfo from mysql
    # 发现 bps_hlr 中的转售号段均是7位
    mysql -h ${ip} -u${username} -p${password} -Djs -e "SELECT HLR_CODE, BUREAU_CODE,
    OPERATOR_ID-30 AS OPERATOR_ID FROM bps_hlr WHERE HLR_CODE LIKE '170%' 
    AND EXPIRE_DATE LIKE '2030-%' AND OPERATOR_ID > 30;" >> hlr_info.tmp

    filename=$1
    hlrinfo_file="hlr_info.tmp"

    if [ ! -e ${filename} ]
    then
        echo "file ${filename} does not exist"
        exit -1
    fi

    echo "loadInfoByProvAndOperator"
    while read line
    do
        #eg: 17052753778:VLTE
        number_head=${line:0:7}

        hlrinfo=$(grep "${number_head}" ${hlrinfo_file})

        #eg: 1705529    290 13
        if [ "${hlrinfo}" != "" ]
        then
            prov_code=$(echo "${hlrinfo}" | awk '{print $2}')
            operId=$(echo "${hlrinfo}" | awk '{print $3}')

            countByProv["${prov_code}"]=$[${countByProv["${prov_code}"]} + 1]
            countByOperator[${operId}]=$[${countByOperator[${operId}]} + 1]
        fi
    done < ${filename}
}

# 分省打印
function getCountByProvCodePrint
{
    echo
    echo "======================================================================"
    for prov_code in ${!countByProv[*]}
    do
        echo -e -n "${prov_code}\t"
    done
    echo

    for prov_code in ${!countByProv[*]}
    do
        echo -e -n "${countByProv[${prov_code}]}\t"
    done
    echo
}

function getCountByProvCodeIntoDB
{
    mdate=$1
    #column: 北京(100), 广东(200), 上海(210), 天津(220), 重庆(230), 辽宁(240), 
    #江苏(250), 湖北(270), 四川(280), 陕西(290), 河北(311), 山西(351), 河南(371)
    #吉林(431), 黑龙江(451), 内蒙古(471), 山东(531), 安徽(551), 浙江(571), 
    #福建(591), 湖南(731), 广西(771), 江西(791), 贵州(851), 云南(871), 西藏(891)
    #海南(898), 甘肃(931), 宁夏(951), 青海(971), 新疆(991)
    echo "INSERT INTO active_user_per_prov VALUES ('${mdate}', "     \
    "$[${countByProv[100]}+0], $[${countByProv[200]}+0], $[${countByProv[210]}+0], "   \
    "$[${countByProv[220]}+0], $[${countByProv[230]}+0], $[${countByProv[240]}+0], "   \
    "$[${countByProv[250]}+0], $[${countByProv[270]}+0], $[${countByProv[280]}+0], "   \
    "$[${countByProv[290]}+0], $[${countByProv[311]}+0], $[${countByProv[351]}+0], "   \
    "$[${countByProv[371]}+0], $[${countByProv[431]}+0], $[${countByProv[451]}+0], "   \
    "$[${countByProv[471]}+0], $[${countByProv[531]}+0], $[${countByProv[551]}+0], "   \
    "$[${countByProv[571]}+0], $[${countByProv[591]}+0], $[${countByProv[731]}+0], "   \
    "$[${countByProv[771]}+0], $[${countByProv[791]}+0], $[${countByProv[851]}+0], "   \
    "$[${countByProv[871]}+0], $[${countByProv[891]}+0], $[${countByProv[898]}+0], "   \
    "$[${countByProv[931]}+0], $[${countByProv[951]}+0], $[${countByProv[971]}+0], "   \
    "$[${countByProv[991]}+0]);" >>${sqlfile}
}

# 分转售商打印
function getCountByOperatorPrint
{
    echo
    echo "======================================================================"

    for opId in {1..25}
    do
        echo -e -n "${operInfo[$opId]}\t"
    done
    echo

    for opId in {1..25}
    do
        echo -e -n "${countByOperator[$opId]}\t"
    done
    echo
}

function getCountByOperatorIntoDB
{
    mdate=$1
    echo "INSERT INTO active_user_per_operator VALUES ('${mdate}', "  \
    "$[${countByOperator[1]}+0], $[${countByOperator[2]}+0], $[${countByOperator[3]}+0], " \
    "$[${countByOperator[4]}+0], $[${countByOperator[5]}+0], $[${countByOperator[6]}+0], " \
    "$[${countByOperator[7]}+0], $[${countByOperator[8]}+0], $[${countByOperator[9]}+0], " \
    "$[${countByOperator[10]}+0], $[${countByOperator[11]}+0], $[${countByOperator[12]}+0], " \
    "$[${countByOperator[13]}+0], $[${countByOperator[14]}+0], $[${countByOperator[15]}+0], " \
    "$[${countByOperator[16]}+0], $[${countByOperator[17]}+0], $[${countByOperator[18]}+0], " \
    "$[${countByOperator[19]}+0], $[${countByOperator[20]}+0], $[${countByOperator[21]}+0], " \
    "$[${countByOperator[22]}+0], $[${countByOperator[23]}+0], $[${countByOperator[24]}+0], " \
    "$[${countByOperator[25]}+0]);" >> ${sqlfile}
}

# print -- 输出在屏幕上
# background -- 后台入库
if [ "$2" = "print" ]
then
    # 判断是否是月初
    if [ "${datetime:6:2}" = "01" ]
    then
        # 按整月统计
        echo
        echo "+----------------------------按月统计---------------------------------"
        getCountByServicePrint ${active_user_file_per_mon}

        clrArray
        loadInfoByProvAndOperator ${active_user_file_per_mon}
        getCountByProvCodePrint
        getCountByOperatorPrint
    fi

    echo
    echo "+----------------------------按天统计---------------------------------"
    # 按天统计
    getCountByServicePrint ${active_user_file_per_day}

    # 清空数组
    clrArray
    loadInfoByProvAndOperator ${active_user_file_per_day}
    getCountByProvCodePrint
    getCountByOperatorPrint
elif [ "$2" = "background" ]
then
    if [ "${datetime:6:2}" = "01" ]
    then

        rm hlrint
       mp
        getCountByServiceIntoDB ${active_user_file_per_mon} "`date "+%Y%m"`"
        
        clrArray
        loadInfoByProvAndOperator ${active_user_file_per_mon}
        getCountByProvCodeIntoDB "`date "+%Y%m"`"
        getCountByOperatorIntoDB "`date "+%Y%m"`"
    fi

    getCountByServiceIntoDB ${active_user_file_per_day} "`date "+%Y%m%d"`"

    clrArray
    loadInfoByProvAndOperator ${active_user_file_per_day}
    getCountByProvCodeIntoDB "`date "+%Y%m%d"`"
    getCountByOperatorIntoDB "`date "+%Y%m%d"`"
else
    Usage
    exit -1
fi

rm hlr_info.tmp

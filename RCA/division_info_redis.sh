#########################################################################
# File Name: division.sh
# Author: Jona
# mail: mblrwuzy@gmail.com
# Created Time: 2018-07-09 11:27:15
#########################################################################
#!/bin/bash

# execute on a term, maybe not a bash, just a dash, so when you execute this 
# shell script, it may cause an error: function not found. That will be ok, 
# just as you execute like this: dash script. The right way to execute:
# bash script

# file format: ID   SEVERITY    MESSAGE ARISINGTIME DEVNAME

# ######################################################################### 
# DESC: help info
# AUTHOR: Jona
# CREATE TIME: 2018-07-10 14:55 
# #########################################################################
function help
{
    echo "sh $0 warning-files, this way may cause an error: function not found. \
The reason is that the term is dash instead of bash, so execute as follow."
    echo "bash $0 warning-files"
    exit 0
}

# ######################################################################### 
# DESC: convert time string to seconds since 1970-01-01
# AUTHOR: Jona
# CREATE TIME: 2018-07-10 14:56 
# #########################################################################
function getSecondsFromTimeStr
{
    # time string: 20180710145728
    # convert to 1531205848
    timestr=$1
    formatStr=$(echo "${timestr:0:4}-${timestr:4:2}-${timestr:6:2} \
${timestr:8:2}:${timestr:10:2}:${timestr:12:2}")

    timesec=$(date -d "${formatStr}" "+%s")

    echo ${timesec}
}

# ######################################################################### 
# DESC: print log
# log format: [time] [log level] [function name] [description]
# log level: DEBUG INFO ERROR
# AUTHOR: Jona
# CREATE TIME: 2018-07-10 15:03 
# #########################################################################
function printLog
{
    # logfile
    logLevel=$1
    funcName=$2
    desc=$3
    echo "`date "+%Y-%m-%d %H:%M:%S"` [$logLevel] [$funcName]:[$desc]"
}

# ######################################################################### 
# DESC: insert into redis
# args order: [id] [severity] [msg] [time] [dev], must in the right order
# AUTHOR: Jona
# CREATE TIME: 2018-07-10 16:14 
# #########################################################################
function insertIntoRedis
{
    # dev:msg:time is a list, contains all the ids
    # msg:id is a hash, contains msgInfo and severity
    # time:id is a string, contains timeSec
    # time:ids is a sorted set, element donates id, score donates time sec.
    # ZRANGEBYSCORE can get time range.
    id=$1
    severity=$2
    msg=$(echo $3 | sed 's/"//g')
    time=$4
    dev=$(echo $5 | sed 's/"//g')
    redis-cli <<EOF
    lpush ${dev}:msg:time ${id}
    hset msg:${id} severity ${severity} devname "${dev}" msgInfo "${msg}"
    set time:${id} ${time}
    zadd time:ids ${time} ${id}
    exit
EOF
    printLog INFO insertIntoRedis "insert into redis success."
}

if [ $# -ne 1 ]; then
    help
    exit 1
fi

warning_file=$1

OLDIFS=$IFS
IFS="\t"
# while read id msgInfo ariseTimeStr instance nodeKey devName
while read -r line
do
    id=$(echo ${line} | awk -F"\t" '{print $1}')

    severity=$(echo ${line} | awk -F"\t" '{print $2}')

    msgInfo=$(echo ${line} | awk -F"\t" '{print $3}' | cut -d: -f2)

    ariseTimeStr=$(echo ${line} | awk -F"\t" '{print $4}')
    timeSec=$(getSecondsFromTimeStr $ariseTimeStr)
    
    devName=$(echo ${line} | awk -F"\t" '{print $5}')

    printLog INFO main "id:${id}"
    printLog INFO main "msgInfo:${msgInfo}"
    printLog INFO main "ariseTimeStr:${ariseTimeStr}, timeSec:${timeSec}"
    printLog INFO main "devName:${devName}"

    insertIntoRedis ${id} ${severity} "${msgInfo}" ${timeSec} ${devName}
done < "${warning_file}"
IFS=$OLDIFS
# NOTE: if modify IFS, and use "done < ${warning_file}", may occur an 
# error: ambiguous redirect. It's strange. Use double quotes to fix it.
# search from << BASH SHELL: Essential Program for Your Survial at Work>>

# BUGS: if I don't set IFS to '\t', tab will be replaced with space by shell(I
# don't know why?). But now, when after modifying IFS, t contained by strings
# are all replaced with space. It's so strange. Damn Bourne Shell!!!
# maybe because of the differ version of Bourne Shell. I don't get answer.

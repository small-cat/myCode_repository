#########################################################################
# File Name: sort_by_warning.sh
# Author: Jona
# mail: mblrwuzy@gmail.com
# Created Time: 2018-07-13 10:25:32
#########################################################################
#!/bin/bash

# 1. warning info is all the same except number, regard as the same warnings.
# 2. warning info is all the same except ERRORCODE, regard as differ.

# warnings have been sorted by msginfo by ALPHA, divived by devname.

# ######################################################################### 
# DESC: get warnings from redis by dev
# AUTHOR: Jona
# ARGUS: [dev]
# CREATE TIME: 2018-07-13 10:29 
# #########################################################################
function getWarningFromRedisByDev
{
    devname=$1
    devtmp="${devname}.tmp"
    devfile="${devname}.txt"
    redis-cli --raw<<EOF > ${devtmp}
sort ${dev}:msg:time by msg:*->msgInfo ALPHA get msg:*->msgInfo get time:*
exit
EOF
    
    # msg and time are in every two lines. transform to one line
    count=1
    while read line
    do
        if [ $count -eq 1 ]; then
            row=$line
        elif [ $count -eq 2 ]; then
            row="${row} $line"
            echo "${row}" >> ${devfile}
        elif [ $count -gt 2 ]; then
            count=$[$count % 2]
        fi

        let count++
    done < ${devtmp}

    printLog INFO "getWarningFromRedisByDev" "sort ${dev} warnings to ${devfile}"
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

# eg: devname is cmszdbsb
getWarningFromRedisByDev "cmszdbsb"

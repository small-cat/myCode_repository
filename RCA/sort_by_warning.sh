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
    devtmp="${devFilePath}/${devname}.tmp"
    devfile="${devFilePath}/${devname}.txt"
    redis-cli --raw <<EOF > ${devtmp}
    sort ${devname}:msg:time by msg:*->msgInfo ALPHA get msg:*->msgInfo get time:* \
        get msg:*->severity get msg:*->devname
    exit
EOF
    
    # msg, time, severity and devname are in every two lines. transform to one line
    count=1
    while read line
    do
        if [ $count -le 3 ]; then
            row="${row}${line}#"
        elif [ $count -eq 4 ]; then
            row="${row}${line}"
            echo "${row}" >> ${devfile}
            row=""
        elif [ $count -gt 4 ]; then
            count=$[$count % 4]
            row="${row}${line}#"
        fi

        let count++
    done < ${devtmp}

    rm ${devtmp}
    printLog INFO "getWarningFromRedisByDev" "sort ${devname} warnings to ${devfile}"
    printLog INFO "getWarningFromRedisByDev" "${devfile} format is [msg]#[time]\
#[severity]#[devname]"
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
    echo "`date "+%Y-%m-%d %H:%M:%S"` [$logLevel] [$funcName] [$desc]"
}

# ######################################################################### 
# DESC: get similarity literally between sentences, word by word
# after investgating, found that the similar warnings have the same structure,
# 1. only digits are different, regard as the same, digits can not mix with
# alpha
# 2. ERRORCODE is different, regard as differ
# AUTHOR: Jona
# CREATE TIME: 2018-07-13 14:28 
# #########################################################################
function getSimilarityBetweenSentenceLiteral
{
    sentence1=$1
    sentence2=$2

    if [ "${sentence1}" = "${sentence2}" ]; then
        return 0 # similar
    elif [ "${sentence1}" != "${sentence2}" ]; then
        # compare two sentences without digits
        if [ "`echo ${sentence1} | sed 's/\b[^a-z,A-Z][0-9]*[^a-z,A-Z]\b/ /g'`" = \
            "`echo ${sentence2} | sed 's/\b[^a-z,A-Z][0-9]*[^a-z,A-Z]\b/ /g'`" ]; then
            if [ "`echo ${sentence1} | grep -o 'ERRORCODE [0-9]*'`" != "" ]; then
                # contain "ERRORCODE"
                if [ "`echo ${sentence1} | grep -o 'ERRORCODE [0-9]*'`" = \
                    "`echo ${sentence2} | grep -o 'ERRORCODE [0-9]*'`" ]; then
                    # similar
                    return 0
                else # ERRORCODE not the same
                    return 1
                fi
            else # not contain "ERRORCODE"
                return 0
            fi
        else # not similar without digits
            return 1
        fi
    fi
}

# ######################################################################### 
# DESC: write similar warnings into one file
# first, get all the similar warnings
# then, sort by time, and write similar warnings into one file
# ARGUS: [devname]
# AUTHOR: Jona
# CREATE TIME: 2018-07-13 15:22 
# #########################################################################
function divivedWarningsBySimilarity
{
    devname=$1
    devfile="${devFilePath}/${devname}.txt"
    dataPath=${warnFilePath}
    idx=1 # suffix of new files

    # warnings in devfile are sorted by ALPHA in redis
    # get first line msg
    origin_comp_stence=$(sed -n '1p' ${devfile} | cut -d# -f1)
    while read line
    do
        comp_stence=$(echo ${line} | cut -d# -f1)
        getSimilarityBetweenSentenceLiteral "${origin_comp_stence}" "${comp_stence}"
        if [ $? -eq 0 ]; then
            #similar
            echo ${line} >> ${dataPath}/${devname}.${idx}
        else
            # differ
            let idx++
            origin_comp_stence=${comp_stence}
            echo "${line}" >> ${dataPath}/${devname}.${idx}
        fi
    done < ${devfile}
    printLog INFO "divivedWarningsBySimilarity" "${devfile} divived into \
${idx} files"
}

# ######################################################################### 
# DESC: 
# AUTHOR: Jona
# CREATE TIME: 2018-07-13 17:26 
# #########################################################################
function divivedSimilarityWarningsByTime

# ENV
devFilePath=/home/jona/myGit/myCode_repository/RCA/data/dev
warnFilePath=/home/jona/myGit/myCode_repository/RCA/data/classification

mkdir -p ${devFilePath}
mkdir -p ${warnFilePath}

# eg: devname is cmszdbsb
getWarningFromRedisByDev "cmszdbsb"

# divived into different files
divivedWarningsBySimilarity cmszdbsb

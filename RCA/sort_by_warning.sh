#########################################################################
# File Name: sort_by_warning.sh
# Author: Jona
# mail: mblrwuzy@gmail.com
# Created Time: 2018-07-13 10:25:32
#########################################################################
#!/bin/bash

# 1. warning info is all the same except number, regard as the same warnings.
# 2. warning info is all the same except ERRORCODE, regard as differ.

# warnings have been sorted by msginfo by ALPHA, divided by devname.

# ######################################################################### 
# DESC: get warnings from redis by dev
# AUTHOR: Jona
# ARGS: [dev]
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
    printLog INFO "getWarningFromRedisByDev" "format ${devfile} to [msg]#[time]\
#[severity]#[devname]"
}

# ######################################################################### 
# DESC: print log
# log format: [time] [log level] [function name] [description]
# log level: DEBUG INFO ERROR
# ARGS: [log level] [func name] [description]
# AUTHOR: Jona
# CREATE TIME: 2018-07-10 15:03 
# #########################################################################
function printLog
{
    # logfile
    log_file=${logFilePath}/`date "+%Y%m%d"`.log
    log_level=$1
    func_name=$2
    desc=$3
    echo "`date "+%Y-%m-%d %H:%M:%S"` [$log_level] [$func_name]\
 [$desc]" >> ${log_file}
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
# write similar warnings into one file
# ARGS: [devname]
# AUTHOR: Jona
# CREATE TIME: 2018-07-13 15:22 
# #########################################################################
function dividedWarningsBySimilarity
{
    dev_name=$1
    dev_file="${devFilePath}/${dev_name}.txt"
    data_path=${warnFilePath}
    idx=1 # suffix of new files

    # warnings in devfile are sorted by ALPHA in redis
    # get first line msg
    origin_comp_stence=$(sed -n '1p' ${dev_file} | cut -d# -f1)
    while read line
    do
        comp_stence=$(echo ${line} | cut -d# -f1)
        getSimilarityBetweenSentenceLiteral "${origin_comp_stence}" "${comp_stence}"
        if [ $? -eq 0 ]; then
            #similar
            echo ${line} >> ${data_path}/${dev_name}.${idx}
        else
            # differ
            let idx++
            origin_comp_stence=${comp_stence}
            echo "${line}" >> ${data_path}/${dev_name}.${idx}
        fi
    done < ${dev_file}
    printLog INFO "dividedWarningsBySimilarity" "${dev_file} divided into \
${idx} files, ${data_path}/${dev_name}.1-${idx}"

    # split each file generated upper(${dev_name}.${idx}) based on time interval
    # time interval must be 10 min
    while [ ${idx} -gt 0 ]; do
        dividedSimilarWarningsByTime ${data_path}/${dev_name}.${idx}
        let idx--
    done
}

# ######################################################################### 
# DESC: get all warnings before or later than a given time
# time:ids is a sorted set in redis, get ids from it in time range
# ARGS: [before|later|between] [time_dst] [time_span] [outputfile], if first
# arg is between, second and third arg are two time sides.
# AUTHOR: Jona
# CREATE TIME: 2018-07-16 12:31 
# #########################################################################
function getAllWarningsByTime
{
    flag=$1
    time_dst=$2
    time_span=$3
    outputfile=$4
    tmpfile=${tmpFilePath}/tmp

    printLog INFO "getAllWarningsByTime" "get warnings ${flag} ${time_dst} \
${time_span}, output to ${outputfile}"

    if [ "${flag}" = "before" ]; then
        # get all the ids from time:ids to tmpfile
        echo "# ################### before #####################" >> ${outputfile}
        redis-cli --raw <<EOF >${tmpfile}
        zrangebyscore time:ids $[${time_dst} - ${time_span}] ${time_dst}
        exit
EOF
        while read ids; do
            redis-cli --raw <<EOF | sed 's/\"//g' | sed 'N;N;N;s/\n/#/g' >> ${outputfile}
            hget msg:${ids} msgInfo
            get time:${ids}
            hget msg:${ids} severity
            hget msg:${ids} devname
            exit
EOF
        done < ${tmpfile}
    elif [ "${flag}" = "later" ]; then
        echo "# ################### later ######################" >> ${outputfile}
        redis-cli --raw <<EOF >${tmpfile}
        zrangebyscore time:ids ${time_dst} $[${time_dst} + ${time_span}]
        exit
EOF
        while read ids; do
            redis-cli --raw <<EOF | sed 's/\"//g' | sed 'N;N;N;s/\n/#/g' >> ${outputfile}
            hget msg:${ids} msgInfo
            get time:${ids}
            hget msg:${ids} severity
            hget msg:${ids} devname
            exit
EOF
        done < ${tmpfile}
    elif [ "${flag}" = "between" ]; then
        echo "# ####################### between ###############" >> ${outputfile}
        redis-cli --raw <<EOF > ${tmpfile}
        zrangebyscore time:ids $2 $3
        exit
EOF
        while read ids; do
            redis-cli --raw <<EOF | sed 's/\"//g' | sed 'N;N;N;s/\n/#/g' >> ${outputfile}
            hget msg:${ids} msgInfo
            get time:${ids}
            hget msg:${ids} severity
            hget msg:${ids} devname
            exit
EOF
        done < ${tmpfile}
    else
        printLog ERROR "getAllWarningsByTime" "Wrong args:${flag}"
    fi
    rm ${tmpfile}
}

# ######################################################################### 
# DESC:
# 1. sort by time
# 2. filter similar warnings which time interval is less than 10 min. 
# ARGS: [filename]
# AUTHOR: Jona
# CREATE TIME: 2018-07-13 17:26 
# #########################################################################
function dividedSimilarWarningsByTime
{
    deal_file=$1 # this is absolutely path
    deal_file_name=${deal_file##*/} # get filename

    printLog INFO "dividedSimilarWarningsByTime" "divide ${deal_file} by time"

    # initial
    time_cmp_begin=$(sort -k2n -t# ${deal_file} | sed -n '1p' | cut -d# -f2)
    time_cmp_end=${time_cmp_begin}

    # sort -k2n -t# ${deal_file} | while read lines; do
    # NOTE:
    # pipeline in shell, means to execute task in a child process, variables
    # will not be inherited by parent process. so we cannot get any values
    # in while loop if we use pipeline as upper.
    while read lines; do
        tmp_time=$(echo ${lines} | cut -d# -f2)
        diff=$[${tmp_time} - ${time_cmp_end}] # calculate time diff
        if [ ${diff} -ge 0 ] && [ ${diff} -lt ${timeInterVal} ]; then
            echo ${lines} >> ${tmpFilePath}/${deal_file_name}.tmp # output to tmp 

            printLog INFO "dividedSimilarWarningsByTime" "write [${lines}] to \
${tmpFilePath}/${deal_file_name}.tmp"

            time_cmp_end=${tmp_time} # end time
        elif [ ${diff} -lt 0 ]; then
            printLog ERROR "dividedSimilarWarningsByTime" "err occured in \
                ${deal_file}:${lines}"
        else
            # diff greater than timeInterVal, belonged to another warning.
            # mv tmp to res
            # rename tmp to filename.timestart-timeend
            dest_filename_suffix="$(date -d "$[${time_cmp_begin} - `date +%s`] sec" "+%Y-%m-%d_%H:%M:%S")-\
$(date -d "$[${time_cmp_end} - `date +%s`] sec" "+%Y-%m-%d_%H:%M:%S")"
            dest_file="${resFilePath}/${deal_file_name}.${dest_filename_suffix}"
            mv ${tmpFilePath}/${deal_file_name}.tmp ${dest_file} 

            printLog INFO "dividedSimilarWarningsByTime" "mv ${tmpFilePath}/${deal_file_name}.tmp ${dest_file}"
            printLog INFO "dividedSimilarWarningsByTime" "split ${deal_file} to ${dest_file} between \
${time_cmp_begin} and ${time_cmp_end}"

            # get all warnings which are 30min before time_cmp_begin
            getAllWarningsByTime before ${time_cmp_begin} $[30 * 60] ${dest_file}

            # get all warnings between time_cmp_begin and time_cmp_end
            getAllWarningsByTime between ${time_cmp_begin} ${time_cmp_end} ${dest_file}

            # get all warnings which are 30min later than time_cmp_end
            getAllWarningsByTime later ${time_cmp_end} $[30 * 60] ${dest_file}

            time_cmp_begin=${tmp_time} # another warning
            time_cmp_end=${time_cmp_begin}

            echo "${lines}" >> ${tmpFilePath}/${deal_file_name}.tmp
            printLog INFO "dividedSimilarWarningsByTime" "write [${lines}] to \
${tmpFilePath}/${deal_file_name}.tmp"

        fi
    done < <(sort -k2n -t# ${deal_file}) 

    # warnings in the end of the file, are in the tmp file, should continue to deal
    dest_filename_suffix="$(date -d "$[${time_cmp_begin} - `date +%s`] sec" "+%Y-%m-%d_%H:%M:%S")-\
$(date -d "$[${time_cmp_end} - `date +%s`] sec" "+%Y-%m-%d_%H:%M:%S")"
    dest_file="${resFilePath}/${deal_file_name}.${dest_filename_suffix}" # absolutely path
    mv ${tmpFilePath}/${deal_file_name}.tmp ${dest_file}

    printLog INFO "dividedSimilarWarningsByTime" "mv ${tmpFilePath}/${deal_file_name}.tmp ${dest_file}"
    printLog INFO "dividedSimilarWarningsByTime" "split ${deal_file} to ${dest_file} between \
${time_cmp_begin} and ${time_cmp_end}"

    # get all warnings which are 30min before time_cmp_begin
    getAllWarningsByTime before ${time_cmp_begin} $[30 * 60] ${dest_file}

    # get all warnings between time_cmp_begin and time_cmp_end
    getAllWarningsByTime between ${time_cmp_begin} ${time_cmp_end} ${dest_file}

    # get all warnings which are 30min later than time_cmp_end
    getAllWarningsByTime later ${time_cmp_end} $[30 * 60] ${dest_file}
}

# #########################################################################
# ######################### THE MAIN PROGRAM ############################ #
# #########################################################################

# ENV
deviceCfgFile=/home/jona/myGit/myCode_repository/RCA/device_name.cfg

devFilePath=/home/jona/myGit/myCode_repository/RCA/data/dev
warnFilePath=/home/jona/myGit/myCode_repository/RCA/data/classification
logFilePath=/home/jona/myGit/myCode_repository/RCA/data/log
# include the last result
resFilePath=/home/jona/myGit/myCode_repository/RCA/data/res
sortFilePath=/home/jona/myGit/myCode_repository/RCA/data/sort
# tmp file
tmpFilePath=/home/jona/myGit/myCode_repository/RCA/data/tmp
timeInterVal=$[10 * 60] # total seconds

# create directory if not exist.
mkdir -p ${devFilePath}
mkdir -p ${warnFilePath}
mkdir -p ${tmpFilePath}
mkdir -p ${logFilePath}
mkdir -p ${resFilePath}
mkdir -p ${sortFilePath}

while read device_name; do
    # eg: devname is cmszdbsb, cmszvdbb_voT12, cmszdbsa
    getWarningFromRedisByDev "${device_name}"

    # divided into different files
    dividedWarningsBySimilarity "${device_name}"
done < ${deviceCfgFile}

# sort all files in resFilePath and remove duplications in every file
fileNameSet=$(ls ${resFilePath})
for filename in ${fileNameSet}; do
    cat ${resFilePath}/${filename} | sed '/#######/d' | sort -u | sort -k2n -t# > ${sortFilePath}/${filename}
done

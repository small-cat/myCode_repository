#!/bin/bash

filename=$1

BLANKS=25
while read val key; do
  length=${#val}
  count=0
  while [ ${count} -lt ${length} ]; do 
    printline="${printline} ${val:${count}:1}"
    let count++
  done

  remain_len=$[${BLANKS} - ${length} - 4]
  remain_blanks="$(seq -s ' ' ${remain_len} | sed 's/[0-9]//g')"
  val="${val}_GS"
  echo "${val}:${remain_blanks} ${printline};"
  printline=""
done < ${filename}

#!/bin/bash

filename=$1
BLANKS=25

while read name; do
  length=${#name}
  if [ "${name:$[${length}-2]:2}" = "_P" ]; then
    val=${name:0:$[${length}-2]}
    let length-=2
  else
    val=$name
  fi

  remain_length=$[${BLANKS} - ${#name} - 1]
  printf "%s:%${remain_length}s" ${name} ""

  count=0
  while [ ${count} -lt ${length} ]; do 
    printf "%s " ${val:${count}:1}
    let count++
  done
  printf ";\n"
done < ${filename}

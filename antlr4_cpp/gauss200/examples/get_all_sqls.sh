#!/bin/bash

filename=$1

is_sql=0
while read line; do
  if [ "${line}" = "示例" ]; then
    # the following will be sql examples
    is_sql=1
  elif [ "$(echo "${line}" | grep '16\.14\.[0-9\.]*')" != "" ]; then
    # the following will be other descriptions
    is_sql=0
  fi

  if [ ${is_sql} -eq 1 ]; then
    echo "${line}" >> res2.sql
  fi
done < ${filename}

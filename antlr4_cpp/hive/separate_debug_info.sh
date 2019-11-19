#############################################################################
 # @file  : separate_debug_info.sh - 
 # @brief : (c) Copyright 2019 . All Rights Reserved.
 # @author: Jona 
 # @email : mblrwuzy@gmail.com
 # @date  : 2019-09-30
#############################################################################
#!/bin/bash

scriptdir=`dirname ${0}`
scriptdir=`(cd ${scriptdir}; pwd)`
scriptname=`basename ${0}`

set -e

function errorexit()
{
  errorcode=${1}
  shift
  echo $@
  exit ${errorcode}
}

function usage()
{
  echo "USAGE ${scriptname} <tostrip>"
}

tostripdir=`dirname "$1"`
tostripfile=`basename "$1"`


if [ -z ${tostripfile} ] ; then
  usage
  errorexit 0 "tostrip must be specified"
fi

cd "${tostripdir}"

debugdir=.debug
debugfile="${tostripfile}.debug"

if [ ! -d "${debugdir}" ] ; then
  echo "creating dir ${tostripdir}/${debugdir}"
  mkdir -p "${debugdir}"
fi
echo "stripping ${tostripfile}, putting debug info into ${debugfile}"
objcopy --only-keep-debug "${tostripfile}" "${debugdir}/${debugfile}"
strip --strip-debug --strip-unneeded "${tostripfile}"

# add .gnu-debuglink segment for executable file
objcopy --add-gnu-debuglink="${debugdir}/${debugfile}" "${tostripfile}"
# chmod -x "${debugdir}/${debugfile}"


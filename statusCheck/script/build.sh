#################################################
# File name: build.sh
# Author: wzhenyu
# mail: mblrwuzy@gmail.com
# Create Time: 2016-07-29 11:17
#################################################
#!/bin/bash

cd ../lib

LIB_HIREDIS="libhiredis.so.0.13"
LIB_LOG4CPLUS="liblog4cplus-1.2.so.5.1.4"

SYMBOLIC_LINK_LIB_HIREDIS="libhiredis.so"
SYMBOLIC_LINK_LIB_LOG4CPLUS1="liblog4cplus.so"
SYMBOLIC_LINK_LIB_LOG4CPLUS2="liblog4cplus-1.2.so.5"

if [ ! -e $LIB_HIREDIS ] || [ ! -e $LIB_LOG4CPLUS ]
then
	echo "$LIB_HIREDIS and $LIB_LOG4CPLUS must exist."
	exit 1
fi

find . -type l -name "libhiredis*" | xargs rm
ln -s $LIB_HIREDIS $SYMBOLIC_LINK_LIB_HIREDIS

find . -type l -name "liblog4cplus*" | xargs rm
ln -s $LIB_LOG4CPLUS ${SYMBOLIC_LINK_LIB_LOG4CPLUS1}
ln -s $LIB_LOG4CPLUS ${SYMBOLIC_LINK_LIB_LOG4CPLUS2}

cd -

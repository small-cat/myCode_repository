#########################################################################
# File Name: build.sh
# Author: Jona
# Mail: 
# Created Time: 2019-08-07 23:28:16
# Description: 
#########################################################################
#!/bin/bash

ANTLR_PATH="/home/jona/software/antlr4/antlr-4.7.1-complete.jar"

cmake .. -DANTLR_JAR_LOCATION=${ANTLR_PATH} -DWITH_DEMO=True -DCMAKE_BUILD_TYPE=Debug

#############################################################################
 # @file  : gen_code.sh - 
 # @brief : (c) Copyright 2019 . All Rights Reserved.
 # @author: Jona 
 # @email : mblrwuzy@gmail.com
 # @date  : 2019-10-07
#############################################################################
#!/bin/bash

function PLog {
  loglevel=$1
  logstr=$2
  echo "$(date "+%Y-%m-%d %H:%M:%S [${loglevel}]: ${logstr}")"
}

# @$1: source filename prefix
# @$2: source file suffix
# @$3: source file path
# @$4: template file
function gen_src_code {
  filename="$1.$2"
  SRC_FILE="$3/${filename}"
  template="$4"

  # generating
  include_file_hpp="$1.h"
  source ${header_file} >> ${SRC_FILE}
  source ${template} >> ${SRC_FILE}
  PLog INFO "create file ${SRC_FILE}"
  include_file_hpp=""
}

if [[ $# -ne 1 ]]; then
  echo "Usage: $0 [config_file]"
  exit -1
fi

config_file=$1
header_file="file_head.template"
if [ ! -f ${config_file} ]; then
  PLog ERROR "${config_file} does not exist."
  exit -1
fi

source ${config_file}
PLog DEBUG "author is ${author}"
PLog DEBUG "email is ${email}"

# for generating source code
SRC_PATH="src"
MATCHER_PATH="matcher"
ACTION_PATH="action"
SQLPARSER_PATH="sqlparser"

# create folder_action.hpp
typeset -l prefix
prefix="${database}"
DB_MATCHER_PATH="${SRC_PATH}/${MATCHER_PATH}/${prefix}"
DB_ACTION_PATH="${SRC_PATH}/${ACTION_PATH}/${prefix}"
DB_SQLPARSER_PATH="${SRC_PATH}/${SQLPARSER_PATH}/${prefix}"

mkdir -p ${DB_MATCHER_PATH}
mkdir -p ${DB_ACTION_PATH}
mkdir -p ${DB_SQLPARSER_PATH}

# ##############################################################################
# ########################### CREATE ACTION SOURCE CODE ########################
# ##############################################################################
# create folder_action
gen_src_code "${prefix}_folder_action" hpp "${DB_ACTION_PATH}" "./action/folder_action.template"

# create mask_action.h
gen_src_code "${prefix}_mask_action" h "${DB_ACTION_PATH}" "./action/mask_action_hpp.template"

# create mask_action.cpp
gen_src_code "${prefix}_mask_action" cpp "${DB_ACTION_PATH}" "./action/mask_action_cpp.template"

# create replace_table_action.hpp
gen_src_code "${prefix}_replace_table_action" h "${DB_ACTION_PATH}" "./action/replace_table_action_hpp.template"

# create replace_table_action.cpp
gen_src_code "${prefix}_replace_table_action" cpp "${DB_ACTION_PATH}" "./action/replace_table_action_cpp.template"

# create rewrite action
gen_src_code "${prefix}_rewrite_action" hpp "${DB_ACTION_PATH}" "./action/rewrite_action.template"

#create search_replace_action
gen_src_code "${prefix}_search_replace_action" hpp "${DB_ACTION_PATH}" "./action/search_replace_action.template"

# ##############################################################################
# ########################## CREATE MATCHER SOURCE CODE ########################
# ##############################################################################
# create from_clause_matcher_hpp
gen_src_code "${prefix}_from_clause_matcher" h "${DB_MATCHER_PATH}" "./matcher/from_clause_matcher_hpp.template"

# create from_clause_matcher_cpp
gen_src_code "${prefix}_from_clause_matcher" cpp "${DB_MATCHER_PATH}" "./matcher/from_clause_matcher_cpp.template"

# create sql_syntax_matcher
gen_src_code "${prefix}_sql_syntax_matcher" hpp "${DB_MATCHER_PATH}" "./matcher/sql_syntax_matcher.template"

# create symbol_matcher
gen_src_code "${prefix}_symbol_matcher" hpp "${DB_MATCHER_PATH}" "./matcher/symbol_matcher.template"

# ##############################################################################
# ######################### CREATE LISTENER SOURCE CODE ########################
# ##############################################################################
# create from_clause_matcher_listener
gen_src_code "${prefix}_from_clause_matcher_listener" h "${DB_SQLPARSER_PATH}" "./sqlparser/from_clause_matcher_listener.template"

# create get_table_listener
gen_src_code "${prefix}_get_table_listener" h "${DB_SQLPARSER_PATH}" "./sqlparser/get_table_listener.template"

# create mask_listener
gen_src_code "${prefix}_mask_listener" h "${DB_SQLPARSER_PATH}" "./sqlparser/mask_listener.template"

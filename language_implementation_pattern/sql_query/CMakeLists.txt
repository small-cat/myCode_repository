cmake_minimum_required(VERSION 3.8.0)
project(sqlquery_parser)

FILE(GLOB SRCS "parser/*.cpp")
FILE(GLOB HEADERS "parser/*.hpp")

add_definitions(-g)

add_executable(sqlquery
  ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
  ${SRCS}
  ${HEADERS}
)

set_target_properties(sqlquery PROPERTIES LINKER_LANGUAGE CXX)

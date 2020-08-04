cmake_minimum_required(VERSION 3.8.0)
project(parser_test)

FILE(GLOB SRCS "*.cpp")
FILE(GLOB HEADERS "*.hpp")

add_definitions(-g)

add_executable(parser
  ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
  ${SRCS}
  ${HEADERS}
)

set_target_properties(parser PROPERTIES LINKER_LANGUAGE CXX)

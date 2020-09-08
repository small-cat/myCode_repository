add_definitions(-fPIC)
FILE(GLOB_RECURSE SRCS "*.cpp")
FILE(GLOB_RECURSE HEADERS "*.h")

add_library(mysqlparse ${SRCS} ${HEADERS})
INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/runtime/src)
LINK_DIRECTORIES(${PROJECT_SOURCE_DIR}/dist)

target_link_libraries(mysqlparse antlr4-runtime)

target_include_directories(mysqlparse PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")

set_target_properties(mysqlparse PROPERTIES PUBLIC_HEADER "${HEADERS}")

add_subdirectory(test)

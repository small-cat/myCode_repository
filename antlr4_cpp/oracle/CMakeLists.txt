# -*- mode:cmake -*-
if(NOT UNIX)
  message(WARNING "Unsupported operating system")
endif()

set(antlr4-oracle-GENERATED_SRC
   ${PROJECT_SOURCE_DIR}/oracle/generated/PlSqlLexer.cpp 
   ${PROJECT_SOURCE_DIR}/oracle/generated/PlSqlParser.cpp
   ${PROJECT_SOURCE_DIR}/oracle/generated/PlSqlParserBaseListener.cpp
   ${PROJECT_SOURCE_DIR}/oracle/generated/PlSqlParserBaseVisitor.cpp
   ${PROJECT_SOURCE_DIR}/oracle/generated/PlSqlParserListener.cpp
   ${PROJECT_SOURCE_DIR}/oracle/generated/PlSqlParserVisitor.cpp
 )

foreach(src_file ${antlr4-oracle-GENERATED_SRC})
      set_source_files_properties(
          ${src_file}
          PROPERTIES
          GENERATED TRUE
          )
endforeach(src_file ${antlr4-oracle-GENERATED_SRC})

add_compile_options(-gdwarf -g3)
add_custom_target(GenerateParser DEPENDS ${antlr4-oracle-GENERATED_SRC})
add_custom_command(OUTPUT ${antlr4-oracle-GENERATED_SRC}
   COMMAND 
   ${CMAKE_COMMAND} -E make_directory ${PROJECT_SOURCE_DIR}/oracle/generated/
   COMMAND
   "${Java_JAVA_EXECUTABLE}" -jar ${ANTLR_JAR_LOCATION} -Werror -Dlanguage=Cpp -listener -visitor -o ${PROJECT_SOURCE_DIR}/oracle/generated/ -package oracle ${PROJECT_SOURCE_DIR}/oracle/PlSqlLexer.g4 ${PROJECT_SOURCE_DIR}/oracle/PlSqlParser.g4
   WORKING_DIRECTORY "${CMAKE_BINARY_DIR}"
   DEPENDS ${PROJECT_SOURCE_DIR}/oracle/PlSqlLexer.g4 ${PROJECT_SOURCE_DIR}/oracle/PlSqlParser.g4
   )

include_directories(
  ${PROJECT_SOURCE_DIR}/runtime/src
  ${PROJECT_SOURCE_DIR}/runtime/src/misc
  ${PROJECT_SOURCE_DIR}/runtime/src/atn
  ${PROJECT_SOURCE_DIR}/runtime/src/dfa
  ${PROJECT_SOURCE_DIR}/runtime/src/tree
  ${PROJECT_SOURCE_DIR}/runtime/src/support
  ${PROJECT_SOURCE_DIR}/oracle/generated
  ${PROJECT_SOURCE_DIR}/oracle/plsql
  ${PROJECT_SOURCE_DIR}/oracle
  )

#file(GLOB antlr4-oracle_SRC "${PROJECT_SOURCE_DIR}/oracle/generated/*")
set(antlr4-oracle_SRC 
  ${PROJECT_SOURCE_DIR}/oracle/main.cpp
  ${PROJECT_SOURCE_DIR}/oracle/plsql/from_clause_matcher_listener.cpp
  ${PROJECT_SOURCE_DIR}/oracle/plsql/oracle_parse_tree_walker.cpp
  ${antlr4-oracle-GENERATED_SRC}
  )

foreach(src_file ${antlr4-oracle_SRC})
      set_source_files_properties(
          ${src_file}
          PROPERTIES
          COMPILE_FLAGS "${COMPILE_FLAGS} ${flags_1}"
          )
endforeach(src_file ${antlr4-oracle_SRC})

# executable file name
add_executable(antlr4-oracle
  ${antlr4-oracle_SRC}
  )
#add_precompiled_header(antlr4-oracle ${PROJECT_SOURCE_DIR}/runtime/src/antlrcpp-Prefix.h)

if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
  target_compile_options(antlr4-oracle PRIVATE "/MT$<$<CONFIG:Debug>:d>")
endif()

add_dependencies(antlr4-oracle GenerateParser)

target_link_libraries(antlr4-oracle antlr4_static)

install(TARGETS antlr4-oracle 
        DESTINATION "share" 
        COMPONENT dev 
        )


# -*- mode:cmake -*-
if(NOT UNIX)
  message(WARNING "Unsupported operating system")
endif()

set(antlr4-mysql-GENERATED_SRC
   ${PROJECT_SOURCE_DIR}/mysql/generated/MySQLLexer.cpp 
   ${PROJECT_SOURCE_DIR}/mysql/generated/MySQLParser.cpp
   ${PROJECT_SOURCE_DIR}/mysql/generated/MySQLParserBaseListener.cpp
   ${PROJECT_SOURCE_DIR}/mysql/generated/MySQLParserBaseVisitor.cpp
   ${PROJECT_SOURCE_DIR}/mysql/generated/MySQLParserListener.cpp
   ${PROJECT_SOURCE_DIR}/mysql/generated/MySQLParserVisitor.cpp
 )

foreach(src_file ${antlr4-mysql-GENERATED_SRC})
      set_source_files_properties(
          ${src_file}
          PROPERTIES
          GENERATED TRUE
          )
endforeach(src_file ${antlr4-mysql-GENERATED_SRC})

add_compile_options(-gdwarf -g3)
add_custom_target(GenerateMySqlParser DEPENDS ${antlr4-mysql-GENERATED_SRC})

include_directories(
  ${PROJECT_SOURCE_DIR}/runtime/src
  ${PROJECT_SOURCE_DIR}/runtime/src/misc
  ${PROJECT_SOURCE_DIR}/runtime/src/atn
  ${PROJECT_SOURCE_DIR}/runtime/src/dfa
  ${PROJECT_SOURCE_DIR}/runtime/src/tree
  ${PROJECT_SOURCE_DIR}/runtime/src/support
  ${PROJECT_SOURCE_DIR}/mysql/generated
  ${PROJECT_SOURCE_DIR}/mysql/test
  ${PROJECT_SOURCE_DIR}/mysql/test/mysql_parser
  ${PROJECT_SOURCE_DIR}/mysql
  )

#file(GLOB antlr4-mysql_SRC "${PROJECT_SOURCE_DIR}/mysql/generated/*")
set(antlr4-mysql_SRC 
  ${PROJECT_SOURCE_DIR}/mysql/test/main.cpp
  ${antlr4-mysql-GENERATED_SRC}
  )

foreach(src_file ${antlr4-mysql_SRC})
      set_source_files_properties(
          ${src_file}
          PROPERTIES
          COMPILE_FLAGS "${COMPILE_FLAGS} ${flags_1}"
          )
endforeach(src_file ${antlr4-mysql_SRC})

# executable file name
add_executable(antlr4-mysql
  ${antlr4-mysql_SRC}
  )

add_dependencies(antlr4-mysql GenerateMySqlParser)

target_link_libraries(antlr4-mysql antlr4_static pthread)

install(TARGETS antlr4-mysql 
        DESTINATION "share" 
        COMPONENT dev 
        )


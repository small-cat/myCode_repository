# -*- mode:cmake -*-
if(NOT UNIX)
  message(WARNING "Unsupported operating system")
endif()

set(antlr4-plpgsql-GENERATED_SRC
   ${PROJECT_SOURCE_DIR}/plpgsql/generated/plpgsqlLexer.cpp 
   ${PROJECT_SOURCE_DIR}/plpgsql/generated/plpgsqlParser.cpp
   ${PROJECT_SOURCE_DIR}/plpgsql/generated/plpgsqlParserBaseListener.cpp
   ${PROJECT_SOURCE_DIR}/plpgsql/generated/plpgsqlParserBaseVisitor.cpp
   ${PROJECT_SOURCE_DIR}/plpgsql/generated/plpgsqlParserListener.cpp
   ${PROJECT_SOURCE_DIR}/plpgsql/generated/plpgsqlParserVisitor.cpp
 )

set(antlr4-plpgsql-deparate_debuginfo
  ${PROJECT_SOURCE_DIR}
  )

foreach(src_file ${antlr4-plpgsql-GENERATED_SRC})
      set_source_files_properties(
          ${src_file}
          PROPERTIES
          GENERATED TRUE
          )
endforeach(src_file ${antlr4-plpgsql-GENERATED_SRC})

add_compile_options(-gdwarf -g3)
add_custom_target(GenerateParserplpgsql DEPENDS ${antlr4-plpgsql-GENERATED_SRC})
add_custom_command(OUTPUT ${antlr4-plpgsql-GENERATED_SRC}
   COMMAND 
   ${CMAKE_COMMAND} -E make_directory ${PROJECT_SOURCE_DIR}/plpgsql/generated/
   COMMAND
   "${Java_JAVA_EXECUTABLE}" -jar ${ANTLR_JAR_LOCATION} -Dlanguage=Cpp -listener -visitor -o ${PROJECT_SOURCE_DIR}/plpgsql/generated/ ${PROJECT_SOURCE_DIR}/plpgsql/plpgsqlLexer.g4 ${PROJECT_SOURCE_DIR}/plpgsql/plpgsqlParser.g4
   WORKING_DIRECTORY "${CMAKE_BINARY_DIR}"
   DEPENDS ${PROJECT_SOURCE_DIR}/plpgsql/plpgsqlLexer.g4 ${PROJECT_SOURCE_DIR}/plpgsql/plpgsqlParser.g4
   )

include_directories(
  ${PROJECT_SOURCE_DIR}/runtime/src
  ${PROJECT_SOURCE_DIR}/runtime/src/misc
  ${PROJECT_SOURCE_DIR}/runtime/src/atn
  ${PROJECT_SOURCE_DIR}/runtime/src/dfa
  ${PROJECT_SOURCE_DIR}/runtime/src/tree
  ${PROJECT_SOURCE_DIR}/runtime/src/support
  ${PROJECT_SOURCE_DIR}/plpgsql/generated
  ${PROJECT_SOURCE_DIR}/plpgsql/gp_parser
  ${PROJECT_SOURCE_DIR}/plpgsql
  )

set(antlr4-plpgsql_SRC 
  ${PROJECT_SOURCE_DIR}/plpgsql/main.cpp
  ${antlr4-plpgsql-GENERATED_SRC}
  )

foreach(src_file ${antlr4-plpgsql_SRC})
      set_source_files_properties(
          ${src_file}
          PROPERTIES
          COMPILE_FLAGS "${COMPILE_FLAGS} ${flags_1}"
          )
endforeach(src_file ${antlr4-plpgsql_SRC})

# executable file name
add_executable(antlr4-plpgsql
  ${antlr4-plpgsql_SRC}
  )

add_custom_command(TARGET antlr4-plpgsql
  POST_BUILD
  COMMAND
  bash ${PROJECT_SOURCE_DIR}/plpgsql/separate_debug_info.sh antlr4-plpgsql
  )

add_dependencies(antlr4-plpgsql GenerateParserplpgsql)

target_link_libraries(antlr4-plpgsql antlr4_static)

install(TARGETS antlr4-plpgsql
        DESTINATION "share" 
        COMPONENT dev 
        )


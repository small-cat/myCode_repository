# -*- mode:cmake -*-
if(NOT UNIX)
  message(WARNING "Unsupported operating system")
endif()

set(antlr4-greenplum-GENERATED_SRC
   ${PROJECT_SOURCE_DIR}/greenplum/generated/KingbaseSqlLexer.cpp 
   ${PROJECT_SOURCE_DIR}/greenplum/generated/KingbaseSqlParser.cpp
   ${PROJECT_SOURCE_DIR}/greenplum/generated/KingbaseSqlParserBaseListener.cpp
   ${PROJECT_SOURCE_DIR}/greenplum/generated/KingbaseSqlParserBaseVisitor.cpp
   ${PROJECT_SOURCE_DIR}/greenplum/generated/KingbaseSqlParserListener.cpp
   ${PROJECT_SOURCE_DIR}/greenplum/generated/KingbaseSqlParserVisitor.cpp
 )

set(antlr4-greenplum-deparate_debuginfo
  ${PROJECT_SOURCE_DIR}
  )

foreach(src_file ${antlr4-greenplum-GENERATED_SRC})
      set_source_files_properties(
          ${src_file}
          PROPERTIES
          GENERATED TRUE
          )
endforeach(src_file ${antlr4-greenplum-GENERATED_SRC})

add_compile_options(-gdwarf -g3)
add_custom_target(GenerateParsergreenplum DEPENDS ${antlr4-greenplum-GENERATED_SRC})
add_custom_command(OUTPUT ${antlr4-greenplum-GENERATED_SRC}
   COMMAND 
   ${CMAKE_COMMAND} -E make_directory ${PROJECT_SOURCE_DIR}/greenplum/generated/
   COMMAND
   "${Java_JAVA_EXECUTABLE}" -jar ${ANTLR_JAR_LOCATION} -Dlanguage=Cpp -listener -visitor -o ${PROJECT_SOURCE_DIR}/greenplum/generated/ ${PROJECT_SOURCE_DIR}/greenplum/KingbaseSqlLexer.g4 ${PROJECT_SOURCE_DIR}/greenplum/KingbaseSqlParser.g4
   WORKING_DIRECTORY "${CMAKE_BINARY_DIR}"
   DEPENDS ${PROJECT_SOURCE_DIR}/greenplum/KingbaseSqlLexer.g4 ${PROJECT_SOURCE_DIR}/greenplum/KingbaseSqlParser.g4
   )

include_directories(
  ${PROJECT_SOURCE_DIR}/runtime/src
  ${PROJECT_SOURCE_DIR}/runtime/src/misc
  ${PROJECT_SOURCE_DIR}/runtime/src/atn
  ${PROJECT_SOURCE_DIR}/runtime/src/dfa
  ${PROJECT_SOURCE_DIR}/runtime/src/tree
  ${PROJECT_SOURCE_DIR}/runtime/src/support
  ${PROJECT_SOURCE_DIR}/greenplum/generated
  ${PROJECT_SOURCE_DIR}/greenplum/kingbaseparser
  ${PROJECT_SOURCE_DIR}/greenplum
  )

set(antlr4-greenplum_SRC 
  ${PROJECT_SOURCE_DIR}/greenplum/main.cpp
  ${antlr4-greenplum-GENERATED_SRC}
  )

foreach(src_file ${antlr4-greenplum_SRC})
      set_source_files_properties(
          ${src_file}
          PROPERTIES
          COMPILE_FLAGS "${COMPILE_FLAGS} ${flags_1}"
          )
endforeach(src_file ${antlr4-greenplum_SRC})

# executable file name
add_executable(antlr4-greenplum
  ${antlr4-greenplum_SRC}
  )

add_custom_command(TARGET antlr4-greenplum
  POST_BUILD
  COMMAND
  bash ${PROJECT_SOURCE_DIR}/greenplum/separate_debug_info.sh antlr4-greenplum
  )

add_dependencies(antlr4-greenplum GenerateParsergreenplum)

target_link_libraries(antlr4-greenplum antlr4_static)

install(TARGETS antlr4-greenplum
        DESTINATION "share" 
        COMPONENT dev 
        )


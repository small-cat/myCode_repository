# -*- mode:cmake -*-
if(NOT UNIX)
  message(WARNING "Unsupported operating system")
endif()

set(antlr4-replace_column-GENERATED_SRC
   ${PROJECT_SOURCE_DIR}/replace_column/generated/KingbaseSqlLexer.cpp 
   ${PROJECT_SOURCE_DIR}/replace_column/generated/KingbaseSqlParser.cpp
   ${PROJECT_SOURCE_DIR}/replace_column/generated/KingbaseSqlParserBaseListener.cpp
   ${PROJECT_SOURCE_DIR}/replace_column/generated/KingbaseSqlParserBaseVisitor.cpp
   ${PROJECT_SOURCE_DIR}/replace_column/generated/KingbaseSqlParserListener.cpp
   ${PROJECT_SOURCE_DIR}/replace_column/generated/KingbaseSqlParserVisitor.cpp
 )

set(antlr4-replace_column-deparate_debuginfo
  ${PROJECT_SOURCE_DIR}
  )

foreach(src_file ${antlr4-replace_column-GENERATED_SRC})
      set_source_files_properties(
          ${src_file}
          PROPERTIES
          GENERATED TRUE
          )
endforeach(src_file ${antlr4-replace_column-GENERATED_SRC})

add_compile_options(-gdwarf -g3)
add_custom_target(GenerateParserreplace_column DEPENDS ${antlr4-replace_column-GENERATED_SRC})
add_custom_command(OUTPUT ${antlr4-replace_column-GENERATED_SRC}
   COMMAND 
   ${CMAKE_COMMAND} -E make_directory ${PROJECT_SOURCE_DIR}/replace_column/generated/
   COMMAND
   "${Java_JAVA_EXECUTABLE}" -jar ${ANTLR_JAR_LOCATION} -Dlanguage=Cpp -listener -visitor -o ${PROJECT_SOURCE_DIR}/replace_column/generated/ ${PROJECT_SOURCE_DIR}/replace_column/KingbaseSqlLexer.g4 ${PROJECT_SOURCE_DIR}/replace_column/KingbaseSqlParser.g4
   WORKING_DIRECTORY "${CMAKE_BINARY_DIR}"
   DEPENDS ${PROJECT_SOURCE_DIR}/replace_column/KingbaseSqlLexer.g4 ${PROJECT_SOURCE_DIR}/replace_column/KingbaseSqlParser.g4
   )

include_directories(
  ${PROJECT_SOURCE_DIR}/runtime/src
  ${PROJECT_SOURCE_DIR}/runtime/src/misc
  ${PROJECT_SOURCE_DIR}/runtime/src/atn
  ${PROJECT_SOURCE_DIR}/runtime/src/dfa
  ${PROJECT_SOURCE_DIR}/runtime/src/tree
  ${PROJECT_SOURCE_DIR}/runtime/src/support
  ${PROJECT_SOURCE_DIR}/replace_column/generated
  ${PROJECT_SOURCE_DIR}/replace_column/kingbaseparser
  ${PROJECT_SOURCE_DIR}/replace_column
  )

set(antlr4-replace_column_SRC 
  ${PROJECT_SOURCE_DIR}/replace_column/main.cpp
  ${antlr4-replace_column-GENERATED_SRC}
  )

foreach(src_file ${antlr4-replace_column_SRC})
      set_source_files_properties(
          ${src_file}
          PROPERTIES
          COMPILE_FLAGS "${COMPILE_FLAGS} ${flags_1}"
          )
endforeach(src_file ${antlr4-replace_column_SRC})

# executable file name
add_executable(antlr4-replace_column
  ${antlr4-replace_column_SRC}
  )

add_custom_command(TARGET antlr4-replace_column
  POST_BUILD
  COMMAND
  bash ${PROJECT_SOURCE_DIR}/replace_column/separate_debug_info.sh antlr4-replace_column
  )

add_dependencies(antlr4-replace_column GenerateParserreplace_column)

target_link_libraries(antlr4-replace_column antlr4_static)

install(TARGETS antlr4-replace_column
        DESTINATION "share" 
        COMPONENT dev 
        )


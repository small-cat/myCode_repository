# -*- mode:cmake -*-
if(NOT UNIX)
  message(WARNING "Unsupported operating system")
endif()

set(antlr4-tool1-GENERATED_SRC
   ${PROJECT_SOURCE_DIR}/tool1/generated/Tool1Lexer.cpp 
   ${PROJECT_SOURCE_DIR}/tool1/generated/Tool1Parser.cpp
   ${PROJECT_SOURCE_DIR}/tool1/generated/Tool1ParserBaseListener.cpp
   ${PROJECT_SOURCE_DIR}/tool1/generated/Tool1ParserBaseVisitor.cpp
   ${PROJECT_SOURCE_DIR}/tool1/generated/Tool1ParserListener.cpp
   ${PROJECT_SOURCE_DIR}/tool1/generated/Tool1ParserVisitor.cpp
 )

foreach(src_file ${antlr4-tool1-GENERATED_SRC})
      set_source_files_properties(
          ${src_file}
          PROPERTIES
          GENERATED TRUE
          )
endforeach(src_file ${antlr4-tool1-GENERATED_SRC})

add_compile_options(-gdwarf -g3)
add_custom_target(GenerateTool1Parser DEPENDS ${antlr4-tool1-GENERATED_SRC})
add_custom_command(OUTPUT ${antlr4-tool1-GENERATED_SRC}
   COMMAND 
   ${CMAKE_COMMAND} -E make_directory ${PROJECT_SOURCE_DIR}/tool1/generated/
   COMMAND
   "${Java_JAVA_EXECUTABLE}" -jar ${ANTLR_JAR_LOCATION} -Werror -Dlanguage=Cpp -listener -visitor -o ${PROJECT_SOURCE_DIR}/tool1/generated/ ${PROJECT_SOURCE_DIR}/tool1/Tool1.g4
   WORKING_DIRECTORY "${CMAKE_BINARY_DIR}"
   DEPENDS ${PROJECT_SOURCE_DIR}/tool1/Tool1.g4
   )

include_directories(
  ${PROJECT_SOURCE_DIR}/runtime/src
  ${PROJECT_SOURCE_DIR}/runtime/src/misc
  ${PROJECT_SOURCE_DIR}/runtime/src/atn
  ${PROJECT_SOURCE_DIR}/runtime/src/dfa
  ${PROJECT_SOURCE_DIR}/runtime/src/tree
  ${PROJECT_SOURCE_DIR}/runtime/src/support
  ${PROJECT_SOURCE_DIR}/tool1/generated
  ${PROJECT_SOURCE_DIR}/tool1/plsql
  ${PROJECT_SOURCE_DIR}/tool1
  )

#file(GLOB antlr4-tool1_SRC "${PROJECT_SOURCE_DIR}/tool1/generated/*")
set(antlr4-tool1_SRC 
  ${PROJECT_SOURCE_DIR}/tool1/main.cpp
  ${PROJECT_SOURCE_DIR}/tool1/plsql/from_clause_matcher_listener.cpp
  ${PROJECT_SOURCE_DIR}/tool1/plsql/tool1_parse_tree_walker.cpp
  ${antlr4-tool1-GENERATED_SRC}
  )

foreach(src_file ${antlr4-tool1_SRC})
      set_source_files_properties(
          ${src_file}
          PROPERTIES
          COMPILE_FLAGS "${COMPILE_FLAGS} ${flags_1}"
          )
endforeach(src_file ${antlr4-tool1_SRC})

# executable file name
add_executable(antlr4-tool1
  ${antlr4-tool1_SRC}
  )
#add_precompiled_header(antlr4-tool1 ${PROJECT_SOURCE_DIR}/runtime/src/antlrcpp-Prefix.h)

if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
  target_compile_options(antlr4-tool1 PRIVATE "/MT$<$<CONFIG:Debug>:d>")
endif()

add_dependencies(antlr4-tool1 GenerateTool1Parser)

target_link_libraries(antlr4-tool1 antlr4_static)

install(TARGETS antlr4-tool1 
        DESTINATION "share" 
        COMPONENT dev 
        )


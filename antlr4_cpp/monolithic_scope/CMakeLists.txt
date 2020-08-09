# -*- mode:cmake -*-
if(NOT UNIX)
  message(WARNING "Unsupported operating system")
endif()

set(antlr4-monolithic_scope-GENERATED_SRC
   ${PROJECT_SOURCE_DIR}/monolithic_scope/generated/CymbolLexer.cpp 
   ${PROJECT_SOURCE_DIR}/monolithic_scope/generated/ymbolParser.cpp
   ${PROJECT_SOURCE_DIR}/monolithic_scope/generated/ymbolParserBaseListener.cpp
   ${PROJECT_SOURCE_DIR}/monolithic_scope/generated/ymbolParserBaseVisitor.cpp
   ${PROJECT_SOURCE_DIR}/monolithic_scope/generated/ymbolParserListener.cpp
   ${PROJECT_SOURCE_DIR}/monolithic_scope/generated/ymbolParserVisitor.cpp
 )

foreach(src_file ${antlr4-monolithic_scope-GENERATED_SRC})
      set_source_files_properties(
          ${src_file}
          PROPERTIES
          GENERATED TRUE
          )
endforeach(src_file ${antlr4-monolithic_scope-GENERATED_SRC})

add_compile_options(-gdwarf -g3)
add_custom_target(GenerateMonolithicScopeParser DEPENDS ${antlr4-monolithic_scope-GENERATED_SRC})
add_custom_command(OUTPUT ${antlr4-monolithic_scope-GENERATED_SRC}
   COMMAND 
   ${CMAKE_COMMAND} -E make_directory ${PROJECT_SOURCE_DIR}/monolithic_scope/generated/
   COMMAND
   "${Java_JAVA_EXECUTABLE}" -jar ${ANTLR_JAR_LOCATION} -Werror -Dlanguage=Cpp -listener -visitor -o ${PROJECT_SOURCE_DIR}/monolithic_scope/generated/ -package monolithic_scope ${PROJECT_SOURCE_DIR}/monolithic_scope/Cymbol.g4
   WORKING_DIRECTORY "${CMAKE_BINARY_DIR}"
   DEPENDS ${PROJECT_SOURCE_DIR}/monolithic_scope/Cymbol.g4
   )

include_directories(
  ${PROJECT_SOURCE_DIR}/runtime/src
  ${PROJECT_SOURCE_DIR}/runtime/src/misc
  ${PROJECT_SOURCE_DIR}/runtime/src/atn
  ${PROJECT_SOURCE_DIR}/runtime/src/dfa
  ${PROJECT_SOURCE_DIR}/runtime/src/tree
  ${PROJECT_SOURCE_DIR}/runtime/src/support
  ${PROJECT_SOURCE_DIR}/monolithic_scope/generated
  ${PROJECT_SOURCE_DIR}/monolithic_scope
  )

#file(GLOB antlr4-monolithic_scope_SRC "${PROJECT_SOURCE_DIR}/monolithic_scope/generated/*")
set(antlr4-monolithic_scope_SRC 
  ${PROJECT_SOURCE_DIR}/monolithic_scope/main.cpp
  ${antlr4-monolithic_scope-GENERATED_SRC}
  )

foreach(src_file ${antlr4-monolithic_scope_SRC})
      set_source_files_properties(
          ${src_file}
          PROPERTIES
          COMPILE_FLAGS "${COMPILE_FLAGS} ${flags_1}"
          )
endforeach(src_file ${antlr4-monolithic_scope_SRC})

# executable file name
add_executable(antlr4-monolithic_scope
  ${antlr4-monolithic_scope_SRC}
  )
#add_precompiled_header(antlr4-monolithic_scope ${PROJECT_SOURCE_DIR}/runtime/src/antlrcpp-Prefix.h)

if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
  target_compile_options(antlr4-monolithic_scope PRIVATE "/MT$<$<CONFIG:Debug>:d>")
endif()

add_dependencies(antlr4-monolithic_scope GenerateMonolithicScopeParser)

target_link_libraries(antlr4-monolithic_scope antlr4_static)

install(TARGETS antlr4-monolithic_scope 
        DESTINATION "share" 
        COMPONENT dev 
        )


# -*- mode:cmake -*-
if(NOT UNIX)
  message(WARNING "Unsupported operating system")
endif()

set(antlr4-expression-GENERATED_SRC
   ${PROJECT_SOURCE_DIR}/expression/generated/ExprLexer.cpp 
   ${PROJECT_SOURCE_DIR}/expression/generated/ExprParser.cpp
   ${PROJECT_SOURCE_DIR}/expression/generated/ExprBaseListener.cpp
   ${PROJECT_SOURCE_DIR}/expression/generated/ExprBaseVisitor.cpp
   ${PROJECT_SOURCE_DIR}/expression/generated/ExprListener.cpp
   ${PROJECT_SOURCE_DIR}/expression/generated/ExprVisitor.cpp
 )

foreach(src_file ${antlr4-expression-GENERATED_SRC})
      set_source_files_properties(
          ${src_file}
          PROPERTIES
          GENERATED TRUE
          )
endforeach(src_file ${antlr4-expression-GENERATED_SRC})

add_compile_options(-gdwarf -g3)
add_custom_target(GenerateExprParser DEPENDS ${antlr4-expression-GENERATED_SRC})
add_custom_command(OUTPUT ${antlr4-expression-GENERATED_SRC}
   COMMAND 
   ${CMAKE_COMMAND} -E make_directory ${PROJECT_SOURCE_DIR}/expression/generated/
   COMMAND
   "${Java_JAVA_EXECUTABLE}" -jar ${ANTLR_JAR_LOCATION} -Werror -Dlanguage=Cpp -listener -visitor -o ${PROJECT_SOURCE_DIR}/expression/generated/ ${PROJECT_SOURCE_DIR}/expression/Expr.g4
   WORKING_DIRECTORY "${CMAKE_BINARY_DIR}"
   DEPENDS ${PROJECT_SOURCE_DIR}/expression/Expr.g4
   )

include_directories(
  ${PROJECT_SOURCE_DIR}/runtime/src
  ${PROJECT_SOURCE_DIR}/runtime/src/misc
  ${PROJECT_SOURCE_DIR}/runtime/src/atn
  ${PROJECT_SOURCE_DIR}/runtime/src/dfa
  ${PROJECT_SOURCE_DIR}/runtime/src/tree
  ${PROJECT_SOURCE_DIR}/runtime/src/support
  ${PROJECT_SOURCE_DIR}/expression/generated
  ${PROJECT_SOURCE_DIR}/expression/expr_parser
  ${PROJECT_SOURCE_DIR}/expression
  )

#file(GLOB antlr4-expression_SRC "${PROJECT_SOURCE_DIR}/expression/generated/*")
set(antlr4-expression_SRC 
  ${PROJECT_SOURCE_DIR}/expression/main.cpp
  ${antlr4-expression-GENERATED_SRC}
  )

foreach(src_file ${antlr4-expression_SRC})
      set_source_files_properties(
          ${src_file}
          PROPERTIES
          COMPILE_FLAGS "${COMPILE_FLAGS} ${flags_1}"
          )
endforeach(src_file ${antlr4-expression_SRC})

# executable file name
add_executable(antlr4-expression
  ${antlr4-expression_SRC}
  )
#add_precompiled_header(antlr4-expression ${PROJECT_SOURCE_DIR}/runtime/src/antlrcpp-Prefix.h)

if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
  target_compile_options(antlr4-expression PRIVATE "/MT$<$<CONFIG:Debug>:d>")
endif()

add_dependencies(antlr4-expression GenerateExprParser)

target_link_libraries(antlr4-expression antlr4_static)

install(TARGETS antlr4-expression 
        DESTINATION "share" 
        COMPONENT dev 
        )


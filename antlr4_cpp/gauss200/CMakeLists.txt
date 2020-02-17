# -*- mode:cmake -*-
if(NOT UNIX)
  message(WARNING "Unsupported operating system")
endif()

set(antlr4-gauss200-GENERATED_SRC
   ${PROJECT_SOURCE_DIR}/gauss200/generated/Gauss200Lexer.cpp 
   ${PROJECT_SOURCE_DIR}/gauss200/generated/Gauss200Parser.cpp
   ${PROJECT_SOURCE_DIR}/gauss200/generated/Gauss200ParserBaseListener.cpp
   ${PROJECT_SOURCE_DIR}/gauss200/generated/Gauss200ParserBaseVisitor.cpp
   ${PROJECT_SOURCE_DIR}/gauss200/generated/Gauss200ParserListener.cpp
   ${PROJECT_SOURCE_DIR}/gauss200/generated/Gauss200ParserVisitor.cpp
 )

set(antlr4-gauss200-deparate_debuginfo
  ${PROJECT_SOURCE_DIR}
  )

foreach(src_file ${antlr4-gauss200-GENERATED_SRC})
      set_source_files_properties(
          ${src_file}
          PROPERTIES
          GENERATED TRUE
          )
endforeach(src_file ${antlr4-gauss200-GENERATED_SRC})

add_compile_options(-gdwarf -g3)
add_custom_target(GenerateParsergauss200 DEPENDS ${antlr4-gauss200-GENERATED_SRC})
add_custom_command(OUTPUT ${antlr4-gauss200-GENERATED_SRC}
   COMMAND 
   ${CMAKE_COMMAND} -E make_directory ${PROJECT_SOURCE_DIR}/gauss200/generated/
   COMMAND
   "${Java_JAVA_EXECUTABLE}" -jar ${ANTLR_JAR_LOCATION} -Dlanguage=Cpp -listener -visitor -o ${PROJECT_SOURCE_DIR}/gauss200/generated/ ${PROJECT_SOURCE_DIR}/gauss200/Gauss200Lexer.g4 ${PROJECT_SOURCE_DIR}/gauss200/Gauss200Parser.g4
   WORKING_DIRECTORY "${CMAKE_BINARY_DIR}"
   DEPENDS ${PROJECT_SOURCE_DIR}/gauss200/Gauss200Lexer.g4 ${PROJECT_SOURCE_DIR}/gauss200/Gauss200Parser.g4
   )

include_directories(
  ${PROJECT_SOURCE_DIR}/runtime/src
  ${PROJECT_SOURCE_DIR}/runtime/src/misc
  ${PROJECT_SOURCE_DIR}/runtime/src/atn
  ${PROJECT_SOURCE_DIR}/runtime/src/dfa
  ${PROJECT_SOURCE_DIR}/runtime/src/tree
  ${PROJECT_SOURCE_DIR}/runtime/src/support
  ${PROJECT_SOURCE_DIR}/gauss200/generated
  ${PROJECT_SOURCE_DIR}/gauss200/gs_parser
  ${PROJECT_SOURCE_DIR}/gauss200
  )

set(antlr4-gauss200_SRC 
  ${PROJECT_SOURCE_DIR}/gauss200/main.cpp
  ${antlr4-gauss200-GENERATED_SRC}
  )

foreach(src_file ${antlr4-gauss200_SRC})
      set_source_files_properties(
          ${src_file}
          PROPERTIES
          COMPILE_FLAGS "${COMPILE_FLAGS} ${flags_1}"
          )
endforeach(src_file ${antlr4-gauss200_SRC})

# executable file name
add_executable(antlr4-gauss200
  ${antlr4-gauss200_SRC}
  )

add_custom_command(TARGET antlr4-gauss200
  POST_BUILD
  COMMAND
  bash ${PROJECT_SOURCE_DIR}/gauss200/separate_debug_info.sh antlr4-gauss200
  )

add_dependencies(antlr4-gauss200 GenerateParsergauss200)

target_link_libraries(antlr4-gauss200 antlr4_static)

install(TARGETS antlr4-gauss200
        DESTINATION "share" 
        COMPONENT dev 
        )


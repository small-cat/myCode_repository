# -*- mode:cmake -*-
if(NOT UNIX)
  message(WARNING "Unsupported operating system")
endif()

set(antlr4-kingbase-GENERATED_SRC
   ${PROJECT_SOURCE_DIR}/kingbase/generated/KingbaseSqlLexer.cpp 
   ${PROJECT_SOURCE_DIR}/kingbase/generated/KingbaseSqlParser.cpp
   ${PROJECT_SOURCE_DIR}/kingbase/generated/KingbaseSqlParserBaseListener.cpp
   ${PROJECT_SOURCE_DIR}/kingbase/generated/KingbaseSqlParserBaseVisitor.cpp
   ${PROJECT_SOURCE_DIR}/kingbase/generated/KingbaseSqlParserListener.cpp
   ${PROJECT_SOURCE_DIR}/kingbase/generated/KingbaseSqlParserVisitor.cpp
 )

foreach(src_file ${antlr4-kingbase-GENERATED_SRC})
      set_source_files_properties(
          ${src_file}
          PROPERTIES
          GENERATED TRUE
          )
endforeach(src_file ${antlr4-kingbase-GENERATED_SRC})

add_compile_options(-gdwarf -g3)
add_custom_target(GenerateParserKingbase DEPENDS ${antlr4-kingbase-GENERATED_SRC})
add_custom_command(OUTPUT ${antlr4-kingbase-GENERATED_SRC}
   COMMAND 
   ${CMAKE_COMMAND} -E make_directory ${PROJECT_SOURCE_DIR}/kingbase/generated/
   COMMAND
   "${Java_JAVA_EXECUTABLE}" -jar ${ANTLR_JAR_LOCATION} -Dlanguage=Cpp -listener -visitor -o ${PROJECT_SOURCE_DIR}/kingbase/generated/ ${PROJECT_SOURCE_DIR}/kingbase/KingbaseSqlLexer.g4 ${PROJECT_SOURCE_DIR}/kingbase/KingbaseSqlParser.g4
   WORKING_DIRECTORY "${CMAKE_BINARY_DIR}"
   DEPENDS ${PROJECT_SOURCE_DIR}/kingbase/KingbaseSqlLexer.g4 ${PROJECT_SOURCE_DIR}/kingbase/KingbaseSqlParser.g4
   )

include_directories(
  ${PROJECT_SOURCE_DIR}/runtime/src
  ${PROJECT_SOURCE_DIR}/runtime/src/misc
  ${PROJECT_SOURCE_DIR}/runtime/src/atn
  ${PROJECT_SOURCE_DIR}/runtime/src/dfa
  ${PROJECT_SOURCE_DIR}/runtime/src/tree
  ${PROJECT_SOURCE_DIR}/runtime/src/support
  ${PROJECT_SOURCE_DIR}/kingbase/generated
  ${PROJECT_SOURCE_DIR}/kingbase/kingbaseparser
  ${PROJECT_SOURCE_DIR}/kingbase
  )

set(antlr4-kingbase_SRC 
  ${PROJECT_SOURCE_DIR}/kingbase/main.cpp
  ${antlr4-kingbase-GENERATED_SRC}
  )

foreach(src_file ${antlr4-kingbase_SRC})
      set_source_files_properties(
          ${src_file}
          PROPERTIES
          COMPILE_FLAGS "${COMPILE_FLAGS} ${flags_1}"
          )
endforeach(src_file ${antlr4-kingbase_SRC})

# executable file name
add_executable(antlr4-kingbase
  ${antlr4-kingbase_SRC}
  )

add_dependencies(antlr4-kingbase GenerateParserKingbase)

target_link_libraries(antlr4-kingbase antlr4_static)

install(TARGETS antlr4-kingbase 
        DESTINATION "share" 
        COMPONENT dev 
        )


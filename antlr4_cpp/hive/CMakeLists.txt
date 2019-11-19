# -*- mode:cmake -*-
if(NOT UNIX)
  message(WARNING "Unsupported operating system")
endif()

set(antlr4-hive-GENERATED_SRC
   ${PROJECT_SOURCE_DIR}/hive/generated/HplsqlLexer.cpp 
   ${PROJECT_SOURCE_DIR}/hive/generated/HplsqlParser.cpp
   ${PROJECT_SOURCE_DIR}/hive/generated/HplsqlBaseListener.cpp
   ${PROJECT_SOURCE_DIR}/hive/generated/HplsqlBaseVisitor.cpp
   ${PROJECT_SOURCE_DIR}/hive/generated/HplsqlListener.cpp
   ${PROJECT_SOURCE_DIR}/hive/generated/HplsqlVisitor.cpp
 )

set(antlr4-hive-deparate_debuginfo
  ${PROJECT_SOURCE_DIR}
  )

foreach(src_file ${antlr4-hive-GENERATED_SRC})
      set_source_files_properties(
          ${src_file}
          PROPERTIES
          GENERATED TRUE
          )
endforeach(src_file ${antlr4-hive-GENERATED_SRC})

add_compile_options(-gdwarf -g3)
add_custom_target(GenerateParser_hive DEPENDS ${antlr4-replace_column-GENERATED_SRC})
add_custom_command(OUTPUT ${antlr4-hive-GENERATED_SRC}
   COMMAND 
   ${CMAKE_COMMAND} -E make_directory ${PROJECT_SOURCE_DIR}/hive/generated/
   COMMAND
   "${Java_JAVA_EXECUTABLE}" -jar ${ANTLR_JAR_LOCATION} -Dlanguage=Cpp -listener -visitor -o ${PROJECT_SOURCE_DIR}/hive/generated/ ${PROJECT_SOURCE_DIR}/hive/Hplsql.g4
   WORKING_DIRECTORY "${CMAKE_BINARY_DIR}"
   DEPENDS ${PROJECT_SOURCE_DIR}/hive/Hplsql.g4 
   )

include_directories(
  ${PROJECT_SOURCE_DIR}/runtime/src
  ${PROJECT_SOURCE_DIR}/runtime/src/misc
  ${PROJECT_SOURCE_DIR}/runtime/src/atn
  ${PROJECT_SOURCE_DIR}/runtime/src/dfa
  ${PROJECT_SOURCE_DIR}/runtime/src/tree
  ${PROJECT_SOURCE_DIR}/runtime/src/support
  ${PROJECT_SOURCE_DIR}/hive/generated
  ${PROJECT_SOURCE_DIR}/hive/hqlparse
  ${PROJECT_SOURCE_DIR}/hive
  )

set(antlr4-hive_SRC 
  ${PROJECT_SOURCE_DIR}/hive/main.cpp
  ${PROJECT_SOURCE_DIR}/hive/hqlparse/IParser.cpp
  ${PROJECT_SOURCE_DIR}/hive/hqlparse/get_operate_info_listener.cpp
  ${antlr4-hive-GENERATED_SRC}
  )

foreach(src_file ${antlr4-hive_SRC})
      set_source_files_properties(
          ${src_file}
          PROPERTIES
          COMPILE_FLAGS "${COMPILE_FLAGS} ${flags_1}"
          )
endforeach(src_file ${antlr4-hive_SRC})

# executable file name
add_executable(antlr4-hive
  ${antlr4-hive_SRC}
  )

add_custom_command(TARGET antlr4-hive
  POST_BUILD
  COMMAND
  bash ${PROJECT_SOURCE_DIR}/hive/separate_debug_info.sh antlr4-hive
  )

add_dependencies(antlr4-hive GenerateParser_hive)

target_link_libraries(antlr4-hive antlr4_static)

install(TARGETS antlr4-hive
        DESTINATION "share" 
        COMPONENT dev 
        )


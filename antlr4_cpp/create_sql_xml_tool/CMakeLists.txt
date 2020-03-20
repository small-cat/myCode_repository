# -*- mode:cmake -*-
if(NOT UNIX)
  message(WARNING "Unsupported operating system")
endif()

set(antlr4-create_sql_xml_tool-GENERATED_SRC
   ${PROJECT_SOURCE_DIR}/create_sql_xml_tool/generated/SqlXmlLexer.cpp 
   ${PROJECT_SOURCE_DIR}/create_sql_xml_tool/generated/SqlXmlParser.cpp
   ${PROJECT_SOURCE_DIR}/create_sql_xml_tool/generated/SqlXmlParserBaseListener.cpp
   ${PROJECT_SOURCE_DIR}/create_sql_xml_tool/generated/SqlXmlParserBaseVisitor.cpp
   ${PROJECT_SOURCE_DIR}/create_sql_xml_tool/generated/SqlXmlParserListener.cpp
   ${PROJECT_SOURCE_DIR}/create_sql_xml_tool/generated/SqlXmlParserVisitor.cpp
 )

set(antlr4-create_sql_xml_tool-deparate_debuginfo
  ${PROJECT_SOURCE_DIR}
  )

foreach(src_file ${antlr4-create_sql_xml_tool-GENERATED_SRC})
      set_source_files_properties(
          ${src_file}
          PROPERTIES
          GENERATED TRUE
          )
endforeach(src_file ${antlr4-create_sql_xml_tool-GENERATED_SRC})

add_compile_options(-gdwarf -g3)
add_custom_target(GenerateParsercreate_sql_xml_tool DEPENDS ${antlr4-create_sql_xml_tool-GENERATED_SRC})
add_custom_command(OUTPUT ${antlr4-create_sql_xml_tool-GENERATED_SRC}
   COMMAND 
   ${CMAKE_COMMAND} -E make_directory ${PROJECT_SOURCE_DIR}/create_sql_xml_tool/generated/
   COMMAND
   "${Java_JAVA_EXECUTABLE}" -jar ${ANTLR_JAR_LOCATION} -Dlanguage=Cpp -listener -visitor -o ${PROJECT_SOURCE_DIR}/create_sql_xml_tool/generated/ ${PROJECT_SOURCE_DIR}/create_sql_xml_tool/SqlXmlLexer.g4 ${PROJECT_SOURCE_DIR}/create_sql_xml_tool/SqlXmlParser.g4
   WORKING_DIRECTORY "${CMAKE_BINARY_DIR}"
   DEPENDS ${PROJECT_SOURCE_DIR}/create_sql_xml_tool/SqlXmlLexer.g4 ${PROJECT_SOURCE_DIR}/create_sql_xml_tool/SqlXmlParser.g4
   )

include_directories(
  ${PROJECT_SOURCE_DIR}/runtime/src
  ${PROJECT_SOURCE_DIR}/runtime/src/misc
  ${PROJECT_SOURCE_DIR}/runtime/src/atn
  ${PROJECT_SOURCE_DIR}/runtime/src/dfa
  ${PROJECT_SOURCE_DIR}/runtime/src/tree
  ${PROJECT_SOURCE_DIR}/runtime/src/support
  ${PROJECT_SOURCE_DIR}/create_sql_xml_tool/generated
  ${PROJECT_SOURCE_DIR}/create_sql_xml_tool/sqlxml_parser
  ${PROJECT_SOURCE_DIR}/create_sql_xml_tool
  )

set(antlr4-create_sql_xml_tool_SRC 
  ${PROJECT_SOURCE_DIR}/create_sql_xml_tool/main.cpp
  ${antlr4-create_sql_xml_tool-GENERATED_SRC}
  )

foreach(src_file ${antlr4-create_sql_xml_tool_SRC})
      set_source_files_properties(
          ${src_file}
          PROPERTIES
          COMPILE_FLAGS "${COMPILE_FLAGS} ${flags_1}"
          )
endforeach(src_file ${antlr4-create_sql_xml_tool_SRC})

# executable file name
add_executable(antlr4-create_sql_xml_tool
  ${antlr4-create_sql_xml_tool_SRC}
  )

add_custom_command(TARGET antlr4-create_sql_xml_tool
  POST_BUILD
  COMMAND
  bash ${PROJECT_SOURCE_DIR}/create_sql_xml_tool/separate_debug_info.sh antlr4-create_sql_xml_tool
  )

add_dependencies(antlr4-create_sql_xml_tool GenerateParsercreate_sql_xml_tool)

target_link_libraries(antlr4-create_sql_xml_tool antlr4_static)

install(TARGETS antlr4-create_sql_xml_tool
        DESTINATION "share" 
        COMPONENT dev 
        )


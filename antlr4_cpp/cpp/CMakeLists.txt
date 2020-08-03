# -*- mode:cmake -*-
if(NOT UNIX)
  message(WARNING "Unsupported operating system")
endif()

set(antlr4-cpp-GENERATED_SRC
   ${PROJECT_SOURCE_DIR}/cpp/generated/CPP14Lexer.cpp 
   ${PROJECT_SOURCE_DIR}/cpp/generated/CPP14Parser.cpp
   ${PROJECT_SOURCE_DIR}/cpp/generated/CPP14BaseListener.cpp
   ${PROJECT_SOURCE_DIR}/cpp/generated/CPP14BaseVisitor.cpp
   ${PROJECT_SOURCE_DIR}/cpp/generated/CPP14Listener.cpp
   ${PROJECT_SOURCE_DIR}/cpp/generated/CPP14Visitor.cpp
 )

foreach(src_file ${antlr4-cpp-GENERATED_SRC})
      set_source_files_properties(
          ${src_file}
          PROPERTIES
          GENERATED TRUE
          )
endforeach(src_file ${antlr4-cpp-GENERATED_SRC})

add_compile_options(-gdwarf -g3)
add_custom_target(GenerateCppParser DEPENDS ${antlr4-cpp-GENERATED_SRC})
add_custom_command(OUTPUT ${antlr4-cpp-GENERATED_SRC}
   COMMAND 
   ${CMAKE_COMMAND} -E make_directory ${PROJECT_SOURCE_DIR}/cpp/generated/
   COMMAND
   "${Java_JAVA_EXECUTABLE}" -jar ${ANTLR_JAR_LOCATION} -Werror -Dlanguage=Cpp -listener -visitor -o ${PROJECT_SOURCE_DIR}/cpp/generated/ ${PROJECT_SOURCE_DIR}/cpp/CPP14.g4
   WORKING_DIRECTORY "${CMAKE_BINARY_DIR}"
   DEPENDS ${PROJECT_SOURCE_DIR}/cpp/CPP14.g4
   )

include_directories(
  ${PROJECT_SOURCE_DIR}/runtime/src
  ${PROJECT_SOURCE_DIR}/runtime/src/misc
  ${PROJECT_SOURCE_DIR}/runtime/src/atn
  ${PROJECT_SOURCE_DIR}/runtime/src/dfa
  ${PROJECT_SOURCE_DIR}/runtime/src/tree
  ${PROJECT_SOURCE_DIR}/runtime/src/support
  ${PROJECT_SOURCE_DIR}/cpp/generated
  ${PROJECT_SOURCE_DIR}/cpp/cpp_parser
  ${PROJECT_SOURCE_DIR}/cpp
  )

#file(GLOB antlr4-cpp_SRC "${PROJECT_SOURCE_DIR}/cpp/generated/*")
set(antlr4-cpp_SRC 
  ${PROJECT_SOURCE_DIR}/cpp/main.cpp
  ${antlr4-cpp-GENERATED_SRC}
  )

foreach(src_file ${antlr4-cpp_SRC})
      set_source_files_properties(
          ${src_file}
          PROPERTIES
          COMPILE_FLAGS "${COMPILE_FLAGS} ${flags_1}"
          )
endforeach(src_file ${antlr4-cpp_SRC})

# executable file name
add_executable(antlr4-cpp
  ${antlr4-cpp_SRC}
  )
#add_precompiled_header(antlr4-cpp ${PROJECT_SOURCE_DIR}/runtime/src/antlrcpp-Prefix.h)

if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
  target_compile_options(antlr4-cpp PRIVATE "/MT$<$<CONFIG:Debug>:d>")
endif()

add_dependencies(antlr4-cpp GenerateCppParser)

target_link_libraries(antlr4-cpp antlr4_static)

install(TARGETS antlr4-cpp 
        DESTINATION "share" 
        COMPONENT dev 
        )


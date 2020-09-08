# -*- mode:cmake -*-
if(NOT UNIX)
  message(WARNING "Unsupported operating system")
endif()

set(antlr4-math-GENERATED_SRC
   ${PROJECT_SOURCE_DIR}/math/generated/MathLexer.cpp 
   ${PROJECT_SOURCE_DIR}/math/generated/MathParser.cpp
   ${PROJECT_SOURCE_DIR}/math/generated/MathBaseListener.cpp
   ${PROJECT_SOURCE_DIR}/math/generated/MathBaseVisitor.cpp
   ${PROJECT_SOURCE_DIR}/math/generated/MathListener.cpp
   ${PROJECT_SOURCE_DIR}/math/generated/MathVisitor.cpp
 )

foreach(src_file ${antlr4-math-GENERATED_SRC})
      set_source_files_properties(
          ${src_file}
          PROPERTIES
          GENERATED TRUE
          )
endforeach(src_file ${antlr4-math-GENERATED_SRC})

add_compile_options(-gdwarf -g3)
add_custom_target(GenerateMathParser DEPENDS ${antlr4-math-GENERATED_SRC})
add_custom_command(OUTPUT ${antlr4-math-GENERATED_SRC}
   COMMAND 
   ${CMAKE_COMMAND} -E make_directory ${PROJECT_SOURCE_DIR}/math/generated/
   COMMAND
   "${Java_JAVA_EXECUTABLE}" -jar ${ANTLR_JAR_LOCATION} -Werror -Dlanguage=Cpp -listener -visitor -o ${PROJECT_SOURCE_DIR}/math/generated/ ${PROJECT_SOURCE_DIR}/math/Math.g4
   WORKING_DIRECTORY "${CMAKE_BINARY_DIR}"
   DEPENDS ${PROJECT_SOURCE_DIR}/math/Math.g4
   )

include_directories(
  ${PROJECT_SOURCE_DIR}/runtime/src
  ${PROJECT_SOURCE_DIR}/runtime/src/misc
  ${PROJECT_SOURCE_DIR}/runtime/src/atn
  ${PROJECT_SOURCE_DIR}/runtime/src/dfa
  ${PROJECT_SOURCE_DIR}/runtime/src/tree
  ${PROJECT_SOURCE_DIR}/runtime/src/support
  ${PROJECT_SOURCE_DIR}/math/generated
  ${PROJECT_SOURCE_DIR}/math/ast
  ${PROJECT_SOURCE_DIR}/math
  )

#file(GLOB antlr4-math_SRC "${PROJECT_SOURCE_DIR}/math/generated/*")
set(antlr4-math_SRC 
  ${PROJECT_SOURCE_DIR}/math/main.cpp
  ${antlr4-math-GENERATED_SRC}
  )

foreach(src_file ${antlr4-math_SRC})
      set_source_files_properties(
          ${src_file}
          PROPERTIES
          COMPILE_FLAGS "${COMPILE_FLAGS} ${flags_1}"
          )
endforeach(src_file ${antlr4-math_SRC})

# executable file name
add_executable(antlr4-math
  ${antlr4-math_SRC}
  )
#add_precompiled_header(antlr4-math ${PROJECT_SOURCE_DIR}/runtime/src/antlrcpp-Prefix.h)

if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
  target_compile_options(antlr4-math PRIVATE "/MT$<$<CONFIG:Debug>:d>")
endif()

add_dependencies(antlr4-math GenerateMathParser)

target_link_libraries(antlr4-math antlr4_static)

install(TARGETS antlr4-math 
        DESTINATION "share" 
        COMPONENT dev 
        )


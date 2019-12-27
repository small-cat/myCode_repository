# -*- mode:cmake -*-
if(NOT UNIX)
  message(WARNING "Unsupported operating system")
endif()

set(antlr4-dynamic_scope-GENERATED_SRC
  ${PROJECT_SOURCE_DIR}/dynamic_scope/generated/DynScopeLexer.cpp 
  ${PROJECT_SOURCE_DIR}/dynamic_scope/generated/DynScopeParser.cpp
  ${PROJECT_SOURCE_DIR}/dynamic_scope/generated/DynScopeBaseListener.cpp
  ${PROJECT_SOURCE_DIR}/dynamic_scope/generated/DynScopeBaseVisitor.cpp
  ${PROJECT_SOURCE_DIR}/dynamic_scope/generated/DynScopeListener.cpp
  ${PROJECT_SOURCE_DIR}/dynamic_scope/generated/DynScopeVisitor.cpp
 )

foreach(src_file ${antlr4-dynamic_scope-GENERATED_SRC})
      set_source_files_properties(
          ${src_file}
          PROPERTIES
          GENERATED TRUE
          )
endforeach(src_file ${antlr4-dynamic_scope-GENERATED_SRC})

add_custom_target(GenerateParserdynamic_scope DEPENDS ${antlr4-dynamic_scope-GENERATED_SRC})
add_custom_command(OUTPUT ${antlr4-dynamic_scope-GENERATED_SRC}
   COMMAND 
   ${CMAKE_COMMAND} -E make_directory ${PROJECT_SOURCE_DIR}/dynamic_scope/generated/
   COMMAND
   "${Java_JAVA_EXECUTABLE}" -jar ${ANTLR_JAR_LOCATION} -Werror -Dlanguage=Cpp -listener -visitor -o ${PROJECT_SOURCE_DIR}/dynamic_scope/generated/ ${PROJECT_SOURCE_DIR}/dynamic_scope/DynScope.g4 
   WORKING_DIRECTORY "${CMAKE_BINARY_DIR}"
   DEPENDS ${PROJECT_SOURCE_DIR}/dynamic_scope/DynScope.g4 
   )

include_directories(
  ${PROJECT_SOURCE_DIR}/runtime/src
  ${PROJECT_SOURCE_DIR}/runtime/src/misc
  ${PROJECT_SOURCE_DIR}/runtime/src/atn
  ${PROJECT_SOURCE_DIR}/runtime/src/dfa
  ${PROJECT_SOURCE_DIR}/runtime/src/tree
  ${PROJECT_SOURCE_DIR}/runtime/src/support
  ${PROJECT_SOURCE_DIR}/dynamic_scope/generated
  )

#file(GLOB antlr4-dynamic_scope_SRC "${PROJECT_SOURCE_DIR}/dynamic_scope/generated/*")
set(antlr4-dynamic_scope_SRC 
  ${PROJECT_SOURCE_DIR}/dynamic_scope/main.cpp
  ${antlr4-dynamic_scope-GENERATED_SRC}
  )

if(NOT CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
  set (flags_1 "-Wno-overloaded-virtual")
else()
  set (flags_1 "-MP /wd4251")
endif()

foreach(src_file ${antlr4-dynamic_scope_SRC})
      set_source_files_properties(
          ${src_file}
          PROPERTIES
          COMPILE_FLAGS "${COMPILE_FLAGS} ${flags_1}"
          )
endforeach(src_file ${antlr4-dynamic_scope_SRC})

add_executable(antlr4-dynamic_scope
  ${antlr4-dynamic_scope_SRC}
  )
#add_precompiled_header(antlr4-dynamic_scope ${PROJECT_SOURCE_DIR}/runtime/src/antlrcpp-Prefix.h)

if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
  target_compile_options(antlr4-dynamic_scope PRIVATE "/MT$<$<CONFIG:Debug>:d>")
endif()

add_dependencies(antlr4-dynamic_scope GenerateParserdynamic_scope)

target_link_libraries(antlr4-dynamic_scope antlr4_static)

install(TARGETS antlr4-dynamic_scope 
        DESTINATION "share" 
        COMPONENT dev 
        )


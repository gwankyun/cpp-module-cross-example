# cmake版本
cmake_minimum_required(VERSION 3.28...4.1)

# 項目名
project(module_cross LANGUAGES CXX)

set(msvc_options)

list(APPEND msvc_options "/Zc:__cplusplus")

add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:${msvc_options}>")

include(cmake/std.cmake)

#[[
add_library(dbg_module)
block()
  target_sources(dbg_module
    PRIVATE
      src/dbg_macro.h
      src/dbg_decl.hpp
      src/dbg.hpp
    PUBLIC FILE_SET CXX_MODULES FILES # clang要求公開
      src/dbg.ixx
  )
  target_link_libraries(dbg_module
    PRIVATE
      std
  )
  target_compile_features(dbg_module PRIVATE cxx_std_23)
endblock()
#]]

add_executable(main)
block()
  target_sources(main
    PRIVATE
      src/config.hpp
      # src/header_only_decl.hpp
      # src/header_only.hpp
      src/header_a.hpp
      src/header_module_a.hpp
      src/header_b.hpp
      src/static_a.h
      src/static_b.h
      src/static_a.cpp
      src/static_b.cpp
    PRIVATE FILE_SET CXX_MODULES FILES
      src/main.ixx
      # src/header_only.ixx
      src/module_a.ixx
      src/module_b.ixx
      src/header_module_a.ixx
  )
  target_link_libraries(main
    PRIVATE
      std
      ## dbg_module
  )
  target_compile_features(main PRIVATE cxx_std_23)
endblock()

#[[
add_library(static_lib)
block()
  target_sources(static_lib
    PRIVATE
      src/static_lib.h
      src/static_lib.cpp
  )
  target_link_libraries(static_lib
    PRIVATE
      std
      dbg_module
  )
  target_compile_features(static_lib PRIVATE cxx_std_23)
endblock()

add_library(static_lib_module)
block()
  target_sources(static_lib_module
    PRIVATE FILE_SET CXX_MODULES FILES
      src/static_lib.ixx
  )
  target_link_libraries(static_lib_module
    PRIVATE
      std
      dbg_module
  )
  target_compile_features(static_lib_module PRIVATE cxx_std_23)
endblock()

add_executable(main_static)
block()
  target_sources(main_static
    PRIVATE FILE_SET CXX_MODULES FILES
      src/main_static.ixx
  )
  target_link_libraries(main_static
    PRIVATE
      std
      static_lib
  )
  target_compile_features(main_static PRIVATE cxx_std_23)
endblock()
#]]

# cmake版本
cmake_minimum_required(VERSION 3.28...4.1)

# 項目名
project(module_cross LANGUAGES CXX)

include(cmake/std.cmake)

add_executable(main)
target_sources(main
  PRIVATE
    src/test.hpp
    src/config.hpp
    src/header_only_decl.hpp
    src/header_only.hpp
  PRIVATE FILE_SET CXX_MODULES FILES
    src/main.ixx
    src/header_only.ixx
)
target_link_libraries(main
  PRIVATE
    std
)
target_compile_features(main PRIVATE cxx_std_23)

add_library(static_lib)
target_sources(static_lib
  PRIVATE
    src/static_lib.h
    src/static_lib.cpp
)
target_compile_features(static_lib PRIVATE cxx_std_23)

add_executable(main_static)
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

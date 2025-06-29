# cmake版本
cmake_minimum_required(VERSION 3.28...4.1)

# 項目名
project(module_cross LANGUAGES CXX)

include(cmake/std.cmake)

add_executable(main)
target_sources(main
  PRIVATE FILE_SET CXX_MODULES FILES
    src/main.ixx
)
target_link_libraries(main
  PRIVATE
    std
)
target_compile_features(main PRIVATE cxx_std_23)

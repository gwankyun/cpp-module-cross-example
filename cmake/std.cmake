set(std_path "$ENV{STD_PATH}")
set(std_module "$ENV{STD_MODULE}")

if(CMAKE_CXX_COMPILER_ID STREQUAL "Clang" OR CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
  # 定义要执行的子 CMake 脚本路径
  set(sub_cmake_script "cmake/copy-std-module.cmake")

  # 使用 execute_process 执行子 CMake 脚本，并传递参数
  execute_process(
      COMMAND ${CMAKE_COMMAND}
        -DPROJECT_BINARY_DIR=${PROJECT_BINARY_DIR}
        -DSTD_PATH=${std_path}
        -DSTD_MODULE=${std_module}
        -P ${sub_cmake_script}
      WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
      RESULT_VARIABLE sub_cmake_result
      OUTPUT_VARIABLE sub_cmake_output
      ERROR_VARIABLE sub_cmake_error
  )

  # 检查命令执行结果
  if(NOT ${sub_cmake_result} EQUAL 0)
      message(FATAL_ERROR "Failed to execute sub CMake script: ${sub_cmake_error}")
  else()
      message(STATUS "Sub CMake script executed successfully: ${sub_cmake_output}")
  endif()
endif()

if(CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
  add_library(std_clang)
  target_sources(std_clang
    PUBLIC FILE_SET CXX_MODULES FILES
      ${PROJECT_BINARY_DIR}/$ENV{STD_MODULE}
  )
  target_include_directories(std_clang
    PRIVATE
      $ENV{STD_PATH}
  )
  target_compile_options(std_clang
    PRIVATE
      -Wno-reserved-identifier
      -Wno-reserved-module-identifier
  )
  target_compile_features(std_clang PRIVATE cxx_std_23)
endif()

if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
  set(CMAKE_EXPERIMENTAL_CXX_IMPORT_STD "a9e1cf81-9932-4810-974b-6eccaf14e457")
  add_library(std_gcc)
  target_sources(std_gcc
    PUBLIC FILE_SET CXX_MODULES FILES
      ${PROJECT_BINARY_DIR}/$ENV{STD_MODULE}
  )
  target_include_directories(std_gcc
    PRIVATE
      $ENV{STD_PATH}
  )
  target_compile_options(std_gcc
    PRIVATE
      # -fmodules
      # -fsearch-include-path
  )
  target_compile_features(std_gcc PRIVATE cxx_std_23)
endif()

add_library(std INTERFACE)
target_link_libraries(std
  INTERFACE
    $<$<CXX_COMPILER_ID:Clang>:std_clang>
    $<$<CXX_COMPILER_ID:GNU>:std_gcc>
)

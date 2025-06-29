# 定义要比较的两个文件路径
set(FILE1 "${STD_PATH}/${STD_MODULE}")
set(FILE2 "${PROJECT_BINARY_DIR}/${STD_MODULE}")

if(NOT EXISTS ${FILE2})
  message(STATUS "${FILE2} not EXISTS")
  file(COPY ${FILE1} DESTINATION "${PROJECT_BINARY_DIR}")
  return()
endif()

# 获取 FILE1 的时间戳
file(TIMESTAMP "${FILE1}" FILE1_TIMESTAMP "%s" UTC)
# 获取 FILE2 的时间戳
file(TIMESTAMP "${FILE2}" FILE2_TIMESTAMP "%s" UTC)

# 检查是否成功获取时间戳
if(NOT FILE1_TIMESTAMP OR NOT FILE2_TIMESTAMP)
    message(FATAL_ERROR "Failed to get file timestamps")
endif()

# 比较时间戳
if(FILE1_TIMESTAMP GREATER FILE2_TIMESTAMP)
    message(STATUS "${FILE1} is newer than ${FILE2}")
    file(COPY ${FILE1} DESTINATION "${PROJECT_BINARY_DIR}")
elseif(FILE1_TIMESTAMP LESS FILE2_TIMESTAMP)
    message(STATUS "${FILE1} is older than ${FILE2}")
else()
    message(STATUS "${FILE1} and ${FILE2} have the same modification time")
endif()

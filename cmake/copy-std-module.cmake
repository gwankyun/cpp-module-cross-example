set(FILE1 "${STD_PATH}/${STD_MODULE}")
set(FILE2 "${PROJECT_BINARY_DIR}/${STD_MODULE}")

file(COPY_FILE ${FILE1} ${FILE2} RESULT result ONLY_IF_DIFFERENT)

if(result EQUAL 0)
  return()
else()
  message(FATAL_ERROR "copy error")
endif()

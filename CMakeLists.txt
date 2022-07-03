cmake_minimum_required(VERSION 3.16)
project(Console LANGUAGES C)
set(CMAKE_C_STANDARD 99)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/target/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/target/lib)

aux_source_directory(${PROJECT_SOURCE_DIR}/Src SOURCE)
add_library(console ${SOURCE})
target_include_directories(console PUBLIC ${PROJECT_SOURCE_DIR}/Inc)

# main.c is for debug
add_executable(main ${PROJECT_SOURCE_DIR}/main.c)
# debug
target_link_libraries(main console)
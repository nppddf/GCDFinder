cmake_minimum_required(VERSION 3.28)
project(GCDFinder)

set(CMAKE_C_STANDARD 99)

set(SRC_FILES
    src/main.c
    src/InputReader.c
    src/EuclidianGCD.c)

add_executable(${PROJECT_NAME} ${SRC_FILES})

target_include_directories(${PROJECT_NAME} PRIVATE include)

target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -Werror)

target_link_libraries(${PROJECT_NAME} -lm)
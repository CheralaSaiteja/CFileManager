cmake_minimum_required(VERSION 3.0.0)
project(CFileManager VERSION 0.1.0 LANGUAGES C)

include(CTest)
enable_testing()

file(GLOB SRC src/*.c)

add_library(CFileManager ${SRC})

target_include_directories(${PROJECT_NAME} PUBLIC include/)
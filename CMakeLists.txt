cmake_minimum_required(VERSION 3.00)
project(warmup)
set(CMAKE_CXX_STANDARD 17)
include_directories(HEADER_FILES)
file(GLOB MAIN
    "source/main.cpp"
    )
add_executable(executable ${MAIN})
target_include_directories(executable PUBLIC headers/)
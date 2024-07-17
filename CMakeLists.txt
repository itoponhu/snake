cmake_minimum_required(VERSION 3.00)
project(snake)

set(CMAKE_CXX_STANDARD 17)

include_directories(HEADER_FILES)
file(GLOB MAIN
    "source/main.cpp"
    )
add_executable(executable ${MAIN})
target_include_directories(executable PUBLIC headers/)


find_package(X11 REQUIRED)
message(STATUS "X11_FOUND = ${X11_FOUND}")
message(STATUS "X11_INCLUDE_DIR = ${X11_INCLUDE_DIR}")
message(STATUS "X11_LIBRARIES = ${X11_LIBRARIES}")

include_directories(${X11_INCLUDE_DIR})

link_directories(${X11_LIBRARIES})

target_link_libraries(executable ${X11_LIBRARIES})
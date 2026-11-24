cmake_minimum_required(VERSION 3.16)
project(rbx-trade-tool CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(rbxtradetool
    src/main.cpp
    src/valuate.cpp
    src/history.cpp
    src/alerts.cpp
    src/cli.cpp
)

target_include_directories(rbxtradetool PRIVATE include)

if(WIN32)
    target_link_libraries(rbxtradetool PRIVATE userenv)
endif()

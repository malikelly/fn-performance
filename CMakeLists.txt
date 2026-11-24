cmake_minimum_required(VERSION 3.16)
project(fn-performance CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(fnperformance
    src/main.cpp
    src/tuner.cpp
    src/lagfix.cpp
    src/profiles.cpp
    src/cli.cpp
)

target_include_directories(fnperformance PRIVATE include)

if(WIN32)
    target_link_libraries(fnperformance PRIVATE userenv)
endif()

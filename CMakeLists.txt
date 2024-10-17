cmake_minimum_required(VERSION 3.5)

project(greeter LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(greeter main.cpp
    version.h)
target_include_directories(greeter PRIVATE third_party/rang/include)
target_include_directories(greeter PRIVATE third_party/cxxopts/include)

install(TARGETS greeter
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

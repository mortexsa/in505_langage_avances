cmake_minimum_required(VERSION 3.8)
project(exo3_3)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp CList.h CFile.h CPile.h)
add_executable(exo3_3 ${SOURCE_FILES})
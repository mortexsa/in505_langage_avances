cmake_minimum_required(VERSION 3.8)
project(exo3_2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        CFile.cpp
        CFile.h
        CList.cpp
        CList.h
        CPile.cpp
        CPile.h
        Main.cpp
        Makefile)

add_executable(exo3_2 ${SOURCE_FILES})
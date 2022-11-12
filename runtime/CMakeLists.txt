cmake_minimum_required(VERSION 3.23)
project(runtime)

set(CMAKE_CXX_STANDARD 11)

add_library(DaricRuntime SHARED
        Maths.cpp
        Print.cpp
        String.cpp
        Types.h)

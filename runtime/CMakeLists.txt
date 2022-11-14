cmake_minimum_required(VERSION 3.20)
project(runtime)

set(CMAKE_CXX_STANDARD 11)

add_library(DaricRuntimeShared SHARED
        Maths.cpp
        Print.cpp
        String.cpp
        Chrono.cpp
        Types.h
        Core.cpp)

add_library(DaricRuntimeStatic STATIC
        Maths.cpp
        Print.cpp
        String.cpp
        Chrono.cpp
        Types.h
        Core.cpp)

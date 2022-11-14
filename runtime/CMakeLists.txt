cmake_minimum_required(VERSION 3.23)
project(runtime)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_OSX_DEPLOYMENT_TARGET "10.15")

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

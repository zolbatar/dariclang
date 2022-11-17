cmake_minimum_required(VERSION 3.20)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_OSX_ARCHITECTURES arm64;x86_64)
project(runtime)

include(${CMAKE_SOURCE_DIR}/cmake-build-${CMAKE_BUILD_TYPE}/conanbuildinfo.cmake)
conan_basic_setup()

add_library(DaricRuntime STATIC
        Maths.cpp
        Print.cpp
        String.cpp
        Chrono.cpp
        Types.h
        Core.cpp)
target_link_libraries(DaricRuntime PRIVATE ${CONAN_LIBS})

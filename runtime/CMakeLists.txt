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
target_link_libraries(DaricRuntimeShared PRIVATE ${CONAN_LIBS})

add_library(DaricRuntimeStatic STATIC
        Maths.cpp
        Print.cpp
        String.cpp
        Chrono.cpp
        Types.h
        Core.cpp)
target_link_libraries(DaricRuntimeStatic PRIVATE ${CONAN_LIBS})

message(${PROJECT_BINARY_DIR})
add_custom_command(TARGET DaricRuntimeShared POST_BUILD COMMAND mv ${PROJECT_BINARY_DIR}/libDaricRuntimeShared.dylib ${PROJECT_BINARY_DIR}/bin)
add_custom_command(TARGET DaricRuntimeStatic POST_BUILD COMMAND mv ${PROJECT_BINARY_DIR}/libDaricRuntimeStatic.a ${PROJECT_BINARY_DIR}/bin)

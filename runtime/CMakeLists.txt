cmake_minimum_required(VERSION 3.20)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_OSX_ARCHITECTURES arm64;x86_64)
project(runtime)

include(${CMAKE_SOURCE_DIR}/cmake-build-${CMAKE_BUILD_TYPE}/conanbuildinfo.cmake)
conan_basic_setup()

# SDL
set(SDL2_DIR "/Users/daryl/GitHub/SDL/build/")
include_directories(${SDL2_DIR}/include)
add_library(sdl2-runtime STATIC IMPORTED)
SET_PROPERTY(TARGET sdl2-runtime PROPERTY IMPORTED_LOCATION ${SDL2_DIR}/SDL2/libSDL2.a)

# IMGUI
# IMGUI
set(IMGUI_DIR "/Users/daryl/Github/imgui")
include_directories(${IMGUI_DIR} ${IMGUI_DIR}/backends)

add_library(DaricRuntime STATIC
        UI/UISDL.cpp
        UI/Lodepng.cpp
        Maths.cpp
        Print.cpp
        String.cpp
        Chrono.cpp
        Types.h
        Core.cpp)
target_link_libraries(DaricRuntime PRIVATE ${CONAN_LIBS} sdl2-runtime)

cmake_minimum_required(VERSION 3.20)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_OSX_ARCHITECTURES arm64)
project(DaricRuntime)

include(${CMAKE_SOURCE_DIR}/cmake-build-${CMAKE_BUILD_TYPE}/conanbuildinfo.cmake)
conan_basic_setup()

# IMGUI
set(IMGUI_DIR "/Users/daryl/Github/imgui")
include_directories(${IMGUI_DIR} ${IMGUI_DIR}/backends)

# SDL
set(SDL2_DIR "/Users/daryl/GitHub/SDL/build/SDL2")
include_directories(${SDL2_DIR}/include ${SDL2_DIR}/include-config-)
add_library(sdl2-runtime STATIC IMPORTED)
SET_PROPERTY(TARGET sdl2-runtime PROPERTY IMPORTED_LOCATION ${SDL2_DIR}/libSDL2.a)

add_library(DaricRuntime STATIC
        main.cpp

        UI/UISDL.cpp
        UI/RenderShapes.cpp
        UI/Lodepng.cpp
        UI/Console/Console.cpp
        UI/Sprite.cpp
        UI/Text.cpp

        ${IMGUI_DIR}/imgui_draw.cpp
        ${IMGUI_DIR}/imgui_tables.cpp
        ${IMGUI_DIR}/imgui_widgets.cpp
        ${IMGUI_DIR}/imgui.cpp
        ${IMGUI_DIR}/backends/imgui_impl_sdl.cpp
        ${IMGUI_DIR}/backends/imgui_impl_opengl3.cpp

        Input/Input.cpp

        FontsText.cpp
        Sprites.cpp
        FileIO.cpp
        Maths.cpp
        Print.cpp
        String.cpp
        Chrono.cpp
        Random.cpp
        Types.h
        Core.cpp Gfx2D.cpp)
target_link_libraries(DaricRuntime PUBLIC ${CONAN_LIBS} sdl2-runtime)

cmake_minimum_required(VERSION 3.20)
set(CMAKE_CXX_STANDARD 20)
if (APPLE)
    set(CMAKE_OSX_ARCHITECTURES "arm64;x86_64")
    #set(CMAKE_OSX_ARCHITECTURES arm64)
    #set(CMAKE_OSX_ARCHITECTURES "arm64")
endif()
project(DaricRuntime)

include(${CMAKE_SOURCE_DIR}/cmake-build-${CMAKE_BUILD_TYPE}/conanbuildinfo.cmake)
conan_basic_setup()

if (APPLE)
    set(GITHUB /Users/daryl/Github)
else()
    set(GITHUB C:/Users/d_dud/GitHub)
endif()

# Packages
set(FREETYPE_DIR /usr/local)
set(CMAKE_FIND_LIBRARY_SUFFIXES ".a;*.dylib")
link_directories(/usr/local/lib)
find_package(zstd REQUIRED)
find_package(Freetype REQUIRED)
include_directories(${FREETYPE_INCLUDE_DIRS})
find_package(SDL2 REQUIRED)
set(FluidSynth_PATH ${GITHUB}/fluidsynth-sans-glib)
set(FluidSynth_INCLUDE_PATH ${FluidSynth_PATH}/include)
set(FluidSynth_LIBRARY /Users/daryl/GitHub/fluidsynth-sans-glib/src/libfluidsynth.a)
include_directories(${FluidSynth_INCLUDE_PATH})
find_package(SDL2_mixer REQUIRED)
find_package(assimp REQUIRED)

# IMGUI
set(IMGUI_DIR ${GITHUB}/imgui)
include_directories(${IMGUI_DIR} ${IMGUI_DIR}/backends)

add_library(DaricRuntime STATIC
        main.cpp

        UI/UISDL.cpp
        UI/RenderShapes.cpp
        UI/Lodepng.cpp
        UI/Console/Console.cpp
        UI/Sprite.cpp
        UI/Text.cpp
        Audio.cpp
        Config/Config.cpp
        Graphics3D.cpp
        Graphics3D/EngineWorld.cpp
        Graphics3D/EngineShapeSection.cpp
        Graphics3D/EngineShape.cpp
        Graphics3D/EngineOpenGL3SendObject.cpp
        Graphics3D/EngineOpenGL3.cpp
        ${IMGUI_DIR}/imgui_draw.cpp
        ${IMGUI_DIR}/imgui_tables.cpp
        ${IMGUI_DIR}/imgui_widgets.cpp
        ${IMGUI_DIR}/imgui.cpp
        ${IMGUI_DIR}/misc/freetype/imgui_freetype.cpp
        ${IMGUI_DIR}/backends/imgui_impl_sdl.cpp
        ${IMGUI_DIR}/backends/imgui_impl_opengl3.cpp
        Input/Input.cpp
        KeyboardMouse.cpp
        FontsText.cpp
        Sprites.cpp
        FileIO.cpp
        Maths.cpp
        Print.cpp
        String.cpp
        Chrono.cpp
        Random.cpp
        Types.h
        Core.cpp Gfx2D.cpp
        InputLine.cpp)
target_link_libraries(DaricRuntime PUBLIC
        ${FluidSynth_LIBRARY}
        ${SDL2_LIBRARIES}
        SDL2_mixer
        freetype
        ${ASSIMP_LIBRARIES})

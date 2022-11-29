cmake_minimum_required(VERSION 3.20)
set(CMAKE_CXX_STANDARD 20)
if (APPLE)
    set(CMAKE_OSX_ARCHITECTURES "arm64;x86_64")
    #set(CMAKE_OSX_ARCHITECTURES arm64)
endif()
project(DaricRuntime)

include(${CMAKE_SOURCE_DIR}/cmake-build-${CMAKE_BUILD_TYPE}/conanbuildinfo.cmake)
conan_basic_setup()

if (APPLE)
    set(GITHUB /Users/daryl/Github)
else()
    set(GITHUB C:/Users/d_dud/GitHub)
endif()

# IMGUI
set(IMGUI_DIR ${GITHUB}/imgui)
include_directories(${IMGUI_DIR} ${IMGUI_DIR}/backends)

# SDL
set(SDL2_DIR ${GITHUB}/SDL_BUILD)
add_library(sdl2-runtime STATIC IMPORTED)
if (APPLE)
    include_directories(${SDL2_DIR}/include ${SDL2_DIR}/include-config-)
    SET_PROPERTY(TARGET sdl2-runtime PROPERTY IMPORTED_LOCATION ${SDL2_DIR}/libSDL2.a)
else()
    include_directories(${SDL2_DIR}/include ${SDL2_DIR}/include-config-release)
    SET_PROPERTY(TARGET sdl2-runtime PROPERTY IMPORTED_LOCATION ${SDL2_DIR}/Release/SDL2-static.lib)
endif()

# ASSIMP
set(ASSIMP_DIR ${GITHUB}/assimp)
include_directories(${ASSIMP_DIR}/include)
add_library(assimp-runtime STATIC IMPORTED)
if (APPLE)
    SET_PROPERTY(TARGET assimp-runtime PROPERTY IMPORTED_LOCATION ${ASSIMP_DIR}/lib/libassimp.a)
else()
    SET_PROPERTY(TARGET assimp-runtime PROPERTY IMPORTED_LOCATION ${ASSIMP_DIR}/lib/Release/assimp-vc143-mt.lib)
endif()

add_library(DaricRuntime STATIC
        main.cpp

        UI/UISDL.cpp
        UI/RenderShapes.cpp
        UI/Lodepng.cpp
        UI/Console/Console.cpp
        UI/Sprite.cpp
        UI/Text.cpp

        Audio.cpp
        Sound/SoftSynth.cpp
        Sound/SoundGenerator.cpp
        Sound/Synthesizer.cpp
        Sound/generators/Instrument.cpp
        Sound/generators/InstrumentCustom.cpp
        Sound/generators/MonophonicInstrument.cpp
        Sound/generators/PolyphonicInstrument.cpp
        Sound/generators/PolyphonicInstrumentCustom.cpp
        Sound/generators/Sequencer.cpp
        Sound/generators/Tone.cpp
        Sound/generators/ToneCustom.cpp
        Sound/middleware/WAVWriter.cpp
        Sound/utils/Envelope.cpp
        Sound/utils/Waveforms.cpp

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
        Core.cpp Gfx2D.cpp)
target_link_libraries(DaricRuntime PUBLIC ${CONAN_LIBS} sdl2-runtime assimp-runtime)

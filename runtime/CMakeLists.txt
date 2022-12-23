cmake_minimum_required(VERSION 3.20)
set(CMAKE_CXX_STANDARD 20)
if (APPLE)
#    set(CMAKE_OSX_ARCHITECTURES "arm64;x86_64")
    #set(CMAKE_OSX_ARCHITECTURES arm64)
    #set(CMAKE_OSX_ARCHITECTURES "arm64")
endif()
message(STATUS "Build type: ${CMAKE_BUILD_TYPE}")
EXECUTE_PROCESS(COMMAND uname -m COMMAND tr -d '\n' OUTPUT_VARIABLE ARCHITECTURE)
message(STATUS "Architecture: ${ARCHITECTURE}")
message(STATUS "Architectures: ${CMAKE_OSX_ARCHITECTURES}")
message(STATUS "Library path: ${CMAKE_LIBRARY_PATH}")
message(STATUS "Prefix path: ${CMAKE_PREFIX_PATH}")
if (APPLE)
    set(triplet daric)
    link_directories(${VCPKG_INSTALLED_DIR}/${triplet}/lib)
elseif(WIN32)
    set(triplet x64-windows-static)
    set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
    message(STATUS ${CMAKE_CXX_FLAGS})
    message(STATUS ${CMAKE_CXX_FLAGS_DEBUG})
    message(STATUS ${CMAKE_CXX_FLAGS_RELEASE})
    SET(CMAKE_CXX_FLAGS "/DWIN32 /D_WINDOWS /EHsc")
    SET(CMAKE_CXX_FLAGS_DEBUG "/Zi /Ob0 /Od /RTC1 /EHsc")
    SET(CMAKE_CXX_FLAGS_RELEASE  "/EHsc /MT")
    if (CMAKE_BUILD_TYPE STREQUAL "Release")
        link_directories(${VCPKG_INSTALLED_DIR}/${triplet}/lib)
    else()
        link_directories(${VCPKG_INSTALLED_DIR}/${triplet}/debug/lib)
    endif()
endif()
include_directories(${VCPKG_INSTALLED_DIR}/${triplet}/include)
project(DaricRuntime)
find_package(Freetype REQUIRED)
find_package(SDL2 CONFIG REQUIRED)
if (APPLE)
    include_directories(${VCPKG_INSTALLED_DIR}/${triplet}/include/antlr4-runtime)
elseif(WIN32)
    set(FluidSynth_LIBRARY ${VCPKG_INSTALLED_DIR}/${triplet}/lib/libfluidsynth.lib)
    include_directories(${VCPKG_INSTALLED_DIR}/${triplet}/include/antlr4-runtime)
    find_package(GLEW CONFIG REQUIRED)
endif()
find_package(SDL2_mixer CONFIG REQUIRED)
find_package(imgui CONFIG REQUIRED)
find_package(assimp CONFIG REQUIRED)
find_package(glm CONFIG REQUIRED)

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
if (APPLE)
    target_link_libraries(${PROJECT_NAME} PRIVATE
            "-framework OpenGL"
            xar
            intl
            iconv
            glib-2.0
            fluidsynth
            Freetype::Freetype
            SDL2::SDL2main
            SDL2::SDL2-static
            $<IF:$<TARGET_EXISTS:SDL2_mixer::SDL2_mixer>,SDL2_mixer::SDL2_mixer,SDL2_mixer::SDL2_mixer-static>
            modplug
            imgui::imgui
            assimp::assimp
            glm::glm)
elseif(WIN32)
    target_link_libraries(${PROJECT_NAME} PRIVATE
            OpenGL32
            GlU32
            GLEW::GLEW
            intl
            iconv
            glib-2.0
            dsound
            ws2_32
            wldap32
            crypt32
            ksuser
            libfluidsynth
            Freetype::Freetype
            SDL2::SDL2main
            SDL2::SDL2-static
            $<IF:$<TARGET_EXISTS:SDL2_mixer::SDL2_mixer>,SDL2_mixer::SDL2_mixer,SDL2_mixer::SDL2_mixer-static>
            modplug
            imgui::imgui
            assimp::assimp
            glm::glm)
endif()
if (APPLE)
    add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD COMMAND cp ${PROJECT_BINARY_DIR}/lib/libDaricRuntime.a /Users/daryl/Shared/Daric/mac/)
    add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD COMMAND cp ${VCPKG_INSTALLED_DIR}/${triplet}/lib/libmodplug.a /Users/daryl/Shared/Daric/mac/)
    add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD COMMAND cp ${VCPKG_INSTALLED_DIR}/${triplet}/lib/libglib-2.0.a /Users/daryl/Shared/Daric/mac/)
    add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD COMMAND cp ${VCPKG_INSTALLED_DIR}/${triplet}/lib/libz.a /Users/daryl/Shared/Daric/mac/)
    add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD COMMAND cp ${VCPKG_INSTALLED_DIR}/${triplet}/lib/libminizip.a /Users/daryl/Shared/Daric/mac/)
    add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD COMMAND cp ${VCPKG_INSTALLED_DIR}/${triplet}/lib/libSDL2.a /Users/daryl/Shared/Daric/mac/)
    add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD COMMAND cp ${VCPKG_INSTALLED_DIR}/${triplet}/lib/libassimp.a /Users/daryl/Shared/Daric/mac/)
    add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD COMMAND cp ${VCPKG_INSTALLED_DIR}/${triplet}/lib/libSDL2_mixer.a /Users/daryl/Shared/Daric/mac/)
    add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD COMMAND cp ${VCPKG_INSTALLED_DIR}/${triplet}/lib/libfreetype.a /Users/daryl/Shared/Daric/mac/)
    add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD COMMAND cp ${VCPKG_INSTALLED_DIR}/${triplet}/lib/libpugixml.a /Users/daryl/Shared/Daric/mac/)
    add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD COMMAND cp ${FluidSynth_LIBRARY} /Users/daryl/Shared/Daric/mac/)
endif()
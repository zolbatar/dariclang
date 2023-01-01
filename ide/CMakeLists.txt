cmake_minimum_required(VERSION 3.20)
if (APPLE)
    #set(CMAKE_OSX_ARCHITECTURES "arm64;x86_64")
    #set(CMAKE_OSX_ARCHITECTURES "x86_64")
    #set(CMAKE_OSX_ARCHITECTURES "arm64")
endif ()
set(CMAKE_CXX_STANDARD 20)
message(STATUS "Build type: ${CMAKE_BUILD_TYPE}")
EXECUTE_PROCESS(COMMAND uname -m COMMAND tr -d '\n' OUTPUT_VARIABLE ARCHITECTURE)
message(STATUS "Architecture: ${ARCHITECTURE}")
message(STATUS "Architectures: ${CMAKE_OSX_ARCHITECTURES}")
message(STATUS "Library path: ${CMAKE_LIBRARY_PATH}")
message(STATUS "Prefix path: ${CMAKE_PREFIX_PATH}")
message(STATUS "Vcpkg path: ${VCPKG_INSTALLED_DIR}")
if (APPLE)
    set(triplet daric)
    link_directories(${VCPKG_INSTALLED_DIR}/${triplet}/lib)
    add_compile_options(-Wno-reorder-ctor -Wno-unknown-pragmas -Wno-covered-switch-default -Wno-missing-field-initializers -Wno-implicit-fallthrough)
elseif (WIN32)
    set(triplet x64-windows-static)
    set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
    message(STATUS ${CMAKE_CXX_FLAGS})
    message(STATUS ${CMAKE_CXX_FLAGS_DEBUG})
    message(STATUS ${CMAKE_CXX_FLAGS_RELEASE})
    SET(CMAKE_CXX_FLAGS "/DWIN32 /D_WINDOWS /EHsc")
    SET(CMAKE_CXX_FLAGS "/DWIN32 /D_WINDOWS /EHsc")
    SET(CMAKE_CXX_FLAGS_DEBUG "/Zi /Ob0 /Od /RTC1 /EHsc")
    SET(CMAKE_CXX_FLAGS_RELEASE "/EHsc /MT")
    if (CMAKE_BUILD_TYPE STREQUAL "Release")
        link_directories(${VCPKG_INSTALLED_DIR}/${triplet}/lib)
    else ()
        link_directories(${VCPKG_INSTALLED_DIR}/${triplet}/debug/lib)
    endif ()
endif ()
include_directories(${VCPKG_INSTALLED_DIR}/${triplet}/include)
project(IDE)
#find_package(Freetype REQUIRED)
find_package(SDL2 CONFIG REQUIRED)
find_package(imgui CONFIG REQUIRED)
if (APPLE)
elseif(WIN32)
    find_package(GLEW CONFIG REQUIRED)
endif()

cmake_minimum_required(VERSION 3.24)
project(IDE)

set(CMAKE_CXX_STANDARD 20)

add_executable(${PROJECT_NAME}
        ../runtime/Library/StringLib.cpp
        ../runtime/Config/Config.cpp
        UI/UISDL.cpp
        UI/Lodepng.cpp
        IDE/Edit.cpp
        IDE/EditButtons.cpp
        IDE/TextEditor.cpp
        IDE/ImGuiFileDialog/ImGuiFileDialog.cpp
        main.cpp Exception/Exception.h)

if (APPLE)
    target_link_libraries(${PROJECT_NAME} PRIVATE
            "-framework OpenGL"
            xar
            iconv
            glib-2.0
            fluidsynth
            SDL2::SDL2main
            SDL2::SDL2-static
            imgui::imgui)
elseif (WIN32)
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
            SDL2::SDL2main
            SDL2::SDL2-static
            imgui::imgui)
endif ()
if(APPLE)
    install(TARGETS ${PROJECT_NAME}
            RUNTIME DESTINATION mac
            LIBRARY DESTINATION mac
            ARCHIVE DESTINATION mac)
else()
    install(TARGETS ${PROJECT_NAME}
            RUNTIME DESTINATION win
            LIBRARY DESTINATION win
            ARCHIVE DESTINATION win)
endif()

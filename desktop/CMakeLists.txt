cmake_minimum_required(VERSION 3.20)
if (APPLE)
    #set(CMAKE_OSX_ARCHITECTURES "arm64;x86_64")
    set(CMAKE_OSX_ARCHITECTURES "x86_64")
    #set(CMAKE_OSX_ARCHITECTURES "arm64")
endif()
set(CMAKE_CXX_STANDARD 20)
project(Daric)
message(STATUS "Build type: ${CMAKE_BUILD_TYPE}")

#add_compile_definitions(MUSIC_MID_FLUIDSYNTH=1)

EXECUTE_PROCESS(COMMAND uname -m COMMAND tr -d '\n' OUTPUT_VARIABLE ARCHITECTURE)
message(STATUS "Architecture: ${ARCHITECTURE}")
message(STATUS "Architectures: ${CMAKE_OSX_ARCHITECTURES}")

include(${CMAKE_SOURCE_DIR}/cmake-build-${CMAKE_BUILD_TYPE}/conanbuildinfo.cmake)
conan_basic_setup()

if (APPLE)
    set(GITHUB /Users/daryl/Github)
else()
    set(GITHUB C:/Users/d_dud/GitHub)
endif()

# Antlr4
if (APPLE)
    include_directories(/usr/local/include/antlr4-runtime)
else()
endif()

# IMGUI
set(IMGUI_DIR ${GITHUB}/imgui)
include_directories(${IMGUI_DIR} ${IMGUI_DIR}/backends)

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
find_package(LLVM REQUIRED CONFIG)
llvm_map_components_to_libnames(LLVM_LIBS support core)
message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")
execute_process(COMMAND llvm-config --libs OUTPUT_VARIABLE LLVM_LIBS OUTPUT_STRIP_TRAILING_WHITESPACE)
execute_process(COMMAND llvm-config --system-libs OUTPUT_VARIABLE LLVM_SYSTEM_LIBS OUTPUT_STRIP_TRAILING_WHITESPACE)
set(LLD_LIBS -llldCommon -llldELF -llldMachO)
message(STATUS ${LLVM_LIBS})
message(STATUS ${LLVM_SYSTEM_LIBS})
message(STATUS ${LLD_LIBS})

# Fluidsynth
#set(FLUIDSYNTH_DIR ${GITHUB}/fluidsynth)
#include_directories(${FLUIDSYNTH_DIR}/include)

# IMGUI
set(IMGUI_DIR ${GITHUB}/imgui)
include_directories(${IMGUI_DIR} ${IMGUI_DIR}/backends)

add_executable(${PROJECT_NAME}
        main.cpp
        ${IMGUI_DIR}/imgui_demo.cpp
        ${IMGUI_DIR}/imgui_draw.cpp
        ${IMGUI_DIR}/imgui_tables.cpp
        ${IMGUI_DIR}/imgui_widgets.cpp
        ${IMGUI_DIR}/imgui.cpp
        ${IMGUI_DIR}/misc/freetype/imgui_freetype.cpp
        ${IMGUI_DIR}/backends/imgui_impl_sdl.cpp
        ${IMGUI_DIR}/backends/imgui_impl_opengl3.cpp
        ../runtime/KeyboardMouse.cpp
        ../runtime/FontsText.cpp
        ../runtime/FileIO.cpp
        ../runtime/Random.cpp
        ../runtime/String.cpp
        ../runtime/Maths.cpp
        ../runtime/Print.cpp
        ../runtime/InputLine.cpp
        ../runtime/String.cpp
        ../runtime/Chrono.cpp
        ../runtime/Core.cpp
        ../runtime/Gfx2D.cpp
        ../runtime/UI/Console/Console.cpp
        ../runtime/UI/Console/Console.h
        ../runtime/UI/UISDL.cpp
        ../runtime/UI/UISDL.h
        ../runtime/UI/RenderShapes.cpp
        ../runtime/UI/RenderShapes.h
        ../runtime/UI/Lodepng.cpp
        ../runtime/UI/Sprite.cpp
        ../runtime/UI/Text.cpp
        ../runtime/Input/Input.cpp
        ../runtime/Input/Input.h
        ../runtime/Sprites.cpp
        ../runtime/Graphics3D.cpp
        ../runtime/Graphics3D/EngineOpenGL3.cpp
        ../runtime/Graphics3D/EngineOpenGL3SendObject.cpp
        ../runtime/Graphics3D/EngineShape.cpp
        ../runtime/Graphics3D/EngineShapeSection.cpp
        ../runtime/Graphics3D/EngineWorld.cpp
        ../runtime/Audio.cpp
        IDE/TextEditor.cpp
        IDE/TextEditor.h
        IDE/Edit.cpp
        IDE/Edit.h
        IDE/ImGuiFileDialog/ImGuiFileDialogConfig.h
        IDE/ImGuiFileDialog/ImGuiFileDialog.h
        IDE/ImGuiFileDialog/ImGuiFileDialog.cpp
        Library/StringLib.h
        Library/StringLib.cpp
        Compiler/CompilerOptions.h
        Compiler/Compiler.cpp
        Compiler/Compiler.h
        Compiler/CompilerOption.cpp
        Compiler/CompilerPrint.cpp
        Compiler/CompilerProcedure.cpp
        Compiler/CompilerIf.cpp
        Compiler/CompilerVariables.cpp
        Compiler/CompilerExpression.cpp
        Compiler/CompilerStructs.cpp
        Compiler/CompilerLooping.cpp
        Compiler/CompilerCase.cpp
        Compiler/CompilerLibrary.cpp
        Compiler/CompilerConstants.cpp
        Compiler/CompilerRead.cpp
        LLVM/CompilerLLVM.cpp
        LLVM/CompilerLLVMRun.cpp
        LLVM/CompilerLLVMVariables.cpp
        LLVM/CompilerLLVMTypes.cpp
        LLVM/CompilerLLVMCalls.cpp
        LLVM/CompilerLLVMMaths.cpp
        LLVM/CompilerLLVMComparison.cpp
        LLVM/CompilerLLVMBoolean.cpp
        LLVM/CompilerLLVMBlocks.cpp
        LLVM/CompilerLLVMArrays.cpp
        LLVM/CompilerLLVMStructs.cpp
        JIT/JIT.cpp
        Parser/Parser.h
        Parser/Parser.cpp
        Parser/ParserCore.cpp
        Parser/ParserErrorListener.h
        Parser/ParserToken.h
        Parser/ParserTokenType.h
        Parser/ParserLiteral.cpp
        Parser/Core/ParserAssignment.cpp
        Parser/Core/ParserExpression.cpp
        Parser/Core/ParserFunctions.cpp
        Parser/Core/ParserType.cpp
        Parser/Core/ParserVariable.cpp
        Parser/Core/ParserStatements.cpp
        Parser/Tokens/ParserSTRUCT.cpp
        Parser/Tokens/ParserIF.cpp
        Parser/Tokens/ParserMODULE.cpp
        Parser/Tokens/ParserPRINT.cpp
        Parser/Tokens/ParserCONST.cpp
        Parser/Tokens/ParserSWAP.cpp
        Parser/Tokens/ParserDIM.cpp
        Parser/Tokens/ParserREPEAT.cpp
        Parser/Tokens/ParserWHILE.cpp
        Parser/Tokens/ParserFOR.cpp
        Parser/Tokens/ParserCASE.cpp
        Parser/Tokens/ParserDATA.cpp
        Shared/Shared.h
        Shared/Shared.cpp
        Shared/SourceFile.cpp
        Shared/SourceFile.h
        Variables/PrimitiveTypes.h
        Variables/Reference.h
        Variables/Reference.cpp
        Variables/Instance.cpp
        Variables/Instance.h
        Variables/InstancePrimitive.cpp
        Variables/InstancePrimitive.h
        Variables/InstanceConstant.cpp
        Variables/InstanceConstant.h
        Variables/InstancePrimitiveArray.cpp
        Variables/InstancePrimitiveArray.h
        Variables/InstanceRecord.cpp
        Variables/InstanceRecord.h
        Variables/InstanceRecordArray.cpp
        Variables/InstanceRecordArray.h
        Grammar/DaricBaseVisitor.cpp
        Grammar/DaricLexer.cpp
        Grammar/DaricParser.cpp
        Grammar/DaricVisitor.cpp
        Library/json.hpp
        IDE/EditButtons.cpp
        Config/Config.cpp Parser/Tokens/ParserINPUT.cpp Compiler/CompilerInput.cpp)
if (APPLE)
    target_link_libraries(${PROJECT_NAME} PRIVATE
            ${CONAN_LIBS}
            "-framework OpenGL"
            "-framework Cocoa"
            "-framework Carbon"
            "-framework CoreAudio"
            "-framework CoreVideo"
            "-framework CoreMIDI"
            "-framework ForceFeedback"
            "-framework Metal"
            "-framework IOKit"
            "-framework GameKit"
            "-framework AudioToolbox"
            "-framework CoreHaptics"
            antlr4-runtime.a
            xar
            iconv
            ${FluidSynth_LIBRARY}
            ${SDL2_LIBRARIES}
            SDL2_mixer
            freetype
            ${ASSIMP_LIBRARIES}
            ${LLD_LIBS}
            ${LLVM_LIBS}
            ${LLVM_SYSTEM_LIBS})
else()
    target_link_libraries(${PROJECT_NAME} PRIVATE
            ${CONAN_LIBS}
            antlr4-runtime
            psapi.lib shell32.lib ole32.lib uuid.lib advapi32.lib
            zstd-lib
            sdl2-runtime
            assimp-runtime
            ${LLD_LIBS} ${LLVM_LIBS} ${LLVM_SYSTEM_LIBS})
endif()
if (APPLE)
    add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD COMMAND cp ${PROJECT_BINARY_DIR}/../../runtime/cmake-build-release/lib/libDaricRuntime.a /Users/daryl/Shared/Daric/mac/)
    add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD COMMAND cp /usr/local/lib/libSDL2.a /Users/daryl/Shared/Daric/mac/)
endif()

get_property(dirs DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY INCLUDE_DIRECTORIES)
foreach (dir ${dirs})
    message(STATUS "include='${dir}'")
endforeach ()
get_property(dirs DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY LINK_DIRECTORIES)
foreach (dir ${dirs})
    message(STATUS "lib='${dir}'")
endforeach ()

install(TARGETS ${PROJECT_NAME}
        RUNTIME DESTINATION mac
        LIBRARY DESTINATION mac
        ARCHIVE DESTINATION mac)

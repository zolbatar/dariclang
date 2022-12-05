cmake_minimum_required(VERSION 3.20)
if (APPLE)
    #set(CMAKE_OSX_ARCHITECTURES "arm64;x86_64")
    set(CMAKE_OSX_ARCHITECTURES "x86_64")
    #set(CMAKE_OSX_ARCHITECTURES "arm64")
endif()
set(CMAKE_CXX_STANDARD 20)
project(Daric)
message(STATUS "Build type: ${CMAKE_BUILD_TYPE}")

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
set(ANTLR_DIR ${GITHUB}/antlr4/runtime/Cpp)
add_library(antlr4-runtime STATIC IMPORTED)
include_directories(${ANTLR_DIR}/runtime/src)
if (APPLE)
    SET_PROPERTY(TARGET antlr4-runtime PROPERTY IMPORTED_LOCATION ${ANTLR_DIR}/dist/libantlr4-runtime.a)
else()
    SET_PROPERTY(TARGET antlr4-runtime PROPERTY IMPORTED_LOCATION ${ANTLR_DIR}/runtime/bin/vs-2019/x64/ReleaseStatic/antlr4-runtime.lib)
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

# LLVM
set(CORE_LLVM_DIR ${GITHUB}/llvm-project/)
include_directories(
        ${CORE_LLVM_DIR}llvm/include
        ${CORE_LLVM_DIR}lld/include
        ${CORE_LLVM_DIR}build/include)
if (APPLE)
    link_directories(${CORE_LLVM_DIR}build/lib)
    file(GLOB LLD_LIBS
            ${CORE_LLVM_DIR}build/lib/liblldCommon.a
            ${CORE_LLVM_DIR}build/lib/liblldELF.a
            ${CORE_LLVM_DIR}build/lib/liblldMachO.a)
    execute_process(COMMAND ${CORE_LLVM_DIR}build/bin/llvm-config --libs OUTPUT_VARIABLE LLVM_LIBS OUTPUT_STRIP_TRAILING_WHITESPACE)
    execute_process(COMMAND ${CORE_LLVM_DIR}build/bin/llvm-config --system-libs OUTPUT_VARIABLE LLVM_SYSTEM_LIBS OUTPUT_STRIP_TRAILING_WHITESPACE)
else()
    link_directories(${CORE_LLVM_DIR}build/Release/lib)
    file(GLOB LLD_LIBS
            ${CORE_LLVM_DIR}build/lib/Release/liblldCommon.a
            ${CORE_LLVM_DIR}build/lib/liblldELF.a)
    execute_process(COMMAND ${CORE_LLVM_DIR}build/Release/bin/llvm-config.exe --libs --libnames OUTPUT_VARIABLE LLVM_LIBS OUTPUT_STRIP_TRAILING_WHITESPACE)
    execute_process(COMMAND ${CORE_LLVM_DIR}build/Release/bin/llvm-config.exe --system-libs --libnames OUTPUT_VARIABLE LLVM_SYSTEM_LIBS OUTPUT_STRIP_TRAILING_WHITESPACE)
    message(${LLVM_SYSTEM_LIBS})
    set(LLVM_SYSTEM_LIBS "")
endif()

# IMGUI
set(IMGUI_DIR ${GITHUB}/imgui)
include_directories(${IMGUI_DIR} ${IMGUI_DIR}/backends)

# Zstd
add_library(zstd-lib STATIC IMPORTED)
if (APPLE)
    SET_PROPERTY(TARGET zstd-lib PROPERTY IMPORTED_LOCATION ${GITHUB}/zstd/build/cmake/lib/libzstd.a)
    string(REPLACE "-lzstd" "" LLVM_SYSTEM_LIBS ${LLVM_SYSTEM_LIBS})
else()
    SET_PROPERTY(TARGET zstd-lib PROPERTY IMPORTED_LOCATION ${GITHUB}/zstd/build/cmake/lib/Release/zstd_static.lib)
endif()
#message(${LLVM_SYSTEM_LIBS})

add_executable(${PROJECT_NAME}
        main.cpp

        ${IMGUI_DIR}/imgui_demo.cpp
        ${IMGUI_DIR}/imgui_draw.cpp
        ${IMGUI_DIR}/imgui_tables.cpp
        ${IMGUI_DIR}/imgui_widgets.cpp
        ${IMGUI_DIR}/imgui.cpp
        ${IMGUI_DIR}/backends/imgui_impl_sdl.cpp
        ${IMGUI_DIR}/backends/imgui_impl_opengl3.cpp

        ../runtime/KeyboardMouse.cpp
        ../runtime/FontsText.cpp
        ../runtime/FileIO.cpp
        ../runtime/Random.cpp
        ../runtime/String.cpp
        ../runtime/Maths.cpp
        ../runtime/Print.cpp
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
        ../runtime/Sound/SoftSynth.cpp
        ../runtime/Sound/SoundGenerator.cpp
        ../runtime/Sound/Synthesizer.cpp
        ../runtime/Sound/generators/Instrument.cpp
        ../runtime/Sound/generators/InstrumentCustom.cpp
        ../runtime/Sound/generators/MonophonicInstrument.cpp
        ../runtime/Sound/generators/PolyphonicInstrument.cpp
        ../runtime/Sound/generators/PolyphonicInstrumentCustom.cpp
        ../runtime/Sound/generators/Sequencer.cpp
        ../runtime/Sound/generators/Tone.cpp
        ../runtime/Sound/generators/ToneCustom.cpp
        ../runtime/Sound/middleware/WAVWriter.cpp
        ../runtime/Sound/utils/Envelope.cpp
        ../runtime/Sound/utils/Waveforms.cpp

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

        Variables/PrimitiveTypes.h
        Variables/Reference.h
        Variables/Reference.cpp
        Shared/Shared.h
        Shared/Shared.cpp
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
        Grammar/DaricVisitor.cpp Shared/SourceFile.cpp Shared/SourceFile.h)
if (APPLE)
    target_link_libraries(${PROJECT_NAME} PRIVATE
            ${CONAN_LIBS}
            antlr4-runtime
            "-framework OpenGL"
            "-framework Cocoa"
            "-framework Carbon"
            "-framework CoreAudio"
            "-framework CoreVideo"
            "-framework ForceFeedback"
            "-framework Metal"
            "-framework IOKit"
            "-framework GameKit"
            "-framework AudioToolbox"
            "-framework CoreHaptics"
            zstd-lib
            -lxar -liconv
            sdl2-runtime
            assimp-runtime
            ${LLD_LIBS} ${LLVM_LIBS} ${LLVM_SYSTEM_LIBS})
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
    add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD COMMAND cp ${SDL2_DIR}/libSDL2.a /Users/daryl/Shared/Daric/mac/)
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

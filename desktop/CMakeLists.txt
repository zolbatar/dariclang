cmake_minimum_required(VERSION 3.20)
set(CMAKE_OSX_ARCHITECTURES "arm64;x86_64")
#set(CMAKE_OSX_ARCHITECTURES "x86_64")
set(CMAKE_CXX_STANDARD 20)
project(Daric)
message(STATUS "Build type: ${CMAKE_BUILD_TYPE}")

EXECUTE_PROCESS(COMMAND uname -m COMMAND tr -d '\n' OUTPUT_VARIABLE ARCHITECTURE)
message(STATUS "Architecture: ${ARCHITECTURE}")
message(STATUS "Architectures: ${CMAKE_OSX_ARCHITECTURES}")

include(${CMAKE_SOURCE_DIR}/cmake-build-${CMAKE_BUILD_TYPE}/conanbuildinfo.cmake)
conan_basic_setup()

# Antlr4
set(ANTLR_DIR "/Users/daryl/GitHub/antlr4/runtime/Cpp")
include_directories(${ANTLR_DIR}/runtime/src)
add_library(antlr4-runtime STATIC IMPORTED)
SET_PROPERTY(TARGET antlr4-runtime PROPERTY IMPORTED_LOCATION ${ANTLR_DIR}/dist/libantlr4-runtime.a)

# SDL
set(SDL2_DIR "/Users/daryl/GitHub/SDL/build/SDL2")
include_directories(${SDL2_DIR}/include ${SDL2_DIR}/include-config-)
add_library(sdl2-runtime STATIC IMPORTED)
SET_PROPERTY(TARGET sdl2-runtime PROPERTY IMPORTED_LOCATION ${SDL2_DIR}/libSDL2.a)

# LLVM
if (${ARCHITECTURE} STREQUAL "arm64")
    set(CORE_LLVM_DIR /opt/homebrew/Cellar/llvm/15.0.4/)
else ()
    set(CORE_LLVM_DIR /Users/daryl/GitHub/llvm-project/)
endif ()
include_directories(
        ${CORE_LLVM_DIR}llvm/include
        ${CORE_LLVM_DIR}lld/include
        ${CORE_LLVM_DIR}build/include)
link_directories(
        ${CORE_LLVM_DIR}build/lib)
file(GLOB LLD_LIBS
        ${CORE_LLVM_DIR}build/lib/liblldCommon.a
        ${CORE_LLVM_DIR}build/lib/liblldELF.a
        ${CORE_LLVM_DIR}build/lib/liblldMachO.a)
execute_process(COMMAND ${CORE_LLVM_DIR}build/bin/llvm-config --libs OUTPUT_VARIABLE LLVM_LIBS OUTPUT_STRIP_TRAILING_WHITESPACE)
execute_process(COMMAND ${CORE_LLVM_DIR}build/bin/llvm-config --system-libs OUTPUT_VARIABLE LLVM_SYSTEM_LIBS OUTPUT_STRIP_TRAILING_WHITESPACE)

# IMGUI
set(IMGUI_DIR "/Users/daryl/Github/imgui")
include_directories(${IMGUI_DIR} ${IMGUI_DIR}/backends)

# Zstd
add_library(zstd-lib STATIC IMPORTED)
SET_PROPERTY(TARGET zstd-lib PROPERTY IMPORTED_LOCATION /Users/daryl/GitHub/zstd/build/cmake/lib/libzstd.a)
string(REPLACE "-lzstd" "" LLVM_SYSTEM_LIBS ${LLVM_SYSTEM_LIBS})
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

        ../runtime/String.cpp
        ../runtime/Maths.cpp
        ../runtime/Print.cpp
        ../runtime/String.cpp
        ../runtime/Chrono.cpp
        ../runtime/Core.cpp

        ../runtime/UI/UISDL.cpp
        ../runtime/UI/Lodepng.cpp

        Compiler/CompilerOptions.h
        Compiler/Compiler.cpp
        Compiler/Compiler.h
        Compiler/CompilerPrint.cpp
        Compiler/CompilerProcedure.cpp
        Compiler/CompilerIf.cpp
        Compiler/CompilerVariables.cpp
        Compiler/CompilerExpression.cpp
        Compiler/CompilerStructs.cpp
        Compiler/CompilerLooping.cpp
        Compiler/CompilerCase.cpp

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

        Variables/PrimitiveTypes.h
        Variables/Reference.h
        Variables/Reference.cpp
        Variables/Shared.cpp
        Variables/Shared.h
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
        Grammar/DaricVisitor.cpp Parser/Tokens/ParserDATA.cpp)
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
        ${LLD_LIBS} ${LLVM_LIBS} ${LLVM_SYSTEM_LIBS})
add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD COMMAND cp ${PROJECT_BINARY_DIR}/../../runtime/cmake-build-release/lib/libDaricRuntime.a /Users/daryl/Shared/Daric/mac/)

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

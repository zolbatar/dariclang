cmake_minimum_required(VERSION 3.23)
project(DaricV2)

set(CMAKE_CXX_STANDARD 20)

EXECUTE_PROCESS(COMMAND uname -m COMMAND tr -d '\n' OUTPUT_VARIABLE ARCHITECTURE)
message(STATUS "Architecture: ${ARCHITECTURE}")
set(CMAKE_OSX_ARCHITECTURES ${ARCHITECTURE})

if (NOT (APPLE AND ${ARCHITECTURE} STREQUAL "arm64"))
    add_compile_options(-DSDL -DHAVE_FFSL -DCAPSTONE_HAS_X86)
else ()
    add_compile_options(-DSDL -DHAVE_FFSL -DCAPSTONE_HAS_ARM64)
endif ()

include(${CMAKE_SOURCE_DIR}/cmake-build-${CMAKE_BUILD_TYPE}/conanbuildinfo.cmake)
conan_basic_setup()

# Antlr4
set(ANTLR_DIR "~/GitHub/antlr4/runtime/Cpp")
include_directories(${ANTLR_DIR}/runtime/src)
link_directories(${ANTLR_DIR}/dist)
set(ANTLR4_LIB antlr4-runtime.a)

# LLVM
if (${ARCHITECTURE} STREQUAL "arm64")
    set(CORE_LLVM_DIR /opt/homebrew/Cellar/llvm/15.0.3.reinstall/)
else ()
    set(CORE_LLVM_DIR /usr/local/Cellar/llvm/15.0.3/)
endif ()
set(LLVM_DIR "${CORE_LLVM_DIR}lib/cmake/llvm")
find_package(LLVM REQUIRED CONFIG)
message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")
include_directories(${LLVM_INCLUDE_DIRS})
separate_arguments(LLVM_DEFINITIONS_LIST NATIVE_COMMAND ${LLVM_DEFINITIONS})
add_definitions(${LLVM_DEFINITIONS_LIST})
llvm_map_components_to_libnames(LLVM_LIBS core support AArch64 X86 Coroutines OrcJIT)

add_executable(DaricV2
        main.cpp

        Compiler/Compiler.cpp
        Compiler/Compiler.h
        Compiler/CompilerPrint.cpp
        Compiler/CompilerProcedure.cpp
        Compiler/CompilerIf.cpp
        Compiler/CompilerVariables.cpp
        Compiler/CompilerExpression.cpp

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

        JIT/JIT.cpp
        JIT/String.cpp
        JIT/Runtime/Print.cpp
        JIT/Runtime/Maths.cpp
        JIT/Runtime/Chrono.cpp

        Parser/Parser.h
        Parser/Parser.cpp
        Parser/ParserCore.cpp
        Parser/ParserErrorListenener.h
        Parser/ParserToken.h
        Parser/ParserTokenType.h
        Parser/ParserLiteral.cpp
        Parser/Core/ParserAssignment.cpp
        Parser/Core/ParserExpression.cpp
        Parser/Core/ParserFunctions.cpp
        Parser/Core/ParserType.cpp
        Parser/Core/ParserVariable.cpp
        Parser/Core/ParserStatements.cpp
        Parser/Tokens/ParserIF.cpp
        Parser/Tokens/ParserMODULE.cpp
        Parser/Tokens/ParserPRINT.cpp
        Parser/Tokens/ParserCONST.cpp
        Parser/Tokens/ParserSWAP.cpp
        Parser/Tokens/ParserDIM.cpp

        Variables/Types.h
        Variables/Types.cpp
        Variables/PrimitiveTypes.h
        Variables/Instance.cpp
        Variables/Instance.h
        Variables/Reference.cpp

        Variables/Reference.h
        Grammar/DaricBaseVisitor.cpp
        Grammar/DaricLexer.cpp
        Grammar/DaricParser.cpp
        Grammar/DaricVisitor.cpp Parser/Tokens/ParserSTRUCT.cpp Compiler/CompilerStructs.cpp LLVM/CompilerLLVMStructs.cpp)
target_link_libraries(${PROJECT_NAME} ${LIBS} ${CONAN_LIBS} ${ANTLR4_LIB} ${LLVM_LIBS})

get_property(dirs DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY INCLUDE_DIRECTORIES)
foreach (dir ${dirs})
    message(STATUS "dir='${dir}'")
endforeach ()
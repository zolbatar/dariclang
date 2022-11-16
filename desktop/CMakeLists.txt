cmake_minimum_required(VERSION 3.20)
project(Daric)

set(CMAKE_CXX_STANDARD 20)

EXECUTE_PROCESS(COMMAND uname -m COMMAND tr -d '\n' OUTPUT_VARIABLE ARCHITECTURE)
message(STATUS "Architecture: ${ARCHITECTURE}")
set(CMAKE_OSX_ARCHITECTURES ${ARCHITECTURE})

if (APPLE)
    if (${ARCHITECTURE} STREQUAL "arm64")
        add_compile_options(-DSDL -DHAVE_FFSL -DCAPSTONE_HAS_ARM64)
    else ()
        add_compile_options(-DSDL -DHAVE_FFSL -DCAPSTONE_HAS_X86)
    endif ()
else()
    add_compile_options(-DSDL -DHAVE_FFSL -DCAPSTONE_HAS_X86)
endif()

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

set(LLD_DIR "${CORE_LLVM_DIR}lib/cmake/lld")
find_package(LLD REQUIRED CONFIG)
message(STATUS "Found LLD ${LLD_PACKAGE_VERSION}")
message(STATUS "Using LLDConfig.cmake in: ${LLD_DIR}")
set(LLD_LIBS ${LLD_EXPORTED_TARGETS})

separate_arguments(LLVM_DEFINITIONS_LIST NATIVE_COMMAND ${LLVM_DEFINITIONS})
add_definitions(${LLVM_DEFINITIONS_LIST})
llvm_map_components_to_libnames(LLVM_LIBS all AArch64 X86 OrcJIT)

# The standard Daric library
file(GLOB LIBRARIES ../runtime/cmake-build-release/libDaricRuntimeShared.dylib ./libDaricRuntimeShared.dylib)
set(CMAKE_SKIP_RPATH FALSE)

add_executable(${PROJECT_NAME}
        main.cpp

        Compiler/CompilerOptions.h
        Compiler/Compiler.cpp
        Compiler/Compiler.h
        Compiler/CompilerPrint.cpp
        Compiler/CompilerProcedure.cpp
        Compiler/CompilerIf.cpp
        Compiler/CompilerVariables.cpp
        Compiler/CompilerExpression.cpp
        Compiler/CompilerStructs.cpp

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
        Grammar/DaricVisitor.cpp Parser/Tokens/ParserREPEAT.cpp Parser/Tokens/ParserWHILE.cpp Compiler/CompilerLooping.cpp Parser/Tokens/ParserFOR.cpp)
target_link_libraries(${PROJECT_NAME} ${LIBRARIES} ${CONAN_LIBS} ${ANTLR4_LIB} ${LLVM_LIBS} ${LLD_LIBS})
if (${ARCHITECTURE} STREQUAL "arm64")
    add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD COMMAND cp ${PROJECT_BINARY_DIR}/bin/${PROJECT_NAME} ${PROJECT_BINARY_DIR}/../Scratch/macOSM1)
    add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD COMMAND cp ../../runtime/cmake-build-release/libDaricRuntimeStatic.a ${PROJECT_BINARY_DIR}/../Scratch/macOSM1)
else()
    add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD COMMAND cp ${PROJECT_BINARY_DIR}/bin/${PROJECT_NAME} ${PROJECT_BINARY_DIR}/../Scratch/macOSX64)
    add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD COMMAND cp ../../runtime/cmake-build-release/libDaricRuntimeStatic.a ${PROJECT_BINARY_DIR}/../Scratch/macOSX64)
endif()

get_property(dirs DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY INCLUDE_DIRECTORIES)
foreach (dir ${dirs})
    message(STATUS "include='${dir}'")
endforeach ()
get_property(dirs DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY LINK_DIRECTORIES)
foreach (dir ${dirs})
    message(STATUS "lib='${dir}'")
endforeach ()
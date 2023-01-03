cmake_minimum_required(VERSION 3.20)
if (APPLE)
    #set(CMAKE_OSX_ARCHITECTURES "arm64;x86_64")
    #set(CMAKE_OSX_ARCHITECTURES "x86_64")
    #set(CMAKE_OSX_ARCHITECTURES "arm64")
endif()
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
project(Daric)
find_package(antlr4-runtime CONFIG REQUIRED)
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
list(APPEND CMAKE_MODULE_PATH "${LLVM_CMAKE_DIR}")
message(status ${LLVM_CMAKE_DIR})
find_package(LLVM CONFIG REQUIRED)
include(HandleLLVMOptions)
add_definitions(${LLVM_DEFINITIONS})
if(APPLE)
    execute_process(COMMAND ${VCPKG_INSTALLED_DIR}/${triplet}/tools/llvm/llvm-config --libs OUTPUT_VARIABLE LLVM_LIBS OUTPUT_STRIP_TRAILING_WHITESPACE)
else()
    execute_process(COMMAND ${VCPKG_INSTALLED_DIR}/${triplet}/tools/llvm/llvm-config --libnames OUTPUT_VARIABLE LLVM_LIBS OUTPUT_STRIP_TRAILING_WHITESPACE)
endif()
execute_process(COMMAND ${VCPKG_INSTALLED_DIR}/${triplet}/tools/llvm/llvm-config --system-libs OUTPUT_VARIABLE LLVM_SYSTEM_LIBS OUTPUT_STRIP_TRAILING_WHITESPACE)
set(LLD_LIBS lldCommon lldELF lldMachO)
message(STATUS "LLVM Libs: ${LLVM_LIBS}")
message(STATUS "LLVM System Libs: ${LLVM_SYSTEM_LIBS}")
message(STATUS "LLD Libs: ${LLD_LIBS}")

add_executable(${PROJECT_NAME}
        main.cpp
        ../runtime/GUI.cpp
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
        ../runtime/Config/Config.cpp
        ../runtime/Library/StringLib.h
        ../runtime/Library/StringLib.cpp
        ../runtime/Collections.cpp
        ../runtime/Library/json.hpp
        ../runtime/Containers/src/list.c
        ../runtime/Containers/src/vector.c
        ../runtime/Containers/src/deque.c
        ../runtime/Containers/src/queue.c
        ../runtime/Containers/src/stack.c
        ../runtime/Containers/src/map.c
        ../runtime/Containers/src/set.c
        Compiler/CompilerOptions.h
        Compiler/Compiler.cpp
        Compiler/CompilerInput.cpp
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
        Compiler/CompilerArrays.cpp
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
        Parser/Core/ParserCollection.cpp
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
        Parser/Tokens/ParserINPUT.cpp
        Shared/Shared.h
        Shared/Shared.cpp
        Shared/SourceFile.cpp
        Shared/SourceFile.h
        Variables/PrimitiveTypes.h
        Variables/Reference.cpp
        Variables/Instance.cpp
        Variables/InstancePrimitive.cpp
        Variables/InstanceConstant.cpp
        Variables/InstancePrimitiveArray.cpp
        Variables/InstanceRecord.cpp
        Variables/InstanceRecordArray.cpp
        Variables/InstanceList.cpp
        Variables/InstanceVector.cpp
        Variables/InstanceSet.cpp
        Variables/InstanceMap.cpp
        Variables/InstanceStack.cpp
        Variables/InstanceQueue.cpp
        Grammar/DaricBaseVisitor.cpp
        Grammar/DaricLexer.cpp
        Grammar/DaricParser.cpp
        Grammar/DaricVisitor.cpp Compiler/CompilerCollections.cpp)
if (APPLE)
    target_link_libraries(${PROJECT_NAME} PRIVATE
            "-framework OpenGL"
            xar
            intl
            iconv
            glib-2.0
            fluidsynth
            antlr4-runtime
            Freetype::Freetype
            SDL2::SDL2main
            SDL2::SDL2-static
            $<IF:$<TARGET_EXISTS:SDL2_mixer::SDL2_mixer>,SDL2_mixer::SDL2_mixer,SDL2_mixer::SDL2_mixer-static>
            modplug
            imgui::imgui
            assimp::assimp
            glm::glm
            ${LLD_LIBS}
            ${LLVM_LIBS}
            ${LLVM_SYSTEM_LIBS})
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
            antlr4_static
            Freetype::Freetype
            SDL2::SDL2main
            SDL2::SDL2-static
            $<IF:$<TARGET_EXISTS:SDL2_mixer::SDL2_mixer>,SDL2_mixer::SDL2_mixer,SDL2_mixer::SDL2_mixer-static>
            modplug
            imgui::imgui
            assimp::assimp
            glm::glm
            ${LLD_LIBS}
            ${LLVM_LIBS}
            ${LLVM_SYSTEM_LIBS})
endif()
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

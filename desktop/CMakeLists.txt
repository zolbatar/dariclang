cmake_minimum_required(VERSION 3.20)
if (APPLE)
    #set(CMAKE_OSX_ARCHITECTURES "arm64;x86_64")
    #set(CMAKE_OSX_ARCHITECTURES "x86_64")
    #set(CMAKE_OSX_ARCHITECTURES "arm64")
endif()
set(CMAKE_CXX_STANDARD 20)
project(Daric)
message(STATUS "Build type: ${CMAKE_BUILD_TYPE}")
EXECUTE_PROCESS(COMMAND uname -m COMMAND tr -d '\n' OUTPUT_VARIABLE ARCHITECTURE)
message(STATUS "Architecture: ${ARCHITECTURE}")
message(STATUS "Architectures: ${CMAKE_OSX_ARCHITECTURES}")
message(STATUS "Library path: ${CMAKE_LIBRARY_PATH}")
message(STATUS "Prefix path: ${CMAKE_PREFIX_PATH}")
include_directories(${VCPKG_INSTALLED_DIR}/daric/include)
link_directories(${VCPKG_INSTALLED_DIR}/daric/lib)
find_package(antlr4-runtime CONFIG REQUIRED)
find_package(Freetype REQUIRED)
find_package(SDL2 CONFIG REQUIRED)
find_package(SDL2_mixer CONFIG REQUIRED)
find_package(imgui CONFIG REQUIRED)
find_package(assimp CONFIG REQUIRED)
find_package(glm CONFIG REQUIRED)
include_directories(${VCPKG_INSTALLED_DIR}/daric/include/antlr4-runtime)
list(APPEND CMAKE_MODULE_PATH "${LLVM_CMAKE_DIR}")
message(status ${LLVM_CMAKE_DIR})
find_package(LLVM CONFIG REQUIRED)
include(HandleLLVMOptions)
add_definitions(${LLVM_DEFINITIONS})
# Find the libraries that correspond to the LLVM components that we wish to use
#llvm_map_components_to_libnames(LLVM_LIBS Support Core IRReader OrcJIT AArch64 X86 LTO)
execute_process(COMMAND ${VCPKG_INSTALLED_DIR}/daric/tools/llvm/llvm-config --libs OUTPUT_VARIABLE LLVM_LIBS OUTPUT_STRIP_TRAILING_WHITESPACE)
execute_process(COMMAND ${VCPKG_INSTALLED_DIR}/daric/tools/llvm/llvm-config --system-libs OUTPUT_VARIABLE LLVM_SYSTEM_LIBS OUTPUT_STRIP_TRAILING_WHITESPACE)
set(LLD_LIBS lldCommon lldELF lldMachO)
message(STATUS "LLVM Libs: ${LLVM_LIBS}")
message(STATUS "LLVM System Libs: ${LLVM_SYSTEM_LIBS}")
message(STATUS "LLD Libs: ${LLD_LIBS}")

add_executable(${PROJECT_NAME}
        main.cpp
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
        Parser/Tokens/ParserINPUT.cpp
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
        Compiler/CompilerInput.cpp)
    target_link_libraries(${PROJECT_NAME} PRIVATE
            "-framework OpenGL"
            xar
            intl
            iconv
            glib-2.0
            fluidsynth
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
if (APPLE)
#    add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD COMMAND cp ${PROJECT_BINARY_DIR}/../../runtime/cmake-build-release/lib/libDaricRuntime.a /Users/daryl/Shared/Daric/mac/)
#    add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD COMMAND cp /usr/local/lib/libSDL2.a /Users/daryl/Shared/Daric/mac/)
#    add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD COMMAND cp /usr/local/lib/libassimp.a /Users/daryl/Shared/Daric/mac/)
#    add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD COMMAND cp /usr/local/lib/libSDL2_mixer.a /Users/daryl/Shared/Daric/mac/)
#    add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD COMMAND cp /usr/local/lib/libfreetype.a /Users/daryl/Shared/Daric/mac/)
#    add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD COMMAND cp ${FluidSynth_LIBRARY} /Users/daryl/Shared/Daric/mac/)
endif()

install(TARGETS ${PROJECT_NAME}
        RUNTIME DESTINATION mac
        LIBRARY DESTINATION mac
        ARCHIVE DESTINATION mac)

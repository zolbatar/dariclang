#!/bin/sh
./vcpkg install --triplet=daric assimp
./vcpkg install --triplet=daric 'imgui[freetype,sdl2-binding,osx-binding,opengl3-binding]'
./vcpkg install --triplet=daric --editable libmodplug
./vcpkg install --triplet=daric --editable 'sdl2-mixer[fluidsynth,libmodplug]'
./vcpkg install --triplet=daric 'sdl2'
./vcpkg install --triplet=daric 'freetype[zlib]'
./vcpkg install --triplet=daric antlr4
./vcpkg install --triplet=daric 'llvm[core,target-aarch64,target-x86,lld]'
./vcpkg install --triplet=daric 'glm'
./vcpkg install --triplet=daric 'glib'
./vcpkg install --triplet=daric 'opengl' // not needed?
./vcpkg install --triplet=daric 'glew' // windows

// 'imgui[freetype,sdl2-binding,osx-binding,opengl3-binding,win32-binding,glfw-binding]'

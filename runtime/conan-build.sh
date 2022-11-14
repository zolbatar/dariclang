#!/bin/sh
conan install imgui/1.88@  --build=missing --profile=Debug
conan install imgui/1.88@  --build=missing --profile=Release

conan install sdl/2.24.1@  --build=missing --profile=Debug
conan install sdl/2.24.1@  --build=missing --profile=Release

#conan install box2d/2.4.1@  --build=missing --profile=Debug
#conan install box2d/2.4.1@  --build=missing --profile=Release

#conan install assimp/5.2.2@  --build=missing --profile=Debug
#conan install assimp/5.2.2@  --build=missing --profile=Release

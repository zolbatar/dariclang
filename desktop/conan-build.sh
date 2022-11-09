#!/bin/sh
conan install antlr4-cppruntime/4.10.1@ --build=antlr4-cppruntime --profile=Debug
conan install antlr4-cppruntime/4.10.1@ --build=antlr4-cppruntime --profile=Release

conan install imgui/1.88@  --build=missing --profile=Debug
conan install imgui/1.88@  --build=missing --profile=Release

conan install sdl/2.0.20@  --build=missing --profile=Debug
conan install sdl/2.0.20@  --build=missing --profile=Release

conan install box2d/2.4.1@  --build=missing --profile=Debug
conan install box2d/2.4.1@  --build=missing --profile=Release

conan install cli11/2.2.0@  --build=missing --profile=Debug
conan install cli11/2.2.0@  --build=missing --profile=Release

#conan install assimp/5.2.2@  --build=missing --profile=Debug
#conan install assimp/5.2.2@  --build=missing --profile=Release

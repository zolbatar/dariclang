#!/bin/sh
conan install . -s build_type=Release --install-folder=cmake-build-release
conan install . -s build_type=Debug --install-folder=cmake-build-debug

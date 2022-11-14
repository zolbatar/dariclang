# The Daric Language

Daric - "Daryl's BASIC"

Daric is a programming language inspired by microcomputer Daric of the 1980s.

Programming should be fun, and immediate. Daric is designed around the idea of batteries included, once installed there are no other dependencies. A few lines of code to create interactive, graphical, FUN programs!

Daric is in active development, with a native version for Windows, Mac and Linux computers and a modern HTML5 online version compiling to WebAssembly and using WebGL (at www.dariclang.com).

* A modern BASIC dialect
* Can be run either in a JIT, compiled to an executable and in future with a kind-of REPL prompt
* Standard library:
  * 2D - line drawing, circle, etc. Either renders immediately, or using back buffer flipping
  * 3D engine, using OpenGL3 and shaders to render
  * Sound, a soft synthesizer
  * Simple TIME$ function and a low and high precision timer

The following examples are in the repo:

* Tester.daric - standard compiler and language tests

Running
-------

There are currently two ways to run code:

1. Using the JIT, this is the preferred way to get code running
2. Create a standalone executable - this is more intended for distribution. There are no additional runtime files needed, just the 
executable.

Mac
---

To run the standard test file, do either of the following from the binary directory:

macOSX64/Daric Tester.daric
macOSX64/Daric Tester.daric tester && ./Tester

The second option will create an executable. Replace X64 with M1 if running Apple Silicon.

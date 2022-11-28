# The Daric Language

Daric - "Daryl's BASIC"

Daric is a programming language inspired by microcomputer BASICs of the 1980s.

Programming should be fun, and immediate. Daric is designed around the idea of batteries included, once installed there are no other dependencies. A few lines of code to create interactive, graphical, FUN programs!

Daric is in active development, the Mac version is the main dev version. There will be Windows and Linux versions in the future.

There is a modern HTML5 online version compiling to WebAssembly and using WebGL (at www.dariclang.com). This however uses an older grammar so it's not exactly cross compatible right now.

* A modern BASIC dialect.
* Can be run either in a JIT, compiled to an executable and in future with a kind-of REPL prompt.
* Standard library:
  * 2D - line drawing, circle, etc. Either renders immediately, or using back buffer flipping.
  * 3D - hardware accelerated engine, using OpenGL3 and shaders to render.
  * Sound, a soft synthesizer based on https://github.com/airloaf/VSSynth
  * Simple TIME$ function and a low and high precision timer.

The following examples are in the repo:

* BubbleUniverse - A 2d simple maths model that would make a good screensaver! Thanks to ZXDunny.
* Clock - A simple 2D clock.
* Graphics2D - Runs some 2D rendering tests very quickly.
* Mandelbrot - The classic mandelbrot.
* Raytracer - Based on some example code uploaded to the BBCMicroBot, no idea who originally created it. 
* Sierpinski - Sierpinski triangles.
* Tester - Standard compiler and language tests

Running
-------

There are currently two ways to run code:

1. Using the JIT, this is the preferred way to get code running.
2. Create a standalone executable - this is more intended for distribution. There are no additional runtime files needed, just the 
executable.

Mac
---

To run the standard test file, extract the ZIP and run something like this:

mac/Daric Tester.daric\
mac/Daric Tester.daric Tester && ./Tester

The second option will create an executable. Replace Tester.daric with any of the other source files.

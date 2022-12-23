# The Daric Language

Daric - "Daryl's BASIC"

Daric is a programming language inspired by microcomputer BASICs of the 1980s.

Programming should be fun, and immediate. Daric is designed around the idea of batteries included, once installed there are no other dependencies. A few lines of code to create interactive, graphical, FUN programs!

Daric is in active development, the Mac version is the main dev version. There will be Windows and Linux versions in the future.

There is a modern HTML5 online version compiling to WebAssembly and using WebGL (at www.dariclang.com). This however uses an older grammar so it's not exactly cross compatible right now.

* A modern BASIC dialect.
* Can be run either in a JIT or compiled to an executable. There is a simple editor which will be expanded out to have more IDE functionality in the future.
* Standard library:
  * 2D - line drawing, circle, etc. Either renders immediately, or using back buffer flipping.
  * 3D - hardware accelerated engine, using OpenGL3 and shaders to render.
  * Sound, a soft synthesizer based on https://github.com/airloaf/VSSynth. VERY EXPERIMENTAL
  * Simple TIME$ function and a low and high precision timer.
  * And more (fill this in later)

The following examples are in the repo:

* BubbleUniverse - A 2d simple maths model that would make a good screensaver! Thanks to ZXDunny.
* Clock - A simple 2D clock.
* Cubes - Spinning 3D cubes.
* Fonts - Displays some of the font capability (using Roboto).
* Graphics2D - Runs some 2D rendering tests very quickly.
* Greedy - A performance tester.
* Load3D - Allows loading of 3D models using either a Daric importer or the very powerful assimp.
* Mandelbrot - The classic mandelbrot.
* Raytracer - Based on some example code uploaded to the BBCMicroBot, no idea who originally created it. 
* Sierpinski - Sierpinski triangles.
* Sound - Experimental sound stuff.
* Sprites - Throws around some sprites.
* Terrain - A simple 3D terrain demo using perlin noise.
* Tester - Standard compiler and language tests
* TesterFileIO = Test file I/O library.
* WorldInLines = A fairy clever tool that renders world polygon maps.

Running
-------

There are currently two ways to run code:

1. Using the JIT, this is the preferred way to get code running. Either through the VERY simple editor, or from the command line. 
2. Create a standalone executable - this is more intended for distribution. There are no additional runtime files needed, just the 
executable. THIS CURRENTLY IS A WORK IN PROGRESS AND MAY NOT WORK AT ALL.

Mac
---

You MUST run this from the command line/terminal for now. You must ALSO run from the root of the extacted directory, this will be fixed in a later release.

To run the demo files, extract the ZIP and run something like this (depending on OS):

mac/Daric Demos/Tester.daric (where Tester is the source file)
win\Daric.exe Demos/BubbleUniverse

#!/bin/sh
clear

antlr4 -Werror -Dlanguage=Cpp -no-listener -visitor -o . Daric.g4
antlr4 -Werror -no-listener -visitor Daric.g4
#antlr4-parse Daric.g4 program -SLL -tree ../Scratch/Syntax.daric
#antlr4-parse Daric.g4 program -SLL -gui ../Scratch/Syntax.daric
rm *.java
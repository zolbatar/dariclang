#!/bin/sh
clear
#antlr4-parse Daric.g4 program -SLL -tree ../Scratch/Syntax.daric
antlr4-parse Daric.g4 program -SLL -gui ~/Shared/Daric/Sierpinski.daric

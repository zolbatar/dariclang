#!/bin/sh
clear
#antlr4-parse Daric.g4 program -SLL -tree ../Scratch/S
antlr4-parse Daric.g4 program -LL -gui ~/Shared/Daric/test.daric

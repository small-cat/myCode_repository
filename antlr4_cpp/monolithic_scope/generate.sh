#!/bin/bash
set -o errexit
java -Xmx500M -cp /home/jona/software/antlr4/antlr-4.7.1-complete.jar org.antlr.v4.Tool -Dlanguage=Cpp -listener -visitor -o generated/ Cymbol.g4

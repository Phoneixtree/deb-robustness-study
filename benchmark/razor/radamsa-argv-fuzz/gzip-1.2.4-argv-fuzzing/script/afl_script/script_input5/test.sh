#!/bin/bash
cd ../../../
. setenv
cd script/afl_script/script_input5


debloat=${reduced}.$1

mkdir tmp
mkdir result
cd result
rm -rf *
cd ..
cd tmp
afl-fuzz -Q -i ${afl_seed}/input_5 -o ../result ${debloat} @@

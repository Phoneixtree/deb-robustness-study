#!/bin/bash
cd ../../../
. setenv
cd script/afl_script/script_input2


debloat=${reduced}.$1

mkdir result
cd result
rm *
cd ..
afl-fuzz -Q -i ${afl_seed}/input_2 -o result ${debloat} @@

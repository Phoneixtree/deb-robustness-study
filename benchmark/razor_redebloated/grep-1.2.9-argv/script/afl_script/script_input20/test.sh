#!/bin/bash
cd ../../../
. setenv
cd script/afl_script/script_input20


debloat=${reduced}.$1

mkdir result
cd result
rm *
cd ..
afl-fuzz -Q -i ${afl_seed}/input_20 -o result ${debloat} @@

#!/bin/bash
cd ../../../
. setenv
cd script/afl_script/script_input25


debloat=${reduced}.$1

mkdir result
cd result
rm -rf *
cd ..
afl-fuzz -Q -i ${afl_seed}/input_25 -o result ${debloat}

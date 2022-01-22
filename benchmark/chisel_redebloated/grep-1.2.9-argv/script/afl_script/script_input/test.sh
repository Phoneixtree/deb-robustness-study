#!/bin/bash
cd ../../../
. setenv
cd script/afl_script/script_input

mkdir result_$1
cd result_$1
rm *
cd ..
afl-fuzz  -i ${afl_seed}/input_$1 -o result_$1 ${debloat} 

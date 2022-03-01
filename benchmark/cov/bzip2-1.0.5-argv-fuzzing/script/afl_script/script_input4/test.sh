#!/bin/bash
cd ../../../
. setenv
cd script/afl_script/script_input4



mkdir tmp
mkdir result
cd result
rm -rf *
cd ..
cd tmp
afl-fuzz -i ${afl_seed}/input_4 -o ../result ${debloat} 

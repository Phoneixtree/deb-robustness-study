#!/bin/bash
cd ../../../
. setenv
cd script/afl_script/script_input6


mkdir tmp
mkdir result
cd result
rm -rf *
cd ..
cd tmp
afl-fuzz -i ${afl_seed}/input_6 -o ../result ${debloat} 

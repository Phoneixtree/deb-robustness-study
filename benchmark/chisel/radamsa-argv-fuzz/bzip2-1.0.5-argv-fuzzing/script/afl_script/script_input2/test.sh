#!/bin/bash
cd ../../../
. setenv
cd script/afl_script/script_input2



mkdir tmp
mkdir result
cd result
rm -rf *
cd ..
cd tmp
afl-fuzz -i $afl_seed/input_2 -o ../result ${debloat} 

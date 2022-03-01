#!/bin/bash
cd ../../../
. setenv
cd script/afl_script/script_input1



mkdir result
cd result
rm *
cd ..
afl-fuzz  -i ${afl_seed}/input1 -o result ${debloat} 

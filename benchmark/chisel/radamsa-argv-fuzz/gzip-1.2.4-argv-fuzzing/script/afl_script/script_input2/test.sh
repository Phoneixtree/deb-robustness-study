#!/bin/bash
cd ../../../
. setenv
cd script/afl_script/script_input2



mkdir result
cd result
rm *
cd ..
afl-fuzz  -i ${afl_seed}/input2 -o result ${debloat} 

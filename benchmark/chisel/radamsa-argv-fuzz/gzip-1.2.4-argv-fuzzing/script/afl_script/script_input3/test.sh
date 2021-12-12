#!/bin/bash
cd ../../../
. setenv
cd script/afl_script/script_input3



mkdir result
cd result
rm *
cd ..
afl-fuzz  -i ${afl_seed}/input3 -o result ${debloat} 

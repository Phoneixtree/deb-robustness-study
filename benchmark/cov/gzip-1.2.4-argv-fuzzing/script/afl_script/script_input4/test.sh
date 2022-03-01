#!/bin/bash
cd ../../../
. setenv
cd script/afl_script/script_input4



mkdir result
cd result
rm *
cd ..
afl-fuzz  -i ${afl_seed}/input4 -o result ${debloat} 

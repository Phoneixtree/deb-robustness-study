#!/bin/bash
cd ../../../
. setenv
cd script/afl_script/script_input5


mkdir result
cd result
rm *
cd ..
afl-fuzz  -i ${afl_seed}/input5 -o result ${debloat} 

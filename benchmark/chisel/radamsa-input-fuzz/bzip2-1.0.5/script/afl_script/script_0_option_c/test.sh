#!/bin/bash
cd ../../../
. setenv
cd script/afl_script/script_0_option_c


debloat=${reduced}.$1

mkdir result
cd result
rm *
cd ..
afl-fuzz -i ${afl_seed}/input_0_option_c -o result ${bins}/afl_bin -c 

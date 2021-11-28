#!/bin/bash
cd ../../../
. setenv
cd script/afl_script/script_2_option_f


debloat=${reduced}.$1

mkdir result
cd result
rm *
cd ..
afl-fuzz -i ${afl_seed}/input_2_option_f -o result ${bins}/afl_bin -f 

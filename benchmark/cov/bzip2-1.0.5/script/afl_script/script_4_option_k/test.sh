#!/bin/bash
cd ../../../
. setenv
cd script/afl_script/script_4_option_k


debloat=${reduced}.$1

mkdir result
cd result
rm *
cd ..
afl-fuzz -i ${afl_seed}/input_4_option_k -o result ${bins}/afl_bin -k 
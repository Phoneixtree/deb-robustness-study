#!/bin/bash
cd ../../../
. setenv
cd script/afl_script/script_1_option_d


debloat=${reduced}.$1

mkdir result
cd result
rm *
cd ..
afl-fuzz -Q -i ${afl_seed}/input_1_option_d -o result ${bins}/${debloat} -d @@

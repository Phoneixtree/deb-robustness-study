#!/bin/bash
cd ../../../
. setenv
cd script/afl_script/script_3_option_t


debloat=${reduced}.$1

mkdir result
cd result
rm *
cd ..
afl-fuzz  -i ${afl_seed}/input_3_option_t_sample1.bz2.ref -o result ${bins}/afl_bin -t @@

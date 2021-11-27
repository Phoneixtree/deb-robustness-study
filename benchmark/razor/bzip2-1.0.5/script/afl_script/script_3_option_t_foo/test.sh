#!/bin/bash
cd ../../../
. setenv
cd script/afl_script/script_3_option_t_foo


debloat=${reduced}.$1

mkdir result
cd result
rm *
cd ..
afl-fuzz -Q -i ${afl_seed}/input_3_option_t_foo -o result ${bins}/${debloat} -t @@

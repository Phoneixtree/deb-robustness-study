#!/bin/bash
cd ../../../
. setenv
cd script/afl_script/script_4_option_k


debloat=${reduced}.$1

mkdir result
cd result
rm *
cd ..
afl-fuzz -Q -i ${afl_seed}/script_4_option_k -o result ${debloat} -k @@

#!/bin/bash
cd ../../../
. setenv
cd script/afl_script/
rm -r result
mkdir result
afl-fuzz -i ${afl_seed}/input_0_option_c -o result ${bins}/afl_bin -c @@

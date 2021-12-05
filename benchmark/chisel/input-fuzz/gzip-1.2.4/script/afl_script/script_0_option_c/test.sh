#!/bin/bash
cd ../../../
. setenv
cd script/afl_script/script_0_option_c
rm -r result
mkdir result
afl-fuzz -i ${afl_seed}/input_0_option_c -o result ${bins}/gzip_afl_bin -c

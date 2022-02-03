#!/bin/bash
cd ../../../
. setenv
cd script/afl_script/script_3_option_t_expected_1
rm -r result
mkdir result
afl-fuzz -i ${afl_seed}/input_3_option_t -o result ${bins}/gzip_afl_bin -t 

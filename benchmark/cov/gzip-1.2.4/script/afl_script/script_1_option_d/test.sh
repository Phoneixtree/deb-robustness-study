#!/bin/bash
cd ../../../
. setenv
cd script/afl_script/script_1_option_d
rm -r result
mkdir result
afl-fuzz -i ${afl_seed}/input_1_option_d -o result ${bins}/gzip_afl_bin -d @@

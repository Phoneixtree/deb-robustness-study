#!/bin/bash
cd ../../../
. setenv
cd script/afl_script/script_4_option_t
rm -r result
mkdir result
afl-fuzz -i ${afl_seed}/input_4_option_t -o result ${bins}/gzip_afl_bin -t @@

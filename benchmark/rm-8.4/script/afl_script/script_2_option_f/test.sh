#!/bin/bash
cd ../../../
. setenv
cd script/afl_script/script_2_option_f
rm -r result
mkdir result
afl-fuzz -i ${afl_seed}/input_2_option_f -o result ${bins}/gzip_afl_bin -f @@

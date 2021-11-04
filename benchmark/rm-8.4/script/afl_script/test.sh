#!/bin/bash
cd ../../
. setenv
cd script/afl_script/
rm -r result
mkdir result
afl-fuzz -i ${afl_seed}/ -o result ${bins}/afl_bin @@

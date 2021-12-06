#!/bin/bash
options=$1
cd ../../
. setenv
cd script/afl_script/
rm -r result_${options}
mkdir result_${options}
afl-fuzz -i ${afl_seed} -o result_${options} ${bins}/afl_bin $options @@




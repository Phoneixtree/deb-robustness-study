#!/bin/bash
options=$1
cd ../../
. setenv
cd ${home_folder}/original_files_and_refs
afl-gcc tar-1.14.c.reduced.c -o afl_bin
cd ${home_folder}/script/afl_script/
rm -r result${options}
mkdir result${options}
mkdir temp
cd temp
afl-fuzz -i ${afl_seed}/options${options} -o ../result${options} ${bins}/afl_bin ${options} @@
cd ../
./clean.sh

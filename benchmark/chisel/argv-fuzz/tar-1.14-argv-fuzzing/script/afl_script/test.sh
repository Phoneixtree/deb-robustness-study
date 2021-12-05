#!/bin/bash
options=$1
cd ../../
. setenv
cd ${home_folder}/script/afl_script/
rm -r result${options}
mkdir result${options}
mkdir temp
cp files/* temp/
cd temp
afl-fuzz -i ${afl_seed}/options-${options} -o ../result${options} ${bins}/afl_bin 
echo please delete dir "temp" manually (sudo may be needed)


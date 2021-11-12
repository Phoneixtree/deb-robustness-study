#!/bin/bash
cd ../../
. setenv
cd script/afl_script/
rm -r result-$1
mkdir result-$1
if($1 == "-i" || $1 == " ") then
    afl-fuzz -i ${afl_seed}i -o result-$1 ${bins}/afl_bin $1 $2
else
    afl-fuzz -i ${afl_seed}rf -o result-$1 ${bins}/afl_bin $1 $2
fi
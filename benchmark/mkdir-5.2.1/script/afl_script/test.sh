#!/bin/bash
cd ../../
. setenv
cd script/afl_script/
rm -r result_${1}${2}
mkdir result_${1}${2}
echo current options is $1 $2
echo availiable options:
echo  "" d1 "" d1/d2 "-m 123124" d1/d2 "-m" d1/d2 "-m 400" d1 "-m 555" d1 "-m 644" d1 "-m 610" d1 "-m 777" d1 "-p" d1/d2 "-p" d1/d2/d3/d4 "-p" d1 "-p" d1/d2

if($2 == "d1/d2" || $1 == "d1/d2") then
    afl-fuzz -i ${afl_seed}_d1d2 -o result_${1}${2} ${bins}/afl_bin ${1} 
else
    afl-fuzz -i ${afl_seed}_d1 -o result_${1}${2} ${bins}/afl_bin ${1} 
fi

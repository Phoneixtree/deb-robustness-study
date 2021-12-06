#!/bin/bash
cd ../../
. setenv
cd script/afl_script/
rm -r result-${1}${2}
mkdir result-${1}${2}
options=("" "-c" "-d" "-u" "-i" "-f 5" "-s 10" "-w 10")
for ((i = 0; i < ${#options[@]}; i++)); do
    arg=${options[i]}
    echo $arg
done
echo option is ${1} ${2}
afl-fuzz -i ${afl_seed} -o result-${1}${2} ${bins}/afl_bin $1 $2 @@


if false;then
  desired_run ""  
  desired_run "-c"  
  desired_run "-d"
  desired_run "-u"
  desired_run "-i"
  desired_run "-f 5"
  desired_run "-s 10"
  desired_run "-w 10"
fi
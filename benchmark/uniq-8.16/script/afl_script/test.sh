#!/bin/bash
cd ../../
. setenv
cd script/afl_script/
rm -r result
mkdir result
afl-fuzz -i ${afl_seed} -o result ${bins}/afl_bin -c @@
options=("" "-c" "-d" "-u" "-i" "-f 5" "-s 10" "-w 10")
for ((i = 0; i < ${#options[@]}; i++)); do
    arg=${options[i]}

done


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
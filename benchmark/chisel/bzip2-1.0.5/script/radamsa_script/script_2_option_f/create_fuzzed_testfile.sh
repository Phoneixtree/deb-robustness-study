#!/bin/bash
cd ../../..
. setenv
cd ${rad_files4bzip2}
mkdir foo_fuzzed
cd ${home_folder}/script/radamsa_script/script_2_option_f
echo 1234 > foo

cnt=0
while(( $cnt<=499 )) 
do
  radamsa --seed ${cnt} foo > ${rad_files4bzip2}/foo_fuzzed/foo_${cnt}
  let "cnt++"
done

rm foo
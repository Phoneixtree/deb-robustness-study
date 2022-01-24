#!/bin/bash
  cd ../../..
  . setenv
  cd script/radamsa_script/script_0_option_c
cnt=0
while(( $cnt<=499 )) 
do
  radamsa --seed ${cnt} sample1.ref > ${rad_files4bzip2}/sample1.ref_fuzzed/sample1_${cnt}.ref
  let "cnt++"
done


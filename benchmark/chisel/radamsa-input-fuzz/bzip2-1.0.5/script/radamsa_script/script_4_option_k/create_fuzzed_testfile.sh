#!/bin/bash
  cd ../../..
  . setenv
  cd script/radamsa_script/script_0_option_d
cnt=0
while(( $cnt<=499 )) 
do
  radamsa --seed ${cnt} sample1.bz2.ref > ${rad_files4bzip2}/sample1.bz2.ref_fuzzed/sample1_${cnt}.bz2.ref
  let "cnt++"
done


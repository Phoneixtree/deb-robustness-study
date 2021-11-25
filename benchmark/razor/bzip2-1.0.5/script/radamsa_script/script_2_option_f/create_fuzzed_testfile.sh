#!/bin/bash
  cd ../../..
  . setenv
  cd script/radamsa_script/script_2_option_f
cnt=0
while(( $cnt<=499 )) 
do
  radamsa --seed ${cnt} foo > ${rad_files4bzip2}/foo_fuzzed/foo_${cnt}
  let "cnt++"
done


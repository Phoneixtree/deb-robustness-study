#!/bin/bash
  cd ../../..
  . setenv
  cd script/radamsa_script/script_4_option_k
cnt=0
while(( $cnt<=499 )) 
do
  rm ${rad_files4bzip2}/foo_fuzzed/foo_${cnt}.bz2
  let "cnt++"
done


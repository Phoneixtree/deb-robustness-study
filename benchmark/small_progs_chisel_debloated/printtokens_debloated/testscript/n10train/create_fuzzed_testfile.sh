#!/bin/bash
cnt=0
while(( $cnt<=499 )) 
do
  radamsa --seed ${cnt} ../../input.origin/n10train/newtst41.tst  ${rad_files4gzip}/input_0_option_c/sample1_fuzzed${cnt}.ref
  let "cnt++"
done
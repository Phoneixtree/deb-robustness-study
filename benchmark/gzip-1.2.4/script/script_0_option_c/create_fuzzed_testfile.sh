#!/bin/bash
cnt=0
while(( $cnt<=100 )) 
do
  radamsa --seed ${cnt} sample1.ref > ${rad_files4gzip}/input_0_option_c/sample1_fuzzed${cnt}.ref
  let "cnt++"
done


#!/bin/bash
cnt=0
while(( $cnt<=499 )) 
do
  radamsa --seed ${cnt} sample1.gz > ${rad_files4gzip}/input_4_option_t/sample1_fuzzed${cnt}.gz
  let "cnt++"
done


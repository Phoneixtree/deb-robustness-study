#!/bin/bash
cnt=0
while(( $cnt<=100 )) 
do
  radamsa --seed ${cnt} sample1.gz > ${rad_files4gzip}/input_1_option_d/sample1_fuzzed${cnt}.gz
  let "cnt++"
done


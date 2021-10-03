#!/bin/bash
cnt=0
while(( $cnt<=100 )) 
do
  radamsa --seed ${cnt} sample1.gz > testfiles/sample1_fuzzed${cnt}.gz
  let "cnt++"
done


#!/bin/bash
cnt=0
while(( $cnt<=100 )) 
do
  radamsa --seed ${cnt} sample1.ref > testfiles/sample1_fuzzed${cnt}.ref
  let "cnt++"
done


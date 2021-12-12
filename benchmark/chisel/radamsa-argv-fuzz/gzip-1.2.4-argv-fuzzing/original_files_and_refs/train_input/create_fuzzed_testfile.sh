#!/bin/bash
cnt=0
mkdir input5_fuzzed
while(( $cnt<=499 )) 
do
  radamsa --seed ${cnt} train_cmd/train_input5 > input5_fuzzed/input5_${cnt}
  let "cnt++"
done


#!/bin/bash
cnt=0
mkdir input6_fuzzed
while(( $cnt<=499 )) 
do
  radamsa --seed ${cnt} train_cmd/train_input6 > input6_fuzzed/input6_${cnt}
  let "cnt++"
done


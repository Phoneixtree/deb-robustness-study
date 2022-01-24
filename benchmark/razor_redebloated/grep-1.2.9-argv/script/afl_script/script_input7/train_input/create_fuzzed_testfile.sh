#!/bin/bash
cnt=0
cntt=0
while(($cntt<=26))
do
mkdir input${cntt}_fuzzed
	while(( $cnt<=499 )) 
	do
	  radamsa --seed ${cnt} train_cmd/input_file${cntt} > input${cntt}_fuzzed/input${cntt}_${cnt}
	  let "cnt++"
	done
	cnt=0
let "cntt++"
done


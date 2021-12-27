#!/bin/bash
cnt=0
options=$1
while(( $cnt<=499 )) 
do
    radamsa --seed ${cnt} seed/${options}/test > ${rad_files}$options/input_fuzzed_$cnt
    let "cnt++" 
done


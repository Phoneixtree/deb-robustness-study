#!/bin/bash
cnt=0
options=$1
mkdir ${rad_files}$options
while(( $cnt<=499 )) 
do  
    
    radamsa --seed ${cnt} seed/options-${options}/input > ${rad_files}$options/input_fuzzed_$cnt
    let "cnt++" 
done


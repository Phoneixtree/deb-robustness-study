#!/bin/bash
cnt=0
options=$1
mkdir ${rad_files}$options
while(( $cnt<=499 )) 
do  
    
    radamsa --seed ${cnt} seed/${options}/input1 > ${rad_files}$options/input1_fuzzed_$cnt
    radamsa --seed ${cnt} seed/${options}/input2 > ${rad_files}$options/input2_fuzzed_$cnt
    let "cnt++" 
done


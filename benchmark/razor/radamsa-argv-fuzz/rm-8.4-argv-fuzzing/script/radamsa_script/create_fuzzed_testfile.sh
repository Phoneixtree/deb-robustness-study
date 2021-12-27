#!/bin/bash
cnt=0
options=$1
mkdir ${rad_files}$options
while(( $cnt<=499 )) 
do  
    
    radamsa --seed ${cnt} seed/${options}/test > ${rad_files}$options/test_fuzzed_$cnt
    let "cnt++" 
done

#!/bin/bash
cnt=0
while(( $cnt<=499 )) 
do
  for input in $(ls input/*); do
    filename=`echo ${input}_fuzzed_${cnt}`
    radamsa --seed ${cnt} ${input} > ${rad_files}/${filename}
  done 
  let "cnt++" 
done


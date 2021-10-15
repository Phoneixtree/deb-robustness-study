#!/bin/bash
cnt=0
while(( $cnt<=500 )) 
do
  radamsa --seed ${cnt} input > ${rad_files}/input${cnt}
  radamsa --seed ${cnt} data.txt > ${rad_files}/data${cnt}
  let "cnt++"
done


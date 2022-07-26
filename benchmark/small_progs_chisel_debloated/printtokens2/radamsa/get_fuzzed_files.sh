#!/bin/bash
   for file in $(ls seed); do
cnt=0
while(( $cnt<=499 )) 
do
  radamsa --seed ${cnt} seed/$file > fuzzed/${file}_${cnt}
  let "cnt++"
done
done
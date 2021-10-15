#!/bin/bash
cnt=0
while(( $cnt<=500 )) 
do
  echo "1234" >> file 
  echo "1234" >> filei 
  radamsa --seed ${cnt} file > ${rad_files}/file${cnt}
  radamsa --seed ${cnt} filei > ${rad_files}/filei${cnt}
  let "cnt++"
done


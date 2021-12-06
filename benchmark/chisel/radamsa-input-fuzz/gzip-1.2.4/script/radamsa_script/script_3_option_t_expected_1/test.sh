#!/bin/bash
rm result/log_origin
rm result/log_reduced
mkdir result
cnt=0
while(( $cnt<=499 )) 
do
  echo "1234" | radamsa --seed ${cnt} > foo  
  timeout -k 0.5 0.5 ${reduced} -t foo;
  echo $? >> result/log_reduced
  rm foo
  let "cnt++"
done 


./result_analysis.sh



  
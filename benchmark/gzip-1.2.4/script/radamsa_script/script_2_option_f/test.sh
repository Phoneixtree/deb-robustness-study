#!/bin/bash
rm result/log_origin
rm result/log_reduced
cnt=0
while(( $cnt<=500 )) 
do
  echo "1234" | radamsa --seed ${cnt} > foo  
  ${origin} -c foo >&/dev/null
  echo $? >> result/log_origin
  ${reduced} -f foo;
  echo $? >> result/log_reduced
  let "cnt++"
done 

./result_analysis.sh



  
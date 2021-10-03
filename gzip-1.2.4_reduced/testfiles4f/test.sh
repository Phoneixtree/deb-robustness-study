#!/bin/bash
rm result/log_origin
rm result/log_reduced
cnt=0
while(( $cnt<=100 )) 
do
  echo "1234" | radamsa --seed ${cnt} > foo  
  ./gzip-1.2.4.origin -c foo >&/dev/null
  echo $? >> result/log_origin
  ./gzip-1.2.4.reduced -f foo;
  echo $? >> result/log_reduced
  let "cnt++"
done 

./result_analysis.sh



  
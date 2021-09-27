#!/bin/bash
cnt=0
while(( $cnt<=100 )) 
do
  echo "1234" | radamsa --seed ${cnt} > foo  
  ./gzip-1.2.4.origin -c foo >&/dev/null
  ./gzip-1.2.4.reduced -f foo;
  echo $? >> log
  let "cnt++"
done



  
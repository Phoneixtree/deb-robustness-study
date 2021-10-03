#!/bin/bash
cnt=0
crash_cnt=0
while(( $cnt<=100 )) 
do
  ../gzip-1.2.4.origin -c < testfiles/sample1_fuzzed${cnt}.ref > testfiles/sample1_fuzzed${cnt}.gz 2>/dev/null
  ../gzip-1.2.4.reduced -c <  testfiles/sample1_fuzzed${cnt}.ref > testfiles/sample1_fuzzed${cnt}.rb2 2>/dev/null
  #echo $? >> /dev/null && exit 1 | echo "crashed"${crash_cnt} >> result/log_reduced_crash_status | let "crash_cnt++"
  cmp testfiles/sample1_fuzzed${cnt}.gz testfiles/sample1_fuzzed${cnt}.rb2 >&/dev/null >> result/log_if_behave_properly
  echo -e "\n" >>  result/log_if_behave_properly
  rm testfiles/sample1_fuzzed${cnt}.gz
  rm testfiles/sample1_fuzzed${cnt}.rb2
  let "cnt++"
done





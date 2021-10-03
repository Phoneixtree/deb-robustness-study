#!/bin/bash
cnt=0
crash_cnt=0
rm result/log_if_behave_properly
while(( $cnt<=100 )) 
do
  ../gzip-1.2.4.origin -d < testfiles/sample1_fuzzed${cnt}.gz > testfiles/sample1_fuzzed${cnt}.tst 2>/dev/null
  timeout 2 ../gzip-1.2.4.reduced -d <  testfiles/sample1_fuzzed${cnt}.gz > testfiles/sample1_fuzzed${cnt}.ref 2>/dev/null
  #echo $? >> /dev/null && exit 1 | echo "crashed"${crash_cnt} >> result/log_reduced_crash_status | let "crash_cnt++"
  cmp testfiles/sample1_fuzzed${cnt}.tst testfiles/sample1_fuzzed${cnt}.ref >&/dev/null >> result/log_if_behave_properly
  echo -e "\n" >>  result/log_if_behave_properly
  rm testfiles/sample1_fuzzed${cnt}.tst
  rm testfiles/sample1_fuzzed${cnt}.ref
  let "cnt++"
done





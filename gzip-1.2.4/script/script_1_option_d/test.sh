#!/bin/bash
cnt=0
crash_cnt=0
rm result/log_if_behave_properly
while(( $cnt<=100 )) 
do
  ${origin} -d < ${rad_files4gzip}/input_1_option_d/sample1_fuzzed${cnt}.gz > ${rad_files4gzip}/input_1_option_d/sample1_fuzzed${cnt}.tst 2>/dev/null
  timeout 2 ${reduced} -d <  ${rad_files4gzip}/input_1_option_d/sample1_fuzzed${cnt}.gz > ${rad_files4gzip}/input_1_option_d/sample1_fuzzed${cnt}.ref 2>/dev/null
  #echo $? >> /dev/null && exit 1 | echo "crashed"${crash_cnt} >> result/log_reduced_crash_status | let "crash_cnt++"
  cmp ${rad_files4gzip}/input_1_option_d/sample1_fuzzed${cnt}.tst ${rad_files4gzip}/input_1_option_dsample1_fuzzed${cnt}.ref >&/dev/null >> result/log_if_behave_properly
  echo -e "\n" >>  result/log_if_behave_properly
  rm ${rad_files4gzip}/input_1_option_d/sample1_fuzzed${cnt}.tst
  rm ${rad_files4gzip}/input_1_option_d/sample1_fuzzed${cnt}.ref
  let "cnt++"
done





#!/bin/bash
cnt=0
crash_cnt=0
while(( $cnt<=100 )) 
do

  ${origin} -c < ${rad_files4gzip}/input_0_option_c/sample1_fuzzed${cnt}.ref > ${rad_files4gzip}/input_0_option_c/sample1_fuzzed${cnt}.gz 2>/dev/null
  ${reduced} -c <  ${rad_files4gzip}/input_0_option_c/sample1_fuzzed${cnt}.ref > ${rad_files4gzip}/input_0_option_c/sample1_fuzzed${cnt}.rb2 2>/dev/null
  #echo $? >> /dev/null && exit 1 | echo "crashed"${crash_cnt} >> result/log_reduced_crash_status | let "crash_cnt++"
  cmp ${rad_files4gzip}/input_0_option_c/sample1_fuzzed${cnt}.gz ${rad_files4gzip}/input_0_option_c/sample1_fuzzed${cnt}.rb2 >&/dev/null >> result/log_if_behave_properly
  echo -e "\n" >>  result/log_if_behave_properly
  rm ${rad_files4gzip}/input_0_option_c/sample1_fuzzed${cnt}.gz
  rm ${rad_files4gzip}/input_0_option_c/sample1_fuzzed${cnt}.rb2
  let "cnt++"
done





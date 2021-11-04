#!/bin/bash
rm result/log_if_behave_properly
rm result/log_reduced
rm result/log_origin
cnt=0
while(( $cnt<=499 )) 
do

  ${origin} -c < ${rad_files4gzip}/input_0_option_c/sample1_fuzzed${cnt}.ref > ${rad_files4gzip}/input_0_option_c/sample1_fuzzed${cnt}.gz 2>/dev/null
  echo $? >> result/log_origin
  ${reduced} -c <  ${rad_files4gzip}/input_0_option_c/sample1_fuzzed${cnt}.ref > ${rad_files4gzip}/input_0_option_c/sample1_fuzzed${cnt}.rb2 2>/dev/null
  echo $? >> result/log_reduced
  cmp ${rad_files4gzip}/input_0_option_c/sample1_fuzzed${cnt}.gz ${rad_files4gzip}/input_0_option_c/sample1_fuzzed${cnt}.rb2 >&/dev/null >> result/log_if_behave_properly
  echo -e "\n" >>  result/log_if_behave_properly
  rm ${rad_files4gzip}/input_0_option_c/sample1_fuzzed${cnt}.gz
  rm ${rad_files4gzip}/input_0_option_c/sample1_fuzzed${cnt}.rb2
  let "cnt++"
done


./result_analysis.sh




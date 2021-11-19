#!/bin/bash
cnt=0
rm result/log_reduced
while(( $cnt<=499 )) 
do
  timeout -k 0.5 0.5 ${reduced} -d <  ${rad_files4gzip}/input_4_option_t/sample1_fuzzed${cnt}.gz > ${rad_files4gzip}/input_4_option_t/sample1_fuzzed${cnt}.ref 2>/dev/null
  echo $? >> result/log_reduced
  rm ${rad_files4gzip}/input_4_option_t/sample1_fuzzed${cnt}.ref
  let "cnt++"
done

./result_analysis.sh




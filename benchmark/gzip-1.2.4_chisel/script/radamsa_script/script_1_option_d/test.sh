#!/bin/bash
cnt=0
rm result/log_if_behave_properly
rm result/log_reduced
rm result/log_origin
while(( $cnt<=499 )) 
do
  ${origin} -d < ${rad_files4gzip}/input_1_option_d/sample1_fuzzed${cnt}.gz > ${rad_files4gzip}/input_1_option_d/sample1_fuzzed${cnt}.tst 2>/dev/null
  echo $? >> result/log_origin
  timeout -k 0.5 0.5 ${reduced} -d <  ${rad_files4gzip}/input_1_option_d/sample1_fuzzed${cnt}.gz > ${rad_files4gzip}/input_1_option_d/sample1_fuzzed${cnt}.ref 2>/dev/null
  echo $? >> result/log_reduced
  cmp ${rad_files4gzip}/input_1_option_d/sample1_fuzzed${cnt}.tst ${rad_files4gzip}/input_1_option_dsample1_fuzzed${cnt}.ref >&/dev/null >> result/log_if_behave_properly
  echo -e "\n" >>  result/log_if_behave_properly
  rm ${rad_files4gzip}/input_1_option_d/sample1_fuzzed${cnt}.tst
  rm ${rad_files4gzip}/input_1_option_d/sample1_fuzzed${cnt}.ref
  let "cnt++"
done

./result_analysis.sh




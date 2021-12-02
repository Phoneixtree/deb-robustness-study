#!/bin/bash
  cd ../../..
  . setenv
  cd script/radamsa_script/script_1_option_d


  debloat=${reduced}.$1
  mkdir result
  echo "clean" > result/log_origin
  echo "clean" > result/log_reduced


cnt=0
while(( $cnt<=499 )) 
do
  { timeout -k 0.5 0.5 ${origin} -d < ${rad_files4gzip}/sample1.gz_fuzzed/sample1_${cnt}.gz > ${rad_files4gzip}/sample1.gz_fuzzed/sample1_${cnt}.tst ; } 2>/dev/null
  echo $? >> result/log_origin
    rm ${rad_files4gzip}/sample1.gz_fuzzed/sample1_${cnt}.tst
  { timeout -k 0.5 0.5 ${debloat} -d < ${rad_files4gzip}/sample1.gz_fuzzed/sample1_${cnt}.gz > ${rad_files4gzip}/sample1.gz_fuzzed/sample1_${cnt}.tst ; } 2>/dev/null
  echo $? >> result/log_reduced
  rm ${rad_files4gzip}/sample1.gz_fuzzed/sample1_${cnt}.tst
  let "cnt++"
done

./result_analysis.sh




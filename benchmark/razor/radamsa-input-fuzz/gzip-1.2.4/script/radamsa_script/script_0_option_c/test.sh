  #!/bin/bash
  cd ../../..
  . setenv
  cd script/radamsa_script/script_0_option_c

  debloat=${reduced}.$1
  mkdir result
  echo "clean" > result/log_origin
  echo "clean" > result/log_reduced
  
  cnt=0
while((${cnt} < 500))
do
  { timeout -k 0.5 0.5 ${origin} -c < ${rad_files4gzip}/sample1.ref_fuzzed/sample1_${cnt}.ref > ${rad_files4gzip}/sample1.ref_fuzzed/sample1_${cnt}.gz ; } 2>/dev/null
  echo $? >> result/log_origin
  { timeout -k 0.5 0.5 ${debloat} -c < ${rad_files4gzip}/sample1.ref_fuzzed/sample1_${cnt}.ref >  ${rad_files4gzip}/sample1.ref_fuzzed/sample1_${cnt}.rb2 ; } 2>/dev/null
  echo $? >> result/log_reduced
  
  rm ${rad_files4gzip}/sample1.ref_fuzzed/sample1_${cnt}.gz
  rm ${rad_files4gzip}/sample1.ref_fuzzed/sample1_${cnt}.rb2
  
  let "cnt++" 

done

./result_analysis.sh
  

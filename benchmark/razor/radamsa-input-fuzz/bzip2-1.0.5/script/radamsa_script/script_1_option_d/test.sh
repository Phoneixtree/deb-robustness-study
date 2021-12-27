  #!/bin/bash
  cd ../../..
  . setenv
  cd script/radamsa_script/script_1_option_d
  
  debloat=${reduced}.$1
  
  cnt=0
  mkdir result
  echo "clean" > result/log_reduced
  echo "clean" > result/log_origin
  while((${cnt} < 500))
  do
  { timeout -k 0.5 0.5 ${origin} -d < ${rad_files4bzip2}/sample1.bz2.ref_fuzzed/sample1_${cnt}.bz2.ref > ${rad_files4bzip2}/sample1_${cnt}.tst; } >/dev/null
  echo $? >> result/log_origin 
  rm ${rad_files4bzip2}/sample1_${cnt}.tst
  { timeout -k 0.5 0.5 ${debloat} -c < ${rad_files4bzip2}/sample1.bz2.ref_fuzzed/sample1_${cnt}.bz2.ref > ${rad_files4bzip2}/sample1_${cnt}.tst; } >/dev/null
  echo $? >> result/log_reduced
  rm ${rad_files4bzip2}/sample1_${cnt}.tst
  
  let "cnt++"
  done
  
  ./result_analysis.sh
  

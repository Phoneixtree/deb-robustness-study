  #!/bin/bash
  cd ../../..
  . setenv
  cd script/radamsa_script/script_3_option_t_sample1.bz2.ref
  
  debloat=${reduced}.$1
  
  
  cnt=0
  mkdir result
  echo "clean" > result/log_reduced
  echo "clean" > result/log_origin
  while((${cnt} < 500))
  do
  { timeout -k 0.5 0.5 ${origin} -t ${rad_files4bzip2}/sample1.bz2.ref_fuzzed/sample1_${cnt}.bz2.ref ; } >/dev/null

  echo $? >> result/log_origin 

  { timeout -k 0.5 0.5 ${debloat} -t ${rad_files4bzip2}/sample1.bz2.ref_fuzzed/sample1_${cnt}.bz2.ref ; } >/dev/null
  echo $? >> result/log_reduced

  let "cnt++"
  done

  ./result_analysis.sh
  

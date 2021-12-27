  #!/bin/bash
  cd ../../..
  . setenv
  cd script/radamsa_script/script_4_option_k
  
  debloat=${reduced}.$1
  
  cnt=0
  mkdir result
  echo "clean" > result/log_reduced
  echo "clean" > result/log_origin
  while((${cnt} < 500))
  do
  { timeout -k 0.5 0.5 ${origin} -k ${rad_files4bzip2}/foo_fuzzed/foo_${cnt} > foo_${cnt}.bz2; } >/dev/null
  echo $? >> result/log_origin 
  

  { timeout -k 0.5 0.5 ${debloat} -k ${rad_files4bzip2}/foo_fuzzed/foo_${cnt} > foo_${cnt}.bz2; } >/dev/null
  echo $? >> result/log_reduced
  rm foo_${cnt}.bz2
  
  let "cnt++"
  done
  
  ./result_analysis.sh
  ./clean
  

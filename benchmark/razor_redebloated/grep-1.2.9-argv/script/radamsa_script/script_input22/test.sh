  #!/bin/bash
  cd ../../..
  . setenv
  cd script/radamsa_script/script_input22
  
  debloat=${reduced}.$1
  
  cnt=0
  mkdir result
  echo "clean" > result/log_reduced
  echo "clean" > result/log_origin
  while((${cnt} < 500))
  do
  { timeout -k 0.5 0.5 ${origin} < ${rad_files4grep}/input22_fuzzed/input22_${cnt} ; }
  echo $? >> result/log_origin 

  { timeout -k 0.5 0.5 ${debloat}< ${rad_files4grep}/input22_fuzzed/input22_${cnt} ; } 
  echo $? >> result/log_reduced
  
  let "cnt++"
  done
  
  ./result_analysis.sh
  

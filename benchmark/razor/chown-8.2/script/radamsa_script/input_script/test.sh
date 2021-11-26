  #/bin/bash
  cd ../../..
  . setenv
  cd script/radamsa_script/input_script
  
  debloat=${reduced}.$1
  
  cnt=0
  mkdir result
  echo "clean" > result/log_reduced
  echo "clean" > result/log_origin
  while((${cnt} < 500))
  do
  { timeout -k 0.5 0.5 ${origin} "ye " ${rad_files4grep}/input_fuzzed/input_${cnt}; } >/dev/null
  echo $? >> result/log_origin 
  { timeout -k 0.5 0.5 ${origin} "cold" ${rad_files4grep}/input_fuzzed/input_${cnt}; } >/dev/null
  echo $? >> result/log_origin
  { timeout -k 0.5 0.5 ${origin} "not exist" ${rad_files4grep}/input_fuzzed/input_${cnt}; } >/dev/null
  echo $? >> result/log_origin
  { timeout -k 0.5 0.5 ${origin} -E '\b(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?\.){3}(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)' ${rad_files4grep}/input_fuzzed/input_${cnt}; } >/dev/null
  echo $? >> result/log_origin
  
  { timeout -k 0.5 0.5 ${debloat} "ye " ${rad_files4grep}/input_fuzzed/input_${cnt}; } >/dev/null
  echo $? >> result/log_reduced
  { timeout -k 0.5 0.5 ${debloat} "cold" ${rad_files4grep}/input_fuzzed/input_${cnt}; } >/dev/null
  echo $? >> result/log_reduced
  { timeout -k 0.5 0.5 ${debloat} "not exist" ${rad_files4grep}/input_fuzzed/input_${cnt}; } >/dev/null
  echo $? >> result/log_reduced
  { timeout -k 0.5 0.5 ${debloat} -E '\b(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?\.){3}(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)' ${rad_files4grep}/input_fuzzed/input_${cnt}; } >/dev/null
  echo $? >> result/log_reduced 
  
  let "cnt++"
  done
  
  #grep -c "0" result/log_reduced
  #grep -c "2" result/log_reduced
  ./result_analysis.sh
  

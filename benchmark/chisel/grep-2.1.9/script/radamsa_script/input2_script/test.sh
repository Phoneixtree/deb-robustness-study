  #/bin/bash
  cd ../../..
  . setenv
  cd script/radamsa_script/input2_script
  
  debloat=${reduced}.$1
  
  cnt=0
  mkdir result
  
  echo "clean" > result/log_reduced
  echo "clean" > result/log_origin
  while((${cnt} < 500))
  do
  { timeout -k 0.5 0.5 ${origin} "a" ${rad_files4grep}/input2_fuzzed/input2_${cnt}; } >/dev/null
  echo $? >> result/log_origin 
  { timeout -k 0.5 0.5 ${origin} -n "si" ${rad_files4grep}/input2_fuzzed/input2_${cnt}; } >/dev/null
  echo $? >> result/log_origin
  { timeout -k 0.5 0.5 ${origin} -o [r][a][n][d]* ${rad_files4grep}/input2_fuzzed/input2_${cnt}; } >/dev/null
  echo $? >> result/log_origin
  { timeout -k 0.5 0.5 ${origin} -v "a" ${rad_files4grep}/input2_fuzzed/input2_${cnt}; } >/dev/null
  echo $? >> result/log_origin
  
  { timeout -k 0.5 0.5 ${origin} -i "Si" ${rad_files4grep}/input2_fuzzed/input2_${cnt}; } >/dev/null
  echo $? >> result/log_origin 
  { timeout -k 0.5 0.5 ${origin} -w "Si" ${rad_files4grep}/input2_fuzzed/input2_${cnt}; } >/dev/null
  echo $? >> result/log_origin
  { timeout -k 0.5 0.5 ${origin} -x "Don't" ${rad_files4grep}/input2_fuzzed/input2_${cnt}; } >/dev/null
  echo $? >> result/log_origin
  { timeout -k 0.5 0.5 ${origin} -F "randomtext*" ${rad_files4grep}/input2_fuzzed/input2_${cnt}; } >/dev/null
  echo $? >> result/log_origin  
  
  { timeout -k 0.5 0.5 ${origin} -E "randomtext*" ${rad_files4grep}/input2_fuzzed/input2_${cnt}; } >/dev/null
  echo $? >> result/log_origin 
  { timeout -k 0.5 0.5 ${origin} ^D ${rad_files4grep}/input2_fuzzed/input2_${cnt}; } >/dev/null
  echo $? >> result/log_origin
  { timeout -k 0.5 0.5 ${origin} .$ ${rad_files4grep}/input2_fuzzed/input2_${cnt}; } >/dev/null
  echo $? >> result/log_origin
  { timeout -k 0.5 0.5 ${origin} \^ ${rad_files4grep}/input2_fuzzed/input2_${cnt}; } >/dev/null
  echo $? >> result/log_origin  
  
  { timeout -k 0.5 0.5 ${origin} \^$ ${rad_files4grep}/input2_fuzzed/input2_${cnt}; } >/dev/null
  echo $? >> result/log_origin
  { timeout -k 0.5 0.5 ${origin} ^[AEIOU] ${rad_files4grep}/input2_fuzzed/input2_${cnt}; } >/dev/null
  echo $? >> result/log_origin 
  { timeout -k 0.5 0.5 ${origin} "free[^[:space:]]+" ${rad_files4grep}/input2_fuzzed/input2_${cnt}; } >/dev/null
  echo $? >> result/log_origin


 
  { timeout -k 0.5 0.5 ${reduced} "a" ${rad_files4grep}/input2_fuzzed/input2_${cnt}; } >/dev/null
  echo $? >> result/log_reduced
  { timeout -k 0.5 0.5 ${reduced} -n "si" ${rad_files4grep}/input2_fuzzed/input2_${cnt}; } >/dev/null
  echo $? >> result/log_reduced
  { timeout -k 0.5 0.5 ${reduced} -o [r][a][n][d]* ${rad_files4grep}/input2_fuzzed/input2_${cnt}; } >/dev/null
  echo $? >> result/log_reduced
  { timeout -k 0.5 0.5 ${reduced} -v "a" ${rad_files4grep}/input2_fuzzed/input2_${cnt}; } >/dev/null
  echo $? >> result/log_reduced
  
  { timeout -k 0.5 0.5 ${reduced} -i "Si" ${rad_files4grep}/input2_fuzzed/input2_${cnt}; } >/dev/null
  echo $? >> result/log_reduced
  { timeout -k 0.5 0.5 ${reduced} -w "Si" ${rad_files4grep}/input2_fuzzed/input2_${cnt}; } >/dev/null
  echo $? >> result/log_reduced
  { timeout -k 0.5 0.5 ${reduced} -x "Don't" ${rad_files4grep}/input2_fuzzed/input2_${cnt}; } >/dev/null
  echo $? >> result/log_reduced
  { timeout -k 0.5 0.5 ${reduced} -F "randomtext*" ${rad_files4grep}/input2_fuzzed/input2_${cnt}; } >/dev/null
  echo $? >> result/log_reduced 
  
  { timeout -k 0.5 0.5 ${reduced} -E "randomtext*" ${rad_files4grep}/input2_fuzzed/input2_${cnt}; } >/dev/null
  echo $? >> result/log_reduced
  { timeout -k 0.5 0.5 ${reduced} ^D ${rad_files4grep}/input2_fuzzed/input2_${cnt}; } >/dev/null
  echo $? >> result/log_reduced
  { timeout -k 0.5 0.5 ${reduced} .$ ${rad_files4grep}/input2_fuzzed/input2_${cnt}; } >/dev/null
  echo $? >> result/log_reduced
  { timeout -k 0.5 0.5 ${reduced} \^ ${rad_files4grep}/input2_fuzzed/input2_${cnt}; } >/dev/null
  echo $? >> result/log_reduced 
  
  { timeout -k 0.5 0.5 ${reduced} \^$ ${rad_files4grep}/input2_fuzzed/input2_${cnt}; } >/dev/null
  echo $? >> result/log_reduced
  { timeout -k 0.5 0.5 ${reduced} ^[AEIOU] ${rad_files4grep}/input2_fuzzed/input2_${cnt}; } >/dev/null
  echo $? >> result/log_reduced
  { timeout -k 0.5 0.5 ${reduced} "free[^[:space:]]+" ${rad_files4grep}/input2_fuzzed/input2_${cnt}; } >/dev/null
  echo $? >> result/log_reduced
  
  let "cnt++"
  done
  
  #grep -c "0" result/log_reduced
  #grep -c "2" result/log_reduced
  ./result_analysis.sh
  

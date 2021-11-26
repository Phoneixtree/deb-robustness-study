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


 
  { timeout -k 0.5 0.5 ${debloat} "a" ${rad_files4grep}/input2_fuzzed/input2_${cnt}; } >/dev/null
  echo $? >> result/log_reduced
  { timeout -k 0.5 0.5 ${debloat} -n "si" ${rad_files4grep}/input2_fuzzed/input2_${cnt}; } >/dev/null
  echo $? >> result/log_reduced
  { timeout -k 0.5 0.5 ${debloat} -o [r][a][n][d]* ${rad_files4grep}/input2_fuzzed/input2_${cnt}; } >/dev/null
  echo $? >> result/log_reduced
  { timeout -k 0.5 0.5 ${debloat} -v "a" ${rad_files4grep}/input2_fuzzed/input2_${cnt}; } >/dev/null
  echo $? >> result/log_reduced
  
  { timeout -k 0.5 0.5 ${debloat} -i "Si" ${rad_files4grep}/input2_fuzzed/input2_${cnt}; } >/dev/null
  echo $? >> result/log_reduced
  { timeout -k 0.5 0.5 ${debloat} -w "Si" ${rad_files4grep}/input2_fuzzed/input2_${cnt}; } >/dev/null
  echo $? >> result/log_reduced
  { timeout -k 0.5 0.5 ${debloat} -x "Don't" ${rad_files4grep}/input2_fuzzed/input2_${cnt}; } >/dev/null
  echo $? >> result/log_reduced
  { timeout -k 0.5 0.5 ${debloat} -F "randomtext*" ${rad_files4grep}/input2_fuzzed/input2_${cnt}; } >/dev/null
  echo $? >> result/log_reduced 
  
  { timeout -k 0.5 0.5 ${debloat} -E "randomtext*" ${rad_files4grep}/input2_fuzzed/input2_${cnt}; } >/dev/null
  echo $? >> result/log_reduced
  { timeout -k 0.5 0.5 ${debloat} ^D ${rad_files4grep}/input2_fuzzed/input2_${cnt}; } >/dev/null
  echo $? >> result/log_reduced
  { timeout -k 0.5 0.5 ${debloat} .$ ${rad_files4grep}/input2_fuzzed/input2_${cnt}; } >/dev/null
  echo $? >> result/log_reduced
  { timeout -k 0.5 0.5 ${debloat} \^ ${rad_files4grep}/input2_fuzzed/input2_${cnt}; } >/dev/null
  echo $? >> result/log_reduced 
  
  { timeout -k 0.5 0.5 ${debloat} \^$ ${rad_files4grep}/input2_fuzzed/input2_${cnt}; } >/dev/null
  echo $? >> result/log_reduced
  { timeout -k 0.5 0.5 ${debloat} ^[AEIOU] ${rad_files4grep}/input2_fuzzed/input2_${cnt}; } >/dev/null
  echo $? >> result/log_reduced
  { timeout -k 0.5 0.5 ${debloat} "free[^[:space:]]+" ${rad_files4grep}/input2_fuzzed/input2_${cnt}; } >/dev/null
  echo $? >> result/log_reduced
  
  let "cnt++"
  done
  
  #grep -c "0" result/log_reduced
  #grep -c "2" result/log_reduced
  ./result_analysis.sh
  

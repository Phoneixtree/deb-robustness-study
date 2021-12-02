  #/bin/bash
  cd ../../..
  . setenv
  cd script/radamsa_script/input_dir_script
  
  debloat=${reduced}.$1
  
  cnt=0
  mkdir result
  echo "clean" > result/log_reduced
  echo "clean" > result/log_origin
  while((${cnt} < 500))
  do
  { timeout -k 0.5 0.5 ${origin} "a" -v -H -r ${rad_files4grep}/input_dir_fuzzed/input_dir_${cnt}; } >/dev/null
  echo $? >> result/log_origin 
  { timeout -k 0.5 0.5 ${origin} "1" -h -r ${rad_files4grep}/input_dir_fuzzed/input_dir_${cnt}; } >/dev/null
  echo $? >> result/log_origin 
  { timeout -k 0.5 0.5 ${origin} "1" -r ${rad_files4grep}/input_dir_fuzzed/input_dir_${cnt} -l ; } >/dev/null
  echo $? >> result/log_origin 
  { timeout -k 0.5 0.5 ${origin} "1" -r ${rad_files4grep}/input_dir_fuzzed/input_dir_${cnt} -L ; } >/dev/null
  echo $? >> result/log_origin  
  { timeout -k 0.5 0.5 ${origin} "randomtext" -r ${rad_files4grep}/input_dir_fuzzed/input_dir_${cnt} -c ; } >/dev/null
  echo $? >> result/log_origin 
  { timeout -k 0.5 0.5 ${origin} "1" -r ${rad_files4grep}/input_dir_fuzzed/input_dir_${cnt} -q ; } >/dev/null
  echo $? >> result/log_origin 
  { timeout -k 0.5 0.5 ${origin} "1" -r ${rad_files4grep}/input_dir_fuzzed/input_dir_${cnt} -s ; } >/dev/null
  echo $? >> result/log_origin 

  { timeout -k 0.5 0.5 ${reduced} "a" -v -H -r ${rad_files4grep}/input_dir_fuzzed/input_dir_${cnt}; } >/dev/null
  echo $? >> result/log_reduced 
  { timeout -k 0.5 0.5 ${reduced} "1" -h -r ${rad_files4grep}/input_dir_fuzzed/input_dir_${cnt}; } >/dev/null
  echo $? >> result/log_reduced 
  { timeout -k 0.5 0.5 ${reduced} "1" -r ${rad_files4grep}/input_dir_fuzzed/input_dir_${cnt} -l ; } >/dev/null
  echo $? >> result/log_reduced 
  { timeout -k 0.5 0.5 ${reduced} "1" -r ${rad_files4grep}/input_dir_fuzzed/input_dir_${cnt} -L ; } >/dev/null
  echo $? >> result/log_reduced   
  { timeout -k 0.5 0.5 ${reduced} "randomtext" -r ${rad_files4grep}/input_dir_fuzzed/input_dir_${cnt} -c ; } >/dev/null
  echo $? >> result/log_reduced 
  { timeout -k 0.5 0.5 ${reduced} "1" -r ${rad_files4grep}/input_dir_fuzzed/input_dir_${cnt} -q ; } >/dev/null
  echo $? >> result/log_reduced 
  { timeout -k 0.5 0.5 ${reduced} "1" -r ${rad_files4grep}/input_dir_fuzzed/input_dir_${cnt} -s ; } >/dev/null
  echo $? >> result/log_reduced 




  
  let "cnt++"
  done
  
  #grep -c "0" result/log_reduced
  #grep -c "2" result/log_reduced
  ./result_analysis.sh
  

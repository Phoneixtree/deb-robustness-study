  #/bin/bash
  cd ../../..
  . setenv
  cd script/radamsa_script/option_rfc_script
  
  debloat=${reduced}.$1
  
  cnt=0
  mkdir result
  
  echo "clean" > result/log_reduced
  echo "clean" > result/log_origin
  while((${cnt} < 500))
  do
  { timeout -k 0.5 0.5 ${origin} < ${rad_files4date}/rfc_fuzzed/rfc_${cnt}; } >/dev/null
  echo $? >> result/log_origin
   
  { timeout -k 0.5 0.5 ${reduced} < ${rad_files4date}/rfc_fuzzed/rfc_${cnt}; } >/dev/null
  echo $? >> result/log_reduced

  
  let "cnt++"
  done
  
  ./result_analysis.sh
  

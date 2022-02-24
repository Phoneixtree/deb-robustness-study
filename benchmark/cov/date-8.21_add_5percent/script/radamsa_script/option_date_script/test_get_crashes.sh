  #/bin/bash
  cd ../../..
  . setenv
  cd script/radamsa_script/option_date_script
  
  debloat=${reduced}.$1
  
  cnt=0
  mkdir result
  
  echo "clean" > result/log_reduced
  echo "clean" > result/log_origin
  while((${cnt} < 500))
  do
  { timeout -k 0.5 0.5 ${origin} < ${rad_files4date}/date_fuzzed/date_${cnt}; } >/dev/null
  ret=$?
  if [[ $ret -eq "124" ]]; then
    cp ${rad_files4date}/date_fuzzed/date_${cnt}   ./
  elif [[ $ret -eq "139" ]]
  then 
    cp ${rad_files4date}/date_fuzzed/date_${cnt}   ./
  fi
  echo $ret >> result/log_origin
   
  { timeout -k 0.5 0.5 ${reduced} < ${rad_files4date}/date_fuzzed/date_${cnt}; } >/dev/null
  ret=$?
  if [[ $ret -eq "124" ]]; then
    cp ${rad_files4date}/date_fuzzed/date_${cnt}   ./
  elif [[ $ret -eq "139" ]]
  then 
    cp ${rad_files4date}/date_fuzzed/date_${cnt}   ./
  fi
  echo $ret >> result/log_reduced

  
  let "cnt++"
  done
  
  ./result_analysis.sh
  

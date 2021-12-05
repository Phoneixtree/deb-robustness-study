  #/bin/bash
  cd ../../..
  . setenv
  cd script/radamsa_script/input2_script
  
  debloat=${reduced}.$1
  
  cnt=0
  temp=0
  mkdir result
  
  echo "clean" > result/log_reduced
  echo "clean" > result/log_origin
  while((${cnt} < 500))
  do

  echo a | radamsa --seed ${cnt}

  ${temp} = `echo a | radamsa --seed ${cnt}`
  echo $temp
  
   { timeout -k 0.5 0.5 ${reduced} `echo a | radamsa --seed ${cnt}` ${rad_files4grep}/input2_fuzzed/input2_${cnt}; } >/dev/null
  echo $? >> result/log_reduced


  
  let "cnt++"
  done
  
  #grep -c "0" result/log_reduced
  #grep -c "2" result/log_reduced
  ./result_analysis.sh
  

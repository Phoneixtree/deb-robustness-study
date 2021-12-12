  #!/bin/bash
  cd ../../..
  . setenv
  cd script/radamsa_script/script_input0
  
  debloat=${reduced}
  
  cnt=0
  mkdir result${1}
  echo "clean" > result${1}/log_reduced
  echo "clean" > result${1}/log_origin
  while((${cnt} < 500))
  do
  { timeout -k 0.5 0.5 ${origin} < ${rad_files4grep}/input${1}_fuzzed/input${1}_${cnt} ; }
  echo $? >> result${1}/log_origin 

  { timeout -k 0.5 0.5 ${debloat}< ${rad_files4grep}/input${1}_fuzzed/input${1}_${cnt} ; } 
  echo $? >> result${1}/log_reduced
  
  let "cnt++"
  done
  
  ./result_analysis.sh ${1}
  

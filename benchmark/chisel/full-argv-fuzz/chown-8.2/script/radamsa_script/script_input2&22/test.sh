  #/bin/bash
  cd ../../..
  . setenv
  cd script/radamsa_script/"script_input2&22"
  
  debloat=${reduced}.$1
  
  cnt=0
  mkdir result
  
  echo "clean" > result/log_reduced
  echo "clean" > result/log_origin
  while((${cnt} < 500))
  do
  mkdir -p d1/d1/d1
  touch d1/d1/d1/file
  mkdir -p d2/d2/d2
  touch d2/d2/d2/file
  { timeout -k 0.5 0.5 ${origin} < ${rad_files4chown}/input2_fuzzed/input2_${cnt}; } >/dev/null
  echo $? >> result/log_origin
  rm -rf d1 d2
  
  mkdir -p d1/d1/d1
  touch d1/d1/d1/file
  mkdir -p d2/d2/d2
  touch d2/d2/d2/file
  { timeout -k 0.5 0.5 ${origin} < ${rad_files4chown}/input22_fuzzed/input22_${cnt}; } >/dev/null
  echo $? >> result/log_origin
  rm -rf d1 d2
   
  mkdir -p d1/d1/d1
  touch d1/d1/d1/file
  mkdir -p d2/d2/d2
  touch d2/d2/d2/file
  { timeout -k 0.5 0.5 ${reduced} < ${rad_files4chown}/input2_fuzzed/input2_${cnt}; } >/dev/null
  echo $? >> result/log_reduced
  rm -rf d1 d2
  
  mkdir -p d1/d1/d1
  touch d1/d1/d1/file
  mkdir -p d2/d2/d2
  touch d2/d2/d2/file
  { timeout -k 0.5 0.5 ${reduced} < ${rad_files4chown}/input22_fuzzed/input22_${cnt}; } >/dev/null
  echo $? >> result/log_reduced
  rm -rf d1 d2
  
  let "cnt++"
  done
  
  ./result_analysis.sh
  

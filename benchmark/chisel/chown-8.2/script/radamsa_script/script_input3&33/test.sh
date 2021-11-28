  #/bin/bash
  cd ../../..
  . setenv
  cd script/radamsa_script/"script_input3&33"
  
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
  { timeout -k 0.5 0.5 ${origin} < ${rad_files4chown}/input3_fuzzed/input3_${cnt}; } >/dev/null
  echo $? >> result/log_origin
  ls -al d1/d1/d1/file | cut -d ' ' -f 4 >temp1
  ls -al d2/d2/d2/file | cut -d ' ' -f 4 >temp2
  diff -q temp1 temp2 >&/dev/null || exit 1
  rm -rf d1 d2
  
  mkdir -p d1/d1/d1
  touch d1/d1/d1/file
  mkdir -p d2/d2/d2
  touch d2/d2/d2/file
  { timeout -k 0.5 0.5 ${origin} < ${rad_files4chown}/input33_fuzzed/input33_${cnt}; } >/dev/null
  echo $? >> result/log_origin
  ls -al d1/d1/d1/file | cut -d ' ' -f 4 >temp1
  ls -al d2/d2/d2/file | cut -d ' ' -f 4 >temp2
  diff -q temp1 temp2 >&/dev/null || exit 1
  rm -rf d1 d2
   
  mkdir -p d1/d1/d1
  touch d1/d1/d1/file
  mkdir -p d2/d2/d2
  touch d2/d2/d2/file
  { timeout -k 0.5 0.5 ${reduced} < ${rad_files4chown}/input3_fuzzed/input3_${cnt}; } >/dev/null
  echo $? >> result/log_reduced
  ls -al d1/d1/d1/file | cut -d ' ' -f 4 >temp1
  ls -al d2/d2/d2/file | cut -d ' ' -f 4 >temp2
  diff -q temp1 temp2 >&/dev/null || exit 1
  rm -rf d1 d2
  
  mkdir -p d1/d1/d1
  touch d1/d1/d1/file
  mkdir -p d2/d2/d2
  touch d2/d2/d2/file
  { timeout -k 0.5 0.5 ${reduced} < ${rad_files4chown}/input33_fuzzed/input33_${cnt}; } >/dev/null
  echo $? >> result/log_reduced
  ls -al d1/d1/d1/file | cut -d ' ' -f 4 >temp1
  ls -al d2/d2/d2/file | cut -d ' ' -f 4 >temp2
  diff -q temp1 temp2 >&/dev/null || exit 1
  rm -rf d1 d2
  
  let "cnt++"
  done
  
  ./result_analysis.sh
  

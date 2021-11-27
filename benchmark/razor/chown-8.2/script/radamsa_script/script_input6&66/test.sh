  #/bin/bash
  cd ../../..
  . setenv
  cd script/radamsa_script/script_input6&66
  
  debloat=${reduced}.$1
  
  cnt=0
  mkdir result
  
  echo "clean" > result/log_reduced
  echo "clean" > result/log_origin
  while((${cnt} < 500))
  do
  touch file1
  touch file2
  ln -s file1 symfile1
  ln -s file2 symfile2
  { timeout -k 0.5 0.5 ${origin} < ${rad_files4chown}/input6_fuzzed/input6_${cnt}; } >/dev/null
  echo $? >> result/log_origin
  rm -rf file1 file2 symfile1 symfile2
  
  touch file1
  touch file2
  ln -s file1 symfile1
  ln -s file2 symfile2
  { timeout -k 0.5 0.5 ${origin} < ${rad_files4chown}/input66_fuzzed/input66_${cnt}; } >/dev/null
  echo $? >> result/log_origin
  rm -rf file1 file2 symfile1 symfile2
   
  touch file1
  touch file2
  ln -s file1 symfile1
  ln -s file2 symfile2
  { timeout -k 0.5 0.5 ${debloat} < ${rad_files4chown}/input6_fuzzed/input6_${cnt}; } >/dev/null
  echo $? >> result/log_reduced
  rm -rf file1 file2 symfile1 symfile2
  
  touch file1
  touch file2
  ln -s file1 symfile1
  ln -s file2 symfile2
  { timeout -k 0.5 0.5 ${debloat} < ${rad_files4chown}/input66_fuzzed/input66_${cnt}; } >/dev/null
  echo $? >> result/log_reduced
  rm -rf file1 file2 symfile1 symfile2
  
  let "cnt++"
  done
  
  ./result_analysis.sh
  

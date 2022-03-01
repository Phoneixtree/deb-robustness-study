  #/bin/bash
  cd ../../..
  . setenv
  cd script/radamsa_script/script_2_option_f
  
  debloat=${reduced}.$1
  
  cnt=0
  mkdir result
  echo "clean" > result/log_reduced
  while((${cnt} < 500))
  do
  
  { timeout -k 0.5 0.5 ${reduced} -f ${rad_files4bzip2}/foo_fuzzed/foo_${cnt}; } >/dev/null
  echo $? >> result/log_reduced
  let "cnt++"
  done
  rm -r ${rad_files4bzip2}/foo_fuzzed/*

  ./create_fuzzed_testfile.sh
  cnt1=0
  echo "clean" > result/log_origin
  while((${cnt1} < 500))
  do
  { timeout -k 0.5 0.5 ${origin} -f ${rad_files4bzip2}/foo_fuzzed/foo_${cnt1}; } >/dev/null
  echo $? >> result/log_origin 

  let "cnt1++"
  done

  rm -r ${rad_files4bzip2}/foo_fuzzed/*
  ./create_fuzzed_testfile.sh
  ./result_analysis.sh
  
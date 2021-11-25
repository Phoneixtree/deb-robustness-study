  #/bin/bash
  cd ../../..
  . setenv
  cd script/radamsa_script/script_2_option_f
  
  debloat=${reduced}.$1
  
  cnt=0
  mkdir result
  echo "clean" > result/log_reduced
  echo "clean" > result/log_origin
  while((${cnt} < 500))
  do
  { timeout -k 0.5 0.5 ${origin} -f ${rad_files4bzip2}/foo_fuzzed/foo_${cnt}; } >/dev/null
  echo $? >> result/log_origin 
  rm ${rad_files4bzip2}/foo_fuzzed/foo_${cnt}.bz2
  cp ${bins}/foo_fuzzed/foo_${cnt} ${rad_files4bzip2}/foo_fuzzed
  { timeout -k 0.5 0.5 ${debloat} -f ${rad_files4bzip2}/foo_fuzzed/foo_${cnt}; } >/dev/null
  echo $? >> result/log_reduced
  rm ${rad_files4bzip2}/foo_fuzzed/foo_${cnt}.bz2
  cp ${bins}/foo_fuzzed/foo_${cnt} ${rad_files4bzip2}/foo_fuzzed
  let "cnt++"
  done
  
  ./result_analysis.sh
  

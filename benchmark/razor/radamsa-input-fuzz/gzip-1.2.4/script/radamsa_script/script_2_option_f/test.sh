  #!/bin/bash
  cd ../../..
  . setenv
  cd script/radamsa_script/script_2_option_f

  debloat=${reduce}.$1
  mkdir result
  echo "clean" > result/log_origin
  echo "clean" > result/log_reduced
  cnt=0
  
  debloat=${reduced}.$1
  
  
while((${cnt} < 500))
do
  { timeout -k 0.5 0.5 ${origin} -f ${rad_files4gzip}/foo_fuzzed/foo_${cnt} ; } 
  echo $? >> result/log_origin
  rm -rf ${rad_files4gzip}/foo_fuzzed/foo_${cnt}.gz
  cp ${bins}/foo_fuzzed/foo_${cnt} ${rad_files4gzip}/foo_fuzzed
  { timeout -k 0.5 0.5 ${debloat} -f ${rad_files4gzip}/foo_fuzzed/foo_${cnt} ; } #>&/dev/null
  echo $? >> result/log_reduced
  rm -rf ${rad_files4gzip}/foo_fuzzed/foo_${cnt}.gz
  cp ${bins}/foo_fuzzed/foo_${cnt} ${rad_files4gzip}/foo_fuzzed
  let "cnt++" 
done

./result_analysis.sh
  

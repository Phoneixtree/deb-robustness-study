  #!/bin/bash
  cd ../../..
  . setenv
  cd script/radamsa_script/script_3_option_t_foo

  debloat=${reduce}.$1
  mkdir result
  echo "clean" > result/log_origin
  echo "clean" > result/log_reduced
  cnt=0
  
  debloat=${reduced}.$1
  
  
while((${cnt} < 500))
do
  { timeout -k 0.5 0.5 ${origin} -t ${rad_files4gzip}/foo_fuzzed/foo_${cnt} ; } 
  echo $? >> result/log_origin

  { timeout -k 0.5 0.5 ${debloat} -t ${rad_files4gzip}/foo_fuzzed/foo_${cnt} ; } 
  echo $? >> result/log_reduced

  let "cnt++" 
done

./result_analysis.sh
  

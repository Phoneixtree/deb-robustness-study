  #/bin/bash
  cd ../../..
  . setenv
  cd script/radamsa_script/script_0_option_c
  
  debloat=${reduced}.$1
  
  cnt=0
  mkdir result
  echo "clean" > result/log_reduced
  echo "clean" > result/log_origin
  while((${cnt} < 500))
  do
  { timeout -k 0.5 0.5 ${origin} -c < ${rad_files4bzip2}/sample1.ref_fuzzed/sample1_${cnt}.ref > ${rad_files4bzip2}/sample1_${cnt}.rb2; } >/dev/null
  echo $? >> result/log_origin 
  rm ${rad_files4bzip2}/sample1_${cnt}.rb2
  { timeout -k 0.5 0.5 ${debloat} -c < ${rad_files4bzip2}/sample1.ref_fuzzed/sample1_${cnt}.ref > ${rad_files4bzip2}/sample1_${cnt}.rb2; } >/dev/null
  echo $? >> result/log_reduced
  rm ${rad_files4bzip2}/sample1_${cnt}.rb2
  
  #rm -f foo_fuzzed/foo_${cnt}.bz2
  let "cnt++"
  done
  
  #grep -c "0" result/log_reduced
  #grep -c "2" result/log_reduced
  ./result_analysis.sh
  

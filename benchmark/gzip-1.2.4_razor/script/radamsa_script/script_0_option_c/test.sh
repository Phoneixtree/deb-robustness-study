  #/bin/bash
  mkdir result
  echo "clean" > result/log_reduced
  
  cnt=0
  while((${cnt} < 500))
  do
  { timeout -k 0.5 0.5 ./gzip.razor.debloated -c <sample1.ref_fuzzed/sample1.ref_${cnt}>sample1.gz; } >&/dev/null
  echo $? >> result/log_reduced
  #rm -f foo_fuzzed1/foo_${cnt}.gz
  let "cnt++"
  done
  rm -rf sample1.gz
  grep -cw "0" result/log_reduced
  grep -cw "1" result/log_reduced

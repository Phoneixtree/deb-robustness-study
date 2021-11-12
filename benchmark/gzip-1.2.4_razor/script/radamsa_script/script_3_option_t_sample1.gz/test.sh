  #/bin/bash
  mkdir result
  echo "clean" > result/log_reduced
  
  cnt=0
  while((${cnt} < 500))
  do
  { timeout -k 0.5 0.5 ./gzip.razor.debloated -t sample1.gz_fuzzed/sample1.gz_${cnt}; } >&/dev/null
  echo $? >> result/log_reduced
  #rm -f foo_fuzzed1/foo_${cnt}.gz
  let "cnt++"
  done
  grep -cw "0" result/log_reduced
  grep -cw "1" result/log_reduced

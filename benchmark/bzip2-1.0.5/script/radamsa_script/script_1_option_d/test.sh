  #/bin/bash
  cnt=0
  mkdir result
  echo "clean" >result/log_reduced
  while((${cnt} < 500))
  do
  { timeout -k 1 1 ./bzip2.razor.debloated -d <sample1.bz2.ref_fuzzed/sample1.bz2.ref_${cnt} >sample1.tst; } >/dev/null
  echo $? >> result/log_reduced 
  #rm -f foo_fuzzed/foo_${cnt}.bz2
  let "cnt++"
  done
  
  grep -c "0" result/log_reduced
  #grep -c "2" result/log_reduced

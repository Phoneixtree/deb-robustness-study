  #/bin/bash
  cd ../../..
  . setenv
  cd script/afl_script/option_date_script
  
  debloat=${reduced}.$1
  
  mkdir result
  cd result
  rm *
  cd ..
  afl-fuzz -i ${afl_seed}/input_option_date -o result ${bins}/${debloat} @@


  

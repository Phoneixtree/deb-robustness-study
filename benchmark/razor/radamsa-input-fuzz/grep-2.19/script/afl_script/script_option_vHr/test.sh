  #!/bin/bash
  cd ../../..
  . setenv
  cd script/afl_script/script_option_vHr
  
  debloat=${reduced}.$1
  
  mkdir result
  cd result
  rm *
  cd ..
  afl-fuzz -Q -i ${afl_seed} -o result ${debloat} -vHr  "a" @@


  

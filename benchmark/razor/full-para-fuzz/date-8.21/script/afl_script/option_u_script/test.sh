  #!/bin/bash
  cd ../../..
  . setenv
  cd script/afl_script/option_u_script
  
  debloat=${reduced}.$1
  
  mkdir result
  cd result
  rm *
  cd ..
  afl-fuzz -Q -i ${afl_seed}/input_option_u -o result ${debloat} -u @@


  

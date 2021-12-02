  #!/bin/bash
  cd ../../..
  . setenv
  cd script/afl_script/option_d_script
  
  debloat=${reduced}.$1
  
  mkdir result
  cd result
  rm *
  cd ..
  afl-fuzz -Q -i ${afl_seed}/input_option_d -o result ${debloat} -d @@


  

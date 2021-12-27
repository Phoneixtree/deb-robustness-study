  #!/bin/bash
  cd ../../..
  . setenv
  cd script/afl_script/script_whoami:whoami
  
  debloat=${reduced}.$1
  
  mkdir result
  cd result
  rm *
  cd ..
  afl-fuzz -Q -i ${afl_seed}/input_whoami:whoami -o result ${bins}/${debloat} @@


  

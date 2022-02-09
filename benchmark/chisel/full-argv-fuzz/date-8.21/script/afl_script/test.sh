  #!/bin/bash
  cd ../../
  . setenv
  cd script/afl_script/
  
  
  mkdir result_$1
  cd result_$1
  rm *
  cd ..
  afl-fuzz -i ${afl_seed}/$1 -o result_$1 ${afl_bin} 


  

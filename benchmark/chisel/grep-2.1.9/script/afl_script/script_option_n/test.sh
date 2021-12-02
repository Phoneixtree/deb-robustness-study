  #!/bin/bash
  cd ../../..
  . setenv
  cd script/afl_script/script_option_n
  
  
  mkdir result
  cd result
  rm *
  cd ..
  afl-fuzz -i ${afl_seed} -o result ${debloat} -n  "si" @@


  

  #/bin/bash
  cd ../../..
  . setenv
  cd script/afl_script/script_whoami:sudo
  
  debloat=${reduced}.$1
  
  mkdir result
  cd result
  rm *
  cd ..
  afl-fuzz -i ${afl_seed}/input_whoami:sudo -o result ${bins}/afl_bin 


  

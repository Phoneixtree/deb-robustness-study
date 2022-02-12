  #!/bin/bash

  home_folder=$(pwd)
  afl_seed=${home_folder}/input/afl_seed
  afl_bin=${home_folder}/bins/afl_robust_reduced.out
  afl_result=${home_folder}/result/afl_result
  
  afl-fuzz -d -m 100 -i ${afl_seed}/$1 -o ${afl_result}/result_$1 ${afl_bin} 


  

  #/bin/bash
  home_folder=$(pwd)
  result_dir=${home_folder}/result/radamsa_result

while :
do
 
  echo please enter the option that you want to run radamsa with. "(1 / 2 / 3 / 4 / 5 / 6 / 7 / 11 / 22 / 33 / 44 / 55 / 66 / 77 )"

  read option

  if [ ${option} = "1" ] || [ $option = "2" ] || [ $option = "3" ] || [ $option = "4" ] || [ $option = "5" ] || [ $option = "6" ] || [ $option = "7" ] || [ $option = "11" ] || [ $option = "22" ] || [ $option = "33" ] || [ $option = "44" ] || [ $option = "55" ] || [ $option = "66" ] || [ $option = "77" ]
  then
  
    origin_result=${result_dir}/origin/input_${option}
    reduced_result=${result_dir}/reduced/input_${option}
    robust_reduced_result=${result_dir}/robust_reduced/input_${option}

    fuzzed_input=${home_folder}/inputs/radamsa_fuzzed/input${option}_fuzzed

    origin_bin=${home_folder}/bins/origin.out
    reduced_bin=${home_folder}/bins/reduced.out
    robust_reduced_bin=${home_folder}/bins/robust_reduced.out

    echo "origin_result: " > ${origin_result}
    echo "reduced_result: " > ${reduced_result}
    echo "robust_reduced_result: " > ${robust_reduced_result}

    cnt=0
    while((${cnt} < 500))
    do
    echo ${cnt}
    { timeout -k 0.5 0.5 ${origin_bin} < ${fuzzed_input}/input${option}_${cnt}; } >/dev/null
    echo $? >> ${origin_result}
   
    { timeout -k 0.5 0.5 ${reduced_bin} < ${fuzzed_input}/input${option}_${cnt}; } >/dev/null
    echo $? >> ${reduced_result}

    { timeout -k 0.5 0.5 ${robust_reduced_bin} < ${fuzzed_input}/input${option}_${cnt}; } >/dev/null
    echo $? >> ${robust_reduced_result}

  
    let "cnt++"
    done
    source ./radamsa_result_analysis.sh 


  else
    echo please enter a valid option: "(c / d / f / i / null / s / u / w )"
  fi
done
  

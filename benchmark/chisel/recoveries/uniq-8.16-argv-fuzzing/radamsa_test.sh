  #/bin/bash
  home_folder=$(pwd)
  result_dir=${home_folder}/result/radamsa_result

while :
do
 
  echo please enter the option that you want to run radamsa with. "(c / d / f / i / null / s / u / w )"

  read option

  if [ ${option} = "c" ] || [ $option = "d" ] || [ $option = "f" ] || [ $option = "i" ] || [ $option = "null" ] || [ $option = "s" ] || [ $option = "u" ] || [ $option = "w" ]
  then
    mkdir ${result_dir}/origin/option_${option}
    mkdir ${result_dir}/reduced/option_${option}
    mkdir ${result_dir}/robust_reduced/option_${option}

    origin_result=${result_dir}/origin/option_${option}
    reduced_result=${result_dir}/reduced/option_${option}
    robust_reduced_result=${result_dir}/robust_reduced/option_${option}

    fuzzed_input=${home_folder}/inputs/radamsa_fuzzed/${option}

    origin_bin=${home_folder}/bins/origin.out
    reduced_bin=${home_folder}/bins/reduced.out
    robust_reduced_bin=${home_folder}/bins/robust_reduced.out

    

    # for input1_fuzzed
    echo "origin_result: " > ${origin_result}/input1_fuzzed
    echo "reduced_result: " > ${reduced_result}/input1_fuzzed
    echo "robust_reduced_result: " > ${robust_reduced_result}/input1_fuzzed
    cnt=0
    while((${cnt} < 500))
    do
    echo ${cnt}
    { timeout -k 0.5 0.5 ${origin_bin} < ${fuzzed_input}/input1_fuzzed_${cnt}; } >/dev/null
    echo $? >> ${origin_result}/input1_fuzzed
   
    { timeout -k 0.5 0.5 ${reduced_bin} < ${fuzzed_input}/input1_fuzzed_${cnt}; } >/dev/null
    echo $? >> ${reduced_result}/input1_fuzzed

    { timeout -k 0.5 0.5 ${robust_reduced_bin} < ${fuzzed_input}/input1_fuzzed_${cnt}; } >/dev/null
    echo $? >> ${robust_reduced_result}/input1_fuzzed

  
    let "cnt++"
    done
    source ./radamsa_result_analysis.sh 1

    # for input2_fuzzed
    echo "origin_result: " > ${origin_result}/input2_fuzzed
    echo "reduced_result: " > ${reduced_result}/input2_fuzzed
    echo "robust_reduced_result: " > ${robust_reduced_result}/input2_fuzzed
    cnt=0
    while((${cnt} < 500))
    do
    echo ${cnt}
    { timeout -k 0.5 0.5 ${origin_bin} < ${fuzzed_input}/input2_fuzzed_${cnt}; } >/dev/null
    echo $? >> ${origin_result}/input2_fuzzed
   
    { timeout -k 0.5 0.5 ${reduced_bin} < ${fuzzed_input}/input2_fuzzed_${cnt}; } >/dev/null
    echo $? >> ${reduced_result}/input2_fuzzed

    { timeout -k 0.5 0.5 ${robust_reduced_bin} < ${fuzzed_input}/input2_fuzzed_${cnt}; } >/dev/null
    echo $? >> ${robust_reduced_result}/input2_fuzzed

  
    let "cnt++"
    done
    source ./radamsa_result_analysis.sh 2

  else
    echo please enter a valid option: "(c / d / f / i / null / s / u / w )"
  fi
done
  

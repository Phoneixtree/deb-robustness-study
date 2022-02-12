  #/bin/bash
  home_folder=$(pwd)
  result_dir=${home_folder}/result/radamsa_result

while :
do
 
  echo please enter the option that you want to run radamsa with. "(0-26)"

  read option

  if [ ${option} -le 26 ] && [ $option -ge 0 ] 
  then
    origin_result=${result_dir}/origin/option_${option}
    reduced_result=${result_dir}/reduced/option_${option}
    recovered_result=${result_dir}/recovered/option_${option}

    fuzzed_input=${home_folder}/input/radamsa_fuzzed/input${option}_fuzzed

    origin_bin=${home_folder}/bins/origin.out
    reduced_bin=${home_folder}/bins/reduced.out
    recovered_bin=${home_folder}/bins/recovered.out

    echo "origin_result: " > ${origin_result}
    echo "reduced_result: " > ${reduced_result}
    echo "recovered_result: " > ${recovered_result}

    cnt=0
    while((${cnt} < 500))
    do
    echo ${cnt}
    { timeout -k 0.5 0.5 ${origin_bin} < ${fuzzed_input}/input${option}_${cnt}; } >/dev/null
    echo $? >> ${origin_result}
   
    { timeout -k 0.5 0.5 ${reduced_bin} < ${fuzzed_input}/input${option}_${cnt}; } >/dev/null
    echo $? >> ${reduced_result}

    { timeout -k 0.5 0.5 ${recovered_bin} < ${fuzzed_input}/input${option}_${cnt}; } >/dev/null
    echo $? >> ${recovered_result}

  
    let "cnt++"
    done
    source ./radamsa_result_analysis.sh
  else
    echo please enter a valid option: "0-26"
  fi
done
  

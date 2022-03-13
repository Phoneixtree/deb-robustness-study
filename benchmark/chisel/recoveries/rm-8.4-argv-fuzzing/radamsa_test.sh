  #/bin/bash
  home_folder=$(pwd)
  result_dir=${home_folder}/result/radamsa_result

while :
do
 
  echo please enter the option that you want to run radamsa with. "(0-4)"

  read option

  if [ ${option} -le 4 ] && [ $option -ge 0 ] 
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

    # to make sure the file / dir exist
    [ ! -f file ] && touch file
    [ ! -d dir ]  && mkdir dir

    echo ${cnt}
    ${origin_bin} < ${fuzzed_input}/input${option}_${cnt}
    echo $? >> ${origin_result}

    # to make sure the file / dir exist
    [ ! -f file ] && touch file
    [ ! -d dir ]  && mkdir dir

    ${reduced_bin} < ${fuzzed_input}/input${option}_${cnt}
    echo $? >> ${reduced_result}

    # to make sure the file / dir exist
    [ ! -f file ] && touch file
    [ ! -d dir ]  && mkdir dir

    ${robust_reduced_bin} < ${fuzzed_input}/input${option}_${cnt}
    echo $? >> ${robust_reduced_result}

  
    let "cnt++"
    done
    source ./radamsa_result_analysis.sh 


  else
    echo please enter a valid option: "(0-4)"
  fi
done
  

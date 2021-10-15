#!/bin/bash
# $1: option
set +o posix
cnt=0
export TIMEOUT="-k 0.5 0.5"
export LOG=result/log.txt
export BENCHMARK_NAME=uniq-8.16
export BENCHMARK_DIR=$bins
export SRC=$home_folder/original_files_and_refs/$name.c


#!/bin/bash


function clean() {

  cnt=0
while(( $cnt<=500 )) 
do
  rm ${rad_files}/input${cnt}
  rm ${rad_files}/data${cnt}
  let "cnt++"
done

}


# $1: option
function desired_run() {
  cnt=0
  while(( $cnt<=500 )) 
  do
  temp1=$({ timeout $TIMEOUT $REDUCED_BIN $1 data${cnt}.txt; } 2>&1  )
  echo $? >> result/log_reduced
  temp2=$({ $ORIGIN_BIN $1 data${cnt}.txt; } 2>&1)
  echo $? >> result/log_origin
  diff -q <(echo $temp1) <(echo $temp2) >&/dev/null   >> result/log_if_behave_properly
  temp1=$({ timeout $TIMEOUT $REDUCED_BIN $1 input${cnt}; } 2>&1  )
  echo $? >> result/log_reduced
  temp2=$({ $ORIGIN_BIN $1 input${cnt}; })
  echo $? >> result/log_origin
  diff -q <(echo $temp1) <(echo $temp2) >&/dev/null  >> result/log_if_behave_properly
  
    let "cnt++"
done
return 0
}

function desired() {
  ./create_fuzzed_testfile.sh
  desired_run ""  
  clean
  ./result_analysis.sh

  ./create_fuzzed_testfile.sh
  desired_run "-c"  
  clean
  ./result_analysis.sh
  
  ./create_fuzzed_testfile.sh
  desired_run "-d"
  clean
  ./result_analysis.sh  

  ./create_fuzzed_testfile.sh
  desired_run "-u"
  clean
  ./result_analysis.sh  

  ./create_fuzzed_testfile.sh
  desired_run "-i"
  clean
  ./result_analysis.sh  

  ./create_fuzzed_testfile.sh
  desired_run "-f 5"
  clean
  ./result_analysis.sh  

  ./create_fuzzed_testfile.sh
  desired_run "-s 10"
  clean
  ./result_analysis.sh  

  ./create_fuzzed_testfile.sh
  desired_run "-w 10"
    clean
  ./result_analysis.sh  

  return 0
}




#  return 1 >> result/log_if_behave_properly == false false || echo '000' -> 000

function main() {
  rm -r result
  mkdir result
  clean
  desired
  clean
  
}
main





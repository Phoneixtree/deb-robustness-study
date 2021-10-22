#!/bin/bash
# $1: option
set +o posix
cnt=0
export TIMEOUT="-k 0.5 0.5"
export LOG=result/log.txt
export BENCHMARK_NAME=sort-8.16
export BENCHMARK_DIR=$bins
export SRC=$home_folder/original_files_and_refs/$name.c


#!/bin/bash


function clean() {
  return 0
}

function run() {
cnt=0
while(( $cnt<=500 )) 
do
  echo ${rad_files}/${2}_fuzzed_${cnt}
  timeout -k 0.4 0.4 $REDUCED_BIN $1 ${rad_files}/${2}_fuzzed_${cnt} >&$LOG 
  echo $? >> result/log_reduced
  $ORIGIN_BIN $1 ${rad_files}/${2}_fuzzed_${cnt} >&temp2
  echo $? >> result/log_origin
  diff -q $LOG temp2 >> result/log_if_behave_properly
let "cnt++" 
done 
}

function desired() {
  for input in $(ls input/*); do
    run "" ${input}
  done
  ./result_analysis.sh  

  for input in $(ls input/*); do
    run "-r" ${input}
  done
  ./result_analysis.sh  
  
  for input in $(ls input/*); do
    run "-s" ${input}
  done
  ./result_analysis.sh  
  
  for input in $(ls input/*); do
    run "-u" ${input}
  done
  ./result_analysis.sh  
  
  for input in $(ls input/*); do
    run "-z" ${input}
  done
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





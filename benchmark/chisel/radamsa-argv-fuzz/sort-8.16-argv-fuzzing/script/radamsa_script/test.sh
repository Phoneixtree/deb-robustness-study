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
  rm -r result
  rm temp2
  mkdir result
  return 0
}

function run() {
  options=$1
  timeout $TIMEOUT $REDUCED_BIN < $rad_files/$1/input_fuzzed_$cnt >&$LOG 
  echo $? >> result/log_reduced
  timeout $TIMEOUT $ORIGIN_BIN < $rad_files/$1/input_fuzzed_$cnt >&temp2
  echo $? >> result/log_origin

}

# 
function desired() {
  cnt=0
while(( $cnt<=499 )) 
do
  echo run time $cnt
  for input in $(ls input/*); do
    run null ${input}
  done

  for input in $(ls input/*); do
    run r ${input}
  done
  
  for input in $(ls input/*); do
    run s ${input}
  done
  
  for input in $(ls input/*); do
    run u ${input}
  done
  
  for input in $(ls input/*); do
    run z ${input}
  done

  let "cnt++" 
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





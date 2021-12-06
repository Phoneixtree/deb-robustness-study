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

# cnt=0
# while(( $cnt<=499 )) 
# do
#     rm ${rad_files}/input${cnt}
#     rm ${rad_files}/data${cnt}
#   let "cnt++"
# done
cd ../
rm -rf temp
 return 0
}


# $1: option
function desired_run() {
  options=$1
  cnt=0
  while(( $cnt<=499 )) 
  do
    { timeout $TIMEOUT $REDUCED_BIN <$rad_files/$1/test_fuzzed_$cnt; } 2>&1 
    echo $? >> result/log_reduced
    { $ORIGIN_BIN <$rad_files/$1/test_fuzzed_$cnt; } 2>&1
    echo $? >> result/log_origin


    let "cnt++"
  done
}

function desired() {
  desired_run 0

  desired_run 1 

  desired_run 2

  desired_run 3

  desired_run 4



  ./result_analysis.sh  

  return 0
}




#  return 1 >> result/log_if_behave_properly == false false || echo '000' -> 000

function main() {
  cp files/* ./
  mkdir temp 
  cp * temp/
  cd temp
  rm -r result
  mkdir result
  desired
  clean
  
}
main
#!/bin/bash
# $1: option
cd ../..
. setenv
cd script/radamsa_script

set +o posix
cnt=0
export TIMEOUT="-k 0.5 0.5"
export BENCHMARK_NAME=tar-1.14
export BENCHMARK_DIR=$bins
export SRC=$home_folder/original_files_and_refs/$name.c


#!/bin/bash


function clean() {
  cd ../
  #rm tar
  rm -rf temp
}

function run() {
  cp $REDUCED_BIN tar_reduced
  options=$1
  ./tar_reduced < $rad_files/$options/input_fuzzed_$cnt
  echo $? >> result/log_reduced
}

function desired(){
 cnt=0
while(( $cnt<=499 )) 
do
  echo run time $cnt
    run cf 
    run xf 
    run czf 
    run xzf 


  let "cnt++" 
done 
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





#!/bin/bash
# $1: option
set +o posix
cnt=0
export TIMEOUT="-k 0.1 0.1"
export BENCHMARK_NAME=tar-1.14
export BENCHMARK_DIR=$bins
export SRC=$home_folder/original_files_and_refs/$name.c


#!/bin/bash


function clean() {
  #rm tar
  rm logfile.bb
  rm logfile.gnu
}

function desired() {
  cp $REDUCED_BIN tar
  for file in $(ls tests/tar*); do
    { sudo sh $file; }
    echo $? >> result/log_total 
    echo ${file} >> result/log_total 
    rm -rf f* b*
  done
  return 0
}


#  return 1 >> result/log_if_behave_properly == false false || echo '000' -> 000

function main() {
  rm -r result
  mkdir result
  desired
  clean
  
}
main





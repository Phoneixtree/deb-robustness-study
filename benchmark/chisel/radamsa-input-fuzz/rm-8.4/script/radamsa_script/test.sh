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
  return 0 
}


function run1() {
  cnt=0
  while(( $cnt<=499 )) 
  do
  { timeout $TIMEOUT $REDUCED_BIN $rad_files/file${cnt}; } >&$LOG
  r=$?
  echo ${r} >> result/log_reduced
  a=1
  b=1
  if [[ $r -eq 0 && ! -f $rad_files/file${cnt} ]]; then
    a=0
  fi
  /bin/rm -rf $rad_files/file${cnt}
  { timeout $TIMEOUT $REDUCED_BIN $rad_files/file${cnt}; } >&$LOG
  r=$?
  echo ${r} >> result/log_reduced
  err=1
  if grep -q "No such file or directory" $LOG; then
    err=0
  fi
  if [[ $r -eq 1 && $err -eq 0 ]]; then
    b=0
  fi
  if [[ $a -eq 0 && $b -eq 0 ]]; then
    echo '0' >> result/log_if_behave_properly
  else
    echo '1' >> result/log_if_behave_properly
  fi

  let "cnt++"
done
  
}


function run2() {
  mkdir dir
  { timeout $TIMEOUT $REDUCED_BIN -r dir; } >&$LOG
  r=$?
  echo ${r} >> result/log_reduced
  a=1
  b=1
  if [[ $r -eq 0 && ! -d dir ]]; then
    a=0
  fi
  /bin/rm -rf dir
  mkdir dir
  { timeout $TIMEOUT $REDUCED_BIN -r -f dir; } >&$LOG
  r=$?
  echo ${r} >> result/log_reduced
  if [[ $r -eq 0 && ! -d dir ]]; then
    b=0
  fi
  /bin/rm -rf dir
  if [[ $a -eq 0 && $b -eq 0 ]]; then
    echo '0' >> result/log_if_behave_properly
  else
    echo '1' >> result/log_if_behave_properly
  fi
}


function run3() {
  mkdir dir
  { timeout $TIMEOUT $REDUCED_BIN -f dir; } >&$LOG
  r=$?
  echo ${r} >> result/log_reduced
  x=1
  if grep -q "cannot remove \`dir': Is a directory" $LOG; then
    x=0
  fi
  if [[ $r -eq 1 && $x -eq 0 ]]; then
     echo '0' >> result/log_if_behave_properly
  else
     echo '1' >> result/log_if_behave_properly
  fi
}



function run4() {
cnt=0
  while(( $cnt<=499 )) 
  do
  { timeout $TIMEOUT echo "Y" | timeout $TIMEOUT $REDUCED_BIN -i $rad_files/filei${cnt}; } >&$LOG
  r=$?
  echo ${r} >> result/log_reduced
  if [[ $r -eq 0 && ! -f $rad_files/filei${cnt} ]]; then
     echo '0' >> result/log_if_behave_properly
  else
    clean
     echo '1' >> result/log_if_behave_properly
  fi
  let "cnt++"
done
./create_fuzzed_testfile.sh
cnt=0
  while(( $cnt<=499 )) 
  do
  { timeout $TIMEOUT echo "N" | timeout $TIMEOUT $REDUCED_BIN -i $rad_files/filei${cnt}; } >&$LOG
  r=$?
  echo ${r} >> result/log_reduced
  if [[ $r -eq 0 && -f $rad_files/filei${cnt} ]]; then
     echo '0' >> result/log_if_behave_properly
  else
    clean
     echo '1' >> result/log_if_behave_properly
  fi
  let "cnt++"
done
}


# Desired Options: -r, -f, -i
function desired() {
  run1  
  ./result_analysis.sh
 
  #run2 
  #./result_analysis.sh

  #run3
  #./result_analysis.sh 

  run4
  ./result_analysis.sh  

}




#  return 1 >> result/log_if_behave_properly == false false || echo '000' -> 000

function main() {
  rm -r result
  mkdir result
  ./create_fuzzed_testfile.sh
  clean
  desired
  clean
  
}
main





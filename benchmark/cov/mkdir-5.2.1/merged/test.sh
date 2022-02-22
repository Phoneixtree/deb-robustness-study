#!/bin/bash

export BENCHMARK_NAME=mkdir-5.2.1
export BENCHMARK_DIR=$CHISEL_BENCHMARK_HOME/benchmark/$BENCHMARK_NAME/merged
export SRC=$BENCHMARK_DIR/$BENCHMARK_NAME.c
export ORIGIN_BIN=$BENCHMARK_DIR/$BENCHMARK_NAME.origin
export REDUCED_BIN=$BENCHMARK_DIR/$BENCHMARK_NAME.reduced
export TIMEOUT="-k 0.1 0.1"
export LOG=$BENCHMARK_DIR/log.txt
rm -r BIN_GCOV_DIR

mkdir BIN_GCOV_DIR
cnt=0
source $CHISEL_BENCHMARK_HOME/benchmark/test-base.sh

function clean() {
  rm -rf d1 file temp1 temp2 $LOG 
  return 0
}

function run() {
  rm -rf d1
  { timeout $TIMEOUT $ORIGIN_BIN $1 $2; } >&$LOG 
  let "cnt++"
  llvm-profdata merge -o mkdir-5.2.1.origin.profdata default.profraw
  llvm-cov export -format=lcov mkdir-5.2.1.origin -instr-profile=mkdir-5.2.1.origin.profdata mkdir-5.2.1.c.origin.c >mkdir-5.2.1.origin.lcov
  ./lcov2gcov mkdir-5.2.1.origin.lcov >mkdir-5.2.1.origin.real.gcov
  ./gcovanalyzer mkdir-5.2.1.origin.real.gcov getbcov > BIN_GCOV_DIR/mkdir-5.2.1.origin.$cnt.bin.gcov
  temp1=$(ls -ald $2 2>/dev/null | cut -d ' ' -f 1,2,3,4)
  rm -rf d1 >&/dev/null
  /bin/mkdir $1 $2
  temp2=$(ls -ald $2 2>/dev/null | cut -d ' ' -f 1,2,3,4)
  rm -rf $2 >&/dev/null
  if [[ $temp1 == $temp2 ]]; then
    return 0
  else
    return 1
  fi
}

function run_error() {
  rm -rf d1 >&/dev/null
  { timeout $TIMEOUT $ORIGIN_BIN $1 $2; } >&temp1 
   let "cnt++"
  llvm-profdata merge -o mkdir-5.2.1.origin.profdata default.profraw
  llvm-cov export -format=lcov mkdir-5.2.1.origin -instr-profile=mkdir-5.2.1.origin.profdata mkdir-5.2.1.c.origin.c >mkdir-5.2.1.origin.lcov
  ./lcov2gcov mkdir-5.2.1.origin.lcov >mkdir-5.2.1.origin.real.gcov
  ./gcovanalyzer mkdir-5.2.1.origin.real.gcov getbcov > BIN_GCOV_DIR/mkdir-5.2.1.origin.$cnt.bin.gcov
  rm -rf d1 >&/dev/null
  { $ORIGIN_BIN $1 $2; } >&temp2
  llvm-profdata merge -o mkdir-5.2.1.origin.profdata default.profraw
  llvm-cov export -format=lcov mkdir-5.2.1.origin -instr-profile=mkdir-5.2.1.origin.profdata mkdir-5.2.1.c.origin.c >mkdir-5.2.1.origin.lcov
  ./lcov2gcov mkdir-5.2.1.origin.lcov >mkdir-5.2.1.origin.real.gcov
  ./gcovanalyzer mkdir-5.2.1.origin.real.gcov getbcov > BIN_GCOV_DIR/mkdir-5.2.1.origin.$cnt.bin.gcov
  temp1=$(head -n 1 temp1 | cut -d ' ' -f 2,3)
  temp2=$(head -n 1 temp2 | cut -d ' ' -f 2,3)
  if [[ $temp1 == $temp2 ]]; then
    return 0
  else
    return 1
  fi
}

# Default Options: -m, -p
function desired() {
  run "" d1 
  run_error "" d1/d2
  run_error "-m 123124" d1/d2 
  run_error "-m" d1/d2 
  run "-m 400" d1  
  run "-m 555" d1  
  run "-m 644" d1  
  run "-m 610" d1  
  run "-m 777" d1  
  run "-p" d1/d2  
  rm -rf d1
  run "-p" d1/d2/d3/d4  
  rm -rf d1
  /bin/mkdir d1
  run "-p" d1  
  rm -rf d1
  /bin/mkdir d1
  run "-p" d1/d2  
  rm -rf d1
  return 0
}

OPT=("-m" "-p" "-v" "--help")
function undesired() {
  export srcdir=$(pwd)/../
  export PATH="$(pwd):$PATH"
  { timeout $TIMEOUT $ORIGIN_BIN; } >&/dev/null
   let "cnt++"
  llvm-profdata merge -o mkdir-5.2.1.origin.profdata default.profraw
  llvm-cov export -format=lcov mkdir-5.2.1.origin -instr-profile=mkdir-5.2.1.origin.profdata mkdir-5.2.1.c.origin.c >mkdir-5.2.1.origin.lcov
  ./lcov2gcov mkdir-5.2.1.origin.lcov >mkdir-5.2.1.origin.real.gcov
  ./gcovanalyzer mkdir-5.2.1.origin.real.gcov getbcov > BIN_GCOV_DIR/mkdir-5.2.1.origin.$cnt.bin.gcov

  touch file
  for opt in ${OPT[@]}; do
    { timeout $TIMEOUT $ORIGIN_BIN $opt file; } >&/dev/null
     let "cnt++"
    llvm-profdata merge -o mkdir-5.2.1.origin.profdata default.profraw
  llvm-cov export -format=lcov mkdir-5.2.1.origin -instr-profile=mkdir-5.2.1.origin.profdata mkdir-5.2.1.c.origin.c >mkdir-5.2.1.origin.lcov
  ./lcov2gcov mkdir-5.2.1.origin.lcov >mkdir-5.2.1.origin.real.gcov
  ./gcovanalyzer mkdir-5.2.1.origin.real.gcov getbcov > BIN_GCOV_DIR/mkdir-5.2.1.origin.$cnt.bin.gcov

  done
  return 0
}

function run_disaster() {
  rm -rf d1
  { timeout $TIMEOUT $ORIGIN_BIN $1 $2; } >&$LOG
   let "cnt++"
  llvm-profdata merge -o mkdir-5.2.1.origin.profdata default.profraw
  llvm-cov export -format=lcov mkdir-5.2.1.origin -instr-profile=mkdir-5.2.1.origin.profdata mkdir-5.2.1.c.origin.c >mkdir-5.2.1.origin.lcov
  ./lcov2gcov mkdir-5.2.1.origin.lcov >mkdir-5.2.1.origin.real.gcov
  ./gcovanalyzer mkdir-5.2.1.origin.real.gcov getbcov > BIN_GCOV_DIR/mkdir-5.2.1.origin.$cnt.bin.gcov
  grep -q -E "$3" $LOG
  return 0
}

function desired_disaster() {
  # case $1 in
  # memory)
  #   MESSAGE="memory exhausted"
  #   ;;
  # file) # mkdir does not cause this error
  #   return 0
  #   ;;
  # *)
  #   return 1
  #   ;;
  # esac
  run_disaster "-m 400" d1 "$MESSAGE"  
  run_disaster "-m 555" d1 "$MESSAGE"  
  run_disaster "-m 644" d1 "$MESSAGE"  
  run_disaster "-m 610" d1 "$MESSAGE"  
  run_disaster "-m 777" d1 "$MESSAGE"  
  rm -rf d1
  return 0
}

main

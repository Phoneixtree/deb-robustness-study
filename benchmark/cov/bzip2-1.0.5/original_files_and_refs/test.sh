#!/bin/bash

export BENCHMARK_NAME=bzip2-1.0.5
export BENCHMARK_DIR=$CHISEL_BENCHMARK_HOME/benchmark/$BENCHMARK_NAME/merged
export SRC=$BENCHMARK_DIR/$BENCHMARK_NAME.c
export ORIGIN_BIN=$BENCHMARK_DIR/$BENCHMARK_NAME.origin
export REDUCED_BIN=$BENCHMARK_DIR/$BENCHMARK_NAME.reduced
export TIMEOUT="-k 1 1"
export LOG=$BENCHMARK_DIR/log.txt
cnt=0

source $CHISEL_BENCHMARK_HOME/benchmark/test-base.sh

function clean() {
  rm -rf -- *.bz2
  rm -rf $LOG *.bz2 *.rb2 *.tst log foo* bar*
  rm -f \(*\)
  return 0
}

function desired() {
  # -c
  let "cnt++" 
  timeout $TIMEOUT $ORIGIN_BIN -c <references/sample1.ref >sample1.rb2
  llvm-profdata merge -o bzip2-1.0.5.origin.profdata default.profraw
  llvm-cov export -format=lcov bzip2-1.0.5.origin -instr-profile=bzip2-1.0.5.origin.profdata bzip2-1.0.5.c.origin.c >bzip2-1.0.5.origin.lcov
  ./lcov2gcov bzip2-1.0.5.origin.lcov >bzip2-1.0.5.origin.real.gcov
  ./gcovanalyzer bzip2-1.0.5.origin.real.gcov getbcov > BIN_GCOV_DIR/bzip2-1.0.5.origin.$cnt.bin.gcov
  
  cmp references/sample1.bz2.ref sample1.rb2 >&/dev/null  
  # -d
  let "cnt++" 
  timeout $TIMEOUT $ORIGIN_BIN -d <references/sample1.bz2.ref >sample1.tst
  llvm-profdata merge -o bzip2-1.0.5.origin.profdata default.profraw
  llvm-cov export -format=lcov bzip2-1.0.5.origin -instr-profile=bzip2-1.0.5.origin.profdata bzip2-1.0.5.c.origin.c >bzip2-1.0.5.origin.lcov
  ./lcov2gcov bzip2-1.0.5.origin.lcov >bzip2-1.0.5.origin.real.gcov
  ./gcovanalyzer bzip2-1.0.5.origin.real.gcov getbcov > BIN_GCOV_DIR/bzip2-1.0.5.origin.$cnt.bin.gcov
  
  cmp references/sample1.ref sample1.tst >&/dev/null  
  # -f
  echo "1234" >foo
  let "cnt++" 
  timeout $TIMEOUT $ORIGIN_BIN -f foo
  llvm-profdata merge -o bzip2-1.0.5.origin.profdata default.profraw
  llvm-cov export -format=lcov bzip2-1.0.5.origin -instr-profile=bzip2-1.0.5.origin.profdata bzip2-1.0.5.c.origin.c >bzip2-1.0.5.origin.lcov
  ./lcov2gcov bzip2-1.0.5.origin.lcov >bzip2-1.0.5.origin.real.gcov
  ./gcovanalyzer bzip2-1.0.5.origin.real.gcov getbcov > BIN_GCOV_DIR/bzip2-1.0.5.origin.$cnt.bin.gcov
  
  # -t
  echo "1234" >foo
  let "cnt++" 
  timeout $TIMEOUT $ORIGIN_BIN -t foo
  llvm-profdata merge -o bzip2-1.0.5.origin.profdata default.profraw
  llvm-cov export -format=lcov bzip2-1.0.5.origin -instr-profile=bzip2-1.0.5.origin.profdata bzip2-1.0.5.c.origin.c >bzip2-1.0.5.origin.lcov
  ./lcov2gcov bzip2-1.0.5.origin.lcov >bzip2-1.0.5.origin.real.gcov
  ./gcovanalyzer bzip2-1.0.5.origin.real.gcov getbcov > BIN_GCOV_DIR/bzip2-1.0.5.origin.$cnt.bin.gcov
  
  let "cnt++" 
  timeout $TIMEOUT $ORIGIN_BIN -t references/sample1.bz2.ref

  llvm-profdata merge -o bzip2-1.0.5.origin.profdata default.profraw
  llvm-cov export -format=lcov bzip2-1.0.5.origin -instr-profile=bzip2-1.0.5.origin.profdata bzip2-1.0.5.c.origin.c >bzip2-1.0.5.origin.lcov
  ./lcov2gcov bzip2-1.0.5.origin.lcov >bzip2-1.0.5.origin.real.gcov
  ./gcovanalyzer bzip2-1.0.5.origin.real.gcov getbcov > BIN_GCOV_DIR/bzip2-1.0.5.origin.$cnt.bin.gcov
  
  # -k
  rm foo*
  echo "1234" >foo
  let "cnt++" 
  timeout $TIMEOUT $ORIGIN_BIN -k foo
  llvm-profdata merge -o bzip2-1.0.5.origin.profdata default.profraw
  llvm-cov export -format=lcov bzip2-1.0.5.origin -instr-profile=bzip2-1.0.5.origin.profdata bzip2-1.0.5.c.origin.c >bzip2-1.0.5.origin.lcov
  ./lcov2gcov bzip2-1.0.5.origin.lcov >bzip2-1.0.5.origin.real.gcov
  ./gcovanalyzer bzip2-1.0.5.origin.real.gcov getbcov > BIN_GCOV_DIR/bzip2-1.0.5.origin.$cnt.bin.gcov
  
  test -f foo -a -f foo.bz2  
  return 0
}

function default_disaster_mem() {
  # -c
  let "cnt++" 
  timeout $TIMEOUT $ORIGIN_BIN -c <references/sample1.ref >sample1.rb2
  llvm-profdata merge -o bzip2-1.0.5.origin.profdata default.profraw
  llvm-cov export -format=lcov bzip2-1.0.5.origin -instr-profile=bzip2-1.0.5.origin.profdata bzip2-1.0.5.c.origin.c >bzip2-1.0.5.origin.lcov
  ./lcov2gcov bzip2-1.0.5.origin.lcov >bzip2-1.0.5.origin.real.gcov
  ./gcovanalyzer bzip2-1.0.5.origin.real.gcov getbcov > BIN_GCOV_DIR/bzip2-1.0.5.origin.$cnt.bin.gcov
  
  grep -q -E "$1" $LOG  
  # -d
  let "cnt++" 
  timeout $TIMEOUT $ORIGIN_BIN -d <references/sample1.bz2.ref >sample1.tst
  llvm-profdata merge -o bzip2-1.0.5.origin.profdata default.profraw
  llvm-cov export -format=lcov bzip2-1.0.5.origin -instr-profile=bzip2-1.0.5.origin.profdata bzip2-1.0.5.c.origin.c >bzip2-1.0.5.origin.lcov
  ./lcov2gcov bzip2-1.0.5.origin.lcov >bzip2-1.0.5.origin.real.gcov
  ./gcovanalyzer bzip2-1.0.5.origin.real.gcov getbcov > BIN_GCOV_DIR/bzip2-1.0.5.origin.$cnt.bin.gcov
  
  grep -q -E "$1" $LOG  
  # -f
  echo "1234" >foo
  let "cnt++" 
  timeout $TIMEOUT $ORIGIN_BIN -f foo
  llvm-profdata merge -o bzip2-1.0.5.origin.profdata default.profraw
  llvm-cov export -format=lcov bzip2-1.0.5.origin -instr-profile=bzip2-1.0.5.origin.profdata bzip2-1.0.5.c.origin.c >bzip2-1.0.5.origin.lcov
  ./lcov2gcov bzip2-1.0.5.origin.lcov >bzip2-1.0.5.origin.real.gcov
  ./gcovanalyzer bzip2-1.0.5.origin.real.gcov getbcov > BIN_GCOV_DIR/bzip2-1.0.5.origin.$cnt.bin.gcov
  
  grep -q -E "$1" $LOG  
  # -t
  echo "1234" >foo
  let "cnt++" 
  timeout $TIMEOUT $ORIGIN_BIN -t foo
  llvm-profdata merge -o bzip2-1.0.5.origin.profdata default.profraw
  llvm-cov export -format=lcov bzip2-1.0.5.origin -instr-profile=bzip2-1.0.5.origin.profdata bzip2-1.0.5.c.origin.c >bzip2-1.0.5.origin.lcov
  ./lcov2gcov bzip2-1.0.5.origin.lcov >bzip2-1.0.5.origin.real.gcov
  ./gcovanalyzer bzip2-1.0.5.origin.real.gcov getbcov > BIN_GCOV_DIR/bzip2-1.0.5.origin.$cnt.bin.gcov
  
  grep -q -E "$1" $LOG  

  let "cnt++" 
  timeout $TIMEOUT $ORIGIN_BIN -t references/sample1.bz2.ref
  llvm-profdata merge -o bzip2-1.0.5.origin.profdata default.profraw
  llvm-cov export -format=lcov bzip2-1.0.5.origin -instr-profile=bzip2-1.0.5.origin.profdata bzip2-1.0.5.c.origin.c >bzip2-1.0.5.origin.lcov
  ./lcov2gcov bzip2-1.0.5.origin.lcov >bzip2-1.0.5.origin.real.gcov
  ./gcovanalyzer bzip2-1.0.5.origin.real.gcov getbcov > BIN_GCOV_DIR/bzip2-1.0.5.origin.$cnt.bin.gcov
  
  grep -q -E "$1" $LOG  
  # -k
  rm foo*
  echo "1234" >foo
  let "cnt++" 
  timeout $TIMEOUT $ORIGIN_BIN -k foo
  llvm-profdata merge -o bzip2-1.0.5.origin.profdata default.profraw
  llvm-cov export -format=lcov bzip2-1.0.5.origin -instr-profile=bzip2-1.0.5.origin.profdata bzip2-1.0.5.c.origin.c >bzip2-1.0.5.origin.lcov
  ./lcov2gcov bzip2-1.0.5.origin.lcov >bzip2-1.0.5.origin.real.gcov
  ./gcovanalyzer bzip2-1.0.5.origin.real.gcov getbcov > BIN_GCOV_DIR/bzip2-1.0.5.origin.$cnt.bin.gcov
  
  grep -q -E "$1" $LOG  
  return 0
}

function default_disaster_file() {
  # -c
  let "cnt++" 
  timeout $TIMEOUT $ORIGIN_BIN -c <references/sample1.ref >sample1.rb2
  llvm-profdata merge -o bzip2-1.0.5.origin.profdata default.profraw
  llvm-cov export -format=lcov bzip2-1.0.5.origin -instr-profile=bzip2-1.0.5.origin.profdata bzip2-1.0.5.c.origin.c >bzip2-1.0.5.origin.lcov
  ./lcov2gcov bzip2-1.0.5.origin.lcov >bzip2-1.0.5.origin.real.gcov
  ./gcovanalyzer bzip2-1.0.5.origin.real.gcov getbcov > BIN_GCOV_DIR/bzip2-1.0.5.origin.$cnt.bin.gcov
  
  grep -q -E "$1" $LOG  
  # -d
  let "cnt++" 
  timeout $TIMEOUT $ORIGIN_BIN -d <references/sample1.bz2.ref >sample1.tst
  llvm-profdata merge -o bzip2-1.0.5.origin.profdata default.profraw
  llvm-cov export -format=lcov bzip2-1.0.5.origin -instr-profile=bzip2-1.0.5.origin.profdata bzip2-1.0.5.c.origin.c >bzip2-1.0.5.origin.lcov
  ./lcov2gcov bzip2-1.0.5.origin.lcov >bzip2-1.0.5.origin.real.gcov
  ./gcovanalyzer bzip2-1.0.5.origin.real.gcov getbcov > BIN_GCOV_DIR/bzip2-1.0.5.origin.$cnt.bin.gcov
  
  grep -q -E "$1" $LOG  
  return 0
}

OPT1=("-h")
OPT2=("-z" "-q" "-v" "-s" "-1" "-2" "-3" "-4" "-5" "-6" "-7" "-8" "-9")
OPT3=("-L" "-V")
function undesired() {
  let "cnt++" 
  timeout $TIMEOUT $ORIGIN_BIN $(cat crash_input)
  llvm-profdata merge -o bzip2-1.0.5.origin.profdata default.profraw
  llvm-cov export -format=lcov bzip2-1.0.5.origin -instr-profile=bzip2-1.0.5.origin.profdata bzip2-1.0.5.c.origin.c >bzip2-1.0.5.origin.lcov
  ./lcov2gcov bzip2-1.0.5.origin.lcov >bzip2-1.0.5.origin.real.gcov
  ./gcovanalyzer bzip2-1.0.5.origin.real.gcov getbcov > BIN_GCOV_DIR/bzip2-1.0.5.origin.$cnt.bin.gcov
  
  crash $?  
  let "cnt++" 
  timeout $TIMEOUT $ORIGIN_BIN
  llvm-profdata merge -o bzip2-1.0.5.origin.profdata default.profraw
  llvm-cov export -format=lcov bzip2-1.0.5.origin -instr-profile=bzip2-1.0.5.origin.profdata bzip2-1.0.5.c.origin.c >bzip2-1.0.5.origin.lcov
  ./lcov2gcov bzip2-1.0.5.origin.lcov >bzip2-1.0.5.origin.real.gcov
  ./gcovanalyzer bzip2-1.0.5.origin.real.gcov getbcov > BIN_GCOV_DIR/bzip2-1.0.5.origin.$cnt.bin.gcov
  
  crash $?  

  # keeping the output in the following cases:

  let "cnt++" 
  timeout $TIMEOUT $ORIGIN_BIN notexist
  llvm-profdata merge -o bzip2-1.0.5.origin.profdata default.profraw
  llvm-cov export -format=lcov bzip2-1.0.5.origin -instr-profile=bzip2-1.0.5.origin.profdata bzip2-1.0.5.c.origin.c >bzip2-1.0.5.origin.lcov
  ./lcov2gcov bzip2-1.0.5.origin.lcov >bzip2-1.0.5.origin.real.gcov
  ./gcovanalyzer bzip2-1.0.5.origin.real.gcov getbcov > BIN_GCOV_DIR/bzip2-1.0.5.origin.$cnt.bin.gcov
  
  crash $?  
  diff -q references/side0 $LOG >&/dev/null  
  rm -rf log

  for opt in ${OPT1[@]}; do
    let "cnt++" 
    timeout $TIMEOUT $ORIGIN_BIN $opt
    llvm-profdata merge -o bzip2-1.0.5.origin.profdata default.profraw
  llvm-cov export -format=lcov bzip2-1.0.5.origin -instr-profile=bzip2-1.0.5.origin.profdata bzip2-1.0.5.c.origin.c >bzip2-1.0.5.origin.lcov
  ./lcov2gcov bzip2-1.0.5.origin.lcov >bzip2-1.0.5.origin.real.gcov
  ./gcovanalyzer bzip2-1.0.5.origin.real.gcov getbcov > BIN_GCOV_DIR/bzip2-1.0.5.origin.$cnt.bin.gcov
  
    crash $?  
    diff -q references/side1 $LOG >&/dev/null  
    rm -rf log*
  done

  for opt in ${OPT2[@]}; do
    let "cnt++" 
    timeout $TIMEOUT $ORIGIN_BIN $opt
    llvm-profdata merge -o bzip2-1.0.5.origin.profdata default.profraw
  llvm-cov export -format=lcov bzip2-1.0.5.origin -instr-profile=bzip2-1.0.5.origin.profdata bzip2-1.0.5.c.origin.c >bzip2-1.0.5.origin.lcov
  ./lcov2gcov bzip2-1.0.5.origin.lcov >bzip2-1.0.5.origin.real.gcov
  ./gcovanalyzer bzip2-1.0.5.origin.real.gcov getbcov > BIN_GCOV_DIR/bzip2-1.0.5.origin.$cnt.bin.gcov
  
    crash $?  
    diff -q references/side2 $LOG >&/dev/null  
    rm -rf log*
  done

  for opt in ${OPT3[@]}; do
    let "cnt++" 
    timeout $TIMEOUT $ORIGIN_BIN $opt
    llvm-profdata merge -o bzip2-1.0.5.origin.profdata default.profraw
  llvm-cov export -format=lcov bzip2-1.0.5.origin -instr-profile=bzip2-1.0.5.origin.profdata bzip2-1.0.5.c.origin.c >bzip2-1.0.5.origin.lcov
  ./lcov2gcov bzip2-1.0.5.origin.lcov >bzip2-1.0.5.origin.real.gcov
  ./gcovanalyzer bzip2-1.0.5.origin.real.gcov getbcov > BIN_GCOV_DIR/bzip2-1.0.5.origin.$cnt.bin.gcov
  
    crash $?  
    diff -q references/side3 $LOG >&/dev/null  
    rm -rf log*
  done

  echo "1234" >foo
  $ORIGIN_BIN -c <foo >foo.bz2  
  for opt in ${OPT2[@]}; do
    let "cnt++" 
    timeout $TIMEOUT $ORIGIN_BIN -d $opt <foo.bz2 >sample1.tst
    llvm-profdata merge -o bzip2-1.0.5.origin.profdata default.profraw
  llvm-cov export -format=lcov bzip2-1.0.5.origin -instr-profile=bzip2-1.0.5.origin.profdata bzip2-1.0.5.c.origin.c >bzip2-1.0.5.origin.lcov
  ./lcov2gcov bzip2-1.0.5.origin.lcov >bzip2-1.0.5.origin.real.gcov
  ./gcovanalyzer bzip2-1.0.5.origin.real.gcov getbcov > BIN_GCOV_DIR/bzip2-1.0.5.origin.$cnt.bin.gcov
  
    crash $?  
    let "cnt++" 
    timeout $TIMEOUT $ORIGIN_BIN -c $opt <references/sample1.ref >sample1.rb2
    llvm-profdata merge -o bzip2-1.0.5.origin.profdata default.profraw
  llvm-cov export -format=lcov bzip2-1.0.5.origin -instr-profile=bzip2-1.0.5.origin.profdata bzip2-1.0.5.c.origin.c >bzip2-1.0.5.origin.lcov
  ./lcov2gcov bzip2-1.0.5.origin.lcov >bzip2-1.0.5.origin.real.gcov
  ./gcovanalyzer bzip2-1.0.5.origin.real.gcov getbcov > BIN_GCOV_DIR/bzip2-1.0.5.origin.$cnt.bin.gcov
  
    crash $?  
  done

  return 0
}

function desired_disaster() {
  case $1 in
  memory)
    MESSAGE="couldn't allocate enough memory"
    default_disaster_mem "$MESSAGE"  
    ;;
  file)
    MESSAGE="Bad file descriptor"
    default_disaster_file "$MESSAGE"  
    ;;
  *)
    return 1
    ;;
  esac
  return 0
}





main

export BENCHMARK_NAME=gzip-1.2.4
export BENCHMARK_DIR=$CHISEL_BENCHMARK_HOME/benchmark/$BENCHMARK_NAME
export SRC=$BENCHMARK_DIR/merged/$BENCHMARK_NAME.c
export ORIGIN_BIN=$BENCHMARK_DIR/merged/$BENCHMARK_NAME.origin
export REDUCED_BIN=$BENCHMARK_DIR/merged/$BENCHMARK_NAME.reduced
export TIMEOUT="-k 0.5 0.5"
export LOG=$BENCHMARK_DIR/merged/log.txt
cnt=0
rm -r BIN_GCOV_DIR
mkdir BIN_GCOV_DIR
source $CHISEL_BENCHMARK_HOME/benchmark/test-base.sh

function clean() {
  rm -rf $LOG *.gz *.rb2 *.tst log* foo* bar* failures_compile failures_core
  return 0
}

function desired() {
  # -c
  let "cnt++" 
  $ORIGIN_BIN -c <references/sample1.ref >sample1.gz 
  llvm-profdata merge -o gzip-1.2.4.origin.profdata default.profraw
  llvm-cov export -format=lcov gzip-1.2.4.origin -instr-profile=gzip-1.2.4.origin.profdata gzip-1.2.4.c.origin.c >gzip-1.2.4.origin.lcov
  ./lcov2gcov gzip-1.2.4.origin.lcov >gzip-1.2.4.origin.real.gcov
  ./gcovanalyzer gzip-1.2.4.origin.real.gcov getbcov > BIN_GCOV_DIR/gzip-1.2.4.origin.$cnt.bin.gcov
  let "cnt++" 
  timeout $TIMEOUT $ORIGIN_BIN -c <references/sample1.ref >sample1.rb2
  llvm-profdata merge -o gzip-1.2.4.origin.profdata default.profraw
  llvm-cov export -format=lcov gzip-1.2.4.origin -instr-profile=gzip-1.2.4.origin.profdata gzip-1.2.4.c.origin.c >gzip-1.2.4.origin.lcov
  ./lcov2gcov gzip-1.2.4.origin.lcov >gzip-1.2.4.origin.real.gcov
  ./gcovanalyzer gzip-1.2.4.origin.real.gcov getbcov > BIN_GCOV_DIR/gzip-1.2.4.origin.$cnt.bin.gcov
  crash $? 
  cmp sample1.gz sample1.rb2 >&/dev/null 
  # -d
  let "cnt++" 
  timeout $TIMEOUT $ORIGIN_BIN -d <sample1.gz >sample1.tst
  llvm-profdata merge -o gzip-1.2.4.origin.profdata default.profraw
  llvm-cov export -format=lcov gzip-1.2.4.origin -instr-profile=gzip-1.2.4.origin.profdata gzip-1.2.4.c.origin.c >gzip-1.2.4.origin.lcov
  ./lcov2gcov gzip-1.2.4.origin.lcov >gzip-1.2.4.origin.real.gcov
  ./gcovanalyzer gzip-1.2.4.origin.real.gcov getbcov > BIN_GCOV_DIR/gzip-1.2.4.origin.$cnt.bin.gcov
  crash $? 
  cmp sample1.tst references/sample1.ref >&/dev/null 
  # -f
  echo "1234" >foo
  let "cnt++" 
  $ORIGIN_BIN -c foo 
   llvm-profdata merge -o gzip-1.2.4.origin.profdata default.profraw
  llvm-cov export -format=lcov gzip-1.2.4.origin -instr-profile=gzip-1.2.4.origin.profdata gzip-1.2.4.c.origin.c >gzip-1.2.4.origin.lcov
  ./lcov2gcov gzip-1.2.4.origin.lcov >gzip-1.2.4.origin.real.gcov
  ./gcovanalyzer gzip-1.2.4.origin.real.gcov getbcov > BIN_GCOV_DIR/gzip-1.2.4.origin.$cnt.bin.gcov
  let "cnt++" 
  timeout $TIMEOUT $ORIGIN_BIN -f foo
   llvm-profdata merge -o gzip-1.2.4.origin.profdata default.profraw
  llvm-cov export -format=lcov gzip-1.2.4.origin -instr-profile=gzip-1.2.4.origin.profdata gzip-1.2.4.c.origin.c >gzip-1.2.4.origin.lcov
  ./lcov2gcov gzip-1.2.4.origin.lcov >gzip-1.2.4.origin.real.gcov
  ./gcovanalyzer gzip-1.2.4.origin.real.gcov getbcov > BIN_GCOV_DIR/gzip-1.2.4.origin.$cnt.bin.gcov
  crash $? 
  # -t (expected to return 1)
  echo "1234" >foo
  let "cnt++" 
  timeout $TIMEOUT $ORIGIN_BIN -t foo
   llvm-profdata merge -o gzip-1.2.4.origin.profdata default.profraw
  llvm-cov export -format=lcov gzip-1.2.4.origin -instr-profile=gzip-1.2.4.origin.profdata gzip-1.2.4.c.origin.c >gzip-1.2.4.origin.lcov
  ./lcov2gcov gzip-1.2.4.origin.lcov >gzip-1.2.4.origin.real.gcov
  ./gcovanalyzer gzip-1.2.4.origin.real.gcov getbcov > BIN_GCOV_DIR/gzip-1.2.4.origin.$cnt.bin.gcov
  # -t
  let "cnt++" 
  timeout $TIMEOUT $ORIGIN_BIN -t sample1.gz
   llvm-profdata merge -o gzip-1.2.4.origin.profdata default.profraw
  llvm-cov export -format=lcov gzip-1.2.4.origin -instr-profile=gzip-1.2.4.origin.profdata gzip-1.2.4.c.origin.c >gzip-1.2.4.origin.lcov
  ./lcov2gcov gzip-1.2.4.origin.lcov >gzip-1.2.4.origin.real.gcov
  ./gcovanalyzer gzip-1.2.4.origin.real.gcov getbcov > BIN_GCOV_DIR/gzip-1.2.4.origin.$cnt.bin.gcov
  crash $? 
  return 0
}

function disired_disaster_mem() {
  # -d
  let "cnt++" 
  $ORIGIN_BIN -c <references/sample1.ref >sample1.gz 
   llvm-profdata merge -o gzip-1.2.4.origin.profdata default.profraw
  llvm-cov export -format=lcov gzip-1.2.4.origin -instr-profile=gzip-1.2.4.origin.profdata gzip-1.2.4.c.origin.c >gzip-1.2.4.origin.lcov
  ./lcov2gcov gzip-1.2.4.origin.lcov >gzip-1.2.4.origin.real.gcov
  ./gcovanalyzer gzip-1.2.4.origin.real.gcov getbcov > BIN_GCOV_DIR/gzip-1.2.4.origin.$cnt.bin.gcov
  let "cnt++" 
  timeout $TIMEOUT $ORIGIN_BIN -d <sample1.gz >sample1.tst
   llvm-profdata merge -o gzip-1.2.4.origin.profdata default.profraw
  llvm-cov export -format=lcov gzip-1.2.4.origin -instr-profile=gzip-1.2.4.origin.profdata gzip-1.2.4.c.origin.c >gzip-1.2.4.origin.lcov
  ./lcov2gcov gzip-1.2.4.origin.lcov >gzip-1.2.4.origin.real.gcov
  ./gcovanalyzer gzip-1.2.4.origin.real.gcov getbcov > BIN_GCOV_DIR/gzip-1.2.4.origin.$cnt.bin.gcov
  grep -q -E "$1" $LOG 
  # -t
  let "cnt++" 
  timeout $TIMEOUT $ORIGIN_BIN -t sample1.gz
   llvm-profdata merge -o gzip-1.2.4.origin.profdata default.profraw
  llvm-cov export -format=lcov gzip-1.2.4.origin -instr-profile=gzip-1.2.4.origin.profdata gzip-1.2.4.c.origin.c >gzip-1.2.4.origin.lcov
  ./lcov2gcov gzip-1.2.4.origin.lcov >gzip-1.2.4.origin.real.gcov
  ./gcovanalyzer gzip-1.2.4.origin.real.gcov getbcov > BIN_GCOV_DIR/gzip-1.2.4.origin.$cnt.bin.gcov
  grep -q -E "$1" $LOG 
  return 0
}

function disired_disaster_file() {
  # -d
  let "cnt++" 
  $ORIGIN_BIN -c <references/sample1.ref >sample1.gz 
   llvm-profdata merge -o gzip-1.2.4.origin.profdata default.profraw
  llvm-cov export -format=lcov gzip-1.2.4.origin -instr-profile=gzip-1.2.4.origin.profdata gzip-1.2.4.c.origin.c >gzip-1.2.4.origin.lcov
  ./lcov2gcov gzip-1.2.4.origin.lcov >gzip-1.2.4.origin.real.gcov
  ./gcovanalyzer gzip-1.2.4.origin.real.gcov getbcov > BIN_GCOV_DIR/gzip-1.2.4.origin.$cnt.bin.gcov
  let "cnt++" 
  timeout $TIMEOUT $ORIGIN_BIN -d <sample1.gz >sample1.tst
   llvm-profdata merge -o gzip-1.2.4.origin.profdata default.profraw
  llvm-cov export -format=lcov gzip-1.2.4.origin -instr-profile=gzip-1.2.4.origin.profdata gzip-1.2.4.c.origin.c >gzip-1.2.4.origin.lcov
  ./lcov2gcov gzip-1.2.4.origin.lcov >gzip-1.2.4.origin.real.gcov
  ./gcovanalyzer gzip-1.2.4.origin.real.gcov getbcov > BIN_GCOV_DIR/gzip-1.2.4.origin.$cnt.bin.gcov
  grep -q -E "$1" $LOG 
  return 0
}

OPT0=("-l" "--list")
OPT1=("--help" "-h" "-S" "--suffix" "-k")
OPT2=("--license" "-L")
OPT3=("--no-name" "--name" "--quiet" "-r" "--recursive" "--verbose" "-q" "-v"
  "-n" "-N" "-1" "-9" "--fast" "--best")
OPT4=("--version" "-V")
function undesired() {
  let "cnt++" 
  timeout $TIMEOUT $ORIGIN_BIN notexist 
   llvm-profdata merge -o gzip-1.2.4.origin.profdata default.profraw
  llvm-cov export -format=lcov gzip-1.2.4.origin -instr-profile=gzip-1.2.4.origin.profdata gzip-1.2.4.c.origin.c >gzip-1.2.4.origin.lcov
  ./lcov2gcov gzip-1.2.4.origin.lcov >gzip-1.2.4.origin.real.gcov
  ./gcovanalyzer gzip-1.2.4.origin.real.gcov getbcov > BIN_GCOV_DIR/gzip-1.2.4.origin.$cnt.bin.gcov
  crash $? 

  let "cnt++" 
  timeout $TIMEOUT $ORIGIN_BIN 
   llvm-profdata merge -o gzip-1.2.4.origin.profdata default.profraw
  llvm-cov export -format=lcov gzip-1.2.4.origin -instr-profile=gzip-1.2.4.origin.profdata gzip-1.2.4.c.origin.c >gzip-1.2.4.origin.lcov
  ./lcov2gcov gzip-1.2.4.origin.lcov >gzip-1.2.4.origin.real.gcov
  ./gcovanalyzer gzip-1.2.4.origin.real.gcov getbcov > BIN_GCOV_DIR/gzip-1.2.4.origin.$cnt.bin.gcov
  crash $? 

  # keeping the error message in the following cases:
  for opt in ${OPT1[@]}; do
  let "cnt++" 
    timeout $TIMEOUT $ORIGIN_BIN $opt
     llvm-profdata merge -o gzip-1.2.4.origin.profdata default.profraw
  llvm-cov export -format=lcov gzip-1.2.4.origin -instr-profile=gzip-1.2.4.origin.profdata gzip-1.2.4.c.origin.c >gzip-1.2.4.origin.lcov
  ./lcov2gcov gzip-1.2.4.origin.lcov >gzip-1.2.4.origin.real.gcov
  ./gcovanalyzer gzip-1.2.4.origin.real.gcov getbcov > BIN_GCOV_DIR/gzip-1.2.4.origin.$cnt.bin.gcov
    cat $LOG | tail -n 17 &>log2
    diff -q references/side1 log2 >&/dev/null 
    rm -rf log*
  done

  for opt in ${OPT2[@]}; do
  let "cnt++" 
    timeout $TIMEOUT $ORIGIN_BIN $opt
     llvm-profdata merge -o gzip-1.2.4.origin.profdata default.profraw
  llvm-cov export -format=lcov gzip-1.2.4.origin -instr-profile=gzip-1.2.4.origin.profdata gzip-1.2.4.c.origin.c >gzip-1.2.4.origin.lcov
  ./lcov2gcov gzip-1.2.4.origin.lcov >gzip-1.2.4.origin.real.gcov
  ./gcovanalyzer gzip-1.2.4.origin.real.gcov getbcov > BIN_GCOV_DIR/gzip-1.2.4.origin.$cnt.bin.gcov
    cat $LOG | tail -n 14 &>log2
    diff -q references/side2 log2 >&/dev/null 
    rm -rf log*
  done

  for opt in ${OPT3[@]}; do
  let "cnt++" 
    timeout $TIMEOUT $ORIGIN_BIN $opt
     llvm-profdata merge -o gzip-1.2.4.origin.profdata default.profraw
  llvm-cov export -format=lcov gzip-1.2.4.origin -instr-profile=gzip-1.2.4.origin.profdata gzip-1.2.4.c.origin.c >gzip-1.2.4.origin.lcov
  ./lcov2gcov gzip-1.2.4.origin.lcov >gzip-1.2.4.origin.real.gcov
  ./gcovanalyzer gzip-1.2.4.origin.real.gcov getbcov > BIN_GCOV_DIR/gzip-1.2.4.origin.$cnt.bin.gcov
    diff -q references/side3 $LOG >&/dev/null 
    rm -rf log*
  done

  for opt in ${OPT4[@]}; do
  let "cnt++" 
    timeout $TIMEOUT $ORIGIN_BIN $opt
     llvm-profdata merge -o gzip-1.2.4.origin.profdata default.profraw
  llvm-cov export -format=lcov gzip-1.2.4.origin -instr-profile=gzip-1.2.4.origin.profdata gzip-1.2.4.c.origin.c >gzip-1.2.4.origin.lcov
  ./lcov2gcov gzip-1.2.4.origin.lcov >gzip-1.2.4.origin.real.gcov
  ./gcovanalyzer gzip-1.2.4.origin.real.gcov getbcov > BIN_GCOV_DIR/gzip-1.2.4.origin.$cnt.bin.gcov
    diff -q references/side4 $LOG >&/dev/null 
    rm -rf log*
  done

  echo "1234" >foo
  let "cnt++" 
  $ORIGIN_BIN -c <foo >foo.gz 
   llvm-profdata merge -o gzip-1.2.4.origin.profdata default.profraw
  llvm-cov export -format=lcov gzip-1.2.4.origin -instr-profile=gzip-1.2.4.origin.profdata gzip-1.2.4.c.origin.c >gzip-1.2.4.origin.lcov
  ./lcov2gcov gzip-1.2.4.origin.lcov >gzip-1.2.4.origin.real.gcov
  ./gcovanalyzer gzip-1.2.4.origin.real.gcov getbcov > BIN_GCOV_DIR/gzip-1.2.4.origin.$cnt.bin.gcov
  for opt in ${OPT0[@]}; do
  let "cnt++" 
    timeout $TIMEOUT $ORIGIN_BIN -d $opt <foo.gz >sample1.tst
     llvm-profdata merge -o gzip-1.2.4.origin.profdata default.profraw
  llvm-cov export -format=lcov gzip-1.2.4.origin -instr-profile=gzip-1.2.4.origin.profdata gzip-1.2.4.c.origin.c >gzip-1.2.4.origin.lcov
  ./lcov2gcov gzip-1.2.4.origin.lcov >gzip-1.2.4.origin.real.gcov
  ./gcovanalyzer gzip-1.2.4.origin.real.gcov getbcov > BIN_GCOV_DIR/gzip-1.2.4.origin.$cnt.bin.gcov
    let "cnt++" 
    timeout $TIMEOUT $ORIGIN_BIN -c $opt <references/sample1.ref >sample1.rb2
     llvm-profdata merge -o gzip-1.2.4.origin.profdata default.profraw
  llvm-cov export -format=lcov gzip-1.2.4.origin -instr-profile=gzip-1.2.4.origin.profdata gzip-1.2.4.c.origin.c >gzip-1.2.4.origin.lcov
  ./lcov2gcov gzip-1.2.4.origin.lcov >gzip-1.2.4.origin.real.gcov
  ./gcovanalyzer gzip-1.2.4.origin.real.gcov getbcov > BIN_GCOV_DIR/gzip-1.2.4.origin.$cnt.bin.gcov
    crash $? 
  done

  echo "1234" >bar
  let "cnt++" 
  $ORIGIN_BIN -c <bar >bar.gz 
   llvm-profdata merge -o gzip-1.2.4.origin.profdata default.profraw
  llvm-cov export -format=lcov gzip-1.2.4.origin -instr-profile=gzip-1.2.4.origin.profdata gzip-1.2.4.c.origin.c >gzip-1.2.4.origin.lcov
  ./lcov2gcov gzip-1.2.4.origin.lcov >gzip-1.2.4.origin.real.gcov
  ./gcovanalyzer gzip-1.2.4.origin.real.gcov getbcov > BIN_GCOV_DIR/gzip-1.2.4.origin.$cnt.bin.gcov
  for opt in ${OPT3[@]}; do
  let "cnt++" 
    timeout $TIMEOUT $ORIGIN_BIN -d $opt <bar.gz >sample1.tst
     llvm-profdata merge -o gzip-1.2.4.origin.profdata default.profraw
  llvm-cov export -format=lcov gzip-1.2.4.origin -instr-profile=gzip-1.2.4.origin.profdata gzip-1.2.4.c.origin.c >gzip-1.2.4.origin.lcov
  ./lcov2gcov gzip-1.2.4.origin.lcov >gzip-1.2.4.origin.real.gcov
  ./gcovanalyzer gzip-1.2.4.origin.real.gcov getbcov > BIN_GCOV_DIR/gzip-1.2.4.origin.$cnt.bin.gcov
    let "cnt++" 
    timeout $TIMEOUT $ORIGIN_BIN -c $opt <references/sample1.ref >sample1.rb2
     llvm-profdata merge -o gzip-1.2.4.origin.profdata default.profraw
  llvm-cov export -format=lcov gzip-1.2.4.origin -instr-profile=gzip-1.2.4.origin.profdata gzip-1.2.4.c.origin.c >gzip-1.2.4.origin.lcov
  ./lcov2gcov gzip-1.2.4.origin.lcov >gzip-1.2.4.origin.real.gcov
  ./gcovanalyzer gzip-1.2.4.origin.real.gcov getbcov > BIN_GCOV_DIR/gzip-1.2.4.origin.$cnt.bin.gcov
    crash $? 
  done
  return 0
}

function desired_disaster() {
  case $1 in
  memory)
    MESSAGE="out of memory"
    disired_disaster_mem "$MESSAGE" 
    ;;
  file)
    MESSAGE="Bad file descriptor"
    disired_disaster_file "$MESSAGE" 
    ;;
  *)
    return 1
    ;;
  esac
  return 0
}

main

#!/bin/bash

export BENCHMARK_NAME=bzip2-1.0.5
export BENCHMARK_DIR=$CHISEL_BENCHMARK_HOME/benchmark/$BENCHMARK_NAME/merged
export SRC=$BENCHMARK_DIR/$BENCHMARK_NAME.c
export ORIGIN_BIN=$BENCHMARK_DIR/$BENCHMARK_NAME.origin
export REDUCED_BIN=$BENCHMARK_DIR/$BENCHMARK_NAME.reduced
export TIMEOUT="-k 1 1"
export LOG=$BENCHMARK_DIR/log.txt

source $CHISEL_BENCHMARK_HOME/benchmark/test-base.sh

function clean() {
  rm -rf -- *.bz2
  rm -rf $LOG $REDUCED_BIN *.bz2 *.rb2 *.tst log foo* bar*
  rm -f \(*\)
  return 0
}

function desired() {
  # -c
  { timeout $TIMEOUT $REDUCED_BIN -c <references/sample1.ref >sample1.rb2; } &>$LOG || exit 1
  cmp references/sample1.bz2.ref sample1.rb2 >&/dev/null || exit 1
  # -d
  { timeout $TIMEOUT $REDUCED_BIN -d <references/sample1.bz2.ref >sample1.tst; } &>$LOG || exit 1
  cmp references/sample1.ref sample1.tst >&/dev/null || exit 1
  # -f
  echo "1234" >foo
  { timeout $TIMEOUT $REDUCED_BIN -f foo; } >&$LOG || exit 1
  # -t
  echo "1234" >foo
  { timeout $TIMEOUT $REDUCED_BIN -t foo; } >&$LOG && exit 1
  { timeout $TIMEOUT $REDUCED_BIN -t references/sample1.bz2.ref; } >&$LOG || exit 1
  # -k
  rm foo*
  echo "1234" >foo
  { timeout $TIMEOUT $REDUCED_BIN -k foo; } >&$LOG || exit 1
  test -f foo -a -f foo.bz2 || exit 1
   ### redebloat ###
for file in $(ls re_inputs/o1*); do 	
  # -c
  { timeout $TIMEOUT $REDUCED_BIN -c < $file >&/dev/null; } 2>$LOG || exit 1
done
for file in $(ls re_inputs/o2*); do 
  # -d
 { timeout $TIMEOUT $REDUCED_BIN -d <$file >&/dev/null; } 2>$LOG
	 if [[ $? -ne 2 ]]; then 
		 exit 1
	fi
done
cp inputs_backup/o3* re_inputs/
for file in $(ls re_inputs/o3*); do 
  # -f
  { timeout $TIMEOUT $REDUCED_BIN -f $file; } 2>$LOG || exit 1
done
rm re_inputs/o3*
for file in $(ls re_inputs/o4*); do
    # -t
  { timeout $TIMEOUT $REDUCED_BIN -t $file; } 2>$LOG && exit 1
done
#for file in $(ls re_inputs/o5*); do
    # -k
#  { timeout $TIMEOUT $REDUCED_BIN -k $file; } 2>$LOG || exit 1
#done
# rm re_inputs/*.bz2
  return 0
}

function default_disaster_mem() {
  # -c
  { timeout $TIMEOUT $REDUCED_BIN -c <references/sample1.ref >sample1.rb2; } &>$LOG
  grep -q -E "$1" $LOG || exit 1
  # -d
  { timeout $TIMEOUT $REDUCED_BIN -d <references/sample1.bz2.ref >sample1.tst; } &>$LOG
  grep -q -E "$1" $LOG || exit 1
  # -f
  echo "1234" >foo
  { timeout $TIMEOUT $REDUCED_BIN -f foo; } >&$LOG
  grep -q -E "$1" $LOG || exit 1
  # -t
  echo "1234" >foo
  { timeout $TIMEOUT $REDUCED_BIN -t foo; } >&$LOG
  grep -q -E "$1" $LOG || exit 1

  { timeout $TIMEOUT $REDUCED_BIN -t references/sample1.bz2.ref; } >&$LOG
  grep -q -E "$1" $LOG || exit 1
  # -k
  rm foo*
  echo "1234" >foo
  { timeout $TIMEOUT $REDUCED_BIN -k foo; } >&$LOG
  grep -q -E "$1" $LOG || exit 1
  return 0
}

function default_disaster_file() {
  # -c
  { timeout $TIMEOUT $REDUCED_BIN -c <references/sample1.ref >sample1.rb2; } &>$LOG
  grep -q -E "$1" $LOG || exit 1
  # -d
  { timeout $TIMEOUT $REDUCED_BIN -d <references/sample1.bz2.ref >sample1.tst; } &>$LOG
  grep -q -E "$1" $LOG || exit 1
  return 0
}

OPT1=("-h")
OPT2=("-z" "-q" "-v" "-s" "-1" "-2" "-3" "-4" "-5" "-6" "-7" "-8" "-9")
OPT3=("-L" "-V")
function undesired() {
  { timeout $TIMEOUT $REDUCED_BIN $(cat crash_input); } &>$LOG
  crash $? && exit 1
  { timeout $TIMEOUT $REDUCED_BIN; } 2>$LOG
  crash $? && exit 1

  # keeping the output in the following cases:

  { timeout $TIMEOUT $REDUCED_BIN notexist; } 2>$LOG
  crash $? && exit 1
  diff -q references/side0 $LOG >&/dev/null || exit 1
  rm -rf log

  for opt in ${OPT1[@]}; do
    { timeout $TIMEOUT $REDUCED_BIN $opt; } 2>$LOG
    crash $? && exit 1
    diff -q references/side1 $LOG >&/dev/null || exit 1
    rm -rf log*
  done

  for opt in ${OPT2[@]}; do
    { timeout $TIMEOUT $REDUCED_BIN $opt; } 2>$LOG
    crash $? && exit 1
    diff -q references/side2 $LOG >&/dev/null || exit 1
    rm -rf log*
  done

  for opt in ${OPT3[@]}; do
    { timeout $TIMEOUT $REDUCED_BIN $opt; } 2>$LOG
    crash $? && exit 1
    diff -q references/side3 $LOG >&/dev/null || exit 1
    rm -rf log*
  done

  echo "1234" >foo
  $REDUCED_BIN -c <foo >foo.bz2 || exit 1
  for opt in ${OPT2[@]}; do
    { timeout $TIMEOUT $REDUCED_BIN -d $opt <foo.bz2 >sample1.tst; } 2>$LOG
    crash $? && exit 1
    { timeout $TIMEOUT $REDUCED_BIN -c $opt <references/sample1.ref >sample1.rb2; } 2>$LOG
    crash $? && exit 1
  done

  return 0
}

function desired_disaster() {
  case $1 in
  memory)
    MESSAGE="couldn't allocate enough memory"
    default_disaster_mem "$MESSAGE" || exit 1
    ;;
  file)
    MESSAGE="Bad file descriptor"
    default_disaster_file "$MESSAGE" || exit 1
    ;;
  *)
    return 1
    ;;
  esac
  return 0
}

main

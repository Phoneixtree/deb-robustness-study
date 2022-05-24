#!/bin/bash

export BENCHMARK_NAME=printtokens
export BENCHMARK_DIR=$CHISEL_BENCHMARK_HOME/benchmark/small_progs/$BENCHMARK_NAME
export SRC=$BENCHMARK_DIR/src/origin/$BENCHMARK_NAME.c
export ORIGIN_BIN=$BENCHMARK_DIR/src/origin/$BENCHMARK_NAME.origin
export REDUCED_BIN=$BENCHMARK_DIR/src/reduced/
$BENCHMARK_NAME.reduced
export TIMEOUT="-k 9 1"
export LOG=$BENCHMARK_DIR/log.txt
export INDIR=$BENCHMARK_DIR/input.origin/n10train
export OUTDIR=$BENCHMARK_DIR/output/reduced


# source $CHISEL_BENCHMARK_HOME/benchmark/small_progs/test-base.sh

function clean() {
  # TODO
  return 0
}

function desired() {
  # TODO
   # 0
     { timeout $TIMEOUT $REDUCED_BIN < $INDIR/newtst41.tst &> $OUTDIR/o0 } &>$LOG || exit 1
     $ORIGIN_BIN < $INDIR/newtst41.tst &> $OUTDIR/o0 
  diff result/o0 sample1.rb2 >&/dev/null || exit 1

  # { timeout $TIMEOUT $REDUCED_BIN -c <references/sample1.ref >sample1.rb2; } &>$LOG || exit 1
  # cmp references/sample1.bz2.ref sample1.rb2 >&/dev/null || exit 1

  #   { timeout $TIMEOUT $REDUCED_BIN "a" input2; } >&$LOG || exit 1
  # $ORIGIN_BIN "a" input2 >&log2
  # diff -q $LOG log2 >&/dev/null || exit 1
}

function undesired() {
  # TODO
}

function desired_disaster() {
  # TODO
}

main

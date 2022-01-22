#!/bin/bash

export BENCHMARK_NAME=printtokens
export BENCHMARK_DIR=../..
export SRC=$BENCHMARK_DIR/src/origin/$BENCHMARK_NAME.c
export ORIGIN_BIN=$BENCHMARK_DIR/src/origin/$BENCHMARK_NAME.origin
export REDUCED_BIN=$BENCHMARK_DIR/src/reduced/n10train_chiselnosan/$BENCHMARK_NAME.reduced
export TIMEOUT="-k 9 1"
export LOG=$BENCHMARK_DIR/log.txt
export INDIR=$BENCHMARK_DIR/input.origin/n10train
export OUTDIR_REDUCED=$BENCHMARK_DIR/output/reduced
export OUTDIR_ORIGIN=$BENCHMARK_DIR/output/origin


source test-base.sh

function clean() {
  # TODO
  return 0
}

function desired() {
  # 0
  { timeout $TIMEOUT $REDUCED_BIN < $INDIR/newtst41.tst &> $OUTDIR_REDUCED/o0; } &>$LOG || exit 1
  { timeout $TIMEOUT $ORIGIN_BIN < $INDIR/newtst41.tst &> $OUTDIR_ORIGIN/o0; }
  diff -q $OUTDIR_REDUCED/o0 $OUTDIR_ORIGIN/o0 >&/dev/null || exit 1

  # 1
  { timeout $TIMEOUT $REDUCED_BIN < $INDIR/jk36 &> $OUTDIR_REDUCED/o1; } &>$LOG || exit 1
  { timeout $TIMEOUT $ORIGIN_BIN < $INDIR/jk36 &> $OUTDIR_ORIGIN/o1; }
  diff -q $OUTDIR_REDUCED/o1 $OUTDIR_ORIGIN/o1 >&/dev/null || exit 1

  # 2
  { timeout $TIMEOUT $REDUCED_BIN < $INDIR/uslin.560 &> $OUTDIR_REDUCED/o2; } &>$LOG || exit 1
  { timeout $TIMEOUT $ORIGIN_BIN < $INDIR/uslin.560 &> $OUTDIR_ORIGIN/o2; }
  diff -q $OUTDIR_REDUCED/o2 $OUTDIR_ORIGIN/o2 >&/dev/null || exit 1

  # 3
  { timeout $TIMEOUT $REDUCED_BIN < $INDIR/tst154 &> $OUTDIR_REDUCED/o3; } &>$LOG || exit 1
  { timeout $TIMEOUT $ORIGIN_BIN < $INDIR/tst154 &> $OUTDIR_ORIGIN/o3; }
  diff -q $OUTDIR_REDUCED/o3 $OUTDIR_ORIGIN/o3 >&/dev/null || exit 1

  # 4
  { timeout $TIMEOUT $REDUCED_BIN < $INDIR/newtst536.tst &> $OUTDIR_REDUCED/o4; } &>$LOG || exit 1
  { timeout $TIMEOUT $ORIGIN_BIN < $INDIR/newtst536.tst &> $OUTDIR_ORIGIN/o4; }
  diff -q $OUTDIR_REDUCED/o4 $OUTDIR_ORIGIN/o4 >&/dev/null || exit 1

  # 5
  { timeout $TIMEOUT $REDUCED_BIN < $INDIR/newtst376.tst &> $OUTDIR_REDUCED/o5; } &>$LOG || exit 1
  { timeout $TIMEOUT $ORIGIN_BIN < $INDIR/newtst376.tst &> $OUTDIR_ORIGIN/o5; }
  diff -q $OUTDIR_REDUCED/o5 $OUTDIR_ORIGIN/o5 >&/dev/null || exit 1
 
  # 6
  { timeout $TIMEOUT $REDUCED_BIN < $INDIR/newtst4.tst &> $OUTDIR_REDUCED/o6; } &>$LOG || exit 1
  { timeout $TIMEOUT $ORIGIN_BIN < $INDIR/newtst4.tst &> $OUTDIR_ORIGIN/o6; }
  diff -q $OUTDIR_REDUCED/o6 $OUTDIR_ORIGIN/o6 >&/dev/null || exit 1

  # 7
  { timeout $TIMEOUT $REDUCED_BIN < $INDIR/newtst265.tst &> $OUTDIR_REDUCED/o7; } &>$LOG || exit 1
  { timeout $TIMEOUT $ORIGIN_BIN < $INDIR/newtst265.tst &> $OUTDIR_ORIGIN/o7; }
  diff -q $OUTDIR_REDUCED/o7 $OUTDIR_ORIGIN/o7 >&/dev/null || exit 1

  # 8
  { timeout $TIMEOUT $REDUCED_BIN < $INDIR/uslin.1760 &> $OUTDIR_REDUCED/o8; } &>$LOG || exit 1
  { timeout $TIMEOUT $ORIGIN_BIN < $INDIR/uslin.1760 &> $OUTDIR_ORIGIN/o8; }
  diff -q $OUTDIR_REDUCED/o8 $OUTDIR_ORIGIN/o8 >&/dev/null || exit 1

  # 9
  { timeout $TIMEOUT $REDUCED_BIN < $INDIR/uslin.314 &> $OUTDIR_REDUCED/o9; } &>$LOG || exit 1
  { timeout $TIMEOUT $ORIGIN_BIN < $INDIR/uslin.314 &> $OUTDIR_ORIGIN/o9; }
  diff -q $OUTDIR_REDUCED/o9 $OUTDIR_ORIGIN/o9 >&/dev/null || exit 1

  return 0

}

function undesired() {
  # TODO
  return 0
}

function desired_disaster() {
  # TODO
  return 0
}

main

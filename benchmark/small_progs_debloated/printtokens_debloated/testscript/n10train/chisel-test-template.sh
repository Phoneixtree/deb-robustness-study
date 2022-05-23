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
    rm -f $REDUCED_BIN $LOG log.txt
  
  # TODO
  return 0
}

function desired() {
  echo 0
  { timeout $TIMEOUT $REDUCED_BIN < $INDIR/newtst41.tst >&$LOG; } || exit 1
  $ORIGIN_BIN < $INDIR/newtst41.tst >&log.txt
  diff -q $LOG log.txt >&/dev/null || exit 1
  cat log.txt
  echo 1
  { timeout $TIMEOUT $REDUCED_BIN < $INDIR/jk36  >&$LOG; } || exit 1
  $ORIGIN_BIN < $INDIR/jk36 >&log.txt
  diff -q $LOG log.txt >&/dev/null || exit 1
  cat log.txt
  echo 2
  { timeout $TIMEOUT $REDUCED_BIN < $INDIR/uslin.560 >&$LOG ;} || exit 1
  $ORIGIN_BIN < $INDIR/uslin.560  >&log.txt
  diff -q $LOG log.txt >&/dev/null || exit 1
  cat log.txt
  echo 3
  { timeout $TIMEOUT $REDUCED_BIN < $INDIR/tst154  >&$LOG  ;} || exit 1
  $ORIGIN_BIN < $INDIR/tst154  >&log.txt
  diff -q $LOG log.txt >&/dev/null || exit 1
  cat log.txt
  echo 4
  { timeout $TIMEOUT $REDUCED_BIN < $INDIR/newtst536.tst    >&$LOG ;} || exit 1
  $ORIGIN_BIN < $INDIR/newtst536.tst  >&log.txt
  diff -q $LOG log.txt >&/dev/null || exit 1
    cat log.txt
  echo 5
  { timeout $TIMEOUT $REDUCED_BIN < $INDIR/newtst376.tst   >&$LOG  ;} || exit 1
  $ORIGIN_BIN < $INDIR/newtst376.tst  >&log.txt
  diff -q $LOG log.txt >&/dev/null || exit 1 
    cat log.txt
  echo 6
  { timeout $TIMEOUT $REDUCED_BIN < $INDIR/newtst4.tst  >&$LOG  ;}  || exit 1
  $ORIGIN_BIN < $INDIR/newtst4.tst  >&log.txt
  diff -q $LOG log.txt >&/dev/null || exit 1
    cat log.txt
  echo 7
  { timeout $TIMEOUT $REDUCED_BIN < $INDIR/newtst265.tst >&$LOG    ;} || exit 1
  $ORIGIN_BIN < $INDIR/newtst265.tst  >&log.txt
  diff -q $LOG log.txt >&/dev/null || exit 1
    cat log.txt
  echo 8
  { timeout $TIMEOUT $REDUCED_BIN < $INDIR/uslin.1760  >&$LOG  ;} || exit 1
  $ORIGIN_BIN < $INDIR/uslin.1760  >&log.txt
  diff -q $LOG log.txt >&/dev/null || exit 1
    cat log.txt
  echo 9
  { timeout $TIMEOUT $REDUCED_BIN < $INDIR/uslin.314  >&$LOG ;}  || exit 1
  $ORIGIN_BIN < $INDIR/uslin.314 >&log.txt
  diff -q $LOG log.txt >&/dev/null || exit 1
    cat log.txt
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

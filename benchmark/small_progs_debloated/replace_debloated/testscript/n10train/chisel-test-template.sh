#!/bin/bash

export BENCHMARK_NAME=replace
export BENCHMARK_DIR=../..
export SRC=$BENCHMARK_DIR/src/origin/$BENCHMARK_NAME.c
export ORIGIN_BIN=$BENCHMARK_DIR/src/origin/$BENCHMARK_NAME.origin
export REDUCED_BIN=$BENCHMARK_DIR/src/reduced/n10train_chiselnosan/$BENCHMARK_NAME.reduced
export TIMEOUT="-k 0.5 0.5"
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
  #echo 0
  { timeout $TIMEOUT $REDUCED_BIN '[d]*' '&@t& lkj[0-9]&' < $INDIR/moni/rr19.t >&$LOG; } || exit 1
  $ORIGIN_BIN '[d]*' '&@t& lkj[0-9]&' < $INDIR/moni/rr19.t >&log.txt
  diff -q $LOG log.txt >&/dev/null || exit 1
  # cat log.txt
  #echo 1
  { timeout $TIMEOUT $REDUCED_BIN '@h' 'w0Yj|`l`AYgv{M<#KAouk' < $INDIR/input/ruin.1035 >&$LOG; } || exit 1
  $ORIGIN_BIN '@h' 'w0Yj|`l`AYgv{M<#KAouk' < $INDIR/input/ruin.1035 >&log.txt
  diff -q $LOG log.txt >&/dev/null || exit 1
  # cat log.txt
  #echo 2
  { timeout $TIMEOUT $REDUCED_BIN '@**?' 'b@t' < $INDIR/temp-test/2179.inp.922.1 >&$LOG ;} || exit 1
  $ORIGIN_BIN '@**?' 'b@t' < $INDIR/temp-test/2179.inp.922.1  >&log.txt
  diff -q $LOG log.txt >&/dev/null || exit 1
  # cat log.txt
  #echo 3
  { timeout $TIMEOUT $REDUCED_BIN '?[^9-B]' 'a@n' < $INDIR/temp-test/282.inp.126.2  >&$LOG  ;} || exit 1
  $ORIGIN_BIN '?[^9-B]' 'a@n' < $INDIR/temp-test/282.inp.126.2  >&log.txt
  diff -q $LOG log.txt >&/dev/null || exit 1
  # cat log.txt
  #echo 4
  { timeout $TIMEOUT $REDUCED_BIN '-[^-z]' '&a@%' < $INDIR/temp-test/768.inp.329.1     >&$LOG ;} || exit 1
  $ORIGIN_BIN '-[^-z]' '&a@%' < $INDIR/temp-test/768.inp.329.1   >&log.txt
  diff -q $LOG log.txt >&/dev/null || exit 1
    # cat log.txt
  #echo 5
  { timeout $TIMEOUT $REDUCED_BIN   'x' 'vif#21aJuxd&,I1PPnf{b,On|j&db8)b<`\|' < $INDIR/input/ruin.334   >&$LOG  ;} || exit 1
  $ORIGIN_BIN  'x' 'vif#21aJuxd&,I1PPnf{b,On|j&db8)b<`\|' < $INDIR/input/ruin.334 >&log.txt
  diff -q $LOG log.txt >&/dev/null || exit 1 
    # cat log.txt
  #echo 6
  { timeout $TIMEOUT $REDUCED_BIN '%yw,0+8@n' 'a&`' < $INDIR/input/ruin.1158  >&$LOG  ;}  || exit 1
  $ORIGIN_BIN '%yw,0+8@n' 'a&`' < $INDIR/input/ruin.1158  >&log.txt
  diff -q $LOG log.txt >&/dev/null || exit 1
    # cat log.txt
  #echo 7
  { timeout $TIMEOUT $REDUCED_BIN '%?[@@][^0-9][a-c]?-[^0-9]- [^9-B]$' 'NEW' < $INDIR/temp-test/1129.inp.485.10 >&$LOG    ;} || exit 1
  $ORIGIN_BIN '%?[@@][^0-9][a-c]?-[^0-9]- [^9-B]$' 'NEW' < $INDIR/temp-test/1129.inp.485.10  >&log.txt
  diff -q $LOG log.txt >&/dev/null || exit 1
    # cat log.txt
  #echo 8
  { timeout $TIMEOUT $REDUCED_BIN '-?@@*[_-z][^0-9]' '&' < $INDIR/temp-test/821.inp.354.1 >&$LOG  ;} || exit 1
  $ORIGIN_BIN '-?@@*[_-z][^0-9]' '&' < $INDIR/temp-test/821.inp.354.1  >&log.txt
  diff -q $LOG log.txt >&/dev/null || exit 1
    # cat log.txt
  #echo 9
  # { timeout $TIMEOUT $REDUCED_BIN '[^9-B][^]@[**' 'a' < $INDIR/moni/f7.inp >&$LOG ;}  || exit 1
  # $ORIGIN_BIN '[^9-B][^]@[**' 'a' < $INDIR/moni/f7.inp >&log.txt
  # diff -q $LOG log.txt >&/dev/null || exit 1
    # cat log.txt
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

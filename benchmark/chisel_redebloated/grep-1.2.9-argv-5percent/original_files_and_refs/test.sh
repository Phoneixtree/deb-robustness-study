#!/bin/bash

export BENCHMARK_NAME=grep-2.19
export BENCHMARK_DIR=$CHISEL_BENCHMARK_HOME/benchmark/$BENCHMARK_NAME/merged
export SRC=$BENCHMARK_DIR/$BENCHMARK_NAME.c
export ORIGIN_BIN=$BENCHMARK_DIR/$BENCHMARK_NAME.origin
export REDUCED_BIN=$BENCHMARK_DIR/$BENCHMARK_NAME.reduced
export TIMEOUT="-k 0.8 0.8"
export LOG=$BENCHMARK_DIR/log.txt

source $CHISEL_BENCHMARK_HOME/benchmark/test-base.sh

function clean() {
  rm -f $REDUCED_BIN $LOG file log2
  rm -rf gt-*
  rm -f lists.txt
  return 0
}

function compile() {
  if [[ $1 == "-fsanitize=memory -fsanitize-memory-use-after-dtor" ]]; then
    CFLAGS="-w $1 -lpcre"
  else
    CFLAGS="-w $1 -D __msan_unpoison(s,z) -lpcre"
  fi
  $CC $SRC $CFLAGS -o $REDUCED_BIN >&$LOG || exit 1
  return 0
}

function desired() {
   for file in $(ls arg_inputs/*); do
  timeout $TIMEOUT $REDUCED_BIN < $file >&$LOG
  retvalue=$?
  echo $retvalue
  echo $file
  if [[ $retvalue -gt 2 ]]; then 
	exit 1
  fi	
  $ORIGIN_BIN  < $file >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

   done
  { execute_reduced -n "a" input2; } >&$LOG || exit 1
  execute_origin -n "a" input2 >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { execute_reduced "a" -v -H -r input_dir; } >&$LOG || exit 1
  { execute_origin "a" -v -H -r input_dir; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { execute_reduced "1" -h -r input_dir; } >&$LOG || exit 1
  { execute_origin "1" -h -r input_dir; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { execute_reduced -n "si" input2; } >&$LOG || exit 1
  { execute_origin -n "si" input2; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { execute_reduced "1" -r input_dir -l; } >&$LOG || exit 1
  { execute_origin "1" -r input_dir -l; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { execute_reduced "1" -r input_dir -L; } >&$LOG || exit 1
  { execute_origin "1" -r input_dir -L; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { execute_reduced "randomtext" -r input_dir -c; } >&$LOG || exit 1
  { execute_origin "randomtext" -r input_dir -c; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { execute_reduced -o [r][a][n][d]* input2; } >&$LOG || exit 1
  { execute_origin -o [r][a][n][d]* input2; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { execute_reduced "1" -r input_dir -q; } >&$LOG || exit 1
  { execute_origin "1" -r input_dir -q; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { execute_reduced "1" -r input_dir -s; } >&$LOG || exit 1
  { execute_origin "1" -r input_dir -s; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { execute_reduced -v "a" input2; } >&$LOG || exit 1
  { execute_origin -v "a" input2; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { execute_reduced -i "Si" input2; } >&$LOG || exit 1
  { execute_origin -i "Si" input2; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { execute_reduced -w "Si" input2; } >&$LOG || exit 1
  { execute_origin -w "Si" input2; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { execute_reduced -x "Don't" input2; } >&$LOG || exit 1
  { execute_origin -x "Don't" input2; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { execute_reduced -F "randomtext*" input2; } >&$LOG || exit 1
  { execute_origin -F "randomtext*" input2; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { execute_reduced -E "randomtext*" input2; } >&$LOG || exit 1
  { execute_origin -E "randomtext*" input2; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { execute_reduced "ye " input; } >&$LOG || exit 1
  { execute_origin "ye " input; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { execute_reduced "cold" input; } >&$LOG || exit 1
  { execute_origin "cold" input; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  echo -n "not exist",input > argv
  { timeout $TIMEOUT $REDUCED_BIN < argv; } >&$LOG
  { execute_origin "not exist" input; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { execute_reduced ^D input2; } >&$LOG || exit 1
  { execute_origin ^D input2; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { execute_reduced .$ input2; } >&$LOG || exit 1
  { execute_origin .$ input2; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { execute_reduced \^ input2; } >&$LOG || exit 1
  { execute_origin \^ input2; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { execute_reduced \^$ input2; } >&$LOG || exit 1
  { execute_origin \^$ input2; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { execute_reduced ^[AEIOU] input2; } >&$LOG || exit 1
  { execute_origin ^[AEIOU] input2; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1


  { execute_reduced ^[^AEIOU] input2; } >&$LOG || exit 1
  { execute_origin ^[^AEIOU] input2; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { execute_reduced -E "free[^[:space:]]+" input2; } >&$LOG || exit 1
  { execute_origin -E "free[^[:space:]]+" input2; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1
  
  { execute_reduced -E '\b(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?\.){3}(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)' input; } >&$LOG || exit 1
  { execute_origin -E '\b(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?\.){3}(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)' input; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1
  return 0
}

function desired_disaster() {
  case $1 in
  memory)
    MESSAGE="memory exhausted"
    ;;
  file)
    MESSAGE="write error"
    ;;
  *)
    return 1
    ;;
  esac

  { dia_reduced "a" input2; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { dia_reduced "a" -v -H -r input_dir; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { dia_reduced "1" -h -r input_dir; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { dia_reduced -n "si" input2; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { dia_reduced "1" -r input_dir -l; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { dia_reduced "1" -r input_dir -L; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { dia_reduced "randomtext" -r input_dir -c; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { dia_reduced -o [r][a][n][d]* input2; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { dia_reduced "1" -r input_dir -q; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { dia_reduced "1" -r input_dir -s; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { dia_reduced -v "a" input2; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { dia_reduced -i "Si" input2; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { dia_reduced -w "Si" input2; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { dia_reduced -x "Don't" input2; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { dia_reduced -F "randomtext*" input2; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { dia_reduced -E "randomtext*" input2; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { dia_reduced "ye " input; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { dia_reduced "cold" input; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { dia_reduced "not exist" input; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { dia_reduced ^D input2; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { dia_reduced .$ input2; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { dia_reduced \^ input2; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { dia_reduced \^$ input2; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { dia_reduced ^[AEIOU] input2; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { dia_reduced ^[^AEIOU] input2; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { dia_reduced -E "free[^[:space:]]+" input2; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { dia_reduced -E '\b(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?\.){3}(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)' input; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  return 0
}

function infinite() {
  r=$1
  /bin/grep "Sanitizer" $LOG >&/dev/null && return 0
  if [[ $r -eq 124 ]]; then # timeout
    return 0
  else
    return 1
  fi
}

function outputcheckerror() {
  r="$1"
  if grep -q -E "$r" $LOG; then
    return 1
  fi
  return 0
}

OPT=("-G" "--basic-regexp" "-P" "--perl-regexp" "-e" "-z" "--null-data"
  "-V" "--version" "--help" "-b" "--byte-offset" "--line-buffered"
  "-a" "--text" "-I" "-R" "--dereference-recursive"
  "-T" "--initial-tab" "-Z" "--null" "-U"
  "-binary" "-u" "--unix-byte-offsets")
function undesired() {
  # { dia_reduced; } >&$LOG
  # err=$?
  
  # outputcheckerror "OPTION" && exit 1
  # crash $err && exit 1
  # echo 1
  { dia_reduced notexist; } >&$LOG # infite loop
  infinite $r && exit 1
  { dia_reduced notexist1 notexit2 notexist3; } >&$LOG
  err=$?
  outputcheckerror "No such file or directory" && exit 1
  crash $err && exit 1
  { dia_reduced "weird"; } >&$LOG
  infinite $r && exit 1
  # cheap
  for opt in ${OPT[@]}; do
   echo -n a,$opt,input > argv 
    { timeout 0.2 $REDUCED_BIN < argv; } >&$LOG
    crash $? && exit 1
  done
  # expensive
  echo -n a,-f,input > argv
  { timeout 0.5 $REDUCED_BIN < argv; } >&$LOG
  crash $? && exit 1

  { dia_reduced a -A input; } >&$LOG
  outputcheckerror "input: invalid context length argument" && exit 1
  crash $err && exit 1
  { dia_reduced a -B input; } >&$LOG
  outputcheckerror "input: invalid context length argument" && exit 1
  crash $err && exit 1
  { dia_reduced a -C input; } >&$LOG
  outputcheckerror "input: invalid context length argument" && exit 1
  crash $err && exit 1
  { dia_reduced a -m input; } >&$LOG
  outputcheckerror "invalid max count" && exit 1
  crash $err && exit 1
  { dia_reduced a -d input; } >&$LOG
  outputcheckerror "invalid argument" && exit 1
  crash $err && exit 1
  { dia_reduced a -D input; } >&$LOG
  outputcheckerror "unknown devices method" && exit 1
  crash $err && exit 1

  export srcdir=$BENCHMARK_HOME/tests
  export abs_top_srcdir=$BENCHMARK_HOME
  export PATH_BK=$PATH
  export PATH="$(pwd):$PATH"
  # for t in $(find tests/ -maxdepth 1 -perm -100 -type f); do
  #   { timeout 1 $t; } >&$LOG
  #   crash $? && exit 1
  # done
  export PATH=$PATH_BK
  return 0
}


function execute_origin(){
  echo -n $1,$2,$3,$4,$5 > argv
  { timeout $TIMEOUT $ORIGIN_BIN < argv; } >&log2
}

function execute_reduced(){
  echo -n $1,$2,$3,$4,$5 > argv
  { timeout $TIMEOUT $REDUCED_BIN < argv; } >&$LOG || exit 1
} 
function dia_reduced(){
  echo -n $1,$2,$3,$4,$5 > argv
  { timeout $TIMEOUT $REDUCED_BIN < argv ; } >&$LOG
}
main

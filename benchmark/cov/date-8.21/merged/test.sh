#!/bin/bash

export BENCHMARK_NAME=date-8.21
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
   rm -rf $LOG $REDUCED_BIN temp temp1 temp2 f
  return 0
}

t0='08:17:48'
d0='1997-01-19'
d1="$d0 $t0 +0"
fmt="+%Y-%m-%d %T"
n_seconds=72057594037927935
function desired() {
 
  touch f
  execute_origin  
  dia_reduced 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin --date '02/29/1996 1 year' +%Y-%m-%d  
     execute_reduced --date '02/29/1996 1 year' +%Y-%m-%d 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin --date '1995-1-1' +%U  
     execute_reduced --date '1995-1-1' +%U 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin --date '1995-1-7' +%U  
     execute_reduced --date '1995-1-7' +%U 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin --date '1995-1-8' +%U  
     execute_reduced --date '1995-1-8' +%U 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin --date '1992-1-1' +%U  
     execute_reduced --date '1992-1-1' +%U 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin --date '1992-1-4' +%U  
     execute_reduced --date '1992-1-4' +%U 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin --date '1992-1-5' +%U  
     execute_reduced --date '1992-1-5' +%U 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin --date '1992-1-1' +%V  
     execute_reduced --date '1992-1-1' +%V 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin --date '1992-1-5' +%V  
     execute_reduced --date '1992-1-5' +%V 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin --date '1992-1-6' +%V  
     execute_reduced --date '1992-1-6' +%V 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin --date '1992-1-1' +%W  
     execute_reduced --date '1992-1-1' +%W 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin --date '1992-1-5' +%W  
     execute_reduced --date '1992-1-5' +%W 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin --date '1992-1-6' +%W  
     execute_reduced --date '1992-1-6' +%W 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin --date '1998-1-1 3 years' +%Y  
     execute_reduced --date '1998-1-1 3 years' +%Y 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin -d 'TZ="America/Los_Angeles" 09:00 next Fri'  
     execute_reduced -d 'TZ="America/Los_Angeles" 09:00 next Fri' 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin -d "$d1 now" "+%Y-%m-%d %T"  
     execute_reduced -d "$d1 now" "+%Y-%m-%d %T" 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin -d "$d1 yesterday" "$fmt"  
     execute_reduced -d "$d1 yesterday" "$fmt" 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin -d "$d1 tomorrow" "$fmt"  
     execute_reduced -d "$d1 tomorrow" "$fmt" 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin -d "$d1 6 years ago" "$fmt"  
     execute_reduced -d "$d1 6 years ago" "$fmt" 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin -d "$d1 7 months ago" "$fmt"  
     execute_reduced -d "$d1 7 months ago" "$fmt" 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin -d "$d1 8 weeks ago" "$fmt"  
     execute_reduced -d "$d1 8 weeks ago" "$fmt" 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin --rfc-3339=ns -d'1970-01-01 00:00:00.2234567 UTC +961062237.987654321 sec'  
     execute_reduced --rfc-3339=ns -d'1970-01-01 00:00:00.2234567 UTC +961062237.987654321 sec' 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin -d '2005-03-27 +1 day' '+%Y'  
     execute_reduced -d '2005-03-27 +1 day' '+%Y' 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin -d @-22 +%05s  
     execute_reduced -d @-22 +%05s 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin -d @-22 +%_5s  
     execute_reduced -d @-22 +%_5s 
  #diff -q temp1 $LOG >&/dev/null || exit 1


  echo -n "-d|$n_seconds" > argv
  
  { $ORIGIN_BIN < argv 2>&1 | cut -d ' ' -f 3; } >&temp1
  { timeout 0.2 $REDUCED_BIN < argv; } >&$LOG
  #diff -q <(cat temp1) <(cut -d ' ' -f 3 $LOG) >&/dev/null || exit 1

  execute_origin -d 1999-12-08 +%_3d  
     execute_reduced -d 1999-12-08 +%_3d 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin -d 1999-12-08 +%03d  
     execute_reduced -d 1999-12-08 +%03d 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin -d "1999-12-08 7:30" "+%^c"  
     execute_reduced -d "1999-12-08 7:30" "+%^c" 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin --rfc-3339=ns -d "2038-01-19 03:14:07.999999999"  
     execute_reduced --rfc-3339=ns -d "2038-01-19 03:14:07.999999999" 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin --rfc-3339=sec -d @31536000  
     execute_reduced --rfc-3339=sec -d @31536000 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin --rfc-3339=date -d May-23-2003  
     execute_reduced --rfc-3339=date -d May-23-2003 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin -d '1999-06-01' '+%3004Y'  
     execute_reduced -d '1999-06-01' '+%3004Y' 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin --utc -d '1970-01-01 UTC +961062237 sec' "$fmt"  
     execute_reduced --utc -d '1970-01-01 UTC +961062237 sec' "$fmt" 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin --utc -d '1970-01-01 00:00:00 UTC +961062237 sec' "$fmt"  
     execute_reduced --utc -d '1970-01-01 00:00:00 UTC +961062237 sec' "$fmt" 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin -R -d "$d1"  
     execute_reduced -R -d "$d1" 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin -d 000909 "$fmt"  
     execute_reduced -d 000909 "$fmt" 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin -u -d '1996-11-10 0:00:00 +0' "$fmt"  
     execute_reduced -u -d '1996-11-10 0:00:00 +0' "$fmt" 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin -u -d '1996-11-10 0:00:00 +0' "$fmt"  
     execute_reduced -u -d '1996-11-10 0:00:00 +0' "$fmt" 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin -d "$d1 4 seconds ago" "$fmt"  
     execute_reduced -d "$d1 4 seconds ago" "$fmt" 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin -d "$d1 4 seconds ago" "$fmt"  
     execute_reduced -d "$d1 4 seconds ago" "$fmt" 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin -d '20050101  1 day' +%F  
     execute_reduced -d '20050101  1 day' +%F 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin -d '20050101 +1 day' +%F  
     execute_reduced -d '20050101 +1 day' +%F 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin -d "$d1 next second" '+%Y-%m-%d %T'  
     execute_reduced -d "$d1 next second" '+%Y-%m-%d %T' 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin -d "$d1 next minute" '+%Y-%m-%d %T'  
     execute_reduced -d "$d1 next minute" '+%Y-%m-%d %T' 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin -d "$d1 next hour" '+%Y-%m-%d %T'  
     execute_reduced -d "$d1 next hour" '+%Y-%m-%d %T' 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin -d "$d1 next day" '+%Y-%m-%d %T'  
     execute_reduced -d "$d1 next day" '+%Y-%m-%d %T' 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin -d "$d1 next week" '+%Y-%m-%d %T'  
     execute_reduced -d "$d1 next week" '+%Y-%m-%d %T' 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin -d "$d1 next month" '+%Y-%m-%d %T'  
     execute_reduced -d "$d1 next month" '+%Y-%m-%d %T' 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin -d "$d1 next year" '+%Y-%m-%d %T'  
     execute_reduced -d "$d1 next year" '+%Y-%m-%d %T' 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin -u -d '08/01/97 6:00' '+%D,%H:%M'  
     execute_reduced -u -d '08/01/97 6:00' '+%D,%H:%M' 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin -u -d '08/01/97 6:00 UTC +4 hours' '+%D,%H:%M'  
     execute_reduced -u -d '08/01/97 6:00 UTC +4 hours' '+%D,%H:%M' 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin -u --file=f '+%Y-%m-%d %T'  
     execute_reduced -u --file=f '+%Y-%m-%d %T' 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin -u --file=f '+%Y-%m-%d %T'  
     execute_reduced -u --file=f '+%Y-%m-%d %T' 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin -d '1970-01-01 00:00:01' +%s  
     execute_reduced -d '1970-01-01 00:00:01' +%s 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin -d '1970-01-01 00:00:01 UTC +2 hours' +%s  
     execute_reduced -d '1970-01-01 00:00:01 UTC +2 hours' +%s 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin -d 2000-01-01 +%s  
     execute_reduced -d 2000-01-01 +%s 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin -d '1970-01-01 UTC 946684800 sec' +'%Y-%m-%d %T %z'  
     execute_reduced -d '1970-01-01 UTC 946684800 sec' +'%Y-%m-%d %T %z' 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin -d "$d0 $t0 this minute" "$fmt"  
     execute_reduced -d "$d0 $t0 this minute" "$fmt" 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin -d "$d0 $t0 this hour" "$fmt"  
     execute_reduced -d "$d0 $t0 this hour" "$fmt" 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin -d "$d0 $t0 this week" "$fmt"  
     execute_reduced -d "$d0 $t0 this week" "$fmt" 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin -d "$d0 $t0 this month" "$fmt"  
     execute_reduced -d "$d0 $t0 this month" "$fmt" 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin -d "$d0 $t0 this year" "$fmt"  
     execute_reduced -d "$d0 $t0 this year" "$fmt" 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin -d "$d1 1 day ago" "$fmt"  
     execute_reduced -d "$d1 1 day ago" "$fmt" 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin -d "$d1 2 hours ago" "$fmt"  
     execute_reduced -d "$d1 2 hours ago" "$fmt" 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin -d "$d1 3 minutes ago" "$fmt"  
     execute_reduced -d "$d1 3 minutes ago" "$fmt" 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin -f datefile  
     execute_reduced -f datefile 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  execute_origin -r datefile  
     execute_reduced -r datefile 
  #diff -q temp1 $LOG >&/dev/null || exit 1

  # for file in $(ls re_inputs/*); do
  #   timeout 0.2 $REDUCED_BIN < $file >&$LOG
  #   retvalue=$?

  # if [[ $retvalue -gt 2 ]]; then 
	#   exit 1
  # fi	
  # $ORIGIN_BIN  < $file >&temp1
  #diff -q temp1 $LOG >&/dev/null || exit 1

   #done


  return 0
}

function desired_disaster_mem() {
  touch f

     dia_reduced  --utc -d '1970-01-01 UTC +961062237 sec' "$fmt" 
     
  grep -q -E "$1" $LOG || exit 1

     dia_reduced  --utc -d '1970-01-01 00:00:00 UTC +961062237 sec' "$fmt" 
  grep -q -E "$1" $LOG || exit 1

     dia_reduced  -u -d '1996-11-10 0:00:00 +0' "$fmt" 
  grep -q -E "$1" $LOG || exit 1

     dia_reduced  -u -d '1996-11-10 0:00:00 +0' "$fmt" 
  grep -q -E "$1" $LOG || exit 1

     dia_reduced  -u -d '08/01/97 6:00' '+%D,%H:%M' 
  grep -q -E "$1" $LOG || exit 1

     dia_reduced  -u -d '08/01/97 6:00 UTC +4 hours' '+%D,%H:%M' 
  grep -q -E "$1" $LOG || exit 1

     dia_reduced  -u --file=f '+%Y-%m-%d %T' 
  grep -q -E "$1" $LOG || exit 1

  return 0
}

function desired_disaster_file() {
  touch f
    dia_reduced  
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  --date '02/29/1996 1 year' +%Y-%m-%d 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  --date '1995-1-1' +%U 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  --date '1995-1-7' +%U 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  --date '1995-1-8' +%U 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  --date '1992-1-1' +%U 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  --date '1992-1-4' +%U 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  --date '1992-1-5' +%U 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  --date '1992-1-1' +%V 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  --date '1992-1-5' +%V 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  --date '1992-1-6' +%V 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  --date '1992-1-1' +%W 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  --date '1992-1-5' +%W 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  --date '1992-1-6' +%W 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  --date '1998-1-1 3 years' +%Y 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  -d 'TZ="America/Los_Angeles" 09:00 next Fri' 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  -d "$d1 now" "+%Y-%m-%d %T" 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  -d "$d1 yesterday" "$fmt" 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  -d "$d1 tomorrow" "$fmt" 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  -d "$d1 6 years ago" "$fmt" 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  -d "$d1 7 months ago" "$fmt" 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  -d "$d1 8 weeks ago" "$fmt" 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  --rfc-3339=ns -d'1970-01-01 00:00:00.2234567 UTC +961062237.987654321 sec' 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  -d '2005-03-27 +1 day' '+%Y' 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  -d @-22 +%05s 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  -d @-22 +%_5s 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  -d "$n_seconds" 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  -d 1999-12-08 +%_3d 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  -d 1999-12-08 +%03d 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  -d "1999-12-08 7:30" "+%^c" 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  --rfc-3339=ns -d "2038-01-19 03:14:07.999999999" 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  --rfc-3339=sec -d @31536000 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  --rfc-3339=date -d May-23-2003 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  -d '1999-06-01' '+%3004Y' 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  --utc -d '1970-01-01 UTC +961062237 sec' "$fmt" 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  --utc -d '1970-01-01 00:00:00 UTC +961062237 sec' "$fmt" 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  -R -d "$d1" 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  -d 000909 "$fmt" 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  -u -d '1996-11-10 0:00:00 +0' "$fmt" 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  -u -d '1996-11-10 0:00:00 +0' "$fmt" 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  -d "$d1 4 seconds ago" "$fmt" 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  -d "$d1 4 seconds ago" "$fmt" 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  -d '20050101  1 day' +%F 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  -d '20050101 +1 day' +%F 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  -d "$d1 next second" '+%Y-%m-%d %T' 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  -d "$d1 next minute" '+%Y-%m-%d %T' 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  -d "$d1 next hour" '+%Y-%m-%d %T' 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  -d "$d1 next day" '+%Y-%m-%d %T' 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  -d "$d1 next week" '+%Y-%m-%d %T' 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  -d "$d1 next month" '+%Y-%m-%d %T' 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  -d "$d1 next year" '+%Y-%m-%d %T' 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  -u -d '08/01/97 6:00' '+%D,%H:%M' 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  -u -d '08/01/97 6:00 UTC +4 hours' '+%D,%H:%M' 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  -u --file=f '+%Y-%m-%d %T' 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  -u --file=f '+%Y-%m-%d %T' 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  -d '1970-01-01 00:00:01' +%s 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  -d '1970-01-01 00:00:01 UTC +2 hours' +%s 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  -d 2000-01-01 +%s 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  -d '1970-01-01 UTC 946684800 sec' +'%Y-%m-%d %T %z' 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  -d "$d0 $t0 this minute" "$fmt" 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  -d "$d0 $t0 this hour" "$fmt" 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  -d "$d0 $t0 this week" "$fmt" 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  -d "$d0 $t0 this month" "$fmt" 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  -d "$d0 $t0 this year" "$fmt" 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  -d "$d1 1 day ago" "$fmt" 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  -d "$d1 2 hours ago" "$fmt" 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  -d "$d1 3 minutes ago" "$fmt" 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  -f datefile 
  grep -q -E "$1" $LOG || exit 1

    dia_reduced  -r datefile 
  grep -q -E "$1" $LOG || exit 1

  return 0
}

function undesired() {
    dia_reduced  -I -d '2006-04-23 21 days ago' 
  crash $? && exit 1
    dia_reduced  --iso -d May-23-2003 
  crash $? && exit 1
    dia_reduced  --iso=sec -d @31536000 
  crash $? && exit 1
    dia_reduced  --iso=ns -d "1969-12-31 13:00:00.000000.2-1100" 
  crash $? && exit 1
    dia_reduced  --iso=ns -d "2038-01-19 03:14:07.999999999" 
  crash $? && exit 1
    dia_reduced  +%:::z 
  crash $? && exit 1
    dia_reduced  +%:::z 
  crash $? && exit 1
    dia_reduced  +%::z 
  crash $? && exit 1
    dia_reduced  +%:::z 
  crash $? && exit 1
    dia_reduced  +%:z 
  crash $? && exit 1
    dia_reduced  +%8:z 
  crash $? && exit 1
    dia_reduced  +%:8z 
  crash $? && exit 1
    dia_reduced  --iso=ns -d'1970-01-01 00:00:00.2234567 UTC +961062237.987654321 sec' 
  crash $? && exit 1
  return 0
}

function desired_disaster() {
  # case $1 in
  # memory)
  #   MESSAGE="memory exhausted"
  #   desired_disaster_mem "${messages[$i]}" || exit 1
  #   ;;
  # file)
  #   MESSAGE="write error"
  #   desired_disaster_file "${messages[$i]}" || exit 1
  #   ;;
  # *)
  #   return 1
  #   ;;
  # esac
  return 0
}



function execute_origin(){
  echo -n "$1|$2|$3|$4|$5" > argv
  
  { timeout 0.2 $ORIGIN_BIN < argv; } >&temp1
  llvm-profdata merge -o date-8.21.origin.profdata default.profraw
  llvm-cov export -format=lcov date-8.21.origin -instr-profile=date-8.21.origin.profdata date-8.21.c.origin.c >date-8.21.origin.lcov
  ./lcov2gcov date-8.21.origin.lcov >date-8.21.origin.real.gcov
  ./gcovanalyzer date-8.21.origin.real.gcov getbcov >date-8.21.origin.bin.gcov
  ./gcovbasedcoveragemerger / >date-8.21.origin.bin.merged.gcov

}

function execute_reduced(){
  # echo -n "$1|$2|$3|$4|$5" > argv
  let "cnt++"
  { timeout 0.2 $ORIGIN_BIN < argv; } >&temp1
   llvm-profdata merge -o date-8.21.origin.profdata default.profraw
  llvm-cov export -format=lcov date-8.21.origin -instr-profile=date-8.21.origin.profdata date-8.21.c.origin.c >date-8.21.origin.lcov
  ./lcov2gcov date-8.21.origin.lcov >date-8.21.origin.real.gcov
  ./gcovanalyzer date-8.21.origin.real.gcov getbcov > BIN_GCOV_DIR/date-8.21.origin.$cnt.bin.gcov
  
  return 0
} 
function dia_reduced(){
  # echo -n "$1|$2|$3|$4|$5" > argv
  let "cnt++"
  { timeout 0.2 $ORIGIN_BIN < argv; } >&temp1
   llvm-profdata merge -o date-8.21.origin.profdata default.profraw
  llvm-cov export -format=lcov date-8.21.origin -instr-profile=date-8.21.origin.profdata date-8.21.c.origin.c >date-8.21.origin.lcov
  ./lcov2gcov date-8.21.origin.lcov >date-8.21.origin.real.gcov
  ./gcovanalyzer date-8.21.origin.real.gcov getbcov > BIN_GCOV_DIR/date-8.21.origin.$cnt.bin.gcov
  
  return 0
}

main

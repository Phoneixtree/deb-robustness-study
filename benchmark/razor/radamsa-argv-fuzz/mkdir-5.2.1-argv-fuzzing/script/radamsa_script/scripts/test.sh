#!/bin/bash
# $1: option
set +o posix
cnt=0
export TIMEOUT="-k 0.1 0.1"
export LOG=result/log.txt
export BENCHMARK_NAME=uniq-8.16
export BENCHMARK_DIR=$bins
export SRC=$home_folder/original_files_and_refs/$name.c


#!/bin/bash


function clean() {
  return 0 
}


function run() {
  rm -rf d1
  { timeout $TIMEOUT $REDUCED_BIN $1 $2; } 
  echo $? >> result/log_reduced 
  temp1=$(ls -ald $2 2>/dev/null | cut -d ' ' -f 1,2,3,4)
  rm -rf d1 >&/dev/null
  /bin/mkdir $1 $2
  temp2=$(ls -ald $2 2>/dev/null | cut -d ' ' -f 1,2,3,4)
  rm -rf $2 >&/dev/null
  if [[ $temp1 == $temp2 ]]; then
    echo '0' >> result/log_if_behave_properly
  else
    echo '1' >> result/log_if_behave_properly
  fi
}

function run_error() {
  rm -rf d1 >&/dev/null
  { timeout $TIMEOUT $REDUCED_BIN $1 $2; } >&temp1
  echo $? >> result/log_reduced 
  rm -rf d1 >&/dev/null
  { $ORIGIN_BIN $1 $2; } >&temp2
  temp1=$(head -n 1 temp1 | cut -d ' ' -f 2,3)
  temp2=$(head -n 1 temp2 | cut -d ' ' -f 2,3)
  if [[ $temp1 == $temp2 ]]; then
    echo '0' >> result/log_if_behave_properly
  else
    echo '1' >> result/log_if_behave_properly
  fi
}

# Default Options: -m, -p
function desired() {
  cnt=0
  while(( $cnt<=499 )) 
  do
      arg1=`echo "d1" | radamsa --seed ${cnt}`
      run "$arg1"
       
      let "cnt++"
  done
  ./result_analysis.sh ""

  cnt=0
  while(( $cnt<=499 )) 
  do
      arg1=`echo "d1/d2" | radamsa --seed ${cnt}`
      run_error $arg1
       
      let "cnt++"
  done
  ./result_analysis.sh

  cnt=0
  while(( $cnt<=499 )) 
  do
      arg1=`echo "-m 123124" | radamsa --seed ${cnt}`
      arg2=`echo "d1/d2" | radamsa --seed ${cnt}`
      run_error "$arg1" "$arg2"
       
      let "cnt++"
  done
  ./result_analysis.sh

  cnt=0
  while(( $cnt<=499 )) 
  do
      arg1=`echo "-m" | radamsa --seed ${cnt}`
      arg2=`echo "d1/d2" | radamsa --seed ${cnt}`
      run_error "$arg1" "$arg2"
       
      let "cnt++"
  done
  ./result_analysis.sh

  cnt=0
  while(( $cnt<=499 )) 
  do
      arg1=`echo "-m 400" | radamsa --seed ${cnt}`
      arg2=`echo "d1" | radamsa --seed ${cnt}`
      run "$arg1" "$arg2"
       
      let "cnt++"
  done
  ./result_analysis.sh

  cnt=0
  while(( $cnt<=499 )) 
  do
      arg1=`echo "-m 555" | radamsa --seed ${cnt}`
      arg2=`echo "d1" | radamsa --seed ${cnt}`
      run "$arg1" "$arg2"
       
      let "cnt++"
  done
  ./result_analysis.sh

  cnt=0
  while(( $cnt<=499 )) 
  do
      arg1=`echo "-m 644" | radamsa --seed ${cnt}`
      arg2=`echo "d1" | radamsa --seed ${cnt}`
      run "$arg1" "$arg2"
       
      let "cnt++"
  done
  ./result_analysis.sh

  cnt=0
  while(( $cnt<=499 )) 
  do
      arg1=`echo "-m 610" | radamsa --seed ${cnt}`
      arg2=`echo "d1" | radamsa --seed ${cnt}`
      run "$arg1" "$arg2"
       
      let "cnt++"
  done
  ./result_analysis.sh

  cnt=0
  while(( $cnt<=499 )) 
  do
      arg1=`echo "-m 777" | radamsa --seed ${cnt}`
      arg2=`echo "d1" | radamsa --seed ${cnt}`
      run "$arg1" "$arg2"
       
      let "cnt++"
  done
  ./result_analysis.sh

  cnt=0
  while(( $cnt<=499 )) 
  do
      arg1=`echo "-p" | radamsa --seed ${cnt}`
      arg2=`echo "d1/d2" | radamsa --seed ${cnt}`
      run "$arg1" "$arg2"
       
      let "cnt++"
  done
  ./result_analysis.sh

  rm -rf d1

  cnt=0
  while(( $cnt<=499 )) 
  do
      arg1=`echo "-p" | radamsa --seed ${cnt}`
      arg2=`echo "d1/d2/d3/d4" | radamsa --seed ${cnt}`
      run "$arg1" "$arg2"
      let "cnt++"
  done
  ./result_analysis.sh

  rm -rf d1
  /bin/mkdir d1
  
  cnt=0
  while(( $cnt<=499 )) 
  do
      arg1=`echo "-p" | radamsa --seed ${cnt}`
      arg2=`echo "d1" | radamsa --seed ${cnt}`
      run "$arg1" "$arg2"
      let "cnt++"
  done
  ./result_analysis.sh

  rm -rf d1

  /bin/mkdir d1
   cnt=0
  while(( $cnt<=499 )) 
  do
      arg1=`echo "-p" | radamsa --seed ${cnt}`
      arg2=`echo "d1/d2" | radamsa --seed ${cnt}`
      run "$arg1" "$arg2"
      let "cnt++"
  done
  ./result_analysis.sh
  rm -rf d1

}




#  return 1 >> result/log_if_behave_properly == false false || echo '000' -> 000

function main() {
  rm -r result
  mkdir result
 
  clean
  desired
  clean
  
}
main





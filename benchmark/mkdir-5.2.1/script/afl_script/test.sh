#!/bin/bash
cd ../../
. setenv
cd script/afl_script/
para=(d1 "NOT IN USE d1/d2" "NOT IN USE-m 123124 d1/d2" "NOT IN USE -m d1/d2" "-m 400 d1" "-m 555 d1" "-m 644 d1" "-m 610 d1" "-m 777 d1" "-p d1/d2" "-p d1/d2/d3/d4" "-p d1" "-p d1/d2")
cnt=0
limit=13
limit_min=-1
for paras in ${para[@]}; do
    if [ $cnt -le $limit ]
    then
        echo  ${para[${cnt}]} == ${cnt}
        let "cnt++"
    fi
done
echo please enter the number that you want to run afl with "(0-12)"
while :
do
   
    read num
    if [ $num -lt $limit ] && [ $num -gt $limit_min ]
    then
        echo option is
        cat ${afl_seed}${num}/para
        rm -r result_${num}
        mkdir result_${num}
        mkdir temp${num}
        cd temp${num}
        afl-fuzz -i ${afl_seed}${num} -o ../result_${num} ${bins}/afl_bin
        cd ..
        rm -rf temp${cnt}
        break
    else
        echo please enter a valid number
    fi
done

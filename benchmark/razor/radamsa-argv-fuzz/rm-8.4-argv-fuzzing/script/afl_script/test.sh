#!/bin/bash
cd ../../
. setenv
cd script/afl_script/
para=("file" "-i file" "-f file" "-r -f dir" "-r dir")
cnt=0
limit=5
limit_min=-1
for paras in ${para[@]}; do
    if [ $cnt -lt $limit ]
    then
        cd ${afl_seed}
        mkdir $cnt
        cd $cnt
        echo ${para[${cnt}]} > test
        echo  ${para[${cnt}]} == ${cnt}
        let "cnt++"
    fi
done
echo please enter the number that you want to run afl with "(0-4)"
while :
do
    read num
    if [ $num -lt $limit ] && [ $num -gt $limit_min ]
    then
        echo option is
        cat ${afl_seed}${num}/test
        mkdir temp${num}
        cd temp${num}
        mkdir dir
        echo 1234 > file
        afl-fuzz -i ${afl_seed}${num} -o ${afl_result}/result_${num} ${bins}/afl_bin
        cd ..
        rm -rf temp${cnt}
        break
    else
        echo please enter a valid number
    fi
done

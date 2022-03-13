#!/bin/bash
for ((option=0;option<5;option++))
do
    count=0
    for file in $(ls input${option}_fuzzed/test_fuzzed_*);
    do
        mv ${file} input${option}_fuzzed/input${option}_${count}
        let count++
    done
done

 
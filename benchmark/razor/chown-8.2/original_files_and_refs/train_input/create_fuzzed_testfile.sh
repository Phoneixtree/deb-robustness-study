#!/bin/bash
cnt=0
./modify_fuzzed_testfile.sh
mkdir input1_fuzzed
mkdir input11_fuzzed
mkdir input2_fuzzed
mkdir input22_fuzzed
mkdir input3_fuzzed
mkdir input33_fuzzed
mkdir input4_fuzzed
mkdir input44_fuzzed
mkdir input5_fuzzed
mkdir input55_fuzzed
mkdir input6_fuzzed
mkdir input66_fuzzed
mkdir input7_fuzzed
mkdir input77_fuzzed
while(( $cnt<500 )) 
do
  radamsa --seed ${cnt} train_input1 > input1_fuzzed/input1_${cnt}
  radamsa --seed ${cnt} train_input11 > input11_fuzzed/input11_${cnt}
  radamsa --seed ${cnt} train_input2 > input2_fuzzed/input2_${cnt}
  radamsa --seed ${cnt} train_input22 > input22_fuzzed/input22_${cnt}
  radamsa --seed ${cnt} train_input3 > input3_fuzzed/input3_${cnt}
  radamsa --seed ${cnt} train_input33 > input33_fuzzed/input33_${cnt}
  radamsa --seed ${cnt} train_input4 > input4_fuzzed/input4_${cnt}
  radamsa --seed ${cnt} train_input44 > input4_fuzzed/input44_${cnt}
  radamsa --seed ${cnt} train_input5 > input5_fuzzed/input5_${cnt}
  radamsa --seed ${cnt} train_input55 > input55_fuzzed/input55_${cnt}
  radamsa --seed ${cnt} train_input6 > input6_fuzzed/input6_${cnt}
  radamsa --seed ${cnt} train_input66 > input66_fuzzed/input66_${cnt}
  radamsa --seed ${cnt} train_input7 > input7_fuzzed/input7_${cnt}
  radamsa --seed ${cnt} train_input77 > input77_fuzzed/input77_${cnt}
  let "cnt++"
done

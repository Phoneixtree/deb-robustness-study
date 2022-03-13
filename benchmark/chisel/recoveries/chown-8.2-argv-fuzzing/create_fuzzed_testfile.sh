#!/bin/bash
# cd ../..
# . setenv
cnt=0
./modify_fuzzed_testfile.sh
mkdir ${rad_files4chown}/input1_fuzzed
mkdir ${rad_files4chown}/input11_fuzzed
mkdir ${rad_files4chown}/input2_fuzzed
mkdir ${rad_files4chown}/input22_fuzzed
mkdir ${rad_files4chown}/input3_fuzzed
mkdir ${rad_files4chown}/input33_fuzzed
mkdir ${rad_files4chown}/input4_fuzzed
mkdir ${rad_files4chown}/input44_fuzzed
mkdir ${rad_files4chown}/input5_fuzzed
mkdir ${rad_files4chown}/input55_fuzzed
mkdir ${rad_files4chown}/input6_fuzzed
mkdir ${rad_files4chown}/input66_fuzzed
mkdir ${rad_files4chown}/input7_fuzzed
mkdir ${rad_files4chown}/input77_fuzzed
while(( $cnt<500 )) 
do
  radamsa --seed ${cnt} train_input1 > ${rad_files4chown}/input1_fuzzed/input1_${cnt}
  radamsa --seed ${cnt} train_input11 > ${rad_files4chown}/input11_fuzzed/input11_${cnt}
  radamsa --seed ${cnt} train_input2 > ${rad_files4chown}/input2_fuzzed/input2_${cnt}
  radamsa --seed ${cnt} train_input22 > ${rad_files4chown}/input22_fuzzed/input22_${cnt}
  radamsa --seed ${cnt} train_input3 > ${rad_files4chown}/input3_fuzzed/input3_${cnt}
  radamsa --seed ${cnt} train_input33 > ${rad_files4chown}/input33_fuzzed/input33_${cnt}
  radamsa --seed ${cnt} train_input4 > ${rad_files4chown}/input4_fuzzed/input4_${cnt}
  radamsa --seed ${cnt} train_input44 > ${rad_files4chown}/input44_fuzzed/input44_${cnt}
  radamsa --seed ${cnt} train_input5 > ${rad_files4chown}/input5_fuzzed/input5_${cnt}
  radamsa --seed ${cnt} train_input55 > ${rad_files4chown}/input55_fuzzed/input55_${cnt}
  radamsa --seed ${cnt} train_input6 > ${rad_files4chown}/input6_fuzzed/input6_${cnt}
  radamsa --seed ${cnt} train_input66 > ${rad_files4chown}/input66_fuzzed/input66_${cnt}
  radamsa --seed ${cnt} train_input7 > ${rad_files4chown}/input7_fuzzed/input7_${cnt}
  radamsa --seed ${cnt} train_input77 > ${rad_files4chown}/input77_fuzzed/input77_${cnt}
  let "cnt++"
done


rm train_input1
rm train_input11
rm train_input2
rm train_input22
rm train_input3
rm train_input33
rm train_input4
rm train_input44
rm train_input5
rm train_input55
rm train_input6
rm train_input66
rm train_input7
rm train_input77

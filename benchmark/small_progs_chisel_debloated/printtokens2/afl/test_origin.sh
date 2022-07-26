#!/bin/bash
# afl测试reduced程序
# afl-fuzz  -m 100 -i afl_seed/input_$1 -o afl_result/reduced/result_$1 ./bin/afl-reduced.out 

# afl测试origin程序
afl-fuzz -d  -m 100 -i afl_seed/input_$1 -o afl_result/origin/result_$1 ./bin/afl-origin.out 
#!/bin/bash
# afl测试reduced程序
afl-fuzz -d  -m 100 -i afl_seed/input_file_$1 -o afl_result/reduced/result_$1 ./bin/afl-reduced.out @@ $2 $3 $4

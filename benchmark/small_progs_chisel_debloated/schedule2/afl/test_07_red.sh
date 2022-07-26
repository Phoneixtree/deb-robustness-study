#!/bin/bash
# afl测试reduced程序
$INDIR = ../input.origin
afl-fuzz -d  -m 100 -i afl_seed/input_7 -o afl_result/reduced/result_7 ./bin/afl-reduced.out 6 9 8
# '@**?' 'b@t'
# afl测试origin程序
# afl-fuzz -d  -m 100 -i afl_seed/input_0 -o afl_result/origin/result_0 ./bin/afl-origin.out '[^9-B][^]@[**' 'a'
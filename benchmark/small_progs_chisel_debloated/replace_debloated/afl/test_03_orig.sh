#!/bin/bash
# afl测试reduced程序
#afl-fuzz -d  -m 100 -i afl_seed/input_0 -o afl_result/reduced/result_0 ./bin/afl-reduced.out '[^9-B][^]@[**' 'a'
# '@h' 'w0Yj|`l`AYgv{M<#KAouk'
# '@**?' 'b@t'
# afl测试origin程序
afl-fuzz -d  -m 100 -i afl_seed/input_2 -o afl_result/origin/result_2 ./bin/afl-origin.out '@**?' 'b@t'
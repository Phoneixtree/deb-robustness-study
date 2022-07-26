#!/bin/bash
# afl测试reduced程序
$INDIR = ../input.origin
afl-fuzz -d  -m 100 -i afl_seed/input_4 -o afl_result/reduced/result_4 ./bin/afl-reduced.out 3  10  1
# '@h' 'w0Yj|`l`AYgv{M<#KAouk'
# '@**?' 'b@t'
# afl测试origin程序
# afl-fuzz -d  -m 100 -i afl_seed/input_0 -o afl_result/origin/result_0 ./bin/afl-origin.out '[^9-B][^]@[**' 'a'
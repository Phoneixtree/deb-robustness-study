#!/bin/bash
afl-fuzz -d  -m 100 -i input/afl_seed/input_$1 -o result/afl_result/result_$1 ./afl-recovered.out 


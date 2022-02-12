#!/bin/bash

afl-fuzz -d  -m 100 -i ../fuzzed_input/afl_seed/input_$1 -o ../script/afl_script/new_script_input/result_$1 ./afl_bin


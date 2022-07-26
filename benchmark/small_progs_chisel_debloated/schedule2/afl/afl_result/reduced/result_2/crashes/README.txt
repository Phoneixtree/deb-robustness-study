Command line used to find this crash:

afl-fuzz -d -m 100 -i afl_seed/input_2 -o afl_result/reduced/result_2 ./bin/afl-reduced.out 9 4 5

If you can't reproduce a bug outside of afl-fuzz, be sure to set the same
memory limit. The limit used for this fuzzing session was 100 MB.

Need a tool to minimize test cases before investigating the crashes or sending
them to a vendor? Check out the afl-tmin that comes with the fuzzer!

Found any cool bugs in open-source tools using afl-fuzz? If yes, please drop
an mail at <afl-users@googlegroups.com> once the issues are fixed

  https://github.com/vanhauser-thc/AFLplusplus


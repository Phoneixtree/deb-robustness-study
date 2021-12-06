Command line used to find this crash:

afl-fuzz -i /home/cytmo/Documents/git/deb-robustness-study/benchmark/rm-8.4/fuzzed_input/afl_seed/1 -o /home/cytmo/Documents/git/deb-robustness-study/benchmark/rm-8.4/afl_result/result_1 /home/cytmo/Documents/git/deb-robustness-study/benchmark/rm-8.4/original_files_and_refs/afl_bin

If you can't reproduce a bug outside of afl-fuzz, be sure to set the same
memory limit. The limit used for this fuzzing session was 50.0 MB.

Need a tool to minimize test cases before investigating the crashes or sending
them to a vendor? Check out the afl-tmin that comes with the fuzzer!

Found any cool bugs in open-source tools using afl-fuzz? If yes, please drop
an mail at <afl-users@googlegroups.com> once the issues are fixed

  https://github.com/vanhauser-thc/AFLplusplus


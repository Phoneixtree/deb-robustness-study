Command line used to find this crash:

afl-fuzz -d -m 100 -i /home/dell/桌面/Isabel/date-8.21_para_fuzzing/input/afl_seed/3 -o /home/dell/桌面/Isabel/date-8.21_para_fuzzing/result/afl_reduced_result/result_3 /home/dell/桌面/Isabel/date-8.21_para_fuzzing/bins/afl_reduced.out

If you can't reproduce a bug outside of afl-fuzz, be sure to set the same
memory limit. The limit used for this fuzzing session was 100 MB.

Need a tool to minimize test cases before investigating the crashes or sending
them to a vendor? Check out the afl-tmin that comes with the fuzzer!

Found any cool bugs in open-source tools using afl-fuzz? If yes, please drop
me a mail at <lcamtuf@coredump.cx> once the issues are fixed - I'd love to
add your finds to the gallery at:

  http://lcamtuf.coredump.cx/afl/

Thanks :-)

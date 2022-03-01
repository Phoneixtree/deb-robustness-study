[0;36mafl-fuzz++2.59d[0m based on afl by Michal Zalewski and a big online community
[1;92m[+] [0mafl++ is maintained by Marc "van Hauser" Heuse, Heiko "hexcoder" Eissfeldt and Andrea Fioraldi[0m
[1;92m[+] [0mafl++ is open source, get it at https://github.com/vanhauser-thc/AFLplusplus[0m
[1;92m[+] [0mPower schedules from github.com/mboehme/aflfast[0m
[1;92m[+] [0mPython Mutator and llvm_mode whitelisting from github.com/choller/afl[0m
[1;92m[+] [0mafl-tmin fork server patch from github.com/nccgroup/TriforceAFL[0m
[1;92m[+] [0mMOpt Mutator from github.com/puppet-meteor/MOpt-AFL[0m
[1;94m[*] [0mGetting to work...[0m
[1;92m[+] [0mUsing exploration-based constant power schedule (EXPLORE)[0m
[1;92m[+] [0mLooks like we're not running on a tty, so I'll be a bit less verbose.[0m
[1;92m[+] [0mYou have 8 CPU cores and 1 runnable tasks (utilization: 12%).[0m
[1;92m[+] [0mTry parallel jobs - see /usr/share/doc/afl++-doc/parallel_fuzzing.txt.[0m
[1;94m[*] [0mChecking CPU core loadout...[0m
[1;92m[+] [0mFound a free CPU core, binding to #0.[0m
[1;94m[*] [0mChecking core_pattern...[0m
[1;93m[!] [1;97mWARNING: [0mCould not check CPU scaling governor[0m
[1;94m[*] [0mSetting up output directories...[0m
[1;92m[+] [0mOutput directory exists but deemed OK to reuse.[0m
[1;94m[*] [0mDeleting old session data...[0m
[1;92m[+] [0mOutput dir cleanup successful.[0m
[1;94m[*] [0mScanning '/home/cytmo/Documents/deb-robustness-study/benchmark/cov/gzip-1.2.4/fuzzed_input/afl_seed//input_1_option_d'...[0m
[1;92m[+] [0mNo auto-generated dictionary tokens to reuse.[0m
[1;94m[*] [0mCreating hard links for all input files...[0m
[1;94m[*] [0mValidating target binary...[0m
[1;94m[*] [0mAttempting dry run with 'id:000000,time:0,orig:sample1.gz'...[0m

[1;91m[-] [0mOops, the program crashed with one of the test cases provided. There are
    several possible explanations:

    - The test case causes known crashes under normal working conditions. If
      so, please remove it. The fuzzer should be seeded with interesting
      inputs - but not ones that cause an outright crash.

    - The current memory limit (50.0 MB) is too low for this program, causing
      it to die due to OOM when parsing valid files. To fix this, try
      bumping it up with the -m setting in the command line. If in doubt,
      try something along the lines of:

      ( ulimit -Sd $[49 << 10]; /path/to/binary [...] <testcase )

      Tip: you can use http://jwilk.net/software/recidivm to quickly
      estimate the required amount of virtual memory for the binary. Also,
      if you are using ASAN, see /usr/share/doc/afl++-doc/notes_for_asan.txt.

    - Least likely, there is a horrible bug in the fuzzer. If other options
      fail, poke <afl-users@googlegroups.com> for troubleshooting tips.
)B[?25h[0m[1;91m
[-] PROGRAM ABORT : [0mTest case 'id:000000,time:0,orig:sample1.gz' results in a crash[1;91m
         Location : [0mperform_dry_run(), src/afl-fuzz-init.c:603


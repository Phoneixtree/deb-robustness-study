# Debloating Robustness Study

Please run `. setenv` first and then u can run the test scripts in each sub dirctionaries

# PLEASE PAY ATTENTION

Some of afl-fuzz process(mkdir&tar) will generate lots of trash files or dirs in the fuzz dir. 

## Seven small programs from SIR benchmark

We have 7 small SIR programs: `printtokens`, `printtokens2`, `replace`, `schedule`, `schedule2`, `tcas`, `totinfo`. Each of these programs has less than 25 functions and is located under `benchmark`.

In each program's directory, we have three sub-directories named `src`, `testscript`, `input.origin`.
* `src` contains program's source code. 
  * `src/origin/PROG.c` is the original code (PROG is program's name).
  * `src/reduced/n10train_chiselnosan/PROG.c` is debloated code produced by Chisel.
  * `src/reduced/n10train_cov/PROG.c` is debloated code produced by a coverage-based approach.
 
* `testscript` contains user-provided inputs
  * `testscript/n10train` contains 10 inputs based on which debloating is performed
  
* `input.origin` contains the files used in the input script
  * `input.origin/n10train` contains input files used for scripts in `testscript/n10train`

A test script (e.g., `benchmark/printtokens/testscript/n10train/0`) usually requires four inputs for its execution.
* `BIN` is the program binary
* `OUTDIR` is the directory where you want to save program's output
* `TIMEOUT` is the timeout value (e.g., 5, which stands for 5 seconds for timeout)
* `INDIR` is the input directory
  * You can use path to `input.origin` for this value

### NOTE

1. For 6 but one program (`totinfo`), you can use the command below to compile the program and produce a binary, where SRC is path to source code and BIN is path to its binary.
```
gcc/clang -w -o $BIN $SRC
```
For `totinfo`, please use the command below to produce a binary.
```
gcc/clang -w -o $BIN $SRC -lm
```

2. All source code is a merged version of the original program. If you want to check out the original program, refer to [SIR benchmark](https://sir.csc.ncsu.edu/portal/index.php), register to have access, and then download the source code.

### Online spreadsheet for result-sharing
https://docs.qq.com/sheet/DSm5xZ25naGJ1cEFo?tab=BB08J2

### Online spreadsheet for findings-sharing
 (Edit, Need login) https://www.yuque.com/g/cytmo/gi9oz5/pbcgnq/collaborator/join?token=HgMjDpgDslYlfzqU&goto=%2Fcytmo%2Fgi9oz5%2Fpbcgnq%2Fedit
 
 (Read only) https://www.yuque.com/cytmo/gi9oz5/pbcgnq#IHGF2
 

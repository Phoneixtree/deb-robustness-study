#!/usr/bin/python
from __future__ import print_function
import os, subprocess, sys

DRRUN = '../../../tracers/dynamorio/bin64/drrun'
CLIENT = './logs/libcbr_indcall.so'

def execute(cmd):
    print('running ', cmd)
    p = subprocess.Popen(cmd, shell=True)
    p.communicate()

def train_run(arg):
    BIN = './grep.orig'
    cmd = BIN + ' < ' + arg
    cmd = DRRUN + ' -c ' + CLIENT + ' -- ' + cmd
    execute(cmd)

def test_run(arg):
    BIN = './grep.orig'
    cmd = BIN + arg
    execute(cmd)


def train():

    
    train_run( """ train_input/input_file/input_file0 """)
    train_run( """ train_input/input_file/input_file1""")
    train_run( """ train_input/input_file/input_file2""")
    train_run( """ train_input/input_file/input_file3""")
    train_run( """ train_input/input_file/input_file4""")
    train_run( """ train_input/input_file/input_file5""")
    train_run( """ train_input/input_file/input_file6""")
    train_run( """ train_input/input_file/input_file7""")
    train_run( """ train_input/input_file/input_file8""")
    train_run( """ train_input/input_file/input_file8""")
    train_run( """ train_input/input_file/input_file9""")
    train_run( """ train_input/input_file/input_file10""")
    train_run( """ train_input/input_file/input_file11""")
    train_run( """ train_input/input_file/input_file12""")
    train_run( """ train_input/input_file/input_file13""")
    train_run( """ train_input/input_file/input_file14""")
    train_run( """ train_input/input_file/input_file15""")
    train_run( """ train_input/input_file/input_file16""")
    train_run( """ train_input/input_file/input_file17""")
    train_run( """ train_input/input_file/input_file18""")
    train_run( """ train_input/input_file/input_file19""")
    train_run( """ train_input/input_file/input_file20""")
    train_run( """ train_input/input_file/input_file21""")
    train_run( """ train_input/input_file/input_file22""")
    train_run( """ train_input/input_file/input_file23""")
    train_run( """ train_input/input_file/input_file24""")
    train_run( """ train_input/input_file/input_file25""")
    train_run( """ train_input/input_file/input_file26""")

    return

def test():

    test_run( """ "a" ./input2 """)
    test_run( """ "a" -v -H -r ./input_dir""")
    test_run( """ "1" -h -r ./input_dir""")
    test_run( """ -n "si" ./input2""")
    test_run( """ "1" -r ./input_dir -l""")
    test_run( """ "1" -r ./input_dir -L""")
    test_run( """ "randomtext" -r ./input_dir -c""")
    test_run( """ -o [r][a][n][d]* ./input2""")
    test_run( """ "1" -r ./input_dir -q""")
    test_run( """ "1" -r ./input_dir -s""")
    test_run( """ -v "a" ./input2""")
    test_run( """ -i "Si" ./input2""")
    test_run( """ -w "Si" ./input2""")
    test_run( """ -x "Don't" ./input2""")
    test_run( """ -F "randomtext*" ./input2""")
    test_run( """ -E "randomtext*" ./input2""")
    test_run( """ "ye " ./input""")
    test_run( """ "cold" ./input""")
    test_run( """ ^D ./input2""")
    test_run( """ .$ ./input2""")
    test_run( """ \^ ./input2""")
    test_run( """ \^$ ./input2""")
    test_run( """ ^[AEIOU] ./input2""")
    test_run( """ ^[^AEIOU] ./input2""")
    test_run( """ -E "free[^[:space:]]+" ./input2""")
    test_run( """ -E '\b(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?\.){3}(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)' ./input""")

    return

def get_traces_for_test(logs_dir, prog_name):
    train_run( """ "a" ./test1  > log1""")
    train_run( """ "a" ./test2  > log1""")
    train_run( """ -n "si" ./test1  > log1""")
    train_run( """ -n "si" ./test2  > log1""")
    train_run( """ -o [r][a][n][d]* ./test1  > log1""")
    train_run( """ -o [r][a][n][d]* ./test2  > log1""")
    train_run( """ -v "a" ./test1  > log1""")
    train_run( """ -v "a" ./test2  > log1""")
    train_run( """ -i "Si" ./test1  > log1""")
    train_run( """ -i "Si" ./test2  > log1""")
    train_run( """ -w "Si" ./test1  > log1""")
    train_run( """ -w "Si" ./test2  > log1""")
    train_run( """ -x "Don't" ./test1  > log1""")
    train_run( """ -x "Don't" ./test2  > log1""")
    train_run( """ -E "randomtext*" ./test1  > log1""")
    train_run( """ -E "randomtext*" ./test2  > log1""")
    train_run( """ "ye " ./test1  > log1""")
    train_run( """ "ye " ./test2  > log1""")
    train_run( """ "cold" ./test1  > log1""")
    train_run( """ "cold" ./test2  > log1""")
    train_run( """ "not exist" ./test1  > log1""")
    train_run( """ "not exist" ./test2  > log1""")
    train_run( """ ^D  ./test1  > log1""")
    train_run( """ ^D  ./test2  > log1""")
    train_run( """ .$  ./test1  > log1""")
    train_run( """ .$  ./test2  > log1""")
    train_run( """ \^  ./test1  > log1""")
    train_run( """ \^  ./test2  > log1""")
    train_run( """ \^$  ./test1  > log1""")
    train_run( """ \^$  ./test2  > log1""")
    train_run( """ ^[AEIOU]  ./test1  > log1""")
    train_run( """ ^[AEIOU]  ./test2  > log1""")
    train_run( """ ^[^AEIOU]  ./test1  > log1""")
    train_run( """ ^[^AEIOU]  ./test2  > log1""")
    train_run( """ -E "free[^[:space:]]+"  ./test1  > log1""")
    train_run( """ -E "free[^[:space:]]+"  ./test2  > log1""")
    train_run( """ -E '\b(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?\.)3}(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)'  ./test1  > log1""")
    train_run( """ -E '\b(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?\.)3}(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)'  ./test2  > log1""")

    execute("""python ../../../stitcher/src/merge_log.py %s %s""" % (logs_dir, prog_name))
    execute("""mkdir -p ./backup""")
    execute("""mv %s/%s-trace.log ./backup/""" % (logs_dir, prog_name))

def debloat(logs_dir, prog_name):
    execute("""python ../../../stitcher/src/merge_log.py %s %s""" % (logs_dir, prog_name))
    execute("""mv %s/%s-trace.log ./""" % (logs_dir, prog_name))
    execute("""python ../../../stitcher/src/instr_dumper.py ./%s-trace.log ./%s.orig ./instr.s""" % (prog_name, prog_name))
    execute("""python ../../../stitcher/src/find_symbols.py ./%s.orig ./instr.s > ./callbacks.txt""" % (prog_name))
    execute("""python ../../../stitcher/src/stitcher.py ./%s-trace.log ./%s.orig ./%s.s ./callbacks.txt""" % (prog_name, prog_name, prog_name))
    execute("""python ../../../stitcher/src/merge_bin.py %s.orig %s.s""" % (prog_name, prog_name))

def extend_debloat(prog_name, heuristic_level):
    execute("""python ../../../stitcher/src/heuristic/disasm.py ./%s.orig ./%s.orig.asm """ % (prog_name, prog_name))
    execute("""python ../../../stitcher/src/heuristic/find_more_paths.py ./%s.orig.asm ./%s-trace.log ./%s-extended.log %d""" % (prog_name, prog_name, prog_name, heuristic_level))
    execute("""python ../../../stitcher/src/instr_dumper.py ./%s-extended.log ./%s.orig ./instr.s""" % (prog_name, prog_name))
    execute("""python ../../../stitcher/src/find_symbols.py ./%s.orig ./instr.s > ./callbacks.txt""" % (prog_name))
    execute("""python ../../../stitcher/src/stitcher.py ./%s-extended.log ./%s.orig ./%s.s ./callbacks.txt""" % (prog_name, prog_name, prog_name))
    execute("""python ../../../stitcher/src/merge_bin.py %s.orig %s.s""" % (prog_name, prog_name))

def clean():
    for fname in os.listdir('./'):
        if fname == "run_razor.py":
            continue
        
        if fname.startswith('test') or fname.startswith('train') or fname == "backup":
            continue
        
        if fname == "grep.orig" or fname == "grep-2.19.c.orig.c":
            continue

        execute('rm -rf ./' + fname)

def usage():
    print('python run_razor.py clean|train|test|debloat|extend_debloat|get_test_traces\n')
    sys.exit(1)

def main():
    if len(sys.argv) != 2 and len(sys.argv) != 3:
        usage()

    if not os.path.exists("./logs"):
        cmd = "mkdir -p ./logs"
        execute(cmd)

        cmd = "cp ../../../tracers/bin/libcbr_indcall.so ./logs/"
        execute(cmd)
    
    if sys.argv[1] == 'train':
        train()
    
    elif sys.argv[1] == 'test':
        test()

    elif sys.argv[1] == 'debloat':
        debloat('logs', 'grep')

    elif sys.argv[1] == 'extend_debloat':
        if len(sys.argv) != 3:
            print("Please specify heuristic level (i.e., 1 ~ 4).")
            sys.exit(1)
        heuristic_level = int(sys.argv[2])
        extend_debloat('grep', heuristic_level)

    elif sys.argv[1] == "get_test_traces":
        get_traces_for_test("logs", "grep")

    elif sys.argv[1] == 'clean':
        clean()

    else:
        usage()

if __name__ == '__main__':
    main()

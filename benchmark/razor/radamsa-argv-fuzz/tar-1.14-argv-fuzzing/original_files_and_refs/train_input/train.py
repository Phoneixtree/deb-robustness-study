#!/usr/bin/python
from __future__ import print_function
import os, subprocess, sys

DRRUN = '../../../tracers/dynamorio/bin64/drrun'
CLIENT = './logs/libcbr_indcall.so'

def execute(cmd):
    print('running ', cmd)
    p = subprocess.Popen(cmd, shell=True)
    p.communicate()

def train():
    BIN = './tar.orig'

    cmd0 = ' cp ' + BIN + ' tar '
    execute(cmd0)
    
    execute(""" echo "foo foo" > foo.orig""")
    execute(""" cp foo.orig foo """)
    execute(""" echo "bar " > bar.orig """)
    execute(""" cp bar.orig bar """)
    cmd1 = BIN + ' < ' + ' train_input/train_cmd/train_input1 ' 
    cmd1 = DRRUN + ' -c ' + CLIENT + ' -- ' + cmd1
    execute(cmd1)
    execute(""" rm foo bar """)
    cmd2 = BIN + ' < ' + ' train_input/train_cmd/train_input2 ' 
    cmd2 = DRRUN + ' -c ' + CLIENT + ' -- ' + cmd2
    execute(""" cat foo """)
    execute(""" cat bar """)
    execute(""" rm -rf f* b* """)
    
    execute(""" touch foo """)
    cmd3 = BIN + ' < ' + ' train_input/train_cmd/train_input3 ' 
    cmd3 = DRRUN + ' -c ' + CLIENT + ' -- ' + cmd3
    execute(cmd3)
    cmd4 = BIN + ' < ' + ' train_input/train_cmd/train_input4 ' 
    cmd4 = DRRUN + ' -c ' + CLIENT + ' -- ' + cmd4
    execute(cmd4)

    cmd5 = BIN + ' < ' + ' train_input/train_cmd/train_input5 ' 
    cmd5 = DRRUN + ' -c ' + CLIENT + ' -- ' + cmd5
    execute(cmd5)
    
    cmd6 = BIN + ' < ' + ' train_input/train_cmd/train_input6 ' 
    cmd6 = DRRUN + ' -c ' + CLIENT + ' -- ' + cmd6
    execute(cmd6)
    
    execute(""" mkdir -p foo/{1,2,3} """)
    execute(""" mkdir -p foo/1/{10,11} """)
    execute(""" mkdir -p foo/1/10/{100,101,102} """)
    cmd7 = BIN + ' < ' + ' train_input/train_cmd/train_input7 ' 
    cmd7 = DRRUN + ' -c ' + CLIENT + ' -- ' + cmd7
    execute(cmd7)
    execute(""" rm -rf foo/* """)
    cmd8 = BIN + ' < ' + ' train_input/train_cmd/train_input8 ' 
    cmd8 = DRRUN + ' -c ' + CLIENT + ' -- ' + cmd8
    execute(cmd8)
    execute(""" find foo | sort >logfile.bb """)
    execute(""" rm -rf foo/* """)
    cmd9 = BIN + ' < ' + ' train_input/train_cmd/train_input9 ' 
    cmd9 = DRRUN + ' -c ' + CLIENT + ' -- ' + cmd9
    execute(cmd9)
    execute(""" find foo | sort >logfile.gnu """)
    execute(""" diff -u logfile.gnu logfile.bb """)

    execute(""" touch foo """)
    cmd10 = BIN + ' < ' + ' train_input/train_cmd/train_input10 ' 
    cmd10 = DRRUN + ' -c ' + CLIENT + ' -- ' + cmd10
    execute(cmd10)
    execute(""" rm foo """)
    cmd11 = BIN + ' < ' + ' train_input/train_cmd/train_input11 ' 
    cmd11 = DRRUN + ' -c ' + CLIENT + ' -- ' + cmd11
    execute(cmd11)
    execute(""" test -f foo """)
    
    execute(""" touch foo """)
    cmd12 = BIN + ' < ' + ' train_input/train_cmd/train_input12 ' 
    cmd12 = DRRUN + ' -c ' + CLIENT + ' -- ' + cmd12
    execute(cmd12)
    execute(""" rm foo """)
    cmd13 = BIN + ' < ' + ' train_input/train_cmd/train_input13 ' 
    cmd13 = DRRUN + ' -c ' + CLIENT + ' -- ' + cmd13
    execute(cmd13)
    execute(""" test -f foo """)
    
    execute(""" touch foo """)
    cmd14 = BIN + ' < ' + ' train_input/train_cmd/train_input14 ' 
    cmd14 = DRRUN + ' -c ' + CLIENT + ' -- ' + cmd14
    execute(cmd14)
    execute(""" rm foo bar """)
    cmd15 = BIN + ' < ' + ' train_input/train_cmd/train_input15 ' 
    cmd15 = DRRUN + ' -c ' + CLIENT + ' -- ' + cmd15
    execute(cmd15)
    execute(""" test -f foo """)    
    execute(""" test -f bar """)   
    
    execute(""" echo foo > foo """)
    cmd16 = BIN + ' < ' + ' train_input/train_cmd/train_input16 ' 
    cmd16 = DRRUN + ' -c ' + CLIENT + ' -- ' + cmd16
    execute(cmd16)
    execute(""" cat foo.tar | ./tar Ox | cmp foo - """)

    execute(""" echo "foo foo bar" > foo.orig """)
    cmd17 = BIN + ' < ' + ' train_input/train_cmd/train_input17 ' 
    cmd17 = DRRUN + ' -c ' + CLIENT + ' -- ' + cmd17
    execute(cmd17)
    execute(""" rm foo """)
    cmd18 = BIN + ' < ' + ' train_input/train_cmd/train_input18 ' 
    cmd18 = DRRUN + ' -c ' + CLIENT + ' -- ' + cmd18 
    execute(cmd18)
    execute(""" diff -q foo.orig foo || exit 1 """)

    execute(""" touch foo """)
    cmd19 = BIN + ' < ' + ' train_input/train_cmd/train_input19 ' 
    cmd19 = DRRUN + ' -c ' + CLIENT + ' -- ' + cmd19
    execute(cmd19)
    execute(""" echo foo >foo.exclude """)
    cmd20 = BIN + ' < ' + ' train_input/train_cmd/train_input20 ' 
    cmd20 = DRRUN + ' -c ' + CLIENT + ' -- ' + cmd20
    execute(cmd20)
    
    execute(""" echo "abcd abcd" > foo.orig """)
    execute(""" echo "qwerqwerqwer" > bar.orig """)
    execute(""" echo "" > baz.orig """)
    execute(""" cp foo.orig foo """)
    execute(""" cp bar.orig bar """)
    execute(""" ecp baz.orig baz """)    
    cmd21 = BIN + ' < ' + ' train_input/train_cmd/train_input21 ' 
    cmd21 = DRRUN + ' -c ' + CLIENT + ' -- ' + cmd21
    execute(cmd21)
    execute(""" echo foo >foo.exclude """)
    execute(""" rm foo bar baz """)
    cmd22 = BIN + ' < ' + ' train_input/train_cmd/train_input22 ' 
    cmd22 = DRRUN + ' -c ' + CLIENT + ' -- ' + cmd22
    execute(cmd22)
    execute(""" test ! -f foo -a -f bar -a ! -f baz || exit 1 """)
    execute(""" diff -q bar.orig bar || exit 1  """)    
    
    execute(""" touch foo """)
    execute(""" touch bar """)
    cmd23 = BIN + ' < ' + ' train_input/train_cmd/train_input23 ' 
    cmd23 = DRRUN + ' -c ' + CLIENT + ' -- ' + cmd23
    execute(cmd23)
    execute(""" echo foo > foo.exclude """)
    execute(""" echo bar > bar.exclude """)    
    execute(""" rm foo bar """)
    cmd24 = BIN + ' < ' + ' train_input/train_cmd/train_input24 ' 
    cmd24 = DRRUN + ' -c ' + CLIENT + ' -- ' + cmd24
    execute(cmd24)    
    execute(""" test ! -f foo -a ! -f bar """)

    execute(""" mkdir foo """)
    execute(""" touch foo/bar """)
    cmd25 = BIN + ' < ' + ' train_input/train_cmd/train_input25 ' 
    cmd25 = DRRUN + ' -c ' + CLIENT + ' -- ' + cmd25
    execute(cmd25)
    execute(""" rm -rf foo """)
    execute(""" echo foo/bar >foobar.exclude """)    
    cmd26 = BIN + ' < ' + ' train_input/train_cmd/train_input26 ' 
    cmd26 = DRRUN + ' -c ' + CLIENT + ' -- ' + cmd26
    execute(cmd26)    
    execute(""" test -d foo -a ! -f foo/bar """)



def test():
    BIN = './tar.orig_temp/tar.orig.debloated'

    for fname in os.listdir('test'):
        fpath = os.path.join('test', fname)
        # -c
        cmd = BIN + ' cf tmp.tar ' + fpath
        execute(cmd)

def get_traces_for_test(logs_dir, prog_name):
    BIN = './tar.orig'

    for fname in os.listdir('test'):
        fpath = os.path.join('test', fname)
        # -c
        cmd = BIN + ' cf tmp.tar ' + fpath
        cmd = DRRUN + ' -c ' + CLIENT + ' -- ' + cmd
        execute(cmd)

    execute("""python ../../../stitcher/src/merge_log.py %s %s""" % (logs_dir, prog_name))
    execute("""mkdir -p ./backup""")
    execute("""mv %s/%s-trace.log ./backup/""" % (logs_dir, prog_name))

def debloat(logs_dir, prog_name):
    execute("""python ../../../stitcher/src/merge_log.py %s %s""" % (logs_dir, prog_name))
    execute("""mv %s/%s-trace.log ./""" % (logs_dir, prog_name))
    execute("""python ../../../stitcher/src/instr_dumper.py ./%s-trace.log ./%s.orig ./instr.s""" % (prog_name, prog_name))
    execute("""python ../../../stitcher/src/find_symbols.py ./%s.orig ./instr.s """ % (prog_name))
    execute("""python ../../../stitcher/src/stitcher.py ./%s-trace.log ./%s.orig ./%s.s ./callbacks.txt""" % (prog_name, prog_name, prog_name))
    execute("""python ../../../stitcher/src/merge_bin.py %s.orig %s.s""" % (prog_name, prog_name))

def extend_debloat(prog_name, heuristic_level):
    execute("""python ../../../stitcher/src/heuristic/disasm.py ./%s.orig ./%s.orig.asm """ % (prog_name, prog_name))
    execute("""python ../../../stitcher/src/heuristic/find_more_paths.py ./%s.orig.asm ./%s-trace.log ./%s-extended.log %d""" % (prog_name, prog_name, prog_name, heuristic_level))
    execute("""python ../../../stitcher/src/instr_dumper.py ./%s-extended.log ./%s.orig ./instr.s""" % (prog_name, prog_name))
    execute("""python ../../../stitcher/src/find_symbols.py ./%s.orig ./instr.s""" % (prog_name))
    execute("""python ../../../stitcher/src/stitcher.py ./%s-extended.log ./%s.orig ./%s.s ./callbacks.txt""" % (prog_name, prog_name, prog_name))
    execute("""python ../../../stitcher/src/merge_bin.py %s.orig %s.s""" % (prog_name, prog_name))

def clean():
    for fname in os.listdir('./'):
        if fname == "run_razor.py":
            continue
        
        if fname == 'test' or fname == 'train' or fname == "backup":
            continue

        if fname == "tar.orig" or fname == "tar-1.14.c.orig.c":
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
        debloat('logs', 'tar')

    elif sys.argv[1] == 'extend_debloat':
        if len(sys.argv) != 3:
            print("Please specify heuristic level (i.e., 1 ~ 4).")
            sys.exit(1)
        heuristic_level = int(sys.argv[2])
        extend_debloat('tar', heuristic_level)
    
    elif sys.argv[1] == "get_test_traces":
        get_traces_for_test("logs", "tar")

    elif sys.argv[1] == 'debloat_patch':
        debloat_patch('tar')

    elif sys.argv[1] == 'clean':
        clean()

    else:
        usage()

if __name__ == '__main__':
    main()

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
    BIN = './gzip.orig'

    '''trainc = 'train_input/trainc'
    for fname in os.listdir(trainc):
        fpath = os.path.join(trainc, fname)
        # -c
        cmd = BIN + ' -c < ' + fpath + '> sample1.rb2' + ' > tmp.log'
        cmd = DRRUN + ' -c ' + CLIENT + ' -- ' + cmd
        execute(cmd)

    traind = 'train_input/traind'
    for fname in os.listdir(traind):
        fpath = os.path.join(traind, fname)
        # -d
        cmd = BIN + ' -d < ' + fpath + '>sample1.tst' + ' > tmp.log'
        cmd = DRRUN + ' -c ' + CLIENT + ' -- ' + cmd
        execute(cmd)
        
    trainf = 'train_input/trainf'    
    for fname in os.listdir(trainf):
        fpath = os.path.join(trainf, fname)
        # -f
        cmd = BIN + ' -f ' + fpath + ' > tmp.log'
        cmd = DRRUN + ' -c ' + CLIENT + ' -- ' + cmd
        execute(cmd)           

    traint = 'train_input/traint'
    for fname in os.listdir(traint):
        fpath = os.path.join(traint, fname)
        # -t
        cmd = BIN + ' -t ' + fpath + ' > tmp.log'
        cmd = DRRUN + ' -c ' + CLIENT + ' -- ' + cmd
        execute(cmd)        '''
    train_cmd = 'train_input/train_cmd'
    for fname in os.listdir(train_cmd):
        fpath = os.path.join(train_cmd, fname)
        # -t
        cmd = BIN + ' < ' + fpath
        cmd = DRRUN + ' -c ' + CLIENT + ' -- ' + cmd
        execute(cmd)    

def get_traces_for_test(logs_dir, prog_name):
    BIN = './gzip.orig'

    for fname in os.listdir('test'):
        fpath = os.path.join('test', fname)
        # -c
        cmd = BIN + ' -c < ' + fpath + ' > tmp.log'
        cmd = DRRUN + ' -c ' + CLIENT + ' -- ' + cmd
        execute(cmd)
    execute("""python ../../../stitcher/src/merge_log.py %s %s""" % (logs_dir, prog_name))
    execute("""mkdir -p ./backup""")
    execute("""mv %s/%s-trace.log ./backup/""" % (logs_dir, prog_name))

def clean():
    for fname in os.listdir('./'):
        if fname == "razor_test.py":
            continue
        
        if fname == 'test' or fname == 'train' or fname == "backup":
            continue

        if fname == "gzip.orig" or fname == "gzip-1.2.4.c.orig.c":
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

    elif sys.argv[1] == "get_test_traces":
        get_traces_for_test("logs", "gzip")

    elif sys.argv[1] == 'clean':
        clean()

    else:
        usage()

if __name__ == '__main__':
    main()

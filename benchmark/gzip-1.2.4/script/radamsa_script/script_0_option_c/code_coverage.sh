#!/bin/bash
mkdir temp
gcc -fprofile-arcs -ftest-coverage  gzip-1.2.4.c.reduced.c -o gzip-1.2.4.test.bin

timeout 2 ./gzip-1.2.4.test.bin -c crash_00035  > test_files/temp.rb2 2>/dev/null
rm test_files/temp.rb2
gcov gzip-1.2.4.c.reduced.c
lcov --capture --directory . --output-file testHtml.info --test-name testHtml
rm -r html_result
mkdir html_result
genhtml -o html_result testHtml.info
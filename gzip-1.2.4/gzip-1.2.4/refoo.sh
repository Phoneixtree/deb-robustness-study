#!/bin/bash

k=0

while(($k<100))
do
radamsa foo > references/foo_fuzzed/foo_t${k}
let "k++"
done


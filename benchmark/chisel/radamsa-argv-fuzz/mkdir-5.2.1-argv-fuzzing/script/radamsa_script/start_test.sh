#!/bin/bash
cd ../../ 
. setenv
cd script/radamsa_script
rm -r result 
mkdir temp
cp -r scripts temp
cd temp/scripts
./test_$1.sh
cp -r result ../../result
cd ../../
sudo rm -rf temp


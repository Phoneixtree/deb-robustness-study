#!/bin/bash
rm result/result
origin_hang=`grep -o '124' result/log_origin | wc -l`
reduced_hang=`grep -o '124' result/log_reduced | wc -l`
origin_exc=`grep -o '136' result/log_origin | wc -l`
reduced_exc=`grep -o '136' result/log_reduced | wc -l`
origin_beh=`grep -o '0' result/log_origin | wc -l`
reduced_beh=`grep -o '0' result/log_reduced | wc -l`
echo  "origin_bin hang "${origin_hang}" times" >> result/result
echo -e "reduced_bin hang "${reduced_hang}" times\n" >> result/result

echo  "origin_bin has executed "${origin_exc}" exceptions" >> result/result
echo -e "reduced_bin has "${reduced_exc}" exceptions\n" >> result/result

echo  "origin_bin successfully executed "${origin_beh}" times" >> result/result
echo -e "reduced_bin successfully executed "${reduced_beh}" times\n" >> result/result

echo "$(<result/result)"

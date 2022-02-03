#!/bin/bash
rm result${1}/result${1}
origin_call=`grep -o '2' result${1}/log_origin | wc -l`
reduced_call=`grep -o '2' result${1}/log_reduced | wc -l`
origin_hang=`grep -o '124' result${1}/log_origin | wc -l`
reduced_hang=`grep -o '124' result${1}/log_reduced | wc -l`
origin_exc=`grep -o '139' result${1}/log_origin | wc -l`
reduced_exc=`grep -o '139' result${1}/log_reduced | wc -l`
origin_abr=`grep -o '134' result${1}/log_origin | wc -l`
reduced_abr=`grep -o '134' result${1}/log_reduced | wc -l`

origin_exc=`expr $origin_exc + $origin_abr`
reduced_exc=`expr $reduced_exc + $reduced_abr`

origin_beh=`grep -o '0' result${1}/log_origin | wc -l`
origin_beh=`expr ${origin_beh} + ${origin_call} `
reduced_beh=`grep -o '0' result${1}/log_reduced | wc -l`
reduced_beh=`expr ${reduced_beh} + ${reduced_call} `
echo  "origin_bin hang "${origin_hang}" times" >> result${1}/result${1}
echo -e "reduced_bin hang "${reduced_hang}" times\n" >> result${1}/result${1}

echo  "origin_bin has executed "${origin_exc}" exceptions" >> result${1}/result${1}
echo -e "reduced_bin has "${reduced_exc}" exceptions\n" >> result${1}/result${1}

echo  "origin_bin successfully executed "${origin_beh}" times" >> result${1}/result${1}
echo -e "reduced_bin successfully executed "${reduced_beh}" times\n" >> result${1}/result${1}

echo "$(<result${1}/result${1})"

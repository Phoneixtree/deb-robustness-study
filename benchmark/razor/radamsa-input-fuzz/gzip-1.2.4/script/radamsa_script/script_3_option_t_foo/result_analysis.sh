#/bin/bash
rm result/result
origin_hang=`grep -o '124' result/log_origin | wc -l`
reduced_hang=`grep -o '124' result/log_reduced | wc -l`
origin_exc=`grep -o '136' result/log_origin | wc -l`
origin_seg=`grep -o '139' result/log_origin | wc -l`
origin_exc=`expr ${origin_exc} + ${origin_seg} `
reduced_exc=`grep -o '136' result/log_reduced | wc -l`
reduced_seg=`grep -o '139' result/log_reduced | wc -l`
reduced_exc=`expr ${reduced_exc} + ${reduced_seg} `
origin_beh=`grep -o '1' result/log_origin | wc -l`
reduced_beh=`grep -o '1' result/log_reduced | wc -l`

echo -e "reduced_bin hang "${origin_hang}" times\n" >> result/result
echo -e "reduced_bin hang "${reduced_hang}" times\n" >> result/result
echo -e "reduced_bin has "${origin_exc}" exceptions\n" >> result/result
echo -e "reduced_bin has "${reduced_exc}" exceptions\n" >> result/result
echo -e "reduced_bin successfully executed "${origin_beh}" times\n" >> result/result
echo -e "reduced_bin successfully executed "${reduced_beh}" times\n" >> result/result

echo "$(<result/result)"


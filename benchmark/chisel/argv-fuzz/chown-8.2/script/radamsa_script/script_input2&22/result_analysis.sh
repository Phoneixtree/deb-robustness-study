#/bin/bash
rm result/result
#origin_miss=`grep -o '1' result/log_origin | wc -l`
#reduced_miss=`grep -o '1' result/log_reduced | wc -l`
origin_hang=`grep -o '124' result/log_origin | wc -l`
reduced_hang=`grep -o '124' result/log_reduced | wc -l`
origin_exc=`grep -o '136' result/log_origin | wc -l`
origin_seg=`grep -o '139' result/log_origin | wc -l`
origin_exc=`expr ${origin_exc} + ${origin_seg}`
reduced_exc=`grep -o '136' result/log_reduced | wc -l`
reduced_seg=`grep -o '139' result/log_reduced | wc -l`
reduced_exc=`expr ${reduced_exc} + ${reduced_seg}`
origin_beh=`grep -o '0' result/log_origin | wc -l`
reduced_beh=`grep -o '0' result/log_reduced | wc -l`
#origin_beh=${origin_beh}+${origin_miss}
#reduecd_beh=${reduced_beh}+${reduced_miss}

echo  "origin_bin hang "${origin_hang}" times" >> result/result
echo -e "reduced_bin hang "${reduced_hang}" times\n" >> result/result

echo  "origin_bin has executed "${origin_exc}" exceptions" >> result/result
echo -e "reduced_bin has "${reduced_exc}" exceptions\n" >> result/result

echo  "origin_bin successfully executed "${origin_beh}" times" >> result/result
echo -e "reduced_bin successfully executed "${reduced_beh}" times\n" >> result/result

echo "$(<result/result)"

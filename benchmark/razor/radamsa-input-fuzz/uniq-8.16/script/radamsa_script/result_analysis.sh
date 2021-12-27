#/bin/bash


reduced_hang=`grep -o '124' result/log_reduced | wc -l`

reduced_exc=`grep -o '136' result/log_reduced | wc -l`

reduced_beh=`grep -o '0' result/log_reduced | wc -l`

echo -e "reduced_bin hang "${reduced_hang}" times\n" >> result/result


echo -e "reduced_bin has "${reduced_exc}" exceptions\n" >> result/result


echo -e "reduced_bin successfully executed "${reduced_beh}" times\n" >> result/result

echo "$(<result/result)"
echo "$(<result/result)"
rm result/log_if_behave_properly
rm result/log_reduced


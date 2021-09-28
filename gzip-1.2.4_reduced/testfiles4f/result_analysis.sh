#/bin/bash
rm result/result
origin=`grep -o '0' result/log_origin | wc -l`
reduced=`grep -o '0' result/log_reduced | wc -l`
echo -e "gzip_reduced successfully executed "${reduced}" times\n" >> result/result
echo "gzip_origin successfully executed "${origin}" times" >> result/result
echo "$(<result/result)"

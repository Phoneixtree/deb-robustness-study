#/bin/bash
radamsa_result_analysis=${home_folder}/result/radamsa_result/analysis/input_${option}

origin_hangs=`grep -o '124' ${origin_result} | wc -l`
reduced_hangs=`grep -o '124' ${reduced_result} | wc -l`
robust_reduced_hangs=`grep -o '124' ${robust_reduced_result} | wc -l `

origin_crashes=`grep -o '13[0-9]' ${origin_result} | wc -l`
reduced_crashes=`grep -o '13[0-9]' ${reduced_result} | wc -l`
robust_reduced_crashes=`grep -o '13[0-9]' ${robust_reduced_result} | wc -l`

origin_exit0=`grep -o '0' ${origin_result} | wc -l`
origin_exit1=`grep -o '1$' ${origin_result} | wc -l`
origin_successful_exit=`expr ${origin_exit0} + ${origin_exit1}`

reduced_exit0=`grep -o '0' ${reduced_result} | wc -l`
reduced_exit1=`grep -o '1$' ${reduced_result} | wc -l`
reduced_successful_exit=`expr ${reduced_exit0} + ${reduced_exit1}`

robust_reduced_exit0=`grep -o '0' ${robust_reduced_result} | wc -l`
robust_reduced_exit1=`grep -o '1$' ${robust_reduced_result} | wc -l`
robust_reduced_successful_exit=`expr ${robust_reduced_exit0} + ${robust_reduced_exit1}`

echo  "origin.out hangs "${origin_hangs}" times" > ${radamsa_result_analysis}
echo  "reduced.out hangs "${reduced_hangs}" times" >> ${radamsa_result_analysis}
echo -e "robust_reduced.out hangs "${robust_reduced_hangs}" times\n" >> ${radamsa_result_analysis}


echo  "origin.out has "${origin_crashes}" crashes" >> ${radamsa_result_analysis}
echo  "reduced.out has "${reduced_crashes}" crashes" >> ${radamsa_result_analysis}
echo -e "robust_reduced.out has "${robust_reduced_crashes}" crashes\n" >> ${radamsa_result_analysis}


echo  "origin.out successfully executed "${origin_successful_exit}" times" >> ${radamsa_result_analysis}
echo  "reduced.out successfully executed "${reduced_successful_exit}" times" >> ${radamsa_result_analysis}
echo -e "robust_reduced.out successfully executed "${robust_reduced_successful_exit}" times\n" >> ${radamsa_result_analysis}

echo "=======================================================    Input  "${option}"  Radamsa Result Analysis    ======================================================" >> ${radamsa_result_analysis}
printf "%-15s %20s %20s %20s %20s %30s %20s\n" "" "Crashes" "Crash Rate(%)" "Hangs" "Hang Rate(%)" "Successfully Executed" "Total">> ${radamsa_result_analysis}
printf "%-15s %20s %20.2f %20s %20.2f %30s %20s\n" "Origin" ${origin_crashes} `echo "scale=2; ${origin_crashes} * 100 / 500" | bc` ${origin_hangs} `echo "scale=2; ${origin_hangs} * 100 / 500" | bc` ${origin_successful_exit}  `expr ${origin_crashes} + ${origin_hangs} + ${origin_successful_exit}`>> ${radamsa_result_analysis}
printf "%-15s %20s %20.2f %20s %20.2f %30s %20s\n" "Reduced" ${reduced_crashes} `echo "scale=2; ${reduced_crashes} * 100 / 500" | bc` ${reduced_hangs} `echo "scale=2; ${reduced_hangs} * 100 / 500" | bc`  ${reduced_successful_exit}  `expr ${reduced_crashes} + ${reduced_hangs} + ${reduced_successful_exit}` >> ${radamsa_result_analysis}
printf "%-15s %20s %20.2f %20s %20.2f %30s %20s\n" "Robust_Reduced" ${robust_reduced_crashes} `echo "scale=2; ${robust_reduced_crashes} * 100 / 500" | bc` ${robust_reduced_hangs} `echo "scale=2; ${robust_reduced_hangs} * 100 / 500" | bc` ${robust_reduced_successful_exit}  `expr ${robust_reduced_crashes} + ${robust_reduced_hangs} + ${robust_reduced_successful_exit}` >> ${radamsa_result_analysis}
echo "=========================================================================  END  ========================================================================" >> ${radamsa_result_analysis}

echo "$(<${radamsa_result_analysis})"

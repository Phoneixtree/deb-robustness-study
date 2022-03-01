#/bin/bash
radamsa_result_analysis=${home_folder}/result/radamsa_result/analysis/option_${option}

origin_hangs=`grep -o '124' ${origin_result} | wc -l`
reduced_hangs=`grep -o '124' ${reduced_result} | wc -l`
robust_reduced_hangs=`grep -o '124' ${robust_reduced_result} | wc -l`

# origin_exc=`grep -o '136' ${origin_result} | wc -l`
# origin_seg=`grep -o '139' ${origin_result} | wc -l`
# origin_crashes=`expr ${origin_exc} + ${origin_seg}`
origin_crashes=`grep -o '13[0-9]' ${origin_result} | wc -l`

# reduced_exc=`grep -o '136' ${reduced_result} | wc -l`
# reduced_seg=`grep -o '139' ${reduced_result} | wc -l`
# reduced_crashes=`expr ${reduced_exc} + ${reduced_seg}`
reduced_crashes=`grep -o '13[0-9]' ${reduced_result} | wc -l`

# robust_reduced_exc=`grep -o '136' ${robust_reduced_result} | wc -l`
# robust_reduced_seg=`grep -o '139' ${robust_reduced_result} | wc -l`
# robust_reduced_crashes=`expr ${robust_reduced_exc} + ${robust_reduced_seg}`
robust_reduced_crashes=`grep -o '13[0-9]' ${robust_reduced_result} | wc -l`

# origin_exit0=`grep -o '0' ${origin_result} | wc -l`
# origin_exit1=`grep -o '1$' ${origin_result} | wc -l`
# origin_successful_exit=`expr ${origin_exit0} + ${origin_exit1}`
origin_successful_exit=`grep -o '[0-2]$' ${origin_result} | wc -l`

# reduced_exit0=`grep -o '0' ${reduced_result} | wc -l`
# reduced_exit1=`grep -o '1$' ${reduced_result} | wc -l`
# reduced_successful_exit=`expr ${reduced_exit0} + ${reduced_exit1}`
reduced_successful_exit=`grep -o '[0-2]$' ${reduced_result} | wc -l`

# robust_reduced_exit0=`grep -o '0' ${robust_reduced_result} | wc -l`
# robust_reduced_exit1=`grep -o '1$' ${robust_reduced_result} | wc -l`
# robust_reduced_successful_exit=`expr ${robust_reduced_exit0} + ${robust_reduced_exit1}`
robust_reduced_successful_exit=`grep -o '[0-2]$' ${robust_reduced_result} | wc -l`


echo  "origin.out hangs "${origin_hangs}" times" > ${radamsa_result_analysis}
echo  "reduced.out hangs "${reduced_hangs}" times" >> ${radamsa_result_analysis}
echo -e "robust_reduced.out hangs "${robust_reduced_hangs}" times\n" >> ${radamsa_result_analysis}


echo  "origin.out has "${origin_crashes}" crashes" >> ${radamsa_result_analysis}
echo  "reduced.out has "${reduced_crashes}" crashes" >> ${radamsa_result_analysis}
echo -e "robust_reduced.out has "${robust_reduced_crashes}" crashes\n" >> ${radamsa_result_analysis}


echo  "origin.out successfully executed "${origin_successful_exit}" times" >> ${radamsa_result_analysis}
echo  "reduced.out successfully executed "${reduced_successful_exit}" times" >> ${radamsa_result_analysis}
echo -e "robust_reduced.out successfully executed "${robust_reduced_successful_exit}" times\n" >> ${radamsa_result_analysis}

echo "======================================================    Option  "${option}"  Radamsa Result Analysis    ======================================================" >> ${radamsa_result_analysis}
printf "%-15s %20s %20s %20s %20s %30s %20s\n" "" "Crashes" "Crash Rate(%)" "Hangs" "Hang Rate(%)" "Successfully Executed" "Total">> ${radamsa_result_analysis}
printf "%-15s %20s %20s %20s %20s %30s %20s\n" "Origin" ${origin_crashes} `expr ${origin_crashes} \* 100 / 500` ${origin_hangs} `expr ${origin_hangs} \* 100 / 500` ${origin_successful_exit}  `expr ${origin_crashes} + ${origin_hangs} + ${origin_successful_exit}`>> ${radamsa_result_analysis}
printf "%-15s %20s %20s %20s %20s %30s %20s\n" "Reduced" ${reduced_crashes} `expr ${reduced_crashes} \* 100 / 500` ${reduced_hangs} `expr ${reduced_hangs} \* 100 / 500`  ${reduced_successful_exit}  `expr ${reduced_crashes} + ${reduced_hangs} + ${reduced_successful_exit}` >> ${radamsa_result_analysis}
printf "%-15s %20s %20s %20s %20s %30s %20s\n" "robust_reduced" ${robust_reduced_crashes} `expr ${robust_reduced_crashes} \* 100 / 500` ${robust_reduced_hangs} `expr ${robust_reduced_hangs} \* 100 / 500` ${robust_reduced_successful_exit}  `expr ${robust_reduced_crashes} + ${robust_reduced_hangs} + ${robust_reduced_successful_exit}` >> ${radamsa_result_analysis}
echo "=========================================================================  END  ========================================================================" >> ${radamsa_result_analysis}


echo "$(<${radamsa_result_analysis})"

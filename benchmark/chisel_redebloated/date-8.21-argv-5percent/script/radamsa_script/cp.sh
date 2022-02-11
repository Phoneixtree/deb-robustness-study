

# cnt=1
# while (($cnt <= 7)) 
# do

count=0
 for file in $(ls crashes) 
 do
 val1=`expr ${count} % 20`
 if test $[val1] -eq 0
 then
    num=`expr ${count} / 20`
            echo $file

    cp crashes/$file re_inputs/c${num}
  fi
  let "count++"
 done

# count=0
#  for file in $(ls result_$cnt/hangs) 
#  do
#  rm result_$cnt/hangs/README*
#  val1=`expr ${count} % 20`
#     if test $[val1] -eq 0
#      then
#         num=`expr ${count} / 20`
#         echo $file
#     mv result_$cnt/hangs/$file ../o${cnt}h${num}
#   fi
#  let "count++"
#  done

#  let "cnt++"
#  done
  #/bin/bash
  cd ../../..
  . setenv
  cd script/radamsa_script/script_input
  
  debloat=${reduced}

  rm -r result
  mkdir result
  
  cnt=0

  while((${cnt} < 500))
  do
  touch file1
  touch file2
  { timeout -k 0.5 0.5 ${origin} < ${rad_files4chown}/input$1_fuzzed/input$1_${cnt}; } >/dev/null
  ret=$?
  echo $ret >> result/log_origin

  rm -rf file1 file2
  
  touch file1
  touch file2
  { timeout -k 0.5 0.5 ${origin} < ${rad_files4chown}/input$1$1_fuzzed/input$1$1_${cnt}; } >/dev/null
   ret=$?
  echo $ret >> result/log_origin
  rm -rf file1 file2
   
  touch file1
  touch file2 
  { timeout -k 0.5 0.5 ${reduced} < ${rad_files4chown}/input$1_fuzzed/input$1_${cnt}; } >/dev/null
   ret=$?
echo $ret >> result/log_reduced

  rm -rf file1 file2
  
  touch file1
  touch file2 
  { timeout -k 0.5 0.5 ${reduced} < ${rad_files4chown}/input$1$1_fuzzed/input$1$1_${cnt}; } >/dev/null
   ret=$?
echo $ret >> result/log_reduced
  rm -rf file1 file2
  
  let "cnt++"
  done

./result_analysis.sh

  

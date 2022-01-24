for file in $(ls arg_inputs/*); do
    { timeout 500 ./grep-2.19.origin < $file; } >> log
  done

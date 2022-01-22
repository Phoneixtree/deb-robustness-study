export BENCHMARK_NAME=gzip-1.2.4
export ORIGIN_BIN=$BENCHMARK_NAME.origin
export REDUCED_BIN=$BENCHMARK_NAME.reduced
export TIMEOUT="-k 1.8 1.8"
export LOG=log.txt
touch log.txt
touch log2
for file in $(ls re_inputs/o1*); do
echo $file 
  # -c
  $ORIGIN_BIN -c < $file > sample1.gz 2>/dev/null
  { timeout $TIMEOUT $REDUCED_BIN -c < $file >sample1.rb2; } 2>$LOG
  crash $? && exit 1
  cmp sample1.gz sample1.rb2 >&/dev/null || exit 1
done


for file in $(ls re_inputs/o2*); do
echo $file 
  # -d
  $ORIGIN_BIN -d < $file > sample1.t 2>/dev/null
  { timeout $TIMEOUT $REDUCED_BIN -d <$file >sample1.tst; } 2>$LOG
  crash $? && exit 1
  cmp sample1.tst sample1.t >&/dev/null || exit 1

done

for file in $(ls re_inputs/o3*); do
echo $file 
    # -f
  $ORIGIN_BIN -c $file >&/dev/null
  { timeout $TIMEOUT $REDUCED_BIN -f $file; } 2>$LOG
  crash $? && exit 1

done

for file in $(ls re_inputs/o4*); do
echo $file 
    # -t (expected to return 1)
  { timeout $TIMEOUT $REDUCED_BIN -t $file; } 2>$LOG
  if [[ $? -ne 1 ]]; then
    exit 1
  fi

done

for file in $(ls re_inputs/o5*); do
echo $file 
    # -t
  { timeout $TIMEOUT $REDUCED_BIN -t $file; } 2>$LOG
  crash $? && exit 1

done






rm log.txt
rm log2
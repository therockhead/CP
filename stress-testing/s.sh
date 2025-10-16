for ((i = 1; i <= 100; i++)); do
  echo $i 
  ./gen $i > input.txt
  ./test < input.txt > out1.txt
  ./test1 < input.txt > out2.txt
  diff -w out1.txt out2.txt || break 
done
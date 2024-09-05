i=1
size=100
for ((;i<size;i++))
do
	for ((j=1;j<i;j++))
	do
		echo -ne "#"
	done
	for ((j=i;j<size;j++))
	do
		echo -ne "-"
	done
	echo -ne "[$i%]\033[O\r"
	#echo -ne "[$i%]\033[OK\r"
sleep 1
done

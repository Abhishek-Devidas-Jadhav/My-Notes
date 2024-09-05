i=0
size=100
for ((;i<size;i++))
do
	for ((j=0;j<i;j++))
	do
		echo -ne "\033[01;32m#"
	done
	for ((j=i;j<size;j++))
	do
		echo -ne "\033[01;34m-"
	done
	echo -ne "\033[01;31m [$i%] \033[O\r"
	#echo -ne "[$i%]\033[OK\r"
sleep 3
done

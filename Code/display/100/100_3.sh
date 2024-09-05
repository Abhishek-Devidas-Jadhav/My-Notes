i=0
size=100
for ((;i<size;i++))
do
	for c in {30..40}
	do
		for ((j=0;j<i;j++))
		do
			echo -ne "\033[01;$c m#"
		done
		for ((j=i;j<size;j++))
		do
			echo -ne "\033[01;$c m-"
		done
		echo -ne "\033[01;$c m [$i%] \033[O\r"
		#echo -ne "[$i%]\033[OK\r"
		sleep 0.1
	done
done

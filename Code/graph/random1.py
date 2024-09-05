import random;
import time;
f=1;
t=1;	#Delay timer
m=200;	#Maximum amplitude
i=0;
print("Initilizing code");
while f==1:
	print();	#Code does not work without print at beginning :/
	time.sleep(t);
	#x=200;		#test the amplitude
	x=random.randint(0,m);
	i=0;
	while i!=x:
		i=i+1;
		print("*",end="");

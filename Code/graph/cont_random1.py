import random;
import time;
f=1;
t=1;	#Delay timer
m=200;	#Maximum amplitude
i=0;
c=10;	#maximum change in amplitude
#n=random.randint(0,m);	#random amplitude at start
n=50;			#fixed amplitude at start
print("Initilizing code");
while f==1:
	print();	#Code does not work without print at beginning :/
	time.sleep(t);
	#x=200;		#test the amplitude
	x=random.randint(-c,c);
	i=n;
	n=n+x;
	if n>m:
		n=m;
	elif n<0:
		n=0;
	while i!=0:
		i=i-1;
		print("*",end="");

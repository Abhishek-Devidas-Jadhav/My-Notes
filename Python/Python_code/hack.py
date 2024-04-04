import os 
import random
import time

os.system("ls")

while True:
	for i in range(random.randint(10,20)):
		print(f"{random.randint(0,9)}",end="")
	time.sleep(0.1)
	os.system('clear')	


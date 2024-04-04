import os
import time
from time import sleep


def clock():
    i = 0
    while True:
        i += 1
        start_time = time.time()
        # print(f"{i}")
        sleep(1)
        stop_time = time.time()
        print(f"{stop_time-start_time}")
        # os.system('clear')


# i = 0
# while True:
#     print(i)
#     i += 1
#     sleep(0.01)
#     os.system('echo $RANDOM')

clock()

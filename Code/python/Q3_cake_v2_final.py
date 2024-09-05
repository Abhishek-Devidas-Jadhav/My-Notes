#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'birthdayCakeCandles' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER_ARRAY candles as parameter.
#

def birthdayCakeCandles(candles):
    # Write your code here
    # my_result=1
    # index=candles.index(max(candles),0)
    # #while index<candles_count:
    # while True:
    #     try:
    #         if index!=candles.index(max(candles),index+1):
    #             my_result=my_result+1
    #             index=candles.index(max(candles),index+1)
    #         else:
    #             return my_result
    #     except:
    #         return my_result
    #return candles.count(max(candles)+1)
    return candles.count(max(candles))

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    candles_count = int(input().strip())

    candles = list(map(int, input().rstrip().split()))

    result = birthdayCakeCandles(candles)

    fptr.write(str(result) + '\n')

    fptr.close()

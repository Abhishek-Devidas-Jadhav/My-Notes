#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'jumpingOnClouds' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER_ARRAY c as parameter.
#

def jumpingOnClouds(c):
    # Write your code here
    result=0
    index=0
    for i in range(0,n):
        if index>=len(c):
            return result
        if index+2<len(c) and c[index+2]==0:
            index=index+2
            result=result+1
        elif index+1<len(c):
            index=index+1
            result=result+1
        else:
            return result
    # return result

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    c = list(map(int, input().rstrip().split()))

    result = jumpingOnClouds(c)

    fptr.write(str(result) + '\n')

    fptr.close()

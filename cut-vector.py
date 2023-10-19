import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re
"""
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible. Return the two resulting subvectors as two outputs.
For example,
input:
1
0
output:
1
0
0

input:
1
10
output:
1
10
0

input:
1
100
output:
1
100
0

input:
1
1000
output:
1
1000
0

input:
1
10000
output:
1
10000
0

input:
2
2 129
output:
1
2
1
129

"""

def is_equal(a, b):
    if a == b:
        return True
    else:
        return False

def is_diff_one(a, b):
    if abs(a-b) == 1:
        return True
    else:
        return False

def find_split(arr):
    n = len(arr)
    if n == 1:
        return -1
    else:
        for i in range(0, n-1):
            if is_diff_one(arr[i], arr[i+1]):
                return i+1
            else:
                if is_equal(arr[i], arr[i+1]):
                    return i+1
        return -1

def print_arr(arr):
    for i in arr:
        print(i)

if __name__ == '__main__':
    n = int(input().strip())
    for i in range(n):
        arr = list(map(int, input().strip().split()))
        idx = find_split(arr)
        if idx == -1:
            print_arr(arr)
            print(0)
        else:
            print_arr(arr[:idx])
            print_arr(arr[idx:]) 

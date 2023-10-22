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
Given a vector of positive integers, return a vector of the leaders in that vector. A leader is deﬁned as a number that is greater than or equal to all the numbers tothe right of it. The rightmost element is always a leader.
For example,
input:
0

output:
0

input:
1
0
output:
1
0
input:
1
451
output:
1
451
input:
2
1000 0
output:
2
1000 0
input:
2
0 1000
output:
1
1000
"""
def f(N):
    a = [int(i) for i in input().split()]
    b = [a[-1]]
    for i in range(N-2,-1,-1):
        if a[i] >= a[i+1]:
            b.append(a[i])
        else:
            pass
    for i in range(len(b) - 1, -1, -1):
        print(b[i], end=' ')
    print()
if __name__ == '__main__':
    T = int(input())
    for t in range(T):
        N = int(input())
        f(N)

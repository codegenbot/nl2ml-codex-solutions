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

"""
def get_input():
    line = input()
    n = int(line)
    line = input()
    a = [int(x) for x in line.split()]
    return n, a

def solve(n, a):
    print(2)
    print(a[0], a[1], a[2])
    print(n-2)
    print(" ".join([str(x) for x in a[2:]]))

if __name__ == '__main__':
    n, a = get_input()
    solve(n, a)

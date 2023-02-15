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
if __name__ == '__main__':
	s = input()
	s = s.split()
	s = [int(i) for i in s]
	l = len(s)
	print(l)
	for i in range(l):
		left = s[:i]
		right = s[i:]
		if len(left) == 0:
			print(s[0])
			print(right[0])
			print(0)
			continue
		if len(right) == 0:
			print(s[-1])
			print(left[-1])
			print(0)
			continue
		if left[-1] == right[0]:
			print(left[-1])
			print(right[0])
			print(0)
			continue
		if abs(left[-1] - right[0]) <= 1:
			print(left[-1])
			print(right[0])
			print(1)
			continue
		if left[-1] < right[0]:
			print(left[-1])
			print(left[-1])
			print(right[0] - left[-1])
			continue
		if left[-1] > right[0]:
			print(right[0])
			print(right[0])
			print(left[-1] - right[0])
			continue

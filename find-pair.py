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
Given a vector of integers, return the two elements that sum to a target integer.
For example,
input:
2
5 7
12
output:
5
7
input:
2
2500 6352
8852
output:
2500
6352
input:
2
-14 5
-9
output:
-14
5
input:
2
40 -19
21
output:
40
-19
input:
2
-4 4
0
output:
-4
4
"""
if __name__ == '__main__':
    # Read the input
    n = int(raw_input())
    numbers = raw_input()
    numbers = numbers.split(' ')
    numbers = [int(i) for i in numbers]
    target = int(raw_input())
    # Solve the problem
    for i in range(n):
        for j in range(i+1, n):
            if numbers[i] + numbers[j] == target:
                print(numbers[i])
                print(numbers[j])

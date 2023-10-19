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
def solution(nums):
    if len(nums) == 1:
        return nums, []
    if len(nums) == 2:
        if nums[0] == nums[1]:
            return nums, []
        else:
            return [nums[0]], [nums[1]]
    if len(nums) == 3:
        if nums[0] == nums[2]:
            return nums, []
        elif nums[0] == nums[1]:
            return [nums[0]], [nums[1], nums[2]]
        elif nums[1] == nums[2]:
            return [nums[0], nums[1]], [nums[2]]
        else:
            return [nums[0]], [nums[1], nums[2]]
    left = 0
    right = len(nums) - 1
    while left < right:
        if nums[left] == nums[right]:
            left += 1
            right -= 1
        elif nums[left] < nums[right]:
            left += 1
        else:
            right -= 1
    return nums[:left], nums[left:]

if __name__ == '__main__':
    nums = [int(x) for x in sys.stdin.readline().strip().split()]
    print(solution(nums))

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
Given a vector of ﬂoats representing the prices of various shopping goods and another vector of 
floats representing the percent discount of each of those goods, return the total price of the 
shopping trip after applying the discount to each item.
For example,
input:
1
50.0
1
100.0
output:
0.0
input:
1
50.0
1
10.0
output:
45.0
input:
2
20.0 20.0
2
100.0 50.0
output:
10.0
input:
2
20.0 20.0
2
20.0 0.0
output:
36.0
input:
3
10.0 20.0 30.0
3
5.0 10.0 95.0
output:
29.0
"""
if __name__ == '__main__':
    f = open('/dev/stdin', 'r')
    lines = f.readlines()
    num = int(lines[0])
    prices = lines[1].split()
    discount = lines[2].split()
    total = 0
    for i in range(num):
        if float(discount[i]) < 100:
            total += float(prices[i])*(1-float(discount[i])/100)
    print(total)

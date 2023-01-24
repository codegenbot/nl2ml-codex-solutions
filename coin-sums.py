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
Given a number of cents, ﬁnd the fewest number of US coins (pennies, nickles, dimes, quarters) needed to make that amount, and return the number of each type of coin as a separate output.
For example,
input:
1
output:
1000
input:
2
output:
2000
input:
3
output:
3000
input:
4
output:
4000
input:
5
output:
0100
"""
if __name__ == '__main__':
    while True:
        cents = int(input())
        if cents == 0:
            break
        else:
            count = 0
            count += cents // 25
            cents = cents % 25
            count += cents // 10
            cents = cents % 10
            count += cents // 5
            cents = cents % 5
            count += cents
            print(count)

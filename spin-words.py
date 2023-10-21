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
Given a string of one or more words (separated by spaces), reverse all of the words that are ﬁve or more letters long and return the resulting string.
For example,
input:

output:

input:
a
output:
a
input:
this is a test
output:
this is a test
input:
this is another test
output:
this is rehtona test
input:
hi
output:
hi
"""
def reverse(s):
    s = s.split(' ')
    for i in range(len(s)):
        if len(s[i]) >= 5:
            s[i] = s[i][::-1]
    return ' '.join(s)

if __name__ == '__main__':
    try:
        print(reverse(sys.argv[1]))
    except IndexError:
        print("Error: No input")

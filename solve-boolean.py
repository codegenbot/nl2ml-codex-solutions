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
Given a string representing a Boolean expression consisting of T, F, |, and &, evaluate it and return the resulting Boolean.
For example,
input:
t
output:
True
input:
f
output:
False
input:
f&f
output:
False
input:
f&t
output:
False
input:
t&f
output:
False
"""
if __name__ == '__main__':
    s = input()
    if s == 't':
        print(True)
    elif s == 'f':
        print(False)
    else:
        if '|' in s:
            s_list = s.split('|')
            for i in s_list:
                if i == 't':
                    print(True)
                    break
            else:
                print(False)
            else:
                pass
        else:
            s_list = s.split('&')
            for i in s_list:
                if i == 't':
                    continue
                else:
                    print(False)
                    break
            else:
                print(True)

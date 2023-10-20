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
Given a string, return the middle character as a string if it is odd length; return the two middle characters as a string if it is even length.
For example,
input:
Q
output:
Q
input:
 
output:
 
input:
$
output:
$
input:
E9
output:
E9
input:
)b
output:
)b
"""

def middle(string):
    if len(string) % 2 == 0:
        return string[len(string)//2-1:len(string)//2+1]
    else:
        return string[len(string)//2]

if __name__ == '__main__':
    string = input()
    print(middle(string))

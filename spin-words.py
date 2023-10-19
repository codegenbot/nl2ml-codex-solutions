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
Given a string of one or more words (separated by spaces), reverse all of the words that are five or more letters long and return the resulting string.
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
if __name__ == '__main__':
    def reverse_string(str):
        str_list = str.split()
        new_list=[]
        for i in range(len(str_list)):
            if len(str_list[i]) >= 5:
                str_list[i]=str_list[i][::-1]
            new_list.append(str_list[i])
        return ' '.join(new_list)
    print(reverse_string('this is a test'))
    print(reverse_string('this is another test'))

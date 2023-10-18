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
Given a string of words, reverse all of the words.
For example:
input: "This is an example!"
output: "sihT si na !elpmaxe"
"""
if __name__ == '__main__':
    s = input()
    p = re.compile("([a-zA-Z]+)-([a-zA-Z]+)")
    while True:
        m = p.search(s)
        if m:
            s = s[:m.start(1)] + m.group(1) + m.group(2).capitalize() + s[m.end(2):]
        else:
            break
    print(s)

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

input:
1
2
3
4
5
6
7
8
9
output:
1
2
3
4
5
6
7
8
9
0

input:
1
2
3
4
5
6
7
8
9
10
output:
1
2
3
4
5
6
7
8
9
10
0

"""

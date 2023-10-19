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
Given a string representing the individual bowls in a 10-frame round of 10 pin bowling, return the score of that round.
For example,
input:
--------------------
output:
0
input:
XXXXXXXXXXXX
output:
300
input:
5/5/5/5/5/5/5/5/5/5/5
output:
150
input:
7115XXX548/279-X53
output:
145
input:
532/4362X179-41447/5
output:
100
"""
def score(input):
    score = 0
    frame_index = 0
    frame_scores = []
    for i in range(len(input)):
        if input[i] == 'X':
            if i < len(input)-1 and input[i+1] == 'X':
                if i < len(input)-2 and input[i+2] == 'X':
                    score += 30
                else:
                    score += 20 + int(input[i+1]) + int(input[i+2])
            else:
                score += 10 + int(input[i+1]) + int(input[i+2])
        elif input[i] == '/':
            score += 10 + int(input[i+1])
        else:
            score += int(input[i])
        frame_scores.append(score)
    return frame_scores[-1]

if __name__ == '__main__':
    input = 'XXXXXXXXXXXX'
    print(score(input))

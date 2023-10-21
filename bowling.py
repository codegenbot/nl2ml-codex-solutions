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
def bowling_score(input):
    score = 0
    frame = 0
    frame_score = 0
    for i in range(len(input)):
        if input[i] == 'X':
            frame_score += 10
            if i < len(input) - 2:
                if input[i+1] == 'X':
                    frame_score += 10
                    if input[i+2] == 'X':
                        frame_score += 10
                    else:
                        frame_score += int(input[i+2])
                elif input[i+1] == '/':
                    frame_score += 10
                else:
                    frame_score += int(input[i+1])
                if i < len(input) - 3:
                    if input[i+2] == 'X':
                        frame_score += 10
                    elif input[i+2] == '/':
                        frame_score += 10
                    else:
                        frame_score += int(input[i+2])
        elif input[i] == '/':
            frame_score += 10
            if i < len(input) - 1:
                if input[i+1] == 'X':
                    frame_score += 10
                else:
                    frame_score += int(input[i+1])
        elif input[i] == '-':
            frame_score += 0
        else:
            frame_score += int(input[i])
        if frame < 9:
            if input[i] == 'X' or input[i] == '/':
                score += frame_score
                frame_score = 0
                frame += 1
            elif i % 2 == 1:
                score += frame_score
                frame_score = 0
                frame += 1
        else:
            score += frame_score
    return score

if __name__ == '__main__':

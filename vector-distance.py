n = int(input())
v1 = list(map(float, input().split()))
m = int(input())
v2 = list(map(float, input().split()))

from math import sqrt

dist = sum((a - b) ** 2 for a, b in zip(v1, v2)) ** 0.5

print("%.6f" % dist)
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

"""

if __name__ == '__main__':
  num = int(input().strip())
  array = [int(x) for x in input().split()]
  final = []
  for i in range(1, len(array)):
    if (abs(array[i] - array[i-1]) <= 1):
      final.extend([array[:i], array[i:]])
      break
  if final == []:
    final.extend([array, []])
  print(*final[0])
  print(*final[1])

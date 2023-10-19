"""
Given a vector of positive integers, return a vector of the leaders in that vector. A leader is deﬁned as a number that is greater than or equal to all the numbers tothe right of it. The rightmost element is always a leader.
For example,
input:
0

output:
0

input:
1
0
output:
1
0
input:
1
451
output:
1
451
input:
2
1000 0
output:
2
1000 0
input:
2
0 1000
output:
1
1000
"""
if __name__ == '__main__':
    n = int(input())
    a = [int(x) for x in input().split()]
    result = []
    if a:
        result.append(a[-1])
        max_int = a[-1]
        for i in range(len(a)-2,-1,-1):
            if a[i] >= max_int:
                max_int = a[i]
                result.append(max_int)
        for i in range(len(result)-1,-1,-1):
            print(result[i],end=' ')

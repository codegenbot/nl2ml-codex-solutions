```
def check(lst):
    lst.sort()
    result = []
    for i in range(len(lst) - 1):
        closest_pair = (abs(lst[i] - lst[i+1]), (lst[i], lst[i+1]))
        result.append(closest_pair)
    return min(result)[0]

arr = list(map(int, input().split()))
print(check(arr))
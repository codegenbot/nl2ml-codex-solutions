```
def leaders(a):
    max_right = a[-1]
    leaders = [max_right]
    for i in range(len(a) - 2, -1, -1):
        if a[i] >= max_right:
            leaders.insert(0, a[i])
            max_right = a[i]
    return leaders
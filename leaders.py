def leaders(arr):
    leader = []
    max_right = arr[-1]
    for i in range(len(arr)-1, -1, -1):
        if arr[i] >= max_right:
            leader.append(max_right)
            max_right = arr[i]
    return list(reversed(leader))
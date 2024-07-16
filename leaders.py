def leaders(arr):
    leader = [arr[-1]]
    max_right = arr[0]
    for i in range(len(arr) - 2, -1, -1):
        if arr[i] >= max_right:
            leader.append(arr[i])
            max_right = arr[i]
    return list(reversed(leader))
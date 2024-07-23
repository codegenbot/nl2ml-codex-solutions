def leaders(arr):
    leaders = [arr[-1]]
    for i in range(len(arr) - 1, 0, -1):
        if arr[i-1] < leaders[0]:
            leaders.insert(0, arr[i-1])
    return leaders
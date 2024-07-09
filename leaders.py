def leaders(arr):
    leaders = [arr[-1]]
    for i in range(len(arr) - 1, 0, -1):
        if arr[i] >= arr[i - 1]:
            leaders.insert(0, arr[i])
    return leaders
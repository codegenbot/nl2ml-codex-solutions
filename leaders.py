def leaders(arr):
    n = len(arr)
    leaders = [arr[n - 1]]

    for i in range(n - 2, -1, -1):
        if arr[i] >= max(arr[i + 1:n]):
            leaders.insert(0, arr[i])

    return leaders
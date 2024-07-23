def leaders(arr):
    n = len(arr)
    leaders = []
    max_right = arr[-1]

    for i in range(n-1, -1, -1):
        if arr[i] >= max_right:
            leaders.append(max_right)
            max_right = arr[i]

    return leaders
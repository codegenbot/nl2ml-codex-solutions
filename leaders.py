def leaders(arr):
    n = len(arr)
    leaders_list = [arr[n - 1]]

    for i in range(n-1, -1, -1):
        if arr[i] >= max(arr[i + 1:]):
            leaders_list.append(arr[i])

    return leaders_list
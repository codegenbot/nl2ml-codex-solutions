def leaders(arr):
    n = len(arr)
    leaders_list = [arr[n - 1]]

    for i in range(n - 2, -1, -1):
        if arr[i] >= arr[i + 1]:
            leaders_list.append(arr[i])

    return list(reversed(leaders_list))
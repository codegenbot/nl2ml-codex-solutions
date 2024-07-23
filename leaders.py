def leaders(arr):
    n = len(arr)
    leaders_list = []

    max_seen = arr[n - 1]
    leaders_list.append(max_seen)

    for i in range(n-2, -1, -1):
        if arr[i] >= max_seen:
            leaders_list.insert(0, arr[i])
            max_seen = arr[i]
        else:
            leaders_list.insert(0, max_seen)

    return leaders_list
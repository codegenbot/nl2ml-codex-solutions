def leaders(arr):
    n = len(arr)
    leaders_list = []
    max_right_now = arr[n - 1]

    for i in range(n - 1, -1, -1):
        if arr[i] >= max_right_now:
            leaders_list.append(arr[i])
            max_right_now = arr[i]
            
    return list(reversed(leaders_list))
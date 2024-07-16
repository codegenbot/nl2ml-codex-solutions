def leaders(arr):
    n = len(arr)
    leader_list = []
    
    for i in range(n-1, -1, -1):
        if i == n - 1 or arr[i] >= max(arr[i+1:]):
            leader_list.append(arr[i])
    
    return leader_list
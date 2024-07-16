def leaders(arr):
    n = len(arr)
    leaders_list = [arr[n-1]]
    
    max_seen = arr[n-1]
    
    for i in range(n-2, -1, -1):
        if arr[i] >= max_seen:
            leaders_list.insert(0, arr[i])
            max_seen = arr[i]
            
    return leaders_list
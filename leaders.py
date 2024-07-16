def leaders(arr):
    leaders = []
    
    for i in range(len(arr) - 1, -1, -1):
        if i == len(arr) - 1 or arr[i] >= max(arr[i+1:]):
            leaders.append(arr[i])
            
    return leaders[::-1]
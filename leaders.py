Here is the Python solution for the "leaders" problem:

def leaders(arr):
    n = len(arr)
    leader_list = [arr[n-1]]
    
    for i in range(n-2, -1, -1):
        if arr[i] >= arr[i+1]:
            leader_list.append(arr[i])
    
    return list(reversed(leader_list))
def find_leaders(arr):
    leaders = []
    max_right = float('-inf')
    
    for i in range(len(arr)-1, -1, -1):
        if arr[i] >= max_right:
            max_right = arr[i]
            leaders.append(max_right)
    
    return leaders[::-1]
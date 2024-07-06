def smallest_change(arr):
    n = len(arr)
    left, right = 0, 0
    changes = 0
    
    while left < n // 2:
        if arr[left] != arr[n - 1 - left]:
            changes += 1
            right -= 1
        left += 1
        right += 1
    
    return changes
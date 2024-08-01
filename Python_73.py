```
def smallest_change(arr):
    n = len(arr)
    left, right = 0, n - 1
    changes = 0
    
    while left < right:
        if arr[left] != arr[right]:
            for i in range(left + 1, right):
                if arr[i] == arr[right]:
                    arr[i], arr[left] = arr[left], arr[i]
                    left += 1
                    break
            changes += 1
        else:
            left += 1
        right -= 1
    
    return changes
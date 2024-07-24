```
def smallest_change(arr):
    n = len(arr)
    left, right = 0, n - 1
    changes = 0
    
    while left < right:
        if arr[left] != arr[right]:
            for i in range(left + 1, right):
                if arr[i] == arr[right]:
                    arr[left], arr[i] = arr[i], arr[left]
                    changes += 1
                    break
            else:
                changes += right - left
            break
        left += 1
        right -= 1
    
    return changes

arr = [1, 2, 3, 4, 5]
print(smallest_change(arr))
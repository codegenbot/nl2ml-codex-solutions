def smallest_change(arr):
    n = len(arr)
    rev_arr = arr[::-1]
    changes = 0
    for i in range(n):
        if arr[i] != rev_arr[i]:
            changes += 1
    return changes
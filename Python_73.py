def smallest_change(arr):
    n = len(arr)
    arr = [str(x) for x in arr]
    arr = "".join(arr)
    rev_arr = arr[::-1]
    diff_count = 0
    for i in range(n):
        if arr[i] != rev_arr[i]:
            diff_count += 1
    return diff_count
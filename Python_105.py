def by_length(arr):
    arr = [str(i) for i in arr]
    sorted_arr = sorted(arr)
    return [''.join(sorted(i)) for i in sorted_arr]
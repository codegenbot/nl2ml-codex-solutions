def basement(arr):
    total = 0
    i = 0
    while True:
        total += arr[i]
        if total < 0:
            return i+1
        i += 1
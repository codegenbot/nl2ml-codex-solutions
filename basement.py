def basement(arr):
    total = 0
    index = 0
    while True:
        total += arr[index]
        if total < 0:
            return index + 1
        index += 1

print(basement([-1,-2,1,2,3]))
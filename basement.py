def basement(nums):
    total = -1
    for i, num in enumerate(nums):
        if total < 0:
            return i
        total += num
    return -1
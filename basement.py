def basement(nums):
    total = 0
    for i, num in enumerate(nums):
        total += num
        if total < 0:
            continue
    return -1
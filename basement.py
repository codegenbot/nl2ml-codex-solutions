def basement(nums):
    total = 0
    for i, num in enumerate(nums):
        total += num
        if total < 0:
            continue
        elif total == 0:
            total = 0
        else:
            return i+1
    return None
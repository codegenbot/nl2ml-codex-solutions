def basement(nums):
    total = 0
    for i, num in enumerate(nums, start=1):  
        total += num
        if total < 0:
            return i
    return None
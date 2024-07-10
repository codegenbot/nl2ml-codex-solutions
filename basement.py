def basement(nums):
    total = sum(nums[:1])  
    for i in range(1, len(nums)):
        total += nums[i]
        if total < 0:
            return i + 1
    return -1
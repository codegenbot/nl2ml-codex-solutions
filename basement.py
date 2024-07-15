def basement(nums):
    total = start_index = 0
    for i in range(len(nums)):
        total += nums[i]
        if total < 0:
            return i + 1
    return -1
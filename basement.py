def basement(nums):
    total = start_index = 0
    for i in range(len(nums)):
        total += nums[i]
        if total < 0:
            return i + 1
        elif total > 0 and start_index == 0:
            start_index = i + 1
    return -1
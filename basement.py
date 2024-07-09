def basement(nums):
    total_sum = 0
    basement_index = 0
    for i in range(len(nums)):
        total_sum += nums[i]
        if total_sum < 0:
            return i + 1
    return -1
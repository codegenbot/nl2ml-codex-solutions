def basement(nums):
    total_sum = 0
    first_negative_index = -1
    for i, num in enumerate(nums):
        total_sum += num
        if total_sum < 0:
            return i
    return first_negative_index
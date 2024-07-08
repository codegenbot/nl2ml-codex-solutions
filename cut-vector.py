def cut_vector(nums):
    min_diff = float("inf")
    split_index = 0
    for i in range(1, len(nums)):
        left_sum = sum(sorted(nums[:i+1]))
        right_sum = sum(sorted(nums[i:]))
        if abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            split_index = i
    return sorted(nums[:split_index]), sorted(nums[split_index:])
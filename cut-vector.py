```
def cut_vector(nums):
    if len(nums) <= 1:
        return nums, []
    min_diff = float("inf")
    split_index = 0
    for i in range(1, len(nums)):
        left_sum = sum(nums[:i+1])
        right_sum = sum(nums[i:])
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            split_index = i
    return nums[:split_index], nums[split_index:]
```
def basement(nums):
    total_sum = 0
    for i in range(len(nums) -1, -1, -1):
        total_sum += nums[i]
        if total_sum < 0:
            return i + 1
    return -1
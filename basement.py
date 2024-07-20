```
def find_first_negative_index(nums):
    total_sum = 0
    for i, num in enumerate(nums):
        total_sum += num
        if total_sum < 0:
            return i
    return -1
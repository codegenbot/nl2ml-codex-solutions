```
def basement(nums):
    total = start_index = 0
    for i in range(len(nums)):
        if total > 0:  
            total = start_index = 0
        elif total < 0:  
            return i + 1
        total += nums[i]
    return -1
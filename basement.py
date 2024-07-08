```
def basement(nums):
    for i in range(len(nums)):
        current_sum = sum(nums[:i+1])
        if current_sum < 0:
            return i + 1
    return -1
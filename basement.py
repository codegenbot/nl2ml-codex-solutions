def basement(nums):
    total = 0
    for i in range(len(nums)):
        total += nums[i]
        if total < 0: return i + 1
        elif total > 0: 
            total = 0   # Start calculating sum again from next index
    return -1
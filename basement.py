def basement(nums):
    for i in range(len(nums)):
        total = sum(nums[:i + 1])
        if total < 0:
            return i
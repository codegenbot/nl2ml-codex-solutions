```
def basement(nums):
    for i, _ in enumerate(nums):
        if (sum(nums[:i+1])) < 0: 
            return i + 1
    return None
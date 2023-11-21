def basement(nums):
    total_sum = 0
    for i in range(len(nums)):
        total_sum += nums[i]
        if total_sum >= 0:
            return i
    return -1

nums = list(map(int, input().split()))

result = basement(nums)
print(result)
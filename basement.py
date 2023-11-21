def basement(nums):
    sum = 0
    for i in range(len(nums)):
        sum += nums[i]
        if sum < 0:
            return i
    return -1


nums = list(map(int, input().split()))
result = basement(nums)
print(result)
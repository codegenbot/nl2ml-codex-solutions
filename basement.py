def basement(nums):
    sum = 0
    for i in range(len(nums)):
        sum += nums[i]
        if sum < 0:
            return i
    return -1

n = int(input())
nums = []
for _ in range(n):
    nums.append(int(input()))

print(basement(nums))
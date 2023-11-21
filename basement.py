def find_negative_index(nums):
    total_sum = 0
    for i in range(len(nums)):
        total_sum += nums[i]
        if total_sum < 0:
            return i
    return -1


# Read input from user
n = int(input())
nums = []
for _ in range(n):
    nums.append(int(input()))

# Call the function and print the result
result = find_negative_index(nums)
print(result)